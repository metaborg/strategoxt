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
ATerm term_u_45;
ATerm term_f_45;
ATerm term_e_45;
ATerm term_d_45;
ATerm term_y_44;
ATerm term_x_44;
ATerm term_w_44;
ATerm term_f_44;
ATerm term_e_44;
ATerm term_z_43;
ATerm term_u_43;
ATerm term_t_43;
ATerm term_s_43;
ATerm term_r_43;
ATerm term_q_43;
ATerm term_p_43;
ATerm term_i_43;
ATerm term_d_43;
ATerm term_y_42;
ATerm term_r_42;
ATerm term_q_42;
ATerm term_a_42;
ATerm term_z_41;
ATerm term_y_41;
ATerm term_x_41;
ATerm term_s_41;
ATerm term_r_41;
ATerm term_q_41;
ATerm term_p_41;
ATerm term_g_41;
ATerm term_f_41;
ATerm term_e_41;
ATerm term_d_41;
ATerm term_y_40;
ATerm term_x_40;
ATerm term_w_40;
ATerm term_v_40;
ATerm term_q_40;
ATerm term_p_40;
ATerm term_i_40;
ATerm term_f_40;
ATerm term_c_40;
ATerm term_e_39;
ATerm term_d_39;
ATerm term_x_37;
ATerm term_p_37;
ATerm term_g_37;
ATerm term_o_25;
ATerm term_g_25;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_n_22;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_f_20;
void init_constant_terms (void)
{
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(sym_Op_2, term_w_24, (ATerm) ATempty);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym_ConstType_1, term_x_24);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_p_40));
  term_p_40 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(sym_Verbose_1, term_w_40);
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_41));
  term_r_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_s_41));
  term_s_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_41));
  term_x_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_42));
  term_r_42 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_43));
  term_i_43 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_q_43));
  term_q_43 = (ATerm) ATmakeAppl(sym__3, term_c_40, term_p_43, term_f_20);
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_s_43));
  term_s_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_t_43));
  term_t_43 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_43));
  term_u_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_44));
  term_f_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_44));
  term_w_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_x_44));
  term_x_44 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_f_45));
  term_f_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_u_45));
  term_u_45 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm TestSavesCurrentTerm_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm WhereSavesCurrentTerm_0_0 (ATerm);
