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
ATerm term_f_39;
ATerm term_i_38;
ATerm term_g_38;
ATerm term_p_37;
ATerm term_r_36;
ATerm term_q_36;
ATerm term_i_35;
ATerm term_q_34;
ATerm term_p_34;
ATerm term_i_34;
ATerm term_g_34;
ATerm term_m_33;
ATerm term_f_33;
ATerm term_r_32;
ATerm term_h_32;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_u_30;
ATerm term_o_30;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_y_29;
ATerm term_x_29;
ATerm term_w_29;
ATerm term_v_29;
ATerm term_q_28;
ATerm term_v_27;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_b_26;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_y_23;
ATerm term_k_13;
ATerm term_h_13;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_x_9;
ATerm term_s_8;
void init_constant_terms (void)
{
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym_Op_2, term_t_12, (ATerm) ATempty);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym_ConstType_1, term_u_12);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(sym_Defined_1, term_w_25);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("TopLevel", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(sym_Defined_1, term_l_27);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("_id", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("_fail", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_29);
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(sym__3, term_f_33, term_m_33, term_s_8);
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(sym_stdin_0);
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
ATerm s_11 (ATerm j_7, ATerm t_7, ATerm b_8, ATerm);
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
ATerm i_1 (ATerm);
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
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm m_2 (ATerm);
ATerm p_2 (ATerm);
ATerm r_2 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm free_vars_3_0 (ATerm f_129 (ATerm), ATerm g_129 (ATerm), ATerm h_129 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm DynamicRules_1_0 (ATerm w_101 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm n_101 (ATerm), ATerm o_101 (ATerm), ATerm p_101 (ATerm), ATerm q_101 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm h_105 (ATerm), ATerm i_105 (ATerm), ATerm j_105 (ATerm), ATerm k_105 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm z_102 (ATerm), ATerm a_103 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm b_113 (ATerm), ATerm c_113 (ATerm), ATerm d_113 (ATerm), ATerm);
ATerm j_3 (ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm SuperCombinator_0_0 (ATerm);
ATerm partition_1_0 (ATerm y_126 (ATerm), ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm LiftFromLet_0_0 (ATerm);
ATerm union_1_0 (ATerm p_122 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm m_118 (ATerm), ATerm n_118 (ATerm), ATerm o_118 (ATerm), ATerm p_118 (ATerm), ATerm);
ATerm o_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm CollectSplit_2_0 (ATerm m_123 (ATerm), ATerm n_123 (ATerm), ATerm);
ATerm collect_split_1_0 (ATerm j_124 (ATerm), ATerm);
ATerm lift_sdefs_0_0 (ATerm);
ATerm assert_1_0 (ATerm m_126 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm h_98 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm m_98 (ATerm), ATerm);
ATerm a_5 (ATerm);
ATerm d_5 (ATerm);
ATerm declare_standard_strategies_0_0 (ATerm);
ATerm f_5 (ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm j_5 (ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm lift_definitions_0_0 (ATerm);
ATerm _2_0 (ATerm o_93 (ATerm), ATerm p_93 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm t_135 (ATerm), ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm t_5 (ATerm);
ATerm u_5 (ATerm);
ATerm v_5 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm v_138 (ATerm), ATerm);
ATerm c_37 (ATerm w_36, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm m_120 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm s_120 (ATerm), ATerm);
ATerm z_5 (ATerm);
ATerm b_6 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm d_6 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm e_137 (ATerm), ATerm);
ATerm e_6 (ATerm);
ATerm g_6 (ATerm);
ATerm h_6 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm i_6 (ATerm);
ATerm j_6 (ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm r_6 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm w_6 (ATerm);
ATerm x_6 (ATerm);
ATerm y_6 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm z_6 (ATerm);
ATerm a_7 (ATerm);
ATerm d_7 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm b_125 (ATerm), ATerm c_125 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm e_7 (ATerm);
ATerm f_7 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm d_137 (ATerm), ATerm);
ATerm g_7 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm h_7 (ATerm);
ATerm need_help_1_0 (ATerm t_139 (ATerm), ATerm);
ATerm map_1_0 (ATerm b_120 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm v_110 (ATerm), ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm w_110 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm p_7 (ATerm);
ATerm u_7 (ATerm);
ATerm v_7 (ATerm);
ATerm w_7 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm d_98 (ATerm), ATerm e_98 (ATerm), ATerm);
ATerm x_7 (ATerm);
ATerm parse_options_p__1_0 (ATerm w_141 (ATerm), ATerm);
ATerm d_8 (ATerm);
ATerm e_8 (ATerm);
ATerm f_8 (ATerm);
ATerm g_8 (ATerm);
ATerm parse_options_1_0 (ATerm v_141 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm v_139 (ATerm), ATerm w_139 (ATerm), ATerm x_139 (ATerm), ATerm y_139 (ATerm), ATerm);
ATerm k_8 (ATerm);
ATerm m_8 (ATerm);
ATerm n_8 (ATerm);
ATerm o_8 (ATerm);
ATerm p_8 (ATerm);
ATerm iowrap_3_0 (ATerm e_139 (ATerm), ATerm f_139 (ATerm), ATerm g_139 (ATerm), ATerm);
ATerm r_8 (ATerm);
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
  t = term_s_8;
  t = whoami_0_0(t);
  j_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), j_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = h_0;
  return(t);
}
ATerm TestSavesCurrentTerm_0_0 (ATerm t)
{
  ATerm l_0 = NULL,o_0 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      l_0 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = new_0_0(t);
  o_0 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, o_0), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, o_0)), (ATerm) ATmakeAppl(sym_Seq_2, l_0, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, o_0)))));
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
        ATerm t_8 = ATgetArgument(t, 1);
        if(match_cons(t_8, sym_Scope_2))
          {
            t_0 = ATgetArgument(t_8, 0);
            u_0 = ATgetArgument(t_8, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_0, t_0);
  {
    ATerm u_8 = t;
    int w_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_8 = ATgetArgument(t, 0);
            ATerm y_8 = ATgetArgument(t, 1);
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
        LocalPopChoice(w_8);
      }
    else
      {
        t = u_8;
        {
          ATerm b_1 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, s_0, t_0));
          if(match_cons(t, sym__2))
            {
              ATerm z_8 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) z_8) != ATmakeSymbol("", 0, ATtrue)))
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
  ATerm k_1 = NULL,l_1 = NULL,n_1 = NULL,p_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL;
  if(match_cons(t, sym__2))
    {
      n_1 = ATgetArgument(t, 0);
      p_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_1;
  if(match_cons(t, sym_Build_1))
    {
      ATerm a_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_1;
  if(match_cons(t, sym_Where_1))
    {
      q_1 = ATgetArgument(t, 0);
      t = q_1;
      if(match_cons(t, sym_Prim_2))
        {
          k_1 = ATgetArgument(t, 0);
          l_1 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Prim_2, k_1, l_1);
    }
  else
    {
      if(match_cons(t, sym_Prim_2))
        {
          q_1 = ATgetArgument(t, 0);
          r_1 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_Prim_2, q_1, r_1);
        }
      else
        {
          if(match_cons(t, sym_PrimT_3))
            {
              q_1 = ATgetArgument(t, 0);
              r_1 = ATgetArgument(t, 1);
              s_1 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_PrimT_3, q_1, r_1, s_1);
        }
    }
  return(t);
}
ATerm w_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_9 = ATgetArgument(t, 0);
      if(((ATgetType(b_9) != AT_LIST) || !(ATisEmpty(b_9))))
        _fail(t);
      {
        ATerm c_9 = ATgetArgument(t, 1);
        if(((ATgetType(c_9) != AT_LIST) || !(ATisEmpty(c_9))))
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
  ATerm j_2 = NULL,k_2 = NULL,l_2 = NULL,n_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_9 = ATgetArgument(t, 0);
      if(((ATgetType(d_9) == AT_LIST) && !(ATisEmpty(d_9))))
        {
          j_2 = ATgetFirst((ATermList) d_9);
          l_2 = (ATerm) ATgetNext((ATermList) d_9);
        }
      else
        _fail(t);
      {
        ATerm e_9 = ATgetArgument(t, 1);
        if(((ATgetType(e_9) == AT_LIST) && !(ATisEmpty(e_9))))
          {
            k_2 = ATgetFirst((ATermList) e_9);
            n_2 = (ATerm) ATgetNext((ATermList) e_9);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_2, k_2), (ATerm) ATmakeAppl(sym__2, l_2, n_2));
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm o_2 = NULL,q_2 = NULL;
  if(match_cons(t, sym__2))
    {
      o_2 = ATgetArgument(t, 0);
      q_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(q_2), o_2);
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm s_2 = NULL,u_2 = NULL;
  if(match_cons(t, sym__2))
    {
      s_2 = ATgetArgument(t, 0);
      u_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, s_2), (ATerm) ATmakeAppl(sym_Match_1, u_2));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm e_2 = NULL,g_2 = NULL,h_2 = NULL,i_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_9 = ATgetArgument(t, 0);
      if(match_cons(g_9, sym_Build_1))
        {
          ATerm j_9 = ATgetArgument(g_9, 0);
          if(match_cons(j_9, sym_Op_2))
            {
              g_2 = ATgetArgument(j_9, 0);
              e_2 = ATgetArgument(j_9, 1);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm h_9 = ATgetArgument(t, 1);
        if(match_cons(h_9, sym_Match_1))
          {
            ATerm k_9 = ATgetArgument(h_9, 0);
            if(match_cons(k_9, sym_Op_2))
              {
                if((g_2 != ATgetArgument(k_9, 0)))
                  {
                    _fail(ATgetArgument(k_9, 0));
                  }
                h_2 = ATgetArgument(k_9, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, e_2, h_2);
  t = genzip_4_0(w_0, x_0, y_0, z_0, t);
  i_2 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, i_2), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, g_2, e_2)));
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm v_2 = NULL,w_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_9 = ATgetArgument(t, 0);
      if(match_cons(m_9, sym_Build_1))
        {
          ATerm q_9 = ATgetArgument(m_9, 0);
          if(match_cons(q_9, sym_Op_2))
            {
              v_2 = ATgetArgument(q_9, 0);
              {
                ATerm r_9 = ATgetArgument(q_9, 1);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm o_9 = ATgetArgument(t, 1);
        if(match_cons(o_9, sym_Match_1))
          {
            ATerm s_9 = ATgetArgument(o_9, 0);
            if(match_cons(s_9, sym_Op_2))
              {
                w_2 = ATgetArgument(s_9, 0);
                {
                  ATerm v_9 = ATgetArgument(s_9, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, v_2, w_2);
  {
    ATerm w_9 = t;
    if((PushChoice() == 0))
      {
        ATerm x_2 = NULL;
        if(match_cons(t, sym__2))
          {
            x_2 = ATgetArgument(t, 0);
            if((x_2 != ATgetArgument(t, 1)))
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
        t = w_9;
      }
    t = term_x_9;
  }
  return(t);
}
ATerm s_11 (ATerm j_7, ATerm t_7, ATerm b_8, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, j_7, t_7);
  {
    ATerm y_9 = t;
    int z_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = MisMatch_0_0(t);
        ;
        LocalPopChoice(z_9);
      }
    else
      {
        t = y_9;
        {
          ATerm a_10 = t;
          int b_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = BuildMatchFusion_0_0(t);
              ;
              LocalPopChoice(b_10);
            }
          else
            {
              t = a_10;
              {
                ATerm c_10 = t;
                int d_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm i_9 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        ATerm e_10 = ATgetArgument(t, 0);
                        ATerm f_10 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = j_7;
                    if(match_cons(t, sym_Build_1))
                      {
                        ATerm h_10 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = t_7;
                    if(match_cons(t, sym_Build_1))
                      {
                        i_9 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Build_1, i_9);
                    ;
                    LocalPopChoice(d_10);
                  }
                else
                  {
                    t = c_10;
                    {
                      ATerm j_10 = t;
                      int m_10 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = BuildPrim_0_0(t);
                          ;
                          LocalPopChoice(m_10);
                        }
                      else
                        {
                          t = j_10;
                          {
                            ATerm g_10 = NULL,i_10 = NULL,k_10 = NULL,u_10 = NULL;
                            if(match_cons(t, sym__2))
                              {
                                ATerm n_10 = ATgetArgument(t, 0);
                                ATerm o_10 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = j_7;
                            if(match_cons(t, sym_Match_1))
                              {
                                g_10 = ATgetArgument(t, 0);
                                t = t_7;
                                if(match_cons(t, sym_Match_1))
                                  {
                                    k_10 = ATgetArgument(t, 0);
                                    t = k_10;
                                    if((g_10 != t))
                                      {
                                        _fail(t);
                                      }
                                    t = (ATerm) ATmakeAppl(sym_Match_1, g_10);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        k_10 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = g_10;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        i_10 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = k_10;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        u_10 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = u_10;
                                    if((i_10 != t))
                                      {
                                        _fail(t);
                                      }
                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, i_10));
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Build_1))
                                  {
                                    g_10 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = t_7;
                                if(match_cons(t, sym_Match_1))
                                  {
                                    k_10 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = k_10;
                                if((g_10 != t))
                                  {
                                    _fail(t);
                                  }
                                t = (ATerm) ATmakeAppl(sym_Build_1, g_10);
                              }
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
  ATerm m_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL;
  o_11 = t;
  if(match_cons(t, sym_Seq_2))
    {
      p_11 = ATgetArgument(t, 0);
      q_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_11;
  if(match_cons(t, sym_Seq_2))
    {
      m_11 = ATgetArgument(t, 0);
      n_11 = ATgetArgument(t, 1);
      {
        ATerm q_10 = t;
        int r_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_1 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, p_11, m_11);
            {
              ATerm s_10 = t;
              int v_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = MisMatch_0_0(t);
                  ;
                  LocalPopChoice(v_10);
                }
              else
                {
                  t = s_10;
                  {
                    ATerm w_10 = t;
                    int x_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = BuildMatchFusion_0_0(t);
                        ;
                        LocalPopChoice(x_10);
                      }
                    else
                      {
                        t = w_10;
                        {
                          ATerm z_10 = t;
                          int a_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm f_2 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  ATerm b_11 = ATgetArgument(t, 0);
                                  ATerm c_11 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = p_11;
                              if(match_cons(t, sym_Build_1))
                                {
                                  ATerm d_11 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = m_11;
                              if(match_cons(t, sym_Build_1))
                                {
                                  f_2 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym_Build_1, f_2);
                              ;
                              LocalPopChoice(a_11);
                            }
                          else
                            {
                              t = z_10;
                              {
                                ATerm e_11 = t;
                                int f_11 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildPrim_0_0(t);
                                    ;
                                    LocalPopChoice(f_11);
                                  }
                                else
                                  {
                                    t = e_11;
                                    {
                                      ATerm t_2 = NULL,y_2 = NULL,a_3 = NULL,b_3 = NULL;
                                      if(match_cons(t, sym__2))
                                        {
                                          ATerm g_11 = ATgetArgument(t, 0);
                                          ATerm h_11 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = p_11;
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          t_2 = ATgetArgument(t, 0);
                                          t = m_11;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              a_3 = ATgetArgument(t, 0);
                                              t = a_3;
                                              if((t_2 != t))
                                                {
                                                  _fail(t);
                                                }
                                              t = (ATerm) ATmakeAppl(sym_Match_1, t_2);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Build_1))
                                                {
                                                  a_3 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = t_2;
                                              if(match_cons(t, sym_Var_1))
                                                {
                                                  y_2 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = a_3;
                                              if(match_cons(t, sym_Var_1))
                                                {
                                                  b_3 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = b_3;
                                              if((y_2 != t))
                                                {
                                                  _fail(t);
                                                }
                                              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, y_2));
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_Build_1))
                                            {
                                              t_2 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = m_11;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              a_3 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = a_3;
                                          if((t_2 != t))
                                            {
                                              _fail(t);
                                            }
                                          t = (ATerm) ATmakeAppl(sym_Build_1, t_2);
                                        }
                                    }
                                  }
                              }
                            }
                        }
                      }
                  }
                }
              j_1 = t;
              t = (ATerm) ATmakeAppl(sym_Seq_2, j_1, n_11);
            }
            ;
            LocalPopChoice(r_10);
          }
        else
          {
            t = q_10;
            t = s_11(p_11, q_11, o_11, t);
          }
      }
    }
  else
    {
      t = s_11(p_11, q_11, o_11, t);
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm e_115 (ATerm), ATerm t)
{
  ATerm u_11 (ATerm t)
  {
    ATerm i_11 = t;
    int j_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_115(t);
        ;
        LocalPopChoice(j_11);
      }
    else
      {
        t = i_11;
        t = SRTS_one(u_11, t);
      }
    return(t);
  }
  t = u_11(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm v_11 = NULL,w_11 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      ATerm k_11 = ATgetArgument(t, 0);
      if(((ATgetType(k_11) == AT_LIST) && !(ATisEmpty(k_11))))
        {
          ATerm r_11 = ATgetFirst((ATermList) k_11);
          if(match_cons(r_11, sym_SDefT_4))
            {
              w_11 = ATgetArgument(r_11, 0);
              {
                ATerm x_11 = ATgetArgument(r_11, 1);
                if(((ATgetType(x_11) != AT_LIST) || !(ATisEmpty(x_11))))
                  _fail(t);
              }
              {
                ATerm y_11 = ATgetArgument(r_11, 2);
                if(((ATgetType(y_11) != AT_LIST) || !(ATisEmpty(y_11))))
                  _fail(t);
              }
              v_11 = ATgetArgument(r_11, 3);
            }
          else
            _fail(t);
          {
            ATerm t_11 = (ATerm) ATgetNext((ATermList) k_11);
            if(((ATgetType(t_11) != AT_LIST) || !(ATisEmpty(t_11))))
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm l_11 = ATgetArgument(t, 1);
        if(match_cons(l_11, sym_CallT_3))
          {
            ATerm z_11 = ATgetArgument(l_11, 0);
            if(match_cons(z_11, sym_SVar_1))
              {
                if((w_11 != ATgetArgument(z_11, 0)))
                  {
                    _fail(ATgetArgument(z_11, 0));
                  }
              }
            else
              _fail(t);
            {
              ATerm b_12 = ATgetArgument(l_11, 1);
              if(((ATgetType(b_12) != AT_LIST) || !(ATisEmpty(b_12))))
                _fail(t);
            }
            {
              ATerm c_12 = ATgetArgument(l_11, 2);
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
  t = v_11;
  {
    ATerm d_12 = t;
    if((PushChoice() == 0))
      {
        ATerm a_1 (ATerm t)
        {
          if(match_cons(t, sym_CallT_3))
            {
              ATerm k_12 = ATgetArgument(t, 0);
              if(match_cons(k_12, sym_SVar_1))
                {
                  if((w_11 != ATgetArgument(k_12, 0)))
                    {
                      _fail(ATgetArgument(k_12, 0));
                    }
                }
              else
                _fail(t);
              {
                ATerm n_12 = ATgetArgument(t, 1);
                if(((ATgetType(n_12) != AT_LIST) || !(ATisEmpty(n_12))))
                  _fail(t);
              }
              {
                ATerm o_12 = ATgetArgument(t, 2);
                if(((ATgetType(o_12) != AT_LIST) || !(ATisEmpty(o_12))))
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
        t = d_12;
      }
    t = v_11;
  }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm e_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL,l_12 = NULL,m_12 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      l_12 = ATgetArgument(t, 0);
      t = l_12;
      if(match_cons(t, sym_Seq_2))
        {
          j_12 = ATgetArgument(t, 0);
          f_12 = ATgetArgument(t, 1);
          t = j_12;
          if(match_cons(t, sym_Where_1))
            {
              e_12 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_12;
          if(match_cons(t, sym_Seq_2))
            {
              g_12 = ATgetArgument(t, 0);
              i_12 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = g_12;
          if(match_cons(t, sym_Build_1))
            {
              h_12 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, e_12, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, h_12), i_12)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              j_12 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, j_12);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          l_12 = ATgetArgument(t, 0);
          t = l_12;
          if(match_cons(t, sym_Test_1))
            {
              j_12 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, j_12);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              l_12 = ATgetArgument(t, 0);
              t = l_12;
              if(match_cons(t, sym_Not_1))
                {
                  j_12 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, j_12);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  l_12 = ATgetArgument(t, 0);
                  m_12 = ATgetArgument(t, 1);
                  t = m_12;
                  if((l_12 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      l_12 = ATgetArgument(t, 0);
                      m_12 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = m_12;
                  if((l_12 != t))
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
  ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      a_13 = ATgetArgument(t, 0);
      d_13 = ATgetArgument(t, 1);
      t = a_13;
      if(match_cons(t, sym_LChoice_2))
        {
          b_13 = ATgetArgument(t, 0);
          c_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, b_13, (ATerm) ATmakeAppl(sym_LChoice_2, c_13, d_13));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          a_13 = ATgetArgument(t, 0);
          d_13 = ATgetArgument(t, 1);
          t = a_13;
          if(match_cons(t, sym_Seq_2))
            {
              b_13 = ATgetArgument(t, 0);
              c_13 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, b_13, (ATerm) ATmakeAppl(sym_Seq_2, c_13, d_13));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              a_13 = ATgetArgument(t, 0);
              d_13 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = a_13;
          if(match_cons(t, sym_Choice_2))
            {
              b_13 = ATgetArgument(t, 0);
              c_13 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, b_13, (ATerm) ATmakeAppl(sym_Choice_2, c_13, d_13));
        }
    }
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm p_12 = t;
  int q_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(n_0, _id, t);
      {
        ATerm c_1 (ATerm t)
        {
          ATerm r_12 = t;
          int s_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(n_0, t);
              ;
              LocalPopChoice(s_12);
            }
          else
            {
              t = r_12;
            }
          return(t);
        }
        t = Cons_2_0(_id, c_1, t);
      }
      ;
      LocalPopChoice(q_12);
    }
  else
    {
      t = p_12;
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
  ATerm p_14 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      p_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, p_14, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_v_12), term_v_12));
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm w_12 = t;
  int x_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_14 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, r_14, term_v_12);
      ;
      LocalPopChoice(x_12);
    }
  else
    {
      t = w_12;
    }
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm z_14 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      z_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, z_14, term_v_12);
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm z_12 = t;
  int e_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_15 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, b_15, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_v_12), term_v_12));
      ;
      LocalPopChoice(e_13);
    }
  else
    {
      t = z_12;
    }
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm j_15 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      j_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, j_15, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_v_12), term_v_12));
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm f_13 = t;
  int g_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_15 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, l_15, term_v_12);
      ;
      LocalPopChoice(g_13);
    }
  else
    {
      t = f_13;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL,z_13 = NULL,a_14 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      z_13 = ATgetArgument(t, 0);
      a_14 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, z_13, a_14);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          z_13 = ATgetArgument(t, 0);
          t = z_13;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              u_13 = ATgetFirst((ATermList) t);
              v_13 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, u_13, (ATerm) ATmakeAppl(sym_LChoices_1, v_13));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_x_9;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              z_13 = ATgetArgument(t, 0);
              t = z_13;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  u_13 = ATgetFirst((ATermList) t);
                  v_13 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, u_13, (ATerm) ATmakeAppl(sym_Choices_1, v_13));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_x_9;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  z_13 = ATgetArgument(t, 0);
                  t = z_13;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      u_13 = ATgetFirst((ATermList) t);
                      v_13 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_13, (ATerm) ATmakeAppl(sym_Seqs_1, v_13));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_h_13;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      z_13 = ATgetArgument(t, 0);
                      a_14 = ATgetArgument(t, 1);
                      x_13 = ATgetArgument(t, 2);
                      w_13 = ATgetArgument(t, 3);
                      {
                        ATerm n_14 = NULL,o_14 = NULL;
                        t = a_14;
                        t = map1_1_0(e_1, t);
                        n_14 = t;
                        t = x_13;
                        t = map1_1_0(f_1, t);
                        o_14 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, z_13, n_14, o_14, w_13);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          z_13 = ATgetArgument(t, 0);
                          a_14 = ATgetArgument(t, 1);
                          x_13 = ATgetArgument(t, 2);
                          w_13 = ATgetArgument(t, 3);
                          {
                            ATerm i_13 = t;
                            int j_13 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm x_14 = NULL,y_14 = NULL;
                                t = x_13;
                                t = map1_1_0(g_1, t);
                                x_14 = t;
                                t = a_14;
                                t = map_1_0(h_1, t);
                                y_14 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, z_13, y_14, x_14, w_13);
                                ;
                                LocalPopChoice(j_13);
                              }
                            else
                              {
                                t = i_13;
                                {
                                  ATerm h_15 = NULL,i_15 = NULL;
                                  t = a_14;
                                  t = map1_1_0(i_1, t);
                                  h_15 = t;
                                  t = x_13;
                                  t = map_1_0(m_1, t);
                                  i_15 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, z_13, h_15, i_15, w_13);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              z_13 = ATgetArgument(t, 0);
                              a_14 = ATgetArgument(t, 1);
                              x_13 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, a_14, (ATerm) ATmakeAppl(sym_Op_2, term_k_13, (ATerm) ATinsert(ATinsert(ATempty, x_13), z_13)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  z_13 = ATgetArgument(t, 0);
                                  a_14 = ATgetArgument(t, 1);
                                  x_13 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, x_13)), z_13), (ATerm) ATmakeAppl(sym_Build_1, a_14)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      z_13 = ATgetArgument(t, 0);
                                      a_14 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, z_13, (ATerm) ATmakeAppl(sym_Match_1, a_14));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          z_13 = ATgetArgument(t, 0);
                                          a_14 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, z_13), a_14);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              z_13 = ATgetArgument(t, 0);
                                              a_14 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, a_14), z_13);
                                        }
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
  ATerm u_16 = NULL,x_16 = NULL,y_16 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      u_16 = ATgetArgument(t, 0);
      t = u_16;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_x_9;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          u_16 = ATgetArgument(t, 0);
          t = u_16;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_h_13;
        }
      else
        {
          ATerm l_13 = t;
          int m_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_Seq_2))
                {
                  u_16 = ATgetArgument(t, 0);
                  {
                    ATerm n_13 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(m_13);
              t = u_16;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_x_9;
            }
          else
            {
              t = l_13;
              {
                ATerm o_13 = t;
                int p_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Scope_2))
                      {
                        ATerm r_13 = ATgetArgument(t, 0);
                        x_16 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(p_13);
                    t = x_16;
                    if(!(match_cons(t, sym_Fail_0)))
                      _fail(t);
                    t = term_x_9;
                  }
                else
                  {
                    t = o_13;
                    {
                      ATerm s_13 = t;
                      int y_13 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_Rec_2))
                            {
                              ATerm b_14 = ATgetArgument(t, 0);
                              x_16 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(y_13);
                          t = x_16;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_x_9;
                        }
                      else
                        {
                          t = s_13;
                          if(match_cons(t, sym_Some_1))
                            {
                              u_16 = ATgetArgument(t, 0);
                              t = u_16;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_x_9;
                            }
                          else
                            {
                              if(match_cons(t, sym_One_1))
                                {
                                  u_16 = ATgetArgument(t, 0);
                                  t = u_16;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_x_9;
                                }
                              else
                                {
                                  ATerm c_14 = t;
                                  int d_14 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_Path_2))
                                        {
                                          ATerm e_14 = ATgetArgument(t, 0);
                                          x_16 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(d_14);
                                      t = x_16;
                                      if(!(match_cons(t, sym_Fail_0)))
                                        _fail(t);
                                      t = term_x_9;
                                    }
                                  else
                                    {
                                      t = c_14;
                                      {
                                        ATerm f_14 = t;
                                        int g_14 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            if(match_cons(t, sym_Cong_2))
                                              {
                                                ATerm h_14 = ATgetArgument(t, 0);
                                                x_16 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            LocalPopChoice(g_14);
                                            t = x_16;
                                            t = fetch_1_0(o_1, t);
                                            t = term_x_9;
                                          }
                                        else
                                          {
                                            t = f_14;
                                            if(match_cons(t, sym_Choice_2))
                                              {
                                                u_16 = ATgetArgument(t, 0);
                                                x_16 = ATgetArgument(t, 1);
                                                t = x_16;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    t = u_16;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm i_14 = t;
                                                        int j_14 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = x_16;
                                                            ;
                                                            LocalPopChoice(j_14);
                                                          }
                                                        else
                                                          {
                                                            t = i_14;
                                                            t = u_16;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = u_16;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = u_16;
                                                    if(!(match_cons(t, sym_Fail_0)))
                                                      _fail(t);
                                                    t = x_16;
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_LChoice_2))
                                                  {
                                                    u_16 = ATgetArgument(t, 0);
                                                    x_16 = ATgetArgument(t, 1);
                                                    t = x_16;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        t = u_16;
                                                        if(match_cons(t, sym_Fail_0))
                                                          {
                                                            ATerm k_14 = t;
                                                            int l_14 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = x_16;
                                                                ;
                                                                LocalPopChoice(l_14);
                                                              }
                                                            else
                                                              {
                                                                t = k_14;
                                                                t = u_16;
                                                              }
                                                          }
                                                        else
                                                          {
                                                            t = u_16;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = u_16;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = x_16;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Where_1))
                                                      {
                                                        u_16 = ATgetArgument(t, 0);
                                                        t = u_16;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = term_x_9;
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_GuardedLChoice_3))
                                                          {
                                                            u_16 = ATgetArgument(t, 0);
                                                            x_16 = ATgetArgument(t, 1);
                                                            y_16 = ATgetArgument(t, 2);
                                                          }
                                                        else
                                                          _fail(t);
                                                        t = y_16;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, u_16, x_16);
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                    }
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
  ATerm z_17 = NULL,b_18 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      b_18 = ATgetArgument(t, 0);
      t = b_18;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_h_13;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          b_18 = ATgetArgument(t, 0);
          t = b_18;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_x_9;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              b_18 = ATgetArgument(t, 0);
              z_17 = ATgetArgument(t, 1);
              t = z_17;
              if(match_cons(t, sym_Id_0))
                {
                  t = b_18;
                  if(match_cons(t, sym_Id_0))
                    {
                      ATerm m_14 = t;
                      int q_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = z_17;
                          ;
                          LocalPopChoice(q_14);
                        }
                      else
                        {
                          t = m_14;
                          t = b_18;
                        }
                    }
                  else
                    {
                      t = b_18;
                    }
                }
              else
                {
                  t = b_18;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = z_17;
                }
            }
          else
            {
              ATerm s_14 = t;
              int t_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      b_18 = ATgetArgument(t, 0);
                      {
                        ATerm u_14 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(t_14);
                  t = b_18;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_h_13;
                }
              else
                {
                  t = s_14;
                  {
                    ATerm v_14 = t;
                    int w_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            ATerm a_15 = ATgetArgument(t, 0);
                            z_17 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(w_14);
                        t = z_17;
                        if(!(match_cons(t, sym_Id_0)))
                          _fail(t);
                        t = term_h_13;
                      }
                    else
                      {
                        t = v_14;
                        {
                          ATerm c_15 = t;
                          int d_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Rec_2))
                                {
                                  ATerm e_15 = ATgetArgument(t, 0);
                                  z_17 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(d_15);
                              t = z_17;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_h_13;
                            }
                          else
                            {
                              t = c_15;
                              if(match_cons(t, sym_All_1))
                                {
                                  b_18 = ATgetArgument(t, 0);
                                  t = b_18;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_h_13;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Where_1))
                                    {
                                      b_18 = ATgetArgument(t, 0);
                                      t = b_18;
                                      if(!(match_cons(t, sym_Id_0)))
                                        _fail(t);
                                      t = term_h_13;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          b_18 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = b_18;
                                      if(!(match_cons(t, sym_Wld_0)))
                                        _fail(t);
                                      t = term_h_13;
                                    }
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
  ATerm f_15 = t;
  int g_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(g_15);
    }
  else
    {
      t = f_15;
      {
        ATerm k_15 = t;
        int m_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(m_15);
          }
        else
          {
            t = k_15;
            {
              ATerm n_15 = t;
              int o_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
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
                        t = AssociateR_0_0(t);
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
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(s_15);
                            }
                          else
                            {
                              t = r_15;
                              {
                                ATerm t_15 = t;
                                int u_15 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm s_18 = NULL,t_18 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        s_18 = ATgetArgument(t, 0);
                                        t_18 = ATgetArgument(t, 1);
                                        t = s_18;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = t_18;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            s_18 = ATgetArgument(t, 0);
                                            t_18 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = s_18;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = t_18;
                                      }
                                    ;
                                    LocalPopChoice(u_15);
                                  }
                                else
                                  {
                                    t = t_15;
                                    {
                                      ATerm v_15 = t;
                                      int w_15 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
                                          LocalPopChoice(w_15);
                                        }
                                      else
                                        {
                                          t = v_15;
                                          {
                                            ATerm x_15 = t;
                                            int y_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = BuildMatch_0_0(t);
                                                ;
                                                LocalPopChoice(y_15);
                                              }
                                            else
                                              {
                                                t = x_15;
                                                {
                                                  ATerm z_18 = NULL,a_19 = NULL;
                                                  if(match_cons(t, sym_As_2))
                                                    {
                                                      z_18 = ATgetArgument(t, 0);
                                                      a_19 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = z_18;
                                                  if(!(match_cons(t, sym_Wld_0)))
                                                    _fail(t);
                                                  t = a_19;
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm g_19 (ATerm t)
  {
    ATerm z_15 = t;
    int a_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_130(t);
        t = g_19(t);
        ;
        LocalPopChoice(a_16);
      }
    else
      {
        t = z_15;
      }
    return(t);
  }
  t = g_19(t);
  return(t);
}
ATerm downup_1_0 (ATerm c_114 (ATerm), ATerm t)
{
  t = c_114(t);
  {
    ATerm t_1 (ATerm t)
    {
      t = downup_1_0(c_114, t);
      return(t);
    }
    t = SRTS_all(t_1, t);
    t = c_114(t);
  }
  return(t);
}
ATerm TopLevel_0_0 (ATerm t)
{
  ATerm u_19 = NULL;
  u_19 = t;
  {
    ATerm b_16 = t;
    int c_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_3 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("TopLevel", 0, ATtrue)), u_19);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_3 = ATgetFirst((ATermList) t);
            {
              ATerm d_16 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = w_3;
        if(match_cons(t, sym_Defined_1))
          {
            ATerm e_16 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) e_16) != ATmakeSymbol("e_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = term_s_8;
        ;
        LocalPopChoice(c_16);
      }
    else
      {
        t = b_16;
        {
          ATerm d_4 = NULL;
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("TopLevel", 0, ATtrue)), u_19);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              d_4 = ATgetFirst((ATermList) t);
              {
                ATerm f_16 = (ATerm) ATgetNext((ATermList) t);
              }
            }
          else
            _fail(t);
          t = d_4;
          if(match_cons(t, sym_Defined_1))
            {
              ATerm g_16 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) g_16) != ATmakeSymbol("c_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = term_s_8;
        }
      }
  }
  return(t);
}
ATerm filter_1_0 (ATerm q_126 (ATerm), ATerm t)
{
  ATerm h_16 = t;
  int i_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(i_16);
    }
  else
    {
      t = h_16;
      {
        ATerm j_16 = t;
        int k_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_1 (ATerm t)
            {
              t = filter_1_0(q_126, t);
              return(t);
            }
            t = Cons_2_0(q_126, u_1, t);
            ;
            LocalPopChoice(k_16);
          }
        else
          {
            t = j_16;
            {
              ATerm b_20 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm l_16 = ATgetFirst((ATermList) t);
                  b_20 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = b_20;
              t = filter_1_0(q_126, t);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2_0 (ATerm m_103 (ATerm), ATerm n_103 (ATerm), ATerm t)
{
  ATerm d_20 = NULL,e_20 = NULL,f_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL;
  k_20 = t;
  if(match_cons(t, sym_Rec_2))
    {
      e_20 = ATgetArgument(t, 0);
      f_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_20);
  d_20 = t;
  t = e_20;
  t = m_103(t);
  i_20 = t;
  t = f_20;
  t = n_103(t);
  j_20 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, i_20, j_20), d_20);
  return(t);
}
ATerm SDef_3_0 (ATerm e_105 (ATerm), ATerm f_105 (ATerm), ATerm g_105 (ATerm), ATerm t)
{
  ATerm n_20 = NULL,o_20 = NULL,p_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL,v_20 = NULL;
  v_20 = t;
  if(match_cons(t, sym_SDef_3))
    {
      o_20 = ATgetArgument(t, 0);
      p_20 = ATgetArgument(t, 1);
      r_20 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_20);
  n_20 = t;
  t = o_20;
  t = e_105(t);
  s_20 = t;
  t = p_20;
  t = f_105(t);
  t_20 = t;
  t = r_20;
  t = g_105(t);
  u_20 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, s_20, t_20, u_20), n_20);
  return(t);
}
ATerm Let_2_0 (ATerm p_102 (ATerm), ATerm q_102 (ATerm), ATerm t)
{
  ATerm b_21 = NULL,c_21 = NULL,e_21 = NULL,f_21 = NULL,g_21 = NULL,h_21 = NULL;
  h_21 = t;
  if(match_cons(t, sym_Let_2))
    {
      c_21 = ATgetArgument(t, 0);
      e_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_21);
  b_21 = t;
  t = c_21;
  t = p_102(t);
  f_21 = t;
  t = e_21;
  t = q_102(t);
  g_21 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, f_21, g_21), b_21);
  return(t);
}
ATerm sboundin_3_0 (ATerm f_113 (ATerm), ATerm g_113 (ATerm), ATerm h_113 (ATerm), ATerm t)
{
  ATerm m_16 = t;
  int n_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(f_113, f_113, t);
      ;
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
            t = SDef_3_0(h_113, h_113, f_113, t);
            ;
            LocalPopChoice(p_16);
          }
        else
          {
            t = o_16;
            {
              ATerm q_16 = t;
              int r_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(h_113, h_113, h_113, f_113, t);
                  ;
                  LocalPopChoice(r_16);
                }
              else
                {
                  t = q_16;
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
  ATerm n_21 = NULL;
  ATerm s_16 = t;
  int t_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          n_21 = ATgetArgument(t, 0);
          {
            ATerm v_16 = ATgetArgument(t, 1);
          }
          {
            ATerm w_16 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_16);
      t = n_21;
    }
  else
    {
      t = s_16;
      if(match_cons(t, sym_SDefT_4))
        {
          n_21 = ATgetArgument(t, 0);
          {
            ATerm z_16 = ATgetArgument(t, 1);
          }
          {
            ATerm a_17 = ATgetArgument(t, 2);
          }
          {
            ATerm b_17 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = n_21;
    }
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm l_21 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      l_21 = ATgetArgument(t, 0);
      {
        ATerm c_17 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = l_21;
  t = map_1_0(v_1, t);
  return(t);
}
ATerm foldr_3_0 (ATerm d_125 (ATerm), ATerm e_125 (ATerm), ATerm f_125 (ATerm), ATerm t)
{
  ATerm d_17 = t;
  int e_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = d_125(t);
      ;
      LocalPopChoice(e_17);
    }
  else
    {
      t = d_17;
      {
        ATerm y_21 = NULL,z_21 = NULL,c_22 = NULL,d_22 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_21 = ATgetFirst((ATermList) t);
            z_21 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = y_21;
        t = f_125(t);
        c_22 = t;
        t = z_21;
        t = foldr_3_0(d_125, e_125, f_125, t);
        d_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_22, d_22);
        t = e_125(t);
      }
    }
  return(t);
}
ATerm diff_1_0 (ATerm k_122 (ATerm), ATerm t)
{
  ATerm h_22 = NULL,i_22 = NULL;
  if(match_cons(t, sym__2))
    {
      h_22 = ATgetArgument(t, 0);
      i_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_22;
  {
    ATerm j_22 (ATerm t)
    {
      ATerm f_17 = t;
      int g_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
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
                ATerm f_4 = NULL,g_4 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    f_4 = ATgetFirst((ATermList) t);
                    g_4 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = i_22;
                {
                  ATerm w_1 (ATerm t)
                  {
                    ATerm h_4 = NULL;
                    h_4 = t;
                    t = (ATerm) ATmakeAppl(sym__2, f_4, h_4);
                    t = k_122(t);
                    return(t);
                  }
                  t = fetch_1_0(w_1, t);
                  t = g_4;
                  t = j_22(t);
                }
                ;
                LocalPopChoice(i_17);
              }
            else
              {
                t = h_17;
                t = Cons_2_0(_id, j_22, t);
              }
          }
        }
      return(t);
    }
    t = j_22(t);
  }
  return(t);
}
ATerm x_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_17 = ATgetArgument(t, 0);
      if(((ATgetType(j_17) != AT_LIST) || !(ATisEmpty(j_17))))
        _fail(t);
      {
        ATerm k_17 = ATgetArgument(t, 1);
        if(((ATgetType(k_17) != AT_LIST) || !(ATisEmpty(k_17))))
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
  ATerm w_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_17 = ATgetArgument(t, 0);
      if(((ATgetType(l_17) == AT_LIST) && !(ATisEmpty(l_17))))
        {
          w_22 = ATgetFirst((ATermList) l_17);
          y_22 = (ATerm) ATgetNext((ATermList) l_17);
        }
      else
        _fail(t);
      {
        ATerm m_17 = ATgetArgument(t, 1);
        if(((ATgetType(m_17) == AT_LIST) && !(ATisEmpty(m_17))))
          {
            x_22 = ATgetFirst((ATermList) m_17);
            z_22 = (ATerm) ATgetNext((ATermList) m_17);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_22, x_22), (ATerm) ATmakeAppl(sym__2, y_22, z_22));
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm c_23 = NULL,d_23 = NULL;
  if(match_cons(t, sym__2))
    {
      c_23 = ATgetArgument(t, 0);
      d_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_23), c_23);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm o_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL,v_22 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm n_17 = ATgetFirst((ATermList) t);
      if(match_cons(n_17, sym__2))
        {
          o_22 = ATgetArgument(n_17, 0);
          p_22 = ATgetArgument(n_17, 1);
        }
      else
        _fail(t);
      q_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(p_22);
  if(match_cons(t, sym__2))
    {
      r_22 = ATgetArgument(t, 0);
      s_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(o_22);
  if(match_cons(t, sym__2))
    {
      if((r_22 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      t_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_22, s_22);
  t = genzip_4_0(x_1, y_1, z_1, _id, t);
  v_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_22, q_22);
  {
    ATerm o_17 = t;
    int p_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_17 = ATgetArgument(t, 0);
            ATerm r_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_22;
        {
          ATerm a_2 (ATerm t)
          {
            t = q_22;
            return(t);
          }
          t = at_end_1_0(a_2, t);
        }
        ;
        LocalPopChoice(p_17);
      }
    else
      {
        t = o_17;
        {
          ATerm n_4 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, v_22, q_22));
          if(match_cons(t, sym__2))
            {
              ATerm s_17 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) s_17) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              n_4 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = n_4;
          t = concat_0_0(t);
        }
      }
  }
  return(t);
}
ATerm while_not_2_0 (ATerm l_131 (ATerm), ATerm m_131 (ATerm), ATerm t)
{
  ATerm i_23 (ATerm t)
  {
    ATerm t_17 = t;
    int u_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_131(t);
        ;
        LocalPopChoice(u_17);
      }
    else
      {
        t = t_17;
        t = m_131(t);
        t = i_23(t);
      }
    return(t);
  }
  t = i_23(t);
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
  ATerm o_23 = NULL;
  o_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, o_23);
  return(t);
}
ATerm c_2 (ATerm t)
{
  t = _2_0(_id, m_2, t);
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm v_17 = t;
  int w_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(_id, p_2, t);
      ;
      LocalPopChoice(w_17);
    }
  else
    {
      t = v_17;
      {
        ATerm z_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL;
        if(match_cons(t, sym__2))
          {
            z_23 = ATgetArgument(t, 0);
            a_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_24;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_24 = ATgetFirst((ATermList) t);
            c_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_23), b_24), c_24);
      }
    }
  return(t);
}
ATerm m_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm x_17 = t;
  int y_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_23 = ATgetFirst((ATermList) t);
          t_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_23;
      if(match_cons(t, sym__2))
        {
          r_23 = ATgetArgument(t, 0);
          s_23 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = s_23;
      if((r_23 != t))
        {
          _fail(t);
        }
      t = t_23;
      ;
      LocalPopChoice(y_17);
    }
  else
    {
      t = x_17;
      t = UfDecompose_0_0(t);
    }
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm h_24 = NULL;
  if(match_cons(t, sym__2))
    {
      h_24 = ATgetArgument(t, 0);
      if((h_24 != ATgetArgument(t, 1)))
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
  ATerm a_18 = t;
  int c_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(b_2, c_2, d_2, t);
      ;
      LocalPopChoice(c_18);
    }
  else
    {
      t = a_18;
      t = diff_1_0(r_2, t);
    }
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm d_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = union_1_0(f_3, t);
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm b_5 = NULL;
  if(match_cons(t, sym__2))
    {
      b_5 = ATgetArgument(t, 0);
      if((b_5 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = union_1_0(i_3, t);
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm s_5 = NULL;
  if(match_cons(t, sym__2))
    {
      s_5 = ATgetArgument(t, 0);
      if((s_5 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm f_129 (ATerm), ATerm g_129 (ATerm), ATerm h_129 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm p_24 (ATerm t)
  {
    ATerm d_18 = t;
    int e_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_129(t);
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
              ATerm i_24 = NULL,m_24 = NULL,t_4 = NULL,u_4 = NULL;
              i_24 = t;
              t = g_129(t);
              m_24 = t;
              t = i_24;
              {
                ATerm z_2 (ATerm t)
                {
                  ATerm p_4 = NULL;
                  t = p_24(t);
                  p_4 = t;
                  t = (ATerm) ATmakeAppl(sym__2, p_4, m_24);
                  t = diff_0_0(t);
                  return(t);
                }
                t = h_129(z_2, p_24, c_3, t);
                t_4 = t;
                t = SSL_explode_term(t_4);
                if(match_cons(t, sym__2))
                  {
                    ATerm h_18 = ATgetArgument(t, 0);
                    u_4 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = u_4;
                t = foldr_3_0(d_3, e_3, _id, t);
              }
              ;
              LocalPopChoice(g_18);
            }
          else
            {
              t = f_18;
              {
                ATerm c_5 = NULL,e_5 = NULL;
                c_5 = t;
                t = SSL_explode_term(c_5);
                if(match_cons(t, sym__2))
                  {
                    ATerm i_18 = ATgetArgument(t, 0);
                    e_5 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = e_5;
                t = foldr_3_0(g_3, h_3, p_24, t);
              }
            }
        }
      }
    return(t);
  }
  t = p_24(t);
  return(t);
}
ATerm DynamicRules_1_0 (ATerm w_101 (ATerm), ATerm t)
{
  ATerm q_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL;
  x_24 = t;
  if(match_cons(t, sym_DynamicRules_1))
    {
      v_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_24);
  q_24 = t;
  t = v_24;
  t = w_101(t);
  w_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, w_24), q_24);
  return(t);
}
ATerm RDefT_4_0 (ATerm n_101 (ATerm), ATerm o_101 (ATerm), ATerm p_101 (ATerm), ATerm q_101 (ATerm), ATerm t)
{
  ATerm d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL;
  m_25 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      e_25 = ATgetArgument(t, 0);
      f_25 = ATgetArgument(t, 1);
      g_25 = ATgetArgument(t, 2);
      h_25 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_25);
  d_25 = t;
  t = e_25;
  t = n_101(t);
  i_25 = t;
  t = f_25;
  t = o_101(t);
  j_25 = t;
  t = g_25;
  t = p_101(t);
  k_25 = t;
  t = h_25;
  t = q_101(t);
  l_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDefT_4, i_25, j_25, k_25, l_25), d_25);
  return(t);
}
ATerm SDefT_4_0 (ATerm h_105 (ATerm), ATerm i_105 (ATerm), ATerm j_105 (ATerm), ATerm k_105 (ATerm), ATerm t)
{
  ATerm p_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL,y_25 = NULL,z_25 = NULL,a_26 = NULL;
  a_26 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      q_25 = ATgetArgument(t, 0);
      r_25 = ATgetArgument(t, 1);
      s_25 = ATgetArgument(t, 2);
      t_25 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_26);
  p_25 = t;
  t = q_25;
  t = h_105(t);
  u_25 = t;
  t = r_25;
  t = i_105(t);
  v_25 = t;
  t = s_25;
  t = j_105(t);
  y_25 = t;
  t = t_25;
  t = k_105(t);
  z_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, u_25, v_25, y_25, z_25), p_25);
  return(t);
}
ATerm Scope_2_0 (ATerm z_102 (ATerm), ATerm a_103 (ATerm), ATerm t)
{
  ATerm h_26 = NULL,j_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL,o_26 = NULL;
  o_26 = t;
  if(match_cons(t, sym_Scope_2))
    {
      j_26 = ATgetArgument(t, 0);
      l_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_26);
  h_26 = t;
  t = j_26;
  t = z_102(t);
  m_26 = t;
  t = l_26;
  t = a_103(t);
  n_26 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, m_26, n_26), h_26);
  return(t);
}
ATerm tboundin_3_0 (ATerm b_113 (ATerm), ATerm c_113 (ATerm), ATerm d_113 (ATerm), ATerm t)
{
  ATerm j_18 = t;
  int k_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(d_113, b_113, t);
      ;
      LocalPopChoice(k_18);
    }
  else
    {
      t = j_18;
      {
        ATerm l_18 = t;
        int m_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(d_113, d_113, d_113, b_113, t);
            ;
            LocalPopChoice(m_18);
          }
        else
          {
            t = l_18;
            {
              ATerm n_18 = t;
              int o_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(d_113, d_113, d_113, b_113, t);
                  ;
                  LocalPopChoice(o_18);
                }
              else
                {
                  t = n_18;
                  t = DynamicRules_1_0(b_113, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm u_26 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      u_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, u_26);
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm p_18 = t;
  int q_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(q_18);
    }
  else
    {
      t = p_18;
      {
        ATerm w_26 = NULL,y_26 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            w_26 = ATgetArgument(t, 0);
            t = w_26;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm r_18 = t;
            int u_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm v_18 = ATgetArgument(t, 0);
                    ATerm w_18 = ATgetArgument(t, 1);
                    y_26 = ATgetArgument(t, 2);
                    {
                      ATerm x_18 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(u_18);
                t = y_26;
                t = map_1_0(l_3, t);
              }
            else
              {
                t = r_18;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm y_18 = ATgetArgument(t, 0);
                    ATerm b_19 = ATgetArgument(t, 1);
                    y_26 = ATgetArgument(t, 2);
                    {
                      ATerm c_19 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = y_26;
                t = map_1_0(m_3, t);
              }
          }
      }
    }
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm e_27 = NULL;
  ATerm d_19 = t;
  int e_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_27 = ATgetArgument(t, 0);
          {
            ATerm f_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_19);
      t = e_27;
    }
  else
    {
      t = d_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_27;
    }
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm o_27 = NULL;
  ATerm h_19 = t;
  int i_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_27 = ATgetArgument(t, 0);
          {
            ATerm j_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_19);
      t = o_27;
    }
  else
    {
      t = h_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_27;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(j_3, k_3, tboundin_3_0, t);
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm d_28 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_28);
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm k_19 = t;
  int l_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(l_19);
    }
  else
    {
      t = k_19;
      {
        ATerm f_28 = NULL,j_28 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            f_28 = ATgetArgument(t, 0);
            t = f_28;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm m_19 = t;
            int n_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm o_19 = ATgetArgument(t, 0);
                    ATerm p_19 = ATgetArgument(t, 1);
                    j_28 = ATgetArgument(t, 2);
                    {
                      ATerm q_19 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(n_19);
                t = j_28;
                t = map_1_0(p_3, t);
              }
            else
              {
                t = m_19;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm r_19 = ATgetArgument(t, 0);
                    ATerm s_19 = ATgetArgument(t, 1);
                    j_28 = ATgetArgument(t, 2);
                    {
                      ATerm t_19 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = j_28;
                t = map_1_0(q_3, t);
              }
          }
      }
    }
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm r_28 = NULL;
  ATerm v_19 = t;
  int w_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_28 = ATgetArgument(t, 0);
          {
            ATerm x_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_19);
      t = r_28;
    }
  else
    {
      t = v_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_28;
    }
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm z_28 = NULL;
  ATerm y_19 = t;
  int z_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_28 = ATgetArgument(t, 0);
          {
            ATerm a_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_19);
      t = z_28;
    }
  else
    {
      t = y_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_28;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm w_27 = NULL,a_28 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      a_28 = ATgetArgument(t, 0);
      t = a_28;
      if(match_cons(t, sym_Rule_3))
        {
          w_27 = ATgetArgument(t, 0);
          {
            ATerm c_20 = ATgetArgument(t, 1);
          }
          {
            ATerm g_20 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = w_27;
      t = free_vars_3_0(n_3, o_3, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          a_28 = ATgetArgument(t, 0);
          {
            ATerm h_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = a_28;
    }
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm o_29 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_29);
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm l_20 = t;
  int m_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(m_20);
    }
  else
    {
      t = l_20;
      {
        ATerm r_29 = NULL,t_29 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            r_29 = ATgetArgument(t, 0);
            t = r_29;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm q_20 = t;
            int w_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm x_20 = ATgetArgument(t, 0);
                    ATerm y_20 = ATgetArgument(t, 1);
                    t_29 = ATgetArgument(t, 2);
                    {
                      ATerm z_20 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(w_20);
                t = t_29;
                t = map_1_0(t_3, t);
              }
            else
              {
                t = q_20;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm a_21 = ATgetArgument(t, 0);
                    ATerm d_21 = ATgetArgument(t, 1);
                    t_29 = ATgetArgument(t, 2);
                    {
                      ATerm i_21 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = t_29;
                t = map_1_0(u_3, t);
              }
          }
      }
    }
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm z_29 = NULL;
  ATerm j_21 = t;
  int k_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_29 = ATgetArgument(t, 0);
          {
            ATerm m_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_21);
      t = z_29;
    }
  else
    {
      t = j_21;
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
ATerm u_3 (ATerm t)
{
  ATerm f_30 = NULL;
  ATerm o_21 = t;
  int p_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_30 = ATgetArgument(t, 0);
          {
            ATerm q_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_21);
      t = f_30;
    }
  else
    {
      t = o_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_30;
    }
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm i_30 = NULL;
  if(match_cons(t, sym_SVar_1))
    {
      i_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, i_30);
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm r_21 = t;
  int s_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind1_0_0(t);
      ;
      LocalPopChoice(s_21);
    }
  else
    {
      t = r_21;
      {
        ATerm k_30 = NULL,l_30 = NULL;
        ATerm t_21 = t;
        int u_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SDef_3))
              {
                ATerm v_21 = ATgetArgument(t, 0);
                l_30 = ATgetArgument(t, 1);
                {
                  ATerm w_21 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            LocalPopChoice(u_21);
            t = l_30;
            t = map_1_0(y_3, t);
          }
        else
          {
            t = t_21;
            {
              ATerm x_21 = t;
              int a_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      k_30 = ATgetArgument(t, 0);
                      {
                        ATerm b_22 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(a_22);
                  t = (ATerm) ATinsert(ATempty, k_30);
                }
              else
                {
                  t = x_21;
                  {
                    ATerm e_22 = t;
                    int f_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_SDefT_4))
                          {
                            ATerm g_22 = ATgetArgument(t, 0);
                            l_30 = ATgetArgument(t, 1);
                            {
                              ATerm k_22 = ATgetArgument(t, 2);
                            }
                            {
                              ATerm l_22 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(f_22);
                        t = l_30;
                        t = map_1_0(z_3, t);
                      }
                    else
                      {
                        t = e_22;
                        if(match_cons(t, sym_RDefT_4))
                          {
                            ATerm m_22 = ATgetArgument(t, 0);
                            l_30 = ATgetArgument(t, 1);
                            {
                              ATerm n_22 = ATgetArgument(t, 2);
                            }
                            {
                              ATerm u_22 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        t = l_30;
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
ATerm y_3 (ATerm t)
{
  ATerm r_30 = NULL;
  ATerm a_23 = t;
  int b_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_30 = ATgetArgument(t, 0);
          {
            ATerm e_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_23);
      t = r_30;
    }
  else
    {
      t = a_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_30;
    }
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm b_31 = NULL;
  ATerm f_23 = t;
  int g_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_31 = ATgetArgument(t, 0);
          {
            ATerm h_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_23);
      t = b_31;
    }
  else
    {
      t = f_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_31;
    }
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm k_31 = NULL;
  ATerm j_23 = t;
  int k_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_31 = ATgetArgument(t, 0);
          {
            ATerm l_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_23);
      t = k_31;
    }
  else
    {
      t = j_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_31;
    }
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm m_23 = t;
  if((PushChoice() == 0))
    {
      t = TopLevel_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = m_23;
    }
  return(t);
}
ATerm SuperCombinator_0_0 (ATerm t)
{
  ATerm l_29 = NULL,m_29 = NULL;
  l_29 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm n_23 = ATgetArgument(t, 0);
      ATerm p_23 = ATgetArgument(t, 1);
      ATerm u_23 = ATgetArgument(t, 2);
      ATerm v_23 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  m_29 = t;
  t = l_29;
  t = free_vars_3_0(r_3, s_3, tboundin_3_0, t);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = l_29;
  t = free_vars_3_0(v_3, x_3, sboundin_3_0, t);
  t = filter_1_0(b_4, t);
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = m_29;
  return(t);
}
ATerm partition_1_0 (ATerm y_126 (ATerm), ATerm t)
{
  ATerm f_32 (ATerm t)
  {
    ATerm w_23 = t;
    int x_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = term_y_23;
        ;
        LocalPopChoice(x_23);
      }
    else
      {
        t = w_23;
        {
          ATerm d_24 = t;
          int e_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL,a_6 = NULL,f_6 = NULL;
              ATerm c_4 (ATerm t)
              {
                t = y_126(t);
                if(((s_31 != NULL) && (s_31 != t)))
                  _fail(t);
                else
                  s_31 = t;
                return(t);
              }
              t = Cons_2_0(c_4, _id, t);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm f_24 = ATgetFirst((ATermList) t);
                  t_31 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = t_31;
              t = f_32(t);
              u_31 = t;
              t = SSL_explode_term(u_31);
              if(match_cons(t, sym__2))
                {
                  ATerm g_24 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) g_24) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm j_24 = ATgetArgument(t, 1);
                    if(((ATgetType(j_24) == AT_LIST) && !(ATisEmpty(j_24))))
                      {
                        a_6 = ATgetFirst((ATermList) j_24);
                        {
                          ATerm k_24 = (ATerm) ATgetNext((ATermList) j_24);
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = SSL_explode_term(u_31);
              if(match_cons(t, sym__2))
                {
                  ATerm l_24 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) l_24) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm n_24 = ATgetArgument(t, 1);
                    if(((ATgetType(n_24) == AT_LIST) && !(ATisEmpty(n_24))))
                      {
                        ATerm o_24 = ATgetFirst((ATermList) n_24);
                        ATerm r_24 = (ATerm) ATgetNext((ATermList) n_24);
                        if(((ATgetType(r_24) == AT_LIST) && !(ATisEmpty(r_24))))
                          {
                            f_6 = ATgetFirst((ATermList) r_24);
                            {
                              ATerm s_24 = (ATerm) ATgetNext((ATermList) r_24);
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
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_6), not_null(s_31)), f_6);
              ;
              LocalPopChoice(e_24);
            }
          else
            {
              t = d_24;
              {
                ATerm x_31 = NULL,y_31 = NULL,z_31 = NULL,o_6 = NULL,s_6 = NULL;
                ATerm e_4 (ATerm t)
                {
                  if(((x_31 != NULL) && (x_31 != t)))
                    _fail(t);
                  else
                    x_31 = t;
                  return(t);
                }
                t = Cons_2_0(e_4, _id, t);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm t_24 = ATgetFirst((ATermList) t);
                    y_31 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = y_31;
                t = f_32(t);
                z_31 = t;
                t = SSL_explode_term(z_31);
                if(match_cons(t, sym__2))
                  {
                    ATerm u_24 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) u_24) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm y_24 = ATgetArgument(t, 1);
                      if(((ATgetType(y_24) == AT_LIST) && !(ATisEmpty(y_24))))
                        {
                          o_6 = ATgetFirst((ATermList) y_24);
                          {
                            ATerm z_24 = (ATerm) ATgetNext((ATermList) y_24);
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = SSL_explode_term(z_31);
                if(match_cons(t, sym__2))
                  {
                    ATerm a_25 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) a_25) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm b_25 = ATgetArgument(t, 1);
                      if(((ATgetType(b_25) == AT_LIST) && !(ATisEmpty(b_25))))
                        {
                          ATerm c_25 = ATgetFirst((ATermList) b_25);
                          ATerm n_25 = (ATerm) ATgetNext((ATermList) b_25);
                          if(((ATgetType(n_25) == AT_LIST) && !(ATisEmpty(n_25))))
                            {
                              s_6 = ATgetFirst((ATermList) n_25);
                              {
                                ATerm o_25 = (ATerm) ATgetNext((ATermList) n_25);
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
                t = (ATerm) ATmakeAppl(sym__2, o_6, (ATerm) ATinsert(CheckATermList(s_6), not_null(x_31)));
              }
            }
        }
      }
    return(t);
  }
  t = f_32(t);
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm q_32 = NULL,s_32 = NULL,t_32 = NULL,u_32 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      q_32 = ATgetArgument(t, 0);
      s_32 = ATgetArgument(t, 1);
      t_32 = ATgetArgument(t, 2);
      u_32 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_32, term_x_25);
  t = assert_1_0(j_4, t);
  t = (ATerm) ATmakeAppl(sym_SDefT_4, q_32, s_32, t_32, u_32);
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = term_b_26;
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = repeat_1_0(l_4, t);
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm c_26 = t;
  int d_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Simplify_0_0(t);
      ;
      LocalPopChoice(d_26);
    }
  else
    {
      t = c_26;
      {
        ATerm e_26 = t;
        int f_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_32 = NULL,x_32 = NULL,y_32 = NULL,z_32 = NULL;
            if(match_cons(t, sym_Seq_2))
              {
                w_32 = ATgetArgument(t, 0);
                x_32 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = x_32;
            if(match_cons(t, sym_Let_2))
              {
                y_32 = ATgetArgument(t, 0);
                z_32 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Let_2, y_32, (ATerm) ATmakeAppl(sym_Seq_2, w_32, z_32));
            ;
            LocalPopChoice(f_26);
          }
        else
          {
            t = e_26;
            {
              ATerm g_26 = t;
              int i_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = FuseScope_0_0(t);
                  ;
                  LocalPopChoice(i_26);
                }
              else
                {
                  t = g_26;
                  {
                    ATerm k_26 = t;
                    int p_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = WhereSavesCurrentTerm_0_0(t);
                        ;
                        LocalPopChoice(p_26);
                      }
                    else
                      {
                        t = k_26;
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
ATerm LiftFromLet_0_0 (ATerm t)
{
  ATerm j_32 = NULL,k_32 = NULL,l_32 = NULL,p_32 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      j_32 = ATgetArgument(t, 0);
      k_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_32;
  t = partition_1_0(SuperCombinator_0_0, t);
  if(match_cons(t, sym__2))
    {
      l_32 = ATgetArgument(t, 0);
      p_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_32;
  t = map_1_0(i_4, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Let_2, p_32, k_32), l_32);
  t = downup_1_0(k_4, t);
  return(t);
}
ATerm union_1_0 (ATerm p_122 (ATerm), ATerm t)
{
  ATerm g_33 = NULL,h_33 = NULL;
  if(match_cons(t, sym__2))
    {
      g_33 = ATgetArgument(t, 0);
      h_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_33;
  {
    ATerm i_33 (ATerm t)
    {
      ATerm q_26 = t;
      int r_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = h_33;
          ;
          LocalPopChoice(r_26);
        }
      else
        {
          t = q_26;
          {
            ATerm s_26 = t;
            int t_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_6 = NULL,u_6 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    t_6 = ATgetFirst((ATermList) t);
                    u_6 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = h_33;
                {
                  ATerm m_4 (ATerm t)
                  {
                    ATerm v_6 = NULL;
                    v_6 = t;
                    t = (ATerm) ATmakeAppl(sym__2, t_6, v_6);
                    t = p_122(t);
                    return(t);
                  }
                  t = fetch_1_0(m_4, t);
                  t = u_6;
                  t = i_33(t);
                }
                ;
                LocalPopChoice(t_26);
              }
            else
              {
                t = s_26;
                t = Cons_2_0(_id, i_33, t);
              }
          }
        }
      return(t);
    }
    t = i_33(t);
  }
  return(t);
}
ATerm genzip_4_0 (ATerm m_118 (ATerm), ATerm n_118 (ATerm), ATerm o_118 (ATerm), ATerm p_118 (ATerm), ATerm t)
{
  ATerm j_33 (ATerm t)
  {
    ATerm v_26 = t;
    int x_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_118(t);
        ;
        LocalPopChoice(x_26);
      }
    else
      {
        t = v_26;
        t = n_118(t);
        t = _2_0(p_118, j_33, t);
        t = o_118(t);
      }
    return(t);
  }
  t = j_33(t);
  return(t);
}
ATerm o_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_y_23;
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm x_33 = NULL,y_33 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_33 = ATgetFirst((ATermList) t);
      y_33 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_33, y_33);
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm z_33 = NULL,a_34 = NULL,b_34 = NULL,c_34 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_26 = ATgetArgument(t, 0);
      if(match_cons(z_26, sym__2))
        {
          z_33 = ATgetArgument(z_26, 0);
          b_34 = ATgetArgument(z_26, 1);
        }
      else
        _fail(t);
      {
        ATerm a_27 = ATgetArgument(t, 1);
        if(match_cons(a_27, sym__2))
          {
            a_34 = ATgetArgument(a_27, 0);
            c_34 = ATgetArgument(a_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_34), z_33), (ATerm) ATinsert(CheckATermList(c_34), b_34));
  return(t);
}
ATerm s_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm v_4 (ATerm t)
{
  t = union_1_0(w_4, t);
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm d_34 = NULL;
  if(match_cons(t, sym__2))
    {
      d_34 = ATgetArgument(t, 0);
      if((d_34 != ATgetArgument(t, 1)))
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
  ATerm e_34 = NULL;
  if(match_cons(t, sym__2))
    {
      e_34 = ATgetArgument(t, 0);
      if((e_34 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm CollectSplit_2_0 (ATerm m_123 (ATerm), ATerm n_123 (ATerm), ATerm t)
{
  ATerm k_33 = NULL,l_33 = NULL,n_33 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL,r_33 = NULL,s_33 = NULL,t_33 = NULL,u_33 = NULL,v_33 = NULL,w_33 = NULL;
  k_33 = t;
  l_33 = t;
  t = SSL_explode_term(l_33);
  if(match_cons(t, sym__2))
    {
      n_33 = ATgetArgument(t, 0);
      o_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_33);
  p_33 = t;
  t = o_33;
  t = genzip_4_0(o_4, q_4, r_4, m_123, t);
  if(match_cons(t, sym__2))
    {
      q_33 = ATgetArgument(t, 0);
      r_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_mkterm(n_33, q_33);
  s_33 = t;
  t = SSLsetAnnotations(s_33, p_33);
  t = n_123(t);
  if(match_cons(t, sym__2))
    {
      t_33 = ATgetArgument(t, 0);
      u_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_33;
  t = foldr_2_0(s_4, v_4, t);
  v_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_33, v_33);
  t = union_1_0(x_4, t);
  w_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_33, w_33);
  return(t);
}
ATerm collect_split_1_0 (ATerm j_124 (ATerm), ATerm t)
{
  ATerm h_34 (ATerm t)
  {
    ATerm y_4 (ATerm t)
    {
      ATerm b_27 = t;
      int c_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_124(t);
          ;
          LocalPopChoice(c_27);
        }
      else
        {
          t = b_27;
          {
            ATerm f_34 = NULL;
            f_34 = t;
            t = (ATerm) ATmakeAppl(sym__2, f_34, (ATerm) ATempty);
          }
        }
      return(t);
    }
    t = CollectSplit_2_0(h_34, y_4, t);
    return(t);
  }
  t = h_34(t);
  return(t);
}
ATerm lift_sdefs_0_0 (ATerm t)
{
  ATerm j_34 = NULL,k_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL,o_34 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      j_34 = ATgetArgument(t, 0);
      k_34 = ATgetArgument(t, 1);
      l_34 = ATgetArgument(t, 2);
      m_34 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = m_34;
  t = collect_split_1_0(LiftFromLet_0_0, t);
  if(match_cons(t, sym__2))
    {
      n_34 = ATgetArgument(t, 0);
      o_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_34, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, j_34, k_34, l_34, n_34)));
  {
    ATerm d_27 = t;
    int f_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_27 = ATgetArgument(t, 0);
            ATerm h_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = o_34;
        {
          ATerm z_4 (ATerm t)
          {
            t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, j_34, k_34, l_34, n_34));
            return(t);
          }
          t = at_end_1_0(z_4, t);
        }
        ;
        LocalPopChoice(f_27);
      }
    else
      {
        t = d_27;
        {
          ATerm b_7 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, o_34, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, j_34, k_34, l_34, n_34))));
          if(match_cons(t, sym__2))
            {
              ATerm i_27 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) i_27) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              b_7 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_7;
          t = concat_0_0(t);
        }
      }
  }
  return(t);
}
ATerm assert_1_0 (ATerm m_126 (ATerm), ATerm t)
{
  ATerm s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL;
  if(match_cons(t, sym__2))
    {
      s_34 = ATgetArgument(t, 0);
      t_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_126(t);
  u_34 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_34, s_34, t_34);
  t = table_push_0_0(t);
  {
    ATerm j_27 = t;
    int k_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(u_34, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(k_27);
      }
    else
      {
        t = j_27;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_34 = ATgetFirst((ATermList) t);
        w_34 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(u_34, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(w_34), (ATerm) ATinsert(CheckATermList(v_34), s_34)));
    t = (ATerm) ATmakeAppl(sym__2, s_34, t_34);
  }
  return(t);
}
ATerm Strategies_1_0 (ATerm h_98 (ATerm), ATerm t)
{
  ATerm x_34 = NULL,y_34 = NULL,z_34 = NULL,a_35 = NULL;
  a_35 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      y_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_35);
  x_34 = t;
  t = y_34;
  t = h_98(t);
  z_34 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, z_34), x_34);
  return(t);
}
ATerm Specification_1_0 (ATerm m_98 (ATerm), ATerm t)
{
  ATerm d_35 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL;
  g_35 = t;
  if(match_cons(t, sym_Specification_1))
    {
      e_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_35);
  d_35 = t;
  t = e_35;
  t = m_98(t);
  f_35 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, f_35), d_35);
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm k_35 = NULL;
  k_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_35, term_m_27);
  t = assert_1_0(d_5, t);
  t = k_35;
  return(t);
}
ATerm d_5 (ATerm t)
{
  t = term_b_26;
  return(t);
}
ATerm declare_standard_strategies_0_0 (ATerm t)
{
  ATerm j_35 = NULL;
  j_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_p_27), term_n_27);
  t = map_1_0(a_5, t);
  t = j_35;
  return(t);
}
ATerm f_5 (ATerm t)
{
  t = Cons_2_0(_id, g_5, t);
  return(t);
}
ATerm g_5 (ATerm t)
{
  t = Cons_2_0(h_5, i_5, t);
  return(t);
}
ATerm h_5 (ATerm t)
{
  t = Strategies_1_0(j_5, t);
  return(t);
}
ATerm i_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm j_5 (ATerm t)
{
  t = map_1_0(k_5, t);
  t = map_1_0(lift_sdefs_0_0, t);
  t = concat_0_0(t);
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm l_35 = NULL,m_35 = NULL,n_35 = NULL,o_35 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      l_35 = ATgetArgument(t, 0);
      m_35 = ATgetArgument(t, 1);
      n_35 = ATgetArgument(t, 2);
      o_35 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_35, term_x_25);
  t = assert_1_0(l_5, t);
  t = (ATerm) ATmakeAppl(sym_SDefT_4, l_35, m_35, n_35, o_35);
  return(t);
}
ATerm l_5 (ATerm t)
{
  t = term_b_26;
  return(t);
}
ATerm lift_definitions_0_0 (ATerm t)
{
  t = declare_standard_strategies_0_0(t);
  t = Specification_1_0(f_5, t);
  return(t);
}
ATerm _2_0 (ATerm o_93 (ATerm), ATerm p_93 (ATerm), ATerm t)
{
  ATerm p_35 = NULL,q_35 = NULL,r_35 = NULL,t_35 = NULL,u_35 = NULL,v_35 = NULL;
  v_35 = t;
  if(match_cons(t, sym__2))
    {
      q_35 = ATgetArgument(t, 0);
      r_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_35);
  p_35 = t;
  t = q_35;
  t = o_93(t);
  t_35 = t;
  t = r_35;
  t = p_93(t);
  u_35 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, t_35, u_35), p_35);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm t_135 (ATerm), ATerm t)
{
  ATerm y_35 = NULL,z_35 = NULL,a_36 = NULL;
  if(match_cons(t, sym__2))
    {
      y_35 = ATgetArgument(t, 0);
      z_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_35, term_q_27);
  t = open_stream_0_0(t);
  a_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_36, z_35);
  t = t_135(t);
  t = fclose_0_0(t);
  t = z_35;
  return(t);
}
ATerm p_5 (ATerm t)
{
  t = fetch_1_0(r_5, t);
  return(t);
}
ATerm q_5 (ATerm t)
{
  t = WriteToFile_1_0(t_5, t);
  return(t);
}
ATerm r_5 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm d_36 = NULL,e_36 = NULL,f_36 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_27 = ATgetArgument(t, 0);
      if(match_cons(r_27, sym_Stream_1))
        {
          d_36 = ATgetArgument(r_27, 0);
        }
      else
        _fail(t);
      e_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(d_36, e_36);
  f_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_36);
  return(t);
}
ATerm u_5 (ATerm t)
{
  t = WriteToFile_1_0(v_5, t);
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm g_36 = NULL,h_36 = NULL,i_36 = NULL,j_36 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_27 = ATgetArgument(t, 0);
      if(match_cons(s_27, sym_Stream_1))
        {
          g_36 = ATgetArgument(s_27, 0);
        }
      else
        _fail(t);
      h_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(g_36, h_36);
  i_36 = t;
  t = SSL_fputc((ATerm)ATmakeInt(10), i_36);
  j_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_36);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm b_36 = NULL,c_36 = NULL;
  b_36 = t;
  {
    ATerm m_5 (ATerm t)
    {
      ATerm t_27 = t;
      int u_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_5 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((c_36 != NULL) && (c_36 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  c_36 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(n_5, t);
          ;
          LocalPopChoice(u_27);
        }
      else
        {
          t = t_27;
          t = term_v_27;
          if(((c_36 != NULL) && (c_36 != t)))
            _fail(t);
          else
            c_36 = t;
        }
      return(t);
    }
    t = _2_0(m_5, _id, t);
    t = b_36;
    {
      ATerm o_5 (ATerm t)
      {
        ATerm c_7 = NULL;
        c_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_36), c_7);
        return(t);
      }
      t = _2_0(_id, o_5, t);
      {
        ATerm x_27 = t;
        int y_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(p_5, q_5, t);
            ;
            LocalPopChoice(y_27);
          }
        else
          {
            t = x_27;
            t = _2_0(_id, u_5, t);
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
  ATerm k_36 = NULL,l_36 = NULL,m_36 = NULL,n_36 = NULL,o_36 = NULL;
  k_36 = t;
  t = dtime_0_0(t);
  t = k_36;
  t = v_138(t);
  l_36 = t;
  t = dtime_0_0(t);
  m_36 = t;
  t = l_36;
  if(match_cons(t, sym__2))
    {
      n_36 = ATgetArgument(t, 0);
      o_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_36), (ATerm) ATmakeAppl(sym_Runtime_1, m_36)), o_36);
  return(t);
}
ATerm c_37 (ATerm w_36, ATerm t)
{
  t = SSL_fclose(w_36);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm z_36 = NULL,a_37 = NULL;
  a_37 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_36 = ATgetArgument(t, 0);
      {
        ATerm z_27 = t;
        int b_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_36);
            ;
            LocalPopChoice(b_28);
          }
        else
          {
            t = z_27;
            t = c_37(a_37, t);
          }
      }
    }
  else
    {
      t = c_37(a_37, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm d_37 = NULL;
  t = SSL_stdin_stream();
  d_37 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_37);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm g_37 = NULL;
  t = SSL_stdout_stream();
  g_37 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_37);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm i_37 = NULL;
  t = SSL_stderr_stream();
  i_37 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_37);
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm u_37 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      u_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_37;
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm y_37 = NULL;
  y_37 = t;
  t = SSL_is_string(y_37);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_28 = ATgetArgument(t, 0);
      ATerm e_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_28 = t;
    int h_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_7 = NULL,r_7 = NULL;
        q_7 = t;
        t = SSL_explode_term(q_7);
        if(match_cons(t, sym__2))
          {
            ATerm i_28 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) i_28) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm k_28 = ATgetArgument(t, 1);
              if(((ATgetType(k_28) == AT_LIST) && !(ATisEmpty(k_28))))
                {
                  r_7 = ATgetFirst((ATermList) k_28);
                  {
                    ATerm l_28 = (ATerm) ATgetNext((ATermList) k_28);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = r_7;
        if(match_cons(t, sym_stderr_0))
          {
            t = r_7;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = r_7;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = r_7;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(h_28);
      }
    else
      {
        t = g_28;
        {
          ATerm m_28 = t;
          int n_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_37 = NULL,s_37 = NULL,t_37 = NULL;
              t = _2_0(w_5, _id, t);
              if(match_cons(t, sym__2))
                {
                  q_37 = ATgetArgument(t, 0);
                  s_37 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(q_37, s_37);
              t_37 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, t_37);
              ;
              LocalPopChoice(n_28);
            }
          else
            {
              t = m_28;
              {
                ATerm v_37 = NULL,w_37 = NULL,x_37 = NULL;
                t = _2_0(x_5, _id, t);
                if(match_cons(t, sym__2))
                  {
                    v_37 = ATgetArgument(t, 0);
                    w_37 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(v_37, w_37);
                x_37 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, x_37);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL;
  ATerm o_28 = t;
  int p_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_38 = NULL;
      c_38 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_38, term_q_28);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(p_28);
    }
  else
    {
      t = o_28;
      {
        ATerm s_7 = NULL;
        s_7 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, s_7), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = s_7;
        _fail(t);
      }
    }
  z_37 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(b_38);
  a_38 = t;
  t = z_37;
  t = fclose_0_0(t);
  t = a_38;
  return(t);
}
ATerm fetch_1_0 (ATerm m_120 (ATerm), ATerm t)
{
  ATerm h_38 (ATerm t)
  {
    ATerm s_28 = t;
    int t_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(m_120, _id, t);
        ;
        LocalPopChoice(t_28);
      }
    else
      {
        t = s_28;
        t = Cons_2_0(_id, h_38, t);
      }
    return(t);
  }
  t = h_38(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm u_28 = t;
  int v_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(v_28);
    }
  else
    {
      t = u_28;
      {
        ATerm k_38 = NULL,l_38 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_38 = ATgetFirst((ATermList) t);
            l_38 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = k_38;
        {
          ATerm y_5 (ATerm t)
          {
            t = l_38;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(y_5, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm s_120 (ATerm), ATerm t)
{
  ATerm r_38 (ATerm t)
  {
    ATerm w_28 = t;
    int x_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, r_38, t);
        ;
        LocalPopChoice(x_28);
      }
    else
      {
        t = w_28;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_120(t);
      }
    return(t);
  }
  t = r_38(t);
  return(t);
}
ATerm z_5 (ATerm t)
{
  ATerm u_38 = NULL;
  u_38 = t;
  t = SSL_explode_string(u_38);
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm v_38 = NULL;
  v_38 = t;
  t = SSL_explode_string(v_38);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm t_38 = NULL;
  t = _2_0(z_5, b_6, t);
  {
    ATerm y_28 = t;
    int a_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_38 = NULL,y_38 = NULL;
        if(match_cons(t, sym__2))
          {
            x_38 = ATgetArgument(t, 0);
            y_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = x_38;
        {
          ATerm c_6 (ATerm t)
          {
            t = y_38;
            return(t);
          }
          t = at_end_1_0(c_6, t);
        }
        ;
        LocalPopChoice(a_29);
      }
    else
      {
        t = y_28;
        {
          ATerm y_7 = NULL,z_7 = NULL;
          y_7 = t;
          t = SSL_explode_term(y_7);
          if(match_cons(t, sym__2))
            {
              ATerm b_29 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) b_29) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              z_7 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_7;
          t = concat_0_0(t);
        }
      }
    t_38 = t;
    t = SSL_implode_string(t_38);
  }
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm c_29 = t;
  int d_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(d_29);
    }
  else
    {
      t = c_29;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm e_29 = t;
  int f_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_39 = NULL;
      i_39 = t;
      t = SSL_is_string(i_39);
      ;
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
            t = map_1_0(d_6, t);
            ;
            LocalPopChoice(h_29);
          }
        else
          {
            t = g_29;
            {
              ATerm m_39 = NULL,n_39 = NULL,o_39 = NULL;
              m_39 = t;
              if(match_cons(t, sym_Path_1))
                {
                  n_39 = ATgetArgument(t, 0);
                  t = n_39;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      n_39 = ATgetArgument(t, 0);
                      t = n_39;
                      {
                        ATerm i_29 = t;
                        int j_29 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), n_39);
                            {
                              ATerm k_29 = t;
                              int n_29 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm v_8 = NULL;
                                  t = eval_config_0_0(t);
                                  v_8 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), n_39, v_8);
                                  t = v_8;
                                  ;
                                  LocalPopChoice(n_29);
                                }
                              else
                                {
                                  t = k_29;
                                }
                            }
                            ;
                            LocalPopChoice(j_29);
                          }
                        else
                          {
                            t = i_29;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, n_39), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = n_39;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm s_39 = NULL,t_39 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          n_39 = ATgetArgument(t, 0);
                          o_39 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = n_39;
                      t = eval_config_0_0(t);
                      s_39 = t;
                      t = o_39;
                      t = eval_config_0_0(t);
                      t_39 = t;
                      t = (ATerm) ATmakeAppl(sym__2, s_39, t_39);
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
  ATerm p_29 = t;
  int q_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_40 = NULL,n_40 = NULL;
      a_40 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm s_29 = t;
        int u_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_9 = NULL;
            t = eval_config_0_0(t);
            f_9 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), f_9);
            t = f_9;
            ;
            LocalPopChoice(u_29);
          }
        else
          {
            t = s_29;
          }
        n_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_40, term_v_29);
        t = geq_0_0(t);
        t = a_40;
        t = e_137(t);
      }
      ;
      LocalPopChoice(q_29);
    }
  else
    {
      t = p_29;
    }
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm p_40 = NULL;
  p_40 = t;
  if(match_string(t, "-k"))
    {
      t = p_40;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = p_40;
    }
  return(t);
}
ATerm g_6 (ATerm t)
{
  ATerm q_40 = NULL,s_40 = NULL;
  q_40 = t;
  t = SSL_string_to_int(q_40);
  s_40 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), s_40);
  t = q_40;
  return(t);
}
ATerm h_6 (ATerm t)
{
  t = term_w_29;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_6, g_6, h_6, t);
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm u_40 = NULL;
  u_40 = t;
  if(match_string(t, "-S"))
    {
      t = u_40;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = u_40;
    }
  return(t);
}
ATerm j_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_y_29;
  return(t);
}
ATerm k_6 (ATerm t)
{
  t = term_a_30;
  return(t);
}
ATerm l_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm v_40 = NULL,w_40 = NULL;
  v_40 = t;
  t = SSL_string_to_int(v_40);
  w_40 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), w_40);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, v_40);
  return(t);
}
ATerm n_6 (ATerm t)
{
  t = term_b_30;
  return(t);
}
ATerm p_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_c_30;
  return(t);
}
ATerm r_6 (ATerm t)
{
  t = term_d_30;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm e_30 = t;
  int g_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_6, j_6, k_6, t);
      ;
      LocalPopChoice(g_30);
    }
  else
    {
      t = e_30;
      {
        ATerm h_30 = t;
        int j_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(l_6, m_6, n_6, t);
            ;
            LocalPopChoice(j_30);
          }
        else
          {
            t = h_30;
            t = Option_3_0(p_6, q_6, r_6, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm z_40 = NULL,a_41 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_41 = NULL;
      t = term_s_8;
      t = d_0(t);
      b_41 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_30, term_n_30, b_41);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm e_41 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_40 = ATgetFirst((ATermList) t);
          a_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_40;
      t = a_0(t);
      t = term_s_8;
      t = b_0(t);
      e_41 = t;
      t = (ATerm) ATinsert(CheckATermList(a_41), e_41);
    }
  return(t);
}
ATerm w_6 (ATerm t)
{
  ATerm g_41 = NULL;
  g_41 = t;
  if(match_string(t, "-o"))
    {
      t = g_41;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = g_41;
    }
  return(t);
}
ATerm x_6 (ATerm t)
{
  ATerm h_41 = NULL;
  h_41 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), h_41);
  t = (ATerm) ATmakeAppl(sym_Output_1, h_41);
  return(t);
}
ATerm y_6 (ATerm t)
{
  t = term_o_30;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_6, x_6, y_6, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm l_41 = NULL,n_41 = NULL,p_41 = NULL,q_41 = NULL;
  if(match_cons(t, sym__3))
    {
      l_41 = ATgetArgument(t, 0);
      n_41 = ATgetArgument(t, 1);
      p_41 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_41, n_41);
  {
    ATerm p_30 = t;
    int q_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_30 = ATgetArgument(t, 0);
            ATerm t_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(l_41, n_41);
        ;
        LocalPopChoice(q_30);
      }
    else
      {
        t = p_30;
        t = (ATerm) ATempty;
      }
    q_41 = t;
    t = SSL_table_put(l_41, n_41, (ATerm) ATinsert(CheckATermList(q_41), p_41));
    t = (ATerm) ATmakeAppl(sym__3, l_41, n_41, p_41);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm y_41 = NULL,z_41 = NULL,a_42 = NULL,b_42 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_42 = NULL;
      t = term_s_8;
      t = m_0(t);
      c_42 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_30, term_n_30, c_42);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm g_42 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_41 = ATgetFirst((ATermList) t);
          z_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_41;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_42 = ATgetFirst((ATermList) t);
          b_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_41;
      t = i_0(t);
      t = a_42;
      t = k_0(t);
      g_42 = t;
      t = (ATerm) ATinsert(CheckATermList(b_42), g_42);
    }
  return(t);
}
ATerm z_6 (ATerm t)
{
  ATerm i_42 = NULL;
  i_42 = t;
  if(match_string(t, "-i"))
    {
      t = i_42;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = i_42;
    }
  return(t);
}
ATerm a_7 (ATerm t)
{
  ATerm j_42 = NULL;
  j_42 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), j_42);
  t = (ATerm) ATmakeAppl(sym_Input_1, j_42);
  return(t);
}
ATerm d_7 (ATerm t)
{
  t = term_u_30;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_6, a_7, d_7, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm k_42 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_8;
  t = whoami_0_0(t);
  k_42 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), k_42));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm v_30 = t;
    int w_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_9 = NULL;
        t = eval_config_0_0(t);
        l_9 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), l_9);
        t = l_9;
        ;
        LocalPopChoice(w_30);
      }
    else
      {
        t = v_30;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm b_125 (ATerm), ATerm c_125 (ATerm), ATerm t)
{
  ATerm x_30 = t;
  int y_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = b_125(t);
      ;
      LocalPopChoice(y_30);
    }
  else
    {
      t = x_30;
      {
        ATerm n_42 = NULL,o_42 = NULL,r_42 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_42 = ATgetFirst((ATermList) t);
            o_42 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = o_42;
        t = foldr_2_0(b_125, c_125, t);
        r_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_42, r_42);
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
ATerm e_7 (ATerm t)
{
  t = term_x_29;
  return(t);
}
ATerm f_7 (ATerm t)
{
  ATerm t_9 = NULL,u_9 = NULL;
  if(match_cons(t, sym__2))
    {
      t_9 = ATgetArgument(t, 0);
      u_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_30 = t;
    int a_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(t_9, u_9);
        ;
        LocalPopChoice(a_31);
      }
    else
      {
        t = z_30;
        t = SSL_addr(t_9, u_9);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm u_42 = NULL,n_9 = NULL,p_9 = NULL;
  t = times_0_0(t);
  n_9 = t;
  t = SSL_explode_term(n_9);
  if(match_cons(t, sym__2))
    {
      ATerm c_31 = ATgetArgument(t, 0);
      p_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_9;
  t = foldr_2_0(e_7, f_7, t);
  u_42 = t;
  t = SSL_TicksToSeconds(u_42);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm g_43 = NULL,h_43 = NULL,i_43 = NULL;
  g_43 = t;
  if(match_cons(t, sym__2))
    {
      h_43 = ATgetArgument(t, 0);
      i_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_31 = t;
    int e_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_43;
        if((h_43 != t))
          {
            _fail(t);
          }
        t = g_43;
        ;
        LocalPopChoice(e_31);
      }
    else
      {
        t = d_31;
        t = g_43;
        {
          ATerm f_31 = t;
          int g_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(h_43, i_43);
              ;
              LocalPopChoice(g_31);
            }
          else
            {
              t = f_31;
              t = SSL_gtr(h_43, i_43);
            }
          t = (ATerm) ATmakeAppl(sym__2, h_43, i_43);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm d_137 (ATerm), ATerm t)
{
  ATerm h_31 = t;
  int i_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_43 = NULL,n_43 = NULL;
      l_43 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm j_31 = t;
        int l_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_10 = NULL;
            t = eval_config_0_0(t);
            l_10 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), l_10);
            t = l_10;
            ;
            LocalPopChoice(l_31);
          }
        else
          {
            t = j_31;
          }
        n_43 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_43, term_m_31);
        t = geq_0_0(t);
        t = l_43;
        t = d_137(t);
      }
      ;
      LocalPopChoice(i_31);
    }
  else
    {
      t = h_31;
    }
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm p_43 = NULL,q_43 = NULL;
  t = run_time_0_0(t);
  p_43 = t;
  t = term_s_8;
  t = whoami_0_0(t);
  q_43 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), p_43), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), q_43));
  t = (ATerm) ATmakeAppl(sym__2, term_n_31, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_31), p_43), term_o_31), q_43));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(g_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm q_31 = t;
  int r_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(r_31);
    }
  else
    {
      t = q_31;
      {
        ATerm v_31 = t;
        int w_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(w_31);
          }
        else
          {
            t = v_31;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm t_139 (ATerm), ATerm t)
{
  ATerm a_32 = t;
  int b_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm c_32 = t;
        int d_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_10 = NULL;
            t = eval_config_0_0(t);
            p_10 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), p_10);
            t = p_10;
            ;
            LocalPopChoice(d_32);
          }
        else
          {
            t = c_32;
          }
      }
      ;
      LocalPopChoice(b_32);
    }
  else
    {
      t = a_32;
      t = fetch_1_0(h_7, t);
    }
  t = t_139(t);
  return(t);
}
ATerm map_1_0 (ATerm b_120 (ATerm), ATerm t)
{
  ATerm r_43 (ATerm t)
  {
    ATerm e_32 = t;
    int g_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(g_32);
      }
    else
      {
        t = e_32;
        t = Cons_2_0(b_120, r_43, t);
      }
    return(t);
  }
  t = r_43(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm t_43 = NULL,u_43 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_43 = ATgetFirst((ATermList) t);
      u_43 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm a_44 = NULL,b_44 = NULL;
        t = u_43;
        t = g_0(t);
        a_44 = t;
        t = t_43;
        t = f_0(t);
        b_44 = t;
        t = u_43;
        {
          ATerm i_7 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(a_44), b_44);
            return(t);
          }
          t = reverse_acc_2_0(f_0, i_7, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_s_8;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm v_110 (ATerm), ATerm t)
{
  ATerm c_44 = NULL,d_44 = NULL,e_44 = NULL,f_44 = NULL;
  f_44 = t;
  if(match_cons(t, sym_Program_1))
    {
      d_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_44);
  c_44 = t;
  t = d_44;
  t = v_110(t);
  e_44 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, e_44), c_44);
  return(t);
}
ATerm k_7 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm l_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm m_7 (ATerm t)
{
  ATerm i_44 = NULL;
  i_44 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_44), term_h_32);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm i_32 = t;
  int m_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm n_32 = t;
        int o_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_10 = NULL;
            t = eval_config_0_0(t);
            t_10 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), t_10);
            t = t_10;
            ;
            LocalPopChoice(o_32);
          }
        else
          {
            t = n_32;
          }
      }
      ;
      LocalPopChoice(m_32);
    }
  else
    {
      t = i_32;
      t = fetch_1_0(k_7, t);
    }
  t = term_r_32;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, l_7, t);
  t = map_1_0(m_7, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm w_110 (ATerm), ATerm t)
{
  ATerm j_44 = NULL,k_44 = NULL,l_44 = NULL,m_44 = NULL;
  m_44 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      k_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_44);
  j_44 = t;
  t = k_44;
  t = w_110(t);
  l_44 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, l_44), j_44);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm q_44 = NULL,r_44 = NULL;
  q_44 = t;
  {
    ATerm v_32 = t;
    int a_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = q_44;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm b_33 = ATgetFirst((ATermList) t);
                ATerm c_33 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = q_44;
          }
        ;
        LocalPopChoice(a_33);
      }
    else
      {
        t = v_32;
        t = (ATerm) ATinsert(ATempty, q_44);
      }
    r_44 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), r_44);
    t = q_44;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm d_33 = t;
    int e_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_10 = NULL;
        t = eval_config_0_0(t);
        y_10 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), y_10);
        t = y_10;
        ;
        LocalPopChoice(e_33);
      }
    else
      {
        t = d_33;
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
  t = term_g_34;
  return(t);
}
ATerm p_7 (ATerm t)
{
  t = term_i_34;
  return(t);
}
ATerm u_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_7 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_p_34;
  return(t);
}
ATerm w_7 (ATerm t)
{
  t = term_q_34;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm r_34 = t;
  int b_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_7, o_7, p_7, t);
      ;
      LocalPopChoice(b_35);
    }
  else
    {
      t = r_34;
      t = Option_3_0(u_7, v_7, w_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm d_98 (ATerm), ATerm e_98 (ATerm), ATerm t)
{
  ATerm x_44 = NULL,y_44 = NULL,z_44 = NULL,a_45 = NULL,b_45 = NULL,c_45 = NULL;
  c_45 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_44 = ATgetFirst((ATermList) t);
      z_44 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_45);
  x_44 = t;
  t = y_44;
  t = d_98(t);
  a_45 = t;
  t = z_44;
  t = e_98(t);
  b_45 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(b_45), a_45), x_44);
  return(t);
}
ATerm x_7 (ATerm t)
{
  ATerm h_45 = NULL;
  h_45 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), h_45);
  t = (ATerm) ATmakeAppl(sym_Program_1, h_45);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm w_141 (ATerm), ATerm t)
{
  ATerm g_45 = NULL;
  g_45 = t;
  {
    ATerm c_35 = t;
    int h_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_35;
        t = w_141(t);
        ;
        LocalPopChoice(h_35);
      }
    else
      {
        t = c_35;
      }
    t = g_45;
    {
      ATerm a_8 (ATerm t)
      {
        ATerm s_35 = t;
        int w_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_35 = t;
            int p_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(p_36);
              }
            else
              {
                t = x_35;
                t = w_141(t);
                t = Cons_2_0(_id, a_8, t);
              }
            ;
            LocalPopChoice(w_35);
          }
        else
          {
            t = s_35;
            {
              ATerm j_45 = NULL,k_45 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  j_45 = ATgetFirst((ATermList) t);
                  k_45 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(k_45), (ATerm) ATmakeAppl(sym_Undefined_1, j_45));
            }
          }
        return(t);
      }
      t = Cons_2_0(x_7, a_8, t);
    }
  }
  return(t);
}
ATerm d_8 (ATerm t)
{
  ATerm w_45 = NULL;
  w_45 = t;
  if(match_string(t, "--help"))
    {
      t = w_45;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = w_45;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = w_45;
        }
    }
  return(t);
}
ATerm e_8 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_q_36;
  return(t);
}
ATerm f_8 (ATerm t)
{
  t = term_r_36;
  return(t);
}
ATerm g_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm v_141 (ATerm), ATerm t)
{
  ATerm t_45 = NULL,u_45 = NULL,v_45 = NULL;
  t_45 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = t_45;
  {
    ATerm c_8 (ATerm t)
    {
      ATerm s_36 = t;
      int t_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_141(t);
          ;
          LocalPopChoice(t_36);
        }
      else
        {
          t = s_36;
          {
            ATerm u_36 = t;
            int v_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(d_8, e_8, f_8, t);
                ;
                LocalPopChoice(v_36);
              }
            else
              {
                t = u_36;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(c_8, t);
    {
      ATerm x_36 = t;
      int y_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_46 = NULL;
          b_46 = t;
          {
            ATerm b_37 = t;
            int e_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = b_46;
                {
                  ATerm f_37 = t;
                  int h_37 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm j_37 = t;
                        int k_37 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm a_12 = NULL;
                            t = eval_config_0_0(t);
                            a_12 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), a_12);
                            t = a_12;
                            ;
                            LocalPopChoice(k_37);
                          }
                        else
                          {
                            t = j_37;
                          }
                      }
                      ;
                      LocalPopChoice(h_37);
                    }
                  else
                    {
                      t = f_37;
                      t = fetch_1_0(g_8, t);
                    }
                  t = b_46;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(e_37);
              }
            else
              {
                t = b_37;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm l_37 = t;
                  int m_37 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm y_12 = NULL;
                      t = eval_config_0_0(t);
                      y_12 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), y_12);
                      t = y_12;
                      ;
                      LocalPopChoice(m_37);
                    }
                  else
                    {
                      t = l_37;
                    }
                  t = b_46;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(y_36);
        }
      else
        {
          t = x_36;
          {
            ATerm n_37 = t;
            int o_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_8 (ATerm t)
                {
                  ATerm i_8 (ATerm t)
                  {
                    if(((u_45 != NULL) && (u_45 != t)))
                      _fail(t);
                    else
                      u_45 = t;
                    return(t);
                  }
                  t = Undefined_1_0(i_8, t);
                  return(t);
                }
                t = fetch_1_0(h_8, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(u_45)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_n_31, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_45)), term_p_37));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(o_37);
              }
            else
              {
                t = n_37;
              }
          }
        }
      v_45 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = v_45;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm v_139 (ATerm), ATerm w_139 (ATerm), ATerm x_139 (ATerm), ATerm y_139 (ATerm), ATerm t)
{
  ATerm e_46 = NULL;
  t = parse_options_1_0(v_139, t);
  e_46 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), e_46);
  t = e_46;
  t = x_139(t);
  {
    ATerm r_37 = t;
    int d_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(w_139, t);
        ;
        LocalPopChoice(d_38);
      }
    else
      {
        t = r_37;
        {
          ATerm e_38 = t;
          int f_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = y_139(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(f_38);
            }
          else
            {
              t = e_38;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm k_8 (ATerm t)
{
  t = if_verbose2_1_0(p_8, t);
  return(t);
}
ATerm m_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_8 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_g_38;
  return(t);
}
ATerm o_8 (ATerm t)
{
  t = term_i_38;
  return(t);
}
ATerm p_8 (ATerm t)
{
  ATerm f_46 = NULL,g_46 = NULL;
  f_46 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm j_38 = t;
    int m_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_13 = NULL;
        t = eval_config_0_0(t);
        q_13 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), q_13);
        t = q_13;
        ;
        LocalPopChoice(m_38);
      }
    else
      {
        t = j_38;
      }
    g_46 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, g_46));
    t = f_46;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm e_139 (ATerm), ATerm f_139 (ATerm), ATerm g_139 (ATerm), ATerm t)
{
  ATerm j_8 (ATerm t)
  {
    ATerm n_38 = t;
    int o_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_139(t);
        ;
        LocalPopChoice(o_38);
      }
    else
      {
        t = n_38;
        {
          ATerm p_38 = t;
          int q_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(q_38);
            }
          else
            {
              t = p_38;
              {
                ATerm s_38 = t;
                int w_38 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(w_38);
                  }
                else
                  {
                    t = s_38;
                    {
                      ATerm z_38 = t;
                      int a_39 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(m_8, n_8, o_8, t);
                          ;
                          LocalPopChoice(a_39);
                        }
                      else
                        {
                          t = z_38;
                          {
                            ATerm b_39 = t;
                            int c_39 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(c_39);
                              }
                            else
                              {
                                t = b_39;
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
  ATerm l_8 (ATerm t)
  {
    ATerm h_46 = NULL,i_46 = NULL,t_13 = NULL;
    h_46 = t;
    {
      ATerm d_39 = t;
      int e_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_8 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((i_46 != NULL) && (i_46 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  i_46 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(q_8, t);
          ;
          LocalPopChoice(e_39);
        }
      else
        {
          t = d_39;
          t = term_f_39;
          i_46 = t;
        }
      t = not_null(i_46);
      t = ReadFromFile_0_0(t);
      t_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_46, t_13);
      t = apply_strategy_1_0(e_139, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(j_8, g_139, k_8, l_8, t);
  return(t);
}
ATerm r_8 (ATerm t)
{
  t = _2_0(_id, lift_definitions_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(r_8, _fail, default_usage_0_0, t);
  return(t);
}
