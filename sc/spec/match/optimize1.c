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
ATerm term_r_31;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_k_30;
ATerm term_g_28;
ATerm term_f_28;
ATerm term_k_27;
ATerm term_w_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_j_26;
ATerm term_y_25;
ATerm term_k_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_e_24;
ATerm term_v_23;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_k_21;
ATerm term_g_20;
ATerm term_w_19;
ATerm term_u_12;
ATerm term_l_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_e_9;
ATerm term_c_8;
void init_constant_terms (void)
{
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_Op_2, term_b_12, (ATerm) ATempty);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_ConstType_1, term_c_12);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym_Verbose_1, term_e_23);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(sym__3, term_q_26, term_r_26, term_c_8);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm TestSavesCurrentTerm_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm WhereSavesCurrentTerm_0_0 (ATerm);
ATerm FuseScope_0_0 (ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm q_0 (ATerm);
ATerm r_0 (ATerm);
ATerm w_0 (ATerm);
ATerm x_0 (ATerm);
ATerm BuildMatchFusion_0_0 (ATerm);
ATerm MisMatch_0_0 (ATerm);
ATerm u_9 (ATerm p_8, ATerm q_8, ATerm r_8, ATerm);
ATerm BuildMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm i_122 (ATerm), ATerm);
ATerm LetHoist_0_0 (ATerm);
ATerm Idempotency_0_0 (ATerm);
ATerm AssociateR_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm c_1 (ATerm);
ATerm f_1 (ATerm);
ATerm g_1 (ATerm);
ATerm h_1 (ATerm);
ATerm i_1 (ATerm);
ATerm k_1 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm m_1 (ATerm);
ATerm ElimFail_0_0 (ATerm);
ATerm ElimId_0_0 (ATerm);
ATerm Simplify_0_0 (ATerm);
ATerm repeat_1_0 (ATerm p_137 (ATerm), ATerm);
ATerm downup_1_0 (ATerm g_121 (ATerm), ATerm);
ATerm diff_1_0 (ATerm d_129 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm q_125 (ATerm), ATerm r_125 (ATerm), ATerm s_125 (ATerm), ATerm t_125 (ATerm), ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm v_1 (ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm while_not_2_0 (ATerm e_138 (ATerm), ATerm f_138 (ATerm), ATerm);
ATerm for_3_0 (ATerm h_138 (ATerm), ATerm i_138 (ATerm), ATerm j_138 (ATerm), ATerm);
ATerm x_1 (ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm isect_1_0 (ATerm b_129 (ATerm), ATerm);
ATerm DynamicRules_1_0 (ATerm k_108 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm b_108 (ATerm), ATerm c_108 (ATerm), ATerm d_108 (ATerm), ATerm e_108 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm n_109 (ATerm), ATerm o_109 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm f_120 (ATerm), ATerm g_120 (ATerm), ATerm h_120 (ATerm), ATerm);
ATerm i_2 (ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm j_2 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm union_1_0 (ATerm h_129 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm w_131 (ATerm), ATerm x_131 (ATerm), ATerm y_131 (ATerm), ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm z_2 (ATerm);
ATerm f_3 (ATerm);
ATerm h_3 (ATerm);
ATerm w_2 (ATerm);
ATerm g_3 (ATerm);
ATerm free_vars_3_0 (ATerm y_135 (ATerm), ATerm z_135 (ATerm), ATerm a_136 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm o_3 (ATerm);
ATerm s_3 (ATerm);
ATerm u_3 (ATerm);
ATerm w_3 (ATerm);
ATerm q_3 (ATerm);
ATerm NarrowScope_0_0 (ATerm);
ATerm topdown_1_0 (ATerm e_121 (ATerm), ATerm);
ATerm WidenScope_0_0 (ATerm);
ATerm SDefT_4_0 (ATerm v_111 (ATerm), ATerm w_111 (ATerm), ATerm x_111 (ATerm), ATerm y_111 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm s_111 (ATerm), ATerm t_111 (ATerm), ATerm u_111 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm v_104 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm a_105 (ATerm), ATerm);
ATerm f_4 (ATerm);
ATerm apply_to_bodies_1_0 (ATerm f_119 (ATerm), ATerm);
ATerm _2_0 (ATerm c_100 (ATerm), ATerm d_100 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm d_143 (ATerm), ATerm);
ATerm s_4 (ATerm);
ATerm v_4 (ATerm);
ATerm x_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm w_4 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm f_146 (ATerm), ATerm);
ATerm t_29 (ATerm n_29, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm q_127 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm w_127 (ATerm), ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm e_5 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm h_144 (ATerm), ATerm);
ATerm f_5 (ATerm);
ATerm g_5 (ATerm);
ATerm k_5 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm u_5 (ATerm);
ATerm v_5 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm z_5 (ATerm);
ATerm a_6 (ATerm);
ATerm b_6 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm u_131 (ATerm), ATerm v_131 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm c_6 (ATerm);
ATerm d_6 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm g_144 (ATerm), ATerm);
ATerm e_6 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm d_147 (ATerm), ATerm);
ATerm map_1_0 (ATerm f_127 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm z_118 (ATerm), ATerm);
ATerm j_6 (ATerm);
ATerm k_6 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm a_119 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm l_6 (ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm q_6 (ATerm);
ATerm r_6 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm r_104 (ATerm), ATerm s_104 (ATerm), ATerm);
ATerm s_6 (ATerm);
ATerm parse_options_p__1_0 (ATerm g_149 (ATerm), ATerm);
ATerm a_7 (ATerm);
ATerm b_7 (ATerm);
ATerm c_7 (ATerm);
ATerm d_7 (ATerm);
ATerm parse_options_1_0 (ATerm f_149 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm f_147 (ATerm), ATerm g_147 (ATerm), ATerm h_147 (ATerm), ATerm i_147 (ATerm), ATerm);
ATerm j_7 (ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm h_7 (ATerm);
ATerm iowrap_3_0 (ATerm o_146 (ATerm), ATerm p_146 (ATerm), ATerm q_146 (ATerm), ATerm);
ATerm u_7 (ATerm);
ATerm w_7 (ATerm);
ATerm y_7 (ATerm);
ATerm z_7 (ATerm);
ATerm b_8 (ATerm);
ATerm a_8 (ATerm);
ATerm t_7 (ATerm);
ATerm v_7 (ATerm);
ATerm x_7 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL;
  b_0 = t;
  t = term_c_8;
  t = whoami_0_0(t);
  f_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), f_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = b_0;
  return(t);
}
ATerm TestSavesCurrentTerm_0_0 (ATerm t)
{
  ATerm h_0 = NULL,m_0 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      h_0 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = new_0_0(t);
  m_0 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, m_0), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, m_0)), (ATerm) ATmakeAppl(sym_Seq_2, h_0, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, m_0)))));
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm WhereSavesCurrentTerm_0_0 (ATerm t)
{
  ATerm o_0 = NULL,p_0 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      o_0 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = new_0_0(t);
  p_0 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, p_0), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, p_0)), (ATerm) ATmakeAppl(sym_Seq_2, o_0, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, p_0)))));
  return(t);
}
ATerm FuseScope_0_0 (ATerm t)
{
  ATerm s_0 = NULL,t_0 = NULL,u_0 = NULL,v_0 = NULL;
  if(match_cons(t, sym_Scope_2))
    {
      s_0 = ATgetArgument(t, 0);
      {
        ATerm d_8 = ATgetArgument(t, 1);
        if(match_cons(d_8, sym_Scope_2))
          {
            t_0 = ATgetArgument(d_8, 0);
            u_0 = ATgetArgument(d_8, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_0, t_0);
  {
    ATerm e_8 = t;
    int f_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_8 = ATgetArgument(t, 0);
            ATerm h_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_0;
        {
          ATerm j_0 (ATerm t)
          {
            t = t_0;
            return(t);
          }
          t = at_end_1_0(j_0, t);
        }
        ;
        LocalPopChoice(f_8);
      }
    else
      {
        t = e_8;
        {
          ATerm z_0 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, s_0, t_0));
          if(match_cons(t, sym__2))
            {
              ATerm i_8 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) i_8) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              z_0 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_0;
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
  ATerm d_1 = NULL,e_1 = NULL,j_1 = NULL,l_1 = NULL,q_1 = NULL,u_1 = NULL,a_2 = NULL;
  if(match_cons(t, sym__2))
    {
      j_1 = ATgetArgument(t, 0);
      l_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_1;
  if(match_cons(t, sym_Build_1))
    {
      ATerm j_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_1;
  if(match_cons(t, sym_Where_1))
    {
      q_1 = ATgetArgument(t, 0);
      t = q_1;
      if(match_cons(t, sym_Prim_2))
        {
          d_1 = ATgetArgument(t, 0);
          e_1 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(t, sym_Prim_2))
        {
          q_1 = ATgetArgument(t, 0);
          u_1 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_Prim_2, q_1, u_1);
        }
      else
        {
          if(match_cons(t, sym_PrimT_3))
            {
              q_1 = ATgetArgument(t, 0);
              u_1 = ATgetArgument(t, 1);
              a_2 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
        }
    }
  return(t);
}
ATerm q_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_8 = ATgetArgument(t, 0);
      if(((ATgetType(k_8) != AT_LIST) || !(ATisEmpty(k_8))))
        _fail(t);
      {
        ATerm l_8 = ATgetArgument(t, 1);
        if(((ATgetType(l_8) != AT_LIST) || !(ATisEmpty(l_8))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_0 (ATerm t)
{
  ATerm y_2 = NULL,a_3 = NULL,b_3 = NULL,c_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_8 = ATgetArgument(t, 0);
      if(((ATgetType(m_8) == AT_LIST) && !(ATisEmpty(m_8))))
        {
          y_2 = ATgetFirst((ATermList) m_8);
          b_3 = (ATerm) ATgetNext((ATermList) m_8);
        }
      else
        _fail(t);
      {
        ATerm n_8 = ATgetArgument(t, 1);
        if(((ATgetType(n_8) == AT_LIST) && !(ATisEmpty(n_8))))
          {
            a_3 = ATgetFirst((ATermList) n_8);
            c_3 = (ATerm) ATgetNext((ATermList) n_8);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_2, a_3), (ATerm) ATmakeAppl(sym__2, b_3, c_3));
  return(t);
}
ATerm w_0 (ATerm t)
{
  ATerm d_3 = NULL,e_3 = NULL;
  if(match_cons(t, sym__2))
    {
      d_3 = ATgetArgument(t, 0);
      e_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_3), d_3);
  return(t);
}
ATerm x_0 (ATerm t)
{
  ATerm j_3 = NULL,l_3 = NULL;
  if(match_cons(t, sym__2))
    {
      j_3 = ATgetArgument(t, 0);
      l_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, j_3), (ATerm) ATmakeAppl(sym_Match_1, l_3));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm s_2 = NULL,u_2 = NULL,v_2 = NULL,x_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_8 = ATgetArgument(t, 0);
      if(match_cons(o_8, sym_Build_1))
        {
          ATerm t_8 = ATgetArgument(o_8, 0);
          if(match_cons(t_8, sym_Op_2))
            {
              u_2 = ATgetArgument(t_8, 0);
              s_2 = ATgetArgument(t_8, 1);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm s_8 = ATgetArgument(t, 1);
        if(match_cons(s_8, sym_Match_1))
          {
            ATerm u_8 = ATgetArgument(s_8, 0);
            if(match_cons(u_8, sym_Op_2))
              {
                if((u_2 != ATgetArgument(u_8, 0)))
                  {
                    _fail(ATgetArgument(u_8, 0));
                  }
                v_2 = ATgetArgument(u_8, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, s_2, v_2);
  t = genzip_4_0(q_0, r_0, w_0, x_0, t);
  x_2 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, x_2), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, u_2, s_2)));
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm m_3 = NULL,n_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_8 = ATgetArgument(t, 0);
      if(match_cons(v_8, sym_Build_1))
        {
          ATerm x_8 = ATgetArgument(v_8, 0);
          if(match_cons(x_8, sym_Op_2))
            {
              m_3 = ATgetArgument(x_8, 0);
              {
                ATerm y_8 = ATgetArgument(x_8, 1);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm w_8 = ATgetArgument(t, 1);
        if(match_cons(w_8, sym_Match_1))
          {
            ATerm b_9 = ATgetArgument(w_8, 0);
            if(match_cons(b_9, sym_Op_2))
              {
                n_3 = ATgetArgument(b_9, 0);
                {
                  ATerm c_9 = ATgetArgument(b_9, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, m_3, n_3);
  {
    ATerm d_9 = t;
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
        t = d_9;
      }
    t = term_e_9;
  }
  return(t);
}
ATerm u_9 (ATerm p_8, ATerm q_8, ATerm r_8, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, p_8, q_8);
  {
    ATerm g_9 = t;
    int i_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = MisMatch_0_0(t);
        ;
        LocalPopChoice(i_9);
      }
    else
      {
        t = g_9;
        {
          ATerm j_9 = t;
          int k_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = BuildMatchFusion_0_0(t);
              ;
              LocalPopChoice(k_9);
            }
          else
            {
              t = j_9;
              {
                ATerm l_9 = t;
                int m_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm z_8 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        ATerm t_9 = ATgetArgument(t, 0);
                        ATerm w_9 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = p_8;
                    if(match_cons(t, sym_Build_1))
                      {
                        ATerm z_9 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = q_8;
                    if(match_cons(t, sym_Build_1))
                      {
                        z_8 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    ;
                    LocalPopChoice(m_9);
                  }
                else
                  {
                    t = l_9;
                    {
                      ATerm a_10 = t;
                      int b_10 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = BuildPrim_0_0(t);
                          ;
                          LocalPopChoice(b_10);
                        }
                      else
                        {
                          t = a_10;
                          {
                            ATerm f_9 = NULL,h_9 = NULL;
                            if(match_cons(t, sym__2))
                              {
                                ATerm c_10 = ATgetArgument(t, 0);
                                ATerm d_10 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = p_8;
                            if(match_cons(t, sym_Match_1))
                              {
                                f_9 = ATgetArgument(t, 0);
                                t = q_8;
                                if(match_cons(t, sym_Match_1))
                                  {
                                    h_9 = ATgetArgument(t, 0);
                                    t = h_9;
                                    if((f_9 != t))
                                      {
                                        _fail(t);
                                      }
                                    t = (ATerm) ATmakeAppl(sym_Match_1, f_9);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        h_9 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = h_9;
                                    if((f_9 != t))
                                      {
                                        _fail(t);
                                      }
                                    t = (ATerm) ATmakeAppl(sym_Match_1, f_9);
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Build_1))
                                  {
                                    f_9 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = q_8;
                                if(match_cons(t, sym_Match_1))
                                  {
                                    h_9 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = h_9;
                                if((f_9 != t))
                                  {
                                    _fail(t);
                                  }
                                t = (ATerm) ATmakeAppl(sym_Build_1, f_9);
                              }
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
  ATerm n_9 = NULL,p_9 = NULL,q_9 = NULL,r_9 = NULL,s_9 = NULL;
  q_9 = t;
  if(match_cons(t, sym_Seq_2))
    {
      r_9 = ATgetArgument(t, 0);
      s_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_9;
  if(match_cons(t, sym_Seq_2))
    {
      n_9 = ATgetArgument(t, 0);
      p_9 = ATgetArgument(t, 1);
      {
        ATerm e_10 = t;
        int f_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_1 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, r_9, n_9);
            {
              ATerm g_10 = t;
              int h_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = MisMatch_0_0(t);
                  ;
                  LocalPopChoice(h_10);
                }
              else
                {
                  t = g_10;
                  {
                    ATerm i_10 = t;
                    int l_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = BuildMatchFusion_0_0(t);
                        ;
                        LocalPopChoice(l_10);
                      }
                    else
                      {
                        t = i_10;
                        {
                          ATerm m_10 = t;
                          int o_10 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm t_1 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  ATerm s_10 = ATgetArgument(t, 0);
                                  ATerm v_10 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = r_9;
                              if(match_cons(t, sym_Build_1))
                                {
                                  ATerm x_10 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = n_9;
                              if(match_cons(t, sym_Build_1))
                                {
                                  t_1 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              ;
                              LocalPopChoice(o_10);
                            }
                          else
                            {
                              t = m_10;
                              {
                                ATerm y_10 = t;
                                int z_10 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildPrim_0_0(t);
                                    ;
                                    LocalPopChoice(z_10);
                                  }
                                else
                                  {
                                    t = y_10;
                                    {
                                      ATerm y_1 = NULL,c_2 = NULL;
                                      if(match_cons(t, sym__2))
                                        {
                                          ATerm a_11 = ATgetArgument(t, 0);
                                          ATerm b_11 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = r_9;
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          y_1 = ATgetArgument(t, 0);
                                          t = n_9;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              c_2 = ATgetArgument(t, 0);
                                              t = c_2;
                                              if((y_1 != t))
                                                {
                                                  _fail(t);
                                                }
                                              t = (ATerm) ATmakeAppl(sym_Match_1, y_1);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Build_1))
                                                {
                                                  c_2 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = c_2;
                                              if((y_1 != t))
                                                {
                                                  _fail(t);
                                                }
                                              t = (ATerm) ATmakeAppl(sym_Match_1, y_1);
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_Build_1))
                                            {
                                              y_1 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = n_9;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              c_2 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = c_2;
                                          if((y_1 != t))
                                            {
                                              _fail(t);
                                            }
                                          t = (ATerm) ATmakeAppl(sym_Build_1, y_1);
                                        }
                                    }
                                  }
                              }
                            }
                        }
                      }
                  }
                }
              n_1 = t;
              t = (ATerm) ATmakeAppl(sym_Seq_2, n_1, p_9);
            }
            ;
            LocalPopChoice(f_10);
          }
        else
          {
            t = e_10;
            t = u_9(r_9, s_9, q_9, t);
          }
      }
    }
  else
    {
      t = u_9(r_9, s_9, q_9, t);
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm i_122 (ATerm), ATerm t)
{
  ATerm v_9 (ATerm t)
  {
    ATerm c_11 = t;
    int d_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_122(t);
        ;
        LocalPopChoice(d_11);
      }
    else
      {
        t = c_11;
        t = SRTS_one(v_9, t);
      }
    return(t);
  }
  t = v_9(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm x_9 = NULL,y_9 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      ATerm e_11 = ATgetArgument(t, 0);
      if(((ATgetType(e_11) == AT_LIST) && !(ATisEmpty(e_11))))
        {
          ATerm g_11 = ATgetFirst((ATermList) e_11);
          if(match_cons(g_11, sym_SDefT_4))
            {
              y_9 = ATgetArgument(g_11, 0);
              {
                ATerm i_11 = ATgetArgument(g_11, 1);
                if(((ATgetType(i_11) != AT_LIST) || !(ATisEmpty(i_11))))
                  _fail(t);
              }
              {
                ATerm j_11 = ATgetArgument(g_11, 2);
                if(((ATgetType(j_11) != AT_LIST) || !(ATisEmpty(j_11))))
                  _fail(t);
              }
              x_9 = ATgetArgument(g_11, 3);
            }
          else
            _fail(t);
          {
            ATerm h_11 = (ATerm) ATgetNext((ATermList) e_11);
            if(((ATgetType(h_11) != AT_LIST) || !(ATisEmpty(h_11))))
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm f_11 = ATgetArgument(t, 1);
        if(match_cons(f_11, sym_CallT_3))
          {
            ATerm l_11 = ATgetArgument(f_11, 0);
            if(match_cons(l_11, sym_SVar_1))
              {
                if((y_9 != ATgetArgument(l_11, 0)))
                  {
                    _fail(ATgetArgument(l_11, 0));
                  }
              }
            else
              _fail(t);
            {
              ATerm m_11 = ATgetArgument(f_11, 1);
              if(((ATgetType(m_11) != AT_LIST) || !(ATisEmpty(m_11))))
                _fail(t);
            }
            {
              ATerm n_11 = ATgetArgument(f_11, 2);
              if(((ATgetType(n_11) != AT_LIST) || !(ATisEmpty(n_11))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = x_9;
  {
    ATerm s_11 = t;
    if((PushChoice() == 0))
      {
        ATerm y_0 (ATerm t)
        {
          if(match_cons(t, sym_CallT_3))
            {
              ATerm t_11 = ATgetArgument(t, 0);
              if(match_cons(t_11, sym_SVar_1))
                {
                  if((y_9 != ATgetArgument(t_11, 0)))
                    {
                      _fail(ATgetArgument(t_11, 0));
                    }
                }
              else
                _fail(t);
              {
                ATerm u_11 = ATgetArgument(t, 1);
                if(((ATgetType(u_11) != AT_LIST) || !(ATisEmpty(u_11))))
                  _fail(t);
              }
              {
                ATerm v_11 = ATgetArgument(t, 2);
                if(((ATgetType(v_11) != AT_LIST) || !(ATisEmpty(v_11))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(y_0, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_11;
      }
    t = x_9;
  }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm j_10 = NULL,k_10 = NULL,n_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL,t_10 = NULL,u_10 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      t_10 = ATgetArgument(t, 0);
      t = t_10;
      if(match_cons(t, sym_Seq_2))
        {
          r_10 = ATgetArgument(t, 0);
          k_10 = ATgetArgument(t, 1);
          t = r_10;
          if(match_cons(t, sym_Where_1))
            {
              j_10 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = k_10;
          if(match_cons(t, sym_Seq_2))
            {
              n_10 = ATgetArgument(t, 0);
              q_10 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = n_10;
          if(match_cons(t, sym_Build_1))
            {
              p_10 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, j_10, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, p_10), q_10)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              r_10 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          t_10 = ATgetArgument(t, 0);
          t = t_10;
          if(match_cons(t, sym_Test_1))
            {
              r_10 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              t_10 = ATgetArgument(t, 0);
              t = t_10;
              if(match_cons(t, sym_Not_1))
                {
                  r_10 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, r_10);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  t_10 = ATgetArgument(t, 0);
                  u_10 = ATgetArgument(t, 1);
                  t = u_10;
                  if((t_10 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      t_10 = ATgetArgument(t, 0);
                      u_10 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = u_10;
                  if((t_10 != t))
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
  ATerm o_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      o_11 = ATgetArgument(t, 0);
      r_11 = ATgetArgument(t, 1);
      t = o_11;
      if(match_cons(t, sym_LChoice_2))
        {
          p_11 = ATgetArgument(t, 0);
          q_11 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, p_11, (ATerm) ATmakeAppl(sym_LChoice_2, q_11, r_11));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          o_11 = ATgetArgument(t, 0);
          r_11 = ATgetArgument(t, 1);
          t = o_11;
          if(match_cons(t, sym_Seq_2))
            {
              p_11 = ATgetArgument(t, 0);
              q_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, p_11, (ATerm) ATmakeAppl(sym_Seq_2, q_11, r_11));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              o_11 = ATgetArgument(t, 0);
              r_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = o_11;
          if(match_cons(t, sym_Choice_2))
            {
              p_11 = ATgetArgument(t, 0);
              q_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, p_11, (ATerm) ATmakeAppl(sym_Choice_2, q_11, r_11));
        }
    }
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm w_11 = t;
  int y_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(n_0, _id, t);
      {
        ATerm a_1 (ATerm t)
        {
          ATerm z_11 = t;
          int a_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(n_0, t);
              ;
              LocalPopChoice(a_12);
            }
          else
            {
              t = z_11;
            }
          return(t);
        }
        t = Cons_2_0(_id, a_1, t);
      }
      ;
      LocalPopChoice(y_11);
    }
  else
    {
      t = w_11;
      {
        ATerm b_1 (ATerm t)
        {
          t = map1_1_0(n_0, t);
          return(t);
        }
        t = Cons_2_0(_id, b_1, t);
      }
    }
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm q_13 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      q_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, q_13, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_d_12), term_d_12));
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm e_12 = t;
  int g_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_13 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, s_13, term_d_12);
      ;
      LocalPopChoice(g_12);
    }
  else
    {
      t = e_12;
    }
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm d_14 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      d_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, d_14, term_d_12);
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm h_12 = t;
  int i_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_14 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, g_14, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_d_12), term_d_12));
      ;
      LocalPopChoice(i_12);
    }
  else
    {
      t = h_12;
    }
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm t_14 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      t_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, t_14, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_d_12), term_d_12));
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm j_12 = t;
  int k_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_14 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, x_14, term_d_12);
      ;
      LocalPopChoice(k_12);
    }
  else
    {
      t = j_12;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL,r_12 = NULL,s_12 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      r_12 = ATgetArgument(t, 0);
      s_12 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, r_12, s_12);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          r_12 = ATgetArgument(t, 0);
          t = r_12;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              m_12 = ATgetFirst((ATermList) t);
              n_12 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, m_12, (ATerm) ATmakeAppl(sym_LChoices_1, n_12));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_e_9;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              r_12 = ATgetArgument(t, 0);
              t = r_12;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  m_12 = ATgetFirst((ATermList) t);
                  n_12 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, m_12, (ATerm) ATmakeAppl(sym_Choices_1, n_12));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_e_9;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  r_12 = ATgetArgument(t, 0);
                  t = r_12;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      m_12 = ATgetFirst((ATermList) t);
                      n_12 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_12, (ATerm) ATmakeAppl(sym_Seqs_1, n_12));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_l_12;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      r_12 = ATgetArgument(t, 0);
                      s_12 = ATgetArgument(t, 1);
                      p_12 = ATgetArgument(t, 2);
                      o_12 = ATgetArgument(t, 3);
                      {
                        ATerm o_13 = NULL,p_13 = NULL;
                        t = s_12;
                        t = map1_1_0(c_1, t);
                        o_13 = t;
                        t = p_12;
                        t = map1_1_0(f_1, t);
                        p_13 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, r_12, o_13, p_13, o_12);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          r_12 = ATgetArgument(t, 0);
                          s_12 = ATgetArgument(t, 1);
                          p_12 = ATgetArgument(t, 2);
                          o_12 = ATgetArgument(t, 3);
                          {
                            ATerm q_12 = t;
                            int t_12 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm z_13 = NULL,b_14 = NULL;
                                t = p_12;
                                t = map1_1_0(g_1, t);
                                z_13 = t;
                                t = s_12;
                                t = map_1_0(h_1, t);
                                b_14 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, r_12, b_14, z_13, o_12);
                                ;
                                LocalPopChoice(t_12);
                              }
                            else
                              {
                                t = q_12;
                                {
                                  ATerm q_14 = NULL,s_14 = NULL;
                                  t = s_12;
                                  t = map1_1_0(i_1, t);
                                  q_14 = t;
                                  t = p_12;
                                  t = map_1_0(k_1, t);
                                  s_14 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, r_12, q_14, s_14, o_12);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              r_12 = ATgetArgument(t, 0);
                              s_12 = ATgetArgument(t, 1);
                              p_12 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, s_12, (ATerm) ATmakeAppl(sym_Op_2, term_u_12, (ATerm) ATinsert(ATinsert(ATempty, p_12), r_12)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  r_12 = ATgetArgument(t, 0);
                                  s_12 = ATgetArgument(t, 1);
                                  p_12 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, p_12)), r_12), (ATerm) ATmakeAppl(sym_Build_1, s_12)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      r_12 = ATgetArgument(t, 0);
                                      s_12 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, r_12, (ATerm) ATmakeAppl(sym_Match_1, s_12));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          r_12 = ATgetArgument(t, 0);
                                          s_12 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, r_12), s_12);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              r_12 = ATgetArgument(t, 0);
                                              s_12 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, s_12), r_12);
                                        }
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
ATerm m_1 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm p_16 = NULL,r_16 = NULL,t_16 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      p_16 = ATgetArgument(t, 0);
      t = p_16;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          p_16 = ATgetArgument(t, 0);
          t = p_16;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_l_12;
        }
      else
        {
          ATerm v_12 = t;
          int w_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_Seq_2))
                {
                  p_16 = ATgetArgument(t, 0);
                  {
                    ATerm x_12 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(w_12);
              t = p_16;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
            }
          else
            {
              t = v_12;
              {
                ATerm y_12 = t;
                int z_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Scope_2))
                      {
                        ATerm a_13 = ATgetArgument(t, 0);
                        r_16 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(z_12);
                    t = r_16;
                    if(!(match_cons(t, sym_Fail_0)))
                      _fail(t);
                  }
                else
                  {
                    t = y_12;
                    {
                      ATerm b_13 = t;
                      int c_13 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_Rec_2))
                            {
                              ATerm d_13 = ATgetArgument(t, 0);
                              r_16 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(c_13);
                          t = r_16;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                        }
                      else
                        {
                          t = b_13;
                          if(match_cons(t, sym_Some_1))
                            {
                              p_16 = ATgetArgument(t, 0);
                              t = p_16;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                            }
                          else
                            {
                              if(match_cons(t, sym_One_1))
                                {
                                  p_16 = ATgetArgument(t, 0);
                                  t = p_16;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                }
                              else
                                {
                                  ATerm e_13 = t;
                                  int f_13 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_Path_2))
                                        {
                                          ATerm g_13 = ATgetArgument(t, 0);
                                          r_16 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(f_13);
                                      t = r_16;
                                      if(!(match_cons(t, sym_Fail_0)))
                                        _fail(t);
                                    }
                                  else
                                    {
                                      t = e_13;
                                      {
                                        ATerm h_13 = t;
                                        int i_13 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            if(match_cons(t, sym_Cong_2))
                                              {
                                                ATerm j_13 = ATgetArgument(t, 0);
                                                r_16 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            LocalPopChoice(i_13);
                                            t = r_16;
                                            t = fetch_1_0(m_1, t);
                                            t = term_e_9;
                                          }
                                        else
                                          {
                                            t = h_13;
                                            if(match_cons(t, sym_Choice_2))
                                              {
                                                p_16 = ATgetArgument(t, 0);
                                                r_16 = ATgetArgument(t, 1);
                                                t = r_16;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    t = p_16;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm k_13 = t;
                                                        int l_13 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = r_16;
                                                            ;
                                                            LocalPopChoice(l_13);
                                                          }
                                                        else
                                                          {
                                                            t = k_13;
                                                            t = p_16;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = p_16;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = p_16;
                                                    if(!(match_cons(t, sym_Fail_0)))
                                                      _fail(t);
                                                    t = r_16;
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_LChoice_2))
                                                  {
                                                    p_16 = ATgetArgument(t, 0);
                                                    r_16 = ATgetArgument(t, 1);
                                                    t = r_16;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        t = p_16;
                                                        if(match_cons(t, sym_Fail_0))
                                                          {
                                                            ATerm m_13 = t;
                                                            int n_13 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = r_16;
                                                                ;
                                                                LocalPopChoice(n_13);
                                                              }
                                                            else
                                                              {
                                                                t = m_13;
                                                                t = p_16;
                                                              }
                                                          }
                                                        else
                                                          {
                                                            t = p_16;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = p_16;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = r_16;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Where_1))
                                                      {
                                                        p_16 = ATgetArgument(t, 0);
                                                        t = p_16;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_GuardedLChoice_3))
                                                          {
                                                            p_16 = ATgetArgument(t, 0);
                                                            r_16 = ATgetArgument(t, 1);
                                                            t_16 = ATgetArgument(t, 2);
                                                          }
                                                        else
                                                          _fail(t);
                                                        t = t_16;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, p_16, r_16);
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                    }
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
  ATerm s_17 = NULL,u_17 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      u_17 = ATgetArgument(t, 0);
      t = u_17;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          u_17 = ATgetArgument(t, 0);
          t = u_17;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_e_9;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              u_17 = ATgetArgument(t, 0);
              s_17 = ATgetArgument(t, 1);
              t = s_17;
              if(match_cons(t, sym_Id_0))
                {
                  t = u_17;
                  if(match_cons(t, sym_Id_0))
                    {
                      ATerm r_13 = t;
                      int t_13 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = s_17;
                          ;
                          LocalPopChoice(t_13);
                        }
                      else
                        {
                          t = r_13;
                          t = u_17;
                        }
                    }
                  else
                    {
                      t = u_17;
                    }
                }
              else
                {
                  t = u_17;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = s_17;
                }
            }
          else
            {
              ATerm u_13 = t;
              int v_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      u_17 = ATgetArgument(t, 0);
                      {
                        ATerm w_13 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(v_13);
                  t = u_17;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                }
              else
                {
                  t = u_13;
                  {
                    ATerm x_13 = t;
                    int y_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            ATerm a_14 = ATgetArgument(t, 0);
                            s_17 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(y_13);
                        t = s_17;
                        if(!(match_cons(t, sym_Id_0)))
                          _fail(t);
                      }
                    else
                      {
                        t = x_13;
                        {
                          ATerm c_14 = t;
                          int e_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Rec_2))
                                {
                                  ATerm f_14 = ATgetArgument(t, 0);
                                  s_17 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(e_14);
                              t = s_17;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                            }
                          else
                            {
                              t = c_14;
                              if(match_cons(t, sym_All_1))
                                {
                                  u_17 = ATgetArgument(t, 0);
                                  t = u_17;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                }
                              else
                                {
                                  if(match_cons(t, sym_Where_1))
                                    {
                                      u_17 = ATgetArgument(t, 0);
                                      t = u_17;
                                      if(!(match_cons(t, sym_Id_0)))
                                        _fail(t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          u_17 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = u_17;
                                      if(!(match_cons(t, sym_Wld_0)))
                                        _fail(t);
                                      t = term_l_12;
                                    }
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
  ATerm h_14 = t;
  int i_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(i_14);
    }
  else
    {
      t = h_14;
      {
        ATerm j_14 = t;
        int k_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(k_14);
          }
        else
          {
            t = j_14;
            {
              ATerm l_14 = t;
              int m_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(m_14);
                }
              else
                {
                  t = l_14;
                  {
                    ATerm n_14 = t;
                    int o_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(o_14);
                      }
                    else
                      {
                        t = n_14;
                        {
                          ATerm p_14 = t;
                          int r_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(r_14);
                            }
                          else
                            {
                              t = p_14;
                              {
                                ATerm u_14 = t;
                                int v_14 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm l_18 = NULL,n_18 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        l_18 = ATgetArgument(t, 0);
                                        n_18 = ATgetArgument(t, 1);
                                        t = l_18;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = n_18;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            l_18 = ATgetArgument(t, 0);
                                            n_18 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = l_18;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = n_18;
                                      }
                                    ;
                                    LocalPopChoice(v_14);
                                  }
                                else
                                  {
                                    t = u_14;
                                    {
                                      ATerm w_14 = t;
                                      int y_14 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
                                          LocalPopChoice(y_14);
                                        }
                                      else
                                        {
                                          t = w_14;
                                          {
                                            ATerm z_14 = t;
                                            int a_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = BuildMatch_0_0(t);
                                                ;
                                                LocalPopChoice(a_15);
                                              }
                                            else
                                              {
                                                t = z_14;
                                                {
                                                  ATerm r_18 = NULL,s_18 = NULL;
                                                  if(match_cons(t, sym_As_2))
                                                    {
                                                      r_18 = ATgetArgument(t, 0);
                                                      s_18 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = r_18;
                                                  if(!(match_cons(t, sym_Wld_0)))
                                                    _fail(t);
                                                  t = s_18;
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm repeat_1_0 (ATerm p_137 (ATerm), ATerm t)
{
  ATerm u_18 (ATerm t)
  {
    ATerm b_15 = t;
    int c_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_137(t);
        t = u_18(t);
        ;
        LocalPopChoice(c_15);
      }
    else
      {
        t = b_15;
      }
    return(t);
  }
  t = u_18(t);
  return(t);
}
ATerm downup_1_0 (ATerm g_121 (ATerm), ATerm t)
{
  t = g_121(t);
  {
    ATerm o_1 (ATerm t)
    {
      t = downup_1_0(g_121, t);
      return(t);
    }
    t = SRTS_all(o_1, t);
    t = g_121(t);
  }
  return(t);
}
ATerm diff_1_0 (ATerm d_129 (ATerm), ATerm t)
{
  ATerm v_18 = NULL,w_18 = NULL;
  if(match_cons(t, sym__2))
    {
      w_18 = ATgetArgument(t, 0);
      v_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_18;
  {
    ATerm x_18 (ATerm t)
    {
      ATerm d_15 = t;
      int e_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(e_15);
        }
      else
        {
          t = d_15;
          {
            ATerm f_15 = t;
            int g_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_2 = NULL,p_2 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    m_2 = ATgetFirst((ATermList) t);
                    p_2 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = v_18;
                {
                  ATerm p_1 (ATerm t)
                  {
                    ATerm t_2 = NULL;
                    t_2 = t;
                    t = (ATerm) ATmakeAppl(sym__2, m_2, t_2);
                    t = d_129(t);
                    return(t);
                  }
                  t = fetch_1_0(p_1, t);
                  t = p_2;
                  t = x_18(t);
                }
                ;
                LocalPopChoice(g_15);
              }
            else
              {
                t = f_15;
                t = Cons_2_0(_id, x_18, t);
              }
          }
        }
      return(t);
    }
    t = x_18(t);
  }
  return(t);
}
ATerm genzip_4_0 (ATerm q_125 (ATerm), ATerm r_125 (ATerm), ATerm s_125 (ATerm), ATerm t_125 (ATerm), ATerm t)
{
  ATerm z_18 (ATerm t)
  {
    ATerm h_15 = t;
    int i_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_125(t);
        ;
        LocalPopChoice(i_15);
      }
    else
      {
        t = h_15;
        t = r_125(t);
        t = _2_0(t_125, z_18, t);
        t = s_125(t);
      }
    return(t);
  }
  t = z_18(t);
  return(t);
}
ATerm r_1 (ATerm t)
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
ATerm s_1 (ATerm t)
{
  ATerm j_19 = NULL,k_19 = NULL,l_19 = NULL,m_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_15 = ATgetArgument(t, 0);
      if(((ATgetType(l_15) == AT_LIST) && !(ATisEmpty(l_15))))
        {
          j_19 = ATgetFirst((ATermList) l_15);
          l_19 = (ATerm) ATgetNext((ATermList) l_15);
        }
      else
        _fail(t);
      {
        ATerm m_15 = ATgetArgument(t, 1);
        if(((ATgetType(m_15) == AT_LIST) && !(ATisEmpty(m_15))))
          {
            k_19 = ATgetFirst((ATermList) m_15);
            m_19 = (ATerm) ATgetNext((ATermList) m_15);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_19, k_19), (ATerm) ATmakeAppl(sym__2, l_19, m_19));
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm n_19 = NULL,o_19 = NULL;
  if(match_cons(t, sym__2))
    {
      n_19 = ATgetArgument(t, 0);
      o_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_19), n_19);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm c_19 = NULL,d_19 = NULL,e_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL,i_19 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm n_15 = ATgetFirst((ATermList) t);
      if(match_cons(n_15, sym__2))
        {
          c_19 = ATgetArgument(n_15, 0);
          d_19 = ATgetArgument(n_15, 1);
        }
      else
        _fail(t);
      e_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(d_19);
  if(match_cons(t, sym__2))
    {
      f_19 = ATgetArgument(t, 0);
      g_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(c_19);
  if(match_cons(t, sym__2))
    {
      if((f_19 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      h_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_19, g_19);
  t = genzip_4_0(r_1, s_1, v_1, _id, t);
  i_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_19, e_19);
  {
    ATerm o_15 = t;
    int p_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_15 = ATgetArgument(t, 0);
            ATerm r_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = i_19;
        {
          ATerm w_1 (ATerm t)
          {
            t = e_19;
            return(t);
          }
          t = at_end_1_0(w_1, t);
        }
        ;
        LocalPopChoice(p_15);
      }
    else
      {
        t = o_15;
        {
          ATerm i_3 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, i_19, e_19));
          if(match_cons(t, sym__2))
            {
              ATerm s_15 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) s_15) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              i_3 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = i_3;
          t = concat_0_0(t);
        }
      }
  }
  return(t);
}
ATerm while_not_2_0 (ATerm e_138 (ATerm), ATerm f_138 (ATerm), ATerm t)
{
  ATerm s_19 (ATerm t)
  {
    ATerm t_15 = t;
    int u_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_138(t);
        ;
        LocalPopChoice(u_15);
      }
    else
      {
        t = t_15;
        t = f_138(t);
        t = s_19(t);
      }
    return(t);
  }
  t = s_19(t);
  return(t);
}
ATerm for_3_0 (ATerm h_138 (ATerm), ATerm i_138 (ATerm), ATerm j_138 (ATerm), ATerm t)
{
  t = h_138(t);
  t = while_not_2_0(i_138, j_138, t);
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm x_19 = NULL;
  x_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, x_19);
  return(t);
}
ATerm d_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm e_2 (ATerm t)
{
  ATerm v_15 = t;
  int w_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_19 = NULL,a_20 = NULL,b_20 = NULL,c_20 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_19 = ATgetFirst((ATermList) t);
          c_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_19;
      if(match_cons(t, sym__2))
        {
          a_20 = ATgetArgument(t, 0);
          b_20 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = b_20;
      if((a_20 != t))
        {
          _fail(t);
        }
      t = c_20;
      ;
      LocalPopChoice(w_15);
    }
  else
    {
      t = v_15;
      t = UfDecompose_0_0(t);
    }
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm q_20 = NULL;
  if(match_cons(t, sym__2))
    {
      q_20 = ATgetArgument(t, 0);
      if((q_20 != ATgetArgument(t, 1)))
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
  ATerm x_15 = t;
  int y_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_1 (ATerm t)
      {
        t = _2_0(_id, d_2, t);
        return(t);
      }
      ATerm b_2 (ATerm t)
      {
        ATerm z_15 = t;
        int a_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(_id, e_2, t);
            ;
            LocalPopChoice(a_16);
          }
        else
          {
            t = z_15;
            {
              ATerm j_20 = NULL,k_20 = NULL,l_20 = NULL,m_20 = NULL;
              if(match_cons(t, sym__2))
                {
                  j_20 = ATgetArgument(t, 0);
                  k_20 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = k_20;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  l_20 = ATgetFirst((ATermList) t);
                  m_20 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_20), l_20), m_20);
            }
          }
        return(t);
      }
      t = for_3_0(x_1, z_1, b_2, t);
      ;
      LocalPopChoice(y_15);
    }
  else
    {
      t = x_15;
      t = diff_1_0(f_2, t);
    }
  return(t);
}
ATerm isect_1_0 (ATerm b_129 (ATerm), ATerm t)
{
  ATerm v_20 = NULL,w_20 = NULL;
  if(match_cons(t, sym__2))
    {
      w_20 = ATgetArgument(t, 0);
      v_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_20;
  {
    ATerm e_21 (ATerm t)
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
            ATerm x_20 = NULL,z_20 = NULL;
            x_20 = t;
            {
              ATerm d_16 = t;
              int e_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm f_16 = ATgetFirst((ATermList) t);
                      z_20 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(e_16);
                  {
                    ATerm g_16 = t;
                    int h_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm k_3 = NULL;
                        t = x_20;
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            k_3 = ATgetFirst((ATermList) t);
                            {
                              ATerm i_16 = (ATerm) ATgetNext((ATermList) t);
                            }
                          }
                        else
                          _fail(t);
                        t = v_20;
                        {
                          ATerm g_2 (ATerm t)
                          {
                            ATerm p_3 = NULL;
                            p_3 = t;
                            t = (ATerm) ATmakeAppl(sym__2, k_3, p_3);
                            t = b_129(t);
                            return(t);
                          }
                          t = fetch_1_0(g_2, t);
                          t = x_20;
                          t = Cons_2_0(_id, e_21, t);
                        }
                        ;
                        LocalPopChoice(h_16);
                      }
                    else
                      {
                        t = g_16;
                        t = z_20;
                        t = e_21(t);
                      }
                  }
                }
              else
                {
                  t = d_16;
                  {
                    ATerm t_3 = NULL;
                    t = x_20;
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        t_3 = ATgetFirst((ATermList) t);
                        {
                          ATerm j_16 = (ATerm) ATgetNext((ATermList) t);
                        }
                      }
                    else
                      _fail(t);
                    t = v_20;
                    {
                      ATerm h_2 (ATerm t)
                      {
                        ATerm v_3 = NULL;
                        v_3 = t;
                        t = (ATerm) ATmakeAppl(sym__2, t_3, v_3);
                        t = b_129(t);
                        return(t);
                      }
                      t = fetch_1_0(h_2, t);
                      t = x_20;
                      t = Cons_2_0(_id, e_21, t);
                    }
                  }
                }
            }
          }
        }
      return(t);
    }
    t = e_21(t);
  }
  return(t);
}
ATerm DynamicRules_1_0 (ATerm k_108 (ATerm), ATerm t)
{
  ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL;
  i_21 = t;
  if(match_cons(t, sym_DynamicRules_1))
    {
      g_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_21);
  f_21 = t;
  t = g_21;
  t = k_108(t);
  h_21 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, h_21), f_21);
  return(t);
}
ATerm RDefT_4_0 (ATerm b_108 (ATerm), ATerm c_108 (ATerm), ATerm d_108 (ATerm), ATerm e_108 (ATerm), ATerm t)
{
  ATerm l_21 = NULL,m_21 = NULL,q_21 = NULL,r_21 = NULL,t_21 = NULL,u_21 = NULL,v_21 = NULL,w_21 = NULL,a_22 = NULL,b_22 = NULL;
  b_22 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      m_21 = ATgetArgument(t, 0);
      q_21 = ATgetArgument(t, 1);
      r_21 = ATgetArgument(t, 2);
      t_21 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_22);
  l_21 = t;
  t = m_21;
  t = b_108(t);
  u_21 = t;
  t = q_21;
  t = c_108(t);
  v_21 = t;
  t = r_21;
  t = d_108(t);
  w_21 = t;
  t = t_21;
  t = e_108(t);
  a_22 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDefT_4, u_21, v_21, w_21, a_22), l_21);
  return(t);
}
ATerm Scope_2_0 (ATerm n_109 (ATerm), ATerm o_109 (ATerm), ATerm t)
{
  ATerm f_22 = NULL,g_22 = NULL,h_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL;
  k_22 = t;
  if(match_cons(t, sym_Scope_2))
    {
      g_22 = ATgetArgument(t, 0);
      h_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_22);
  f_22 = t;
  t = g_22;
  t = n_109(t);
  i_22 = t;
  t = h_22;
  t = o_109(t);
  j_22 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, i_22, j_22), f_22);
  return(t);
}
ATerm tboundin_3_0 (ATerm f_120 (ATerm), ATerm g_120 (ATerm), ATerm h_120 (ATerm), ATerm t)
{
  ATerm k_16 = t;
  int l_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(h_120, f_120, t);
      ;
      LocalPopChoice(l_16);
    }
  else
    {
      t = k_16;
      {
        ATerm m_16 = t;
        int n_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(h_120, h_120, h_120, f_120, t);
            ;
            LocalPopChoice(n_16);
          }
        else
          {
            t = m_16;
            {
              ATerm o_16 = t;
              int q_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(h_120, h_120, h_120, f_120, t);
                  ;
                  LocalPopChoice(q_16);
                }
              else
                {
                  t = o_16;
                  t = DynamicRules_1_0(f_120, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm r_22 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, r_22);
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm g_23 = NULL;
  ATerm s_16 = t;
  int u_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_23 = ATgetArgument(t, 0);
          {
            ATerm v_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_16);
      t = g_23;
    }
  else
    {
      t = s_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_23;
    }
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm m_23 = NULL;
  ATerm w_16 = t;
  int x_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_23 = ATgetArgument(t, 0);
          {
            ATerm y_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_16);
      t = m_23;
    }
  else
    {
      t = w_16;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_23;
    }
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm s_22 = NULL,w_22 = NULL,y_22 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      w_22 = ATgetArgument(t, 0);
      t = w_22;
      if(match_cons(t, sym_Rule_3))
        {
          s_22 = ATgetArgument(t, 0);
          {
            ATerm z_16 = ATgetArgument(t, 1);
          }
          {
            ATerm a_17 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = s_22;
      t = tvars_0_0(t);
    }
  else
    {
      ATerm b_17 = t;
      int c_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_Scope_2))
            {
              w_22 = ATgetArgument(t, 0);
              {
                ATerm d_17 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          LocalPopChoice(c_17);
          t = w_22;
        }
      else
        {
          t = b_17;
          if(match_cons(t, sym_DynamicRules_1))
            {
              w_22 = ATgetArgument(t, 0);
              t = w_22;
              t = tvars_0_0(t);
            }
          else
            {
              ATerm e_17 = t;
              int f_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      ATerm g_17 = ATgetArgument(t, 0);
                      ATerm h_17 = ATgetArgument(t, 1);
                      y_22 = ATgetArgument(t, 2);
                      {
                        ATerm i_17 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(f_17);
                  t = y_22;
                  t = map_1_0(k_2, t);
                }
              else
                {
                  t = e_17;
                  if(match_cons(t, sym_RDefT_4))
                    {
                      ATerm j_17 = ATgetArgument(t, 0);
                      ATerm k_17 = ATgetArgument(t, 1);
                      y_22 = ATgetArgument(t, 2);
                      {
                        ATerm l_17 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  t = y_22;
                  t = map_1_0(l_2, t);
                }
            }
        }
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(i_2, j_2, tboundin_3_0, t);
  return(t);
}
ATerm union_1_0 (ATerm h_129 (ATerm), ATerm t)
{
  ATerm s_23 = NULL,t_23 = NULL;
  if(match_cons(t, sym__2))
    {
      t_23 = ATgetArgument(t, 0);
      s_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_23;
  {
    ATerm u_23 (ATerm t)
    {
      ATerm m_17 = t;
      int n_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = s_23;
          ;
          LocalPopChoice(n_17);
        }
      else
        {
          t = m_17;
          {
            ATerm o_17 = t;
            int p_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_3 = NULL,z_3 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    y_3 = ATgetFirst((ATermList) t);
                    z_3 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = s_23;
                {
                  ATerm n_2 (ATerm t)
                  {
                    ATerm a_4 = NULL;
                    a_4 = t;
                    t = (ATerm) ATmakeAppl(sym__2, y_3, a_4);
                    t = h_129(t);
                    return(t);
                  }
                  t = fetch_1_0(n_2, t);
                  t = z_3;
                  t = u_23(t);
                }
                ;
                LocalPopChoice(p_17);
              }
            else
              {
                t = o_17;
                t = Cons_2_0(_id, u_23, t);
              }
          }
        }
      return(t);
    }
    t = u_23(t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm w_131 (ATerm), ATerm x_131 (ATerm), ATerm y_131 (ATerm), ATerm t)
{
  ATerm q_17 = t;
  int r_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = w_131(t);
      ;
      LocalPopChoice(r_17);
    }
  else
    {
      t = q_17;
      {
        ATerm x_23 = NULL,y_23 = NULL,b_24 = NULL,c_24 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_23 = ATgetFirst((ATermList) t);
            y_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = x_23;
        t = y_131(t);
        b_24 = t;
        t = y_23;
        t = foldr_3_0(w_131, x_131, y_131, t);
        c_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_24, c_24);
        t = x_131(t);
      }
    }
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm n_4 = NULL;
  if(match_cons(t, sym__2))
    {
      n_4 = ATgetArgument(t, 0);
      if((n_4 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm t_4 = NULL;
  if(match_cons(t, sym__2))
    {
      t_4 = ATgetArgument(t, 0);
      if((t_4 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = union_1_0(z_2, t);
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = union_1_0(h_3, t);
  return(t);
}
ATerm free_vars_3_0 (ATerm y_135 (ATerm), ATerm z_135 (ATerm), ATerm a_136 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm k_24 (ATerm t)
  {
    ATerm t_17 = t;
    int v_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_135(t);
        ;
        LocalPopChoice(v_17);
      }
    else
      {
        t = t_17;
        {
          ATerm w_17 = t;
          int x_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_24 = NULL,h_24 = NULL,i_4 = NULL,j_4 = NULL;
              f_24 = t;
              t = z_135(t);
              h_24 = t;
              t = f_24;
              {
                ATerm o_2 (ATerm t)
                {
                  ATerm e_4 = NULL;
                  t = k_24(t);
                  e_4 = t;
                  t = (ATerm) ATmakeAppl(sym__2, e_4, h_24);
                  t = diff_0_0(t);
                  return(t);
                }
                t = a_136(o_2, k_24, q_2, t);
                i_4 = t;
                t = SSL_explode_term(i_4);
                if(match_cons(t, sym__2))
                  {
                    ATerm y_17 = ATgetArgument(t, 0);
                    j_4 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = j_4;
                t = foldr_3_0(r_2, w_2, _id, t);
              }
              ;
              LocalPopChoice(x_17);
            }
          else
            {
              t = w_17;
              {
                ATerm o_4 = NULL,p_4 = NULL;
                o_4 = t;
                t = SSL_explode_term(o_4);
                if(match_cons(t, sym__2))
                  {
                    ATerm z_17 = ATgetArgument(t, 0);
                    p_4 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = p_4;
                t = foldr_3_0(f_3, g_3, k_24, t);
              }
            }
        }
      }
    return(t);
  }
  t = k_24(t);
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm v_24 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_24);
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm l_25 = NULL;
  ATerm a_18 = t;
  int b_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_25 = ATgetArgument(t, 0);
          {
            ATerm c_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_18);
      t = l_25;
    }
  else
    {
      t = a_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_25;
    }
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm r_25 = NULL;
  ATerm d_18 = t;
  int e_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_25 = ATgetArgument(t, 0);
          {
            ATerm f_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_18);
      t = r_25;
    }
  else
    {
      t = d_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_25;
    }
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm u_25 = NULL;
  if(match_cons(t, sym__2))
    {
      u_25 = ATgetArgument(t, 0);
      if((u_25 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm w_24 = NULL,a_25 = NULL,c_25 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      a_25 = ATgetArgument(t, 0);
      t = a_25;
      if(match_cons(t, sym_Rule_3))
        {
          w_24 = ATgetArgument(t, 0);
          {
            ATerm g_18 = ATgetArgument(t, 1);
          }
          {
            ATerm h_18 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = w_24;
      t = tvars_0_0(t);
    }
  else
    {
      ATerm i_18 = t;
      int j_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_Scope_2))
            {
              a_25 = ATgetArgument(t, 0);
              {
                ATerm k_18 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          LocalPopChoice(j_18);
          t = a_25;
        }
      else
        {
          t = i_18;
          if(match_cons(t, sym_DynamicRules_1))
            {
              a_25 = ATgetArgument(t, 0);
              t = a_25;
              t = tvars_0_0(t);
            }
          else
            {
              ATerm m_18 = t;
              int o_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      ATerm p_18 = ATgetArgument(t, 0);
                      ATerm q_18 = ATgetArgument(t, 1);
                      c_25 = ATgetArgument(t, 2);
                      {
                        ATerm t_18 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(o_18);
                  t = c_25;
                  t = map_1_0(s_3, t);
                }
              else
                {
                  t = m_18;
                  if(match_cons(t, sym_RDefT_4))
                    {
                      ATerm y_18 = ATgetArgument(t, 0);
                      ATerm a_19 = ATgetArgument(t, 1);
                      c_25 = ATgetArgument(t, 2);
                      {
                        ATerm b_19 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  t = c_25;
                  t = map_1_0(u_3, t);
                }
            }
        }
    }
  return(t);
}
ATerm NarrowScope_0_0 (ATerm t)
{
  ATerm p_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL;
  if(match_cons(t, sym_Scope_2))
    {
      p_24 = ATgetArgument(t, 0);
      {
        ATerm p_19 = ATgetArgument(t, 1);
        if(match_cons(p_19, sym_Seq_2))
          {
            q_24 = ATgetArgument(p_19, 0);
            r_24 = ATgetArgument(p_19, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = q_24;
  t = free_vars_3_0(o_3, q_3, tboundin_3_0, t);
  s_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_24, p_24);
  t = isect_1_0(w_3, t);
  t_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_24, t_24);
  t = diff_0_0(t);
  u_24 = t;
  {
    ATerm q_19 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_19;
      }
    t = (ATerm) ATmakeAppl(sym_Scope_2, t_24, (ATerm) ATmakeAppl(sym_Seq_2, q_24, (ATerm) ATmakeAppl(sym_Scope_2, u_24, r_24)));
  }
  return(t);
}
ATerm topdown_1_0 (ATerm e_121 (ATerm), ATerm t)
{
  t = e_121(t);
  {
    ATerm x_3 (ATerm t)
    {
      t = topdown_1_0(e_121, t);
      return(t);
    }
    t = SRTS_all(x_3, t);
  }
  return(t);
}
ATerm WidenScope_0_0 (ATerm t)
{
  ATerm z_25 = NULL,a_26 = NULL,c_26 = NULL,d_26 = NULL,e_26 = NULL,f_26 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      c_26 = ATgetArgument(t, 0);
      f_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_26;
  if(match_cons(t, sym_Scope_2))
    {
      z_25 = ATgetArgument(t, 0);
      a_26 = ATgetArgument(t, 1);
      t = c_26;
      if(match_cons(t, sym_Scope_2))
        {
          d_26 = ATgetArgument(t, 0);
          e_26 = ATgetArgument(t, 1);
          {
            ATerm r_19 = t;
            int t_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = (ATerm) ATmakeAppl(sym_Scope_2, z_25, (ATerm) ATmakeAppl(sym_Seq_2, c_26, a_26));
                ;
                LocalPopChoice(t_19);
              }
            else
              {
                t = r_19;
                t = (ATerm) ATmakeAppl(sym_Scope_2, d_26, (ATerm) ATmakeAppl(sym_Seq_2, e_26, f_26));
              }
          }
        }
      else
        {
          t = (ATerm) ATmakeAppl(sym_Scope_2, z_25, (ATerm) ATmakeAppl(sym_Seq_2, c_26, a_26));
        }
    }
  else
    {
      t = c_26;
      if(match_cons(t, sym_Scope_2))
        {
          d_26 = ATgetArgument(t, 0);
          e_26 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, d_26, (ATerm) ATmakeAppl(sym_Seq_2, e_26, f_26));
    }
  return(t);
}
ATerm SDefT_4_0 (ATerm v_111 (ATerm), ATerm w_111 (ATerm), ATerm x_111 (ATerm), ATerm y_111 (ATerm), ATerm t)
{
  ATerm v_26 = NULL,y_26 = NULL,z_26 = NULL,b_27 = NULL,d_27 = NULL,e_27 = NULL,f_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL;
  i_27 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      y_26 = ATgetArgument(t, 0);
      z_26 = ATgetArgument(t, 1);
      b_27 = ATgetArgument(t, 2);
      d_27 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_27);
  v_26 = t;
  t = y_26;
  t = v_111(t);
  e_27 = t;
  t = z_26;
  t = w_111(t);
  f_27 = t;
  t = b_27;
  t = x_111(t);
  g_27 = t;
  t = d_27;
  t = y_111(t);
  h_27 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, e_27, f_27, g_27, h_27), v_26);
  return(t);
}
ATerm SDef_3_0 (ATerm s_111 (ATerm), ATerm t_111 (ATerm), ATerm u_111 (ATerm), ATerm t)
{
  ATerm l_27 = NULL,m_27 = NULL,n_27 = NULL,o_27 = NULL,p_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL;
  s_27 = t;
  if(match_cons(t, sym_SDef_3))
    {
      m_27 = ATgetArgument(t, 0);
      n_27 = ATgetArgument(t, 1);
      o_27 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_27);
  l_27 = t;
  t = m_27;
  t = s_111(t);
  p_27 = t;
  t = n_27;
  t = t_111(t);
  q_27 = t;
  t = o_27;
  t = u_111(t);
  r_27 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, p_27, q_27, r_27), l_27);
  return(t);
}
ATerm Strategies_1_0 (ATerm v_104 (ATerm), ATerm t)
{
  ATerm v_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL;
  y_27 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      w_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_27);
  v_27 = t;
  t = w_27;
  t = v_104(t);
  x_27 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, x_27), v_27);
  return(t);
}
ATerm Specification_1_0 (ATerm a_105 (ATerm), ATerm t)
{
  ATerm b_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL;
  e_28 = t;
  if(match_cons(t, sym_Specification_1))
    {
      c_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_28);
  b_28 = t;
  t = c_28;
  t = a_105(t);
  d_28 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, d_28), b_28);
  return(t);
}
ATerm f_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm apply_to_bodies_1_0 (ATerm f_119 (ATerm), ATerm t)
{
  ATerm b_4 (ATerm t)
  {
    ATerm c_4 (ATerm t)
    {
      ATerm d_4 (ATerm t)
      {
        ATerm g_4 (ATerm t)
        {
          ATerm h_4 (ATerm t)
          {
            ATerm u_19 = t;
            int v_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SDef_3_0(_id, _id, f_119, t);
                ;
                LocalPopChoice(v_19);
              }
            else
              {
                t = u_19;
                t = SDefT_4_0(_id, _id, _id, f_119, t);
              }
            return(t);
          }
          t = map_1_0(h_4, t);
          return(t);
        }
        t = Strategies_1_0(g_4, t);
        return(t);
      }
      t = Cons_2_0(d_4, f_4, t);
      return(t);
    }
    t = Cons_2_0(_id, c_4, t);
    return(t);
  }
  t = Specification_1_0(b_4, t);
  return(t);
}
ATerm _2_0 (ATerm c_100 (ATerm), ATerm d_100 (ATerm), ATerm t)
{
  ATerm h_28 = NULL,i_28 = NULL,j_28 = NULL,k_28 = NULL,l_28 = NULL,m_28 = NULL;
  m_28 = t;
  if(match_cons(t, sym__2))
    {
      i_28 = ATgetArgument(t, 0);
      j_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_28);
  h_28 = t;
  t = i_28;
  t = c_100(t);
  k_28 = t;
  t = j_28;
  t = d_100(t);
  l_28 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, k_28, l_28), h_28);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm d_143 (ATerm), ATerm t)
{
  ATerm p_28 = NULL,q_28 = NULL,r_28 = NULL;
  if(match_cons(t, sym__2))
    {
      p_28 = ATgetArgument(t, 0);
      q_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_28, term_w_19);
  t = open_stream_0_0(t);
  r_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_28, q_28);
  t = d_143(t);
  t = fclose_0_0(t);
  t = q_28;
  return(t);
}
ATerm s_4 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_19 = ATgetArgument(t, 0);
      if(match_cons(y_19, sym_Stream_1))
        {
          u_28 = ATgetArgument(y_19, 0);
        }
      else
        _fail(t);
      v_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(u_28, v_28);
  w_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_28);
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm x_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_20 = ATgetArgument(t, 0);
      if(match_cons(d_20, sym_Stream_1))
        {
          x_28 = ATgetArgument(d_20, 0);
        }
      else
        _fail(t);
      y_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(x_28, y_28);
  z_28 = t;
  t = SSL_fputc((ATerm)ATmakeInt(10), z_28);
  a_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_29);
  return(t);
}
ATerm q_4 (ATerm t)
{
  t = fetch_1_0(s_4, t);
  return(t);
}
ATerm r_4 (ATerm t)
{
  t = WriteToFile_1_0(v_4, t);
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = WriteToFile_1_0(x_4, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm s_28 = NULL,t_28 = NULL;
  s_28 = t;
  {
    ATerm k_4 (ATerm t)
    {
      ATerm e_20 = t;
      int f_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_4 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((t_28 != NULL) && (t_28 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  t_28 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(l_4, t);
          ;
          LocalPopChoice(f_20);
        }
      else
        {
          t = e_20;
          t = term_g_20;
          if(((t_28 != NULL) && (t_28 != t)))
            _fail(t);
          else
            t_28 = t;
        }
      return(t);
    }
    t = _2_0(k_4, _id, t);
    t = s_28;
    {
      ATerm m_4 (ATerm t)
      {
        ATerm u_4 = NULL;
        u_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_28), u_4);
        return(t);
      }
      t = _2_0(_id, m_4, t);
      {
        ATerm h_20 = t;
        int i_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(q_4, r_4, t);
            ;
            LocalPopChoice(i_20);
          }
        else
          {
            t = h_20;
            t = _2_0(_id, w_4, t);
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
ATerm apply_strategy_1_0 (ATerm f_146 (ATerm), ATerm t)
{
  ATerm b_29 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL;
  b_29 = t;
  t = dtime_0_0(t);
  t = b_29;
  t = f_146(t);
  c_29 = t;
  t = dtime_0_0(t);
  d_29 = t;
  t = c_29;
  if(match_cons(t, sym__2))
    {
      e_29 = ATgetArgument(t, 0);
      f_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_29), (ATerm) ATmakeAppl(sym_Runtime_1, d_29)), f_29);
  return(t);
}
ATerm t_29 (ATerm n_29, ATerm t)
{
  t = SSL_fclose(n_29);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm q_29 = NULL,r_29 = NULL;
  r_29 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_29 = ATgetArgument(t, 0);
      {
        ATerm n_20 = t;
        int o_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(q_29);
            ;
            LocalPopChoice(o_20);
          }
        else
          {
            t = n_20;
            t = t_29(r_29, t);
          }
      }
    }
  else
    {
      t = t_29(r_29, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm u_29 = NULL;
  t = SSL_stdin_stream();
  u_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_29);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm v_29 = NULL;
  t = SSL_stdout_stream();
  v_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_29);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm w_29 = NULL;
  t = SSL_stderr_stream();
  w_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_29);
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm e_30 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      e_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_30;
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm i_30 = NULL;
  i_30 = t;
  t = SSL_is_string(i_30);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_20 = ATgetArgument(t, 0);
      ATerm r_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_20 = t;
    int t_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_5 = NULL,i_5 = NULL;
        h_5 = t;
        t = SSL_explode_term(h_5);
        if(match_cons(t, sym__2))
          {
            ATerm u_20 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) u_20) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm y_20 = ATgetArgument(t, 1);
              if(((ATgetType(y_20) == AT_LIST) && !(ATisEmpty(y_20))))
                {
                  i_5 = ATgetFirst((ATermList) y_20);
                  {
                    ATerm a_21 = (ATerm) ATgetNext((ATermList) y_20);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = i_5;
        if(match_cons(t, sym_stderr_0))
          {
            t = i_5;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = i_5;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = i_5;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(t_20);
      }
    else
      {
        t = s_20;
        {
          ATerm b_21 = t;
          int c_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_30 = NULL,c_30 = NULL,d_30 = NULL;
              t = _2_0(y_4, _id, t);
              if(match_cons(t, sym__2))
                {
                  b_30 = ATgetArgument(t, 0);
                  c_30 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(b_30, c_30);
              d_30 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, d_30);
              ;
              LocalPopChoice(c_21);
            }
          else
            {
              t = b_21;
              {
                ATerm f_30 = NULL,g_30 = NULL,h_30 = NULL;
                t = _2_0(z_4, _id, t);
                if(match_cons(t, sym__2))
                  {
                    f_30 = ATgetArgument(t, 0);
                    g_30 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(f_30, g_30);
                h_30 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, h_30);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm j_30 = NULL,l_30 = NULL,m_30 = NULL;
  ATerm d_21 = t;
  int j_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_30 = NULL;
      n_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_30, term_k_21);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(j_21);
    }
  else
    {
      t = d_21;
      {
        ATerm j_5 = NULL;
        j_5 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, j_5), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = j_5;
        _fail(t);
      }
    }
  j_30 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(m_30);
  l_30 = t;
  t = j_30;
  t = fclose_0_0(t);
  t = l_30;
  return(t);
}
ATerm fetch_1_0 (ATerm q_127 (ATerm), ATerm t)
{
  ATerm s_30 (ATerm t)
  {
    ATerm n_21 = t;
    int o_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(q_127, _id, t);
        ;
        LocalPopChoice(o_21);
      }
    else
      {
        t = n_21;
        t = Cons_2_0(_id, s_30, t);
      }
    return(t);
  }
  t = s_30(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm p_21 = t;
  int s_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(s_21);
    }
  else
    {
      t = p_21;
      {
        ATerm v_30 = NULL,w_30 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_30 = ATgetFirst((ATermList) t);
            w_30 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_30;
        {
          ATerm a_5 (ATerm t)
          {
            t = w_30;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(a_5, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm w_127 (ATerm), ATerm t)
{
  ATerm c_31 (ATerm t)
  {
    ATerm x_21 = t;
    int y_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, c_31, t);
        ;
        LocalPopChoice(y_21);
      }
    else
      {
        t = x_21;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = w_127(t);
      }
    return(t);
  }
  t = c_31(t);
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm f_31 = NULL;
  f_31 = t;
  t = SSL_explode_string(f_31);
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm g_31 = NULL;
  g_31 = t;
  t = SSL_explode_string(g_31);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm e_31 = NULL;
  t = _2_0(b_5, c_5, t);
  {
    ATerm z_21 = t;
    int c_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_31 = NULL,j_31 = NULL;
        if(match_cons(t, sym__2))
          {
            i_31 = ATgetArgument(t, 0);
            j_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = i_31;
        {
          ATerm d_5 (ATerm t)
          {
            t = j_31;
            return(t);
          }
          t = at_end_1_0(d_5, t);
        }
        ;
        LocalPopChoice(c_22);
      }
    else
      {
        t = z_21;
        {
          ATerm o_5 = NULL,p_5 = NULL;
          o_5 = t;
          t = SSL_explode_term(o_5);
          if(match_cons(t, sym__2))
            {
              ATerm d_22 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) d_22) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              p_5 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = p_5;
          t = concat_0_0(t);
        }
      }
    e_31 = t;
    t = SSL_implode_string(e_31);
  }
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm e_22 = t;
  int l_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(l_22);
    }
  else
    {
      t = e_22;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm m_22 = t;
  int n_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_31 = NULL;
      t_31 = t;
      t = SSL_is_string(t_31);
      ;
      LocalPopChoice(n_22);
    }
  else
    {
      t = m_22;
      {
        ATerm o_22 = t;
        int p_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(e_5, t);
            ;
            LocalPopChoice(p_22);
          }
        else
          {
            t = o_22;
            {
              ATerm z_31 = NULL,a_32 = NULL,b_32 = NULL;
              z_31 = t;
              if(match_cons(t, sym_Path_1))
                {
                  a_32 = ATgetArgument(t, 0);
                  t = a_32;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      a_32 = ATgetArgument(t, 0);
                      t = a_32;
                      {
                        ATerm q_22 = t;
                        int t_22 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), a_32);
                            {
                              ATerm u_22 = t;
                              int v_22 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm i_6 = NULL;
                                  t = eval_config_0_0(t);
                                  i_6 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), a_32, i_6);
                                  t = i_6;
                                  ;
                                  LocalPopChoice(v_22);
                                }
                              else
                                {
                                  t = u_22;
                                }
                            }
                            ;
                            LocalPopChoice(t_22);
                          }
                        else
                          {
                            t = q_22;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, a_32), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = a_32;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm f_32 = NULL,g_32 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          a_32 = ATgetArgument(t, 0);
                          b_32 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = a_32;
                      t = eval_config_0_0(t);
                      f_32 = t;
                      t = b_32;
                      t = eval_config_0_0(t);
                      g_32 = t;
                      t = (ATerm) ATmakeAppl(sym__2, f_32, g_32);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm h_144 (ATerm), ATerm t)
{
  ATerm x_22 = t;
  int z_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_32 = NULL,n_32 = NULL;
      l_32 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm a_23 = t;
        int b_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_6 = NULL;
            t = eval_config_0_0(t);
            p_6 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), p_6);
            t = p_6;
            ;
            LocalPopChoice(b_23);
          }
        else
          {
            t = a_23;
          }
        n_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_32, term_c_23);
        t = geq_0_0(t);
        t = l_32;
        t = h_144(t);
      }
      ;
      LocalPopChoice(z_22);
    }
  else
    {
      t = x_22;
    }
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm p_32 = NULL;
  p_32 = t;
  if(match_string(t, "-k"))
    {
      t = p_32;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = p_32;
    }
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm q_32 = NULL,r_32 = NULL;
  q_32 = t;
  t = SSL_string_to_int(q_32);
  r_32 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), r_32);
  t = q_32;
  return(t);
}
ATerm k_5 (ATerm t)
{
  t = term_d_23;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_5, g_5, k_5, t);
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm v_32 = NULL;
  v_32 = t;
  if(match_string(t, "-S"))
    {
      t = v_32;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = v_32;
    }
  return(t);
}
ATerm m_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_f_23;
  return(t);
}
ATerm n_5 (ATerm t)
{
  t = term_h_23;
  return(t);
}
ATerm q_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm w_32 = NULL,x_32 = NULL;
  w_32 = t;
  t = SSL_string_to_int(w_32);
  x_32 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), x_32);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, w_32);
  return(t);
}
ATerm s_5 (ATerm t)
{
  t = term_i_23;
  return(t);
}
ATerm t_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_j_23;
  return(t);
}
ATerm v_5 (ATerm t)
{
  t = term_k_23;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm l_23 = t;
  int n_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_5, m_5, n_5, t);
      ;
      LocalPopChoice(n_23);
    }
  else
    {
      t = l_23;
      {
        ATerm o_23 = t;
        int p_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(q_5, r_5, s_5, t);
            ;
            LocalPopChoice(p_23);
          }
        else
          {
            t = o_23;
            t = Option_3_0(t_5, u_5, v_5, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm a_33 = NULL,b_33 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_33 = NULL;
      t = term_c_8;
      t = d_0(t);
      c_33 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_23, term_r_23, c_33);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm f_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_33 = ATgetFirst((ATermList) t);
          b_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_33;
      t = a_0(t);
      t = term_c_8;
      t = c_0(t);
      f_33 = t;
      t = (ATerm) ATinsert(CheckATermList(b_33), f_33);
    }
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm h_33 = NULL;
  h_33 = t;
  if(match_string(t, "-o"))
    {
      t = h_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = h_33;
    }
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm i_33 = NULL;
  i_33 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), i_33);
  t = (ATerm) ATmakeAppl(sym_Output_1, i_33);
  return(t);
}
ATerm y_5 (ATerm t)
{
  t = term_v_23;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_5, x_5, y_5, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm l_33 = NULL,n_33 = NULL,o_33 = NULL,p_33 = NULL;
  if(match_cons(t, sym__3))
    {
      l_33 = ATgetArgument(t, 0);
      n_33 = ATgetArgument(t, 1);
      o_33 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_33, n_33);
  {
    ATerm w_23 = t;
    int z_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_24 = ATgetArgument(t, 0);
            ATerm d_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(l_33, n_33);
        ;
        LocalPopChoice(z_23);
      }
    else
      {
        t = w_23;
        t = (ATerm) ATempty;
      }
    p_33 = t;
    t = SSL_table_put(l_33, n_33, (ATerm) ATinsert(CheckATermList(p_33), o_33));
    t = (ATerm) ATmakeAppl(sym__3, l_33, n_33, o_33);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm x_33 = NULL,y_33 = NULL,z_33 = NULL,a_34 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_34 = NULL;
      t = term_c_8;
      t = l_0(t);
      b_34 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_23, term_r_23, b_34);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm f_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_33 = ATgetFirst((ATermList) t);
          y_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_33;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_33 = ATgetFirst((ATermList) t);
          a_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_33;
      t = i_0(t);
      t = z_33;
      t = k_0(t);
      f_34 = t;
      t = (ATerm) ATinsert(CheckATermList(a_34), f_34);
    }
  return(t);
}
ATerm z_5 (ATerm t)
{
  ATerm h_34 = NULL;
  h_34 = t;
  if(match_string(t, "-i"))
    {
      t = h_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = h_34;
    }
  return(t);
}
ATerm a_6 (ATerm t)
{
  ATerm i_34 = NULL;
  i_34 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), i_34);
  t = (ATerm) ATmakeAppl(sym_Input_1, i_34);
  return(t);
}
ATerm b_6 (ATerm t)
{
  t = term_e_24;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_5, a_6, b_6, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm j_34 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_8;
  t = whoami_0_0(t);
  j_34 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), j_34));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm g_24 = t;
    int i_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_6 = NULL;
        t = eval_config_0_0(t);
        t_6 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), t_6);
        t = t_6;
        ;
        LocalPopChoice(i_24);
      }
    else
      {
        t = g_24;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm u_131 (ATerm), ATerm v_131 (ATerm), ATerm t)
{
  ATerm j_24 = t;
  int l_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = u_131(t);
      ;
      LocalPopChoice(l_24);
    }
  else
    {
      t = j_24;
      {
        ATerm m_34 = NULL,n_34 = NULL,q_34 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_34 = ATgetFirst((ATermList) t);
            n_34 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = n_34;
        t = foldr_2_0(u_131, v_131, t);
        q_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_34, q_34);
        t = v_131(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm c_6 (ATerm t)
{
  t = term_e_23;
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm y_6 = NULL,z_6 = NULL;
  if(match_cons(t, sym__2))
    {
      y_6 = ATgetArgument(t, 0);
      z_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_24 = t;
    int n_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(y_6, z_6);
        ;
        LocalPopChoice(n_24);
      }
    else
      {
        t = m_24;
        t = SSL_addr(y_6, z_6);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm t_34 = NULL,u_6 = NULL,v_6 = NULL;
  t = times_0_0(t);
  u_6 = t;
  t = SSL_explode_term(u_6);
  if(match_cons(t, sym__2))
    {
      ATerm o_24 = ATgetArgument(t, 0);
      v_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_6;
  t = foldr_2_0(c_6, d_6, t);
  t_34 = t;
  t = SSL_TicksToSeconds(t_34);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm g_35 = NULL,h_35 = NULL,i_35 = NULL;
  g_35 = t;
  if(match_cons(t, sym__2))
    {
      h_35 = ATgetArgument(t, 0);
      i_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_24 = t;
    int y_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_35;
        if((h_35 != t))
          {
            _fail(t);
          }
        t = g_35;
        ;
        LocalPopChoice(y_24);
      }
    else
      {
        t = x_24;
        t = g_35;
        {
          ATerm z_24 = t;
          int b_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(h_35, i_35);
              ;
              LocalPopChoice(b_25);
            }
          else
            {
              t = z_24;
              t = SSL_gtr(h_35, i_35);
            }
          t = (ATerm) ATmakeAppl(sym__2, h_35, i_35);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm g_144 (ATerm), ATerm t)
{
  ATerm d_25 = t;
  int e_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_35 = NULL,n_35 = NULL;
      l_35 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm f_25 = t;
        int g_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_7 = NULL;
            t = eval_config_0_0(t);
            n_7 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), n_7);
            t = n_7;
            ;
            LocalPopChoice(g_25);
          }
        else
          {
            t = f_25;
          }
        n_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_35, term_h_25);
        t = geq_0_0(t);
        t = l_35;
        t = g_144(t);
      }
      ;
      LocalPopChoice(e_25);
    }
  else
    {
      t = d_25;
    }
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm p_35 = NULL,q_35 = NULL;
  t = run_time_0_0(t);
  p_35 = t;
  t = term_c_8;
  t = whoami_0_0(t);
  q_35 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), p_35), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), q_35));
  t = (ATerm) ATmakeAppl(sym__2, term_i_25, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_25), p_35), term_j_25), q_35));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(e_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm d_147 (ATerm), ATerm t)
{
  ATerm m_25 = t;
  int n_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm o_25 = t;
        int p_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_7 = NULL;
            t = eval_config_0_0(t);
            r_7 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), r_7);
            t = r_7;
            ;
            LocalPopChoice(p_25);
          }
        else
          {
            t = o_25;
          }
      }
      ;
      LocalPopChoice(n_25);
    }
  else
    {
      t = m_25;
      {
        ATerm f_6 (ATerm t)
        {
          ATerm q_25 = t;
          int s_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(s_25);
            }
          else
            {
              t = q_25;
              {
                ATerm t_25 = t;
                int v_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(v_25);
                  }
                else
                  {
                    t = t_25;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = fetch_1_0(f_6, t);
      }
    }
  t = d_147(t);
  return(t);
}
ATerm map_1_0 (ATerm f_127 (ATerm), ATerm t)
{
  ATerm r_35 (ATerm t)
  {
    ATerm w_25 = t;
    int x_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(x_25);
      }
    else
      {
        t = w_25;
        t = Cons_2_0(f_127, r_35, t);
      }
    return(t);
  }
  t = r_35(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm t_35 = NULL,w_35 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_35 = ATgetFirst((ATermList) t);
      w_35 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm a_36 = NULL,b_36 = NULL;
        t = w_35;
        t = g_0(t);
        a_36 = t;
        t = t_35;
        t = e_0(t);
        b_36 = t;
        t = w_35;
        {
          ATerm g_6 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(a_36), b_36);
            return(t);
          }
          t = reverse_acc_2_0(e_0, g_6, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_c_8;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm z_118 (ATerm), ATerm t)
{
  ATerm c_36 = NULL,d_36 = NULL,e_36 = NULL,f_36 = NULL;
  f_36 = t;
  if(match_cons(t, sym_Program_1))
    {
      d_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_36);
  c_36 = t;
  t = d_36;
  t = z_118(t);
  e_36 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, e_36), c_36);
  return(t);
}
ATerm j_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm i_36 = NULL;
  i_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_36), term_y_25);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_26 = t;
  int g_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm h_26 = t;
        int i_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_9 = NULL;
            t = eval_config_0_0(t);
            a_9 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), a_9);
            t = a_9;
            ;
            LocalPopChoice(i_26);
          }
        else
          {
            t = h_26;
          }
      }
      ;
      LocalPopChoice(g_26);
    }
  else
    {
      t = b_26;
      {
        ATerm h_6 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = fetch_1_0(h_6, t);
      }
    }
  t = term_j_26;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, j_6, t);
  t = map_1_0(k_6, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm a_119 (ATerm), ATerm t)
{
  ATerm j_36 = NULL,k_36 = NULL,l_36 = NULL,m_36 = NULL;
  m_36 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      k_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_36);
  j_36 = t;
  t = k_36;
  t = a_119(t);
  l_36 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, l_36), j_36);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm q_36 = NULL,r_36 = NULL;
  q_36 = t;
  {
    ATerm k_26 = t;
    int l_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = q_36;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm m_26 = ATgetFirst((ATermList) t);
                ATerm n_26 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = q_36;
          }
        ;
        LocalPopChoice(l_26);
      }
    else
      {
        t = k_26;
        t = (ATerm) ATinsert(ATempty, q_36);
      }
    r_36 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), r_36);
    t = q_36;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm o_26 = t;
    int p_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_9 = NULL;
        t = eval_config_0_0(t);
        o_9 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), o_9);
        t = o_9;
        ;
        LocalPopChoice(p_26);
      }
    else
      {
        t = o_26;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm l_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_s_26;
  return(t);
}
ATerm n_6 (ATerm t)
{
  t = term_t_26;
  return(t);
}
ATerm o_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_u_26;
  return(t);
}
ATerm r_6 (ATerm t)
{
  t = term_w_26;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm x_26 = t;
  int a_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_6, m_6, n_6, t);
      ;
      LocalPopChoice(a_27);
    }
  else
    {
      t = x_26;
      t = Option_3_0(o_6, q_6, r_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm r_104 (ATerm), ATerm s_104 (ATerm), ATerm t)
{
  ATerm v_36 = NULL,w_36 = NULL,x_36 = NULL,y_36 = NULL,z_36 = NULL,a_37 = NULL;
  a_37 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_36 = ATgetFirst((ATermList) t);
      x_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_37);
  v_36 = t;
  t = w_36;
  t = r_104(t);
  y_36 = t;
  t = x_36;
  t = s_104(t);
  z_36 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(z_36), y_36), v_36);
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm f_37 = NULL;
  f_37 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), f_37);
  t = (ATerm) ATmakeAppl(sym_Program_1, f_37);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm g_149 (ATerm), ATerm t)
{
  ATerm e_37 = NULL;
  e_37 = t;
  {
    ATerm c_27 = t;
    int j_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_k_27;
        t = g_149(t);
        ;
        LocalPopChoice(j_27);
      }
    else
      {
        t = c_27;
      }
    t = e_37;
    {
      ATerm w_6 (ATerm t)
      {
        ATerm t_27 = t;
        int u_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_27 = t;
            int a_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(a_28);
              }
            else
              {
                t = z_27;
                t = g_149(t);
                t = Cons_2_0(_id, w_6, t);
              }
            ;
            LocalPopChoice(u_27);
          }
        else
          {
            t = t_27;
            {
              ATerm k_37 = NULL,l_37 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  k_37 = ATgetFirst((ATermList) t);
                  l_37 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(l_37), (ATerm) ATmakeAppl(sym_Undefined_1, k_37));
            }
          }
        return(t);
      }
      t = Cons_2_0(s_6, w_6, t);
    }
  }
  return(t);
}
ATerm a_7 (ATerm t)
{
  ATerm e_38 = NULL;
  e_38 = t;
  if(match_string(t, "--help"))
    {
      t = e_38;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = e_38;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = e_38;
        }
    }
  return(t);
}
ATerm b_7 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_f_28;
  return(t);
}
ATerm c_7 (ATerm t)
{
  t = term_g_28;
  return(t);
}
ATerm d_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm f_149 (ATerm), ATerm t)
{
  ATerm y_37 = NULL,z_37 = NULL,d_38 = NULL;
  y_37 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = y_37;
  {
    ATerm x_6 (ATerm t)
    {
      ATerm n_28 = t;
      int o_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_149(t);
          ;
          LocalPopChoice(o_28);
        }
      else
        {
          t = n_28;
          {
            ATerm g_29 = t;
            int h_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(a_7, b_7, c_7, t);
                ;
                LocalPopChoice(h_29);
              }
            else
              {
                t = g_29;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(x_6, t);
    {
      ATerm i_29 = t;
      int j_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_38 = NULL;
          j_38 = t;
          {
            ATerm k_29 = t;
            int l_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = j_38;
                {
                  ATerm m_29 = t;
                  int o_29 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm p_29 = t;
                        int s_29 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm w_10 = NULL;
                            t = eval_config_0_0(t);
                            w_10 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), w_10);
                            t = w_10;
                            ;
                            LocalPopChoice(s_29);
                          }
                        else
                          {
                            t = p_29;
                          }
                      }
                      ;
                      LocalPopChoice(o_29);
                    }
                  else
                    {
                      t = m_29;
                      t = fetch_1_0(d_7, t);
                    }
                  t = j_38;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(l_29);
              }
            else
              {
                t = k_29;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm x_29 = t;
                  int y_29 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm k_11 = NULL;
                      t = eval_config_0_0(t);
                      k_11 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), k_11);
                      t = k_11;
                      ;
                      LocalPopChoice(y_29);
                    }
                  else
                    {
                      t = x_29;
                    }
                  t = j_38;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(j_29);
        }
      else
        {
          t = i_29;
          {
            ATerm z_29 = t;
            int a_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_7 (ATerm t)
                {
                  ATerm f_7 (ATerm t)
                  {
                    if(((z_37 != NULL) && (z_37 != t)))
                      _fail(t);
                    else
                      z_37 = t;
                    return(t);
                  }
                  t = Undefined_1_0(f_7, t);
                  return(t);
                }
                t = fetch_1_0(e_7, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(z_37)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_i_25, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_37)), term_k_30));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(a_30);
              }
            else
              {
                t = z_29;
              }
          }
        }
      d_38 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = d_38;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm f_147 (ATerm), ATerm g_147 (ATerm), ATerm h_147 (ATerm), ATerm i_147 (ATerm), ATerm t)
{
  ATerm m_38 = NULL;
  t = parse_options_1_0(f_147, t);
  m_38 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), m_38);
  t = m_38;
  t = h_147(t);
  {
    ATerm o_30 = t;
    int p_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(g_147, t);
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
              t = i_147(t);
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
ATerm j_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_7 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_t_30;
  return(t);
}
ATerm l_7 (ATerm t)
{
  t = term_u_30;
  return(t);
}
ATerm m_7 (ATerm t)
{
  ATerm n_38 = NULL,o_38 = NULL;
  n_38 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm x_30 = t;
    int y_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_11 = NULL;
        t = eval_config_0_0(t);
        x_11 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), x_11);
        t = x_11;
        ;
        LocalPopChoice(y_30);
      }
    else
      {
        t = x_30;
      }
    o_38 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, o_38));
    t = n_38;
  }
  return(t);
}
ATerm h_7 (ATerm t)
{
  t = if_verbose2_1_0(m_7, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm o_146 (ATerm), ATerm p_146 (ATerm), ATerm q_146 (ATerm), ATerm t)
{
  ATerm g_7 (ATerm t)
  {
    ATerm z_30 = t;
    int a_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_146(t);
        ;
        LocalPopChoice(a_31);
      }
    else
      {
        t = z_30;
        {
          ATerm b_31 = t;
          int d_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(d_31);
            }
          else
            {
              t = b_31;
              {
                ATerm h_31 = t;
                int k_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(k_31);
                  }
                else
                  {
                    t = h_31;
                    {
                      ATerm l_31 = t;
                      int m_31 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(j_7, k_7, l_7, t);
                          ;
                          LocalPopChoice(m_31);
                        }
                      else
                        {
                          t = l_31;
                          {
                            ATerm n_31 = t;
                            int o_31 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(o_31);
                              }
                            else
                              {
                                t = n_31;
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
  ATerm i_7 (ATerm t)
  {
    ATerm p_38 = NULL,q_38 = NULL,f_12 = NULL;
    p_38 = t;
    {
      ATerm p_31 = t;
      int q_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_7 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((q_38 != NULL) && (q_38 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  q_38 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(o_7, t);
          ;
          LocalPopChoice(q_31);
        }
      else
        {
          t = p_31;
          t = term_r_31;
          q_38 = t;
        }
      t = not_null(q_38);
      t = ReadFromFile_0_0(t);
      f_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_38, f_12);
      t = apply_strategy_1_0(o_146, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(g_7, q_146, h_7, i_7, t);
  return(t);
}
ATerm u_7 (ATerm t)
{
  ATerm s_31 = t;
  int u_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Simplify_0_0(t);
      ;
      LocalPopChoice(u_31);
    }
  else
    {
      t = s_31;
      {
        ATerm v_31 = t;
        int w_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL;
            if(match_cons(t, sym_Seq_2))
              {
                a_39 = ATgetArgument(t, 0);
                b_39 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = b_39;
            if(match_cons(t, sym_Let_2))
              {
                c_39 = ATgetArgument(t, 0);
                d_39 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Let_2, c_39, (ATerm) ATmakeAppl(sym_Seq_2, a_39, d_39));
            ;
            LocalPopChoice(w_31);
          }
        else
          {
            t = v_31;
            {
              ATerm x_31 = t;
              int y_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = FuseScope_0_0(t);
                  ;
                  LocalPopChoice(y_31);
                }
              else
                {
                  t = x_31;
                  {
                    ATerm c_32 = t;
                    int d_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = WhereSavesCurrentTerm_0_0(t);
                        ;
                        LocalPopChoice(d_32);
                      }
                    else
                      {
                        t = c_32;
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
ATerm w_7 (ATerm t)
{
  ATerm e_32 = t;
  int h_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Simplify_0_0(t);
      ;
      LocalPopChoice(h_32);
    }
  else
    {
      t = e_32;
      {
        ATerm i_32 = t;
        int j_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL;
            if(match_cons(t, sym_Seq_2))
              {
                i_39 = ATgetArgument(t, 0);
                j_39 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = j_39;
            if(match_cons(t, sym_Let_2))
              {
                k_39 = ATgetArgument(t, 0);
                l_39 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Let_2, k_39, (ATerm) ATmakeAppl(sym_Seq_2, i_39, l_39));
            ;
            LocalPopChoice(j_32);
          }
        else
          {
            t = i_32;
            {
              ATerm k_32 = t;
              int m_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = FuseScope_0_0(t);
                  ;
                  LocalPopChoice(m_32);
                }
              else
                {
                  t = k_32;
                  {
                    ATerm o_32 = t;
                    int s_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = WhereSavesCurrentTerm_0_0(t);
                        ;
                        LocalPopChoice(s_32);
                      }
                    else
                      {
                        t = o_32;
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
ATerm y_7 (ATerm t)
{
  ATerm y_32 = t;
  int z_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Simplify_0_0(t);
      ;
      LocalPopChoice(z_32);
    }
  else
    {
      t = y_32;
      {
        ATerm d_33 = t;
        int e_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_39 = NULL,r_39 = NULL,s_39 = NULL,t_39 = NULL;
            if(match_cons(t, sym_Seq_2))
              {
                q_39 = ATgetArgument(t, 0);
                r_39 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = r_39;
            if(match_cons(t, sym_Let_2))
              {
                s_39 = ATgetArgument(t, 0);
                t_39 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Let_2, s_39, (ATerm) ATmakeAppl(sym_Seq_2, q_39, t_39));
            ;
            LocalPopChoice(e_33);
          }
        else
          {
            t = d_33;
            {
              ATerm g_33 = t;
              int j_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = FuseScope_0_0(t);
                  ;
                  LocalPopChoice(j_33);
                }
              else
                {
                  t = g_33;
                  {
                    ATerm k_33 = t;
                    int m_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = WhereSavesCurrentTerm_0_0(t);
                        ;
                        LocalPopChoice(m_33);
                      }
                    else
                      {
                        t = k_33;
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
ATerm z_7 (ATerm t)
{
  ATerm q_33 = t;
  int r_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = NarrowScope_0_0(t);
      ;
      LocalPopChoice(r_33);
    }
  else
    {
      t = q_33;
    }
  return(t);
}
ATerm b_8 (ATerm t)
{
  ATerm s_33 = t;
  int t_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Simplify_0_0(t);
      ;
      LocalPopChoice(t_33);
    }
  else
    {
      t = s_33;
      {
        ATerm u_33 = t;
        int v_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_39 = NULL,z_39 = NULL,a_40 = NULL,b_40 = NULL;
            if(match_cons(t, sym_Seq_2))
              {
                y_39 = ATgetArgument(t, 0);
                z_39 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = z_39;
            if(match_cons(t, sym_Let_2))
              {
                a_40 = ATgetArgument(t, 0);
                b_40 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Let_2, a_40, (ATerm) ATmakeAppl(sym_Seq_2, y_39, b_40));
            ;
            LocalPopChoice(v_33);
          }
        else
          {
            t = u_33;
            {
              ATerm w_33 = t;
              int c_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = FuseScope_0_0(t);
                  ;
                  LocalPopChoice(c_34);
                }
              else
                {
                  t = w_33;
                  {
                    ATerm d_34 = t;
                    int e_34 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = WhereSavesCurrentTerm_0_0(t);
                        ;
                        LocalPopChoice(e_34);
                      }
                    else
                      {
                        t = d_34;
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
ATerm a_8 (ATerm t)
{
  t = repeat_1_0(b_8, t);
  return(t);
}
ATerm t_7 (ATerm t)
{
  t = repeat_1_0(u_7, t);
  return(t);
}
ATerm v_7 (ATerm t)
{
  t = repeat_1_0(w_7, t);
  return(t);
}
ATerm x_7 (ATerm t)
{
  t = repeat_1_0(y_7, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm p_7 (ATerm t)
  {
    ATerm q_7 (ATerm t)
    {
      ATerm s_7 (ATerm t)
      {
        t = downup_1_0(t_7, t);
        t = downup_1_0(v_7, t);
        t = downup_1_0(x_7, t);
        t = topdown_1_0(z_7, t);
        t = downup_1_0(a_8, t);
        return(t);
      }
      t = apply_to_bodies_1_0(s_7, t);
      return(t);
    }
    t = _2_0(_id, q_7, t);
    return(t);
  }
  t = iowrap_3_0(p_7, _fail, default_usage_0_0, t);
  return(t);
}