ATerm FuseScope_0_0 (ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm n_13 (ATerm);
ATerm o_13 (ATerm);
ATerm p_13 (ATerm);
ATerm q_13 (ATerm);
ATerm BuildMatchFusion_0_0 (ATerm);
ATerm MisMatch_0_0 (ATerm);
ATerm k_10 (ATerm a_9, ATerm b_9, ATerm d_9, ATerm);
ATerm BuildMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm h_122 (ATerm), ATerm);
ATerm LetHoist_0_0 (ATerm);
ATerm Idempotency_0_0 (ATerm);
ATerm AssociateR_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm x_13 (ATerm);
ATerm z_13 (ATerm);
ATerm a_14 (ATerm);
ATerm b_14 (ATerm);
ATerm c_14 (ATerm);
ATerm d_14 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm h_14 (ATerm);
ATerm ElimFail_0_0 (ATerm);
ATerm ElimId_0_0 (ATerm);
ATerm Simplify_0_0 (ATerm);
ATerm repeat_1_0 (ATerm o_137 (ATerm), ATerm);
ATerm downup_1_0 (ATerm f_121 (ATerm), ATerm);
ATerm diff_1_0 (ATerm c_129 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm p_125 (ATerm), ATerm q_125 (ATerm), ATerm r_125 (ATerm), ATerm s_125 (ATerm), ATerm);
ATerm l_14 (ATerm);
ATerm m_14 (ATerm);
ATerm n_14 (ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm while_not_2_0 (ATerm d_138 (ATerm), ATerm e_138 (ATerm), ATerm);
ATerm for_3_0 (ATerm g_138 (ATerm), ATerm h_138 (ATerm), ATerm i_138 (ATerm), ATerm);
ATerm p_14 (ATerm);
ATerm q_14 (ATerm);
ATerm r_14 (ATerm);
ATerm s_14 (ATerm);
ATerm t_14 (ATerm);
ATerm u_14 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm isect_1_0 (ATerm a_129 (ATerm), ATerm);
ATerm DynamicRules_1_0 (ATerm j_108 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm a_108 (ATerm), ATerm b_108 (ATerm), ATerm c_108 (ATerm), ATerm d_108 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm m_109 (ATerm), ATerm n_109 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm e_120 (ATerm), ATerm f_120 (ATerm), ATerm g_120 (ATerm), ATerm);
ATerm a_15 (ATerm);
ATerm c_15 (ATerm);
ATerm d_15 (ATerm);
ATerm e_15 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm f_15 (ATerm);
ATerm g_15 (ATerm);
ATerm h_15 (ATerm);
ATerm i_15 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm union_1_0 (ATerm h_129 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm v_131 (ATerm), ATerm w_131 (ATerm), ATerm x_131 (ATerm), ATerm);
ATerm l_15 (ATerm);
ATerm m_15 (ATerm);
ATerm n_15 (ATerm);
ATerm o_15 (ATerm);
ATerm p_15 (ATerm);
ATerm q_15 (ATerm);
ATerm r_15 (ATerm);
ATerm free_vars_3_0 (ATerm x_135 (ATerm), ATerm y_135 (ATerm), ATerm z_135 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm s_15 (ATerm);
ATerm t_15 (ATerm);
ATerm u_15 (ATerm);
ATerm v_15 (ATerm);
ATerm w_15 (ATerm);
ATerm NarrowScope_0_0 (ATerm);
ATerm topdown_1_0 (ATerm d_121 (ATerm), ATerm);
ATerm WidenScope_0_0 (ATerm);
ATerm SDefT_4_0 (ATerm u_111 (ATerm), ATerm v_111 (ATerm), ATerm w_111 (ATerm), ATerm x_111 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm r_111 (ATerm), ATerm s_111 (ATerm), ATerm t_111 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm u_104 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm z_104 (ATerm), ATerm);
ATerm b_16 (ATerm);
ATerm apply_to_bodies_1_0 (ATerm e_119 (ATerm), ATerm);
ATerm _2_0 (ATerm b_100 (ATerm), ATerm c_100 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm c_143 (ATerm), ATerm);
ATerm h_16 (ATerm);
ATerm i_16 (ATerm);
ATerm j_16 (ATerm);
ATerm k_16 (ATerm);
ATerm l_16 (ATerm);
ATerm m_16 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm e_146 (ATerm), ATerm);
ATerm c_31 (ATerm w_30, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm n_16 (ATerm);
ATerm o_16 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm p_127 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm v_127 (ATerm), ATerm);
ATerm q_16 (ATerm);
ATerm r_16 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm t_16 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm n_144 (ATerm), ATerm);
ATerm u_16 (ATerm);
ATerm y_16 (ATerm);
ATerm z_16 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm a_17 (ATerm);
ATerm b_17 (ATerm);
ATerm c_17 (ATerm);
ATerm d_17 (ATerm);
ATerm e_17 (ATerm);
ATerm f_17 (ATerm);
ATerm g_17 (ATerm);
ATerm h_17 (ATerm);
ATerm i_17 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm j_17 (ATerm);
ATerm k_17 (ATerm);
ATerm l_17 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm m_17 (ATerm);
ATerm n_17 (ATerm);
ATerm o_17 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm t_131 (ATerm), ATerm u_131 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm p_17 (ATerm);
ATerm q_17 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm m_144 (ATerm), ATerm);
ATerm r_17 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm s_17 (ATerm);
ATerm need_help_1_0 (ATerm c_147 (ATerm), ATerm);
ATerm map_1_0 (ATerm e_127 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm y_118 (ATerm), ATerm);
ATerm u_17 (ATerm);
ATerm v_17 (ATerm);
ATerm w_17 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm z_118 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm x_17 (ATerm);
ATerm y_17 (ATerm);
ATerm z_17 (ATerm);
ATerm a_18 (ATerm);
ATerm b_18 (ATerm);
ATerm c_18 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm q_104 (ATerm), ATerm r_104 (ATerm), ATerm);
ATerm d_18 (ATerm);
ATerm parse_options_p__1_0 (ATerm f_149 (ATerm), ATerm);
ATerm h_18 (ATerm);
ATerm i_18 (ATerm);
ATerm k_18 (ATerm);
ATerm l_18 (ATerm);
ATerm parse_options_1_0 (ATerm e_149 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm e_147 (ATerm), ATerm f_147 (ATerm), ATerm g_147 (ATerm), ATerm h_147 (ATerm), ATerm);
ATerm p_18 (ATerm);
ATerm r_18 (ATerm);
ATerm s_18 (ATerm);
ATerm t_18 (ATerm);
ATerm w_18 (ATerm);
ATerm iowrap_3_0 (ATerm n_146 (ATerm), ATerm o_146 (ATerm), ATerm p_146 (ATerm), ATerm);
ATerm y_18 (ATerm);
ATerm b_19 (ATerm);
ATerm h_19 (ATerm);
ATerm m_19 (ATerm);
ATerm o_19 (ATerm);
ATerm t_19 (ATerm);
ATerm u_19 (ATerm);
ATerm y_19 (ATerm);
ATerm a_20 (ATerm);
ATerm b_20 (ATerm);
ATerm c_20 (ATerm);
ATerm d_20 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL,p_0 = NULL,q_0 = NULL,r_0 = NULL,t_0 = NULL,y_0 = NULL,z_0 = NULL;
  b_0 = t;
  t = term_f_20;
  t = whoami_0_0(t);
  f_0 = t;
  r_0 = t;
  t = term_g_20;
  p_0 = t;
  t = r_0;
  t_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_20), f_0), term_h_20);
  q_0 = t;
  t = SSL_printnl(p_0, q_0);
  z_0 = t;
  t = term_j_20;
  y_0 = t;
  t = SSL_exit(y_0);
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
        ATerm l_20 = ATgetArgument(t, 1);
        if(match_cons(l_20, sym_Scope_2))
          {
            v_0 = ATgetArgument(l_20, 0);
            w_0 = ATgetArgument(l_20, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_0, v_0);
  {
    ATerm q_20 = t;
    int r_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_20 = ATgetArgument(t, 0);
            ATerm t_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_0;
        {
          ATerm m_13 (ATerm t)
          {
            t = v_0;
            return(t);
          }
          t = at_end_1_0(m_13, t);
        }
        ;
        LocalPopChoice(r_20);
      }
    else
      {
        t = q_20;
        {
          ATerm s_0 = NULL,a_1 = NULL,b_1 = NULL;
          b_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, u_0, v_0);
          a_1 = t;
          t = SSL_explode_term(a_1);
          if(match_cons(t, sym__2))
            {
              ATerm v_20 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) v_20) != ATmakeSymbol("", 0, ATtrue)))
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
      ATerm z_20 = ATgetArgument(t, 0);
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
ATerm n_13 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_21 = ATgetArgument(t, 0);
      if(((ATgetType(a_21) != AT_LIST) || !(ATisEmpty(a_21))))
        _fail(t);
      {
        ATerm b_21 = ATgetArgument(t, 1);
        if(((ATgetType(b_21) != AT_LIST) || !(ATisEmpty(b_21))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm o_13 (ATerm t)
{
  ATerm r_2 = NULL,w_2 = NULL,a_3 = NULL,d_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_21 = ATgetArgument(t, 0);
      if(((ATgetType(d_21) == AT_LIST) && !(ATisEmpty(d_21))))
        {
          r_2 = ATgetFirst((ATermList) d_21);
          a_3 = (ATerm) ATgetNext((ATermList) d_21);
        }
      else
        _fail(t);
      {
        ATerm h_21 = ATgetArgument(t, 1);
        if(((ATgetType(h_21) == AT_LIST) && !(ATisEmpty(h_21))))
          {
            w_2 = ATgetFirst((ATermList) h_21);
            d_3 = (ATerm) ATgetNext((ATermList) h_21);
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
ATerm p_13 (ATerm t)
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
ATerm q_13 (ATerm t)
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
      ATerm j_21 = ATgetArgument(t, 0);
      if(match_cons(j_21, sym_Build_1))
        {
          ATerm l_21 = ATgetArgument(j_21, 0);
          if(match_cons(l_21, sym_Op_2))
            {
              c_2 = ATgetArgument(l_21, 0);
              b_2 = ATgetArgument(l_21, 1);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm k_21 = ATgetArgument(t, 1);
        if(match_cons(k_21, sym_Match_1))
          {
            ATerm r_21 = ATgetArgument(k_21, 0);
            if(match_cons(r_21, sym_Op_2))
              {
                if((c_2 != ATgetArgument(r_21, 0)))
                  {
                    _fail(ATgetArgument(r_21, 0));
                  }
                k_2 = ATgetArgument(r_21, 1);
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
  t = genzip_4_0(n_13, o_13, p_13, q_13, t);
  q_2 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, q_2), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, c_2, b_2)));
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm k_3 = NULL,l_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_21 = ATgetArgument(t, 0);
      if(match_cons(s_21, sym_Build_1))
        {
          ATerm b_22 = ATgetArgument(s_21, 0);
          if(match_cons(b_22, sym_Op_2))
            {
              k_3 = ATgetArgument(b_22, 0);
              {
                ATerm c_22 = ATgetArgument(b_22, 1);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm a_22 = ATgetArgument(t, 1);
        if(match_cons(a_22, sym_Match_1))
          {
            ATerm g_22 = ATgetArgument(a_22, 0);
            if(match_cons(g_22, sym_Op_2))
              {
                l_3 = ATgetArgument(g_22, 0);
                {
                  ATerm h_22 = ATgetArgument(g_22, 1);
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
    ATerm m_22 = t;
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
        t = m_22;
      }
    t = term_n_22;
  }
  return(t);
}
ATerm k_10 (ATerm a_9, ATerm b_9, ATerm d_9, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, a_9, b_9);
  {
    ATerm o_22 = t;
    int r_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = MisMatch_0_0(t);
        ;
        LocalPopChoice(r_22);
      }
    else
      {
        t = o_22;
        {
          ATerm s_22 = t;
          int t_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = BuildMatchFusion_0_0(t);
              ;
              LocalPopChoice(t_22);
            }
          else
            {
              t = s_22;
              {
                ATerm u_22 = t;
                int v_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm m_9 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        ATerm w_22 = ATgetArgument(t, 0);
                        ATerm y_22 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = a_9;
                    if(match_cons(t, sym_Build_1))
                      {
                        ATerm a_23 = ATgetArgument(t, 0);
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
                    LocalPopChoice(v_22);
                  }
                else
                  {
                    t = u_22;
                    {
                      ATerm c_23 = t;
                      int d_23 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = BuildPrim_0_0(t);
                          ;
                          LocalPopChoice(d_23);
                        }
                      else
                        {
                          t = c_23;
                          {
                            ATerm q_9 = NULL,r_9 = NULL,u_9 = NULL,v_9 = NULL;
                            if(match_cons(t, sym__2))
                              {
                                ATerm e_23 = ATgetArgument(t, 0);
                                ATerm f_23 = ATgetArgument(t, 1);
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
        ATerm g_23 = t;
        int i_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_1 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, g_10, b_10);
            {
              ATerm j_23 = t;
              int k_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = MisMatch_0_0(t);
                  ;
                  LocalPopChoice(k_23);
                }
              else
                {
                  t = j_23;
                  {
                    ATerm l_23 = t;
                    int m_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = BuildMatchFusion_0_0(t);
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
                              ATerm e_2 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  ATerm p_23 = ATgetArgument(t, 0);
                                  ATerm q_23 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = g_10;
                              if(match_cons(t, sym_Build_1))
                                {
                                  ATerm s_23 = ATgetArgument(t, 0);
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
                              LocalPopChoice(o_23);
                            }
                          else
                            {
                              t = n_23;
                              {
                                ATerm t_23 = t;
                                int u_23 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildPrim_0_0(t);
                                    ;
                                    LocalPopChoice(u_23);
                                  }
                                else
                                  {
                                    t = t_23;
                                    {
                                      ATerm i_2 = NULL,j_2 = NULL,m_2 = NULL,n_2 = NULL;
                                      if(match_cons(t, sym__2))
                                        {
                                          ATerm v_23 = ATgetArgument(t, 0);
                                          ATerm w_23 = ATgetArgument(t, 1);
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
            LocalPopChoice(i_23);
          }
        else
          {
            t = g_23;
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
    ATerm x_23 = t;
    int y_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_122(t);
        ;
        LocalPopChoice(y_23);
      }
    else
      {
        t = x_23;
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
      ATerm z_23 = ATgetArgument(t, 0);
      if(((ATgetType(z_23) == AT_LIST) && !(ATisEmpty(z_23))))
        {
          ATerm b_24 = ATgetFirst((ATermList) z_23);
          if(match_cons(b_24, sym_SDefT_4))
            {
              o_10 = ATgetArgument(b_24, 0);
              {
                ATerm e_24 = ATgetArgument(b_24, 1);
                if(((ATgetType(e_24) != AT_LIST) || !(ATisEmpty(e_24))))
                  _fail(t);
              }
              {
                ATerm f_24 = ATgetArgument(b_24, 2);
                if(((ATgetType(f_24) != AT_LIST) || !(ATisEmpty(f_24))))
                  _fail(t);
              }
              n_10 = ATgetArgument(b_24, 3);
            }
          else
            _fail(t);
          {
            ATerm c_24 = (ATerm) ATgetNext((ATermList) z_23);
            if(((ATgetType(c_24) != AT_LIST) || !(ATisEmpty(c_24))))
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm a_24 = ATgetArgument(t, 1);
        if(match_cons(a_24, sym_CallT_3))
          {
            ATerm g_24 = ATgetArgument(a_24, 0);
            if(match_cons(g_24, sym_SVar_1))
              {
                if((o_10 != ATgetArgument(g_24, 0)))
                  {
                    _fail(ATgetArgument(g_24, 0));
                  }
              }
            else
              _fail(t);
            {
              ATerm i_24 = ATgetArgument(a_24, 1);
              if(((ATgetType(i_24) != AT_LIST) || !(ATisEmpty(i_24))))
                _fail(t);
            }
            {
              ATerm j_24 = ATgetArgument(a_24, 2);
              if(((ATgetType(j_24) != AT_LIST) || !(ATisEmpty(j_24))))
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
    ATerm l_24 = t;
    if((PushChoice() == 0))
      {
        ATerm r_13 (ATerm t)
        {
          if(match_cons(t, sym_CallT_3))
            {
              ATerm n_24 = ATgetArgument(t, 0);
              if(match_cons(n_24, sym_SVar_1))
                {
                  if((o_10 != ATgetArgument(n_24, 0)))
                    {
                      _fail(ATgetArgument(n_24, 0));
                    }
                }
              else
                _fail(t);
              {
                ATerm p_24 = ATgetArgument(t, 1);
                if(((ATgetType(p_24) != AT_LIST) || !(ATisEmpty(p_24))))
                  _fail(t);
              }
              {
                ATerm q_24 = ATgetArgument(t, 2);
                if(((ATgetType(q_24) != AT_LIST) || !(ATisEmpty(q_24))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(r_13, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_24;
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
  ATerm r_24 = t;
  int s_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(n_0, _id, t);
      {
        ATerm s_13 (ATerm t)
        {
          ATerm t_24 = t;
          int v_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(n_0, t);
              ;
              LocalPopChoice(v_24);
            }
          else
            {
              t = t_24;
            }
          return(t);
        }
        t = Cons_2_0(_id, s_13, t);
      }
      ;
      LocalPopChoice(s_24);
    }
  else
    {
      t = r_24;
      {
        ATerm t_13 (ATerm t)
        {
          t = map1_1_0(n_0, t);
          return(t);
        }
        t = Cons_2_0(_id, t_13, t);
      }
    }
  return(t);
}
ATerm x_13 (ATerm t)
{
  ATerm w_13 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      w_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, w_13, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_y_24), term_y_24));
  return(t);
}
ATerm z_13 (ATerm t)
{
  ATerm z_24 = t;
  int b_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_13 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, y_13, term_y_24);
      ;
      LocalPopChoice(b_25);
    }
  else
    {
      t = z_24;
    }
  return(t);
}
ATerm a_14 (ATerm t)
{
  ATerm g_14 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      g_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, g_14, term_y_24);
  return(t);
}
ATerm b_14 (ATerm t)
{
  ATerm c_25 = t;
  int d_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_14 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, k_14, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_y_24), term_y_24));
      ;
      LocalPopChoice(d_25);
    }
  else
    {
      t = c_25;
    }
  return(t);
}
ATerm c_14 (ATerm t)
{
  ATerm z_14 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      z_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, z_14, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_y_24), term_y_24));
  return(t);
}
ATerm d_14 (ATerm t)
{
  ATerm e_25 = t;
  int f_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_15 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, b_15, term_y_24);
      ;
      LocalPopChoice(f_25);
    }
  else
    {
      t = e_25;
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
              t = term_n_22;
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
                  t = term_n_22;
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
                      t = term_g_25;
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
                        t = map1_1_0(x_13, t);
                        u_13 = t;
                        t = b_13;
                        t = map1_1_0(z_13, t);
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
                            ATerm k_25 = t;
                            int l_25 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm e_14 = NULL,f_14 = NULL;
                                t = b_13;
                                t = map1_1_0(a_14, t);
                                e_14 = t;
                                t = e_13;
                                t = map_1_0(b_14, t);
                                f_14 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, d_13, f_14, e_14, z_12);
                                ;
                                LocalPopChoice(l_25);
                              }
                            else
                              {
                                t = k_25;
                                {
                                  ATerm w_14 = NULL,y_14 = NULL;
                                  t = e_13;
                                  t = map1_1_0(c_14, t);
                                  w_14 = t;
                                  t = b_13;
                                  t = map_1_0(d_14, t);
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
                              t = (ATerm) ATmakeAppl(sym_App_2, e_13, (ATerm) ATmakeAppl(sym_Op_2, term_o_25, (ATerm) ATinsert(ATinsert(ATempty, b_13), d_13)));
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
ATerm h_14 (ATerm t)
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
      t = term_n_22;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          v_16 = ATgetArgument(t, 0);
          t = v_16;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_g_25;
        }
      else
        {
          ATerm p_25 = t;
          int s_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_Seq_2))
                {
                  v_16 = ATgetArgument(t, 0);
                  {
                    ATerm t_25 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(s_25);
              t = v_16;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_n_22;
            }
          else
            {
              t = p_25;
              {
                ATerm v_25 = t;
                int x_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Scope_2))
                      {
                        ATerm y_25 = ATgetArgument(t, 0);
                        w_16 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(x_25);
                    t = w_16;
                    if(!(match_cons(t, sym_Fail_0)))
                      _fail(t);
                    t = term_n_22;
                  }
                else
                  {
                    t = v_25;
                    {
                      ATerm a_26 = t;
                      int b_26 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_Rec_2))
                            {
                              ATerm c_26 = ATgetArgument(t, 0);
                              w_16 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(b_26);
                          t = w_16;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_n_22;
                        }
                      else
                        {
                          t = a_26;
                          if(match_cons(t, sym_Some_1))
                            {
                              v_16 = ATgetArgument(t, 0);
                              t = v_16;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_n_22;
                            }
                          else
                            {
                              if(match_cons(t, sym_One_1))
                                {
                                  v_16 = ATgetArgument(t, 0);
                                  t = v_16;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_n_22;
                                }
                              else
                                {
                                  ATerm k_26 = t;
                                  int m_26 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_Path_2))
                                        {
                                          ATerm o_26 = ATgetArgument(t, 0);
                                          w_16 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(m_26);
                                      t = w_16;
                                      if(!(match_cons(t, sym_Fail_0)))
                                        _fail(t);
                                      t = term_n_22;
                                    }
                                  else
                                    {
                                      t = k_26;
                                      {
                                        ATerm p_26 = t;
                                        int q_26 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            if(match_cons(t, sym_Cong_2))
                                              {
                                                ATerm r_26 = ATgetArgument(t, 0);
                                                w_16 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            LocalPopChoice(q_26);
                                            t = w_16;
                                            t = fetch_1_0(h_14, t);
                                            t = term_n_22;
                                          }
                                        else
                                          {
                                            t = p_26;
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
                                                        ATerm s_26 = t;
                                                        int u_26 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = w_16;
                                                            ;
                                                            LocalPopChoice(u_26);
                                                          }
                                                        else
                                                          {
                                                            t = s_26;
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
                                                            ATerm v_26 = t;
                                                            int w_26 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = w_16;
                                                                ;
                                                                LocalPopChoice(w_26);
                                                              }
                                                            else
                                                              {
                                                                t = v_26;
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
                                                        t = term_n_22;
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
      t = term_g_25;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          j_18 = ATgetArgument(t, 0);
          t = j_18;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_n_22;
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
                      ATerm x_26 = t;
                      int y_26 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = g_18;
                          ;
                          LocalPopChoice(y_26);
                        }
                      else
                        {
                          t = x_26;
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
              ATerm z_26 = t;
              int b_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      j_18 = ATgetArgument(t, 0);
                      {
                        ATerm c_27 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(b_27);
                  t = j_18;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_g_25;
                }
              else
                {
                  t = z_26;
                  {
                    ATerm e_27 = t;
                    int f_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            ATerm g_27 = ATgetArgument(t, 0);
                            g_18 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(f_27);
                        t = g_18;
                        if(!(match_cons(t, sym_Id_0)))
                          _fail(t);
                        t = term_g_25;
                      }
                    else
                      {
                        t = e_27;
                        {
                          ATerm h_27 = t;
                          int k_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Rec_2))
                                {
                                  ATerm p_27 = ATgetArgument(t, 0);
                                  g_18 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(k_27);
                              t = g_18;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_g_25;
                            }
                          else
                            {
                              t = h_27;
                              if(match_cons(t, sym_All_1))
                                {
                                  j_18 = ATgetArgument(t, 0);
                                  t = j_18;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_g_25;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Where_1))
                                    {
                                      j_18 = ATgetArgument(t, 0);
                                      t = j_18;
                                      if(!(match_cons(t, sym_Id_0)))
                                        _fail(t);
                                      t = term_g_25;
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
                                      t = term_g_25;
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
  ATerm q_27 = t;
  int r_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(r_27);
    }
  else
    {
      t = q_27;
      {
        ATerm s_27 = t;
        int t_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(t_27);
          }
        else
          {
            t = s_27;
            {
              ATerm u_27 = t;
              int v_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(v_27);
                }
              else
                {
                  t = u_27;
                  {
                    ATerm w_27 = t;
                    int x_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(x_27);
                      }
                    else
                      {
                        t = w_27;
                        {
                          ATerm y_27 = t;
                          int z_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(z_27);
                            }
                          else
                            {
                              t = y_27;
                              {
                                ATerm a_28 = t;
                                int k_28 = stack_ptr;
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
                                    LocalPopChoice(k_28);
                                  }
                                else
                                  {
                                    t = a_28;
                                    {
                                      ATerm l_28 = t;
                                      int n_28 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
                                          LocalPopChoice(n_28);
                                        }
                                      else
                                        {
                                          t = l_28;
                                          {
                                            ATerm o_28 = t;
                                            int p_28 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = BuildMatch_0_0(t);
                                                ;
                                                LocalPopChoice(p_28);
                                              }
                                            else
                                              {
                                                t = o_28;
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
    ATerm r_28 = t;
    int s_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_137(t);
        t = c_19(t);
        ;
        LocalPopChoice(s_28);
      }
    else
      {
        t = r_28;
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
    ATerm i_14 (ATerm t)
    {
      t = downup_1_0(f_121, t);
      return(t);
    }
    t = SRTS_all(i_14, t);
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
      ATerm v_28 = t;
      int x_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(x_28);
        }
      else
        {
          t = v_28;
          {
            ATerm c_29 = t;
            int d_29 = stack_ptr;
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
                  ATerm j_14 (ATerm t)
                  {
                    ATerm b_3 = NULL;
                    b_3 = t;
                    t = (ATerm) ATmakeAppl(sym__2, y_2, b_3);
                    t = c_129(t);
                    return(t);
                  }
                  t = fetch_1_0(j_14, t);
                  t = z_2;
                  t = f_19(t);
                }
                ;
                LocalPopChoice(d_29);
              }
            else
              {
                t = c_29;
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
    ATerm i_29 = t;
    int j_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_125(t);
        ;
        LocalPopChoice(j_29);
      }
    else
      {
        t = i_29;
        t = q_125(t);
        t = _2_0(s_125, g_19, t);
        t = r_125(t);
      }
    return(t);
  }
  t = g_19(t);
  return(t);
}
ATerm l_14 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_29 = ATgetArgument(t, 0);
      if(((ATgetType(o_29) != AT_LIST) || !(ATisEmpty(o_29))))
        _fail(t);
      {
        ATerm p_29 = ATgetArgument(t, 1);
        if(((ATgetType(p_29) != AT_LIST) || !(ATisEmpty(p_29))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm m_14 (ATerm t)
{
  ATerm r_19 = NULL,s_19 = NULL,v_19 = NULL,w_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_29 = ATgetArgument(t, 0);
      if(((ATgetType(w_29) == AT_LIST) && !(ATisEmpty(w_29))))
        {
          r_19 = ATgetFirst((ATermList) w_29);
          v_19 = (ATerm) ATgetNext((ATermList) w_29);
        }
      else
        _fail(t);
      {
        ATerm x_29 = ATgetArgument(t, 1);
        if(((ATgetType(x_29) == AT_LIST) && !(ATisEmpty(x_29))))
          {
            s_19 = ATgetFirst((ATermList) x_29);
            w_19 = (ATerm) ATgetNext((ATermList) x_29);
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
ATerm n_14 (ATerm t)
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
      ATerm p_30 = ATgetFirst((ATermList) t);
      if(match_cons(p_30, sym__2))
        {
          i_19 = ATgetArgument(p_30, 0);
          j_19 = ATgetArgument(p_30, 1);
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
  t = genzip_4_0(l_14, m_14, n_14, _id, t);
  q_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_19, k_19);
  {
    ATerm q_30 = t;
    int r_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_30 = ATgetArgument(t, 0);
            ATerm t_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_19;
        {
          ATerm o_14 (ATerm t)
          {
            t = k_19;
            return(t);
          }
          t = at_end_1_0(o_14, t);
        }
        ;
        LocalPopChoice(r_30);
      }
    else
      {
        t = q_30;
        {
          ATerm p_3 = NULL,c_1 = NULL,d_1 = NULL;
          d_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, q_19, k_19);
          c_1 = t;
          t = SSL_explode_term(c_1);
          if(match_cons(t, sym__2))
            {
              ATerm u_30 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) u_30) != ATmakeSymbol("", 0, ATtrue)))
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
    ATerm v_30 = t;
    int x_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_138(t);
        ;
        LocalPopChoice(x_30);
      }
    else
      {
        t = v_30;
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
ATerm p_14 (ATerm t)
{
  ATerm k_20 = NULL;
  k_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, k_20);
  return(t);
}
ATerm q_14 (ATerm t)
{
  t = _2_0(_id, s_14, t);
  return(t);
}
ATerm r_14 (ATerm t)
{
  ATerm y_30 = t;
  int b_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(_id, t_14, t);
      ;
      LocalPopChoice(b_31);
    }
  else
    {
      t = y_30;
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
ATerm s_14 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm t_14 (ATerm t)
{
  ATerm g_31 = t;
  int h_31 = stack_ptr;
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
      LocalPopChoice(h_31);
    }
  else
    {
      t = g_31;
      t = UfDecompose_0_0(t);
    }
  return(t);
}
ATerm u_14 (ATerm t)
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
  ATerm i_31 = t;
  int j_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(p_14, q_14, r_14, t);
      ;
      LocalPopChoice(j_31);
    }
  else
    {
      t = i_31;
      t = diff_1_0(u_14, t);
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
      ATerm w_31 = t;
      int x_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(x_31);
        }
      else
        {
          t = w_31;
          {
            ATerm g_21 = NULL,i_21 = NULL;
            g_21 = t;
            {
              ATerm y_31 = t;
              int z_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm b_32 = ATgetFirst((ATermList) t);
                      i_21 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(z_31);
                  {
                    ATerm c_32 = t;
                    int f_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm q_3 = NULL;
                        t = g_21;
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            q_3 = ATgetFirst((ATermList) t);
                            {
                              ATerm g_32 = (ATerm) ATgetNext((ATermList) t);
                            }
                          }
                        else
                          _fail(t);
                        t = f_21;
                        {
                          ATerm v_14 (ATerm t)
                          {
                            ATerm s_3 = NULL;
                            s_3 = t;
                            t = (ATerm) ATmakeAppl(sym__2, q_3, s_3);
                            t = a_129(t);
                            return(t);
                          }
                          t = fetch_1_0(v_14, t);
                          t = g_21;
                          t = Cons_2_0(_id, m_21, t);
                        }
                        ;
                        LocalPopChoice(f_32);
                      }
                    else
                      {
                        t = c_32;
                        t = i_21;
                        t = m_21(t);
                      }
                  }
                }
              else
                {
                  t = y_31;
                  {
                    ATerm v_3 = NULL;
                    t = g_21;
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        v_3 = ATgetFirst((ATermList) t);
                        {
                          ATerm h_32 = (ATerm) ATgetNext((ATermList) t);
                        }
                      }
                    else
                      _fail(t);
                    t = f_21;
                    {
                      ATerm x_14 (ATerm t)
                      {
                        ATerm x_3 = NULL;
                        x_3 = t;
                        t = (ATerm) ATmakeAppl(sym__2, v_3, x_3);
                        t = a_129(t);
                        return(t);
                      }
                      t = fetch_1_0(x_14, t);
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
  ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL,e_1 = NULL,f_1 = NULL;
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
  f_1 = t;
  t = (ATerm) ATmakeAppl(sym_DynamicRules_1, p_21);
  e_1 = t;
  t = SSLsetAnnotations(e_1, n_21);
  return(t);
}
ATerm RDefT_4_0 (ATerm a_108 (ATerm), ATerm b_108 (ATerm), ATerm c_108 (ATerm), ATerm d_108 (ATerm), ATerm t)
{
  ATerm t_21 = NULL,u_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL,g_1 = NULL,j_1 = NULL;
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
  j_1 = t;
  t = (ATerm) ATmakeAppl(sym_RDefT_4, y_21, z_21, d_22, e_22);
  g_1 = t;
  t = SSLsetAnnotations(g_1, t_21);
  return(t);
}
ATerm Scope_2_0 (ATerm m_109 (ATerm), ATerm n_109 (ATerm), ATerm t)
{
  ATerm i_22 = NULL,j_22 = NULL,k_22 = NULL,l_22 = NULL,p_22 = NULL,q_22 = NULL,l_1 = NULL,r_1 = NULL;
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
  r_1 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, l_22, p_22);
  l_1 = t;
  t = SSLsetAnnotations(l_1, i_22);
  return(t);
}
ATerm tboundin_3_0 (ATerm e_120 (ATerm), ATerm f_120 (ATerm), ATerm g_120 (ATerm), ATerm t)
{
  ATerm i_32 = t;
  int j_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(g_120, e_120, t);
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
            t = SDefT_4_0(g_120, g_120, g_120, e_120, t);
            ;
            LocalPopChoice(m_32);
          }
        else
          {
            t = k_32;
            {
              ATerm q_32 = t;
              int t_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(g_120, g_120, g_120, e_120, t);
                  ;
                  LocalPopChoice(t_32);
                }
              else
                {
                  t = q_32;
                  t = DynamicRules_1_0(e_120, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm a_15 (ATerm t)
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
ATerm c_15 (ATerm t)
{
  ATerm u_32 = t;
  int v_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(v_32);
    }
  else
    {
      t = u_32;
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
            ATerm w_32 = t;
            int x_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm y_32 = ATgetArgument(t, 0);
                    ATerm z_32 = ATgetArgument(t, 1);
                    b_23 = ATgetArgument(t, 2);
                    {
                      ATerm a_33 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(x_32);
                t = b_23;
                t = map_1_0(d_15, t);
              }
            else
              {
                t = w_32;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm b_33 = ATgetArgument(t, 0);
                    ATerm d_33 = ATgetArgument(t, 1);
                    b_23 = ATgetArgument(t, 2);
                    {
                      ATerm e_33 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = b_23;
                t = map_1_0(e_15, t);
              }
          }
      }
    }
  return(t);
}
ATerm d_15 (ATerm t)
{
  ATerm h_23 = NULL;
  ATerm f_33 = t;
  int j_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_23 = ATgetArgument(t, 0);
          {
            ATerm k_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_33);
      t = h_23;
    }
  else
    {
      t = f_33;
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
ATerm e_15 (ATerm t)
{
  ATerm r_23 = NULL;
  ATerm l_33 = t;
  int o_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_23 = ATgetArgument(t, 0);
          {
            ATerm p_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_33);
      t = r_23;
    }
  else
    {
      t = l_33;
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
  t = free_vars_3_0(a_15, c_15, tboundin_3_0, t);
  return(t);
}
ATerm f_15 (ATerm t)
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
ATerm g_15 (ATerm t)
{
  ATerm q_33 = t;
  int r_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(r_33);
    }
  else
    {
      t = q_33;
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
            ATerm s_33 = t;
            int t_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm v_33 = ATgetArgument(t, 0);
                    ATerm x_33 = ATgetArgument(t, 1);
                    o_24 = ATgetArgument(t, 2);
                    {
                      ATerm b_34 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(t_33);
                t = o_24;
                t = map_1_0(h_15, t);
              }
            else
              {
                t = s_33;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm f_34 = ATgetArgument(t, 0);
                    ATerm g_34 = ATgetArgument(t, 1);
                    o_24 = ATgetArgument(t, 2);
                    {
                      ATerm k_34 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = o_24;
                t = map_1_0(i_15, t);
              }
          }
      }
    }
  return(t);
}
ATerm h_15 (ATerm t)
{
  ATerm u_24 = NULL;
  ATerm l_34 = t;
  int n_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_24 = ATgetArgument(t, 0);
          {
            ATerm o_34 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_34);
      t = u_24;
    }
  else
    {
      t = l_34;
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
ATerm i_15 (ATerm t)
{
  ATerm a_25 = NULL;
  ATerm p_34 = t;
  int s_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_25 = ATgetArgument(t, 0);
          {
            ATerm t_34 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_34);
      t = a_25;
    }
  else
    {
      t = p_34;
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
            ATerm y_34 = ATgetArgument(t, 1);
          }
          {
            ATerm z_34 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = d_24;
      t = free_vars_3_0(f_15, g_15, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          h_24 = ATgetArgument(t, 0);
          {
            ATerm a_35 = ATgetArgument(t, 1);
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
      ATerm b_35 = t;
      int c_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = i_25;
          ;
          LocalPopChoice(c_35);
        }
      else
        {
          t = b_35;
          {
            ATerm d_35 = t;
            int e_35 = stack_ptr;
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
                  ATerm j_15 (ATerm t)
                  {
                    ATerm c_4 = NULL;
                    c_4 = t;
                    t = (ATerm) ATmakeAppl(sym__2, a_4, c_4);
                    t = h_129(t);
                    return(t);
                  }
                  t = fetch_1_0(j_15, t);
                  t = b_4;
                  t = j_25(t);
                }
                ;
                LocalPopChoice(e_35);
              }
            else
              {
                t = d_35;
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
  ATerm h_35 = t;
  int l_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = v_131(t);
      ;
      LocalPopChoice(l_35);
    }
  else
    {
      t = h_35;
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
ATerm l_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm m_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm n_15 (ATerm t)
{
  t = union_1_0(o_15, t);
  return(t);
}
ATerm o_15 (ATerm t)
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
ATerm p_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm q_15 (ATerm t)
{
  t = union_1_0(r_15, t);
  return(t);
}
ATerm r_15 (ATerm t)
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
    ATerm m_35 = t;
    int n_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_135(t);
        ;
        LocalPopChoice(n_35);
      }
    else
      {
        t = m_35;
        {
          ATerm p_35 = t;
          int t_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_25 = NULL,w_25 = NULL,k_4 = NULL,l_4 = NULL;
              u_25 = t;
              t = y_135(t);
              w_25 = t;
              t = u_25;
              {
                ATerm k_15 (ATerm t)
                {
                  ATerm g_4 = NULL;
                  t = z_25(t);
                  g_4 = t;
                  t = (ATerm) ATmakeAppl(sym__2, g_4, w_25);
                  t = diff_0_0(t);
                  return(t);
                }
                t = z_135(k_15, z_25, l_15, t);
                k_4 = t;
                t = SSL_explode_term(k_4);
                if(match_cons(t, sym__2))
                  {
                    ATerm u_35 = ATgetArgument(t, 0);
                    l_4 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = l_4;
                t = foldr_3_0(m_15, n_15, _id, t);
              }
              ;
              LocalPopChoice(t_35);
            }
          else
            {
              t = p_35;
              {
                ATerm q_4 = NULL,r_4 = NULL;
                q_4 = t;
                t = SSL_explode_term(q_4);
                if(match_cons(t, sym__2))
                  {
                    ATerm x_35 = ATgetArgument(t, 0);
                    r_4 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = r_4;
                t = foldr_3_0(p_15, q_15, z_25, t);
              }
            }
        }
      }
    return(t);
  }
  t = z_25(t);
  return(t);
}
ATerm s_15 (ATerm t)
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
ATerm t_15 (ATerm t)
{
  ATerm y_35 = t;
  int a_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(a_36);
    }
  else
    {
      t = y_35;
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
            ATerm b_36 = t;
            int d_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm e_36 = ATgetArgument(t, 0);
                    ATerm f_36 = ATgetArgument(t, 1);
                    n_26 = ATgetArgument(t, 2);
                    {
                      ATerm g_36 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(d_36);
                t = n_26;
                t = map_1_0(u_15, t);
              }
            else
              {
                t = b_36;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm h_36 = ATgetArgument(t, 0);
                    ATerm i_36 = ATgetArgument(t, 1);
                    n_26 = ATgetArgument(t, 2);
                    {
                      ATerm j_36 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = n_26;
                t = map_1_0(v_15, t);
              }
          }
      }
    }
  return(t);
}
ATerm u_15 (ATerm t)
{
  ATerm t_26 = NULL;
  ATerm k_36 = t;
  int l_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_26 = ATgetArgument(t, 0);
          {
            ATerm m_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_36);
      t = t_26;
    }
  else
    {
      t = k_36;
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
ATerm v_15 (ATerm t)
{
  ATerm a_27 = NULL;
  ATerm q_36 = t;
  int r_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_27 = ATgetArgument(t, 0);
          {
            ATerm s_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_36);
      t = a_27;
    }
  else
    {
      t = q_36;
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
ATerm w_15 (ATerm t)
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
        ATerm t_36 = ATgetArgument(t, 1);
        if(match_cons(t_36, sym_Seq_2))
          {
            e_26 = ATgetArgument(t_36, 0);
            f_26 = ATgetArgument(t_36, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = e_26;
  t = free_vars_3_0(s_15, t_15, tboundin_3_0, t);
  g_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_26, d_26);
  t = isect_1_0(w_15, t);
  h_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_26, h_26);
  t = diff_0_0(t);
  i_26 = t;
  {
    ATerm v_36 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_36;
      }
    t = (ATerm) ATmakeAppl(sym_Scope_2, h_26, (ATerm) ATmakeAppl(sym_Seq_2, e_26, (ATerm) ATmakeAppl(sym_Scope_2, i_26, f_26)));
  }
  return(t);
}
ATerm topdown_1_0 (ATerm d_121 (ATerm), ATerm t)
{
  t = d_121(t);
  {
    ATerm x_15 (ATerm t)
    {
      t = topdown_1_0(d_121, t);
      return(t);
    }
    t = SRTS_all(x_15, t);
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
            ATerm x_36 = t;
            int b_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = (ATerm) ATmakeAppl(sym_Scope_2, i_27, (ATerm) ATmakeAppl(sym_Seq_2, l_27, j_27));
                ;
                LocalPopChoice(b_37);
              }
            else
              {
                t = x_36;
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
  ATerm b_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL,h_28 = NULL,i_28 = NULL,j_28 = NULL,m_28 = NULL,s_1 = NULL,t_1 = NULL;
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
  t_1 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, g_28, h_28, i_28, j_28);
  s_1 = t;
  t = SSLsetAnnotations(s_1, b_28);
  return(t);
}
ATerm SDef_3_0 (ATerm r_111 (ATerm), ATerm s_111 (ATerm), ATerm t_111 (ATerm), ATerm t)
{
  ATerm q_28 = NULL,t_28 = NULL,u_28 = NULL,w_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL,b_29 = NULL,u_1 = NULL,v_1 = NULL;
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
  v_1 = t;
  t = (ATerm) ATmakeAppl(sym_SDef_3, y_28, z_28, a_29);
  u_1 = t;
  t = SSLsetAnnotations(u_1, q_28);
  return(t);
}
ATerm Strategies_1_0 (ATerm u_104 (ATerm), ATerm t)
{
  ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL,w_1 = NULL,x_1 = NULL;
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
  x_1 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, g_29);
  w_1 = t;
  t = SSLsetAnnotations(w_1, e_29);
  return(t);
}
ATerm Specification_1_0 (ATerm z_104 (ATerm), ATerm t)
{
  ATerm k_29 = NULL,l_29 = NULL,m_29 = NULL,n_29 = NULL,y_1 = NULL,z_1 = NULL;
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
  z_1 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, m_29);
  y_1 = t;
  t = SSLsetAnnotations(y_1, k_29);
  return(t);
}
ATerm b_16 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm apply_to_bodies_1_0 (ATerm e_119 (ATerm), ATerm t)
{
  ATerm y_15 (ATerm t)
  {
    ATerm z_15 (ATerm t)
    {
      ATerm a_16 (ATerm t)
      {
        ATerm c_16 (ATerm t)
        {
          ATerm d_16 (ATerm t)
          {
            ATerm e_37 = t;
            int f_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SDef_3_0(_id, _id, e_119, t);
                ;
                LocalPopChoice(f_37);
              }
            else
              {
                t = e_37;
                t = SDefT_4_0(_id, _id, _id, e_119, t);
              }
            return(t);
          }
          t = map_1_0(d_16, t);
          return(t);
        }
        t = Strategies_1_0(c_16, t);
        return(t);
      }
      t = Cons_2_0(a_16, b_16, t);
      return(t);
    }
    t = Cons_2_0(_id, z_15, t);
    return(t);
  }
  t = Specification_1_0(y_15, t);
  return(t);
}
ATerm _2_0 (ATerm b_100 (ATerm), ATerm c_100 (ATerm), ATerm t)
{
  ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL,a_2 = NULL,d_2 = NULL;
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
  d_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_29, u_29);
  a_2 = t;
  t = SSLsetAnnotations(a_2, q_29);
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
  t = (ATerm) ATmakeAppl(sym__2, y_29, term_g_37);
  t = open_stream_0_0(t);
  a_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_30, z_29);
  t = c_143(t);
  t = fclose_0_0(t);
  t = z_29;
  return(t);
}
ATerm h_16 (ATerm t)
{
  t = fetch_1_0(j_16, t);
  return(t);
}
ATerm i_16 (ATerm t)
{
  t = WriteToFile_1_0(k_16, t);
  return(t);
}
ATerm j_16 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm k_16 (ATerm t)
{
  ATerm d_30 = NULL,e_30 = NULL,f_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_37 = ATgetArgument(t, 0);
      if(match_cons(n_37, sym_Stream_1))
        {
          d_30 = ATgetArgument(n_37, 0);
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
ATerm l_16 (ATerm t)
{
  t = WriteToFile_1_0(m_16, t);
  return(t);
}
ATerm m_16 (ATerm t)
{
  ATerm g_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL,f_2 = NULL,g_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_37 = ATgetArgument(t, 0);
      if(match_cons(o_37, sym_Stream_1))
        {
          g_30 = ATgetArgument(o_37, 0);
        }
      else
        _fail(t);
      h_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(g_30, h_30);
  i_30 = t;
  g_2 = t;
  t = term_p_37;
  f_2 = t;
  t = SSL_fputc(f_2, i_30);
  j_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_30);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm b_30 = NULL,c_30 = NULL;
  b_30 = t;
  {
    ATerm e_16 (ATerm t)
    {
      ATerm q_37 = t;
      int w_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_16 (ATerm t)
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
          t = fetch_1_0(f_16, t);
          ;
          LocalPopChoice(w_37);
        }
      else
        {
          t = q_37;
          t = term_x_37;
          if(((c_30 != NULL) && (c_30 != t)))
            _fail(t);
          else
            c_30 = t;
        }
      return(t);
    }
    t = _2_0(e_16, _id, t);
    t = b_30;
    {
      ATerm g_16 (ATerm t)
      {
        ATerm w_4 = NULL;
        w_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_30), w_4);
        return(t);
      }
      t = _2_0(_id, g_16, t);
      {
        ATerm y_37 = t;
        int b_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(h_16, i_16, t);
            ;
            LocalPopChoice(b_38);
          }
        else
          {
            t = y_37;
            t = _2_0(_id, l_16, t);
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
        ATerm c_38 = t;
        int d_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_30);
            ;
            LocalPopChoice(d_38);
          }
        else
          {
            t = c_38;
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
ATerm n_16 (ATerm t)
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
ATerm o_16 (ATerm t)
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
      ATerm k_38 = ATgetArgument(t, 0);
      ATerm l_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_38 = t;
    int p_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_5 = NULL,l_5 = NULL;
        k_5 = t;
        t = SSL_explode_term(k_5);
        if(match_cons(t, sym__2))
          {
            ATerm s_38 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) s_38) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm t_38 = ATgetArgument(t, 1);
              if(((ATgetType(t_38) == AT_LIST) && !(ATisEmpty(t_38))))
                {
                  l_5 = ATgetFirst((ATermList) t_38);
                  {
                    ATerm u_38 = (ATerm) ATgetNext((ATermList) t_38);
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
        LocalPopChoice(p_38);
      }
    else
      {
        t = m_38;
        {
          ATerm v_38 = t;
          int w_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_31 = NULL,l_31 = NULL,m_31 = NULL;
              t = _2_0(n_16, _id, t);
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
              LocalPopChoice(w_38);
            }
          else
            {
              t = v_38;
              {
                ATerm o_31 = NULL,p_31 = NULL,q_31 = NULL;
                t = _2_0(o_16, _id, t);
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
  ATerm x_38 = t;
  int c_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_31 = NULL;
      v_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_31, term_d_39);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(c_39);
    }
  else
    {
      t = x_38;
      {
        ATerm m_5 = NULL,h_2 = NULL,l_2 = NULL,o_2 = NULL,p_2 = NULL;
        m_5 = t;
        t = term_e_39;
        o_2 = t;
        t = term_g_20;
        h_2 = t;
        t = o_2;
        p_2 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, m_5), term_e_39);
        l_2 = t;
        t = SSL_printnl(h_2, l_2);
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
    ATerm f_39 = t;
    int g_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(p_127, _id, t);
        ;
        LocalPopChoice(g_39);
      }
    else
      {
        t = f_39;
        t = Cons_2_0(_id, a_32, t);
      }
    return(t);
  }
  t = a_32(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm h_39 = t;
  int i_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(i_39);
    }
  else
    {
      t = h_39;
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
          ATerm p_16 (ATerm t)
          {
            t = e_32;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(p_16, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm v_127 (ATerm), ATerm t)
{
  ATerm l_32 (ATerm t)
  {
    ATerm j_39 = t;
    int k_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, l_32, t);
        ;
        LocalPopChoice(k_39);
      }
    else
      {
        t = j_39;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = v_127(t);
      }
    return(t);
  }
  t = l_32(t);
  return(t);
}
ATerm q_16 (ATerm t)
{
  ATerm o_32 = NULL;
  o_32 = t;
  t = SSL_explode_string(o_32);
  return(t);
}
ATerm r_16 (ATerm t)
{
  ATerm p_32 = NULL;
  p_32 = t;
  t = SSL_explode_string(p_32);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm n_32 = NULL;
  t = _2_0(q_16, r_16, t);
  {
    ATerm l_39 = t;
    int n_39 = stack_ptr;
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
          ATerm s_16 (ATerm t)
          {
            t = s_32;
            return(t);
          }
          t = at_end_1_0(s_16, t);
        }
        ;
        LocalPopChoice(n_39);
      }
    else
      {
        t = l_39;
        {
          ATerm r_5 = NULL,s_5 = NULL;
          r_5 = t;
          t = SSL_explode_term(r_5);
          if(match_cons(t, sym__2))
            {
              ATerm o_39 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) o_39) != ATmakeSymbol("", 0, ATtrue)))
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
ATerm t_16 (ATerm t)
{
  ATerm p_39 = t;
  int q_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(q_39);
    }
  else
    {
      t = p_39;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm r_39 = t;
  int v_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_33 = NULL;
      c_33 = t;
      t = SSL_is_string(c_33);
      ;
      LocalPopChoice(v_39);
    }
  else
    {
      t = r_39;
      {
        ATerm w_39 = t;
        int x_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(t_16, t);
            ;
            LocalPopChoice(x_39);
          }
        else
          {
            t = w_39;
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
                        ATerm a_40 = t;
                        int b_40 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm s_2 = NULL,t_2 = NULL;
                            t_2 = t;
                            t = term_c_40;
                            s_2 = t;
                            t = SSL_table_get(s_2, h_33);
                            {
                              ATerm d_40 = t;
                              int e_40 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm q_6 = NULL,u_2 = NULL,v_2 = NULL;
                                  t = eval_config_0_0(t);
                                  q_6 = t;
                                  v_2 = t;
                                  t = term_c_40;
                                  u_2 = t;
                                  t = SSL_table_put(u_2, h_33, q_6);
                                  t = q_6;
                                  ;
                                  LocalPopChoice(e_40);
                                }
                              else
                                {
                                  t = d_40;
                                }
                            }
                            ;
                            LocalPopChoice(b_40);
                          }
                        else
                          {
                            t = a_40;
                            {
                              ATerm x_2 = NULL,c_3 = NULL,f_3 = NULL,j_3 = NULL;
                              t = term_f_40;
                              f_3 = t;
                              t = term_g_20;
                              x_2 = t;
                              t = f_3;
                              j_3 = t;
                              t = (ATerm) ATinsert(ATinsert(ATempty, h_33), term_f_40);
                              c_3 = t;
                              t = SSL_printnl(x_2, c_3);
                              t = h_33;
                              _fail(t);
                            }
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
  ATerm g_40 = t;
  int h_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_33 = NULL,w_33 = NULL,m_3 = NULL,o_3 = NULL,r_3 = NULL,t_3 = NULL;
      u_33 = t;
      t = term_i_40;
      r_3 = t;
      t = term_c_40;
      m_3 = t;
      t = r_3;
      t_3 = t;
      t = term_i_40;
      o_3 = t;
      t = SSL_table_get(m_3, o_3);
      {
        ATerm n_40 = t;
        int o_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_6 = NULL,u_3 = NULL,w_3 = NULL,y_3 = NULL,z_3 = NULL;
            t = eval_config_0_0(t);
            y_6 = t;
            y_3 = t;
            t = term_c_40;
            u_3 = t;
            t = y_3;
            z_3 = t;
            t = term_i_40;
            w_3 = t;
            t = SSL_table_put(u_3, w_3, y_6);
            t = y_6;
            ;
            LocalPopChoice(o_40);
          }
        else
          {
            t = n_40;
          }
        w_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_33, term_p_40);
        t = geq_0_0(t);
        t = u_33;
        t = n_144(t);
      }
      ;
      LocalPopChoice(h_40);
    }
  else
    {
      t = g_40;
    }
  return(t);
}
ATerm u_16 (ATerm t)
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
ATerm y_16 (ATerm t)
{
  ATerm z_33 = NULL,a_34 = NULL,d_4 = NULL,e_4 = NULL,f_4 = NULL,h_4 = NULL;
  z_33 = t;
  t = SSL_string_to_int(z_33);
  a_34 = t;
  f_4 = t;
  t = term_c_40;
  d_4 = t;
  t = f_4;
  h_4 = t;
  t = term_q_40;
  e_4 = t;
  t = SSL_table_put(d_4, e_4, a_34);
  t = z_33;
  return(t);
}
ATerm z_16 (ATerm t)
{
  t = term_v_40;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_16, y_16, z_16, t);
  return(t);
}
ATerm a_17 (ATerm t)
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
ATerm b_17 (ATerm t)
{
  ATerm i_4 = NULL,j_4 = NULL,m_4 = NULL,n_4 = NULL,o_4 = NULL,s_4 = NULL;
  n_4 = t;
  t = term_c_40;
  i_4 = t;
  t = n_4;
  o_4 = t;
  t = term_i_40;
  j_4 = t;
  t = o_4;
  s_4 = t;
  t = term_w_40;
  m_4 = t;
  t = SSL_table_put(i_4, j_4, m_4);
  t = term_x_40;
  return(t);
}
ATerm c_17 (ATerm t)
{
  t = term_y_40;
  return(t);
}
ATerm d_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_17 (ATerm t)
{
  ATerm d_34 = NULL,e_34 = NULL,t_4 = NULL,u_4 = NULL,x_4 = NULL,y_4 = NULL;
  d_34 = t;
  t = SSL_string_to_int(d_34);
  e_34 = t;
  x_4 = t;
  t = term_c_40;
  t_4 = t;
  t = x_4;
  y_4 = t;
  t = term_i_40;
  u_4 = t;
  t = SSL_table_put(t_4, u_4, e_34);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, d_34);
  return(t);
}
ATerm f_17 (ATerm t)
{
  t = term_d_41;
  return(t);
}
ATerm g_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_17 (ATerm t)
{
  ATerm z_4 = NULL,a_5 = NULL,b_5 = NULL,c_5 = NULL,d_5 = NULL,e_5 = NULL;
  c_5 = t;
  t = term_c_40;
  z_4 = t;
  t = c_5;
  d_5 = t;
  t = term_e_41;
  a_5 = t;
  t = d_5;
  e_5 = t;
  t = term_f_20;
  b_5 = t;
  t = SSL_table_put(z_4, a_5, b_5);
  t = term_f_41;
  return(t);
}
ATerm i_17 (ATerm t)
{
  t = term_g_41;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm l_41 = t;
  int m_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_17, b_17, c_17, t);
      ;
      LocalPopChoice(m_41);
    }
  else
    {
      t = l_41;
      {
        ATerm n_41 = t;
        int o_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(d_17, e_17, f_17, t);
            ;
            LocalPopChoice(o_41);
          }
        else
          {
            t = n_41;
            t = Option_3_0(g_17, h_17, i_17, t);
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
      t = term_f_20;
      t = d_0(t);
      j_34 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_41, term_q_41, j_34);
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
      t = term_f_20;
      t = c_0(t);
      m_34 = t;
      t = (ATerm) ATinsert(CheckATermList(i_34), m_34);
    }
  return(t);
}
ATerm j_17 (ATerm t)
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
ATerm k_17 (ATerm t)
{
  ATerm r_34 = NULL,f_5 = NULL,g_5 = NULL,h_5 = NULL,i_5 = NULL;
  r_34 = t;
  h_5 = t;
  t = term_c_40;
  f_5 = t;
  t = h_5;
  i_5 = t;
  t = term_r_41;
  g_5 = t;
  t = SSL_table_put(f_5, g_5, r_34);
  t = (ATerm) ATmakeAppl(sym_Output_1, r_34);
  return(t);
}
ATerm l_17 (ATerm t)
{
  t = term_s_41;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_17, k_17, l_17, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm u_34 = NULL,v_34 = NULL,w_34 = NULL,x_34 = NULL,j_5 = NULL,n_5 = NULL;
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
    ATerm t_41 = t;
    int u_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_41 = ATgetArgument(t, 0);
            ATerm w_41 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(u_34, v_34);
        ;
        LocalPopChoice(u_41);
      }
    else
      {
        t = t_41;
        t = (ATerm) ATempty;
      }
    x_34 = t;
    n_5 = t;
    t = (ATerm) ATinsert(CheckATermList(x_34), w_34);
    j_5 = t;
    t = SSL_table_put(u_34, v_34, j_5);
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
      t = term_f_20;
      t = l_0(t);
      k_35 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_41, term_q_41, k_35);
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
ATerm m_17 (ATerm t)
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
ATerm n_17 (ATerm t)
{
  ATerm r_35 = NULL,o_5 = NULL,p_5 = NULL,q_5 = NULL,t_5 = NULL;
  r_35 = t;
  q_5 = t;
  t = term_c_40;
  o_5 = t;
  t = q_5;
  t_5 = t;
  t = term_x_41;
  p_5 = t;
  t = SSL_table_put(o_5, p_5, r_35);
  t = (ATerm) ATmakeAppl(sym_Input_1, r_35);
  return(t);
}
ATerm o_17 (ATerm t)
{
  t = term_y_41;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_17, n_17, o_17, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm s_35 = NULL,y_5 = NULL,u_5 = NULL,v_5 = NULL,w_5 = NULL,x_5 = NULL,z_5 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_20;
  t = whoami_0_0(t);
  s_35 = t;
  w_5 = t;
  t = term_g_20;
  u_5 = t;
  t = w_5;
  x_5 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_z_41), s_35);
  v_5 = t;
  t = SSL_printnl(u_5, v_5);
  z_5 = t;
  t = term_j_20;
  y_5 = t;
  t = SSL_exit(y_5);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm a_6 = NULL,b_6 = NULL,c_6 = NULL,d_6 = NULL;
  t = term_a_42;
  c_6 = t;
  t = term_c_40;
  a_6 = t;
  t = c_6;
  d_6 = t;
  t = term_a_42;
  b_6 = t;
  t = SSL_table_get(a_6, b_6);
  {
    ATerm b_42 = t;
    int c_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_7 = NULL,e_6 = NULL,f_6 = NULL,g_6 = NULL,h_6 = NULL;
        t = eval_config_0_0(t);
        d_7 = t;
        g_6 = t;
        t = term_c_40;
        e_6 = t;
        t = g_6;
        h_6 = t;
        t = term_a_42;
        f_6 = t;
        t = SSL_table_put(e_6, f_6, d_7);
        t = d_7;
        ;
        LocalPopChoice(c_42);
      }
    else
      {
        t = b_42;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm t_131 (ATerm), ATerm u_131 (ATerm), ATerm t)
{
  ATerm d_42 = t;
  int e_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = t_131(t);
      ;
      LocalPopChoice(e_42);
    }
  else
    {
      t = d_42;
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
ATerm p_17 (ATerm t)
{
  t = term_w_40;
  return(t);
}
ATerm q_17 (ATerm t)
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
    ATerm f_42 = t;
    int g_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(j_7, k_7);
        ;
        LocalPopChoice(g_42);
      }
    else
      {
        t = f_42;
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
      ATerm h_42 = ATgetArgument(t, 0);
      f_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_7;
  t = foldr_2_0(p_17, q_17, t);
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
    ATerm i_42 = t;
    int j_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_36;
        if((o_36 != t))
          {
            _fail(t);
          }
        t = n_36;
        ;
        LocalPopChoice(j_42);
      }
    else
      {
        t = i_42;
        t = n_36;
        {
          ATerm k_42 = t;
          int l_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(o_36, p_36);
              ;
              LocalPopChoice(l_42);
            }
          else
            {
              t = k_42;
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
  ATerm m_42 = t;
  int n_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_36 = NULL,w_36 = NULL,i_6 = NULL,j_6 = NULL,k_6 = NULL,l_6 = NULL;
      u_36 = t;
      t = term_i_40;
      k_6 = t;
      t = term_c_40;
      i_6 = t;
      t = k_6;
      l_6 = t;
      t = term_i_40;
      j_6 = t;
      t = SSL_table_get(i_6, j_6);
      {
        ATerm o_42 = t;
        int p_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_7 = NULL,m_6 = NULL,n_6 = NULL,o_6 = NULL,p_6 = NULL;
            t = eval_config_0_0(t);
            z_7 = t;
            o_6 = t;
            t = term_c_40;
            m_6 = t;
            t = o_6;
            p_6 = t;
            t = term_i_40;
            n_6 = t;
            t = SSL_table_put(m_6, n_6, z_7);
            t = z_7;
            ;
            LocalPopChoice(p_42);
          }
        else
          {
            t = o_42;
          }
        w_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_36, term_j_20);
        t = geq_0_0(t);
        t = u_36;
        t = m_144(t);
      }
      ;
      LocalPopChoice(n_42);
    }
  else
    {
      t = m_42;
    }
  return(t);
}
ATerm r_17 (ATerm t)
{
  ATerm y_36 = NULL,z_36 = NULL,r_6 = NULL,s_6 = NULL,t_6 = NULL,u_6 = NULL;
  t = run_time_0_0(t);
  y_36 = t;
  t = term_f_20;
  t = whoami_0_0(t);
  z_36 = t;
  t_6 = t;
  t = term_g_20;
  r_6 = t;
  t = t_6;
  u_6 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_42), y_36), term_q_42), z_36);
  s_6 = t;
  t = SSL_printnl(r_6, s_6);
  t = (ATerm) ATmakeAppl(sym__2, term_g_20, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_42), y_36), term_q_42), z_36));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(r_17, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm v_6 = NULL,w_6 = NULL;
  t = report_run_time_0_0(t);
  w_6 = t;
  t = term_w_40;
  v_6 = t;
  t = SSL_exit(v_6);
  return(t);
}
ATerm s_17 (ATerm t)
{
  ATerm s_42 = t;
  int t_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(t_42);
    }
  else
    {
      t = s_42;
      {
        ATerm u_42 = t;
        int v_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(v_42);
          }
        else
          {
            t = u_42;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm c_147 (ATerm), ATerm t)
{
  ATerm w_42 = t;
  int x_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_6 = NULL,z_6 = NULL,a_7 = NULL,b_7 = NULL;
      t = term_y_42;
      a_7 = t;
      t = term_c_40;
      x_6 = t;
      t = a_7;
      b_7 = t;
      t = term_y_42;
      z_6 = t;
      t = SSL_table_get(x_6, z_6);
      {
        ATerm z_42 = t;
        int a_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_8 = NULL,c_7 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL;
            t = eval_config_0_0(t);
            e_8 = t;
            h_7 = t;
            t = term_c_40;
            c_7 = t;
            t = h_7;
            i_7 = t;
            t = term_y_42;
            g_7 = t;
            t = SSL_table_put(c_7, g_7, e_8);
            t = e_8;
            ;
            LocalPopChoice(a_43);
          }
        else
          {
            t = z_42;
          }
      }
      ;
      LocalPopChoice(x_42);
    }
  else
    {
      t = w_42;
      t = fetch_1_0(s_17, t);
    }
  t = c_147(t);
  return(t);
}
ATerm map_1_0 (ATerm e_127 (ATerm), ATerm t)
{
  ATerm a_37 (ATerm t)
  {
    ATerm b_43 = t;
    int c_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(c_43);
      }
    else
      {
        t = b_43;
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
          ATerm t_17 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(h_37), i_37);
            return(t);
          }
          t = reverse_acc_2_0(e_0, t_17, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_f_20;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm y_118 (ATerm), ATerm t)
{
  ATerm j_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL,l_7 = NULL,m_7 = NULL;
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
  m_7 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, l_37);
  l_7 = t;
  t = SSLsetAnnotations(l_7, j_37);
  return(t);
}
ATerm u_17 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm v_17 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm w_17 (ATerm t)
{
  ATerm r_37 = NULL;
  r_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_37), term_d_43);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm v_7 = NULL,w_7 = NULL,x_7 = NULL,y_7 = NULL;
  ATerm e_43 = t;
  int f_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_7 = NULL,o_7 = NULL,p_7 = NULL,q_7 = NULL;
      t = term_a_42;
      p_7 = t;
      t = term_c_40;
      n_7 = t;
      t = p_7;
      q_7 = t;
      t = term_a_42;
      o_7 = t;
      t = SSL_table_get(n_7, o_7);
      {
        ATerm g_43 = t;
        int h_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_8 = NULL,r_7 = NULL,s_7 = NULL,t_7 = NULL,u_7 = NULL;
            t = eval_config_0_0(t);
            i_8 = t;
            t_7 = t;
            t = term_c_40;
            r_7 = t;
            t = t_7;
            u_7 = t;
            t = term_a_42;
            s_7 = t;
            t = SSL_table_put(r_7, s_7, i_8);
            t = i_8;
            ;
            LocalPopChoice(h_43);
          }
        else
          {
            t = g_43;
          }
      }
      ;
      LocalPopChoice(f_43);
    }
  else
    {
      t = e_43;
      t = fetch_1_0(u_17, t);
    }
  t = term_i_43;
  t = echo_0_0(t);
  x_7 = t;
  t = term_p_41;
  v_7 = t;
  t = x_7;
  y_7 = t;
  t = term_q_41;
  w_7 = t;
  t = SSL_table_get(v_7, w_7);
  t = reverse_acc_2_0(_id, v_17, t);
  t = map_1_0(w_17, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm z_118 (ATerm), ATerm t)
{
  ATerm s_37 = NULL,t_37 = NULL,u_37 = NULL,v_37 = NULL,a_8 = NULL,b_8 = NULL;
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
  b_8 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, u_37);
  a_8 = t;
  t = SSLsetAnnotations(a_8, s_37);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm z_37 = NULL,a_38 = NULL,c_8 = NULL,d_8 = NULL;
  z_37 = t;
  {
    ATerm j_43 = t;
    int k_43 = stack_ptr;
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
                ATerm l_43 = ATgetFirst((ATermList) t);
                ATerm m_43 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_37;
          }
        ;
        LocalPopChoice(k_43);
      }
    else
      {
        t = j_43;
        t = (ATerm) ATinsert(ATempty, z_37);
      }
    a_38 = t;
    d_8 = t;
    t = term_x_37;
    c_8 = t;
    t = SSL_printnl(c_8, a_38);
    t = z_37;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm f_8 = NULL,g_8 = NULL,h_8 = NULL,j_8 = NULL;
  t = term_a_42;
  h_8 = t;
  t = term_c_40;
  f_8 = t;
  t = h_8;
  j_8 = t;
  t = term_a_42;
  g_8 = t;
  t = SSL_table_get(f_8, g_8);
  {
    ATerm n_43 = t;
    int o_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_8 = NULL,k_8 = NULL,l_8 = NULL,m_8 = NULL,o_8 = NULL;
        t = eval_config_0_0(t);
        n_8 = t;
        m_8 = t;
        t = term_c_40;
        k_8 = t;
        t = m_8;
        o_8 = t;
        t = term_a_42;
        l_8 = t;
        t = SSL_table_put(k_8, l_8, n_8);
        t = n_8;
        ;
        LocalPopChoice(o_43);
      }
    else
      {
        t = n_43;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm x_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_17 (ATerm t)
{
  ATerm p_8 = NULL,q_8 = NULL,r_8 = NULL,s_8 = NULL,t_8 = NULL,u_8 = NULL;
  s_8 = t;
  t = term_c_40;
  p_8 = t;
  t = s_8;
  t_8 = t;
  t = term_p_43;
  q_8 = t;
  t = t_8;
  u_8 = t;
  t = term_f_20;
  r_8 = t;
  t = SSL_table_put(p_8, q_8, r_8);
  t = term_q_43;
  return(t);
}
ATerm z_17 (ATerm t)
{
  t = term_r_43;
  return(t);
}
ATerm a_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_18 (ATerm t)
{
  ATerm v_8 = NULL,w_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL,c_9 = NULL,e_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL,j_9 = NULL;
  y_8 = t;
  t = term_c_40;
  v_8 = t;
  t = y_8;
  z_8 = t;
  t = term_p_43;
  w_8 = t;
  t = z_8;
  c_9 = t;
  t = term_f_20;
  x_8 = t;
  t = SSL_table_put(v_8, w_8, x_8);
  h_9 = t;
  t = term_c_40;
  e_9 = t;
  t = h_9;
  i_9 = t;
  t = term_s_43;
  f_9 = t;
  t = i_9;
  j_9 = t;
  t = term_f_20;
  g_9 = t;
  t = SSL_table_put(e_9, f_9, g_9);
  t = term_t_43;
  return(t);
}
ATerm c_18 (ATerm t)
{
  t = term_u_43;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm v_43 = t;
  int w_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_17, y_17, z_17, t);
      ;
      LocalPopChoice(w_43);
    }
  else
    {
      t = v_43;
      t = Option_3_0(a_18, b_18, c_18, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm q_104 (ATerm), ATerm r_104 (ATerm), ATerm t)
{
  ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL,j_38 = NULL,k_9 = NULL,l_9 = NULL;
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
  l_9 = t;
  t = (ATerm) ATinsert(CheckATermList(i_38), h_38);
  k_9 = t;
  t = SSLsetAnnotations(k_9, e_38);
  return(t);
}
ATerm d_18 (ATerm t)
{
  ATerm o_38 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL,s_9 = NULL;
  o_38 = t;
  p_9 = t;
  t = term_c_40;
  n_9 = t;
  t = p_9;
  s_9 = t;
  t = term_a_42;
  o_9 = t;
  t = SSL_table_put(n_9, o_9, o_38);
  t = (ATerm) ATmakeAppl(sym_Program_1, o_38);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm f_149 (ATerm), ATerm t)
{
  ATerm n_38 = NULL;
  n_38 = t;
  {
    ATerm x_43 = t;
    int y_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_43;
        t = f_149(t);
        ;
        LocalPopChoice(y_43);
      }
    else
      {
        t = x_43;
      }
    t = n_38;
    {
      ATerm e_18 (ATerm t)
      {
        ATerm a_44 = t;
        int b_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_44 = t;
            int d_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(d_44);
              }
            else
              {
                t = c_44;
                t = f_149(t);
                t = Cons_2_0(_id, e_18, t);
              }
            ;
            LocalPopChoice(b_44);
          }
        else
          {
            t = a_44;
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
      t = Cons_2_0(d_18, e_18, t);
    }
  }
  return(t);
}
ATerm h_18 (ATerm t)
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
ATerm i_18 (ATerm t)
{
  ATerm d_10 = NULL,f_10 = NULL,h_10 = NULL,j_10 = NULL,l_10 = NULL,p_10 = NULL;
  j_10 = t;
  t = term_c_40;
  d_10 = t;
  t = j_10;
  l_10 = t;
  t = term_y_42;
  f_10 = t;
  t = l_10;
  p_10 = t;
  t = term_f_20;
  h_10 = t;
  t = SSL_table_put(d_10, f_10, h_10);
  t = term_e_44;
  return(t);
}
ATerm k_18 (ATerm t)
{
  t = term_f_44;
  return(t);
}
ATerm l_18 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm e_149 (ATerm), ATerm t)
{
  ATerm y_38 = NULL,z_38 = NULL,a_39 = NULL,t_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL,a_10 = NULL,g_12 = NULL,h_12 = NULL;
  y_38 = t;
  y_9 = t;
  t = term_p_41;
  t_9 = t;
  t = y_9;
  z_9 = t;
  t = term_q_41;
  w_9 = t;
  t = z_9;
  a_10 = t;
  t = (ATerm) ATempty;
  x_9 = t;
  t = SSL_table_put(t_9, w_9, x_9);
  t = y_38;
  {
    ATerm f_18 (ATerm t)
    {
      ATerm g_44 = t;
      int h_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_149(t);
          ;
          LocalPopChoice(h_44);
        }
      else
        {
          t = g_44;
          {
            ATerm i_44 = t;
            int j_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(h_18, i_18, k_18, t);
                ;
                LocalPopChoice(j_44);
              }
            else
              {
                t = i_44;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(f_18, t);
    {
      ATerm k_44 = t;
      int l_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_39 = NULL;
          m_39 = t;
          {
            ATerm m_44 = t;
            int n_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_11 = NULL,i_11 = NULL;
                t = m_39;
                {
                  ATerm o_44 = t;
                  int p_44 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm q_10 = NULL,r_10 = NULL,t_10 = NULL,u_10 = NULL;
                      t = term_y_42;
                      t_10 = t;
                      t = term_c_40;
                      q_10 = t;
                      t = t_10;
                      u_10 = t;
                      t = term_y_42;
                      r_10 = t;
                      t = SSL_table_get(q_10, r_10);
                      {
                        ATerm q_44 = t;
                        int r_44 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm s_10 = NULL,v_10 = NULL,w_10 = NULL,c_11 = NULL,d_11 = NULL;
                            t = eval_config_0_0(t);
                            s_10 = t;
                            c_11 = t;
                            t = term_c_40;
                            v_10 = t;
                            t = c_11;
                            d_11 = t;
                            t = term_y_42;
                            w_10 = t;
                            t = SSL_table_put(v_10, w_10, s_10);
                            t = s_10;
                            ;
                            LocalPopChoice(r_44);
                          }
                        else
                          {
                            t = q_44;
                          }
                      }
                      ;
                      LocalPopChoice(p_44);
                    }
                  else
                    {
                      t = o_44;
                      t = fetch_1_0(l_18, t);
                    }
                  t = m_39;
                  t = default_system_usage_0_0(t);
                  i_11 = t;
                  t = term_w_40;
                  f_11 = t;
                  t = SSL_exit(f_11);
                }
                ;
                LocalPopChoice(n_44);
              }
            else
              {
                t = m_44;
                {
                  ATerm j_11 = NULL,k_11 = NULL,l_11 = NULL,n_11 = NULL,s_11 = NULL,t_11 = NULL;
                  t = term_p_43;
                  l_11 = t;
                  t = term_c_40;
                  j_11 = t;
                  t = l_11;
                  n_11 = t;
                  t = term_p_43;
                  k_11 = t;
                  t = SSL_table_get(j_11, k_11);
                  {
                    ATerm s_44 = t;
                    int t_44 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm m_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL;
                        t = eval_config_0_0(t);
                        m_11 = t;
                        q_11 = t;
                        t = term_c_40;
                        o_11 = t;
                        t = q_11;
                        r_11 = t;
                        t = term_p_43;
                        p_11 = t;
                        t = SSL_table_put(o_11, p_11, m_11);
                        t = m_11;
                        ;
                        LocalPopChoice(t_44);
                      }
                    else
                      {
                        t = s_44;
                      }
                    t = m_39;
                    t = default_system_about_0_0(t);
                    t_11 = t;
                    t = term_w_40;
                    s_11 = t;
                    t = SSL_exit(s_11);
                  }
                }
              }
          }
          ;
          LocalPopChoice(l_44);
        }
      else
        {
          t = k_44;
          {
            ATerm u_44 = t;
            int v_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_11 = NULL,w_11 = NULL,y_11 = NULL,z_11 = NULL,e_12 = NULL,f_12 = NULL;
                ATerm m_18 (ATerm t)
                {
                  ATerm n_18 (ATerm t)
                  {
                    if(((z_38 != NULL) && (z_38 != t)))
                      _fail(t);
                    else
                      z_38 = t;
                    return(t);
                  }
                  t = Undefined_1_0(n_18, t);
                  return(t);
                }
                t = fetch_1_0(m_18, t);
                y_11 = t;
                t = term_g_20;
                v_11 = t;
                t = y_11;
                z_11 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_38)), term_w_44);
                w_11 = t;
                t = SSL_printnl(v_11, w_11);
                t = (ATerm) ATmakeAppl(sym__2, term_g_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_38)), term_w_44));
                t = default_system_usage_0_0(t);
                f_12 = t;
                t = term_j_20;
                e_12 = t;
                t = SSL_exit(e_12);
                ;
                LocalPopChoice(v_44);
              }
            else
              {
                t = u_44;
              }
          }
        }
      a_39 = t;
      h_12 = t;
      t = term_p_41;
      g_12 = t;
      t = SSL_table_destroy(g_12);
      t = a_39;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm e_147 (ATerm), ATerm f_147 (ATerm), ATerm g_147 (ATerm), ATerm h_147 (ATerm), ATerm t)
{
  ATerm s_39 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL;
  t = parse_options_1_0(e_147, t);
  s_39 = t;
  j_12 = t;
  t = term_x_44;
  i_12 = t;
  t = SSL_table_create(i_12);
  m_12 = t;
  t = term_x_44;
  k_12 = t;
  t = m_12;
  n_12 = t;
  t = term_y_44;
  l_12 = t;
  t = SSL_table_put(k_12, l_12, s_39);
  t = s_39;
  t = g_147(t);
  {
    ATerm z_44 = t;
    int a_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(f_147, t);
        ;
        LocalPopChoice(a_45);
      }
    else
      {
        t = z_44;
        {
          ATerm b_45 = t;
          int c_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_147(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(c_45);
            }
          else
            {
              t = b_45;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm p_18 (ATerm t)
{
  t = if_verbose2_1_0(w_18, t);
  return(t);
}
ATerm r_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_18 (ATerm t)
{
  ATerm o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL;
  r_12 = t;
  t = term_c_40;
  o_12 = t;
  t = r_12;
  s_12 = t;
  t = term_d_45;
  p_12 = t;
  t = s_12;
  t_12 = t;
  t = term_f_20;
  q_12 = t;
  t = SSL_table_put(o_12, p_12, q_12);
  t = term_e_45;
  return(t);
}
ATerm t_18 (ATerm t)
{
  t = term_f_45;
  return(t);
}
ATerm w_18 (ATerm t)
{
  ATerm t_39 = NULL,u_39 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,a_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL;
  t_39 = t;
  t = term_a_42;
  w_12 = t;
  t = term_c_40;
  u_12 = t;
  t = w_12;
  a_13 = t;
  t = term_a_42;
  v_12 = t;
  t = SSL_table_get(u_12, v_12);
  {
    ATerm g_45 = t;
    int h_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_11 = NULL,c_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL;
        t = eval_config_0_0(t);
        u_11 = t;
        g_13 = t;
        t = term_c_40;
        c_13 = t;
        t = g_13;
        h_13 = t;
        t = term_a_42;
        f_13 = t;
        t = SSL_table_put(c_13, f_13, u_11);
        t = u_11;
        ;
        LocalPopChoice(h_45);
      }
    else
      {
        t = g_45;
      }
    u_39 = t;
    k_13 = t;
    t = term_g_20;
    i_13 = t;
    t = k_13;
    l_13 = t;
    t = (ATerm) ATinsert(ATempty, u_39);
    j_13 = t;
    t = SSL_printnl(i_13, j_13);
    t = t_39;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm n_146 (ATerm), ATerm o_146 (ATerm), ATerm p_146 (ATerm), ATerm t)
{
  ATerm o_18 (ATerm t)
  {
    ATerm i_45 = t;
    int j_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_146(t);
        ;
        LocalPopChoice(j_45);
      }
    else
      {
        t = i_45;
        {
          ATerm k_45 = t;
          int l_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(l_45);
            }
          else
            {
              t = k_45;
              {
                ATerm m_45 = t;
                int n_45 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(n_45);
                  }
                else
                  {
                    t = m_45;
                    {
                      ATerm o_45 = t;
                      int p_45 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(r_18, s_18, t_18, t);
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
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(r_45);
                              }
                            else
                              {
                                t = q_45;
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
  ATerm q_18 (ATerm t)
  {
    ATerm y_39 = NULL,z_39 = NULL,x_11 = NULL;
    y_39 = t;
    {
      ATerm s_45 = t;
      int t_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_18 (ATerm t)
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
          t = fetch_1_0(x_18, t);
          ;
          LocalPopChoice(t_45);
        }
      else
        {
          t = s_45;
          t = term_u_45;
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
  t = option_wrap_4_0(o_18, p_146, p_18, q_18, t);
  return(t);
}
ATerm y_18 (ATerm t)
{
  t = _2_0(_id, b_19, t);
  return(t);
}
ATerm b_19 (ATerm t)
{
  t = apply_to_bodies_1_0(h_19, t);
  return(t);
}
ATerm h_19 (ATerm t)
{
  t = downup_1_0(m_19, t);
  t = downup_1_0(t_19, t);
  t = downup_1_0(y_19, t);
  t = topdown_1_0(b_20, t);
  t = downup_1_0(c_20, t);
  return(t);
}
ATerm m_19 (ATerm t)
{
  t = repeat_1_0(o_19, t);
  return(t);
}
ATerm o_19 (ATerm t)
{
  ATerm v_45 = t;
  int w_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Simplify_0_0(t);
      ;
      LocalPopChoice(w_45);
    }
  else
    {
      t = v_45;
      {
        ATerm x_45 = t;
        int y_45 = stack_ptr;
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
            LocalPopChoice(y_45);
          }
        else
          {
            t = x_45;
            {
              ATerm z_45 = t;
              int a_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = FuseScope_0_0(t);
                  ;
                  LocalPopChoice(a_46);
                }
              else
                {
                  t = z_45;
                  {
                    ATerm b_46 = t;
                    int c_46 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = WhereSavesCurrentTerm_0_0(t);
                        ;
                        LocalPopChoice(c_46);
                      }
                    else
                      {
                        t = b_46;
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
ATerm t_19 (ATerm t)
{
  t = repeat_1_0(u_19, t);
  return(t);
}
ATerm u_19 (ATerm t)
{
  ATerm d_46 = t;
  int e_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Simplify_0_0(t);
      ;
      LocalPopChoice(e_46);
    }
  else
    {
      t = d_46;
      {
        ATerm f_46 = t;
        int g_46 = stack_ptr;
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
            LocalPopChoice(g_46);
          }
        else
          {
            t = f_46;
            {
              ATerm h_46 = t;
              int i_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = FuseScope_0_0(t);
                  ;
                  LocalPopChoice(i_46);
                }
              else
                {
                  t = h_46;
                  {
                    ATerm j_46 = t;
                    int k_46 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = WhereSavesCurrentTerm_0_0(t);
                        ;
                        LocalPopChoice(k_46);
                      }
                    else
                      {
                        t = j_46;
                        {
                          ATerm l_46 = t;
                          int m_46 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = TestSavesCurrentTerm_0_0(t);
                              ;
                              LocalPopChoice(m_46);
                            }
                          else
                            {
                              t = l_46;
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
ATerm y_19 (ATerm t)
{
  t = repeat_1_0(a_20, t);
  return(t);
}
ATerm a_20 (ATerm t)
{
  ATerm n_46 = t;
  int o_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Simplify_0_0(t);
      ;
      LocalPopChoice(o_46);
    }
  else
    {
      t = n_46;
      {
        ATerm p_46 = t;
        int q_46 = stack_ptr;
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
                  t = FuseScope_0_0(t);
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
                        t = WhereSavesCurrentTerm_0_0(t);
                        ;
                        LocalPopChoice(u_46);
                      }
                    else
                      {
                        t = t_46;
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
ATerm b_20 (ATerm t)
{
  ATerm v_46 = t;
  int w_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = NarrowScope_0_0(t);
      ;
      LocalPopChoice(w_46);
    }
  else
    {
      t = v_46;
    }
  return(t);
}
ATerm c_20 (ATerm t)
{
  t = repeat_1_0(d_20, t);
  return(t);
}
ATerm d_20 (ATerm t)
{
  ATerm x_46 = t;
  int y_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Simplify_0_0(t);
      ;
      LocalPopChoice(y_46);
    }
  else
    {
      t = x_46;
      {
        ATerm z_46 = t;
        int a_47 = stack_ptr;
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
            LocalPopChoice(a_47);
          }
        else
          {
            t = z_46;
            {
              ATerm b_47 = t;
              int c_47 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = FuseScope_0_0(t);
                  ;
                  LocalPopChoice(c_47);
                }
              else
                {
                  t = b_47;
                  {
                    ATerm d_47 = t;
                    int e_47 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = WhereSavesCurrentTerm_0_0(t);
                        ;
                        LocalPopChoice(e_47);
                      }
                    else
                      {
                        t = d_47;
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
  t = iowrap_3_0(y_18, _fail, default_usage_0_0, t);
  return(t);
}
