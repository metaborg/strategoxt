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
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_ConstType_1;
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
Symbol sym_Prim_2;
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
Symbol sym_Runtime_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Cong_2;
Symbol sym_InfixApp_3;
Symbol sym_MA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
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
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
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
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
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
  sym_Runtime_1 = ATmakeSymbol("Runtime", 1, ATfalse);
  ATprotectSymbol(sym_Runtime_1);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
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
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_l_38;
ATerm term_q_37;
ATerm term_m_37;
ATerm term_g_37;
ATerm term_t_35;
ATerm term_s_35;
ATerm term_l_35;
ATerm term_r_34;
ATerm term_q_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_x_33;
ATerm term_w_33;
ATerm term_g_32;
ATerm term_v_31;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_w_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_d_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_y_28;
ATerm term_s_27;
ATerm term_a_27;
ATerm term_t_26;
ATerm term_r_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_v_24;
ATerm term_t_24;
ATerm term_f_24;
ATerm term_y_22;
ATerm term_e_13;
ATerm term_b_13;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_s_9;
ATerm term_m_8;
void init_constant_terms (void)
{
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym_Op_2, term_n_12, (ATerm) ATempty);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym_ConstType_1, term_o_12);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("TopLevel", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(sym_Defined_1, term_t_24);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(sym_Defined_1, term_n_26);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("_id", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_29);
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(sym__3, term_w_33, term_x_33, term_m_8);
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm TestSavesCurrentTerm_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm WhereSavesCurrentTerm_0_0 (ATerm);
ATerm FuseScope_0_0 (ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm w_0 (ATerm);
ATerm x_0 (ATerm);
ATerm y_0 (ATerm);
ATerm z_0 (ATerm);
ATerm BuildMatchFusion_0_0 (ATerm);
ATerm MisMatch_0_0 (ATerm);
ATerm k_11 (ATerm g_9, ATerm r_9, ATerm y_9, ATerm);
ATerm BuildMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm e_115 (ATerm), ATerm);
ATerm LetHoist_0_0 (ATerm);
ATerm Idempotency_0_0 (ATerm);
ATerm AssociateR_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm g_1 (ATerm);
ATerm h_1 (ATerm);
ATerm j_1 (ATerm);
ATerm m_1 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm o_1 (ATerm);
ATerm ElimFail_0_0 (ATerm);
ATerm ElimId_0_0 (ATerm);
ATerm Simplify_0_0 (ATerm);
ATerm repeat_1_0 (ATerm w_130 (ATerm), ATerm);
ATerm downup_1_0 (ATerm c_114 (ATerm), ATerm);
ATerm TopLevel_0_0 (ATerm);
ATerm filter_1_0 (ATerm q_126 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm m_103 (ATerm), ATerm n_103 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm e_105 (ATerm), ATerm f_105 (ATerm), ATerm g_105 (ATerm), ATerm);
ATerm Let_2_0 (ATerm p_102 (ATerm), ATerm q_102 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm f_113 (ATerm), ATerm g_113 (ATerm), ATerm h_113 (ATerm), ATerm);
ATerm v_1 (ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm foldr_3_0 (ATerm d_125 (ATerm), ATerm e_125 (ATerm), ATerm f_125 (ATerm), ATerm);
ATerm diff_1_0 (ATerm k_122 (ATerm), ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm while_not_2_0 (ATerm l_131 (ATerm), ATerm m_131 (ATerm), ATerm);
ATerm for_3_0 (ATerm o_131 (ATerm), ATerm p_131 (ATerm), ATerm q_131 (ATerm), ATerm);
ATerm b_2 (ATerm);
ATerm f_2 (ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm v_2 (ATerm);
ATerm r_2 (ATerm);
ATerm u_2 (ATerm);
ATerm free_vars_3_0 (ATerm f_129 (ATerm), ATerm g_129 (ATerm), ATerm h_129 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm DynamicRules_1_0 (ATerm w_101 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm n_101 (ATerm), ATerm o_101 (ATerm), ATerm p_101 (ATerm), ATerm q_101 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm h_105 (ATerm), ATerm i_105 (ATerm), ATerm j_105 (ATerm), ATerm k_105 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm z_102 (ATerm), ATerm a_103 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm b_113 (ATerm), ATerm c_113 (ATerm), ATerm d_113 (ATerm), ATerm);
ATerm y_2 (ATerm);
ATerm b_3 (ATerm);
ATerm d_3 (ATerm);
ATerm z_2 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm e_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm w_3 (ATerm);
ATerm y_3 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm h_3 (ATerm);
ATerm v_3 (ATerm);
ATerm SuperCombinator_0_0 (ATerm);
ATerm partition_1_0 (ATerm y_126 (ATerm), ATerm);
ATerm h_4 (ATerm);
ATerm m_4 (ATerm);
ATerm g_4 (ATerm);
ATerm l_4 (ATerm);
ATerm LiftFromLet_0_0 (ATerm);
ATerm union_1_0 (ATerm p_122 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm m_118 (ATerm), ATerm n_118 (ATerm), ATerm o_118 (ATerm), ATerm p_118 (ATerm), ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm t_4 (ATerm);
ATerm v_4 (ATerm);
ATerm x_4 (ATerm);
ATerm u_4 (ATerm);
ATerm CollectSplit_2_0 (ATerm m_123 (ATerm), ATerm n_123 (ATerm), ATerm);
ATerm collect_split_1_0 (ATerm j_124 (ATerm), ATerm);
ATerm lift_sdefs_0_0 (ATerm);
ATerm assert_1_0 (ATerm m_126 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm h_98 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm m_98 (ATerm), ATerm);
ATerm b_5 (ATerm);
ATerm a_5 (ATerm);
ATerm declare_standard_strategies_0_0 (ATerm);
ATerm f_5 (ATerm);
ATerm j_5 (ATerm);
ATerm i_5 (ATerm);
ATerm lift_definitions_0_0 (ATerm);
ATerm _2_0 (ATerm o_93 (ATerm), ATerm p_93 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm t_135 (ATerm), ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm u_5 (ATerm);
ATerm n_5 (ATerm);
ATerm p_5 (ATerm);
ATerm t_5 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm v_138 (ATerm), ATerm);
ATerm d_36 (ATerm x_35, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm v_5 (ATerm);
ATerm x_5 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm m_120 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm s_120 (ATerm), ATerm);
ATerm c_6 (ATerm);
ATerm d_6 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm f_6 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm e_137 (ATerm), ATerm);
ATerm i_6 (ATerm);
ATerm j_6 (ATerm);
ATerm k_6 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm l_6 (ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm t_6 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm u_6 (ATerm);
ATerm v_6 (ATerm);
ATerm z_6 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm a_7 (ATerm);
ATerm b_7 (ATerm);
ATerm c_7 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm b_125 (ATerm), ATerm c_125 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm d_7 (ATerm);
ATerm g_7 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm d_137 (ATerm), ATerm);
ATerm h_7 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm t_139 (ATerm), ATerm);
ATerm map_1_0 (ATerm b_120 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm v_110 (ATerm), ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm w_110 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm p_7 (ATerm);
ATerm q_7 (ATerm);
ATerm r_7 (ATerm);
ATerm s_7 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm d_98 (ATerm), ATerm e_98 (ATerm), ATerm);
ATerm t_7 (ATerm);
ATerm parse_options_p__1_0 (ATerm w_141 (ATerm), ATerm);
ATerm w_7 (ATerm);
ATerm x_7 (ATerm);
ATerm y_7 (ATerm);
ATerm z_7 (ATerm);
ATerm parse_options_1_0 (ATerm v_141 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm v_139 (ATerm), ATerm w_139 (ATerm), ATerm x_139 (ATerm), ATerm y_139 (ATerm), ATerm);
ATerm g_8 (ATerm);
ATerm h_8 (ATerm);
ATerm i_8 (ATerm);
ATerm j_8 (ATerm);
ATerm e_8 (ATerm);
ATerm iowrap_3_0 (ATerm e_139 (ATerm), ATerm f_139 (ATerm), ATerm g_139 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm h_0 = NULL,j_0 = NULL;
  h_0 = t;
  t = term_m_8;
  t = whoami_0_0(t);
  j_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), j_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = h_0;
  return(t);
}
ATerm TestSavesCurrentTerm_0_0 (ATerm t)
{
  ATerm m_0 = NULL,o_0 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      m_0 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = new_0_0(t);
  o_0 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, o_0), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, o_0)), (ATerm) ATmakeAppl(sym_Seq_2, m_0, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, o_0)))));
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm WhereSavesCurrentTerm_0_0 (ATerm t)
{
  ATerm p_0 = NULL,q_0 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      p_0 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = new_0_0(t);
  q_0 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, q_0), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, q_0)), (ATerm) ATmakeAppl(sym_Seq_2, p_0, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, q_0)))));
  return(t);
}
ATerm FuseScope_0_0 (ATerm t)
{
  ATerm s_0 = NULL,t_0 = NULL,u_0 = NULL,v_0 = NULL;
  if(match_cons(t, sym_Scope_2))
    {
      s_0 = ATgetArgument(t, 0);
      {
        ATerm o_8 = ATgetArgument(t, 1);
        if(match_cons(o_8, sym_Scope_2))
          {
            t_0 = ATgetArgument(o_8, 0);
            u_0 = ATgetArgument(o_8, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_0, t_0);
  {
    ATerm p_8 = t;
    int q_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_8 = ATgetArgument(t, 0);
            ATerm v_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_0;
        {
          ATerm r_0 (ATerm t)
          {
            t = t_0;
            return(t);
          }
          t = at_end_1_0(r_0, t);
        }
        ;
        LocalPopChoice(q_8);
      }
    else
      {
        t = p_8;
        {
          ATerm b_1 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, s_0, t_0));
          if(match_cons(t, sym__2))
            {
              ATerm w_8 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) w_8) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              b_1 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_1;
          t = concat_0_0(t);
        }
      }
    v_0 = t;
    t = (ATerm) ATmakeAppl(sym_Scope_2, v_0, u_0);
  }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm i_1 = NULL,k_1 = NULL,n_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL,t_1 = NULL;
  if(match_cons(t, sym__2))
    {
      n_1 = ATgetArgument(t, 0);
      q_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_1;
  if(match_cons(t, sym_Build_1))
    {
      ATerm z_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_1;
  if(match_cons(t, sym_Where_1))
    {
      r_1 = ATgetArgument(t, 0);
      t = r_1;
      if(match_cons(t, sym_Prim_2))
        {
          i_1 = ATgetArgument(t, 0);
          k_1 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(t, sym_Prim_2))
        {
          r_1 = ATgetArgument(t, 0);
          s_1 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_Prim_2, r_1, s_1);
        }
      else
        {
          if(match_cons(t, sym_PrimT_3))
            {
              r_1 = ATgetArgument(t, 0);
              s_1 = ATgetArgument(t, 1);
              t_1 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
        }
    }
  return(t);
}
ATerm w_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_9 = ATgetArgument(t, 0);
      if(((ATgetType(a_9) != AT_LIST) || !(ATisEmpty(a_9))))
        _fail(t);
      {
        ATerm b_9 = ATgetArgument(t, 1);
        if(((ATgetType(b_9) != AT_LIST) || !(ATisEmpty(b_9))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm x_0 (ATerm t)
{
  ATerm w_2 = NULL,x_2 = NULL,c_3 = NULL,g_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_9 = ATgetArgument(t, 0);
      if(((ATgetType(c_9) == AT_LIST) && !(ATisEmpty(c_9))))
        {
          w_2 = ATgetFirst((ATermList) c_9);
          c_3 = (ATerm) ATgetNext((ATermList) c_9);
        }
      else
        _fail(t);
      {
        ATerm d_9 = ATgetArgument(t, 1);
        if(((ATgetType(d_9) == AT_LIST) && !(ATisEmpty(d_9))))
          {
            x_2 = ATgetFirst((ATermList) d_9);
            g_3 = (ATerm) ATgetNext((ATermList) d_9);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_2, x_2), (ATerm) ATmakeAppl(sym__2, c_3, g_3));
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm j_3 = NULL,k_3 = NULL;
  if(match_cons(t, sym__2))
    {
      j_3 = ATgetArgument(t, 0);
      k_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_3), j_3);
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm m_3 = NULL,n_3 = NULL;
  if(match_cons(t, sym__2))
    {
      m_3 = ATgetArgument(t, 0);
      n_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, m_3), (ATerm) ATmakeAppl(sym_Match_1, n_3));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm g_2 = NULL,h_2 = NULL,m_2 = NULL,q_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_9 = ATgetArgument(t, 0);
      if(match_cons(e_9, sym_Build_1))
        {
          ATerm h_9 = ATgetArgument(e_9, 0);
          if(match_cons(h_9, sym_Op_2))
            {
              h_2 = ATgetArgument(h_9, 0);
              g_2 = ATgetArgument(h_9, 1);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm f_9 = ATgetArgument(t, 1);
        if(match_cons(f_9, sym_Match_1))
          {
            ATerm i_9 = ATgetArgument(f_9, 0);
            if(match_cons(i_9, sym_Op_2))
              {
                if((h_2 != ATgetArgument(i_9, 0)))
                  {
                    _fail(ATgetArgument(i_9, 0));
                  }
                m_2 = ATgetArgument(i_9, 1);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_2, m_2);
  t = genzip_4_0(w_0, x_0, y_0, z_0, t);
  q_2 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, q_2), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, h_2, g_2)));
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm o_3 = NULL,q_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_9 = ATgetArgument(t, 0);
      if(match_cons(j_9, sym_Build_1))
        {
          ATerm l_9 = ATgetArgument(j_9, 0);
          if(match_cons(l_9, sym_Op_2))
            {
              o_3 = ATgetArgument(l_9, 0);
              {
                ATerm m_9 = ATgetArgument(l_9, 1);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm k_9 = ATgetArgument(t, 1);
        if(match_cons(k_9, sym_Match_1))
          {
            ATerm n_9 = ATgetArgument(k_9, 0);
            if(match_cons(n_9, sym_Op_2))
              {
                q_3 = ATgetArgument(n_9, 0);
                {
                  ATerm o_9 = ATgetArgument(n_9, 1);
                }
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_3, q_3);
  {
    ATerm q_9 = t;
    if((PushChoice() == 0))
      {
        ATerm r_3 = NULL;
        if(match_cons(t, sym__2))
          {
            r_3 = ATgetArgument(t, 0);
            if((r_3 != ATgetArgument(t, 1)))
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
        t = q_9;
      }
    t = term_s_9;
  }
  return(t);
}
ATerm k_11 (ATerm g_9, ATerm r_9, ATerm y_9, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, g_9, r_9);
  {
    ATerm t_9 = t;
    int v_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = MisMatch_0_0(t);
        ;
        LocalPopChoice(v_9);
      }
    else
      {
        t = t_9;
        {
          ATerm w_9 = t;
          int x_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = BuildMatchFusion_0_0(t);
              ;
              LocalPopChoice(x_9);
            }
          else
            {
              t = w_9;
              {
                ATerm a_10 = t;
                int b_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm t_10 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        ATerm c_10 = ATgetArgument(t, 0);
                        ATerm e_10 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = g_9;
                    if(match_cons(t, sym_Build_1))
                      {
                        ATerm f_10 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = r_9;
                    if(match_cons(t, sym_Build_1))
                      {
                        t_10 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    ;
                    LocalPopChoice(b_10);
                  }
                else
                  {
                    t = a_10;
                    {
                      ATerm g_10 = t;
                      int h_10 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = BuildPrim_0_0(t);
                          ;
                          LocalPopChoice(h_10);
                        }
                      else
                        {
                          t = g_10;
                          {
                            ATerm x_10 = NULL,z_10 = NULL;
                            if(match_cons(t, sym__2))
                              {
                                ATerm i_10 = ATgetArgument(t, 0);
                                ATerm j_10 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = g_9;
                            if(match_cons(t, sym_Match_1))
                              {
                                x_10 = ATgetArgument(t, 0);
                                t = r_9;
                                if(match_cons(t, sym_Match_1))
                                  {
                                    z_10 = ATgetArgument(t, 0);
                                    t = z_10;
                                    if((x_10 != t))
                                      {
                                        _fail(t);
                                      }
                                    t = (ATerm) ATmakeAppl(sym_Match_1, x_10);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        z_10 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = z_10;
                                    if((x_10 != t))
                                      {
                                        _fail(t);
                                      }
                                    t = (ATerm) ATmakeAppl(sym_Match_1, x_10);
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Build_1))
                                  {
                                    x_10 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = r_9;
                                if(match_cons(t, sym_Match_1))
                                  {
                                    z_10 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = z_10;
                                if((x_10 != t))
                                  {
                                    _fail(t);
                                  }
                                t = (ATerm) ATmakeAppl(sym_Build_1, x_10);
                              }
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
ATerm BuildMatch_0_0 (ATerm t)
{
  ATerm e_11 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL,i_11 = NULL;
  g_11 = t;
  if(match_cons(t, sym_Seq_2))
    {
      h_11 = ATgetArgument(t, 0);
      i_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11;
  if(match_cons(t, sym_Seq_2))
    {
      e_11 = ATgetArgument(t, 0);
      f_11 = ATgetArgument(t, 1);
      {
        ATerm k_10 = t;
        int l_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_1 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, h_11, e_11);
            {
              ATerm m_10 = t;
              int n_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = MisMatch_0_0(t);
                  ;
                  LocalPopChoice(n_10);
                }
              else
                {
                  t = m_10;
                  {
                    ATerm o_10 = t;
                    int p_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = BuildMatchFusion_0_0(t);
                        ;
                        LocalPopChoice(p_10);
                      }
                    else
                      {
                        t = o_10;
                        {
                          ATerm q_10 = t;
                          int r_10 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm c_2 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  ATerm s_10 = ATgetArgument(t, 0);
                                  ATerm u_10 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = h_11;
                              if(match_cons(t, sym_Build_1))
                                {
                                  ATerm v_10 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = e_11;
                              if(match_cons(t, sym_Build_1))
                                {
                                  c_2 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              ;
                              LocalPopChoice(r_10);
                            }
                          else
                            {
                              t = q_10;
                              {
                                ATerm w_10 = t;
                                int y_10 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildPrim_0_0(t);
                                    ;
                                    LocalPopChoice(y_10);
                                  }
                                else
                                  {
                                    t = w_10;
                                    {
                                      ATerm k_2 = NULL,n_2 = NULL;
                                      if(match_cons(t, sym__2))
                                        {
                                          ATerm a_11 = ATgetArgument(t, 0);
                                          ATerm b_11 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = h_11;
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          k_2 = ATgetArgument(t, 0);
                                          t = e_11;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              n_2 = ATgetArgument(t, 0);
                                              t = n_2;
                                              if((k_2 != t))
                                                {
                                                  _fail(t);
                                                }
                                              t = (ATerm) ATmakeAppl(sym_Match_1, k_2);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Build_1))
                                                {
                                                  n_2 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = n_2;
                                              if((k_2 != t))
                                                {
                                                  _fail(t);
                                                }
                                              t = (ATerm) ATmakeAppl(sym_Match_1, k_2);
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_Build_1))
                                            {
                                              k_2 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = e_11;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              n_2 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = n_2;
                                          if((k_2 != t))
                                            {
                                              _fail(t);
                                            }
                                          t = (ATerm) ATmakeAppl(sym_Build_1, k_2);
                                        }
                                    }
                                  }
                              }
                            }
                        }
                      }
                  }
                }
              l_1 = t;
              t = (ATerm) ATmakeAppl(sym_Seq_2, l_1, f_11);
            }
            ;
            LocalPopChoice(l_10);
          }
        else
          {
            t = k_10;
            t = k_11(h_11, i_11, g_11, t);
          }
      }
    }
  else
    {
      t = k_11(h_11, i_11, g_11, t);
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm e_115 (ATerm), ATerm t)
{
  ATerm l_11 (ATerm t)
  {
    ATerm c_11 = t;
    int d_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_115(t);
        ;
        LocalPopChoice(d_11);
      }
    else
      {
        t = c_11;
        t = SRTS_one(l_11, t);
      }
    return(t);
  }
  t = l_11(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm m_11 = NULL,n_11 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      ATerm j_11 = ATgetArgument(t, 0);
      if(((ATgetType(j_11) == AT_LIST) && !(ATisEmpty(j_11))))
        {
          ATerm p_11 = ATgetFirst((ATermList) j_11);
          if(match_cons(p_11, sym_SDefT_4))
            {
              n_11 = ATgetArgument(p_11, 0);
              {
                ATerm r_11 = ATgetArgument(p_11, 1);
                if(((ATgetType(r_11) != AT_LIST) || !(ATisEmpty(r_11))))
                  _fail(t);
              }
              {
                ATerm t_11 = ATgetArgument(p_11, 2);
                if(((ATgetType(t_11) != AT_LIST) || !(ATisEmpty(t_11))))
                  _fail(t);
              }
              m_11 = ATgetArgument(p_11, 3);
            }
          else
            _fail(t);
          {
            ATerm q_11 = (ATerm) ATgetNext((ATermList) j_11);
            if(((ATgetType(q_11) != AT_LIST) || !(ATisEmpty(q_11))))
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm o_11 = ATgetArgument(t, 1);
        if(match_cons(o_11, sym_CallT_3))
          {
            ATerm u_11 = ATgetArgument(o_11, 0);
            if(match_cons(u_11, sym_SVar_1))
              {
                if((n_11 != ATgetArgument(u_11, 0)))
                  {
                    _fail(ATgetArgument(u_11, 0));
                  }
              }
            else
              _fail(t);
            {
              ATerm v_11 = ATgetArgument(o_11, 1);
              if(((ATgetType(v_11) != AT_LIST) || !(ATisEmpty(v_11))))
                _fail(t);
            }
            {
              ATerm c_12 = ATgetArgument(o_11, 2);
              if(((ATgetType(c_12) != AT_LIST) || !(ATisEmpty(c_12))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = m_11;
  {
    ATerm f_12 = t;
    if((PushChoice() == 0))
      {
        ATerm a_1 (ATerm t)
        {
          if(match_cons(t, sym_CallT_3))
            {
              ATerm g_12 = ATgetArgument(t, 0);
              if(match_cons(g_12, sym_SVar_1))
                {
                  if((n_11 != ATgetArgument(g_12, 0)))
                    {
                      _fail(ATgetArgument(g_12, 0));
                    }
                }
              else
                _fail(t);
              {
                ATerm h_12 = ATgetArgument(t, 1);
                if(((ATgetType(h_12) != AT_LIST) || !(ATisEmpty(h_12))))
                  _fail(t);
              }
              {
                ATerm i_12 = ATgetArgument(t, 2);
                if(((ATgetType(i_12) != AT_LIST) || !(ATisEmpty(i_12))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(a_1, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_12;
      }
    t = m_11;
  }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL,d_12 = NULL,e_12 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      d_12 = ATgetArgument(t, 0);
      t = d_12;
      if(match_cons(t, sym_Seq_2))
        {
          b_12 = ATgetArgument(t, 0);
          x_11 = ATgetArgument(t, 1);
          t = b_12;
          if(match_cons(t, sym_Where_1))
            {
              w_11 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = x_11;
          if(match_cons(t, sym_Seq_2))
            {
              y_11 = ATgetArgument(t, 0);
              a_12 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = y_11;
          if(match_cons(t, sym_Build_1))
            {
              z_11 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, w_11, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, z_11), a_12)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              b_12 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          d_12 = ATgetArgument(t, 0);
          t = d_12;
          if(match_cons(t, sym_Test_1))
            {
              b_12 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              d_12 = ATgetArgument(t, 0);
              t = d_12;
              if(match_cons(t, sym_Not_1))
                {
                  b_12 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, b_12);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  d_12 = ATgetArgument(t, 0);
                  e_12 = ATgetArgument(t, 1);
                  t = e_12;
                  if((d_12 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      d_12 = ATgetArgument(t, 0);
                      e_12 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = e_12;
                  if((d_12 != t))
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
  ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      s_12 = ATgetArgument(t, 0);
      v_12 = ATgetArgument(t, 1);
      t = s_12;
      if(match_cons(t, sym_LChoice_2))
        {
          t_12 = ATgetArgument(t, 0);
          u_12 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, t_12, (ATerm) ATmakeAppl(sym_LChoice_2, u_12, v_12));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          s_12 = ATgetArgument(t, 0);
          v_12 = ATgetArgument(t, 1);
          t = s_12;
          if(match_cons(t, sym_Seq_2))
            {
              t_12 = ATgetArgument(t, 0);
              u_12 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, t_12, (ATerm) ATmakeAppl(sym_Seq_2, u_12, v_12));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              s_12 = ATgetArgument(t, 0);
              v_12 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = s_12;
          if(match_cons(t, sym_Choice_2))
            {
              t_12 = ATgetArgument(t, 0);
              u_12 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, t_12, (ATerm) ATmakeAppl(sym_Choice_2, u_12, v_12));
        }
    }
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm j_12 = t;
  int k_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(n_0, _id, t);
      {
        ATerm c_1 (ATerm t)
        {
          ATerm l_12 = t;
          int m_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(n_0, t);
              ;
              LocalPopChoice(m_12);
            }
          else
            {
              t = l_12;
            }
          return(t);
        }
        t = Cons_2_0(_id, c_1, t);
      }
      ;
      LocalPopChoice(k_12);
    }
  else
    {
      t = j_12;
      {
        ATerm d_1 (ATerm t)
        {
          t = map1_1_0(n_0, t);
          return(t);
        }
        t = Cons_2_0(_id, d_1, t);
      }
    }
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm h_14 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      h_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, h_14, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_p_12), term_p_12));
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm r_12 = t;
  int w_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_14 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, j_14, term_p_12);
      ;
      LocalPopChoice(w_12);
    }
  else
    {
      t = r_12;
    }
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm r_14 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      r_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, r_14, term_p_12);
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm x_12 = t;
  int y_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_14 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, t_14, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_p_12), term_p_12));
      ;
      LocalPopChoice(y_12);
    }
  else
    {
      t = x_12;
    }
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm b_15 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      b_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, b_15, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_p_12), term_p_12));
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm z_12 = t;
  int a_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_15 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, d_15, term_p_12);
      ;
      LocalPopChoice(a_13);
    }
  else
    {
      t = z_12;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,r_13 = NULL,s_13 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      r_13 = ATgetArgument(t, 0);
      s_13 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, r_13, s_13);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          r_13 = ATgetArgument(t, 0);
          t = r_13;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              m_13 = ATgetFirst((ATermList) t);
              n_13 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, m_13, (ATerm) ATmakeAppl(sym_LChoices_1, n_13));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_s_9;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              r_13 = ATgetArgument(t, 0);
              t = r_13;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  m_13 = ATgetFirst((ATermList) t);
                  n_13 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, m_13, (ATerm) ATmakeAppl(sym_Choices_1, n_13));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_s_9;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  r_13 = ATgetArgument(t, 0);
                  t = r_13;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      m_13 = ATgetFirst((ATermList) t);
                      n_13 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_13, (ATerm) ATmakeAppl(sym_Seqs_1, n_13));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_b_13;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      r_13 = ATgetArgument(t, 0);
                      s_13 = ATgetArgument(t, 1);
                      p_13 = ATgetArgument(t, 2);
                      o_13 = ATgetArgument(t, 3);
                      {
                        ATerm f_14 = NULL,g_14 = NULL;
                        t = s_13;
                        t = map1_1_0(e_1, t);
                        f_14 = t;
                        t = p_13;
                        t = map1_1_0(f_1, t);
                        g_14 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, r_13, f_14, g_14, o_13);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          r_13 = ATgetArgument(t, 0);
                          s_13 = ATgetArgument(t, 1);
                          p_13 = ATgetArgument(t, 2);
                          o_13 = ATgetArgument(t, 3);
                          {
                            ATerm c_13 = t;
                            int d_13 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm p_14 = NULL,q_14 = NULL;
                                t = p_13;
                                t = map1_1_0(g_1, t);
                                p_14 = t;
                                t = s_13;
                                t = map_1_0(h_1, t);
                                q_14 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, r_13, q_14, p_14, o_13);
                                ;
                                LocalPopChoice(d_13);
                              }
                            else
                              {
                                t = c_13;
                                {
                                  ATerm z_14 = NULL,a_15 = NULL;
                                  t = s_13;
                                  t = map1_1_0(j_1, t);
                                  z_14 = t;
                                  t = p_13;
                                  t = map_1_0(m_1, t);
                                  a_15 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, r_13, z_14, a_15, o_13);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              r_13 = ATgetArgument(t, 0);
                              s_13 = ATgetArgument(t, 1);
                              p_13 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, s_13, (ATerm) ATmakeAppl(sym_Op_2, term_e_13, (ATerm) ATinsert(ATinsert(ATempty, p_13), r_13)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  r_13 = ATgetArgument(t, 0);
                                  s_13 = ATgetArgument(t, 1);
                                  p_13 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, p_13)), r_13), (ATerm) ATmakeAppl(sym_Build_1, s_13)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      r_13 = ATgetArgument(t, 0);
                                      s_13 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, r_13, (ATerm) ATmakeAppl(sym_Match_1, s_13));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          r_13 = ATgetArgument(t, 0);
                                          s_13 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, r_13), s_13);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              r_13 = ATgetArgument(t, 0);
                                              s_13 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, s_13), r_13);
                                        }
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
ATerm o_1 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm j_16 = NULL,k_16 = NULL,l_16 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      j_16 = ATgetArgument(t, 0);
      t = j_16;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          j_16 = ATgetArgument(t, 0);
          t = j_16;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_b_13;
        }
      else
        {
          ATerm f_13 = t;
          int g_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_Seq_2))
                {
                  j_16 = ATgetArgument(t, 0);
                  {
                    ATerm h_13 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(g_13);
              t = j_16;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
            }
          else
            {
              t = f_13;
              {
                ATerm j_13 = t;
                int k_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Scope_2))
                      {
                        ATerm q_13 = ATgetArgument(t, 0);
                        k_16 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(k_13);
                    t = k_16;
                    if(!(match_cons(t, sym_Fail_0)))
                      _fail(t);
                  }
                else
                  {
                    t = j_13;
                    {
                      ATerm t_13 = t;
                      int u_13 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_Rec_2))
                            {
                              ATerm v_13 = ATgetArgument(t, 0);
                              k_16 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(u_13);
                          t = k_16;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                        }
                      else
                        {
                          t = t_13;
                          if(match_cons(t, sym_Some_1))
                            {
                              j_16 = ATgetArgument(t, 0);
                              t = j_16;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                            }
                          else
                            {
                              if(match_cons(t, sym_One_1))
                                {
                                  j_16 = ATgetArgument(t, 0);
                                  t = j_16;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                }
                              else
                                {
                                  ATerm w_13 = t;
                                  int x_13 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_Path_2))
                                        {
                                          ATerm y_13 = ATgetArgument(t, 0);
                                          k_16 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(x_13);
                                      t = k_16;
                                      if(!(match_cons(t, sym_Fail_0)))
                                        _fail(t);
                                    }
                                  else
                                    {
                                      t = w_13;
                                      {
                                        ATerm z_13 = t;
                                        int a_14 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            if(match_cons(t, sym_Cong_2))
                                              {
                                                ATerm b_14 = ATgetArgument(t, 0);
                                                k_16 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            LocalPopChoice(a_14);
                                            t = k_16;
                                            t = fetch_1_0(o_1, t);
                                            t = term_s_9;
                                          }
                                        else
                                          {
                                            t = z_13;
                                            if(match_cons(t, sym_Choice_2))
                                              {
                                                j_16 = ATgetArgument(t, 0);
                                                k_16 = ATgetArgument(t, 1);
                                                t = k_16;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    t = j_16;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm c_14 = t;
                                                        int d_14 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = k_16;
                                                            ;
                                                            LocalPopChoice(d_14);
                                                          }
                                                        else
                                                          {
                                                            t = c_14;
                                                            t = j_16;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = j_16;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = j_16;
                                                    if(!(match_cons(t, sym_Fail_0)))
                                                      _fail(t);
                                                    t = k_16;
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_LChoice_2))
                                                  {
                                                    j_16 = ATgetArgument(t, 0);
                                                    k_16 = ATgetArgument(t, 1);
                                                    t = k_16;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        t = j_16;
                                                        if(match_cons(t, sym_Fail_0))
                                                          {
                                                            ATerm e_14 = t;
                                                            int i_14 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = k_16;
                                                                ;
                                                                LocalPopChoice(i_14);
                                                              }
                                                            else
                                                              {
                                                                t = e_14;
                                                                t = j_16;
                                                              }
                                                          }
                                                        else
                                                          {
                                                            t = j_16;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = j_16;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = k_16;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Where_1))
                                                      {
                                                        j_16 = ATgetArgument(t, 0);
                                                        t = j_16;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_GuardedLChoice_3))
                                                          {
                                                            j_16 = ATgetArgument(t, 0);
                                                            k_16 = ATgetArgument(t, 1);
                                                            l_16 = ATgetArgument(t, 2);
                                                          }
                                                        else
                                                          _fail(t);
                                                        t = l_16;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, j_16, k_16);
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                    }
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
  ATerm n_17 = NULL,r_17 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      r_17 = ATgetArgument(t, 0);
      t = r_17;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          r_17 = ATgetArgument(t, 0);
          t = r_17;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_s_9;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              r_17 = ATgetArgument(t, 0);
              n_17 = ATgetArgument(t, 1);
              t = n_17;
              if(match_cons(t, sym_Id_0))
                {
                  t = r_17;
                  if(match_cons(t, sym_Id_0))
                    {
                      ATerm k_14 = t;
                      int l_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = n_17;
                          ;
                          LocalPopChoice(l_14);
                        }
                      else
                        {
                          t = k_14;
                          t = r_17;
                        }
                    }
                  else
                    {
                      t = r_17;
                    }
                }
              else
                {
                  t = r_17;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = n_17;
                }
            }
          else
            {
              ATerm m_14 = t;
              int n_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      r_17 = ATgetArgument(t, 0);
                      {
                        ATerm o_14 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(n_14);
                  t = r_17;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                }
              else
                {
                  t = m_14;
                  {
                    ATerm s_14 = t;
                    int u_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            ATerm v_14 = ATgetArgument(t, 0);
                            n_17 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(u_14);
                        t = n_17;
                        if(!(match_cons(t, sym_Id_0)))
                          _fail(t);
                      }
                    else
                      {
                        t = s_14;
                        {
                          ATerm w_14 = t;
                          int x_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Rec_2))
                                {
                                  ATerm y_14 = ATgetArgument(t, 0);
                                  n_17 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(x_14);
                              t = n_17;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                            }
                          else
                            {
                              t = w_14;
                              if(match_cons(t, sym_All_1))
                                {
                                  r_17 = ATgetArgument(t, 0);
                                  t = r_17;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                }
                              else
                                {
                                  if(match_cons(t, sym_Where_1))
                                    {
                                      r_17 = ATgetArgument(t, 0);
                                      t = r_17;
                                      if(!(match_cons(t, sym_Id_0)))
                                        _fail(t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          r_17 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = r_17;
                                      if(!(match_cons(t, sym_Wld_0)))
                                        _fail(t);
                                      t = term_b_13;
                                    }
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
ATerm Simplify_0_0 (ATerm t)
{
  ATerm c_15 = t;
  int e_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(e_15);
    }
  else
    {
      t = c_15;
      {
        ATerm f_15 = t;
        int g_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(g_15);
          }
        else
          {
            t = f_15;
            {
              ATerm h_15 = t;
              int i_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(i_15);
                }
              else
                {
                  t = h_15;
                  {
                    ATerm j_15 = t;
                    int k_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(k_15);
                      }
                    else
                      {
                        t = j_15;
                        {
                          ATerm l_15 = t;
                          int m_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(m_15);
                            }
                          else
                            {
                              t = l_15;
                              {
                                ATerm n_15 = t;
                                int o_15 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm j_18 = NULL,l_18 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        j_18 = ATgetArgument(t, 0);
                                        l_18 = ATgetArgument(t, 1);
                                        t = j_18;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = l_18;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            j_18 = ATgetArgument(t, 0);
                                            l_18 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = j_18;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = l_18;
                                      }
                                    ;
                                    LocalPopChoice(o_15);
                                  }
                                else
                                  {
                                    t = n_15;
                                    {
                                      ATerm p_15 = t;
                                      int q_15 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
                                          LocalPopChoice(q_15);
                                        }
                                      else
                                        {
                                          t = p_15;
                                          {
                                            ATerm r_15 = t;
                                            int s_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = BuildMatch_0_0(t);
                                                ;
                                                LocalPopChoice(s_15);
                                              }
                                            else
                                              {
                                                t = r_15;
                                                {
                                                  ATerm q_18 = NULL,r_18 = NULL;
                                                  if(match_cons(t, sym_As_2))
                                                    {
                                                      q_18 = ATgetArgument(t, 0);
                                                      r_18 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = q_18;
                                                  if(!(match_cons(t, sym_Wld_0)))
                                                    _fail(t);
                                                  t = r_18;
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm repeat_1_0 (ATerm w_130 (ATerm), ATerm t)
{
  ATerm t_18 (ATerm t)
  {
    ATerm t_15 = t;
    int u_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_130(t);
        t = t_18(t);
        ;
        LocalPopChoice(u_15);
      }
    else
      {
        t = t_15;
      }
    return(t);
  }
  t = t_18(t);
  return(t);
}
ATerm downup_1_0 (ATerm c_114 (ATerm), ATerm t)
{
  t = c_114(t);
  {
    ATerm p_1 (ATerm t)
    {
      t = downup_1_0(c_114, t);
      return(t);
    }
    t = SRTS_all(p_1, t);
    t = c_114(t);
  }
  return(t);
}
ATerm TopLevel_0_0 (ATerm t)
{
  ATerm f_19 = NULL;
  f_19 = t;
  {
    ATerm v_15 = t;
    int w_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_3 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("TopLevel", 0, ATtrue)), f_19);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_3 = ATgetFirst((ATermList) t);
            {
              ATerm x_15 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = a_3;
        if(match_cons(t, sym_Defined_1))
          {
            ATerm y_15 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) y_15) != ATmakeSymbol("f_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = term_m_8;
        ;
        LocalPopChoice(w_15);
      }
    else
      {
        t = v_15;
        {
          ATerm f_3 = NULL;
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("TopLevel", 0, ATtrue)), f_19);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              f_3 = ATgetFirst((ATermList) t);
              {
                ATerm z_15 = (ATerm) ATgetNext((ATermList) t);
              }
            }
          else
            _fail(t);
          t = f_3;
          if(match_cons(t, sym_Defined_1))
            {
              ATerm a_16 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) a_16) != ATmakeSymbol("b_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = term_m_8;
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm q_126 (ATerm), ATerm t)
{
  ATerm b_16 = t;
  int c_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(c_16);
    }
  else
    {
      t = b_16;
      {
        ATerm d_16 = t;
        int e_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_1 (ATerm t)
            {
              t = filter_1_0(q_126, t);
              return(t);
            }
            t = Cons_2_0(q_126, u_1, t);
            ;
            LocalPopChoice(e_16);
          }
        else
          {
            t = d_16;
            {
              ATerm o_19 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm f_16 = ATgetFirst((ATermList) t);
                  o_19 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = o_19;
              t = filter_1_0(q_126, t);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2_0 (ATerm m_103 (ATerm), ATerm n_103 (ATerm), ATerm t)
{
  ATerm q_19 = NULL,r_19 = NULL,t_19 = NULL,u_19 = NULL,x_19 = NULL,z_19 = NULL;
  z_19 = t;
  if(match_cons(t, sym_Rec_2))
    {
      r_19 = ATgetArgument(t, 0);
      t_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_19);
  q_19 = t;
  t = r_19;
  t = m_103(t);
  u_19 = t;
  t = t_19;
  t = n_103(t);
  x_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, u_19, x_19), q_19);
  return(t);
}
ATerm SDef_3_0 (ATerm e_105 (ATerm), ATerm f_105 (ATerm), ATerm g_105 (ATerm), ATerm t)
{
  ATerm c_20 = NULL,d_20 = NULL,e_20 = NULL,f_20 = NULL,h_20 = NULL,j_20 = NULL,l_20 = NULL,m_20 = NULL;
  m_20 = t;
  if(match_cons(t, sym_SDef_3))
    {
      d_20 = ATgetArgument(t, 0);
      e_20 = ATgetArgument(t, 1);
      f_20 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_20);
  c_20 = t;
  t = d_20;
  t = e_105(t);
  h_20 = t;
  t = e_20;
  t = f_105(t);
  j_20 = t;
  t = f_20;
  t = g_105(t);
  l_20 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, h_20, j_20, l_20), c_20);
  return(t);
}
ATerm Let_2_0 (ATerm p_102 (ATerm), ATerm q_102 (ATerm), ATerm t)
{
  ATerm p_20 = NULL,q_20 = NULL,r_20 = NULL,t_20 = NULL,u_20 = NULL,x_20 = NULL;
  x_20 = t;
  if(match_cons(t, sym_Let_2))
    {
      q_20 = ATgetArgument(t, 0);
      r_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_20);
  p_20 = t;
  t = q_20;
  t = p_102(t);
  t_20 = t;
  t = r_20;
  t = q_102(t);
  u_20 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, t_20, u_20), p_20);
  return(t);
}
ATerm sboundin_3_0 (ATerm f_113 (ATerm), ATerm g_113 (ATerm), ATerm h_113 (ATerm), ATerm t)
{
  ATerm g_16 = t;
  int h_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(f_113, f_113, t);
      ;
      LocalPopChoice(h_16);
    }
  else
    {
      t = g_16;
      {
        ATerm i_16 = t;
        int m_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(h_113, h_113, f_113, t);
            ;
            LocalPopChoice(m_16);
          }
        else
          {
            t = i_16;
            {
              ATerm n_16 = t;
              int o_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(h_113, h_113, h_113, f_113, t);
                  ;
                  LocalPopChoice(o_16);
                }
              else
                {
                  t = n_16;
                  t = Rec_2_0(h_113, f_113, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm d_21 = NULL;
  ATerm p_16 = t;
  int q_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          d_21 = ATgetArgument(t, 0);
          {
            ATerm r_16 = ATgetArgument(t, 1);
          }
          {
            ATerm s_16 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_16);
      t = d_21;
    }
  else
    {
      t = p_16;
      if(match_cons(t, sym_SDefT_4))
        {
          d_21 = ATgetArgument(t, 0);
          {
            ATerm t_16 = ATgetArgument(t, 1);
          }
          {
            ATerm u_16 = ATgetArgument(t, 2);
          }
          {
            ATerm v_16 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = d_21;
    }
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm b_21 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      b_21 = ATgetArgument(t, 0);
      {
        ATerm w_16 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = b_21;
  t = map_1_0(v_1, t);
  return(t);
}
ATerm foldr_3_0 (ATerm d_125 (ATerm), ATerm e_125 (ATerm), ATerm f_125 (ATerm), ATerm t)
{
  ATerm x_16 = t;
  int y_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = d_125(t);
      ;
      LocalPopChoice(y_16);
    }
  else
    {
      t = x_16;
      {
        ATerm p_21 = NULL,r_21 = NULL,w_21 = NULL,x_21 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_21 = ATgetFirst((ATermList) t);
            r_21 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = p_21;
        t = f_125(t);
        w_21 = t;
        t = r_21;
        t = foldr_3_0(d_125, e_125, f_125, t);
        x_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_21, x_21);
        t = e_125(t);
      }
    }
  return(t);
}
ATerm diff_1_0 (ATerm k_122 (ATerm), ATerm t)
{
  ATerm b_22 = NULL,c_22 = NULL;
  if(match_cons(t, sym__2))
    {
      c_22 = ATgetArgument(t, 0);
      b_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_22;
  {
    ATerm d_22 (ATerm t)
    {
      ATerm z_16 = t;
      int a_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(a_17);
        }
      else
        {
          t = z_16;
          {
            ATerm b_17 = t;
            int c_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_3 = NULL,l_3 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    i_3 = ATgetFirst((ATermList) t);
                    l_3 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = b_22;
                {
                  ATerm w_1 (ATerm t)
                  {
                    ATerm p_3 = NULL;
                    p_3 = t;
                    t = (ATerm) ATmakeAppl(sym__2, i_3, p_3);
                    t = k_122(t);
                    return(t);
                  }
                  t = fetch_1_0(w_1, t);
                  t = l_3;
                  t = d_22(t);
                }
                ;
                LocalPopChoice(c_17);
              }
            else
              {
                t = b_17;
                t = Cons_2_0(_id, d_22, t);
              }
          }
        }
      return(t);
    }
    t = d_22(t);
  }
  return(t);
}
ATerm x_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_17 = ATgetArgument(t, 0);
      if(((ATgetType(d_17) != AT_LIST) || !(ATisEmpty(d_17))))
        _fail(t);
      {
        ATerm e_17 = ATgetArgument(t, 1);
        if(((ATgetType(e_17) != AT_LIST) || !(ATisEmpty(e_17))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm p_22 = NULL,q_22 = NULL,r_22 = NULL,t_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_17 = ATgetArgument(t, 0);
      if(((ATgetType(f_17) == AT_LIST) && !(ATisEmpty(f_17))))
        {
          p_22 = ATgetFirst((ATermList) f_17);
          r_22 = (ATerm) ATgetNext((ATermList) f_17);
        }
      else
        _fail(t);
      {
        ATerm g_17 = ATgetArgument(t, 1);
        if(((ATgetType(g_17) == AT_LIST) && !(ATisEmpty(g_17))))
          {
            q_22 = ATgetFirst((ATermList) g_17);
            t_22 = (ATerm) ATgetNext((ATermList) g_17);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_22, q_22), (ATerm) ATmakeAppl(sym__2, r_22, t_22));
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm u_22 = NULL,x_22 = NULL;
  if(match_cons(t, sym__2))
    {
      u_22 = ATgetArgument(t, 0);
      x_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_22), u_22);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm f_22 = NULL,h_22 = NULL,i_22 = NULL,l_22 = NULL,m_22 = NULL,n_22 = NULL,o_22 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm h_17 = ATgetFirst((ATermList) t);
      if(match_cons(h_17, sym__2))
        {
          f_22 = ATgetArgument(h_17, 0);
          h_22 = ATgetArgument(h_17, 1);
        }
      else
        _fail(t);
      i_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(h_22);
  if(match_cons(t, sym__2))
    {
      l_22 = ATgetArgument(t, 0);
      m_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(f_22);
  if(match_cons(t, sym__2))
    {
      if((l_22 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      n_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_22, m_22);
  t = genzip_4_0(x_1, y_1, z_1, _id, t);
  o_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_22, i_22);
  {
    ATerm i_17 = t;
    int j_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_17 = ATgetArgument(t, 0);
            ATerm l_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = o_22;
        {
          ATerm a_2 (ATerm t)
          {
            t = i_22;
            return(t);
          }
          t = at_end_1_0(a_2, t);
        }
        ;
        LocalPopChoice(j_17);
      }
    else
      {
        t = i_17;
        {
          ATerm x_3 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, o_22, i_22));
          if(match_cons(t, sym__2))
            {
              ATerm m_17 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) m_17) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              x_3 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = x_3;
          t = concat_0_0(t);
        }
      }
  }
  return(t);
}
ATerm while_not_2_0 (ATerm l_131 (ATerm), ATerm m_131 (ATerm), ATerm t)
{
  ATerm b_23 (ATerm t)
  {
    ATerm o_17 = t;
    int p_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_131(t);
        ;
        LocalPopChoice(p_17);
      }
    else
      {
        t = o_17;
        t = m_131(t);
        t = b_23(t);
      }
    return(t);
  }
  t = b_23(t);
  return(t);
}
ATerm for_3_0 (ATerm o_131 (ATerm), ATerm p_131 (ATerm), ATerm q_131 (ATerm), ATerm t)
{
  t = o_131(t);
  t = while_not_2_0(p_131, q_131, t);
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm n_23 = NULL;
  n_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, n_23);
  return(t);
}
ATerm f_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm q_17 = t;
  int s_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_23 = ATgetFirst((ATermList) t);
          s_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_23;
      if(match_cons(t, sym__2))
        {
          q_23 = ATgetArgument(t, 0);
          r_23 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = r_23;
      if((q_23 != t))
        {
          _fail(t);
        }
      t = s_23;
      ;
      LocalPopChoice(s_17);
    }
  else
    {
      t = q_17;
      t = UfDecompose_0_0(t);
    }
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm d_24 = NULL;
  if(match_cons(t, sym__2))
    {
      d_24 = ATgetArgument(t, 0);
      if((d_24 != ATgetArgument(t, 1)))
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
  ATerm t_17 = t;
  int u_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_2 (ATerm t)
      {
        t = _2_0(_id, f_2, t);
        return(t);
      }
      ATerm e_2 (ATerm t)
      {
        ATerm v_17 = t;
        int w_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(_id, i_2, t);
            ;
            LocalPopChoice(w_17);
          }
        else
          {
            t = v_17;
            {
              ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL,z_23 = NULL;
              if(match_cons(t, sym__2))
                {
                  w_23 = ATgetArgument(t, 0);
                  x_23 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = x_23;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  y_23 = ATgetFirst((ATermList) t);
                  z_23 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_23), y_23), z_23);
            }
          }
        return(t);
      }
      t = for_3_0(b_2, d_2, e_2, t);
      ;
      LocalPopChoice(u_17);
    }
  else
    {
      t = t_17;
      t = diff_1_0(j_2, t);
    }
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm p_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm i_4 = NULL;
  if(match_cons(t, sym__2))
    {
      i_4 = ATgetArgument(t, 0);
      if((i_4 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm t_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm o_4 = NULL;
  if(match_cons(t, sym__2))
    {
      o_4 = ATgetArgument(t, 0);
      if((o_4 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = union_1_0(s_2, t);
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = union_1_0(v_2, t);
  return(t);
}
ATerm free_vars_3_0 (ATerm f_129 (ATerm), ATerm g_129 (ATerm), ATerm h_129 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm l_24 (ATerm t)
  {
    ATerm x_17 = t;
    int y_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_129(t);
        ;
        LocalPopChoice(y_17);
      }
    else
      {
        t = x_17;
        {
          ATerm z_17 = t;
          int a_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_24 = NULL,g_24 = NULL,d_4 = NULL,e_4 = NULL;
              e_24 = t;
              t = g_129(t);
              g_24 = t;
              t = e_24;
              {
                ATerm l_2 (ATerm t)
                {
                  ATerm z_3 = NULL;
                  t = l_24(t);
                  z_3 = t;
                  t = (ATerm) ATmakeAppl(sym__2, z_3, g_24);
                  t = diff_0_0(t);
                  return(t);
                }
                t = h_129(l_2, l_24, o_2, t);
                d_4 = t;
                t = SSL_explode_term(d_4);
                if(match_cons(t, sym__2))
                  {
                    ATerm b_18 = ATgetArgument(t, 0);
                    e_4 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = e_4;
                t = foldr_3_0(p_2, r_2, _id, t);
              }
              ;
              LocalPopChoice(a_18);
            }
          else
            {
              t = z_17;
              {
                ATerm j_4 = NULL,k_4 = NULL;
                j_4 = t;
                t = SSL_explode_term(j_4);
                if(match_cons(t, sym__2))
                  {
                    ATerm c_18 = ATgetArgument(t, 0);
                    k_4 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = k_4;
                t = foldr_3_0(t_2, u_2, l_24, t);
              }
            }
        }
      }
    return(t);
  }
  t = l_24(t);
  return(t);
}
ATerm DynamicRules_1_0 (ATerm w_101 (ATerm), ATerm t)
{
  ATerm m_24 = NULL,r_24 = NULL,s_24 = NULL,u_24 = NULL;
  u_24 = t;
  if(match_cons(t, sym_DynamicRules_1))
    {
      r_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_24);
  m_24 = t;
  t = r_24;
  t = w_101(t);
  s_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, s_24), m_24);
  return(t);
}
ATerm RDefT_4_0 (ATerm n_101 (ATerm), ATerm o_101 (ATerm), ATerm p_101 (ATerm), ATerm q_101 (ATerm), ATerm t)
{
  ATerm y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL;
  h_25 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      z_24 = ATgetArgument(t, 0);
      a_25 = ATgetArgument(t, 1);
      b_25 = ATgetArgument(t, 2);
      c_25 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_25);
  y_24 = t;
  t = z_24;
  t = n_101(t);
  d_25 = t;
  t = a_25;
  t = o_101(t);
  e_25 = t;
  t = b_25;
  t = p_101(t);
  f_25 = t;
  t = c_25;
  t = q_101(t);
  g_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDefT_4, d_25, e_25, f_25, g_25), y_24);
  return(t);
}
ATerm SDefT_4_0 (ATerm h_105 (ATerm), ATerm i_105 (ATerm), ATerm j_105 (ATerm), ATerm k_105 (ATerm), ATerm t)
{
  ATerm k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL,v_25 = NULL,w_25 = NULL,x_25 = NULL;
  x_25 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      l_25 = ATgetArgument(t, 0);
      m_25 = ATgetArgument(t, 1);
      n_25 = ATgetArgument(t, 2);
      o_25 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_25);
  k_25 = t;
  t = l_25;
  t = h_105(t);
  p_25 = t;
  t = m_25;
  t = i_105(t);
  q_25 = t;
  t = n_25;
  t = j_105(t);
  v_25 = t;
  t = o_25;
  t = k_105(t);
  w_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, p_25, q_25, v_25, w_25), k_25);
  return(t);
}
ATerm Scope_2_0 (ATerm z_102 (ATerm), ATerm a_103 (ATerm), ATerm t)
{
  ATerm a_26 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL,e_26 = NULL,f_26 = NULL;
  f_26 = t;
  if(match_cons(t, sym_Scope_2))
    {
      b_26 = ATgetArgument(t, 0);
      c_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_26);
  a_26 = t;
  t = b_26;
  t = z_102(t);
  d_26 = t;
  t = c_26;
  t = a_103(t);
  e_26 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, d_26, e_26), a_26);
  return(t);
}
ATerm tboundin_3_0 (ATerm b_113 (ATerm), ATerm c_113 (ATerm), ATerm d_113 (ATerm), ATerm t)
{
  ATerm d_18 = t;
  int e_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(d_113, b_113, t);
      ;
      LocalPopChoice(e_18);
    }
  else
    {
      t = d_18;
      {
        ATerm f_18 = t;
        int g_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(d_113, d_113, d_113, b_113, t);
            ;
            LocalPopChoice(g_18);
          }
        else
          {
            t = f_18;
            {
              ATerm h_18 = t;
              int i_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(d_113, d_113, d_113, b_113, t);
                  ;
                  LocalPopChoice(i_18);
                }
              else
                {
                  t = h_18;
                  t = DynamicRules_1_0(b_113, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm q_26 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, q_26);
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm i_27 = NULL;
  ATerm k_18 = t;
  int m_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_27 = ATgetArgument(t, 0);
          {
            ATerm n_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_18);
      t = i_27;
    }
  else
    {
      t = k_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_27;
    }
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm q_27 = NULL;
  ATerm o_18 = t;
  int p_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_27 = ATgetArgument(t, 0);
          {
            ATerm s_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_18);
      t = q_27;
    }
  else
    {
      t = o_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_27;
    }
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm s_26 = NULL,x_26 = NULL,z_26 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      x_26 = ATgetArgument(t, 0);
      t = x_26;
      if(match_cons(t, sym_Rule_3))
        {
          s_26 = ATgetArgument(t, 0);
          {
            ATerm u_18 = ATgetArgument(t, 1);
          }
          {
            ATerm v_18 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = s_26;
      t = tvars_0_0(t);
    }
  else
    {
      ATerm w_18 = t;
      int x_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_Scope_2))
            {
              x_26 = ATgetArgument(t, 0);
              {
                ATerm y_18 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          LocalPopChoice(x_18);
          t = x_26;
        }
      else
        {
          t = w_18;
          if(match_cons(t, sym_DynamicRules_1))
            {
              x_26 = ATgetArgument(t, 0);
              t = x_26;
              t = tvars_0_0(t);
            }
          else
            {
              ATerm z_18 = t;
              int a_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      ATerm b_19 = ATgetArgument(t, 0);
                      ATerm c_19 = ATgetArgument(t, 1);
                      z_26 = ATgetArgument(t, 2);
                      {
                        ATerm d_19 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(a_19);
                  t = z_26;
                  t = map_1_0(b_3, t);
                }
              else
                {
                  t = z_18;
                  if(match_cons(t, sym_RDefT_4))
                    {
                      ATerm e_19 = ATgetArgument(t, 0);
                      ATerm g_19 = ATgetArgument(t, 1);
                      z_26 = ATgetArgument(t, 2);
                      {
                        ATerm h_19 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  t = z_26;
                  t = map_1_0(d_3, t);
                }
            }
        }
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(y_2, z_2, tboundin_3_0, t);
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm e_28 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      e_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, e_28);
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm w_28 = NULL;
  ATerm i_19 = t;
  int j_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_28 = ATgetArgument(t, 0);
          {
            ATerm k_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_19);
      t = w_28;
    }
  else
    {
      t = i_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_28;
    }
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm c_29 = NULL;
  ATerm l_19 = t;
  int m_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_29 = ATgetArgument(t, 0);
          {
            ATerm n_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_19);
      t = c_29;
    }
  else
    {
      t = l_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_29;
    }
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm i_29 = NULL;
  if(match_cons(t, sym_SVar_1))
    {
      i_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, i_29);
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm s_29 = NULL;
  ATerm p_19 = t;
  int s_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_29 = ATgetArgument(t, 0);
          {
            ATerm v_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_19);
      t = s_29;
    }
  else
    {
      t = p_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_29;
    }
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm z_29 = NULL;
  ATerm w_19 = t;
  int y_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_29 = ATgetArgument(t, 0);
          {
            ATerm a_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_19);
      t = z_29;
    }
  else
    {
      t = w_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_29;
    }
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm j_30 = NULL;
  ATerm b_20 = t;
  int g_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_30 = ATgetArgument(t, 0);
          {
            ATerm i_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_20);
      t = j_30;
    }
  else
    {
      t = b_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_30;
    }
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm k_20 = t;
  if((PushChoice() == 0))
    {
      t = TopLevel_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = k_20;
    }
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm f_28 = NULL,j_28 = NULL,l_28 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      j_28 = ATgetArgument(t, 0);
      t = j_28;
      if(match_cons(t, sym_Rule_3))
        {
          f_28 = ATgetArgument(t, 0);
          {
            ATerm n_20 = ATgetArgument(t, 1);
          }
          {
            ATerm o_20 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = f_28;
      t = tvars_0_0(t);
    }
  else
    {
      ATerm s_20 = t;
      int v_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_Scope_2))
            {
              j_28 = ATgetArgument(t, 0);
              {
                ATerm w_20 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          LocalPopChoice(v_20);
          t = j_28;
        }
      else
        {
          t = s_20;
          if(match_cons(t, sym_DynamicRules_1))
            {
              j_28 = ATgetArgument(t, 0);
              t = j_28;
              t = tvars_0_0(t);
            }
          else
            {
              ATerm y_20 = t;
              int z_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      ATerm a_21 = ATgetArgument(t, 0);
                      ATerm c_21 = ATgetArgument(t, 1);
                      l_28 = ATgetArgument(t, 2);
                      {
                        ATerm e_21 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(z_20);
                  t = l_28;
                  t = map_1_0(s_3, t);
                }
              else
                {
                  t = y_20;
                  if(match_cons(t, sym_RDefT_4))
                    {
                      ATerm f_21 = ATgetArgument(t, 0);
                      ATerm g_21 = ATgetArgument(t, 1);
                      l_28 = ATgetArgument(t, 2);
                      {
                        ATerm h_21 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  t = l_28;
                  t = map_1_0(t_3, t);
                }
            }
        }
    }
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm i_21 = t;
  int j_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind1_0_0(t);
      ;
      LocalPopChoice(j_21);
    }
  else
    {
      t = i_21;
      {
        ATerm k_29 = NULL,l_29 = NULL;
        ATerm k_21 = t;
        int l_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SDef_3))
              {
                ATerm m_21 = ATgetArgument(t, 0);
                l_29 = ATgetArgument(t, 1);
                {
                  ATerm n_21 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            LocalPopChoice(l_21);
            t = l_29;
            t = map_1_0(w_3, t);
          }
        else
          {
            t = k_21;
            {
              ATerm o_21 = t;
              int q_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      k_29 = ATgetArgument(t, 0);
                      {
                        ATerm s_21 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(q_21);
                  t = (ATerm) ATinsert(ATempty, k_29);
                }
              else
                {
                  t = o_21;
                  {
                    ATerm t_21 = t;
                    int u_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_SDefT_4))
                          {
                            ATerm v_21 = ATgetArgument(t, 0);
                            l_29 = ATgetArgument(t, 1);
                            {
                              ATerm y_21 = ATgetArgument(t, 2);
                            }
                            {
                              ATerm z_21 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(u_21);
                        t = l_29;
                        t = map_1_0(y_3, t);
                      }
                    else
                      {
                        t = t_21;
                        if(match_cons(t, sym_RDefT_4))
                          {
                            ATerm a_22 = ATgetArgument(t, 0);
                            l_29 = ATgetArgument(t, 1);
                            {
                              ATerm e_22 = ATgetArgument(t, 2);
                            }
                            {
                              ATerm g_22 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        t = l_29;
                        t = map_1_0(a_4, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm SuperCombinator_0_0 (ATerm t)
{
  ATerm b_28 = NULL,c_28 = NULL,d_28 = NULL,s_4 = NULL,w_4 = NULL;
  b_28 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      c_28 = ATgetArgument(t, 0);
      {
        ATerm j_22 = ATgetArgument(t, 1);
      }
      {
        ATerm k_22 = ATgetArgument(t, 2);
      }
      {
        ATerm s_22 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  d_28 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, c_28), (ATerm) ATmakeAppl(ATmakeSymbol("SuperCombinator? ", 0, ATtrue))));
  t = b_28;
  t = free_vars_3_0(e_3, h_3, tboundin_3_0, t);
  s_4 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, s_4), (ATerm) ATmakeAppl(ATmakeSymbol("  tvars: ", 0, ATtrue))));
  t = s_4;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = b_28;
  t = free_vars_3_0(u_3, v_3, sboundin_3_0, t);
  t = filter_1_0(b_4, t);
  w_4 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, w_4), (ATerm) ATmakeAppl(ATmakeSymbol("  svars: ", 0, ATtrue))));
  t = w_4;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, c_28), (ATerm) ATmakeAppl(ATmakeSymbol("  SuperCombinator: ", 0, ATtrue))));
  t = d_28;
  return(t);
}
ATerm partition_1_0 (ATerm y_126 (ATerm), ATerm t)
{
  ATerm e_31 (ATerm t)
  {
    ATerm v_22 = t;
    int w_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = term_y_22;
        ;
        LocalPopChoice(w_22);
      }
    else
      {
        t = v_22;
        {
          ATerm z_22 = t;
          int a_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_30 = NULL,v_30 = NULL,w_30 = NULL,h_5 = NULL,o_5 = NULL;
              ATerm c_4 (ATerm t)
              {
                t = y_126(t);
                if(((u_30 != NULL) && (u_30 != t)))
                  _fail(t);
                else
                  u_30 = t;
                return(t);
              }
              t = Cons_2_0(c_4, _id, t);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm c_23 = ATgetFirst((ATermList) t);
                  v_30 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = v_30;
              t = e_31(t);
              w_30 = t;
              t = SSL_explode_term(w_30);
              if(match_cons(t, sym__2))
                {
                  ATerm d_23 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) d_23) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm e_23 = ATgetArgument(t, 1);
                    if(((ATgetType(e_23) == AT_LIST) && !(ATisEmpty(e_23))))
                      {
                        h_5 = ATgetFirst((ATermList) e_23);
                        {
                          ATerm f_23 = (ATerm) ATgetNext((ATermList) e_23);
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = SSL_explode_term(w_30);
              if(match_cons(t, sym__2))
                {
                  ATerm g_23 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) g_23) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm h_23 = ATgetArgument(t, 1);
                    if(((ATgetType(h_23) == AT_LIST) && !(ATisEmpty(h_23))))
                      {
                        ATerm i_23 = ATgetFirst((ATermList) h_23);
                        ATerm j_23 = (ATerm) ATgetNext((ATermList) h_23);
                        if(((ATgetType(j_23) == AT_LIST) && !(ATisEmpty(j_23))))
                          {
                            o_5 = ATgetFirst((ATermList) j_23);
                            {
                              ATerm k_23 = (ATerm) ATgetNext((ATermList) j_23);
                            }
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_5), not_null(u_30)), o_5);
              ;
              LocalPopChoice(a_23);
            }
          else
            {
              t = z_22;
              {
                ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL,s_5 = NULL,w_5 = NULL;
                ATerm f_4 (ATerm t)
                {
                  if(((z_30 != NULL) && (z_30 != t)))
                    _fail(t);
                  else
                    z_30 = t;
                  return(t);
                }
                t = Cons_2_0(f_4, _id, t);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm l_23 = ATgetFirst((ATermList) t);
                    a_31 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = a_31;
                t = e_31(t);
                b_31 = t;
                t = SSL_explode_term(b_31);
                if(match_cons(t, sym__2))
                  {
                    ATerm m_23 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) m_23) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm o_23 = ATgetArgument(t, 1);
                      if(((ATgetType(o_23) == AT_LIST) && !(ATisEmpty(o_23))))
                        {
                          s_5 = ATgetFirst((ATermList) o_23);
                          {
                            ATerm t_23 = (ATerm) ATgetNext((ATermList) o_23);
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = SSL_explode_term(b_31);
                if(match_cons(t, sym__2))
                  {
                    ATerm u_23 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) u_23) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm v_23 = ATgetArgument(t, 1);
                      if(((ATgetType(v_23) == AT_LIST) && !(ATisEmpty(v_23))))
                        {
                          ATerm a_24 = ATgetFirst((ATermList) v_23);
                          ATerm b_24 = (ATerm) ATgetNext((ATermList) v_23);
                          if(((ATgetType(b_24) == AT_LIST) && !(ATisEmpty(b_24))))
                            {
                              w_5 = ATgetFirst((ATermList) b_24);
                              {
                                ATerm c_24 = (ATerm) ATgetNext((ATermList) b_24);
                              }
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, s_5, (ATerm) ATinsert(CheckATermList(w_5), not_null(z_30)));
              }
            }
        }
      }
    return(t);
  }
  t = e_31(t);
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = term_f_24;
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm h_24 = t;
  int i_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Simplify_0_0(t);
      ;
      LocalPopChoice(i_24);
    }
  else
    {
      t = h_24;
      {
        ATerm j_24 = t;
        int k_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_31 = NULL,r_31 = NULL,s_31 = NULL,t_31 = NULL;
            if(match_cons(t, sym_Seq_2))
              {
                q_31 = ATgetArgument(t, 0);
                r_31 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = r_31;
            if(match_cons(t, sym_Let_2))
              {
                s_31 = ATgetArgument(t, 0);
                t_31 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Let_2, s_31, (ATerm) ATmakeAppl(sym_Seq_2, q_31, t_31));
            ;
            LocalPopChoice(k_24);
          }
        else
          {
            t = j_24;
            {
              ATerm n_24 = t;
              int o_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = FuseScope_0_0(t);
                  ;
                  LocalPopChoice(o_24);
                }
              else
                {
                  t = n_24;
                  {
                    ATerm p_24 = t;
                    int q_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = WhereSavesCurrentTerm_0_0(t);
                        ;
                        LocalPopChoice(q_24);
                      }
                    else
                      {
                        t = p_24;
                        t = TestSavesCurrentTerm_0_0(t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm l_31 = NULL,m_31 = NULL,n_31 = NULL,o_31 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      l_31 = ATgetArgument(t, 0);
      m_31 = ATgetArgument(t, 1);
      n_31 = ATgetArgument(t, 2);
      o_31 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_31, term_v_24);
  t = assert_1_0(h_4, t);
  t = (ATerm) ATmakeAppl(sym_SDefT_4, l_31, m_31, n_31, o_31);
  return(t);
}
ATerm l_4 (ATerm t)
{
  t = repeat_1_0(m_4, t);
  return(t);
}
ATerm LiftFromLet_0_0 (ATerm t)
{
  ATerm h_31 = NULL,i_31 = NULL,j_31 = NULL,k_31 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      h_31 = ATgetArgument(t, 0);
      i_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_31;
  t = partition_1_0(SuperCombinator_0_0, t);
  if(match_cons(t, sym__2))
    {
      k_31 = ATgetArgument(t, 0);
      j_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_31;
  t = map_1_0(g_4, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Let_2, j_31, i_31), k_31);
  t = downup_1_0(l_4, t);
  return(t);
}
ATerm union_1_0 (ATerm p_122 (ATerm), ATerm t)
{
  ATerm a_32 = NULL,b_32 = NULL;
  if(match_cons(t, sym__2))
    {
      b_32 = ATgetArgument(t, 0);
      a_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_32;
  {
    ATerm c_32 (ATerm t)
    {
      ATerm w_24 = t;
      int x_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = a_32;
          ;
          LocalPopChoice(x_24);
        }
      else
        {
          t = w_24;
          {
            ATerm i_25 = t;
            int j_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_5 = NULL,z_5 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    y_5 = ATgetFirst((ATermList) t);
                    z_5 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = a_32;
                {
                  ATerm n_4 (ATerm t)
                  {
                    ATerm a_6 = NULL;
                    a_6 = t;
                    t = (ATerm) ATmakeAppl(sym__2, y_5, a_6);
                    t = p_122(t);
                    return(t);
                  }
                  t = fetch_1_0(n_4, t);
                  t = z_5;
                  t = c_32(t);
                }
                ;
                LocalPopChoice(j_25);
              }
            else
              {
                t = i_25;
                t = Cons_2_0(_id, c_32, t);
              }
          }
        }
      return(t);
    }
    t = c_32(t);
  }
  return(t);
}
ATerm genzip_4_0 (ATerm m_118 (ATerm), ATerm n_118 (ATerm), ATerm o_118 (ATerm), ATerm p_118 (ATerm), ATerm t)
{
  ATerm d_32 (ATerm t)
  {
    ATerm r_25 = t;
    int s_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_118(t);
        ;
        LocalPopChoice(s_25);
      }
    else
      {
        t = r_25;
        t = n_118(t);
        t = _2_0(p_118, d_32, t);
        t = o_118(t);
      }
    return(t);
  }
  t = d_32(t);
  return(t);
}
ATerm p_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_y_22;
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm r_32 = NULL,s_32 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_32 = ATgetFirst((ATermList) t);
      s_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_32, s_32);
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm t_32 = NULL,u_32 = NULL,v_32 = NULL,w_32 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_25 = ATgetArgument(t, 0);
      if(match_cons(t_25, sym__2))
        {
          t_32 = ATgetArgument(t_25, 0);
          v_32 = ATgetArgument(t_25, 1);
        }
      else
        _fail(t);
      {
        ATerm u_25 = ATgetArgument(t, 1);
        if(match_cons(u_25, sym__2))
          {
            u_32 = ATgetArgument(u_25, 0);
            w_32 = ATgetArgument(u_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_32), t_32), (ATerm) ATinsert(CheckATermList(w_32), v_32));
  return(t);
}
ATerm t_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm x_32 = NULL;
  if(match_cons(t, sym__2))
    {
      x_32 = ATgetArgument(t, 0);
      if((x_32 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm y_32 = NULL;
  if(match_cons(t, sym__2))
    {
      y_32 = ATgetArgument(t, 0);
      if((y_32 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm u_4 (ATerm t)
{
  t = union_1_0(v_4, t);
  return(t);
}
ATerm CollectSplit_2_0 (ATerm m_123 (ATerm), ATerm n_123 (ATerm), ATerm t)
{
  ATerm e_32 = NULL,f_32 = NULL,h_32 = NULL,i_32 = NULL,j_32 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL,n_32 = NULL,o_32 = NULL,p_32 = NULL,q_32 = NULL;
  e_32 = t;
  f_32 = t;
  t = SSL_explode_term(f_32);
  if(match_cons(t, sym__2))
    {
      h_32 = ATgetArgument(t, 0);
      i_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_32);
  j_32 = t;
  t = i_32;
  t = genzip_4_0(p_4, q_4, r_4, m_123, t);
  if(match_cons(t, sym__2))
    {
      k_32 = ATgetArgument(t, 0);
      l_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_mkterm(h_32, k_32);
  m_32 = t;
  t = SSLsetAnnotations(m_32, j_32);
  t = n_123(t);
  if(match_cons(t, sym__2))
    {
      n_32 = ATgetArgument(t, 0);
      o_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_32;
  t = foldr_2_0(t_4, u_4, t);
  p_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_32, p_32);
  t = union_1_0(x_4, t);
  q_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_32, q_32);
  return(t);
}
ATerm collect_split_1_0 (ATerm j_124 (ATerm), ATerm t)
{
  ATerm b_33 (ATerm t)
  {
    ATerm y_4 (ATerm t)
    {
      ATerm y_25 = t;
      int z_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_124(t);
          ;
          LocalPopChoice(z_25);
        }
      else
        {
          t = y_25;
          {
            ATerm z_32 = NULL;
            z_32 = t;
            t = (ATerm) ATmakeAppl(sym__2, z_32, (ATerm) ATempty);
          }
        }
      return(t);
    }
    t = CollectSplit_2_0(b_33, y_4, t);
    return(t);
  }
  t = b_33(t);
  return(t);
}
ATerm lift_sdefs_0_0 (ATerm t)
{
  ATerm d_33 = NULL,e_33 = NULL,f_33 = NULL,g_33 = NULL,h_33 = NULL,i_33 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      d_33 = ATgetArgument(t, 0);
      e_33 = ATgetArgument(t, 1);
      f_33 = ATgetArgument(t, 2);
      g_33 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = g_33;
  t = collect_split_1_0(LiftFromLet_0_0, t);
  if(match_cons(t, sym__2))
    {
      h_33 = ATgetArgument(t, 0);
      i_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_33, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, d_33, e_33, f_33, h_33)));
  {
    ATerm g_26 = t;
    int h_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_26 = ATgetArgument(t, 0);
            ATerm j_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = i_33;
        {
          ATerm z_4 (ATerm t)
          {
            t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, d_33, e_33, f_33, h_33));
            return(t);
          }
          t = at_end_1_0(z_4, t);
        }
        ;
        LocalPopChoice(h_26);
      }
    else
      {
        t = g_26;
        {
          ATerm g_6 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, i_33, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, d_33, e_33, f_33, h_33))));
          if(match_cons(t, sym__2))
            {
              ATerm k_26 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) k_26) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              g_6 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = g_6;
          t = concat_0_0(t);
        }
      }
  }
  return(t);
}
ATerm assert_1_0 (ATerm m_126 (ATerm), ATerm t)
{
  ATerm m_33 = NULL,n_33 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL;
  if(match_cons(t, sym__2))
    {
      m_33 = ATgetArgument(t, 0);
      n_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_126(t);
  o_33 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_33, m_33, n_33);
  t = table_push_0_0(t);
  {
    ATerm l_26 = t;
    int m_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(o_33, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(m_26);
      }
    else
      {
        t = l_26;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_33 = ATgetFirst((ATermList) t);
        q_33 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(o_33, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(q_33), (ATerm) ATinsert(CheckATermList(p_33), m_33)));
    t = (ATerm) ATmakeAppl(sym__2, m_33, n_33);
  }
  return(t);
}
ATerm Strategies_1_0 (ATerm h_98 (ATerm), ATerm t)
{
  ATerm s_33 = NULL,t_33 = NULL,u_33 = NULL,v_33 = NULL;
  v_33 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      t_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_33);
  s_33 = t;
  t = t_33;
  t = h_98(t);
  u_33 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, u_33), s_33);
  return(t);
}
ATerm Specification_1_0 (ATerm m_98 (ATerm), ATerm t)
{
  ATerm y_33 = NULL,z_33 = NULL,a_34 = NULL,b_34 = NULL;
  b_34 = t;
  if(match_cons(t, sym_Specification_1))
    {
      z_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_34);
  y_33 = t;
  t = z_33;
  t = m_98(t);
  a_34 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, a_34), y_33);
  return(t);
}
ATerm b_5 (ATerm t)
{
  t = term_f_24;
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm f_34 = NULL;
  f_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_34, term_o_26);
  t = assert_1_0(b_5, t);
  t = f_34;
  return(t);
}
ATerm declare_standard_strategies_0_0 (ATerm t)
{
  ATerm e_34 = NULL;
  e_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_r_26), term_p_26);
  t = map_1_0(a_5, t);
  t = e_34;
  return(t);
}
ATerm f_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm j_5 (ATerm t)
{
  t = term_f_24;
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL,j_34 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      g_34 = ATgetArgument(t, 0);
      h_34 = ATgetArgument(t, 1);
      i_34 = ATgetArgument(t, 2);
      j_34 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_34, term_v_24);
  t = assert_1_0(j_5, t);
  t = (ATerm) ATmakeAppl(sym_SDefT_4, g_34, h_34, i_34, j_34);
  return(t);
}
ATerm lift_definitions_0_0 (ATerm t)
{
  t = declare_standard_strategies_0_0(t);
  {
    ATerm c_5 (ATerm t)
    {
      ATerm d_5 (ATerm t)
      {
        ATerm e_5 (ATerm t)
        {
          ATerm g_5 (ATerm t)
          {
            t = map_1_0(i_5, t);
            t = map_1_0(lift_sdefs_0_0, t);
            t = concat_0_0(t);
            return(t);
          }
          t = Strategies_1_0(g_5, t);
          return(t);
        }
        t = Cons_2_0(e_5, f_5, t);
        return(t);
      }
      t = Cons_2_0(_id, d_5, t);
      return(t);
    }
    t = Specification_1_0(c_5, t);
  }
  return(t);
}
ATerm _2_0 (ATerm o_93 (ATerm), ATerm p_93 (ATerm), ATerm t)
{
  ATerm k_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL,o_34 = NULL,p_34 = NULL;
  p_34 = t;
  if(match_cons(t, sym__2))
    {
      l_34 = ATgetArgument(t, 0);
      m_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_34);
  k_34 = t;
  t = l_34;
  t = o_93(t);
  n_34 = t;
  t = m_34;
  t = p_93(t);
  o_34 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, n_34, o_34), k_34);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm t_135 (ATerm), ATerm t)
{
  ATerm s_34 = NULL,t_34 = NULL,u_34 = NULL;
  if(match_cons(t, sym__2))
    {
      s_34 = ATgetArgument(t, 0);
      t_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_34, term_t_26);
  t = open_stream_0_0(t);
  u_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_34, t_34);
  t = t_135(t);
  t = fclose_0_0(t);
  t = t_34;
  return(t);
}
ATerm q_5 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm x_34 = NULL,y_34 = NULL,z_34 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_26 = ATgetArgument(t, 0);
      if(match_cons(u_26, sym_Stream_1))
        {
          x_34 = ATgetArgument(u_26, 0);
        }
      else
        _fail(t);
      y_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(x_34, y_34);
  z_34 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_34);
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm a_35 = NULL,b_35 = NULL,c_35 = NULL,f_35 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_26 = ATgetArgument(t, 0);
      if(match_cons(v_26, sym_Stream_1))
        {
          a_35 = ATgetArgument(v_26, 0);
        }
      else
        _fail(t);
      b_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(a_35, b_35);
  c_35 = t;
  t = SSL_fputc((ATerm)ATmakeInt(10), c_35);
  f_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_35);
  return(t);
}
ATerm n_5 (ATerm t)
{
  t = fetch_1_0(q_5, t);
  return(t);
}
ATerm p_5 (ATerm t)
{
  t = WriteToFile_1_0(r_5, t);
  return(t);
}
ATerm t_5 (ATerm t)
{
  t = WriteToFile_1_0(u_5, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm v_34 = NULL,w_34 = NULL;
  v_34 = t;
  {
    ATerm k_5 (ATerm t)
    {
      ATerm w_26 = t;
      int y_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_5 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((w_34 != NULL) && (w_34 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  w_34 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(l_5, t);
          ;
          LocalPopChoice(y_26);
        }
      else
        {
          t = w_26;
          t = term_a_27;
          if(((w_34 != NULL) && (w_34 != t)))
            _fail(t);
          else
            w_34 = t;
        }
      return(t);
    }
    t = _2_0(k_5, _id, t);
    t = v_34;
    {
      ATerm m_5 (ATerm t)
      {
        ATerm h_6 = NULL;
        h_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_34), h_6);
        return(t);
      }
      t = _2_0(_id, m_5, t);
      {
        ATerm b_27 = t;
        int c_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(n_5, p_5, t);
            ;
            LocalPopChoice(c_27);
          }
        else
          {
            t = b_27;
            t = _2_0(_id, t_5, t);
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
ATerm apply_strategy_1_0 (ATerm v_138 (ATerm), ATerm t)
{
  ATerm h_35 = NULL,i_35 = NULL,j_35 = NULL,m_35 = NULL,n_35 = NULL;
  h_35 = t;
  t = dtime_0_0(t);
  t = h_35;
  t = v_138(t);
  i_35 = t;
  t = dtime_0_0(t);
  j_35 = t;
  t = i_35;
  if(match_cons(t, sym__2))
    {
      m_35 = ATgetArgument(t, 0);
      n_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_35), (ATerm) ATmakeAppl(sym_Runtime_1, j_35)), n_35);
  return(t);
}
ATerm d_36 (ATerm x_35, ATerm t)
{
  t = SSL_fclose(x_35);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm a_36 = NULL,b_36 = NULL;
  b_36 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_36 = ATgetArgument(t, 0);
      {
        ATerm d_27 = t;
        int e_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(a_36);
            ;
            LocalPopChoice(e_27);
          }
        else
          {
            t = d_27;
            t = d_36(b_36, t);
          }
      }
    }
  else
    {
      t = d_36(b_36, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_36 = NULL;
  t = SSL_stdin_stream();
  e_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_36);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_36 = NULL;
  t = SSL_stdout_stream();
  f_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_36);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm g_36 = NULL;
  t = SSL_stderr_stream();
  g_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_36);
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm o_36 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      o_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_36;
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm s_36 = NULL;
  s_36 = t;
  t = SSL_is_string(s_36);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_27 = ATgetArgument(t, 0);
      ATerm g_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_27 = t;
    int j_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_6 = NULL,x_6 = NULL;
        w_6 = t;
        t = SSL_explode_term(w_6);
        if(match_cons(t, sym__2))
          {
            ATerm k_27 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) k_27) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm l_27 = ATgetArgument(t, 1);
              if(((ATgetType(l_27) == AT_LIST) && !(ATisEmpty(l_27))))
                {
                  x_6 = ATgetFirst((ATermList) l_27);
                  {
                    ATerm m_27 = (ATerm) ATgetNext((ATermList) l_27);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = x_6;
        if(match_cons(t, sym_stderr_0))
          {
            t = x_6;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = x_6;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = x_6;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(j_27);
      }
    else
      {
        t = h_27;
        {
          ATerm n_27 = t;
          int o_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_36 = NULL,m_36 = NULL,n_36 = NULL;
              t = _2_0(v_5, _id, t);
              if(match_cons(t, sym__2))
                {
                  l_36 = ATgetArgument(t, 0);
                  m_36 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(l_36, m_36);
              n_36 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, n_36);
              ;
              LocalPopChoice(o_27);
            }
          else
            {
              t = n_27;
              {
                ATerm p_36 = NULL,q_36 = NULL,r_36 = NULL;
                t = _2_0(x_5, _id, t);
                if(match_cons(t, sym__2))
                  {
                    p_36 = ATgetArgument(t, 0);
                    q_36 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(p_36, q_36);
                r_36 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, r_36);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL;
  ATerm p_27 = t;
  int r_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_36 = NULL;
      w_36 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_36, term_s_27);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(r_27);
    }
  else
    {
      t = p_27;
      {
        ATerm y_6 = NULL;
        y_6 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, y_6), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = y_6;
        _fail(t);
      }
    }
  t_36 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(v_36);
  u_36 = t;
  t = t_36;
  t = fclose_0_0(t);
  t = u_36;
  return(t);
}
ATerm fetch_1_0 (ATerm m_120 (ATerm), ATerm t)
{
  ATerm b_37 (ATerm t)
  {
    ATerm t_27 = t;
    int u_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(m_120, _id, t);
        ;
        LocalPopChoice(u_27);
      }
    else
      {
        t = t_27;
        t = Cons_2_0(_id, b_37, t);
      }
    return(t);
  }
  t = b_37(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm v_27 = t;
  int w_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(w_27);
    }
  else
    {
      t = v_27;
      {
        ATerm e_37 = NULL,f_37 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_37 = ATgetFirst((ATermList) t);
            f_37 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = e_37;
        {
          ATerm b_6 (ATerm t)
          {
            t = f_37;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(b_6, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm s_120 (ATerm), ATerm t)
{
  ATerm l_37 (ATerm t)
  {
    ATerm x_27 = t;
    int y_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, l_37, t);
        ;
        LocalPopChoice(y_27);
      }
    else
      {
        t = x_27;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_120(t);
      }
    return(t);
  }
  t = l_37(t);
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm o_37 = NULL;
  o_37 = t;
  t = SSL_explode_string(o_37);
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm p_37 = NULL;
  p_37 = t;
  t = SSL_explode_string(p_37);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm n_37 = NULL;
  t = _2_0(c_6, d_6, t);
  {
    ATerm z_27 = t;
    int a_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_37 = NULL,s_37 = NULL;
        if(match_cons(t, sym__2))
          {
            r_37 = ATgetArgument(t, 0);
            s_37 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_37;
        {
          ATerm e_6 (ATerm t)
          {
            t = s_37;
            return(t);
          }
          t = at_end_1_0(e_6, t);
        }
        ;
        LocalPopChoice(a_28);
      }
    else
      {
        t = z_27;
        {
          ATerm e_7 = NULL,f_7 = NULL;
          e_7 = t;
          t = SSL_explode_term(e_7);
          if(match_cons(t, sym__2))
            {
              ATerm g_28 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) g_28) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              f_7 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = f_7;
          t = concat_0_0(t);
        }
      }
    n_37 = t;
    t = SSL_implode_string(n_37);
  }
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm h_28 = t;
  int i_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(i_28);
    }
  else
    {
      t = h_28;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm k_28 = t;
  int m_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_38 = NULL;
      c_38 = t;
      t = SSL_is_string(c_38);
      ;
      LocalPopChoice(m_28);
    }
  else
    {
      t = k_28;
      {
        ATerm n_28 = t;
        int o_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(f_6, t);
            ;
            LocalPopChoice(o_28);
          }
        else
          {
            t = n_28;
            {
              ATerm g_38 = NULL,h_38 = NULL,i_38 = NULL;
              g_38 = t;
              if(match_cons(t, sym_Path_1))
                {
                  h_38 = ATgetArgument(t, 0);
                  t = h_38;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      h_38 = ATgetArgument(t, 0);
                      t = h_38;
                      {
                        ATerm p_28 = t;
                        int q_28 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), h_38);
                            {
                              ATerm r_28 = t;
                              int s_28 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm d_8 = NULL;
                                  t = eval_config_0_0(t);
                                  d_8 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), h_38, d_8);
                                  t = d_8;
                                  ;
                                  LocalPopChoice(s_28);
                                }
                              else
                                {
                                  t = r_28;
                                }
                            }
                            ;
                            LocalPopChoice(q_28);
                          }
                        else
                          {
                            t = p_28;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, h_38), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = h_38;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm m_38 = NULL,n_38 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          h_38 = ATgetArgument(t, 0);
                          i_38 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = h_38;
                      t = eval_config_0_0(t);
                      m_38 = t;
                      t = i_38;
                      t = eval_config_0_0(t);
                      n_38 = t;
                      t = (ATerm) ATmakeAppl(sym__2, m_38, n_38);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm e_137 (ATerm), ATerm t)
{
  ATerm t_28 = t;
  int u_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_38 = NULL,u_38 = NULL;
      s_38 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm v_28 = t;
        int x_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_8 = NULL;
            t = eval_config_0_0(t);
            n_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), n_8);
            t = n_8;
            ;
            LocalPopChoice(x_28);
          }
        else
          {
            t = v_28;
          }
        u_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_38, term_y_28);
        t = geq_0_0(t);
        t = s_38;
        t = e_137(t);
      }
      ;
      LocalPopChoice(u_28);
    }
  else
    {
      t = t_28;
    }
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm w_38 = NULL;
  w_38 = t;
  if(match_string(t, "-k"))
    {
      t = w_38;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = w_38;
    }
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm x_38 = NULL,z_38 = NULL;
  x_38 = t;
  t = SSL_string_to_int(x_38);
  z_38 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), z_38);
  t = x_38;
  return(t);
}
ATerm k_6 (ATerm t)
{
  t = term_z_28;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_6, j_6, k_6, t);
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm b_39 = NULL;
  b_39 = t;
  if(match_string(t, "-S"))
    {
      t = b_39;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = b_39;
    }
  return(t);
}
ATerm m_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_b_29;
  return(t);
}
ATerm n_6 (ATerm t)
{
  t = term_d_29;
  return(t);
}
ATerm o_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm c_39 = NULL,d_39 = NULL;
  c_39 = t;
  t = SSL_string_to_int(c_39);
  d_39 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), d_39);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, c_39);
  return(t);
}
ATerm q_6 (ATerm t)
{
  t = term_e_29;
  return(t);
}
ATerm r_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_f_29;
  return(t);
}
ATerm t_6 (ATerm t)
{
  t = term_g_29;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm h_29 = t;
  int j_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_6, m_6, n_6, t);
      ;
      LocalPopChoice(j_29);
    }
  else
    {
      t = h_29;
      {
        ATerm m_29 = t;
        int n_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(o_6, p_6, q_6, t);
            ;
            LocalPopChoice(n_29);
          }
        else
          {
            t = m_29;
            t = Option_3_0(r_6, s_6, t_6, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm g_39 = NULL,h_39 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_39 = NULL;
      t = term_m_8;
      t = d_0(t);
      i_39 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_29, term_p_29, i_39);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm l_39 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_39 = ATgetFirst((ATermList) t);
          h_39 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_39;
      t = a_0(t);
      t = term_m_8;
      t = c_0(t);
      l_39 = t;
      t = (ATerm) ATinsert(CheckATermList(h_39), l_39);
    }
  return(t);
}
ATerm u_6 (ATerm t)
{
  ATerm n_39 = NULL;
  n_39 = t;
  if(match_string(t, "-o"))
    {
      t = n_39;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = n_39;
    }
  return(t);
}
ATerm v_6 (ATerm t)
{
  ATerm o_39 = NULL;
  o_39 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), o_39);
  t = (ATerm) ATmakeAppl(sym_Output_1, o_39);
  return(t);
}
ATerm z_6 (ATerm t)
{
  t = term_q_29;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_6, v_6, z_6, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm r_39 = NULL,s_39 = NULL,t_39 = NULL,v_39 = NULL;
  if(match_cons(t, sym__3))
    {
      r_39 = ATgetArgument(t, 0);
      s_39 = ATgetArgument(t, 1);
      t_39 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_39, s_39);
  {
    ATerm r_29 = t;
    int t_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_29 = ATgetArgument(t, 0);
            ATerm v_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(r_39, s_39);
        ;
        LocalPopChoice(t_29);
      }
    else
      {
        t = r_29;
        t = (ATerm) ATempty;
      }
    v_39 = t;
    t = SSL_table_put(r_39, s_39, (ATerm) ATinsert(CheckATermList(v_39), t_39));
    t = (ATerm) ATmakeAppl(sym__3, r_39, s_39, t_39);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm p_40 = NULL,s_40 = NULL,t_40 = NULL,u_40 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_40 = NULL;
      t = term_m_8;
      t = l_0(t);
      v_40 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_29, term_p_29, v_40);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm z_40 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_40 = ATgetFirst((ATermList) t);
          s_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_40;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_40 = ATgetFirst((ATermList) t);
          u_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_40;
      t = i_0(t);
      t = t_40;
      t = k_0(t);
      z_40 = t;
      t = (ATerm) ATinsert(CheckATermList(u_40), z_40);
    }
  return(t);
}
ATerm a_7 (ATerm t)
{
  ATerm b_41 = NULL;
  b_41 = t;
  if(match_string(t, "-i"))
    {
      t = b_41;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = b_41;
    }
  return(t);
}
ATerm b_7 (ATerm t)
{
  ATerm c_41 = NULL;
  c_41 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), c_41);
  t = (ATerm) ATmakeAppl(sym_Input_1, c_41);
  return(t);
}
ATerm c_7 (ATerm t)
{
  t = term_w_29;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_7, b_7, c_7, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm d_41 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_8;
  t = whoami_0_0(t);
  d_41 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), d_41));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm x_29 = t;
    int y_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_8 = NULL;
        t = eval_config_0_0(t);
        s_8 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), s_8);
        t = s_8;
        ;
        LocalPopChoice(y_29);
      }
    else
      {
        t = x_29;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm b_125 (ATerm), ATerm c_125 (ATerm), ATerm t)
{
  ATerm a_30 = t;
  int b_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = b_125(t);
      ;
      LocalPopChoice(b_30);
    }
  else
    {
      t = a_30;
      {
        ATerm g_41 = NULL,i_41 = NULL,l_41 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_41 = ATgetFirst((ATermList) t);
            i_41 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = i_41;
        t = foldr_2_0(b_125, c_125, t);
        l_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_41, l_41);
        t = c_125(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm d_7 (ATerm t)
{
  t = term_a_29;
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm x_8 = NULL,y_8 = NULL;
  if(match_cons(t, sym__2))
    {
      x_8 = ATgetArgument(t, 0);
      y_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_30 = t;
    int d_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(x_8, y_8);
        ;
        LocalPopChoice(d_30);
      }
    else
      {
        t = c_30;
        t = SSL_addr(x_8, y_8);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm p_41 = NULL,t_8 = NULL,u_8 = NULL;
  t = times_0_0(t);
  t_8 = t;
  t = SSL_explode_term(t_8);
  if(match_cons(t, sym__2))
    {
      ATerm e_30 = ATgetArgument(t, 0);
      u_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_8;
  t = foldr_2_0(d_7, g_7, t);
  p_41 = t;
  t = SSL_TicksToSeconds(p_41);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm a_42 = NULL,b_42 = NULL,c_42 = NULL;
  a_42 = t;
  if(match_cons(t, sym__2))
    {
      b_42 = ATgetArgument(t, 0);
      c_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_30 = t;
    int g_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_42;
        if((b_42 != t))
          {
            _fail(t);
          }
        t = a_42;
        ;
        LocalPopChoice(g_30);
      }
    else
      {
        t = f_30;
        t = a_42;
        {
          ATerm h_30 = t;
          int i_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(b_42, c_42);
              ;
              LocalPopChoice(i_30);
            }
          else
            {
              t = h_30;
              t = SSL_gtr(b_42, c_42);
            }
          t = (ATerm) ATmakeAppl(sym__2, b_42, c_42);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm d_137 (ATerm), ATerm t)
{
  ATerm k_30 = t;
  int l_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_42 = NULL,h_42 = NULL;
      f_42 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm m_30 = t;
        int n_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_9 = NULL;
            t = eval_config_0_0(t);
            p_9 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), p_9);
            t = p_9;
            ;
            LocalPopChoice(n_30);
          }
        else
          {
            t = m_30;
          }
        h_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_42, term_o_30);
        t = geq_0_0(t);
        t = f_42;
        t = d_137(t);
      }
      ;
      LocalPopChoice(l_30);
    }
  else
    {
      t = k_30;
    }
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm j_42 = NULL,k_42 = NULL;
  t = run_time_0_0(t);
  j_42 = t;
  t = term_m_8;
  t = whoami_0_0(t);
  k_42 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), j_42), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), k_42));
  t = (ATerm) ATmakeAppl(sym__2, term_p_30, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_30), j_42), term_q_30), k_42));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(h_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm t_139 (ATerm), ATerm t)
{
  ATerm s_30 = t;
  int t_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm x_30 = t;
        int y_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_9 = NULL;
            t = eval_config_0_0(t);
            u_9 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), u_9);
            t = u_9;
            ;
            LocalPopChoice(y_30);
          }
        else
          {
            t = x_30;
          }
      }
      ;
      LocalPopChoice(t_30);
    }
  else
    {
      t = s_30;
      {
        ATerm i_7 (ATerm t)
        {
          ATerm c_31 = t;
          int d_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(d_31);
            }
          else
            {
              t = c_31;
              {
                ATerm f_31 = t;
                int g_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(g_31);
                  }
                else
                  {
                    t = f_31;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = fetch_1_0(i_7, t);
      }
    }
  t = t_139(t);
  return(t);
}
ATerm map_1_0 (ATerm b_120 (ATerm), ATerm t)
{
  ATerm l_42 (ATerm t)
  {
    ATerm p_31 = t;
    int u_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(u_31);
      }
    else
      {
        t = p_31;
        t = Cons_2_0(b_120, l_42, t);
      }
    return(t);
  }
  t = l_42(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm o_42 = NULL,p_42 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_42 = ATgetFirst((ATermList) t);
      p_42 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm t_42 = NULL,u_42 = NULL;
        t = p_42;
        t = g_0(t);
        t_42 = t;
        t = o_42;
        t = e_0(t);
        u_42 = t;
        t = p_42;
        {
          ATerm j_7 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(t_42), u_42);
            return(t);
          }
          t = reverse_acc_2_0(e_0, j_7, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_m_8;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm v_110 (ATerm), ATerm t)
{
  ATerm v_42 = NULL,w_42 = NULL,x_42 = NULL,y_42 = NULL;
  y_42 = t;
  if(match_cons(t, sym_Program_1))
    {
      w_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_42);
  v_42 = t;
  t = w_42;
  t = v_110(t);
  x_42 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, x_42), v_42);
  return(t);
}
ATerm l_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm m_7 (ATerm t)
{
  ATerm b_43 = NULL;
  b_43 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_43), term_v_31);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm w_31 = t;
  int x_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm y_31 = t;
        int z_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_9 = NULL;
            t = eval_config_0_0(t);
            z_9 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), z_9);
            t = z_9;
            ;
            LocalPopChoice(z_31);
          }
        else
          {
            t = y_31;
          }
      }
      ;
      LocalPopChoice(x_31);
    }
  else
    {
      t = w_31;
      {
        ATerm k_7 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = fetch_1_0(k_7, t);
      }
    }
  t = term_g_32;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, l_7, t);
  t = map_1_0(m_7, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm w_110 (ATerm), ATerm t)
{
  ATerm c_43 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL;
  f_43 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      d_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_43);
  c_43 = t;
  t = d_43;
  t = w_110(t);
  e_43 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, e_43), c_43);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm j_43 = NULL,m_43 = NULL;
  j_43 = t;
  {
    ATerm a_33 = t;
    int c_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = j_43;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm j_33 = ATgetFirst((ATermList) t);
                ATerm k_33 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = j_43;
          }
        ;
        LocalPopChoice(c_33);
      }
    else
      {
        t = a_33;
        t = (ATerm) ATinsert(ATempty, j_43);
      }
    m_43 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), m_43);
    t = j_43;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm l_33 = t;
    int r_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_10 = NULL;
        t = eval_config_0_0(t);
        d_10 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), d_10);
        t = d_10;
        ;
        LocalPopChoice(r_33);
      }
    else
      {
        t = l_33;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm n_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_7 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_c_34;
  return(t);
}
ATerm p_7 (ATerm t)
{
  t = term_d_34;
  return(t);
}
ATerm q_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_7 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_q_34;
  return(t);
}
ATerm s_7 (ATerm t)
{
  t = term_r_34;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm d_35 = t;
  int e_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_7, o_7, p_7, t);
      ;
      LocalPopChoice(e_35);
    }
  else
    {
      t = d_35;
      t = Option_3_0(q_7, r_7, s_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm d_98 (ATerm), ATerm e_98 (ATerm), ATerm t)
{
  ATerm q_43 = NULL,r_43 = NULL,s_43 = NULL,t_43 = NULL,u_43 = NULL,v_43 = NULL;
  v_43 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_43 = ATgetFirst((ATermList) t);
      s_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_43);
  q_43 = t;
  t = r_43;
  t = d_98(t);
  t_43 = t;
  t = s_43;
  t = e_98(t);
  u_43 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(u_43), t_43), q_43);
  return(t);
}
ATerm t_7 (ATerm t)
{
  ATerm c_44 = NULL;
  c_44 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), c_44);
  t = (ATerm) ATmakeAppl(sym_Program_1, c_44);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm w_141 (ATerm), ATerm t)
{
  ATerm b_44 = NULL;
  b_44 = t;
  {
    ATerm g_35 = t;
    int k_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_l_35;
        t = w_141(t);
        ;
        LocalPopChoice(k_35);
      }
    else
      {
        t = g_35;
      }
    t = b_44;
    {
      ATerm u_7 (ATerm t)
      {
        ATerm o_35 = t;
        int p_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_35 = t;
            int r_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(r_35);
              }
            else
              {
                t = q_35;
                t = w_141(t);
                t = Cons_2_0(_id, u_7, t);
              }
            ;
            LocalPopChoice(p_35);
          }
        else
          {
            t = o_35;
            {
              ATerm e_44 = NULL,f_44 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  e_44 = ATgetFirst((ATermList) t);
                  f_44 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(f_44), (ATerm) ATmakeAppl(sym_Undefined_1, e_44));
            }
          }
        return(t);
      }
      t = Cons_2_0(t_7, u_7, t);
    }
  }
  return(t);
}
ATerm w_7 (ATerm t)
{
  ATerm q_44 = NULL;
  q_44 = t;
  if(match_string(t, "--help"))
    {
      t = q_44;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = q_44;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = q_44;
        }
    }
  return(t);
}
ATerm x_7 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_s_35;
  return(t);
}
ATerm y_7 (ATerm t)
{
  t = term_t_35;
  return(t);
}
ATerm z_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm v_141 (ATerm), ATerm t)
{
  ATerm n_44 = NULL,o_44 = NULL,p_44 = NULL;
  n_44 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = n_44;
  {
    ATerm v_7 (ATerm t)
    {
      ATerm u_35 = t;
      int v_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_141(t);
          ;
          LocalPopChoice(v_35);
        }
      else
        {
          t = u_35;
          {
            ATerm w_35 = t;
            int y_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(w_7, x_7, y_7, t);
                ;
                LocalPopChoice(y_35);
              }
            else
              {
                t = w_35;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(v_7, t);
    {
      ATerm z_35 = t;
      int c_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_44 = NULL;
          v_44 = t;
          {
            ATerm h_36 = t;
            int i_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = v_44;
                {
                  ATerm j_36 = t;
                  int k_36 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm x_36 = t;
                        int y_36 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm s_11 = NULL;
                            t = eval_config_0_0(t);
                            s_11 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), s_11);
                            t = s_11;
                            ;
                            LocalPopChoice(y_36);
                          }
                        else
                          {
                            t = x_36;
                          }
                      }
                      ;
                      LocalPopChoice(k_36);
                    }
                  else
                    {
                      t = j_36;
                      t = fetch_1_0(z_7, t);
                    }
                  t = v_44;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(i_36);
              }
            else
              {
                t = h_36;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm z_36 = t;
                  int a_37 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm q_12 = NULL;
                      t = eval_config_0_0(t);
                      q_12 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), q_12);
                      t = q_12;
                      ;
                      LocalPopChoice(a_37);
                    }
                  else
                    {
                      t = z_36;
                    }
                  t = v_44;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(c_36);
        }
      else
        {
          t = z_35;
          {
            ATerm c_37 = t;
            int d_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_8 (ATerm t)
                {
                  ATerm b_8 (ATerm t)
                  {
                    if(((o_44 != NULL) && (o_44 != t)))
                      _fail(t);
                    else
                      o_44 = t;
                    return(t);
                  }
                  t = Undefined_1_0(b_8, t);
                  return(t);
                }
                t = fetch_1_0(a_8, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(o_44)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_p_30, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_44)), term_g_37));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(d_37);
              }
            else
              {
                t = c_37;
              }
          }
        }
      p_44 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = p_44;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm v_139 (ATerm), ATerm w_139 (ATerm), ATerm x_139 (ATerm), ATerm y_139 (ATerm), ATerm t)
{
  ATerm y_44 = NULL;
  t = parse_options_1_0(v_139, t);
  y_44 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), y_44);
  t = y_44;
  t = x_139(t);
  {
    ATerm h_37 = t;
    int i_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(w_139, t);
        ;
        LocalPopChoice(i_37);
      }
    else
      {
        t = h_37;
        {
          ATerm j_37 = t;
          int k_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = y_139(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(k_37);
            }
          else
            {
              t = j_37;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm g_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_8 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_m_37;
  return(t);
}
ATerm i_8 (ATerm t)
{
  t = term_q_37;
  return(t);
}
ATerm j_8 (ATerm t)
{
  ATerm z_44 = NULL,a_45 = NULL;
  z_44 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm t_37 = t;
    int u_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_13 = NULL;
        t = eval_config_0_0(t);
        i_13 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), i_13);
        t = i_13;
        ;
        LocalPopChoice(u_37);
      }
    else
      {
        t = t_37;
      }
    a_45 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, a_45));
    t = z_44;
  }
  return(t);
}
ATerm e_8 (ATerm t)
{
  t = if_verbose2_1_0(j_8, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm e_139 (ATerm), ATerm f_139 (ATerm), ATerm g_139 (ATerm), ATerm t)
{
  ATerm c_8 (ATerm t)
  {
    ATerm v_37 = t;
    int w_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_139(t);
        ;
        LocalPopChoice(w_37);
      }
    else
      {
        t = v_37;
        {
          ATerm x_37 = t;
          int y_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(y_37);
            }
          else
            {
              t = x_37;
              {
                ATerm z_37 = t;
                int a_38 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(a_38);
                  }
                else
                  {
                    t = z_37;
                    {
                      ATerm b_38 = t;
                      int d_38 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(g_8, h_8, i_8, t);
                          ;
                          LocalPopChoice(d_38);
                        }
                      else
                        {
                          t = b_38;
                          {
                            ATerm e_38 = t;
                            int f_38 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(f_38);
                              }
                            else
                              {
                                t = e_38;
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
  ATerm f_8 (ATerm t)
  {
    ATerm b_45 = NULL,c_45 = NULL,l_13 = NULL;
    b_45 = t;
    {
      ATerm j_38 = t;
      int k_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_8 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((c_45 != NULL) && (c_45 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  c_45 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(k_8, t);
          ;
          LocalPopChoice(k_38);
        }
      else
        {
          t = j_38;
          t = term_l_38;
          c_45 = t;
        }
      t = not_null(c_45);
      t = ReadFromFile_0_0(t);
      l_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_45, l_13);
      t = apply_strategy_1_0(e_139, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(c_8, g_139, e_8, f_8, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm l_8 (ATerm t)
  {
    t = _2_0(_id, lift_definitions_0_0, t);
    return(t);
  }
  t = iowrap_3_0(l_8, _fail, default_usage_0_0, t);
  return(t);
}
