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
ATerm term_f_54;
ATerm term_q_53;
ATerm term_p_53;
ATerm term_k_53;
ATerm term_p_52;
ATerm term_o_52;
ATerm term_j_52;
ATerm term_d_52;
ATerm term_c_52;
ATerm term_b_52;
ATerm term_a_52;
ATerm term_y_51;
ATerm term_x_51;
ATerm term_o_51;
ATerm term_f_51;
ATerm term_u_50;
ATerm term_r_50;
ATerm term_m_50;
ATerm term_w_49;
ATerm term_n_49;
ATerm term_m_49;
ATerm term_l_49;
ATerm term_g_49;
ATerm term_f_49;
ATerm term_e_49;
ATerm term_d_49;
ATerm term_c_49;
ATerm term_z_48;
ATerm term_s_48;
ATerm term_d_47;
ATerm term_n_46;
ATerm term_i_46;
ATerm term_m_43;
ATerm term_h_43;
ATerm term_t_42;
ATerm term_s_42;
ATerm term_q_42;
ATerm term_f_39;
ATerm term_g_37;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_a_34;
ATerm term_r_33;
ATerm term_o_31;
ATerm term_k_31;
ATerm term_e_17;
ATerm term_e_16;
ATerm term_i_15;
ATerm term_g_15;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_z_13;
void init_constant_terms (void)
{
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("n_0", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall0", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("d_0", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeInt(50);
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(sym_Op_2, term_q_42, (ATerm) ATempty);
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(sym_ConstType_1, term_s_42);
  ATprotect(&(term_h_43));
  term_h_43 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_i_46));
  term_i_46 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_n_46));
  term_n_46 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_47));
  term_d_47 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_s_48));
  term_s_48 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_z_48));
  term_z_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_49));
  term_c_49 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_31);
  ATprotect(&(term_d_49));
  term_d_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_e_49));
  term_e_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_49));
  term_f_49 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_49));
  term_g_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_l_49));
  term_l_49 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_49));
  term_m_49 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_49));
  term_n_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_49));
  term_w_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_50));
  term_m_50 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_r_50));
  term_r_50 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_u_50));
  term_u_50 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_51));
  term_f_51 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_51));
  term_o_51 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_51));
  term_x_51 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_51));
  term_y_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_a_52));
  term_a_52 = (ATerm) ATmakeAppl(sym__3, term_x_51, term_y_51, term_z_13);
  ATprotect(&(term_b_52));
  term_b_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_c_52));
  term_c_52 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_52));
  term_d_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_j_52));
  term_j_52 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_52));
  term_o_52 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_52));
  term_p_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_53));
  term_k_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_q_53));
  term_q_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_f_54));
  term_f_54 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm TestSavesCurrentTerm_0_0 (ATerm);
