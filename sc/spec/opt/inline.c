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
ATerm term_k_55;
ATerm term_d_55;
ATerm term_c_55;
ATerm term_g_54;
ATerm term_q_53;
ATerm term_p_53;
ATerm term_a_53;
ATerm term_x_52;
ATerm term_w_52;
ATerm term_v_52;
ATerm term_u_52;
ATerm term_t_52;
ATerm term_s_52;
ATerm term_f_52;
ATerm term_e_52;
ATerm term_p_51;
ATerm term_m_51;
ATerm term_f_51;
ATerm term_e_50;
ATerm term_z_49;
ATerm term_y_49;
ATerm term_x_49;
ATerm term_v_49;
ATerm term_u_49;
ATerm term_t_49;
ATerm term_q_49;
ATerm term_p_49;
ATerm term_m_49;
ATerm term_i_49;
ATerm term_k_48;
ATerm term_s_47;
ATerm term_p_47;
ATerm term_u_42;
ATerm term_j_42;
ATerm term_i_42;
ATerm term_h_42;
ATerm term_g_42;
ATerm term_k_39;
ATerm term_w_37;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_o_34;
ATerm term_i_34;
ATerm term_r_32;
ATerm term_o_32;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_14;
void init_constant_terms (void)
{
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("n_0", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall0", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("d_0", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeInt(50);
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_g_42));
  term_g_42 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_i_42));
  term_i_42 = (ATerm) ATmakeAppl(sym_Op_2, term_h_42, (ATerm) ATempty);
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(sym_ConstType_1, term_i_42);
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_p_47));
  term_p_47 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_s_47));
  term_s_47 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_k_48));
  term_k_48 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_i_49));
  term_i_49 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_m_49));
  term_m_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_p_49));
  term_p_49 = (ATerm) ATmakeAppl(sym_Verbose_1, term_o_32);
  ATprotect(&(term_q_49));
  term_q_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_49));
  term_t_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_49));
  term_u_49 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_49));
  term_v_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_x_49));
  term_x_49 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_y_49));
  term_y_49 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_z_49));
  term_z_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_50));
  term_e_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_f_51));
  term_f_51 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_m_51));
  term_m_51 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_51));
  term_p_51 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_e_52));
  term_e_52 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_52));
  term_f_52 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_52));
  term_s_52 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_52));
  term_t_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_u_52));
  term_u_52 = (ATerm) ATmakeAppl(sym__3, term_s_52, term_t_52, term_v_14);
  ATprotect(&(term_v_52));
  term_v_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_w_52));
  term_w_52 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_52));
  term_x_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_a_53));
  term_a_53 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_q_53));
  term_q_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_54));
  term_g_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_c_55));
  term_c_55 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_55));
  term_d_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_k_55));
  term_k_55 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm TestSavesCurrentTerm_0_0 (ATerm);
