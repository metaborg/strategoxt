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
ATerm term_h_54;
ATerm term_w_53;
ATerm term_v_53;
ATerm term_e_53;
ATerm term_n_52;
ATerm term_m_52;
ATerm term_b_52;
ATerm term_u_51;
ATerm term_t_51;
ATerm term_s_51;
ATerm term_r_51;
ATerm term_q_51;
ATerm term_p_51;
ATerm term_g_51;
ATerm term_b_51;
ATerm term_k_50;
ATerm term_e_50;
ATerm term_d_50;
ATerm term_b_49;
ATerm term_v_48;
ATerm term_u_48;
ATerm term_t_48;
ATerm term_s_48;
ATerm term_r_48;
ATerm term_q_48;
ATerm term_n_48;
ATerm term_m_48;
ATerm term_g_48;
ATerm term_f_48;
ATerm term_h_47;
ATerm term_p_46;
ATerm term_w_45;
ATerm term_f_42;
ATerm term_u_41;
ATerm term_t_41;
ATerm term_s_41;
ATerm term_q_41;
ATerm term_g_38;
ATerm term_t_36;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_k_33;
ATerm term_f_33;
ATerm term_o_31;
ATerm term_l_31;
ATerm term_p_16;
ATerm term_n_16;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_p_14;
void init_constant_terms (void)
{
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("n_0", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall0", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("d_0", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeInt(50);
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_s_41));
  term_s_41 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_t_41));
  term_t_41 = (ATerm) ATmakeAppl(sym_Op_2, term_s_41, (ATerm) ATempty);
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeAppl(sym_ConstType_1, term_t_41);
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_w_45));
  term_w_45 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_p_46));
  term_p_46 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_47));
  term_h_47 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_m_48));
  term_m_48 = (ATerm) ATmakeAppl(sym_Verbose_1, term_l_31);
  ATprotect(&(term_n_48));
  term_n_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_48));
  term_q_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_r_48));
  term_r_48 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_s_48));
  term_s_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_t_48));
  term_t_48 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_u_48));
  term_u_48 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_v_48));
  term_v_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_49));
  term_b_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_50));
  term_d_50 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_50));
  term_e_50 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_k_50));
  term_k_50 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_b_51));
  term_b_51 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_51));
  term_g_51 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_51));
  term_p_51 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_51));
  term_q_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_r_51));
  term_r_51 = (ATerm) ATmakeAppl(sym__3, term_p_51, term_q_51, term_p_14);
  ATprotect(&(term_s_51));
  term_s_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_t_51));
  term_t_51 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_51));
  term_u_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_b_52));
  term_b_52 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_m_52));
  term_m_52 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_52));
  term_n_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_53));
  term_e_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_v_53));
  term_v_53 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_53));
  term_w_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_h_54));
  term_h_54 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm SubsArgCall2_0_0 (ATerm);