ATerm WhereSavesCurrentTerm_0_0 (ATerm);
ATerm FuseScope_0_0 (ATerm);
ATerm SubsArgCall2_0_0 (ATerm);
ATerm SubsArgCall1_0_0 (ATerm);
ATerm topdown_1_0 (ATerm c_118 (ATerm), ATerm);
ATerm u_0 (ATerm);
ATerm x_0 (ATerm);
ATerm substitute_arg_0_0 (ATerm);
ATerm c_1 (ATerm);
ATerm f_1 (ATerm);
ATerm i_1 (ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm substitute_args_0_0 (ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm InlineCall_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm q_2 (ATerm);
ATerm s_2 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm spaste_1_0 (ATerm g_117 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm m_107 (ATerm), ATerm n_107 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm e_109 (ATerm), ATerm f_109 (ATerm), ATerm g_109 (ATerm), ATerm);
ATerm Let_2_0 (ATerm p_106 (ATerm), ATerm q_106 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm h_117 (ATerm), ATerm i_117 (ATerm), ATerm j_117 (ATerm), ATerm);
ATerm n_3 (ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm DistBinding_2_0 (ATerm p_131 (ATerm), ATerm q_131 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm v_3 (ATerm);
ATerm RnBinding_2_0 (ATerm j_131 (ATerm), ATerm k_131 (ATerm (ATerm), ATerm), ATerm);
ATerm lookup_0_0 (ATerm);
ATerm env_alltd_1_0 (ATerm x_131 (ATerm), ATerm);
ATerm rename_4_0 (ATerm e_131 (ATerm (ATerm), ATerm), ATerm f_131 (ATerm), ATerm g_131 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm h_131 (ATerm (ATerm), ATerm), ATerm);
ATerm c_4 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm tpaste_1_0 (ATerm c_117 (ATerm), ATerm);
ATerm DynamicRules_1_0 (ATerm w_105 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm n_105 (ATerm), ATerm o_105 (ATerm), ATerm p_105 (ATerm), ATerm q_105 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm d_117 (ATerm), ATerm e_117 (ATerm), ATerm f_117 (ATerm), ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm t_4 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm union_1_0 (ATerm r_126 (ATerm), ATerm);
ATerm diff_1_0 (ATerm m_126 (ATerm), ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm d_5 (ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm while_not_2_0 (ATerm n_135 (ATerm), ATerm o_135 (ATerm), ATerm);
ATerm for_3_0 (ATerm q_135 (ATerm), ATerm r_135 (ATerm), ATerm s_135 (ATerm), ATerm);
ATerm f_5 (ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm n_5 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm y_5 (ATerm);
ATerm z_5 (ATerm);
ATerm free_vars_3_0 (ATerm h_133 (ATerm), ATerm i_133 (ATerm), ATerm j_133 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm a_6 (ATerm);
ATerm b_6 (ATerm);
ATerm c_6 (ATerm);
ATerm d_6 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm Var_1_0 (ATerm f_103 (ATerm), ATerm);
ATerm e_6 (ATerm);
ATerm i_6 (ATerm);
ATerm j_6 (ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm m_6 (ATerm);
ATerm o_6 (ATerm);
ATerm strename_0_0 (ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm t_6 (ATerm);
ATerm u_6 (ATerm);
ATerm v_6 (ATerm);
ATerm InlineCall0_0_0 (ATerm);
ATerm w_6 (ATerm);
ATerm x_6 (ATerm);
ATerm occurrences_1_0 (ATerm y_126 (ATerm), ATerm);
ATerm local_inlinable_1_0 (ATerm h_116 (ATerm), ATerm);
ATerm b_7 (ATerm);
ATerm UndefineSDef_0_0 (ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm l_130 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm j_121 (ATerm), ATerm k_121 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm k_130 (ATerm), ATerm);
ATerm scope_2_0 (ATerm m_130 (ATerm), ATerm n_130 (ATerm), ATerm);
ATerm f_7 (ATerm);
ATerm h_7 (ATerm);
ATerm m_7 (ATerm);
ATerm inline_sdef_0_0 (ATerm);
ATerm assert_1_0 (ATerm o_130 (ATerm), ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm AddSDef_0_0 (ATerm);
ATerm leq_0_0 (ATerm);
ATerm foldr_3_0 (ATerm f_129 (ATerm), ATerm g_129 (ATerm), ATerm h_129 (ATerm), ATerm);
ATerm p_7 (ATerm);
ATerm r_7 (ATerm);
ATerm t_7 (ATerm);
ATerm w_7 (ATerm);
ATerm term_size_0_0 (ATerm);
ATerm GuardedLChoice_3_0 (ATerm j_107 (ATerm), ATerm k_107 (ATerm), ATerm l_107 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm f_107 (ATerm), ATerm g_107 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm d_106 (ATerm), ATerm e_106 (ATerm), ATerm);
ATerm Match_1_0 (ATerm w_106 (ATerm), ATerm);
ATerm Seq_2_0 (ATerm d_107 (ATerm), ATerm e_107 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm z_106 (ATerm), ATerm a_107 (ATerm), ATerm);
ATerm Build_1_0 (ATerm x_106 (ATerm), ATerm);
ATerm SVar_1_0 (ATerm o_106 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm v_107 (ATerm), ATerm w_107 (ATerm), ATerm x_107 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm t_106 (ATerm), ATerm u_106 (ATerm), ATerm v_106 (ATerm), ATerm);
ATerm x_7 (ATerm);
ATerm z_7 (ATerm);
ATerm b_8 (ATerm);
ATerm c_8 (ATerm);
ATerm e_8 (ATerm);
ATerm g_8 (ATerm);
ATerm h_8 (ATerm);
ATerm k_8 (ATerm);
ATerm m_8 (ATerm);
ATerm body_to_inline_0_0 (ATerm);
ATerm SDefT_4_0 (ATerm h_109 (ATerm), ATerm i_109 (ATerm), ATerm j_109 (ATerm), ATerm k_109 (ATerm), ATerm);
ATerm inlineable_0_0 (ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm genzip_4_0 (ATerm o_122 (ATerm), ATerm p_122 (ATerm), ATerm q_122 (ATerm), ATerm r_122 (ATerm), ATerm);
ATerm q_8 (ATerm);
ATerm s_8 (ATerm);
ATerm t_8 (ATerm);
ATerm u_8 (ATerm);
ATerm BuildMatchFusion_0_0 (ATerm);
ATerm MisMatch_0_0 (ATerm);
ATerm i_48 (ATerm h_47, ATerm i_47, ATerm j_47, ATerm);
ATerm BuildMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm g_119 (ATerm), ATerm);
ATerm LetHoist_0_0 (ATerm);
ATerm Idempotency_0_0 (ATerm);
ATerm AssociateR_0_0 (ATerm);
ATerm map1_1_0 (ATerm l_0 (ATerm), ATerm);
ATerm d_9 (ATerm);
ATerm g_9 (ATerm);
ATerm h_9 (ATerm);
ATerm i_9 (ATerm);
ATerm j_9 (ATerm);
ATerm l_9 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm n_9 (ATerm);
ATerm ElimFail_0_0 (ATerm);
ATerm ElimId_0_0 (ATerm);
ATerm Simplify_0_0 (ATerm);
ATerm repeat_1_0 (ATerm y_134 (ATerm), ATerm);
ATerm downup_1_0 (ATerm e_118 (ATerm), ATerm);
ATerm q_9 (ATerm);
ATerm s_9 (ATerm);
ATerm inline_sdefs_0_0 (ATerm);
ATerm Strategies_1_0 (ATerm h_102 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm b_102 (ATerm), ATerm c_102 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm m_102 (ATerm), ATerm);
ATerm _2_0 (ATerm m_97 (ATerm), ATerm n_97 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm p_145 (ATerm), ATerm);
ATerm d_10 (ATerm);
ATerm e_10 (ATerm);
ATerm f_10 (ATerm);
ATerm g_10 (ATerm);
ATerm h_10 (ATerm);
ATerm j_10 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm e_140 (ATerm), ATerm);
ATerm c_59 (ATerm w_58, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm l_10 (ATerm);
ATerm m_10 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm o_124 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm u_124 (ATerm), ATerm);
ATerm p_10 (ATerm);
ATerm r_10 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm t_10 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm s_138 (ATerm), ATerm);
ATerm u_10 (ATerm);
ATerm w_10 (ATerm);
ATerm z_10 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm a_11 (ATerm);
ATerm b_11 (ATerm);
ATerm c_11 (ATerm);
ATerm e_11 (ATerm);
ATerm f_11 (ATerm);
ATerm h_11 (ATerm);
ATerm l_11 (ATerm);
ATerm m_11 (ATerm);
ATerm n_11 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm);
ATerm o_11 (ATerm);
ATerm p_11 (ATerm);
ATerm r_11 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm s_11 (ATerm);
ATerm t_11 (ATerm);
ATerm w_11 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm d_129 (ATerm), ATerm e_129 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm a_12 (ATerm);
ATerm b_12 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm r_138 (ATerm), ATerm);
ATerm c_12 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm h_12 (ATerm);
ATerm need_help_1_0 (ATerm c_141 (ATerm), ATerm);
ATerm map_1_0 (ATerm d_124 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm s_114 (ATerm), ATerm);
ATerm j_12 (ATerm);
ATerm m_12 (ATerm);
ATerm n_12 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm t_114 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm o_12 (ATerm);
ATerm p_12 (ATerm);
ATerm q_12 (ATerm);
ATerm r_12 (ATerm);
ATerm s_12 (ATerm);
ATerm u_12 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm v_12 (ATerm);
ATerm parse_options_p__1_0 (ATerm f_143 (ATerm), ATerm);
ATerm z_12 (ATerm);
ATerm a_13 (ATerm);
ATerm b_13 (ATerm);
ATerm e_13 (ATerm);
ATerm parse_options_1_0 (ATerm e_143 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm e_141 (ATerm), ATerm f_141 (ATerm), ATerm g_141 (ATerm), ATerm h_141 (ATerm), ATerm);
ATerm k_13 (ATerm);
ATerm m_13 (ATerm);
ATerm n_13 (ATerm);
ATerm q_13 (ATerm);
ATerm r_13 (ATerm);
ATerm iowrap_3_0 (ATerm n_140 (ATerm), ATerm o_140 (ATerm), ATerm p_140 (ATerm), ATerm);
ATerm t_13 (ATerm);
ATerm u_13 (ATerm);
ATerm v_13 (ATerm);
ATerm w_13 (ATerm);
ATerm x_13 (ATerm);
ATerm y_13 (ATerm);
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
  t = term_z_13;
  t = whoami_0_0(t);
  o_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), o_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = m_0;
  return(t);
}
ATerm TestSavesCurrentTerm_0_0 (ATerm t)
{
  ATerm p_0 = NULL,q_0 = NULL;
  if(match_cons(t, sym_Test_1))
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
ATerm WhereSavesCurrentTerm_0_0 (ATerm t)
{
  ATerm s_0 = NULL,v_0 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      s_0 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = new_0_0(t);
  v_0 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, v_0), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, v_0)), (ATerm) ATmakeAppl(sym_Seq_2, s_0, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, v_0)))));
  return(t);
}
ATerm FuseScope_0_0 (ATerm t)
{
  ATerm y_0 = NULL,z_0 = NULL,a_1 = NULL,b_1 = NULL;
  if(match_cons(t, sym_Scope_2))
    {
      y_0 = ATgetArgument(t, 0);
      {
        ATerm b_14 = ATgetArgument(t, 1);
        if(match_cons(b_14, sym_Scope_2))
          {
            z_0 = ATgetArgument(b_14, 0);
            a_1 = ATgetArgument(b_14, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_0, z_0);
  {
    ATerm c_14 = t;
    int g_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_14 = ATgetArgument(t, 0);
            ATerm i_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_0;
        {
          ATerm r_0 (ATerm t)
          {
            t = z_0;
            return(t);
          }
          t = at_end_1_0(r_0, t);
        }
        ;
        LocalPopChoice(g_14);
      }
    else
      {
        t = c_14;
        {
          ATerm w_0 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, y_0, z_0));
          if(match_cons(t, sym__2))
            {
              ATerm j_14 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) j_14) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              w_0 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_0;
          t = concat_0_0(t);
        }
      }
    b_1 = t;
    t = (ATerm) ATmakeAppl(sym_Scope_2, b_1, a_1);
  }
  return(t);
}
ATerm SubsArgCall2_0_0 (ATerm t)
{
  ATerm m_1 = NULL,n_1 = NULL,o_1 = NULL,p_1 = NULL,d_1 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm m_14 = ATgetArgument(t, 0);
      if(match_cons(m_14, sym_SVar_1))
        {
          m_1 = ATgetArgument(m_14, 0);
        }
      else
        _fail(t);
      n_1 = ATgetArgument(t, 1);
      o_1 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue)), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, m_1), (ATerm)ATempty, (ATerm) ATempty));
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_1 = ATgetFirst((ATermList) t);
      {
        ATerm o_14 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = d_1;
  if(match_cons(t, sym_Defined_2))
    {
      ATerm p_14 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_14) != ATmakeSymbol("n_0", 0, ATtrue)))
        _fail(t);
      p_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_1), n_1, o_1);
  return(t);
}
ATerm SubsArgCall1_0_0 (ATerm t)
{
  ATerm q_1 = NULL,t_1 = NULL,h_1 = NULL;
  q_1 = t;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm q_14 = ATgetArgument(t, 0);
      if(match_cons(q_14, sym_SVar_1))
        {
          ATerm t_14 = ATgetArgument(q_14, 0);
        }
      else
        _fail(t);
      {
        ATerm r_14 = ATgetArgument(t, 1);
        if(((ATgetType(r_14) != AT_LIST) || !(ATisEmpty(r_14))))
          _fail(t);
      }
      {
        ATerm s_14 = ATgetArgument(t, 2);
        if(((ATgetType(s_14) != AT_LIST) || !(ATisEmpty(s_14))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue)), q_1);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_1 = ATgetFirst((ATermList) t);
      {
        ATerm v_14 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = h_1;
  if(match_cons(t, sym_Defined_2))
    {
      ATerm w_14 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_14) != ATmakeSymbol("k_0", 0, ATtrue)))
        _fail(t);
      t_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_1;
  t = strename_0_0(t);
  return(t);
}
ATerm topdown_1_0 (ATerm c_118 (ATerm), ATerm t)
{
  t = c_118(t);
  {
    ATerm t_0 (ATerm t)
    {
      t = topdown_1_0(c_118, t);
      return(t);
    }
    t = SRTS_all(t_0, t);
  }
  return(t);
}
ATerm u_0 (ATerm t)
{
  t = term_x_14;
  return(t);
}
ATerm x_0 (ATerm t)
{
  t = term_y_14;
  return(t);
}
ATerm substitute_arg_0_0 (ATerm t)
{
  ATerm f_2 = NULL,g_2 = NULL,h_2 = NULL,i_2 = NULL,k_2 = NULL,l_2 = NULL,o_2 = NULL,p_2 = NULL,r_2 = NULL,u_2 = NULL,x_2 = NULL;
  k_2 = t;
  if(match_cons(t, sym__2))
    {
      l_2 = ATgetArgument(t, 0);
      x_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_2;
  if(match_cons(t, sym_VarDec_2))
    {
      o_2 = ATgetArgument(t, 0);
      p_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_2;
  if(match_cons(t, sym_FunType_2))
    {
      r_2 = ATgetArgument(t, 0);
      {
        ATerm z_14 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = r_2;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm a_15 = ATgetFirst((ATermList) t);
      u_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_2;
  {
    ATerm b_15 = t;
    int c_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm e_15 = ATgetFirst((ATermList) t);
            ATerm f_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(c_15);
        t = x_2;
        if(match_cons(t, sym_CallT_3))
          {
            f_2 = ATgetArgument(t, 0);
            h_2 = ATgetArgument(t, 1);
            i_2 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = f_2;
        if(match_cons(t, sym_SVar_1))
          {
            g_2 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = h_2;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = i_2;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, o_2), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_g_15, g_2));
        t = assert_1_0(u_0, t);
        t = k_2;
      }
    else
      {
        t = b_15;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, o_2), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_i_15, x_2));
        t = assert_1_0(x_0, t);
        t = k_2;
      }
  }
  return(t);
}
ATerm c_1 (ATerm t)
{
  t = term_y_14;
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = term_x_14;
  return(t);
}
ATerm i_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_15 = ATgetArgument(t, 0);
      if(((ATgetType(j_15) != AT_LIST) || !(ATisEmpty(j_15))))
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
ATerm j_1 (ATerm t)
{
  ATerm j_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_15 = ATgetArgument(t, 0);
      if(((ATgetType(l_15) == AT_LIST) && !(ATisEmpty(l_15))))
        {
          j_3 = ATgetFirst((ATermList) l_15);
          l_3 = (ATerm) ATgetNext((ATermList) l_15);
        }
      else
        _fail(t);
      {
        ATerm m_15 = ATgetArgument(t, 1);
        if(((ATgetType(m_15) == AT_LIST) && !(ATisEmpty(m_15))))
          {
            k_3 = ATgetFirst((ATermList) m_15);
            m_3 = (ATerm) ATgetNext((ATermList) m_15);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_3, k_3), (ATerm) ATmakeAppl(sym__2, l_3, m_3));
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm p_3 = NULL,q_3 = NULL;
  if(match_cons(t, sym__2))
    {
      p_3 = ATgetArgument(t, 0);
      q_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(q_3), p_3);
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm n_15 = t;
  int q_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_15 = t;
      int s_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SubsArgCall1_0_0(t);
          ;
          LocalPopChoice(s_15);
        }
      else
        {
          t = r_15;
          t = SubsArgCall2_0_0(t);
        }
      ;
      LocalPopChoice(q_15);
    }
  else
    {
      t = n_15;
    }
  return(t);
}
ATerm substitute_args_0_0 (ATerm t)
{
  ATerm g_3 = NULL,h_3 = NULL,i_3 = NULL;
  ATerm e_1 (ATerm t)
  {
    ATerm g_1 (ATerm t)
    {
      if(match_cons(t, sym__3))
        {
          if(((g_3 != NULL) && (g_3 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            g_3 = ATgetArgument(t, 0);
          if(((h_3 != NULL) && (h_3 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            h_3 = ATgetArgument(t, 1);
          if(((i_3 != NULL) && (i_3 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            i_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(g_3), not_null(h_3));
      t = genzip_4_0(i_1, j_1, k_1, substitute_arg_0_0, t);
      t = not_null(i_3);
      t = topdown_1_0(l_1, t);
      return(t);
    }
    t = scope_2_0(f_1, g_1, t);
    return(t);
  }
  t = scope_2_0(c_1, e_1, t);
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm z_4 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      z_4 = ATgetArgument(t, 0);
      {
        ATerm w_15 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = z_4;
  return(t);
}
ATerm s_1 (ATerm t)
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
ATerm u_1 (ATerm t)
{
  ATerm c_5 = NULL,g_5 = NULL,j_5 = NULL,m_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_16 = ATgetArgument(t, 0);
      if(((ATgetType(c_16) == AT_LIST) && !(ATisEmpty(c_16))))
        {
          c_5 = ATgetFirst((ATermList) c_16);
          j_5 = (ATerm) ATgetNext((ATermList) c_16);
        }
      else
        _fail(t);
      {
        ATerm d_16 = ATgetArgument(t, 1);
        if(((ATgetType(d_16) == AT_LIST) && !(ATisEmpty(d_16))))
          {
            g_5 = ATgetFirst((ATermList) d_16);
            m_5 = (ATerm) ATgetNext((ATermList) d_16);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_5, g_5), (ATerm) ATmakeAppl(sym__2, j_5, m_5));
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm u_5 = NULL,v_5 = NULL;
  if(match_cons(t, sym__2))
    {
      u_5 = ATgetArgument(t, 0);
      v_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_5), u_5);
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm w_5 = NULL,x_5 = NULL;
  if(match_cons(t, sym__2))
    {
      w_5 = ATgetArgument(t, 0);
      x_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, w_5), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, x_5))));
  return(t);
}
ATerm x_1 (ATerm t)
{
  t = term_e_16;
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = repeat_1_0(z_1, t);
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm f_16 = t;
  int g_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Simplify_0_0(t);
      ;
      LocalPopChoice(g_16);
    }
  else
    {
      t = f_16;
      {
        ATerm h_16 = t;
        int i_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_6 = NULL,g_6 = NULL,h_6 = NULL,n_6 = NULL;
            if(match_cons(t, sym_Seq_2))
              {
                f_6 = ATgetArgument(t, 0);
                g_6 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = g_6;
            if(match_cons(t, sym_Let_2))
              {
                h_6 = ATgetArgument(t, 0);
                n_6 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Let_2, h_6, (ATerm) ATmakeAppl(sym_Seq_2, f_6, n_6));
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
                  t = FuseScope_0_0(t);
                  ;
                  LocalPopChoice(k_16);
                }
              else
                {
                  t = j_16;
                  {
                    ATerm l_16 = t;
                    int m_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = WhereSavesCurrentTerm_0_0(t);
                        ;
                        LocalPopChoice(m_16);
                      }
                    else
                      {
                        t = l_16;
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
ATerm InlineCall_0_0 (ATerm t)
{
  ATerm i_7 = NULL,v_7 = NULL,i_8 = NULL,e_9 = NULL,y_9 = NULL;
  i_7 = t;
  if(match_cons(t, sym_CallT_3))
    {
      v_7 = ATgetArgument(t, 0);
      e_9 = ATgetArgument(t, 1);
      y_9 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = v_7;
  if(match_cons(t, sym_SVar_1))
    {
      i_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm n_16 = t;
    int o_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_3 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue)), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_8), (ATerm)ATempty, (ATerm) ATempty));
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_3 = ATgetFirst((ATermList) t);
            {
              ATerm q_16 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = u_3;
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        _fail(t);
        ;
        LocalPopChoice(o_16);
      }
    else
      {
        t = n_16;
        {
          ATerm s_16 = t;
          int t_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_4 = NULL;
              t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue)), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_8), (ATerm)ATempty, (ATerm) ATempty));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  d_4 = ATgetFirst((ATermList) t);
                  {
                    ATerm x_16 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = d_4;
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              _fail(t);
              ;
              LocalPopChoice(t_16);
            }
          else
            {
              t = s_16;
              {
                ATerm y_16 = t;
                int z_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm p_4 = NULL,q_4 = NULL,r_4 = NULL,s_4 = NULL,u_4 = NULL,v_4 = NULL,w_4 = NULL,c_7 = NULL;
                    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue)), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_8), (ATerm)ATempty, (ATerm) ATempty));
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        c_7 = ATgetFirst((ATermList) t);
                        {
                          ATerm b_17 = (ATerm) ATgetNext((ATermList) t);
                        }
                      }
                    else
                      _fail(t);
                    t = c_7;
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm c_17 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) c_17) != ATmakeSymbol("d_0", 0, ATtrue)))
                          _fail(t);
                        p_4 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = p_4;
                    t = strename_0_0(t);
                    if(match_cons(t, sym_SDefT_4))
                      {
                        if((i_8 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        q_4 = ATgetArgument(t, 1);
                        r_4 = ATgetArgument(t, 2);
                        s_4 = ATgetArgument(t, 3);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__3, q_4, e_9, s_4);
                    t = substitute_args_0_0(t);
                    u_4 = t;
                    t = r_4;
                    t = map_1_0(r_1, t);
                    v_4 = t;
                    t = (ATerm) ATmakeAppl(sym__2, y_9, v_4);
                    t = genzip_4_0(s_1, u_1, v_1, w_1, t);
                    w_4 = t;
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_8), (ATerm)ATempty, (ATerm) ATempty), term_e_17);
                    t = assert_1_0(x_1, t);
                    t = (ATerm) ATmakeAppl(sym_Scope_2, v_4, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, w_4), u_4));
                    t = downup_1_0(y_1, t);
                    ;
                    LocalPopChoice(z_16);
                  }
                else
                  {
                    t = y_16;
                    {
                      ATerm q_7 = NULL;
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue)), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_8), (ATerm)ATempty, (ATerm) ATempty));
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          q_7 = ATgetFirst((ATermList) t);
                          {
                            ATerm f_17 = (ATerm) ATgetNext((ATermList) t);
                          }
                        }
                      else
                        _fail(t);
                      t = q_7;
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
ATerm b_2 (ATerm t)
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
ATerm c_2 (ATerm t)
{
  ATerm p_13 = NULL,a_14 = NULL,n_14 = NULL,u_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_17 = ATgetArgument(t, 0);
      if(((ATgetType(i_17) == AT_LIST) && !(ATisEmpty(i_17))))
        {
          p_13 = ATgetFirst((ATermList) i_17);
          n_14 = (ATerm) ATgetNext((ATermList) i_17);
        }
      else
        _fail(t);
      {
        ATerm j_17 = ATgetArgument(t, 1);
        if(((ATgetType(j_17) == AT_LIST) && !(ATisEmpty(j_17))))
          {
            a_14 = ATgetFirst((ATermList) j_17);
            u_14 = (ATerm) ATgetNext((ATermList) j_17);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_13, a_14), (ATerm) ATmakeAppl(sym__2, n_14, u_14));
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm d_15 = NULL,o_15 = NULL;
  if(match_cons(t, sym__2))
    {
      d_15 = ATgetArgument(t, 0);
      o_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_15), d_15);
  return(t);
}
ATerm e_2 (ATerm t)
{
  ATerm z_15 = NULL,r_16 = NULL,u_16 = NULL,w_16 = NULL,d_17 = NULL;
  if(match_cons(t, sym__2))
    {
      z_15 = ATgetArgument(t, 0);
      d_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_15;
  {
    ATerm k_17 = t;
    int r_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm t_17 = ATgetArgument(t, 0);
            r_16 = ATgetArgument(t, 1);
            u_16 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(r_17);
        t = (ATerm) ATmakeAppl(sym_SDef_3, d_17, r_16, u_16);
      }
    else
      {
        t = k_17;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm w_17 = ATgetArgument(t, 0);
            r_16 = ATgetArgument(t, 1);
            u_16 = ATgetArgument(t, 2);
            w_16 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, d_17, r_16, u_16, w_16);
      }
  }
  return(t);
}
ATerm m_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_17 = ATgetArgument(t, 0);
      if(((ATgetType(x_17) != AT_LIST) || !(ATisEmpty(x_17))))
        _fail(t);
      {
        ATerm y_17 = ATgetArgument(t, 1);
        if(((ATgetType(y_17) != AT_LIST) || !(ATisEmpty(y_17))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm l_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_18 = ATgetArgument(t, 0);
      if(((ATgetType(f_18) == AT_LIST) && !(ATisEmpty(f_18))))
        {
          l_17 = ATgetFirst((ATermList) f_18);
          n_17 = (ATerm) ATgetNext((ATermList) f_18);
        }
      else
        _fail(t);
      {
        ATerm h_18 = ATgetArgument(t, 1);
        if(((ATgetType(h_18) == AT_LIST) && !(ATisEmpty(h_18))))
          {
            m_17 = ATgetFirst((ATermList) h_18);
            o_17 = (ATerm) ATgetNext((ATermList) h_18);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, l_17, m_17), (ATerm) ATmakeAppl(sym__2, n_17, o_17));
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm p_17 = NULL,q_17 = NULL;
  if(match_cons(t, sym__2))
    {
      p_17 = ATgetArgument(t, 0);
      q_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(q_17), p_17);
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm s_17 = NULL,u_17 = NULL,v_17 = NULL;
  if(match_cons(t, sym__2))
    {
      s_17 = ATgetArgument(t, 0);
      v_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_17;
  {
    ATerm k_18 = t;
    int l_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm m_18 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(l_18);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, v_17);
      }
    else
      {
        t = k_18;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm t_18 = ATgetArgument(t, 0);
            u_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, v_17, u_17);
      }
  }
  return(t);
}
ATerm v_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_18 = ATgetArgument(t, 0);
      if(((ATgetType(v_18) != AT_LIST) || !(ATisEmpty(v_18))))
        _fail(t);
      {
        ATerm y_18 = ATgetArgument(t, 1);
        if(((ATgetType(y_18) != AT_LIST) || !(ATisEmpty(y_18))))
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
  ATerm z_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_18 = ATgetArgument(t, 0);
      if(((ATgetType(z_18) == AT_LIST) && !(ATisEmpty(z_18))))
        {
          z_17 = ATgetFirst((ATermList) z_18);
          b_18 = (ATerm) ATgetNext((ATermList) z_18);
        }
      else
        _fail(t);
      {
        ATerm b_19 = ATgetArgument(t, 1);
        if(((ATgetType(b_19) == AT_LIST) && !(ATisEmpty(b_19))))
          {
            a_18 = ATgetFirst((ATermList) b_19);
            c_18 = (ATerm) ATgetNext((ATermList) b_19);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_17, a_18), (ATerm) ATmakeAppl(sym__2, b_18, c_18));
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm d_18 = NULL,e_18 = NULL;
  if(match_cons(t, sym__2))
    {
      d_18 = ATgetArgument(t, 0);
      e_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_18), d_18);
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm g_18 = NULL,i_18 = NULL,j_18 = NULL;
  if(match_cons(t, sym__2))
    {
      g_18 = ATgetArgument(t, 0);
      j_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_18;
  {
    ATerm c_19 = t;
    int d_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm e_19 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(d_19);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, j_18);
      }
    else
      {
        t = c_19;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm f_19 = ATgetArgument(t, 0);
            i_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, j_18, i_18);
      }
  }
  return(t);
}
ATerm b_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm g_19 = ATgetArgument(t, 0);
      if(((ATgetType(g_19) != AT_LIST) || !(ATisEmpty(g_19))))
        _fail(t);
      {
        ATerm o_19 = ATgetArgument(t, 1);
        if(((ATgetType(o_19) != AT_LIST) || !(ATisEmpty(o_19))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_19 = ATgetArgument(t, 0);
      if(((ATgetType(p_19) == AT_LIST) && !(ATisEmpty(p_19))))
        {
          n_18 = ATgetFirst((ATermList) p_19);
          p_18 = (ATerm) ATgetNext((ATermList) p_19);
        }
      else
        _fail(t);
      {
        ATerm r_19 = ATgetArgument(t, 1);
        if(((ATgetType(r_19) == AT_LIST) && !(ATisEmpty(r_19))))
          {
            o_18 = ATgetFirst((ATermList) r_19);
            q_18 = (ATerm) ATgetNext((ATermList) r_19);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_18, o_18), (ATerm) ATmakeAppl(sym__2, p_18, q_18));
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm r_18 = NULL,s_18 = NULL;
  if(match_cons(t, sym__2))
    {
      r_18 = ATgetArgument(t, 0);
      s_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_18), r_18);
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm u_18 = NULL,w_18 = NULL,x_18 = NULL;
  if(match_cons(t, sym__2))
    {
      u_18 = ATgetArgument(t, 0);
      x_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_18;
  {
    ATerm s_19 = t;
    int w_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm x_19 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(w_19);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, x_18);
      }
    else
      {
        t = s_19;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm y_19 = ATgetArgument(t, 0);
            w_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, x_18, w_18);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm g_117 (ATerm), ATerm t)
{
  ATerm a_20 = t;
  int c_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_2 (ATerm t)
      {
        ATerm s_7 = NULL,u_7 = NULL;
        s_7 = t;
        t = g_117(t);
        u_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_7, u_7);
        t = genzip_4_0(b_2, c_2, d_2, e_2, t);
        return(t);
      }
      t = Let_2_0(a_2, _id, t);
      ;
      LocalPopChoice(c_20);
    }
  else
    {
      t = a_20;
      {
        ATerm e_20 = t;
        int g_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_2 (ATerm t)
            {
              ATerm y_7 = NULL,a_8 = NULL;
              y_7 = t;
              t = g_117(t);
              a_8 = t;
              t = (ATerm) ATmakeAppl(sym__2, y_7, a_8);
              t = genzip_4_0(m_2, n_2, q_2, s_2, t);
              return(t);
            }
            t = SDef_3_0(_id, j_2, _id, t);
            ;
            LocalPopChoice(g_20);
          }
        else
          {
            t = e_20;
            {
              ATerm h_20 = t;
              int i_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_2 (ATerm t)
                  {
                    ATerm d_8 = NULL,f_8 = NULL;
                    d_8 = t;
                    t = g_117(t);
                    f_8 = t;
                    t = (ATerm) ATmakeAppl(sym__2, d_8, f_8);
                    t = genzip_4_0(v_2, w_2, y_2, z_2, t);
                    return(t);
                  }
                  t = SDefT_4_0(_id, t_2, _id, _id, t);
                  ;
                  LocalPopChoice(i_20);
                }
              else
                {
                  t = h_20;
                  {
                    ATerm k_20 = t;
                    int q_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm a_3 (ATerm t)
                        {
                          ATerm j_8 = NULL,l_8 = NULL;
                          j_8 = t;
                          t = g_117(t);
                          l_8 = t;
                          t = (ATerm) ATmakeAppl(sym__2, j_8, l_8);
                          t = genzip_4_0(b_3, c_3, d_3, e_3, t);
                          return(t);
                        }
                        t = RDefT_4_0(_id, a_3, _id, _id, t);
                        ;
                        LocalPopChoice(q_20);
                      }
                    else
                      {
                        t = k_20;
                        {
                          ATerm f_3 (ATerm t)
                          {
                            ATerm h_19 = NULL;
                            t = g_117(t);
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                h_19 = ATgetFirst((ATermList) t);
                                {
                                  ATerm r_20 = (ATerm) ATgetNext((ATermList) t);
                                }
                              }
                            else
                              _fail(t);
                            t = h_19;
                            return(t);
                          }
                          t = Rec_2_0(f_3, _id, t);
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
ATerm Rec_2_0 (ATerm m_107 (ATerm), ATerm n_107 (ATerm), ATerm t)
{
  ATerm i_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL;
  n_19 = t;
  if(match_cons(t, sym_Rec_2))
    {
      j_19 = ATgetArgument(t, 0);
      k_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_19);
  i_19 = t;
  t = j_19;
  t = m_107(t);
  l_19 = t;
  t = k_19;
  t = n_107(t);
  m_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, l_19, m_19), i_19);
  return(t);
}
ATerm SDef_3_0 (ATerm e_109 (ATerm), ATerm f_109 (ATerm), ATerm g_109 (ATerm), ATerm t)
{
  ATerm q_19 = NULL,t_19 = NULL,u_19 = NULL,v_19 = NULL,z_19 = NULL,b_20 = NULL,d_20 = NULL,f_20 = NULL;
  f_20 = t;
  if(match_cons(t, sym_SDef_3))
    {
      t_19 = ATgetArgument(t, 0);
      u_19 = ATgetArgument(t, 1);
      v_19 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_20);
  q_19 = t;
  t = t_19;
  t = e_109(t);
  z_19 = t;
  t = u_19;
  t = f_109(t);
  b_20 = t;
  t = v_19;
  t = g_109(t);
  d_20 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, z_19, b_20, d_20), q_19);
  return(t);
}
ATerm Let_2_0 (ATerm p_106 (ATerm), ATerm q_106 (ATerm), ATerm t)
{
  ATerm j_20 = NULL,l_20 = NULL,m_20 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL;
  p_20 = t;
  if(match_cons(t, sym_Let_2))
    {
      l_20 = ATgetArgument(t, 0);
      m_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_20);
  j_20 = t;
  t = l_20;
  t = p_106(t);
  n_20 = t;
  t = m_20;
  t = q_106(t);
  o_20 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, n_20, o_20), j_20);
  return(t);
}
ATerm sboundin_3_0 (ATerm h_117 (ATerm), ATerm i_117 (ATerm), ATerm j_117 (ATerm), ATerm t)
{
  ATerm u_20 = t;
  int v_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(h_117, h_117, t);
      ;
      LocalPopChoice(v_20);
    }
  else
    {
      t = u_20;
      {
        ATerm x_20 = t;
        int y_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(j_117, j_117, h_117, t);
            ;
            LocalPopChoice(y_20);
          }
        else
          {
            t = x_20;
            {
              ATerm z_20 = t;
              int a_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(j_117, j_117, j_117, h_117, t);
                  ;
                  LocalPopChoice(a_21);
                }
              else
                {
                  t = z_20;
                  t = Rec_2_0(j_117, h_117, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm w_20 = NULL;
  ATerm b_21 = t;
  int c_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          w_20 = ATgetArgument(t, 0);
          {
            ATerm d_21 = ATgetArgument(t, 1);
          }
          {
            ATerm j_21 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_21);
      t = w_20;
    }
  else
    {
      t = b_21;
      if(match_cons(t, sym_SDefT_4))
        {
          w_20 = ATgetArgument(t, 0);
          {
            ATerm l_21 = ATgetArgument(t, 1);
          }
          {
            ATerm r_21 = ATgetArgument(t, 2);
          }
          {
            ATerm u_21 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = w_20;
    }
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm t_20 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      t_20 = ATgetArgument(t, 0);
      {
        ATerm y_21 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = t_20;
  t = map_1_0(n_3, t);
  return(t);
}
ATerm DistBinding_2_0 (ATerm p_131 (ATerm), ATerm q_131 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm e_21 = NULL,f_21 = NULL,g_21 = NULL;
  if(match_cons(t, sym__3))
    {
      e_21 = ATgetArgument(t, 0);
      f_21 = ATgetArgument(t, 1);
      g_21 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = e_21;
  {
    ATerm o_3 (ATerm t)
    {
      ATerm h_21 = NULL;
      h_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_21, g_21);
      t = p_131(t);
      return(t);
    }
    ATerm r_3 (ATerm t)
    {
      ATerm i_21 = NULL;
      i_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_21, f_21);
      t = p_131(t);
      return(t);
    }
    t = q_131(o_3, r_3, _id, t);
  }
  return(t);
}
ATerm s_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_22 = ATgetArgument(t, 0);
      if(((ATgetType(c_22) != AT_LIST) || !(ATisEmpty(c_22))))
        _fail(t);
      {
        ATerm d_22 = ATgetArgument(t, 1);
        if(((ATgetType(d_22) != AT_LIST) || !(ATisEmpty(d_22))))
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
  ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL,z_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_22 = ATgetArgument(t, 0);
      if(((ATgetType(e_22) == AT_LIST) && !(ATisEmpty(e_22))))
        {
          v_21 = ATgetFirst((ATermList) e_22);
          x_21 = (ATerm) ATgetNext((ATermList) e_22);
        }
      else
        _fail(t);
      {
        ATerm f_22 = ATgetArgument(t, 1);
        if(((ATgetType(f_22) == AT_LIST) && !(ATisEmpty(f_22))))
          {
            w_21 = ATgetFirst((ATermList) f_22);
            z_21 = (ATerm) ATgetNext((ATermList) f_22);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_21, w_21), (ATerm) ATmakeAppl(sym__2, x_21, z_21));
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm a_22 = NULL,b_22 = NULL;
  if(match_cons(t, sym__2))
    {
      a_22 = ATgetArgument(t, 0);
      b_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_22), a_22);
  return(t);
}
ATerm RnBinding_2_0 (ATerm j_131 (ATerm), ATerm k_131 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm k_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL,t_21 = NULL;
  if(match_cons(t, sym__2))
    {
      k_21 = ATgetArgument(t, 0);
      m_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_21;
  t = j_131(t);
  n_21 = t;
  t = map_1_0(new_0_0, t);
  o_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_21, o_21);
  t = genzip_4_0(s_3, t_3, v_3, _id, t);
  p_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_21, m_21);
  {
    ATerm h_22 = t;
    int j_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_22 = ATgetArgument(t, 0);
            ATerm q_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = p_21;
        {
          ATerm w_3 (ATerm t)
          {
            t = m_21;
            return(t);
          }
          t = at_end_1_0(w_3, t);
        }
        ;
        LocalPopChoice(j_22);
      }
    else
      {
        t = h_22;
        {
          ATerm r_8 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, p_21, m_21));
          if(match_cons(t, sym__2))
            {
              ATerm s_22 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) s_22) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              r_8 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_8;
          t = concat_0_0(t);
        }
      }
    q_21 = t;
    t = k_21;
    {
      ATerm x_3 (ATerm t)
      {
        t = o_21;
        return(t);
      }
      t = k_131(x_3, t);
      t_21 = t;
      t = (ATerm) ATmakeAppl(sym__3, t_21, m_21, q_21);
    }
  }
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm i_22 = NULL,k_22 = NULL,m_22 = NULL,n_22 = NULL,o_22 = NULL,r_22 = NULL;
  if(match_cons(t, sym__2))
    {
      m_22 = ATgetArgument(t, 0);
      n_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_22;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_22 = ATgetFirst((ATermList) t);
      r_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = o_22;
  if(match_cons(t, sym__2))
    {
      i_22 = ATgetArgument(t, 0);
      k_22 = ATgetArgument(t, 1);
      {
        ATerm t_22 = t;
        int u_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_22;
            if((m_22 != t))
              {
                _fail(t);
              }
            t = k_22;
            ;
            LocalPopChoice(u_22);
          }
        else
          {
            t = t_22;
            t = (ATerm) ATmakeAppl(sym__2, m_22, r_22);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, m_22, r_22);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm x_131 (ATerm), ATerm t)
{
  ATerm h_23 (ATerm t)
  {
    ATerm v_22 = t;
    int w_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_131(t);
        ;
        LocalPopChoice(w_22);
      }
    else
      {
        t = v_22;
        {
          ATerm x_8 = NULL,y_8 = NULL;
          ATerm y_3 (ATerm t)
          {
            ATerm z_8 = NULL;
            z_8 = t;
            t = (ATerm) ATmakeAppl(sym__2, z_8, not_null(y_8));
            t = h_23(t);
            return(t);
          }
          if(match_cons(t, sym__2))
            {
              if(((x_8 != NULL) && (x_8 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                x_8 = ATgetArgument(t, 0);
              if(((y_8 != NULL) && (y_8 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                y_8 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = not_null(x_8);
          t = SRTS_all(y_3, t);
        }
      }
    return(t);
  }
  t = h_23(t);
  return(t);
}
ATerm rename_4_0 (ATerm e_131 (ATerm (ATerm), ATerm), ATerm f_131 (ATerm), ATerm g_131 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm h_131 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm i_23 = NULL;
  i_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_23, (ATerm) ATempty);
  {
    ATerm j_23 (ATerm t)
    {
      ATerm z_3 (ATerm t)
      {
        ATerm x_22 = t;
        int y_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_9 = NULL,c_9 = NULL;
            ATerm a_4 (ATerm t)
            {
              ATerm f_9 = NULL;
              f_9 = t;
              t = (ATerm) ATmakeAppl(sym__2, f_9, not_null(c_9));
              t = lookup_0_0(t);
              return(t);
            }
            if(match_cons(t, sym__2))
              {
                if(((b_9 != NULL) && (b_9 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  b_9 = ATgetArgument(t, 0);
                if(((c_9 != NULL) && (c_9 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  c_9 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = not_null(b_9);
            t = e_131(a_4, t);
            ;
            LocalPopChoice(y_22);
          }
        else
          {
            t = x_22;
            t = RnBinding_2_0(f_131, h_131, t);
            t = DistBinding_2_0(j_23, g_131, t);
          }
        return(t);
      }
      t = env_alltd_1_0(z_3, t);
      return(t);
    }
    t = j_23(t);
  }
  return(t);
}
ATerm c_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_22 = ATgetArgument(t, 0);
      if(((ATgetType(z_22) != AT_LIST) || !(ATisEmpty(z_22))))
        _fail(t);
      {
        ATerm a_23 = ATgetArgument(t, 1);
        if(((ATgetType(a_23) != AT_LIST) || !(ATisEmpty(a_23))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm u_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_23 = ATgetArgument(t, 0);
      if(((ATgetType(b_23) == AT_LIST) && !(ATisEmpty(b_23))))
        {
          u_23 = ATgetFirst((ATermList) b_23);
          w_23 = (ATerm) ATgetNext((ATermList) b_23);
        }
      else
        _fail(t);
      {
        ATerm c_23 = ATgetArgument(t, 1);
        if(((ATgetType(c_23) == AT_LIST) && !(ATisEmpty(c_23))))
          {
            v_23 = ATgetFirst((ATermList) c_23);
            x_23 = (ATerm) ATgetNext((ATermList) c_23);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_23, v_23), (ATerm) ATmakeAppl(sym__2, w_23, x_23));
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm y_23 = NULL,z_23 = NULL;
  if(match_cons(t, sym__2))
    {
      y_23 = ATgetArgument(t, 0);
      z_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_23), y_23);
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm b_24 = NULL,d_24 = NULL,g_24 = NULL;
  if(match_cons(t, sym__2))
    {
      b_24 = ATgetArgument(t, 0);
      g_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_24;
  {
    ATerm d_23 = t;
    int e_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm f_23 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(e_23);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, g_24);
      }
    else
      {
        t = d_23;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm g_23 = ATgetArgument(t, 0);
            d_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, g_24, d_24);
      }
  }
  return(t);
}
ATerm i_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_23 = ATgetArgument(t, 0);
      if(((ATgetType(k_23) != AT_LIST) || !(ATisEmpty(k_23))))
        _fail(t);
      {
        ATerm l_23 = ATgetArgument(t, 1);
        if(((ATgetType(l_23) != AT_LIST) || !(ATisEmpty(l_23))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_23 = ATgetArgument(t, 0);
      if(((ATgetType(m_23) == AT_LIST) && !(ATisEmpty(m_23))))
        {
          m_24 = ATgetFirst((ATermList) m_23);
          o_24 = (ATerm) ATgetNext((ATermList) m_23);
        }
      else
        _fail(t);
      {
        ATerm n_23 = ATgetArgument(t, 1);
        if(((ATgetType(n_23) == AT_LIST) && !(ATisEmpty(n_23))))
          {
            n_24 = ATgetFirst((ATermList) n_23);
            p_24 = (ATerm) ATgetNext((ATermList) n_23);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_24, n_24), (ATerm) ATmakeAppl(sym__2, o_24, p_24));
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm q_24 = NULL,r_24 = NULL;
  if(match_cons(t, sym__2))
    {
      q_24 = ATgetArgument(t, 0);
      r_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_24), q_24);
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm t_24 = NULL,v_24 = NULL,w_24 = NULL;
  if(match_cons(t, sym__2))
    {
      t_24 = ATgetArgument(t, 0);
      w_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_24;
  {
    ATerm o_23 = t;
    int p_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm q_23 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(p_23);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, w_24);
      }
    else
      {
        t = o_23;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm r_23 = ATgetArgument(t, 0);
            v_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, w_24, v_24);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm c_117 (ATerm), ATerm t)
{
  ATerm s_23 = t;
  int t_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(c_117, _id, t);
      ;
      LocalPopChoice(t_23);
    }
  else
    {
      t = s_23;
      {
        ATerm a_24 = t;
        int c_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_4 (ATerm t)
            {
              ATerm k_9 = NULL,m_9 = NULL;
              k_9 = t;
              t = c_117(t);
              m_9 = t;
              t = (ATerm) ATmakeAppl(sym__2, k_9, m_9);
              t = genzip_4_0(c_4, e_4, f_4, g_4, t);
              return(t);
            }
            t = SDefT_4_0(_id, _id, b_4, _id, t);
            ;
            LocalPopChoice(c_24);
          }
        else
          {
            t = a_24;
            {
              ATerm h_4 (ATerm t)
              {
                ATerm p_9 = NULL,r_9 = NULL;
                p_9 = t;
                t = c_117(t);
                r_9 = t;
                t = (ATerm) ATmakeAppl(sym__2, p_9, r_9);
                t = genzip_4_0(i_4, j_4, k_4, l_4, t);
                return(t);
              }
              t = RDefT_4_0(_id, _id, h_4, _id, t);
            }
          }
      }
    }
  return(t);
}
ATerm DynamicRules_1_0 (ATerm w_105 (ATerm), ATerm t)
{
  ATerm a_25 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL;
  d_25 = t;
  if(match_cons(t, sym_DynamicRules_1))
    {
      b_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_25);
  a_25 = t;
  t = b_25;
  t = w_105(t);
  c_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, c_25), a_25);
  return(t);
}
ATerm RDefT_4_0 (ATerm n_105 (ATerm), ATerm o_105 (ATerm), ATerm p_105 (ATerm), ATerm q_105 (ATerm), ATerm t)
{
  ATerm g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL,p_25 = NULL;
  p_25 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      h_25 = ATgetArgument(t, 0);
      i_25 = ATgetArgument(t, 1);
      j_25 = ATgetArgument(t, 2);
      k_25 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_25);
  g_25 = t;
  t = h_25;
  t = n_105(t);
  l_25 = t;
  t = i_25;
  t = o_105(t);
  m_25 = t;
  t = j_25;
  t = p_105(t);
  n_25 = t;
  t = k_25;
  t = q_105(t);
  o_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDefT_4, l_25, m_25, n_25, o_25), g_25);
  return(t);
}
ATerm tboundin_3_0 (ATerm d_117 (ATerm), ATerm e_117 (ATerm), ATerm f_117 (ATerm), ATerm t)
{
  ATerm e_24 = t;
  int f_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(f_117, d_117, t);
      ;
      LocalPopChoice(f_24);
    }
  else
    {
      t = e_24;
      {
        ATerm h_24 = t;
        int i_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(f_117, f_117, f_117, d_117, t);
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
                  t = RDefT_4_0(f_117, f_117, f_117, d_117, t);
                  ;
                  LocalPopChoice(k_24);
                }
              else
                {
                  t = j_24;
                  t = DynamicRules_1_0(d_117, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm v_25 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_25);
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm l_24 = t;
  int s_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(s_24);
    }
  else
    {
      t = l_24;
      {
        ATerm x_25 = NULL,a_26 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            x_25 = ATgetArgument(t, 0);
            t = x_25;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm u_24 = t;
            int x_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm y_24 = ATgetArgument(t, 0);
                    ATerm z_24 = ATgetArgument(t, 1);
                    a_26 = ATgetArgument(t, 2);
                    {
                      ATerm e_25 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(x_24);
                t = a_26;
                t = map_1_0(o_4, t);
              }
            else
              {
                t = u_24;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm f_25 = ATgetArgument(t, 0);
                    ATerm q_25 = ATgetArgument(t, 1);
                    a_26 = ATgetArgument(t, 2);
                    {
                      ATerm r_25 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = a_26;
                t = map_1_0(t_4, t);
              }
          }
      }
    }
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm i_26 = NULL;
  ATerm s_25 = t;
  int t_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_26 = ATgetArgument(t, 0);
          {
            ATerm u_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_25);
      t = i_26;
    }
  else
    {
      t = s_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_26;
    }
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm p_26 = NULL;
  ATerm w_25 = t;
  int y_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_26 = ATgetArgument(t, 0);
          {
            ATerm z_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_25);
      t = p_26;
    }
  else
    {
      t = w_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_26;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(m_4, n_4, tboundin_3_0, t);
  return(t);
}
ATerm union_1_0 (ATerm r_126 (ATerm), ATerm t)
{
  ATerm s_26 = NULL,t_26 = NULL;
  if(match_cons(t, sym__2))
    {
      s_26 = ATgetArgument(t, 0);
      t_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_26;
  {
    ATerm w_26 (ATerm t)
    {
      ATerm b_26 = t;
      int c_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = t_26;
          ;
          LocalPopChoice(c_26);
        }
      else
        {
          t = b_26;
          {
            ATerm d_26 = t;
            int e_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_9 = NULL,v_9 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    u_9 = ATgetFirst((ATermList) t);
                    v_9 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = t_26;
                {
                  ATerm x_4 (ATerm t)
                  {
                    ATerm w_9 = NULL;
                    w_9 = t;
                    t = (ATerm) ATmakeAppl(sym__2, u_9, w_9);
                    t = r_126(t);
                    return(t);
                  }
                  t = fetch_1_0(x_4, t);
                  t = v_9;
                  t = w_26(t);
                }
                ;
                LocalPopChoice(e_26);
              }
            else
              {
                t = d_26;
                t = Cons_2_0(_id, w_26, t);
              }
          }
        }
      return(t);
    }
    t = w_26(t);
  }
  return(t);
}
ATerm diff_1_0 (ATerm m_126 (ATerm), ATerm t)
{
  ATerm a_27 = NULL,b_27 = NULL;
  if(match_cons(t, sym__2))
    {
      a_27 = ATgetArgument(t, 0);
      b_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_27;
  {
    ATerm d_27 (ATerm t)
    {
      ATerm f_26 = t;
      int g_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(g_26);
        }
      else
        {
          t = f_26;
          {
            ATerm h_26 = t;
            int j_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_10 = NULL,b_10 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    a_10 = ATgetFirst((ATermList) t);
                    b_10 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = b_27;
                {
                  ATerm y_4 (ATerm t)
                  {
                    ATerm c_10 = NULL;
                    c_10 = t;
                    t = (ATerm) ATmakeAppl(sym__2, a_10, c_10);
                    t = m_126(t);
                    return(t);
                  }
                  t = fetch_1_0(y_4, t);
                  t = b_10;
                  t = d_27(t);
                }
                ;
                LocalPopChoice(j_26);
              }
            else
              {
                t = h_26;
                t = Cons_2_0(_id, d_27, t);
              }
          }
        }
      return(t);
    }
    t = d_27(t);
  }
  return(t);
}
ATerm a_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_26 = ATgetArgument(t, 0);
      if(((ATgetType(k_26) != AT_LIST) || !(ATisEmpty(k_26))))
        _fail(t);
      {
        ATerm l_26 = ATgetArgument(t, 1);
        if(((ATgetType(l_26) != AT_LIST) || !(ATisEmpty(l_26))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm p_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_26 = ATgetArgument(t, 0);
      if(((ATgetType(m_26) == AT_LIST) && !(ATisEmpty(m_26))))
        {
          p_27 = ATgetFirst((ATermList) m_26);
          r_27 = (ATerm) ATgetNext((ATermList) m_26);
        }
      else
        _fail(t);
      {
        ATerm n_26 = ATgetArgument(t, 1);
        if(((ATgetType(n_26) == AT_LIST) && !(ATisEmpty(n_26))))
          {
            q_27 = ATgetFirst((ATermList) n_26);
            s_27 = (ATerm) ATgetNext((ATermList) n_26);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_27, q_27), (ATerm) ATmakeAppl(sym__2, r_27, s_27));
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm t_27 = NULL,u_27 = NULL;
  if(match_cons(t, sym__2))
    {
      t_27 = ATgetArgument(t, 0);
      u_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_27), t_27);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL,o_27 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm o_26 = ATgetFirst((ATermList) t);
      if(match_cons(o_26, sym__2))
        {
          f_27 = ATgetArgument(o_26, 0);
          g_27 = ATgetArgument(o_26, 1);
        }
      else
        _fail(t);
      h_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(g_27);
  if(match_cons(t, sym__2))
    {
      k_27 = ATgetArgument(t, 0);
      l_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(f_27);
  if(match_cons(t, sym__2))
    {
      if((k_27 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      m_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_27, l_27);
  t = genzip_4_0(a_5, b_5, d_5, _id, t);
  o_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_27, h_27);
  {
    ATerm q_26 = t;
    int r_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_26 = ATgetArgument(t, 0);
            ATerm v_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = o_27;
        {
          ATerm e_5 (ATerm t)
          {
            t = h_27;
            return(t);
          }
          t = at_end_1_0(e_5, t);
        }
        ;
        LocalPopChoice(r_26);
      }
    else
      {
        t = q_26;
        {
          ATerm i_10 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, o_27, h_27));
          if(match_cons(t, sym__2))
            {
              ATerm x_26 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) x_26) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              i_10 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = i_10;
          t = concat_0_0(t);
        }
      }
  }
  return(t);
}
ATerm while_not_2_0 (ATerm n_135 (ATerm), ATerm o_135 (ATerm), ATerm t)
{
  ATerm z_27 (ATerm t)
  {
    ATerm y_26 = t;
    int z_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_135(t);
        ;
        LocalPopChoice(z_26);
      }
    else
      {
        t = y_26;
        t = o_135(t);
        t = z_27(t);
      }
    return(t);
  }
  t = z_27(t);
  return(t);
}
ATerm for_3_0 (ATerm q_135 (ATerm), ATerm r_135 (ATerm), ATerm s_135 (ATerm), ATerm t)
{
  t = q_135(t);
  t = while_not_2_0(r_135, s_135, t);
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm g_28 = NULL;
  g_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, g_28);
  return(t);
}
ATerm h_5 (ATerm t)
{
  t = _2_0(_id, k_5, t);
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm c_27 = t;
  int e_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(_id, l_5, t);
      ;
      LocalPopChoice(e_27);
    }
  else
    {
      t = c_27;
      {
        ATerm q_28 = NULL,r_28 = NULL,u_28 = NULL,v_28 = NULL;
        if(match_cons(t, sym__2))
          {
            q_28 = ATgetArgument(t, 0);
            r_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_28;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_28 = ATgetFirst((ATermList) t);
            v_28 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_28), u_28), v_28);
      }
    }
  return(t);
}
ATerm k_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm i_27 = t;
  int j_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_28 = NULL,j_28 = NULL,k_28 = NULL,m_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_28 = ATgetFirst((ATermList) t);
          m_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_28;
      if(match_cons(t, sym__2))
        {
          j_28 = ATgetArgument(t, 0);
          k_28 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = k_28;
      if((j_28 != t))
        {
          _fail(t);
        }
      t = m_28;
      ;
      LocalPopChoice(j_27);
    }
  else
    {
      t = i_27;
      t = UfDecompose_0_0(t);
    }
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm z_28 = NULL;
  if(match_cons(t, sym__2))
    {
      z_28 = ATgetArgument(t, 0);
      if((z_28 != ATgetArgument(t, 1)))
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
  ATerm n_27 = t;
  int v_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(f_5, h_5, i_5, t);
      ;
      LocalPopChoice(v_27);
    }
  else
    {
      t = n_27;
      t = diff_1_0(n_5, t);
    }
  return(t);
}
ATerm p_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm q_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_5 (ATerm t)
{
  t = union_1_0(s_5, t);
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm v_10 = NULL;
  if(match_cons(t, sym__2))
    {
      v_10 = ATgetArgument(t, 0);
      if((v_10 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm t_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_5 (ATerm t)
{
  t = union_1_0(z_5, t);
  return(t);
}
ATerm z_5 (ATerm t)
{
  ATerm d_11 = NULL;
  if(match_cons(t, sym__2))
    {
      d_11 = ATgetArgument(t, 0);
      if((d_11 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm h_133 (ATerm), ATerm i_133 (ATerm), ATerm j_133 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm f_29 (ATerm t)
  {
    ATerm w_27 = t;
    int x_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_133(t);
        ;
        LocalPopChoice(x_27);
      }
    else
      {
        t = w_27;
        {
          ATerm y_27 = t;
          int a_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_29 = NULL,c_29 = NULL,o_10 = NULL,q_10 = NULL;
              a_29 = t;
              t = i_133(t);
              c_29 = t;
              t = a_29;
              {
                ATerm o_5 (ATerm t)
                {
                  ATerm k_10 = NULL;
                  t = f_29(t);
                  k_10 = t;
                  t = (ATerm) ATmakeAppl(sym__2, k_10, c_29);
                  t = diff_0_0(t);
                  return(t);
                }
                t = j_133(o_5, f_29, p_5, t);
                o_10 = t;
                t = SSL_explode_term(o_10);
                if(match_cons(t, sym__2))
                  {
                    ATerm b_28 = ATgetArgument(t, 0);
                    q_10 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = q_10;
                t = foldr_3_0(q_5, r_5, _id, t);
              }
              ;
              LocalPopChoice(a_28);
            }
          else
            {
              t = y_27;
              {
                ATerm x_10 = NULL,y_10 = NULL;
                x_10 = t;
                t = SSL_explode_term(x_10);
                if(match_cons(t, sym__2))
                  {
                    ATerm c_28 = ATgetArgument(t, 0);
                    y_10 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = y_10;
                t = foldr_3_0(t_5, y_5, f_29, t);
              }
            }
        }
      }
    return(t);
  }
  t = f_29(t);
  return(t);
}
ATerm a_6 (ATerm t)
{
  ATerm x_29 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      x_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, x_29);
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm d_28 = t;
  int e_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(e_28);
    }
  else
    {
      t = d_28;
      {
        ATerm z_29 = NULL,b_30 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            z_29 = ATgetArgument(t, 0);
            t = z_29;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm f_28 = t;
            int h_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm l_28 = ATgetArgument(t, 0);
                    ATerm n_28 = ATgetArgument(t, 1);
                    b_30 = ATgetArgument(t, 2);
                    {
                      ATerm o_28 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(h_28);
                t = b_30;
                t = map_1_0(c_6, t);
              }
            else
              {
                t = f_28;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm p_28 = ATgetArgument(t, 0);
                    ATerm s_28 = ATgetArgument(t, 1);
                    b_30 = ATgetArgument(t, 2);
                    {
                      ATerm t_28 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = b_30;
                t = map_1_0(d_6, t);
              }
          }
      }
    }
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm l_30 = NULL;
  ATerm w_28 = t;
  int x_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_30 = ATgetArgument(t, 0);
          {
            ATerm y_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_28);
      t = l_30;
    }
  else
    {
      t = w_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_30;
    }
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm s_30 = NULL;
  ATerm b_29 = t;
  int d_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_30 = ATgetArgument(t, 0);
          {
            ATerm e_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_29);
      t = s_30;
    }
  else
    {
      t = b_29;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_30;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm o_29 = NULL,u_29 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      u_29 = ATgetArgument(t, 0);
      t = u_29;
      if(match_cons(t, sym_Rule_3))
        {
          o_29 = ATgetArgument(t, 0);
          {
            ATerm g_29 = ATgetArgument(t, 1);
          }
          {
            ATerm h_29 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = o_29;
      t = free_vars_3_0(a_6, b_6, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          u_29 = ATgetArgument(t, 0);
          {
            ATerm i_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = u_29;
    }
  return(t);
}
ATerm Var_1_0 (ATerm f_103 (ATerm), ATerm t)
{
  ATerm w_30 = NULL,x_30 = NULL,y_30 = NULL,z_30 = NULL;
  z_30 = t;
  if(match_cons(t, sym_Var_1))
    {
      x_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_30);
  w_30 = t;
  t = x_30;
  t = f_103(t);
  y_30 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, y_30), w_30);
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm j_29 = t;
  int k_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(k_29);
    }
  else
    {
      t = j_29;
      {
        ATerm m_31 = NULL;
        ATerm l_29 = t;
        int m_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SDefT_4))
              {
                ATerm n_29 = ATgetArgument(t, 0);
                ATerm p_29 = ATgetArgument(t, 1);
                m_31 = ATgetArgument(t, 2);
                {
                  ATerm q_29 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            LocalPopChoice(m_29);
            t = m_31;
            t = map_1_0(i_6, t);
          }
        else
          {
            t = l_29;
            if(match_cons(t, sym_RDefT_4))
              {
                ATerm r_29 = ATgetArgument(t, 0);
                ATerm s_29 = ATgetArgument(t, 1);
                m_31 = ATgetArgument(t, 2);
                {
                  ATerm t_29 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            t = m_31;
            t = map_1_0(j_6, t);
          }
      }
    }
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm r_31 = NULL;
  ATerm v_29 = t;
  int w_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_31 = ATgetArgument(t, 0);
          {
            ATerm y_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_29);
      t = r_31;
    }
  else
    {
      t = v_29;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_31;
    }
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm x_31 = NULL;
  ATerm a_30 = t;
  int c_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_31 = ATgetArgument(t, 0);
          {
            ATerm d_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_30);
      t = x_31;
    }
  else
    {
      t = a_30;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_31;
    }
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm e_30 = t;
  int f_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind1_0_0(t);
      ;
      LocalPopChoice(f_30);
    }
  else
    {
      t = e_30;
      {
        ATerm d_32 = NULL,e_32 = NULL;
        ATerm g_30 = t;
        int h_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SDef_3))
              {
                ATerm i_30 = ATgetArgument(t, 0);
                e_32 = ATgetArgument(t, 1);
                {
                  ATerm j_30 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            LocalPopChoice(h_30);
            t = e_32;
            t = map_1_0(l_6, t);
          }
        else
          {
            t = g_30;
            {
              ATerm k_30 = t;
              int m_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      d_32 = ATgetArgument(t, 0);
                      {
                        ATerm n_30 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(m_30);
                  t = (ATerm) ATinsert(ATempty, d_32);
                }
              else
                {
                  t = k_30;
                  {
                    ATerm o_30 = t;
                    int p_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_SDefT_4))
                          {
                            ATerm q_30 = ATgetArgument(t, 0);
                            e_32 = ATgetArgument(t, 1);
                            {
                              ATerm r_30 = ATgetArgument(t, 2);
                            }
                            {
                              ATerm t_30 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(p_30);
                        t = e_32;
                        t = map_1_0(m_6, t);
                      }
                    else
                      {
                        t = o_30;
                        if(match_cons(t, sym_RDefT_4))
                          {
                            ATerm u_30 = ATgetArgument(t, 0);
                            e_32 = ATgetArgument(t, 1);
                            {
                              ATerm v_30 = ATgetArgument(t, 2);
                            }
                            {
                              ATerm a_31 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        t = e_32;
                        t = map_1_0(o_6, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm k_32 = NULL;
  ATerm b_31 = t;
  int c_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_32 = ATgetArgument(t, 0);
          {
            ATerm d_31 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_31);
      t = k_32;
    }
  else
    {
      t = b_31;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_32;
    }
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm t_32 = NULL;
  ATerm e_31 = t;
  int f_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_32 = ATgetArgument(t, 0);
          {
            ATerm g_31 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_31);
      t = t_32;
    }
  else
    {
      t = e_31;
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
ATerm o_6 (ATerm t)
{
  ATerm d_33 = NULL;
  ATerm h_31 = t;
  int i_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_33 = ATgetArgument(t, 0);
          {
            ATerm j_31 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_31);
      t = d_33;
    }
  else
    {
      t = h_31;
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
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, e_6, tboundin_3_0, tpaste_1_0, t);
  t = rename_4_0(SVar_1_0, k_6, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm p_6 (ATerm t)
{
  t = term_k_31;
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm v_33 = NULL,w_33 = NULL;
  if(match_cons(t, sym__2))
    {
      v_33 = ATgetArgument(t, 0);
      w_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_31 = t;
    int n_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(v_33, w_33);
        ;
        LocalPopChoice(n_31);
      }
    else
      {
        t = l_31;
        t = SSL_addr(v_33, w_33);
      }
  }
  return(t);
}
ATerm r_6 (ATerm t)
{
  t = term_o_31;
  return(t);
}
ATerm s_6 (ATerm t)
{
  t = term_k_31;
  return(t);
}
ATerm t_6 (ATerm t)
{
  ATerm b_34 = NULL,c_34 = NULL;
  if(match_cons(t, sym__2))
    {
      b_34 = ATgetArgument(t, 0);
      c_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_31 = t;
    int q_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(b_34, c_34);
        ;
        LocalPopChoice(q_31);
      }
    else
      {
        t = p_31;
        t = SSL_addr(b_34, c_34);
      }
  }
  return(t);
}
ATerm u_6 (ATerm t)
{
  t = term_o_31;
  return(t);
}
ATerm v_6 (ATerm t)
{
  t = term_e_16;
  return(t);
}
ATerm InlineCall0_0_0 (ATerm t)
{
  ATerm j_33 = NULL,k_33 = NULL,l_33 = NULL,m_33 = NULL,n_33 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL,t_33 = NULL,u_33 = NULL,g_11 = NULL;
  j_33 = t;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm s_31 = ATgetArgument(t, 0);
      if(match_cons(s_31, sym_SVar_1))
        {
          k_33 = ATgetArgument(s_31, 0);
        }
      else
        _fail(t);
      {
        ATerm t_31 = ATgetArgument(t, 1);
        if(((ATgetType(t_31) != AT_LIST) || !(ATisEmpty(t_31))))
          _fail(t);
      }
      {
        ATerm u_31 = ATgetArgument(t, 2);
        if(((ATgetType(u_31) != AT_LIST) || !(ATisEmpty(u_31))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("InlineCall0", 0, ATtrue)), j_33);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_11 = ATgetFirst((ATermList) t);
      {
        ATerm v_31 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = g_11;
  if(match_cons(t, sym_Defined_2))
    {
      ATerm w_31 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_31) != ATmakeSymbol("g_0", 0, ATtrue)))
        _fail(t);
      l_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_33;
  t = strename_0_0(t);
  if(match_cons(t, sym_SDefT_4))
    {
      if((k_33 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      m_33 = ATgetArgument(t, 1);
      n_33 = ATgetArgument(t, 2);
      o_33 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = m_33;
  t = foldr_3_0(p_6, q_6, r_6, t);
  p_33 = t;
  t = n_33;
  t = foldr_3_0(s_6, t_6, u_6, t);
  q_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_33, q_33);
  {
    ATerm y_31 = t;
    int z_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(p_33, q_33);
        ;
        LocalPopChoice(z_31);
      }
    else
      {
        t = y_31;
        t = SSL_addr(p_33, q_33);
      }
    t_33 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_33, term_k_31);
    {
      ATerm a_32 = t;
      int b_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_gti(t_33, (ATerm) ATmakeInt(0));
          ;
          LocalPopChoice(b_32);
        }
      else
        {
          t = a_32;
          t = SSL_gtr(t_33, (ATerm) ATmakeInt(0));
        }
      t = (ATerm) ATmakeAppl(sym__2, t_33, term_k_31);
      t = new_0_0(t);
      u_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, k_33), (ATerm)ATempty, (ATerm) ATempty), term_e_17);
      t = assert_1_0(v_6, t);
      t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, u_33, m_33, n_33, o_33)), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, u_33), (ATerm)ATempty, (ATerm) ATempty));
    }
  }
  return(t);
}
ATerm w_6 (ATerm t)
{
  t = term_k_31;
  return(t);
}
ATerm x_6 (ATerm t)
{
  ATerm u_11 = NULL,v_11 = NULL;
  if(match_cons(t, sym__2))
    {
      u_11 = ATgetArgument(t, 0);
      v_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_32 = t;
    int f_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(u_11, v_11);
        ;
        LocalPopChoice(f_32);
      }
    else
      {
        t = c_32;
        t = SSL_addr(u_11, v_11);
      }
  }
  return(t);
}
ATerm occurrences_1_0 (ATerm y_126 (ATerm), ATerm t)
{
  ATerm i_11 = NULL,j_11 = NULL,k_11 = NULL,q_11 = NULL;
  i_11 = t;
  {
    ATerm g_32 = t;
    int h_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_126(t);
        t = term_o_31;
        ;
        LocalPopChoice(h_32);
      }
    else
      {
        t = g_32;
        t = term_k_31;
      }
    j_11 = t;
    t = SSL_explode_term(i_11);
    if(match_cons(t, sym__2))
      {
        ATerm i_32 = ATgetArgument(t, 0);
        q_11 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = q_11;
    {
      ATerm y_6 (ATerm t)
      {
        t = occurrences_1_0(y_126, t);
        return(t);
      }
      t = foldr_3_0(w_6, x_6, y_6, t);
      k_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_11, k_11);
      {
        ATerm j_32 = t;
        int l_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(j_11, k_11);
            ;
            LocalPopChoice(l_32);
          }
        else
          {
            t = j_32;
            t = SSL_addr(j_11, k_11);
          }
      }
    }
  }
  return(t);
}
ATerm local_inlinable_1_0 (ATerm h_116 (ATerm), ATerm t)
{
  ATerm k_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      k_34 = ATgetArgument(t, 0);
      {
        ATerm m_32 = ATgetArgument(t, 1);
      }
      {
        ATerm n_32 = ATgetArgument(t, 2);
      }
      l_34 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  m_34 = t;
  t = l_34;
  {
    ATerm o_32 = t;
    if((PushChoice() == 0))
      {
        ATerm z_6 (ATerm t)
        {
          if(match_cons(t, sym_CallT_3))
            {
              ATerm p_32 = ATgetArgument(t, 0);
              if(match_cons(p_32, sym_SVar_1))
                {
                  if((k_34 != ATgetArgument(p_32, 0)))
                    {
                      _fail(ATgetArgument(p_32, 0));
                    }
                }
              else
                _fail(t);
              {
                ATerm q_32 = ATgetArgument(t, 1);
              }
              {
                ATerm r_32 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(z_6, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_32;
      }
    t = h_116(t);
    {
      ATerm a_7 (ATerm t)
      {
        if(match_cons(t, sym_CallT_3))
          {
            ATerm s_32 = ATgetArgument(t, 0);
            if(match_cons(s_32, sym_SVar_1))
              {
                if((k_34 != ATgetArgument(s_32, 0)))
                  {
                    _fail(ATgetArgument(s_32, 0));
                  }
              }
            else
              _fail(t);
            {
              ATerm u_32 = ATgetArgument(t, 1);
            }
            {
              ATerm v_32 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        return(t);
      }
      t = occurrences_1_0(a_7, t);
      n_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_34, term_o_31);
      t = leq_0_0(t);
      t = m_34;
    }
  }
  return(t);
}
ATerm b_7 (ATerm t)
{
  t = term_e_16;
  return(t);
}
ATerm UndefineSDef_0_0 (ATerm t)
{
  ATerm o_34 = NULL,p_34 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      o_34 = ATgetArgument(t, 0);
      {
        ATerm w_32 = ATgetArgument(t, 1);
      }
      {
        ATerm x_32 = ATgetArgument(t, 2);
      }
      {
        ATerm y_32 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  p_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, o_34), (ATerm)ATempty, (ATerm) ATempty), term_e_17);
  t = assert_1_0(b_7, t);
  t = p_34;
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm s_34 = NULL,t_34 = NULL,v_34 = NULL;
  if(match_cons(t, sym__2))
    {
      s_34 = ATgetArgument(t, 0);
      t_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_34, t_34);
  {
    ATerm z_32 = t;
    int a_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_11 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm b_33 = ATgetArgument(t, 0);
            ATerm c_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(s_34, t_34);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm e_33 = ATgetFirst((ATermList) t);
            x_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = x_11;
        ;
        LocalPopChoice(a_33);
      }
    else
      {
        t = z_32;
        t = (ATerm) ATempty;
      }
    v_34 = t;
    t = SSL_table_put(s_34, t_34, v_34);
    t = (ATerm) ATmakeAppl(sym__2, s_34, t_34);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm l_130 (ATerm), ATerm t)
{
  ATerm f_35 = NULL,h_35 = NULL,j_35 = NULL,l_35 = NULL;
  f_35 = t;
  t = l_130(t);
  h_35 = t;
  {
    ATerm f_33 = t;
    int g_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(h_35, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(g_33);
      }
    else
      {
        t = f_33;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_35 = ATgetFirst((ATermList) t);
        j_35 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(h_35, (ATerm)ATmakeAppl(sym_Scopes_0), j_35);
    t = l_35;
    {
      ATerm d_7 (ATerm t)
      {
        ATerm m_35 = NULL;
        m_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_35, m_35);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(d_7, t);
      t = f_35;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm j_121 (ATerm), ATerm k_121 (ATerm), ATerm t)
{
  ATerm h_33 = t;
  int i_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_121(t);
      t = k_121(t);
      ;
      LocalPopChoice(i_33);
    }
  else
    {
      t = h_33;
      t = k_121(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm k_130 (ATerm), ATerm t)
{
  ATerm r_35 = NULL,t_35 = NULL,u_35 = NULL;
  r_35 = t;
  t = k_130(t);
  t_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_35, term_r_33);
  {
    ATerm s_33 = t;
    int x_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_33 = ATgetArgument(t, 0);
            ATerm z_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(t_35, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(x_33);
      }
    else
      {
        t = s_33;
        t = (ATerm) ATempty;
      }
    u_35 = t;
    t = SSL_table_put(t_35, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(u_35), (ATerm) ATempty));
    t = r_35;
  }
  return(t);
}
ATerm scope_2_0 (ATerm m_130 (ATerm), ATerm n_130 (ATerm), ATerm t)
{
  t = begin_scope_1_0(m_130, t);
  {
    ATerm e_7 (ATerm t)
    {
      t = end_scope_1_0(m_130, t);
      return(t);
    }
    t = restore_always_2_0(n_130, e_7, t);
  }
  return(t);
}
ATerm f_7 (ATerm t)
{
  t = term_e_16;
  return(t);
}
ATerm h_7 (ATerm t)
{
  t = term_a_34;
  return(t);
}
ATerm m_7 (ATerm t)
{
  ATerm d_34 = t;
  int e_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = InlineCall0_0_0(t);
      ;
      LocalPopChoice(e_34);
    }
  else
    {
      t = d_34;
      t = InlineCall_0_0(t);
    }
  return(t);
}
ATerm inline_sdef_0_0 (ATerm t)
{
  ATerm g_7 (ATerm t)
  {
    ATerm j_7 (ATerm t)
    {
      ATerm f_34 = t;
      int g_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = UndefineSDef_0_0(t);
          ;
          LocalPopChoice(g_34);
        }
      else
        {
          t = f_34;
          {
            ATerm h_34 = t;
            int i_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_36 = NULL,f_36 = NULL;
                if(match_cons(t, sym_Let_2))
                  {
                    e_36 = ATgetArgument(t, 0);
                    f_36 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = e_36;
                {
                  ATerm k_7 (ATerm t)
                  {
                    ATerm l_7 (ATerm t)
                    {
                      t = f_36;
                      return(t);
                    }
                    t = local_inlinable_1_0(l_7, t);
                    t = AddSDef_0_0(t);
                    return(t);
                  }
                  t = map_1_0(k_7, t);
                  t = (ATerm) ATmakeAppl(sym_Let_2, e_36, f_36);
                }
                ;
                LocalPopChoice(i_34);
              }
            else
              {
                t = h_34;
                t = repeat_1_0(m_7, t);
              }
          }
        }
      t = SRTS_all(inline_sdef_0_0, t);
      return(t);
    }
    t = scope_2_0(h_7, j_7, t);
    return(t);
  }
  t = scope_2_0(f_7, g_7, t);
  return(t);
}
ATerm assert_1_0 (ATerm o_130 (ATerm), ATerm t)
{
  ATerm j_36 = NULL,k_36 = NULL,l_36 = NULL,m_36 = NULL,o_36 = NULL;
  if(match_cons(t, sym__2))
    {
      j_36 = ATgetArgument(t, 0);
      k_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_130(t);
  l_36 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_36, j_36, k_36);
  t = table_push_0_0(t);
  {
    ATerm j_34 = t;
    int q_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(l_36, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(q_34);
      }
    else
      {
        t = j_34;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_36 = ATgetFirst((ATermList) t);
        o_36 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(l_36, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(o_36), (ATerm) ATinsert(CheckATermList(m_36), j_36)));
    t = (ATerm) ATmakeAppl(sym__2, j_36, k_36);
  }
  return(t);
}
ATerm n_7 (ATerm t)
{
  t = term_e_16;
  return(t);
}
ATerm o_7 (ATerm t)
{
  t = term_a_34;
  return(t);
}
ATerm AddSDef_0_0 (ATerm t)
{
  ATerm p_36 = NULL,r_36 = NULL,t_36 = NULL;
  p_36 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      r_36 = ATgetArgument(t, 0);
      {
        ATerm r_34 = ATgetArgument(t, 1);
      }
      {
        ATerm u_34 = ATgetArgument(t, 2);
      }
      {
        ATerm w_34 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, r_36), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_x_34, p_36));
  t = assert_1_0(n_7, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, r_36), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_y_34, p_36));
  t = assert_1_0(o_7, t);
  t = t_36;
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm z_34 = t;
  if((PushChoice() == 0))
    {
      ATerm v_36 = NULL,x_36 = NULL;
      if(match_cons(t, sym__2))
        {
          v_36 = ATgetArgument(t, 0);
          x_36 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm a_35 = t;
        int b_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(v_36, x_36);
            ;
            LocalPopChoice(b_35);
          }
        else
          {
            t = a_35;
            t = SSL_gtr(v_36, x_36);
          }
        t = (ATerm) ATmakeAppl(sym__2, v_36, x_36);
      }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = z_34;
    }
  return(t);
}
ATerm foldr_3_0 (ATerm f_129 (ATerm), ATerm g_129 (ATerm), ATerm h_129 (ATerm), ATerm t)
{
  ATerm c_35 = t;
  int d_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = f_129(t);
      ;
      LocalPopChoice(d_35);
    }
  else
    {
      t = c_35;
      {
        ATerm d_37 = NULL,f_37 = NULL,i_37 = NULL,j_37 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_37 = ATgetFirst((ATermList) t);
            f_37 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = d_37;
        t = h_129(t);
        i_37 = t;
        t = f_37;
        t = foldr_3_0(f_129, g_129, h_129, t);
        j_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_37, j_37);
        t = g_129(t);
      }
    }
  return(t);
}
ATerm p_7 (ATerm t)
{
  t = term_o_31;
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm d_12 = NULL,e_12 = NULL;
  if(match_cons(t, sym__2))
    {
      d_12 = ATgetArgument(t, 0);
      e_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_35 = t;
    int g_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(d_12, e_12);
        ;
        LocalPopChoice(g_35);
      }
    else
      {
        t = e_35;
        t = SSL_addr(d_12, e_12);
      }
  }
  return(t);
}
ATerm t_7 (ATerm t)
{
  t = term_o_31;
  return(t);
}
ATerm w_7 (ATerm t)
{
  ATerm k_12 = NULL,l_12 = NULL;
  if(match_cons(t, sym__2))
    {
      k_12 = ATgetArgument(t, 0);
      l_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_35 = t;
    int k_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(k_12, l_12);
        ;
        LocalPopChoice(k_35);
      }
    else
      {
        t = i_35;
        t = SSL_addr(k_12, l_12);
      }
  }
  return(t);
}
ATerm term_size_0_0 (ATerm t)
{
  ATerm n_35 = t;
  int o_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_11 = NULL,z_11 = NULL;
      y_11 = t;
      t = SSL_explode_term(y_11);
      if(match_cons(t, sym__2))
        {
          ATerm p_35 = ATgetArgument(t, 0);
          z_11 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = z_11;
      t = foldr_3_0(p_7, r_7, term_size_0_0, t);
      ;
      LocalPopChoice(o_35);
    }
  else
    {
      t = n_35;
      {
        ATerm t_37 (ATerm t)
        {
          ATerm f_12 = NULL,g_12 = NULL;
          f_12 = t;
          t = SSL_explode_term(f_12);
          if(match_cons(t, sym__2))
            {
              ATerm q_35 = ATgetArgument(t, 0);
              g_12 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = g_12;
          t = foldr_3_0(t_7, w_7, t_37, t);
          return(t);
        }
        t = t_37(t);
      }
    }
  return(t);
}
ATerm GuardedLChoice_3_0 (ATerm j_107 (ATerm), ATerm k_107 (ATerm), ATerm l_107 (ATerm), ATerm t)
{
  ATerm u_37 = NULL,v_37 = NULL,w_37 = NULL,x_37 = NULL,y_37 = NULL,z_37 = NULL,a_38 = NULL,b_38 = NULL;
  b_38 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      v_37 = ATgetArgument(t, 0);
      w_37 = ATgetArgument(t, 1);
      x_37 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_38);
  u_37 = t;
  t = v_37;
  t = j_107(t);
  y_37 = t;
  t = w_37;
  t = k_107(t);
  z_37 = t;
  t = x_37;
  t = l_107(t);
  a_38 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, y_37, z_37, a_38), u_37);
  return(t);
}
ATerm LChoice_2_0 (ATerm f_107 (ATerm), ATerm g_107 (ATerm), ATerm t)
{
  ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL,j_38 = NULL;
  j_38 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      f_38 = ATgetArgument(t, 0);
      g_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_38);
  e_38 = t;
  t = f_38;
  t = f_107(t);
  h_38 = t;
  t = g_38;
  t = g_107(t);
  i_38 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, h_38, i_38), e_38);
  return(t);
}
ATerm Choice_2_0 (ATerm d_106 (ATerm), ATerm e_106 (ATerm), ATerm t)
{
  ATerm o_38 = NULL,p_38 = NULL,q_38 = NULL,t_38 = NULL,u_38 = NULL,v_38 = NULL;
  v_38 = t;
  if(match_cons(t, sym_Choice_2))
    {
      p_38 = ATgetArgument(t, 0);
      q_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_38);
  o_38 = t;
  t = p_38;
  t = d_106(t);
  t_38 = t;
  t = q_38;
  t = e_106(t);
  u_38 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, t_38, u_38), o_38);
  return(t);
}
ATerm Match_1_0 (ATerm w_106 (ATerm), ATerm t)
{
  ATerm a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL;
  d_39 = t;
  if(match_cons(t, sym_Match_1))
    {
      b_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_39);
  a_39 = t;
  t = b_39;
  t = w_106(t);
  c_39 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, c_39), a_39);
  return(t);
}
ATerm Seq_2_0 (ATerm d_107 (ATerm), ATerm e_107 (ATerm), ATerm t)
{
  ATerm h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL,m_39 = NULL;
  m_39 = t;
  if(match_cons(t, sym_Seq_2))
    {
      i_39 = ATgetArgument(t, 0);
      j_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_39);
  h_39 = t;
  t = i_39;
  t = d_107(t);
  k_39 = t;
  t = j_39;
  t = e_107(t);
  l_39 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, k_39, l_39), h_39);
  return(t);
}
ATerm Scope_2_0 (ATerm z_106 (ATerm), ATerm a_107 (ATerm), ATerm t)
{
  ATerm p_39 = NULL,q_39 = NULL,s_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL;
  w_39 = t;
  if(match_cons(t, sym_Scope_2))
    {
      q_39 = ATgetArgument(t, 0);
      s_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_39);
  p_39 = t;
  t = q_39;
  t = z_106(t);
  u_39 = t;
  t = s_39;
  t = a_107(t);
  v_39 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, u_39, v_39), p_39);
  return(t);
}
ATerm Build_1_0 (ATerm x_106 (ATerm), ATerm t)
{
  ATerm z_39 = NULL,a_40 = NULL,b_40 = NULL,c_40 = NULL;
  c_40 = t;
  if(match_cons(t, sym_Build_1))
    {
      a_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_40);
  z_39 = t;
  t = a_40;
  t = x_106(t);
  b_40 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, b_40), z_39);
  return(t);
}
ATerm SVar_1_0 (ATerm o_106 (ATerm), ATerm t)
{
  ATerm f_40 = NULL,g_40 = NULL,h_40 = NULL,i_40 = NULL;
  i_40 = t;
  if(match_cons(t, sym_SVar_1))
    {
      g_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_40);
  f_40 = t;
  t = g_40;
  t = o_106(t);
  h_40 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, h_40), f_40);
  return(t);
}
ATerm PrimT_3_0 (ATerm v_107 (ATerm), ATerm w_107 (ATerm), ATerm x_107 (ATerm), ATerm t)
{
  ATerm l_40 = NULL,m_40 = NULL,n_40 = NULL,o_40 = NULL,p_40 = NULL,q_40 = NULL,r_40 = NULL,s_40 = NULL;
  s_40 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      m_40 = ATgetArgument(t, 0);
      n_40 = ATgetArgument(t, 1);
      o_40 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_40);
  l_40 = t;
  t = m_40;
  t = v_107(t);
  p_40 = t;
  t = n_40;
  t = w_107(t);
  q_40 = t;
  t = o_40;
  t = x_107(t);
  r_40 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, p_40, q_40, r_40), l_40);
  return(t);
}
ATerm CallT_3_0 (ATerm t_106 (ATerm), ATerm u_106 (ATerm), ATerm v_106 (ATerm), ATerm t)
{
  ATerm v_40 = NULL,w_40 = NULL,x_40 = NULL,a_41 = NULL,b_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL;
  f_41 = t;
  if(match_cons(t, sym_CallT_3))
    {
      w_40 = ATgetArgument(t, 0);
      x_40 = ATgetArgument(t, 1);
      a_41 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_41);
  v_40 = t;
  t = w_40;
  t = t_106(t);
  b_41 = t;
  t = x_40;
  t = u_106(t);
  d_41 = t;
  t = a_41;
  t = v_106(t);
  e_41 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, b_41, d_41, e_41), v_40);
  return(t);
}
ATerm x_7 (ATerm t)
{
  t = SVar_1_0(_id, t);
  return(t);
}
ATerm z_7 (ATerm t)
{
  t = SVar_1_0(_id, t);
  return(t);
}
ATerm b_8 (ATerm t)
{
  t = Match_1_0(_id, t);
  return(t);
}
ATerm c_8 (ATerm t)
{
  t = Match_1_0(_id, t);
  return(t);
}
ATerm e_8 (ATerm t)
{
  t = Seq_2_0(g_8, _id, t);
  return(t);
}
ATerm g_8 (ATerm t)
{
  t = Match_1_0(_id, t);
  return(t);
}
ATerm h_8 (ATerm t)
{
  t = Scope_2_0(_id, k_8, t);
  return(t);
}
ATerm k_8 (ATerm t)
{
  t = Seq_2_0(m_8, _id, t);
  return(t);
}
ATerm m_8 (ATerm t)
{
  t = Match_1_0(_id, t);
  return(t);
}
ATerm body_to_inline_0_0 (ATerm t)
{
  ATerm u_41 = NULL,v_41 = NULL;
  ATerm w_41 (ATerm t)
  {
    ATerm s_35 = t;
    int v_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(!(match_cons(t, sym_Id_0)))
          _fail(t);
        ;
        LocalPopChoice(v_35);
      }
    else
      {
        t = s_35;
        {
          ATerm w_35 = t;
          int x_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              ;
              LocalPopChoice(x_35);
            }
          else
            {
              t = w_35;
              {
                ATerm y_35 = t;
                int z_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = CallT_3_0(x_7, _id, _id, t);
                    ;
                    LocalPopChoice(z_35);
                  }
                else
                  {
                    t = y_35;
                    {
                      ATerm a_36 = t;
                      int b_36 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = PrimT_3_0(z_7, _id, _id, t);
                          ;
                          LocalPopChoice(b_36);
                        }
                      else
                        {
                          t = a_36;
                          {
                            ATerm c_36 = t;
                            int d_36 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = Build_1_0(_id, t);
                                ;
                                LocalPopChoice(d_36);
                              }
                            else
                              {
                                t = c_36;
                                {
                                  ATerm g_36 = t;
                                  int h_36 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = Match_1_0(_id, t);
                                      ;
                                      LocalPopChoice(h_36);
                                    }
                                  else
                                    {
                                      t = g_36;
                                      {
                                        ATerm i_36 = t;
                                        int n_36 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = Seq_2_0(b_8, _id, t);
                                            ;
                                            LocalPopChoice(n_36);
                                          }
                                        else
                                          {
                                            t = i_36;
                                            {
                                              ATerm q_36 = t;
                                              int s_36 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = Scope_2_0(_id, c_8, t);
                                                  ;
                                                  LocalPopChoice(s_36);
                                                }
                                              else
                                                {
                                                  t = q_36;
                                                  {
                                                    ATerm u_36 = t;
                                                    int w_36 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = Scope_2_0(_id, e_8, t);
                                                        ;
                                                        LocalPopChoice(w_36);
                                                      }
                                                    else
                                                      {
                                                        t = u_36;
                                                        {
                                                          ATerm y_36 = t;
                                                          int z_36 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = Seq_2_0(h_8, _id, t);
                                                              ;
                                                              LocalPopChoice(z_36);
                                                            }
                                                          else
                                                            {
                                                              t = y_36;
                                                              {
                                                                ATerm a_37 = t;
                                                                int b_37 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    t = Choice_2_0(w_41, w_41, t);
                                                                    ;
                                                                    LocalPopChoice(b_37);
                                                                  }
                                                                else
                                                                  {
                                                                    t = a_37;
                                                                    {
                                                                      ATerm c_37 = t;
                                                                      int e_37 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = LChoice_2_0(w_41, w_41, t);
                                                                          ;
                                                                          LocalPopChoice(e_37);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = c_37;
                                                                          t = GuardedLChoice_3_0(w_41, w_41, w_41, t);
                                                                        }
                                                                    }
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                            }
                                          }
                                      }
                                    }
                                }
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
  t = w_41(t);
  u_41 = t;
  t = term_size_0_0(t);
  v_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_41, term_g_37);
  t = leq_0_0(t);
  t = u_41;
  return(t);
}
ATerm SDefT_4_0 (ATerm h_109 (ATerm), ATerm i_109 (ATerm), ATerm j_109 (ATerm), ATerm k_109 (ATerm), ATerm t)
{
  ATerm f_42 = NULL,m_42 = NULL,r_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL,g_43 = NULL;
  g_43 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      m_42 = ATgetArgument(t, 0);
      r_42 = ATgetArgument(t, 1);
      a_43 = ATgetArgument(t, 2);
      b_43 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_43);
  f_42 = t;
  t = m_42;
  t = h_109(t);
  c_43 = t;
  t = r_42;
  t = i_109(t);
  d_43 = t;
  t = a_43;
  t = j_109(t);
  e_43 = t;
  t = b_43;
  t = k_109(t);
  f_43 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, c_43, d_43, e_43, f_43), f_42);
  return(t);
}
ATerm inlineable_0_0 (ATerm t)
{
  ATerm j_43 = NULL;
  ATerm n_8 (ATerm t)
  {
    ATerm h_37 = t;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main_0_0", 0, ATtrue)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_37;
      }
    if(((j_43 != NULL) && (j_43 != t)))
      _fail(t);
    else
      j_43 = t;
    return(t);
  }
  ATerm o_8 (ATerm t)
  {
    ATerm k_43 = NULL;
    k_43 = t;
    {
      ATerm k_37 = t;
      if((PushChoice() == 0))
        {
          ATerm p_8 (ATerm t)
          {
            if(match_cons(t, sym_CallT_3))
              {
                ATerm l_37 = ATgetArgument(t, 0);
                if(match_cons(l_37, sym_SVar_1))
                  {
                    if(((j_43 != NULL) && (j_43 != ATgetArgument(l_37, 0))))
                      _fail(ATgetArgument(l_37, 0));
                    else
                      j_43 = ATgetArgument(l_37, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm m_37 = ATgetArgument(t, 1);
                }
                {
                  ATerm n_37 = ATgetArgument(t, 2);
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
          t = k_37;
        }
      t = k_43;
      t = body_to_inline_0_0(t);
    }
    return(t);
  }
  t = SDefT_4_0(n_8, _id, _id, o_8, t);
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm p_43 = NULL,r_43 = NULL,u_43 = NULL,x_43 = NULL,y_43 = NULL,z_43 = NULL,a_44 = NULL;
  if(match_cons(t, sym__2))
    {
      u_43 = ATgetArgument(t, 0);
      x_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_43;
  if(match_cons(t, sym_Build_1))
    {
      ATerm o_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_43;
  if(match_cons(t, sym_Where_1))
    {
      y_43 = ATgetArgument(t, 0);
      t = y_43;
      if(match_cons(t, sym_Prim_2))
        {
          p_43 = ATgetArgument(t, 0);
          r_43 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Prim_2, p_43, r_43);
    }
  else
    {
      if(match_cons(t, sym_Prim_2))
        {
          y_43 = ATgetArgument(t, 0);
          z_43 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_Prim_2, y_43, z_43);
        }
      else
        {
          if(match_cons(t, sym_PrimT_3))
            {
              y_43 = ATgetArgument(t, 0);
              z_43 = ATgetArgument(t, 1);
              a_44 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_PrimT_3, y_43, z_43, a_44);
        }
    }
  return(t);
}
ATerm genzip_4_0 (ATerm o_122 (ATerm), ATerm p_122 (ATerm), ATerm q_122 (ATerm), ATerm r_122 (ATerm), ATerm t)
{
  ATerm i_44 (ATerm t)
  {
    ATerm p_37 = t;
    int q_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_122(t);
        ;
        LocalPopChoice(q_37);
      }
    else
      {
        t = p_37;
        t = p_122(t);
        t = _2_0(r_122, i_44, t);
        t = q_122(t);
      }
    return(t);
  }
  t = i_44(t);
  return(t);
}
ATerm q_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_37 = ATgetArgument(t, 0);
      if(((ATgetType(r_37) != AT_LIST) || !(ATisEmpty(r_37))))
        _fail(t);
      {
        ATerm s_37 = ATgetArgument(t, 1);
        if(((ATgetType(s_37) != AT_LIST) || !(ATisEmpty(s_37))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm s_8 (ATerm t)
{
  ATerm n_44 = NULL,o_44 = NULL,p_44 = NULL,q_44 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_38 = ATgetArgument(t, 0);
      if(((ATgetType(c_38) == AT_LIST) && !(ATisEmpty(c_38))))
        {
          n_44 = ATgetFirst((ATermList) c_38);
          p_44 = (ATerm) ATgetNext((ATermList) c_38);
        }
      else
        _fail(t);
      {
        ATerm d_38 = ATgetArgument(t, 1);
        if(((ATgetType(d_38) == AT_LIST) && !(ATisEmpty(d_38))))
          {
            o_44 = ATgetFirst((ATermList) d_38);
            q_44 = (ATerm) ATgetNext((ATermList) d_38);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_44, o_44), (ATerm) ATmakeAppl(sym__2, p_44, q_44));
  return(t);
}
ATerm t_8 (ATerm t)
{
  ATerm r_44 = NULL,s_44 = NULL;
  if(match_cons(t, sym__2))
    {
      r_44 = ATgetArgument(t, 0);
      s_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_44), r_44);
  return(t);
}
ATerm u_8 (ATerm t)
{
  ATerm t_44 = NULL,u_44 = NULL;
  if(match_cons(t, sym__2))
    {
      t_44 = ATgetArgument(t, 0);
      u_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, t_44), (ATerm) ATmakeAppl(sym_Match_1, u_44));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm j_44 = NULL,k_44 = NULL,l_44 = NULL,m_44 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_38 = ATgetArgument(t, 0);
      if(match_cons(k_38, sym_Build_1))
        {
          ATerm m_38 = ATgetArgument(k_38, 0);
          if(match_cons(m_38, sym_Op_2))
            {
              k_44 = ATgetArgument(m_38, 0);
              j_44 = ATgetArgument(m_38, 1);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm l_38 = ATgetArgument(t, 1);
        if(match_cons(l_38, sym_Match_1))
          {
            ATerm n_38 = ATgetArgument(l_38, 0);
            if(match_cons(n_38, sym_Op_2))
              {
                if((k_44 != ATgetArgument(n_38, 0)))
                  {
                    _fail(ATgetArgument(n_38, 0));
                  }
                l_44 = ATgetArgument(n_38, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, j_44, l_44);
  t = genzip_4_0(q_8, s_8, t_8, u_8, t);
  m_44 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, m_44), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, k_44, j_44)));
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm v_44 = NULL,w_44 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_38 = ATgetArgument(t, 0);
      if(match_cons(r_38, sym_Build_1))
        {
          ATerm w_38 = ATgetArgument(r_38, 0);
          if(match_cons(w_38, sym_Op_2))
            {
              v_44 = ATgetArgument(w_38, 0);
              {
                ATerm x_38 = ATgetArgument(w_38, 1);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm s_38 = ATgetArgument(t, 1);
        if(match_cons(s_38, sym_Match_1))
          {
            ATerm y_38 = ATgetArgument(s_38, 0);
            if(match_cons(y_38, sym_Op_2))
              {
                w_44 = ATgetArgument(y_38, 0);
                {
                  ATerm z_38 = ATgetArgument(y_38, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, v_44, w_44);
  {
    ATerm e_39 = t;
    if((PushChoice() == 0))
      {
        ATerm x_44 = NULL;
        if(match_cons(t, sym__2))
          {
            x_44 = ATgetArgument(t, 0);
            if((x_44 != ATgetArgument(t, 1)))
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
        t = e_39;
      }
    t = term_f_39;
  }
  return(t);
}
ATerm i_48 (ATerm h_47, ATerm i_47, ATerm j_47, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, h_47, i_47);
  {
    ATerm g_39 = t;
    int n_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = MisMatch_0_0(t);
        ;
        LocalPopChoice(n_39);
      }
    else
      {
        t = g_39;
        {
          ATerm o_39 = t;
          int r_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = BuildMatchFusion_0_0(t);
              ;
              LocalPopChoice(r_39);
            }
          else
            {
              t = o_39;
              {
                ATerm t_39 = t;
                int x_39 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm q_47 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        ATerm y_39 = ATgetArgument(t, 0);
                        ATerm d_40 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = h_47;
                    if(match_cons(t, sym_Build_1))
                      {
                        ATerm e_40 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = i_47;
                    if(match_cons(t, sym_Build_1))
                      {
                        q_47 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Build_1, q_47);
                    ;
                    LocalPopChoice(x_39);
                  }
                else
                  {
                    t = t_39;
                    {
                      ATerm j_40 = t;
                      int k_40 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = BuildPrim_0_0(t);
                          ;
                          LocalPopChoice(k_40);
                        }
                      else
                        {
                          t = j_40;
                          {
                            ATerm u_47 = NULL,v_47 = NULL,x_47 = NULL,y_47 = NULL;
                            if(match_cons(t, sym__2))
                              {
                                ATerm t_40 = ATgetArgument(t, 0);
                                ATerm u_40 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = h_47;
                            if(match_cons(t, sym_Match_1))
                              {
                                u_47 = ATgetArgument(t, 0);
                                t = i_47;
                                if(match_cons(t, sym_Match_1))
                                  {
                                    x_47 = ATgetArgument(t, 0);
                                    t = x_47;
                                    if((u_47 != t))
                                      {
                                        _fail(t);
                                      }
                                    t = (ATerm) ATmakeAppl(sym_Match_1, u_47);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        x_47 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = u_47;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        v_47 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = x_47;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        y_47 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = y_47;
                                    if((v_47 != t))
                                      {
                                        _fail(t);
                                      }
                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, v_47));
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Build_1))
                                  {
                                    u_47 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = i_47;
                                if(match_cons(t, sym_Match_1))
                                  {
                                    x_47 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = x_47;
                                if((u_47 != t))
                                  {
                                    _fail(t);
                                  }
                                t = (ATerm) ATmakeAppl(sym_Build_1, u_47);
                              }
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
  ATerm c_48 = NULL,d_48 = NULL,e_48 = NULL,f_48 = NULL,g_48 = NULL;
  e_48 = t;
  if(match_cons(t, sym_Seq_2))
    {
      f_48 = ATgetArgument(t, 0);
      g_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_48;
  if(match_cons(t, sym_Seq_2))
    {
      c_48 = ATgetArgument(t, 0);
      d_48 = ATgetArgument(t, 1);
      {
        ATerm y_40 = t;
        int z_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_12 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, f_48, c_48);
            {
              ATerm c_41 = t;
              int g_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = MisMatch_0_0(t);
                  ;
                  LocalPopChoice(g_41);
                }
              else
                {
                  t = c_41;
                  {
                    ATerm h_41 = t;
                    int i_41 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = BuildMatchFusion_0_0(t);
                        ;
                        LocalPopChoice(i_41);
                      }
                    else
                      {
                        t = h_41;
                        {
                          ATerm j_41 = t;
                          int k_41 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm y_12 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  ATerm l_41 = ATgetArgument(t, 0);
                                  ATerm m_41 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = f_48;
                              if(match_cons(t, sym_Build_1))
                                {
                                  ATerm n_41 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = c_48;
                              if(match_cons(t, sym_Build_1))
                                {
                                  y_12 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym_Build_1, y_12);
                              ;
                              LocalPopChoice(k_41);
                            }
                          else
                            {
                              t = j_41;
                              {
                                ATerm o_41 = t;
                                int p_41 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildPrim_0_0(t);
                                    ;
                                    LocalPopChoice(p_41);
                                  }
                                else
                                  {
                                    t = o_41;
                                    {
                                      ATerm c_13 = NULL,d_13 = NULL,f_13 = NULL,g_13 = NULL;
                                      if(match_cons(t, sym__2))
                                        {
                                          ATerm q_41 = ATgetArgument(t, 0);
                                          ATerm r_41 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = f_48;
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          c_13 = ATgetArgument(t, 0);
                                          t = c_48;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              f_13 = ATgetArgument(t, 0);
                                              t = f_13;
                                              if((c_13 != t))
                                                {
                                                  _fail(t);
                                                }
                                              t = (ATerm) ATmakeAppl(sym_Match_1, c_13);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Build_1))
                                                {
                                                  f_13 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = c_13;
                                              if(match_cons(t, sym_Var_1))
                                                {
                                                  d_13 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = f_13;
                                              if(match_cons(t, sym_Var_1))
                                                {
                                                  g_13 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = g_13;
                                              if((d_13 != t))
                                                {
                                                  _fail(t);
                                                }
                                              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, d_13));
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_Build_1))
                                            {
                                              c_13 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = c_48;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              f_13 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = f_13;
                                          if((c_13 != t))
                                            {
                                              _fail(t);
                                            }
                                          t = (ATerm) ATmakeAppl(sym_Build_1, c_13);
                                        }
                                    }
                                  }
                              }
                            }
                        }
                      }
                  }
                }
              t_12 = t;
              t = (ATerm) ATmakeAppl(sym_Seq_2, t_12, d_48);
            }
            ;
            LocalPopChoice(z_40);
          }
        else
          {
            t = y_40;
            t = i_48(f_48, g_48, e_48, t);
          }
      }
    }
  else
    {
      t = i_48(f_48, g_48, e_48, t);
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm g_119 (ATerm), ATerm t)
{
  ATerm j_48 (ATerm t)
  {
    ATerm s_41 = t;
    int t_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_119(t);
        ;
        LocalPopChoice(t_41);
      }
    else
      {
        t = s_41;
        t = SRTS_one(j_48, t);
      }
    return(t);
  }
  t = j_48(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm k_48 = NULL,l_48 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      ATerm x_41 = ATgetArgument(t, 0);
      if(((ATgetType(x_41) == AT_LIST) && !(ATisEmpty(x_41))))
        {
          ATerm z_41 = ATgetFirst((ATermList) x_41);
          if(match_cons(z_41, sym_SDefT_4))
            {
              l_48 = ATgetArgument(z_41, 0);
              {
                ATerm b_42 = ATgetArgument(z_41, 1);
                if(((ATgetType(b_42) != AT_LIST) || !(ATisEmpty(b_42))))
                  _fail(t);
              }
              {
                ATerm c_42 = ATgetArgument(z_41, 2);
                if(((ATgetType(c_42) != AT_LIST) || !(ATisEmpty(c_42))))
                  _fail(t);
              }
              k_48 = ATgetArgument(z_41, 3);
            }
          else
            _fail(t);
          {
            ATerm a_42 = (ATerm) ATgetNext((ATermList) x_41);
            if(((ATgetType(a_42) != AT_LIST) || !(ATisEmpty(a_42))))
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm y_41 = ATgetArgument(t, 1);
        if(match_cons(y_41, sym_CallT_3))
          {
            ATerm d_42 = ATgetArgument(y_41, 0);
            if(match_cons(d_42, sym_SVar_1))
              {
                if((l_48 != ATgetArgument(d_42, 0)))
                  {
                    _fail(ATgetArgument(d_42, 0));
                  }
              }
            else
              _fail(t);
            {
              ATerm e_42 = ATgetArgument(y_41, 1);
              if(((ATgetType(e_42) != AT_LIST) || !(ATisEmpty(e_42))))
                _fail(t);
            }
            {
              ATerm g_42 = ATgetArgument(y_41, 2);
              if(((ATgetType(g_42) != AT_LIST) || !(ATisEmpty(g_42))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = k_48;
  {
    ATerm h_42 = t;
    if((PushChoice() == 0))
      {
        ATerm v_8 (ATerm t)
        {
          if(match_cons(t, sym_CallT_3))
            {
              ATerm i_42 = ATgetArgument(t, 0);
              if(match_cons(i_42, sym_SVar_1))
                {
                  if((l_48 != ATgetArgument(i_42, 0)))
                    {
                      _fail(ATgetArgument(i_42, 0));
                    }
                }
              else
                _fail(t);
              {
                ATerm j_42 = ATgetArgument(t, 1);
                if(((ATgetType(j_42) != AT_LIST) || !(ATisEmpty(j_42))))
                  _fail(t);
              }
              {
                ATerm k_42 = ATgetArgument(t, 2);
                if(((ATgetType(k_42) != AT_LIST) || !(ATisEmpty(k_42))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(v_8, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_42;
      }
    t = k_48;
  }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm t_48 = NULL,u_48 = NULL,v_48 = NULL,w_48 = NULL,x_48 = NULL,y_48 = NULL,a_49 = NULL,b_49 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      a_49 = ATgetArgument(t, 0);
      t = a_49;
      if(match_cons(t, sym_Seq_2))
        {
          y_48 = ATgetArgument(t, 0);
          u_48 = ATgetArgument(t, 1);
          t = y_48;
          if(match_cons(t, sym_Where_1))
            {
              t_48 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_48;
          if(match_cons(t, sym_Seq_2))
            {
              v_48 = ATgetArgument(t, 0);
              x_48 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = v_48;
          if(match_cons(t, sym_Build_1))
            {
              w_48 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, t_48, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, w_48), x_48)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              y_48 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, y_48);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          a_49 = ATgetArgument(t, 0);
          t = a_49;
          if(match_cons(t, sym_Test_1))
            {
              y_48 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, y_48);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              a_49 = ATgetArgument(t, 0);
              t = a_49;
              if(match_cons(t, sym_Not_1))
                {
                  y_48 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, y_48);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  a_49 = ATgetArgument(t, 0);
                  b_49 = ATgetArgument(t, 1);
                  t = b_49;
                  if((a_49 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      a_49 = ATgetArgument(t, 0);
                      b_49 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = b_49;
                  if((a_49 != t))
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
  ATerm p_49 = NULL,q_49 = NULL,r_49 = NULL,s_49 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      p_49 = ATgetArgument(t, 0);
      s_49 = ATgetArgument(t, 1);
      t = p_49;
      if(match_cons(t, sym_LChoice_2))
        {
          q_49 = ATgetArgument(t, 0);
          r_49 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, q_49, (ATerm) ATmakeAppl(sym_LChoice_2, r_49, s_49));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          p_49 = ATgetArgument(t, 0);
          s_49 = ATgetArgument(t, 1);
          t = p_49;
          if(match_cons(t, sym_Seq_2))
            {
              q_49 = ATgetArgument(t, 0);
              r_49 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, q_49, (ATerm) ATmakeAppl(sym_Seq_2, r_49, s_49));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              p_49 = ATgetArgument(t, 0);
              s_49 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = p_49;
          if(match_cons(t, sym_Choice_2))
            {
              q_49 = ATgetArgument(t, 0);
              r_49 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, q_49, (ATerm) ATmakeAppl(sym_Choice_2, r_49, s_49));
        }
    }
  return(t);
}
ATerm map1_1_0 (ATerm l_0 (ATerm), ATerm t)
{
  ATerm l_42 = t;
  int n_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(l_0, _id, t);
      {
        ATerm w_8 (ATerm t)
        {
          ATerm o_42 = t;
          int p_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(l_0, t);
              ;
              LocalPopChoice(p_42);
            }
          else
            {
              t = o_42;
            }
          return(t);
        }
        t = Cons_2_0(_id, w_8, t);
      }
      ;
      LocalPopChoice(n_42);
    }
  else
    {
      t = l_42;
      {
        ATerm a_9 (ATerm t)
        {
          t = map1_1_0(l_0, t);
          return(t);
        }
        t = Cons_2_0(_id, a_9, t);
      }
    }
  return(t);
}
ATerm d_9 (ATerm t)
{
  ATerm k_51 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      k_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, k_51, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_t_42), term_t_42));
  return(t);
}
ATerm g_9 (ATerm t)
{
  ATerm u_42 = t;
  int v_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_51 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_51 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, m_51, term_t_42);
      ;
      LocalPopChoice(v_42);
    }
  else
    {
      t = u_42;
    }
  return(t);
}
ATerm h_9 (ATerm t)
{
  ATerm z_51 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      z_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, z_51, term_t_42);
  return(t);
}
ATerm i_9 (ATerm t)
{
  ATerm w_42 = t;
  int x_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_52 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, g_52, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_t_42), term_t_42));
      ;
      LocalPopChoice(x_42);
    }
  else
    {
      t = w_42;
    }
  return(t);
}
ATerm j_9 (ATerm t)
{
  ATerm u_52 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      u_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, u_52, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_t_42), term_t_42));
  return(t);
}
ATerm l_9 (ATerm t)
{
  ATerm y_42 = t;
  int z_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_52 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, w_52, term_t_42);
      ;
      LocalPopChoice(z_42);
    }
  else
    {
      t = y_42;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm n_50 = NULL,o_50 = NULL,p_50 = NULL,q_50 = NULL,s_50 = NULL,t_50 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      s_50 = ATgetArgument(t, 0);
      t_50 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, s_50, t_50);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          s_50 = ATgetArgument(t, 0);
          t = s_50;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              n_50 = ATgetFirst((ATermList) t);
              o_50 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, n_50, (ATerm) ATmakeAppl(sym_LChoices_1, o_50));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_f_39;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              s_50 = ATgetArgument(t, 0);
              t = s_50;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  n_50 = ATgetFirst((ATermList) t);
                  o_50 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, n_50, (ATerm) ATmakeAppl(sym_Choices_1, o_50));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_f_39;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  s_50 = ATgetArgument(t, 0);
                  t = s_50;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      n_50 = ATgetFirst((ATermList) t);
                      o_50 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_50, (ATerm) ATmakeAppl(sym_Seqs_1, o_50));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_h_43;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      s_50 = ATgetArgument(t, 0);
                      t_50 = ATgetArgument(t, 1);
                      q_50 = ATgetArgument(t, 2);
                      p_50 = ATgetArgument(t, 3);
                      {
                        ATerm i_51 = NULL,j_51 = NULL;
                        t = t_50;
                        t = map1_1_0(d_9, t);
                        i_51 = t;
                        t = q_50;
                        t = map1_1_0(g_9, t);
                        j_51 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, s_50, i_51, j_51, p_50);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          s_50 = ATgetArgument(t, 0);
                          t_50 = ATgetArgument(t, 1);
                          q_50 = ATgetArgument(t, 2);
                          p_50 = ATgetArgument(t, 3);
                          {
                            ATerm i_43 = t;
                            int l_43 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm v_51 = NULL,w_51 = NULL;
                                t = q_50;
                                t = map1_1_0(h_9, t);
                                v_51 = t;
                                t = t_50;
                                t = map_1_0(i_9, t);
                                w_51 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, s_50, w_51, v_51, p_50);
                                ;
                                LocalPopChoice(l_43);
                              }
                            else
                              {
                                t = i_43;
                                {
                                  ATerm s_52 = NULL,t_52 = NULL;
                                  t = t_50;
                                  t = map1_1_0(j_9, t);
                                  s_52 = t;
                                  t = q_50;
                                  t = map_1_0(l_9, t);
                                  t_52 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, s_50, s_52, t_52, p_50);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              s_50 = ATgetArgument(t, 0);
                              t_50 = ATgetArgument(t, 1);
                              q_50 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, t_50, (ATerm) ATmakeAppl(sym_Op_2, term_m_43, (ATerm) ATinsert(ATinsert(ATempty, q_50), s_50)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  s_50 = ATgetArgument(t, 0);
                                  t_50 = ATgetArgument(t, 1);
                                  q_50 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, q_50)), s_50), (ATerm) ATmakeAppl(sym_Build_1, t_50)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      s_50 = ATgetArgument(t, 0);
                                      t_50 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, s_50, (ATerm) ATmakeAppl(sym_Match_1, t_50));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          s_50 = ATgetArgument(t, 0);
                                          t_50 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, s_50), t_50);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              s_50 = ATgetArgument(t, 0);
                                              t_50 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, t_50), s_50);
                                        }
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
ATerm n_9 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm g_54 = NULL,h_54 = NULL,i_54 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      g_54 = ATgetArgument(t, 0);
      t = g_54;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_f_39;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          g_54 = ATgetArgument(t, 0);
          t = g_54;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_h_43;
        }
      else
        {
          ATerm n_43 = t;
          int o_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_Seq_2))
                {
                  g_54 = ATgetArgument(t, 0);
                  {
                    ATerm q_43 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(o_43);
              t = g_54;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_f_39;
            }
          else
            {
              t = n_43;
              {
                ATerm s_43 = t;
                int t_43 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Scope_2))
                      {
                        ATerm v_43 = ATgetArgument(t, 0);
                        h_54 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(t_43);
                    t = h_54;
                    if(!(match_cons(t, sym_Fail_0)))
                      _fail(t);
                    t = term_f_39;
                  }
                else
                  {
                    t = s_43;
                    {
                      ATerm w_43 = t;
                      int b_44 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_Rec_2))
                            {
                              ATerm c_44 = ATgetArgument(t, 0);
                              h_54 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(b_44);
                          t = h_54;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_f_39;
                        }
                      else
                        {
                          t = w_43;
                          if(match_cons(t, sym_Some_1))
                            {
                              g_54 = ATgetArgument(t, 0);
                              t = g_54;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_f_39;
                            }
                          else
                            {
                              if(match_cons(t, sym_One_1))
                                {
                                  g_54 = ATgetArgument(t, 0);
                                  t = g_54;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_f_39;
                                }
                              else
                                {
                                  ATerm d_44 = t;
                                  int e_44 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_Path_2))
                                        {
                                          ATerm f_44 = ATgetArgument(t, 0);
                                          h_54 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(e_44);
                                      t = h_54;
                                      if(!(match_cons(t, sym_Fail_0)))
                                        _fail(t);
                                      t = term_f_39;
                                    }
                                  else
                                    {
                                      t = d_44;
                                      {
                                        ATerm g_44 = t;
                                        int h_44 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            if(match_cons(t, sym_Cong_2))
                                              {
                                                ATerm y_44 = ATgetArgument(t, 0);
                                                h_54 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            LocalPopChoice(h_44);
                                            t = h_54;
                                            t = fetch_1_0(n_9, t);
                                            t = term_f_39;
                                          }
                                        else
                                          {
                                            t = g_44;
                                            if(match_cons(t, sym_Choice_2))
                                              {
                                                g_54 = ATgetArgument(t, 0);
                                                h_54 = ATgetArgument(t, 1);
                                                t = h_54;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    t = g_54;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm z_44 = t;
                                                        int a_45 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = h_54;
                                                            ;
                                                            LocalPopChoice(a_45);
                                                          }
                                                        else
                                                          {
                                                            t = z_44;
                                                            t = g_54;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = g_54;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = g_54;
                                                    if(!(match_cons(t, sym_Fail_0)))
                                                      _fail(t);
                                                    t = h_54;
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_LChoice_2))
                                                  {
                                                    g_54 = ATgetArgument(t, 0);
                                                    h_54 = ATgetArgument(t, 1);
                                                    t = h_54;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        t = g_54;
                                                        if(match_cons(t, sym_Fail_0))
                                                          {
                                                            ATerm b_45 = t;
                                                            int c_45 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = h_54;
                                                                ;
                                                                LocalPopChoice(c_45);
                                                              }
                                                            else
                                                              {
                                                                t = b_45;
                                                                t = g_54;
                                                              }
                                                          }
                                                        else
                                                          {
                                                            t = g_54;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = g_54;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = h_54;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Where_1))
                                                      {
                                                        g_54 = ATgetArgument(t, 0);
                                                        t = g_54;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = term_f_39;
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_GuardedLChoice_3))
                                                          {
                                                            g_54 = ATgetArgument(t, 0);
                                                            h_54 = ATgetArgument(t, 1);
                                                            i_54 = ATgetArgument(t, 2);
                                                          }
                                                        else
                                                          _fail(t);
                                                        t = i_54;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, g_54, h_54);
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                    }
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
  ATerm g_55 = NULL,i_55 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      i_55 = ATgetArgument(t, 0);
      t = i_55;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_h_43;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          i_55 = ATgetArgument(t, 0);
          t = i_55;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_f_39;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              i_55 = ATgetArgument(t, 0);
              g_55 = ATgetArgument(t, 1);
              t = g_55;
              if(match_cons(t, sym_Id_0))
                {
                  t = i_55;
                  if(match_cons(t, sym_Id_0))
                    {
                      ATerm d_45 = t;
                      int e_45 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = g_55;
                          ;
                          LocalPopChoice(e_45);
                        }
                      else
                        {
                          t = d_45;
                          t = i_55;
                        }
                    }
                  else
                    {
                      t = i_55;
                    }
                }
              else
                {
                  t = i_55;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = g_55;
                }
            }
          else
            {
              ATerm f_45 = t;
              int g_45 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      i_55 = ATgetArgument(t, 0);
                      {
                        ATerm h_45 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(g_45);
                  t = i_55;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_h_43;
                }
              else
                {
                  t = f_45;
                  {
                    ATerm i_45 = t;
                    int j_45 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            ATerm k_45 = ATgetArgument(t, 0);
                            g_55 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(j_45);
                        t = g_55;
                        if(!(match_cons(t, sym_Id_0)))
                          _fail(t);
                        t = term_h_43;
                      }
                    else
                      {
                        t = i_45;
                        {
                          ATerm l_45 = t;
                          int m_45 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Rec_2))
                                {
                                  ATerm n_45 = ATgetArgument(t, 0);
                                  g_55 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(m_45);
                              t = g_55;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_h_43;
                            }
                          else
                            {
                              t = l_45;
                              if(match_cons(t, sym_All_1))
                                {
                                  i_55 = ATgetArgument(t, 0);
                                  t = i_55;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_h_43;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Where_1))
                                    {
                                      i_55 = ATgetArgument(t, 0);
                                      t = i_55;
                                      if(!(match_cons(t, sym_Id_0)))
                                        _fail(t);
                                      t = term_h_43;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          i_55 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = i_55;
                                      if(!(match_cons(t, sym_Wld_0)))
                                        _fail(t);
                                      t = term_h_43;
                                    }
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
  ATerm o_45 = t;
  int p_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
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
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(r_45);
          }
        else
          {
            t = q_45;
            {
              ATerm s_45 = t;
              int t_45 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(t_45);
                }
              else
                {
                  t = s_45;
                  {
                    ATerm u_45 = t;
                    int v_45 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(v_45);
                      }
                    else
                      {
                        t = u_45;
                        {
                          ATerm w_45 = t;
                          int x_45 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(x_45);
                            }
                          else
                            {
                              t = w_45;
                              {
                                ATerm y_45 = t;
                                int z_45 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm t_55 = NULL,u_55 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        t_55 = ATgetArgument(t, 0);
                                        u_55 = ATgetArgument(t, 1);
                                        t = t_55;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = u_55;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            t_55 = ATgetArgument(t, 0);
                                            u_55 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = t_55;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = u_55;
                                      }
                                    ;
                                    LocalPopChoice(z_45);
                                  }
                                else
                                  {
                                    t = y_45;
                                    {
                                      ATerm a_46 = t;
                                      int b_46 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
                                          LocalPopChoice(b_46);
                                        }
                                      else
                                        {
                                          t = a_46;
                                          {
                                            ATerm c_46 = t;
                                            int d_46 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = BuildMatch_0_0(t);
                                                ;
                                                LocalPopChoice(d_46);
                                              }
                                            else
                                              {
                                                t = c_46;
                                                {
                                                  ATerm y_55 = NULL,z_55 = NULL;
                                                  if(match_cons(t, sym_As_2))
                                                    {
                                                      y_55 = ATgetArgument(t, 0);
                                                      z_55 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = y_55;
                                                  if(!(match_cons(t, sym_Wld_0)))
                                                    _fail(t);
                                                  t = z_55;
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm repeat_1_0 (ATerm y_134 (ATerm), ATerm t)
{
  ATerm b_56 (ATerm t)
  {
    ATerm e_46 = t;
    int f_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_134(t);
        t = b_56(t);
        ;
        LocalPopChoice(f_46);
      }
    else
      {
        t = e_46;
      }
    return(t);
  }
  t = b_56(t);
  return(t);
}
ATerm downup_1_0 (ATerm e_118 (ATerm), ATerm t)
{
  t = e_118(t);
  {
    ATerm o_9 (ATerm t)
    {
      t = downup_1_0(e_118, t);
      return(t);
    }
    t = SRTS_all(o_9, t);
    t = e_118(t);
  }
  return(t);
}
ATerm q_9 (ATerm t)
{
  t = downup_1_0(s_9, t);
  {
    ATerm g_46 = t;
    int h_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = inlineable_0_0(t);
        t = AddSDef_0_0(t);
        ;
        LocalPopChoice(h_46);
      }
    else
      {
        t = g_46;
      }
  }
  return(t);
}
ATerm s_9 (ATerm t)
{
  t = repeat_1_0(Simplify_0_0, t);
  return(t);
}
ATerm inline_sdefs_0_0 (ATerm t)
{
  t = map_1_0(q_9, t);
  t = map_1_0(inline_sdef_0_0, t);
  return(t);
}
ATerm Strategies_1_0 (ATerm h_102 (ATerm), ATerm t)
{
  ATerm c_56 = NULL,d_56 = NULL,e_56 = NULL,g_56 = NULL;
  g_56 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      d_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_56);
  c_56 = t;
  t = d_56;
  t = h_102(t);
  e_56 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, e_56), c_56);
  return(t);
}
ATerm Cons_2_0 (ATerm b_102 (ATerm), ATerm c_102 (ATerm), ATerm t)
{
  ATerm j_56 = NULL,k_56 = NULL,l_56 = NULL,m_56 = NULL,n_56 = NULL,o_56 = NULL;
  o_56 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_56 = ATgetFirst((ATermList) t);
      l_56 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_56);
  j_56 = t;
  t = k_56;
  t = b_102(t);
  m_56 = t;
  t = l_56;
  t = c_102(t);
  n_56 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(n_56), m_56), j_56);
  return(t);
}
ATerm Specification_1_0 (ATerm m_102 (ATerm), ATerm t)
{
  ATerm r_56 = NULL,s_56 = NULL,t_56 = NULL,u_56 = NULL;
  u_56 = t;
  if(match_cons(t, sym_Specification_1))
    {
      s_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_56);
  r_56 = t;
  t = s_56;
  t = m_102(t);
  t_56 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, t_56), r_56);
  return(t);
}
ATerm _2_0 (ATerm m_97 (ATerm), ATerm n_97 (ATerm), ATerm t)
{
  ATerm i_57 = NULL,j_57 = NULL,k_57 = NULL,r_57 = NULL,s_57 = NULL,t_57 = NULL;
  t_57 = t;
  if(match_cons(t, sym__2))
    {
      j_57 = ATgetArgument(t, 0);
      k_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_57);
  i_57 = t;
  t = j_57;
  t = m_97(t);
  r_57 = t;
  t = k_57;
  t = n_97(t);
  s_57 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, r_57, s_57), i_57);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm p_145 (ATerm), ATerm t)
{
  ATerm w_57 = NULL,x_57 = NULL,y_57 = NULL;
  if(match_cons(t, sym__2))
    {
      w_57 = ATgetArgument(t, 0);
      x_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_57, term_i_46);
  t = open_stream_0_0(t);
  y_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_57, x_57);
  t = p_145(t);
  t = fclose_0_0(t);
  t = x_57;
  return(t);
}
ATerm d_10 (ATerm t)
{
  t = fetch_1_0(f_10, t);
  return(t);
}
ATerm e_10 (ATerm t)
{
  t = WriteToFile_1_0(g_10, t);
  return(t);
}
ATerm f_10 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm g_10 (ATerm t)
{
  ATerm b_58 = NULL,c_58 = NULL,d_58 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_46 = ATgetArgument(t, 0);
      if(match_cons(j_46, sym_Stream_1))
        {
          b_58 = ATgetArgument(j_46, 0);
        }
      else
        _fail(t);
      c_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(b_58, c_58);
  d_58 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_58);
  return(t);
}
ATerm h_10 (ATerm t)
{
  t = WriteToFile_1_0(j_10, t);
  return(t);
}
ATerm j_10 (ATerm t)
{
  ATerm e_58 = NULL,f_58 = NULL,g_58 = NULL,h_58 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_46 = ATgetArgument(t, 0);
      if(match_cons(k_46, sym_Stream_1))
        {
          e_58 = ATgetArgument(k_46, 0);
        }
      else
        _fail(t);
      f_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(e_58, f_58);
  g_58 = t;
  t = SSL_fputc((ATerm)ATmakeInt(10), g_58);
  h_58 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_58);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm z_57 = NULL,a_58 = NULL;
  z_57 = t;
  {
    ATerm t_9 (ATerm t)
    {
      ATerm l_46 = t;
      int m_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_9 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((a_58 != NULL) && (a_58 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  a_58 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(x_9, t);
          ;
          LocalPopChoice(m_46);
        }
      else
        {
          t = l_46;
          t = term_n_46;
          if(((a_58 != NULL) && (a_58 != t)))
            _fail(t);
          else
            a_58 = t;
        }
      return(t);
    }
    t = _2_0(t_9, _id, t);
    t = z_57;
    {
      ATerm z_9 (ATerm t)
      {
        ATerm o_13 = NULL;
        o_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_58), o_13);
        return(t);
      }
      t = _2_0(_id, z_9, t);
      {
        ATerm o_46 = t;
        int p_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(d_10, e_10, t);
            ;
            LocalPopChoice(p_46);
          }
        else
          {
            t = o_46;
            t = _2_0(_id, h_10, t);
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
ATerm apply_strategy_1_0 (ATerm e_140 (ATerm), ATerm t)
{
  ATerm i_58 = NULL,j_58 = NULL,k_58 = NULL,n_58 = NULL,o_58 = NULL;
  i_58 = t;
  t = dtime_0_0(t);
  t = i_58;
  t = e_140(t);
  j_58 = t;
  t = dtime_0_0(t);
  k_58 = t;
  t = j_58;
  if(match_cons(t, sym__2))
    {
      n_58 = ATgetArgument(t, 0);
      o_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_58), (ATerm) ATmakeAppl(sym_Runtime_1, k_58)), o_58);
  return(t);
}
ATerm c_59 (ATerm w_58, ATerm t)
{
  t = SSL_fclose(w_58);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm z_58 = NULL,a_59 = NULL;
  a_59 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_58 = ATgetArgument(t, 0);
      {
        ATerm q_46 = t;
        int r_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_58);
            ;
            LocalPopChoice(r_46);
          }
        else
          {
            t = q_46;
            t = c_59(a_59, t);
          }
      }
    }
  else
    {
      t = c_59(a_59, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm d_59 = NULL;
  t = SSL_stdin_stream();
  d_59 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_59);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm e_59 = NULL;
  t = SSL_stdout_stream();
  e_59 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_59);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm f_59 = NULL;
  t = SSL_stderr_stream();
  f_59 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_59);
  return(t);
}
ATerm l_10 (ATerm t)
{
  ATerm n_59 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      n_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_59;
  return(t);
}
ATerm m_10 (ATerm t)
{
  ATerm g_60 = NULL;
  g_60 = t;
  t = SSL_is_string(g_60);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_46 = ATgetArgument(t, 0);
      ATerm t_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_46 = t;
    int v_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_14 = NULL,e_14 = NULL;
        d_14 = t;
        t = SSL_explode_term(d_14);
        if(match_cons(t, sym__2))
          {
            ATerm w_46 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) w_46) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm x_46 = ATgetArgument(t, 1);
              if(((ATgetType(x_46) == AT_LIST) && !(ATisEmpty(x_46))))
                {
                  e_14 = ATgetFirst((ATermList) x_46);
                  {
                    ATerm y_46 = (ATerm) ATgetNext((ATermList) x_46);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = e_14;
        if(match_cons(t, sym_stderr_0))
          {
            t = e_14;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = e_14;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = e_14;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(v_46);
      }
    else
      {
        t = u_46;
        {
          ATerm z_46 = t;
          int a_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_59 = NULL,l_59 = NULL,m_59 = NULL;
              t = _2_0(l_10, _id, t);
              if(match_cons(t, sym__2))
                {
                  k_59 = ATgetArgument(t, 0);
                  l_59 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(k_59, l_59);
              m_59 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, m_59);
              ;
              LocalPopChoice(a_47);
            }
          else
            {
              t = z_46;
              {
                ATerm u_59 = NULL,e_60 = NULL,f_60 = NULL;
                t = _2_0(m_10, _id, t);
                if(match_cons(t, sym__2))
                  {
                    u_59 = ATgetArgument(t, 0);
                    e_60 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(u_59, e_60);
                f_60 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, f_60);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm h_60 = NULL,i_60 = NULL,j_60 = NULL;
  ATerm b_47 = t;
  int c_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_60 = NULL;
      k_60 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_60, term_d_47);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(c_47);
    }
  else
    {
      t = b_47;
      {
        ATerm f_14 = NULL;
        f_14 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, f_14), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = f_14;
        _fail(t);
      }
    }
  h_60 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(j_60);
  i_60 = t;
  t = h_60;
  t = fclose_0_0(t);
  t = i_60;
  return(t);
}
ATerm fetch_1_0 (ATerm o_124 (ATerm), ATerm t)
{
  ATerm s_60 (ATerm t)
  {
    ATerm e_47 = t;
    int f_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(o_124, _id, t);
        ;
        LocalPopChoice(f_47);
      }
    else
      {
        t = e_47;
        t = Cons_2_0(_id, s_60, t);
      }
    return(t);
  }
  t = s_60(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm g_47 = t;
  int k_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(k_47);
    }
  else
    {
      t = g_47;
      {
        ATerm v_60 = NULL,w_60 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_60 = ATgetFirst((ATermList) t);
            w_60 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_60;
        {
          ATerm n_10 (ATerm t)
          {
            t = w_60;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(n_10, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm u_124 (ATerm), ATerm t)
{
  ATerm e_61 (ATerm t)
  {
    ATerm l_47 = t;
    int m_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, e_61, t);
        ;
        LocalPopChoice(m_47);
      }
    else
      {
        t = l_47;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = u_124(t);
      }
    return(t);
  }
  t = e_61(t);
  return(t);
}
ATerm p_10 (ATerm t)
{
  ATerm h_61 = NULL;
  h_61 = t;
  t = SSL_explode_string(h_61);
  return(t);
}
ATerm r_10 (ATerm t)
{
  ATerm i_61 = NULL;
  i_61 = t;
  t = SSL_explode_string(i_61);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm g_61 = NULL;
  t = _2_0(p_10, r_10, t);
  {
    ATerm n_47 = t;
    int o_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_61 = NULL,l_61 = NULL;
        if(match_cons(t, sym__2))
          {
            k_61 = ATgetArgument(t, 0);
            l_61 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = k_61;
        {
          ATerm s_10 (ATerm t)
          {
            t = l_61;
            return(t);
          }
          t = at_end_1_0(s_10, t);
        }
        ;
        LocalPopChoice(o_47);
      }
    else
      {
        t = n_47;
        {
          ATerm k_14 = NULL,l_14 = NULL;
          k_14 = t;
          t = SSL_explode_term(k_14);
          if(match_cons(t, sym__2))
            {
              ATerm p_47 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) p_47) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              l_14 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = l_14;
          t = concat_0_0(t);
        }
      }
    g_61 = t;
    t = SSL_implode_string(g_61);
  }
  return(t);
}
ATerm t_10 (ATerm t)
{
  ATerm r_47 = t;
  int s_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(s_47);
    }
  else
    {
      t = r_47;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm t_47 = t;
  int w_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_61 = NULL;
      v_61 = t;
      t = SSL_is_string(v_61);
      ;
      LocalPopChoice(w_47);
    }
  else
    {
      t = t_47;
      {
        ATerm z_47 = t;
        int a_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(t_10, t);
            ;
            LocalPopChoice(a_48);
          }
        else
          {
            t = z_47;
            {
              ATerm z_61 = NULL,a_62 = NULL,b_62 = NULL;
              z_61 = t;
              if(match_cons(t, sym_Path_1))
                {
                  a_62 = ATgetArgument(t, 0);
                  t = a_62;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      a_62 = ATgetArgument(t, 0);
                      t = a_62;
                      {
                        ATerm b_48 = t;
                        int h_48 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), a_62);
                            {
                              ATerm m_48 = t;
                              int n_48 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm h_15 = NULL;
                                  t = eval_config_0_0(t);
                                  h_15 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), a_62, h_15);
                                  t = h_15;
                                  ;
                                  LocalPopChoice(n_48);
                                }
                              else
                                {
                                  t = m_48;
                                }
                            }
                            ;
                            LocalPopChoice(h_48);
                          }
                        else
                          {
                            t = b_48;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, a_62), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = a_62;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm f_62 = NULL,g_62 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          a_62 = ATgetArgument(t, 0);
                          b_62 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = a_62;
                      t = eval_config_0_0(t);
                      f_62 = t;
                      t = b_62;
                      t = eval_config_0_0(t);
                      g_62 = t;
                      t = (ATerm) ATmakeAppl(sym__2, f_62, g_62);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm s_138 (ATerm), ATerm t)
{
  ATerm o_48 = t;
  int p_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_62 = NULL,p_62 = NULL;
      n_62 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm q_48 = t;
        int r_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_15 = NULL;
            t = eval_config_0_0(t);
            p_15 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), p_15);
            t = p_15;
            ;
            LocalPopChoice(r_48);
          }
        else
          {
            t = q_48;
          }
        p_62 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_62, term_s_48);
        t = geq_0_0(t);
        t = n_62;
        t = s_138(t);
      }
      ;
      LocalPopChoice(p_48);
    }
  else
    {
      t = o_48;
    }
  return(t);
}
ATerm u_10 (ATerm t)
{
  ATerm r_62 = NULL;
  r_62 = t;
  if(match_string(t, "-k"))
    {
      t = r_62;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = r_62;
    }
  return(t);
}
ATerm w_10 (ATerm t)
{
  ATerm s_62 = NULL,t_62 = NULL;
  s_62 = t;
  t = SSL_string_to_int(s_62);
  t_62 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), t_62);
  t = s_62;
  return(t);
}
ATerm z_10 (ATerm t)
{
  t = term_z_48;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_10, w_10, z_10, t);
  return(t);
}
ATerm a_11 (ATerm t)
{
  ATerm v_62 = NULL;
  v_62 = t;
  if(match_string(t, "-S"))
    {
      t = v_62;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = v_62;
    }
  return(t);
}
ATerm b_11 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_c_49;
  return(t);
}
ATerm c_11 (ATerm t)
{
  t = term_d_49;
  return(t);
}
ATerm e_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_11 (ATerm t)
{
  ATerm w_62 = NULL,x_62 = NULL;
  w_62 = t;
  t = SSL_string_to_int(w_62);
  x_62 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), x_62);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, w_62);
  return(t);
}
ATerm h_11 (ATerm t)
{
  t = term_e_49;
  return(t);
}
ATerm l_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_11 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_f_49;
  return(t);
}
ATerm n_11 (ATerm t)
{
  t = term_g_49;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm h_49 = t;
  int i_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_11, b_11, c_11, t);
      ;
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
            t = ArgOption_3_0(e_11, f_11, h_11, t);
            ;
            LocalPopChoice(k_49);
          }
        else
          {
            t = j_49;
            t = Option_3_0(l_11, m_11, n_11, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm t)
{
  ATerm a_63 = NULL,b_63 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_63 = NULL;
      t = term_z_13;
      t = c_0(t);
      c_63 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_49, term_m_49, c_63);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm f_63 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_63 = ATgetFirst((ATermList) t);
          b_63 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_63;
      t = a_0(t);
      t = term_z_13;
      t = b_0(t);
      f_63 = t;
      t = (ATerm) ATinsert(CheckATermList(b_63), f_63);
    }
  return(t);
}
ATerm o_11 (ATerm t)
{
  ATerm h_63 = NULL;
  h_63 = t;
  if(match_string(t, "-o"))
    {
      t = h_63;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = h_63;
    }
  return(t);
}
ATerm p_11 (ATerm t)
{
  ATerm k_63 = NULL;
  k_63 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), k_63);
  t = (ATerm) ATmakeAppl(sym_Output_1, k_63);
  return(t);
}
ATerm r_11 (ATerm t)
{
  t = term_n_49;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_11, p_11, r_11, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm n_63 = NULL,o_63 = NULL,p_63 = NULL,q_63 = NULL;
  if(match_cons(t, sym__3))
    {
      n_63 = ATgetArgument(t, 0);
      o_63 = ATgetArgument(t, 1);
      p_63 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_63, o_63);
  {
    ATerm o_49 = t;
    int t_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_49 = ATgetArgument(t, 0);
            ATerm v_49 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(n_63, o_63);
        ;
        LocalPopChoice(t_49);
      }
    else
      {
        t = o_49;
        t = (ATerm) ATempty;
      }
    q_63 = t;
    t = SSL_table_put(n_63, o_63, (ATerm) ATinsert(CheckATermList(q_63), p_63));
    t = (ATerm) ATmakeAppl(sym__3, n_63, o_63, p_63);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm y_63 = NULL,z_63 = NULL,a_64 = NULL,b_64 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_64 = NULL;
      t = term_z_13;
      t = j_0(t);
      c_64 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_49, term_m_49, c_64);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm g_64 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_63 = ATgetFirst((ATermList) t);
          z_63 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_63;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_64 = ATgetFirst((ATermList) t);
          b_64 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_63;
      t = h_0(t);
      t = a_64;
      t = i_0(t);
      g_64 = t;
      t = (ATerm) ATinsert(CheckATermList(b_64), g_64);
    }
  return(t);
}
ATerm s_11 (ATerm t)
{
  ATerm i_64 = NULL;
  i_64 = t;
  if(match_string(t, "-i"))
    {
      t = i_64;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = i_64;
    }
  return(t);
}
ATerm t_11 (ATerm t)
{
  ATerm j_64 = NULL;
  j_64 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), j_64);
  t = (ATerm) ATmakeAppl(sym_Input_1, j_64);
  return(t);
}
ATerm w_11 (ATerm t)
{
  t = term_w_49;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_11, t_11, w_11, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm k_64 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_13;
  t = whoami_0_0(t);
  k_64 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), k_64));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm x_49 = t;
    int y_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_15 = NULL;
        t = eval_config_0_0(t);
        t_15 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), t_15);
        t = t_15;
        ;
        LocalPopChoice(y_49);
      }
    else
      {
        t = x_49;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm d_129 (ATerm), ATerm e_129 (ATerm), ATerm t)
{
  ATerm z_49 = t;
  int a_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = d_129(t);
      ;
      LocalPopChoice(a_50);
    }
  else
    {
      t = z_49;
      {
        ATerm n_64 = NULL,o_64 = NULL,r_64 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_64 = ATgetFirst((ATermList) t);
            o_64 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = o_64;
        t = foldr_2_0(d_129, e_129, t);
        r_64 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_64, r_64);
        t = e_129(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm a_12 (ATerm t)
{
  t = term_k_31;
  return(t);
}
ATerm b_12 (ATerm t)
{
  ATerm a_16 = NULL,b_16 = NULL;
  if(match_cons(t, sym__2))
    {
      a_16 = ATgetArgument(t, 0);
      b_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_50 = t;
    int c_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(a_16, b_16);
        ;
        LocalPopChoice(c_50);
      }
    else
      {
        t = b_50;
        t = SSL_addr(a_16, b_16);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm u_64 = NULL,u_15 = NULL,v_15 = NULL;
  t = times_0_0(t);
  u_15 = t;
  t = SSL_explode_term(u_15);
  if(match_cons(t, sym__2))
    {
      ATerm d_50 = ATgetArgument(t, 0);
      v_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_15;
  t = foldr_2_0(a_12, b_12, t);
  u_64 = t;
  t = SSL_TicksToSeconds(u_64);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm f_65 = NULL,g_65 = NULL,h_65 = NULL;
  f_65 = t;
  if(match_cons(t, sym__2))
    {
      g_65 = ATgetArgument(t, 0);
      h_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_50 = t;
    int f_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_65;
        if((g_65 != t))
          {
            _fail(t);
          }
        t = f_65;
        ;
        LocalPopChoice(f_50);
      }
    else
      {
        t = e_50;
        t = f_65;
        {
          ATerm g_50 = t;
          int h_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(g_65, h_65);
              ;
              LocalPopChoice(h_50);
            }
          else
            {
              t = g_50;
              t = SSL_gtr(g_65, h_65);
            }
          t = (ATerm) ATmakeAppl(sym__2, g_65, h_65);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_138 (ATerm), ATerm t)
{
  ATerm i_50 = t;
  int j_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_65 = NULL,m_65 = NULL;
      k_65 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm k_50 = t;
        int l_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_16 = NULL;
            t = eval_config_0_0(t);
            p_16 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), p_16);
            t = p_16;
            ;
            LocalPopChoice(l_50);
          }
        else
          {
            t = k_50;
          }
        m_65 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_65, term_o_31);
        t = geq_0_0(t);
        t = k_65;
        t = r_138(t);
      }
      ;
      LocalPopChoice(j_50);
    }
  else
    {
      t = i_50;
    }
  return(t);
}
ATerm c_12 (ATerm t)
{
  ATerm o_65 = NULL,p_65 = NULL;
  t = run_time_0_0(t);
  o_65 = t;
  t = term_z_13;
  t = whoami_0_0(t);
  p_65 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), o_65), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), p_65));
  t = (ATerm) ATmakeAppl(sym__2, term_m_50, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_50), o_65), term_r_50), p_65));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(c_12, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm h_12 (ATerm t)
{
  ATerm v_50 = t;
  int w_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(w_50);
    }
  else
    {
      t = v_50;
      {
        ATerm x_50 = t;
        int y_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(y_50);
          }
        else
          {
            t = x_50;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm c_141 (ATerm), ATerm t)
{
  ATerm z_50 = t;
  int a_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm b_51 = t;
        int c_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_16 = NULL;
            t = eval_config_0_0(t);
            v_16 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), v_16);
            t = v_16;
            ;
            LocalPopChoice(c_51);
          }
        else
          {
            t = b_51;
          }
      }
      ;
      LocalPopChoice(a_51);
    }
  else
    {
      t = z_50;
      t = fetch_1_0(h_12, t);
    }
  t = c_141(t);
  return(t);
}
ATerm map_1_0 (ATerm d_124 (ATerm), ATerm t)
{
  ATerm q_65 (ATerm t)
  {
    ATerm d_51 = t;
    int e_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(e_51);
      }
    else
      {
        t = d_51;
        t = Cons_2_0(d_124, q_65, t);
      }
    return(t);
  }
  t = q_65(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm s_65 = NULL,t_65 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_65 = ATgetFirst((ATermList) t);
      t_65 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm x_65 = NULL,y_65 = NULL;
        t = t_65;
        t = f_0(t);
        x_65 = t;
        t = s_65;
        t = e_0(t);
        y_65 = t;
        t = t_65;
        {
          ATerm i_12 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(x_65), y_65);
            return(t);
          }
          t = reverse_acc_2_0(e_0, i_12, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_z_13;
      t = f_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm s_114 (ATerm), ATerm t)
{
  ATerm z_65 = NULL,a_66 = NULL,b_66 = NULL,c_66 = NULL;
  c_66 = t;
  if(match_cons(t, sym_Program_1))
    {
      a_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_66);
  z_65 = t;
  t = a_66;
  t = s_114(t);
  b_66 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, b_66), z_65);
  return(t);
}
ATerm j_12 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm m_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm n_12 (ATerm t)
{
  ATerm f_66 = NULL;
  f_66 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_66), term_f_51);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm g_51 = t;
  int h_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm l_51 = t;
        int n_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_17 = NULL;
            t = eval_config_0_0(t);
            a_17 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), a_17);
            t = a_17;
            ;
            LocalPopChoice(n_51);
          }
        else
          {
            t = l_51;
          }
      }
      ;
      LocalPopChoice(h_51);
    }
  else
    {
      t = g_51;
      t = fetch_1_0(j_12, t);
    }
  t = term_o_51;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, m_12, t);
  t = map_1_0(n_12, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm t_114 (ATerm), ATerm t)
{
  ATerm g_66 = NULL,h_66 = NULL,i_66 = NULL,j_66 = NULL;
  j_66 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      h_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_66);
  g_66 = t;
  t = h_66;
  t = t_114(t);
  i_66 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, i_66), g_66);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm n_66 = NULL,o_66 = NULL;
  n_66 = t;
  {
    ATerm p_51 = t;
    int q_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = n_66;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm r_51 = ATgetFirst((ATermList) t);
                ATerm s_51 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = n_66;
          }
        ;
        LocalPopChoice(q_51);
      }
    else
      {
        t = p_51;
        t = (ATerm) ATinsert(ATempty, n_66);
      }
    o_66 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), o_66);
    t = n_66;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm t_51 = t;
    int u_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_19 = NULL;
        t = eval_config_0_0(t);
        a_19 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), a_19);
        t = a_19;
        ;
        LocalPopChoice(u_51);
      }
    else
      {
        t = t_51;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm o_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_12 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_a_52;
  return(t);
}
ATerm q_12 (ATerm t)
{
  t = term_b_52;
  return(t);
}
ATerm r_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_12 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_c_52;
  return(t);
}
ATerm u_12 (ATerm t)
{
  t = term_d_52;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm e_52 = t;
  int f_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_12, p_12, q_12, t);
      ;
      LocalPopChoice(f_52);
    }
  else
    {
      t = e_52;
      t = Option_3_0(r_12, s_12, u_12, t);
    }
  return(t);
}
ATerm v_12 (ATerm t)
{
  ATerm u_66 = NULL;
  u_66 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), u_66);
  t = (ATerm) ATmakeAppl(sym_Program_1, u_66);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm f_143 (ATerm), ATerm t)
{
  ATerm t_66 = NULL;
  t_66 = t;
  {
    ATerm h_52 = t;
    int i_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_j_52;
        t = f_143(t);
        ;
        LocalPopChoice(i_52);
      }
    else
      {
        t = h_52;
      }
    t = t_66;
    {
      ATerm w_12 (ATerm t)
      {
        ATerm k_52 = t;
        int l_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_52 = t;
            int n_52 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(n_52);
              }
            else
              {
                t = m_52;
                t = f_143(t);
                t = Cons_2_0(_id, w_12, t);
              }
            ;
            LocalPopChoice(l_52);
          }
        else
          {
            t = k_52;
            {
              ATerm w_66 = NULL,x_66 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  w_66 = ATgetFirst((ATermList) t);
                  x_66 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(x_66), (ATerm) ATmakeAppl(sym_Undefined_1, w_66));
            }
          }
        return(t);
      }
      t = Cons_2_0(v_12, w_12, t);
    }
  }
  return(t);
}
ATerm z_12 (ATerm t)
{
  ATerm h_67 = NULL;
  h_67 = t;
  if(match_string(t, "--help"))
    {
      t = h_67;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = h_67;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = h_67;
        }
    }
  return(t);
}
ATerm a_13 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_o_52;
  return(t);
}
ATerm b_13 (ATerm t)
{
  t = term_p_52;
  return(t);
}
ATerm e_13 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm e_143 (ATerm), ATerm t)
{
  ATerm e_67 = NULL,f_67 = NULL,g_67 = NULL;
  e_67 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = e_67;
  {
    ATerm x_12 (ATerm t)
    {
      ATerm q_52 = t;
      int r_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_143(t);
          ;
          LocalPopChoice(r_52);
        }
      else
        {
          t = q_52;
          {
            ATerm v_52 = t;
            int x_52 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(z_12, a_13, b_13, t);
                ;
                LocalPopChoice(x_52);
              }
            else
              {
                t = v_52;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(x_12, t);
    {
      ATerm y_52 = t;
      int z_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_67 = NULL;
          m_67 = t;
          {
            ATerm a_53 = t;
            int b_53 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = m_67;
                {
                  ATerm c_53 = t;
                  int d_53 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm e_53 = t;
                        int f_53 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm s_20 = NULL;
                            t = eval_config_0_0(t);
                            s_20 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), s_20);
                            t = s_20;
                            ;
                            LocalPopChoice(f_53);
                          }
                        else
                          {
                            t = e_53;
                          }
                      }
                      ;
                      LocalPopChoice(d_53);
                    }
                  else
                    {
                      t = c_53;
                      t = fetch_1_0(e_13, t);
                    }
                  t = m_67;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(b_53);
              }
            else
              {
                t = a_53;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm g_53 = t;
                  int h_53 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm s_21 = NULL;
                      t = eval_config_0_0(t);
                      s_21 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), s_21);
                      t = s_21;
                      ;
                      LocalPopChoice(h_53);
                    }
                  else
                    {
                      t = g_53;
                    }
                  t = m_67;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(z_52);
        }
      else
        {
          t = y_52;
          {
            ATerm i_53 = t;
            int j_53 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_13 (ATerm t)
                {
                  ATerm i_13 (ATerm t)
                  {
                    if(((f_67 != NULL) && (f_67 != t)))
                      _fail(t);
                    else
                      f_67 = t;
                    return(t);
                  }
                  t = Undefined_1_0(i_13, t);
                  return(t);
                }
                t = fetch_1_0(h_13, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(f_67)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_m_50, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_67)), term_k_53));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(j_53);
              }
            else
              {
                t = i_53;
              }
          }
        }
      g_67 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = g_67;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm e_141 (ATerm), ATerm f_141 (ATerm), ATerm g_141 (ATerm), ATerm h_141 (ATerm), ATerm t)
{
  ATerm p_67 = NULL;
  t = parse_options_1_0(e_141, t);
  p_67 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), p_67);
  t = p_67;
  t = g_141(t);
  {
    ATerm l_53 = t;
    int m_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(f_141, t);
        ;
        LocalPopChoice(m_53);
      }
    else
      {
        t = l_53;
        {
          ATerm n_53 = t;
          int o_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_141(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(o_53);
            }
          else
            {
              t = n_53;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm k_13 (ATerm t)
{
  t = if_verbose2_1_0(r_13, t);
  return(t);
}
ATerm m_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_13 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_p_53;
  return(t);
}
ATerm q_13 (ATerm t)
{
  t = term_q_53;
  return(t);
}
ATerm r_13 (ATerm t)
{
  ATerm q_67 = NULL,r_67 = NULL;
  q_67 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm r_53 = t;
    int s_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_22 = NULL;
        t = eval_config_0_0(t);
        g_22 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), g_22);
        t = g_22;
        ;
        LocalPopChoice(s_53);
      }
    else
      {
        t = r_53;
      }
    r_67 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, r_67));
    t = q_67;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm n_140 (ATerm), ATerm o_140 (ATerm), ATerm p_140 (ATerm), ATerm t)
{
  ATerm j_13 (ATerm t)
  {
    ATerm t_53 = t;
    int u_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_140(t);
        ;
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
              t = input_option_0_0(t);
              ;
              LocalPopChoice(w_53);
            }
          else
            {
              t = v_53;
              {
                ATerm x_53 = t;
                int y_53 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(y_53);
                  }
                else
                  {
                    t = x_53;
                    {
                      ATerm z_53 = t;
                      int a_54 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(m_13, n_13, q_13, t);
                          ;
                          LocalPopChoice(a_54);
                        }
                      else
                        {
                          t = z_53;
                          {
                            ATerm b_54 = t;
                            int c_54 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(c_54);
                              }
                            else
                              {
                                t = b_54;
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
  ATerm l_13 (ATerm t)
  {
    ATerm s_67 = NULL,t_67 = NULL,p_22 = NULL;
    s_67 = t;
    {
      ATerm d_54 = t;
      int e_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_13 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((t_67 != NULL) && (t_67 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  t_67 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(s_13, t);
          ;
          LocalPopChoice(e_54);
        }
      else
        {
          t = d_54;
          t = term_f_54;
          t_67 = t;
        }
      t = not_null(t_67);
      t = ReadFromFile_0_0(t);
      p_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_67, p_22);
      t = apply_strategy_1_0(n_140, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(j_13, p_140, k_13, l_13, t);
  return(t);
}
ATerm t_13 (ATerm t)
{
  t = _2_0(_id, u_13, t);
  return(t);
}
ATerm u_13 (ATerm t)
{
  t = Specification_1_0(v_13, t);
  return(t);
}
ATerm v_13 (ATerm t)
{
  t = Cons_2_0(_id, w_13, t);
  return(t);
}
ATerm w_13 (ATerm t)
{
  t = Cons_2_0(x_13, y_13, t);
  return(t);
}
ATerm x_13 (ATerm t)
{
  t = Strategies_1_0(inline_sdefs_0_0, t);
  return(t);
}
ATerm y_13 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(t_13, _fail, default_usage_0_0, t);
  return(t);
}
