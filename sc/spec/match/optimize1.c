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
ATerm term_m_32;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_u_30;
ATerm term_r_28;
ATerm term_p_28;
ATerm term_a_28;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_c_27;
ATerm term_w_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_x_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_v_22;
ATerm term_k_21;
ATerm term_a_21;
ATerm term_w_12;
ATerm term_t_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_k_9;
ATerm term_j_8;
void init_constant_terms (void)
{
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym_Op_2, term_k_12, (ATerm) ATempty);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym_ConstType_1, term_l_12);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_24);
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(sym__3, term_q_27, term_r_27, term_j_8);
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm TestSavesCurrentTerm_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm WhereSavesCurrentTerm_0_0 (ATerm);
ATerm FuseScope_0_0 (ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm q_0 (ATerm);
ATerm r_0 (ATerm);
ATerm t_0 (ATerm);
ATerm y_0 (ATerm);
ATerm BuildMatchFusion_0_0 (ATerm);
ATerm MisMatch_0_0 (ATerm);
ATerm k_10 (ATerm a_9, ATerm b_9, ATerm d_9, ATerm);
ATerm BuildMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm h_122 (ATerm), ATerm);
ATerm LetHoist_0_0 (ATerm);
ATerm Idempotency_0_0 (ATerm);
ATerm AssociateR_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm c_1 (ATerm);
ATerm d_1 (ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm g_1 (ATerm);
ATerm j_1 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm l_1 (ATerm);
ATerm ElimFail_0_0 (ATerm);
ATerm ElimId_0_0 (ATerm);
ATerm Simplify_0_0 (ATerm);
ATerm repeat_1_0 (ATerm o_137 (ATerm), ATerm);
ATerm downup_1_0 (ATerm f_121 (ATerm), ATerm);
ATerm diff_1_0 (ATerm c_129 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm p_125 (ATerm), ATerm q_125 (ATerm), ATerm r_125 (ATerm), ATerm s_125 (ATerm), ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm while_not_2_0 (ATerm d_138 (ATerm), ATerm e_138 (ATerm), ATerm);
ATerm for_3_0 (ATerm g_138 (ATerm), ATerm h_138 (ATerm), ATerm i_138 (ATerm), ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm d_2 (ATerm);
ATerm f_2 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm isect_1_0 (ATerm a_129 (ATerm), ATerm);
ATerm DynamicRules_1_0 (ATerm j_108 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm a_108 (ATerm), ATerm b_108 (ATerm), ATerm c_108 (ATerm), ATerm d_108 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm m_109 (ATerm), ATerm n_109 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm e_120 (ATerm), ATerm f_120 (ATerm), ATerm g_120 (ATerm), ATerm);
ATerm l_2 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm s_2 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm x_2 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm union_1_0 (ATerm h_129 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm v_131 (ATerm), ATerm w_131 (ATerm), ATerm x_131 (ATerm), ATerm);
ATerm j_3 (ATerm);
ATerm m_3 (ATerm);
ATerm o_3 (ATerm);
ATerm r_3 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm w_3 (ATerm);
ATerm free_vars_3_0 (ATerm x_135 (ATerm), ATerm y_135 (ATerm), ATerm z_135 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm NarrowScope_0_0 (ATerm);
ATerm topdown_1_0 (ATerm d_121 (ATerm), ATerm);
ATerm WidenScope_0_0 (ATerm);
ATerm SDefT_4_0 (ATerm u_111 (ATerm), ATerm v_111 (ATerm), ATerm w_111 (ATerm), ATerm x_111 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm r_111 (ATerm), ATerm s_111 (ATerm), ATerm t_111 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm u_104 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm z_104 (ATerm), ATerm);
ATerm n_4 (ATerm);
ATerm apply_to_bodies_1_0 (ATerm e_119 (ATerm), ATerm);
ATerm _2_0 (ATerm b_100 (ATerm), ATerm c_100 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm c_143 (ATerm), ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm e_146 (ATerm), ATerm);
ATerm c_31 (ATerm w_30, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm p_127 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm v_127 (ATerm), ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm n_5 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm n_144 (ATerm), ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
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
ATerm f_6 (ATerm);
ATerm g_6 (ATerm);
ATerm h_6 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm t_131 (ATerm), ATerm u_131 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm i_6 (ATerm);
ATerm j_6 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm m_144 (ATerm), ATerm);
ATerm k_6 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm l_6 (ATerm);
ATerm need_help_1_0 (ATerm c_147 (ATerm), ATerm);
ATerm map_1_0 (ATerm e_127 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm y_118 (ATerm), ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm z_118 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm t_6 (ATerm);
ATerm u_6 (ATerm);
ATerm v_6 (ATerm);
ATerm w_6 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm q_104 (ATerm), ATerm r_104 (ATerm), ATerm);
ATerm x_6 (ATerm);
ATerm parse_options_p__1_0 (ATerm f_149 (ATerm), ATerm);
ATerm b_7 (ATerm);
ATerm c_7 (ATerm);
ATerm g_7 (ATerm);
ATerm h_7 (ATerm);
ATerm parse_options_1_0 (ATerm e_149 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm e_147 (ATerm), ATerm f_147 (ATerm), ATerm g_147 (ATerm), ATerm h_147 (ATerm), ATerm);
ATerm n_7 (ATerm);
ATerm p_7 (ATerm);
ATerm q_7 (ATerm);
ATerm r_7 (ATerm);
ATerm s_7 (ATerm);
ATerm iowrap_3_0 (ATerm n_146 (ATerm), ATerm o_146 (ATerm), ATerm p_146 (ATerm), ATerm);
ATerm u_7 (ATerm);
ATerm v_7 (ATerm);
ATerm w_7 (ATerm);
ATerm x_7 (ATerm);
ATerm y_7 (ATerm);
ATerm a_8 (ATerm);
ATerm b_8 (ATerm);
ATerm c_8 (ATerm);
ATerm d_8 (ATerm);
ATerm f_8 (ATerm);
ATerm g_8 (ATerm);
ATerm h_8 (ATerm);
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
  t = term_j_8;
  t = whoami_0_0(t);
  f_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), f_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = b_0;
  return(t);
}
ATerm TestSavesCurrentTerm_0_0 (ATerm t)
{
  ATerm h_0 = NULL,j_0 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      h_0 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = new_0_0(t);
  j_0 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, j_0), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, j_0)), (ATerm) ATmakeAppl(sym_Seq_2, h_0, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, j_0)))));
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm WhereSavesCurrentTerm_0_0 (ATerm t)
{
  ATerm m_0 = NULL,o_0 = NULL;
  if(match_cons(t, sym_Where_1))
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
ATerm FuseScope_0_0 (ATerm t)
{
  ATerm u_0 = NULL,v_0 = NULL,w_0 = NULL,x_0 = NULL;
  if(match_cons(t, sym_Scope_2))
    {
      u_0 = ATgetArgument(t, 0);
      {
        ATerm k_8 = ATgetArgument(t, 1);
        if(match_cons(k_8, sym_Scope_2))
          {
            v_0 = ATgetArgument(k_8, 0);
            w_0 = ATgetArgument(k_8, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_0, v_0);
  {
    ATerm l_8 = t;
    int m_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm o_8 = ATgetArgument(t, 0);
            ATerm p_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_0;
        {
          ATerm p_0 (ATerm t)
          {
            t = v_0;
            return(t);
          }
          t = at_end_1_0(p_0, t);
        }
        ;
        LocalPopChoice(m_8);
      }
    else
      {
        t = l_8;
        {
          ATerm s_0 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, u_0, v_0));
          if(match_cons(t, sym__2))
            {
              ATerm q_8 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) q_8) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              s_0 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = s_0;
          t = concat_0_0(t);
        }
      }
    x_0 = t;
    t = (ATerm) ATmakeAppl(sym_Scope_2, x_0, w_0);
  }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm h_1 = NULL,i_1 = NULL,k_1 = NULL,m_1 = NULL,n_1 = NULL,o_1 = NULL,p_1 = NULL;
  if(match_cons(t, sym__2))
    {
      k_1 = ATgetArgument(t, 0);
      m_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_1;
  if(match_cons(t, sym_Build_1))
    {
      ATerm r_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_1;
  if(match_cons(t, sym_Where_1))
    {
      n_1 = ATgetArgument(t, 0);
      t = n_1;
      if(match_cons(t, sym_Prim_2))
        {
          h_1 = ATgetArgument(t, 0);
          i_1 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Prim_2, h_1, i_1);
    }
  else
    {
      if(match_cons(t, sym_Prim_2))
        {
          n_1 = ATgetArgument(t, 0);
          o_1 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_Prim_2, n_1, o_1);
        }
      else
        {
          if(match_cons(t, sym_PrimT_3))
            {
              n_1 = ATgetArgument(t, 0);
              o_1 = ATgetArgument(t, 1);
              p_1 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_PrimT_3, n_1, o_1, p_1);
        }
    }
  return(t);
}
ATerm q_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_8 = ATgetArgument(t, 0);
      if(((ATgetType(s_8) != AT_LIST) || !(ATisEmpty(s_8))))
        _fail(t);
      {
        ATerm t_8 = ATgetArgument(t, 1);
        if(((ATgetType(t_8) != AT_LIST) || !(ATisEmpty(t_8))))
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
  ATerm r_2 = NULL,w_2 = NULL,a_3 = NULL,d_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_8 = ATgetArgument(t, 0);
      if(((ATgetType(u_8) == AT_LIST) && !(ATisEmpty(u_8))))
        {
          r_2 = ATgetFirst((ATermList) u_8);
          a_3 = (ATerm) ATgetNext((ATermList) u_8);
        }
      else
        _fail(t);
      {
        ATerm v_8 = ATgetArgument(t, 1);
        if(((ATgetType(v_8) == AT_LIST) && !(ATisEmpty(v_8))))
          {
            w_2 = ATgetFirst((ATermList) v_8);
            d_3 = (ATerm) ATgetNext((ATermList) v_8);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_2, w_2), (ATerm) ATmakeAppl(sym__2, a_3, d_3));
  return(t);
}
ATerm t_0 (ATerm t)
{
  ATerm e_3 = NULL,g_3 = NULL;
  if(match_cons(t, sym__2))
    {
      e_3 = ATgetArgument(t, 0);
      g_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_3), e_3);
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm h_3 = NULL,i_3 = NULL;
  if(match_cons(t, sym__2))
    {
      h_3 = ATgetArgument(t, 0);
      i_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, h_3), (ATerm) ATmakeAppl(sym_Match_1, i_3));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm b_2 = NULL,c_2 = NULL,k_2 = NULL,q_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_8 = ATgetArgument(t, 0);
      if(match_cons(w_8, sym_Build_1))
        {
          ATerm y_8 = ATgetArgument(w_8, 0);
          if(match_cons(y_8, sym_Op_2))
            {
              c_2 = ATgetArgument(y_8, 0);
              b_2 = ATgetArgument(y_8, 1);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm x_8 = ATgetArgument(t, 1);
        if(match_cons(x_8, sym_Match_1))
          {
            ATerm z_8 = ATgetArgument(x_8, 0);
            if(match_cons(z_8, sym_Op_2))
              {
                if((c_2 != ATgetArgument(z_8, 0)))
                  {
                    _fail(ATgetArgument(z_8, 0));
                  }
                k_2 = ATgetArgument(z_8, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, b_2, k_2);
  t = genzip_4_0(q_0, r_0, t_0, y_0, t);
  q_2 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, q_2), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, c_2, b_2)));
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm k_3 = NULL,l_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_9 = ATgetArgument(t, 0);
      if(match_cons(c_9, sym_Build_1))
        {
          ATerm f_9 = ATgetArgument(c_9, 0);
          if(match_cons(f_9, sym_Op_2))
            {
              k_3 = ATgetArgument(f_9, 0);
              {
                ATerm g_9 = ATgetArgument(f_9, 1);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm e_9 = ATgetArgument(t, 1);
        if(match_cons(e_9, sym_Match_1))
          {
            ATerm h_9 = ATgetArgument(e_9, 0);
            if(match_cons(h_9, sym_Op_2))
              {
                l_3 = ATgetArgument(h_9, 0);
                {
                  ATerm i_9 = ATgetArgument(h_9, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, k_3, l_3);
  {
    ATerm j_9 = t;
    if((PushChoice() == 0))
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
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_9;
      }
    t = term_k_9;
  }
  return(t);
}
ATerm k_10 (ATerm a_9, ATerm b_9, ATerm d_9, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, a_9, b_9);
  {
    ATerm l_9 = t;
    int n_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = MisMatch_0_0(t);
        ;
        LocalPopChoice(n_9);
      }
    else
      {
        t = l_9;
        {
          ATerm o_9 = t;
          int p_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = BuildMatchFusion_0_0(t);
              ;
              LocalPopChoice(p_9);
            }
          else
            {
              t = o_9;
              {
                ATerm s_9 = t;
                int t_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm m_9 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        ATerm w_9 = ATgetArgument(t, 0);
                        ATerm x_9 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = a_9;
                    if(match_cons(t, sym_Build_1))
                      {
                        ATerm y_9 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = b_9;
                    if(match_cons(t, sym_Build_1))
                      {
                        m_9 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Build_1, m_9);
                    ;
                    LocalPopChoice(t_9);
                  }
                else
                  {
                    t = s_9;
                    {
                      ATerm z_9 = t;
                      int a_10 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = BuildPrim_0_0(t);
                          ;
                          LocalPopChoice(a_10);
                        }
                      else
                        {
                          t = z_9;
                          {
                            ATerm q_9 = NULL,r_9 = NULL,u_9 = NULL,v_9 = NULL;
                            if(match_cons(t, sym__2))
                              {
                                ATerm d_10 = ATgetArgument(t, 0);
                                ATerm f_10 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = a_9;
                            if(match_cons(t, sym_Match_1))
                              {
                                q_9 = ATgetArgument(t, 0);
                                t = b_9;
                                if(match_cons(t, sym_Match_1))
                                  {
                                    u_9 = ATgetArgument(t, 0);
                                    t = u_9;
                                    if((q_9 != t))
                                      {
                                        _fail(t);
                                      }
                                    t = (ATerm) ATmakeAppl(sym_Match_1, q_9);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        u_9 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = q_9;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        r_9 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = u_9;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        v_9 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = v_9;
                                    if((r_9 != t))
                                      {
                                        _fail(t);
                                      }
                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, r_9));
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Build_1))
                                  {
                                    q_9 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = b_9;
                                if(match_cons(t, sym_Match_1))
                                  {
                                    u_9 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = u_9;
                                if((q_9 != t))
                                  {
                                    _fail(t);
                                  }
                                t = (ATerm) ATmakeAppl(sym_Build_1, q_9);
                              }
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
  ATerm b_10 = NULL,c_10 = NULL,e_10 = NULL,g_10 = NULL,i_10 = NULL;
  e_10 = t;
  if(match_cons(t, sym_Seq_2))
    {
      g_10 = ATgetArgument(t, 0);
      i_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_10;
  if(match_cons(t, sym_Seq_2))
    {
      b_10 = ATgetArgument(t, 0);
      c_10 = ATgetArgument(t, 1);
      {
        ATerm h_10 = t;
        int j_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_1 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, g_10, b_10);
            {
              ATerm l_10 = t;
              int p_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = MisMatch_0_0(t);
                  ;
                  LocalPopChoice(p_10);
                }
              else
                {
                  t = l_10;
                  {
                    ATerm q_10 = t;
                    int r_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = BuildMatchFusion_0_0(t);
                        ;
                        LocalPopChoice(r_10);
                      }
                    else
                      {
                        t = q_10;
                        {
                          ATerm t_10 = t;
                          int u_10 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm e_2 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  ATerm v_10 = ATgetArgument(t, 0);
                                  ATerm w_10 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = g_10;
                              if(match_cons(t, sym_Build_1))
                                {
                                  ATerm c_11 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = b_10;
                              if(match_cons(t, sym_Build_1))
                                {
                                  e_2 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym_Build_1, e_2);
                              ;
                              LocalPopChoice(u_10);
                            }
                          else
                            {
                              t = t_10;
                              {
                                ATerm d_11 = t;
                                int f_11 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildPrim_0_0(t);
                                    ;
                                    LocalPopChoice(f_11);
                                  }
                                else
                                  {
                                    t = d_11;
                                    {
                                      ATerm i_2 = NULL,j_2 = NULL,m_2 = NULL,n_2 = NULL;
                                      if(match_cons(t, sym__2))
                                        {
                                          ATerm i_11 = ATgetArgument(t, 0);
                                          ATerm j_11 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = g_10;
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          i_2 = ATgetArgument(t, 0);
                                          t = b_10;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              m_2 = ATgetArgument(t, 0);
                                              t = m_2;
                                              if((i_2 != t))
                                                {
                                                  _fail(t);
                                                }
                                              t = (ATerm) ATmakeAppl(sym_Match_1, i_2);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Build_1))
                                                {
                                                  m_2 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = i_2;
                                              if(match_cons(t, sym_Var_1))
                                                {
                                                  j_2 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = m_2;
                                              if(match_cons(t, sym_Var_1))
                                                {
                                                  n_2 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = n_2;
                                              if((j_2 != t))
                                                {
                                                  _fail(t);
                                                }
                                              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, j_2));
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_Build_1))
                                            {
                                              i_2 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = b_10;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              m_2 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = m_2;
                                          if((i_2 != t))
                                            {
                                              _fail(t);
                                            }
                                          t = (ATerm) ATmakeAppl(sym_Build_1, i_2);
                                        }
                                    }
                                  }
                              }
                            }
                        }
                      }
                  }
                }
              q_1 = t;
              t = (ATerm) ATmakeAppl(sym_Seq_2, q_1, c_10);
            }
            ;
            LocalPopChoice(j_10);
          }
        else
          {
            t = h_10;
            t = k_10(g_10, i_10, e_10, t);
          }
      }
    }
  else
    {
      t = k_10(g_10, i_10, e_10, t);
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm h_122 (ATerm), ATerm t)
{
  ATerm m_10 (ATerm t)
  {
    ATerm k_11 = t;
    int l_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_122(t);
        ;
        LocalPopChoice(l_11);
      }
    else
      {
        t = k_11;
        t = SRTS_one(m_10, t);
      }
    return(t);
  }
  t = m_10(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm n_10 = NULL,o_10 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      ATerm n_11 = ATgetArgument(t, 0);
      if(((ATgetType(n_11) == AT_LIST) && !(ATisEmpty(n_11))))
        {
          ATerm p_11 = ATgetFirst((ATermList) n_11);
          if(match_cons(p_11, sym_SDefT_4))
            {
              o_10 = ATgetArgument(p_11, 0);
              {
                ATerm r_11 = ATgetArgument(p_11, 1);
                if(((ATgetType(r_11) != AT_LIST) || !(ATisEmpty(r_11))))
                  _fail(t);
              }
              {
                ATerm s_11 = ATgetArgument(p_11, 2);
                if(((ATgetType(s_11) != AT_LIST) || !(ATisEmpty(s_11))))
                  _fail(t);
              }
              n_10 = ATgetArgument(p_11, 3);
            }
          else
            _fail(t);
          {
            ATerm q_11 = (ATerm) ATgetNext((ATermList) n_11);
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
            ATerm t_11 = ATgetArgument(o_11, 0);
            if(match_cons(t_11, sym_SVar_1))
              {
                if((o_10 != ATgetArgument(t_11, 0)))
                  {
                    _fail(ATgetArgument(t_11, 0));
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
              ATerm w_11 = ATgetArgument(o_11, 2);
              if(((ATgetType(w_11) != AT_LIST) || !(ATisEmpty(w_11))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = n_10;
  {
    ATerm y_11 = t;
    if((PushChoice() == 0))
      {
        ATerm z_0 (ATerm t)
        {
          if(match_cons(t, sym_CallT_3))
            {
              ATerm z_11 = ATgetArgument(t, 0);
              if(match_cons(z_11, sym_SVar_1))
                {
                  if((o_10 != ATgetArgument(z_11, 0)))
                    {
                      _fail(ATgetArgument(z_11, 0));
                    }
                }
              else
                _fail(t);
              {
                ATerm e_12 = ATgetArgument(t, 1);
                if(((ATgetType(e_12) != AT_LIST) || !(ATisEmpty(e_12))))
                  _fail(t);
              }
              {
                ATerm f_12 = ATgetArgument(t, 2);
                if(((ATgetType(f_12) != AT_LIST) || !(ATisEmpty(f_12))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(z_0, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = y_11;
      }
    t = n_10;
  }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm x_10 = NULL,y_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL,e_11 = NULL,g_11 = NULL,h_11 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      g_11 = ATgetArgument(t, 0);
      t = g_11;
      if(match_cons(t, sym_Seq_2))
        {
          e_11 = ATgetArgument(t, 0);
          y_10 = ATgetArgument(t, 1);
          t = e_11;
          if(match_cons(t, sym_Where_1))
            {
              x_10 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = y_10;
          if(match_cons(t, sym_Seq_2))
            {
              z_10 = ATgetArgument(t, 0);
              b_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_10;
          if(match_cons(t, sym_Build_1))
            {
              a_11 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, x_10, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, a_11), b_11)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              e_11 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, e_11);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          g_11 = ATgetArgument(t, 0);
          t = g_11;
          if(match_cons(t, sym_Test_1))
            {
              e_11 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, e_11);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              g_11 = ATgetArgument(t, 0);
              t = g_11;
              if(match_cons(t, sym_Not_1))
                {
                  e_11 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, e_11);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  g_11 = ATgetArgument(t, 0);
                  h_11 = ATgetArgument(t, 1);
                  t = h_11;
                  if((g_11 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      g_11 = ATgetArgument(t, 0);
                      h_11 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = h_11;
                  if((g_11 != t))
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
  ATerm a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      a_12 = ATgetArgument(t, 0);
      d_12 = ATgetArgument(t, 1);
      t = a_12;
      if(match_cons(t, sym_LChoice_2))
        {
          b_12 = ATgetArgument(t, 0);
          c_12 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, b_12, (ATerm) ATmakeAppl(sym_LChoice_2, c_12, d_12));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          a_12 = ATgetArgument(t, 0);
          d_12 = ATgetArgument(t, 1);
          t = a_12;
          if(match_cons(t, sym_Seq_2))
            {
              b_12 = ATgetArgument(t, 0);
              c_12 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, b_12, (ATerm) ATmakeAppl(sym_Seq_2, c_12, d_12));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              a_12 = ATgetArgument(t, 0);
              d_12 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = a_12;
          if(match_cons(t, sym_Choice_2))
            {
              b_12 = ATgetArgument(t, 0);
              c_12 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, b_12, (ATerm) ATmakeAppl(sym_Choice_2, c_12, d_12));
        }
    }
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm g_12 = t;
  int h_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(n_0, _id, t);
      {
        ATerm a_1 (ATerm t)
        {
          ATerm i_12 = t;
          int j_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(n_0, t);
              ;
              LocalPopChoice(j_12);
            }
          else
            {
              t = i_12;
            }
          return(t);
        }
        t = Cons_2_0(_id, a_1, t);
      }
      ;
      LocalPopChoice(h_12);
    }
  else
    {
      t = g_12;
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
  ATerm w_13 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      w_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, w_13, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_m_12), term_m_12));
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm n_12 = t;
  int o_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_13 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, y_13, term_m_12);
      ;
      LocalPopChoice(o_12);
    }
  else
    {
      t = n_12;
    }
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm g_14 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      g_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, g_14, term_m_12);
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm p_12 = t;
  int q_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_14 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, k_14, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_m_12), term_m_12));
      ;
      LocalPopChoice(q_12);
    }
  else
    {
      t = p_12;
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
  t = (ATerm) ATmakeAppl(sym_VarDec_2, z_14, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_m_12), term_m_12));
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm r_12 = t;
  int s_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_15 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, b_15, term_m_12);
      ;
      LocalPopChoice(s_12);
    }
  else
    {
      t = r_12;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL,b_13 = NULL,d_13 = NULL,e_13 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      d_13 = ATgetArgument(t, 0);
      e_13 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, d_13, e_13);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          d_13 = ATgetArgument(t, 0);
          t = d_13;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              x_12 = ATgetFirst((ATermList) t);
              y_12 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, x_12, (ATerm) ATmakeAppl(sym_LChoices_1, y_12));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_k_9;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              d_13 = ATgetArgument(t, 0);
              t = d_13;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  x_12 = ATgetFirst((ATermList) t);
                  y_12 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, x_12, (ATerm) ATmakeAppl(sym_Choices_1, y_12));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_k_9;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  d_13 = ATgetArgument(t, 0);
                  t = d_13;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      x_12 = ATgetFirst((ATermList) t);
                      y_12 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_12, (ATerm) ATmakeAppl(sym_Seqs_1, y_12));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_t_12;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      d_13 = ATgetArgument(t, 0);
                      e_13 = ATgetArgument(t, 1);
                      b_13 = ATgetArgument(t, 2);
                      z_12 = ATgetArgument(t, 3);
                      {
                        ATerm u_13 = NULL,v_13 = NULL;
                        t = e_13;
                        t = map1_1_0(c_1, t);
                        u_13 = t;
                        t = b_13;
                        t = map1_1_0(d_1, t);
                        v_13 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, d_13, u_13, v_13, z_12);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          d_13 = ATgetArgument(t, 0);
                          e_13 = ATgetArgument(t, 1);
                          b_13 = ATgetArgument(t, 2);
                          z_12 = ATgetArgument(t, 3);
                          {
                            ATerm u_12 = t;
                            int v_12 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm e_14 = NULL,f_14 = NULL;
                                t = b_13;
                                t = map1_1_0(e_1, t);
                                e_14 = t;
                                t = e_13;
                                t = map_1_0(f_1, t);
                                f_14 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, d_13, f_14, e_14, z_12);
                                ;
                                LocalPopChoice(v_12);
                              }
                            else
                              {
                                t = u_12;
                                {
                                  ATerm w_14 = NULL,y_14 = NULL;
                                  t = e_13;
                                  t = map1_1_0(g_1, t);
                                  w_14 = t;
                                  t = b_13;
                                  t = map_1_0(j_1, t);
                                  y_14 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, d_13, w_14, y_14, z_12);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              d_13 = ATgetArgument(t, 0);
                              e_13 = ATgetArgument(t, 1);
                              b_13 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, e_13, (ATerm) ATmakeAppl(sym_Op_2, term_w_12, (ATerm) ATinsert(ATinsert(ATempty, b_13), d_13)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  d_13 = ATgetArgument(t, 0);
                                  e_13 = ATgetArgument(t, 1);
                                  b_13 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, b_13)), d_13), (ATerm) ATmakeAppl(sym_Build_1, e_13)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      d_13 = ATgetArgument(t, 0);
                                      e_13 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, d_13, (ATerm) ATmakeAppl(sym_Match_1, e_13));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          d_13 = ATgetArgument(t, 0);
                                          e_13 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, d_13), e_13);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              d_13 = ATgetArgument(t, 0);
                                              e_13 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, e_13), d_13);
                                        }
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
ATerm l_1 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      v_16 = ATgetArgument(t, 0);
      t = v_16;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_k_9;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          v_16 = ATgetArgument(t, 0);
          t = v_16;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_t_12;
        }
      else
        {
          ATerm a_13 = t;
          int c_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_Seq_2))
                {
                  v_16 = ATgetArgument(t, 0);
                  {
                    ATerm f_13 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(c_13);
              t = v_16;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_k_9;
            }
          else
            {
              t = a_13;
              {
                ATerm g_13 = t;
                int h_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Scope_2))
                      {
                        ATerm i_13 = ATgetArgument(t, 0);
                        w_16 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(h_13);
                    t = w_16;
                    if(!(match_cons(t, sym_Fail_0)))
                      _fail(t);
                    t = term_k_9;
                  }
                else
                  {
                    t = g_13;
                    {
                      ATerm j_13 = t;
                      int k_13 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_Rec_2))
                            {
                              ATerm l_13 = ATgetArgument(t, 0);
                              w_16 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(k_13);
                          t = w_16;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_k_9;
                        }
                      else
                        {
                          t = j_13;
                          if(match_cons(t, sym_Some_1))
                            {
                              v_16 = ATgetArgument(t, 0);
                              t = v_16;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_k_9;
                            }
                          else
                            {
                              if(match_cons(t, sym_One_1))
                                {
                                  v_16 = ATgetArgument(t, 0);
                                  t = v_16;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_k_9;
                                }
                              else
                                {
                                  ATerm m_13 = t;
                                  int n_13 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_Path_2))
                                        {
                                          ATerm o_13 = ATgetArgument(t, 0);
                                          w_16 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(n_13);
                                      t = w_16;
                                      if(!(match_cons(t, sym_Fail_0)))
                                        _fail(t);
                                      t = term_k_9;
                                    }
                                  else
                                    {
                                      t = m_13;
                                      {
                                        ATerm p_13 = t;
                                        int q_13 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            if(match_cons(t, sym_Cong_2))
                                              {
                                                ATerm r_13 = ATgetArgument(t, 0);
                                                w_16 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            LocalPopChoice(q_13);
                                            t = w_16;
                                            t = fetch_1_0(l_1, t);
                                            t = term_k_9;
                                          }
                                        else
                                          {
                                            t = p_13;
                                            if(match_cons(t, sym_Choice_2))
                                              {
                                                v_16 = ATgetArgument(t, 0);
                                                w_16 = ATgetArgument(t, 1);
                                                t = w_16;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    t = v_16;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm s_13 = t;
                                                        int t_13 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = w_16;
                                                            ;
                                                            LocalPopChoice(t_13);
                                                          }
                                                        else
                                                          {
                                                            t = s_13;
                                                            t = v_16;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = v_16;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = v_16;
                                                    if(!(match_cons(t, sym_Fail_0)))
                                                      _fail(t);
                                                    t = w_16;
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_LChoice_2))
                                                  {
                                                    v_16 = ATgetArgument(t, 0);
                                                    w_16 = ATgetArgument(t, 1);
                                                    t = w_16;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        t = v_16;
                                                        if(match_cons(t, sym_Fail_0))
                                                          {
                                                            ATerm x_13 = t;
                                                            int z_13 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = w_16;
                                                                ;
                                                                LocalPopChoice(z_13);
                                                              }
                                                            else
                                                              {
                                                                t = x_13;
                                                                t = v_16;
                                                              }
                                                          }
                                                        else
                                                          {
                                                            t = v_16;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = v_16;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = w_16;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Where_1))
                                                      {
                                                        v_16 = ATgetArgument(t, 0);
                                                        t = v_16;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = term_k_9;
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_GuardedLChoice_3))
                                                          {
                                                            v_16 = ATgetArgument(t, 0);
                                                            w_16 = ATgetArgument(t, 1);
                                                            x_16 = ATgetArgument(t, 2);
                                                          }
                                                        else
                                                          _fail(t);
                                                        t = x_16;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, v_16, w_16);
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                    }
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
  ATerm g_18 = NULL,j_18 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      j_18 = ATgetArgument(t, 0);
      t = j_18;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_t_12;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          j_18 = ATgetArgument(t, 0);
          t = j_18;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_k_9;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              j_18 = ATgetArgument(t, 0);
              g_18 = ATgetArgument(t, 1);
              t = g_18;
              if(match_cons(t, sym_Id_0))
                {
                  t = j_18;
                  if(match_cons(t, sym_Id_0))
                    {
                      ATerm a_14 = t;
                      int b_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = g_18;
                          ;
                          LocalPopChoice(b_14);
                        }
                      else
                        {
                          t = a_14;
                          t = j_18;
                        }
                    }
                  else
                    {
                      t = j_18;
                    }
                }
              else
                {
                  t = j_18;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = g_18;
                }
            }
          else
            {
              ATerm c_14 = t;
              int d_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      j_18 = ATgetArgument(t, 0);
                      {
                        ATerm h_14 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(d_14);
                  t = j_18;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_t_12;
                }
              else
                {
                  t = c_14;
                  {
                    ATerm i_14 = t;
                    int j_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            ATerm l_14 = ATgetArgument(t, 0);
                            g_18 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(j_14);
                        t = g_18;
                        if(!(match_cons(t, sym_Id_0)))
                          _fail(t);
                        t = term_t_12;
                      }
                    else
                      {
                        t = i_14;
                        {
                          ATerm m_14 = t;
                          int n_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Rec_2))
                                {
                                  ATerm o_14 = ATgetArgument(t, 0);
                                  g_18 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(n_14);
                              t = g_18;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_t_12;
                            }
                          else
                            {
                              t = m_14;
                              if(match_cons(t, sym_All_1))
                                {
                                  j_18 = ATgetArgument(t, 0);
                                  t = j_18;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_t_12;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Where_1))
                                    {
                                      j_18 = ATgetArgument(t, 0);
                                      t = j_18;
                                      if(!(match_cons(t, sym_Id_0)))
                                        _fail(t);
                                      t = term_t_12;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          j_18 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = j_18;
                                      if(!(match_cons(t, sym_Wld_0)))
                                        _fail(t);
                                      t = term_t_12;
                                    }
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
  ATerm p_14 = t;
  int q_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(q_14);
    }
  else
    {
      t = p_14;
      {
        ATerm r_14 = t;
        int s_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(s_14);
          }
        else
          {
            t = r_14;
            {
              ATerm t_14 = t;
              int u_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(u_14);
                }
              else
                {
                  t = t_14;
                  {
                    ATerm v_14 = t;
                    int x_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(x_14);
                      }
                    else
                      {
                        t = v_14;
                        {
                          ATerm a_15 = t;
                          int c_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(c_15);
                            }
                          else
                            {
                              t = a_15;
                              {
                                ATerm d_15 = t;
                                int e_15 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm u_18 = NULL,v_18 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        u_18 = ATgetArgument(t, 0);
                                        v_18 = ATgetArgument(t, 1);
                                        t = u_18;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = v_18;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            u_18 = ATgetArgument(t, 0);
                                            v_18 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = u_18;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = v_18;
                                      }
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
                                          t = LetHoist_0_0(t);
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
                                                t = BuildMatch_0_0(t);
                                                ;
                                                LocalPopChoice(i_15);
                                              }
                                            else
                                              {
                                                t = h_15;
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
ATerm repeat_1_0 (ATerm o_137 (ATerm), ATerm t)
{
  ATerm c_19 (ATerm t)
  {
    ATerm j_15 = t;
    int k_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_137(t);
        t = c_19(t);
        ;
        LocalPopChoice(k_15);
      }
    else
      {
        t = j_15;
      }
    return(t);
  }
  t = c_19(t);
  return(t);
}
ATerm downup_1_0 (ATerm f_121 (ATerm), ATerm t)
{
  t = f_121(t);
  {
    ATerm r_1 (ATerm t)
    {
      t = downup_1_0(f_121, t);
      return(t);
    }
    t = SRTS_all(r_1, t);
    t = f_121(t);
  }
  return(t);
}
ATerm diff_1_0 (ATerm c_129 (ATerm), ATerm t)
{
  ATerm d_19 = NULL,e_19 = NULL;
  if(match_cons(t, sym__2))
    {
      d_19 = ATgetArgument(t, 0);
      e_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_19;
  {
    ATerm f_19 (ATerm t)
    {
      ATerm l_15 = t;
      int m_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
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
                ATerm y_2 = NULL,z_2 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    y_2 = ATgetFirst((ATermList) t);
                    z_2 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = e_19;
                {
                  ATerm s_1 (ATerm t)
                  {
                    ATerm b_3 = NULL;
                    b_3 = t;
                    t = (ATerm) ATmakeAppl(sym__2, y_2, b_3);
                    t = c_129(t);
                    return(t);
                  }
                  t = fetch_1_0(s_1, t);
                  t = z_2;
                  t = f_19(t);
                }
                ;
                LocalPopChoice(o_15);
              }
            else
              {
                t = n_15;
                t = Cons_2_0(_id, f_19, t);
              }
          }
        }
      return(t);
    }
    t = f_19(t);
  }
  return(t);
}
ATerm genzip_4_0 (ATerm p_125 (ATerm), ATerm q_125 (ATerm), ATerm r_125 (ATerm), ATerm s_125 (ATerm), ATerm t)
{
  ATerm g_19 (ATerm t)
  {
    ATerm p_15 = t;
    int q_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_125(t);
        ;
        LocalPopChoice(q_15);
      }
    else
      {
        t = p_15;
        t = q_125(t);
        t = _2_0(s_125, g_19, t);
        t = r_125(t);
      }
    return(t);
  }
  t = g_19(t);
  return(t);
}
ATerm t_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_15 = ATgetArgument(t, 0);
      if(((ATgetType(r_15) != AT_LIST) || !(ATisEmpty(r_15))))
        _fail(t);
      {
        ATerm s_15 = ATgetArgument(t, 1);
        if(((ATgetType(s_15) != AT_LIST) || !(ATisEmpty(s_15))))
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
  ATerm r_19 = NULL,s_19 = NULL,v_19 = NULL,w_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_15 = ATgetArgument(t, 0);
      if(((ATgetType(t_15) == AT_LIST) && !(ATisEmpty(t_15))))
        {
          r_19 = ATgetFirst((ATermList) t_15);
          v_19 = (ATerm) ATgetNext((ATermList) t_15);
        }
      else
        _fail(t);
      {
        ATerm u_15 = ATgetArgument(t, 1);
        if(((ATgetType(u_15) == AT_LIST) && !(ATisEmpty(u_15))))
          {
            s_19 = ATgetFirst((ATermList) u_15);
            w_19 = (ATerm) ATgetNext((ATermList) u_15);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_19, s_19), (ATerm) ATmakeAppl(sym__2, v_19, w_19));
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm x_19 = NULL,z_19 = NULL;
  if(match_cons(t, sym__2))
    {
      x_19 = ATgetArgument(t, 0);
      z_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_19), x_19);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm i_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL,n_19 = NULL,p_19 = NULL,q_19 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm v_15 = ATgetFirst((ATermList) t);
      if(match_cons(v_15, sym__2))
        {
          i_19 = ATgetArgument(v_15, 0);
          j_19 = ATgetArgument(v_15, 1);
        }
      else
        _fail(t);
      k_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(j_19);
  if(match_cons(t, sym__2))
    {
      l_19 = ATgetArgument(t, 0);
      n_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(i_19);
  if(match_cons(t, sym__2))
    {
      if((l_19 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      p_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_19, n_19);
  t = genzip_4_0(t_1, u_1, v_1, _id, t);
  q_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_19, k_19);
  {
    ATerm w_15 = t;
    int x_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_15 = ATgetArgument(t, 0);
            ATerm z_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_19;
        {
          ATerm w_1 (ATerm t)
          {
            t = k_19;
            return(t);
          }
          t = at_end_1_0(w_1, t);
        }
        ;
        LocalPopChoice(x_15);
      }
    else
      {
        t = w_15;
        {
          ATerm p_3 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, q_19, k_19));
          if(match_cons(t, sym__2))
            {
              ATerm a_16 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) a_16) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              p_3 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = p_3;
          t = concat_0_0(t);
        }
      }
  }
  return(t);
}
ATerm while_not_2_0 (ATerm d_138 (ATerm), ATerm e_138 (ATerm), ATerm t)
{
  ATerm e_20 (ATerm t)
  {
    ATerm b_16 = t;
    int c_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_138(t);
        ;
        LocalPopChoice(c_16);
      }
    else
      {
        t = b_16;
        t = e_138(t);
        t = e_20(t);
      }
    return(t);
  }
  t = e_20(t);
  return(t);
}
ATerm for_3_0 (ATerm g_138 (ATerm), ATerm h_138 (ATerm), ATerm i_138 (ATerm), ATerm t)
{
  t = g_138(t);
  t = while_not_2_0(h_138, i_138, t);
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm k_20 = NULL;
  k_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, k_20);
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = _2_0(_id, a_2, t);
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm d_16 = t;
  int e_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(_id, d_2, t);
      ;
      LocalPopChoice(e_16);
    }
  else
    {
      t = d_16;
      {
        ATerm u_20 = NULL,w_20 = NULL,x_20 = NULL,y_20 = NULL;
        if(match_cons(t, sym__2))
          {
            u_20 = ATgetArgument(t, 0);
            w_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = w_20;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_20 = ATgetFirst((ATermList) t);
            y_20 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_20), x_20), y_20);
      }
    }
  return(t);
}
ATerm a_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm f_16 = t;
  int g_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_20 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_20 = ATgetFirst((ATermList) t);
          p_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_20;
      if(match_cons(t, sym__2))
        {
          n_20 = ATgetArgument(t, 0);
          o_20 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = o_20;
      if((n_20 != t))
        {
          _fail(t);
        }
      t = p_20;
      ;
      LocalPopChoice(g_16);
    }
  else
    {
      t = f_16;
      t = UfDecompose_0_0(t);
    }
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm c_21 = NULL;
  if(match_cons(t, sym__2))
    {
      c_21 = ATgetArgument(t, 0);
      if((c_21 != ATgetArgument(t, 1)))
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
  ATerm h_16 = t;
  int i_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(x_1, y_1, z_1, t);
      ;
      LocalPopChoice(i_16);
    }
  else
    {
      t = h_16;
      t = diff_1_0(f_2, t);
    }
  return(t);
}
ATerm isect_1_0 (ATerm a_129 (ATerm), ATerm t)
{
  ATerm e_21 = NULL,f_21 = NULL;
  if(match_cons(t, sym__2))
    {
      e_21 = ATgetArgument(t, 0);
      f_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_21;
  {
    ATerm m_21 (ATerm t)
    {
      ATerm j_16 = t;
      int k_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(k_16);
        }
      else
        {
          t = j_16;
          {
            ATerm g_21 = NULL,i_21 = NULL;
            g_21 = t;
            {
              ATerm l_16 = t;
              int m_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm n_16 = ATgetFirst((ATermList) t);
                      i_21 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(m_16);
                  {
                    ATerm o_16 = t;
                    int p_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm q_3 = NULL;
                        t = g_21;
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            q_3 = ATgetFirst((ATermList) t);
                            {
                              ATerm q_16 = (ATerm) ATgetNext((ATermList) t);
                            }
                          }
                        else
                          _fail(t);
                        t = f_21;
                        {
                          ATerm g_2 (ATerm t)
                          {
                            ATerm s_3 = NULL;
                            s_3 = t;
                            t = (ATerm) ATmakeAppl(sym__2, q_3, s_3);
                            t = a_129(t);
                            return(t);
                          }
                          t = fetch_1_0(g_2, t);
                          t = g_21;
                          t = Cons_2_0(_id, m_21, t);
                        }
                        ;
                        LocalPopChoice(p_16);
                      }
                    else
                      {
                        t = o_16;
                        t = i_21;
                        t = m_21(t);
                      }
                  }
                }
              else
                {
                  t = l_16;
                  {
                    ATerm v_3 = NULL;
                    t = g_21;
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        v_3 = ATgetFirst((ATermList) t);
                        {
                          ATerm r_16 = (ATerm) ATgetNext((ATermList) t);
                        }
                      }
                    else
                      _fail(t);
                    t = f_21;
                    {
                      ATerm h_2 (ATerm t)
                      {
                        ATerm x_3 = NULL;
                        x_3 = t;
                        t = (ATerm) ATmakeAppl(sym__2, v_3, x_3);
                        t = a_129(t);
                        return(t);
                      }
                      t = fetch_1_0(h_2, t);
                      t = g_21;
                      t = Cons_2_0(_id, m_21, t);
                    }
                  }
                }
            }
          }
        }
      return(t);
    }
    t = m_21(t);
  }
  return(t);
}
ATerm DynamicRules_1_0 (ATerm j_108 (ATerm), ATerm t)
{
  ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL;
  q_21 = t;
  if(match_cons(t, sym_DynamicRules_1))
    {
      o_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_21);
  n_21 = t;
  t = o_21;
  t = j_108(t);
  p_21 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, p_21), n_21);
  return(t);
}
ATerm RDefT_4_0 (ATerm a_108 (ATerm), ATerm b_108 (ATerm), ATerm c_108 (ATerm), ATerm d_108 (ATerm), ATerm t)
{
  ATerm t_21 = NULL,u_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL;
  f_22 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      u_21 = ATgetArgument(t, 0);
      v_21 = ATgetArgument(t, 1);
      w_21 = ATgetArgument(t, 2);
      x_21 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_22);
  t_21 = t;
  t = u_21;
  t = a_108(t);
  y_21 = t;
  t = v_21;
  t = b_108(t);
  z_21 = t;
  t = w_21;
  t = c_108(t);
  d_22 = t;
  t = x_21;
  t = d_108(t);
  e_22 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDefT_4, y_21, z_21, d_22, e_22), t_21);
  return(t);
}
ATerm Scope_2_0 (ATerm m_109 (ATerm), ATerm n_109 (ATerm), ATerm t)
{
  ATerm i_22 = NULL,j_22 = NULL,k_22 = NULL,l_22 = NULL,p_22 = NULL,q_22 = NULL;
  q_22 = t;
  if(match_cons(t, sym_Scope_2))
    {
      j_22 = ATgetArgument(t, 0);
      k_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_22);
  i_22 = t;
  t = j_22;
  t = m_109(t);
  l_22 = t;
  t = k_22;
  t = n_109(t);
  p_22 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, l_22, p_22), i_22);
  return(t);
}
ATerm tboundin_3_0 (ATerm e_120 (ATerm), ATerm f_120 (ATerm), ATerm g_120 (ATerm), ATerm t)
{
  ATerm s_16 = t;
  int t_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(g_120, e_120, t);
      ;
      LocalPopChoice(t_16);
    }
  else
    {
      t = s_16;
      {
        ATerm u_16 = t;
        int y_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(g_120, g_120, g_120, e_120, t);
            ;
            LocalPopChoice(y_16);
          }
        else
          {
            t = u_16;
            {
              ATerm z_16 = t;
              int a_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(g_120, g_120, g_120, e_120, t);
                  ;
                  LocalPopChoice(a_17);
                }
              else
                {
                  t = z_16;
                  t = DynamicRules_1_0(e_120, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm x_22 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      x_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, x_22);
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm b_17 = t;
  int c_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(c_17);
    }
  else
    {
      t = b_17;
      {
        ATerm z_22 = NULL,b_23 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            z_22 = ATgetArgument(t, 0);
            t = z_22;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm d_17 = t;
            int e_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm f_17 = ATgetArgument(t, 0);
                    ATerm g_17 = ATgetArgument(t, 1);
                    b_23 = ATgetArgument(t, 2);
                    {
                      ATerm h_17 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(e_17);
                t = b_23;
                t = map_1_0(p_2, t);
              }
            else
              {
                t = d_17;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm i_17 = ATgetArgument(t, 0);
                    ATerm j_17 = ATgetArgument(t, 1);
                    b_23 = ATgetArgument(t, 2);
                    {
                      ATerm k_17 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = b_23;
                t = map_1_0(s_2, t);
              }
          }
      }
    }
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm h_23 = NULL;
  ATerm l_17 = t;
  int m_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_23 = ATgetArgument(t, 0);
          {
            ATerm n_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_17);
      t = h_23;
    }
  else
    {
      t = l_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_23;
    }
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm r_23 = NULL;
  ATerm o_17 = t;
  int p_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_23 = ATgetArgument(t, 0);
          {
            ATerm q_17 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_17);
      t = r_23;
    }
  else
    {
      t = o_17;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_23;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(l_2, o_2, tboundin_3_0, t);
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm k_24 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_24);
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm r_17 = t;
  int s_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(s_17);
    }
  else
    {
      t = r_17;
      {
        ATerm m_24 = NULL,o_24 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            m_24 = ATgetArgument(t, 0);
            t = m_24;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm t_17 = t;
            int u_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm v_17 = ATgetArgument(t, 0);
                    ATerm w_17 = ATgetArgument(t, 1);
                    o_24 = ATgetArgument(t, 2);
                    {
                      ATerm x_17 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(u_17);
                t = o_24;
                t = map_1_0(v_2, t);
              }
            else
              {
                t = t_17;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm y_17 = ATgetArgument(t, 0);
                    ATerm z_17 = ATgetArgument(t, 1);
                    o_24 = ATgetArgument(t, 2);
                    {
                      ATerm a_18 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = o_24;
                t = map_1_0(x_2, t);
              }
          }
      }
    }
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm u_24 = NULL;
  ATerm b_18 = t;
  int c_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_24 = ATgetArgument(t, 0);
          {
            ATerm d_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_18);
      t = u_24;
    }
  else
    {
      t = b_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_24;
    }
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm a_25 = NULL;
  ATerm e_18 = t;
  int f_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_25 = ATgetArgument(t, 0);
          {
            ATerm h_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_18);
      t = a_25;
    }
  else
    {
      t = e_18;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_25;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm d_24 = NULL,h_24 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      h_24 = ATgetArgument(t, 0);
      t = h_24;
      if(match_cons(t, sym_Rule_3))
        {
          d_24 = ATgetArgument(t, 0);
          {
            ATerm i_18 = ATgetArgument(t, 1);
          }
          {
            ATerm k_18 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = d_24;
      t = free_vars_3_0(t_2, u_2, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          h_24 = ATgetArgument(t, 0);
          {
            ATerm l_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = h_24;
    }
  return(t);
}
ATerm union_1_0 (ATerm h_129 (ATerm), ATerm t)
{
  ATerm h_25 = NULL,i_25 = NULL;
  if(match_cons(t, sym__2))
    {
      h_25 = ATgetArgument(t, 0);
      i_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_25;
  {
    ATerm j_25 (ATerm t)
    {
      ATerm m_18 = t;
      int n_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = i_25;
          ;
          LocalPopChoice(n_18);
        }
      else
        {
          t = m_18;
          {
            ATerm o_18 = t;
            int p_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_4 = NULL,b_4 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    a_4 = ATgetFirst((ATermList) t);
                    b_4 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = i_25;
                {
                  ATerm c_3 (ATerm t)
                  {
                    ATerm c_4 = NULL;
                    c_4 = t;
                    t = (ATerm) ATmakeAppl(sym__2, a_4, c_4);
                    t = h_129(t);
                    return(t);
                  }
                  t = fetch_1_0(c_3, t);
                  t = b_4;
                  t = j_25(t);
                }
                ;
                LocalPopChoice(p_18);
              }
            else
              {
                t = o_18;
                t = Cons_2_0(_id, j_25, t);
              }
          }
        }
      return(t);
    }
    t = j_25(t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm v_131 (ATerm), ATerm w_131 (ATerm), ATerm x_131 (ATerm), ATerm t)
{
  ATerm q_18 = t;
  int r_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = v_131(t);
      ;
      LocalPopChoice(r_18);
    }
  else
    {
      t = q_18;
      {
        ATerm m_25 = NULL,n_25 = NULL,q_25 = NULL,r_25 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_25 = ATgetFirst((ATermList) t);
            n_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = m_25;
        t = x_131(t);
        q_25 = t;
        t = n_25;
        t = foldr_3_0(v_131, w_131, x_131, t);
        r_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_25, r_25);
        t = w_131(t);
      }
    }
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = union_1_0(r_3, t);
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm p_4 = NULL;
  if(match_cons(t, sym__2))
    {
      p_4 = ATgetArgument(t, 0);
      if((p_4 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm u_3 (ATerm t)
{
  t = union_1_0(w_3, t);
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm v_4 = NULL;
  if(match_cons(t, sym__2))
    {
      v_4 = ATgetArgument(t, 0);
      if((v_4 != ATgetArgument(t, 1)))
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
  ATerm z_25 (ATerm t)
  {
    ATerm s_18 = t;
    int t_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_135(t);
        ;
        LocalPopChoice(t_18);
      }
    else
      {
        t = s_18;
        {
          ATerm w_18 = t;
          int x_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_25 = NULL,w_25 = NULL,k_4 = NULL,l_4 = NULL;
              u_25 = t;
              t = y_135(t);
              w_25 = t;
              t = u_25;
              {
                ATerm f_3 (ATerm t)
                {
                  ATerm g_4 = NULL;
                  t = z_25(t);
                  g_4 = t;
                  t = (ATerm) ATmakeAppl(sym__2, g_4, w_25);
                  t = diff_0_0(t);
                  return(t);
                }
                t = z_135(f_3, z_25, j_3, t);
                k_4 = t;
                t = SSL_explode_term(k_4);
                if(match_cons(t, sym__2))
                  {
                    ATerm y_18 = ATgetArgument(t, 0);
                    l_4 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = l_4;
                t = foldr_3_0(m_3, o_3, _id, t);
              }
              ;
              LocalPopChoice(x_18);
            }
          else
            {
              t = w_18;
              {
                ATerm q_4 = NULL,r_4 = NULL;
                q_4 = t;
                t = SSL_explode_term(q_4);
                if(match_cons(t, sym__2))
                  {
                    ATerm b_19 = ATgetArgument(t, 0);
                    r_4 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = r_4;
                t = foldr_3_0(t_3, u_3, z_25, t);
              }
            }
        }
      }
    return(t);
  }
  t = z_25(t);
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm j_26 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      j_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, j_26);
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm h_19 = t;
  int m_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(m_19);
    }
  else
    {
      t = h_19;
      {
        ATerm l_26 = NULL,n_26 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            l_26 = ATgetArgument(t, 0);
            t = l_26;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm o_19 = t;
            int t_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm u_19 = ATgetArgument(t, 0);
                    ATerm y_19 = ATgetArgument(t, 1);
                    n_26 = ATgetArgument(t, 2);
                    {
                      ATerm a_20 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(t_19);
                t = n_26;
                t = map_1_0(d_4, t);
              }
            else
              {
                t = o_19;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm b_20 = ATgetArgument(t, 0);
                    ATerm c_20 = ATgetArgument(t, 1);
                    n_26 = ATgetArgument(t, 2);
                    {
                      ATerm d_20 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = n_26;
                t = map_1_0(e_4, t);
              }
          }
      }
    }
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm t_26 = NULL;
  ATerm f_20 = t;
  int g_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_26 = ATgetArgument(t, 0);
          {
            ATerm h_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_20);
      t = t_26;
    }
  else
    {
      t = f_20;
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
ATerm e_4 (ATerm t)
{
  ATerm a_27 = NULL;
  ATerm i_20 = t;
  int j_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_27 = ATgetArgument(t, 0);
          {
            ATerm l_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_20);
      t = a_27;
    }
  else
    {
      t = i_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_27;
    }
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm d_27 = NULL;
  if(match_cons(t, sym__2))
    {
      d_27 = ATgetArgument(t, 0);
      if((d_27 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm NarrowScope_0_0 (ATerm t)
{
  ATerm d_26 = NULL,e_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL;
  if(match_cons(t, sym_Scope_2))
    {
      d_26 = ATgetArgument(t, 0);
      {
        ATerm q_20 = ATgetArgument(t, 1);
        if(match_cons(q_20, sym_Seq_2))
          {
            e_26 = ATgetArgument(q_20, 0);
            f_26 = ATgetArgument(q_20, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = e_26;
  t = free_vars_3_0(y_3, z_3, tboundin_3_0, t);
  g_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_26, d_26);
  t = isect_1_0(f_4, t);
  h_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_26, h_26);
  t = diff_0_0(t);
  i_26 = t;
  {
    ATerm r_20 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_20;
      }
    t = (ATerm) ATmakeAppl(sym_Scope_2, h_26, (ATerm) ATmakeAppl(sym_Seq_2, e_26, (ATerm) ATmakeAppl(sym_Scope_2, i_26, f_26)));
  }
  return(t);
}
ATerm topdown_1_0 (ATerm d_121 (ATerm), ATerm t)
{
  t = d_121(t);
  {
    ATerm h_4 (ATerm t)
    {
      t = topdown_1_0(d_121, t);
      return(t);
    }
    t = SRTS_all(h_4, t);
  }
  return(t);
}
ATerm WidenScope_0_0 (ATerm t)
{
  ATerm i_27 = NULL,j_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL,o_27 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      l_27 = ATgetArgument(t, 0);
      o_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_27;
  if(match_cons(t, sym_Scope_2))
    {
      i_27 = ATgetArgument(t, 0);
      j_27 = ATgetArgument(t, 1);
      t = l_27;
      if(match_cons(t, sym_Scope_2))
        {
          m_27 = ATgetArgument(t, 0);
          n_27 = ATgetArgument(t, 1);
          {
            ATerm s_20 = t;
            int t_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = (ATerm) ATmakeAppl(sym_Scope_2, i_27, (ATerm) ATmakeAppl(sym_Seq_2, l_27, j_27));
                ;
                LocalPopChoice(t_20);
              }
            else
              {
                t = s_20;
                t = (ATerm) ATmakeAppl(sym_Scope_2, m_27, (ATerm) ATmakeAppl(sym_Seq_2, n_27, o_27));
              }
          }
        }
      else
        {
          t = (ATerm) ATmakeAppl(sym_Scope_2, i_27, (ATerm) ATmakeAppl(sym_Seq_2, l_27, j_27));
        }
    }
  else
    {
      t = l_27;
      if(match_cons(t, sym_Scope_2))
        {
          m_27 = ATgetArgument(t, 0);
          n_27 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, m_27, (ATerm) ATmakeAppl(sym_Seq_2, n_27, o_27));
    }
  return(t);
}
ATerm SDefT_4_0 (ATerm u_111 (ATerm), ATerm v_111 (ATerm), ATerm w_111 (ATerm), ATerm x_111 (ATerm), ATerm t)
{
  ATerm b_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL,h_28 = NULL,i_28 = NULL,j_28 = NULL,m_28 = NULL;
  m_28 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      c_28 = ATgetArgument(t, 0);
      d_28 = ATgetArgument(t, 1);
      e_28 = ATgetArgument(t, 2);
      f_28 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_28);
  b_28 = t;
  t = c_28;
  t = u_111(t);
  g_28 = t;
  t = d_28;
  t = v_111(t);
  h_28 = t;
  t = e_28;
  t = w_111(t);
  i_28 = t;
  t = f_28;
  t = x_111(t);
  j_28 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, g_28, h_28, i_28, j_28), b_28);
  return(t);
}
ATerm SDef_3_0 (ATerm r_111 (ATerm), ATerm s_111 (ATerm), ATerm t_111 (ATerm), ATerm t)
{
  ATerm q_28 = NULL,t_28 = NULL,u_28 = NULL,w_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL,b_29 = NULL;
  b_29 = t;
  if(match_cons(t, sym_SDef_3))
    {
      t_28 = ATgetArgument(t, 0);
      u_28 = ATgetArgument(t, 1);
      w_28 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_29);
  q_28 = t;
  t = t_28;
  t = r_111(t);
  y_28 = t;
  t = u_28;
  t = s_111(t);
  z_28 = t;
  t = w_28;
  t = t_111(t);
  a_29 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, y_28, z_28, a_29), q_28);
  return(t);
}
ATerm Strategies_1_0 (ATerm u_104 (ATerm), ATerm t)
{
  ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL;
  h_29 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      f_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_29);
  e_29 = t;
  t = f_29;
  t = u_104(t);
  g_29 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, g_29), e_29);
  return(t);
}
ATerm Specification_1_0 (ATerm z_104 (ATerm), ATerm t)
{
  ATerm k_29 = NULL,l_29 = NULL,m_29 = NULL,n_29 = NULL;
  n_29 = t;
  if(match_cons(t, sym_Specification_1))
    {
      l_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_29);
  k_29 = t;
  t = l_29;
  t = z_104(t);
  m_29 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, m_29), k_29);
  return(t);
}
ATerm n_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm apply_to_bodies_1_0 (ATerm e_119 (ATerm), ATerm t)
{
  ATerm i_4 (ATerm t)
  {
    ATerm j_4 (ATerm t)
    {
      ATerm m_4 (ATerm t)
      {
        ATerm o_4 (ATerm t)
        {
          ATerm s_4 (ATerm t)
          {
            ATerm v_20 = t;
            int z_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SDef_3_0(_id, _id, e_119, t);
                ;
                LocalPopChoice(z_20);
              }
            else
              {
                t = v_20;
                t = SDefT_4_0(_id, _id, _id, e_119, t);
              }
            return(t);
          }
          t = map_1_0(s_4, t);
          return(t);
        }
        t = Strategies_1_0(o_4, t);
        return(t);
      }
      t = Cons_2_0(m_4, n_4, t);
      return(t);
    }
    t = Cons_2_0(_id, j_4, t);
    return(t);
  }
  t = Specification_1_0(i_4, t);
  return(t);
}
ATerm _2_0 (ATerm b_100 (ATerm), ATerm c_100 (ATerm), ATerm t)
{
  ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL;
  v_29 = t;
  if(match_cons(t, sym__2))
    {
      r_29 = ATgetArgument(t, 0);
      s_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_29);
  q_29 = t;
  t = r_29;
  t = b_100(t);
  t_29 = t;
  t = s_29;
  t = c_100(t);
  u_29 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, t_29, u_29), q_29);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm c_143 (ATerm), ATerm t)
{
  ATerm y_29 = NULL,z_29 = NULL,a_30 = NULL;
  if(match_cons(t, sym__2))
    {
      y_29 = ATgetArgument(t, 0);
      z_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_29, term_a_21);
  t = open_stream_0_0(t);
  a_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_30, z_29);
  t = c_143(t);
  t = fclose_0_0(t);
  t = z_29;
  return(t);
}
ATerm y_4 (ATerm t)
{
  t = fetch_1_0(a_5, t);
  return(t);
}
ATerm z_4 (ATerm t)
{
  t = WriteToFile_1_0(b_5, t);
  return(t);
}
ATerm a_5 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm d_30 = NULL,e_30 = NULL,f_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_21 = ATgetArgument(t, 0);
      if(match_cons(b_21, sym_Stream_1))
        {
          d_30 = ATgetArgument(b_21, 0);
        }
      else
        _fail(t);
      e_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(d_30, e_30);
  f_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_30);
  return(t);
}
ATerm c_5 (ATerm t)
{
  t = WriteToFile_1_0(d_5, t);
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm g_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_21 = ATgetArgument(t, 0);
      if(match_cons(d_21, sym_Stream_1))
        {
          g_30 = ATgetArgument(d_21, 0);
        }
      else
        _fail(t);
      h_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(g_30, h_30);
  i_30 = t;
  t = SSL_fputc((ATerm)ATmakeInt(10), i_30);
  j_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_30);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm b_30 = NULL,c_30 = NULL;
  b_30 = t;
  {
    ATerm t_4 (ATerm t)
    {
      ATerm h_21 = t;
      int j_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_4 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((c_30 != NULL) && (c_30 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  c_30 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(u_4, t);
          ;
          LocalPopChoice(j_21);
        }
      else
        {
          t = h_21;
          t = term_k_21;
          if(((c_30 != NULL) && (c_30 != t)))
            _fail(t);
          else
            c_30 = t;
        }
      return(t);
    }
    t = _2_0(t_4, _id, t);
    t = b_30;
    {
      ATerm x_4 (ATerm t)
      {
        ATerm w_4 = NULL;
        w_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_30), w_4);
        return(t);
      }
      t = _2_0(_id, x_4, t);
      {
        ATerm l_21 = t;
        int r_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(y_4, z_4, t);
            ;
            LocalPopChoice(r_21);
          }
        else
          {
            t = l_21;
            t = _2_0(_id, c_5, t);
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
  ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL,o_30 = NULL;
  k_30 = t;
  t = dtime_0_0(t);
  t = k_30;
  t = e_146(t);
  l_30 = t;
  t = dtime_0_0(t);
  m_30 = t;
  t = l_30;
  if(match_cons(t, sym__2))
    {
      n_30 = ATgetArgument(t, 0);
      o_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_30), (ATerm) ATmakeAppl(sym_Runtime_1, m_30)), o_30);
  return(t);
}
ATerm c_31 (ATerm w_30, ATerm t)
{
  t = SSL_fclose(w_30);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm z_30 = NULL,a_31 = NULL;
  a_31 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_30 = ATgetArgument(t, 0);
      {
        ATerm s_21 = t;
        int a_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_30);
            ;
            LocalPopChoice(a_22);
          }
        else
          {
            t = s_21;
            t = c_31(a_31, t);
          }
      }
    }
  else
    {
      t = c_31(a_31, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm d_31 = NULL;
  t = SSL_stdin_stream();
  d_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_31);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm e_31 = NULL;
  t = SSL_stdout_stream();
  e_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_31);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm f_31 = NULL;
  t = SSL_stderr_stream();
  f_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_31);
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm n_31 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      n_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_31;
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm r_31 = NULL;
  r_31 = t;
  t = SSL_is_string(r_31);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_22 = ATgetArgument(t, 0);
      ATerm c_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_22 = t;
    int h_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_5 = NULL,l_5 = NULL;
        k_5 = t;
        t = SSL_explode_term(k_5);
        if(match_cons(t, sym__2))
          {
            ATerm m_22 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) m_22) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm n_22 = ATgetArgument(t, 1);
              if(((ATgetType(n_22) == AT_LIST) && !(ATisEmpty(n_22))))
                {
                  l_5 = ATgetFirst((ATermList) n_22);
                  {
                    ATerm o_22 = (ATerm) ATgetNext((ATermList) n_22);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = l_5;
        if(match_cons(t, sym_stderr_0))
          {
            t = l_5;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = l_5;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = l_5;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(h_22);
      }
    else
      {
        t = g_22;
        {
          ATerm r_22 = t;
          int s_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_31 = NULL,l_31 = NULL,m_31 = NULL;
              t = _2_0(e_5, _id, t);
              if(match_cons(t, sym__2))
                {
                  k_31 = ATgetArgument(t, 0);
                  l_31 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(k_31, l_31);
              m_31 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, m_31);
              ;
              LocalPopChoice(s_22);
            }
          else
            {
              t = r_22;
              {
                ATerm o_31 = NULL,p_31 = NULL,q_31 = NULL;
                t = _2_0(f_5, _id, t);
                if(match_cons(t, sym__2))
                  {
                    o_31 = ATgetArgument(t, 0);
                    p_31 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(o_31, p_31);
                q_31 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, q_31);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL;
  ATerm t_22 = t;
  int u_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_31 = NULL;
      v_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_31, term_v_22);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(u_22);
    }
  else
    {
      t = t_22;
      {
        ATerm m_5 = NULL;
        m_5 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, m_5), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = m_5;
        _fail(t);
      }
    }
  s_31 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(u_31);
  t_31 = t;
  t = s_31;
  t = fclose_0_0(t);
  t = t_31;
  return(t);
}
ATerm fetch_1_0 (ATerm p_127 (ATerm), ATerm t)
{
  ATerm a_32 (ATerm t)
  {
    ATerm w_22 = t;
    int y_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(p_127, _id, t);
        ;
        LocalPopChoice(y_22);
      }
    else
      {
        t = w_22;
        t = Cons_2_0(_id, a_32, t);
      }
    return(t);
  }
  t = a_32(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm a_23 = t;
  int c_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(c_23);
    }
  else
    {
      t = a_23;
      {
        ATerm d_32 = NULL,e_32 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_32 = ATgetFirst((ATermList) t);
            e_32 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = d_32;
        {
          ATerm g_5 (ATerm t)
          {
            t = e_32;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(g_5, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm v_127 (ATerm), ATerm t)
{
  ATerm l_32 (ATerm t)
  {
    ATerm d_23 = t;
    int e_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, l_32, t);
        ;
        LocalPopChoice(e_23);
      }
    else
      {
        t = d_23;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = v_127(t);
      }
    return(t);
  }
  t = l_32(t);
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm o_32 = NULL;
  o_32 = t;
  t = SSL_explode_string(o_32);
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm p_32 = NULL;
  p_32 = t;
  t = SSL_explode_string(p_32);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm n_32 = NULL;
  t = _2_0(h_5, i_5, t);
  {
    ATerm f_23 = t;
    int g_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_32 = NULL,s_32 = NULL;
        if(match_cons(t, sym__2))
          {
            r_32 = ATgetArgument(t, 0);
            s_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_32;
        {
          ATerm j_5 (ATerm t)
          {
            t = s_32;
            return(t);
          }
          t = at_end_1_0(j_5, t);
        }
        ;
        LocalPopChoice(g_23);
      }
    else
      {
        t = f_23;
        {
          ATerm r_5 = NULL,s_5 = NULL;
          r_5 = t;
          t = SSL_explode_term(r_5);
          if(match_cons(t, sym__2))
            {
              ATerm i_23 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) i_23) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              s_5 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = s_5;
          t = concat_0_0(t);
        }
      }
    n_32 = t;
    t = SSL_implode_string(n_32);
  }
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm j_23 = t;
  int k_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(k_23);
    }
  else
    {
      t = j_23;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm l_23 = t;
  int m_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_33 = NULL;
      c_33 = t;
      t = SSL_is_string(c_33);
      ;
      LocalPopChoice(m_23);
    }
  else
    {
      t = l_23;
      {
        ATerm n_23 = t;
        int o_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(n_5, t);
            ;
            LocalPopChoice(o_23);
          }
        else
          {
            t = n_23;
            {
              ATerm g_33 = NULL,h_33 = NULL,i_33 = NULL;
              g_33 = t;
              if(match_cons(t, sym_Path_1))
                {
                  h_33 = ATgetArgument(t, 0);
                  t = h_33;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      h_33 = ATgetArgument(t, 0);
                      t = h_33;
                      {
                        ATerm p_23 = t;
                        int q_23 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), h_33);
                            {
                              ATerm s_23 = t;
                              int t_23 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm q_6 = NULL;
                                  t = eval_config_0_0(t);
                                  q_6 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), h_33, q_6);
                                  t = q_6;
                                  ;
                                  LocalPopChoice(t_23);
                                }
                              else
                                {
                                  t = s_23;
                                }
                            }
                            ;
                            LocalPopChoice(q_23);
                          }
                        else
                          {
                            t = p_23;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, h_33), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = h_33;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm m_33 = NULL,n_33 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          h_33 = ATgetArgument(t, 0);
                          i_33 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = h_33;
                      t = eval_config_0_0(t);
                      m_33 = t;
                      t = i_33;
                      t = eval_config_0_0(t);
                      n_33 = t;
                      t = (ATerm) ATmakeAppl(sym__2, m_33, n_33);
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
  ATerm u_23 = t;
  int v_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_33 = NULL,w_33 = NULL;
      u_33 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm w_23 = t;
        int x_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_6 = NULL;
            t = eval_config_0_0(t);
            y_6 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), y_6);
            t = y_6;
            ;
            LocalPopChoice(x_23);
          }
        else
          {
            t = w_23;
          }
        w_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_33, term_y_23);
        t = geq_0_0(t);
        t = u_33;
        t = n_144(t);
      }
      ;
      LocalPopChoice(v_23);
    }
  else
    {
      t = u_23;
    }
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm y_33 = NULL;
  y_33 = t;
  if(match_string(t, "-k"))
    {
      t = y_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = y_33;
    }
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm z_33 = NULL,a_34 = NULL;
  z_33 = t;
  t = SSL_string_to_int(z_33);
  a_34 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), a_34);
  t = z_33;
  return(t);
}
ATerm q_5 (ATerm t)
{
  t = term_z_23;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_5, p_5, q_5, t);
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm c_34 = NULL;
  c_34 = t;
  if(match_string(t, "-S"))
    {
      t = c_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = c_34;
    }
  return(t);
}
ATerm u_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_b_24;
  return(t);
}
ATerm v_5 (ATerm t)
{
  t = term_c_24;
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
  ATerm d_34 = NULL,e_34 = NULL;
  d_34 = t;
  t = SSL_string_to_int(d_34);
  e_34 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), e_34);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, d_34);
  return(t);
}
ATerm y_5 (ATerm t)
{
  t = term_e_24;
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
  t = term_f_24;
  return(t);
}
ATerm b_6 (ATerm t)
{
  t = term_g_24;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm i_24 = t;
  int j_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_5, u_5, v_5, t);
      ;
      LocalPopChoice(j_24);
    }
  else
    {
      t = i_24;
      {
        ATerm l_24 = t;
        int n_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(w_5, x_5, y_5, t);
            ;
            LocalPopChoice(n_24);
          }
        else
          {
            t = l_24;
            t = Option_3_0(z_5, a_6, b_6, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm h_34 = NULL,i_34 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_34 = NULL;
      t = term_j_8;
      t = d_0(t);
      j_34 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_24, term_q_24, j_34);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm m_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_34 = ATgetFirst((ATermList) t);
          i_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_34;
      t = a_0(t);
      t = term_j_8;
      t = c_0(t);
      m_34 = t;
      t = (ATerm) ATinsert(CheckATermList(i_34), m_34);
    }
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm q_34 = NULL;
  q_34 = t;
  if(match_string(t, "-o"))
    {
      t = q_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = q_34;
    }
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm r_34 = NULL;
  r_34 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), r_34);
  t = (ATerm) ATmakeAppl(sym_Output_1, r_34);
  return(t);
}
ATerm e_6 (ATerm t)
{
  t = term_r_24;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_6, d_6, e_6, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm u_34 = NULL,v_34 = NULL,w_34 = NULL,x_34 = NULL;
  if(match_cons(t, sym__3))
    {
      u_34 = ATgetArgument(t, 0);
      v_34 = ATgetArgument(t, 1);
      w_34 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_34, v_34);
  {
    ATerm s_24 = t;
    int t_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_24 = ATgetArgument(t, 0);
            ATerm w_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(u_34, v_34);
        ;
        LocalPopChoice(t_24);
      }
    else
      {
        t = s_24;
        t = (ATerm) ATempty;
      }
    x_34 = t;
    t = SSL_table_put(u_34, v_34, (ATerm) ATinsert(CheckATermList(x_34), w_34));
    t = (ATerm) ATmakeAppl(sym__3, u_34, v_34, w_34);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm f_35 = NULL,g_35 = NULL,i_35 = NULL,j_35 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_35 = NULL;
      t = term_j_8;
      t = l_0(t);
      k_35 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_24, term_q_24, k_35);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm o_35 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_35 = ATgetFirst((ATermList) t);
          g_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_35;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_35 = ATgetFirst((ATermList) t);
          j_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_35;
      t = i_0(t);
      t = i_35;
      t = k_0(t);
      o_35 = t;
      t = (ATerm) ATinsert(CheckATermList(j_35), o_35);
    }
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm q_35 = NULL;
  q_35 = t;
  if(match_string(t, "-i"))
    {
      t = q_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = q_35;
    }
  return(t);
}
ATerm g_6 (ATerm t)
{
  ATerm r_35 = NULL;
  r_35 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), r_35);
  t = (ATerm) ATmakeAppl(sym_Input_1, r_35);
  return(t);
}
ATerm h_6 (ATerm t)
{
  t = term_x_24;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_6, g_6, h_6, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm s_35 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_8;
  t = whoami_0_0(t);
  s_35 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), s_35));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm y_24 = t;
    int z_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_7 = NULL;
        t = eval_config_0_0(t);
        d_7 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), d_7);
        t = d_7;
        ;
        LocalPopChoice(z_24);
      }
    else
      {
        t = y_24;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm t_131 (ATerm), ATerm u_131 (ATerm), ATerm t)
{
  ATerm b_25 = t;
  int c_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = t_131(t);
      ;
      LocalPopChoice(c_25);
    }
  else
    {
      t = b_25;
      {
        ATerm v_35 = NULL,w_35 = NULL,z_35 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_35 = ATgetFirst((ATermList) t);
            w_35 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = w_35;
        t = foldr_2_0(t_131, u_131, t);
        z_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_35, z_35);
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
ATerm i_6 (ATerm t)
{
  t = term_a_24;
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm j_7 = NULL,k_7 = NULL;
  if(match_cons(t, sym__2))
    {
      j_7 = ATgetArgument(t, 0);
      k_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_25 = t;
    int e_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(j_7, k_7);
        ;
        LocalPopChoice(e_25);
      }
    else
      {
        t = d_25;
        t = SSL_addr(j_7, k_7);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm c_36 = NULL,e_7 = NULL,f_7 = NULL;
  t = times_0_0(t);
  e_7 = t;
  t = SSL_explode_term(e_7);
  if(match_cons(t, sym__2))
    {
      ATerm f_25 = ATgetArgument(t, 0);
      f_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_7;
  t = foldr_2_0(i_6, j_6, t);
  c_36 = t;
  t = SSL_TicksToSeconds(c_36);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm n_36 = NULL,o_36 = NULL,p_36 = NULL;
  n_36 = t;
  if(match_cons(t, sym__2))
    {
      o_36 = ATgetArgument(t, 0);
      p_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_25 = t;
    int k_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_36;
        if((o_36 != t))
          {
            _fail(t);
          }
        t = n_36;
        ;
        LocalPopChoice(k_25);
      }
    else
      {
        t = g_25;
        t = n_36;
        {
          ATerm l_25 = t;
          int o_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(o_36, p_36);
              ;
              LocalPopChoice(o_25);
            }
          else
            {
              t = l_25;
              t = SSL_gtr(o_36, p_36);
            }
          t = (ATerm) ATmakeAppl(sym__2, o_36, p_36);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm m_144 (ATerm), ATerm t)
{
  ATerm p_25 = t;
  int s_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_36 = NULL,w_36 = NULL;
      u_36 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm t_25 = t;
        int v_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_7 = NULL;
            t = eval_config_0_0(t);
            z_7 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), z_7);
            t = z_7;
            ;
            LocalPopChoice(v_25);
          }
        else
          {
            t = t_25;
          }
        w_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_36, term_x_25);
        t = geq_0_0(t);
        t = u_36;
        t = m_144(t);
      }
      ;
      LocalPopChoice(s_25);
    }
  else
    {
      t = p_25;
    }
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm y_36 = NULL,z_36 = NULL;
  t = run_time_0_0(t);
  y_36 = t;
  t = term_j_8;
  t = whoami_0_0(t);
  z_36 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), y_36), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), z_36));
  t = (ATerm) ATmakeAppl(sym__2, term_y_25, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_26), y_36), term_a_26), z_36));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(k_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm c_26 = t;
  int k_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(k_26);
    }
  else
    {
      t = c_26;
      {
        ATerm m_26 = t;
        int o_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(o_26);
          }
        else
          {
            t = m_26;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm c_147 (ATerm), ATerm t)
{
  ATerm p_26 = t;
  int q_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm r_26 = t;
        int s_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_8 = NULL;
            t = eval_config_0_0(t);
            e_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), e_8);
            t = e_8;
            ;
            LocalPopChoice(s_26);
          }
        else
          {
            t = r_26;
          }
      }
      ;
      LocalPopChoice(q_26);
    }
  else
    {
      t = p_26;
      t = fetch_1_0(l_6, t);
    }
  t = c_147(t);
  return(t);
}
ATerm map_1_0 (ATerm e_127 (ATerm), ATerm t)
{
  ATerm a_37 (ATerm t)
  {
    ATerm u_26 = t;
    int v_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(v_26);
      }
    else
      {
        t = u_26;
        t = Cons_2_0(e_127, a_37, t);
      }
    return(t);
  }
  t = a_37(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm c_37 = NULL,d_37 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_37 = ATgetFirst((ATermList) t);
      d_37 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm h_37 = NULL,i_37 = NULL;
        t = d_37;
        t = g_0(t);
        h_37 = t;
        t = c_37;
        t = e_0(t);
        i_37 = t;
        t = d_37;
        {
          ATerm m_6 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(h_37), i_37);
            return(t);
          }
          t = reverse_acc_2_0(e_0, m_6, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_j_8;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm y_118 (ATerm), ATerm t)
{
  ATerm j_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL;
  m_37 = t;
  if(match_cons(t, sym_Program_1))
    {
      k_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_37);
  j_37 = t;
  t = k_37;
  t = y_118(t);
  l_37 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, l_37), j_37);
  return(t);
}
ATerm n_6 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm o_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm r_37 = NULL;
  r_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_37), term_w_26);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm x_26 = t;
  int y_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm z_26 = t;
        int b_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_8 = NULL;
            t = eval_config_0_0(t);
            i_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), i_8);
            t = i_8;
            ;
            LocalPopChoice(b_27);
          }
        else
          {
            t = z_26;
          }
      }
      ;
      LocalPopChoice(y_26);
    }
  else
    {
      t = x_26;
      t = fetch_1_0(n_6, t);
    }
  t = term_c_27;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, o_6, t);
  t = map_1_0(p_6, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm z_118 (ATerm), ATerm t)
{
  ATerm s_37 = NULL,t_37 = NULL,u_37 = NULL,v_37 = NULL;
  v_37 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      t_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_37);
  s_37 = t;
  t = t_37;
  t = z_118(t);
  u_37 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, u_37), s_37);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm z_37 = NULL,a_38 = NULL;
  z_37 = t;
  {
    ATerm e_27 = t;
    int f_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = z_37;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm g_27 = ATgetFirst((ATermList) t);
                ATerm h_27 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_37;
          }
        ;
        LocalPopChoice(f_27);
      }
    else
      {
        t = e_27;
        t = (ATerm) ATinsert(ATempty, z_37);
      }
    a_38 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), a_38);
    t = z_37;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm k_27 = t;
    int p_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_8 = NULL;
        t = eval_config_0_0(t);
        n_8 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), n_8);
        t = n_8;
        ;
        LocalPopChoice(p_27);
      }
    else
      {
        t = k_27;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm r_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_s_27;
  return(t);
}
ATerm t_6 (ATerm t)
{
  t = term_t_27;
  return(t);
}
ATerm u_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_u_27;
  return(t);
}
ATerm w_6 (ATerm t)
{
  t = term_v_27;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm w_27 = t;
  int x_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_6, s_6, t_6, t);
      ;
      LocalPopChoice(x_27);
    }
  else
    {
      t = w_27;
      t = Option_3_0(u_6, v_6, w_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm q_104 (ATerm), ATerm r_104 (ATerm), ATerm t)
{
  ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL,j_38 = NULL;
  j_38 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_38 = ATgetFirst((ATermList) t);
      g_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_38);
  e_38 = t;
  t = f_38;
  t = q_104(t);
  h_38 = t;
  t = g_38;
  t = r_104(t);
  i_38 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(i_38), h_38), e_38);
  return(t);
}
ATerm x_6 (ATerm t)
{
  ATerm o_38 = NULL;
  o_38 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), o_38);
  t = (ATerm) ATmakeAppl(sym_Program_1, o_38);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm f_149 (ATerm), ATerm t)
{
  ATerm n_38 = NULL;
  n_38 = t;
  {
    ATerm y_27 = t;
    int z_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_28;
        t = f_149(t);
        ;
        LocalPopChoice(z_27);
      }
    else
      {
        t = y_27;
      }
    t = n_38;
    {
      ATerm z_6 (ATerm t)
      {
        ATerm k_28 = t;
        int l_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_28 = t;
            int o_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(o_28);
              }
            else
              {
                t = n_28;
                t = f_149(t);
                t = Cons_2_0(_id, z_6, t);
              }
            ;
            LocalPopChoice(l_28);
          }
        else
          {
            t = k_28;
            {
              ATerm q_38 = NULL,r_38 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  q_38 = ATgetFirst((ATermList) t);
                  r_38 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(r_38), (ATerm) ATmakeAppl(sym_Undefined_1, q_38));
            }
          }
        return(t);
      }
      t = Cons_2_0(x_6, z_6, t);
    }
  }
  return(t);
}
ATerm b_7 (ATerm t)
{
  ATerm b_39 = NULL;
  b_39 = t;
  if(match_string(t, "--help"))
    {
      t = b_39;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = b_39;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = b_39;
        }
    }
  return(t);
}
ATerm c_7 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_p_28;
  return(t);
}
ATerm g_7 (ATerm t)
{
  t = term_r_28;
  return(t);
}
ATerm h_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm e_149 (ATerm), ATerm t)
{
  ATerm y_38 = NULL,z_38 = NULL,a_39 = NULL;
  y_38 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = y_38;
  {
    ATerm a_7 (ATerm t)
    {
      ATerm s_28 = t;
      int v_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_149(t);
          ;
          LocalPopChoice(v_28);
        }
      else
        {
          t = s_28;
          {
            ATerm x_28 = t;
            int c_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(b_7, c_7, g_7, t);
                ;
                LocalPopChoice(c_29);
              }
            else
              {
                t = x_28;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(a_7, t);
    {
      ATerm d_29 = t;
      int i_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_39 = NULL;
          m_39 = t;
          {
            ATerm j_29 = t;
            int o_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = m_39;
                {
                  ATerm p_29 = t;
                  int w_29 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm x_29 = t;
                        int p_30 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm s_10 = NULL;
                            t = eval_config_0_0(t);
                            s_10 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), s_10);
                            t = s_10;
                            ;
                            LocalPopChoice(p_30);
                          }
                        else
                          {
                            t = x_29;
                          }
                      }
                      ;
                      LocalPopChoice(w_29);
                    }
                  else
                    {
                      t = p_29;
                      t = fetch_1_0(h_7, t);
                    }
                  t = m_39;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(o_29);
              }
            else
              {
                t = j_29;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm q_30 = t;
                  int r_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm m_11 = NULL;
                      t = eval_config_0_0(t);
                      m_11 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), m_11);
                      t = m_11;
                      ;
                      LocalPopChoice(r_30);
                    }
                  else
                    {
                      t = q_30;
                    }
                  t = m_39;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(i_29);
        }
      else
        {
          t = d_29;
          {
            ATerm s_30 = t;
            int t_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_7 (ATerm t)
                {
                  ATerm l_7 (ATerm t)
                  {
                    if(((z_38 != NULL) && (z_38 != t)))
                      _fail(t);
                    else
                      z_38 = t;
                    return(t);
                  }
                  t = Undefined_1_0(l_7, t);
                  return(t);
                }
                t = fetch_1_0(i_7, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(z_38)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_y_25, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_38)), term_u_30));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(t_30);
              }
            else
              {
                t = s_30;
              }
          }
        }
      a_39 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = a_39;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm e_147 (ATerm), ATerm f_147 (ATerm), ATerm g_147 (ATerm), ATerm h_147 (ATerm), ATerm t)
{
  ATerm s_39 = NULL;
  t = parse_options_1_0(e_147, t);
  s_39 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), s_39);
  t = s_39;
  t = g_147(t);
  {
    ATerm v_30 = t;
    int x_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(f_147, t);
        ;
        LocalPopChoice(x_30);
      }
    else
      {
        t = v_30;
        {
          ATerm y_30 = t;
          int b_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_147(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(b_31);
            }
          else
            {
              t = y_30;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm n_7 (ATerm t)
{
  t = if_verbose2_1_0(s_7, t);
  return(t);
}
ATerm p_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_7 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_g_31;
  return(t);
}
ATerm r_7 (ATerm t)
{
  t = term_h_31;
  return(t);
}
ATerm s_7 (ATerm t)
{
  ATerm t_39 = NULL,u_39 = NULL;
  t_39 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm i_31 = t;
    int j_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_11 = NULL;
        t = eval_config_0_0(t);
        u_11 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), u_11);
        t = u_11;
        ;
        LocalPopChoice(j_31);
      }
    else
      {
        t = i_31;
      }
    u_39 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, u_39));
    t = t_39;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm n_146 (ATerm), ATerm o_146 (ATerm), ATerm p_146 (ATerm), ATerm t)
{
  ATerm m_7 (ATerm t)
  {
    ATerm w_31 = t;
    int x_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_146(t);
        ;
        LocalPopChoice(x_31);
      }
    else
      {
        t = w_31;
        {
          ATerm y_31 = t;
          int z_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(z_31);
            }
          else
            {
              t = y_31;
              {
                ATerm b_32 = t;
                int c_32 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(c_32);
                  }
                else
                  {
                    t = b_32;
                    {
                      ATerm f_32 = t;
                      int g_32 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(p_7, q_7, r_7, t);
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
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(i_32);
                              }
                            else
                              {
                                t = h_32;
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
  ATerm o_7 (ATerm t)
  {
    ATerm y_39 = NULL,z_39 = NULL,x_11 = NULL;
    y_39 = t;
    {
      ATerm j_32 = t;
      int k_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_7 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((z_39 != NULL) && (z_39 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  z_39 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(t_7, t);
          ;
          LocalPopChoice(k_32);
        }
      else
        {
          t = j_32;
          t = term_m_32;
          z_39 = t;
        }
      t = not_null(z_39);
      t = ReadFromFile_0_0(t);
      x_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_39, x_11);
      t = apply_strategy_1_0(n_146, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(m_7, p_146, n_7, o_7, t);
  return(t);
}
ATerm u_7 (ATerm t)
{
  t = _2_0(_id, v_7, t);
  return(t);
}
ATerm v_7 (ATerm t)
{
  t = apply_to_bodies_1_0(w_7, t);
  return(t);
}
ATerm w_7 (ATerm t)
{
  t = downup_1_0(x_7, t);
  t = downup_1_0(a_8, t);
  t = downup_1_0(c_8, t);
  t = topdown_1_0(f_8, t);
  t = downup_1_0(g_8, t);
  return(t);
}
ATerm x_7 (ATerm t)
{
  t = repeat_1_0(y_7, t);
  return(t);
}
ATerm y_7 (ATerm t)
{
  ATerm q_32 = t;
  int t_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Simplify_0_0(t);
      ;
      LocalPopChoice(t_32);
    }
  else
    {
      t = q_32;
      {
        ATerm u_32 = t;
        int v_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL;
            if(match_cons(t, sym_Seq_2))
              {
                j_40 = ATgetArgument(t, 0);
                k_40 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = k_40;
            if(match_cons(t, sym_Let_2))
              {
                l_40 = ATgetArgument(t, 0);
                m_40 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Let_2, l_40, (ATerm) ATmakeAppl(sym_Seq_2, j_40, m_40));
            ;
            LocalPopChoice(v_32);
          }
        else
          {
            t = u_32;
            {
              ATerm w_32 = t;
              int x_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = FuseScope_0_0(t);
                  ;
                  LocalPopChoice(x_32);
                }
              else
                {
                  t = w_32;
                  {
                    ATerm y_32 = t;
                    int z_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = WhereSavesCurrentTerm_0_0(t);
                        ;
                        LocalPopChoice(z_32);
                      }
                    else
                      {
                        t = y_32;
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
ATerm b_8 (ATerm t)
{
  ATerm a_33 = t;
  int b_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Simplify_0_0(t);
      ;
      LocalPopChoice(b_33);
    }
  else
    {
      t = a_33;
      {
        ATerm d_33 = t;
        int e_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_40 = NULL,s_40 = NULL,t_40 = NULL,u_40 = NULL;
            if(match_cons(t, sym_Seq_2))
              {
                r_40 = ATgetArgument(t, 0);
                s_40 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = s_40;
            if(match_cons(t, sym_Let_2))
              {
                t_40 = ATgetArgument(t, 0);
                u_40 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Let_2, t_40, (ATerm) ATmakeAppl(sym_Seq_2, r_40, u_40));
            ;
            LocalPopChoice(e_33);
          }
        else
          {
            t = d_33;
            {
              ATerm f_33 = t;
              int j_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = FuseScope_0_0(t);
                  ;
                  LocalPopChoice(j_33);
                }
              else
                {
                  t = f_33;
                  {
                    ATerm k_33 = t;
                    int l_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = WhereSavesCurrentTerm_0_0(t);
                        ;
                        LocalPopChoice(l_33);
                      }
                    else
                      {
                        t = k_33;
                        {
                          ATerm o_33 = t;
                          int p_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = TestSavesCurrentTerm_0_0(t);
                              ;
                              LocalPopChoice(p_33);
                            }
                          else
                            {
                              t = o_33;
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
ATerm c_8 (ATerm t)
{
  t = repeat_1_0(d_8, t);
  return(t);
}
ATerm d_8 (ATerm t)
{
  ATerm q_33 = t;
  int r_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Simplify_0_0(t);
      ;
      LocalPopChoice(r_33);
    }
  else
    {
      t = q_33;
      {
        ATerm s_33 = t;
        int t_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_40 = NULL,a_41 = NULL,b_41 = NULL,c_41 = NULL;
            if(match_cons(t, sym_Seq_2))
              {
                z_40 = ATgetArgument(t, 0);
                a_41 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = a_41;
            if(match_cons(t, sym_Let_2))
              {
                b_41 = ATgetArgument(t, 0);
                c_41 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Let_2, b_41, (ATerm) ATmakeAppl(sym_Seq_2, z_40, c_41));
            ;
            LocalPopChoice(t_33);
          }
        else
          {
            t = s_33;
            {
              ATerm v_33 = t;
              int x_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = FuseScope_0_0(t);
                  ;
                  LocalPopChoice(x_33);
                }
              else
                {
                  t = v_33;
                  {
                    ATerm b_34 = t;
                    int f_34 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = WhereSavesCurrentTerm_0_0(t);
                        ;
                        LocalPopChoice(f_34);
                      }
                    else
                      {
                        t = b_34;
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
ATerm f_8 (ATerm t)
{
  ATerm g_34 = t;
  int k_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = NarrowScope_0_0(t);
      ;
      LocalPopChoice(k_34);
    }
  else
    {
      t = g_34;
    }
  return(t);
}
ATerm g_8 (ATerm t)
{
  t = repeat_1_0(h_8, t);
  return(t);
}
ATerm h_8 (ATerm t)
{
  ATerm l_34 = t;
  int n_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Simplify_0_0(t);
      ;
      LocalPopChoice(n_34);
    }
  else
    {
      t = l_34;
      {
        ATerm o_34 = t;
        int p_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_41 = NULL,i_41 = NULL,j_41 = NULL,k_41 = NULL;
            if(match_cons(t, sym_Seq_2))
              {
                h_41 = ATgetArgument(t, 0);
                i_41 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = i_41;
            if(match_cons(t, sym_Let_2))
              {
                j_41 = ATgetArgument(t, 0);
                k_41 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Let_2, j_41, (ATerm) ATmakeAppl(sym_Seq_2, h_41, k_41));
            ;
            LocalPopChoice(p_34);
          }
        else
          {
            t = o_34;
            {
              ATerm s_34 = t;
              int t_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = FuseScope_0_0(t);
                  ;
                  LocalPopChoice(t_34);
                }
              else
                {
                  t = s_34;
                  {
                    ATerm y_34 = t;
                    int z_34 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = WhereSavesCurrentTerm_0_0(t);
                        ;
                        LocalPopChoice(z_34);
                      }
                    else
                      {
                        t = y_34;
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
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(u_7, _fail, default_usage_0_0, t);
  return(t);
}