ATerm SubsArgCall1_0_0 (ATerm);
ATerm topdown_1_0 (ATerm w_117 (ATerm), ATerm);
ATerm substitute_arg_0_0 (ATerm);
ATerm substitute_args_0_0 (ATerm);
ATerm InlineCall_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm spaste_1_0 (ATerm a_117 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm g_107 (ATerm), ATerm h_107 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm y_108 (ATerm), ATerm z_108 (ATerm), ATerm a_109 (ATerm), ATerm);
ATerm Let_2_0 (ATerm j_106 (ATerm), ATerm k_106 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm b_117 (ATerm), ATerm c_117 (ATerm), ATerm d_117 (ATerm), ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm DistBinding_2_0 (ATerm j_131 (ATerm), ATerm k_131 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm RnBinding_2_0 (ATerm d_131 (ATerm), ATerm e_131 (ATerm (ATerm), ATerm), ATerm);
ATerm lookup_0_0 (ATerm);
ATerm env_alltd_1_0 (ATerm r_131 (ATerm), ATerm);
ATerm rename_4_0 (ATerm y_130 (ATerm (ATerm), ATerm), ATerm z_130 (ATerm), ATerm a_131 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm b_131 (ATerm (ATerm), ATerm), ATerm);
ATerm tpaste_1_0 (ATerm w_116 (ATerm), ATerm);
ATerm DynamicRules_1_0 (ATerm q_105 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm h_105 (ATerm), ATerm i_105 (ATerm), ATerm j_105 (ATerm), ATerm k_105 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm x_116 (ATerm), ATerm y_116 (ATerm), ATerm z_116 (ATerm), ATerm);
ATerm tvars_0_0 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm union_1_0 (ATerm k_126 (ATerm), ATerm);
ATerm diff_1_0 (ATerm g_126 (ATerm), ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm while_not_2_0 (ATerm h_135 (ATerm), ATerm i_135 (ATerm), ATerm);
ATerm for_3_0 (ATerm k_135 (ATerm), ATerm l_135 (ATerm), ATerm m_135 (ATerm), ATerm);
ATerm diff_0_0 (ATerm);
ATerm free_vars_3_0 (ATerm b_133 (ATerm), ATerm c_133 (ATerm), ATerm d_133 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm Var_1_0 (ATerm z_102 (ATerm), ATerm);
ATerm strename_0_0 (ATerm);
ATerm InlineCall0_0_0 (ATerm);
ATerm occurrences_1_0 (ATerm s_126 (ATerm), ATerm);
ATerm local_inlinable_1_0 (ATerm b_116 (ATerm), ATerm);
ATerm UndefineSDef_0_0 (ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm f_130 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm d_121 (ATerm), ATerm e_121 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm e_130 (ATerm), ATerm);
ATerm scope_2_0 (ATerm g_130 (ATerm), ATerm h_130 (ATerm), ATerm);
ATerm inline_sdef_0_0 (ATerm);
ATerm assert_1_0 (ATerm i_130 (ATerm), ATerm);
ATerm AddSDef_0_0 (ATerm);
ATerm leq_0_0 (ATerm);
ATerm foldr_3_0 (ATerm z_128 (ATerm), ATerm a_129 (ATerm), ATerm b_129 (ATerm), ATerm);
ATerm term_size_0_0 (ATerm);
ATerm GuardedLChoice_3_0 (ATerm d_107 (ATerm), ATerm e_107 (ATerm), ATerm f_107 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm z_106 (ATerm), ATerm a_107 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm x_105 (ATerm), ATerm y_105 (ATerm), ATerm);
ATerm Match_1_0 (ATerm q_106 (ATerm), ATerm);
ATerm Seq_2_0 (ATerm x_106 (ATerm), ATerm y_106 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm t_106 (ATerm), ATerm u_106 (ATerm), ATerm);
ATerm Build_1_0 (ATerm r_106 (ATerm), ATerm);
ATerm SVar_1_0 (ATerm i_106 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm p_107 (ATerm), ATerm q_107 (ATerm), ATerm r_107 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm n_106 (ATerm), ATerm o_106 (ATerm), ATerm p_106 (ATerm), ATerm);
ATerm body_to_inline_0_0 (ATerm);
ATerm SDefT_4_0 (ATerm b_109 (ATerm), ATerm c_109 (ATerm), ATerm d_109 (ATerm), ATerm e_109 (ATerm), ATerm);
ATerm inlineable_0_0 (ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm genzip_4_0 (ATerm i_122 (ATerm), ATerm j_122 (ATerm), ATerm k_122 (ATerm), ATerm l_122 (ATerm), ATerm);
ATerm BuildMatchFusion_0_0 (ATerm);
ATerm MisMatch_0_0 (ATerm);
ATerm BuildMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm a_119 (ATerm), ATerm);
ATerm LetHoist_0_0 (ATerm);
ATerm Idempotency_0_0 (ATerm);
ATerm AssociateR_0_0 (ATerm);
ATerm map1_1_0 (ATerm l_0 (ATerm), ATerm);
ATerm HL_0_0 (ATerm);
ATerm ElimFail_0_0 (ATerm);
ATerm ElimId_0_0 (ATerm);
ATerm Simplify_0_0 (ATerm);
ATerm repeat_1_0 (ATerm s_134 (ATerm), ATerm);
ATerm downup_1_0 (ATerm y_117 (ATerm), ATerm);
ATerm inline_sdefs_0_0 (ATerm);
ATerm Strategies_1_0 (ATerm b_102 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm v_101 (ATerm), ATerm w_101 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm g_102 (ATerm), ATerm);
ATerm _2_0 (ATerm g_97 (ATerm), ATerm h_97 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm j_145 (ATerm), ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm y_139 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm i_124 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm o_124 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm f_138 (ATerm), ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm x_128 (ATerm), ATerm y_128 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm e_138 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm w_140 (ATerm), ATerm);
ATerm map_1_0 (ATerm x_123 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm m_114 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm n_114 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm z_142 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm y_142 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm y_140 (ATerm), ATerm z_140 (ATerm), ATerm a_141 (ATerm), ATerm b_141 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm h_140 (ATerm), ATerm i_140 (ATerm), ATerm j_140 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm m_0 = NULL,o_0 = NULL;
  m_0 = t;
  t = term_p_14;
  t = whoami_0_0(t);
  o_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), o_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = m_0;
  return(t);
}
ATerm SubsArgCall2_0_0 (ATerm t)
{
  ATerm r_0 = NULL,s_0 = NULL,t_0 = NULL,u_0 = NULL,v_0 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm r_14 = ATgetArgument(t, 0);
      if(match_cons(r_14, sym_SVar_1))
        {
          r_0 = ATgetArgument(r_14, 0);
        }
      else
        _fail(t);
      s_0 = ATgetArgument(t, 1);
      t_0 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue)), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, r_0), (ATerm)ATempty, (ATerm) ATempty));
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_0 = ATgetFirst((ATermList) t);
      {
        ATerm s_14 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = v_0;
  if(match_cons(t, sym_Defined_2))
    {
      ATerm t_14 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_14) != ATmakeSymbol("n_0", 0, ATtrue)))
        _fail(t);
      u_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, u_0), s_0, t_0);
  return(t);
}
ATerm SubsArgCall1_0_0 (ATerm t)
{
  ATerm w_0 = NULL,x_0 = NULL,y_0 = NULL;
  w_0 = t;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm u_14 = ATgetArgument(t, 0);
      if(match_cons(u_14, sym_SVar_1))
        {
          ATerm z_14 = ATgetArgument(u_14, 0);
        }
      else
        _fail(t);
      {
        ATerm v_14 = ATgetArgument(t, 1);
        if(((ATgetType(v_14) != AT_LIST) || !(ATisEmpty(v_14))))
          _fail(t);
      }
      {
        ATerm y_14 = ATgetArgument(t, 2);
        if(((ATgetType(y_14) != AT_LIST) || !(ATisEmpty(y_14))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue)), w_0);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_0 = ATgetFirst((ATermList) t);
      {
        ATerm a_15 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = y_0;
  if(match_cons(t, sym_Defined_2))
    {
      ATerm c_15 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_15) != ATmakeSymbol("k_0", 0, ATtrue)))
        _fail(t);
      x_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_0;
  t = strename_0_0(t);
  return(t);
}
ATerm topdown_1_0 (ATerm w_117 (ATerm), ATerm t)
{
  t = w_117(t);
  {
    ATerm p_0 (ATerm t)
    {
      t = topdown_1_0(w_117, t);
      return(t);
    }
    t = SRTS_all(p_0, t);
  }
  return(t);
}
ATerm substitute_arg_0_0 (ATerm t)
{
  ATerm p_1 = NULL,q_1 = NULL,t_1 = NULL,u_1 = NULL,w_1 = NULL,x_1 = NULL,y_1 = NULL,z_1 = NULL,b_2 = NULL,e_2 = NULL,g_2 = NULL;
  w_1 = t;
  if(match_cons(t, sym__2))
    {
      x_1 = ATgetArgument(t, 0);
      g_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_1;
  if(match_cons(t, sym_VarDec_2))
    {
      y_1 = ATgetArgument(t, 0);
      z_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_1;
  if(match_cons(t, sym_FunType_2))
    {
      b_2 = ATgetArgument(t, 0);
      {
        ATerm d_15 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = b_2;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm e_15 = ATgetFirst((ATermList) t);
      e_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = e_2;
  {
    ATerm g_15 = t;
    int h_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm i_15 = ATgetFirst((ATermList) t);
            ATerm j_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(h_15);
        t = g_2;
        if(match_cons(t, sym_CallT_3))
          {
            p_1 = ATgetArgument(t, 0);
            t_1 = ATgetArgument(t, 1);
            u_1 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = p_1;
        if(match_cons(t, sym_SVar_1))
          {
            q_1 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = t_1;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = u_1;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, y_1), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_k_15, q_1));
        {
          ATerm q_0 (ATerm t)
          {
            t = term_l_15;
            return(t);
          }
          t = assert_1_0(q_0, t);
          t = w_1;
        }
      }
    else
      {
        t = g_15;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, y_1), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_m_15, g_2));
        {
          ATerm z_0 (ATerm t)
          {
            t = term_n_15;
            return(t);
          }
          t = assert_1_0(z_0, t);
          t = w_1;
        }
      }
  }
  return(t);
}
ATerm substitute_args_0_0 (ATerm t)
{
  ATerm q_2 = NULL,r_2 = NULL,w_2 = NULL;
  ATerm b_1 (ATerm t)
  {
    t = term_n_15;
    return(t);
  }
  ATerm c_1 (ATerm t)
  {
    ATerm d_1 (ATerm t)
    {
      t = term_l_15;
      return(t);
    }
    ATerm f_1 (ATerm t)
    {
      if(match_cons(t, sym__3))
        {
          if(((q_2 != NULL) && (q_2 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            q_2 = ATgetArgument(t, 0);
          if(((r_2 != NULL) && (r_2 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            r_2 = ATgetArgument(t, 1);
          if(((w_2 != NULL) && (w_2 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            w_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(q_2), not_null(r_2));
      {
        ATerm g_1 (ATerm t)
        {
          if(match_cons(t, sym__2))
            {
              ATerm o_15 = ATgetArgument(t, 0);
              if(((ATgetType(o_15) != AT_LIST) || !(ATisEmpty(o_15))))
                _fail(t);
              {
                ATerm p_15 = ATgetArgument(t, 1);
                if(((ATgetType(p_15) != AT_LIST) || !(ATisEmpty(p_15))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATempty;
          return(t);
        }
        ATerm h_1 (ATerm t)
        {
          ATerm a_3 = NULL,g_3 = NULL,h_3 = NULL,m_3 = NULL;
          if(match_cons(t, sym__2))
            {
              ATerm q_15 = ATgetArgument(t, 0);
              if(((ATgetType(q_15) == AT_LIST) && !(ATisEmpty(q_15))))
                {
                  a_3 = ATgetFirst((ATermList) q_15);
                  h_3 = (ATerm) ATgetNext((ATermList) q_15);
                }
              else
                _fail(t);
              {
                ATerm r_15 = ATgetArgument(t, 1);
                if(((ATgetType(r_15) == AT_LIST) && !(ATisEmpty(r_15))))
                  {
                    g_3 = ATgetFirst((ATermList) r_15);
                    m_3 = (ATerm) ATgetNext((ATermList) r_15);
                  }
                else
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_3, g_3), (ATerm) ATmakeAppl(sym__2, h_3, m_3));
          return(t);
        }
        ATerm i_1 (ATerm t)
        {
          ATerm q_3 = NULL,t_3 = NULL;
          if(match_cons(t, sym__2))
            {
              q_3 = ATgetArgument(t, 0);
              t_3 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(t_3), q_3);
          return(t);
        }
        t = genzip_4_0(g_1, h_1, i_1, substitute_arg_0_0, t);
        t = not_null(w_2);
        {
          ATerm j_1 (ATerm t)
          {
            ATerm s_15 = t;
            int t_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_15 = t;
                int v_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = SubsArgCall1_0_0(t);
                    ;
                    LocalPopChoice(v_15);
                  }
                else
                  {
                    t = u_15;
                    t = SubsArgCall2_0_0(t);
                  }
                ;
                LocalPopChoice(t_15);
              }
            else
              {
                t = s_15;
              }
            return(t);
          }
          t = topdown_1_0(j_1, t);
        }
      }
      return(t);
    }
    t = scope_2_0(d_1, f_1, t);
    return(t);
  }
  t = scope_2_0(b_1, c_1, t);
  return(t);
}
ATerm InlineCall_0_0 (ATerm t)
{
  ATerm p_6 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL,l_7 = NULL;
  p_6 = t;
  if(match_cons(t, sym_CallT_3))
    {
      g_7 = ATgetArgument(t, 0);
      i_7 = ATgetArgument(t, 1);
      l_7 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = g_7;
  if(match_cons(t, sym_SVar_1))
    {
      h_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm w_15 = t;
    int x_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_1 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue)), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, h_7), (ATerm)ATempty, (ATerm) ATempty));
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_1 = ATgetFirst((ATermList) t);
            {
              ATerm y_15 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = a_1;
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        _fail(t);
        ;
        LocalPopChoice(x_15);
      }
    else
      {
        t = w_15;
        {
          ATerm z_15 = t;
          int a_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_1 = NULL;
              t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue)), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, h_7), (ATerm)ATempty, (ATerm) ATempty));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  e_1 = ATgetFirst((ATermList) t);
                  {
                    ATerm b_16 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = e_1;
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              _fail(t);
              ;
              LocalPopChoice(a_16);
            }
          else
            {
              t = z_15;
              {
                ATerm c_16 = t;
                int d_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm o_1 = NULL,r_1 = NULL,s_1 = NULL,v_1 = NULL,a_2 = NULL,c_2 = NULL,l_2 = NULL,m_2 = NULL;
                    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue)), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, h_7), (ATerm)ATempty, (ATerm) ATempty));
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        r_1 = ATgetFirst((ATermList) t);
                        {
                          ATerm e_16 = (ATerm) ATgetNext((ATermList) t);
                        }
                      }
                    else
                      _fail(t);
                    t = r_1;
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm f_16 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) f_16) != ATmakeSymbol("d_0", 0, ATtrue)))
                          _fail(t);
                        o_1 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = o_1;
                    t = strename_0_0(t);
                    if(match_cons(t, sym_SDefT_4))
                      {
                        if((h_7 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        s_1 = ATgetArgument(t, 1);
                        v_1 = ATgetArgument(t, 2);
                        a_2 = ATgetArgument(t, 3);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__3, s_1, i_7, a_2);
                    t = substitute_args_0_0(t);
                    c_2 = t;
                    t = v_1;
                    {
                      ATerm k_1 (ATerm t)
                      {
                        ATerm o_2 = NULL;
                        if(match_cons(t, sym_VarDec_2))
                          {
                            o_2 = ATgetArgument(t, 0);
                            {
                              ATerm h_16 = ATgetArgument(t, 1);
                            }
                          }
                        else
                          _fail(t);
                        t = o_2;
                        return(t);
                      }
                      t = map_1_0(k_1, t);
                      l_2 = t;
                      t = (ATerm) ATmakeAppl(sym__2, l_7, l_2);
                      {
                        ATerm l_1 (ATerm t)
                        {
                          if(match_cons(t, sym__2))
                            {
                              ATerm j_16 = ATgetArgument(t, 0);
                              if(((ATgetType(j_16) != AT_LIST) || !(ATisEmpty(j_16))))
                                _fail(t);
                              {
                                ATerm k_16 = ATgetArgument(t, 1);
                                if(((ATgetType(k_16) != AT_LIST) || !(ATisEmpty(k_16))))
                                  _fail(t);
                              }
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATempty;
                          return(t);
                        }
                        ATerm m_1 (ATerm t)
                        {
                          ATerm s_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              ATerm l_16 = ATgetArgument(t, 0);
                              if(((ATgetType(l_16) == AT_LIST) && !(ATisEmpty(l_16))))
                                {
                                  s_2 = ATgetFirst((ATermList) l_16);
                                  u_2 = (ATerm) ATgetNext((ATermList) l_16);
                                }
                              else
                                _fail(t);
                              {
                                ATerm m_16 = ATgetArgument(t, 1);
                                if(((ATgetType(m_16) == AT_LIST) && !(ATisEmpty(m_16))))
                                  {
                                    t_2 = ATgetFirst((ATermList) m_16);
                                    v_2 = (ATerm) ATgetNext((ATermList) m_16);
                                  }
                                else
                                  _fail(t);
                              }
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_2, t_2), (ATerm) ATmakeAppl(sym__2, u_2, v_2));
                          return(t);
                        }
                        ATerm n_1 (ATerm t)
                        {
                          ATerm x_2 = NULL,y_2 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              x_2 = ATgetArgument(t, 0);
                              y_2 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATinsert(CheckATermList(y_2), x_2);
                          return(t);
                        }
                        ATerm d_2 (ATerm t)
                        {
                          ATerm z_2 = NULL,b_3 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              z_2 = ATgetArgument(t, 0);
                              b_3 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, z_2), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, b_3)));
                          return(t);
                        }
                        t = genzip_4_0(l_1, m_1, n_1, d_2, t);
                        m_2 = t;
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, h_7), (ATerm)ATempty, (ATerm) ATempty), term_n_16);
                        {
                          ATerm f_2 (ATerm t)
                          {
                            t = term_p_16;
                            return(t);
                          }
                          t = assert_1_0(f_2, t);
                          t = (ATerm) ATmakeAppl(sym_Scope_2, l_2, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, m_2), c_2));
                          {
                            ATerm h_2 (ATerm t)
                            {
                              t = repeat_1_0(Simplify_0_0, t);
                              return(t);
                            }
                            t = downup_1_0(h_2, t);
                          }
                        }
                      }
                    }
                    ;
                    LocalPopChoice(d_16);
                  }
                else
                  {
                    t = c_16;
                    {
                      ATerm f_3 = NULL;
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue)), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, h_7), (ATerm)ATempty, (ATerm) ATempty));
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          f_3 = ATgetFirst((ATermList) t);
                          {
                            ATerm q_16 = (ATerm) ATgetNext((ATermList) t);
                          }
                        }
                      else
                        _fail(t);
                      t = f_3;
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
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm spaste_1_0 (ATerm a_117 (ATerm), ATerm t)
{
  ATerm r_16 = t;
  int s_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_2 (ATerm t)
      {
        ATerm i_3 = NULL,k_3 = NULL;
        i_3 = t;
        t = a_117(t);
        k_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_3, k_3);
        {
          ATerm j_2 (ATerm t)
          {
            if(match_cons(t, sym__2))
              {
                ATerm t_16 = ATgetArgument(t, 0);
                if(((ATgetType(t_16) != AT_LIST) || !(ATisEmpty(t_16))))
                  _fail(t);
                {
                  ATerm u_16 = ATgetArgument(t, 1);
                  if(((ATgetType(u_16) != AT_LIST) || !(ATisEmpty(u_16))))
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATempty;
            return(t);
          }
          ATerm k_2 (ATerm t)
          {
            ATerm i_8 = NULL,j_8 = NULL,k_8 = NULL,o_8 = NULL;
            if(match_cons(t, sym__2))
              {
                ATerm v_16 = ATgetArgument(t, 0);
                if(((ATgetType(v_16) == AT_LIST) && !(ATisEmpty(v_16))))
                  {
                    i_8 = ATgetFirst((ATermList) v_16);
                    k_8 = (ATerm) ATgetNext((ATermList) v_16);
                  }
                else
                  _fail(t);
                {
                  ATerm w_16 = ATgetArgument(t, 1);
                  if(((ATgetType(w_16) == AT_LIST) && !(ATisEmpty(w_16))))
                    {
                      j_8 = ATgetFirst((ATermList) w_16);
                      o_8 = (ATerm) ATgetNext((ATermList) w_16);
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_8, j_8), (ATerm) ATmakeAppl(sym__2, k_8, o_8));
            return(t);
          }
          ATerm n_2 (ATerm t)
          {
            ATerm p_8 = NULL,s_8 = NULL;
            if(match_cons(t, sym__2))
              {
                p_8 = ATgetArgument(t, 0);
                s_8 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(s_8), p_8);
            return(t);
          }
          ATerm p_2 (ATerm t)
          {
            ATerm a_9 = NULL,m_9 = NULL,n_9 = NULL,r_9 = NULL,s_9 = NULL;
            if(match_cons(t, sym__2))
              {
                a_9 = ATgetArgument(t, 0);
                s_9 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = a_9;
            {
              ATerm x_16 = t;
              int y_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SDef_3))
                    {
                      ATerm z_16 = ATgetArgument(t, 0);
                      m_9 = ATgetArgument(t, 1);
                      n_9 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(y_16);
                  t = (ATerm) ATmakeAppl(sym_SDef_3, s_9, m_9, n_9);
                }
              else
                {
                  t = x_16;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      ATerm a_17 = ATgetArgument(t, 0);
                      m_9 = ATgetArgument(t, 1);
                      n_9 = ATgetArgument(t, 2);
                      r_9 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_SDefT_4, s_9, m_9, n_9, r_9);
                }
            }
            return(t);
          }
          t = genzip_4_0(j_2, k_2, n_2, p_2, t);
        }
        return(t);
      }
      t = Let_2_0(i_2, _id, t);
      ;
      LocalPopChoice(s_16);
    }
  else
    {
      t = r_16;
      {
        ATerm c_17 = t;
        int e_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_3 (ATerm t)
            {
              ATerm o_3 = NULL,r_3 = NULL;
              o_3 = t;
              t = a_117(t);
              r_3 = t;
              t = (ATerm) ATmakeAppl(sym__2, o_3, r_3);
              {
                ATerm d_3 (ATerm t)
                {
                  if(match_cons(t, sym__2))
                    {
                      ATerm g_17 = ATgetArgument(t, 0);
                      if(((ATgetType(g_17) != AT_LIST) || !(ATisEmpty(g_17))))
                        _fail(t);
                      {
                        ATerm h_17 = ATgetArgument(t, 1);
                        if(((ATgetType(h_17) != AT_LIST) || !(ATisEmpty(h_17))))
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATempty;
                  return(t);
                }
                ATerm e_3 (ATerm t)
                {
                  ATerm u_11 = NULL,j_12 = NULL,m_12 = NULL,o_12 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm i_17 = ATgetArgument(t, 0);
                      if(((ATgetType(i_17) == AT_LIST) && !(ATisEmpty(i_17))))
                        {
                          u_11 = ATgetFirst((ATermList) i_17);
                          m_12 = (ATerm) ATgetNext((ATermList) i_17);
                        }
                      else
                        _fail(t);
                      {
                        ATerm j_17 = ATgetArgument(t, 1);
                        if(((ATgetType(j_17) == AT_LIST) && !(ATisEmpty(j_17))))
                          {
                            j_12 = ATgetFirst((ATermList) j_17);
                            o_12 = (ATerm) ATgetNext((ATermList) j_17);
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_11, j_12), (ATerm) ATmakeAppl(sym__2, m_12, o_12));
                  return(t);
                }
                ATerm j_3 (ATerm t)
                {
                  ATerm v_12 = NULL,i_13 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      v_12 = ATgetArgument(t, 0);
                      i_13 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATinsert(CheckATermList(i_13), v_12);
                  return(t);
                }
                ATerm l_3 (ATerm t)
                {
                  ATerm l_13 = NULL,k_14 = NULL,x_14 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      l_13 = ATgetArgument(t, 0);
                      x_14 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = l_13;
                  {
                    ATerm k_17 = t;
                    int l_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_DefaultVarDec_1))
                          {
                            ATerm m_17 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(l_17);
                        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, x_14);
                      }
                    else
                      {
                        t = k_17;
                        if(match_cons(t, sym_VarDec_2))
                          {
                            ATerm n_17 = ATgetArgument(t, 0);
                            k_14 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_VarDec_2, x_14, k_14);
                      }
                  }
                  return(t);
                }
                t = genzip_4_0(d_3, e_3, j_3, l_3, t);
              }
              return(t);
            }
            t = SDef_3_0(_id, c_3, _id, t);
            ;
            LocalPopChoice(e_17);
          }
        else
          {
            t = c_17;
            {
              ATerm p_17 = t;
              int s_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_3 (ATerm t)
                  {
                    ATerm v_3 = NULL,x_3 = NULL;
                    v_3 = t;
                    t = a_117(t);
                    x_3 = t;
                    t = (ATerm) ATmakeAppl(sym__2, v_3, x_3);
                    {
                      ATerm p_3 (ATerm t)
                      {
                        if(match_cons(t, sym__2))
                          {
                            ATerm t_17 = ATgetArgument(t, 0);
                            if(((ATgetType(t_17) != AT_LIST) || !(ATisEmpty(t_17))))
                              _fail(t);
                            {
                              ATerm u_17 = ATgetArgument(t, 1);
                              if(((ATgetType(u_17) != AT_LIST) || !(ATisEmpty(u_17))))
                                _fail(t);
                            }
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATempty;
                        return(t);
                      }
                      ATerm s_3 (ATerm t)
                      {
                        ATerm g_16 = NULL,i_16 = NULL,o_16 = NULL,b_17 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            ATerm b_18 = ATgetArgument(t, 0);
                            if(((ATgetType(b_18) == AT_LIST) && !(ATisEmpty(b_18))))
                              {
                                g_16 = ATgetFirst((ATermList) b_18);
                                o_16 = (ATerm) ATgetNext((ATermList) b_18);
                              }
                            else
                              _fail(t);
                            {
                              ATerm d_18 = ATgetArgument(t, 1);
                              if(((ATgetType(d_18) == AT_LIST) && !(ATisEmpty(d_18))))
                                {
                                  i_16 = ATgetFirst((ATermList) d_18);
                                  b_17 = (ATerm) ATgetNext((ATermList) d_18);
                                }
                              else
                                _fail(t);
                            }
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_16, i_16), (ATerm) ATmakeAppl(sym__2, o_16, b_17));
                        return(t);
                      }
                      ATerm u_3 (ATerm t)
                      {
                        ATerm d_17 = NULL,f_17 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            d_17 = ATgetArgument(t, 0);
                            f_17 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATinsert(CheckATermList(f_17), d_17);
                        return(t);
                      }
                      ATerm w_3 (ATerm t)
                      {
                        ATerm o_17 = NULL,q_17 = NULL,r_17 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            o_17 = ATgetArgument(t, 0);
                            r_17 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = o_17;
                        {
                          ATerm g_18 = t;
                          int h_18 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_DefaultVarDec_1))
                                {
                                  ATerm i_18 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(h_18);
                              t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, r_17);
                            }
                          else
                            {
                              t = g_18;
                              if(match_cons(t, sym_VarDec_2))
                                {
                                  ATerm q_18 = ATgetArgument(t, 0);
                                  q_17 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym_VarDec_2, r_17, q_17);
                            }
                        }
                        return(t);
                      }
                      t = genzip_4_0(p_3, s_3, u_3, w_3, t);
                    }
                    return(t);
                  }
                  t = SDefT_4_0(_id, n_3, _id, _id, t);
                  ;
                  LocalPopChoice(s_17);
                }
              else
                {
                  t = p_17;
                  {
                    ATerm r_18 = t;
                    int a_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm y_3 (ATerm t)
                        {
                          ATerm a_4 = NULL,c_4 = NULL;
                          a_4 = t;
                          t = a_117(t);
                          c_4 = t;
                          t = (ATerm) ATmakeAppl(sym__2, a_4, c_4);
                          {
                            ATerm z_3 (ATerm t)
                            {
                              if(match_cons(t, sym__2))
                                {
                                  ATerm b_19 = ATgetArgument(t, 0);
                                  if(((ATgetType(b_19) != AT_LIST) || !(ATisEmpty(b_19))))
                                    _fail(t);
                                  {
                                    ATerm i_19 = ATgetArgument(t, 1);
                                    if(((ATgetType(i_19) != AT_LIST) || !(ATisEmpty(i_19))))
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
                              ATerm v_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  ATerm j_19 = ATgetArgument(t, 0);
                                  if(((ATgetType(j_19) == AT_LIST) && !(ATisEmpty(j_19))))
                                    {
                                      v_17 = ATgetFirst((ATermList) j_19);
                                      x_17 = (ATerm) ATgetNext((ATermList) j_19);
                                    }
                                  else
                                    _fail(t);
                                  {
                                    ATerm k_19 = ATgetArgument(t, 1);
                                    if(((ATgetType(k_19) == AT_LIST) && !(ATisEmpty(k_19))))
                                      {
                                        w_17 = ATgetFirst((ATermList) k_19);
                                        y_17 = (ATerm) ATgetNext((ATermList) k_19);
                                      }
                                    else
                                      _fail(t);
                                  }
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_17, w_17), (ATerm) ATmakeAppl(sym__2, x_17, y_17));
                              return(t);
                            }
                            ATerm d_4 (ATerm t)
                            {
                              ATerm z_17 = NULL,a_18 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  z_17 = ATgetArgument(t, 0);
                                  a_18 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATinsert(CheckATermList(a_18), z_17);
                              return(t);
                            }
                            ATerm e_4 (ATerm t)
                            {
                              ATerm c_18 = NULL,e_18 = NULL,f_18 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  c_18 = ATgetArgument(t, 0);
                                  f_18 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = c_18;
                              {
                                ATerm l_19 = t;
                                int m_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        ATerm n_19 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(m_19);
                                    t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, f_18);
                                  }
                                else
                                  {
                                    t = l_19;
                                    if(match_cons(t, sym_VarDec_2))
                                      {
                                        ATerm o_19 = ATgetArgument(t, 0);
                                        e_18 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, f_18, e_18);
                                  }
                              }
                              return(t);
                            }
                            t = genzip_4_0(z_3, b_4, d_4, e_4, t);
                          }
                          return(t);
                        }
                        t = RDefT_4_0(_id, y_3, _id, _id, t);
                        ;
                        LocalPopChoice(a_19);
                      }
                    else
                      {
                        t = r_18;
                        {
                          ATerm f_4 (ATerm t)
                          {
                            ATerm j_18 = NULL;
                            t = a_117(t);
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                j_18 = ATgetFirst((ATermList) t);
                                {
                                  ATerm p_19 = (ATerm) ATgetNext((ATermList) t);
                                }
                              }
                            else
                              _fail(t);
                            t = j_18;
                            return(t);
                          }
                          t = Rec_2_0(f_4, _id, t);
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
ATerm Rec_2_0 (ATerm g_107 (ATerm), ATerm h_107 (ATerm), ATerm t)
{
  ATerm k_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL;
  p_18 = t;
  if(match_cons(t, sym_Rec_2))
    {
      l_18 = ATgetArgument(t, 0);
      m_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_18);
  k_18 = t;
  t = l_18;
  t = g_107(t);
  n_18 = t;
  t = m_18;
  t = h_107(t);
  o_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, n_18, o_18), k_18);
  return(t);
}
ATerm SDef_3_0 (ATerm y_108 (ATerm), ATerm z_108 (ATerm), ATerm a_109 (ATerm), ATerm t)
{
  ATerm s_18 = NULL,t_18 = NULL,u_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL;
  z_18 = t;
  if(match_cons(t, sym_SDef_3))
    {
      t_18 = ATgetArgument(t, 0);
      u_18 = ATgetArgument(t, 1);
      v_18 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_18);
  s_18 = t;
  t = t_18;
  t = y_108(t);
  w_18 = t;
  t = u_18;
  t = z_108(t);
  x_18 = t;
  t = v_18;
  t = a_109(t);
  y_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, w_18, x_18, y_18), s_18);
  return(t);
}
ATerm Let_2_0 (ATerm j_106 (ATerm), ATerm k_106 (ATerm), ATerm t)
{
  ATerm c_19 = NULL,d_19 = NULL,e_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL;
  h_19 = t;
  if(match_cons(t, sym_Let_2))
    {
      d_19 = ATgetArgument(t, 0);
      e_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_19);
  c_19 = t;
  t = d_19;
  t = j_106(t);
  f_19 = t;
  t = e_19;
  t = k_106(t);
  g_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, f_19, g_19), c_19);
  return(t);
}
ATerm sboundin_3_0 (ATerm b_117 (ATerm), ATerm c_117 (ATerm), ATerm d_117 (ATerm), ATerm t)
{
  ATerm q_19 = t;
  int s_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(b_117, b_117, t);
      ;
      LocalPopChoice(s_19);
    }
  else
    {
      t = q_19;
      {
        ATerm u_19 = t;
        int v_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(d_117, d_117, b_117, t);
            ;
            LocalPopChoice(v_19);
          }
        else
          {
            t = u_19;
            {
              ATerm w_19 = t;
              int x_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(d_117, d_117, d_117, b_117, t);
                  ;
                  LocalPopChoice(x_19);
                }
              else
                {
                  t = w_19;
                  t = Rec_2_0(d_117, b_117, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm r_19 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      r_19 = ATgetArgument(t, 0);
      {
        ATerm y_19 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = r_19;
  {
    ATerm g_4 (ATerm t)
    {
      ATerm t_19 = NULL;
      ATerm z_19 = t;
      int a_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_SDef_3))
            {
              t_19 = ATgetArgument(t, 0);
              {
                ATerm b_20 = ATgetArgument(t, 1);
              }
              {
                ATerm c_20 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          LocalPopChoice(a_20);
          t = t_19;
        }
      else
        {
          t = z_19;
          if(match_cons(t, sym_SDefT_4))
            {
              t_19 = ATgetArgument(t, 0);
              {
                ATerm d_20 = ATgetArgument(t, 1);
              }
              {
                ATerm f_20 = ATgetArgument(t, 2);
              }
              {
                ATerm h_20 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          t = t_19;
        }
      return(t);
    }
    t = map_1_0(g_4, t);
  }
  return(t);
}
ATerm DistBinding_2_0 (ATerm j_131 (ATerm), ATerm k_131 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm e_20 = NULL,g_20 = NULL,i_20 = NULL;
  if(match_cons(t, sym__3))
    {
      i_20 = ATgetArgument(t, 0);
      g_20 = ATgetArgument(t, 1);
      e_20 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = i_20;
  {
    ATerm h_4 (ATerm t)
    {
      ATerm k_20 = NULL;
      k_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_20, e_20);
      t = j_131(t);
      return(t);
    }
    ATerm i_4 (ATerm t)
    {
      ATerm m_20 = NULL;
      m_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_20, g_20);
      t = j_131(t);
      return(t);
    }
    t = k_131(h_4, i_4, _id, t);
  }
  return(t);
}
ATerm RnBinding_2_0 (ATerm d_131 (ATerm), ATerm e_131 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL,r_20 = NULL,s_20 = NULL,u_20 = NULL,w_20 = NULL;
  if(match_cons(t, sym__2))
    {
      o_20 = ATgetArgument(t, 0);
      p_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_20;
  t = d_131(t);
  q_20 = t;
  t = map_1_0(new_0_0, t);
  r_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_20, r_20);
  {
    ATerm j_4 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          ATerm j_20 = ATgetArgument(t, 0);
          if(((ATgetType(j_20) != AT_LIST) || !(ATisEmpty(j_20))))
            _fail(t);
          {
            ATerm l_20 = ATgetArgument(t, 1);
            if(((ATgetType(l_20) != AT_LIST) || !(ATisEmpty(l_20))))
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
      ATerm y_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm n_20 = ATgetArgument(t, 0);
          if(((ATgetType(n_20) == AT_LIST) && !(ATisEmpty(n_20))))
            {
              y_20 = ATgetFirst((ATermList) n_20);
              a_21 = (ATerm) ATgetNext((ATermList) n_20);
            }
          else
            _fail(t);
          {
            ATerm t_20 = ATgetArgument(t, 1);
            if(((ATgetType(t_20) == AT_LIST) && !(ATisEmpty(t_20))))
              {
                z_20 = ATgetFirst((ATermList) t_20);
                b_21 = (ATerm) ATgetNext((ATermList) t_20);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_20, z_20), (ATerm) ATmakeAppl(sym__2, a_21, b_21));
      return(t);
    }
    ATerm l_4 (ATerm t)
    {
      ATerm c_21 = NULL,d_21 = NULL;
      if(match_cons(t, sym__2))
        {
          c_21 = ATgetArgument(t, 0);
          d_21 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(d_21), c_21);
      return(t);
    }
    t = genzip_4_0(j_4, k_4, l_4, _id, t);
    s_20 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_20, p_20);
    {
      ATerm v_20 = t;
      int x_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm e_21 = ATgetArgument(t, 0);
              ATerm f_21 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = s_20;
          {
            ATerm m_4 (ATerm t)
            {
              t = p_20;
              return(t);
            }
            t = at_end_1_0(m_4, t);
          }
          ;
          LocalPopChoice(x_20);
        }
      else
        {
          t = v_20;
          {
            ATerm q_4 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, s_20, p_20));
            if(match_cons(t, sym__2))
              {
                ATerm g_21 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) g_21) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                q_4 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = q_4;
            t = concat_0_0(t);
          }
        }
      u_20 = t;
      t = o_20;
      {
        ATerm n_4 (ATerm t)
        {
          t = r_20;
          return(t);
        }
        t = e_131(n_4, t);
        w_20 = t;
        t = (ATerm) ATmakeAppl(sym__3, w_20, p_20, u_20);
      }
    }
  }
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm n_21 = NULL,o_21 = NULL,q_21 = NULL,s_21 = NULL,t_21 = NULL,w_21 = NULL;
  if(match_cons(t, sym__2))
    {
      q_21 = ATgetArgument(t, 0);
      s_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_21;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_21 = ATgetFirst((ATermList) t);
      w_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = t_21;
  if(match_cons(t, sym__2))
    {
      n_21 = ATgetArgument(t, 0);
      o_21 = ATgetArgument(t, 1);
      {
        ATerm h_21 = t;
        int i_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_21;
            if((q_21 != t))
              {
                _fail(t);
              }
            t = o_21;
            ;
            LocalPopChoice(i_21);
          }
        else
          {
            t = h_21;
            t = (ATerm) ATmakeAppl(sym__2, q_21, w_21);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, q_21, w_21);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm r_131 (ATerm), ATerm t)
{
  ATerm u_22 (ATerm t)
  {
    ATerm j_21 = t;
    int k_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_131(t);
        ;
        LocalPopChoice(k_21);
      }
    else
      {
        t = j_21;
        {
          ATerm r_22 = NULL,s_22 = NULL,t_22 = NULL;
          r_22 = t;
          if(match_cons(t, sym__2))
            {
              s_22 = ATgetArgument(t, 0);
              t_22 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = s_22;
          {
            ATerm o_4 (ATerm t)
            {
              ATerm j_5 = NULL;
              j_5 = t;
              t = (ATerm) ATmakeAppl(sym__2, j_5, t_22);
              t = u_22(t);
              return(t);
            }
            t = SRTS_all(o_4, t);
          }
        }
      }
    return(t);
  }
  t = u_22(t);
  return(t);
}
ATerm rename_4_0 (ATerm y_130 (ATerm (ATerm), ATerm), ATerm z_130 (ATerm), ATerm a_131 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm b_131 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm x_22 = NULL;
  x_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_22, (ATerm) ATempty);
  {
    ATerm g_23 (ATerm t)
    {
      ATerm p_4 (ATerm t)
      {
        ATerm l_21 = t;
        int m_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_23 = NULL,d_23 = NULL;
            if(match_cons(t, sym__2))
              {
                a_23 = ATgetArgument(t, 0);
                d_23 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = a_23;
            {
              ATerm r_4 (ATerm t)
              {
                ATerm k_5 = NULL;
                k_5 = t;
                t = (ATerm) ATmakeAppl(sym__2, k_5, d_23);
                t = lookup_0_0(t);
                return(t);
              }
              t = y_130(r_4, t);
            }
            ;
            LocalPopChoice(m_21);
          }
        else
          {
            t = l_21;
            t = RnBinding_2_0(z_130, b_131, t);
            t = DistBinding_2_0(g_23, a_131, t);
          }
        return(t);
      }
      t = env_alltd_1_0(p_4, t);
      return(t);
    }
    t = g_23(t);
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm w_116 (ATerm), ATerm t)
{
  ATerm p_21 = t;
  int r_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(w_116, _id, t);
      ;
      LocalPopChoice(r_21);
    }
  else
    {
      t = p_21;
      {
        ATerm u_21 = t;
        int v_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_4 (ATerm t)
            {
              ATerm p_5 = NULL,u_5 = NULL;
              p_5 = t;
              t = w_116(t);
              u_5 = t;
              t = (ATerm) ATmakeAppl(sym__2, p_5, u_5);
              {
                ATerm t_4 (ATerm t)
                {
                  if(match_cons(t, sym__2))
                    {
                      ATerm x_21 = ATgetArgument(t, 0);
                      if(((ATgetType(x_21) != AT_LIST) || !(ATisEmpty(x_21))))
                        _fail(t);
                      {
                        ATerm y_21 = ATgetArgument(t, 1);
                        if(((ATgetType(y_21) != AT_LIST) || !(ATisEmpty(y_21))))
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATempty;
                  return(t);
                }
                ATerm u_4 (ATerm t)
                {
                  ATerm r_23 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm z_21 = ATgetArgument(t, 0);
                      if(((ATgetType(z_21) == AT_LIST) && !(ATisEmpty(z_21))))
                        {
                          r_23 = ATgetFirst((ATermList) z_21);
                          t_23 = (ATerm) ATgetNext((ATermList) z_21);
                        }
                      else
                        _fail(t);
                      {
                        ATerm a_22 = ATgetArgument(t, 1);
                        if(((ATgetType(a_22) == AT_LIST) && !(ATisEmpty(a_22))))
                          {
                            s_23 = ATgetFirst((ATermList) a_22);
                            u_23 = (ATerm) ATgetNext((ATermList) a_22);
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_23, s_23), (ATerm) ATmakeAppl(sym__2, t_23, u_23));
                  return(t);
                }
                ATerm v_4 (ATerm t)
                {
                  ATerm v_23 = NULL,y_23 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      v_23 = ATgetArgument(t, 0);
                      y_23 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATinsert(CheckATermList(y_23), v_23);
                  return(t);
                }
                ATerm w_4 (ATerm t)
                {
                  ATerm f_24 = NULL,j_24 = NULL,k_24 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      f_24 = ATgetArgument(t, 0);
                      k_24 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = f_24;
                  {
                    ATerm b_22 = t;
                    int c_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_DefaultVarDec_1))
                          {
                            ATerm d_22 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(c_22);
                        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, k_24);
                      }
                    else
                      {
                        t = b_22;
                        if(match_cons(t, sym_VarDec_2))
                          {
                            ATerm e_22 = ATgetArgument(t, 0);
                            j_24 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_VarDec_2, k_24, j_24);
                      }
                  }
                  return(t);
                }
                t = genzip_4_0(t_4, u_4, v_4, w_4, t);
              }
              return(t);
            }
            t = SDefT_4_0(_id, _id, s_4, _id, t);
            ;
            LocalPopChoice(v_21);
          }
        else
          {
            t = u_21;
            {
              ATerm x_4 (ATerm t)
              {
                ATerm c_6 = NULL,h_6 = NULL;
                c_6 = t;
                t = w_116(t);
                h_6 = t;
                t = (ATerm) ATmakeAppl(sym__2, c_6, h_6);
                {
                  ATerm y_4 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        ATerm f_22 = ATgetArgument(t, 0);
                        if(((ATgetType(f_22) != AT_LIST) || !(ATisEmpty(f_22))))
                          _fail(t);
                        {
                          ATerm g_22 = ATgetArgument(t, 1);
                          if(((ATgetType(g_22) != AT_LIST) || !(ATisEmpty(g_22))))
                            _fail(t);
                        }
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  ATerm z_4 (ATerm t)
                  {
                    ATerm o_24 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        ATerm h_22 = ATgetArgument(t, 0);
                        if(((ATgetType(h_22) == AT_LIST) && !(ATisEmpty(h_22))))
                          {
                            o_24 = ATgetFirst((ATermList) h_22);
                            q_24 = (ATerm) ATgetNext((ATermList) h_22);
                          }
                        else
                          _fail(t);
                        {
                          ATerm i_22 = ATgetArgument(t, 1);
                          if(((ATgetType(i_22) == AT_LIST) && !(ATisEmpty(i_22))))
                            {
                              p_24 = ATgetFirst((ATermList) i_22);
                              r_24 = (ATerm) ATgetNext((ATermList) i_22);
                            }
                          else
                            _fail(t);
                        }
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_24, p_24), (ATerm) ATmakeAppl(sym__2, q_24, r_24));
                    return(t);
                  }
                  ATerm a_5 (ATerm t)
                  {
                    ATerm s_24 = NULL,t_24 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        s_24 = ATgetArgument(t, 0);
                        t_24 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(CheckATermList(t_24), s_24);
                    return(t);
                  }
                  ATerm b_5 (ATerm t)
                  {
                    ATerm v_24 = NULL,x_24 = NULL,y_24 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        v_24 = ATgetArgument(t, 0);
                        y_24 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = v_24;
                    {
                      ATerm j_22 = t;
                      int k_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_DefaultVarDec_1))
                            {
                              ATerm l_22 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(k_22);
                          t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, y_24);
                        }
                      else
                        {
                          t = j_22;
                          if(match_cons(t, sym_VarDec_2))
                            {
                              ATerm m_22 = ATgetArgument(t, 0);
                              x_24 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, y_24, x_24);
                        }
                    }
                    return(t);
                  }
                  t = genzip_4_0(y_4, z_4, a_5, b_5, t);
                }
                return(t);
              }
              t = RDefT_4_0(_id, _id, x_4, _id, t);
            }
          }
      }
    }
  return(t);
}
ATerm DynamicRules_1_0 (ATerm q_105 (ATerm), ATerm t)
{
  ATerm c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL;
  f_25 = t;
  if(match_cons(t, sym_DynamicRules_1))
    {
      d_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_25);
  c_25 = t;
  t = d_25;
  t = q_105(t);
  e_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, e_25), c_25);
  return(t);
}
ATerm RDefT_4_0 (ATerm h_105 (ATerm), ATerm i_105 (ATerm), ATerm j_105 (ATerm), ATerm k_105 (ATerm), ATerm t)
{
  ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL;
  r_25 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      j_25 = ATgetArgument(t, 0);
      k_25 = ATgetArgument(t, 1);
      l_25 = ATgetArgument(t, 2);
      m_25 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_25);
  i_25 = t;
  t = j_25;
  t = h_105(t);
  n_25 = t;
  t = k_25;
  t = i_105(t);
  o_25 = t;
  t = l_25;
  t = j_105(t);
  p_25 = t;
  t = m_25;
  t = k_105(t);
  q_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDefT_4, n_25, o_25, p_25, q_25), i_25);
  return(t);
}
ATerm tboundin_3_0 (ATerm x_116 (ATerm), ATerm y_116 (ATerm), ATerm z_116 (ATerm), ATerm t)
{
  ATerm n_22 = t;
  int o_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(z_116, x_116, t);
      ;
      LocalPopChoice(o_22);
    }
  else
    {
      t = n_22;
      {
        ATerm p_22 = t;
        int q_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(z_116, z_116, z_116, x_116, t);
            ;
            LocalPopChoice(q_22);
          }
        else
          {
            t = p_22;
            {
              ATerm v_22 = t;
              int w_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(z_116, z_116, z_116, x_116, t);
                  ;
                  LocalPopChoice(w_22);
                }
              else
                {
                  t = v_22;
                  t = DynamicRules_1_0(x_116, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  ATerm c_5 (ATerm t)
  {
    ATerm y_25 = NULL;
    if(match_cons(t, sym_Var_1))
      {
        y_25 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(ATempty, y_25);
    return(t);
  }
  ATerm d_5 (ATerm t)
  {
    ATerm z_25 = NULL,d_26 = NULL,f_26 = NULL;
    if(match_cons(t, sym_LRule_1))
      {
        d_26 = ATgetArgument(t, 0);
        t = d_26;
        if(match_cons(t, sym_Rule_3))
          {
            z_25 = ATgetArgument(t, 0);
            {
              ATerm y_22 = ATgetArgument(t, 1);
            }
            {
              ATerm z_22 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = z_25;
        t = tvars_0_0(t);
      }
    else
      {
        ATerm b_23 = t;
        int c_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Scope_2))
              {
                d_26 = ATgetArgument(t, 0);
                {
                  ATerm e_23 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(c_23);
            t = d_26;
          }
        else
          {
            t = b_23;
            if(match_cons(t, sym_DynamicRules_1))
              {
                d_26 = ATgetArgument(t, 0);
                t = d_26;
                t = tvars_0_0(t);
              }
            else
              {
                ATerm f_23 = t;
                int h_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_SDefT_4))
                      {
                        ATerm i_23 = ATgetArgument(t, 0);
                        ATerm j_23 = ATgetArgument(t, 1);
                        f_26 = ATgetArgument(t, 2);
                        {
                          ATerm k_23 = ATgetArgument(t, 3);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(h_23);
                    t = f_26;
                    {
                      ATerm e_5 (ATerm t)
                      {
                        ATerm n_26 = NULL;
                        ATerm l_23 = t;
                        int m_23 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_VarDec_2))
                              {
                                n_26 = ATgetArgument(t, 0);
                                {
                                  ATerm n_23 = ATgetArgument(t, 1);
                                }
                              }
                            else
                              _fail(t);
                            LocalPopChoice(m_23);
                            t = n_26;
                          }
                        else
                          {
                            t = l_23;
                            if(match_cons(t, sym_DefaultVarDec_1))
                              {
                                n_26 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = n_26;
                          }
                        return(t);
                      }
                      t = map_1_0(e_5, t);
                    }
                  }
                else
                  {
                    t = f_23;
                    if(match_cons(t, sym_RDefT_4))
                      {
                        ATerm o_23 = ATgetArgument(t, 0);
                        ATerm p_23 = ATgetArgument(t, 1);
                        f_26 = ATgetArgument(t, 2);
                        {
                          ATerm q_23 = ATgetArgument(t, 3);
                        }
                      }
                    else
                      _fail(t);
                    t = f_26;
                    {
                      ATerm f_5 (ATerm t)
                      {
                        ATerm t_26 = NULL;
                        ATerm w_23 = t;
                        int x_23 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_VarDec_2))
                              {
                                t_26 = ATgetArgument(t, 0);
                                {
                                  ATerm z_23 = ATgetArgument(t, 1);
                                }
                              }
                            else
                              _fail(t);
                            LocalPopChoice(x_23);
                            t = t_26;
                          }
                        else
                          {
                            t = w_23;
                            if(match_cons(t, sym_DefaultVarDec_1))
                              {
                                t_26 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = t_26;
                          }
                        return(t);
                      }
                      t = map_1_0(f_5, t);
                    }
                  }
              }
          }
      }
    return(t);
  }
  t = free_vars_3_0(c_5, d_5, tboundin_3_0, t);
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm b_27 = NULL,g_27 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      g_27 = ATgetArgument(t, 0);
      t = g_27;
      if(match_cons(t, sym_Rule_3))
        {
          b_27 = ATgetArgument(t, 0);
          {
            ATerm a_24 = ATgetArgument(t, 1);
          }
          {
            ATerm b_24 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = b_27;
      {
        ATerm g_5 (ATerm t)
        {
          ATerm l_27 = NULL;
          if(match_cons(t, sym_Var_1))
            {
              l_27 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATempty, l_27);
          return(t);
        }
        ATerm h_5 (ATerm t)
        {
          ATerm c_24 = t;
          int d_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind0_0_0(t);
              ;
              LocalPopChoice(d_24);
            }
          else
            {
              t = c_24;
              {
                ATerm n_27 = NULL,p_27 = NULL;
                if(match_cons(t, sym_DynamicRules_1))
                  {
                    n_27 = ATgetArgument(t, 0);
                    t = n_27;
                    t = tvars_0_0(t);
                  }
                else
                  {
                    ATerm e_24 = t;
                    int g_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_SDefT_4))
                          {
                            ATerm h_24 = ATgetArgument(t, 0);
                            ATerm i_24 = ATgetArgument(t, 1);
                            p_27 = ATgetArgument(t, 2);
                            {
                              ATerm l_24 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(g_24);
                        t = p_27;
                        {
                          ATerm i_5 (ATerm t)
                          {
                            ATerm w_27 = NULL;
                            ATerm m_24 = t;
                            int n_24 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                if(match_cons(t, sym_VarDec_2))
                                  {
                                    w_27 = ATgetArgument(t, 0);
                                    {
                                      ATerm u_24 = ATgetArgument(t, 1);
                                    }
                                  }
                                else
                                  _fail(t);
                                LocalPopChoice(n_24);
                                t = w_27;
                              }
                            else
                              {
                                t = m_24;
                                if(match_cons(t, sym_DefaultVarDec_1))
                                  {
                                    w_27 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = w_27;
                              }
                            return(t);
                          }
                          t = map_1_0(i_5, t);
                        }
                      }
                    else
                      {
                        t = e_24;
                        if(match_cons(t, sym_RDefT_4))
                          {
                            ATerm w_24 = ATgetArgument(t, 0);
                            ATerm z_24 = ATgetArgument(t, 1);
                            p_27 = ATgetArgument(t, 2);
                            {
                              ATerm a_25 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        t = p_27;
                        {
                          ATerm l_5 (ATerm t)
                          {
                            ATerm f_28 = NULL;
                            ATerm b_25 = t;
                            int g_25 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                if(match_cons(t, sym_VarDec_2))
                                  {
                                    f_28 = ATgetArgument(t, 0);
                                    {
                                      ATerm h_25 = ATgetArgument(t, 1);
                                    }
                                  }
                                else
                                  _fail(t);
                                LocalPopChoice(g_25);
                                t = f_28;
                              }
                            else
                              {
                                t = b_25;
                                if(match_cons(t, sym_DefaultVarDec_1))
                                  {
                                    f_28 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = f_28;
                              }
                            return(t);
                          }
                          t = map_1_0(l_5, t);
                        }
                      }
                  }
              }
            }
          return(t);
        }
        t = free_vars_3_0(g_5, h_5, tboundin_3_0, t);
      }
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          g_27 = ATgetArgument(t, 0);
          {
            ATerm s_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = g_27;
    }
  return(t);
}
ATerm union_1_0 (ATerm k_126 (ATerm), ATerm t)
{
  ATerm j_28 = NULL,l_28 = NULL;
  if(match_cons(t, sym__2))
    {
      l_28 = ATgetArgument(t, 0);
      j_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_28;
  {
    ATerm m_28 (ATerm t)
    {
      ATerm t_25 = t;
      int u_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = j_28;
          ;
          LocalPopChoice(u_25);
        }
      else
        {
          t = t_25;
          {
            ATerm v_25 = t;
            int w_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_6 = NULL,q_6 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    n_6 = ATgetFirst((ATermList) t);
                    q_6 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = j_28;
                {
                  ATerm m_5 (ATerm t)
                  {
                    ATerm r_6 = NULL;
                    r_6 = t;
                    t = (ATerm) ATmakeAppl(sym__2, n_6, r_6);
                    t = k_126(t);
                    return(t);
                  }
                  t = fetch_1_0(m_5, t);
                  t = q_6;
                  t = m_28(t);
                }
                ;
                LocalPopChoice(w_25);
              }
            else
              {
                t = v_25;
                t = Cons_2_0(_id, m_28, t);
              }
          }
        }
      return(t);
    }
    t = m_28(t);
  }
  return(t);
}
ATerm diff_1_0 (ATerm g_126 (ATerm), ATerm t)
{
  ATerm s_28 = NULL,t_28 = NULL;
  if(match_cons(t, sym__2))
    {
      t_28 = ATgetArgument(t, 0);
      s_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_28;
  {
    ATerm u_28 (ATerm t)
    {
      ATerm x_25 = t;
      int a_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(a_26);
        }
      else
        {
          t = x_25;
          {
            ATerm b_26 = t;
            int c_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_6 = NULL,v_6 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    u_6 = ATgetFirst((ATermList) t);
                    v_6 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = s_28;
                {
                  ATerm n_5 (ATerm t)
                  {
                    ATerm w_6 = NULL;
                    w_6 = t;
                    t = (ATerm) ATmakeAppl(sym__2, u_6, w_6);
                    t = g_126(t);
                    return(t);
                  }
                  t = fetch_1_0(n_5, t);
                  t = v_6;
                  t = u_28(t);
                }
                ;
                LocalPopChoice(c_26);
              }
            else
              {
                t = b_26;
                t = Cons_2_0(_id, u_28, t);
              }
          }
        }
      return(t);
    }
    t = u_28(t);
  }
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm x_28 = NULL,y_28 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm e_26 = ATgetFirst((ATermList) t);
      if(match_cons(e_26, sym__2))
        {
          x_28 = ATgetArgument(e_26, 0);
          y_28 = ATgetArgument(e_26, 1);
        }
      else
        _fail(t);
      b_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(y_28);
  if(match_cons(t, sym__2))
    {
      c_29 = ATgetArgument(t, 0);
      d_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(x_28);
  if(match_cons(t, sym__2))
    {
      if((c_29 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      e_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_29, d_29);
  {
    ATerm o_5 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          ATerm g_26 = ATgetArgument(t, 0);
          if(((ATgetType(g_26) != AT_LIST) || !(ATisEmpty(g_26))))
            _fail(t);
          {
            ATerm h_26 = ATgetArgument(t, 1);
            if(((ATgetType(h_26) != AT_LIST) || !(ATisEmpty(h_26))))
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      return(t);
    }
    ATerm q_5 (ATerm t)
    {
      ATerm g_29 = NULL,h_29 = NULL,j_29 = NULL,k_29 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm i_26 = ATgetArgument(t, 0);
          if(((ATgetType(i_26) == AT_LIST) && !(ATisEmpty(i_26))))
            {
              g_29 = ATgetFirst((ATermList) i_26);
              j_29 = (ATerm) ATgetNext((ATermList) i_26);
            }
          else
            _fail(t);
          {
            ATerm j_26 = ATgetArgument(t, 1);
            if(((ATgetType(j_26) == AT_LIST) && !(ATisEmpty(j_26))))
              {
                h_29 = ATgetFirst((ATermList) j_26);
                k_29 = (ATerm) ATgetNext((ATermList) j_26);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_29, h_29), (ATerm) ATmakeAppl(sym__2, j_29, k_29));
      return(t);
    }
    ATerm r_5 (ATerm t)
    {
      ATerm n_29 = NULL,o_29 = NULL;
      if(match_cons(t, sym__2))
        {
          n_29 = ATgetArgument(t, 0);
          o_29 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(o_29), n_29);
      return(t);
    }
    t = genzip_4_0(o_5, q_5, r_5, _id, t);
    f_29 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_29, b_29);
    {
      ATerm k_26 = t;
      int l_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm m_26 = ATgetArgument(t, 0);
              ATerm o_26 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = f_29;
          {
            ATerm s_5 (ATerm t)
            {
              t = b_29;
              return(t);
            }
            t = at_end_1_0(s_5, t);
          }
          ;
          LocalPopChoice(l_26);
        }
      else
        {
          t = k_26;
          {
            ATerm c_7 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, f_29, b_29));
            if(match_cons(t, sym__2))
              {
                ATerm p_26 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) p_26) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                c_7 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = c_7;
            t = concat_0_0(t);
          }
        }
    }
  }
  return(t);
}
ATerm while_not_2_0 (ATerm h_135 (ATerm), ATerm i_135 (ATerm), ATerm t)
{
  ATerm t_29 (ATerm t)
  {
    ATerm q_26 = t;
    int r_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_135(t);
        ;
        LocalPopChoice(r_26);
      }
    else
      {
        t = q_26;
        t = i_135(t);
        t = t_29(t);
      }
    return(t);
  }
  t = t_29(t);
  return(t);
}
ATerm for_3_0 (ATerm k_135 (ATerm), ATerm l_135 (ATerm), ATerm m_135 (ATerm), ATerm t)
{
  t = k_135(t);
  t = while_not_2_0(l_135, m_135, t);
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm s_26 = t;
  int u_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_5 (ATerm t)
      {
        ATerm b_30 = NULL;
        b_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, b_30);
        return(t);
      }
      ATerm v_5 (ATerm t)
      {
        ATerm x_5 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = _2_0(_id, x_5, t);
        return(t);
      }
      ATerm w_5 (ATerm t)
      {
        ATerm v_26 = t;
        int w_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_5 (ATerm t)
            {
              ATerm x_26 = t;
              int y_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_30 = NULL,e_30 = NULL,f_30 = NULL,g_30 = NULL;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      d_30 = ATgetFirst((ATermList) t);
                      g_30 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = d_30;
                  if(match_cons(t, sym__2))
                    {
                      e_30 = ATgetArgument(t, 0);
                      f_30 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = f_30;
                  if((e_30 != t))
                    {
                      _fail(t);
                    }
                  t = g_30;
                  ;
                  LocalPopChoice(y_26);
                }
              else
                {
                  t = x_26;
                  t = UfDecompose_0_0(t);
                }
              return(t);
            }
            t = _2_0(_id, y_5, t);
            ;
            LocalPopChoice(w_26);
          }
        else
          {
            t = v_26;
            {
              ATerm n_30 = NULL,o_30 = NULL,p_30 = NULL,q_30 = NULL;
              if(match_cons(t, sym__2))
                {
                  n_30 = ATgetArgument(t, 0);
                  o_30 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = o_30;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  p_30 = ATgetFirst((ATermList) t);
                  q_30 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_30), p_30), q_30);
            }
          }
        return(t);
      }
      t = for_3_0(t_5, v_5, w_5, t);
      ;
      LocalPopChoice(u_26);
    }
  else
    {
      t = s_26;
      {
        ATerm z_5 (ATerm t)
        {
          ATerm v_30 = NULL;
          if(match_cons(t, sym__2))
            {
              v_30 = ATgetArgument(t, 0);
              if((v_30 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
            }
          else
            _fail(t);
          return(t);
        }
        t = diff_1_0(z_5, t);
      }
    }
  return(t);
}
ATerm free_vars_3_0 (ATerm b_133 (ATerm), ATerm c_133 (ATerm), ATerm d_133 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm d_31 (ATerm t)
  {
    ATerm z_26 = t;
    int a_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_133(t);
        ;
        LocalPopChoice(a_27);
      }
    else
      {
        t = z_26;
        {
          ATerm c_27 = t;
          int d_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_30 = NULL,a_31 = NULL,o_7 = NULL,p_7 = NULL;
              w_30 = t;
              t = c_133(t);
              a_31 = t;
              t = w_30;
              {
                ATerm a_6 (ATerm t)
                {
                  ATerm e_7 = NULL;
                  t = d_31(t);
                  e_7 = t;
                  t = (ATerm) ATmakeAppl(sym__2, e_7, a_31);
                  t = diff_0_0(t);
                  return(t);
                }
                ATerm b_6 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = d_133(a_6, d_31, b_6, t);
                o_7 = t;
                t = SSL_explode_term(o_7);
                if(match_cons(t, sym__2))
                  {
                    ATerm e_27 = ATgetArgument(t, 0);
                    p_7 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = p_7;
                {
                  ATerm d_6 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  ATerm e_6 (ATerm t)
                  {
                    ATerm f_6 (ATerm t)
                    {
                      ATerm v_7 = NULL;
                      if(match_cons(t, sym__2))
                        {
                          v_7 = ATgetArgument(t, 0);
                          if((v_7 != ATgetArgument(t, 1)))
                            {
                              _fail(ATgetArgument(t, 1));
                            }
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = union_1_0(f_6, t);
                    return(t);
                  }
                  t = foldr_3_0(d_6, e_6, _id, t);
                }
              }
              ;
              LocalPopChoice(d_27);
            }
          else
            {
              t = c_27;
              {
                ATerm w_7 = NULL,x_7 = NULL;
                w_7 = t;
                t = SSL_explode_term(w_7);
                if(match_cons(t, sym__2))
                  {
                    ATerm f_27 = ATgetArgument(t, 0);
                    x_7 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = x_7;
                {
                  ATerm g_6 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  ATerm i_6 (ATerm t)
                  {
                    ATerm j_6 (ATerm t)
                    {
                      ATerm b_8 = NULL;
                      if(match_cons(t, sym__2))
                        {
                          b_8 = ATgetArgument(t, 0);
                          if((b_8 != ATgetArgument(t, 1)))
                            {
                              _fail(ATgetArgument(t, 1));
                            }
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = union_1_0(j_6, t);
                    return(t);
                  }
                  t = foldr_3_0(g_6, i_6, d_31, t);
                }
              }
            }
        }
      }
    return(t);
  }
  t = d_31(t);
  return(t);
}
ATerm Var_1_0 (ATerm z_102 (ATerm), ATerm t)
{
  ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL;
  h_31 = t;
  if(match_cons(t, sym_Var_1))
    {
      f_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_31);
  e_31 = t;
  t = f_31;
  t = z_102(t);
  g_31 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, g_31), e_31);
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  ATerm k_6 (ATerm t)
  {
    ATerm v_31 = NULL,z_31 = NULL,b_32 = NULL;
    if(match_cons(t, sym_LRule_1))
      {
        z_31 = ATgetArgument(t, 0);
        t = z_31;
        if(match_cons(t, sym_Rule_3))
          {
            v_31 = ATgetArgument(t, 0);
            {
              ATerm h_27 = ATgetArgument(t, 1);
            }
            {
              ATerm i_27 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = v_31;
        {
          ATerm l_6 (ATerm t)
          {
            ATerm h_32 = NULL;
            if(match_cons(t, sym_Var_1))
              {
                h_32 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(ATempty, h_32);
            return(t);
          }
          ATerm m_6 (ATerm t)
          {
            ATerm j_27 = t;
            int k_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Bind0_0_0(t);
                ;
                LocalPopChoice(k_27);
              }
            else
              {
                t = j_27;
                {
                  ATerm l_32 = NULL,n_32 = NULL;
                  if(match_cons(t, sym_DynamicRules_1))
                    {
                      l_32 = ATgetArgument(t, 0);
                      t = l_32;
                      t = tvars_0_0(t);
                    }
                  else
                    {
                      ATerm m_27 = t;
                      int o_27 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_SDefT_4))
                            {
                              ATerm q_27 = ATgetArgument(t, 0);
                              ATerm r_27 = ATgetArgument(t, 1);
                              n_32 = ATgetArgument(t, 2);
                              {
                                ATerm s_27 = ATgetArgument(t, 3);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(o_27);
                          t = n_32;
                          {
                            ATerm o_6 (ATerm t)
                            {
                              ATerm t_32 = NULL;
                              ATerm t_27 = t;
                              int u_27 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_VarDec_2))
                                    {
                                      t_32 = ATgetArgument(t, 0);
                                      {
                                        ATerm v_27 = ATgetArgument(t, 1);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(u_27);
                                  t = t_32;
                                }
                              else
                                {
                                  t = t_27;
                                  if(match_cons(t, sym_DefaultVarDec_1))
                                    {
                                      t_32 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = t_32;
                                }
                              return(t);
                            }
                            t = map_1_0(o_6, t);
                          }
                        }
                      else
                        {
                          t = m_27;
                          if(match_cons(t, sym_RDefT_4))
                            {
                              ATerm x_27 = ATgetArgument(t, 0);
                              ATerm y_27 = ATgetArgument(t, 1);
                              n_32 = ATgetArgument(t, 2);
                              {
                                ATerm z_27 = ATgetArgument(t, 3);
                              }
                            }
                          else
                            _fail(t);
                          t = n_32;
                          {
                            ATerm s_6 (ATerm t)
                            {
                              ATerm d_33 = NULL;
                              ATerm a_28 = t;
                              int b_28 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_VarDec_2))
                                    {
                                      d_33 = ATgetArgument(t, 0);
                                      {
                                        ATerm c_28 = ATgetArgument(t, 1);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(b_28);
                                  t = d_33;
                                }
                              else
                                {
                                  t = a_28;
                                  if(match_cons(t, sym_DefaultVarDec_1))
                                    {
                                      d_33 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = d_33;
                                }
                              return(t);
                            }
                            t = map_1_0(s_6, t);
                          }
                        }
                    }
                }
              }
            return(t);
          }
          t = free_vars_3_0(l_6, m_6, tboundin_3_0, t);
        }
      }
    else
      {
        ATerm d_28 = t;
        int e_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Scope_2))
              {
                z_31 = ATgetArgument(t, 0);
                {
                  ATerm g_28 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(e_28);
            t = z_31;
          }
        else
          {
            t = d_28;
            {
              ATerm h_28 = t;
              int i_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      ATerm k_28 = ATgetArgument(t, 0);
                      ATerm n_28 = ATgetArgument(t, 1);
                      b_32 = ATgetArgument(t, 2);
                      {
                        ATerm o_28 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(i_28);
                  t = b_32;
                  {
                    ATerm t_6 (ATerm t)
                    {
                      ATerm l_33 = NULL;
                      ATerm p_28 = t;
                      int q_28 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_VarDec_2))
                            {
                              l_33 = ATgetArgument(t, 0);
                              {
                                ATerm r_28 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(q_28);
                          t = l_33;
                        }
                      else
                        {
                          t = p_28;
                          if(match_cons(t, sym_DefaultVarDec_1))
                            {
                              l_33 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = l_33;
                        }
                      return(t);
                    }
                    t = map_1_0(t_6, t);
                  }
                }
              else
                {
                  t = h_28;
                  if(match_cons(t, sym_RDefT_4))
                    {
                      ATerm v_28 = ATgetArgument(t, 0);
                      ATerm w_28 = ATgetArgument(t, 1);
                      b_32 = ATgetArgument(t, 2);
                      {
                        ATerm z_28 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  t = b_32;
                  {
                    ATerm x_6 (ATerm t)
                    {
                      ATerm r_33 = NULL;
                      ATerm a_29 = t;
                      int i_29 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_VarDec_2))
                            {
                              r_33 = ATgetArgument(t, 0);
                              {
                                ATerm l_29 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(i_29);
                          t = r_33;
                        }
                      else
                        {
                          t = a_29;
                          if(match_cons(t, sym_DefaultVarDec_1))
                            {
                              r_33 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = r_33;
                        }
                      return(t);
                    }
                    t = map_1_0(x_6, t);
                  }
                }
            }
          }
      }
    return(t);
  }
  t = rename_4_0(Var_1_0, k_6, tboundin_3_0, tpaste_1_0, t);
  {
    ATerm y_6 (ATerm t)
    {
      ATerm m_29 = t;
      int p_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Bind1_0_0(t);
          ;
          LocalPopChoice(p_29);
        }
      else
        {
          t = m_29;
          {
            ATerm v_33 = NULL,w_33 = NULL;
            ATerm q_29 = t;
            int r_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDef_3))
                  {
                    ATerm s_29 = ATgetArgument(t, 0);
                    w_33 = ATgetArgument(t, 1);
                    {
                      ATerm u_29 = ATgetArgument(t, 2);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(r_29);
                t = w_33;
                {
                  ATerm z_6 (ATerm t)
                  {
                    ATerm c_34 = NULL;
                    ATerm v_29 = t;
                    int w_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_VarDec_2))
                          {
                            c_34 = ATgetArgument(t, 0);
                            {
                              ATerm x_29 = ATgetArgument(t, 1);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(w_29);
                        t = c_34;
                      }
                    else
                      {
                        t = v_29;
                        if(match_cons(t, sym_DefaultVarDec_1))
                          {
                            c_34 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = c_34;
                      }
                    return(t);
                  }
                  t = map_1_0(z_6, t);
                }
              }
            else
              {
                t = q_29;
                {
                  ATerm y_29 = t;
                  int z_29 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          v_33 = ATgetArgument(t, 0);
                          {
                            ATerm a_30 = ATgetArgument(t, 1);
                          }
                        }
                      else
                        _fail(t);
                      LocalPopChoice(z_29);
                      t = (ATerm) ATinsert(ATempty, v_33);
                    }
                  else
                    {
                      t = y_29;
                      {
                        ATerm c_30 = t;
                        int h_30 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_SDefT_4))
                              {
                                ATerm i_30 = ATgetArgument(t, 0);
                                w_33 = ATgetArgument(t, 1);
                                {
                                  ATerm j_30 = ATgetArgument(t, 2);
                                }
                                {
                                  ATerm k_30 = ATgetArgument(t, 3);
                                }
                              }
                            else
                              _fail(t);
                            LocalPopChoice(h_30);
                            t = w_33;
                            {
                              ATerm a_7 (ATerm t)
                              {
                                ATerm j_34 = NULL;
                                ATerm l_30 = t;
                                int m_30 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_VarDec_2))
                                      {
                                        j_34 = ATgetArgument(t, 0);
                                        {
                                          ATerm r_30 = ATgetArgument(t, 1);
                                        }
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(m_30);
                                    t = j_34;
                                  }
                                else
                                  {
                                    t = l_30;
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        j_34 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = j_34;
                                  }
                                return(t);
                              }
                              t = map_1_0(a_7, t);
                            }
                          }
                        else
                          {
                            t = c_30;
                            if(match_cons(t, sym_RDefT_4))
                              {
                                ATerm s_30 = ATgetArgument(t, 0);
                                w_33 = ATgetArgument(t, 1);
                                {
                                  ATerm t_30 = ATgetArgument(t, 2);
                                }
                                {
                                  ATerm u_30 = ATgetArgument(t, 3);
                                }
                              }
                            else
                              _fail(t);
                            t = w_33;
                            {
                              ATerm b_7 (ATerm t)
                              {
                                ATerm p_34 = NULL;
                                ATerm x_30 = t;
                                int y_30 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_VarDec_2))
                                      {
                                        p_34 = ATgetArgument(t, 0);
                                        {
                                          ATerm z_30 = ATgetArgument(t, 1);
                                        }
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(y_30);
                                    t = p_34;
                                  }
                                else
                                  {
                                    t = x_30;
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        p_34 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = p_34;
                                  }
                                return(t);
                              }
                              t = map_1_0(b_7, t);
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
    t = rename_4_0(SVar_1_0, y_6, sboundin_3_0, spaste_1_0, t);
  }
  return(t);
}
ATerm InlineCall0_0_0 (ATerm t)
{
  ATerm u_34 = NULL,v_34 = NULL,w_34 = NULL,x_34 = NULL,y_34 = NULL,z_34 = NULL,a_35 = NULL,b_35 = NULL,c_35 = NULL,d_35 = NULL,e_35 = NULL;
  u_34 = t;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm b_31 = ATgetArgument(t, 0);
      if(match_cons(b_31, sym_SVar_1))
        {
          v_34 = ATgetArgument(b_31, 0);
        }
      else
        _fail(t);
      {
        ATerm c_31 = ATgetArgument(t, 1);
        if(((ATgetType(c_31) != AT_LIST) || !(ATisEmpty(c_31))))
          _fail(t);
      }
      {
        ATerm i_31 = ATgetArgument(t, 2);
        if(((ATgetType(i_31) != AT_LIST) || !(ATisEmpty(i_31))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("InlineCall0", 0, ATtrue)), u_34);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_34 = ATgetFirst((ATermList) t);
      {
        ATerm j_31 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = x_34;
  if(match_cons(t, sym_Defined_2))
    {
      ATerm k_31 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_31) != ATmakeSymbol("g_0", 0, ATtrue)))
        _fail(t);
      w_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_34;
  t = strename_0_0(t);
  if(match_cons(t, sym_SDefT_4))
    {
      if((v_34 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      y_34 = ATgetArgument(t, 1);
      z_34 = ATgetArgument(t, 2);
      a_35 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = y_34;
  {
    ATerm d_7 (ATerm t)
    {
      t = term_l_31;
      return(t);
    }
    ATerm f_7 (ATerm t)
    {
      ATerm f_35 = NULL,g_35 = NULL;
      if(match_cons(t, sym__2))
        {
          f_35 = ATgetArgument(t, 0);
          g_35 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm m_31 = t;
        int n_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(f_35, g_35);
            ;
            LocalPopChoice(n_31);
          }
        else
          {
            t = m_31;
            t = SSL_addr(f_35, g_35);
          }
      }
      return(t);
    }
    ATerm j_7 (ATerm t)
    {
      t = term_o_31;
      return(t);
    }
    t = foldr_3_0(d_7, f_7, j_7, t);
    b_35 = t;
    t = z_34;
    {
      ATerm k_7 (ATerm t)
      {
        t = term_l_31;
        return(t);
      }
      ATerm m_7 (ATerm t)
      {
        ATerm h_35 = NULL,i_35 = NULL;
        if(match_cons(t, sym__2))
          {
            h_35 = ATgetArgument(t, 0);
            i_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        {
          ATerm p_31 = t;
          int q_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_addi(h_35, i_35);
              ;
              LocalPopChoice(q_31);
            }
          else
            {
              t = p_31;
              t = SSL_addr(h_35, i_35);
            }
        }
        return(t);
      }
      ATerm n_7 (ATerm t)
      {
        t = term_o_31;
        return(t);
      }
      t = foldr_3_0(k_7, m_7, n_7, t);
      c_35 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_35, c_35);
      {
        ATerm r_31 = t;
        int s_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(b_35, c_35);
            ;
            LocalPopChoice(s_31);
          }
        else
          {
            t = r_31;
            t = SSL_addr(b_35, c_35);
          }
        d_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_35, term_l_31);
        {
          ATerm t_31 = t;
          int u_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(d_35, (ATerm) ATmakeInt(0));
              ;
              LocalPopChoice(u_31);
            }
          else
            {
              t = t_31;
              t = SSL_gtr(d_35, (ATerm) ATmakeInt(0));
            }
          t = (ATerm) ATmakeAppl(sym__2, d_35, term_l_31);
          t = new_0_0(t);
          e_35 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, v_34), (ATerm)ATempty, (ATerm) ATempty), term_n_16);
          {
            ATerm q_7 (ATerm t)
            {
              t = term_p_16;
              return(t);
            }
            t = assert_1_0(q_7, t);
            t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, e_35, y_34, z_34, a_35)), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, e_35), (ATerm)ATempty, (ATerm) ATempty));
          }
        }
      }
    }
  }
  return(t);
}
ATerm occurrences_1_0 (ATerm s_126 (ATerm), ATerm t)
{
  ATerm c_8 = NULL,d_8 = NULL,e_8 = NULL,n_8 = NULL;
  c_8 = t;
  {
    ATerm w_31 = t;
    int x_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_126(t);
        t = term_o_31;
        ;
        LocalPopChoice(x_31);
      }
    else
      {
        t = w_31;
        t = term_l_31;
      }
    d_8 = t;
    t = SSL_explode_term(c_8);
    if(match_cons(t, sym__2))
      {
        ATerm y_31 = ATgetArgument(t, 0);
        n_8 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = n_8;
    {
      ATerm r_7 (ATerm t)
      {
        t = term_l_31;
        return(t);
      }
      ATerm s_7 (ATerm t)
      {
        ATerm v_8 = NULL,w_8 = NULL;
        if(match_cons(t, sym__2))
          {
            v_8 = ATgetArgument(t, 0);
            w_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        {
          ATerm a_32 = t;
          int c_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_addi(v_8, w_8);
              ;
              LocalPopChoice(c_32);
            }
          else
            {
              t = a_32;
              t = SSL_addr(v_8, w_8);
            }
        }
        return(t);
      }
      ATerm t_7 (ATerm t)
      {
        t = occurrences_1_0(s_126, t);
        return(t);
      }
      t = foldr_3_0(r_7, s_7, t_7, t);
      e_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_8, e_8);
      {
        ATerm d_32 = t;
        int e_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(d_8, e_8);
            ;
            LocalPopChoice(e_32);
          }
        else
          {
            t = d_32;
            t = SSL_addr(d_8, e_8);
          }
      }
    }
  }
  return(t);
}
ATerm local_inlinable_1_0 (ATerm b_116 (ATerm), ATerm t)
{
  ATerm r_35 = NULL,s_35 = NULL,v_35 = NULL,w_35 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      r_35 = ATgetArgument(t, 0);
      {
        ATerm f_32 = ATgetArgument(t, 1);
      }
      {
        ATerm g_32 = ATgetArgument(t, 2);
      }
      s_35 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  v_35 = t;
  t = s_35;
  {
    ATerm i_32 = t;
    if((PushChoice() == 0))
      {
        ATerm u_7 (ATerm t)
        {
          if(match_cons(t, sym_CallT_3))
            {
              ATerm j_32 = ATgetArgument(t, 0);
              if(match_cons(j_32, sym_SVar_1))
                {
                  if((r_35 != ATgetArgument(j_32, 0)))
                    {
                      _fail(ATgetArgument(j_32, 0));
                    }
                }
              else
                _fail(t);
              {
                ATerm k_32 = ATgetArgument(t, 1);
              }
              {
                ATerm m_32 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(u_7, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = i_32;
      }
    t = b_116(t);
    {
      ATerm y_7 (ATerm t)
      {
        if(match_cons(t, sym_CallT_3))
          {
            ATerm o_32 = ATgetArgument(t, 0);
            if(match_cons(o_32, sym_SVar_1))
              {
                if((r_35 != ATgetArgument(o_32, 0)))
                  {
                    _fail(ATgetArgument(o_32, 0));
                  }
              }
            else
              _fail(t);
            {
              ATerm p_32 = ATgetArgument(t, 1);
            }
            {
              ATerm q_32 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        return(t);
      }
      t = occurrences_1_0(y_7, t);
      w_35 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_35, term_o_31);
      t = leq_0_0(t);
      t = v_35;
    }
  }
  return(t);
}
ATerm UndefineSDef_0_0 (ATerm t)
{
  ATerm x_35 = NULL,y_35 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      x_35 = ATgetArgument(t, 0);
      {
        ATerm r_32 = ATgetArgument(t, 1);
      }
      {
        ATerm s_32 = ATgetArgument(t, 2);
      }
      {
        ATerm u_32 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  y_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, x_35), (ATerm)ATempty, (ATerm) ATempty), term_n_16);
  {
    ATerm z_7 (ATerm t)
    {
      t = term_p_16;
      return(t);
    }
    t = assert_1_0(z_7, t);
    t = y_35;
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm b_36 = NULL,c_36 = NULL,d_36 = NULL;
  if(match_cons(t, sym__2))
    {
      b_36 = ATgetArgument(t, 0);
      c_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_32 = t;
    int w_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_8 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm x_32 = ATgetArgument(t, 0);
            ATerm y_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(b_36, c_36);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm z_32 = ATgetFirst((ATermList) t);
            y_8 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = y_8;
        ;
        LocalPopChoice(w_32);
      }
    else
      {
        t = v_32;
        t = (ATerm) ATempty;
      }
    d_36 = t;
    t = SSL_table_put(b_36, c_36, d_36);
    t = (ATerm) ATmakeAppl(sym__2, b_36, c_36);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm f_130 (ATerm), ATerm t)
{
  ATerm j_36 = NULL,m_36 = NULL,n_36 = NULL,o_36 = NULL;
  j_36 = t;
  t = f_130(t);
  m_36 = t;
  {
    ATerm a_33 = t;
    int b_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(m_36, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(b_33);
      }
    else
      {
        t = a_33;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_36 = ATgetFirst((ATermList) t);
        n_36 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(m_36, (ATerm)ATmakeAppl(sym_Scopes_0), n_36);
    t = o_36;
    {
      ATerm a_8 (ATerm t)
      {
        ATerm p_36 = NULL;
        p_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_36, p_36);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(a_8, t);
      t = j_36;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm d_121 (ATerm), ATerm e_121 (ATerm), ATerm t)
{
  ATerm c_33 = t;
  int e_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_121(t);
      t = e_121(t);
      ;
      LocalPopChoice(e_33);
    }
  else
    {
      t = c_33;
      t = e_121(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm e_130 (ATerm), ATerm t)
{
  ATerm y_36 = NULL,a_37 = NULL,b_37 = NULL;
  y_36 = t;
  t = e_130(t);
  a_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_37, term_f_33);
  {
    ATerm g_33 = t;
    int h_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_33 = ATgetArgument(t, 0);
            ATerm j_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(a_37, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(h_33);
      }
    else
      {
        t = g_33;
        t = (ATerm) ATempty;
      }
    b_37 = t;
    t = SSL_table_put(a_37, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(b_37), (ATerm) ATempty));
    t = y_36;
  }
  return(t);
}
ATerm scope_2_0 (ATerm g_130 (ATerm), ATerm h_130 (ATerm), ATerm t)
{
  t = begin_scope_1_0(g_130, t);
  {
    ATerm f_8 (ATerm t)
    {
      t = end_scope_1_0(g_130, t);
      return(t);
    }
    t = restore_always_2_0(h_130, f_8, t);
  }
  return(t);
}
ATerm inline_sdef_0_0 (ATerm t)
{
  ATerm g_8 (ATerm t)
  {
    t = term_p_16;
    return(t);
  }
  ATerm h_8 (ATerm t)
  {
    ATerm l_8 (ATerm t)
    {
      t = term_k_33;
      return(t);
    }
    ATerm m_8 (ATerm t)
    {
      ATerm m_33 = t;
      int n_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = UndefineSDef_0_0(t);
          ;
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
                ATerm i_37 = NULL,j_37 = NULL;
                if(match_cons(t, sym_Let_2))
                  {
                    i_37 = ATgetArgument(t, 0);
                    j_37 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = i_37;
                {
                  ATerm q_8 (ATerm t)
                  {
                    ATerm r_8 (ATerm t)
                    {
                      t = j_37;
                      return(t);
                    }
                    t = local_inlinable_1_0(r_8, t);
                    t = AddSDef_0_0(t);
                    return(t);
                  }
                  t = map_1_0(q_8, t);
                  t = (ATerm) ATmakeAppl(sym_Let_2, i_37, j_37);
                }
                ;
                LocalPopChoice(p_33);
              }
            else
              {
                t = o_33;
                {
                  ATerm t_8 (ATerm t)
                  {
                    ATerm q_33 = t;
                    int s_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = InlineCall0_0_0(t);
                        ;
                        LocalPopChoice(s_33);
                      }
                    else
                      {
                        t = q_33;
                        t = InlineCall_0_0(t);
                      }
                    return(t);
                  }
                  t = repeat_1_0(t_8, t);
                }
              }
          }
        }
      t = SRTS_all(inline_sdef_0_0, t);
      return(t);
    }
    t = scope_2_0(l_8, m_8, t);
    return(t);
  }
  t = scope_2_0(g_8, h_8, t);
  return(t);
}
ATerm assert_1_0 (ATerm i_130 (ATerm), ATerm t)
{
  ATerm o_37 = NULL,q_37 = NULL,s_37 = NULL,u_37 = NULL,v_37 = NULL;
  if(match_cons(t, sym__2))
    {
      o_37 = ATgetArgument(t, 0);
      q_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_130(t);
  s_37 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_37, o_37, q_37);
  t = table_push_0_0(t);
  {
    ATerm t_33 = t;
    int u_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(s_37, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(u_33);
      }
    else
      {
        t = t_33;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_37 = ATgetFirst((ATermList) t);
        v_37 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(s_37, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(v_37), (ATerm) ATinsert(CheckATermList(u_37), o_37)));
    t = (ATerm) ATmakeAppl(sym__2, o_37, q_37);
  }
  return(t);
}
ATerm AddSDef_0_0 (ATerm t)
{
  ATerm w_37 = NULL,y_37 = NULL,a_38 = NULL;
  w_37 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      y_37 = ATgetArgument(t, 0);
      {
        ATerm x_33 = ATgetArgument(t, 1);
      }
      {
        ATerm y_33 = ATgetArgument(t, 2);
      }
      {
        ATerm z_33 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  a_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, y_37), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_a_34, w_37));
  {
    ATerm u_8 (ATerm t)
    {
      t = term_p_16;
      return(t);
    }
    t = assert_1_0(u_8, t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, y_37), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_b_34, w_37));
    {
      ATerm x_8 (ATerm t)
      {
        t = term_k_33;
        return(t);
      }
      t = assert_1_0(x_8, t);
      t = a_38;
    }
  }
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm d_34 = t;
  if((PushChoice() == 0))
    {
      ATerm c_38 = NULL,e_38 = NULL;
      if(match_cons(t, sym__2))
        {
          c_38 = ATgetArgument(t, 0);
          e_38 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm e_34 = t;
        int f_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(c_38, e_38);
            ;
            LocalPopChoice(f_34);
          }
        else
          {
            t = e_34;
            t = SSL_gtr(c_38, e_38);
          }
        t = (ATerm) ATmakeAppl(sym__2, c_38, e_38);
      }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = d_34;
    }
  return(t);
}
ATerm foldr_3_0 (ATerm z_128 (ATerm), ATerm a_129 (ATerm), ATerm b_129 (ATerm), ATerm t)
{
  ATerm g_34 = t;
  int h_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = z_128(t);
      ;
      LocalPopChoice(h_34);
    }
  else
    {
      t = g_34;
      {
        ATerm i_38 = NULL,k_38 = NULL,p_38 = NULL,r_38 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_38 = ATgetFirst((ATermList) t);
            k_38 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = i_38;
        t = b_129(t);
        p_38 = t;
        t = k_38;
        t = foldr_3_0(z_128, a_129, b_129, t);
        r_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_38, r_38);
        t = a_129(t);
      }
    }
  return(t);
}
ATerm term_size_0_0 (ATerm t)
{
  ATerm i_34 = t;
  int k_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_8 = NULL,b_9 = NULL;
      z_8 = t;
      t = SSL_explode_term(z_8);
      if(match_cons(t, sym__2))
        {
          ATerm l_34 = ATgetArgument(t, 0);
          b_9 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = b_9;
      {
        ATerm c_9 (ATerm t)
        {
          t = term_o_31;
          return(t);
        }
        ATerm d_9 (ATerm t)
        {
          ATerm f_9 = NULL,g_9 = NULL;
          if(match_cons(t, sym__2))
            {
              f_9 = ATgetArgument(t, 0);
              g_9 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          {
            ATerm m_34 = t;
            int n_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SSL_addi(f_9, g_9);
                ;
                LocalPopChoice(n_34);
              }
            else
              {
                t = m_34;
                t = SSL_addr(f_9, g_9);
              }
          }
          return(t);
        }
        t = foldr_3_0(c_9, d_9, term_size_0_0, t);
      }
      ;
      LocalPopChoice(k_34);
    }
  else
    {
      t = i_34;
      {
        ATerm z_38 (ATerm t)
        {
          ATerm h_9 = NULL,i_9 = NULL;
          h_9 = t;
          t = SSL_explode_term(h_9);
          if(match_cons(t, sym__2))
            {
              ATerm o_34 = ATgetArgument(t, 0);
              i_9 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = i_9;
          {
            ATerm e_9 (ATerm t)
            {
              t = term_o_31;
              return(t);
            }
            ATerm j_9 (ATerm t)
            {
              ATerm p_9 = NULL,q_9 = NULL;
              if(match_cons(t, sym__2))
                {
                  p_9 = ATgetArgument(t, 0);
                  q_9 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              {
                ATerm q_34 = t;
                int r_34 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = SSL_addi(p_9, q_9);
                    ;
                    LocalPopChoice(r_34);
                  }
                else
                  {
                    t = q_34;
                    t = SSL_addr(p_9, q_9);
                  }
              }
              return(t);
            }
            t = foldr_3_0(e_9, j_9, z_38, t);
          }
          return(t);
        }
        t = z_38(t);
      }
    }
  return(t);
}
ATerm GuardedLChoice_3_0 (ATerm d_107 (ATerm), ATerm e_107 (ATerm), ATerm f_107 (ATerm), ATerm t)
{
  ATerm a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL,h_39 = NULL,i_39 = NULL;
  i_39 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      b_39 = ATgetArgument(t, 0);
      c_39 = ATgetArgument(t, 1);
      d_39 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_39);
  a_39 = t;
  t = b_39;
  t = d_107(t);
  e_39 = t;
  t = c_39;
  t = e_107(t);
  f_39 = t;
  t = d_39;
  t = f_107(t);
  h_39 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, e_39, f_39, h_39), a_39);
  return(t);
}
ATerm LChoice_2_0 (ATerm z_106 (ATerm), ATerm a_107 (ATerm), ATerm t)
{
  ATerm o_39 = NULL,q_39 = NULL,r_39 = NULL,u_39 = NULL,w_39 = NULL,y_39 = NULL;
  y_39 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      q_39 = ATgetArgument(t, 0);
      r_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_39);
  o_39 = t;
  t = q_39;
  t = z_106(t);
  u_39 = t;
  t = r_39;
  t = a_107(t);
  w_39 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, u_39, w_39), o_39);
  return(t);
}
ATerm Choice_2_0 (ATerm x_105 (ATerm), ATerm y_105 (ATerm), ATerm t)
{
  ATerm b_40 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL,g_40 = NULL,i_40 = NULL;
  i_40 = t;
  if(match_cons(t, sym_Choice_2))
    {
      c_40 = ATgetArgument(t, 0);
      d_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_40);
  b_40 = t;
  t = c_40;
  t = x_105(t);
  e_40 = t;
  t = d_40;
  t = y_105(t);
  g_40 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, e_40, g_40), b_40);
  return(t);
}
ATerm Match_1_0 (ATerm q_106 (ATerm), ATerm t)
{
  ATerm m_40 = NULL,n_40 = NULL,o_40 = NULL,p_40 = NULL;
  p_40 = t;
  if(match_cons(t, sym_Match_1))
    {
      n_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_40);
  m_40 = t;
  t = n_40;
  t = q_106(t);
  o_40 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, o_40), m_40);
  return(t);
}
ATerm Seq_2_0 (ATerm x_106 (ATerm), ATerm y_106 (ATerm), ATerm t)
{
  ATerm s_40 = NULL,t_40 = NULL,u_40 = NULL,v_40 = NULL,w_40 = NULL,x_40 = NULL;
  x_40 = t;
  if(match_cons(t, sym_Seq_2))
    {
      t_40 = ATgetArgument(t, 0);
      u_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_40);
  s_40 = t;
  t = t_40;
  t = x_106(t);
  v_40 = t;
  t = u_40;
  t = y_106(t);
  w_40 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, v_40, w_40), s_40);
  return(t);
}
ATerm Scope_2_0 (ATerm t_106 (ATerm), ATerm u_106 (ATerm), ATerm t)
{
  ATerm a_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL,i_41 = NULL,r_41 = NULL;
  r_41 = t;
  if(match_cons(t, sym_Scope_2))
    {
      c_41 = ATgetArgument(t, 0);
      d_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_41);
  a_41 = t;
  t = c_41;
  t = t_106(t);
  e_41 = t;
  t = d_41;
  t = u_106(t);
  i_41 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, e_41, i_41), a_41);
  return(t);
}
ATerm Build_1_0 (ATerm r_106 (ATerm), ATerm t)
{
  ATerm v_41 = NULL,e_42 = NULL,l_42 = NULL,q_42 = NULL;
  q_42 = t;
  if(match_cons(t, sym_Build_1))
    {
      e_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_42);
  v_41 = t;
  t = e_42;
  t = r_106(t);
  l_42 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, l_42), v_41);
  return(t);
}
ATerm SVar_1_0 (ATerm i_106 (ATerm), ATerm t)
{
  ATerm c_43 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL;
  f_43 = t;
  if(match_cons(t, sym_SVar_1))
    {
      d_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_43);
  c_43 = t;
  t = d_43;
  t = i_106(t);
  e_43 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, e_43), c_43);
  return(t);
}
ATerm PrimT_3_0 (ATerm p_107 (ATerm), ATerm q_107 (ATerm), ATerm r_107 (ATerm), ATerm t)
{
  ATerm i_43 = NULL,j_43 = NULL,k_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL,o_43 = NULL,q_43 = NULL;
  q_43 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      j_43 = ATgetArgument(t, 0);
      k_43 = ATgetArgument(t, 1);
      l_43 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_43);
  i_43 = t;
  t = j_43;
  t = p_107(t);
  m_43 = t;
  t = k_43;
  t = q_107(t);
  n_43 = t;
  t = l_43;
  t = r_107(t);
  o_43 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, m_43, n_43, o_43), i_43);
  return(t);
}
ATerm CallT_3_0 (ATerm n_106 (ATerm), ATerm o_106 (ATerm), ATerm p_106 (ATerm), ATerm t)
{
  ATerm v_43 = NULL,w_43 = NULL,x_43 = NULL,y_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL,c_44 = NULL;
  c_44 = t;
  if(match_cons(t, sym_CallT_3))
    {
      w_43 = ATgetArgument(t, 0);
      x_43 = ATgetArgument(t, 1);
      y_43 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_44);
  v_43 = t;
  t = w_43;
  t = n_106(t);
  z_43 = t;
  t = x_43;
  t = o_106(t);
  a_44 = t;
  t = y_43;
  t = p_106(t);
  b_44 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, z_43, a_44, b_44), v_43);
  return(t);
}
ATerm body_to_inline_0_0 (ATerm t)
{
  ATerm f_44 = NULL,g_44 = NULL;
  ATerm h_44 (ATerm t)
  {
    ATerm s_34 = t;
    int t_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(!(match_cons(t, sym_Id_0)))
          _fail(t);
        ;
        LocalPopChoice(t_34);
      }
    else
      {
        t = s_34;
        {
          ATerm j_35 = t;
          int k_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              ;
              LocalPopChoice(k_35);
            }
          else
            {
              t = j_35;
              {
                ATerm l_35 = t;
                int m_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm k_9 (ATerm t)
                    {
                      t = SVar_1_0(_id, t);
                      return(t);
                    }
                    t = CallT_3_0(k_9, _id, _id, t);
                    ;
                    LocalPopChoice(m_35);
                  }
                else
                  {
                    t = l_35;
                    {
                      ATerm n_35 = t;
                      int o_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm l_9 (ATerm t)
                          {
                            t = SVar_1_0(_id, t);
                            return(t);
                          }
                          t = PrimT_3_0(l_9, _id, _id, t);
                          ;
                          LocalPopChoice(o_35);
                        }
                      else
                        {
                          t = n_35;
                          {
                            ATerm p_35 = t;
                            int q_35 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = Build_1_0(_id, t);
                                ;
                                LocalPopChoice(q_35);
                              }
                            else
                              {
                                t = p_35;
                                {
                                  ATerm t_35 = t;
                                  int u_35 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = Match_1_0(_id, t);
                                      ;
                                      LocalPopChoice(u_35);
                                    }
                                  else
                                    {
                                      t = t_35;
                                      {
                                        ATerm z_35 = t;
                                        int a_36 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm o_9 (ATerm t)
                                            {
                                              t = Match_1_0(_id, t);
                                              return(t);
                                            }
                                            t = Seq_2_0(o_9, _id, t);
                                            ;
                                            LocalPopChoice(a_36);
                                          }
                                        else
                                          {
                                            t = z_35;
                                            {
                                              ATerm e_36 = t;
                                              int f_36 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm t_9 (ATerm t)
                                                  {
                                                    t = Match_1_0(_id, t);
                                                    return(t);
                                                  }
                                                  t = Scope_2_0(_id, t_9, t);
                                                  ;
                                                  LocalPopChoice(f_36);
                                                }
                                              else
                                                {
                                                  t = e_36;
                                                  {
                                                    ATerm g_36 = t;
                                                    int h_36 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm u_9 (ATerm t)
                                                        {
                                                          ATerm v_9 (ATerm t)
                                                          {
                                                            t = Match_1_0(_id, t);
                                                            return(t);
                                                          }
                                                          t = Seq_2_0(v_9, _id, t);
                                                          return(t);
                                                        }
                                                        t = Scope_2_0(_id, u_9, t);
                                                        ;
                                                        LocalPopChoice(h_36);
                                                      }
                                                    else
                                                      {
                                                        t = g_36;
                                                        {
                                                          ATerm i_36 = t;
                                                          int k_36 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm w_9 (ATerm t)
                                                              {
                                                                ATerm x_9 (ATerm t)
                                                                {
                                                                  ATerm y_9 (ATerm t)
                                                                  {
                                                                    t = Match_1_0(_id, t);
                                                                    return(t);
                                                                  }
                                                                  t = Seq_2_0(y_9, _id, t);
                                                                  return(t);
                                                                }
                                                                t = Scope_2_0(_id, x_9, t);
                                                                return(t);
                                                              }
                                                              t = Seq_2_0(w_9, _id, t);
                                                              ;
                                                              LocalPopChoice(k_36);
                                                            }
                                                          else
                                                            {
                                                              t = i_36;
                                                              {
                                                                ATerm l_36 = t;
                                                                int q_36 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    t = Choice_2_0(h_44, h_44, t);
                                                                    ;
                                                                    LocalPopChoice(q_36);
                                                                  }
                                                                else
                                                                  {
                                                                    t = l_36;
                                                                    {
                                                                      ATerm r_36 = t;
                                                                      int s_36 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = LChoice_2_0(h_44, h_44, t);
                                                                          ;
                                                                          LocalPopChoice(s_36);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = r_36;
                                                                          t = GuardedLChoice_3_0(h_44, h_44, h_44, t);
                                                                        }
                                                                    }
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                            }
                                          }
                                      }
                                    }
                                }
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
  t = h_44(t);
  f_44 = t;
  t = term_size_0_0(t);
  g_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_44, term_t_36);
  t = leq_0_0(t);
  t = f_44;
  return(t);
}
ATerm SDefT_4_0 (ATerm b_109 (ATerm), ATerm c_109 (ATerm), ATerm d_109 (ATerm), ATerm e_109 (ATerm), ATerm t)
{
  ATerm i_44 = NULL,j_44 = NULL,k_44 = NULL,l_44 = NULL,m_44 = NULL,n_44 = NULL,o_44 = NULL,p_44 = NULL,q_44 = NULL,r_44 = NULL;
  r_44 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      j_44 = ATgetArgument(t, 0);
      k_44 = ATgetArgument(t, 1);
      l_44 = ATgetArgument(t, 2);
      m_44 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_44);
  i_44 = t;
  t = j_44;
  t = b_109(t);
  n_44 = t;
  t = k_44;
  t = c_109(t);
  o_44 = t;
  t = l_44;
  t = d_109(t);
  p_44 = t;
  t = m_44;
  t = e_109(t);
  q_44 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, n_44, o_44, p_44, q_44), i_44);
  return(t);
}
ATerm inlineable_0_0 (ATerm t)
{
  ATerm x_44 = NULL;
  ATerm z_9 (ATerm t)
  {
    ATerm u_36 = t;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main_0_0", 0, ATtrue)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_36;
      }
    if(((x_44 != NULL) && (x_44 != t)))
      _fail(t);
    else
      x_44 = t;
    return(t);
  }
  ATerm a_10 (ATerm t)
  {
    ATerm z_44 = NULL;
    z_44 = t;
    {
      ATerm v_36 = t;
      if((PushChoice() == 0))
        {
          ATerm b_10 (ATerm t)
          {
            if(match_cons(t, sym_CallT_3))
              {
                ATerm w_36 = ATgetArgument(t, 0);
                if(match_cons(w_36, sym_SVar_1))
                  {
                    if(((x_44 != NULL) && (x_44 != ATgetArgument(w_36, 0))))
                      _fail(ATgetArgument(w_36, 0));
                    else
                      x_44 = ATgetArgument(w_36, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm x_36 = ATgetArgument(t, 1);
                }
                {
                  ATerm z_36 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1_0(b_10, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = v_36;
        }
      t = z_44;
      t = body_to_inline_0_0(t);
    }
    return(t);
  }
  t = SDefT_4_0(z_9, _id, _id, a_10, t);
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm e_45 = NULL,g_45 = NULL,i_45 = NULL,k_45 = NULL,l_45 = NULL,m_45 = NULL,n_45 = NULL;
  if(match_cons(t, sym__2))
    {
      i_45 = ATgetArgument(t, 0);
      k_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_45;
  if(match_cons(t, sym_Build_1))
    {
      ATerm c_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_45;
  if(match_cons(t, sym_Where_1))
    {
      l_45 = ATgetArgument(t, 0);
      t = l_45;
      if(match_cons(t, sym_Prim_2))
        {
          e_45 = ATgetArgument(t, 0);
          g_45 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(t, sym_Prim_2))
        {
          l_45 = ATgetArgument(t, 0);
          m_45 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_Prim_2, l_45, m_45);
        }
      else
        {
          if(match_cons(t, sym_PrimT_3))
            {
              l_45 = ATgetArgument(t, 0);
              m_45 = ATgetArgument(t, 1);
              n_45 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
        }
    }
  return(t);
}
ATerm genzip_4_0 (ATerm i_122 (ATerm), ATerm j_122 (ATerm), ATerm k_122 (ATerm), ATerm l_122 (ATerm), ATerm t)
{
  ATerm x_45 (ATerm t)
  {
    ATerm d_37 = t;
    int e_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_122(t);
        ;
        LocalPopChoice(e_37);
      }
    else
      {
        t = d_37;
        t = j_122(t);
        t = _2_0(l_122, x_45, t);
        t = k_122(t);
      }
    return(t);
  }
  t = x_45(t);
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm y_45 = NULL,z_45 = NULL,a_46 = NULL,b_46 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_37 = ATgetArgument(t, 0);
      if(match_cons(f_37, sym_Build_1))
        {
          ATerm h_37 = ATgetArgument(f_37, 0);
          if(match_cons(h_37, sym_Op_2))
            {
              z_45 = ATgetArgument(h_37, 0);
              y_45 = ATgetArgument(h_37, 1);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm g_37 = ATgetArgument(t, 1);
        if(match_cons(g_37, sym_Match_1))
          {
            ATerm k_37 = ATgetArgument(g_37, 0);
            if(match_cons(k_37, sym_Op_2))
              {
                if((z_45 != ATgetArgument(k_37, 0)))
                  {
                    _fail(ATgetArgument(k_37, 0));
                  }
                a_46 = ATgetArgument(k_37, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, y_45, a_46);
  {
    ATerm c_10 (ATerm t)
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
    ATerm e_10 (ATerm t)
    {
      ATerm d_46 = NULL,e_46 = NULL,f_46 = NULL,g_46 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm n_37 = ATgetArgument(t, 0);
          if(((ATgetType(n_37) == AT_LIST) && !(ATisEmpty(n_37))))
            {
              d_46 = ATgetFirst((ATermList) n_37);
              f_46 = (ATerm) ATgetNext((ATermList) n_37);
            }
          else
            _fail(t);
          {
            ATerm p_37 = ATgetArgument(t, 1);
            if(((ATgetType(p_37) == AT_LIST) && !(ATisEmpty(p_37))))
              {
                e_46 = ATgetFirst((ATermList) p_37);
                g_46 = (ATerm) ATgetNext((ATermList) p_37);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_46, e_46), (ATerm) ATmakeAppl(sym__2, f_46, g_46));
      return(t);
    }
    ATerm f_10 (ATerm t)
    {
      ATerm h_46 = NULL,i_46 = NULL;
      if(match_cons(t, sym__2))
        {
          h_46 = ATgetArgument(t, 0);
          i_46 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(i_46), h_46);
      return(t);
    }
    ATerm g_10 (ATerm t)
    {
      ATerm j_46 = NULL,k_46 = NULL;
      if(match_cons(t, sym__2))
        {
          j_46 = ATgetArgument(t, 0);
          k_46 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, j_46), (ATerm) ATmakeAppl(sym_Match_1, k_46));
      return(t);
    }
    t = genzip_4_0(c_10, e_10, f_10, g_10, t);
    b_46 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, b_46), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, z_45, y_45)));
  }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm l_46 = NULL,m_46 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_37 = ATgetArgument(t, 0);
      if(match_cons(r_37, sym_Build_1))
        {
          ATerm x_37 = ATgetArgument(r_37, 0);
          if(match_cons(x_37, sym_Op_2))
            {
              l_46 = ATgetArgument(x_37, 0);
              {
                ATerm z_37 = ATgetArgument(x_37, 1);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm t_37 = ATgetArgument(t, 1);
        if(match_cons(t_37, sym_Match_1))
          {
            ATerm b_38 = ATgetArgument(t_37, 0);
            if(match_cons(b_38, sym_Op_2))
              {
                m_46 = ATgetArgument(b_38, 0);
                {
                  ATerm d_38 = ATgetArgument(b_38, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, l_46, m_46);
  {
    ATerm f_38 = t;
    if((PushChoice() == 0))
      {
        ATerm n_46 = NULL;
        if(match_cons(t, sym__2))
          {
            n_46 = ATgetArgument(t, 0);
            if((n_46 != ATgetArgument(t, 1)))
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
        t = f_38;
      }
    t = term_g_38;
  }
  return(t);
}
ATerm BuildMatch_0_0 (ATerm t)
{
  ATerm q_49 (ATerm j_48, ATerm k_48, ATerm l_48, ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, j_48, k_48);
    {
      ATerm h_38 = t;
      int j_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = MisMatch_0_0(t);
          ;
          LocalPopChoice(j_38);
        }
      else
        {
          t = h_38;
          {
            ATerm l_38 = t;
            int m_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = BuildMatchFusion_0_0(t);
                ;
                LocalPopChoice(m_38);
              }
            else
              {
                t = l_38;
                {
                  ATerm n_38 = t;
                  int o_38 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm w_48 = NULL;
                      if(match_cons(t, sym__2))
                        {
                          ATerm q_38 = ATgetArgument(t, 0);
                          ATerm s_38 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = j_48;
                      if(match_cons(t, sym_Build_1))
                        {
                          ATerm t_38 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = k_48;
                      if(match_cons(t, sym_Build_1))
                        {
                          w_48 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      ;
                      LocalPopChoice(o_38);
                    }
                  else
                    {
                      t = n_38;
                      {
                        ATerm u_38 = t;
                        int v_38 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = BuildPrim_0_0(t);
                            ;
                            LocalPopChoice(v_38);
                          }
                        else
                          {
                            t = u_38;
                            {
                              ATerm d_49 = NULL,g_49 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  ATerm w_38 = ATgetArgument(t, 0);
                                  ATerm x_38 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = j_48;
                              if(match_cons(t, sym_Match_1))
                                {
                                  d_49 = ATgetArgument(t, 0);
                                  t = k_48;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      g_49 = ATgetArgument(t, 0);
                                      t = g_49;
                                      if((d_49 != t))
                                        {
                                          _fail(t);
                                        }
                                      t = (ATerm) ATmakeAppl(sym_Match_1, d_49);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Build_1))
                                        {
                                          g_49 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = g_49;
                                      if((d_49 != t))
                                        {
                                          _fail(t);
                                        }
                                      t = (ATerm) ATmakeAppl(sym_Match_1, d_49);
                                    }
                                }
                              else
                                {
                                  if(match_cons(t, sym_Build_1))
                                    {
                                      d_49 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = k_48;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      g_49 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = g_49;
                                  if((d_49 != t))
                                    {
                                      _fail(t);
                                    }
                                  t = (ATerm) ATmakeAppl(sym_Build_1, d_49);
                                }
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
  ATerm k_49 = NULL,l_49 = NULL,m_49 = NULL,n_49 = NULL,o_49 = NULL;
  m_49 = t;
  if(match_cons(t, sym_Seq_2))
    {
      n_49 = ATgetArgument(t, 0);
      o_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_49;
  if(match_cons(t, sym_Seq_2))
    {
      k_49 = ATgetArgument(t, 0);
      l_49 = ATgetArgument(t, 1);
      {
        ATerm y_38 = t;
        int g_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_10 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, n_49, k_49);
            {
              ATerm j_39 = t;
              int k_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = MisMatch_0_0(t);
                  ;
                  LocalPopChoice(k_39);
                }
              else
                {
                  t = j_39;
                  {
                    ATerm l_39 = t;
                    int m_39 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = BuildMatchFusion_0_0(t);
                        ;
                        LocalPopChoice(m_39);
                      }
                    else
                      {
                        t = l_39;
                        {
                          ATerm n_39 = t;
                          int p_39 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm i_10 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  ATerm s_39 = ATgetArgument(t, 0);
                                  ATerm t_39 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = n_49;
                              if(match_cons(t, sym_Build_1))
                                {
                                  ATerm v_39 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = k_49;
                              if(match_cons(t, sym_Build_1))
                                {
                                  i_10 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              ;
                              LocalPopChoice(p_39);
                            }
                          else
                            {
                              t = n_39;
                              {
                                ATerm x_39 = t;
                                int z_39 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildPrim_0_0(t);
                                    ;
                                    LocalPopChoice(z_39);
                                  }
                                else
                                  {
                                    t = x_39;
                                    {
                                      ATerm m_10 = NULL,p_10 = NULL;
                                      if(match_cons(t, sym__2))
                                        {
                                          ATerm a_40 = ATgetArgument(t, 0);
                                          ATerm f_40 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = n_49;
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          m_10 = ATgetArgument(t, 0);
                                          t = k_49;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              p_10 = ATgetArgument(t, 0);
                                              t = p_10;
                                              if((m_10 != t))
                                                {
                                                  _fail(t);
                                                }
                                              t = (ATerm) ATmakeAppl(sym_Match_1, m_10);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Build_1))
                                                {
                                                  p_10 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = p_10;
                                              if((m_10 != t))
                                                {
                                                  _fail(t);
                                                }
                                              t = (ATerm) ATmakeAppl(sym_Match_1, m_10);
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_Build_1))
                                            {
                                              m_10 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = k_49;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              p_10 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = p_10;
                                          if((m_10 != t))
                                            {
                                              _fail(t);
                                            }
                                          t = (ATerm) ATmakeAppl(sym_Build_1, m_10);
                                        }
                                    }
                                  }
                              }
                            }
                        }
                      }
                  }
                }
              d_10 = t;
              t = (ATerm) ATmakeAppl(sym_Seq_2, d_10, l_49);
            }
            ;
            LocalPopChoice(g_39);
          }
        else
          {
            t = y_38;
            t = q_49(n_49, o_49, m_49, t);
          }
      }
    }
  else
    {
      t = q_49(n_49, o_49, m_49, t);
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm a_119 (ATerm), ATerm t)
{
  ATerm r_49 (ATerm t)
  {
    ATerm h_40 = t;
    int j_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_119(t);
        ;
        LocalPopChoice(j_40);
      }
    else
      {
        t = h_40;
        t = SRTS_one(r_49, t);
      }
    return(t);
  }
  t = r_49(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm s_49 = NULL,t_49 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      ATerm k_40 = ATgetArgument(t, 0);
      if(((ATgetType(k_40) == AT_LIST) && !(ATisEmpty(k_40))))
        {
          ATerm q_40 = ATgetFirst((ATermList) k_40);
          if(match_cons(q_40, sym_SDefT_4))
            {
              t_49 = ATgetArgument(q_40, 0);
              {
                ATerm y_40 = ATgetArgument(q_40, 1);
                if(((ATgetType(y_40) != AT_LIST) || !(ATisEmpty(y_40))))
                  _fail(t);
              }
              {
                ATerm z_40 = ATgetArgument(q_40, 2);
                if(((ATgetType(z_40) != AT_LIST) || !(ATisEmpty(z_40))))
                  _fail(t);
              }
              s_49 = ATgetArgument(q_40, 3);
            }
          else
            _fail(t);
          {
            ATerm r_40 = (ATerm) ATgetNext((ATermList) k_40);
            if(((ATgetType(r_40) != AT_LIST) || !(ATisEmpty(r_40))))
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm l_40 = ATgetArgument(t, 1);
        if(match_cons(l_40, sym_CallT_3))
          {
            ATerm b_41 = ATgetArgument(l_40, 0);
            if(match_cons(b_41, sym_SVar_1))
              {
                if((t_49 != ATgetArgument(b_41, 0)))
                  {
                    _fail(ATgetArgument(b_41, 0));
                  }
              }
            else
              _fail(t);
            {
              ATerm f_41 = ATgetArgument(l_40, 1);
              if(((ATgetType(f_41) != AT_LIST) || !(ATisEmpty(f_41))))
                _fail(t);
            }
            {
              ATerm g_41 = ATgetArgument(l_40, 2);
              if(((ATgetType(g_41) != AT_LIST) || !(ATisEmpty(g_41))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = s_49;
  {
    ATerm h_41 = t;
    if((PushChoice() == 0))
      {
        ATerm h_10 (ATerm t)
        {
          if(match_cons(t, sym_CallT_3))
            {
              ATerm j_41 = ATgetArgument(t, 0);
              if(match_cons(j_41, sym_SVar_1))
                {
                  if((t_49 != ATgetArgument(j_41, 0)))
                    {
                      _fail(ATgetArgument(j_41, 0));
                    }
                }
              else
                _fail(t);
              {
                ATerm k_41 = ATgetArgument(t, 1);
                if(((ATgetType(k_41) != AT_LIST) || !(ATisEmpty(k_41))))
                  _fail(t);
              }
              {
                ATerm l_41 = ATgetArgument(t, 2);
                if(((ATgetType(l_41) != AT_LIST) || !(ATisEmpty(l_41))))
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
        t = h_41;
      }
    t = s_49;
  }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm b_50 = NULL,f_50 = NULL,g_50 = NULL,h_50 = NULL,i_50 = NULL,j_50 = NULL,l_50 = NULL,m_50 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      l_50 = ATgetArgument(t, 0);
      t = l_50;
      if(match_cons(t, sym_Seq_2))
        {
          j_50 = ATgetArgument(t, 0);
          f_50 = ATgetArgument(t, 1);
          t = j_50;
          if(match_cons(t, sym_Where_1))
            {
              b_50 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_50;
          if(match_cons(t, sym_Seq_2))
            {
              g_50 = ATgetArgument(t, 0);
              i_50 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = g_50;
          if(match_cons(t, sym_Build_1))
            {
              h_50 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, b_50, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, h_50), i_50)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              j_50 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          l_50 = ATgetArgument(t, 0);
          t = l_50;
          if(match_cons(t, sym_Test_1))
            {
              j_50 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              l_50 = ATgetArgument(t, 0);
              t = l_50;
              if(match_cons(t, sym_Not_1))
                {
                  j_50 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, j_50);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  l_50 = ATgetArgument(t, 0);
                  m_50 = ATgetArgument(t, 1);
                  t = m_50;
                  if((l_50 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      l_50 = ATgetArgument(t, 0);
                      m_50 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = m_50;
                  if((l_50 != t))
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
  ATerm c_51 = NULL,d_51 = NULL,e_51 = NULL,f_51 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      c_51 = ATgetArgument(t, 0);
      f_51 = ATgetArgument(t, 1);
      t = c_51;
      if(match_cons(t, sym_LChoice_2))
        {
          d_51 = ATgetArgument(t, 0);
          e_51 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, d_51, (ATerm) ATmakeAppl(sym_LChoice_2, e_51, f_51));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          c_51 = ATgetArgument(t, 0);
          f_51 = ATgetArgument(t, 1);
          t = c_51;
          if(match_cons(t, sym_Seq_2))
            {
              d_51 = ATgetArgument(t, 0);
              e_51 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, d_51, (ATerm) ATmakeAppl(sym_Seq_2, e_51, f_51));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              c_51 = ATgetArgument(t, 0);
              f_51 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = c_51;
          if(match_cons(t, sym_Choice_2))
            {
              d_51 = ATgetArgument(t, 0);
              e_51 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, d_51, (ATerm) ATmakeAppl(sym_Choice_2, e_51, f_51));
        }
    }
  return(t);
}
ATerm map1_1_0 (ATerm l_0 (ATerm), ATerm t)
{
  ATerm m_41 = t;
  int n_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(l_0, _id, t);
      {
        ATerm j_10 (ATerm t)
        {
          ATerm o_41 = t;
          int p_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(l_0, t);
              ;
              LocalPopChoice(p_41);
            }
          else
            {
              t = o_41;
            }
          return(t);
        }
        t = Cons_2_0(_id, j_10, t);
      }
      ;
      LocalPopChoice(n_41);
    }
  else
    {
      t = m_41;
      {
        ATerm k_10 (ATerm t)
        {
          t = map1_1_0(l_0, t);
          return(t);
        }
        t = Cons_2_0(_id, k_10, t);
      }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm w_51 = NULL,x_51 = NULL,y_51 = NULL,z_51 = NULL,f_52 = NULL,j_52 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      f_52 = ATgetArgument(t, 0);
      j_52 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, f_52, j_52);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          f_52 = ATgetArgument(t, 0);
          t = f_52;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              w_51 = ATgetFirst((ATermList) t);
              x_51 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, w_51, (ATerm) ATmakeAppl(sym_LChoices_1, x_51));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_g_38;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              f_52 = ATgetArgument(t, 0);
              t = f_52;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  w_51 = ATgetFirst((ATermList) t);
                  x_51 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, w_51, (ATerm) ATmakeAppl(sym_Choices_1, x_51));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_g_38;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  f_52 = ATgetArgument(t, 0);
                  t = f_52;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      w_51 = ATgetFirst((ATermList) t);
                      x_51 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_51, (ATerm) ATmakeAppl(sym_Seqs_1, x_51));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_q_41;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      f_52 = ATgetArgument(t, 0);
                      j_52 = ATgetArgument(t, 1);
                      z_51 = ATgetArgument(t, 2);
                      y_51 = ATgetArgument(t, 3);
                      {
                        ATerm z_52 = NULL,a_53 = NULL;
                        t = j_52;
                        {
                          ATerm l_10 (ATerm t)
                          {
                            ATerm b_53 = NULL;
                            if(match_cons(t, sym_DefaultVarDec_1))
                              {
                                b_53 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym_VarDec_2, b_53, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_u_41), term_u_41));
                            return(t);
                          }
                          t = map1_1_0(l_10, t);
                          z_52 = t;
                          t = z_51;
                          {
                            ATerm n_10 (ATerm t)
                            {
                              ATerm w_41 = t;
                              int x_41 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm d_53 = NULL;
                                  if(match_cons(t, sym_DefaultVarDec_1))
                                    {
                                      d_53 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_VarDec_2, d_53, term_u_41);
                                  ;
                                  LocalPopChoice(x_41);
                                }
                              else
                                {
                                  t = w_41;
                                }
                              return(t);
                            }
                            t = map1_1_0(n_10, t);
                            a_53 = t;
                            t = (ATerm) ATmakeAppl(sym_RDefT_4, f_52, z_52, a_53, y_51);
                          }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          f_52 = ATgetArgument(t, 0);
                          j_52 = ATgetArgument(t, 1);
                          z_51 = ATgetArgument(t, 2);
                          y_51 = ATgetArgument(t, 3);
                          {
                            ATerm y_41 = t;
                            int z_41 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm j_53 = NULL,k_53 = NULL;
                                t = z_51;
                                {
                                  ATerm o_10 (ATerm t)
                                  {
                                    ATerm l_53 = NULL;
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        l_53 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, l_53, term_u_41);
                                    return(t);
                                  }
                                  t = map1_1_0(o_10, t);
                                  j_53 = t;
                                  t = j_52;
                                  {
                                    ATerm q_10 (ATerm t)
                                    {
                                      ATerm a_42 = t;
                                      int b_42 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm r_53 = NULL;
                                          if(match_cons(t, sym_DefaultVarDec_1))
                                            {
                                              r_53 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_VarDec_2, r_53, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_u_41), term_u_41));
                                          ;
                                          LocalPopChoice(b_42);
                                        }
                                      else
                                        {
                                          t = a_42;
                                        }
                                      return(t);
                                    }
                                    t = map_1_0(q_10, t);
                                    k_53 = t;
                                    t = (ATerm) ATmakeAppl(sym_SDefT_4, f_52, k_53, j_53, y_51);
                                  }
                                }
                                ;
                                LocalPopChoice(z_41);
                              }
                            else
                              {
                                t = y_41;
                                {
                                  ATerm x_53 = NULL,y_53 = NULL;
                                  t = j_52;
                                  {
                                    ATerm r_10 (ATerm t)
                                    {
                                      ATerm z_53 = NULL;
                                      if(match_cons(t, sym_DefaultVarDec_1))
                                        {
                                          z_53 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_VarDec_2, z_53, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_u_41), term_u_41));
                                      return(t);
                                    }
                                    t = map1_1_0(r_10, t);
                                    x_53 = t;
                                    t = z_51;
                                    {
                                      ATerm s_10 (ATerm t)
                                      {
                                        ATerm c_42 = t;
                                        int d_42 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm b_54 = NULL;
                                            if(match_cons(t, sym_DefaultVarDec_1))
                                              {
                                                b_54 = ATgetArgument(t, 0);
                                              }
                                            else
                                              _fail(t);
                                            t = (ATerm) ATmakeAppl(sym_VarDec_2, b_54, term_u_41);
                                            ;
                                            LocalPopChoice(d_42);
                                          }
                                        else
                                          {
                                            t = c_42;
                                          }
                                        return(t);
                                      }
                                      t = map_1_0(s_10, t);
                                      y_53 = t;
                                      t = (ATerm) ATmakeAppl(sym_SDefT_4, f_52, x_53, y_53, y_51);
                                    }
                                  }
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              f_52 = ATgetArgument(t, 0);
                              j_52 = ATgetArgument(t, 1);
                              z_51 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, j_52, (ATerm) ATmakeAppl(sym_Op_2, term_f_42, (ATerm) ATinsert(ATinsert(ATempty, z_51), f_52)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  f_52 = ATgetArgument(t, 0);
                                  j_52 = ATgetArgument(t, 1);
                                  z_51 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, z_51)), f_52), (ATerm) ATmakeAppl(sym_Build_1, j_52)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      f_52 = ATgetArgument(t, 0);
                                      j_52 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_52, (ATerm) ATmakeAppl(sym_Match_1, j_52));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          f_52 = ATgetArgument(t, 0);
                                          j_52 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, f_52), j_52);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              f_52 = ATgetArgument(t, 0);
                                              j_52 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, j_52), f_52);
                                        }
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
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm o_55 = NULL,p_55 = NULL,q_55 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      o_55 = ATgetArgument(t, 0);
      t = o_55;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          o_55 = ATgetArgument(t, 0);
          t = o_55;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_q_41;
        }
      else
        {
          ATerm g_42 = t;
          int h_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_Seq_2))
                {
                  o_55 = ATgetArgument(t, 0);
                  {
                    ATerm i_42 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(h_42);
              t = o_55;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
            }
          else
            {
              t = g_42;
              {
                ATerm j_42 = t;
                int k_42 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Scope_2))
                      {
                        ATerm m_42 = ATgetArgument(t, 0);
                        p_55 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(k_42);
                    t = p_55;
                    if(!(match_cons(t, sym_Fail_0)))
                      _fail(t);
                  }
                else
                  {
                    t = j_42;
                    {
                      ATerm n_42 = t;
                      int o_42 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_Rec_2))
                            {
                              ATerm p_42 = ATgetArgument(t, 0);
                              p_55 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(o_42);
                          t = p_55;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                        }
                      else
                        {
                          t = n_42;
                          if(match_cons(t, sym_Some_1))
                            {
                              o_55 = ATgetArgument(t, 0);
                              t = o_55;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                            }
                          else
                            {
                              if(match_cons(t, sym_One_1))
                                {
                                  o_55 = ATgetArgument(t, 0);
                                  t = o_55;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                }
                              else
                                {
                                  ATerm r_42 = t;
                                  int s_42 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_Path_2))
                                        {
                                          ATerm t_42 = ATgetArgument(t, 0);
                                          p_55 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(s_42);
                                      t = p_55;
                                      if(!(match_cons(t, sym_Fail_0)))
                                        _fail(t);
                                    }
                                  else
                                    {
                                      t = r_42;
                                      {
                                        ATerm u_42 = t;
                                        int v_42 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            if(match_cons(t, sym_Cong_2))
                                              {
                                                ATerm w_42 = ATgetArgument(t, 0);
                                                p_55 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            LocalPopChoice(v_42);
                                            t = p_55;
                                            {
                                              ATerm u_10 (ATerm t)
                                              {
                                                if(!(match_cons(t, sym_Fail_0)))
                                                  _fail(t);
                                                return(t);
                                              }
                                              t = fetch_1_0(u_10, t);
                                              t = term_g_38;
                                            }
                                          }
                                        else
                                          {
                                            t = u_42;
                                            if(match_cons(t, sym_Choice_2))
                                              {
                                                o_55 = ATgetArgument(t, 0);
                                                p_55 = ATgetArgument(t, 1);
                                                t = p_55;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    t = o_55;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm x_42 = t;
                                                        int y_42 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = p_55;
                                                            ;
                                                            LocalPopChoice(y_42);
                                                          }
                                                        else
                                                          {
                                                            t = x_42;
                                                            t = o_55;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = o_55;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = o_55;
                                                    if(!(match_cons(t, sym_Fail_0)))
                                                      _fail(t);
                                                    t = p_55;
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_LChoice_2))
                                                  {
                                                    o_55 = ATgetArgument(t, 0);
                                                    p_55 = ATgetArgument(t, 1);
                                                    t = p_55;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        t = o_55;
                                                        if(match_cons(t, sym_Fail_0))
                                                          {
                                                            ATerm z_42 = t;
                                                            int a_43 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = p_55;
                                                                ;
                                                                LocalPopChoice(a_43);
                                                              }
                                                            else
                                                              {
                                                                t = z_42;
                                                                t = o_55;
                                                              }
                                                          }
                                                        else
                                                          {
                                                            t = o_55;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = o_55;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = p_55;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Where_1))
                                                      {
                                                        o_55 = ATgetArgument(t, 0);
                                                        t = o_55;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_GuardedLChoice_3))
                                                          {
                                                            o_55 = ATgetArgument(t, 0);
                                                            p_55 = ATgetArgument(t, 1);
                                                            q_55 = ATgetArgument(t, 2);
                                                          }
                                                        else
                                                          _fail(t);
                                                        t = q_55;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, o_55, p_55);
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                    }
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
  ATerm o_56 = NULL,q_56 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      q_56 = ATgetArgument(t, 0);
      t = q_56;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          q_56 = ATgetArgument(t, 0);
          t = q_56;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_g_38;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              q_56 = ATgetArgument(t, 0);
              o_56 = ATgetArgument(t, 1);
              t = o_56;
              if(match_cons(t, sym_Id_0))
                {
                  t = q_56;
                  if(match_cons(t, sym_Id_0))
                    {
                      ATerm b_43 = t;
                      int g_43 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = o_56;
                          ;
                          LocalPopChoice(g_43);
                        }
                      else
                        {
                          t = b_43;
                          t = q_56;
                        }
                    }
                  else
                    {
                      t = q_56;
                    }
                }
              else
                {
                  t = q_56;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = o_56;
                }
            }
          else
            {
              ATerm h_43 = t;
              int p_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      q_56 = ATgetArgument(t, 0);
                      {
                        ATerm r_43 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(p_43);
                  t = q_56;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                }
              else
                {
                  t = h_43;
                  {
                    ATerm s_43 = t;
                    int t_43 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            ATerm u_43 = ATgetArgument(t, 0);
                            o_56 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(t_43);
                        t = o_56;
                        if(!(match_cons(t, sym_Id_0)))
                          _fail(t);
                      }
                    else
                      {
                        t = s_43;
                        {
                          ATerm d_44 = t;
                          int e_44 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Rec_2))
                                {
                                  ATerm s_44 = ATgetArgument(t, 0);
                                  o_56 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(e_44);
                              t = o_56;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                            }
                          else
                            {
                              t = d_44;
                              if(match_cons(t, sym_All_1))
                                {
                                  q_56 = ATgetArgument(t, 0);
                                  t = q_56;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                }
                              else
                                {
                                  if(match_cons(t, sym_Where_1))
                                    {
                                      q_56 = ATgetArgument(t, 0);
                                      t = q_56;
                                      if(!(match_cons(t, sym_Id_0)))
                                        _fail(t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          q_56 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = q_56;
                                      if(!(match_cons(t, sym_Wld_0)))
                                        _fail(t);
                                      t = term_q_41;
                                    }
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
  ATerm t_44 = t;
  int u_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
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
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(w_44);
          }
        else
          {
            t = v_44;
            {
              ATerm y_44 = t;
              int a_45 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(a_45);
                }
              else
                {
                  t = y_44;
                  {
                    ATerm b_45 = t;
                    int c_45 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(c_45);
                      }
                    else
                      {
                        t = b_45;
                        {
                          ATerm d_45 = t;
                          int f_45 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(f_45);
                            }
                          else
                            {
                              t = d_45;
                              {
                                ATerm h_45 = t;
                                int j_45 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm r_57 = NULL,s_57 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        r_57 = ATgetArgument(t, 0);
                                        s_57 = ATgetArgument(t, 1);
                                        t = r_57;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = s_57;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            r_57 = ATgetArgument(t, 0);
                                            s_57 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = r_57;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = s_57;
                                      }
                                    ;
                                    LocalPopChoice(j_45);
                                  }
                                else
                                  {
                                    t = h_45;
                                    {
                                      ATerm o_45 = t;
                                      int p_45 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
                                          LocalPopChoice(p_45);
                                        }
                                      else
                                        {
                                          t = o_45;
                                          {
                                            ATerm q_45 = t;
                                            int r_45 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = BuildMatch_0_0(t);
                                                ;
                                                LocalPopChoice(r_45);
                                              }
                                            else
                                              {
                                                t = q_45;
                                                {
                                                  ATerm w_57 = NULL,x_57 = NULL;
                                                  if(match_cons(t, sym_As_2))
                                                    {
                                                      w_57 = ATgetArgument(t, 0);
                                                      x_57 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = w_57;
                                                  if(!(match_cons(t, sym_Wld_0)))
                                                    _fail(t);
                                                  t = x_57;
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm repeat_1_0 (ATerm s_134 (ATerm), ATerm t)
{
  ATerm z_57 (ATerm t)
  {
    ATerm s_45 = t;
    int t_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_134(t);
        t = z_57(t);
        ;
        LocalPopChoice(t_45);
      }
    else
      {
        t = s_45;
      }
    return(t);
  }
  t = z_57(t);
  return(t);
}
ATerm downup_1_0 (ATerm y_117 (ATerm), ATerm t)
{
  t = y_117(t);
  {
    ATerm v_10 (ATerm t)
    {
      t = downup_1_0(y_117, t);
      return(t);
    }
    t = SRTS_all(v_10, t);
    t = y_117(t);
  }
  return(t);
}
ATerm inline_sdefs_0_0 (ATerm t)
{
  ATerm w_10 (ATerm t)
  {
    ATerm x_10 (ATerm t)
    {
      t = repeat_1_0(Simplify_0_0, t);
      return(t);
    }
    t = downup_1_0(x_10, t);
    {
      ATerm u_45 = t;
      int v_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = inlineable_0_0(t);
          t = AddSDef_0_0(t);
          ;
          LocalPopChoice(v_45);
        }
      else
        {
          t = u_45;
        }
    }
    return(t);
  }
  t = map_1_0(w_10, t);
  t = map_1_0(inline_sdef_0_0, t);
  return(t);
}
ATerm Strategies_1_0 (ATerm b_102 (ATerm), ATerm t)
{
  ATerm a_58 = NULL,b_58 = NULL,c_58 = NULL,d_58 = NULL;
  d_58 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      b_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_58);
  a_58 = t;
  t = b_58;
  t = b_102(t);
  c_58 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, c_58), a_58);
  return(t);
}
ATerm Cons_2_0 (ATerm v_101 (ATerm), ATerm w_101 (ATerm), ATerm t)
{
  ATerm g_58 = NULL,h_58 = NULL,i_58 = NULL,j_58 = NULL,k_58 = NULL,l_58 = NULL;
  l_58 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_58 = ATgetFirst((ATermList) t);
      i_58 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_58);
  g_58 = t;
  t = h_58;
  t = v_101(t);
  j_58 = t;
  t = i_58;
  t = w_101(t);
  k_58 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(k_58), j_58), g_58);
  return(t);
}
ATerm Specification_1_0 (ATerm g_102 (ATerm), ATerm t)
{
  ATerm o_58 = NULL,p_58 = NULL,q_58 = NULL,r_58 = NULL;
  r_58 = t;
  if(match_cons(t, sym_Specification_1))
    {
      p_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_58);
  o_58 = t;
  t = p_58;
  t = g_102(t);
  q_58 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, q_58), o_58);
  return(t);
}
ATerm _2_0 (ATerm g_97 (ATerm), ATerm h_97 (ATerm), ATerm t)
{
  ATerm u_58 = NULL,v_58 = NULL,w_58 = NULL,x_58 = NULL,y_58 = NULL,z_58 = NULL;
  z_58 = t;
  if(match_cons(t, sym__2))
    {
      v_58 = ATgetArgument(t, 0);
      w_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_58);
  u_58 = t;
  t = v_58;
  t = g_97(t);
  x_58 = t;
  t = w_58;
  t = h_97(t);
  y_58 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, x_58, y_58), u_58);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm j_145 (ATerm), ATerm t)
{
  ATerm c_59 = NULL,d_59 = NULL,e_59 = NULL;
  if(match_cons(t, sym__2))
    {
      c_59 = ATgetArgument(t, 0);
      d_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_59, term_w_45);
  t = open_stream_0_0(t);
  e_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_59, d_59);
  t = j_145(t);
  t = fclose_0_0(t);
  t = d_59;
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm f_59 = NULL,g_59 = NULL;
  f_59 = t;
  {
    ATerm y_10 (ATerm t)
    {
      ATerm c_46 = t;
      int o_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_10 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((g_59 != NULL) && (g_59 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  g_59 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(z_10, t);
          ;
          LocalPopChoice(o_46);
        }
      else
        {
          t = c_46;
          t = term_p_46;
          if(((g_59 != NULL) && (g_59 != t)))
            _fail(t);
          else
            g_59 = t;
        }
      return(t);
    }
    t = _2_0(y_10, _id, t);
    t = f_59;
    {
      ATerm a_11 (ATerm t)
      {
        ATerm t_10 = NULL;
        t_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_59), t_10);
        return(t);
      }
      t = _2_0(_id, a_11, t);
      {
        ATerm q_46 = t;
        int r_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_11 (ATerm t)
            {
              ATerm d_11 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(d_11, t);
              return(t);
            }
            ATerm c_11 (ATerm t)
            {
              ATerm e_11 (ATerm t)
              {
                ATerm h_59 = NULL,i_59 = NULL,j_59 = NULL;
                if(match_cons(t, sym__2))
                  {
                    ATerm s_46 = ATgetArgument(t, 0);
                    if(match_cons(s_46, sym_Stream_1))
                      {
                        h_59 = ATgetArgument(s_46, 0);
                      }
                    else
                      _fail(t);
                    i_59 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_write_term_to_stream_baf(h_59, i_59);
                j_59 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, j_59);
                return(t);
              }
              t = WriteToFile_1_0(e_11, t);
              return(t);
            }
            t = _2_0(b_11, c_11, t);
            ;
            LocalPopChoice(r_46);
          }
        else
          {
            t = q_46;
            {
              ATerm i_11 (ATerm t)
              {
                ATerm j_11 (ATerm t)
                {
                  ATerm k_59 = NULL,l_59 = NULL,m_59 = NULL,n_59 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm t_46 = ATgetArgument(t, 0);
                      if(match_cons(t_46, sym_Stream_1))
                        {
                          k_59 = ATgetArgument(t_46, 0);
                        }
                      else
                        _fail(t);
                      l_59 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSL_write_term_to_stream_text(k_59, l_59);
                  m_59 = t;
                  t = SSL_fputc((ATerm)ATmakeInt(10), m_59);
                  n_59 = t;
                  t = (ATerm) ATmakeAppl(sym_Stream_1, n_59);
                  return(t);
                }
                t = WriteToFile_1_0(j_11, t);
                return(t);
              }
              t = _2_0(_id, i_11, t);
            }
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
ATerm apply_strategy_1_0 (ATerm y_139 (ATerm), ATerm t)
{
  ATerm u_59 = NULL,a_60 = NULL,b_60 = NULL,c_60 = NULL,d_60 = NULL;
  u_59 = t;
  t = dtime_0_0(t);
  t = u_59;
  t = y_139(t);
  a_60 = t;
  t = dtime_0_0(t);
  b_60 = t;
  t = a_60;
  if(match_cons(t, sym__2))
    {
      c_60 = ATgetArgument(t, 0);
      d_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_60), (ATerm) ATmakeAppl(sym_Runtime_1, b_60)), d_60);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm s_60 (ATerm m_60, ATerm t)
  {
    t = SSL_fclose(m_60);
    return(t);
  }
  ATerm p_60 = NULL,q_60 = NULL;
  q_60 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_60 = ATgetArgument(t, 0);
      {
        ATerm u_46 = t;
        int v_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(p_60);
            ;
            LocalPopChoice(v_46);
          }
        else
          {
            t = u_46;
            t = s_60(q_60, t);
          }
      }
    }
  else
    {
      t = s_60(q_60, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm t_60 = NULL;
  t = SSL_stdin_stream();
  t_60 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_60);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm u_60 = NULL;
  t = SSL_stdout_stream();
  u_60 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_60);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm v_60 = NULL;
  t = SSL_stderr_stream();
  v_60 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_60);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_46 = ATgetArgument(t, 0);
      ATerm x_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_46 = t;
    int z_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_11 = NULL,g_11 = NULL;
        f_11 = t;
        t = SSL_explode_term(f_11);
        if(match_cons(t, sym__2))
          {
            ATerm a_47 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) a_47) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm b_47 = ATgetArgument(t, 1);
              if(((ATgetType(b_47) == AT_LIST) && !(ATisEmpty(b_47))))
                {
                  g_11 = ATgetFirst((ATermList) b_47);
                  {
                    ATerm c_47 = (ATerm) ATgetNext((ATermList) b_47);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = g_11;
        if(match_cons(t, sym_stderr_0))
          {
            t = g_11;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = g_11;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = g_11;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(z_46);
      }
    else
      {
        t = y_46;
        {
          ATerm d_47 = t;
          int e_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_61 = NULL,b_61 = NULL,d_61 = NULL;
              ATerm k_11 (ATerm t)
              {
                ATerm e_61 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    e_61 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = e_61;
                return(t);
              }
              t = _2_0(k_11, _id, t);
              if(match_cons(t, sym__2))
                {
                  a_61 = ATgetArgument(t, 0);
                  b_61 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(a_61, b_61);
              d_61 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, d_61);
              ;
              LocalPopChoice(e_47);
            }
          else
            {
              t = d_47;
              {
                ATerm f_61 = NULL,g_61 = NULL,h_61 = NULL;
                ATerm l_11 (ATerm t)
                {
                  ATerm i_61 = NULL;
                  i_61 = t;
                  t = SSL_is_string(i_61);
                  return(t);
                }
                t = _2_0(l_11, _id, t);
                if(match_cons(t, sym__2))
                  {
                    f_61 = ATgetArgument(t, 0);
                    g_61 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(f_61, g_61);
                h_61 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, h_61);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm j_61 = NULL,k_61 = NULL,l_61 = NULL;
  ATerm f_47 = t;
  int g_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_61 = NULL;
      m_61 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_61, term_h_47);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(g_47);
    }
  else
    {
      t = f_47;
      {
        ATerm h_11 = NULL;
        h_11 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, h_11), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = h_11;
        _fail(t);
      }
    }
  j_61 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(l_61);
  k_61 = t;
  t = j_61;
  t = fclose_0_0(t);
  t = k_61;
  return(t);
}
ATerm fetch_1_0 (ATerm i_124 (ATerm), ATerm t)
{
  ATerm r_61 (ATerm t)
  {
    ATerm i_47 = t;
    int j_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(i_124, _id, t);
        ;
        LocalPopChoice(j_47);
      }
    else
      {
        t = i_47;
        t = Cons_2_0(_id, r_61, t);
      }
    return(t);
  }
  t = r_61(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm k_47 = t;
  int l_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(l_47);
    }
  else
    {
      t = k_47;
      {
        ATerm w_61 = NULL,x_61 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_61 = ATgetFirst((ATermList) t);
            x_61 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = w_61;
        {
          ATerm o_11 (ATerm t)
          {
            t = x_61;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(o_11, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm o_124 (ATerm), ATerm t)
{
  ATerm d_62 (ATerm t)
  {
    ATerm m_47 = t;
    int n_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, d_62, t);
        ;
        LocalPopChoice(n_47);
      }
    else
      {
        t = m_47;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = o_124(t);
      }
    return(t);
  }
  t = d_62(t);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm f_62 = NULL;
  ATerm p_11 (ATerm t)
  {
    ATerm g_62 = NULL;
    g_62 = t;
    t = SSL_explode_string(g_62);
    return(t);
  }
  ATerm q_11 (ATerm t)
  {
    ATerm h_62 = NULL;
    h_62 = t;
    t = SSL_explode_string(h_62);
    return(t);
  }
  t = _2_0(p_11, q_11, t);
  {
    ATerm o_47 = t;
    int p_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_62 = NULL,k_62 = NULL;
        if(match_cons(t, sym__2))
          {
            j_62 = ATgetArgument(t, 0);
            k_62 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_62;
        {
          ATerm r_11 (ATerm t)
          {
            t = k_62;
            return(t);
          }
          t = at_end_1_0(r_11, t);
        }
        ;
        LocalPopChoice(p_47);
      }
    else
      {
        t = o_47;
        {
          ATerm m_11 = NULL,n_11 = NULL;
          m_11 = t;
          t = SSL_explode_term(m_11);
          if(match_cons(t, sym__2))
            {
              ATerm q_47 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) q_47) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              n_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = n_11;
          t = concat_0_0(t);
        }
      }
    f_62 = t;
    t = SSL_implode_string(f_62);
  }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm r_47 = t;
  int s_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_62 = NULL;
      w_62 = t;
      t = SSL_is_string(w_62);
      ;
      LocalPopChoice(s_47);
    }
  else
    {
      t = r_47;
      {
        ATerm t_47 = t;
        int u_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_11 (ATerm t)
            {
              ATerm v_47 = t;
              int w_47 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0_0(t);
                  ;
                  LocalPopChoice(w_47);
                }
              else
                {
                  t = v_47;
                }
              return(t);
            }
            t = map_1_0(s_11, t);
            ;
            LocalPopChoice(u_47);
          }
        else
          {
            t = t_47;
            {
              ATerm a_63 = NULL,b_63 = NULL,c_63 = NULL;
              a_63 = t;
              if(match_cons(t, sym_Path_1))
                {
                  b_63 = ATgetArgument(t, 0);
                  t = b_63;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      b_63 = ATgetArgument(t, 0);
                      t = b_63;
                      {
                        ATerm x_47 = t;
                        int y_47 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), b_63);
                            {
                              ATerm z_47 = t;
                              int a_48 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm g_12 = NULL;
                                  t = eval_config_0_0(t);
                                  g_12 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), b_63, g_12);
                                  t = g_12;
                                  ;
                                  LocalPopChoice(a_48);
                                }
                              else
                                {
                                  t = z_47;
                                }
                            }
                            ;
                            LocalPopChoice(y_47);
                          }
                        else
                          {
                            t = x_47;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, b_63), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = b_63;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm g_63 = NULL,h_63 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          b_63 = ATgetArgument(t, 0);
                          c_63 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = b_63;
                      t = eval_config_0_0(t);
                      g_63 = t;
                      t = c_63;
                      t = eval_config_0_0(t);
                      h_63 = t;
                      t = (ATerm) ATmakeAppl(sym__2, g_63, h_63);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm f_138 (ATerm), ATerm t)
{
  ATerm b_48 = t;
  int c_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_63 = NULL,p_63 = NULL;
      n_63 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm d_48 = t;
        int e_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_12 = NULL;
            t = eval_config_0_0(t);
            q_12 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), q_12);
            t = q_12;
            ;
            LocalPopChoice(e_48);
          }
        else
          {
            t = d_48;
          }
        p_63 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_63, term_f_48);
        t = geq_0_0(t);
        t = n_63;
        t = f_138(t);
      }
      ;
      LocalPopChoice(c_48);
    }
  else
    {
      t = b_48;
    }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm t_11 (ATerm t)
  {
    ATerm r_63 = NULL;
    r_63 = t;
    if(match_string(t, "-k"))
      {
        t = r_63;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = r_63;
      }
    return(t);
  }
  ATerm v_11 (ATerm t)
  {
    ATerm s_63 = NULL,t_63 = NULL;
    s_63 = t;
    t = SSL_string_to_int(s_63);
    t_63 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), t_63);
    t = s_63;
    return(t);
  }
  ATerm w_11 (ATerm t)
  {
    t = term_g_48;
    return(t);
  }
  t = ArgOption_3_0(t_11, v_11, w_11, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm h_48 = t;
  int i_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_11 (ATerm t)
      {
        ATerm v_63 = NULL;
        v_63 = t;
        if(match_string(t, "-S"))
          {
            t = v_63;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = v_63;
          }
        return(t);
      }
      ATerm y_11 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_m_48;
        return(t);
      }
      ATerm z_11 (ATerm t)
      {
        t = term_n_48;
        return(t);
      }
      t = Option_3_0(x_11, y_11, z_11, t);
      ;
      LocalPopChoice(i_48);
    }
  else
    {
      t = h_48;
      {
        ATerm o_48 = t;
        int p_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_12 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm b_12 (ATerm t)
            {
              ATerm w_63 = NULL,x_63 = NULL;
              w_63 = t;
              t = SSL_string_to_int(w_63);
              x_63 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), x_63);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, w_63);
              return(t);
            }
            ATerm c_12 (ATerm t)
            {
              t = term_q_48;
              return(t);
            }
            t = ArgOption_3_0(a_12, b_12, c_12, t);
            ;
            LocalPopChoice(p_48);
          }
        else
          {
            t = o_48;
            {
              ATerm d_12 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm e_12 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_r_48;
                return(t);
              }
              ATerm f_12 (ATerm t)
              {
                t = term_s_48;
                return(t);
              }
              t = Option_3_0(d_12, e_12, f_12, t);
            }
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm t)
{
  ATerm a_64 = NULL,b_64 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_64 = NULL;
      t = term_p_14;
      t = c_0(t);
      c_64 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_t_48, term_u_48, c_64);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm f_64 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_64 = ATgetFirst((ATermList) t);
          b_64 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_64;
      t = a_0(t);
      t = term_p_14;
      t = b_0(t);
      f_64 = t;
      t = (ATerm) ATinsert(CheckATermList(b_64), f_64);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm h_12 (ATerm t)
  {
    ATerm h_64 = NULL;
    h_64 = t;
    if(match_string(t, "-o"))
      {
        t = h_64;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = h_64;
      }
    return(t);
  }
  ATerm i_12 (ATerm t)
  {
    ATerm i_64 = NULL;
    i_64 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), i_64);
    t = (ATerm) ATmakeAppl(sym_Output_1, i_64);
    return(t);
  }
  ATerm k_12 (ATerm t)
  {
    t = term_v_48;
    return(t);
  }
  t = ArgOption_3_0(h_12, i_12, k_12, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm l_64 = NULL,m_64 = NULL,n_64 = NULL,o_64 = NULL;
  if(match_cons(t, sym__3))
    {
      l_64 = ATgetArgument(t, 0);
      m_64 = ATgetArgument(t, 1);
      n_64 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_64, m_64);
  {
    ATerm x_48 = t;
    int y_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_48 = ATgetArgument(t, 0);
            ATerm a_49 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(l_64, m_64);
        ;
        LocalPopChoice(y_48);
      }
    else
      {
        t = x_48;
        t = (ATerm) ATempty;
      }
    o_64 = t;
    t = SSL_table_put(l_64, m_64, (ATerm) ATinsert(CheckATermList(o_64), n_64));
    t = (ATerm) ATmakeAppl(sym__3, l_64, m_64, n_64);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm y_64 = NULL,z_64 = NULL,a_65 = NULL,b_65 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_65 = NULL;
      t = term_p_14;
      t = j_0(t);
      c_65 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_t_48, term_u_48, c_65);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm g_65 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_64 = ATgetFirst((ATermList) t);
          z_64 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_64;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_65 = ATgetFirst((ATermList) t);
          b_65 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_64;
      t = h_0(t);
      t = a_65;
      t = i_0(t);
      g_65 = t;
      t = (ATerm) ATinsert(CheckATermList(b_65), g_65);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm l_12 (ATerm t)
  {
    ATerm i_65 = NULL;
    i_65 = t;
    if(match_string(t, "-i"))
      {
        t = i_65;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = i_65;
      }
    return(t);
  }
  ATerm n_12 (ATerm t)
  {
    ATerm j_65 = NULL;
    j_65 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), j_65);
    t = (ATerm) ATmakeAppl(sym_Input_1, j_65);
    return(t);
  }
  ATerm p_12 (ATerm t)
  {
    t = term_b_49;
    return(t);
  }
  t = ArgOption_3_0(l_12, n_12, p_12, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm k_65 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_14;
  t = whoami_0_0(t);
  k_65 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), k_65));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm c_49 = t;
    int e_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_12 = NULL;
        t = eval_config_0_0(t);
        u_12 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), u_12);
        t = u_12;
        ;
        LocalPopChoice(e_49);
      }
    else
      {
        t = c_49;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm x_128 (ATerm), ATerm y_128 (ATerm), ATerm t)
{
  ATerm f_49 = t;
  int h_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = x_128(t);
      ;
      LocalPopChoice(h_49);
    }
  else
    {
      t = f_49;
      {
        ATerm n_65 = NULL,o_65 = NULL,r_65 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_65 = ATgetFirst((ATermList) t);
            o_65 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = o_65;
        t = foldr_2_0(x_128, y_128, t);
        r_65 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_65, r_65);
        t = y_128(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm u_65 = NULL,w_12 = NULL,x_12 = NULL;
  t = times_0_0(t);
  w_12 = t;
  t = SSL_explode_term(w_12);
  if(match_cons(t, sym__2))
    {
      ATerm i_49 = ATgetArgument(t, 0);
      x_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_12;
  {
    ATerm r_12 (ATerm t)
    {
      t = term_l_31;
      return(t);
    }
    ATerm s_12 (ATerm t)
    {
      ATerm a_13 = NULL,b_13 = NULL;
      if(match_cons(t, sym__2))
        {
          a_13 = ATgetArgument(t, 0);
          b_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm j_49 = t;
        int p_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(a_13, b_13);
            ;
            LocalPopChoice(p_49);
          }
        else
          {
            t = j_49;
            t = SSL_addr(a_13, b_13);
          }
      }
      return(t);
    }
    t = foldr_2_0(r_12, s_12, t);
    u_65 = t;
    t = SSL_TicksToSeconds(u_65);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm h_66 = NULL,i_66 = NULL,j_66 = NULL;
  h_66 = t;
  if(match_cons(t, sym__2))
    {
      i_66 = ATgetArgument(t, 0);
      j_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_49 = t;
    int v_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_66;
        if((i_66 != t))
          {
            _fail(t);
          }
        t = h_66;
        ;
        LocalPopChoice(v_49);
      }
    else
      {
        t = u_49;
        t = h_66;
        {
          ATerm w_49 = t;
          int x_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(i_66, j_66);
              ;
              LocalPopChoice(x_49);
            }
          else
            {
              t = w_49;
              t = SSL_gtr(i_66, j_66);
            }
          t = (ATerm) ATmakeAppl(sym__2, i_66, j_66);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm e_138 (ATerm), ATerm t)
{
  ATerm y_49 = t;
  int z_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_66 = NULL,o_66 = NULL;
      m_66 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm a_50 = t;
        int c_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_13 = NULL;
            t = eval_config_0_0(t);
            o_13 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), o_13);
            t = o_13;
            ;
            LocalPopChoice(c_50);
          }
        else
          {
            t = a_50;
          }
        o_66 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_66, term_o_31);
        t = geq_0_0(t);
        t = m_66;
        t = e_138(t);
      }
      ;
      LocalPopChoice(z_49);
    }
  else
    {
      t = y_49;
    }
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm t_12 (ATerm t)
  {
    ATerm q_66 = NULL,r_66 = NULL;
    t = run_time_0_0(t);
    q_66 = t;
    t = term_p_14;
    t = whoami_0_0(t);
    r_66 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), q_66), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), r_66));
    t = (ATerm) ATmakeAppl(sym__2, term_d_50, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_50), q_66), term_e_50), r_66));
    return(t);
  }
  t = if_verbose1_1_0(t_12, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm w_140 (ATerm), ATerm t)
{
  ATerm n_50 = t;
  int o_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm p_50 = t;
        int q_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_13 = NULL;
            t = eval_config_0_0(t);
            s_13 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), s_13);
            t = s_13;
            ;
            LocalPopChoice(q_50);
          }
        else
          {
            t = p_50;
          }
      }
      ;
      LocalPopChoice(o_50);
    }
  else
    {
      t = n_50;
      {
        ATerm y_12 (ATerm t)
        {
          ATerm r_50 = t;
          int s_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
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
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(u_50);
                  }
                else
                  {
                    t = t_50;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = fetch_1_0(y_12, t);
      }
    }
  t = w_140(t);
  return(t);
}
ATerm map_1_0 (ATerm x_123 (ATerm), ATerm t)
{
  ATerm s_66 (ATerm t)
  {
    ATerm v_50 = t;
    int w_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(w_50);
      }
    else
      {
        t = v_50;
        t = Cons_2_0(x_123, s_66, t);
      }
    return(t);
  }
  t = s_66(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm u_66 = NULL,v_66 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_66 = ATgetFirst((ATermList) t);
      v_66 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_66 = NULL,a_67 = NULL;
        t = v_66;
        t = f_0(t);
        z_66 = t;
        t = u_66;
        t = e_0(t);
        a_67 = t;
        t = v_66;
        {
          ATerm z_12 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(z_66), a_67);
            return(t);
          }
          t = reverse_acc_2_0(e_0, z_12, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_p_14;
      t = f_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm m_114 (ATerm), ATerm t)
{
  ATerm b_67 = NULL,c_67 = NULL,d_67 = NULL,e_67 = NULL;
  e_67 = t;
  if(match_cons(t, sym_Program_1))
    {
      c_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_67);
  b_67 = t;
  t = c_67;
  t = m_114(t);
  d_67 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, d_67), b_67);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm x_50 = t;
  int y_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm z_50 = t;
        int a_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_13 = NULL;
            t = eval_config_0_0(t);
            w_13 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), w_13);
            t = w_13;
            ;
            LocalPopChoice(a_51);
          }
        else
          {
            t = z_50;
          }
      }
      ;
      LocalPopChoice(y_50);
    }
  else
    {
      t = x_50;
      {
        ATerm c_13 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = fetch_1_0(c_13, t);
      }
    }
  t = term_b_51;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  {
    ATerm d_13 (ATerm t)
    {
      t = (ATerm) ATempty;
      return(t);
    }
    t = reverse_acc_2_0(_id, d_13, t);
    {
      ATerm e_13 (ATerm t)
      {
        ATerm h_67 = NULL;
        h_67 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, h_67), term_g_51);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(e_13, t);
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm n_114 (ATerm), ATerm t)
{
  ATerm i_67 = NULL,j_67 = NULL,k_67 = NULL,l_67 = NULL;
  l_67 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      j_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_67);
  i_67 = t;
  t = j_67;
  t = n_114(t);
  k_67 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, k_67), i_67);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm p_67 = NULL,q_67 = NULL;
  p_67 = t;
  {
    ATerm h_51 = t;
    int i_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = p_67;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm j_51 = ATgetFirst((ATermList) t);
                ATerm k_51 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = p_67;
          }
        ;
        LocalPopChoice(i_51);
      }
    else
      {
        t = h_51;
        t = (ATerm) ATinsert(ATempty, p_67);
      }
    q_67 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), q_67);
    t = p_67;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm l_51 = t;
    int m_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_14 = NULL;
        t = eval_config_0_0(t);
        b_14 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), b_14);
        t = b_14;
        ;
        LocalPopChoice(m_51);
      }
    else
      {
        t = l_51;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm n_51 = t;
  int o_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_13 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm g_13 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_r_51;
        return(t);
      }
      ATerm h_13 (ATerm t)
      {
        t = term_s_51;
        return(t);
      }
      t = Option_3_0(f_13, g_13, h_13, t);
      ;
      LocalPopChoice(o_51);
    }
  else
    {
      t = n_51;
      {
        ATerm j_13 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm k_13 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_t_51;
          return(t);
        }
        ATerm m_13 (ATerm t)
        {
          t = term_u_51;
          return(t);
        }
        t = Option_3_0(j_13, k_13, m_13, t);
      }
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm z_142 (ATerm), ATerm t)
{
  ATerm v_67 = NULL;
  v_67 = t;
  {
    ATerm v_51 = t;
    int a_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_52;
        t = z_142(t);
        ;
        LocalPopChoice(a_52);
      }
    else
      {
        t = v_51;
      }
    t = v_67;
    {
      ATerm n_13 (ATerm t)
      {
        ATerm w_67 = NULL;
        w_67 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), w_67);
        t = (ATerm) ATmakeAppl(sym_Program_1, w_67);
        return(t);
      }
      ATerm p_13 (ATerm t)
      {
        ATerm c_52 = t;
        int d_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_52 = t;
            int g_52 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(g_52);
              }
            else
              {
                t = e_52;
                t = z_142(t);
                t = Cons_2_0(_id, p_13, t);
              }
            ;
            LocalPopChoice(d_52);
          }
        else
          {
            t = c_52;
            {
              ATerm y_67 = NULL,z_67 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  y_67 = ATgetFirst((ATermList) t);
                  z_67 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(z_67), (ATerm) ATmakeAppl(sym_Undefined_1, y_67));
            }
          }
        return(t);
      }
      t = Cons_2_0(n_13, p_13, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm y_142 (ATerm), ATerm t)
{
  ATerm l_68 = NULL,m_68 = NULL,n_68 = NULL;
  l_68 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = l_68;
  {
    ATerm q_13 (ATerm t)
    {
      ATerm h_52 = t;
      int i_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_142(t);
          ;
          LocalPopChoice(i_52);
        }
      else
        {
          t = h_52;
          {
            ATerm k_52 = t;
            int l_52 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_13 (ATerm t)
                {
                  ATerm o_68 = NULL;
                  o_68 = t;
                  if(match_string(t, "--help"))
                    {
                      t = o_68;
                    }
                  else
                    {
                      if(match_string(t, "-h"))
                        {
                          t = o_68;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
                            _fail(t);
                          t = o_68;
                        }
                    }
                  return(t);
                }
                ATerm t_13 (ATerm t)
                {
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                  t = term_m_52;
                  return(t);
                }
                ATerm u_13 (ATerm t)
                {
                  t = term_n_52;
                  return(t);
                }
                t = Option_3_0(r_13, t_13, u_13, t);
                ;
                LocalPopChoice(l_52);
              }
            else
              {
                t = k_52;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(q_13, t);
    {
      ATerm o_52 = t;
      int p_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_68 = NULL;
          t_68 = t;
          {
            ATerm q_52 = t;
            int r_52 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = t_68;
                {
                  ATerm s_52 = t;
                  int t_52 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm u_52 = t;
                        int v_52 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm q_14 = NULL;
                            t = eval_config_0_0(t);
                            q_14 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), q_14);
                            t = q_14;
                            ;
                            LocalPopChoice(v_52);
                          }
                        else
                          {
                            t = u_52;
                          }
                      }
                      ;
                      LocalPopChoice(t_52);
                    }
                  else
                    {
                      t = s_52;
                      {
                        ATerm v_13 (ATerm t)
                        {
                          if(!(match_cons(t, sym_Help_0)))
                            _fail(t);
                          return(t);
                        }
                        t = fetch_1_0(v_13, t);
                      }
                    }
                  t = t_68;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(r_52);
              }
            else
              {
                t = q_52;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm w_52 = t;
                  int x_52 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm w_14 = NULL;
                      t = eval_config_0_0(t);
                      w_14 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), w_14);
                      t = w_14;
                      ;
                      LocalPopChoice(x_52);
                    }
                  else
                    {
                      t = w_52;
                    }
                  t = t_68;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(p_52);
        }
      else
        {
          t = o_52;
          {
            ATerm y_52 = t;
            int c_53 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_13 (ATerm t)
                {
                  ATerm y_13 (ATerm t)
                  {
                    if(((m_68 != NULL) && (m_68 != t)))
                      _fail(t);
                    else
                      m_68 = t;
                    return(t);
                  }
                  t = Undefined_1_0(y_13, t);
                  return(t);
                }
                t = fetch_1_0(x_13, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(m_68)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_d_50, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_68)), term_e_53));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(c_53);
              }
            else
              {
                t = y_52;
              }
          }
        }
      n_68 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = n_68;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm y_140 (ATerm), ATerm z_140 (ATerm), ATerm a_141 (ATerm), ATerm b_141 (ATerm), ATerm t)
{
  ATerm w_68 = NULL;
  t = parse_options_1_0(y_140, t);
  w_68 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), w_68);
  t = w_68;
  t = a_141(t);
  {
    ATerm f_53 = t;
    int g_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(z_140, t);
        ;
        LocalPopChoice(g_53);
      }
    else
      {
        t = f_53;
        {
          ATerm h_53 = t;
          int i_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_141(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(i_53);
            }
          else
            {
              t = h_53;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm h_140 (ATerm), ATerm i_140 (ATerm), ATerm j_140 (ATerm), ATerm t)
{
  ATerm z_13 (ATerm t)
  {
    ATerm m_53 = t;
    int n_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_140(t);
        ;
        LocalPopChoice(n_53);
      }
    else
      {
        t = m_53;
        {
          ATerm o_53 = t;
          int p_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(p_53);
            }
          else
            {
              t = o_53;
              {
                ATerm q_53 = t;
                int s_53 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(s_53);
                  }
                else
                  {
                    t = q_53;
                    {
                      ATerm t_53 = t;
                      int u_53 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm d_14 (ATerm t)
                          {
                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
                              _fail(t);
                            return(t);
                          }
                          ATerm e_14 (ATerm t)
                          {
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                            t = term_v_53;
                            return(t);
                          }
                          ATerm f_14 (ATerm t)
                          {
                            t = term_w_53;
                            return(t);
                          }
                          t = Option_3_0(d_14, e_14, f_14, t);
                          ;
                          LocalPopChoice(u_53);
                        }
                      else
                        {
                          t = t_53;
                          {
                            ATerm a_54 = t;
                            int c_54 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(c_54);
                              }
                            else
                              {
                                t = a_54;
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
  ATerm a_14 (ATerm t)
  {
    ATerm g_14 (ATerm t)
    {
      ATerm x_68 = NULL,y_68 = NULL;
      x_68 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm d_54 = t;
        int e_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_15 = NULL;
            t = eval_config_0_0(t);
            b_15 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), b_15);
            t = b_15;
            ;
            LocalPopChoice(e_54);
          }
        else
          {
            t = d_54;
          }
        y_68 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, y_68));
        t = x_68;
      }
      return(t);
    }
    t = if_verbose2_1_0(g_14, t);
    return(t);
  }
  ATerm c_14 (ATerm t)
  {
    ATerm z_68 = NULL,a_69 = NULL,f_15 = NULL;
    z_68 = t;
    {
      ATerm f_54 = t;
      int g_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_14 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((a_69 != NULL) && (a_69 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  a_69 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(h_14, t);
          ;
          LocalPopChoice(g_54);
        }
      else
        {
          t = f_54;
          t = term_h_54;
          a_69 = t;
        }
      t = not_null(a_69);
      t = ReadFromFile_0_0(t);
      f_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_68, f_15);
      t = apply_strategy_1_0(h_140, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(z_13, j_140, a_14, c_14, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm i_14 (ATerm t)
  {
    ATerm j_14 (ATerm t)
    {
      ATerm l_14 (ATerm t)
      {
        ATerm m_14 (ATerm t)
        {
          ATerm n_14 (ATerm t)
          {
            t = Strategies_1_0(inline_sdefs_0_0, t);
            return(t);
          }
          ATerm o_14 (ATerm t)
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            return(t);
          }
          t = Cons_2_0(n_14, o_14, t);
          return(t);
        }
        t = Cons_2_0(_id, m_14, t);
        return(t);
      }
      t = Specification_1_0(l_14, t);
      return(t);
    }
    t = _2_0(_id, j_14, t);
    return(t);
  }
  t = iowrap_3_0(i_14, _fail, default_usage_0_0, t);
  return(t);
}