ATerm WhereSavesCurrentTerm_0_0 (ATerm);
ATerm FuseScope_0_0 (ATerm);
ATerm SubsArgCall2_0_0 (ATerm);
ATerm SubsArgCall1_0_0 (ATerm);
ATerm topdown_1_0 (ATerm d_118 (ATerm), ATerm);
ATerm substitute_arg_0_0 (ATerm);
ATerm substitute_args_0_0 (ATerm);
ATerm InlineCall_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm spaste_1_0 (ATerm h_117 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm n_107 (ATerm), ATerm o_107 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm f_109 (ATerm), ATerm g_109 (ATerm), ATerm h_109 (ATerm), ATerm);
ATerm Let_2_0 (ATerm q_106 (ATerm), ATerm r_106 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm i_117 (ATerm), ATerm j_117 (ATerm), ATerm k_117 (ATerm), ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm DistBinding_2_0 (ATerm q_131 (ATerm), ATerm r_131 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm RnBinding_2_0 (ATerm k_131 (ATerm), ATerm l_131 (ATerm (ATerm), ATerm), ATerm);
ATerm lookup_0_0 (ATerm);
ATerm env_alltd_1_0 (ATerm y_131 (ATerm), ATerm);
ATerm rename_4_0 (ATerm f_131 (ATerm (ATerm), ATerm), ATerm g_131 (ATerm), ATerm h_131 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm i_131 (ATerm (ATerm), ATerm), ATerm);
ATerm tpaste_1_0 (ATerm d_117 (ATerm), ATerm);
ATerm DynamicRules_1_0 (ATerm x_105 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm o_105 (ATerm), ATerm p_105 (ATerm), ATerm q_105 (ATerm), ATerm r_105 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm e_117 (ATerm), ATerm f_117 (ATerm), ATerm g_117 (ATerm), ATerm);
ATerm tvars_0_0 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm union_1_0 (ATerm r_126 (ATerm), ATerm);
ATerm diff_1_0 (ATerm n_126 (ATerm), ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm while_not_2_0 (ATerm o_135 (ATerm), ATerm p_135 (ATerm), ATerm);
ATerm for_3_0 (ATerm r_135 (ATerm), ATerm s_135 (ATerm), ATerm t_135 (ATerm), ATerm);
ATerm diff_0_0 (ATerm);
ATerm free_vars_3_0 (ATerm i_133 (ATerm), ATerm j_133 (ATerm), ATerm k_133 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm Var_1_0 (ATerm g_103 (ATerm), ATerm);
ATerm strename_0_0 (ATerm);
ATerm InlineCall0_0_0 (ATerm);
ATerm occurrences_1_0 (ATerm z_126 (ATerm), ATerm);
ATerm local_inlinable_1_0 (ATerm i_116 (ATerm), ATerm);
ATerm UndefineSDef_0_0 (ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm m_130 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm k_121 (ATerm), ATerm l_121 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm l_130 (ATerm), ATerm);
ATerm scope_2_0 (ATerm n_130 (ATerm), ATerm o_130 (ATerm), ATerm);
ATerm inline_sdef_0_0 (ATerm);
ATerm assert_1_0 (ATerm p_130 (ATerm), ATerm);
ATerm AddSDef_0_0 (ATerm);
ATerm leq_0_0 (ATerm);
ATerm foldr_3_0 (ATerm g_129 (ATerm), ATerm h_129 (ATerm), ATerm i_129 (ATerm), ATerm);
ATerm term_size_0_0 (ATerm);
ATerm GuardedLChoice_3_0 (ATerm k_107 (ATerm), ATerm l_107 (ATerm), ATerm m_107 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm g_107 (ATerm), ATerm h_107 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm e_106 (ATerm), ATerm f_106 (ATerm), ATerm);
ATerm Match_1_0 (ATerm x_106 (ATerm), ATerm);
ATerm Seq_2_0 (ATerm e_107 (ATerm), ATerm f_107 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm a_107 (ATerm), ATerm b_107 (ATerm), ATerm);
ATerm Build_1_0 (ATerm y_106 (ATerm), ATerm);
ATerm SVar_1_0 (ATerm p_106 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm w_107 (ATerm), ATerm x_107 (ATerm), ATerm y_107 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm u_106 (ATerm), ATerm v_106 (ATerm), ATerm w_106 (ATerm), ATerm);
ATerm body_to_inline_0_0 (ATerm);
ATerm SDefT_4_0 (ATerm i_109 (ATerm), ATerm j_109 (ATerm), ATerm k_109 (ATerm), ATerm l_109 (ATerm), ATerm);
ATerm inlineable_0_0 (ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm genzip_4_0 (ATerm p_122 (ATerm), ATerm q_122 (ATerm), ATerm r_122 (ATerm), ATerm s_122 (ATerm), ATerm);
ATerm BuildMatchFusion_0_0 (ATerm);
ATerm MisMatch_0_0 (ATerm);
ATerm BuildMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm h_119 (ATerm), ATerm);
ATerm LetHoist_0_0 (ATerm);
ATerm Idempotency_0_0 (ATerm);
ATerm AssociateR_0_0 (ATerm);
ATerm map1_1_0 (ATerm l_0 (ATerm), ATerm);
ATerm HL_0_0 (ATerm);
ATerm ElimFail_0_0 (ATerm);
ATerm ElimId_0_0 (ATerm);
ATerm Simplify_0_0 (ATerm);
ATerm repeat_1_0 (ATerm z_134 (ATerm), ATerm);
ATerm downup_1_0 (ATerm f_118 (ATerm), ATerm);
ATerm inline_sdefs_0_0 (ATerm);
ATerm Strategies_1_0 (ATerm i_102 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm c_102 (ATerm), ATerm d_102 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm n_102 (ATerm), ATerm);
ATerm _2_0 (ATerm n_97 (ATerm), ATerm o_97 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm q_145 (ATerm), ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm f_140 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm p_124 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm v_124 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm m_138 (ATerm), ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm e_129 (ATerm), ATerm f_129 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm l_138 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm d_141 (ATerm), ATerm);
ATerm map_1_0 (ATerm e_124 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm t_114 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm u_114 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm g_143 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm f_143 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm f_141 (ATerm), ATerm g_141 (ATerm), ATerm h_141 (ATerm), ATerm i_141 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm o_140 (ATerm), ATerm p_140 (ATerm), ATerm q_140 (ATerm), ATerm);
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
  t = term_v_14;
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
  ATerm r_0 = NULL,u_0 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      r_0 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = new_0_0(t);
  u_0 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, u_0), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, u_0)), (ATerm) ATmakeAppl(sym_Seq_2, r_0, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, u_0)))));
  return(t);
}
ATerm FuseScope_0_0 (ATerm t)
{
  ATerm w_0 = NULL,x_0 = NULL,y_0 = NULL,z_0 = NULL;
  if(match_cons(t, sym_Scope_2))
    {
      w_0 = ATgetArgument(t, 0);
      {
        ATerm w_14 = ATgetArgument(t, 1);
        if(match_cons(w_14, sym_Scope_2))
          {
            x_0 = ATgetArgument(w_14, 0);
            y_0 = ATgetArgument(w_14, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_0, x_0);
  {
    ATerm x_14 = t;
    int y_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_14 = ATgetArgument(t, 0);
            ATerm a_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = w_0;
        {
          ATerm s_0 (ATerm t)
          {
            t = x_0;
            return(t);
          }
          t = at_end_1_0(s_0, t);
        }
        ;
        LocalPopChoice(y_14);
      }
    else
      {
        t = x_14;
        {
          ATerm e_1 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, w_0, x_0));
          if(match_cons(t, sym__2))
            {
              ATerm b_15 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) b_15) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              e_1 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = e_1;
          t = concat_0_0(t);
        }
      }
    z_0 = t;
    t = (ATerm) ATmakeAppl(sym_Scope_2, z_0, y_0);
  }
  return(t);
}
ATerm SubsArgCall2_0_0 (ATerm t)
{
  ATerm d_1 = NULL,g_1 = NULL,h_1 = NULL,j_1 = NULL,k_1 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm c_15 = ATgetArgument(t, 0);
      if(match_cons(c_15, sym_SVar_1))
        {
          d_1 = ATgetArgument(c_15, 0);
        }
      else
        _fail(t);
      g_1 = ATgetArgument(t, 1);
      h_1 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue)), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, d_1), (ATerm)ATempty, (ATerm) ATempty));
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_1 = ATgetFirst((ATermList) t);
      {
        ATerm e_15 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = k_1;
  if(match_cons(t, sym_Defined_2))
    {
      ATerm g_15 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_15) != ATmakeSymbol("n_0", 0, ATtrue)))
        _fail(t);
      j_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, j_1), g_1, h_1);
  return(t);
}
ATerm SubsArgCall1_0_0 (ATerm t)
{
  ATerm l_1 = NULL,m_1 = NULL,n_1 = NULL;
  l_1 = t;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm h_15 = ATgetArgument(t, 0);
      if(match_cons(h_15, sym_SVar_1))
        {
          ATerm l_15 = ATgetArgument(h_15, 0);
        }
      else
        _fail(t);
      {
        ATerm i_15 = ATgetArgument(t, 1);
        if(((ATgetType(i_15) != AT_LIST) || !(ATisEmpty(i_15))))
          _fail(t);
      }
      {
        ATerm j_15 = ATgetArgument(t, 2);
        if(((ATgetType(j_15) != AT_LIST) || !(ATisEmpty(j_15))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue)), l_1);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_1 = ATgetFirst((ATermList) t);
      {
        ATerm m_15 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = n_1;
  if(match_cons(t, sym_Defined_2))
    {
      ATerm n_15 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_15) != ATmakeSymbol("k_0", 0, ATtrue)))
        _fail(t);
      m_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_1;
  t = strename_0_0(t);
  return(t);
}
ATerm topdown_1_0 (ATerm d_118 (ATerm), ATerm t)
{
  t = d_118(t);
  {
    ATerm t_0 (ATerm t)
    {
      t = topdown_1_0(d_118, t);
      return(t);
    }
    t = SRTS_all(t_0, t);
  }
  return(t);
}
ATerm substitute_arg_0_0 (ATerm t)
{
  ATerm h_2 = NULL,i_2 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL,q_2 = NULL,s_2 = NULL,u_2 = NULL,d_3 = NULL;
  l_2 = t;
  if(match_cons(t, sym__2))
    {
      m_2 = ATgetArgument(t, 0);
      d_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_2;
  if(match_cons(t, sym_VarDec_2))
    {
      n_2 = ATgetArgument(t, 0);
      q_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_2;
  if(match_cons(t, sym_FunType_2))
    {
      s_2 = ATgetArgument(t, 0);
      {
        ATerm o_15 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = s_2;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm q_15 = ATgetFirst((ATermList) t);
      u_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_2;
  {
    ATerm r_15 = t;
    int t_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm u_15 = ATgetFirst((ATermList) t);
            ATerm v_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(t_15);
        t = d_3;
        if(match_cons(t, sym_CallT_3))
          {
            h_2 = ATgetArgument(t, 0);
            j_2 = ATgetArgument(t, 1);
            k_2 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = h_2;
        if(match_cons(t, sym_SVar_1))
          {
            i_2 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = j_2;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = k_2;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, n_2), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_w_15, i_2));
        {
          ATerm v_0 (ATerm t)
          {
            t = term_x_15;
            return(t);
          }
          t = assert_1_0(v_0, t);
          t = l_2;
        }
      }
    else
      {
        t = r_15;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, n_2), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_y_15, d_3));
        {
          ATerm a_1 (ATerm t)
          {
            t = term_z_15;
            return(t);
          }
          t = assert_1_0(a_1, t);
          t = l_2;
        }
      }
  }
  return(t);
}
ATerm substitute_args_0_0 (ATerm t)
{
  ATerm z_3 = NULL,a_4 = NULL,b_4 = NULL;
  ATerm b_1 (ATerm t)
  {
    t = term_z_15;
    return(t);
  }
  ATerm c_1 (ATerm t)
  {
    ATerm f_1 (ATerm t)
    {
      t = term_x_15;
      return(t);
    }
    ATerm i_1 (ATerm t)
    {
      if(match_cons(t, sym__3))
        {
          if(((z_3 != NULL) && (z_3 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            z_3 = ATgetArgument(t, 0);
          if(((a_4 != NULL) && (a_4 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            a_4 = ATgetArgument(t, 1);
          if(((b_4 != NULL) && (b_4 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            b_4 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, not_null(z_3), not_null(a_4));
      {
        ATerm o_1 (ATerm t)
        {
          if(match_cons(t, sym__2))
            {
              ATerm a_16 = ATgetArgument(t, 0);
              if(((ATgetType(a_16) != AT_LIST) || !(ATisEmpty(a_16))))
                _fail(t);
              {
                ATerm b_16 = ATgetArgument(t, 1);
                if(((ATgetType(b_16) != AT_LIST) || !(ATisEmpty(b_16))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATempty;
          return(t);
        }
        ATerm q_1 (ATerm t)
        {
          ATerm d_4 = NULL,e_4 = NULL,g_4 = NULL,h_4 = NULL;
          if(match_cons(t, sym__2))
            {
              ATerm c_16 = ATgetArgument(t, 0);
              if(((ATgetType(c_16) == AT_LIST) && !(ATisEmpty(c_16))))
                {
                  d_4 = ATgetFirst((ATermList) c_16);
                  g_4 = (ATerm) ATgetNext((ATermList) c_16);
                }
              else
                _fail(t);
              {
                ATerm d_16 = ATgetArgument(t, 1);
                if(((ATgetType(d_16) == AT_LIST) && !(ATisEmpty(d_16))))
                  {
                    e_4 = ATgetFirst((ATermList) d_16);
                    h_4 = (ATerm) ATgetNext((ATermList) d_16);
                  }
                else
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_4, e_4), (ATerm) ATmakeAppl(sym__2, g_4, h_4));
          return(t);
        }
        ATerm r_1 (ATerm t)
        {
          ATerm j_4 = NULL,k_4 = NULL;
          if(match_cons(t, sym__2))
            {
              j_4 = ATgetArgument(t, 0);
              k_4 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(k_4), j_4);
          return(t);
        }
        t = genzip_4_0(o_1, q_1, r_1, substitute_arg_0_0, t);
        t = not_null(b_4);
        {
          ATerm s_1 (ATerm t)
          {
            ATerm e_16 = t;
            int f_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_16 = t;
                int h_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = SubsArgCall1_0_0(t);
                    ;
                    LocalPopChoice(h_16);
                  }
                else
                  {
                    t = g_16;
                    t = SubsArgCall2_0_0(t);
                  }
                ;
                LocalPopChoice(f_16);
              }
            else
              {
                t = e_16;
              }
            return(t);
          }
          t = topdown_1_0(s_1, t);
        }
      }
      return(t);
    }
    t = scope_2_0(f_1, i_1, t);
    return(t);
  }
  t = scope_2_0(b_1, c_1, t);
  return(t);
}
ATerm InlineCall_0_0 (ATerm t)
{
  ATerm b_9 = NULL,c_9 = NULL,d_9 = NULL,h_9 = NULL,i_9 = NULL;
  b_9 = t;
  if(match_cons(t, sym_CallT_3))
    {
      c_9 = ATgetArgument(t, 0);
      h_9 = ATgetArgument(t, 1);
      i_9 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = c_9;
  if(match_cons(t, sym_SVar_1))
    {
      d_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm i_16 = t;
    int j_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_1 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue)), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, d_9), (ATerm)ATempty, (ATerm) ATempty));
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_1 = ATgetFirst((ATermList) t);
            {
              ATerm k_16 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = p_1;
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        _fail(t);
        ;
        LocalPopChoice(j_16);
      }
    else
      {
        t = i_16;
        {
          ATerm l_16 = t;
          int m_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_1 = NULL;
              t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue)), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, d_9), (ATerm)ATempty, (ATerm) ATempty));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  t_1 = ATgetFirst((ATermList) t);
                  {
                    ATerm n_16 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = t_1;
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              _fail(t);
              ;
              LocalPopChoice(m_16);
            }
          else
            {
              t = l_16;
              {
                ATerm o_16 = t;
                int p_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm b_2 = NULL,c_2 = NULL,d_2 = NULL,f_2 = NULL,o_2 = NULL,p_2 = NULL,r_2 = NULL,v_2 = NULL;
                    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue)), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, d_9), (ATerm)ATempty, (ATerm) ATempty));
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        c_2 = ATgetFirst((ATermList) t);
                        {
                          ATerm q_16 = (ATerm) ATgetNext((ATermList) t);
                        }
                      }
                    else
                      _fail(t);
                    t = c_2;
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm r_16 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) r_16) != ATmakeSymbol("d_0", 0, ATtrue)))
                          _fail(t);
                        b_2 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = b_2;
                    t = strename_0_0(t);
                    if(match_cons(t, sym_SDefT_4))
                      {
                        if((d_9 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        d_2 = ATgetArgument(t, 1);
                        f_2 = ATgetArgument(t, 2);
                        o_2 = ATgetArgument(t, 3);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__3, d_2, h_9, o_2);
                    t = substitute_args_0_0(t);
                    p_2 = t;
                    t = f_2;
                    {
                      ATerm u_1 (ATerm t)
                      {
                        ATerm w_2 = NULL;
                        if(match_cons(t, sym_VarDec_2))
                          {
                            w_2 = ATgetArgument(t, 0);
                            {
                              ATerm s_16 = ATgetArgument(t, 1);
                            }
                          }
                        else
                          _fail(t);
                        t = w_2;
                        return(t);
                      }
                      t = map_1_0(u_1, t);
                      r_2 = t;
                      t = (ATerm) ATmakeAppl(sym__2, i_9, r_2);
                      {
                        ATerm v_1 (ATerm t)
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
                        ATerm w_1 (ATerm t)
                        {
                          ATerm x_2 = NULL,y_2 = NULL,a_3 = NULL,b_3 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              ATerm v_16 = ATgetArgument(t, 0);
                              if(((ATgetType(v_16) == AT_LIST) && !(ATisEmpty(v_16))))
                                {
                                  x_2 = ATgetFirst((ATermList) v_16);
                                  a_3 = (ATerm) ATgetNext((ATermList) v_16);
                                }
                              else
                                _fail(t);
                              {
                                ATerm w_16 = ATgetArgument(t, 1);
                                if(((ATgetType(w_16) == AT_LIST) && !(ATisEmpty(w_16))))
                                  {
                                    y_2 = ATgetFirst((ATermList) w_16);
                                    b_3 = (ATerm) ATgetNext((ATermList) w_16);
                                  }
                                else
                                  _fail(t);
                              }
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_2, y_2), (ATerm) ATmakeAppl(sym__2, a_3, b_3));
                          return(t);
                        }
                        ATerm x_1 (ATerm t)
                        {
                          ATerm c_3 = NULL,e_3 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              c_3 = ATgetArgument(t, 0);
                              e_3 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATinsert(CheckATermList(e_3), c_3);
                          return(t);
                        }
                        ATerm y_1 (ATerm t)
                        {
                          ATerm f_3 = NULL,g_3 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              f_3 = ATgetArgument(t, 0);
                              g_3 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, f_3), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, g_3))));
                          return(t);
                        }
                        t = genzip_4_0(v_1, w_1, x_1, y_1, t);
                        v_2 = t;
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, d_9), (ATerm)ATempty, (ATerm) ATempty), term_x_16);
                        {
                          ATerm z_1 (ATerm t)
                          {
                            t = term_y_16;
                            return(t);
                          }
                          t = assert_1_0(z_1, t);
                          t = (ATerm) ATmakeAppl(sym_Scope_2, r_2, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, v_2), p_2));
                          {
                            ATerm a_2 (ATerm t)
                            {
                              ATerm e_2 (ATerm t)
                              {
                                ATerm z_16 = t;
                                int a_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Simplify_0_0(t);
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
                                          ATerm i_3 = NULL,l_3 = NULL,m_3 = NULL,n_3 = NULL;
                                          if(match_cons(t, sym_Seq_2))
                                            {
                                              i_3 = ATgetArgument(t, 0);
                                              l_3 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = l_3;
                                          if(match_cons(t, sym_Let_2))
                                            {
                                              m_3 = ATgetArgument(t, 0);
                                              n_3 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Let_2, m_3, (ATerm) ATmakeAppl(sym_Seq_2, i_3, n_3));
                                          ;
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
                                                t = FuseScope_0_0(t);
                                                ;
                                                LocalPopChoice(e_17);
                                              }
                                            else
                                              {
                                                t = d_17;
                                                {
                                                  ATerm f_17 = t;
                                                  int g_17 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = WhereSavesCurrentTerm_0_0(t);
                                                      ;
                                                      LocalPopChoice(g_17);
                                                    }
                                                  else
                                                    {
                                                      t = f_17;
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
                              t = repeat_1_0(e_2, t);
                              return(t);
                            }
                            t = downup_1_0(a_2, t);
                          }
                        }
                      }
                    }
                    ;
                    LocalPopChoice(p_16);
                  }
                else
                  {
                    t = o_16;
                    {
                      ATerm y_3 = NULL;
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue)), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, d_9), (ATerm)ATempty, (ATerm) ATempty));
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          y_3 = ATgetFirst((ATermList) t);
                          {
                            ATerm h_17 = (ATerm) ATgetNext((ATermList) t);
                          }
                        }
                      else
                        _fail(t);
                      t = y_3;
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
ATerm spaste_1_0 (ATerm h_117 (ATerm), ATerm t)
{
  ATerm i_17 = t;
  int j_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_2 (ATerm t)
      {
        ATerm c_4 = NULL,i_4 = NULL;
        c_4 = t;
        t = h_117(t);
        i_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_4, i_4);
        {
          ATerm t_2 (ATerm t)
          {
            if(match_cons(t, sym__2))
              {
                ATerm p_17 = ATgetArgument(t, 0);
                if(((ATgetType(p_17) != AT_LIST) || !(ATisEmpty(p_17))))
                  _fail(t);
                {
                  ATerm q_17 = ATgetArgument(t, 1);
                  if(((ATgetType(q_17) != AT_LIST) || !(ATisEmpty(q_17))))
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATempty;
            return(t);
          }
          ATerm z_2 (ATerm t)
          {
            ATerm l_11 = NULL,a_12 = NULL,n_12 = NULL,o_12 = NULL;
            if(match_cons(t, sym__2))
              {
                ATerm r_17 = ATgetArgument(t, 0);
                if(((ATgetType(r_17) == AT_LIST) && !(ATisEmpty(r_17))))
                  {
                    l_11 = ATgetFirst((ATermList) r_17);
                    n_12 = (ATerm) ATgetNext((ATermList) r_17);
                  }
                else
                  _fail(t);
                {
                  ATerm s_17 = ATgetArgument(t, 1);
                  if(((ATgetType(s_17) == AT_LIST) && !(ATisEmpty(s_17))))
                    {
                      a_12 = ATgetFirst((ATermList) s_17);
                      o_12 = (ATerm) ATgetNext((ATermList) s_17);
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, l_11, a_12), (ATerm) ATmakeAppl(sym__2, n_12, o_12));
            return(t);
          }
          ATerm h_3 (ATerm t)
          {
            ATerm q_12 = NULL,d_13 = NULL;
            if(match_cons(t, sym__2))
              {
                q_12 = ATgetArgument(t, 0);
                d_13 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(d_13), q_12);
            return(t);
          }
          ATerm j_3 (ATerm t)
          {
            ATerm n_13 = NULL,i_14 = NULL,k_14 = NULL,s_14 = NULL,f_15 = NULL;
            if(match_cons(t, sym__2))
              {
                n_13 = ATgetArgument(t, 0);
                f_15 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = n_13;
            {
              ATerm u_17 = t;
              int v_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SDef_3))
                    {
                      ATerm w_17 = ATgetArgument(t, 0);
                      i_14 = ATgetArgument(t, 1);
                      k_14 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(v_17);
                  t = (ATerm) ATmakeAppl(sym_SDef_3, f_15, i_14, k_14);
                }
              else
                {
                  t = u_17;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      ATerm y_17 = ATgetArgument(t, 0);
                      i_14 = ATgetArgument(t, 1);
                      k_14 = ATgetArgument(t, 2);
                      s_14 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_SDefT_4, f_15, i_14, k_14, s_14);
                }
            }
            return(t);
          }
          t = genzip_4_0(t_2, z_2, h_3, j_3, t);
        }
        return(t);
      }
      t = Let_2_0(g_2, _id, t);
      ;
      LocalPopChoice(j_17);
    }
  else
    {
      t = i_17;
      {
        ATerm b_18 = t;
        int c_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_3 (ATerm t)
            {
              ATerm n_4 = NULL,p_4 = NULL;
              n_4 = t;
              t = h_117(t);
              p_4 = t;
              t = (ATerm) ATmakeAppl(sym__2, n_4, p_4);
              {
                ATerm o_3 (ATerm t)
                {
                  if(match_cons(t, sym__2))
                    {
                      ATerm d_18 = ATgetArgument(t, 0);
                      if(((ATgetType(d_18) != AT_LIST) || !(ATisEmpty(d_18))))
                        _fail(t);
                      {
                        ATerm e_18 = ATgetArgument(t, 1);
                        if(((ATgetType(e_18) != AT_LIST) || !(ATisEmpty(e_18))))
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATempty;
                  return(t);
                }
                ATerm p_3 (ATerm t)
                {
                  ATerm k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm f_18 = ATgetArgument(t, 0);
                      if(((ATgetType(f_18) == AT_LIST) && !(ATisEmpty(f_18))))
                        {
                          k_17 = ATgetFirst((ATermList) f_18);
                          m_17 = (ATerm) ATgetNext((ATermList) f_18);
                        }
                      else
                        _fail(t);
                      {
                        ATerm g_18 = ATgetArgument(t, 1);
                        if(((ATgetType(g_18) == AT_LIST) && !(ATisEmpty(g_18))))
                          {
                            l_17 = ATgetFirst((ATermList) g_18);
                            n_17 = (ATerm) ATgetNext((ATermList) g_18);
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_17, l_17), (ATerm) ATmakeAppl(sym__2, m_17, n_17));
                  return(t);
                }
                ATerm q_3 (ATerm t)
                {
                  ATerm o_17 = NULL,t_17 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      o_17 = ATgetArgument(t, 0);
                      t_17 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATinsert(CheckATermList(t_17), o_17);
                  return(t);
                }
                ATerm r_3 (ATerm t)
                {
                  ATerm x_17 = NULL,z_17 = NULL,a_18 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      x_17 = ATgetArgument(t, 0);
                      a_18 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = x_17;
                  {
                    ATerm n_18 = t;
                    int p_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_DefaultVarDec_1))
                          {
                            ATerm s_18 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(p_18);
                        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, a_18);
                      }
                    else
                      {
                        t = n_18;
                        if(match_cons(t, sym_VarDec_2))
                          {
                            ATerm t_18 = ATgetArgument(t, 0);
                            z_17 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_VarDec_2, a_18, z_17);
                      }
                  }
                  return(t);
                }
                t = genzip_4_0(o_3, p_3, q_3, r_3, t);
              }
              return(t);
            }
            t = SDef_3_0(_id, k_3, _id, t);
            ;
            LocalPopChoice(c_18);
          }
        else
          {
            t = b_18;
            {
              ATerm u_18 = t;
              int b_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_3 (ATerm t)
                  {
                    ATerm s_4 = NULL,u_4 = NULL;
                    s_4 = t;
                    t = h_117(t);
                    u_4 = t;
                    t = (ATerm) ATmakeAppl(sym__2, s_4, u_4);
                    {
                      ATerm t_3 (ATerm t)
                      {
                        if(match_cons(t, sym__2))
                          {
                            ATerm d_19 = ATgetArgument(t, 0);
                            if(((ATgetType(d_19) != AT_LIST) || !(ATisEmpty(d_19))))
                              _fail(t);
                            {
                              ATerm g_19 = ATgetArgument(t, 1);
                              if(((ATgetType(g_19) != AT_LIST) || !(ATisEmpty(g_19))))
                                _fail(t);
                            }
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATempty;
                        return(t);
                      }
                      ATerm u_3 (ATerm t)
                      {
                        ATerm h_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            ATerm h_19 = ATgetArgument(t, 0);
                            if(((ATgetType(h_19) == AT_LIST) && !(ATisEmpty(h_19))))
                              {
                                h_18 = ATgetFirst((ATermList) h_19);
                                j_18 = (ATerm) ATgetNext((ATermList) h_19);
                              }
                            else
                              _fail(t);
                            {
                              ATerm i_19 = ATgetArgument(t, 1);
                              if(((ATgetType(i_19) == AT_LIST) && !(ATisEmpty(i_19))))
                                {
                                  i_18 = ATgetFirst((ATermList) i_19);
                                  k_18 = (ATerm) ATgetNext((ATermList) i_19);
                                }
                              else
                                _fail(t);
                            }
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_18, i_18), (ATerm) ATmakeAppl(sym__2, j_18, k_18));
                        return(t);
                      }
                      ATerm v_3 (ATerm t)
                      {
                        ATerm l_18 = NULL,m_18 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            l_18 = ATgetArgument(t, 0);
                            m_18 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATinsert(CheckATermList(m_18), l_18);
                        return(t);
                      }
                      ATerm w_3 (ATerm t)
                      {
                        ATerm o_18 = NULL,q_18 = NULL,r_18 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            o_18 = ATgetArgument(t, 0);
                            r_18 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = o_18;
                        {
                          ATerm q_19 = t;
                          int r_19 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_DefaultVarDec_1))
                                {
                                  ATerm a_20 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(r_19);
                              t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, r_18);
                            }
                          else
                            {
                              t = q_19;
                              if(match_cons(t, sym_VarDec_2))
                                {
                                  ATerm b_20 = ATgetArgument(t, 0);
                                  q_18 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym_VarDec_2, r_18, q_18);
                            }
                        }
                        return(t);
                      }
                      t = genzip_4_0(t_3, u_3, v_3, w_3, t);
                    }
                    return(t);
                  }
                  t = SDefT_4_0(_id, s_3, _id, _id, t);
                  ;
                  LocalPopChoice(b_19);
                }
              else
                {
                  t = u_18;
                  {
                    ATerm h_20 = t;
                    int i_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm x_3 (ATerm t)
                        {
                          ATerm x_4 = NULL,z_4 = NULL;
                          x_4 = t;
                          t = h_117(t);
                          z_4 = t;
                          t = (ATerm) ATmakeAppl(sym__2, x_4, z_4);
                          {
                            ATerm f_4 (ATerm t)
                            {
                              if(match_cons(t, sym__2))
                                {
                                  ATerm j_20 = ATgetArgument(t, 0);
                                  if(((ATgetType(j_20) != AT_LIST) || !(ATisEmpty(j_20))))
                                    _fail(t);
                                  {
                                    ATerm k_20 = ATgetArgument(t, 1);
                                    if(((ATgetType(k_20) != AT_LIST) || !(ATisEmpty(k_20))))
                                      _fail(t);
                                  }
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATempty;
                              return(t);
                            }
                            ATerm l_4 (ATerm t)
                            {
                              ATerm v_18 = NULL,w_18 = NULL,x_18 = NULL,y_18 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  ATerm m_20 = ATgetArgument(t, 0);
                                  if(((ATgetType(m_20) == AT_LIST) && !(ATisEmpty(m_20))))
                                    {
                                      v_18 = ATgetFirst((ATermList) m_20);
                                      x_18 = (ATerm) ATgetNext((ATermList) m_20);
                                    }
                                  else
                                    _fail(t);
                                  {
                                    ATerm n_20 = ATgetArgument(t, 1);
                                    if(((ATgetType(n_20) == AT_LIST) && !(ATisEmpty(n_20))))
                                      {
                                        w_18 = ATgetFirst((ATermList) n_20);
                                        y_18 = (ATerm) ATgetNext((ATermList) n_20);
                                      }
                                    else
                                      _fail(t);
                                  }
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_18, w_18), (ATerm) ATmakeAppl(sym__2, x_18, y_18));
                              return(t);
                            }
                            ATerm m_4 (ATerm t)
                            {
                              ATerm z_18 = NULL,a_19 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  z_18 = ATgetArgument(t, 0);
                                  a_19 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATinsert(CheckATermList(a_19), z_18);
                              return(t);
                            }
                            ATerm o_4 (ATerm t)
                            {
                              ATerm c_19 = NULL,e_19 = NULL,f_19 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  c_19 = ATgetArgument(t, 0);
                                  f_19 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = c_19;
                              {
                                ATerm o_20 = t;
                                int p_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        ATerm q_20 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(p_20);
                                    t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, f_19);
                                  }
                                else
                                  {
                                    t = o_20;
                                    if(match_cons(t, sym_VarDec_2))
                                      {
                                        ATerm s_20 = ATgetArgument(t, 0);
                                        e_19 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, f_19, e_19);
                                  }
                              }
                              return(t);
                            }
                            t = genzip_4_0(f_4, l_4, m_4, o_4, t);
                          }
                          return(t);
                        }
                        t = RDefT_4_0(_id, x_3, _id, _id, t);
                        ;
                        LocalPopChoice(i_20);
                      }
                    else
                      {
                        t = h_20;
                        {
                          ATerm q_4 (ATerm t)
                          {
                            ATerm j_19 = NULL;
                            t = h_117(t);
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                j_19 = ATgetFirst((ATermList) t);
                                {
                                  ATerm u_20 = (ATerm) ATgetNext((ATermList) t);
                                }
                              }
                            else
                              _fail(t);
                            t = j_19;
                            return(t);
                          }
                          t = Rec_2_0(q_4, _id, t);
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
ATerm Rec_2_0 (ATerm n_107 (ATerm), ATerm o_107 (ATerm), ATerm t)
{
  ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL;
  p_19 = t;
  if(match_cons(t, sym_Rec_2))
    {
      l_19 = ATgetArgument(t, 0);
      m_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_19);
  k_19 = t;
  t = l_19;
  t = n_107(t);
  n_19 = t;
  t = m_19;
  t = o_107(t);
  o_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, n_19, o_19), k_19);
  return(t);
}
ATerm SDef_3_0 (ATerm f_109 (ATerm), ATerm g_109 (ATerm), ATerm h_109 (ATerm), ATerm t)
{
  ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL,y_19 = NULL,z_19 = NULL;
  z_19 = t;
  if(match_cons(t, sym_SDef_3))
    {
      t_19 = ATgetArgument(t, 0);
      u_19 = ATgetArgument(t, 1);
      v_19 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_19);
  s_19 = t;
  t = t_19;
  t = f_109(t);
  w_19 = t;
  t = u_19;
  t = g_109(t);
  x_19 = t;
  t = v_19;
  t = h_109(t);
  y_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, w_19, x_19, y_19), s_19);
  return(t);
}
ATerm Let_2_0 (ATerm q_106 (ATerm), ATerm r_106 (ATerm), ATerm t)
{
  ATerm c_20 = NULL,d_20 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL,l_20 = NULL;
  l_20 = t;
  if(match_cons(t, sym_Let_2))
    {
      d_20 = ATgetArgument(t, 0);
      e_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_20);
  c_20 = t;
  t = d_20;
  t = q_106(t);
  f_20 = t;
  t = e_20;
  t = r_106(t);
  g_20 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, f_20, g_20), c_20);
  return(t);
}
ATerm sboundin_3_0 (ATerm i_117 (ATerm), ATerm j_117 (ATerm), ATerm k_117 (ATerm), ATerm t)
{
  ATerm v_20 = t;
  int w_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(i_117, i_117, t);
      ;
      LocalPopChoice(w_20);
    }
  else
    {
      t = v_20;
      {
        ATerm x_20 = t;
        int y_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(k_117, k_117, i_117, t);
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
                  t = SDefT_4_0(k_117, k_117, k_117, i_117, t);
                  ;
                  LocalPopChoice(a_21);
                }
              else
                {
                  t = z_20;
                  t = Rec_2_0(k_117, i_117, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm r_20 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      r_20 = ATgetArgument(t, 0);
      {
        ATerm b_21 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = r_20;
  {
    ATerm r_4 (ATerm t)
    {
      ATerm t_20 = NULL;
      ATerm c_21 = t;
      int d_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_SDef_3))
            {
              t_20 = ATgetArgument(t, 0);
              {
                ATerm e_21 = ATgetArgument(t, 1);
              }
              {
                ATerm g_21 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          LocalPopChoice(d_21);
          t = t_20;
        }
      else
        {
          t = c_21;
          if(match_cons(t, sym_SDefT_4))
            {
              t_20 = ATgetArgument(t, 0);
              {
                ATerm i_21 = ATgetArgument(t, 1);
              }
              {
                ATerm k_21 = ATgetArgument(t, 2);
              }
              {
                ATerm n_21 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          t = t_20;
        }
      return(t);
    }
    t = map_1_0(r_4, t);
  }
  return(t);
}
ATerm DistBinding_2_0 (ATerm q_131 (ATerm), ATerm r_131 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm f_21 = NULL,h_21 = NULL,j_21 = NULL;
  if(match_cons(t, sym__3))
    {
      j_21 = ATgetArgument(t, 0);
      h_21 = ATgetArgument(t, 1);
      f_21 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = j_21;
  {
    ATerm t_4 (ATerm t)
    {
      ATerm l_21 = NULL;
      l_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_21, f_21);
      t = q_131(t);
      return(t);
    }
    ATerm v_4 (ATerm t)
    {
      ATerm m_21 = NULL;
      m_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_21, h_21);
      t = q_131(t);
      return(t);
    }
    t = r_131(t_4, v_4, _id, t);
  }
  return(t);
}
ATerm RnBinding_2_0 (ATerm k_131 (ATerm), ATerm l_131 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL,t_21 = NULL,v_21 = NULL,x_21 = NULL;
  if(match_cons(t, sym__2))
    {
      o_21 = ATgetArgument(t, 0);
      p_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_21;
  t = k_131(t);
  q_21 = t;
  t = map_1_0(new_0_0, t);
  r_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_21, r_21);
  {
    ATerm w_4 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          ATerm s_21 = ATgetArgument(t, 0);
          if(((ATgetType(s_21) != AT_LIST) || !(ATisEmpty(s_21))))
            _fail(t);
          {
            ATerm u_21 = ATgetArgument(t, 1);
            if(((ATgetType(u_21) != AT_LIST) || !(ATisEmpty(u_21))))
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      return(t);
    }
    ATerm y_4 (ATerm t)
    {
      ATerm y_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm w_21 = ATgetArgument(t, 0);
          if(((ATgetType(w_21) == AT_LIST) && !(ATisEmpty(w_21))))
            {
              y_21 = ATgetFirst((ATermList) w_21);
              a_22 = (ATerm) ATgetNext((ATermList) w_21);
            }
          else
            _fail(t);
          {
            ATerm e_22 = ATgetArgument(t, 1);
            if(((ATgetType(e_22) == AT_LIST) && !(ATisEmpty(e_22))))
              {
                z_21 = ATgetFirst((ATermList) e_22);
                b_22 = (ATerm) ATgetNext((ATermList) e_22);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_21, z_21), (ATerm) ATmakeAppl(sym__2, a_22, b_22));
      return(t);
    }
    ATerm a_5 (ATerm t)
    {
      ATerm c_22 = NULL,d_22 = NULL;
      if(match_cons(t, sym__2))
        {
          c_22 = ATgetArgument(t, 0);
          d_22 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(d_22), c_22);
      return(t);
    }
    t = genzip_4_0(w_4, y_4, a_5, _id, t);
    t_21 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_21, p_21);
    {
      ATerm f_22 = t;
      int g_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm h_22 = ATgetArgument(t, 0);
              ATerm i_22 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = t_21;
          {
            ATerm b_5 (ATerm t)
            {
              t = p_21;
              return(t);
            }
            t = at_end_1_0(b_5, t);
          }
          ;
          LocalPopChoice(g_22);
        }
      else
        {
          t = f_22;
          {
            ATerm o_5 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, t_21, p_21));
            if(match_cons(t, sym__2))
              {
                ATerm j_22 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) j_22) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                o_5 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = o_5;
            t = concat_0_0(t);
          }
        }
      v_21 = t;
      t = o_21;
      {
        ATerm c_5 (ATerm t)
        {
          t = r_21;
          return(t);
        }
        t = l_131(c_5, t);
        x_21 = t;
        t = (ATerm) ATmakeAppl(sym__3, x_21, p_21, v_21);
      }
    }
  }
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm n_22 = NULL,o_22 = NULL,r_22 = NULL,s_22 = NULL,v_22 = NULL,x_22 = NULL;
  if(match_cons(t, sym__2))
    {
      r_22 = ATgetArgument(t, 0);
      s_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_22;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_22 = ATgetFirst((ATermList) t);
      x_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_22;
  if(match_cons(t, sym__2))
    {
      n_22 = ATgetArgument(t, 0);
      o_22 = ATgetArgument(t, 1);
      {
        ATerm k_22 = t;
        int l_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_22;
            if((r_22 != t))
              {
                _fail(t);
              }
            t = o_22;
            ;
            LocalPopChoice(l_22);
          }
        else
          {
            t = k_22;
            t = (ATerm) ATmakeAppl(sym__2, r_22, x_22);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, r_22, x_22);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm y_131 (ATerm), ATerm t)
{
  ATerm u_23 (ATerm t)
  {
    ATerm m_22 = t;
    int p_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_131(t);
        ;
        LocalPopChoice(p_22);
      }
    else
      {
        t = m_22;
        {
          ATerm r_23 = NULL,s_23 = NULL,t_23 = NULL;
          r_23 = t;
          if(match_cons(t, sym__2))
            {
              s_23 = ATgetArgument(t, 0);
              t_23 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = s_23;
          {
            ATerm d_5 (ATerm t)
            {
              ATerm u_5 = NULL;
              u_5 = t;
              t = (ATerm) ATmakeAppl(sym__2, u_5, t_23);
              t = u_23(t);
              return(t);
            }
            t = SRTS_all(d_5, t);
          }
        }
      }
    return(t);
  }
  t = u_23(t);
  return(t);
}
ATerm rename_4_0 (ATerm f_131 (ATerm (ATerm), ATerm), ATerm g_131 (ATerm), ATerm h_131 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm i_131 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm y_23 = NULL;
  y_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_23, (ATerm) ATempty);
  {
    ATerm g_24 (ATerm t)
    {
      ATerm e_5 (ATerm t)
      {
        ATerm q_22 = t;
        int t_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_24 = NULL,d_24 = NULL;
            if(match_cons(t, sym__2))
              {
                c_24 = ATgetArgument(t, 0);
                d_24 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = c_24;
            {
              ATerm f_5 (ATerm t)
              {
                ATerm y_5 = NULL;
                y_5 = t;
                t = (ATerm) ATmakeAppl(sym__2, y_5, d_24);
                t = lookup_0_0(t);
                return(t);
              }
              t = f_131(f_5, t);
            }
            ;
            LocalPopChoice(t_22);
          }
        else
          {
            t = q_22;
            t = RnBinding_2_0(g_131, i_131, t);
            t = DistBinding_2_0(g_24, h_131, t);
          }
        return(t);
      }
      t = env_alltd_1_0(e_5, t);
      return(t);
    }
    t = g_24(t);
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm d_117 (ATerm), ATerm t)
{
  ATerm u_22 = t;
  int w_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(d_117, _id, t);
      ;
      LocalPopChoice(w_22);
    }
  else
    {
      t = u_22;
      {
        ATerm y_22 = t;
        int z_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_5 (ATerm t)
            {
              ATerm d_6 = NULL,g_6 = NULL;
              d_6 = t;
              t = d_117(t);
              g_6 = t;
              t = (ATerm) ATmakeAppl(sym__2, d_6, g_6);
              {
                ATerm h_5 (ATerm t)
                {
                  if(match_cons(t, sym__2))
                    {
                      ATerm a_23 = ATgetArgument(t, 0);
                      if(((ATgetType(a_23) != AT_LIST) || !(ATisEmpty(a_23))))
                        _fail(t);
                      {
                        ATerm b_23 = ATgetArgument(t, 1);
                        if(((ATgetType(b_23) != AT_LIST) || !(ATisEmpty(b_23))))
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
                  ATerm r_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm c_23 = ATgetArgument(t, 0);
                      if(((ATgetType(c_23) == AT_LIST) && !(ATisEmpty(c_23))))
                        {
                          r_24 = ATgetFirst((ATermList) c_23);
                          t_24 = (ATerm) ATgetNext((ATermList) c_23);
                        }
                      else
                        _fail(t);
                      {
                        ATerm d_23 = ATgetArgument(t, 1);
                        if(((ATgetType(d_23) == AT_LIST) && !(ATisEmpty(d_23))))
                          {
                            s_24 = ATgetFirst((ATermList) d_23);
                            u_24 = (ATerm) ATgetNext((ATermList) d_23);
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_24, s_24), (ATerm) ATmakeAppl(sym__2, t_24, u_24));
                  return(t);
                }
                ATerm j_5 (ATerm t)
                {
                  ATerm x_24 = NULL,y_24 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      x_24 = ATgetArgument(t, 0);
                      y_24 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATinsert(CheckATermList(y_24), x_24);
                  return(t);
                }
                ATerm k_5 (ATerm t)
                {
                  ATerm h_25 = NULL,j_25 = NULL,k_25 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      h_25 = ATgetArgument(t, 0);
                      k_25 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = h_25;
                  {
                    ATerm e_23 = t;
                    int f_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_DefaultVarDec_1))
                          {
                            ATerm g_23 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(f_23);
                        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, k_25);
                      }
                    else
                      {
                        t = e_23;
                        if(match_cons(t, sym_VarDec_2))
                          {
                            ATerm h_23 = ATgetArgument(t, 0);
                            j_25 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_VarDec_2, k_25, j_25);
                      }
                  }
                  return(t);
                }
                t = genzip_4_0(h_5, i_5, j_5, k_5, t);
              }
              return(t);
            }
            t = SDefT_4_0(_id, _id, g_5, _id, t);
            ;
            LocalPopChoice(z_22);
          }
        else
          {
            t = y_22;
            {
              ATerm l_5 (ATerm t)
              {
                ATerm m_6 = NULL,o_6 = NULL;
                m_6 = t;
                t = d_117(t);
                o_6 = t;
                t = (ATerm) ATmakeAppl(sym__2, m_6, o_6);
                {
                  ATerm m_5 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        ATerm i_23 = ATgetArgument(t, 0);
                        if(((ATgetType(i_23) != AT_LIST) || !(ATisEmpty(i_23))))
                          _fail(t);
                        {
                          ATerm j_23 = ATgetArgument(t, 1);
                          if(((ATgetType(j_23) != AT_LIST) || !(ATisEmpty(j_23))))
                            _fail(t);
                        }
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  ATerm n_5 (ATerm t)
                  {
                    ATerm o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        ATerm k_23 = ATgetArgument(t, 0);
                        if(((ATgetType(k_23) == AT_LIST) && !(ATisEmpty(k_23))))
                          {
                            o_25 = ATgetFirst((ATermList) k_23);
                            q_25 = (ATerm) ATgetNext((ATermList) k_23);
                          }
                        else
                          _fail(t);
                        {
                          ATerm l_23 = ATgetArgument(t, 1);
                          if(((ATgetType(l_23) == AT_LIST) && !(ATisEmpty(l_23))))
                            {
                              p_25 = ATgetFirst((ATermList) l_23);
                              r_25 = (ATerm) ATgetNext((ATermList) l_23);
                            }
                          else
                            _fail(t);
                        }
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_25, p_25), (ATerm) ATmakeAppl(sym__2, q_25, r_25));
                    return(t);
                  }
                  ATerm p_5 (ATerm t)
                  {
                    ATerm s_25 = NULL,t_25 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        s_25 = ATgetArgument(t, 0);
                        t_25 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(CheckATermList(t_25), s_25);
                    return(t);
                  }
                  ATerm q_5 (ATerm t)
                  {
                    ATerm v_25 = NULL,x_25 = NULL,y_25 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        v_25 = ATgetArgument(t, 0);
                        y_25 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = v_25;
                    {
                      ATerm m_23 = t;
                      int n_23 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_DefaultVarDec_1))
                            {
                              ATerm o_23 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(n_23);
                          t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, y_25);
                        }
                      else
                        {
                          t = m_23;
                          if(match_cons(t, sym_VarDec_2))
                            {
                              ATerm p_23 = ATgetArgument(t, 0);
                              x_25 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, y_25, x_25);
                        }
                    }
                    return(t);
                  }
                  t = genzip_4_0(m_5, n_5, p_5, q_5, t);
                }
                return(t);
              }
              t = RDefT_4_0(_id, _id, l_5, _id, t);
            }
          }
      }
    }
  return(t);
}
ATerm DynamicRules_1_0 (ATerm x_105 (ATerm), ATerm t)
{
  ATerm c_26 = NULL,d_26 = NULL,e_26 = NULL,f_26 = NULL;
  f_26 = t;
  if(match_cons(t, sym_DynamicRules_1))
    {
      d_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_26);
  c_26 = t;
  t = d_26;
  t = x_105(t);
  e_26 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, e_26), c_26);
  return(t);
}
ATerm RDefT_4_0 (ATerm o_105 (ATerm), ATerm p_105 (ATerm), ATerm q_105 (ATerm), ATerm r_105 (ATerm), ATerm t)
{
  ATerm i_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL,o_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL;
  r_26 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      j_26 = ATgetArgument(t, 0);
      k_26 = ATgetArgument(t, 1);
      l_26 = ATgetArgument(t, 2);
      m_26 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_26);
  i_26 = t;
  t = j_26;
  t = o_105(t);
  n_26 = t;
  t = k_26;
  t = p_105(t);
  o_26 = t;
  t = l_26;
  t = q_105(t);
  p_26 = t;
  t = m_26;
  t = r_105(t);
  q_26 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDefT_4, n_26, o_26, p_26, q_26), i_26);
  return(t);
}
ATerm tboundin_3_0 (ATerm e_117 (ATerm), ATerm f_117 (ATerm), ATerm g_117 (ATerm), ATerm t)
{
  ATerm q_23 = t;
  int v_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(g_117, e_117, t);
      ;
      LocalPopChoice(v_23);
    }
  else
    {
      t = q_23;
      {
        ATerm w_23 = t;
        int x_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(g_117, g_117, g_117, e_117, t);
            ;
            LocalPopChoice(x_23);
          }
        else
          {
            t = w_23;
            {
              ATerm z_23 = t;
              int a_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(g_117, g_117, g_117, e_117, t);
                  ;
                  LocalPopChoice(a_24);
                }
              else
                {
                  t = z_23;
                  t = DynamicRules_1_0(e_117, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  ATerm r_5 (ATerm t)
  {
    ATerm y_26 = NULL;
    if(match_cons(t, sym_Var_1))
      {
        y_26 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(ATempty, y_26);
    return(t);
  }
  ATerm s_5 (ATerm t)
  {
    ATerm z_26 = NULL,d_27 = NULL,f_27 = NULL;
    if(match_cons(t, sym_LRule_1))
      {
        d_27 = ATgetArgument(t, 0);
        t = d_27;
        if(match_cons(t, sym_Rule_3))
          {
            z_26 = ATgetArgument(t, 0);
            {
              ATerm b_24 = ATgetArgument(t, 1);
            }
            {
              ATerm e_24 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = z_26;
        t = tvars_0_0(t);
      }
    else
      {
        ATerm f_24 = t;
        int h_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Scope_2))
              {
                d_27 = ATgetArgument(t, 0);
                {
                  ATerm i_24 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(h_24);
            t = d_27;
          }
        else
          {
            t = f_24;
            if(match_cons(t, sym_DynamicRules_1))
              {
                d_27 = ATgetArgument(t, 0);
                t = d_27;
                t = tvars_0_0(t);
              }
            else
              {
                ATerm j_24 = t;
                int k_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_SDefT_4))
                      {
                        ATerm l_24 = ATgetArgument(t, 0);
                        ATerm m_24 = ATgetArgument(t, 1);
                        f_27 = ATgetArgument(t, 2);
                        {
                          ATerm n_24 = ATgetArgument(t, 3);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(k_24);
                    t = f_27;
                    {
                      ATerm t_5 (ATerm t)
                      {
                        ATerm n_27 = NULL;
                        ATerm o_24 = t;
                        int p_24 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_VarDec_2))
                              {
                                n_27 = ATgetArgument(t, 0);
                                {
                                  ATerm q_24 = ATgetArgument(t, 1);
                                }
                              }
                            else
                              _fail(t);
                            LocalPopChoice(p_24);
                            t = n_27;
                          }
                        else
                          {
                            t = o_24;
                            if(match_cons(t, sym_DefaultVarDec_1))
                              {
                                n_27 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = n_27;
                          }
                        return(t);
                      }
                      t = map_1_0(t_5, t);
                    }
                  }
                else
                  {
                    t = j_24;
                    if(match_cons(t, sym_RDefT_4))
                      {
                        ATerm v_24 = ATgetArgument(t, 0);
                        ATerm w_24 = ATgetArgument(t, 1);
                        f_27 = ATgetArgument(t, 2);
                        {
                          ATerm z_24 = ATgetArgument(t, 3);
                        }
                      }
                    else
                      _fail(t);
                    t = f_27;
                    {
                      ATerm v_5 (ATerm t)
                      {
                        ATerm t_27 = NULL;
                        ATerm a_25 = t;
                        int b_25 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_VarDec_2))
                              {
                                t_27 = ATgetArgument(t, 0);
                                {
                                  ATerm c_25 = ATgetArgument(t, 1);
                                }
                              }
                            else
                              _fail(t);
                            LocalPopChoice(b_25);
                            t = t_27;
                          }
                        else
                          {
                            t = a_25;
                            if(match_cons(t, sym_DefaultVarDec_1))
                              {
                                t_27 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = t_27;
                          }
                        return(t);
                      }
                      t = map_1_0(v_5, t);
                    }
                  }
              }
          }
      }
    return(t);
  }
  t = free_vars_3_0(r_5, s_5, tboundin_3_0, t);
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm b_28 = NULL,h_28 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      h_28 = ATgetArgument(t, 0);
      t = h_28;
      if(match_cons(t, sym_Rule_3))
        {
          b_28 = ATgetArgument(t, 0);
          {
            ATerm d_25 = ATgetArgument(t, 1);
          }
          {
            ATerm e_25 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = b_28;
      {
        ATerm w_5 (ATerm t)
        {
          ATerm l_28 = NULL;
          if(match_cons(t, sym_Var_1))
            {
              l_28 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATempty, l_28);
          return(t);
        }
        ATerm x_5 (ATerm t)
        {
          ATerm f_25 = t;
          int g_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind0_0_0(t);
              ;
              LocalPopChoice(g_25);
            }
          else
            {
              t = f_25;
              {
                ATerm n_28 = NULL,q_28 = NULL;
                if(match_cons(t, sym_DynamicRules_1))
                  {
                    n_28 = ATgetArgument(t, 0);
                    t = n_28;
                    t = tvars_0_0(t);
                  }
                else
                  {
                    ATerm i_25 = t;
                    int l_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_SDefT_4))
                          {
                            ATerm m_25 = ATgetArgument(t, 0);
                            ATerm n_25 = ATgetArgument(t, 1);
                            q_28 = ATgetArgument(t, 2);
                            {
                              ATerm u_25 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(l_25);
                        t = q_28;
                        {
                          ATerm z_5 (ATerm t)
                          {
                            ATerm w_28 = NULL;
                            ATerm w_25 = t;
                            int z_25 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                if(match_cons(t, sym_VarDec_2))
                                  {
                                    w_28 = ATgetArgument(t, 0);
                                    {
                                      ATerm a_26 = ATgetArgument(t, 1);
                                    }
                                  }
                                else
                                  _fail(t);
                                LocalPopChoice(z_25);
                                t = w_28;
                              }
                            else
                              {
                                t = w_25;
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
                          t = map_1_0(z_5, t);
                        }
                      }
                    else
                      {
                        t = i_25;
                        if(match_cons(t, sym_RDefT_4))
                          {
                            ATerm b_26 = ATgetArgument(t, 0);
                            ATerm g_26 = ATgetArgument(t, 1);
                            q_28 = ATgetArgument(t, 2);
                            {
                              ATerm h_26 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        t = q_28;
                        {
                          ATerm a_6 (ATerm t)
                          {
                            ATerm f_29 = NULL;
                            ATerm s_26 = t;
                            int t_26 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                if(match_cons(t, sym_VarDec_2))
                                  {
                                    f_29 = ATgetArgument(t, 0);
                                    {
                                      ATerm u_26 = ATgetArgument(t, 1);
                                    }
                                  }
                                else
                                  _fail(t);
                                LocalPopChoice(t_26);
                                t = f_29;
                              }
                            else
                              {
                                t = s_26;
                                if(match_cons(t, sym_DefaultVarDec_1))
                                  {
                                    f_29 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = f_29;
                              }
                            return(t);
                          }
                          t = map_1_0(a_6, t);
                        }
                      }
                  }
              }
            }
          return(t);
        }
        t = free_vars_3_0(w_5, x_5, tboundin_3_0, t);
      }
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          h_28 = ATgetArgument(t, 0);
          {
            ATerm v_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = h_28;
    }
  return(t);
}
ATerm union_1_0 (ATerm r_126 (ATerm), ATerm t)
{
  ATerm k_29 = NULL,l_29 = NULL;
  if(match_cons(t, sym__2))
    {
      l_29 = ATgetArgument(t, 0);
      k_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_29;
  {
    ATerm o_29 (ATerm t)
    {
      ATerm w_26 = t;
      int x_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = k_29;
          ;
          LocalPopChoice(x_26);
        }
      else
        {
          t = w_26;
          {
            ATerm a_27 = t;
            int b_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_6 = NULL,w_6 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    v_6 = ATgetFirst((ATermList) t);
                    w_6 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = k_29;
                {
                  ATerm b_6 (ATerm t)
                  {
                    ATerm a_7 = NULL;
                    a_7 = t;
                    t = (ATerm) ATmakeAppl(sym__2, v_6, a_7);
                    t = r_126(t);
                    return(t);
                  }
                  t = fetch_1_0(b_6, t);
                  t = w_6;
                  t = o_29(t);
                }
                ;
                LocalPopChoice(b_27);
              }
            else
              {
                t = a_27;
                t = Cons_2_0(_id, o_29, t);
              }
          }
        }
      return(t);
    }
    t = o_29(t);
  }
  return(t);
}
ATerm diff_1_0 (ATerm n_126 (ATerm), ATerm t)
{
  ATerm s_29 = NULL,t_29 = NULL;
  if(match_cons(t, sym__2))
    {
      t_29 = ATgetArgument(t, 0);
      s_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_29;
  {
    ATerm u_29 (ATerm t)
    {
      ATerm c_27 = t;
      int e_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(e_27);
        }
      else
        {
          t = c_27;
          {
            ATerm g_27 = t;
            int h_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_7 = NULL,j_7 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    g_7 = ATgetFirst((ATermList) t);
                    j_7 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = s_29;
                {
                  ATerm c_6 (ATerm t)
                  {
                    ATerm k_7 = NULL;
                    k_7 = t;
                    t = (ATerm) ATmakeAppl(sym__2, g_7, k_7);
                    t = n_126(t);
                    return(t);
                  }
                  t = fetch_1_0(c_6, t);
                  t = j_7;
                  t = u_29(t);
                }
                ;
                LocalPopChoice(h_27);
              }
            else
              {
                t = g_27;
                t = Cons_2_0(_id, u_29, t);
              }
          }
        }
      return(t);
    }
    t = u_29(t);
  }
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm x_29 = NULL,a_30 = NULL,b_30 = NULL,c_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm i_27 = ATgetFirst((ATermList) t);
      if(match_cons(i_27, sym__2))
        {
          x_29 = ATgetArgument(i_27, 0);
          a_30 = ATgetArgument(i_27, 1);
        }
      else
        _fail(t);
      b_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(a_30);
  if(match_cons(t, sym__2))
    {
      c_30 = ATgetArgument(t, 0);
      d_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(x_29);
  if(match_cons(t, sym__2))
    {
      if((c_30 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      e_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_30, d_30);
  {
    ATerm e_6 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          ATerm j_27 = ATgetArgument(t, 0);
          if(((ATgetType(j_27) != AT_LIST) || !(ATisEmpty(j_27))))
            _fail(t);
          {
            ATerm k_27 = ATgetArgument(t, 1);
            if(((ATgetType(k_27) != AT_LIST) || !(ATisEmpty(k_27))))
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      return(t);
    }
    ATerm f_6 (ATerm t)
    {
      ATerm g_30 = NULL,i_30 = NULL,j_30 = NULL,m_30 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm l_27 = ATgetArgument(t, 0);
          if(((ATgetType(l_27) == AT_LIST) && !(ATisEmpty(l_27))))
            {
              g_30 = ATgetFirst((ATermList) l_27);
              j_30 = (ATerm) ATgetNext((ATermList) l_27);
            }
          else
            _fail(t);
          {
            ATerm m_27 = ATgetArgument(t, 1);
            if(((ATgetType(m_27) == AT_LIST) && !(ATisEmpty(m_27))))
              {
                i_30 = ATgetFirst((ATermList) m_27);
                m_30 = (ATerm) ATgetNext((ATermList) m_27);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_30, i_30), (ATerm) ATmakeAppl(sym__2, j_30, m_30));
      return(t);
    }
    ATerm h_6 (ATerm t)
    {
      ATerm n_30 = NULL,o_30 = NULL;
      if(match_cons(t, sym__2))
        {
          n_30 = ATgetArgument(t, 0);
          o_30 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(o_30), n_30);
      return(t);
    }
    t = genzip_4_0(e_6, f_6, h_6, _id, t);
    f_30 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_30, b_30);
    {
      ATerm o_27 = t;
      int p_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm q_27 = ATgetArgument(t, 0);
              ATerm r_27 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = f_30;
          {
            ATerm i_6 (ATerm t)
            {
              t = b_30;
              return(t);
            }
            t = at_end_1_0(i_6, t);
          }
          ;
          LocalPopChoice(p_27);
        }
      else
        {
          t = o_27;
          {
            ATerm r_7 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, f_30, b_30));
            if(match_cons(t, sym__2))
              {
                ATerm s_27 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) s_27) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                r_7 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = r_7;
            t = concat_0_0(t);
          }
        }
    }
  }
  return(t);
}
ATerm while_not_2_0 (ATerm o_135 (ATerm), ATerm p_135 (ATerm), ATerm t)
{
  ATerm t_30 (ATerm t)
  {
    ATerm u_27 = t;
    int v_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_135(t);
        ;
        LocalPopChoice(v_27);
      }
    else
      {
        t = u_27;
        t = p_135(t);
        t = t_30(t);
      }
    return(t);
  }
  t = t_30(t);
  return(t);
}
ATerm for_3_0 (ATerm r_135 (ATerm), ATerm s_135 (ATerm), ATerm t_135 (ATerm), ATerm t)
{
  t = r_135(t);
  t = while_not_2_0(s_135, t_135, t);
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm w_27 = t;
  int x_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_6 (ATerm t)
      {
        ATerm b_31 = NULL;
        b_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, b_31);
        return(t);
      }
      ATerm k_6 (ATerm t)
      {
        ATerm n_6 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = _2_0(_id, n_6, t);
        return(t);
      }
      ATerm l_6 (ATerm t)
      {
        ATerm y_27 = t;
        int z_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_6 (ATerm t)
            {
              ATerm a_28 = t;
              int c_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_31 = NULL,e_31 = NULL,f_31 = NULL,g_31 = NULL;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      d_31 = ATgetFirst((ATermList) t);
                      g_31 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = d_31;
                  if(match_cons(t, sym__2))
                    {
                      e_31 = ATgetArgument(t, 0);
                      f_31 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = f_31;
                  if((e_31 != t))
                    {
                      _fail(t);
                    }
                  t = g_31;
                  ;
                  LocalPopChoice(c_28);
                }
              else
                {
                  t = a_28;
                  t = UfDecompose_0_0(t);
                }
              return(t);
            }
            t = _2_0(_id, p_6, t);
            ;
            LocalPopChoice(z_27);
          }
        else
          {
            t = y_27;
            {
              ATerm n_31 = NULL,o_31 = NULL,p_31 = NULL,q_31 = NULL;
              if(match_cons(t, sym__2))
                {
                  n_31 = ATgetArgument(t, 0);
                  o_31 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = o_31;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  p_31 = ATgetFirst((ATermList) t);
                  q_31 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_31), p_31), q_31);
            }
          }
        return(t);
      }
      t = for_3_0(j_6, k_6, l_6, t);
      ;
      LocalPopChoice(x_27);
    }
  else
    {
      t = w_27;
      {
        ATerm q_6 (ATerm t)
        {
          ATerm v_31 = NULL;
          if(match_cons(t, sym__2))
            {
              v_31 = ATgetArgument(t, 0);
              if((v_31 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
            }
          else
            _fail(t);
          return(t);
        }
        t = diff_1_0(q_6, t);
      }
    }
  return(t);
}
ATerm free_vars_3_0 (ATerm i_133 (ATerm), ATerm j_133 (ATerm), ATerm k_133 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm d_32 (ATerm t)
  {
    ATerm d_28 = t;
    int e_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_133(t);
        ;
        LocalPopChoice(e_28);
      }
    else
      {
        t = d_28;
        {
          ATerm f_28 = t;
          int g_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_31 = NULL,a_32 = NULL,x_7 = NULL,y_7 = NULL;
              y_31 = t;
              t = j_133(t);
              a_32 = t;
              t = y_31;
              {
                ATerm r_6 (ATerm t)
                {
                  ATerm t_7 = NULL;
                  t = d_32(t);
                  t_7 = t;
                  t = (ATerm) ATmakeAppl(sym__2, t_7, a_32);
                  t = diff_0_0(t);
                  return(t);
                }
                ATerm s_6 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = k_133(r_6, d_32, s_6, t);
                x_7 = t;
                t = SSL_explode_term(x_7);
                if(match_cons(t, sym__2))
                  {
                    ATerm i_28 = ATgetArgument(t, 0);
                    y_7 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = y_7;
                {
                  ATerm t_6 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  ATerm u_6 (ATerm t)
                  {
                    ATerm x_6 (ATerm t)
                    {
                      ATerm h_8 = NULL;
                      if(match_cons(t, sym__2))
                        {
                          h_8 = ATgetArgument(t, 0);
                          if((h_8 != ATgetArgument(t, 1)))
                            {
                              _fail(ATgetArgument(t, 1));
                            }
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = union_1_0(x_6, t);
                    return(t);
                  }
                  t = foldr_3_0(t_6, u_6, _id, t);
                }
              }
              ;
              LocalPopChoice(g_28);
            }
          else
            {
              t = f_28;
              {
                ATerm i_8 = NULL,l_8 = NULL;
                i_8 = t;
                t = SSL_explode_term(i_8);
                if(match_cons(t, sym__2))
                  {
                    ATerm j_28 = ATgetArgument(t, 0);
                    l_8 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = l_8;
                {
                  ATerm y_6 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  ATerm z_6 (ATerm t)
                  {
                    ATerm b_7 (ATerm t)
                    {
                      ATerm v_8 = NULL;
                      if(match_cons(t, sym__2))
                        {
                          v_8 = ATgetArgument(t, 0);
                          if((v_8 != ATgetArgument(t, 1)))
                            {
                              _fail(ATgetArgument(t, 1));
                            }
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = union_1_0(b_7, t);
                    return(t);
                  }
                  t = foldr_3_0(y_6, z_6, d_32, t);
                }
              }
            }
        }
      }
    return(t);
  }
  t = d_32(t);
  return(t);
}
ATerm Var_1_0 (ATerm g_103 (ATerm), ATerm t)
{
  ATerm e_32 = NULL,f_32 = NULL,g_32 = NULL,h_32 = NULL;
  h_32 = t;
  if(match_cons(t, sym_Var_1))
    {
      f_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_32);
  e_32 = t;
  t = f_32;
  t = g_103(t);
  g_32 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, g_32), e_32);
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  ATerm c_7 (ATerm t)
  {
    ATerm v_32 = NULL,z_32 = NULL,c_33 = NULL;
    if(match_cons(t, sym_LRule_1))
      {
        z_32 = ATgetArgument(t, 0);
        t = z_32;
        if(match_cons(t, sym_Rule_3))
          {
            v_32 = ATgetArgument(t, 0);
            {
              ATerm k_28 = ATgetArgument(t, 1);
            }
            {
              ATerm m_28 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = v_32;
        {
          ATerm d_7 (ATerm t)
          {
            ATerm h_33 = NULL;
            if(match_cons(t, sym_Var_1))
              {
                h_33 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(ATempty, h_33);
            return(t);
          }
          ATerm e_7 (ATerm t)
          {
            ATerm o_28 = t;
            int p_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Bind0_0_0(t);
                ;
                LocalPopChoice(p_28);
              }
            else
              {
                t = o_28;
                {
                  ATerm l_33 = NULL,n_33 = NULL;
                  if(match_cons(t, sym_DynamicRules_1))
                    {
                      l_33 = ATgetArgument(t, 0);
                      t = l_33;
                      t = tvars_0_0(t);
                    }
                  else
                    {
                      ATerm r_28 = t;
                      int s_28 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_SDefT_4))
                            {
                              ATerm t_28 = ATgetArgument(t, 0);
                              ATerm u_28 = ATgetArgument(t, 1);
                              n_33 = ATgetArgument(t, 2);
                              {
                                ATerm v_28 = ATgetArgument(t, 3);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(s_28);
                          t = n_33;
                          {
                            ATerm f_7 (ATerm t)
                            {
                              ATerm t_33 = NULL;
                              ATerm x_28 = t;
                              int y_28 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_VarDec_2))
                                    {
                                      t_33 = ATgetArgument(t, 0);
                                      {
                                        ATerm z_28 = ATgetArgument(t, 1);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(y_28);
                                  t = t_33;
                                }
                              else
                                {
                                  t = x_28;
                                  if(match_cons(t, sym_DefaultVarDec_1))
                                    {
                                      t_33 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = t_33;
                                }
                              return(t);
                            }
                            t = map_1_0(f_7, t);
                          }
                        }
                      else
                        {
                          t = r_28;
                          if(match_cons(t, sym_RDefT_4))
                            {
                              ATerm a_29 = ATgetArgument(t, 0);
                              ATerm b_29 = ATgetArgument(t, 1);
                              n_33 = ATgetArgument(t, 2);
                              {
                                ATerm c_29 = ATgetArgument(t, 3);
                              }
                            }
                          else
                            _fail(t);
                          t = n_33;
                          {
                            ATerm h_7 (ATerm t)
                            {
                              ATerm d_34 = NULL;
                              ATerm d_29 = t;
                              int e_29 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_VarDec_2))
                                    {
                                      d_34 = ATgetArgument(t, 0);
                                      {
                                        ATerm g_29 = ATgetArgument(t, 1);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(e_29);
                                  t = d_34;
                                }
                              else
                                {
                                  t = d_29;
                                  if(match_cons(t, sym_DefaultVarDec_1))
                                    {
                                      d_34 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = d_34;
                                }
                              return(t);
                            }
                            t = map_1_0(h_7, t);
                          }
                        }
                    }
                }
              }
            return(t);
          }
          t = free_vars_3_0(d_7, e_7, tboundin_3_0, t);
        }
      }
    else
      {
        ATerm h_29 = t;
        int i_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Scope_2))
              {
                z_32 = ATgetArgument(t, 0);
                {
                  ATerm j_29 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(i_29);
            t = z_32;
          }
        else
          {
            t = h_29;
            {
              ATerm m_29 = t;
              int n_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      ATerm p_29 = ATgetArgument(t, 0);
                      ATerm q_29 = ATgetArgument(t, 1);
                      c_33 = ATgetArgument(t, 2);
                      {
                        ATerm r_29 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(n_29);
                  t = c_33;
                  {
                    ATerm i_7 (ATerm t)
                    {
                      ATerm l_34 = NULL;
                      ATerm v_29 = t;
                      int w_29 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_VarDec_2))
                            {
                              l_34 = ATgetArgument(t, 0);
                              {
                                ATerm y_29 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(w_29);
                          t = l_34;
                        }
                      else
                        {
                          t = v_29;
                          if(match_cons(t, sym_DefaultVarDec_1))
                            {
                              l_34 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = l_34;
                        }
                      return(t);
                    }
                    t = map_1_0(i_7, t);
                  }
                }
              else
                {
                  t = m_29;
                  if(match_cons(t, sym_RDefT_4))
                    {
                      ATerm z_29 = ATgetArgument(t, 0);
                      ATerm h_30 = ATgetArgument(t, 1);
                      c_33 = ATgetArgument(t, 2);
                      {
                        ATerm k_30 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  t = c_33;
                  {
                    ATerm l_7 (ATerm t)
                    {
                      ATerm r_34 = NULL;
                      ATerm l_30 = t;
                      int p_30 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_VarDec_2))
                            {
                              r_34 = ATgetArgument(t, 0);
                              {
                                ATerm q_30 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(p_30);
                          t = r_34;
                        }
                      else
                        {
                          t = l_30;
                          if(match_cons(t, sym_DefaultVarDec_1))
                            {
                              r_34 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = r_34;
                        }
                      return(t);
                    }
                    t = map_1_0(l_7, t);
                  }
                }
            }
          }
      }
    return(t);
  }
  t = rename_4_0(Var_1_0, c_7, tboundin_3_0, tpaste_1_0, t);
  {
    ATerm m_7 (ATerm t)
    {
      ATerm r_30 = t;
      int s_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Bind1_0_0(t);
          ;
          LocalPopChoice(s_30);
        }
      else
        {
          t = r_30;
          {
            ATerm v_34 = NULL,w_34 = NULL;
            ATerm u_30 = t;
            int v_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDef_3))
                  {
                    ATerm w_30 = ATgetArgument(t, 0);
                    w_34 = ATgetArgument(t, 1);
                    {
                      ATerm x_30 = ATgetArgument(t, 2);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(v_30);
                t = w_34;
                {
                  ATerm n_7 (ATerm t)
                  {
                    ATerm c_35 = NULL;
                    ATerm y_30 = t;
                    int z_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_VarDec_2))
                          {
                            c_35 = ATgetArgument(t, 0);
                            {
                              ATerm a_31 = ATgetArgument(t, 1);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(z_30);
                        t = c_35;
                      }
                    else
                      {
                        t = y_30;
                        if(match_cons(t, sym_DefaultVarDec_1))
                          {
                            c_35 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = c_35;
                      }
                    return(t);
                  }
                  t = map_1_0(n_7, t);
                }
              }
            else
              {
                t = u_30;
                {
                  ATerm c_31 = t;
                  int h_31 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          v_34 = ATgetArgument(t, 0);
                          {
                            ATerm i_31 = ATgetArgument(t, 1);
                          }
                        }
                      else
                        _fail(t);
                      LocalPopChoice(h_31);
                      t = (ATerm) ATinsert(ATempty, v_34);
                    }
                  else
                    {
                      t = c_31;
                      {
                        ATerm j_31 = t;
                        int k_31 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_SDefT_4))
                              {
                                ATerm l_31 = ATgetArgument(t, 0);
                                w_34 = ATgetArgument(t, 1);
                                {
                                  ATerm m_31 = ATgetArgument(t, 2);
                                }
                                {
                                  ATerm r_31 = ATgetArgument(t, 3);
                                }
                              }
                            else
                              _fail(t);
                            LocalPopChoice(k_31);
                            t = w_34;
                            {
                              ATerm o_7 (ATerm t)
                              {
                                ATerm j_35 = NULL;
                                ATerm s_31 = t;
                                int t_31 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_VarDec_2))
                                      {
                                        j_35 = ATgetArgument(t, 0);
                                        {
                                          ATerm u_31 = ATgetArgument(t, 1);
                                        }
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(t_31);
                                    t = j_35;
                                  }
                                else
                                  {
                                    t = s_31;
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        j_35 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = j_35;
                                  }
                                return(t);
                              }
                              t = map_1_0(o_7, t);
                            }
                          }
                        else
                          {
                            t = j_31;
                            if(match_cons(t, sym_RDefT_4))
                              {
                                ATerm w_31 = ATgetArgument(t, 0);
                                w_34 = ATgetArgument(t, 1);
                                {
                                  ATerm x_31 = ATgetArgument(t, 2);
                                }
                                {
                                  ATerm z_31 = ATgetArgument(t, 3);
                                }
                              }
                            else
                              _fail(t);
                            t = w_34;
                            {
                              ATerm p_7 (ATerm t)
                              {
                                ATerm p_35 = NULL;
                                ATerm b_32 = t;
                                int c_32 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_VarDec_2))
                                      {
                                        p_35 = ATgetArgument(t, 0);
                                        {
                                          ATerm i_32 = ATgetArgument(t, 1);
                                        }
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(c_32);
                                    t = p_35;
                                  }
                                else
                                  {
                                    t = b_32;
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        p_35 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = p_35;
                                  }
                                return(t);
                              }
                              t = map_1_0(p_7, t);
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
    t = rename_4_0(SVar_1_0, m_7, sboundin_3_0, spaste_1_0, t);
  }
  return(t);
}
ATerm InlineCall0_0_0 (ATerm t)
{
  ATerm u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL;
  u_35 = t;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm j_32 = ATgetArgument(t, 0);
      if(match_cons(j_32, sym_SVar_1))
        {
          v_35 = ATgetArgument(j_32, 0);
        }
      else
        _fail(t);
      {
        ATerm k_32 = ATgetArgument(t, 1);
        if(((ATgetType(k_32) != AT_LIST) || !(ATisEmpty(k_32))))
          _fail(t);
      }
      {
        ATerm l_32 = ATgetArgument(t, 2);
        if(((ATgetType(l_32) != AT_LIST) || !(ATisEmpty(l_32))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("InlineCall0", 0, ATtrue)), u_35);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_35 = ATgetFirst((ATermList) t);
      {
        ATerm m_32 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = x_35;
  if(match_cons(t, sym_Defined_2))
    {
      ATerm n_32 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_32) != ATmakeSymbol("g_0", 0, ATtrue)))
        _fail(t);
      w_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_35;
  t = strename_0_0(t);
  if(match_cons(t, sym_SDefT_4))
    {
      if((v_35 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      y_35 = ATgetArgument(t, 1);
      z_35 = ATgetArgument(t, 2);
      a_36 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = y_35;
  {
    ATerm q_7 (ATerm t)
    {
      t = term_o_32;
      return(t);
    }
    ATerm s_7 (ATerm t)
    {
      ATerm f_36 = NULL,g_36 = NULL;
      if(match_cons(t, sym__2))
        {
          f_36 = ATgetArgument(t, 0);
          g_36 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm p_32 = t;
        int q_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(f_36, g_36);
            ;
            LocalPopChoice(q_32);
          }
        else
          {
            t = p_32;
            t = SSL_addr(f_36, g_36);
          }
      }
      return(t);
    }
    ATerm u_7 (ATerm t)
    {
      t = term_r_32;
      return(t);
    }
    t = foldr_3_0(q_7, s_7, u_7, t);
    b_36 = t;
    t = z_35;
    {
      ATerm v_7 (ATerm t)
      {
        t = term_o_32;
        return(t);
      }
      ATerm w_7 (ATerm t)
      {
        ATerm h_36 = NULL,i_36 = NULL;
        if(match_cons(t, sym__2))
          {
            h_36 = ATgetArgument(t, 0);
            i_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        {
          ATerm s_32 = t;
          int t_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_addi(h_36, i_36);
              ;
              LocalPopChoice(t_32);
            }
          else
            {
              t = s_32;
              t = SSL_addr(h_36, i_36);
            }
        }
        return(t);
      }
      ATerm z_7 (ATerm t)
      {
        t = term_r_32;
        return(t);
      }
      t = foldr_3_0(v_7, w_7, z_7, t);
      c_36 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_36, c_36);
      {
        ATerm u_32 = t;
        int w_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(b_36, c_36);
            ;
            LocalPopChoice(w_32);
          }
        else
          {
            t = u_32;
            t = SSL_addr(b_36, c_36);
          }
        d_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_36, term_o_32);
        {
          ATerm x_32 = t;
          int y_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(d_36, (ATerm) ATmakeInt(0));
              ;
              LocalPopChoice(y_32);
            }
          else
            {
              t = x_32;
              t = SSL_gtr(d_36, (ATerm) ATmakeInt(0));
            }
          t = (ATerm) ATmakeAppl(sym__2, d_36, term_o_32);
          t = new_0_0(t);
          e_36 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, v_35), (ATerm)ATempty, (ATerm) ATempty), term_x_16);
          {
            ATerm a_8 (ATerm t)
            {
              t = term_y_16;
              return(t);
            }
            t = assert_1_0(a_8, t);
            t = (ATerm) ATmakeAppl(sym_Let_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, e_36, y_35, z_35, a_36)), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, e_36), (ATerm)ATempty, (ATerm) ATempty));
          }
        }
      }
    }
  }
  return(t);
}
ATerm occurrences_1_0 (ATerm z_126 (ATerm), ATerm t)
{
  ATerm w_8 = NULL,z_8 = NULL,a_9 = NULL,o_9 = NULL;
  w_8 = t;
  {
    ATerm a_33 = t;
    int b_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_126(t);
        t = term_r_32;
        ;
        LocalPopChoice(b_33);
      }
    else
      {
        t = a_33;
        t = term_o_32;
      }
    z_8 = t;
    t = SSL_explode_term(w_8);
    if(match_cons(t, sym__2))
      {
        ATerm d_33 = ATgetArgument(t, 0);
        o_9 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = o_9;
    {
      ATerm b_8 (ATerm t)
      {
        t = term_o_32;
        return(t);
      }
      ATerm c_8 (ATerm t)
      {
        ATerm s_9 = NULL,t_9 = NULL;
        if(match_cons(t, sym__2))
          {
            s_9 = ATgetArgument(t, 0);
            t_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        {
          ATerm e_33 = t;
          int f_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_addi(s_9, t_9);
              ;
              LocalPopChoice(f_33);
            }
          else
            {
              t = e_33;
              t = SSL_addr(s_9, t_9);
            }
        }
        return(t);
      }
      ATerm d_8 (ATerm t)
      {
        t = occurrences_1_0(z_126, t);
        return(t);
      }
      t = foldr_3_0(b_8, c_8, d_8, t);
      a_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_8, a_9);
      {
        ATerm g_33 = t;
        int i_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(z_8, a_9);
            ;
            LocalPopChoice(i_33);
          }
        else
          {
            t = g_33;
            t = SSL_addr(z_8, a_9);
          }
      }
    }
  }
  return(t);
}
ATerm local_inlinable_1_0 (ATerm i_116 (ATerm), ATerm t)
{
  ATerm r_36 = NULL,u_36 = NULL,v_36 = NULL,w_36 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      r_36 = ATgetArgument(t, 0);
      {
        ATerm j_33 = ATgetArgument(t, 1);
      }
      {
        ATerm k_33 = ATgetArgument(t, 2);
      }
      u_36 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  v_36 = t;
  t = u_36;
  {
    ATerm m_33 = t;
    if((PushChoice() == 0))
      {
        ATerm e_8 (ATerm t)
        {
          if(match_cons(t, sym_CallT_3))
            {
              ATerm o_33 = ATgetArgument(t, 0);
              if(match_cons(o_33, sym_SVar_1))
                {
                  if((r_36 != ATgetArgument(o_33, 0)))
                    {
                      _fail(ATgetArgument(o_33, 0));
                    }
                }
              else
                _fail(t);
              {
                ATerm p_33 = ATgetArgument(t, 1);
              }
              {
                ATerm q_33 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(e_8, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_33;
      }
    t = i_116(t);
    {
      ATerm f_8 (ATerm t)
      {
        if(match_cons(t, sym_CallT_3))
          {
            ATerm r_33 = ATgetArgument(t, 0);
            if(match_cons(r_33, sym_SVar_1))
              {
                if((r_36 != ATgetArgument(r_33, 0)))
                  {
                    _fail(ATgetArgument(r_33, 0));
                  }
              }
            else
              _fail(t);
            {
              ATerm s_33 = ATgetArgument(t, 1);
            }
            {
              ATerm u_33 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        return(t);
      }
      t = occurrences_1_0(f_8, t);
      w_36 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_36, term_r_32);
      t = leq_0_0(t);
      t = v_36;
    }
  }
  return(t);
}
ATerm UndefineSDef_0_0 (ATerm t)
{
  ATerm x_36 = NULL,y_36 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      x_36 = ATgetArgument(t, 0);
      {
        ATerm v_33 = ATgetArgument(t, 1);
      }
      {
        ATerm w_33 = ATgetArgument(t, 2);
      }
      {
        ATerm x_33 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  y_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, x_36), (ATerm)ATempty, (ATerm) ATempty), term_x_16);
  {
    ATerm g_8 (ATerm t)
    {
      t = term_y_16;
      return(t);
    }
    t = assert_1_0(g_8, t);
    t = y_36;
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm b_37 = NULL,c_37 = NULL,d_37 = NULL;
  if(match_cons(t, sym__2))
    {
      b_37 = ATgetArgument(t, 0);
      c_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_33 = t;
    int z_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_9 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm a_34 = ATgetArgument(t, 0);
            ATerm b_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(b_37, c_37);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm c_34 = ATgetFirst((ATermList) t);
            v_9 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_9;
        ;
        LocalPopChoice(z_33);
      }
    else
      {
        t = y_33;
        t = (ATerm) ATempty;
      }
    d_37 = t;
    t = SSL_table_put(b_37, c_37, d_37);
    t = (ATerm) ATmakeAppl(sym__2, b_37, c_37);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm m_130 (ATerm), ATerm t)
{
  ATerm l_37 = NULL,m_37 = NULL,n_37 = NULL,o_37 = NULL;
  l_37 = t;
  t = m_130(t);
  m_37 = t;
  {
    ATerm e_34 = t;
    int f_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(m_37, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(f_34);
      }
    else
      {
        t = e_34;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_37 = ATgetFirst((ATermList) t);
        n_37 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(m_37, (ATerm)ATmakeAppl(sym_Scopes_0), n_37);
    t = o_37;
    {
      ATerm j_8 (ATerm t)
      {
        ATerm t_37 = NULL;
        t_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_37, t_37);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(j_8, t);
      t = l_37;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm k_121 (ATerm), ATerm l_121 (ATerm), ATerm t)
{
  ATerm g_34 = t;
  int h_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_121(t);
      t = l_121(t);
      ;
      LocalPopChoice(h_34);
    }
  else
    {
      t = g_34;
      t = l_121(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm l_130 (ATerm), ATerm t)
{
  ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL;
  z_37 = t;
  t = l_130(t);
  a_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_38, term_i_34);
  {
    ATerm j_34 = t;
    int k_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_34 = ATgetArgument(t, 0);
            ATerm n_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(a_38, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(k_34);
      }
    else
      {
        t = j_34;
        t = (ATerm) ATempty;
      }
    b_38 = t;
    t = SSL_table_put(a_38, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(b_38), (ATerm) ATempty));
    t = z_37;
  }
  return(t);
}
ATerm scope_2_0 (ATerm n_130 (ATerm), ATerm o_130 (ATerm), ATerm t)
{
  t = begin_scope_1_0(n_130, t);
  {
    ATerm k_8 (ATerm t)
    {
      t = end_scope_1_0(n_130, t);
      return(t);
    }
    t = restore_always_2_0(o_130, k_8, t);
  }
  return(t);
}
ATerm inline_sdef_0_0 (ATerm t)
{
  ATerm m_8 (ATerm t)
  {
    t = term_y_16;
    return(t);
  }
  ATerm n_8 (ATerm t)
  {
    ATerm o_8 (ATerm t)
    {
      t = term_o_34;
      return(t);
    }
    ATerm p_8 (ATerm t)
    {
      ATerm p_34 = t;
      int q_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = UndefineSDef_0_0(t);
          ;
          LocalPopChoice(q_34);
        }
      else
        {
          t = p_34;
          {
            ATerm s_34 = t;
            int t_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_38 = NULL,j_38 = NULL;
                if(match_cons(t, sym_Let_2))
                  {
                    i_38 = ATgetArgument(t, 0);
                    j_38 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = i_38;
                {
                  ATerm q_8 (ATerm t)
                  {
                    ATerm r_8 (ATerm t)
                    {
                      t = j_38;
                      return(t);
                    }
                    t = local_inlinable_1_0(r_8, t);
                    t = AddSDef_0_0(t);
                    return(t);
                  }
                  t = map_1_0(q_8, t);
                  t = (ATerm) ATmakeAppl(sym_Let_2, i_38, j_38);
                }
                ;
                LocalPopChoice(t_34);
              }
            else
              {
                t = s_34;
                {
                  ATerm s_8 (ATerm t)
                  {
                    ATerm u_34 = t;
                    int x_34 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = InlineCall0_0_0(t);
                        ;
                        LocalPopChoice(x_34);
                      }
                    else
                      {
                        t = u_34;
                        t = InlineCall_0_0(t);
                      }
                    return(t);
                  }
                  t = repeat_1_0(s_8, t);
                }
              }
          }
        }
      t = SRTS_all(inline_sdef_0_0, t);
      return(t);
    }
    t = scope_2_0(o_8, p_8, t);
    return(t);
  }
  t = scope_2_0(m_8, n_8, t);
  return(t);
}
ATerm assert_1_0 (ATerm p_130 (ATerm), ATerm t)
{
  ATerm p_38 = NULL,r_38 = NULL,t_38 = NULL,u_38 = NULL,v_38 = NULL;
  if(match_cons(t, sym__2))
    {
      p_38 = ATgetArgument(t, 0);
      r_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_130(t);
  t_38 = t;
  t = (ATerm) ATmakeAppl(sym__3, t_38, p_38, r_38);
  t = table_push_0_0(t);
  {
    ATerm y_34 = t;
    int z_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(t_38, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(z_34);
      }
    else
      {
        t = y_34;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_38 = ATgetFirst((ATermList) t);
        v_38 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(t_38, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(v_38), (ATerm) ATinsert(CheckATermList(u_38), p_38)));
    t = (ATerm) ATmakeAppl(sym__2, p_38, r_38);
  }
  return(t);
}
ATerm AddSDef_0_0 (ATerm t)
{
  ATerm x_38 = NULL,z_38 = NULL,b_39 = NULL;
  x_38 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      z_38 = ATgetArgument(t, 0);
      {
        ATerm a_35 = ATgetArgument(t, 1);
      }
      {
        ATerm b_35 = ATgetArgument(t, 2);
      }
      {
        ATerm d_35 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  b_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, z_38), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_e_35, x_38));
  {
    ATerm t_8 (ATerm t)
    {
      t = term_y_16;
      return(t);
    }
    t = assert_1_0(t_8, t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, z_38), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_f_35, x_38));
    {
      ATerm u_8 (ATerm t)
      {
        t = term_o_34;
        return(t);
      }
      t = assert_1_0(u_8, t);
      t = b_39;
    }
  }
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm g_35 = t;
  if((PushChoice() == 0))
    {
      ATerm d_39 = NULL,e_39 = NULL;
      if(match_cons(t, sym__2))
        {
          d_39 = ATgetArgument(t, 0);
          e_39 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm h_35 = t;
        int i_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(d_39, e_39);
            ;
            LocalPopChoice(i_35);
          }
        else
          {
            t = h_35;
            t = SSL_gtr(d_39, e_39);
          }
        t = (ATerm) ATmakeAppl(sym__2, d_39, e_39);
      }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = g_35;
    }
  return(t);
}
ATerm foldr_3_0 (ATerm g_129 (ATerm), ATerm h_129 (ATerm), ATerm i_129 (ATerm), ATerm t)
{
  ATerm k_35 = t;
  int l_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = g_129(t);
      ;
      LocalPopChoice(l_35);
    }
  else
    {
      t = k_35;
      {
        ATerm j_39 = NULL,l_39 = NULL,q_39 = NULL,r_39 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_39 = ATgetFirst((ATermList) t);
            l_39 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = j_39;
        t = i_129(t);
        q_39 = t;
        t = l_39;
        t = foldr_3_0(g_129, h_129, i_129, t);
        r_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_39, r_39);
        t = h_129(t);
      }
    }
  return(t);
}
ATerm term_size_0_0 (ATerm t)
{
  ATerm m_35 = t;
  int n_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_9 = NULL,x_9 = NULL;
      w_9 = t;
      t = SSL_explode_term(w_9);
      if(match_cons(t, sym__2))
        {
          ATerm o_35 = ATgetArgument(t, 0);
          x_9 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = x_9;
      {
        ATerm x_8 (ATerm t)
        {
          t = term_r_32;
          return(t);
        }
        ATerm y_8 (ATerm t)
        {
          ATerm c_10 = NULL,d_10 = NULL;
          if(match_cons(t, sym__2))
            {
              c_10 = ATgetArgument(t, 0);
              d_10 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          {
            ATerm q_35 = t;
            int r_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SSL_addi(c_10, d_10);
                ;
                LocalPopChoice(r_35);
              }
            else
              {
                t = q_35;
                t = SSL_addr(c_10, d_10);
              }
          }
          return(t);
        }
        t = foldr_3_0(x_8, y_8, term_size_0_0, t);
      }
      ;
      LocalPopChoice(n_35);
    }
  else
    {
      t = m_35;
      {
        ATerm z_39 (ATerm t)
        {
          ATerm e_10 = NULL,f_10 = NULL;
          e_10 = t;
          t = SSL_explode_term(e_10);
          if(match_cons(t, sym__2))
            {
              ATerm s_35 = ATgetArgument(t, 0);
              f_10 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = f_10;
          {
            ATerm e_9 (ATerm t)
            {
              t = term_r_32;
              return(t);
            }
            ATerm f_9 (ATerm t)
            {
              ATerm j_10 = NULL,k_10 = NULL;
              if(match_cons(t, sym__2))
                {
                  j_10 = ATgetArgument(t, 0);
                  k_10 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              {
                ATerm t_35 = t;
                int j_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = SSL_addi(j_10, k_10);
                    ;
                    LocalPopChoice(j_36);
                  }
                else
                  {
                    t = t_35;
                    t = SSL_addr(j_10, k_10);
                  }
              }
              return(t);
            }
            t = foldr_3_0(e_9, f_9, z_39, t);
          }
          return(t);
        }
        t = z_39(t);
      }
    }
  return(t);
}
ATerm GuardedLChoice_3_0 (ATerm k_107 (ATerm), ATerm l_107 (ATerm), ATerm m_107 (ATerm), ATerm t)
{
  ATerm a_40 = NULL,b_40 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL,g_40 = NULL,h_40 = NULL,j_40 = NULL;
  j_40 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      b_40 = ATgetArgument(t, 0);
      c_40 = ATgetArgument(t, 1);
      d_40 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_40);
  a_40 = t;
  t = b_40;
  t = k_107(t);
  e_40 = t;
  t = c_40;
  t = l_107(t);
  g_40 = t;
  t = d_40;
  t = m_107(t);
  h_40 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, e_40, g_40, h_40), a_40);
  return(t);
}
ATerm LChoice_2_0 (ATerm g_107 (ATerm), ATerm h_107 (ATerm), ATerm t)
{
  ATerm p_40 = NULL,q_40 = NULL,t_40 = NULL,v_40 = NULL,x_40 = NULL,y_40 = NULL;
  y_40 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      q_40 = ATgetArgument(t, 0);
      t_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_40);
  p_40 = t;
  t = q_40;
  t = g_107(t);
  v_40 = t;
  t = t_40;
  t = h_107(t);
  x_40 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, v_40, x_40), p_40);
  return(t);
}
ATerm Choice_2_0 (ATerm e_106 (ATerm), ATerm f_106 (ATerm), ATerm t)
{
  ATerm b_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL,j_41 = NULL,s_41 = NULL;
  s_41 = t;
  if(match_cons(t, sym_Choice_2))
    {
      d_41 = ATgetArgument(t, 0);
      e_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_41);
  b_41 = t;
  t = d_41;
  t = e_106(t);
  f_41 = t;
  t = e_41;
  t = f_106(t);
  j_41 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, f_41, j_41), b_41);
  return(t);
}
ATerm Match_1_0 (ATerm x_106 (ATerm), ATerm t)
{
  ATerm w_41 = NULL,f_42 = NULL,m_42 = NULL,r_42 = NULL;
  r_42 = t;
  if(match_cons(t, sym_Match_1))
    {
      f_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_42);
  w_41 = t;
  t = f_42;
  t = x_106(t);
  m_42 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, m_42), w_41);
  return(t);
}
ATerm Seq_2_0 (ATerm e_107 (ATerm), ATerm f_107 (ATerm), ATerm t)
{
  ATerm b_43 = NULL,c_43 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL,g_43 = NULL;
  g_43 = t;
  if(match_cons(t, sym_Seq_2))
    {
      c_43 = ATgetArgument(t, 0);
      d_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_43);
  b_43 = t;
  t = c_43;
  t = e_107(t);
  e_43 = t;
  t = d_43;
  t = f_107(t);
  f_43 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, e_43, f_43), b_43);
  return(t);
}
ATerm Scope_2_0 (ATerm a_107 (ATerm), ATerm b_107 (ATerm), ATerm t)
{
  ATerm j_43 = NULL,k_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL,o_43 = NULL;
  o_43 = t;
  if(match_cons(t, sym_Scope_2))
    {
      k_43 = ATgetArgument(t, 0);
      l_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_43);
  j_43 = t;
  t = k_43;
  t = a_107(t);
  m_43 = t;
  t = l_43;
  t = b_107(t);
  n_43 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, m_43, n_43), j_43);
  return(t);
}
ATerm Build_1_0 (ATerm y_106 (ATerm), ATerm t)
{
  ATerm s_43 = NULL,u_43 = NULL,w_43 = NULL,x_43 = NULL;
  x_43 = t;
  if(match_cons(t, sym_Build_1))
    {
      u_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_43);
  s_43 = t;
  t = u_43;
  t = y_106(t);
  w_43 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, w_43), s_43);
  return(t);
}
ATerm SVar_1_0 (ATerm p_106 (ATerm), ATerm t)
{
  ATerm a_44 = NULL,b_44 = NULL,c_44 = NULL,d_44 = NULL;
  d_44 = t;
  if(match_cons(t, sym_SVar_1))
    {
      b_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_44);
  a_44 = t;
  t = b_44;
  t = p_106(t);
  c_44 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, c_44), a_44);
  return(t);
}
ATerm PrimT_3_0 (ATerm w_107 (ATerm), ATerm x_107 (ATerm), ATerm y_107 (ATerm), ATerm t)
{
  ATerm g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL,k_44 = NULL,l_44 = NULL,m_44 = NULL,n_44 = NULL;
  n_44 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      h_44 = ATgetArgument(t, 0);
      i_44 = ATgetArgument(t, 1);
      j_44 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_44);
  g_44 = t;
  t = h_44;
  t = w_107(t);
  k_44 = t;
  t = i_44;
  t = x_107(t);
  l_44 = t;
  t = j_44;
  t = y_107(t);
  m_44 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, k_44, l_44, m_44), g_44);
  return(t);
}
ATerm CallT_3_0 (ATerm u_106 (ATerm), ATerm v_106 (ATerm), ATerm w_106 (ATerm), ATerm t)
{
  ATerm q_44 = NULL,r_44 = NULL,s_44 = NULL,u_44 = NULL,w_44 = NULL,y_44 = NULL,z_44 = NULL,a_45 = NULL;
  a_45 = t;
  if(match_cons(t, sym_CallT_3))
    {
      r_44 = ATgetArgument(t, 0);
      s_44 = ATgetArgument(t, 1);
      u_44 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_45);
  q_44 = t;
  t = r_44;
  t = u_106(t);
  w_44 = t;
  t = s_44;
  t = v_106(t);
  y_44 = t;
  t = u_44;
  t = w_106(t);
  z_44 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, w_44, y_44, z_44), q_44);
  return(t);
}
ATerm body_to_inline_0_0 (ATerm t)
{
  ATerm d_45 = NULL,e_45 = NULL;
  ATerm f_45 (ATerm t)
  {
    ATerm k_36 = t;
    int l_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(!(match_cons(t, sym_Id_0)))
          _fail(t);
        ;
        LocalPopChoice(l_36);
      }
    else
      {
        t = k_36;
        {
          ATerm m_36 = t;
          int n_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              ;
              LocalPopChoice(n_36);
            }
          else
            {
              t = m_36;
              {
                ATerm o_36 = t;
                int p_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm g_9 (ATerm t)
                    {
                      t = SVar_1_0(_id, t);
                      return(t);
                    }
                    t = CallT_3_0(g_9, _id, _id, t);
                    ;
                    LocalPopChoice(p_36);
                  }
                else
                  {
                    t = o_36;
                    {
                      ATerm q_36 = t;
                      int s_36 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm j_9 (ATerm t)
                          {
                            t = SVar_1_0(_id, t);
                            return(t);
                          }
                          t = PrimT_3_0(j_9, _id, _id, t);
                          ;
                          LocalPopChoice(s_36);
                        }
                      else
                        {
                          t = q_36;
                          {
                            ATerm t_36 = t;
                            int z_36 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = Build_1_0(_id, t);
                                ;
                                LocalPopChoice(z_36);
                              }
                            else
                              {
                                t = t_36;
                                {
                                  ATerm a_37 = t;
                                  int e_37 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = Match_1_0(_id, t);
                                      ;
                                      LocalPopChoice(e_37);
                                    }
                                  else
                                    {
                                      t = a_37;
                                      {
                                        ATerm f_37 = t;
                                        int g_37 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm k_9 (ATerm t)
                                            {
                                              t = Match_1_0(_id, t);
                                              return(t);
                                            }
                                            t = Seq_2_0(k_9, _id, t);
                                            ;
                                            LocalPopChoice(g_37);
                                          }
                                        else
                                          {
                                            t = f_37;
                                            {
                                              ATerm h_37 = t;
                                              int i_37 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm l_9 (ATerm t)
                                                  {
                                                    t = Match_1_0(_id, t);
                                                    return(t);
                                                  }
                                                  t = Scope_2_0(_id, l_9, t);
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
                                                        ATerm m_9 (ATerm t)
                                                        {
                                                          ATerm n_9 (ATerm t)
                                                          {
                                                            t = Match_1_0(_id, t);
                                                            return(t);
                                                          }
                                                          t = Seq_2_0(n_9, _id, t);
                                                          return(t);
                                                        }
                                                        t = Scope_2_0(_id, m_9, t);
                                                        ;
                                                        LocalPopChoice(k_37);
                                                      }
                                                    else
                                                      {
                                                        t = j_37;
                                                        {
                                                          ATerm p_37 = t;
                                                          int q_37 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm p_9 (ATerm t)
                                                              {
                                                                ATerm q_9 (ATerm t)
                                                                {
                                                                  ATerm r_9 (ATerm t)
                                                                  {
                                                                    t = Match_1_0(_id, t);
                                                                    return(t);
                                                                  }
                                                                  t = Seq_2_0(r_9, _id, t);
                                                                  return(t);
                                                                }
                                                                t = Scope_2_0(_id, q_9, t);
                                                                return(t);
                                                              }
                                                              t = Seq_2_0(p_9, _id, t);
                                                              ;
                                                              LocalPopChoice(q_37);
                                                            }
                                                          else
                                                            {
                                                              t = p_37;
                                                              {
                                                                ATerm r_37 = t;
                                                                int s_37 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    t = Choice_2_0(f_45, f_45, t);
                                                                    ;
                                                                    LocalPopChoice(s_37);
                                                                  }
                                                                else
                                                                  {
                                                                    t = r_37;
                                                                    {
                                                                      ATerm u_37 = t;
                                                                      int v_37 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = LChoice_2_0(f_45, f_45, t);
                                                                          ;
                                                                          LocalPopChoice(v_37);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = u_37;
                                                                          t = GuardedLChoice_3_0(f_45, f_45, f_45, t);
                                                                        }
                                                                    }
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                            }
                                          }
                                      }
                                    }
                                }
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
  t = f_45(t);
  d_45 = t;
  t = term_size_0_0(t);
  e_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_45, term_w_37);
  t = leq_0_0(t);
  t = d_45;
  return(t);
}
ATerm SDefT_4_0 (ATerm i_109 (ATerm), ATerm j_109 (ATerm), ATerm k_109 (ATerm), ATerm l_109 (ATerm), ATerm t)
{
  ATerm g_45 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL,k_45 = NULL,l_45 = NULL,m_45 = NULL,n_45 = NULL,p_45 = NULL,r_45 = NULL;
  r_45 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      h_45 = ATgetArgument(t, 0);
      i_45 = ATgetArgument(t, 1);
      j_45 = ATgetArgument(t, 2);
      k_45 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_45);
  g_45 = t;
  t = h_45;
  t = i_109(t);
  l_45 = t;
  t = i_45;
  t = j_109(t);
  m_45 = t;
  t = j_45;
  t = k_109(t);
  n_45 = t;
  t = k_45;
  t = l_109(t);
  p_45 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, l_45, m_45, n_45, p_45), g_45);
  return(t);
}
ATerm inlineable_0_0 (ATerm t)
{
  ATerm x_45 = NULL;
  ATerm u_9 (ATerm t)
  {
    ATerm x_37 = t;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main_0_0", 0, ATtrue)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_37;
      }
    if(((x_45 != NULL) && (x_45 != t)))
      _fail(t);
    else
      x_45 = t;
    return(t);
  }
  ATerm y_9 (ATerm t)
  {
    ATerm z_45 = NULL;
    z_45 = t;
    {
      ATerm y_37 = t;
      if((PushChoice() == 0))
        {
          ATerm z_9 (ATerm t)
          {
            if(match_cons(t, sym_CallT_3))
              {
                ATerm c_38 = ATgetArgument(t, 0);
                if(match_cons(c_38, sym_SVar_1))
                  {
                    if(((x_45 != NULL) && (x_45 != ATgetArgument(c_38, 0))))
                      _fail(ATgetArgument(c_38, 0));
                    else
                      x_45 = ATgetArgument(c_38, 0);
                  }
                else
                  _fail(t);
                {
                  ATerm d_38 = ATgetArgument(t, 1);
                }
                {
                  ATerm e_38 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1_0(z_9, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = y_37;
        }
      t = z_45;
      t = body_to_inline_0_0(t);
    }
    return(t);
  }
  t = SDefT_4_0(u_9, _id, _id, y_9, t);
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm f_46 = NULL,g_46 = NULL,j_46 = NULL,l_46 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL;
  if(match_cons(t, sym__2))
    {
      j_46 = ATgetArgument(t, 0);
      l_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_46;
  if(match_cons(t, sym_Build_1))
    {
      ATerm f_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_46;
  if(match_cons(t, sym_Where_1))
    {
      m_46 = ATgetArgument(t, 0);
      t = m_46;
      if(match_cons(t, sym_Prim_2))
        {
          f_46 = ATgetArgument(t, 0);
          g_46 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(t, sym_Prim_2))
        {
          m_46 = ATgetArgument(t, 0);
          n_46 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_Prim_2, m_46, n_46);
        }
      else
        {
          if(match_cons(t, sym_PrimT_3))
            {
              m_46 = ATgetArgument(t, 0);
              n_46 = ATgetArgument(t, 1);
              o_46 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
        }
    }
  return(t);
}
ATerm genzip_4_0 (ATerm p_122 (ATerm), ATerm q_122 (ATerm), ATerm r_122 (ATerm), ATerm s_122 (ATerm), ATerm t)
{
  ATerm y_46 (ATerm t)
  {
    ATerm g_38 = t;
    int h_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_122(t);
        ;
        LocalPopChoice(h_38);
      }
    else
      {
        t = g_38;
        t = q_122(t);
        t = _2_0(s_122, y_46, t);
        t = r_122(t);
      }
    return(t);
  }
  t = y_46(t);
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm z_46 = NULL,a_47 = NULL,b_47 = NULL,c_47 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_38 = ATgetArgument(t, 0);
      if(match_cons(k_38, sym_Build_1))
        {
          ATerm m_38 = ATgetArgument(k_38, 0);
          if(match_cons(m_38, sym_Op_2))
            {
              a_47 = ATgetArgument(m_38, 0);
              z_46 = ATgetArgument(m_38, 1);
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
                if((a_47 != ATgetArgument(n_38, 0)))
                  {
                    _fail(ATgetArgument(n_38, 0));
                  }
                b_47 = ATgetArgument(n_38, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, z_46, b_47);
  {
    ATerm a_10 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          ATerm o_38 = ATgetArgument(t, 0);
          if(((ATgetType(o_38) != AT_LIST) || !(ATisEmpty(o_38))))
            _fail(t);
          {
            ATerm q_38 = ATgetArgument(t, 1);
            if(((ATgetType(q_38) != AT_LIST) || !(ATisEmpty(q_38))))
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      return(t);
    }
    ATerm b_10 (ATerm t)
    {
      ATerm d_47 = NULL,e_47 = NULL,f_47 = NULL,g_47 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm s_38 = ATgetArgument(t, 0);
          if(((ATgetType(s_38) == AT_LIST) && !(ATisEmpty(s_38))))
            {
              d_47 = ATgetFirst((ATermList) s_38);
              f_47 = (ATerm) ATgetNext((ATermList) s_38);
            }
          else
            _fail(t);
          {
            ATerm w_38 = ATgetArgument(t, 1);
            if(((ATgetType(w_38) == AT_LIST) && !(ATisEmpty(w_38))))
              {
                e_47 = ATgetFirst((ATermList) w_38);
                g_47 = (ATerm) ATgetNext((ATermList) w_38);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_47, e_47), (ATerm) ATmakeAppl(sym__2, f_47, g_47));
      return(t);
    }
    ATerm g_10 (ATerm t)
    {
      ATerm h_47 = NULL,i_47 = NULL;
      if(match_cons(t, sym__2))
        {
          h_47 = ATgetArgument(t, 0);
          i_47 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(i_47), h_47);
      return(t);
    }
    ATerm h_10 (ATerm t)
    {
      ATerm j_47 = NULL,k_47 = NULL;
      if(match_cons(t, sym__2))
        {
          j_47 = ATgetArgument(t, 0);
          k_47 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, j_47), (ATerm) ATmakeAppl(sym_Match_1, k_47));
      return(t);
    }
    t = genzip_4_0(a_10, b_10, g_10, h_10, t);
    c_47 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, c_47), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, a_47, z_46)));
  }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm l_47 = NULL,m_47 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_38 = ATgetArgument(t, 0);
      if(match_cons(y_38, sym_Build_1))
        {
          ATerm c_39 = ATgetArgument(y_38, 0);
          if(match_cons(c_39, sym_Op_2))
            {
              l_47 = ATgetArgument(c_39, 0);
              {
                ATerm f_39 = ATgetArgument(c_39, 1);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm a_39 = ATgetArgument(t, 1);
        if(match_cons(a_39, sym_Match_1))
          {
            ATerm g_39 = ATgetArgument(a_39, 0);
            if(match_cons(g_39, sym_Op_2))
              {
                m_47 = ATgetArgument(g_39, 0);
                {
                  ATerm h_39 = ATgetArgument(g_39, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, l_47, m_47);
  {
    ATerm i_39 = t;
    if((PushChoice() == 0))
      {
        ATerm n_47 = NULL;
        if(match_cons(t, sym__2))
          {
            n_47 = ATgetArgument(t, 0);
            if((n_47 != ATgetArgument(t, 1)))
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
        t = i_39;
      }
    t = term_k_39;
  }
  return(t);
}
ATerm BuildMatch_0_0 (ATerm t)
{
  ATerm t_50 (ATerm j_49, ATerm k_49, ATerm l_49, ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, j_49, k_49);
    {
      ATerm m_39 = t;
      int n_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = MisMatch_0_0(t);
          ;
          LocalPopChoice(n_39);
        }
      else
        {
          t = m_39;
          {
            ATerm o_39 = t;
            int p_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = BuildMatchFusion_0_0(t);
                ;
                LocalPopChoice(p_39);
              }
            else
              {
                t = o_39;
                {
                  ATerm s_39 = t;
                  int t_39 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm w_49 = NULL;
                      if(match_cons(t, sym__2))
                        {
                          ATerm u_39 = ATgetArgument(t, 0);
                          ATerm v_39 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = j_49;
                      if(match_cons(t, sym_Build_1))
                        {
                          ATerm w_39 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = k_49;
                      if(match_cons(t, sym_Build_1))
                        {
                          w_49 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      ;
                      LocalPopChoice(t_39);
                    }
                  else
                    {
                      t = s_39;
                      {
                        ATerm x_39 = t;
                        int y_39 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = BuildPrim_0_0(t);
                            ;
                            LocalPopChoice(y_39);
                          }
                        else
                          {
                            t = x_39;
                            {
                              ATerm g_50 = NULL,j_50 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  ATerm f_40 = ATgetArgument(t, 0);
                                  ATerm i_40 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = j_49;
                              if(match_cons(t, sym_Match_1))
                                {
                                  g_50 = ATgetArgument(t, 0);
                                  t = k_49;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      j_50 = ATgetArgument(t, 0);
                                      t = j_50;
                                      if((g_50 != t))
                                        {
                                          _fail(t);
                                        }
                                      t = (ATerm) ATmakeAppl(sym_Match_1, g_50);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Build_1))
                                        {
                                          j_50 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = j_50;
                                      if((g_50 != t))
                                        {
                                          _fail(t);
                                        }
                                      t = (ATerm) ATmakeAppl(sym_Match_1, g_50);
                                    }
                                }
                              else
                                {
                                  if(match_cons(t, sym_Build_1))
                                    {
                                      g_50 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = k_49;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      j_50 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = j_50;
                                  if((g_50 != t))
                                    {
                                      _fail(t);
                                    }
                                  t = (ATerm) ATmakeAppl(sym_Build_1, g_50);
                                }
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
  ATerm n_50 = NULL,o_50 = NULL,p_50 = NULL,q_50 = NULL,r_50 = NULL;
  p_50 = t;
  if(match_cons(t, sym_Seq_2))
    {
      q_50 = ATgetArgument(t, 0);
      r_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_50;
  if(match_cons(t, sym_Seq_2))
    {
      n_50 = ATgetArgument(t, 0);
      o_50 = ATgetArgument(t, 1);
      {
        ATerm k_40 = t;
        int l_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_10 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, q_50, n_50);
            {
              ATerm m_40 = t;
              int n_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = MisMatch_0_0(t);
                  ;
                  LocalPopChoice(n_40);
                }
              else
                {
                  t = m_40;
                  {
                    ATerm o_40 = t;
                    int r_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = BuildMatchFusion_0_0(t);
                        ;
                        LocalPopChoice(r_40);
                      }
                    else
                      {
                        t = o_40;
                        {
                          ATerm s_40 = t;
                          int u_40 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm x_10 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  ATerm w_40 = ATgetArgument(t, 0);
                                  ATerm z_40 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = q_50;
                              if(match_cons(t, sym_Build_1))
                                {
                                  ATerm a_41 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = n_50;
                              if(match_cons(t, sym_Build_1))
                                {
                                  x_10 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              ;
                              LocalPopChoice(u_40);
                            }
                          else
                            {
                              t = s_40;
                              {
                                ATerm c_41 = t;
                                int g_41 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildPrim_0_0(t);
                                    ;
                                    LocalPopChoice(g_41);
                                  }
                                else
                                  {
                                    t = c_41;
                                    {
                                      ATerm b_11 = NULL,d_11 = NULL;
                                      if(match_cons(t, sym__2))
                                        {
                                          ATerm h_41 = ATgetArgument(t, 0);
                                          ATerm i_41 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = q_50;
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          b_11 = ATgetArgument(t, 0);
                                          t = n_50;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              d_11 = ATgetArgument(t, 0);
                                              t = d_11;
                                              if((b_11 != t))
                                                {
                                                  _fail(t);
                                                }
                                              t = (ATerm) ATmakeAppl(sym_Match_1, b_11);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Build_1))
                                                {
                                                  d_11 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = d_11;
                                              if((b_11 != t))
                                                {
                                                  _fail(t);
                                                }
                                              t = (ATerm) ATmakeAppl(sym_Match_1, b_11);
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_Build_1))
                                            {
                                              b_11 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = n_50;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              d_11 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = d_11;
                                          if((b_11 != t))
                                            {
                                              _fail(t);
                                            }
                                          t = (ATerm) ATmakeAppl(sym_Build_1, b_11);
                                        }
                                    }
                                  }
                              }
                            }
                        }
                      }
                  }
                }
              s_10 = t;
              t = (ATerm) ATmakeAppl(sym_Seq_2, s_10, o_50);
            }
            ;
            LocalPopChoice(l_40);
          }
        else
          {
            t = k_40;
            t = t_50(q_50, r_50, p_50, t);
          }
      }
    }
  else
    {
      t = t_50(q_50, r_50, p_50, t);
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm h_119 (ATerm), ATerm t)
{
  ATerm w_50 (ATerm t)
  {
    ATerm k_41 = t;
    int l_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_119(t);
        ;
        LocalPopChoice(l_41);
      }
    else
      {
        t = k_41;
        t = SRTS_one(w_50, t);
      }
    return(t);
  }
  t = w_50(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm x_50 = NULL,y_50 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      ATerm m_41 = ATgetArgument(t, 0);
      if(((ATgetType(m_41) == AT_LIST) && !(ATisEmpty(m_41))))
        {
          ATerm o_41 = ATgetFirst((ATermList) m_41);
          if(match_cons(o_41, sym_SDefT_4))
            {
              y_50 = ATgetArgument(o_41, 0);
              {
                ATerm q_41 = ATgetArgument(o_41, 1);
                if(((ATgetType(q_41) != AT_LIST) || !(ATisEmpty(q_41))))
                  _fail(t);
              }
              {
                ATerm r_41 = ATgetArgument(o_41, 2);
                if(((ATgetType(r_41) != AT_LIST) || !(ATisEmpty(r_41))))
                  _fail(t);
              }
              x_50 = ATgetArgument(o_41, 3);
            }
          else
            _fail(t);
          {
            ATerm p_41 = (ATerm) ATgetNext((ATermList) m_41);
            if(((ATgetType(p_41) != AT_LIST) || !(ATisEmpty(p_41))))
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm n_41 = ATgetArgument(t, 1);
        if(match_cons(n_41, sym_CallT_3))
          {
            ATerm t_41 = ATgetArgument(n_41, 0);
            if(match_cons(t_41, sym_SVar_1))
              {
                if((y_50 != ATgetArgument(t_41, 0)))
                  {
                    _fail(ATgetArgument(t_41, 0));
                  }
              }
            else
              _fail(t);
            {
              ATerm u_41 = ATgetArgument(n_41, 1);
              if(((ATgetType(u_41) != AT_LIST) || !(ATisEmpty(u_41))))
                _fail(t);
            }
            {
              ATerm v_41 = ATgetArgument(n_41, 2);
              if(((ATgetType(v_41) != AT_LIST) || !(ATisEmpty(v_41))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = x_50;
  {
    ATerm x_41 = t;
    if((PushChoice() == 0))
      {
        ATerm i_10 (ATerm t)
        {
          if(match_cons(t, sym_CallT_3))
            {
              ATerm y_41 = ATgetArgument(t, 0);
              if(match_cons(y_41, sym_SVar_1))
                {
                  if((y_50 != ATgetArgument(y_41, 0)))
                    {
                      _fail(ATgetArgument(y_41, 0));
                    }
                }
              else
                _fail(t);
              {
                ATerm z_41 = ATgetArgument(t, 1);
                if(((ATgetType(z_41) != AT_LIST) || !(ATisEmpty(z_41))))
                  _fail(t);
              }
              {
                ATerm a_42 = ATgetArgument(t, 2);
                if(((ATgetType(a_42) != AT_LIST) || !(ATisEmpty(a_42))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(i_10, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_41;
      }
    t = x_50;
  }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm g_51 = NULL,h_51 = NULL,i_51 = NULL,j_51 = NULL,k_51 = NULL,l_51 = NULL,n_51 = NULL,o_51 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      n_51 = ATgetArgument(t, 0);
      t = n_51;
      if(match_cons(t, sym_Seq_2))
        {
          l_51 = ATgetArgument(t, 0);
          h_51 = ATgetArgument(t, 1);
          t = l_51;
          if(match_cons(t, sym_Where_1))
            {
              g_51 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = h_51;
          if(match_cons(t, sym_Seq_2))
            {
              i_51 = ATgetArgument(t, 0);
              k_51 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = i_51;
          if(match_cons(t, sym_Build_1))
            {
              j_51 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, g_51, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, j_51), k_51)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              l_51 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          n_51 = ATgetArgument(t, 0);
          t = n_51;
          if(match_cons(t, sym_Test_1))
            {
              l_51 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              n_51 = ATgetArgument(t, 0);
              t = n_51;
              if(match_cons(t, sym_Not_1))
                {
                  l_51 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, l_51);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  n_51 = ATgetArgument(t, 0);
                  o_51 = ATgetArgument(t, 1);
                  t = o_51;
                  if((n_51 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      n_51 = ATgetArgument(t, 0);
                      o_51 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = o_51;
                  if((n_51 != t))
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
  ATerm g_52 = NULL,k_52 = NULL,n_52 = NULL,o_52 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      g_52 = ATgetArgument(t, 0);
      o_52 = ATgetArgument(t, 1);
      t = g_52;
      if(match_cons(t, sym_LChoice_2))
        {
          k_52 = ATgetArgument(t, 0);
          n_52 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, k_52, (ATerm) ATmakeAppl(sym_LChoice_2, n_52, o_52));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          g_52 = ATgetArgument(t, 0);
          o_52 = ATgetArgument(t, 1);
          t = g_52;
          if(match_cons(t, sym_Seq_2))
            {
              k_52 = ATgetArgument(t, 0);
              n_52 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, k_52, (ATerm) ATmakeAppl(sym_Seq_2, n_52, o_52));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              g_52 = ATgetArgument(t, 0);
              o_52 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = g_52;
          if(match_cons(t, sym_Choice_2))
            {
              k_52 = ATgetArgument(t, 0);
              n_52 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, k_52, (ATerm) ATmakeAppl(sym_Choice_2, n_52, o_52));
        }
    }
  return(t);
}
ATerm map1_1_0 (ATerm l_0 (ATerm), ATerm t)
{
  ATerm b_42 = t;
  int c_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(l_0, _id, t);
      {
        ATerm l_10 (ATerm t)
        {
          ATerm d_42 = t;
          int e_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(l_0, t);
              ;
              LocalPopChoice(e_42);
            }
          else
            {
              t = d_42;
            }
          return(t);
        }
        t = Cons_2_0(_id, l_10, t);
      }
      ;
      LocalPopChoice(c_42);
    }
  else
    {
      t = b_42;
      {
        ATerm m_10 (ATerm t)
        {
          t = map1_1_0(l_0, t);
          return(t);
        }
        t = Cons_2_0(_id, m_10, t);
      }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm f_53 = NULL,g_53 = NULL,h_53 = NULL,i_53 = NULL,k_53 = NULL,l_53 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      k_53 = ATgetArgument(t, 0);
      l_53 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, k_53, l_53);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          k_53 = ATgetArgument(t, 0);
          t = k_53;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              f_53 = ATgetFirst((ATermList) t);
              g_53 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, f_53, (ATerm) ATmakeAppl(sym_LChoices_1, g_53));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_k_39;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              k_53 = ATgetArgument(t, 0);
              t = k_53;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  f_53 = ATgetFirst((ATermList) t);
                  g_53 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, f_53, (ATerm) ATmakeAppl(sym_Choices_1, g_53));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_k_39;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  k_53 = ATgetArgument(t, 0);
                  t = k_53;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      f_53 = ATgetFirst((ATermList) t);
                      g_53 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_53, (ATerm) ATmakeAppl(sym_Seqs_1, g_53));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_g_42;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      k_53 = ATgetArgument(t, 0);
                      l_53 = ATgetArgument(t, 1);
                      i_53 = ATgetArgument(t, 2);
                      h_53 = ATgetArgument(t, 3);
                      {
                        ATerm c_54 = NULL,d_54 = NULL;
                        t = l_53;
                        {
                          ATerm n_10 (ATerm t)
                          {
                            ATerm e_54 = NULL;
                            if(match_cons(t, sym_DefaultVarDec_1))
                              {
                                e_54 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym_VarDec_2, e_54, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_j_42), term_j_42));
                            return(t);
                          }
                          t = map1_1_0(n_10, t);
                          c_54 = t;
                          t = i_53;
                          {
                            ATerm o_10 (ATerm t)
                            {
                              ATerm k_42 = t;
                              int l_42 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm h_54 = NULL;
                                  if(match_cons(t, sym_DefaultVarDec_1))
                                    {
                                      h_54 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_VarDec_2, h_54, term_j_42);
                                  ;
                                  LocalPopChoice(l_42);
                                }
                              else
                                {
                                  t = k_42;
                                }
                              return(t);
                            }
                            t = map1_1_0(o_10, t);
                            d_54 = t;
                            t = (ATerm) ATmakeAppl(sym_RDefT_4, k_53, c_54, d_54, h_53);
                          }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          k_53 = ATgetArgument(t, 0);
                          l_53 = ATgetArgument(t, 1);
                          i_53 = ATgetArgument(t, 2);
                          h_53 = ATgetArgument(t, 3);
                          {
                            ATerm n_42 = t;
                            int o_42 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm n_54 = NULL,o_54 = NULL;
                                t = i_53;
                                {
                                  ATerm p_10 (ATerm t)
                                  {
                                    ATerm p_54 = NULL;
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        p_54 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, p_54, term_j_42);
                                    return(t);
                                  }
                                  t = map1_1_0(p_10, t);
                                  n_54 = t;
                                  t = l_53;
                                  {
                                    ATerm q_10 (ATerm t)
                                    {
                                      ATerm p_42 = t;
                                      int q_42 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm r_54 = NULL;
                                          if(match_cons(t, sym_DefaultVarDec_1))
                                            {
                                              r_54 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_VarDec_2, r_54, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_j_42), term_j_42));
                                          ;
                                          LocalPopChoice(q_42);
                                        }
                                      else
                                        {
                                          t = p_42;
                                        }
                                      return(t);
                                    }
                                    t = map_1_0(q_10, t);
                                    o_54 = t;
                                    t = (ATerm) ATmakeAppl(sym_SDefT_4, k_53, o_54, n_54, h_53);
                                  }
                                }
                                ;
                                LocalPopChoice(o_42);
                              }
                            else
                              {
                                t = n_42;
                                {
                                  ATerm x_54 = NULL,y_54 = NULL;
                                  t = l_53;
                                  {
                                    ATerm r_10 (ATerm t)
                                    {
                                      ATerm z_54 = NULL;
                                      if(match_cons(t, sym_DefaultVarDec_1))
                                        {
                                          z_54 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_VarDec_2, z_54, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_j_42), term_j_42));
                                      return(t);
                                    }
                                    t = map1_1_0(r_10, t);
                                    x_54 = t;
                                    t = i_53;
                                    {
                                      ATerm t_10 (ATerm t)
                                      {
                                        ATerm s_42 = t;
                                        int t_42 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm b_55 = NULL;
                                            if(match_cons(t, sym_DefaultVarDec_1))
                                              {
                                                b_55 = ATgetArgument(t, 0);
                                              }
                                            else
                                              _fail(t);
                                            t = (ATerm) ATmakeAppl(sym_VarDec_2, b_55, term_j_42);
                                            ;
                                            LocalPopChoice(t_42);
                                          }
                                        else
                                          {
                                            t = s_42;
                                          }
                                        return(t);
                                      }
                                      t = map_1_0(t_10, t);
                                      y_54 = t;
                                      t = (ATerm) ATmakeAppl(sym_SDefT_4, k_53, x_54, y_54, h_53);
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
                              k_53 = ATgetArgument(t, 0);
                              l_53 = ATgetArgument(t, 1);
                              i_53 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, l_53, (ATerm) ATmakeAppl(sym_Op_2, term_u_42, (ATerm) ATinsert(ATinsert(ATempty, i_53), k_53)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  k_53 = ATgetArgument(t, 0);
                                  l_53 = ATgetArgument(t, 1);
                                  i_53 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, i_53)), k_53), (ATerm) ATmakeAppl(sym_Build_1, l_53)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      k_53 = ATgetArgument(t, 0);
                                      l_53 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, k_53, (ATerm) ATmakeAppl(sym_Match_1, l_53));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          k_53 = ATgetArgument(t, 0);
                                          l_53 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, k_53), l_53);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              k_53 = ATgetArgument(t, 0);
                                              l_53 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, l_53), k_53);
                                        }
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
  ATerm o_56 = NULL,p_56 = NULL,q_56 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      o_56 = ATgetArgument(t, 0);
      t = o_56;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          o_56 = ATgetArgument(t, 0);
          t = o_56;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_g_42;
        }
      else
        {
          ATerm v_42 = t;
          int w_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_Seq_2))
                {
                  o_56 = ATgetArgument(t, 0);
                  {
                    ATerm x_42 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(w_42);
              t = o_56;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
            }
          else
            {
              t = v_42;
              {
                ATerm y_42 = t;
                int z_42 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Scope_2))
                      {
                        ATerm a_43 = ATgetArgument(t, 0);
                        p_56 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(z_42);
                    t = p_56;
                    if(!(match_cons(t, sym_Fail_0)))
                      _fail(t);
                  }
                else
                  {
                    t = y_42;
                    {
                      ATerm h_43 = t;
                      int i_43 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_Rec_2))
                            {
                              ATerm p_43 = ATgetArgument(t, 0);
                              p_56 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(i_43);
                          t = p_56;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                        }
                      else
                        {
                          t = h_43;
                          if(match_cons(t, sym_Some_1))
                            {
                              o_56 = ATgetArgument(t, 0);
                              t = o_56;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                            }
                          else
                            {
                              if(match_cons(t, sym_One_1))
                                {
                                  o_56 = ATgetArgument(t, 0);
                                  t = o_56;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                }
                              else
                                {
                                  ATerm q_43 = t;
                                  int r_43 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_Path_2))
                                        {
                                          ATerm t_43 = ATgetArgument(t, 0);
                                          p_56 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(r_43);
                                      t = p_56;
                                      if(!(match_cons(t, sym_Fail_0)))
                                        _fail(t);
                                    }
                                  else
                                    {
                                      t = q_43;
                                      {
                                        ATerm v_43 = t;
                                        int y_43 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            if(match_cons(t, sym_Cong_2))
                                              {
                                                ATerm z_43 = ATgetArgument(t, 0);
                                                p_56 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            LocalPopChoice(y_43);
                                            t = p_56;
                                            {
                                              ATerm u_10 (ATerm t)
                                              {
                                                if(!(match_cons(t, sym_Fail_0)))
                                                  _fail(t);
                                                return(t);
                                              }
                                              t = fetch_1_0(u_10, t);
                                              t = term_k_39;
                                            }
                                          }
                                        else
                                          {
                                            t = v_43;
                                            if(match_cons(t, sym_Choice_2))
                                              {
                                                o_56 = ATgetArgument(t, 0);
                                                p_56 = ATgetArgument(t, 1);
                                                t = p_56;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    t = o_56;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm e_44 = t;
                                                        int f_44 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = p_56;
                                                            ;
                                                            LocalPopChoice(f_44);
                                                          }
                                                        else
                                                          {
                                                            t = e_44;
                                                            t = o_56;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = o_56;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = o_56;
                                                    if(!(match_cons(t, sym_Fail_0)))
                                                      _fail(t);
                                                    t = p_56;
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_LChoice_2))
                                                  {
                                                    o_56 = ATgetArgument(t, 0);
                                                    p_56 = ATgetArgument(t, 1);
                                                    t = p_56;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        t = o_56;
                                                        if(match_cons(t, sym_Fail_0))
                                                          {
                                                            ATerm o_44 = t;
                                                            int p_44 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = p_56;
                                                                ;
                                                                LocalPopChoice(p_44);
                                                              }
                                                            else
                                                              {
                                                                t = o_44;
                                                                t = o_56;
                                                              }
                                                          }
                                                        else
                                                          {
                                                            t = o_56;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = o_56;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = p_56;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Where_1))
                                                      {
                                                        o_56 = ATgetArgument(t, 0);
                                                        t = o_56;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_GuardedLChoice_3))
                                                          {
                                                            o_56 = ATgetArgument(t, 0);
                                                            p_56 = ATgetArgument(t, 1);
                                                            q_56 = ATgetArgument(t, 2);
                                                          }
                                                        else
                                                          _fail(t);
                                                        t = q_56;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, o_56, p_56);
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                    }
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
  ATerm e_58 = NULL,g_58 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      g_58 = ATgetArgument(t, 0);
      t = g_58;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          g_58 = ATgetArgument(t, 0);
          t = g_58;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_k_39;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              g_58 = ATgetArgument(t, 0);
              e_58 = ATgetArgument(t, 1);
              t = e_58;
              if(match_cons(t, sym_Id_0))
                {
                  t = g_58;
                  if(match_cons(t, sym_Id_0))
                    {
                      ATerm t_44 = t;
                      int v_44 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = e_58;
                          ;
                          LocalPopChoice(v_44);
                        }
                      else
                        {
                          t = t_44;
                          t = g_58;
                        }
                    }
                  else
                    {
                      t = g_58;
                    }
                }
              else
                {
                  t = g_58;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = e_58;
                }
            }
          else
            {
              ATerm x_44 = t;
              int b_45 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      g_58 = ATgetArgument(t, 0);
                      {
                        ATerm c_45 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(b_45);
                  t = g_58;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                }
              else
                {
                  t = x_44;
                  {
                    ATerm o_45 = t;
                    int q_45 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            ATerm s_45 = ATgetArgument(t, 0);
                            e_58 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(q_45);
                        t = e_58;
                        if(!(match_cons(t, sym_Id_0)))
                          _fail(t);
                      }
                    else
                      {
                        t = o_45;
                        {
                          ATerm t_45 = t;
                          int u_45 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Rec_2))
                                {
                                  ATerm v_45 = ATgetArgument(t, 0);
                                  e_58 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(u_45);
                              t = e_58;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                            }
                          else
                            {
                              t = t_45;
                              if(match_cons(t, sym_All_1))
                                {
                                  g_58 = ATgetArgument(t, 0);
                                  t = g_58;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                }
                              else
                                {
                                  if(match_cons(t, sym_Where_1))
                                    {
                                      g_58 = ATgetArgument(t, 0);
                                      t = g_58;
                                      if(!(match_cons(t, sym_Id_0)))
                                        _fail(t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          g_58 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = g_58;
                                      if(!(match_cons(t, sym_Wld_0)))
                                        _fail(t);
                                      t = term_g_42;
                                    }
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
  ATerm w_45 = t;
  int y_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(y_45);
    }
  else
    {
      t = w_45;
      {
        ATerm a_46 = t;
        int b_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
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
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(d_46);
                }
              else
                {
                  t = c_46;
                  {
                    ATerm e_46 = t;
                    int h_46 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(h_46);
                      }
                    else
                      {
                        t = e_46;
                        {
                          ATerm i_46 = t;
                          int k_46 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(k_46);
                            }
                          else
                            {
                              t = i_46;
                              {
                                ATerm p_46 = t;
                                int q_46 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm r_58 = NULL,s_58 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        r_58 = ATgetArgument(t, 0);
                                        s_58 = ATgetArgument(t, 1);
                                        t = r_58;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = s_58;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            r_58 = ATgetArgument(t, 0);
                                            s_58 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = r_58;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = s_58;
                                      }
                                    ;
                                    LocalPopChoice(q_46);
                                  }
                                else
                                  {
                                    t = p_46;
                                    {
                                      ATerm r_46 = t;
                                      int s_46 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
                                          LocalPopChoice(s_46);
                                        }
                                      else
                                        {
                                          t = r_46;
                                          {
                                            ATerm t_46 = t;
                                            int u_46 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = BuildMatch_0_0(t);
                                                ;
                                                LocalPopChoice(u_46);
                                              }
                                            else
                                              {
                                                t = t_46;
                                                {
                                                  ATerm w_58 = NULL,x_58 = NULL;
                                                  if(match_cons(t, sym_As_2))
                                                    {
                                                      w_58 = ATgetArgument(t, 0);
                                                      x_58 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = w_58;
                                                  if(!(match_cons(t, sym_Wld_0)))
                                                    _fail(t);
                                                  t = x_58;
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm repeat_1_0 (ATerm z_134 (ATerm), ATerm t)
{
  ATerm z_58 (ATerm t)
  {
    ATerm v_46 = t;
    int w_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_134(t);
        t = z_58(t);
        ;
        LocalPopChoice(w_46);
      }
    else
      {
        t = v_46;
      }
    return(t);
  }
  t = z_58(t);
  return(t);
}
ATerm downup_1_0 (ATerm f_118 (ATerm), ATerm t)
{
  t = f_118(t);
  {
    ATerm v_10 (ATerm t)
    {
      t = downup_1_0(f_118, t);
      return(t);
    }
    t = SRTS_all(v_10, t);
    t = f_118(t);
  }
  return(t);
}
ATerm inline_sdefs_0_0 (ATerm t)
{
  ATerm w_10 (ATerm t)
  {
    ATerm y_10 (ATerm t)
    {
      t = repeat_1_0(Simplify_0_0, t);
      return(t);
    }
    t = downup_1_0(y_10, t);
    {
      ATerm x_46 = t;
      int o_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = inlineable_0_0(t);
          t = AddSDef_0_0(t);
          ;
          LocalPopChoice(o_47);
        }
      else
        {
          t = x_46;
        }
    }
    return(t);
  }
  t = map_1_0(w_10, t);
  t = map_1_0(inline_sdef_0_0, t);
  return(t);
}
ATerm Strategies_1_0 (ATerm i_102 (ATerm), ATerm t)
{
  ATerm a_59 = NULL,b_59 = NULL,c_59 = NULL,d_59 = NULL;
  d_59 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      b_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_59);
  a_59 = t;
  t = b_59;
  t = i_102(t);
  c_59 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, c_59), a_59);
  return(t);
}
ATerm Cons_2_0 (ATerm c_102 (ATerm), ATerm d_102 (ATerm), ATerm t)
{
  ATerm g_59 = NULL,h_59 = NULL,i_59 = NULL,j_59 = NULL,k_59 = NULL,l_59 = NULL;
  l_59 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_59 = ATgetFirst((ATermList) t);
      i_59 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_59);
  g_59 = t;
  t = h_59;
  t = c_102(t);
  j_59 = t;
  t = i_59;
  t = d_102(t);
  k_59 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(k_59), j_59), g_59);
  return(t);
}
ATerm Specification_1_0 (ATerm n_102 (ATerm), ATerm t)
{
  ATerm o_59 = NULL,v_59 = NULL,b_60 = NULL,c_60 = NULL;
  c_60 = t;
  if(match_cons(t, sym_Specification_1))
    {
      v_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_60);
  o_59 = t;
  t = v_59;
  t = n_102(t);
  b_60 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, b_60), o_59);
  return(t);
}
ATerm _2_0 (ATerm n_97 (ATerm), ATerm o_97 (ATerm), ATerm t)
{
  ATerm f_60 = NULL,g_60 = NULL,h_60 = NULL,i_60 = NULL,j_60 = NULL,k_60 = NULL;
  k_60 = t;
  if(match_cons(t, sym__2))
    {
      g_60 = ATgetArgument(t, 0);
      h_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_60);
  f_60 = t;
  t = g_60;
  t = n_97(t);
  i_60 = t;
  t = h_60;
  t = o_97(t);
  j_60 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, i_60, j_60), f_60);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm q_145 (ATerm), ATerm t)
{
  ATerm n_60 = NULL,o_60 = NULL,p_60 = NULL;
  if(match_cons(t, sym__2))
    {
      n_60 = ATgetArgument(t, 0);
      o_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_60, term_p_47);
  t = open_stream_0_0(t);
  p_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_60, o_60);
  t = q_145(t);
  t = fclose_0_0(t);
  t = o_60;
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm q_60 = NULL,r_60 = NULL;
  q_60 = t;
  {
    ATerm z_10 (ATerm t)
    {
      ATerm q_47 = t;
      int r_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_11 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((r_60 != NULL) && (r_60 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  r_60 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(a_11, t);
          ;
          LocalPopChoice(r_47);
        }
      else
        {
          t = q_47;
          t = term_s_47;
          if(((r_60 != NULL) && (r_60 != t)))
            _fail(t);
          else
            r_60 = t;
        }
      return(t);
    }
    t = _2_0(z_10, _id, t);
    t = q_60;
    {
      ATerm c_11 (ATerm t)
      {
        ATerm h_11 = NULL;
        h_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_60), h_11);
        return(t);
      }
      t = _2_0(_id, c_11, t);
      {
        ATerm t_47 = t;
        int u_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_11 (ATerm t)
            {
              ATerm g_11 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(g_11, t);
              return(t);
            }
            ATerm f_11 (ATerm t)
            {
              ATerm i_11 (ATerm t)
              {
                ATerm s_60 = NULL,t_60 = NULL,u_60 = NULL;
                if(match_cons(t, sym__2))
                  {
                    ATerm v_47 = ATgetArgument(t, 0);
                    if(match_cons(v_47, sym_Stream_1))
                      {
                        s_60 = ATgetArgument(v_47, 0);
                      }
                    else
                      _fail(t);
                    t_60 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_write_term_to_stream_baf(s_60, t_60);
                u_60 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, u_60);
                return(t);
              }
              t = WriteToFile_1_0(i_11, t);
              return(t);
            }
            t = _2_0(e_11, f_11, t);
            ;
            LocalPopChoice(u_47);
          }
        else
          {
            t = t_47;
            {
              ATerm j_11 (ATerm t)
              {
                ATerm k_11 (ATerm t)
                {
                  ATerm v_60 = NULL,w_60 = NULL,x_60 = NULL,y_60 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm w_47 = ATgetArgument(t, 0);
                      if(match_cons(w_47, sym_Stream_1))
                        {
                          v_60 = ATgetArgument(w_47, 0);
                        }
                      else
                        _fail(t);
                      w_60 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSL_write_term_to_stream_text(v_60, w_60);
                  x_60 = t;
                  t = SSL_fputc((ATerm)ATmakeInt(10), x_60);
                  y_60 = t;
                  t = (ATerm) ATmakeAppl(sym_Stream_1, y_60);
                  return(t);
                }
                t = WriteToFile_1_0(k_11, t);
                return(t);
              }
              t = _2_0(_id, j_11, t);
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
ATerm apply_strategy_1_0 (ATerm f_140 (ATerm), ATerm t)
{
  ATerm z_60 = NULL,a_61 = NULL,b_61 = NULL,c_61 = NULL,e_61 = NULL;
  z_60 = t;
  t = dtime_0_0(t);
  t = z_60;
  t = f_140(t);
  a_61 = t;
  t = dtime_0_0(t);
  b_61 = t;
  t = a_61;
  if(match_cons(t, sym__2))
    {
      c_61 = ATgetArgument(t, 0);
      e_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_61), (ATerm) ATmakeAppl(sym_Runtime_1, b_61)), e_61);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm t_61 (ATerm n_61, ATerm t)
  {
    t = SSL_fclose(n_61);
    return(t);
  }
  ATerm q_61 = NULL,r_61 = NULL;
  r_61 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_61 = ATgetArgument(t, 0);
      {
        ATerm x_47 = t;
        int y_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(q_61);
            ;
            LocalPopChoice(y_47);
          }
        else
          {
            t = x_47;
            t = t_61(r_61, t);
          }
      }
    }
  else
    {
      t = t_61(r_61, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm u_61 = NULL;
  t = SSL_stdin_stream();
  u_61 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_61);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm v_61 = NULL;
  t = SSL_stdout_stream();
  v_61 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_61);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm w_61 = NULL;
  t = SSL_stderr_stream();
  w_61 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_61);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_47 = ATgetArgument(t, 0);
      ATerm a_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_48 = t;
    int c_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_11 = NULL,u_11 = NULL;
        t_11 = t;
        t = SSL_explode_term(t_11);
        if(match_cons(t, sym__2))
          {
            ATerm d_48 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) d_48) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm e_48 = ATgetArgument(t, 1);
              if(((ATgetType(e_48) == AT_LIST) && !(ATisEmpty(e_48))))
                {
                  u_11 = ATgetFirst((ATermList) e_48);
                  {
                    ATerm f_48 = (ATerm) ATgetNext((ATermList) e_48);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = u_11;
        if(match_cons(t, sym_stderr_0))
          {
            t = u_11;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = u_11;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = u_11;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(c_48);
      }
    else
      {
        t = b_48;
        {
          ATerm g_48 = t;
          int h_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_62 = NULL,c_62 = NULL,d_62 = NULL;
              ATerm m_11 (ATerm t)
              {
                ATerm e_62 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    e_62 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = e_62;
                return(t);
              }
              t = _2_0(m_11, _id, t);
              if(match_cons(t, sym__2))
                {
                  b_62 = ATgetArgument(t, 0);
                  c_62 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(b_62, c_62);
              d_62 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, d_62);
              ;
              LocalPopChoice(h_48);
            }
          else
            {
              t = g_48;
              {
                ATerm f_62 = NULL,g_62 = NULL,h_62 = NULL;
                ATerm n_11 (ATerm t)
                {
                  ATerm i_62 = NULL;
                  i_62 = t;
                  t = SSL_is_string(i_62);
                  return(t);
                }
                t = _2_0(n_11, _id, t);
                if(match_cons(t, sym__2))
                  {
                    f_62 = ATgetArgument(t, 0);
                    g_62 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(f_62, g_62);
                h_62 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, h_62);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm j_62 = NULL,k_62 = NULL,l_62 = NULL;
  ATerm i_48 = t;
  int j_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_62 = NULL;
      m_62 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_62, term_k_48);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(j_48);
    }
  else
    {
      t = i_48;
      {
        ATerm v_11 = NULL;
        v_11 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, v_11), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = v_11;
        _fail(t);
      }
    }
  j_62 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(l_62);
  k_62 = t;
  t = j_62;
  t = fclose_0_0(t);
  t = k_62;
  return(t);
}
ATerm fetch_1_0 (ATerm p_124 (ATerm), ATerm t)
{
  ATerm r_62 (ATerm t)
  {
    ATerm l_48 = t;
    int m_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(p_124, _id, t);
        ;
        LocalPopChoice(m_48);
      }
    else
      {
        t = l_48;
        t = Cons_2_0(_id, r_62, t);
      }
    return(t);
  }
  t = r_62(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm n_48 = t;
  int o_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(o_48);
    }
  else
    {
      t = n_48;
      {
        ATerm w_62 = NULL,x_62 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_62 = ATgetFirst((ATermList) t);
            x_62 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = w_62;
        {
          ATerm o_11 (ATerm t)
          {
            t = x_62;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(o_11, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm v_124 (ATerm), ATerm t)
{
  ATerm d_63 (ATerm t)
  {
    ATerm p_48 = t;
    int q_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, d_63, t);
        ;
        LocalPopChoice(q_48);
      }
    else
      {
        t = p_48;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = v_124(t);
      }
    return(t);
  }
  t = d_63(t);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm f_63 = NULL;
  ATerm p_11 (ATerm t)
  {
    ATerm g_63 = NULL;
    g_63 = t;
    t = SSL_explode_string(g_63);
    return(t);
  }
  ATerm q_11 (ATerm t)
  {
    ATerm h_63 = NULL;
    h_63 = t;
    t = SSL_explode_string(h_63);
    return(t);
  }
  t = _2_0(p_11, q_11, t);
  {
    ATerm r_48 = t;
    int s_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_63 = NULL,k_63 = NULL;
        if(match_cons(t, sym__2))
          {
            j_63 = ATgetArgument(t, 0);
            k_63 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_63;
        {
          ATerm r_11 (ATerm t)
          {
            t = k_63;
            return(t);
          }
          t = at_end_1_0(r_11, t);
        }
        ;
        LocalPopChoice(s_48);
      }
    else
      {
        t = r_48;
        {
          ATerm b_12 = NULL,c_12 = NULL;
          b_12 = t;
          t = SSL_explode_term(b_12);
          if(match_cons(t, sym__2))
            {
              ATerm t_48 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) t_48) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              c_12 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = c_12;
          t = concat_0_0(t);
        }
      }
    f_63 = t;
    t = SSL_implode_string(f_63);
  }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm u_48 = t;
  int v_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_63 = NULL;
      w_63 = t;
      t = SSL_is_string(w_63);
      ;
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
            ATerm s_11 (ATerm t)
            {
              ATerm y_48 = t;
              int z_48 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0_0(t);
                  ;
                  LocalPopChoice(z_48);
                }
              else
                {
                  t = y_48;
                }
              return(t);
            }
            t = map_1_0(s_11, t);
            ;
            LocalPopChoice(x_48);
          }
        else
          {
            t = w_48;
            {
              ATerm a_64 = NULL,b_64 = NULL,c_64 = NULL;
              a_64 = t;
              if(match_cons(t, sym_Path_1))
                {
                  b_64 = ATgetArgument(t, 0);
                  t = b_64;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      b_64 = ATgetArgument(t, 0);
                      t = b_64;
                      {
                        ATerm a_49 = t;
                        int b_49 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), b_64);
                            {
                              ATerm c_49 = t;
                              int d_49 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm v_12 = NULL;
                                  t = eval_config_0_0(t);
                                  v_12 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), b_64, v_12);
                                  t = v_12;
                                  ;
                                  LocalPopChoice(d_49);
                                }
                              else
                                {
                                  t = c_49;
                                }
                            }
                            ;
                            LocalPopChoice(b_49);
                          }
                        else
                          {
                            t = a_49;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, b_64), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = b_64;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm g_64 = NULL,h_64 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          b_64 = ATgetArgument(t, 0);
                          c_64 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = b_64;
                      t = eval_config_0_0(t);
                      g_64 = t;
                      t = c_64;
                      t = eval_config_0_0(t);
                      h_64 = t;
                      t = (ATerm) ATmakeAppl(sym__2, g_64, h_64);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm m_138 (ATerm), ATerm t)
{
  ATerm e_49 = t;
  int f_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_64 = NULL,p_64 = NULL;
      n_64 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm g_49 = t;
        int h_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_13 = NULL;
            t = eval_config_0_0(t);
            c_13 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), c_13);
            t = c_13;
            ;
            LocalPopChoice(h_49);
          }
        else
          {
            t = g_49;
          }
        p_64 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_64, term_i_49);
        t = geq_0_0(t);
        t = n_64;
        t = m_138(t);
      }
      ;
      LocalPopChoice(f_49);
    }
  else
    {
      t = e_49;
    }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm w_11 (ATerm t)
  {
    ATerm r_64 = NULL;
    r_64 = t;
    if(match_string(t, "-k"))
      {
        t = r_64;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = r_64;
      }
    return(t);
  }
  ATerm x_11 (ATerm t)
  {
    ATerm s_64 = NULL,t_64 = NULL;
    s_64 = t;
    t = SSL_string_to_int(s_64);
    t_64 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), t_64);
    t = s_64;
    return(t);
  }
  ATerm y_11 (ATerm t)
  {
    t = term_m_49;
    return(t);
  }
  t = ArgOption_3_0(w_11, x_11, y_11, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm n_49 = t;
  int o_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_11 (ATerm t)
      {
        ATerm v_64 = NULL;
        v_64 = t;
        if(match_string(t, "-S"))
          {
            t = v_64;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = v_64;
          }
        return(t);
      }
      ATerm d_12 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_p_49;
        return(t);
      }
      ATerm e_12 (ATerm t)
      {
        t = term_q_49;
        return(t);
      }
      t = Option_3_0(z_11, d_12, e_12, t);
      ;
      LocalPopChoice(o_49);
    }
  else
    {
      t = n_49;
      {
        ATerm r_49 = t;
        int s_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_12 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm g_12 (ATerm t)
            {
              ATerm w_64 = NULL,x_64 = NULL;
              w_64 = t;
              t = SSL_string_to_int(w_64);
              x_64 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), x_64);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, w_64);
              return(t);
            }
            ATerm h_12 (ATerm t)
            {
              t = term_t_49;
              return(t);
            }
            t = ArgOption_3_0(f_12, g_12, h_12, t);
            ;
            LocalPopChoice(s_49);
          }
        else
          {
            t = r_49;
            {
              ATerm i_12 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm j_12 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_u_49;
                return(t);
              }
              ATerm k_12 (ATerm t)
              {
                t = term_v_49;
                return(t);
              }
              t = Option_3_0(i_12, j_12, k_12, t);
            }
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm t)
{
  ATerm a_65 = NULL,b_65 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_65 = NULL;
      t = term_v_14;
      t = c_0(t);
      c_65 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_49, term_y_49, c_65);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm f_65 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_65 = ATgetFirst((ATermList) t);
          b_65 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_65;
      t = a_0(t);
      t = term_v_14;
      t = b_0(t);
      f_65 = t;
      t = (ATerm) ATinsert(CheckATermList(b_65), f_65);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm l_12 (ATerm t)
  {
    ATerm h_65 = NULL;
    h_65 = t;
    if(match_string(t, "-o"))
      {
        t = h_65;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = h_65;
      }
    return(t);
  }
  ATerm m_12 (ATerm t)
  {
    ATerm i_65 = NULL;
    i_65 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), i_65);
    t = (ATerm) ATmakeAppl(sym_Output_1, i_65);
    return(t);
  }
  ATerm p_12 (ATerm t)
  {
    t = term_z_49;
    return(t);
  }
  t = ArgOption_3_0(l_12, m_12, p_12, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm l_65 = NULL,m_65 = NULL,n_65 = NULL,o_65 = NULL;
  if(match_cons(t, sym__3))
    {
      l_65 = ATgetArgument(t, 0);
      m_65 = ATgetArgument(t, 1);
      n_65 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_65, m_65);
  {
    ATerm a_50 = t;
    int b_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_50 = ATgetArgument(t, 0);
            ATerm d_50 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(l_65, m_65);
        ;
        LocalPopChoice(b_50);
      }
    else
      {
        t = a_50;
        t = (ATerm) ATempty;
      }
    o_65 = t;
    t = SSL_table_put(l_65, m_65, (ATerm) ATinsert(CheckATermList(o_65), n_65));
    t = (ATerm) ATmakeAppl(sym__3, l_65, m_65, n_65);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm x_65 = NULL,z_65 = NULL,a_66 = NULL,b_66 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_66 = NULL;
      t = term_v_14;
      t = j_0(t);
      c_66 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_49, term_y_49, c_66);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm g_66 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_65 = ATgetFirst((ATermList) t);
          z_65 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_65;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_66 = ATgetFirst((ATermList) t);
          b_66 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_65;
      t = h_0(t);
      t = a_66;
      t = i_0(t);
      g_66 = t;
      t = (ATerm) ATinsert(CheckATermList(b_66), g_66);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm r_12 (ATerm t)
  {
    ATerm i_66 = NULL;
    i_66 = t;
    if(match_string(t, "-i"))
      {
        t = i_66;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = i_66;
      }
    return(t);
  }
  ATerm s_12 (ATerm t)
  {
    ATerm j_66 = NULL;
    j_66 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), j_66);
    t = (ATerm) ATmakeAppl(sym_Input_1, j_66);
    return(t);
  }
  ATerm t_12 (ATerm t)
  {
    t = term_e_50;
    return(t);
  }
  t = ArgOption_3_0(r_12, s_12, t_12, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm k_66 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_14;
  t = whoami_0_0(t);
  k_66 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), k_66));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm f_50 = t;
    int h_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_13 = NULL;
        t = eval_config_0_0(t);
        h_13 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), h_13);
        t = h_13;
        ;
        LocalPopChoice(h_50);
      }
    else
      {
        t = f_50;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm e_129 (ATerm), ATerm f_129 (ATerm), ATerm t)
{
  ATerm i_50 = t;
  int k_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = e_129(t);
      ;
      LocalPopChoice(k_50);
    }
  else
    {
      t = i_50;
      {
        ATerm n_66 = NULL,o_66 = NULL,r_66 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_66 = ATgetFirst((ATermList) t);
            o_66 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = o_66;
        t = foldr_2_0(e_129, f_129, t);
        r_66 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_66, r_66);
        t = f_129(t);
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
  ATerm u_66 = NULL,i_13 = NULL,j_13 = NULL;
  t = times_0_0(t);
  i_13 = t;
  t = SSL_explode_term(i_13);
  if(match_cons(t, sym__2))
    {
      ATerm l_50 = ATgetArgument(t, 0);
      j_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_13;
  {
    ATerm u_12 (ATerm t)
    {
      t = term_o_32;
      return(t);
    }
    ATerm w_12 (ATerm t)
    {
      ATerm o_13 = NULL,p_13 = NULL;
      if(match_cons(t, sym__2))
        {
          o_13 = ATgetArgument(t, 0);
          p_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm m_50 = t;
        int s_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(o_13, p_13);
            ;
            LocalPopChoice(s_50);
          }
        else
          {
            t = m_50;
            t = SSL_addr(o_13, p_13);
          }
      }
      return(t);
    }
    t = foldr_2_0(u_12, w_12, t);
    u_66 = t;
    t = SSL_TicksToSeconds(u_66);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm h_67 = NULL,i_67 = NULL,j_67 = NULL;
  h_67 = t;
  if(match_cons(t, sym__2))
    {
      i_67 = ATgetArgument(t, 0);
      j_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_50 = t;
    int v_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_67;
        if((i_67 != t))
          {
            _fail(t);
          }
        t = h_67;
        ;
        LocalPopChoice(v_50);
      }
    else
      {
        t = u_50;
        t = h_67;
        {
          ATerm z_50 = t;
          int a_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(i_67, j_67);
              ;
              LocalPopChoice(a_51);
            }
          else
            {
              t = z_50;
              t = SSL_gtr(i_67, j_67);
            }
          t = (ATerm) ATmakeAppl(sym__2, i_67, j_67);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm l_138 (ATerm), ATerm t)
{
  ATerm b_51 = t;
  int c_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_67 = NULL,o_67 = NULL;
      m_67 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm d_51 = t;
        int e_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_14 = NULL;
            t = eval_config_0_0(t);
            a_14 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), a_14);
            t = a_14;
            ;
            LocalPopChoice(e_51);
          }
        else
          {
            t = d_51;
          }
        o_67 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_67, term_r_32);
        t = geq_0_0(t);
        t = m_67;
        t = l_138(t);
      }
      ;
      LocalPopChoice(c_51);
    }
  else
    {
      t = b_51;
    }
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm x_12 (ATerm t)
  {
    ATerm q_67 = NULL,r_67 = NULL;
    t = run_time_0_0(t);
    q_67 = t;
    t = term_v_14;
    t = whoami_0_0(t);
    r_67 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), q_67), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), r_67));
    t = (ATerm) ATmakeAppl(sym__2, term_f_51, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_51), q_67), term_m_51), r_67));
    return(t);
  }
  t = if_verbose1_1_0(x_12, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm d_141 (ATerm), ATerm t)
{
  ATerm q_51 = t;
  int r_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm s_51 = t;
        int t_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_14 = NULL;
            t = eval_config_0_0(t);
            e_14 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), e_14);
            t = e_14;
            ;
            LocalPopChoice(t_51);
          }
        else
          {
            t = s_51;
          }
      }
      ;
      LocalPopChoice(r_51);
    }
  else
    {
      t = q_51;
      {
        ATerm y_12 (ATerm t)
        {
          ATerm u_51 = t;
          int v_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(v_51);
            }
          else
            {
              t = u_51;
              {
                ATerm w_51 = t;
                int x_51 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(x_51);
                  }
                else
                  {
                    t = w_51;
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
  t = d_141(t);
  return(t);
}
ATerm map_1_0 (ATerm e_124 (ATerm), ATerm t)
{
  ATerm s_67 (ATerm t)
  {
    ATerm y_51 = t;
    int z_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(z_51);
      }
    else
      {
        t = y_51;
        t = Cons_2_0(e_124, s_67, t);
      }
    return(t);
  }
  t = s_67(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm u_67 = NULL,v_67 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_67 = ATgetFirst((ATermList) t);
      v_67 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_67 = NULL,a_68 = NULL;
        t = v_67;
        t = f_0(t);
        z_67 = t;
        t = u_67;
        t = e_0(t);
        a_68 = t;
        t = v_67;
        {
          ATerm z_12 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(z_67), a_68);
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
      t = term_v_14;
      t = f_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm t_114 (ATerm), ATerm t)
{
  ATerm b_68 = NULL,c_68 = NULL,d_68 = NULL,e_68 = NULL;
  e_68 = t;
  if(match_cons(t, sym_Program_1))
    {
      c_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_68);
  b_68 = t;
  t = c_68;
  t = t_114(t);
  d_68 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, d_68), b_68);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm a_52 = t;
  int b_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm c_52 = t;
        int d_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_14 = NULL;
            t = eval_config_0_0(t);
            j_14 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), j_14);
            t = j_14;
            ;
            LocalPopChoice(d_52);
          }
        else
          {
            t = c_52;
          }
      }
      ;
      LocalPopChoice(b_52);
    }
  else
    {
      t = a_52;
      {
        ATerm a_13 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = fetch_1_0(a_13, t);
      }
    }
  t = term_e_52;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  {
    ATerm b_13 (ATerm t)
    {
      t = (ATerm) ATempty;
      return(t);
    }
    t = reverse_acc_2_0(_id, b_13, t);
    {
      ATerm e_13 (ATerm t)
      {
        ATerm m_68 = NULL;
        m_68 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, m_68), term_f_52);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(e_13, t);
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm u_114 (ATerm), ATerm t)
{
  ATerm n_68 = NULL,o_68 = NULL,p_68 = NULL,q_68 = NULL;
  q_68 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      o_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_68);
  n_68 = t;
  t = o_68;
  t = u_114(t);
  p_68 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, p_68), n_68);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm u_68 = NULL,v_68 = NULL;
  u_68 = t;
  {
    ATerm h_52 = t;
    int i_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = u_68;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm j_52 = ATgetFirst((ATermList) t);
                ATerm l_52 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = u_68;
          }
        ;
        LocalPopChoice(i_52);
      }
    else
      {
        t = h_52;
        t = (ATerm) ATinsert(ATempty, u_68);
      }
    v_68 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), v_68);
    t = u_68;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm m_52 = t;
    int p_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_14 = NULL;
        t = eval_config_0_0(t);
        o_14 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), o_14);
        t = o_14;
        ;
        LocalPopChoice(p_52);
      }
    else
      {
        t = m_52;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm q_52 = t;
  int r_52 = stack_ptr;
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
        t = term_u_52;
        return(t);
      }
      ATerm k_13 (ATerm t)
      {
        t = term_v_52;
        return(t);
      }
      t = Option_3_0(f_13, g_13, k_13, t);
      ;
      LocalPopChoice(r_52);
    }
  else
    {
      t = q_52;
      {
        ATerm l_13 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm m_13 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_w_52;
          return(t);
        }
        ATerm q_13 (ATerm t)
        {
          t = term_x_52;
          return(t);
        }
        t = Option_3_0(l_13, m_13, q_13, t);
      }
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm g_143 (ATerm), ATerm t)
{
  ATerm a_69 = NULL;
  a_69 = t;
  {
    ATerm y_52 = t;
    int z_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_53;
        t = g_143(t);
        ;
        LocalPopChoice(z_52);
      }
    else
      {
        t = y_52;
      }
    t = a_69;
    {
      ATerm r_13 (ATerm t)
      {
        ATerm b_69 = NULL;
        b_69 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), b_69);
        t = (ATerm) ATmakeAppl(sym_Program_1, b_69);
        return(t);
      }
      ATerm s_13 (ATerm t)
      {
        ATerm b_53 = t;
        int c_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_53 = t;
            int e_53 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(e_53);
              }
            else
              {
                t = d_53;
                t = g_143(t);
                t = Cons_2_0(_id, s_13, t);
              }
            ;
            LocalPopChoice(c_53);
          }
        else
          {
            t = b_53;
            {
              ATerm d_69 = NULL,e_69 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  d_69 = ATgetFirst((ATermList) t);
                  e_69 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(e_69), (ATerm) ATmakeAppl(sym_Undefined_1, d_69));
            }
          }
        return(t);
      }
      t = Cons_2_0(r_13, s_13, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm f_143 (ATerm), ATerm t)
{
  ATerm l_69 = NULL,q_69 = NULL,r_69 = NULL;
  l_69 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = l_69;
  {
    ATerm t_13 (ATerm t)
    {
      ATerm j_53 = t;
      int m_53 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_143(t);
          ;
          LocalPopChoice(m_53);
        }
      else
        {
          t = j_53;
          {
            ATerm n_53 = t;
            int o_53 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_13 (ATerm t)
                {
                  ATerm s_69 = NULL;
                  s_69 = t;
                  if(match_string(t, "--help"))
                    {
                      t = s_69;
                    }
                  else
                    {
                      if(match_string(t, "-h"))
                        {
                          t = s_69;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
                            _fail(t);
                          t = s_69;
                        }
                    }
                  return(t);
                }
                ATerm v_13 (ATerm t)
                {
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                  t = term_p_53;
                  return(t);
                }
                ATerm w_13 (ATerm t)
                {
                  t = term_q_53;
                  return(t);
                }
                t = Option_3_0(u_13, v_13, w_13, t);
                ;
                LocalPopChoice(o_53);
              }
            else
              {
                t = n_53;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(t_13, t);
    {
      ATerm r_53 = t;
      int s_53 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_69 = NULL;
          x_69 = t;
          {
            ATerm t_53 = t;
            int u_53 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = x_69;
                {
                  ATerm v_53 = t;
                  int w_53 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm x_53 = t;
                        int y_53 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm d_15 = NULL;
                            t = eval_config_0_0(t);
                            d_15 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), d_15);
                            t = d_15;
                            ;
                            LocalPopChoice(y_53);
                          }
                        else
                          {
                            t = x_53;
                          }
                      }
                      ;
                      LocalPopChoice(w_53);
                    }
                  else
                    {
                      t = v_53;
                      {
                        ATerm x_13 (ATerm t)
                        {
                          if(!(match_cons(t, sym_Help_0)))
                            _fail(t);
                          return(t);
                        }
                        t = fetch_1_0(x_13, t);
                      }
                    }
                  t = x_69;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(u_53);
              }
            else
              {
                t = t_53;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm z_53 = t;
                  int a_54 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm k_15 = NULL;
                      t = eval_config_0_0(t);
                      k_15 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), k_15);
                      t = k_15;
                      ;
                      LocalPopChoice(a_54);
                    }
                  else
                    {
                      t = z_53;
                    }
                  t = x_69;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(s_53);
        }
      else
        {
          t = r_53;
          {
            ATerm b_54 = t;
            int f_54 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_13 (ATerm t)
                {
                  ATerm z_13 (ATerm t)
                  {
                    if(((q_69 != NULL) && (q_69 != t)))
                      _fail(t);
                    else
                      q_69 = t;
                    return(t);
                  }
                  t = Undefined_1_0(z_13, t);
                  return(t);
                }
                t = fetch_1_0(y_13, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(q_69)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_f_51, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_69)), term_g_54));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(f_54);
              }
            else
              {
                t = b_54;
              }
          }
        }
      r_69 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = r_69;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm f_141 (ATerm), ATerm g_141 (ATerm), ATerm h_141 (ATerm), ATerm i_141 (ATerm), ATerm t)
{
  ATerm a_70 = NULL;
  t = parse_options_1_0(f_141, t);
  a_70 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), a_70);
  t = a_70;
  t = h_141(t);
  {
    ATerm i_54 = t;
    int j_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(g_141, t);
        ;
        LocalPopChoice(j_54);
      }
    else
      {
        t = i_54;
        {
          ATerm k_54 = t;
          int l_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_141(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(l_54);
            }
          else
            {
              t = k_54;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm o_140 (ATerm), ATerm p_140 (ATerm), ATerm q_140 (ATerm), ATerm t)
{
  ATerm b_14 (ATerm t)
  {
    ATerm m_54 = t;
    int q_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_140(t);
        ;
        LocalPopChoice(q_54);
      }
    else
      {
        t = m_54;
        {
          ATerm s_54 = t;
          int t_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(t_54);
            }
          else
            {
              t = s_54;
              {
                ATerm u_54 = t;
                int v_54 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(v_54);
                  }
                else
                  {
                    t = u_54;
                    {
                      ATerm w_54 = t;
                      int a_55 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm f_14 (ATerm t)
                          {
                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
                              _fail(t);
                            return(t);
                          }
                          ATerm g_14 (ATerm t)
                          {
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                            t = term_c_55;
                            return(t);
                          }
                          ATerm h_14 (ATerm t)
                          {
                            t = term_d_55;
                            return(t);
                          }
                          t = Option_3_0(f_14, g_14, h_14, t);
                          ;
                          LocalPopChoice(a_55);
                        }
                      else
                        {
                          t = w_54;
                          {
                            ATerm e_55 = t;
                            int f_55 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(f_55);
                              }
                            else
                              {
                                t = e_55;
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
  ATerm c_14 (ATerm t)
  {
    ATerm l_14 (ATerm t)
    {
      ATerm b_70 = NULL,c_70 = NULL;
      b_70 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm g_55 = t;
        int h_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_15 = NULL;
            t = eval_config_0_0(t);
            p_15 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), p_15);
            t = p_15;
            ;
            LocalPopChoice(h_55);
          }
        else
          {
            t = g_55;
          }
        c_70 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, c_70));
        t = b_70;
      }
      return(t);
    }
    t = if_verbose2_1_0(l_14, t);
    return(t);
  }
  ATerm d_14 (ATerm t)
  {
    ATerm d_70 = NULL,e_70 = NULL,s_15 = NULL;
    d_70 = t;
    {
      ATerm i_55 = t;
      int j_55 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_14 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((e_70 != NULL) && (e_70 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  e_70 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(m_14, t);
          ;
          LocalPopChoice(j_55);
        }
      else
        {
          t = i_55;
          t = term_k_55;
          e_70 = t;
        }
      t = not_null(e_70);
      t = ReadFromFile_0_0(t);
      s_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_70, s_15);
      t = apply_strategy_1_0(o_140, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(b_14, q_140, c_14, d_14, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm n_14 (ATerm t)
  {
    ATerm p_14 (ATerm t)
    {
      ATerm q_14 (ATerm t)
      {
        ATerm r_14 (ATerm t)
        {
          ATerm t_14 (ATerm t)
          {
            t = Strategies_1_0(inline_sdefs_0_0, t);
            return(t);
          }
          ATerm u_14 (ATerm t)
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            return(t);
          }
          t = Cons_2_0(t_14, u_14, t);
          return(t);
        }
        t = Cons_2_0(_id, r_14, t);
        return(t);
      }
      t = Specification_1_0(q_14, t);
      return(t);
    }
    t = _2_0(_id, p_14, t);
    return(t);
  }
  t = iowrap_3_0(n_14, _fail, default_usage_0_0, t);
  return(t);
}
