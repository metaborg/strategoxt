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
Symbol sym_Cong_2;
Symbol sym_InfixApp_3;
Symbol sym_MA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
Symbol sym_Some_1;
Symbol sym_Undefined_0;
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
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_e_32;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_n_30;
ATerm term_j_28;
ATerm term_y_27;
ATerm term_t_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_i_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_r_26;
ATerm term_m_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_d_25;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_i_23;
ATerm term_k_22;
ATerm term_f_22;
ATerm term_i_19;
ATerm term_a_19;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_n_16;
ATerm term_i_8;
void init_constant_terms (void)
{
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym_Op_2, term_m_18, (ATerm) ATempty);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_ConstType_1, term_n_18);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_24);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym__3, term_d_27, term_e_27, term_i_8);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm FuseScope_0_0 (ATerm);
ATerm isect_1_0 (ATerm a_129 (ATerm), ATerm);
ATerm DynamicRules_1_0 (ATerm j_108 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm a_108 (ATerm), ATerm b_108 (ATerm), ATerm c_108 (ATerm), ATerm d_108 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm m_109 (ATerm), ATerm n_109 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm e_120 (ATerm), ATerm f_120 (ATerm), ATerm g_120 (ATerm), ATerm);
ATerm u_0 (ATerm);
ATerm v_0 (ATerm);
ATerm w_0 (ATerm);
ATerm x_0 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm b_1 (ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm g_1 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm union_1_0 (ATerm h_129 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm v_131 (ATerm), ATerm w_131 (ATerm), ATerm x_131 (ATerm), ATerm);
ATerm diff_1_0 (ATerm c_129 (ATerm), ATerm);
ATerm o_1 (ATerm);
ATerm q_1 (ATerm);
ATerm t_1 (ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm while_not_2_0 (ATerm d_138 (ATerm), ATerm e_138 (ATerm), ATerm);
ATerm for_3_0 (ATerm g_138 (ATerm), ATerm h_138 (ATerm), ATerm i_138 (ATerm), ATerm);
ATerm e_2 (ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm x_2 (ATerm);
ATerm z_2 (ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm free_vars_3_0 (ATerm x_135 (ATerm), ATerm y_135 (ATerm), ATerm z_135 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm CleanupScope_0_0 (ATerm);
ATerm topdown_1_0 (ATerm d_121 (ATerm), ATerm);
ATerm TestSavesCurrentTerm_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm WhereSavesCurrentTerm_0_0 (ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm genzip_4_0 (ATerm p_125 (ATerm), ATerm q_125 (ATerm), ATerm r_125 (ATerm), ATerm s_125 (ATerm), ATerm);
ATerm s_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm BuildMatchFusion_0_0 (ATerm);
ATerm MisMatch_0_0 (ATerm);
ATerm j_19 (ATerm i_18, ATerm j_18, ATerm k_18, ATerm);
ATerm BuildMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm h_122 (ATerm), ATerm);
ATerm LetHoist_0_0 (ATerm);
ATerm Idempotency_0_0 (ATerm);
ATerm AssociateR_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm j_4 (ATerm);
ATerm ElimFail_0_0 (ATerm);
ATerm ElimId_0_0 (ATerm);
ATerm Simplify_0_0 (ATerm);
ATerm repeat_1_0 (ATerm o_137 (ATerm), ATerm);
ATerm downup_1_0 (ATerm f_121 (ATerm), ATerm);
ATerm WidenScope_0_0 (ATerm);
ATerm SDefT_4_0 (ATerm u_111 (ATerm), ATerm v_111 (ATerm), ATerm w_111 (ATerm), ATerm x_111 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm r_111 (ATerm), ATerm s_111 (ATerm), ATerm t_111 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm u_104 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm z_104 (ATerm), ATerm);
ATerm p_4 (ATerm);
ATerm apply_to_bodies_1_0 (ATerm e_119 (ATerm), ATerm);
ATerm _2_0 (ATerm b_100 (ATerm), ATerm c_100 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm c_143 (ATerm), ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm e_146 (ATerm), ATerm);
ATerm a_31 (ATerm u_30, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm g_5 (ATerm);
ATerm j_5 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm p_127 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm v_127 (ATerm), ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm o_5 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm n_144 (ATerm), ATerm);
ATerm p_5 (ATerm);
ATerm r_5 (ATerm);
ATerm s_5 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm t_5 (ATerm);
ATerm u_5 (ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
ATerm z_5 (ATerm);
ATerm a_6 (ATerm);
ATerm b_6 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm c_6 (ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm i_6 (ATerm);
ATerm j_6 (ATerm);
ATerm k_6 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm t_131 (ATerm), ATerm u_131 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm l_6 (ATerm);
ATerm m_6 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm m_144 (ATerm), ATerm);
ATerm p_6 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm r_6 (ATerm);
ATerm need_help_1_0 (ATerm c_147 (ATerm), ATerm);
ATerm map_1_0 (ATerm e_127 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm y_118 (ATerm), ATerm);
ATerm t_6 (ATerm);
ATerm u_6 (ATerm);
ATerm v_6 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm z_118 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm w_6 (ATerm);
ATerm x_6 (ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm a_7 (ATerm);
ATerm b_7 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm q_104 (ATerm), ATerm r_104 (ATerm), ATerm);
ATerm c_7 (ATerm);
ATerm parse_options_p__1_0 (ATerm f_149 (ATerm), ATerm);
ATerm f_7 (ATerm);
ATerm h_7 (ATerm);
ATerm i_7 (ATerm);
ATerm j_7 (ATerm);
ATerm parse_options_1_0 (ATerm e_149 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm e_147 (ATerm), ATerm f_147 (ATerm), ATerm g_147 (ATerm), ATerm h_147 (ATerm), ATerm);
ATerm p_7 (ATerm);
ATerm s_7 (ATerm);
ATerm t_7 (ATerm);
ATerm u_7 (ATerm);
ATerm v_7 (ATerm);
ATerm iowrap_3_0 (ATerm n_146 (ATerm), ATerm o_146 (ATerm), ATerm p_146 (ATerm), ATerm);
ATerm x_7 (ATerm);
ATerm z_7 (ATerm);
ATerm a_8 (ATerm);
ATerm b_8 (ATerm);
ATerm c_8 (ATerm);
ATerm d_8 (ATerm);
ATerm e_8 (ATerm);
ATerm h_8 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_0 = NULL,o_0 = NULL;
  b_0 = t;
  t = term_i_8;
  t = whoami_0_0(t);
  o_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), o_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = b_0;
  return(t);
}
ATerm FuseScope_0_0 (ATerm t)
{
  ATerm q_0 = NULL,r_0 = NULL,s_0 = NULL,t_0 = NULL;
  if(match_cons(t, sym_Scope_2))
    {
      q_0 = ATgetArgument(t, 0);
      {
        ATerm l_8 = ATgetArgument(t, 1);
        if(match_cons(l_8, sym_Scope_2))
          {
            r_0 = ATgetArgument(l_8, 0);
            s_0 = ATgetArgument(l_8, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_0, r_0);
  {
    ATerm m_8 = t;
    int p_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_8 = ATgetArgument(t, 0);
            ATerm r_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_0;
        {
          ATerm f_0 (ATerm t)
          {
            t = r_0;
            return(t);
          }
          t = at_end_1_0(f_0, t);
        }
        ;
        LocalPopChoice(p_8);
      }
    else
      {
        t = m_8;
        {
          ATerm m_0 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, q_0, r_0));
          if(match_cons(t, sym__2))
            {
              ATerm s_8 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) s_8) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              m_0 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = m_0;
          t = concat_0_0(t);
        }
      }
    t_0 = t;
    t = (ATerm) ATmakeAppl(sym_Scope_2, t_0, s_0);
  }
  return(t);
}
ATerm isect_1_0 (ATerm a_129 (ATerm), ATerm t)
{
  ATerm y_0 = NULL,z_0 = NULL;
  if(match_cons(t, sym__2))
    {
      y_0 = ATgetArgument(t, 0);
      z_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_0;
  {
    ATerm i_1 (ATerm t)
    {
      ATerm u_8 = t;
      int v_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(v_8);
        }
      else
        {
          t = u_8;
          {
            ATerm a_1 = NULL,d_1 = NULL;
            a_1 = t;
            {
              ATerm w_8 = t;
              int x_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm y_8 = ATgetFirst((ATermList) t);
                      d_1 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(x_8);
                  {
                    ATerm z_8 = t;
                    int a_9 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm p_0 = NULL;
                        t = a_1;
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            p_0 = ATgetFirst((ATermList) t);
                            {
                              ATerm b_9 = (ATerm) ATgetNext((ATermList) t);
                            }
                          }
                        else
                          _fail(t);
                        t = z_0;
                        {
                          ATerm h_0 (ATerm t)
                          {
                            ATerm c_1 = NULL;
                            c_1 = t;
                            t = (ATerm) ATmakeAppl(sym__2, p_0, c_1);
                            t = a_129(t);
                            return(t);
                          }
                          t = fetch_1_0(h_0, t);
                          t = a_1;
                          t = Cons_2_0(_id, i_1, t);
                        }
                        ;
                        LocalPopChoice(a_9);
                      }
                    else
                      {
                        t = z_8;
                        t = d_1;
                        t = i_1(t);
                      }
                  }
                }
              else
                {
                  t = w_8;
                  {
                    ATerm r_1 = NULL;
                    t = a_1;
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        r_1 = ATgetFirst((ATermList) t);
                        {
                          ATerm c_9 = (ATerm) ATgetNext((ATermList) t);
                        }
                      }
                    else
                      _fail(t);
                    t = z_0;
                    {
                      ATerm j_0 (ATerm t)
                      {
                        ATerm x_1 = NULL;
                        x_1 = t;
                        t = (ATerm) ATmakeAppl(sym__2, r_1, x_1);
                        t = a_129(t);
                        return(t);
                      }
                      t = fetch_1_0(j_0, t);
                      t = a_1;
                      t = Cons_2_0(_id, i_1, t);
                    }
                  }
                }
            }
          }
        }
      return(t);
    }
    t = i_1(t);
  }
  return(t);
}
ATerm DynamicRules_1_0 (ATerm j_108 (ATerm), ATerm t)
{
  ATerm j_1 = NULL,k_1 = NULL,l_1 = NULL,m_1 = NULL;
  m_1 = t;
  if(match_cons(t, sym_DynamicRules_1))
    {
      k_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_1);
  j_1 = t;
  t = k_1;
  t = j_108(t);
  l_1 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, l_1), j_1);
  return(t);
}
ATerm RDefT_4_0 (ATerm a_108 (ATerm), ATerm b_108 (ATerm), ATerm c_108 (ATerm), ATerm d_108 (ATerm), ATerm t)
{
  ATerm p_1 = NULL,s_1 = NULL,u_1 = NULL,v_1 = NULL,w_1 = NULL,y_1 = NULL,z_1 = NULL,a_2 = NULL,b_2 = NULL,c_2 = NULL;
  c_2 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      s_1 = ATgetArgument(t, 0);
      u_1 = ATgetArgument(t, 1);
      v_1 = ATgetArgument(t, 2);
      w_1 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_2);
  p_1 = t;
  t = s_1;
  t = a_108(t);
  y_1 = t;
  t = u_1;
  t = b_108(t);
  z_1 = t;
  t = v_1;
  t = c_108(t);
  a_2 = t;
  t = w_1;
  t = d_108(t);
  b_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDefT_4, y_1, z_1, a_2, b_2), p_1);
  return(t);
}
ATerm Scope_2_0 (ATerm m_109 (ATerm), ATerm n_109 (ATerm), ATerm t)
{
  ATerm r_2 = NULL,w_2 = NULL,a_3 = NULL,d_3 = NULL,e_3 = NULL,g_3 = NULL;
  g_3 = t;
  if(match_cons(t, sym_Scope_2))
    {
      w_2 = ATgetArgument(t, 0);
      a_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_3);
  r_2 = t;
  t = w_2;
  t = m_109(t);
  d_3 = t;
  t = a_3;
  t = n_109(t);
  e_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, d_3, e_3), r_2);
  return(t);
}
ATerm tboundin_3_0 (ATerm e_120 (ATerm), ATerm f_120 (ATerm), ATerm g_120 (ATerm), ATerm t)
{
  ATerm g_9 = t;
  int h_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(g_120, e_120, t);
      ;
      LocalPopChoice(h_9);
    }
  else
    {
      t = g_9;
      {
        ATerm k_9 = t;
        int l_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(g_120, g_120, g_120, e_120, t);
            ;
            LocalPopChoice(l_9);
          }
        else
          {
            t = k_9;
            {
              ATerm m_9 = t;
              int n_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(g_120, g_120, g_120, e_120, t);
                  ;
                  LocalPopChoice(n_9);
                }
              else
                {
                  t = m_9;
                  t = DynamicRules_1_0(e_120, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm u_0 (ATerm t)
{
  ATerm o_3 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_3);
  return(t);
}
ATerm v_0 (ATerm t)
{
  ATerm q_9 = t;
  int r_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(r_9);
    }
  else
    {
      t = q_9;
      {
        ATerm r_3 = NULL,t_3 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            r_3 = ATgetArgument(t, 0);
            t = r_3;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm s_9 = t;
            int u_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm v_9 = ATgetArgument(t, 0);
                    ATerm w_9 = ATgetArgument(t, 1);
                    t_3 = ATgetArgument(t, 2);
                    {
                      ATerm x_9 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(u_9);
                t = t_3;
                t = map_1_0(w_0, t);
              }
            else
              {
                t = s_9;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm y_9 = ATgetArgument(t, 0);
                    ATerm z_9 = ATgetArgument(t, 1);
                    t_3 = ATgetArgument(t, 2);
                    {
                      ATerm a_10 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = t_3;
                t = map_1_0(x_0, t);
              }
          }
      }
    }
  return(t);
}
ATerm w_0 (ATerm t)
{
  ATerm d_4 = NULL;
  ATerm f_10 = t;
  int g_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_4 = ATgetArgument(t, 0);
          {
            ATerm q_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_10);
      t = d_4;
    }
  else
    {
      t = f_10;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_4;
    }
  return(t);
}
ATerm x_0 (ATerm t)
{
  ATerm m_4 = NULL;
  ATerm v_10 = t;
  int x_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_4 = ATgetArgument(t, 0);
          {
            ATerm y_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_10);
      t = m_4;
    }
  else
    {
      t = v_10;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_4;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(u_0, v_0, tboundin_3_0, t);
  return(t);
}
ATerm b_1 (ATerm t)
{
  ATerm g_7 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_7);
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm z_10 = t;
  int b_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(b_11);
    }
  else
    {
      t = z_10;
      {
        ATerm n_7 = NULL,q_7 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            n_7 = ATgetArgument(t, 0);
            t = n_7;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm c_11 = t;
            int e_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm g_11 = ATgetArgument(t, 0);
                    ATerm h_11 = ATgetArgument(t, 1);
                    q_7 = ATgetArgument(t, 2);
                    {
                      ATerm m_11 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(e_11);
                t = q_7;
                t = map_1_0(f_1, t);
              }
            else
              {
                t = c_11;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm n_11 = ATgetArgument(t, 0);
                    ATerm o_11 = ATgetArgument(t, 1);
                    q_7 = ATgetArgument(t, 2);
                    {
                      ATerm p_11 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = q_7;
                t = map_1_0(g_1, t);
              }
          }
      }
    }
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm g_8 = NULL;
  ATerm q_11 = t;
  int r_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_8 = ATgetArgument(t, 0);
          {
            ATerm t_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_11);
      t = g_8;
    }
  else
    {
      t = q_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_8;
    }
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm t_8 = NULL;
  ATerm x_11 = t;
  int y_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_8 = ATgetArgument(t, 0);
          {
            ATerm z_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_11);
      t = t_8;
    }
  else
    {
      t = x_11;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_8;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm e_5 = NULL,q_6 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      q_6 = ATgetArgument(t, 0);
      t = q_6;
      if(match_cons(t, sym_Rule_3))
        {
          e_5 = ATgetArgument(t, 0);
          {
            ATerm c_12 = ATgetArgument(t, 1);
          }
          {
            ATerm e_12 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = e_5;
      t = free_vars_3_0(b_1, e_1, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          q_6 = ATgetArgument(t, 0);
          {
            ATerm f_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = q_6;
    }
  return(t);
}
ATerm union_1_0 (ATerm h_129 (ATerm), ATerm t)
{
  ATerm d_9 = NULL,e_9 = NULL;
  if(match_cons(t, sym__2))
    {
      d_9 = ATgetArgument(t, 0);
      e_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_9;
  {
    ATerm f_9 (ATerm t)
    {
      ATerm g_12 = t;
      int i_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = e_9;
          ;
          LocalPopChoice(i_12);
        }
      else
        {
          t = g_12;
          {
            ATerm j_12 = t;
            int k_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_2 = NULL,g_2 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    f_2 = ATgetFirst((ATermList) t);
                    g_2 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = e_9;
                {
                  ATerm h_1 (ATerm t)
                  {
                    ATerm h_2 = NULL;
                    h_2 = t;
                    t = (ATerm) ATmakeAppl(sym__2, f_2, h_2);
                    t = h_129(t);
                    return(t);
                  }
                  t = fetch_1_0(h_1, t);
                  t = g_2;
                  t = f_9(t);
                }
                ;
                LocalPopChoice(k_12);
              }
            else
              {
                t = j_12;
                t = Cons_2_0(_id, f_9, t);
              }
          }
        }
      return(t);
    }
    t = f_9(t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm v_131 (ATerm), ATerm w_131 (ATerm), ATerm x_131 (ATerm), ATerm t)
{
  ATerm l_12 = t;
  int m_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = v_131(t);
      ;
      LocalPopChoice(m_12);
    }
  else
    {
      t = l_12;
      {
        ATerm i_9 = NULL,j_9 = NULL,o_9 = NULL,p_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_9 = ATgetFirst((ATermList) t);
            j_9 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = i_9;
        t = x_131(t);
        o_9 = t;
        t = j_9;
        t = foldr_3_0(v_131, w_131, x_131, t);
        p_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_9, p_9);
        t = w_131(t);
      }
    }
  return(t);
}
ATerm diff_1_0 (ATerm c_129 (ATerm), ATerm t)
{
  ATerm c_10 = NULL,d_10 = NULL;
  if(match_cons(t, sym__2))
    {
      c_10 = ATgetArgument(t, 0);
      d_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_10;
  {
    ATerm e_10 (ATerm t)
    {
      ATerm s_12 = t;
      int u_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(u_12);
        }
      else
        {
          t = s_12;
          {
            ATerm v_12 = t;
            int x_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_2 = NULL,m_2 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    l_2 = ATgetFirst((ATermList) t);
                    m_2 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = d_10;
                {
                  ATerm n_1 (ATerm t)
                  {
                    ATerm n_2 = NULL;
                    n_2 = t;
                    t = (ATerm) ATmakeAppl(sym__2, l_2, n_2);
                    t = c_129(t);
                    return(t);
                  }
                  t = fetch_1_0(n_1, t);
                  t = m_2;
                  t = e_10(t);
                }
                ;
                LocalPopChoice(x_12);
              }
            else
              {
                t = v_12;
                t = Cons_2_0(_id, e_10, t);
              }
          }
        }
      return(t);
    }
    t = e_10(t);
  }
  return(t);
}
ATerm o_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_12 = ATgetArgument(t, 0);
      if(((ATgetType(y_12) != AT_LIST) || !(ATisEmpty(y_12))))
        _fail(t);
      {
        ATerm z_12 = ATgetArgument(t, 1);
        if(((ATgetType(z_12) != AT_LIST) || !(ATisEmpty(z_12))))
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
  ATerm o_10 = NULL,p_10 = NULL,r_10 = NULL,s_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_13 = ATgetArgument(t, 0);
      if(((ATgetType(a_13) == AT_LIST) && !(ATisEmpty(a_13))))
        {
          o_10 = ATgetFirst((ATermList) a_13);
          r_10 = (ATerm) ATgetNext((ATermList) a_13);
        }
      else
        _fail(t);
      {
        ATerm c_13 = ATgetArgument(t, 1);
        if(((ATgetType(c_13) == AT_LIST) && !(ATisEmpty(c_13))))
          {
            p_10 = ATgetFirst((ATermList) c_13);
            s_10 = (ATerm) ATgetNext((ATermList) c_13);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_10, p_10), (ATerm) ATmakeAppl(sym__2, r_10, s_10));
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm t_10 = NULL,u_10 = NULL;
  if(match_cons(t, sym__2))
    {
      t_10 = ATgetArgument(t, 0);
      u_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_10), t_10);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm h_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm d_13 = ATgetFirst((ATermList) t);
      if(match_cons(d_13, sym__2))
        {
          h_10 = ATgetArgument(d_13, 0);
          i_10 = ATgetArgument(d_13, 1);
        }
      else
        _fail(t);
      j_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(i_10);
  if(match_cons(t, sym__2))
    {
      k_10 = ATgetArgument(t, 0);
      l_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(h_10);
  if(match_cons(t, sym__2))
    {
      if((k_10 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      m_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_10, l_10);
  t = genzip_4_0(o_1, q_1, t_1, _id, t);
  n_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_10, j_10);
  {
    ATerm e_13 = t;
    int g_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_13 = ATgetArgument(t, 0);
            ATerm i_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_10;
        {
          ATerm d_2 (ATerm t)
          {
            t = j_10;
            return(t);
          }
          t = at_end_1_0(d_2, t);
        }
        ;
        LocalPopChoice(g_13);
      }
    else
      {
        t = e_13;
        {
          ATerm v_2 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, n_10, j_10));
          if(match_cons(t, sym__2))
            {
              ATerm j_13 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) j_13) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              v_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = v_2;
          t = concat_0_0(t);
        }
      }
  }
  return(t);
}
ATerm while_not_2_0 (ATerm d_138 (ATerm), ATerm e_138 (ATerm), ATerm t)
{
  ATerm a_11 (ATerm t)
  {
    ATerm k_13 = t;
    int m_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_138(t);
        ;
        LocalPopChoice(m_13);
      }
    else
      {
        t = k_13;
        t = e_138(t);
        t = a_11(t);
      }
    return(t);
  }
  t = a_11(t);
  return(t);
}
ATerm for_3_0 (ATerm g_138 (ATerm), ATerm h_138 (ATerm), ATerm i_138 (ATerm), ATerm t)
{
  t = g_138(t);
  t = while_not_2_0(h_138, i_138, t);
  return(t);
}
ATerm e_2 (ATerm t)
{
  ATerm f_11 = NULL;
  f_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, f_11);
  return(t);
}
ATerm i_2 (ATerm t)
{
  t = _2_0(_id, k_2, t);
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm n_13 = t;
  int t_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(_id, o_2, t);
      ;
      LocalPopChoice(t_13);
    }
  else
    {
      t = n_13;
      {
        ATerm s_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL;
        if(match_cons(t, sym__2))
          {
            s_11 = ATgetArgument(t, 0);
            u_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_11;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_11 = ATgetFirst((ATermList) t);
            w_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_11), v_11), w_11);
      }
    }
  return(t);
}
ATerm k_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm u_13 = t;
  int v_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_11 = ATgetFirst((ATermList) t);
          l_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_11;
      if(match_cons(t, sym__2))
        {
          j_11 = ATgetArgument(t, 0);
          k_11 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = k_11;
      if((j_11 != t))
        {
          _fail(t);
        }
      t = l_11;
      ;
      LocalPopChoice(v_13);
    }
  else
    {
      t = u_13;
      t = UfDecompose_0_0(t);
    }
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm a_12 = NULL;
  if(match_cons(t, sym__2))
    {
      a_12 = ATgetArgument(t, 0);
      if((a_12 != ATgetArgument(t, 1)))
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
  ATerm w_13 = t;
  int z_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(e_2, i_2, j_2, t);
      ;
      LocalPopChoice(z_13);
    }
  else
    {
      t = w_13;
      t = diff_1_0(p_2, t);
    }
  return(t);
}
ATerm s_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = union_1_0(x_2, t);
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm n_3 = NULL;
  if(match_cons(t, sym__2))
    {
      n_3 = ATgetArgument(t, 0);
      if((n_3 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm b_3 (ATerm t)
{
  t = union_1_0(c_3, t);
  return(t);
}
ATerm c_3 (ATerm t)
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
ATerm free_vars_3_0 (ATerm x_135 (ATerm), ATerm y_135 (ATerm), ATerm z_135 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm h_12 (ATerm t)
  {
    ATerm b_14 = t;
    int g_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_135(t);
        ;
        LocalPopChoice(g_14);
      }
    else
      {
        t = b_14;
        {
          ATerm h_14 = t;
          int i_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_12 = NULL,d_12 = NULL,f_3 = NULL,j_3 = NULL;
              b_12 = t;
              t = y_135(t);
              d_12 = t;
              t = b_12;
              {
                ATerm q_2 (ATerm t)
                {
                  ATerm y_2 = NULL;
                  t = h_12(t);
                  y_2 = t;
                  t = (ATerm) ATmakeAppl(sym__2, y_2, d_12);
                  t = diff_0_0(t);
                  return(t);
                }
                t = z_135(q_2, h_12, s_2, t);
                f_3 = t;
                t = SSL_explode_term(f_3);
                if(match_cons(t, sym__2))
                  {
                    ATerm k_14 = ATgetArgument(t, 0);
                    j_3 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = j_3;
                t = foldr_3_0(t_2, u_2, _id, t);
              }
              ;
              LocalPopChoice(i_14);
            }
          else
            {
              t = h_14;
              {
                ATerm p_3 = NULL,x_3 = NULL;
                p_3 = t;
                t = SSL_explode_term(p_3);
                if(match_cons(t, sym__2))
                  {
                    ATerm l_14 = ATgetArgument(t, 0);
                    x_3 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = x_3;
                t = foldr_3_0(z_2, b_3, h_12, t);
              }
            }
        }
      }
    return(t);
  }
  t = h_12(t);
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm r_12 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, r_12);
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm m_14 = t;
  int n_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(n_14);
    }
  else
    {
      t = m_14;
      {
        ATerm t_12 = NULL,w_12 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            t_12 = ATgetArgument(t, 0);
            t = t_12;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm o_14 = t;
            int p_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm q_14 = ATgetArgument(t, 0);
                    ATerm s_14 = ATgetArgument(t, 1);
                    w_12 = ATgetArgument(t, 2);
                    {
                      ATerm u_14 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(p_14);
                t = w_12;
                t = map_1_0(k_3, t);
              }
            else
              {
                t = o_14;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm v_14 = ATgetArgument(t, 0);
                    ATerm l_15 = ATgetArgument(t, 1);
                    w_12 = ATgetArgument(t, 2);
                    {
                      ATerm n_15 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = w_12;
                t = map_1_0(l_3, t);
              }
          }
      }
    }
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm f_13 = NULL;
  ATerm o_15 = t;
  int p_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_13 = ATgetArgument(t, 0);
          {
            ATerm q_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_15);
      t = f_13;
    }
  else
    {
      t = o_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_13;
    }
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm l_13 = NULL;
  ATerm r_15 = t;
  int s_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_13 = ATgetArgument(t, 0);
          {
            ATerm t_15 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_15);
      t = l_13;
    }
  else
    {
      t = r_15;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_13;
    }
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm o_13 = NULL;
  if(match_cons(t, sym__2))
    {
      o_13 = ATgetArgument(t, 0);
      if((o_13 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm CleanupScope_0_0 (ATerm t)
{
  ATerm n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL;
  if(match_cons(t, sym_Scope_2))
    {
      n_12 = ATgetArgument(t, 0);
      o_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_12;
  t = free_vars_3_0(h_3, i_3, tboundin_3_0, t);
  p_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_12, p_12);
  t = isect_1_0(m_3, t);
  q_12 = t;
  {
    ATerm u_15 = t;
    if((PushChoice() == 0))
      {
        if((n_12 != t))
          {
            _fail(t);
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_15;
      }
    t = (ATerm) ATmakeAppl(sym_Scope_2, q_12, o_12);
  }
  return(t);
}
ATerm topdown_1_0 (ATerm d_121 (ATerm), ATerm t)
{
  t = d_121(t);
  {
    ATerm q_3 (ATerm t)
    {
      t = topdown_1_0(d_121, t);
      return(t);
    }
    t = SRTS_all(q_3, t);
  }
  return(t);
}
ATerm TestSavesCurrentTerm_0_0 (ATerm t)
{
  ATerm p_13 = NULL,q_13 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      p_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = new_0_0(t);
  q_13 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, q_13), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, q_13)), (ATerm) ATmakeAppl(sym_Seq_2, p_13, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, q_13)))));
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm WhereSavesCurrentTerm_0_0 (ATerm t)
{
  ATerm r_13 = NULL,s_13 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      r_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = new_0_0(t);
  s_13 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, s_13), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, s_13)), (ATerm) ATmakeAppl(sym_Seq_2, r_13, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, s_13)))));
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm x_13 = NULL,y_13 = NULL,a_14 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL;
  if(match_cons(t, sym__2))
    {
      a_14 = ATgetArgument(t, 0);
      c_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_14;
  if(match_cons(t, sym_Build_1))
    {
      ATerm v_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_14;
  if(match_cons(t, sym_Where_1))
    {
      d_14 = ATgetArgument(t, 0);
      t = d_14;
      if(match_cons(t, sym_Prim_2))
        {
          x_13 = ATgetArgument(t, 0);
          y_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Prim_2, x_13, y_13);
    }
  else
    {
      if(match_cons(t, sym_Prim_2))
        {
          d_14 = ATgetArgument(t, 0);
          e_14 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_Prim_2, d_14, e_14);
        }
      else
        {
          if(match_cons(t, sym_PrimT_3))
            {
              d_14 = ATgetArgument(t, 0);
              e_14 = ATgetArgument(t, 1);
              f_14 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_PrimT_3, d_14, e_14, f_14);
        }
    }
  return(t);
}
ATerm genzip_4_0 (ATerm p_125 (ATerm), ATerm q_125 (ATerm), ATerm r_125 (ATerm), ATerm s_125 (ATerm), ATerm t)
{
  ATerm t_14 (ATerm t)
  {
    ATerm w_15 = t;
    int x_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_125(t);
        ;
        LocalPopChoice(x_15);
      }
    else
      {
        t = w_15;
        t = q_125(t);
        t = _2_0(s_125, t_14, t);
        t = r_125(t);
      }
    return(t);
  }
  t = t_14(t);
  return(t);
}
ATerm s_3 (ATerm t)
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
ATerm u_3 (ATerm t)
{
  ATerm b_15 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_16 = ATgetArgument(t, 0);
      if(((ATgetType(a_16) == AT_LIST) && !(ATisEmpty(a_16))))
        {
          b_15 = ATgetFirst((ATermList) a_16);
          d_15 = (ATerm) ATgetNext((ATermList) a_16);
        }
      else
        _fail(t);
      {
        ATerm b_16 = ATgetArgument(t, 1);
        if(((ATgetType(b_16) == AT_LIST) && !(ATisEmpty(b_16))))
          {
            c_15 = ATgetFirst((ATermList) b_16);
            e_15 = (ATerm) ATgetNext((ATermList) b_16);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_15, c_15), (ATerm) ATmakeAppl(sym__2, d_15, e_15));
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm f_15 = NULL,g_15 = NULL;
  if(match_cons(t, sym__2))
    {
      f_15 = ATgetArgument(t, 0);
      g_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_15), f_15);
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm h_15 = NULL,i_15 = NULL;
  if(match_cons(t, sym__2))
    {
      h_15 = ATgetArgument(t, 0);
      i_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, h_15), (ATerm) ATmakeAppl(sym_Match_1, i_15));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm w_14 = NULL,y_14 = NULL,z_14 = NULL,a_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_16 = ATgetArgument(t, 0);
      if(match_cons(c_16, sym_Build_1))
        {
          ATerm e_16 = ATgetArgument(c_16, 0);
          if(match_cons(e_16, sym_Op_2))
            {
              y_14 = ATgetArgument(e_16, 0);
              w_14 = ATgetArgument(e_16, 1);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm d_16 = ATgetArgument(t, 1);
        if(match_cons(d_16, sym_Match_1))
          {
            ATerm f_16 = ATgetArgument(d_16, 0);
            if(match_cons(f_16, sym_Op_2))
              {
                if((y_14 != ATgetArgument(f_16, 0)))
                  {
                    _fail(ATgetArgument(f_16, 0));
                  }
                z_14 = ATgetArgument(f_16, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, w_14, z_14);
  t = genzip_4_0(s_3, u_3, v_3, w_3, t);
  a_15 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, a_15), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, y_14, w_14)));
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm j_15 = NULL,k_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_16 = ATgetArgument(t, 0);
      if(match_cons(g_16, sym_Build_1))
        {
          ATerm i_16 = ATgetArgument(g_16, 0);
          if(match_cons(i_16, sym_Op_2))
            {
              j_15 = ATgetArgument(i_16, 0);
              {
                ATerm j_16 = ATgetArgument(i_16, 1);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm h_16 = ATgetArgument(t, 1);
        if(match_cons(h_16, sym_Match_1))
          {
            ATerm k_16 = ATgetArgument(h_16, 0);
            if(match_cons(k_16, sym_Op_2))
              {
                k_15 = ATgetArgument(k_16, 0);
                {
                  ATerm l_16 = ATgetArgument(k_16, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, j_15, k_15);
  {
    ATerm m_16 = t;
    if((PushChoice() == 0))
      {
        ATerm m_15 = NULL;
        if(match_cons(t, sym__2))
          {
            m_15 = ATgetArgument(t, 0);
            if((m_15 != ATgetArgument(t, 1)))
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
        t = m_16;
      }
    t = term_n_16;
  }
  return(t);
}
ATerm j_19 (ATerm i_18, ATerm j_18, ATerm k_18, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, i_18, j_18);
  {
    ATerm o_16 = t;
    int p_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = MisMatch_0_0(t);
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
              t = BuildMatchFusion_0_0(t);
              ;
              LocalPopChoice(r_16);
            }
          else
            {
              t = q_16;
              {
                ATerm s_16 = t;
                int t_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm r_18 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        ATerm u_16 = ATgetArgument(t, 0);
                        ATerm v_16 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = i_18;
                    if(match_cons(t, sym_Build_1))
                      {
                        ATerm w_16 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = j_18;
                    if(match_cons(t, sym_Build_1))
                      {
                        r_18 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Build_1, r_18);
                    ;
                    LocalPopChoice(t_16);
                  }
                else
                  {
                    t = s_16;
                    {
                      ATerm x_16 = t;
                      int y_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = BuildPrim_0_0(t);
                          ;
                          LocalPopChoice(y_16);
                        }
                      else
                        {
                          t = x_16;
                          {
                            ATerm v_18 = NULL,w_18 = NULL,y_18 = NULL,z_18 = NULL;
                            if(match_cons(t, sym__2))
                              {
                                ATerm z_16 = ATgetArgument(t, 0);
                                ATerm a_17 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = i_18;
                            if(match_cons(t, sym_Match_1))
                              {
                                v_18 = ATgetArgument(t, 0);
                                t = j_18;
                                if(match_cons(t, sym_Match_1))
                                  {
                                    y_18 = ATgetArgument(t, 0);
                                    t = y_18;
                                    if((v_18 != t))
                                      {
                                        _fail(t);
                                      }
                                    t = (ATerm) ATmakeAppl(sym_Match_1, v_18);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        y_18 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = v_18;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        w_18 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = y_18;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        z_18 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = z_18;
                                    if((w_18 != t))
                                      {
                                        _fail(t);
                                      }
                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, w_18));
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Build_1))
                                  {
                                    v_18 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = j_18;
                                if(match_cons(t, sym_Match_1))
                                  {
                                    y_18 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = y_18;
                                if((v_18 != t))
                                  {
                                    _fail(t);
                                  }
                                t = (ATerm) ATmakeAppl(sym_Build_1, v_18);
                              }
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
  ATerm d_19 = NULL,e_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL;
  f_19 = t;
  if(match_cons(t, sym_Seq_2))
    {
      g_19 = ATgetArgument(t, 0);
      h_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_19;
  if(match_cons(t, sym_Seq_2))
    {
      d_19 = ATgetArgument(t, 0);
      e_19 = ATgetArgument(t, 1);
      {
        ATerm b_17 = t;
        int c_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_4 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, g_19, d_19);
            {
              ATerm d_17 = t;
              int e_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = MisMatch_0_0(t);
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
                        t = BuildMatchFusion_0_0(t);
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
                              ATerm z_4 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  ATerm j_17 = ATgetArgument(t, 0);
                                  ATerm k_17 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = g_19;
                              if(match_cons(t, sym_Build_1))
                                {
                                  ATerm l_17 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = d_19;
                              if(match_cons(t, sym_Build_1))
                                {
                                  z_4 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym_Build_1, z_4);
                              ;
                              LocalPopChoice(i_17);
                            }
                          else
                            {
                              t = h_17;
                              {
                                ATerm m_17 = t;
                                int n_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildPrim_0_0(t);
                                    ;
                                    LocalPopChoice(n_17);
                                  }
                                else
                                  {
                                    t = m_17;
                                    {
                                      ATerm d_5 = NULL,f_5 = NULL,h_5 = NULL,i_5 = NULL;
                                      if(match_cons(t, sym__2))
                                        {
                                          ATerm o_17 = ATgetArgument(t, 0);
                                          ATerm p_17 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = g_19;
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          d_5 = ATgetArgument(t, 0);
                                          t = d_19;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              h_5 = ATgetArgument(t, 0);
                                              t = h_5;
                                              if((d_5 != t))
                                                {
                                                  _fail(t);
                                                }
                                              t = (ATerm) ATmakeAppl(sym_Match_1, d_5);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Build_1))
                                                {
                                                  h_5 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = d_5;
                                              if(match_cons(t, sym_Var_1))
                                                {
                                                  f_5 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = h_5;
                                              if(match_cons(t, sym_Var_1))
                                                {
                                                  i_5 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = i_5;
                                              if((f_5 != t))
                                                {
                                                  _fail(t);
                                                }
                                              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, f_5));
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_Build_1))
                                            {
                                              d_5 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = d_19;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              h_5 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = h_5;
                                          if((d_5 != t))
                                            {
                                              _fail(t);
                                            }
                                          t = (ATerm) ATmakeAppl(sym_Build_1, d_5);
                                        }
                                    }
                                  }
                              }
                            }
                        }
                      }
                  }
                }
              u_4 = t;
              t = (ATerm) ATmakeAppl(sym_Seq_2, u_4, e_19);
            }
            ;
            LocalPopChoice(c_17);
          }
        else
          {
            t = b_17;
            t = j_19(g_19, h_19, f_19, t);
          }
      }
    }
  else
    {
      t = j_19(g_19, h_19, f_19, t);
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm h_122 (ATerm), ATerm t)
{
  ATerm k_19 (ATerm t)
  {
    ATerm q_17 = t;
    int r_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_122(t);
        ;
        LocalPopChoice(r_17);
      }
    else
      {
        t = q_17;
        t = SRTS_one(k_19, t);
      }
    return(t);
  }
  t = k_19(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm l_19 = NULL,n_19 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      ATerm s_17 = ATgetArgument(t, 0);
      if(((ATgetType(s_17) == AT_LIST) && !(ATisEmpty(s_17))))
        {
          ATerm u_17 = ATgetFirst((ATermList) s_17);
          if(match_cons(u_17, sym_SDefT_4))
            {
              n_19 = ATgetArgument(u_17, 0);
              {
                ATerm w_17 = ATgetArgument(u_17, 1);
                if(((ATgetType(w_17) != AT_LIST) || !(ATisEmpty(w_17))))
                  _fail(t);
              }
              {
                ATerm x_17 = ATgetArgument(u_17, 2);
                if(((ATgetType(x_17) != AT_LIST) || !(ATisEmpty(x_17))))
                  _fail(t);
              }
              l_19 = ATgetArgument(u_17, 3);
            }
          else
            _fail(t);
          {
            ATerm v_17 = (ATerm) ATgetNext((ATermList) s_17);
            if(((ATgetType(v_17) != AT_LIST) || !(ATisEmpty(v_17))))
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm t_17 = ATgetArgument(t, 1);
        if(match_cons(t_17, sym_CallT_3))
          {
            ATerm y_17 = ATgetArgument(t_17, 0);
            if(match_cons(y_17, sym_SVar_1))
              {
                if((n_19 != ATgetArgument(y_17, 0)))
                  {
                    _fail(ATgetArgument(y_17, 0));
                  }
              }
            else
              _fail(t);
            {
              ATerm z_17 = ATgetArgument(t_17, 1);
              if(((ATgetType(z_17) != AT_LIST) || !(ATisEmpty(z_17))))
                _fail(t);
            }
            {
              ATerm a_18 = ATgetArgument(t_17, 2);
              if(((ATgetType(a_18) != AT_LIST) || !(ATisEmpty(a_18))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = l_19;
  {
    ATerm b_18 = t;
    if((PushChoice() == 0))
      {
        ATerm y_3 (ATerm t)
        {
          if(match_cons(t, sym_CallT_3))
            {
              ATerm c_18 = ATgetArgument(t, 0);
              if(match_cons(c_18, sym_SVar_1))
                {
                  if((n_19 != ATgetArgument(c_18, 0)))
                    {
                      _fail(ATgetArgument(c_18, 0));
                    }
                }
              else
                _fail(t);
              {
                ATerm d_18 = ATgetArgument(t, 1);
                if(((ATgetType(d_18) != AT_LIST) || !(ATisEmpty(d_18))))
                  _fail(t);
              }
              {
                ATerm e_18 = ATgetArgument(t, 2);
                if(((ATgetType(e_18) != AT_LIST) || !(ATisEmpty(e_18))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(y_3, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = b_18;
      }
    t = l_19;
  }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm z_19 = NULL,b_20 = NULL,c_20 = NULL,d_20 = NULL,e_20 = NULL,f_20 = NULL,i_20 = NULL,j_20 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      i_20 = ATgetArgument(t, 0);
      t = i_20;
      if(match_cons(t, sym_Seq_2))
        {
          f_20 = ATgetArgument(t, 0);
          b_20 = ATgetArgument(t, 1);
          t = f_20;
          if(match_cons(t, sym_Where_1))
            {
              z_19 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_20;
          if(match_cons(t, sym_Seq_2))
            {
              c_20 = ATgetArgument(t, 0);
              e_20 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = c_20;
          if(match_cons(t, sym_Build_1))
            {
              d_20 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, z_19, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, d_20), e_20)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              f_20 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, f_20);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          i_20 = ATgetArgument(t, 0);
          t = i_20;
          if(match_cons(t, sym_Test_1))
            {
              f_20 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, f_20);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              i_20 = ATgetArgument(t, 0);
              t = i_20;
              if(match_cons(t, sym_Not_1))
                {
                  f_20 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, f_20);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  i_20 = ATgetArgument(t, 0);
                  j_20 = ATgetArgument(t, 1);
                  t = j_20;
                  if((i_20 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      i_20 = ATgetArgument(t, 0);
                      j_20 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = j_20;
                  if((i_20 != t))
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
  ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      z_20 = ATgetArgument(t, 0);
      c_21 = ATgetArgument(t, 1);
      t = z_20;
      if(match_cons(t, sym_LChoice_2))
        {
          a_21 = ATgetArgument(t, 0);
          b_21 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, a_21, (ATerm) ATmakeAppl(sym_LChoice_2, b_21, c_21));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          z_20 = ATgetArgument(t, 0);
          c_21 = ATgetArgument(t, 1);
          t = z_20;
          if(match_cons(t, sym_Seq_2))
            {
              a_21 = ATgetArgument(t, 0);
              b_21 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, a_21, (ATerm) ATmakeAppl(sym_Seq_2, b_21, c_21));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              z_20 = ATgetArgument(t, 0);
              c_21 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_20;
          if(match_cons(t, sym_Choice_2))
            {
              a_21 = ATgetArgument(t, 0);
              b_21 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, a_21, (ATerm) ATmakeAppl(sym_Choice_2, b_21, c_21));
        }
    }
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm f_18 = t;
  int g_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(n_0, _id, t);
      {
        ATerm z_3 (ATerm t)
        {
          ATerm h_18 = t;
          int l_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(n_0, t);
              ;
              LocalPopChoice(l_18);
            }
          else
            {
              t = h_18;
            }
          return(t);
        }
        t = Cons_2_0(_id, z_3, t);
      }
      ;
      LocalPopChoice(g_18);
    }
  else
    {
      t = f_18;
      {
        ATerm a_4 (ATerm t)
        {
          t = map1_1_0(n_0, t);
          return(t);
        }
        t = Cons_2_0(_id, a_4, t);
      }
    }
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm u_22 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      u_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, u_22, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_o_18), term_o_18));
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm p_18 = t;
  int q_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_22 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, x_22, term_o_18);
      ;
      LocalPopChoice(q_18);
    }
  else
    {
      t = p_18;
    }
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm f_23 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      f_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, f_23, term_o_18);
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm s_18 = t;
  int t_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_23 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, h_23, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_o_18), term_o_18));
      ;
      LocalPopChoice(t_18);
    }
  else
    {
      t = s_18;
    }
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm w_23 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      w_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, w_23, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_o_18), term_o_18));
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm u_18 = t;
  int x_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_23 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, z_23, term_o_18);
      ;
      LocalPopChoice(x_18);
    }
  else
    {
      t = u_18;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm t_21 = NULL,u_21 = NULL,v_21 = NULL,w_21 = NULL,y_21 = NULL,z_21 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      y_21 = ATgetArgument(t, 0);
      z_21 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, y_21, z_21);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          y_21 = ATgetArgument(t, 0);
          t = y_21;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              t_21 = ATgetFirst((ATermList) t);
              u_21 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, t_21, (ATerm) ATmakeAppl(sym_LChoices_1, u_21));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_n_16;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              y_21 = ATgetArgument(t, 0);
              t = y_21;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  t_21 = ATgetFirst((ATermList) t);
                  u_21 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, t_21, (ATerm) ATmakeAppl(sym_Choices_1, u_21));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_n_16;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  y_21 = ATgetArgument(t, 0);
                  t = y_21;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      t_21 = ATgetFirst((ATermList) t);
                      u_21 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_21, (ATerm) ATmakeAppl(sym_Seqs_1, u_21));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_a_19;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      y_21 = ATgetArgument(t, 0);
                      z_21 = ATgetArgument(t, 1);
                      w_21 = ATgetArgument(t, 2);
                      v_21 = ATgetArgument(t, 3);
                      {
                        ATerm s_22 = NULL,t_22 = NULL;
                        t = z_21;
                        t = map1_1_0(b_4, t);
                        s_22 = t;
                        t = w_21;
                        t = map1_1_0(c_4, t);
                        t_22 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, y_21, s_22, t_22, v_21);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          y_21 = ATgetArgument(t, 0);
                          z_21 = ATgetArgument(t, 1);
                          w_21 = ATgetArgument(t, 2);
                          v_21 = ATgetArgument(t, 3);
                          {
                            ATerm b_19 = t;
                            int c_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm d_23 = NULL,e_23 = NULL;
                                t = w_21;
                                t = map1_1_0(e_4, t);
                                d_23 = t;
                                t = z_21;
                                t = map_1_0(f_4, t);
                                e_23 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, y_21, e_23, d_23, v_21);
                                ;
                                LocalPopChoice(c_19);
                              }
                            else
                              {
                                t = b_19;
                                {
                                  ATerm r_23 = NULL,v_23 = NULL;
                                  t = z_21;
                                  t = map1_1_0(g_4, t);
                                  r_23 = t;
                                  t = w_21;
                                  t = map_1_0(h_4, t);
                                  v_23 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, y_21, r_23, v_23, v_21);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              y_21 = ATgetArgument(t, 0);
                              z_21 = ATgetArgument(t, 1);
                              w_21 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, z_21, (ATerm) ATmakeAppl(sym_Op_2, term_i_19, (ATerm) ATinsert(ATinsert(ATempty, w_21), y_21)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  y_21 = ATgetArgument(t, 0);
                                  z_21 = ATgetArgument(t, 1);
                                  w_21 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, w_21)), y_21), (ATerm) ATmakeAppl(sym_Build_1, z_21)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      y_21 = ATgetArgument(t, 0);
                                      z_21 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, y_21, (ATerm) ATmakeAppl(sym_Match_1, z_21));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          y_21 = ATgetArgument(t, 0);
                                          z_21 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, y_21), z_21);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              y_21 = ATgetArgument(t, 0);
                                              z_21 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, z_21), y_21);
                                        }
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
ATerm j_4 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm f_25 = NULL,g_25 = NULL,h_25 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      f_25 = ATgetArgument(t, 0);
      t = f_25;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_n_16;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          f_25 = ATgetArgument(t, 0);
          t = f_25;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_a_19;
        }
      else
        {
          ATerm m_19 = t;
          int o_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_Seq_2))
                {
                  f_25 = ATgetArgument(t, 0);
                  {
                    ATerm p_19 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(o_19);
              t = f_25;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_n_16;
            }
          else
            {
              t = m_19;
              {
                ATerm q_19 = t;
                int r_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Scope_2))
                      {
                        ATerm s_19 = ATgetArgument(t, 0);
                        g_25 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(r_19);
                    t = g_25;
                    if(!(match_cons(t, sym_Fail_0)))
                      _fail(t);
                    t = term_n_16;
                  }
                else
                  {
                    t = q_19;
                    {
                      ATerm t_19 = t;
                      int u_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_Rec_2))
                            {
                              ATerm v_19 = ATgetArgument(t, 0);
                              g_25 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(u_19);
                          t = g_25;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_n_16;
                        }
                      else
                        {
                          t = t_19;
                          if(match_cons(t, sym_Some_1))
                            {
                              f_25 = ATgetArgument(t, 0);
                              t = f_25;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_n_16;
                            }
                          else
                            {
                              if(match_cons(t, sym_One_1))
                                {
                                  f_25 = ATgetArgument(t, 0);
                                  t = f_25;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_n_16;
                                }
                              else
                                {
                                  ATerm w_19 = t;
                                  int x_19 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_Path_2))
                                        {
                                          ATerm y_19 = ATgetArgument(t, 0);
                                          g_25 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(x_19);
                                      t = g_25;
                                      if(!(match_cons(t, sym_Fail_0)))
                                        _fail(t);
                                      t = term_n_16;
                                    }
                                  else
                                    {
                                      t = w_19;
                                      {
                                        ATerm a_20 = t;
                                        int g_20 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            if(match_cons(t, sym_Cong_2))
                                              {
                                                ATerm h_20 = ATgetArgument(t, 0);
                                                g_25 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            LocalPopChoice(g_20);
                                            t = g_25;
                                            t = fetch_1_0(j_4, t);
                                            t = term_n_16;
                                          }
                                        else
                                          {
                                            t = a_20;
                                            if(match_cons(t, sym_Choice_2))
                                              {
                                                f_25 = ATgetArgument(t, 0);
                                                g_25 = ATgetArgument(t, 1);
                                                t = g_25;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    t = f_25;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm k_20 = t;
                                                        int l_20 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = g_25;
                                                            ;
                                                            LocalPopChoice(l_20);
                                                          }
                                                        else
                                                          {
                                                            t = k_20;
                                                            t = f_25;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = f_25;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = f_25;
                                                    if(!(match_cons(t, sym_Fail_0)))
                                                      _fail(t);
                                                    t = g_25;
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_LChoice_2))
                                                  {
                                                    f_25 = ATgetArgument(t, 0);
                                                    g_25 = ATgetArgument(t, 1);
                                                    t = g_25;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        t = f_25;
                                                        if(match_cons(t, sym_Fail_0))
                                                          {
                                                            ATerm m_20 = t;
                                                            int n_20 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = g_25;
                                                                ;
                                                                LocalPopChoice(n_20);
                                                              }
                                                            else
                                                              {
                                                                t = m_20;
                                                                t = f_25;
                                                              }
                                                          }
                                                        else
                                                          {
                                                            t = f_25;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = f_25;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = g_25;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Where_1))
                                                      {
                                                        f_25 = ATgetArgument(t, 0);
                                                        t = f_25;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = term_n_16;
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_GuardedLChoice_3))
                                                          {
                                                            f_25 = ATgetArgument(t, 0);
                                                            g_25 = ATgetArgument(t, 1);
                                                            h_25 = ATgetArgument(t, 2);
                                                          }
                                                        else
                                                          _fail(t);
                                                        t = h_25;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, f_25, g_25);
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                    }
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
  ATerm f_26 = NULL,h_26 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      h_26 = ATgetArgument(t, 0);
      t = h_26;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_a_19;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          h_26 = ATgetArgument(t, 0);
          t = h_26;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_n_16;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              h_26 = ATgetArgument(t, 0);
              f_26 = ATgetArgument(t, 1);
              t = f_26;
              if(match_cons(t, sym_Id_0))
                {
                  t = h_26;
                  if(match_cons(t, sym_Id_0))
                    {
                      ATerm o_20 = t;
                      int p_20 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = f_26;
                          ;
                          LocalPopChoice(p_20);
                        }
                      else
                        {
                          t = o_20;
                          t = h_26;
                        }
                    }
                  else
                    {
                      t = h_26;
                    }
                }
              else
                {
                  t = h_26;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = f_26;
                }
            }
          else
            {
              ATerm q_20 = t;
              int r_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      h_26 = ATgetArgument(t, 0);
                      {
                        ATerm s_20 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(r_20);
                  t = h_26;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_a_19;
                }
              else
                {
                  t = q_20;
                  {
                    ATerm t_20 = t;
                    int u_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            ATerm v_20 = ATgetArgument(t, 0);
                            f_26 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(u_20);
                        t = f_26;
                        if(!(match_cons(t, sym_Id_0)))
                          _fail(t);
                        t = term_a_19;
                      }
                    else
                      {
                        t = t_20;
                        {
                          ATerm w_20 = t;
                          int x_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Rec_2))
                                {
                                  ATerm y_20 = ATgetArgument(t, 0);
                                  f_26 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(x_20);
                              t = f_26;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_a_19;
                            }
                          else
                            {
                              t = w_20;
                              if(match_cons(t, sym_All_1))
                                {
                                  h_26 = ATgetArgument(t, 0);
                                  t = h_26;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_a_19;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Where_1))
                                    {
                                      h_26 = ATgetArgument(t, 0);
                                      t = h_26;
                                      if(!(match_cons(t, sym_Id_0)))
                                        _fail(t);
                                      t = term_a_19;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          h_26 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = h_26;
                                      if(!(match_cons(t, sym_Wld_0)))
                                        _fail(t);
                                      t = term_a_19;
                                    }
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
  ATerm d_21 = t;
  int e_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
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
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(g_21);
          }
        else
          {
            t = f_21;
            {
              ATerm h_21 = t;
              int i_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(i_21);
                }
              else
                {
                  t = h_21;
                  {
                    ATerm j_21 = t;
                    int k_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(k_21);
                      }
                    else
                      {
                        t = j_21;
                        {
                          ATerm l_21 = t;
                          int m_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(m_21);
                            }
                          else
                            {
                              t = l_21;
                              {
                                ATerm n_21 = t;
                                int o_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm s_26 = NULL,t_26 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        s_26 = ATgetArgument(t, 0);
                                        t_26 = ATgetArgument(t, 1);
                                        t = s_26;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = t_26;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            s_26 = ATgetArgument(t, 0);
                                            t_26 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = s_26;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = t_26;
                                      }
                                    ;
                                    LocalPopChoice(o_21);
                                  }
                                else
                                  {
                                    t = n_21;
                                    {
                                      ATerm p_21 = t;
                                      int q_21 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
                                          LocalPopChoice(q_21);
                                        }
                                      else
                                        {
                                          t = p_21;
                                          {
                                            ATerm r_21 = t;
                                            int s_21 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = BuildMatch_0_0(t);
                                                ;
                                                LocalPopChoice(s_21);
                                              }
                                            else
                                              {
                                                t = r_21;
                                                {
                                                  ATerm x_26 = NULL,z_26 = NULL;
                                                  if(match_cons(t, sym_As_2))
                                                    {
                                                      x_26 = ATgetArgument(t, 0);
                                                      z_26 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = x_26;
                                                  if(!(match_cons(t, sym_Wld_0)))
                                                    _fail(t);
                                                  t = z_26;
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm repeat_1_0 (ATerm o_137 (ATerm), ATerm t)
{
  ATerm b_27 (ATerm t)
  {
    ATerm x_21 = t;
    int a_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_137(t);
        t = b_27(t);
        ;
        LocalPopChoice(a_22);
      }
    else
      {
        t = x_21;
      }
    return(t);
  }
  t = b_27(t);
  return(t);
}
ATerm downup_1_0 (ATerm f_121 (ATerm), ATerm t)
{
  t = f_121(t);
  {
    ATerm k_4 (ATerm t)
    {
      t = downup_1_0(f_121, t);
      return(t);
    }
    t = SRTS_all(k_4, t);
    t = f_121(t);
  }
  return(t);
}
ATerm WidenScope_0_0 (ATerm t)
{
  ATerm g_27 = NULL,h_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      j_27 = ATgetArgument(t, 0);
      m_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_27;
  if(match_cons(t, sym_Scope_2))
    {
      g_27 = ATgetArgument(t, 0);
      h_27 = ATgetArgument(t, 1);
      t = j_27;
      if(match_cons(t, sym_Scope_2))
        {
          k_27 = ATgetArgument(t, 0);
          l_27 = ATgetArgument(t, 1);
          {
            ATerm b_22 = t;
            int c_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = (ATerm) ATmakeAppl(sym_Scope_2, g_27, (ATerm) ATmakeAppl(sym_Seq_2, j_27, h_27));
                ;
                LocalPopChoice(c_22);
              }
            else
              {
                t = b_22;
                t = (ATerm) ATmakeAppl(sym_Scope_2, k_27, (ATerm) ATmakeAppl(sym_Seq_2, l_27, m_27));
              }
          }
        }
      else
        {
          t = (ATerm) ATmakeAppl(sym_Scope_2, g_27, (ATerm) ATmakeAppl(sym_Seq_2, j_27, h_27));
        }
    }
  else
    {
      t = j_27;
      if(match_cons(t, sym_Scope_2))
        {
          k_27 = ATgetArgument(t, 0);
          l_27 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, k_27, (ATerm) ATmakeAppl(sym_Seq_2, l_27, m_27));
    }
  return(t);
}
ATerm SDefT_4_0 (ATerm u_111 (ATerm), ATerm v_111 (ATerm), ATerm w_111 (ATerm), ATerm x_111 (ATerm), ATerm t)
{
  ATerm z_27 = NULL,a_28 = NULL,b_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL,h_28 = NULL,i_28 = NULL;
  i_28 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      a_28 = ATgetArgument(t, 0);
      b_28 = ATgetArgument(t, 1);
      c_28 = ATgetArgument(t, 2);
      d_28 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_28);
  z_27 = t;
  t = a_28;
  t = u_111(t);
  e_28 = t;
  t = b_28;
  t = v_111(t);
  f_28 = t;
  t = c_28;
  t = w_111(t);
  g_28 = t;
  t = d_28;
  t = x_111(t);
  h_28 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, e_28, f_28, g_28, h_28), z_27);
  return(t);
}
ATerm SDef_3_0 (ATerm r_111 (ATerm), ATerm s_111 (ATerm), ATerm t_111 (ATerm), ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL,q_28 = NULL,t_28 = NULL,u_28 = NULL,w_28 = NULL,y_28 = NULL,z_28 = NULL;
  z_28 = t;
  if(match_cons(t, sym_SDef_3))
    {
      p_28 = ATgetArgument(t, 0);
      q_28 = ATgetArgument(t, 1);
      t_28 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_28);
  o_28 = t;
  t = p_28;
  t = r_111(t);
  u_28 = t;
  t = q_28;
  t = s_111(t);
  w_28 = t;
  t = t_28;
  t = t_111(t);
  y_28 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, u_28, w_28, y_28), o_28);
  return(t);
}
ATerm Strategies_1_0 (ATerm u_104 (ATerm), ATerm t)
{
  ATerm c_29 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL;
  f_29 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      d_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_29);
  c_29 = t;
  t = d_29;
  t = u_104(t);
  e_29 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, e_29), c_29);
  return(t);
}
ATerm Specification_1_0 (ATerm z_104 (ATerm), ATerm t)
{
  ATerm i_29 = NULL,j_29 = NULL,k_29 = NULL,l_29 = NULL;
  l_29 = t;
  if(match_cons(t, sym_Specification_1))
    {
      j_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_29);
  i_29 = t;
  t = j_29;
  t = z_104(t);
  k_29 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, k_29), i_29);
  return(t);
}
ATerm p_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm apply_to_bodies_1_0 (ATerm e_119 (ATerm), ATerm t)
{
  ATerm l_4 (ATerm t)
  {
    ATerm n_4 (ATerm t)
    {
      ATerm o_4 (ATerm t)
      {
        ATerm q_4 (ATerm t)
        {
          ATerm r_4 (ATerm t)
          {
            ATerm d_22 = t;
            int e_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SDef_3_0(_id, _id, e_119, t);
                ;
                LocalPopChoice(e_22);
              }
            else
              {
                t = d_22;
                t = SDefT_4_0(_id, _id, _id, e_119, t);
              }
            return(t);
          }
          t = map_1_0(r_4, t);
          return(t);
        }
        t = Strategies_1_0(q_4, t);
        return(t);
      }
      t = Cons_2_0(o_4, p_4, t);
      return(t);
    }
    t = Cons_2_0(_id, n_4, t);
    return(t);
  }
  t = Specification_1_0(l_4, t);
  return(t);
}
ATerm _2_0 (ATerm b_100 (ATerm), ATerm c_100 (ATerm), ATerm t)
{
  ATerm o_29 = NULL,p_29 = NULL,q_29 = NULL,r_29 = NULL,s_29 = NULL,t_29 = NULL;
  t_29 = t;
  if(match_cons(t, sym__2))
    {
      p_29 = ATgetArgument(t, 0);
      q_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_29);
  o_29 = t;
  t = p_29;
  t = b_100(t);
  r_29 = t;
  t = q_29;
  t = c_100(t);
  s_29 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, r_29, s_29), o_29);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm c_143 (ATerm), ATerm t)
{
  ATerm w_29 = NULL,x_29 = NULL,y_29 = NULL;
  if(match_cons(t, sym__2))
    {
      w_29 = ATgetArgument(t, 0);
      x_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_29, term_f_22);
  t = open_stream_0_0(t);
  y_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_29, x_29);
  t = c_143(t);
  t = fclose_0_0(t);
  t = x_29;
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = fetch_1_0(y_4, t);
  return(t);
}
ATerm x_4 (ATerm t)
{
  t = WriteToFile_1_0(a_5, t);
  return(t);
}
ATerm y_4 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm b_30 = NULL,c_30 = NULL,d_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_22 = ATgetArgument(t, 0);
      if(match_cons(g_22, sym_Stream_1))
        {
          b_30 = ATgetArgument(g_22, 0);
        }
      else
        _fail(t);
      c_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(b_30, c_30);
  d_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_30);
  return(t);
}
ATerm b_5 (ATerm t)
{
  t = WriteToFile_1_0(c_5, t);
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm e_30 = NULL,f_30 = NULL,g_30 = NULL,h_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_22 = ATgetArgument(t, 0);
      if(match_cons(h_22, sym_Stream_1))
        {
          e_30 = ATgetArgument(h_22, 0);
        }
      else
        _fail(t);
      f_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(e_30, f_30);
  g_30 = t;
  t = SSL_fputc((ATerm)ATmakeInt(10), g_30);
  h_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_30);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm z_29 = NULL,a_30 = NULL;
  z_29 = t;
  {
    ATerm s_4 (ATerm t)
    {
      ATerm i_22 = t;
      int j_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_4 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((a_30 != NULL) && (a_30 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  a_30 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(t_4, t);
          ;
          LocalPopChoice(j_22);
        }
      else
        {
          t = i_22;
          t = term_k_22;
          if(((a_30 != NULL) && (a_30 != t)))
            _fail(t);
          else
            a_30 = t;
        }
      return(t);
    }
    t = _2_0(s_4, _id, t);
    t = z_29;
    {
      ATerm v_4 (ATerm t)
      {
        ATerm q_5 = NULL;
        q_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_30), q_5);
        return(t);
      }
      t = _2_0(_id, v_4, t);
      {
        ATerm l_22 = t;
        int m_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(w_4, x_4, t);
            ;
            LocalPopChoice(m_22);
          }
        else
          {
            t = l_22;
            t = _2_0(_id, b_5, t);
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
ATerm apply_strategy_1_0 (ATerm e_146 (ATerm), ATerm t)
{
  ATerm i_30 = NULL,j_30 = NULL,k_30 = NULL,l_30 = NULL,m_30 = NULL;
  i_30 = t;
  t = dtime_0_0(t);
  t = i_30;
  t = e_146(t);
  j_30 = t;
  t = dtime_0_0(t);
  k_30 = t;
  t = j_30;
  if(match_cons(t, sym__2))
    {
      l_30 = ATgetArgument(t, 0);
      m_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_30), (ATerm) ATmakeAppl(sym_Runtime_1, k_30)), m_30);
  return(t);
}
ATerm a_31 (ATerm u_30, ATerm t)
{
  t = SSL_fclose(u_30);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm x_30 = NULL,y_30 = NULL;
  y_30 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_30 = ATgetArgument(t, 0);
      {
        ATerm n_22 = t;
        int o_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(x_30);
            ;
            LocalPopChoice(o_22);
          }
        else
          {
            t = n_22;
            t = a_31(y_30, t);
          }
      }
    }
  else
    {
      t = a_31(y_30, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm b_31 = NULL;
  t = SSL_stdin_stream();
  b_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_31);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm c_31 = NULL;
  t = SSL_stdout_stream();
  c_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_31);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm d_31 = NULL;
  t = SSL_stderr_stream();
  d_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_31);
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm l_31 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      l_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_31;
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm p_31 = NULL;
  p_31 = t;
  t = SSL_is_string(p_31);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_22 = ATgetArgument(t, 0);
      ATerm q_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_22 = t;
    int v_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_6 = NULL,g_6 = NULL;
        f_6 = t;
        t = SSL_explode_term(f_6);
        if(match_cons(t, sym__2))
          {
            ATerm w_22 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) w_22) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm y_22 = ATgetArgument(t, 1);
              if(((ATgetType(y_22) == AT_LIST) && !(ATisEmpty(y_22))))
                {
                  g_6 = ATgetFirst((ATermList) y_22);
                  {
                    ATerm z_22 = (ATerm) ATgetNext((ATermList) y_22);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = g_6;
        if(match_cons(t, sym_stderr_0))
          {
            t = g_6;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = g_6;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = g_6;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(v_22);
      }
    else
      {
        t = r_22;
        {
          ATerm a_23 = t;
          int b_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_31 = NULL,j_31 = NULL,k_31 = NULL;
              t = _2_0(g_5, _id, t);
              if(match_cons(t, sym__2))
                {
                  i_31 = ATgetArgument(t, 0);
                  j_31 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(i_31, j_31);
              k_31 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, k_31);
              ;
              LocalPopChoice(b_23);
            }
          else
            {
              t = a_23;
              {
                ATerm m_31 = NULL,n_31 = NULL,o_31 = NULL;
                t = _2_0(j_5, _id, t);
                if(match_cons(t, sym__2))
                  {
                    m_31 = ATgetArgument(t, 0);
                    n_31 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(m_31, n_31);
                o_31 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, o_31);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm q_31 = NULL,r_31 = NULL,s_31 = NULL;
  ATerm c_23 = t;
  int g_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_31 = NULL;
      t_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_31, term_i_23);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(g_23);
    }
  else
    {
      t = c_23;
      {
        ATerm h_6 = NULL;
        h_6 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, h_6), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = h_6;
        _fail(t);
      }
    }
  q_31 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(s_31);
  r_31 = t;
  t = q_31;
  t = fclose_0_0(t);
  t = r_31;
  return(t);
}
ATerm fetch_1_0 (ATerm p_127 (ATerm), ATerm t)
{
  ATerm y_31 (ATerm t)
  {
    ATerm j_23 = t;
    int k_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(p_127, _id, t);
        ;
        LocalPopChoice(k_23);
      }
    else
      {
        t = j_23;
        t = Cons_2_0(_id, y_31, t);
      }
    return(t);
  }
  t = y_31(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm l_23 = t;
  int m_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(m_23);
    }
  else
    {
      t = l_23;
      {
        ATerm b_32 = NULL,c_32 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_32 = ATgetFirst((ATermList) t);
            c_32 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = b_32;
        {
          ATerm k_5 (ATerm t)
          {
            t = c_32;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(k_5, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm v_127 (ATerm), ATerm t)
{
  ATerm j_32 (ATerm t)
  {
    ATerm n_23 = t;
    int o_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, j_32, t);
        ;
        LocalPopChoice(o_23);
      }
    else
      {
        t = n_23;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = v_127(t);
      }
    return(t);
  }
  t = j_32(t);
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm m_32 = NULL;
  m_32 = t;
  t = SSL_explode_string(m_32);
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm n_32 = NULL;
  n_32 = t;
  t = SSL_explode_string(n_32);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm l_32 = NULL;
  t = _2_0(l_5, m_5, t);
  {
    ATerm p_23 = t;
    int q_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_32 = NULL,q_32 = NULL;
        if(match_cons(t, sym__2))
          {
            p_32 = ATgetArgument(t, 0);
            q_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = p_32;
        {
          ATerm n_5 (ATerm t)
          {
            t = q_32;
            return(t);
          }
          t = at_end_1_0(n_5, t);
        }
        ;
        LocalPopChoice(q_23);
      }
    else
      {
        t = p_23;
        {
          ATerm n_6 = NULL,o_6 = NULL;
          n_6 = t;
          t = SSL_explode_term(n_6);
          if(match_cons(t, sym__2))
            {
              ATerm s_23 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) s_23) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              o_6 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = o_6;
          t = concat_0_0(t);
        }
      }
    l_32 = t;
    t = SSL_implode_string(l_32);
  }
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm t_23 = t;
  int u_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(u_23);
    }
  else
    {
      t = t_23;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm x_23 = t;
  int y_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_33 = NULL;
      a_33 = t;
      t = SSL_is_string(a_33);
      ;
      LocalPopChoice(y_23);
    }
  else
    {
      t = x_23;
      {
        ATerm a_24 = t;
        int b_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(o_5, t);
            ;
            LocalPopChoice(b_24);
          }
        else
          {
            t = a_24;
            {
              ATerm e_33 = NULL,f_33 = NULL,g_33 = NULL;
              e_33 = t;
              if(match_cons(t, sym_Path_1))
                {
                  f_33 = ATgetArgument(t, 0);
                  t = f_33;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      f_33 = ATgetArgument(t, 0);
                      t = f_33;
                      {
                        ATerm c_24 = t;
                        int d_24 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), f_33);
                            {
                              ATerm e_24 = t;
                              int f_24 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm m_7 = NULL;
                                  t = eval_config_0_0(t);
                                  m_7 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), f_33, m_7);
                                  t = m_7;
                                  ;
                                  LocalPopChoice(f_24);
                                }
                              else
                                {
                                  t = e_24;
                                }
                            }
                            ;
                            LocalPopChoice(d_24);
                          }
                        else
                          {
                            t = c_24;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, f_33), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = f_33;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm k_33 = NULL,l_33 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          f_33 = ATgetArgument(t, 0);
                          g_33 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = f_33;
                      t = eval_config_0_0(t);
                      k_33 = t;
                      t = g_33;
                      t = eval_config_0_0(t);
                      l_33 = t;
                      t = (ATerm) ATmakeAppl(sym__2, k_33, l_33);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm n_144 (ATerm), ATerm t)
{
  ATerm g_24 = t;
  int h_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_33 = NULL,u_33 = NULL;
      s_33 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm i_24 = t;
        int j_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_7 = NULL;
            t = eval_config_0_0(t);
            y_7 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), y_7);
            t = y_7;
            ;
            LocalPopChoice(j_24);
          }
        else
          {
            t = i_24;
          }
        u_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_33, term_k_24);
        t = geq_0_0(t);
        t = s_33;
        t = n_144(t);
      }
      ;
      LocalPopChoice(h_24);
    }
  else
    {
      t = g_24;
    }
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm w_33 = NULL;
  w_33 = t;
  if(match_string(t, "-k"))
    {
      t = w_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = w_33;
    }
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm x_33 = NULL,y_33 = NULL;
  x_33 = t;
  t = SSL_string_to_int(x_33);
  y_33 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), y_33);
  t = x_33;
  return(t);
}
ATerm s_5 (ATerm t)
{
  t = term_l_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_5, r_5, s_5, t);
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm a_34 = NULL;
  a_34 = t;
  if(match_string(t, "-S"))
    {
      t = a_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = a_34;
    }
  return(t);
}
ATerm u_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_n_24;
  return(t);
}
ATerm v_5 (ATerm t)
{
  t = term_o_24;
  return(t);
}
ATerm w_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm b_34 = NULL,c_34 = NULL;
  b_34 = t;
  t = SSL_string_to_int(b_34);
  c_34 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), c_34);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, b_34);
  return(t);
}
ATerm y_5 (ATerm t)
{
  t = term_p_24;
  return(t);
}
ATerm z_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_q_24;
  return(t);
}
ATerm b_6 (ATerm t)
{
  t = term_r_24;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm s_24 = t;
  int t_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_5, u_5, v_5, t);
      ;
      LocalPopChoice(t_24);
    }
  else
    {
      t = s_24;
      {
        ATerm u_24 = t;
        int v_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(w_5, x_5, y_5, t);
            ;
            LocalPopChoice(v_24);
          }
        else
          {
            t = u_24;
            t = Option_3_0(z_5, a_6, b_6, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm f_34 = NULL,g_34 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_34 = NULL;
      t = term_i_8;
      t = d_0(t);
      h_34 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_24, term_x_24, h_34);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm k_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_34 = ATgetFirst((ATermList) t);
          g_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_34;
      t = a_0(t);
      t = term_i_8;
      t = c_0(t);
      k_34 = t;
      t = (ATerm) ATinsert(CheckATermList(g_34), k_34);
    }
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm m_34 = NULL;
  m_34 = t;
  if(match_string(t, "-o"))
    {
      t = m_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = m_34;
    }
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm p_34 = NULL;
  p_34 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), p_34);
  t = (ATerm) ATmakeAppl(sym_Output_1, p_34);
  return(t);
}
ATerm e_6 (ATerm t)
{
  t = term_y_24;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_6, d_6, e_6, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL;
  if(match_cons(t, sym__3))
    {
      s_34 = ATgetArgument(t, 0);
      t_34 = ATgetArgument(t, 1);
      u_34 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_34, t_34);
  {
    ATerm z_24 = t;
    int a_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_25 = ATgetArgument(t, 0);
            ATerm c_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(s_34, t_34);
        ;
        LocalPopChoice(a_25);
      }
    else
      {
        t = z_24;
        t = (ATerm) ATempty;
      }
    v_34 = t;
    t = SSL_table_put(s_34, t_34, (ATerm) ATinsert(CheckATermList(v_34), u_34));
    t = (ATerm) ATmakeAppl(sym__3, s_34, t_34, u_34);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm d_35 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_35 = NULL;
      t = term_i_8;
      t = l_0(t);
      i_35 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_24, term_x_24, i_35);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm m_35 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_35 = ATgetFirst((ATermList) t);
          e_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_35;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_35 = ATgetFirst((ATermList) t);
          g_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_35;
      t = i_0(t);
      t = f_35;
      t = k_0(t);
      m_35 = t;
      t = (ATerm) ATinsert(CheckATermList(g_35), m_35);
    }
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm o_35 = NULL;
  o_35 = t;
  if(match_string(t, "-i"))
    {
      t = o_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = o_35;
    }
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm p_35 = NULL;
  p_35 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), p_35);
  t = (ATerm) ATmakeAppl(sym_Input_1, p_35);
  return(t);
}
ATerm k_6 (ATerm t)
{
  t = term_d_25;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_6, j_6, k_6, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm q_35 = NULL;
  t = report_run_time_0_0(t);
  t = term_i_8;
  t = whoami_0_0(t);
  q_35 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), q_35));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm e_25 = t;
    int i_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_8 = NULL;
        t = eval_config_0_0(t);
        f_8 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), f_8);
        t = f_8;
        ;
        LocalPopChoice(i_25);
      }
    else
      {
        t = e_25;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm t_131 (ATerm), ATerm u_131 (ATerm), ATerm t)
{
  ATerm j_25 = t;
  int k_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = t_131(t);
      ;
      LocalPopChoice(k_25);
    }
  else
    {
      t = j_25;
      {
        ATerm t_35 = NULL,u_35 = NULL,x_35 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_35 = ATgetFirst((ATermList) t);
            u_35 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = u_35;
        t = foldr_2_0(t_131, u_131, t);
        x_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_35, x_35);
        t = u_131(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm l_6 (ATerm t)
{
  t = term_m_24;
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm n_8 = NULL,o_8 = NULL;
  if(match_cons(t, sym__2))
    {
      n_8 = ATgetArgument(t, 0);
      o_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_25 = t;
    int m_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(n_8, o_8);
        ;
        LocalPopChoice(m_25);
      }
    else
      {
        t = l_25;
        t = SSL_addr(n_8, o_8);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm a_36 = NULL,j_8 = NULL,k_8 = NULL;
  t = times_0_0(t);
  j_8 = t;
  t = SSL_explode_term(j_8);
  if(match_cons(t, sym__2))
    {
      ATerm n_25 = ATgetArgument(t, 0);
      k_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_8;
  t = foldr_2_0(l_6, m_6, t);
  a_36 = t;
  t = SSL_TicksToSeconds(a_36);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm l_36 = NULL,m_36 = NULL,n_36 = NULL;
  l_36 = t;
  if(match_cons(t, sym__2))
    {
      m_36 = ATgetArgument(t, 0);
      n_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_25 = t;
    int p_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_36;
        if((m_36 != t))
          {
            _fail(t);
          }
        t = l_36;
        ;
        LocalPopChoice(p_25);
      }
    else
      {
        t = o_25;
        t = l_36;
        {
          ATerm q_25 = t;
          int r_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(m_36, n_36);
              ;
              LocalPopChoice(r_25);
            }
          else
            {
              t = q_25;
              t = SSL_gtr(m_36, n_36);
            }
          t = (ATerm) ATmakeAppl(sym__2, m_36, n_36);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm m_144 (ATerm), ATerm t)
{
  ATerm s_25 = t;
  int t_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_36 = NULL,u_36 = NULL;
      r_36 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm u_25 = t;
        int v_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_9 = NULL;
            t = eval_config_0_0(t);
            t_9 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), t_9);
            t = t_9;
            ;
            LocalPopChoice(v_25);
          }
        else
          {
            t = u_25;
          }
        u_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_36, term_w_25);
        t = geq_0_0(t);
        t = r_36;
        t = m_144(t);
      }
      ;
      LocalPopChoice(t_25);
    }
  else
    {
      t = s_25;
    }
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm w_36 = NULL,x_36 = NULL;
  t = run_time_0_0(t);
  w_36 = t;
  t = term_i_8;
  t = whoami_0_0(t);
  x_36 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), w_36), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), x_36));
  t = (ATerm) ATmakeAppl(sym__2, term_x_25, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_25), w_36), term_y_25), x_36));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(p_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm a_26 = t;
  int b_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(b_26);
    }
  else
    {
      t = a_26;
      {
        ATerm c_26 = t;
        int d_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(d_26);
          }
        else
          {
            t = c_26;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm c_147 (ATerm), ATerm t)
{
  ATerm e_26 = t;
  int g_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm i_26 = t;
        int j_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_10 = NULL;
            t = eval_config_0_0(t);
            b_10 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), b_10);
            t = b_10;
            ;
            LocalPopChoice(j_26);
          }
        else
          {
            t = i_26;
          }
      }
      ;
      LocalPopChoice(g_26);
    }
  else
    {
      t = e_26;
      t = fetch_1_0(r_6, t);
    }
  t = c_147(t);
  return(t);
}
ATerm map_1_0 (ATerm e_127 (ATerm), ATerm t)
{
  ATerm y_36 (ATerm t)
  {
    ATerm k_26 = t;
    int l_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(l_26);
      }
    else
      {
        t = k_26;
        t = Cons_2_0(e_127, y_36, t);
      }
    return(t);
  }
  t = y_36(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm a_37 = NULL,b_37 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_37 = ATgetFirst((ATermList) t);
      b_37 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm f_37 = NULL,g_37 = NULL;
        t = b_37;
        t = g_0(t);
        f_37 = t;
        t = a_37;
        t = e_0(t);
        g_37 = t;
        t = b_37;
        {
          ATerm s_6 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(f_37), g_37);
            return(t);
          }
          t = reverse_acc_2_0(e_0, s_6, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_i_8;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm y_118 (ATerm), ATerm t)
{
  ATerm h_37 = NULL,i_37 = NULL,j_37 = NULL,k_37 = NULL;
  k_37 = t;
  if(match_cons(t, sym_Program_1))
    {
      i_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_37);
  h_37 = t;
  t = i_37;
  t = y_118(t);
  j_37 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, j_37), h_37);
  return(t);
}
ATerm t_6 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm u_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm v_6 (ATerm t)
{
  ATerm n_37 = NULL;
  n_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_37), term_m_26);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm n_26 = t;
  int o_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm p_26 = t;
        int q_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_10 = NULL;
            t = eval_config_0_0(t);
            w_10 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), w_10);
            t = w_10;
            ;
            LocalPopChoice(q_26);
          }
        else
          {
            t = p_26;
          }
      }
      ;
      LocalPopChoice(o_26);
    }
  else
    {
      t = n_26;
      t = fetch_1_0(t_6, t);
    }
  t = term_r_26;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, u_6, t);
  t = map_1_0(v_6, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm z_118 (ATerm), ATerm t)
{
  ATerm o_37 = NULL,r_37 = NULL,s_37 = NULL,t_37 = NULL;
  t_37 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      r_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_37);
  o_37 = t;
  t = r_37;
  t = z_118(t);
  s_37 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, s_37), o_37);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm x_37 = NULL,y_37 = NULL;
  x_37 = t;
  {
    ATerm u_26 = t;
    int v_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = x_37;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm w_26 = ATgetFirst((ATermList) t);
                ATerm y_26 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = x_37;
          }
        ;
        LocalPopChoice(v_26);
      }
    else
      {
        t = u_26;
        t = (ATerm) ATinsert(ATempty, x_37);
      }
    y_37 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), y_37);
    t = x_37;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm a_27 = t;
    int c_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_11 = NULL;
        t = eval_config_0_0(t);
        d_11 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), d_11);
        t = d_11;
        ;
        LocalPopChoice(c_27);
      }
    else
      {
        t = a_27;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm w_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_f_27;
  return(t);
}
ATerm y_6 (ATerm t)
{
  t = term_i_27;
  return(t);
}
ATerm z_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_7 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_n_27;
  return(t);
}
ATerm b_7 (ATerm t)
{
  t = term_o_27;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm p_27 = t;
  int q_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_6, x_6, y_6, t);
      ;
      LocalPopChoice(q_27);
    }
  else
    {
      t = p_27;
      t = Option_3_0(z_6, a_7, b_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm q_104 (ATerm), ATerm r_104 (ATerm), ATerm t)
{
  ATerm c_38 = NULL,d_38 = NULL,e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL;
  h_38 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_38 = ATgetFirst((ATermList) t);
      e_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_38);
  c_38 = t;
  t = d_38;
  t = q_104(t);
  f_38 = t;
  t = e_38;
  t = r_104(t);
  g_38 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(g_38), f_38), c_38);
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm m_38 = NULL;
  m_38 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), m_38);
  t = (ATerm) ATmakeAppl(sym_Program_1, m_38);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm f_149 (ATerm), ATerm t)
{
  ATerm l_38 = NULL;
  l_38 = t;
  {
    ATerm r_27 = t;
    int s_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_27;
        t = f_149(t);
        ;
        LocalPopChoice(s_27);
      }
    else
      {
        t = r_27;
      }
    t = l_38;
    {
      ATerm d_7 (ATerm t)
      {
        ATerm u_27 = t;
        int v_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_27 = t;
            int x_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(x_27);
              }
            else
              {
                t = w_27;
                t = f_149(t);
                t = Cons_2_0(_id, d_7, t);
              }
            ;
            LocalPopChoice(v_27);
          }
        else
          {
            t = u_27;
            {
              ATerm o_38 = NULL,p_38 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  o_38 = ATgetFirst((ATermList) t);
                  p_38 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(p_38), (ATerm) ATmakeAppl(sym_Undefined_1, o_38));
            }
          }
        return(t);
      }
      t = Cons_2_0(c_7, d_7, t);
    }
  }
  return(t);
}
ATerm f_7 (ATerm t)
{
  ATerm f_39 = NULL;
  f_39 = t;
  if(match_string(t, "--help"))
    {
      t = f_39;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = f_39;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = f_39;
        }
    }
  return(t);
}
ATerm h_7 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_y_27;
  return(t);
}
ATerm i_7 (ATerm t)
{
  t = term_j_28;
  return(t);
}
ATerm j_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm e_149 (ATerm), ATerm t)
{
  ATerm c_39 = NULL,d_39 = NULL,e_39 = NULL;
  c_39 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = c_39;
  {
    ATerm e_7 (ATerm t)
    {
      ATerm k_28 = t;
      int l_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_149(t);
          ;
          LocalPopChoice(l_28);
        }
      else
        {
          t = k_28;
          {
            ATerm m_28 = t;
            int n_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(f_7, h_7, i_7, t);
                ;
                LocalPopChoice(n_28);
              }
            else
              {
                t = m_28;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(e_7, t);
    {
      ATerm r_28 = t;
      int s_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_39 = NULL;
          k_39 = t;
          {
            ATerm v_28 = t;
            int x_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = k_39;
                {
                  ATerm a_29 = t;
                  int b_29 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm g_29 = t;
                        int h_29 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm b_13 = NULL;
                            t = eval_config_0_0(t);
                            b_13 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), b_13);
                            t = b_13;
                            ;
                            LocalPopChoice(h_29);
                          }
                        else
                          {
                            t = g_29;
                          }
                      }
                      ;
                      LocalPopChoice(b_29);
                    }
                  else
                    {
                      t = a_29;
                      t = fetch_1_0(j_7, t);
                    }
                  t = k_39;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(x_28);
              }
            else
              {
                t = v_28;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm m_29 = t;
                  int n_29 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm j_14 = NULL;
                      t = eval_config_0_0(t);
                      j_14 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), j_14);
                      t = j_14;
                      ;
                      LocalPopChoice(n_29);
                    }
                  else
                    {
                      t = m_29;
                    }
                  t = k_39;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(s_28);
        }
      else
        {
          t = r_28;
          {
            ATerm u_29 = t;
            int v_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_7 (ATerm t)
                {
                  ATerm l_7 (ATerm t)
                  {
                    if(((d_39 != NULL) && (d_39 != t)))
                      _fail(t);
                    else
                      d_39 = t;
                    return(t);
                  }
                  t = Undefined_1_0(l_7, t);
                  return(t);
                }
                t = fetch_1_0(k_7, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(d_39)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_x_25, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_39)), term_n_30));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(v_29);
              }
            else
              {
                t = u_29;
              }
          }
        }
      e_39 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = e_39;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm e_147 (ATerm), ATerm f_147 (ATerm), ATerm g_147 (ATerm), ATerm h_147 (ATerm), ATerm t)
{
  ATerm n_39 = NULL;
  t = parse_options_1_0(e_147, t);
  n_39 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), n_39);
  t = n_39;
  t = g_147(t);
  {
    ATerm o_30 = t;
    int p_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(f_147, t);
        ;
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
              t = h_147(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(r_30);
            }
          else
            {
              t = q_30;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm p_7 (ATerm t)
{
  t = if_verbose2_1_0(v_7, t);
  return(t);
}
ATerm s_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_7 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_s_30;
  return(t);
}
ATerm u_7 (ATerm t)
{
  t = term_t_30;
  return(t);
}
ATerm v_7 (ATerm t)
{
  ATerm o_39 = NULL,p_39 = NULL;
  o_39 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm v_30 = t;
    int w_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_14 = NULL;
        t = eval_config_0_0(t);
        r_14 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), r_14);
        t = r_14;
        ;
        LocalPopChoice(w_30);
      }
    else
      {
        t = v_30;
      }
    p_39 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, p_39));
    t = o_39;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm n_146 (ATerm), ATerm o_146 (ATerm), ATerm p_146 (ATerm), ATerm t)
{
  ATerm o_7 (ATerm t)
  {
    ATerm z_30 = t;
    int e_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_146(t);
        ;
        LocalPopChoice(e_31);
      }
    else
      {
        t = z_30;
        {
          ATerm f_31 = t;
          int g_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(g_31);
            }
          else
            {
              t = f_31;
              {
                ATerm h_31 = t;
                int u_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(u_31);
                  }
                else
                  {
                    t = h_31;
                    {
                      ATerm v_31 = t;
                      int w_31 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(s_7, t_7, u_7, t);
                          ;
                          LocalPopChoice(w_31);
                        }
                      else
                        {
                          t = v_31;
                          {
                            ATerm x_31 = t;
                            int z_31 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(z_31);
                              }
                            else
                              {
                                t = x_31;
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
  ATerm r_7 (ATerm t)
  {
    ATerm q_39 = NULL,r_39 = NULL,x_14 = NULL;
    q_39 = t;
    {
      ATerm a_32 = t;
      int d_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_7 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((r_39 != NULL) && (r_39 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  r_39 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(w_7, t);
          ;
          LocalPopChoice(d_32);
        }
      else
        {
          t = a_32;
          t = term_e_32;
          r_39 = t;
        }
      t = not_null(r_39);
      t = ReadFromFile_0_0(t);
      x_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_39, x_14);
      t = apply_strategy_1_0(n_146, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(o_7, p_146, p_7, r_7, t);
  return(t);
}
ATerm x_7 (ATerm t)
{
  t = _2_0(_id, z_7, t);
  return(t);
}
ATerm z_7 (ATerm t)
{
  t = apply_to_bodies_1_0(a_8, t);
  return(t);
}
ATerm a_8 (ATerm t)
{
  t = downup_1_0(b_8, t);
  t = downup_1_0(d_8, t);
  t = topdown_1_0(h_8, t);
  return(t);
}
ATerm b_8 (ATerm t)
{
  t = repeat_1_0(c_8, t);
  return(t);
}
ATerm c_8 (ATerm t)
{
  ATerm f_32 = t;
  int g_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Simplify_0_0(t);
      ;
      LocalPopChoice(g_32);
    }
  else
    {
      t = f_32;
      {
        ATerm h_32 = t;
        int i_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_39 = NULL,y_39 = NULL,z_39 = NULL,a_40 = NULL;
            if(match_cons(t, sym_Seq_2))
              {
                x_39 = ATgetArgument(t, 0);
                y_39 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = y_39;
            if(match_cons(t, sym_Let_2))
              {
                z_39 = ATgetArgument(t, 0);
                a_40 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Let_2, z_39, (ATerm) ATmakeAppl(sym_Seq_2, x_39, a_40));
            ;
            LocalPopChoice(i_32);
          }
        else
          {
            t = h_32;
            {
              ATerm k_32 = t;
              int o_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = FuseScope_0_0(t);
                  ;
                  LocalPopChoice(o_32);
                }
              else
                {
                  t = k_32;
                  {
                    ATerm r_32 = t;
                    int s_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = WhereSavesCurrentTerm_0_0(t);
                        ;
                        LocalPopChoice(s_32);
                      }
                    else
                      {
                        t = r_32;
                        {
                          ATerm t_32 = t;
                          int u_32 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = TestSavesCurrentTerm_0_0(t);
                              ;
                              LocalPopChoice(u_32);
                            }
                          else
                            {
                              t = t_32;
                              t = WidenScope_0_0(t);
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
ATerm d_8 (ATerm t)
{
  t = repeat_1_0(e_8, t);
  return(t);
}
ATerm e_8 (ATerm t)
{
  ATerm v_32 = t;
  int w_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Simplify_0_0(t);
      ;
      LocalPopChoice(w_32);
    }
  else
    {
      t = v_32;
      {
        ATerm x_32 = t;
        int y_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_40 = NULL,g_40 = NULL,h_40 = NULL,i_40 = NULL;
            if(match_cons(t, sym_Seq_2))
              {
                f_40 = ATgetArgument(t, 0);
                g_40 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = g_40;
            if(match_cons(t, sym_Let_2))
              {
                h_40 = ATgetArgument(t, 0);
                i_40 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Let_2, h_40, (ATerm) ATmakeAppl(sym_Seq_2, f_40, i_40));
            ;
            LocalPopChoice(y_32);
          }
        else
          {
            t = x_32;
            {
              ATerm z_32 = t;
              int b_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = FuseScope_0_0(t);
                  ;
                  LocalPopChoice(b_33);
                }
              else
                {
                  t = z_32;
                  {
                    ATerm c_33 = t;
                    int d_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = WhereSavesCurrentTerm_0_0(t);
                        ;
                        LocalPopChoice(d_33);
                      }
                    else
                      {
                        t = c_33;
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
ATerm h_8 (ATerm t)
{
  ATerm h_33 = t;
  int i_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CleanupScope_0_0(t);
      {
        ATerm j_33 = t;
        int m_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FuseScope_0_0(t);
            ;
            LocalPopChoice(m_33);
          }
        else
          {
            t = j_33;
          }
      }
      ;
      LocalPopChoice(i_33);
    }
  else
    {
      t = h_33;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(x_7, _fail, default_usage_0_0, t);
  return(t);
}
