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
Symbol sym_Explode_2;
Symbol sym_Anno_2;
Symbol sym_App_2;
Symbol sym_RootApp_1;
Symbol sym_As_2;
Symbol sym_RDefT_4;
Symbol sym_Choice_2;
Symbol sym_AM_2;
Symbol sym_Fail_0;
Symbol sym_Id_0;
Symbol sym_SVar_1;
Symbol sym_Let_2;
Symbol sym_Call_2;
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
Symbol sym_Anno_2;
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
  sym_Explode_2 = ATmakeSymbol("Explode", 2, ATfalse);
  ATprotectSymbol(sym_Explode_2);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_RootApp_1 = ATmakeSymbol("RootApp", 1, ATfalse);
  ATprotectSymbol(sym_RootApp_1);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
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
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
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
ATerm term_g_31;
ATerm term_x_29;
ATerm term_w_29;
ATerm term_r_29;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_t_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_g_26;
ATerm term_c_26;
ATerm term_x_25;
ATerm term_u_25;
ATerm term_t_24;
ATerm term_a_24;
ATerm term_c_22;
ATerm term_x_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_v_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_17;
ATerm term_j_17;
ATerm term_e_17;
ATerm term_z_16;
ATerm term_s_16;
ATerm term_r_14;
ATerm term_d_11;
ATerm term_a_11;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_t_8;
ATerm term_s_7;
void init_constant_terms (void)
{
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym_Op_2, term_r_10, (ATerm) ATempty);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym_ConstType_1, term_s_10);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_19);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(sym__3, term_u_25, term_x_25, term_s_7);
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm TestSavesCurrentTerm_0_0 (ATerm);
ATerm WhereSavesCurrentTerm_0_0 (ATerm);
ATerm FuseScope_0_0 (ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm u_0 (ATerm);
ATerm v_0 (ATerm);
ATerm w_0 (ATerm);
ATerm y_0 (ATerm);
ATerm BuildMatchFusion_0_0 (ATerm);
ATerm MisMatch_0_0 (ATerm);
ATerm l_12 (ATerm b_10, ATerm o_10, ATerm g_11, ATerm);
ATerm BuildMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm h_122 (ATerm), ATerm);
ATerm LetHoist_0_0 (ATerm);
ATerm Idempotency_0_0 (ATerm);
ATerm AssociateR_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm c_1 (ATerm);
ATerm d_1 (ATerm);
ATerm f_1 (ATerm);
ATerm g_1 (ATerm);
ATerm h_1 (ATerm);
ATerm j_1 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm l_1 (ATerm);
ATerm ElimFail_0_0 (ATerm);
ATerm ElimId_0_0 (ATerm);
ATerm Simplify_0_0 (ATerm);
ATerm repeat_1_0 (ATerm o_137 (ATerm), ATerm);
ATerm downup_1_0 (ATerm f_121 (ATerm), ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm c_2 (ATerm);
ATerm TransformingCongruence_0_0 (ATerm);
ATerm Bapp_0_0 (ATerm);
ATerm genzip_4_0 (ATerm p_125 (ATerm), ATerm q_125 (ATerm), ATerm r_125 (ATerm), ATerm s_125 (ATerm), ATerm);
ATerm m_2 (ATerm);
ATerm p_2 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm TransformingAnnoCongruence_0_0 (ATerm);
ATerm As_2_0 (ATerm j_106 (ATerm), ATerm k_106 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm g_109 (ATerm), ATerm h_109 (ATerm), ATerm i_109 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm i_110 (ATerm), ATerm j_110 (ATerm), ATerm k_110 (ATerm), ATerm);
ATerm Explode_2_0 (ATerm c_106 (ATerm), ATerm d_106 (ATerm), ATerm);
ATerm Op_2_0 (ATerm y_105 (ATerm), ATerm z_105 (ATerm), ATerm);
ATerm pat_td_1_0 (ATerm j_119 (ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm MatchingCongruence_0_0 (ATerm);
ATerm downup2_2_0 (ATerm i_121 (ATerm), ATerm j_121 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm u_111 (ATerm), ATerm v_111 (ATerm), ATerm w_111 (ATerm), ATerm x_111 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm r_111 (ATerm), ATerm s_111 (ATerm), ATerm t_111 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm u_104 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm z_104 (ATerm), ATerm);
ATerm h_4 (ATerm);
ATerm apply_to_bodies_1_0 (ATerm e_119 (ATerm), ATerm);
ATerm _2_0 (ATerm b_100 (ATerm), ATerm c_100 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm c_143 (ATerm), ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm e_146 (ATerm), ATerm);
ATerm f_30 (ATerm z_29, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm p_127 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm v_127 (ATerm), ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm b_5 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm n_144 (ATerm), ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm f_5 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm j_5 (ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm p_5 (ATerm);
ATerm r_5 (ATerm);
ATerm s_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm t_5 (ATerm);
ATerm w_5 (ATerm);
ATerm y_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm t_131 (ATerm), ATerm u_131 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm z_5 (ATerm);
ATerm c_6 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm m_144 (ATerm), ATerm);
ATerm d_6 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm e_6 (ATerm);
ATerm need_help_1_0 (ATerm c_147 (ATerm), ATerm);
ATerm map_1_0 (ATerm e_127 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm y_118 (ATerm), ATerm);
ATerm g_6 (ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm z_118 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm j_6 (ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm q_104 (ATerm), ATerm r_104 (ATerm), ATerm);
ATerm q_6 (ATerm);
ATerm parse_options_p__1_0 (ATerm f_149 (ATerm), ATerm);
ATerm u_6 (ATerm);
ATerm v_6 (ATerm);
ATerm w_6 (ATerm);
ATerm y_6 (ATerm);
ATerm parse_options_1_0 (ATerm e_149 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm e_147 (ATerm), ATerm f_147 (ATerm), ATerm g_147 (ATerm), ATerm h_147 (ATerm), ATerm);
ATerm d_7 (ATerm);
ATerm f_7 (ATerm);
ATerm g_7 (ATerm);
ATerm h_7 (ATerm);
ATerm i_7 (ATerm);
ATerm iowrap_3_0 (ATerm n_146 (ATerm), ATerm o_146 (ATerm), ATerm p_146 (ATerm), ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm p_7 (ATerm);
ATerm q_7 (ATerm);
ATerm r_7 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm c_0 = NULL,e_0 = NULL;
  c_0 = t;
  t = term_s_7;
  t = whoami_0_0(t);
  e_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), e_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = c_0;
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
ATerm WhereSavesCurrentTerm_0_0 (ATerm t)
{
  ATerm l_0 = NULL,o_0 = NULL;
  if(match_cons(t, sym_Where_1))
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
ATerm FuseScope_0_0 (ATerm t)
{
  ATerm q_0 = NULL,r_0 = NULL,s_0 = NULL,t_0 = NULL;
  if(match_cons(t, sym_Scope_2))
    {
      q_0 = ATgetArgument(t, 0);
      {
        ATerm u_7 = ATgetArgument(t, 1);
        if(match_cons(u_7, sym_Scope_2))
          {
            r_0 = ATgetArgument(u_7, 0);
            s_0 = ATgetArgument(u_7, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_0, r_0);
  {
    ATerm v_7 = t;
    int w_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_7 = ATgetArgument(t, 0);
            ATerm y_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_0;
        {
          ATerm p_0 (ATerm t)
          {
            t = r_0;
            return(t);
          }
          t = at_end_1_0(p_0, t);
        }
        ;
        LocalPopChoice(w_7);
      }
    else
      {
        t = v_7;
        {
          ATerm x_0 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, q_0, r_0));
          if(match_cons(t, sym__2))
            {
              ATerm z_7 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) z_7) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              x_0 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = x_0;
          t = concat_0_0(t);
        }
      }
    t_0 = t;
    t = (ATerm) ATmakeAppl(sym_Scope_2, t_0, s_0);
  }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm e_1 = NULL,i_1 = NULL,k_1 = NULL,m_1 = NULL,n_1 = NULL,o_1 = NULL,p_1 = NULL;
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
      ATerm a_8 = ATgetArgument(t, 0);
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
          e_1 = ATgetArgument(t, 0);
          i_1 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Prim_2, e_1, i_1);
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
ATerm u_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_8 = ATgetArgument(t, 0);
      if(((ATgetType(c_8) != AT_LIST) || !(ATisEmpty(c_8))))
        _fail(t);
      {
        ATerm d_8 = ATgetArgument(t, 1);
        if(((ATgetType(d_8) != AT_LIST) || !(ATisEmpty(d_8))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm v_0 (ATerm t)
{
  ATerm q_2 = NULL,r_2 = NULL,w_2 = NULL,a_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_8 = ATgetArgument(t, 0);
      if(((ATgetType(e_8) == AT_LIST) && !(ATisEmpty(e_8))))
        {
          q_2 = ATgetFirst((ATermList) e_8);
          w_2 = (ATerm) ATgetNext((ATermList) e_8);
        }
      else
        _fail(t);
      {
        ATerm g_8 = ATgetArgument(t, 1);
        if(((ATgetType(g_8) == AT_LIST) && !(ATisEmpty(g_8))))
          {
            r_2 = ATgetFirst((ATermList) g_8);
            a_3 = (ATerm) ATgetNext((ATermList) g_8);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_2, r_2), (ATerm) ATmakeAppl(sym__2, w_2, a_3));
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
ATerm y_0 (ATerm t)
{
  ATerm g_3 = NULL,h_3 = NULL;
  if(match_cons(t, sym__2))
    {
      g_3 = ATgetArgument(t, 0);
      h_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, g_3), (ATerm) ATmakeAppl(sym_Match_1, h_3));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm a_2 = NULL,b_2 = NULL,h_2 = NULL,k_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_8 = ATgetArgument(t, 0);
      if(match_cons(h_8, sym_Build_1))
        {
          ATerm k_8 = ATgetArgument(h_8, 0);
          if(match_cons(k_8, sym_Op_2))
            {
              b_2 = ATgetArgument(k_8, 0);
              a_2 = ATgetArgument(k_8, 1);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm i_8 = ATgetArgument(t, 1);
        if(match_cons(i_8, sym_Match_1))
          {
            ATerm l_8 = ATgetArgument(i_8, 0);
            if(match_cons(l_8, sym_Op_2))
              {
                if((b_2 != ATgetArgument(l_8, 0)))
                  {
                    _fail(ATgetArgument(l_8, 0));
                  }
                h_2 = ATgetArgument(l_8, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, a_2, h_2);
  t = genzip_4_0(u_0, v_0, w_0, y_0, t);
  k_2 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, k_2), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, b_2, a_2)));
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm i_3 = NULL,k_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_8 = ATgetArgument(t, 0);
      if(match_cons(m_8, sym_Build_1))
        {
          ATerm o_8 = ATgetArgument(m_8, 0);
          if(match_cons(o_8, sym_Op_2))
            {
              i_3 = ATgetArgument(o_8, 0);
              {
                ATerm p_8 = ATgetArgument(o_8, 1);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm n_8 = ATgetArgument(t, 1);
        if(match_cons(n_8, sym_Match_1))
          {
            ATerm q_8 = ATgetArgument(n_8, 0);
            if(match_cons(q_8, sym_Op_2))
              {
                k_3 = ATgetArgument(q_8, 0);
                {
                  ATerm r_8 = ATgetArgument(q_8, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, i_3, k_3);
  {
    ATerm s_8 = t;
    if((PushChoice() == 0))
      {
        ATerm l_3 = NULL;
        if(match_cons(t, sym__2))
          {
            l_3 = ATgetArgument(t, 0);
            if((l_3 != ATgetArgument(t, 1)))
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
        t = s_8;
      }
    t = term_t_8;
  }
  return(t);
}
ATerm l_12 (ATerm b_10, ATerm o_10, ATerm g_11, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, b_10, o_10);
  {
    ATerm u_8 = t;
    int v_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = MisMatch_0_0(t);
        ;
        LocalPopChoice(v_8);
      }
    else
      {
        t = u_8;
        {
          ATerm w_8 = t;
          int x_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = BuildMatchFusion_0_0(t);
              ;
              LocalPopChoice(x_8);
            }
          else
            {
              t = w_8;
              {
                ATerm y_8 = t;
                int z_8 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm n_11 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        ATerm a_9 = ATgetArgument(t, 0);
                        ATerm b_9 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = b_10;
                    if(match_cons(t, sym_Build_1))
                      {
                        ATerm c_9 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = o_10;
                    if(match_cons(t, sym_Build_1))
                      {
                        n_11 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Build_1, n_11);
                    ;
                    LocalPopChoice(z_8);
                  }
                else
                  {
                    t = y_8;
                    {
                      ATerm d_9 = t;
                      int e_9 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = BuildPrim_0_0(t);
                          ;
                          LocalPopChoice(e_9);
                        }
                      else
                        {
                          t = d_9;
                          {
                            ATerm r_11 = NULL,s_11 = NULL,u_11 = NULL,v_11 = NULL;
                            if(match_cons(t, sym__2))
                              {
                                ATerm f_9 = ATgetArgument(t, 0);
                                ATerm g_9 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = b_10;
                            if(match_cons(t, sym_Match_1))
                              {
                                r_11 = ATgetArgument(t, 0);
                                t = o_10;
                                if(match_cons(t, sym_Match_1))
                                  {
                                    u_11 = ATgetArgument(t, 0);
                                    t = u_11;
                                    if((r_11 != t))
                                      {
                                        _fail(t);
                                      }
                                    t = (ATerm) ATmakeAppl(sym_Match_1, r_11);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        u_11 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = r_11;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        s_11 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = u_11;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        v_11 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = v_11;
                                    if((s_11 != t))
                                      {
                                        _fail(t);
                                      }
                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, s_11));
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Build_1))
                                  {
                                    r_11 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = o_10;
                                if(match_cons(t, sym_Match_1))
                                  {
                                    u_11 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = u_11;
                                if((r_11 != t))
                                  {
                                    _fail(t);
                                  }
                                t = (ATerm) ATmakeAppl(sym_Build_1, r_11);
                              }
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
  ATerm z_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL,h_12 = NULL;
  b_12 = t;
  if(match_cons(t, sym_Seq_2))
    {
      c_12 = ATgetArgument(t, 0);
      h_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_12;
  if(match_cons(t, sym_Seq_2))
    {
      z_11 = ATgetArgument(t, 0);
      a_12 = ATgetArgument(t, 1);
      {
        ATerm h_9 = t;
        int i_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_1 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, c_12, z_11);
            {
              ATerm j_9 = t;
              int k_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = MisMatch_0_0(t);
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
                        t = BuildMatchFusion_0_0(t);
                        ;
                        LocalPopChoice(m_9);
                      }
                    else
                      {
                        t = l_9;
                        {
                          ATerm n_9 = t;
                          int o_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm e_2 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  ATerm p_9 = ATgetArgument(t, 0);
                                  ATerm q_9 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = c_12;
                              if(match_cons(t, sym_Build_1))
                                {
                                  ATerm r_9 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = z_11;
                              if(match_cons(t, sym_Build_1))
                                {
                                  e_2 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym_Build_1, e_2);
                              ;
                              LocalPopChoice(o_9);
                            }
                          else
                            {
                              t = n_9;
                              {
                                ATerm s_9 = t;
                                int t_9 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildPrim_0_0(t);
                                    ;
                                    LocalPopChoice(t_9);
                                  }
                                else
                                  {
                                    t = s_9;
                                    {
                                      ATerm j_2 = NULL,l_2 = NULL,n_2 = NULL,o_2 = NULL;
                                      if(match_cons(t, sym__2))
                                        {
                                          ATerm u_9 = ATgetArgument(t, 0);
                                          ATerm v_9 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = c_12;
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          j_2 = ATgetArgument(t, 0);
                                          t = z_11;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              n_2 = ATgetArgument(t, 0);
                                              t = n_2;
                                              if((j_2 != t))
                                                {
                                                  _fail(t);
                                                }
                                              t = (ATerm) ATmakeAppl(sym_Match_1, j_2);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Build_1))
                                                {
                                                  n_2 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = j_2;
                                              if(match_cons(t, sym_Var_1))
                                                {
                                                  l_2 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = n_2;
                                              if(match_cons(t, sym_Var_1))
                                                {
                                                  o_2 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = o_2;
                                              if((l_2 != t))
                                                {
                                                  _fail(t);
                                                }
                                              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, l_2));
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_Build_1))
                                            {
                                              j_2 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = z_11;
                                          if(match_cons(t, sym_Match_1))
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
                                          t = (ATerm) ATmakeAppl(sym_Build_1, j_2);
                                        }
                                    }
                                  }
                              }
                            }
                        }
                      }
                  }
                }
              r_1 = t;
              t = (ATerm) ATmakeAppl(sym_Seq_2, r_1, a_12);
            }
            ;
            LocalPopChoice(i_9);
          }
        else
          {
            t = h_9;
            t = l_12(c_12, h_12, b_12, t);
          }
      }
    }
  else
    {
      t = l_12(c_12, h_12, b_12, t);
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm h_122 (ATerm), ATerm t)
{
  ATerm p_12 (ATerm t)
  {
    ATerm w_9 = t;
    int x_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_122(t);
        ;
        LocalPopChoice(x_9);
      }
    else
      {
        t = w_9;
        t = SRTS_one(p_12, t);
      }
    return(t);
  }
  t = p_12(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm q_12 = NULL,r_12 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      ATerm y_9 = ATgetArgument(t, 0);
      if(((ATgetType(y_9) == AT_LIST) && !(ATisEmpty(y_9))))
        {
          ATerm a_10 = ATgetFirst((ATermList) y_9);
          if(match_cons(a_10, sym_SDefT_4))
            {
              r_12 = ATgetArgument(a_10, 0);
              {
                ATerm d_10 = ATgetArgument(a_10, 1);
                if(((ATgetType(d_10) != AT_LIST) || !(ATisEmpty(d_10))))
                  _fail(t);
              }
              {
                ATerm e_10 = ATgetArgument(a_10, 2);
                if(((ATgetType(e_10) != AT_LIST) || !(ATisEmpty(e_10))))
                  _fail(t);
              }
              q_12 = ATgetArgument(a_10, 3);
            }
          else
            _fail(t);
          {
            ATerm c_10 = (ATerm) ATgetNext((ATermList) y_9);
            if(((ATgetType(c_10) != AT_LIST) || !(ATisEmpty(c_10))))
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm z_9 = ATgetArgument(t, 1);
        if(match_cons(z_9, sym_CallT_3))
          {
            ATerm f_10 = ATgetArgument(z_9, 0);
            if(match_cons(f_10, sym_SVar_1))
              {
                if((r_12 != ATgetArgument(f_10, 0)))
                  {
                    _fail(ATgetArgument(f_10, 0));
                  }
              }
            else
              _fail(t);
            {
              ATerm g_10 = ATgetArgument(z_9, 1);
              if(((ATgetType(g_10) != AT_LIST) || !(ATisEmpty(g_10))))
                _fail(t);
            }
            {
              ATerm h_10 = ATgetArgument(z_9, 2);
              if(((ATgetType(h_10) != AT_LIST) || !(ATisEmpty(h_10))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = q_12;
  {
    ATerm i_10 = t;
    if((PushChoice() == 0))
      {
        ATerm z_0 (ATerm t)
        {
          if(match_cons(t, sym_CallT_3))
            {
              ATerm j_10 = ATgetArgument(t, 0);
              if(match_cons(j_10, sym_SVar_1))
                {
                  if((r_12 != ATgetArgument(j_10, 0)))
                    {
                      _fail(ATgetArgument(j_10, 0));
                    }
                }
              else
                _fail(t);
              {
                ATerm k_10 = ATgetArgument(t, 1);
                if(((ATgetType(k_10) != AT_LIST) || !(ATisEmpty(k_10))))
                  _fail(t);
              }
              {
                ATerm l_10 = ATgetArgument(t, 2);
                if(((ATgetType(l_10) != AT_LIST) || !(ATisEmpty(l_10))))
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
        t = i_10;
      }
    t = q_12;
  }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,m_13 = NULL,n_13 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      m_13 = ATgetArgument(t, 0);
      t = m_13;
      if(match_cons(t, sym_Seq_2))
        {
          k_13 = ATgetArgument(t, 0);
          g_13 = ATgetArgument(t, 1);
          t = k_13;
          if(match_cons(t, sym_Where_1))
            {
              f_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = g_13;
          if(match_cons(t, sym_Seq_2))
            {
              h_13 = ATgetArgument(t, 0);
              j_13 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = h_13;
          if(match_cons(t, sym_Build_1))
            {
              i_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, f_13, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, i_13), j_13)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              k_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, k_13);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          m_13 = ATgetArgument(t, 0);
          t = m_13;
          if(match_cons(t, sym_Test_1))
            {
              k_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, k_13);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              m_13 = ATgetArgument(t, 0);
              t = m_13;
              if(match_cons(t, sym_Not_1))
                {
                  k_13 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, k_13);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  m_13 = ATgetArgument(t, 0);
                  n_13 = ATgetArgument(t, 1);
                  t = n_13;
                  if((m_13 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      m_13 = ATgetArgument(t, 0);
                      n_13 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = n_13;
                  if((m_13 != t))
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
  ATerm c_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      c_14 = ATgetArgument(t, 0);
      g_14 = ATgetArgument(t, 1);
      t = c_14;
      if(match_cons(t, sym_LChoice_2))
        {
          e_14 = ATgetArgument(t, 0);
          f_14 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, e_14, (ATerm) ATmakeAppl(sym_LChoice_2, f_14, g_14));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          c_14 = ATgetArgument(t, 0);
          g_14 = ATgetArgument(t, 1);
          t = c_14;
          if(match_cons(t, sym_Seq_2))
            {
              e_14 = ATgetArgument(t, 0);
              f_14 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, e_14, (ATerm) ATmakeAppl(sym_Seq_2, f_14, g_14));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              c_14 = ATgetArgument(t, 0);
              g_14 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = c_14;
          if(match_cons(t, sym_Choice_2))
            {
              e_14 = ATgetArgument(t, 0);
              f_14 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, e_14, (ATerm) ATmakeAppl(sym_Choice_2, f_14, g_14));
        }
    }
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm m_10 = t;
  int n_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(n_0, _id, t);
      {
        ATerm a_1 (ATerm t)
        {
          ATerm p_10 = t;
          int q_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(n_0, t);
              ;
              LocalPopChoice(q_10);
            }
          else
            {
              t = p_10;
            }
          return(t);
        }
        t = Cons_2_0(_id, a_1, t);
      }
      ;
      LocalPopChoice(n_10);
    }
  else
    {
      t = m_10;
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
  ATerm z_15 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      z_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, z_15, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_t_10), term_t_10));
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm u_10 = t;
  int v_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_16 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, b_16, term_t_10);
      ;
      LocalPopChoice(v_10);
    }
  else
    {
      t = u_10;
    }
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm j_16 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      j_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, j_16, term_t_10);
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm w_10 = t;
  int x_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_16 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, l_16, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_t_10), term_t_10));
      ;
      LocalPopChoice(x_10);
    }
  else
    {
      t = w_10;
    }
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm w_16 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      w_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, w_16, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_t_10), term_t_10));
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm y_10 = t;
  int z_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_16 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, y_16, term_t_10);
      ;
      LocalPopChoice(z_10);
    }
  else
    {
      t = y_10;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm c_15 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL,h_15 = NULL,j_15 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      h_15 = ATgetArgument(t, 0);
      j_15 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, h_15, j_15);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          h_15 = ATgetArgument(t, 0);
          t = h_15;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              c_15 = ATgetFirst((ATermList) t);
              d_15 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, c_15, (ATerm) ATmakeAppl(sym_LChoices_1, d_15));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_t_8;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              h_15 = ATgetArgument(t, 0);
              t = h_15;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  c_15 = ATgetFirst((ATermList) t);
                  d_15 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, c_15, (ATerm) ATmakeAppl(sym_Choices_1, d_15));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_t_8;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  h_15 = ATgetArgument(t, 0);
                  t = h_15;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      c_15 = ATgetFirst((ATermList) t);
                      d_15 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, c_15, (ATerm) ATmakeAppl(sym_Seqs_1, d_15));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_a_11;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      h_15 = ATgetArgument(t, 0);
                      j_15 = ATgetArgument(t, 1);
                      f_15 = ATgetArgument(t, 2);
                      e_15 = ATgetArgument(t, 3);
                      {
                        ATerm x_15 = NULL,y_15 = NULL;
                        t = j_15;
                        t = map1_1_0(c_1, t);
                        x_15 = t;
                        t = f_15;
                        t = map1_1_0(d_1, t);
                        y_15 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, h_15, x_15, y_15, e_15);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          h_15 = ATgetArgument(t, 0);
                          j_15 = ATgetArgument(t, 1);
                          f_15 = ATgetArgument(t, 2);
                          e_15 = ATgetArgument(t, 3);
                          {
                            ATerm b_11 = t;
                            int c_11 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm h_16 = NULL,i_16 = NULL;
                                t = f_15;
                                t = map1_1_0(f_1, t);
                                h_16 = t;
                                t = j_15;
                                t = map_1_0(g_1, t);
                                i_16 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, h_15, i_16, h_16, e_15);
                                ;
                                LocalPopChoice(c_11);
                              }
                            else
                              {
                                t = b_11;
                                {
                                  ATerm u_16 = NULL,v_16 = NULL;
                                  t = j_15;
                                  t = map1_1_0(h_1, t);
                                  u_16 = t;
                                  t = f_15;
                                  t = map_1_0(j_1, t);
                                  v_16 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, h_15, u_16, v_16, e_15);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              h_15 = ATgetArgument(t, 0);
                              j_15 = ATgetArgument(t, 1);
                              f_15 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, j_15, (ATerm) ATmakeAppl(sym_Op_2, term_d_11, (ATerm) ATinsert(ATinsert(ATempty, f_15), h_15)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  h_15 = ATgetArgument(t, 0);
                                  j_15 = ATgetArgument(t, 1);
                                  f_15 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, f_15)), h_15), (ATerm) ATmakeAppl(sym_Build_1, j_15)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      h_15 = ATgetArgument(t, 0);
                                      j_15 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, h_15, (ATerm) ATmakeAppl(sym_Match_1, j_15));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          h_15 = ATgetArgument(t, 0);
                                          j_15 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, h_15), j_15);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              h_15 = ATgetArgument(t, 0);
                                              j_15 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, j_15), h_15);
                                        }
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
  ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      q_18 = ATgetArgument(t, 0);
      t = q_18;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_t_8;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          q_18 = ATgetArgument(t, 0);
          t = q_18;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_a_11;
        }
      else
        {
          ATerm e_11 = t;
          int f_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_Seq_2))
                {
                  q_18 = ATgetArgument(t, 0);
                  {
                    ATerm h_11 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(f_11);
              t = q_18;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_t_8;
            }
          else
            {
              t = e_11;
              {
                ATerm i_11 = t;
                int j_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Scope_2))
                      {
                        ATerm k_11 = ATgetArgument(t, 0);
                        r_18 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(j_11);
                    t = r_18;
                    if(!(match_cons(t, sym_Fail_0)))
                      _fail(t);
                    t = term_t_8;
                  }
                else
                  {
                    t = i_11;
                    {
                      ATerm l_11 = t;
                      int m_11 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_Rec_2))
                            {
                              ATerm o_11 = ATgetArgument(t, 0);
                              r_18 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(m_11);
                          t = r_18;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_t_8;
                        }
                      else
                        {
                          t = l_11;
                          if(match_cons(t, sym_Some_1))
                            {
                              q_18 = ATgetArgument(t, 0);
                              t = q_18;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_t_8;
                            }
                          else
                            {
                              if(match_cons(t, sym_One_1))
                                {
                                  q_18 = ATgetArgument(t, 0);
                                  t = q_18;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_t_8;
                                }
                              else
                                {
                                  ATerm p_11 = t;
                                  int q_11 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_Path_2))
                                        {
                                          ATerm t_11 = ATgetArgument(t, 0);
                                          r_18 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(q_11);
                                      t = r_18;
                                      if(!(match_cons(t, sym_Fail_0)))
                                        _fail(t);
                                      t = term_t_8;
                                    }
                                  else
                                    {
                                      t = p_11;
                                      {
                                        ATerm w_11 = t;
                                        int x_11 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            if(match_cons(t, sym_Cong_2))
                                              {
                                                ATerm y_11 = ATgetArgument(t, 0);
                                                r_18 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            LocalPopChoice(x_11);
                                            t = r_18;
                                            t = fetch_1_0(l_1, t);
                                            t = term_t_8;
                                          }
                                        else
                                          {
                                            t = w_11;
                                            if(match_cons(t, sym_Choice_2))
                                              {
                                                q_18 = ATgetArgument(t, 0);
                                                r_18 = ATgetArgument(t, 1);
                                                t = r_18;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    t = q_18;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm d_12 = t;
                                                        int e_12 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = r_18;
                                                            ;
                                                            LocalPopChoice(e_12);
                                                          }
                                                        else
                                                          {
                                                            t = d_12;
                                                            t = q_18;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = q_18;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = q_18;
                                                    if(!(match_cons(t, sym_Fail_0)))
                                                      _fail(t);
                                                    t = r_18;
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_LChoice_2))
                                                  {
                                                    q_18 = ATgetArgument(t, 0);
                                                    r_18 = ATgetArgument(t, 1);
                                                    t = r_18;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        t = q_18;
                                                        if(match_cons(t, sym_Fail_0))
                                                          {
                                                            ATerm f_12 = t;
                                                            int g_12 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = r_18;
                                                                ;
                                                                LocalPopChoice(g_12);
                                                              }
                                                            else
                                                              {
                                                                t = f_12;
                                                                t = q_18;
                                                              }
                                                          }
                                                        else
                                                          {
                                                            t = q_18;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = q_18;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = r_18;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Where_1))
                                                      {
                                                        q_18 = ATgetArgument(t, 0);
                                                        t = q_18;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = term_t_8;
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_GuardedLChoice_3))
                                                          {
                                                            q_18 = ATgetArgument(t, 0);
                                                            r_18 = ATgetArgument(t, 1);
                                                            s_18 = ATgetArgument(t, 2);
                                                          }
                                                        else
                                                          _fail(t);
                                                        t = s_18;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, q_18, r_18);
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                    }
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
  ATerm q_19 = NULL,s_19 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      s_19 = ATgetArgument(t, 0);
      t = s_19;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_a_11;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          s_19 = ATgetArgument(t, 0);
          t = s_19;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_t_8;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              s_19 = ATgetArgument(t, 0);
              q_19 = ATgetArgument(t, 1);
              t = q_19;
              if(match_cons(t, sym_Id_0))
                {
                  t = s_19;
                  if(match_cons(t, sym_Id_0))
                    {
                      ATerm i_12 = t;
                      int j_12 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = q_19;
                          ;
                          LocalPopChoice(j_12);
                        }
                      else
                        {
                          t = i_12;
                          t = s_19;
                        }
                    }
                  else
                    {
                      t = s_19;
                    }
                }
              else
                {
                  t = s_19;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = q_19;
                }
            }
          else
            {
              ATerm k_12 = t;
              int m_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      s_19 = ATgetArgument(t, 0);
                      {
                        ATerm n_12 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(m_12);
                  t = s_19;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_a_11;
                }
              else
                {
                  t = k_12;
                  {
                    ATerm o_12 = t;
                    int s_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            ATerm t_12 = ATgetArgument(t, 0);
                            q_19 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(s_12);
                        t = q_19;
                        if(!(match_cons(t, sym_Id_0)))
                          _fail(t);
                        t = term_a_11;
                      }
                    else
                      {
                        t = o_12;
                        {
                          ATerm u_12 = t;
                          int v_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Rec_2))
                                {
                                  ATerm w_12 = ATgetArgument(t, 0);
                                  q_19 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(v_12);
                              t = q_19;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_a_11;
                            }
                          else
                            {
                              t = u_12;
                              if(match_cons(t, sym_All_1))
                                {
                                  s_19 = ATgetArgument(t, 0);
                                  t = s_19;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_a_11;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Where_1))
                                    {
                                      s_19 = ATgetArgument(t, 0);
                                      t = s_19;
                                      if(!(match_cons(t, sym_Id_0)))
                                        _fail(t);
                                      t = term_a_11;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          s_19 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = s_19;
                                      if(!(match_cons(t, sym_Wld_0)))
                                        _fail(t);
                                      t = term_a_11;
                                    }
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
  ATerm x_12 = t;
  int y_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(y_12);
    }
  else
    {
      t = x_12;
      {
        ATerm z_12 = t;
        int a_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(a_13);
          }
        else
          {
            t = z_12;
            {
              ATerm b_13 = t;
              int c_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(c_13);
                }
              else
                {
                  t = b_13;
                  {
                    ATerm d_13 = t;
                    int e_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(e_13);
                      }
                    else
                      {
                        t = d_13;
                        {
                          ATerm l_13 = t;
                          int o_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(o_13);
                            }
                          else
                            {
                              t = l_13;
                              {
                                ATerm p_13 = t;
                                int q_13 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm d_20 = NULL,e_20 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        d_20 = ATgetArgument(t, 0);
                                        e_20 = ATgetArgument(t, 1);
                                        t = d_20;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = e_20;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            d_20 = ATgetArgument(t, 0);
                                            e_20 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = d_20;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = e_20;
                                      }
                                    ;
                                    LocalPopChoice(q_13);
                                  }
                                else
                                  {
                                    t = p_13;
                                    {
                                      ATerm r_13 = t;
                                      int s_13 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
                                          LocalPopChoice(s_13);
                                        }
                                      else
                                        {
                                          t = r_13;
                                          {
                                            ATerm t_13 = t;
                                            int u_13 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = BuildMatch_0_0(t);
                                                ;
                                                LocalPopChoice(u_13);
                                              }
                                            else
                                              {
                                                t = t_13;
                                                {
                                                  ATerm i_20 = NULL,j_20 = NULL;
                                                  if(match_cons(t, sym_As_2))
                                                    {
                                                      i_20 = ATgetArgument(t, 0);
                                                      j_20 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = i_20;
                                                  if(!(match_cons(t, sym_Wld_0)))
                                                    _fail(t);
                                                  t = j_20;
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm l_20 (ATerm t)
  {
    ATerm v_13 = t;
    int w_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_137(t);
        t = l_20(t);
        ;
        LocalPopChoice(w_13);
      }
    else
      {
        t = v_13;
      }
    return(t);
  }
  t = l_20(t);
  return(t);
}
ATerm downup_1_0 (ATerm f_121 (ATerm), ATerm t)
{
  t = f_121(t);
  {
    ATerm q_1 (ATerm t)
    {
      t = downup_1_0(f_121, t);
      return(t);
    }
    t = SRTS_all(q_1, t);
    t = f_121(t);
  }
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm z_20 = NULL;
  z_20 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, z_20);
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm a_21 = NULL;
  a_21 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, a_21);
  return(t);
}
ATerm u_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_13 = ATgetArgument(t, 0);
      if(((ATgetType(x_13) != AT_LIST) || !(ATisEmpty(x_13))))
        _fail(t);
      {
        ATerm y_13 = ATgetArgument(t, 1);
        if(((ATgetType(y_13) != AT_LIST) || !(ATisEmpty(y_13))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm b_21 = NULL,c_21 = NULL,d_21 = NULL,e_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_13 = ATgetArgument(t, 0);
      if(((ATgetType(z_13) == AT_LIST) && !(ATisEmpty(z_13))))
        {
          b_21 = ATgetFirst((ATermList) z_13);
          d_21 = (ATerm) ATgetNext((ATermList) z_13);
        }
      else
        _fail(t);
      {
        ATerm a_14 = ATgetArgument(t, 1);
        if(((ATgetType(a_14) == AT_LIST) && !(ATisEmpty(a_14))))
          {
            c_21 = ATgetFirst((ATermList) a_14);
            e_21 = (ATerm) ATgetNext((ATermList) a_14);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_21, c_21), (ATerm) ATmakeAppl(sym__2, d_21, e_21));
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm f_21 = NULL,g_21 = NULL;
  if(match_cons(t, sym__2))
    {
      f_21 = ATgetArgument(t, 0);
      g_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_21), f_21);
  return(t);
}
ATerm x_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_14 = ATgetArgument(t, 0);
      if(((ATgetType(b_14) != AT_LIST) || !(ATisEmpty(b_14))))
        _fail(t);
      {
        ATerm d_14 = ATgetArgument(t, 1);
        if(((ATgetType(d_14) != AT_LIST) || !(ATisEmpty(d_14))))
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
  ATerm h_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_14 = ATgetArgument(t, 0);
      if(((ATgetType(h_14) == AT_LIST) && !(ATisEmpty(h_14))))
        {
          h_21 = ATgetFirst((ATermList) h_14);
          j_21 = (ATerm) ATgetNext((ATermList) h_14);
        }
      else
        _fail(t);
      {
        ATerm i_14 = ATgetArgument(t, 1);
        if(((ATgetType(i_14) == AT_LIST) && !(ATisEmpty(i_14))))
          {
            i_21 = ATgetFirst((ATermList) i_14);
            k_21 = (ATerm) ATgetNext((ATermList) i_14);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_21, i_21), (ATerm) ATmakeAppl(sym__2, j_21, k_21));
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm l_21 = NULL,m_21 = NULL;
  if(match_cons(t, sym__2))
    {
      l_21 = ATgetArgument(t, 0);
      m_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_21), l_21);
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm o_21 = NULL,p_21 = NULL,q_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_14 = ATgetArgument(t, 0);
      if(match_cons(j_14, sym__2))
        {
          o_21 = ATgetArgument(j_14, 0);
          p_21 = ATgetArgument(j_14, 1);
        }
      else
        _fail(t);
      q_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, o_21)), (ATerm) ATmakeAppl(sym_Seq_2, q_21, (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, p_21))));
  return(t);
}
ATerm TransformingCongruence_0_0 (ATerm t)
{
  ATerm n_20 = NULL,o_20 = NULL,p_20 = NULL,q_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL,v_20 = NULL,w_20 = NULL,x_20 = NULL,y_20 = NULL;
  if(match_cons(t, sym_Cong_2))
    {
      n_20 = ATgetArgument(t, 0);
      o_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_20;
  t = map_1_0(new_0_0, t);
  p_20 = t;
  t = map_1_0(s_1, t);
  q_20 = t;
  t = new_0_0(t);
  r_20 = t;
  t = o_20;
  t = map_1_0(new_0_0, t);
  s_20 = t;
  t = map_1_0(t_1, t);
  t_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_20, s_20);
  t = genzip_4_0(u_1, v_1, w_1, _id, t);
  u_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_20, o_20);
  t = genzip_4_0(x_1, y_1, z_1, c_2, t);
  v_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_20, s_20);
  {
    ATerm k_14 = t;
    int l_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_14 = ATgetArgument(t, 0);
            ATerm n_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = p_20;
        {
          ATerm d_2 (ATerm t)
          {
            t = s_20;
            return(t);
          }
          t = at_end_1_0(d_2, t);
        }
        ;
        LocalPopChoice(l_14);
      }
    else
      {
        t = k_14;
        {
          ATerm f_3 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, p_20, s_20));
          if(match_cons(t, sym__2))
            {
              ATerm o_14 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) o_14) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              f_3 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = f_3;
          t = concat_0_0(t);
        }
      }
    w_20 = t;
    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, n_20, q_20), (ATerm) ATmakeAppl(sym_Var_1, r_20)));
    t = Mapp2_0_0(t);
    x_20 = t;
    t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, n_20, t_20), (ATerm) ATmakeAppl(sym_Var_1, r_20)));
    t = Bapp_0_0(t);
    y_20 = t;
    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(w_20), r_20), (ATerm) ATmakeAppl(sym_Seq_2, x_20, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, v_20), y_20)));
  }
  return(t);
}
ATerm Bapp_0_0 (ATerm t)
{
  ATerm v_21 = NULL,w_21 = NULL;
  v_21 = t;
  if(match_cons(t, sym_Build_1))
    {
      w_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm p_14 = t;
    int q_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL;
        t = v_21;
        t = new_0_0(t);
        y_21 = t;
        t = w_21;
        {
          ATerm f_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((z_21 != NULL) && (z_21 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  z_21 = ATgetArgument(t, 0);
                if(((a_22 != NULL) && (a_22 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  a_22 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, y_21);
            return(t);
          }
          t = pat_td_1_0(f_2, t);
          b_22 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, y_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_r_14, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_22)), not_null(z_21))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, y_21)))), (ATerm) ATmakeAppl(sym_Build_1, b_22)));
        }
        ;
        LocalPopChoice(q_14);
      }
    else
      {
        t = p_14;
        {
          ATerm s_14 = t;
          int t_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_22 = NULL,e_22 = NULL,f_22 = NULL;
              t = v_21;
              t = new_0_0(t);
              d_22 = t;
              t = w_21;
              {
                ATerm g_2 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((e_22 != NULL) && (e_22 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        e_22 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, d_22);
                  return(t);
                }
                t = pat_td_1_0(g_2, t);
                f_22 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, d_22), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(e_22), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, d_22)))), (ATerm) ATmakeAppl(sym_Build_1, f_22)));
              }
              ;
              LocalPopChoice(t_14);
            }
          else
            {
              t = s_14;
              {
                ATerm h_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL;
                t = v_21;
                t = new_0_0(t);
                h_22 = t;
                t = w_21;
                {
                  ATerm i_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((i_22 != NULL) && (i_22 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          i_22 = ATgetArgument(t, 0);
                        if(((j_22 != NULL) && (j_22 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          j_22 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, h_22);
                    return(t);
                  }
                  t = pat_td_1_0(i_2, t);
                  k_22 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, h_22), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(i_22), not_null(j_22), (ATerm) ATmakeAppl(sym_Var_1, h_22))), (ATerm) ATmakeAppl(sym_Build_1, k_22)));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm genzip_4_0 (ATerm p_125 (ATerm), ATerm q_125 (ATerm), ATerm r_125 (ATerm), ATerm s_125 (ATerm), ATerm t)
{
  ATerm l_22 (ATerm t)
  {
    ATerm u_14 = t;
    int v_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_125(t);
        ;
        LocalPopChoice(v_14);
      }
    else
      {
        t = u_14;
        t = q_125(t);
        t = _2_0(s_125, l_22, t);
        t = r_125(t);
      }
    return(t);
  }
  t = l_22(t);
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm e_23 = NULL;
  e_23 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, e_23);
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm f_23 = NULL;
  f_23 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, f_23);
  return(t);
}
ATerm s_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_14 = ATgetArgument(t, 0);
      if(((ATgetType(w_14) != AT_LIST) || !(ATisEmpty(w_14))))
        _fail(t);
      {
        ATerm x_14 = ATgetArgument(t, 1);
        if(((ATgetType(x_14) != AT_LIST) || !(ATisEmpty(x_14))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm i_23 = NULL,j_23 = NULL,l_23 = NULL,n_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_14 = ATgetArgument(t, 0);
      if(((ATgetType(y_14) == AT_LIST) && !(ATisEmpty(y_14))))
        {
          i_23 = ATgetFirst((ATermList) y_14);
          l_23 = (ATerm) ATgetNext((ATermList) y_14);
        }
      else
        _fail(t);
      {
        ATerm z_14 = ATgetArgument(t, 1);
        if(((ATgetType(z_14) == AT_LIST) && !(ATisEmpty(z_14))))
          {
            j_23 = ATgetFirst((ATermList) z_14);
            n_23 = (ATerm) ATgetNext((ATermList) z_14);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_23, j_23), (ATerm) ATmakeAppl(sym__2, l_23, n_23));
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm o_23 = NULL,p_23 = NULL;
  if(match_cons(t, sym__2))
    {
      o_23 = ATgetArgument(t, 0);
      p_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_23), o_23);
  return(t);
}
ATerm v_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_15 = ATgetArgument(t, 0);
      if(((ATgetType(a_15) != AT_LIST) || !(ATisEmpty(a_15))))
        _fail(t);
      {
        ATerm b_15 = ATgetArgument(t, 1);
        if(((ATgetType(b_15) != AT_LIST) || !(ATisEmpty(b_15))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_15 = ATgetArgument(t, 0);
      if(((ATgetType(g_15) == AT_LIST) && !(ATisEmpty(g_15))))
        {
          q_23 = ATgetFirst((ATermList) g_15);
          s_23 = (ATerm) ATgetNext((ATermList) g_15);
        }
      else
        _fail(t);
      {
        ATerm i_15 = ATgetArgument(t, 1);
        if(((ATgetType(i_15) == AT_LIST) && !(ATisEmpty(i_15))))
          {
            r_23 = ATgetFirst((ATermList) i_15);
            t_23 = (ATerm) ATgetNext((ATermList) i_15);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_23, r_23), (ATerm) ATmakeAppl(sym__2, s_23, t_23));
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm u_23 = NULL,v_23 = NULL;
  if(match_cons(t, sym__2))
    {
      u_23 = ATgetArgument(t, 0);
      v_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_23), u_23);
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_15 = ATgetArgument(t, 0);
      if(match_cons(k_15, sym__2))
        {
          w_23 = ATgetArgument(k_15, 0);
          x_23 = ATgetArgument(k_15, 1);
        }
      else
        _fail(t);
      y_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, w_23)), (ATerm) ATmakeAppl(sym_Seq_2, y_23, (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, x_23))));
  return(t);
}
ATerm TransformingAnnoCongruence_0_0 (ATerm t)
{
  ATerm n_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL,v_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL,b_23 = NULL,d_23 = NULL;
  if(match_cons(t, sym_Call_2))
    {
      ATerm l_15 = ATgetArgument(t, 0);
      if(match_cons(l_15, sym_SVar_1))
        {
          ATerm n_15 = ATgetArgument(l_15, 0);
          if((ATgetSymbol((ATermAppl) n_15) != ATmakeSymbol("Anno_Cong__", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm m_15 = ATgetArgument(t, 1);
        if(((ATgetType(m_15) == AT_LIST) && !(ATisEmpty(m_15))))
          {
            ATerm o_15 = ATgetFirst((ATermList) m_15);
            if(match_cons(o_15, sym_Cong_2))
              {
                n_22 = ATgetArgument(o_15, 0);
                o_22 = ATgetArgument(o_15, 1);
              }
            else
              _fail(t);
            {
              ATerm p_15 = (ATerm) ATgetNext((ATermList) m_15);
              if(((ATgetType(p_15) == AT_LIST) && !(ATisEmpty(p_15))))
                {
                  p_22 = ATgetFirst((ATermList) p_15);
                  {
                    ATerm q_15 = (ATerm) ATgetNext((ATermList) p_15);
                    if(((ATgetType(q_15) != AT_LIST) || !(ATisEmpty(q_15))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_22), p_22);
  t = map_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_22 = ATgetFirst((ATermList) t);
      r_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = map_1_0(m_2, t);
  s_22 = t;
  t = (ATerm) ATinsert(CheckATermList(o_22), p_22);
  t = map_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_22 = ATgetFirst((ATermList) t);
      u_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = map_1_0(p_2, t);
  v_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_22, u_22);
  t = genzip_4_0(s_2, t_2, u_2, _id, t);
  w_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_22, (ATerm) ATinsert(CheckATermList(o_22), p_22));
  t = genzip_4_0(v_2, x_2, y_2, z_2, t);
  x_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_22, u_22);
  {
    ATerm r_15 = t;
    int s_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_15 = ATgetArgument(t, 0);
            ATerm u_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_22;
        {
          ATerm b_3 (ATerm t)
          {
            t = u_22;
            return(t);
          }
          t = at_end_1_0(b_3, t);
        }
        ;
        LocalPopChoice(s_15);
      }
    else
      {
        t = r_15;
        {
          ATerm o_3 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, r_22, u_22));
          if(match_cons(t, sym__2))
            {
              ATerm v_15 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) v_15) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              o_3 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = o_3;
          t = concat_0_0(t);
        }
      }
    y_22 = t;
    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, n_22, s_22), (ATerm) ATmakeAppl(sym_Var_1, q_22)));
    t = Mapp2_0_0(t);
    b_23 = t;
    t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, n_22, v_22), (ATerm) ATmakeAppl(sym_Var_1, t_22)));
    t = Bapp_0_0(t);
    d_23 = t;
    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(CheckATermList(y_22), t_22), q_22), (ATerm) ATmakeAppl(sym_Seq_2, b_23, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, x_22), d_23)));
  }
  return(t);
}
ATerm As_2_0 (ATerm j_106 (ATerm), ATerm k_106 (ATerm), ATerm t)
{
  ATerm c_24 = NULL,d_24 = NULL,e_24 = NULL,f_24 = NULL,g_24 = NULL,h_24 = NULL;
  h_24 = t;
  if(match_cons(t, sym_As_2))
    {
      d_24 = ATgetArgument(t, 0);
      e_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_24);
  c_24 = t;
  t = d_24;
  t = j_106(t);
  f_24 = t;
  t = e_24;
  t = k_106(t);
  g_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, f_24, g_24), c_24);
  return(t);
}
ATerm CallT_3_0 (ATerm g_109 (ATerm), ATerm h_109 (ATerm), ATerm i_109 (ATerm), ATerm t)
{
  ATerm k_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL;
  r_24 = t;
  if(match_cons(t, sym_CallT_3))
    {
      l_24 = ATgetArgument(t, 0);
      m_24 = ATgetArgument(t, 1);
      n_24 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_24);
  k_24 = t;
  t = l_24;
  t = g_109(t);
  o_24 = t;
  t = m_24;
  t = h_109(t);
  p_24 = t;
  t = n_24;
  t = i_109(t);
  q_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, o_24, p_24, q_24), k_24);
  return(t);
}
ATerm PrimT_3_0 (ATerm i_110 (ATerm), ATerm j_110 (ATerm), ATerm k_110 (ATerm), ATerm t)
{
  ATerm u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL;
  b_25 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      v_24 = ATgetArgument(t, 0);
      w_24 = ATgetArgument(t, 1);
      x_24 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_25);
  u_24 = t;
  t = v_24;
  t = i_110(t);
  y_24 = t;
  t = w_24;
  t = j_110(t);
  z_24 = t;
  t = x_24;
  t = k_110(t);
  a_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, y_24, z_24, a_25), u_24);
  return(t);
}
ATerm Explode_2_0 (ATerm c_106 (ATerm), ATerm d_106 (ATerm), ATerm t)
{
  ATerm e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL;
  j_25 = t;
  if(match_cons(t, sym_Explode_2))
    {
      f_25 = ATgetArgument(t, 0);
      g_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_25);
  e_25 = t;
  t = f_25;
  t = c_106(t);
  h_25 = t;
  t = g_25;
  t = d_106(t);
  i_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, h_25, i_25), e_25);
  return(t);
}
ATerm Op_2_0 (ATerm y_105 (ATerm), ATerm z_105 (ATerm), ATerm t)
{
  ATerm m_25 = NULL,n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL;
  r_25 = t;
  if(match_cons(t, sym_Op_2))
    {
      n_25 = ATgetArgument(t, 0);
      o_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_25);
  m_25 = t;
  t = n_25;
  t = y_105(t);
  p_25 = t;
  t = o_25;
  t = z_105(t);
  q_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, p_25, q_25), m_25);
  return(t);
}
ATerm pat_td_1_0 (ATerm j_119 (ATerm), ATerm t)
{
  ATerm w_15 = t;
  int a_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_119(t);
      ;
      LocalPopChoice(a_16);
    }
  else
    {
      t = w_15;
      {
        ATerm c_16 = t;
        int d_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_3 (ATerm t)
            {
              ATerm j_3 (ATerm t)
              {
                t = pat_td_1_0(j_119, t);
                return(t);
              }
              t = fetch_1_0(j_3, t);
              return(t);
            }
            t = Op_2_0(_id, c_3, t);
            ;
            LocalPopChoice(d_16);
          }
        else
          {
            t = c_16;
            {
              ATerm e_16 = t;
              int f_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_3 (ATerm t)
                  {
                    t = pat_td_1_0(j_119, t);
                    return(t);
                  }
                  t = Explode_2_0(_id, m_3, t);
                  ;
                  LocalPopChoice(f_16);
                }
              else
                {
                  t = e_16;
                  {
                    ATerm g_16 = t;
                    int k_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm n_3 (ATerm t)
                        {
                          t = pat_td_1_0(j_119, t);
                          return(t);
                        }
                        t = Explode_2_0(n_3, _id, t);
                        ;
                        LocalPopChoice(k_16);
                      }
                    else
                      {
                        t = g_16;
                        {
                          ATerm m_16 = t;
                          int n_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm q_3 (ATerm t)
                              {
                                ATerm r_3 (ATerm t)
                                {
                                  t = pat_td_1_0(j_119, t);
                                  return(t);
                                }
                                t = fetch_1_0(r_3, t);
                                return(t);
                              }
                              t = PrimT_3_0(_id, _id, q_3, t);
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
                                    ATerm s_3 (ATerm t)
                                    {
                                      ATerm t_3 (ATerm t)
                                      {
                                        t = pat_td_1_0(j_119, t);
                                        return(t);
                                      }
                                      t = fetch_1_0(t_3, t);
                                      return(t);
                                    }
                                    t = CallT_3_0(_id, _id, s_3, t);
                                    ;
                                    LocalPopChoice(p_16);
                                  }
                                else
                                  {
                                    t = o_16;
                                    {
                                      ATerm u_3 (ATerm t)
                                      {
                                        t = pat_td_1_0(j_119, t);
                                        return(t);
                                      }
                                      t = As_2_0(_id, u_3, t);
                                    }
                                  }
                              }
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
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm v_25 = NULL,w_25 = NULL;
  v_25 = t;
  if(match_cons(t, sym_Match_1))
    {
      w_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm q_16 = t;
    int r_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL;
        t = v_25;
        t = new_0_0(t);
        y_25 = t;
        t = w_25;
        {
          ATerm v_3 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((a_26 != NULL) && (a_26 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  a_26 = ATgetArgument(t, 0);
                if(((z_25 != NULL) && (z_25 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  z_25 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, y_25), not_null(a_26));
            return(t);
          }
          t = pat_td_1_0(v_3, t);
          b_26 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, y_25), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, b_26), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_s_16, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, y_25))), (ATerm) ATmakeAppl(sym_Match_1, not_null(z_25))))));
        }
        ;
        LocalPopChoice(r_16);
      }
    else
      {
        t = q_16;
        {
          ATerm t_16 = t;
          int x_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_26 = NULL,e_26 = NULL,f_26 = NULL;
              t = v_25;
              t = new_0_0(t);
              d_26 = t;
              t = w_25;
              {
                ATerm w_3 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((e_26 != NULL) && (e_26 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        e_26 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, d_26);
                  return(t);
                }
                t = pat_td_1_0(w_3, t);
                f_26 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, d_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, f_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, d_26)), not_null(e_26))));
              }
              ;
              LocalPopChoice(x_16);
            }
          else
            {
              t = t_16;
              {
                ATerm h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL;
                t = v_25;
                t = new_0_0(t);
                h_26 = t;
                t = w_25;
                {
                  ATerm x_3 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((i_26 != NULL) && (i_26 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          i_26 = ATgetArgument(t, 0);
                        if(((j_26 != NULL) && (j_26 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          j_26 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, h_26);
                    return(t);
                  }
                  t = pat_td_1_0(x_3, t);
                  k_26 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, h_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, k_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, h_26)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(j_26)), not_null(i_26)))));
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
  ATerm x_26 = NULL;
  if(match_cons(t, sym_Match_1))
    {
      x_26 = ATgetArgument(t, 0);
      t = x_26;
    }
  else
    {
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_z_16;
    }
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm d_27 = NULL;
  if(match_cons(t, sym_Match_1))
    {
      d_27 = ATgetArgument(t, 0);
      t = d_27;
    }
  else
    {
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_z_16;
    }
  return(t);
}
ATerm MatchingCongruence_0_0 (ATerm t)
{
  ATerm q_26 = NULL,r_26 = NULL;
  if(match_cons(t, sym_Cong_2))
    {
      q_26 = ATgetArgument(t, 0);
      r_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_26;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm a_17 = t;
      int b_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, q_26, (ATerm) ATempty));
          ;
          LocalPopChoice(b_17);
        }
      else
        {
          t = a_17;
          {
            ATerm w_26 = NULL;
            t = r_26;
            t = map_1_0(y_3, t);
            w_26 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, q_26, w_26));
            t = Mapp2_0_0(t);
          }
        }
    }
  else
    {
      ATerm c_27 = NULL;
      t = r_26;
      t = map_1_0(z_3, t);
      c_27 = t;
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, q_26, c_27));
      t = Mapp2_0_0(t);
    }
  return(t);
}
ATerm downup2_2_0 (ATerm i_121 (ATerm), ATerm j_121 (ATerm), ATerm t)
{
  t = i_121(t);
  {
    ATerm a_4 (ATerm t)
    {
      t = downup2_2_0(i_121, j_121, t);
      return(t);
    }
    t = SRTS_all(a_4, t);
    t = j_121(t);
  }
  return(t);
}
ATerm SDefT_4_0 (ATerm u_111 (ATerm), ATerm v_111 (ATerm), ATerm w_111 (ATerm), ATerm x_111 (ATerm), ATerm t)
{
  ATerm g_27 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL,o_27 = NULL,p_27 = NULL;
  p_27 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      h_27 = ATgetArgument(t, 0);
      i_27 = ATgetArgument(t, 1);
      j_27 = ATgetArgument(t, 2);
      k_27 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_27);
  g_27 = t;
  t = h_27;
  t = u_111(t);
  l_27 = t;
  t = i_27;
  t = v_111(t);
  m_27 = t;
  t = j_27;
  t = w_111(t);
  n_27 = t;
  t = k_27;
  t = x_111(t);
  o_27 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, l_27, m_27, n_27, o_27), g_27);
  return(t);
}
ATerm SDef_3_0 (ATerm r_111 (ATerm), ATerm s_111 (ATerm), ATerm t_111 (ATerm), ATerm t)
{
  ATerm s_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL;
  z_27 = t;
  if(match_cons(t, sym_SDef_3))
    {
      t_27 = ATgetArgument(t, 0);
      u_27 = ATgetArgument(t, 1);
      v_27 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_27);
  s_27 = t;
  t = t_27;
  t = r_111(t);
  w_27 = t;
  t = u_27;
  t = s_111(t);
  x_27 = t;
  t = v_27;
  t = t_111(t);
  y_27 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, w_27, x_27, y_27), s_27);
  return(t);
}
ATerm Strategies_1_0 (ATerm u_104 (ATerm), ATerm t)
{
  ATerm c_28 = NULL,d_28 = NULL,e_28 = NULL,h_28 = NULL;
  h_28 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      d_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_28);
  c_28 = t;
  t = d_28;
  t = u_104(t);
  e_28 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, e_28), c_28);
  return(t);
}
ATerm Specification_1_0 (ATerm z_104 (ATerm), ATerm t)
{
  ATerm k_28 = NULL,l_28 = NULL,m_28 = NULL,n_28 = NULL;
  n_28 = t;
  if(match_cons(t, sym_Specification_1))
    {
      l_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_28);
  k_28 = t;
  t = l_28;
  t = z_104(t);
  m_28 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, m_28), k_28);
  return(t);
}
ATerm h_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm apply_to_bodies_1_0 (ATerm e_119 (ATerm), ATerm t)
{
  ATerm b_4 (ATerm t)
  {
    ATerm f_4 (ATerm t)
    {
      ATerm g_4 (ATerm t)
      {
        ATerm i_4 (ATerm t)
        {
          ATerm l_4 (ATerm t)
          {
            ATerm c_17 = t;
            int d_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SDef_3_0(_id, _id, e_119, t);
                ;
                LocalPopChoice(d_17);
              }
            else
              {
                t = c_17;
                t = SDefT_4_0(_id, _id, _id, e_119, t);
              }
            return(t);
          }
          t = map_1_0(l_4, t);
          return(t);
        }
        t = Strategies_1_0(i_4, t);
        return(t);
      }
      t = Cons_2_0(g_4, h_4, t);
      return(t);
    }
    t = Cons_2_0(_id, f_4, t);
    return(t);
  }
  t = Specification_1_0(b_4, t);
  return(t);
}
ATerm _2_0 (ATerm b_100 (ATerm), ATerm c_100 (ATerm), ATerm t)
{
  ATerm q_28 = NULL,r_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL;
  v_28 = t;
  if(match_cons(t, sym__2))
    {
      r_28 = ATgetArgument(t, 0);
      s_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_28);
  q_28 = t;
  t = r_28;
  t = b_100(t);
  t_28 = t;
  t = s_28;
  t = c_100(t);
  u_28 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, t_28, u_28), q_28);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm c_143 (ATerm), ATerm t)
{
  ATerm y_28 = NULL,z_28 = NULL,a_29 = NULL;
  if(match_cons(t, sym__2))
    {
      y_28 = ATgetArgument(t, 0);
      z_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_28, term_e_17);
  t = open_stream_0_0(t);
  a_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_29, z_28);
  t = c_143(t);
  t = fclose_0_0(t);
  t = z_28;
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = fetch_1_0(r_4, t);
  return(t);
}
ATerm q_4 (ATerm t)
{
  t = WriteToFile_1_0(s_4, t);
  return(t);
}
ATerm r_4 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm f_29 = NULL,g_29 = NULL,h_29 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_17 = ATgetArgument(t, 0);
      if(match_cons(f_17, sym_Stream_1))
        {
          f_29 = ATgetArgument(f_17, 0);
        }
      else
        _fail(t);
      g_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(f_29, g_29);
  h_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_29);
  return(t);
}
ATerm t_4 (ATerm t)
{
  t = WriteToFile_1_0(u_4, t);
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm i_29 = NULL,j_29 = NULL,k_29 = NULL,l_29 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_17 = ATgetArgument(t, 0);
      if(match_cons(g_17, sym_Stream_1))
        {
          i_29 = ATgetArgument(g_17, 0);
        }
      else
        _fail(t);
      j_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(i_29, j_29);
  k_29 = t;
  t = SSL_fputc((ATerm)ATmakeInt(10), k_29);
  l_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_29);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm b_29 = NULL,e_29 = NULL;
  b_29 = t;
  {
    ATerm m_4 (ATerm t)
    {
      ATerm h_17 = t;
      int i_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_4 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((e_29 != NULL) && (e_29 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  e_29 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(n_4, t);
          ;
          LocalPopChoice(i_17);
        }
      else
        {
          t = h_17;
          t = term_j_17;
          if(((e_29 != NULL) && (e_29 != t)))
            _fail(t);
          else
            e_29 = t;
        }
      return(t);
    }
    t = _2_0(m_4, _id, t);
    t = b_29;
    {
      ATerm o_4 (ATerm t)
      {
        ATerm p_3 = NULL;
        p_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_29), p_3);
        return(t);
      }
      t = _2_0(_id, o_4, t);
      {
        ATerm k_17 = t;
        int l_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(p_4, q_4, t);
            ;
            LocalPopChoice(l_17);
          }
        else
          {
            t = k_17;
            t = _2_0(_id, t_4, t);
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
  ATerm m_29 = NULL,n_29 = NULL,o_29 = NULL,p_29 = NULL,q_29 = NULL;
  m_29 = t;
  t = dtime_0_0(t);
  t = m_29;
  t = e_146(t);
  n_29 = t;
  t = dtime_0_0(t);
  o_29 = t;
  t = n_29;
  if(match_cons(t, sym__2))
    {
      p_29 = ATgetArgument(t, 0);
      q_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_29), (ATerm) ATmakeAppl(sym_Runtime_1, o_29)), q_29);
  return(t);
}
ATerm f_30 (ATerm z_29, ATerm t)
{
  t = SSL_fclose(z_29);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm c_30 = NULL,d_30 = NULL;
  d_30 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_30 = ATgetArgument(t, 0);
      {
        ATerm m_17 = t;
        int n_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(c_30);
            ;
            LocalPopChoice(n_17);
          }
        else
          {
            t = m_17;
            t = f_30(d_30, t);
          }
      }
    }
  else
    {
      t = f_30(d_30, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm g_30 = NULL;
  t = SSL_stdin_stream();
  g_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_30);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm h_30 = NULL;
  t = SSL_stdout_stream();
  h_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_30);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm i_30 = NULL;
  t = SSL_stderr_stream();
  i_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_30);
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm q_30 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      q_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_30;
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm u_30 = NULL;
  u_30 = t;
  t = SSL_is_string(u_30);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_17 = ATgetArgument(t, 0);
      ATerm p_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_17 = t;
    int r_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_4 = NULL,d_4 = NULL;
        c_4 = t;
        t = SSL_explode_term(c_4);
        if(match_cons(t, sym__2))
          {
            ATerm s_17 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) s_17) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm t_17 = ATgetArgument(t, 1);
              if(((ATgetType(t_17) == AT_LIST) && !(ATisEmpty(t_17))))
                {
                  d_4 = ATgetFirst((ATermList) t_17);
                  {
                    ATerm u_17 = (ATerm) ATgetNext((ATermList) t_17);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = d_4;
        if(match_cons(t, sym_stderr_0))
          {
            t = d_4;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = d_4;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = d_4;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(r_17);
      }
    else
      {
        t = q_17;
        {
          ATerm v_17 = t;
          int w_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_30 = NULL,o_30 = NULL,p_30 = NULL;
              t = _2_0(v_4, _id, t);
              if(match_cons(t, sym__2))
                {
                  n_30 = ATgetArgument(t, 0);
                  o_30 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(n_30, o_30);
              p_30 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, p_30);
              ;
              LocalPopChoice(w_17);
            }
          else
            {
              t = v_17;
              {
                ATerm r_30 = NULL,s_30 = NULL,t_30 = NULL;
                t = _2_0(w_4, _id, t);
                if(match_cons(t, sym__2))
                  {
                    r_30 = ATgetArgument(t, 0);
                    s_30 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(r_30, s_30);
                t_30 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, t_30);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm v_30 = NULL,w_30 = NULL,x_30 = NULL;
  ATerm x_17 = t;
  int y_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_30 = NULL;
      y_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_30, term_z_17);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(y_17);
    }
  else
    {
      t = x_17;
      {
        ATerm e_4 = NULL;
        e_4 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, e_4), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = e_4;
        _fail(t);
      }
    }
  v_30 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(x_30);
  w_30 = t;
  t = v_30;
  t = fclose_0_0(t);
  t = w_30;
  return(t);
}
ATerm fetch_1_0 (ATerm p_127 (ATerm), ATerm t)
{
  ATerm d_31 (ATerm t)
  {
    ATerm a_18 = t;
    int b_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(p_127, _id, t);
        ;
        LocalPopChoice(b_18);
      }
    else
      {
        t = a_18;
        t = Cons_2_0(_id, d_31, t);
      }
    return(t);
  }
  t = d_31(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm c_18 = t;
  int d_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(d_18);
    }
  else
    {
      t = c_18;
      {
        ATerm i_31 = NULL,j_31 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_31 = ATgetFirst((ATermList) t);
            j_31 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = i_31;
        {
          ATerm x_4 (ATerm t)
          {
            t = j_31;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(x_4, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm v_127 (ATerm), ATerm t)
{
  ATerm p_31 (ATerm t)
  {
    ATerm e_18 = t;
    int f_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, p_31, t);
        ;
        LocalPopChoice(f_18);
      }
    else
      {
        t = e_18;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = v_127(t);
      }
    return(t);
  }
  t = p_31(t);
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm s_31 = NULL;
  s_31 = t;
  t = SSL_explode_string(s_31);
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm t_31 = NULL;
  t_31 = t;
  t = SSL_explode_string(t_31);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm r_31 = NULL;
  t = _2_0(y_4, z_4, t);
  {
    ATerm g_18 = t;
    int h_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_31 = NULL,w_31 = NULL;
        if(match_cons(t, sym__2))
          {
            v_31 = ATgetArgument(t, 0);
            w_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_31;
        {
          ATerm a_5 (ATerm t)
          {
            t = w_31;
            return(t);
          }
          t = at_end_1_0(a_5, t);
        }
        ;
        LocalPopChoice(h_18);
      }
    else
      {
        t = g_18;
        {
          ATerm j_4 = NULL,k_4 = NULL;
          j_4 = t;
          t = SSL_explode_term(j_4);
          if(match_cons(t, sym__2))
            {
              ATerm i_18 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) i_18) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              k_4 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = k_4;
          t = concat_0_0(t);
        }
      }
    r_31 = t;
    t = SSL_implode_string(r_31);
  }
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm j_18 = t;
  int k_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(k_18);
    }
  else
    {
      t = j_18;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm l_18 = t;
  int m_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_32 = NULL;
      i_32 = t;
      t = SSL_is_string(i_32);
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
            t = map_1_0(b_5, t);
            ;
            LocalPopChoice(o_18);
          }
        else
          {
            t = n_18;
            {
              ATerm m_32 = NULL,n_32 = NULL,o_32 = NULL;
              m_32 = t;
              if(match_cons(t, sym_Path_1))
                {
                  n_32 = ATgetArgument(t, 0);
                  t = n_32;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      n_32 = ATgetArgument(t, 0);
                      t = n_32;
                      {
                        ATerm p_18 = t;
                        int t_18 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), n_32);
                            {
                              ATerm u_18 = t;
                              int v_18 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm e_5 = NULL;
                                  t = eval_config_0_0(t);
                                  e_5 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), n_32, e_5);
                                  t = e_5;
                                  ;
                                  LocalPopChoice(v_18);
                                }
                              else
                                {
                                  t = u_18;
                                }
                            }
                            ;
                            LocalPopChoice(t_18);
                          }
                        else
                          {
                            t = p_18;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, n_32), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = n_32;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm s_32 = NULL,t_32 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          n_32 = ATgetArgument(t, 0);
                          o_32 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = n_32;
                      t = eval_config_0_0(t);
                      s_32 = t;
                      t = o_32;
                      t = eval_config_0_0(t);
                      t_32 = t;
                      t = (ATerm) ATmakeAppl(sym__2, s_32, t_32);
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
  ATerm w_18 = t;
  int x_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_33 = NULL,d_33 = NULL;
      b_33 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm y_18 = t;
        int z_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_5 = NULL;
            t = eval_config_0_0(t);
            q_5 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), q_5);
            t = q_5;
            ;
            LocalPopChoice(z_18);
          }
        else
          {
            t = y_18;
          }
        d_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_33, term_a_19);
        t = geq_0_0(t);
        t = b_33;
        t = n_144(t);
      }
      ;
      LocalPopChoice(x_18);
    }
  else
    {
      t = w_18;
    }
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm f_33 = NULL;
  f_33 = t;
  if(match_string(t, "-k"))
    {
      t = f_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = f_33;
    }
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm g_33 = NULL,h_33 = NULL;
  g_33 = t;
  t = SSL_string_to_int(g_33);
  h_33 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), h_33);
  t = g_33;
  return(t);
}
ATerm f_5 (ATerm t)
{
  t = term_b_19;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_5, d_5, f_5, t);
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm j_33 = NULL;
  j_33 = t;
  if(match_string(t, "-S"))
    {
      t = j_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = j_33;
    }
  return(t);
}
ATerm h_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_d_19;
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = term_e_19;
  return(t);
}
ATerm j_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm k_33 = NULL,l_33 = NULL;
  k_33 = t;
  t = SSL_string_to_int(k_33);
  l_33 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), l_33);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, k_33);
  return(t);
}
ATerm l_5 (ATerm t)
{
  t = term_f_19;
  return(t);
}
ATerm m_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_g_19;
  return(t);
}
ATerm o_5 (ATerm t)
{
  t = term_h_19;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm i_19 = t;
  int j_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_5, h_5, i_5, t);
      ;
      LocalPopChoice(j_19);
    }
  else
    {
      t = i_19;
      {
        ATerm k_19 = t;
        int l_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(j_5, k_5, l_5, t);
            ;
            LocalPopChoice(l_19);
          }
        else
          {
            t = k_19;
            t = Option_3_0(m_5, n_5, o_5, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm o_33 = NULL,p_33 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_33 = NULL;
      t = term_s_7;
      t = d_0(t);
      q_33 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_19, term_n_19, q_33);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm t_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_33 = ATgetFirst((ATermList) t);
          p_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_33;
      t = a_0(t);
      t = term_s_7;
      t = b_0(t);
      t_33 = t;
      t = (ATerm) ATinsert(CheckATermList(p_33), t_33);
    }
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm v_33 = NULL;
  v_33 = t;
  if(match_string(t, "-o"))
    {
      t = v_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = v_33;
    }
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm w_33 = NULL;
  w_33 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), w_33);
  t = (ATerm) ATmakeAppl(sym_Output_1, w_33);
  return(t);
}
ATerm s_5 (ATerm t)
{
  t = term_o_19;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_5, r_5, s_5, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm z_33 = NULL,a_34 = NULL,b_34 = NULL,c_34 = NULL;
  if(match_cons(t, sym__3))
    {
      z_33 = ATgetArgument(t, 0);
      a_34 = ATgetArgument(t, 1);
      b_34 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_33, a_34);
  {
    ATerm p_19 = t;
    int r_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_19 = ATgetArgument(t, 0);
            ATerm u_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(z_33, a_34);
        ;
        LocalPopChoice(r_19);
      }
    else
      {
        t = p_19;
        t = (ATerm) ATempty;
      }
    c_34 = t;
    t = SSL_table_put(z_33, a_34, (ATerm) ATinsert(CheckATermList(c_34), b_34));
    t = (ATerm) ATmakeAppl(sym__3, z_33, a_34, b_34);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm k_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_34 = NULL;
      t = term_s_7;
      t = m_0(t);
      o_34 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_19, term_n_19, o_34);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm s_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_34 = ATgetFirst((ATermList) t);
          l_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_34;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_34 = ATgetFirst((ATermList) t);
          n_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_34;
      t = i_0(t);
      t = m_34;
      t = k_0(t);
      s_34 = t;
      t = (ATerm) ATinsert(CheckATermList(n_34), s_34);
    }
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm u_34 = NULL;
  u_34 = t;
  if(match_string(t, "-i"))
    {
      t = u_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = u_34;
    }
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm v_34 = NULL;
  v_34 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), v_34);
  t = (ATerm) ATmakeAppl(sym_Input_1, v_34);
  return(t);
}
ATerm y_5 (ATerm t)
{
  t = term_v_19;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_5, w_5, y_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm w_34 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_7;
  t = whoami_0_0(t);
  w_34 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), w_34));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm w_19 = t;
    int x_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_5 = NULL;
        t = eval_config_0_0(t);
        u_5 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), u_5);
        t = u_5;
        ;
        LocalPopChoice(x_19);
      }
    else
      {
        t = w_19;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm t_131 (ATerm), ATerm u_131 (ATerm), ATerm t)
{
  ATerm y_19 = t;
  int z_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = t_131(t);
      ;
      LocalPopChoice(z_19);
    }
  else
    {
      t = y_19;
      {
        ATerm z_34 = NULL,a_35 = NULL,d_35 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_34 = ATgetFirst((ATermList) t);
            a_35 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = a_35;
        t = foldr_2_0(t_131, u_131, t);
        d_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_34, d_35);
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
ATerm z_5 (ATerm t)
{
  t = term_c_19;
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm a_6 = NULL,b_6 = NULL;
  if(match_cons(t, sym__2))
    {
      a_6 = ATgetArgument(t, 0);
      b_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_20 = t;
    int b_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(a_6, b_6);
        ;
        LocalPopChoice(b_20);
      }
    else
      {
        t = a_20;
        t = SSL_addr(a_6, b_6);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm g_35 = NULL,v_5 = NULL,x_5 = NULL;
  t = times_0_0(t);
  v_5 = t;
  t = SSL_explode_term(v_5);
  if(match_cons(t, sym__2))
    {
      ATerm c_20 = ATgetArgument(t, 0);
      x_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_5;
  t = foldr_2_0(z_5, c_6, t);
  g_35 = t;
  t = SSL_TicksToSeconds(g_35);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm r_35 = NULL,s_35 = NULL,t_35 = NULL;
  r_35 = t;
  if(match_cons(t, sym__2))
    {
      s_35 = ATgetArgument(t, 0);
      t_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_20 = t;
    int g_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_35;
        if((s_35 != t))
          {
            _fail(t);
          }
        t = r_35;
        ;
        LocalPopChoice(g_20);
      }
    else
      {
        t = f_20;
        t = r_35;
        {
          ATerm h_20 = t;
          int k_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(s_35, t_35);
              ;
              LocalPopChoice(k_20);
            }
          else
            {
              t = h_20;
              t = SSL_gtr(s_35, t_35);
            }
          t = (ATerm) ATmakeAppl(sym__2, s_35, t_35);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm m_144 (ATerm), ATerm t)
{
  ATerm m_20 = t;
  int n_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_35 = NULL,y_35 = NULL;
      w_35 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm r_21 = t;
        int s_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_6 = NULL;
            t = eval_config_0_0(t);
            p_6 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), p_6);
            t = p_6;
            ;
            LocalPopChoice(s_21);
          }
        else
          {
            t = r_21;
          }
        y_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_35, term_t_21);
        t = geq_0_0(t);
        t = w_35;
        t = m_144(t);
      }
      ;
      LocalPopChoice(n_21);
    }
  else
    {
      t = m_20;
    }
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm a_36 = NULL,b_36 = NULL;
  t = run_time_0_0(t);
  a_36 = t;
  t = term_s_7;
  t = whoami_0_0(t);
  b_36 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), a_36), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), b_36));
  t = (ATerm) ATmakeAppl(sym__2, term_u_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_22), a_36), term_x_21), b_36));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(d_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm g_22 = t;
  int m_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(m_22);
    }
  else
    {
      t = g_22;
      {
        ATerm z_22 = t;
        int a_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(a_23);
          }
        else
          {
            t = z_22;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm c_147 (ATerm), ATerm t)
{
  ATerm c_23 = t;
  int g_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm h_23 = t;
        int k_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_6 = NULL;
            t = eval_config_0_0(t);
            t_6 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), t_6);
            t = t_6;
            ;
            LocalPopChoice(k_23);
          }
        else
          {
            t = h_23;
          }
      }
      ;
      LocalPopChoice(g_23);
    }
  else
    {
      t = c_23;
      t = fetch_1_0(e_6, t);
    }
  t = c_147(t);
  return(t);
}
ATerm map_1_0 (ATerm e_127 (ATerm), ATerm t)
{
  ATerm c_36 (ATerm t)
  {
    ATerm m_23 = t;
    int z_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(z_23);
      }
    else
      {
        t = m_23;
        t = Cons_2_0(e_127, c_36, t);
      }
    return(t);
  }
  t = c_36(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm e_36 = NULL,f_36 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_36 = ATgetFirst((ATermList) t);
      f_36 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_36 = NULL,k_36 = NULL;
        t = f_36;
        t = g_0(t);
        j_36 = t;
        t = e_36;
        t = f_0(t);
        k_36 = t;
        t = f_36;
        {
          ATerm f_6 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(j_36), k_36);
            return(t);
          }
          t = reverse_acc_2_0(f_0, f_6, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_s_7;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm y_118 (ATerm), ATerm t)
{
  ATerm l_36 = NULL,m_36 = NULL,n_36 = NULL,o_36 = NULL;
  o_36 = t;
  if(match_cons(t, sym_Program_1))
    {
      m_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_36);
  l_36 = t;
  t = m_36;
  t = y_118(t);
  n_36 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, n_36), l_36);
  return(t);
}
ATerm g_6 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm h_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm r_36 = NULL;
  r_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_36), term_a_24);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_24 = t;
  int i_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm j_24 = t;
        int s_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_6 = NULL;
            t = eval_config_0_0(t);
            x_6 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), x_6);
            t = x_6;
            ;
            LocalPopChoice(s_24);
          }
        else
          {
            t = j_24;
          }
      }
      ;
      LocalPopChoice(i_24);
    }
  else
    {
      t = b_24;
      t = fetch_1_0(g_6, t);
    }
  t = term_t_24;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, h_6, t);
  t = map_1_0(i_6, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm z_118 (ATerm), ATerm t)
{
  ATerm s_36 = NULL,t_36 = NULL,u_36 = NULL,v_36 = NULL;
  v_36 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      t_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_36);
  s_36 = t;
  t = t_36;
  t = z_118(t);
  u_36 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, u_36), s_36);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm z_36 = NULL,a_37 = NULL;
  z_36 = t;
  {
    ATerm c_25 = t;
    int d_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = z_36;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm k_25 = ATgetFirst((ATermList) t);
                ATerm l_25 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_36;
          }
        ;
        LocalPopChoice(d_25);
      }
    else
      {
        t = c_25;
        t = (ATerm) ATinsert(ATempty, z_36);
      }
    a_37 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), a_37);
    t = z_36;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm s_25 = t;
    int t_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_7 = NULL;
        t = eval_config_0_0(t);
        c_7 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), c_7);
        t = c_7;
        ;
        LocalPopChoice(t_25);
      }
    else
      {
        t = s_25;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm j_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_c_26;
  return(t);
}
ATerm l_6 (ATerm t)
{
  t = term_g_26;
  return(t);
}
ATerm m_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_l_26;
  return(t);
}
ATerm o_6 (ATerm t)
{
  t = term_m_26;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm n_26 = t;
  int o_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_6, k_6, l_6, t);
      ;
      LocalPopChoice(o_26);
    }
  else
    {
      t = n_26;
      t = Option_3_0(m_6, n_6, o_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm q_104 (ATerm), ATerm r_104 (ATerm), ATerm t)
{
  ATerm e_37 = NULL,f_37 = NULL,g_37 = NULL,h_37 = NULL,i_37 = NULL,j_37 = NULL;
  j_37 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_37 = ATgetFirst((ATermList) t);
      g_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_37);
  e_37 = t;
  t = f_37;
  t = q_104(t);
  h_37 = t;
  t = g_37;
  t = r_104(t);
  i_37 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(i_37), h_37), e_37);
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm o_37 = NULL;
  o_37 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), o_37);
  t = (ATerm) ATmakeAppl(sym_Program_1, o_37);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm f_149 (ATerm), ATerm t)
{
  ATerm n_37 = NULL;
  n_37 = t;
  {
    ATerm p_26 = t;
    int s_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_26;
        t = f_149(t);
        ;
        LocalPopChoice(s_26);
      }
    else
      {
        t = p_26;
      }
    t = n_37;
    {
      ATerm r_6 (ATerm t)
      {
        ATerm u_26 = t;
        int v_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_26 = t;
            int z_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(z_26);
              }
            else
              {
                t = y_26;
                t = f_149(t);
                t = Cons_2_0(_id, r_6, t);
              }
            ;
            LocalPopChoice(v_26);
          }
        else
          {
            t = u_26;
            {
              ATerm q_37 = NULL,r_37 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  q_37 = ATgetFirst((ATermList) t);
                  r_37 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(r_37), (ATerm) ATmakeAppl(sym_Undefined_1, q_37));
            }
          }
        return(t);
      }
      t = Cons_2_0(q_6, r_6, t);
    }
  }
  return(t);
}
ATerm u_6 (ATerm t)
{
  ATerm b_38 = NULL;
  b_38 = t;
  if(match_string(t, "--help"))
    {
      t = b_38;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = b_38;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = b_38;
        }
    }
  return(t);
}
ATerm v_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_a_27;
  return(t);
}
ATerm w_6 (ATerm t)
{
  t = term_b_27;
  return(t);
}
ATerm y_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm e_149 (ATerm), ATerm t)
{
  ATerm y_37 = NULL,z_37 = NULL,a_38 = NULL;
  y_37 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = y_37;
  {
    ATerm s_6 (ATerm t)
    {
      ATerm e_27 = t;
      int f_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_149(t);
          ;
          LocalPopChoice(f_27);
        }
      else
        {
          t = e_27;
          {
            ATerm q_27 = t;
            int r_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(u_6, v_6, w_6, t);
                ;
                LocalPopChoice(r_27);
              }
            else
              {
                t = q_27;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(s_6, t);
    {
      ATerm a_28 = t;
      int b_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_38 = NULL;
          g_38 = t;
          {
            ATerm f_28 = t;
            int g_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = g_38;
                {
                  ATerm i_28 = t;
                  int j_28 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm o_28 = t;
                        int p_28 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm t_7 = NULL;
                            t = eval_config_0_0(t);
                            t_7 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), t_7);
                            t = t_7;
                            ;
                            LocalPopChoice(p_28);
                          }
                        else
                          {
                            t = o_28;
                          }
                      }
                      ;
                      LocalPopChoice(j_28);
                    }
                  else
                    {
                      t = i_28;
                      t = fetch_1_0(y_6, t);
                    }
                  t = g_38;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(g_28);
              }
            else
              {
                t = f_28;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm w_28 = t;
                  int x_28 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm b_8 = NULL;
                      t = eval_config_0_0(t);
                      b_8 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), b_8);
                      t = b_8;
                      ;
                      LocalPopChoice(x_28);
                    }
                  else
                    {
                      t = w_28;
                    }
                  t = g_38;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(b_28);
        }
      else
        {
          t = a_28;
          {
            ATerm c_29 = t;
            int d_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_6 (ATerm t)
                {
                  ATerm a_7 (ATerm t)
                  {
                    if(((z_37 != NULL) && (z_37 != t)))
                      _fail(t);
                    else
                      z_37 = t;
                    return(t);
                  }
                  t = Undefined_1_0(a_7, t);
                  return(t);
                }
                t = fetch_1_0(z_6, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(z_37)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_u_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_37)), term_r_29));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(d_29);
              }
            else
              {
                t = c_29;
              }
          }
        }
      a_38 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = a_38;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm e_147 (ATerm), ATerm f_147 (ATerm), ATerm g_147 (ATerm), ATerm h_147 (ATerm), ATerm t)
{
  ATerm j_38 = NULL;
  t = parse_options_1_0(e_147, t);
  j_38 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), j_38);
  t = j_38;
  t = g_147(t);
  {
    ATerm s_29 = t;
    int t_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(f_147, t);
        ;
        LocalPopChoice(t_29);
      }
    else
      {
        t = s_29;
        {
          ATerm u_29 = t;
          int v_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_147(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(v_29);
            }
          else
            {
              t = u_29;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm d_7 (ATerm t)
{
  t = if_verbose2_1_0(i_7, t);
  return(t);
}
ATerm f_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_7 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_w_29;
  return(t);
}
ATerm h_7 (ATerm t)
{
  t = term_x_29;
  return(t);
}
ATerm i_7 (ATerm t)
{
  ATerm k_38 = NULL,l_38 = NULL;
  k_38 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm y_29 = t;
    int a_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_8 = NULL;
        t = eval_config_0_0(t);
        f_8 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), f_8);
        t = f_8;
        ;
        LocalPopChoice(a_30);
      }
    else
      {
        t = y_29;
      }
    l_38 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, l_38));
    t = k_38;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm n_146 (ATerm), ATerm o_146 (ATerm), ATerm p_146 (ATerm), ATerm t)
{
  ATerm b_7 (ATerm t)
  {
    ATerm b_30 = t;
    int e_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_146(t);
        ;
        LocalPopChoice(e_30);
      }
    else
      {
        t = b_30;
        {
          ATerm j_30 = t;
          int k_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
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
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(m_30);
                  }
                else
                  {
                    t = l_30;
                    {
                      ATerm z_30 = t;
                      int a_31 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(f_7, g_7, h_7, t);
                          ;
                          LocalPopChoice(a_31);
                        }
                      else
                        {
                          t = z_30;
                          {
                            ATerm b_31 = t;
                            int c_31 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(c_31);
                              }
                            else
                              {
                                t = b_31;
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
  ATerm e_7 (ATerm t)
  {
    ATerm m_38 = NULL,n_38 = NULL,j_8 = NULL;
    m_38 = t;
    {
      ATerm e_31 = t;
      int f_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_7 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((n_38 != NULL) && (n_38 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  n_38 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(j_7, t);
          ;
          LocalPopChoice(f_31);
        }
      else
        {
          t = e_31;
          t = term_g_31;
          n_38 = t;
        }
      t = not_null(n_38);
      t = ReadFromFile_0_0(t);
      j_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_38, j_8);
      t = apply_strategy_1_0(n_146, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(b_7, p_146, d_7, e_7, t);
  return(t);
}
ATerm k_7 (ATerm t)
{
  t = _2_0(_id, l_7, t);
  return(t);
}
ATerm l_7 (ATerm t)
{
  t = apply_to_bodies_1_0(m_7, t);
  return(t);
}
ATerm m_7 (ATerm t)
{
  t = downup2_2_0(n_7, o_7, t);
  t = downup_1_0(q_7, t);
  return(t);
}
ATerm n_7 (ATerm t)
{
  t = repeat_1_0(Simplify_0_0, t);
  return(t);
}
ATerm o_7 (ATerm t)
{
  t = repeat_1_0(p_7, t);
  return(t);
}
ATerm p_7 (ATerm t)
{
  ATerm h_31 = t;
  int k_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_31 = t;
      int m_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = MatchingCongruence_0_0(t);
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
                t = TransformingAnnoCongruence_0_0(t);
                ;
                LocalPopChoice(o_31);
              }
            else
              {
                t = n_31;
                t = TransformingCongruence_0_0(t);
              }
          }
        }
      ;
      LocalPopChoice(k_31);
    }
  else
    {
      t = h_31;
      t = Simplify_0_0(t);
    }
  return(t);
}
ATerm q_7 (ATerm t)
{
  t = repeat_1_0(r_7, t);
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm q_31 = t;
  int u_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Simplify_0_0(t);
      ;
      LocalPopChoice(u_31);
    }
  else
    {
      t = q_31;
      {
        ATerm x_31 = t;
        int y_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_38 = NULL,s_38 = NULL,t_38 = NULL,u_38 = NULL;
            if(match_cons(t, sym_Seq_2))
              {
                r_38 = ATgetArgument(t, 0);
                s_38 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = s_38;
            if(match_cons(t, sym_Let_2))
              {
                t_38 = ATgetArgument(t, 0);
                u_38 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Let_2, t_38, (ATerm) ATmakeAppl(sym_Seq_2, r_38, u_38));
            ;
            LocalPopChoice(y_31);
          }
        else
          {
            t = x_31;
            {
              ATerm z_31 = t;
              int a_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = FuseScope_0_0(t);
                  ;
                  LocalPopChoice(a_32);
                }
              else
                {
                  t = z_31;
                  {
                    ATerm b_32 = t;
                    int c_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = WhereSavesCurrentTerm_0_0(t);
                        ;
                        LocalPopChoice(c_32);
                      }
                    else
                      {
                        t = b_32;
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
  t = iowrap_3_0(k_7, _fail, default_usage_0_0, t);
  return(t);
}
