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
ATerm term_r_49;
ATerm term_c_49;
ATerm term_b_49;
ATerm term_a_49;
ATerm term_v_48;
ATerm term_u_48;
ATerm term_t_48;
ATerm term_c_48;
ATerm term_b_48;
ATerm term_w_47;
ATerm term_r_47;
ATerm term_q_47;
ATerm term_p_47;
ATerm term_o_47;
ATerm term_n_47;
ATerm term_m_47;
ATerm term_f_47;
ATerm term_a_47;
ATerm term_v_46;
ATerm term_o_46;
ATerm term_n_46;
ATerm term_x_45;
ATerm term_s_45;
ATerm term_r_45;
ATerm term_q_45;
ATerm term_h_45;
ATerm term_c_45;
ATerm term_b_45;
ATerm term_a_45;
ATerm term_r_44;
ATerm term_q_44;
ATerm term_p_44;
ATerm term_o_44;
ATerm term_n_44;
ATerm term_m_44;
ATerm term_g_44;
ATerm term_f_44;
ATerm term_d_44;
ATerm term_c_44;
ATerm term_v_43;
ATerm term_s_43;
ATerm term_n_43;
ATerm term_s_42;
ATerm term_r_42;
ATerm term_l_41;
ATerm term_g_41;
ATerm term_a_41;
ATerm term_g_39;
ATerm term_u_35;
ATerm term_r_35;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_d_34;
ATerm term_l_31;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_a_25;
void init_constant_terms (void)
{
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(sym_Op_2, term_d_34, (ATerm) ATempty);
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(sym_ConstType_1, term_i_34);
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_42));
  term_r_42 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_n_43));
  term_n_43 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_43));
  term_s_43 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_c_44));
  term_c_44 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_f_44));
  term_f_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_m_44));
  term_m_44 = (ATerm) ATmakeAppl(sym_Verbose_1, term_g_44);
  ATprotect(&(term_n_44));
  term_n_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_o_44));
  term_o_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_44));
  term_p_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_44));
  term_r_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_45));
  term_b_45 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_45));
  term_c_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_45));
  term_q_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_r_45));
  term_r_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_45));
  term_s_45 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_x_45));
  term_x_45 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_n_46));
  term_n_46 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_46));
  term_o_46 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_46));
  term_v_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_a_47));
  term_a_47 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_47));
  term_f_47 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_47));
  term_m_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeAppl(sym__3, term_n_43, term_m_47, term_a_25);
  ATprotect(&(term_o_47));
  term_o_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_p_47));
  term_p_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_q_47));
  term_q_47 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_r_47));
  term_r_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_w_47));
  term_w_47 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_t_48));
  term_t_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_u_48));
  term_u_48 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_v_48));
  term_v_48 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_a_49));
  term_a_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_b_49));
  term_b_49 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_49));
  term_c_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_r_49));
  term_r_49 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm v_10 (ATerm k_10, ATerm);
ATerm conc_0_0 (ATerm);
ATerm isect_1_0 (ATerm z_128 (ATerm), ATerm);
ATerm DynamicRules_1_0 (ATerm j_108 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm a_108 (ATerm), ATerm b_108 (ATerm), ATerm c_108 (ATerm), ATerm d_108 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm m_109 (ATerm), ATerm n_109 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm e_120 (ATerm), ATerm f_120 (ATerm), ATerm g_120 (ATerm), ATerm);
ATerm k_16 (ATerm);
ATerm l_16 (ATerm);
ATerm m_16 (ATerm);
ATerm n_16 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm o_16 (ATerm);
ATerm p_16 (ATerm);
ATerm q_16 (ATerm);
ATerm r_16 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm union_1_0 (ATerm g_129 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm w_131 (ATerm), ATerm x_131 (ATerm), ATerm y_131 (ATerm), ATerm);
ATerm diff_1_0 (ATerm b_129 (ATerm), ATerm);
ATerm v_16 (ATerm);
ATerm w_16 (ATerm);
ATerm x_16 (ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm while_not_2_0 (ATerm e_138 (ATerm), ATerm f_138 (ATerm), ATerm);
ATerm for_3_0 (ATerm h_138 (ATerm), ATerm i_138 (ATerm), ATerm j_138 (ATerm), ATerm);
ATerm y_16 (ATerm);
ATerm z_16 (ATerm);
ATerm a_17 (ATerm);
ATerm c_17 (ATerm);
ATerm d_17 (ATerm);
ATerm e_17 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm h_17 (ATerm);
ATerm j_17 (ATerm);
ATerm k_17 (ATerm);
ATerm l_17 (ATerm);
ATerm m_17 (ATerm);
ATerm n_17 (ATerm);
ATerm o_17 (ATerm);
ATerm free_vars_3_0 (ATerm y_135 (ATerm), ATerm z_135 (ATerm), ATerm a_136 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm p_17 (ATerm);
ATerm q_17 (ATerm);
ATerm r_17 (ATerm);
ATerm s_17 (ATerm);
ATerm t_17 (ATerm);
ATerm CleanupScope_0_0 (ATerm);
ATerm topdown_1_0 (ATerm d_121 (ATerm), ATerm);
ATerm TestSavesCurrentTerm_0_0 (ATerm);
ATerm WhereSavesCurrentTerm_0_0 (ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm v_17 (ATerm);
ATerm w_17 (ATerm);
ATerm y_17 (ATerm);
ATerm a_18 (ATerm);
ATerm BuildMatchFusion_0_0 (ATerm);
ATerm MisMatch_0_0 (ATerm);
ATerm j_20 (ATerm w_18, ATerm x_18, ATerm y_18, ATerm);
ATerm BuildMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm h_122 (ATerm), ATerm);
ATerm LetHoist_0_0 (ATerm);
ATerm Idempotency_0_0 (ATerm);
ATerm AssociateR_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm f_18 (ATerm);
ATerm g_18 (ATerm);
ATerm h_18 (ATerm);
ATerm i_18 (ATerm);
ATerm j_18 (ATerm);
ATerm k_18 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm l_18 (ATerm);
ATerm ElimFail_0_0 (ATerm);
ATerm ElimId_0_0 (ATerm);
ATerm Simplify_0_0 (ATerm);
ATerm repeat_1_0 (ATerm p_137 (ATerm), ATerm);
ATerm downup_1_0 (ATerm f_121 (ATerm), ATerm);
ATerm WidenScope_0_0 (ATerm);
ATerm o_18 (ATerm);
ATerm p_18 (ATerm);
ATerm q_18 (ATerm);
ATerm r_18 (ATerm);
ATerm s_18 (ATerm);
ATerm t_18 (ATerm);
ATerm u_18 (ATerm);
ATerm b_19 (ATerm);
ATerm LiftCallArgs_0_0 (ATerm);
ATerm genzip_4_0 (ATerm p_125 (ATerm), ATerm q_125 (ATerm), ATerm r_125 (ATerm), ATerm s_125 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm u_127 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm v_30 (ATerm p_30, ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm Var_1_0 (ATerm s_105 (ATerm), ATerm);
ATerm d_19 (ATerm);
ATerm e_19 (ATerm);
ATerm g_19 (ATerm);
ATerm h_19 (ATerm);
ATerm i_19 (ATerm);
ATerm j_19 (ATerm);
ATerm k_19 (ATerm);
ATerm m_19 (ATerm);
ATerm n_19 (ATerm);
ATerm o_19 (ATerm);
ATerm r_19 (ATerm);
ATerm u_19 (ATerm);
ATerm v_19 (ATerm);
ATerm w_19 (ATerm);
ATerm y_19 (ATerm);
ATerm h_20 (ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm downup2_2_0 (ATerm i_121 (ATerm), ATerm j_121 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm u_111 (ATerm), ATerm v_111 (ATerm), ATerm w_111 (ATerm), ATerm x_111 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm r_111 (ATerm), ATerm s_111 (ATerm), ATerm t_111 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm u_104 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm z_104 (ATerm), ATerm);
ATerm u_20 (ATerm);
ATerm apply_to_bodies_1_0 (ATerm e_119 (ATerm), ATerm);
ATerm _2_0 (ATerm b_100 (ATerm), ATerm c_100 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm d_143 (ATerm), ATerm);
ATerm g_21 (ATerm);
ATerm h_21 (ATerm);
ATerm l_21 (ATerm);
ATerm m_21 (ATerm);
ATerm o_21 (ATerm);
ATerm r_21 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm f_146 (ATerm), ATerm);
ATerm d_36 (ATerm x_35, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm s_21 (ATerm);
ATerm t_21 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm o_127 (ATerm), ATerm);
ATerm u_21 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm o_144 (ATerm), ATerm);
ATerm v_21 (ATerm);
ATerm w_21 (ATerm);
ATerm x_21 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm y_21 (ATerm);
ATerm z_21 (ATerm);
ATerm a_22 (ATerm);
ATerm b_22 (ATerm);
ATerm c_22 (ATerm);
ATerm d_22 (ATerm);
ATerm e_22 (ATerm);
ATerm f_22 (ATerm);
ATerm g_22 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm h_22 (ATerm);
ATerm m_22 (ATerm);
ATerm n_22 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm o_22 (ATerm);
ATerm p_22 (ATerm);
ATerm q_22 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm u_131 (ATerm), ATerm v_131 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm r_22 (ATerm);
ATerm s_22 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm n_144 (ATerm), ATerm);
ATerm t_22 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm u_22 (ATerm);
ATerm need_help_1_0 (ATerm d_147 (ATerm), ATerm);
ATerm map_1_0 (ATerm e_127 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm y_118 (ATerm), ATerm);
ATerm w_22 (ATerm);
ATerm x_22 (ATerm);
ATerm y_22 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm z_118 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm z_22 (ATerm);
ATerm a_23 (ATerm);
ATerm b_23 (ATerm);
ATerm c_23 (ATerm);
ATerm f_23 (ATerm);
ATerm i_23 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm q_104 (ATerm), ATerm r_104 (ATerm), ATerm);
ATerm l_23 (ATerm);
ATerm parse_options_p__1_0 (ATerm g_149 (ATerm), ATerm);
ATerm o_23 (ATerm);
ATerm p_23 (ATerm);
ATerm q_23 (ATerm);
ATerm r_23 (ATerm);
ATerm parse_options_1_0 (ATerm f_149 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm f_147 (ATerm), ATerm g_147 (ATerm), ATerm h_147 (ATerm), ATerm i_147 (ATerm), ATerm);
ATerm v_23 (ATerm);
ATerm x_23 (ATerm);
ATerm y_23 (ATerm);
ATerm c_24 (ATerm);
ATerm e_24 (ATerm);
ATerm iowrap_3_0 (ATerm o_146 (ATerm), ATerm p_146 (ATerm), ATerm q_146 (ATerm), ATerm);
ATerm g_24 (ATerm);
ATerm h_24 (ATerm);
ATerm i_24 (ATerm);
ATerm m_24 (ATerm);
ATerm o_24 (ATerm);
ATerm p_24 (ATerm);
ATerm q_24 (ATerm);
ATerm r_24 (ATerm);
ATerm s_24 (ATerm);
ATerm w_24 (ATerm);
ATerm y_24 (ATerm);
ATerm z_24 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_0 = NULL,o_0 = NULL,h_0 = NULL,m_0 = NULL,p_0 = NULL,q_0 = NULL,r_0 = NULL,s_0 = NULL;
  b_0 = t;
  t = term_a_25;
  t = whoami_0_0(t);
  o_0 = t;
  p_0 = t;
  t = term_b_25;
  h_0 = t;
  t = p_0;
  q_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_25), o_0), term_c_25);
  m_0 = t;
  t = SSL_printnl(h_0, m_0);
  s_0 = t;
  t = term_e_25;
  r_0 = t;
  t = SSL_exit(r_0);
  t = b_0;
  return(t);
}
ATerm v_10 (ATerm k_10, ATerm t)
{
  ATerm n_10 = NULL;
  t = SSL_explode_term(k_10);
  if(match_cons(t, sym__2))
    {
      ATerm f_25 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_25) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      n_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_10;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL;
  q_10 = t;
  if(match_cons(t, sym__2))
    {
      o_10 = ATgetArgument(t, 0);
      p_10 = ATgetArgument(t, 1);
      {
        ATerm g_25 = t;
        int h_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_16 (ATerm t)
            {
              t = p_10;
              return(t);
            }
            t = o_10;
            t = at_end_1_0(h_16, t);
            ;
            LocalPopChoice(h_25);
          }
        else
          {
            t = g_25;
            t = v_10(q_10, t);
          }
      }
    }
  else
    {
      t = v_10(q_10, t);
    }
  return(t);
}
ATerm isect_1_0 (ATerm z_128 (ATerm), ATerm t)
{
  ATerm u_0 = NULL,v_0 = NULL;
  if(match_cons(t, sym__2))
    {
      u_0 = ATgetArgument(t, 0);
      v_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_0;
  {
    ATerm d_1 (ATerm t)
    {
      ATerm i_25 = t;
      int j_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(j_25);
        }
      else
        {
          t = i_25;
          {
            ATerm w_0 = NULL,y_0 = NULL;
            w_0 = t;
            {
              ATerm k_25 = t;
              int l_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm m_25 = ATgetFirst((ATermList) t);
                      y_0 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(l_25);
                  {
                    ATerm n_25 = t;
                    int o_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm f_0 = NULL;
                        t = w_0;
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            f_0 = ATgetFirst((ATermList) t);
                            {
                              ATerm p_25 = (ATerm) ATgetNext((ATermList) t);
                            }
                          }
                        else
                          _fail(t);
                        t = v_0;
                        {
                          ATerm i_16 (ATerm t)
                          {
                            ATerm j_0 = NULL;
                            j_0 = t;
                            t = (ATerm) ATmakeAppl(sym__2, f_0, j_0);
                            t = z_128(t);
                            return(t);
                          }
                          t = fetch_1_0(i_16, t);
                          t = w_0;
                          t = Cons_2_0(_id, d_1, t);
                        }
                        ;
                        LocalPopChoice(o_25);
                      }
                    else
                      {
                        t = n_25;
                        t = y_0;
                        t = d_1(t);
                      }
                  }
                }
              else
                {
                  t = k_25;
                  {
                    ATerm c_1 = NULL;
                    t = w_0;
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        c_1 = ATgetFirst((ATermList) t);
                        {
                          ATerm q_25 = (ATerm) ATgetNext((ATermList) t);
                        }
                      }
                    else
                      _fail(t);
                    t = v_0;
                    {
                      ATerm j_16 (ATerm t)
                      {
                        ATerm t_1 = NULL;
                        t_1 = t;
                        t = (ATerm) ATmakeAppl(sym__2, c_1, t_1);
                        t = z_128(t);
                        return(t);
                      }
                      t = fetch_1_0(j_16, t);
                      t = w_0;
                      t = Cons_2_0(_id, d_1, t);
                    }
                  }
                }
            }
          }
        }
      return(t);
    }
    t = d_1(t);
  }
  return(t);
}
ATerm DynamicRules_1_0 (ATerm j_108 (ATerm), ATerm t)
{
  ATerm e_1 = NULL,g_1 = NULL,h_1 = NULL,i_1 = NULL,t_0 = NULL,x_0 = NULL;
  i_1 = t;
  if(match_cons(t, sym_DynamicRules_1))
    {
      g_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_1);
  e_1 = t;
  t = g_1;
  t = j_108(t);
  h_1 = t;
  x_0 = t;
  t = (ATerm) ATmakeAppl(sym_DynamicRules_1, h_1);
  t_0 = t;
  t = SSLsetAnnotations(t_0, e_1);
  return(t);
}
ATerm RDefT_4_0 (ATerm a_108 (ATerm), ATerm b_108 (ATerm), ATerm c_108 (ATerm), ATerm d_108 (ATerm), ATerm t)
{
  ATerm l_1 = NULL,m_1 = NULL,n_1 = NULL,o_1 = NULL,p_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL,u_1 = NULL,v_1 = NULL,z_0 = NULL,a_1 = NULL;
  v_1 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      m_1 = ATgetArgument(t, 0);
      n_1 = ATgetArgument(t, 1);
      o_1 = ATgetArgument(t, 2);
      p_1 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_1);
  l_1 = t;
  t = m_1;
  t = a_108(t);
  q_1 = t;
  t = n_1;
  t = b_108(t);
  r_1 = t;
  t = o_1;
  t = c_108(t);
  s_1 = t;
  t = p_1;
  t = d_108(t);
  u_1 = t;
  a_1 = t;
  t = (ATerm) ATmakeAppl(sym_RDefT_4, q_1, r_1, s_1, u_1);
  z_0 = t;
  t = SSLsetAnnotations(z_0, l_1);
  return(t);
}
ATerm Scope_2_0 (ATerm m_109 (ATerm), ATerm n_109 (ATerm), ATerm t)
{
  ATerm y_1 = NULL,a_2 = NULL,c_2 = NULL,d_2 = NULL,e_2 = NULL,f_2 = NULL,b_1 = NULL,f_1 = NULL;
  f_2 = t;
  if(match_cons(t, sym_Scope_2))
    {
      a_2 = ATgetArgument(t, 0);
      c_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_2);
  y_1 = t;
  t = a_2;
  t = m_109(t);
  d_2 = t;
  t = c_2;
  t = n_109(t);
  e_2 = t;
  f_1 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, d_2, e_2);
  b_1 = t;
  t = SSLsetAnnotations(b_1, y_1);
  return(t);
}
ATerm tboundin_3_0 (ATerm e_120 (ATerm), ATerm f_120 (ATerm), ATerm g_120 (ATerm), ATerm t)
{
  ATerm r_25 = t;
  int s_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(g_120, e_120, t);
      ;
      LocalPopChoice(s_25);
    }
  else
    {
      t = r_25;
      {
        ATerm t_25 = t;
        int u_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(g_120, g_120, g_120, e_120, t);
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
                  t = RDefT_4_0(g_120, g_120, g_120, e_120, t);
                  ;
                  LocalPopChoice(w_25);
                }
              else
                {
                  t = v_25;
                  t = DynamicRules_1_0(e_120, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm k_16 (ATerm t)
{
  ATerm e_3 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      e_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, e_3);
  return(t);
}
ATerm l_16 (ATerm t)
{
  ATerm x_25 = t;
  int y_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(y_25);
    }
  else
    {
      t = x_25;
      {
        ATerm i_3 = NULL,l_3 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            i_3 = ATgetArgument(t, 0);
            t = i_3;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm z_25 = t;
            int a_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm b_26 = ATgetArgument(t, 0);
                    ATerm c_26 = ATgetArgument(t, 1);
                    l_3 = ATgetArgument(t, 2);
                    {
                      ATerm d_26 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(a_26);
                t = l_3;
                t = map_1_0(m_16, t);
              }
            else
              {
                t = z_25;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm e_26 = ATgetArgument(t, 0);
                    ATerm f_26 = ATgetArgument(t, 1);
                    l_3 = ATgetArgument(t, 2);
                    {
                      ATerm g_26 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = l_3;
                t = map_1_0(n_16, t);
              }
          }
      }
    }
  return(t);
}
ATerm m_16 (ATerm t)
{
  ATerm u_3 = NULL;
  ATerm h_26 = t;
  int i_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_3 = ATgetArgument(t, 0);
          {
            ATerm j_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_26);
      t = u_3;
    }
  else
    {
      t = h_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_3;
    }
  return(t);
}
ATerm n_16 (ATerm t)
{
  ATerm a_4 = NULL;
  ATerm k_26 = t;
  int l_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_4 = ATgetArgument(t, 0);
          {
            ATerm m_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_26);
      t = a_4;
    }
  else
    {
      t = k_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_4;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(k_16, l_16, tboundin_3_0, t);
  return(t);
}
ATerm o_16 (ATerm t)
{
  ATerm z_4 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      z_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, z_4);
  return(t);
}
ATerm p_16 (ATerm t)
{
  ATerm n_26 = t;
  int q_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(q_26);
    }
  else
    {
      t = n_26;
      {
        ATerm j_5 = NULL,d_6 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            j_5 = ATgetArgument(t, 0);
            t = j_5;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm r_26 = t;
            int s_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm u_26 = ATgetArgument(t, 0);
                    ATerm v_26 = ATgetArgument(t, 1);
                    d_6 = ATgetArgument(t, 2);
                    {
                      ATerm w_26 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(s_26);
                t = d_6;
                t = map_1_0(q_16, t);
              }
            else
              {
                t = r_26;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm x_26 = ATgetArgument(t, 0);
                    ATerm y_26 = ATgetArgument(t, 1);
                    d_6 = ATgetArgument(t, 2);
                    {
                      ATerm z_26 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = d_6;
                t = map_1_0(r_16, t);
              }
          }
      }
    }
  return(t);
}
ATerm q_16 (ATerm t)
{
  ATerm p_7 = NULL;
  ATerm a_27 = t;
  int b_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_7 = ATgetArgument(t, 0);
          {
            ATerm c_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_27);
      t = p_7;
    }
  else
    {
      t = a_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_7;
    }
  return(t);
}
ATerm r_16 (ATerm t)
{
  ATerm e_8 = NULL;
  ATerm d_27 = t;
  int e_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_8 = ATgetArgument(t, 0);
          {
            ATerm f_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_27);
      t = e_8;
    }
  else
    {
      t = d_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_8;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm p_4 = NULL,t_4 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      t_4 = ATgetArgument(t, 0);
      t = t_4;
      if(match_cons(t, sym_Rule_3))
        {
          p_4 = ATgetArgument(t, 0);
          {
            ATerm g_27 = ATgetArgument(t, 1);
          }
          {
            ATerm h_27 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = p_4;
      t = free_vars_3_0(o_16, p_16, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          t_4 = ATgetArgument(t, 0);
          {
            ATerm i_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = t_4;
    }
  return(t);
}
ATerm union_1_0 (ATerm g_129 (ATerm), ATerm t)
{
  ATerm l_8 = NULL,m_8 = NULL;
  if(match_cons(t, sym__2))
    {
      l_8 = ATgetArgument(t, 0);
      m_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_8;
  {
    ATerm t_8 (ATerm t)
    {
      ATerm j_27 = t;
      int k_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = m_8;
          ;
          LocalPopChoice(k_27);
        }
      else
        {
          t = j_27;
          {
            ATerm l_27 = t;
            int m_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_2 = NULL,i_2 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    g_2 = ATgetFirst((ATermList) t);
                    i_2 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = m_8;
                {
                  ATerm s_16 (ATerm t)
                  {
                    ATerm j_2 = NULL;
                    j_2 = t;
                    t = (ATerm) ATmakeAppl(sym__2, g_2, j_2);
                    t = g_129(t);
                    return(t);
                  }
                  t = fetch_1_0(s_16, t);
                  t = i_2;
                  t = t_8(t);
                }
                ;
                LocalPopChoice(m_27);
              }
            else
              {
                t = l_27;
                t = Cons_2_0(_id, t_8, t);
              }
          }
        }
      return(t);
    }
    t = t_8(t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm w_131 (ATerm), ATerm x_131 (ATerm), ATerm y_131 (ATerm), ATerm t)
{
  ATerm n_27 = t;
  int o_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = w_131(t);
      ;
      LocalPopChoice(o_27);
    }
  else
    {
      t = n_27;
      {
        ATerm m_9 = NULL,q_9 = NULL,w_9 = NULL,y_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_9 = ATgetFirst((ATermList) t);
            q_9 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = m_9;
        t = y_131(t);
        w_9 = t;
        t = q_9;
        t = foldr_3_0(w_131, x_131, y_131, t);
        y_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_9, y_9);
        t = x_131(t);
      }
    }
  return(t);
}
ATerm diff_1_0 (ATerm b_129 (ATerm), ATerm t)
{
  ATerm f_10 = NULL,g_10 = NULL;
  if(match_cons(t, sym__2))
    {
      f_10 = ATgetArgument(t, 0);
      g_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_10;
  {
    ATerm h_10 (ATerm t)
    {
      ATerm p_27 = t;
      int q_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(q_27);
        }
      else
        {
          t = p_27;
          {
            ATerm r_27 = t;
            int t_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_2 = NULL,n_2 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    m_2 = ATgetFirst((ATermList) t);
                    n_2 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = g_10;
                {
                  ATerm t_16 (ATerm t)
                  {
                    ATerm p_2 = NULL;
                    p_2 = t;
                    t = (ATerm) ATmakeAppl(sym__2, m_2, p_2);
                    t = b_129(t);
                    return(t);
                  }
                  t = fetch_1_0(t_16, t);
                  t = n_2;
                  t = h_10(t);
                }
                ;
                LocalPopChoice(t_27);
              }
            else
              {
                t = r_27;
                t = Cons_2_0(_id, h_10, t);
              }
          }
        }
      return(t);
    }
    t = h_10(t);
  }
  return(t);
}
ATerm v_16 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_27 = ATgetArgument(t, 0);
      if(((ATgetType(v_27) != AT_LIST) || !(ATisEmpty(v_27))))
        _fail(t);
      {
        ATerm w_27 = ATgetArgument(t, 1);
        if(((ATgetType(w_27) != AT_LIST) || !(ATisEmpty(w_27))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm w_16 (ATerm t)
{
  ATerm e_11 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_27 = ATgetArgument(t, 0);
      if(((ATgetType(x_27) == AT_LIST) && !(ATisEmpty(x_27))))
        {
          e_11 = ATgetFirst((ATermList) x_27);
          g_11 = (ATerm) ATgetNext((ATermList) x_27);
        }
      else
        _fail(t);
      {
        ATerm y_27 = ATgetArgument(t, 1);
        if(((ATgetType(y_27) == AT_LIST) && !(ATisEmpty(y_27))))
          {
            f_11 = ATgetFirst((ATermList) y_27);
            h_11 = (ATerm) ATgetNext((ATermList) y_27);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_11, f_11), (ATerm) ATmakeAppl(sym__2, g_11, h_11));
  return(t);
}
ATerm x_16 (ATerm t)
{
  ATerm k_11 = NULL,m_11 = NULL;
  if(match_cons(t, sym__2))
    {
      k_11 = ATgetArgument(t, 0);
      m_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_11), k_11);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm w_10 = NULL,x_10 = NULL,y_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL,d_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm z_27 = ATgetFirst((ATermList) t);
      if(match_cons(z_27, sym__2))
        {
          w_10 = ATgetArgument(z_27, 0);
          x_10 = ATgetArgument(z_27, 1);
        }
      else
        _fail(t);
      y_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(x_10);
  if(match_cons(t, sym__2))
    {
      z_10 = ATgetArgument(t, 0);
      a_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(w_10);
  if(match_cons(t, sym__2))
    {
      if((z_10 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      b_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_11, a_11);
  t = genzip_4_0(v_16, w_16, x_16, _id, t);
  d_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_11, y_10);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm e_138 (ATerm), ATerm f_138 (ATerm), ATerm t)
{
  ATerm n_11 (ATerm t)
  {
    ATerm a_28 = t;
    int b_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_138(t);
        ;
        LocalPopChoice(b_28);
      }
    else
      {
        t = a_28;
        t = f_138(t);
        t = n_11(t);
      }
    return(t);
  }
  t = n_11(t);
  return(t);
}
ATerm for_3_0 (ATerm h_138 (ATerm), ATerm i_138 (ATerm), ATerm j_138 (ATerm), ATerm t)
{
  t = h_138(t);
  t = while_not_2_0(i_138, j_138, t);
  return(t);
}
ATerm y_16 (ATerm t)
{
  ATerm t_11 = NULL;
  t_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, t_11);
  return(t);
}
ATerm z_16 (ATerm t)
{
  t = _2_0(_id, c_17, t);
  return(t);
}
ATerm a_17 (ATerm t)
{
  ATerm c_28 = t;
  int d_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(_id, d_17, t);
      ;
      LocalPopChoice(d_28);
    }
  else
    {
      t = c_28;
      {
        ATerm d_12 = NULL,e_12 = NULL,f_12 = NULL,i_12 = NULL;
        if(match_cons(t, sym__2))
          {
            d_12 = ATgetArgument(t, 0);
            e_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_12;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_12 = ATgetFirst((ATermList) t);
            i_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_12), f_12), i_12);
      }
    }
  return(t);
}
ATerm c_17 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm d_17 (ATerm t)
{
  ATerm e_28 = t;
  int h_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_11 = ATgetFirst((ATermList) t);
          y_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_11;
      if(match_cons(t, sym__2))
        {
          w_11 = ATgetArgument(t, 0);
          x_11 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = x_11;
      if((w_11 != t))
        {
          _fail(t);
        }
      t = y_11;
      ;
      LocalPopChoice(h_28);
    }
  else
    {
      t = e_28;
      t = UfDecompose_0_0(t);
    }
  return(t);
}
ATerm e_17 (ATerm t)
{
  ATerm m_12 = NULL;
  if(match_cons(t, sym__2))
    {
      m_12 = ATgetArgument(t, 0);
      if((m_12 != ATgetArgument(t, 1)))
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
  ATerm i_28 = t;
  int j_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(y_16, z_16, a_17, t);
      ;
      LocalPopChoice(j_28);
    }
  else
    {
      t = i_28;
      t = diff_1_0(e_17, t);
    }
  return(t);
}
ATerm h_17 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_17 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_17 (ATerm t)
{
  t = union_1_0(l_17, t);
  return(t);
}
ATerm l_17 (ATerm t)
{
  ATerm c_3 = NULL;
  if(match_cons(t, sym__2))
    {
      c_3 = ATgetArgument(t, 0);
      if((c_3 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm m_17 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm n_17 (ATerm t)
{
  t = union_1_0(o_17, t);
  return(t);
}
ATerm o_17 (ATerm t)
{
  ATerm q_3 = NULL;
  if(match_cons(t, sym__2))
    {
      q_3 = ATgetArgument(t, 0);
      if((q_3 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm y_135 (ATerm), ATerm z_135 (ATerm), ATerm a_136 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm t_12 (ATerm t)
  {
    ATerm m_28 = t;
    int o_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_135(t);
        ;
        LocalPopChoice(o_28);
      }
    else
      {
        t = m_28;
        {
          ATerm p_28 = t;
          int q_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_12 = NULL,p_12 = NULL,x_2 = NULL,y_2 = NULL;
              n_12 = t;
              t = z_135(t);
              p_12 = t;
              t = n_12;
              {
                ATerm g_17 (ATerm t)
                {
                  ATerm t_2 = NULL;
                  t = t_12(t);
                  t_2 = t;
                  t = (ATerm) ATmakeAppl(sym__2, t_2, p_12);
                  t = diff_0_0(t);
                  return(t);
                }
                t = a_136(g_17, t_12, h_17, t);
                x_2 = t;
                t = SSL_explode_term(x_2);
                if(match_cons(t, sym__2))
                  {
                    ATerm r_28 = ATgetArgument(t, 0);
                    y_2 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = y_2;
                t = foldr_3_0(j_17, k_17, _id, t);
              }
              ;
              LocalPopChoice(q_28);
            }
          else
            {
              t = p_28;
              {
                ATerm d_3 = NULL,f_3 = NULL;
                d_3 = t;
                t = SSL_explode_term(d_3);
                if(match_cons(t, sym__2))
                  {
                    ATerm u_28 = ATgetArgument(t, 0);
                    f_3 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = f_3;
                t = foldr_3_0(m_17, n_17, t_12, t);
              }
            }
        }
      }
    return(t);
  }
  t = t_12(t);
  return(t);
}
ATerm p_17 (ATerm t)
{
  ATerm e_13 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      e_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, e_13);
  return(t);
}
ATerm q_17 (ATerm t)
{
  ATerm z_28 = t;
  int a_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(a_29);
    }
  else
    {
      t = z_28;
      {
        ATerm g_13 = NULL,i_13 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            g_13 = ATgetArgument(t, 0);
            t = g_13;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm b_29 = t;
            int c_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm d_29 = ATgetArgument(t, 0);
                    ATerm e_29 = ATgetArgument(t, 1);
                    i_13 = ATgetArgument(t, 2);
                    {
                      ATerm f_29 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(c_29);
                t = i_13;
                t = map_1_0(r_17, t);
              }
            else
              {
                t = b_29;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm g_29 = ATgetArgument(t, 0);
                    ATerm h_29 = ATgetArgument(t, 1);
                    i_13 = ATgetArgument(t, 2);
                    {
                      ATerm i_29 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = i_13;
                t = map_1_0(s_17, t);
              }
          }
      }
    }
  return(t);
}
ATerm r_17 (ATerm t)
{
  ATerm o_13 = NULL;
  ATerm j_29 = t;
  int k_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_13 = ATgetArgument(t, 0);
          {
            ATerm w_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_29);
      t = o_13;
    }
  else
    {
      t = j_29;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_13;
    }
  return(t);
}
ATerm s_17 (ATerm t)
{
  ATerm u_13 = NULL;
  ATerm g_30 = t;
  int h_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_13 = ATgetArgument(t, 0);
          {
            ATerm k_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_30);
      t = u_13;
    }
  else
    {
      t = g_30;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_13;
    }
  return(t);
}
ATerm t_17 (ATerm t)
{
  ATerm x_13 = NULL;
  if(match_cons(t, sym__2))
    {
      x_13 = ATgetArgument(t, 0);
      if((x_13 != ATgetArgument(t, 1)))
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
  ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL;
  if(match_cons(t, sym_Scope_2))
    {
      a_13 = ATgetArgument(t, 0);
      b_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_13;
  t = free_vars_3_0(p_17, q_17, tboundin_3_0, t);
  c_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_13, c_13);
  t = isect_1_0(t_17, t);
  d_13 = t;
  {
    ATerm l_30 = t;
    if((PushChoice() == 0))
      {
        if((a_13 != t))
          {
            _fail(t);
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_30;
      }
    t = (ATerm) ATmakeAppl(sym_Scope_2, d_13, b_13);
  }
  return(t);
}
ATerm topdown_1_0 (ATerm d_121 (ATerm), ATerm t)
{
  t = d_121(t);
  {
    ATerm u_17 (ATerm t)
    {
      t = topdown_1_0(d_121, t);
      return(t);
    }
    t = SRTS_all(u_17, t);
  }
  return(t);
}
ATerm TestSavesCurrentTerm_0_0 (ATerm t)
{
  ATerm y_13 = NULL,z_13 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      y_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = new_0_0(t);
  z_13 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, z_13), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, z_13)), (ATerm) ATmakeAppl(sym_Seq_2, y_13, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, z_13)))));
  return(t);
}
ATerm WhereSavesCurrentTerm_0_0 (ATerm t)
{
  ATerm a_14 = NULL,b_14 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      a_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = new_0_0(t);
  b_14 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, b_14), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, b_14)), (ATerm) ATmakeAppl(sym_Seq_2, a_14, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, b_14)))));
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm m_14 = NULL,n_14 = NULL,s_14 = NULL,u_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL;
  if(match_cons(t, sym__2))
    {
      s_14 = ATgetArgument(t, 0);
      u_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_14;
  if(match_cons(t, sym_Build_1))
    {
      ATerm m_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_14;
  if(match_cons(t, sym_Where_1))
    {
      v_14 = ATgetArgument(t, 0);
      t = v_14;
      if(match_cons(t, sym_Prim_2))
        {
          m_14 = ATgetArgument(t, 0);
          n_14 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Prim_2, m_14, n_14);
    }
  else
    {
      if(match_cons(t, sym_Prim_2))
        {
          v_14 = ATgetArgument(t, 0);
          w_14 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_Prim_2, v_14, w_14);
        }
      else
        {
          if(match_cons(t, sym_PrimT_3))
            {
              v_14 = ATgetArgument(t, 0);
              w_14 = ATgetArgument(t, 1);
              x_14 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_PrimT_3, v_14, w_14, x_14);
        }
    }
  return(t);
}
ATerm v_17 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_30 = ATgetArgument(t, 0);
      if(((ATgetType(n_30) != AT_LIST) || !(ATisEmpty(n_30))))
        _fail(t);
      {
        ATerm o_30 = ATgetArgument(t, 1);
        if(((ATgetType(o_30) != AT_LIST) || !(ATisEmpty(o_30))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm w_17 (ATerm t)
{
  ATerm n_15 = NULL,o_15 = NULL,q_15 = NULL,s_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_30 = ATgetArgument(t, 0);
      if(((ATgetType(q_30) == AT_LIST) && !(ATisEmpty(q_30))))
        {
          n_15 = ATgetFirst((ATermList) q_30);
          q_15 = (ATerm) ATgetNext((ATermList) q_30);
        }
      else
        _fail(t);
      {
        ATerm u_30 = ATgetArgument(t, 1);
        if(((ATgetType(u_30) == AT_LIST) && !(ATisEmpty(u_30))))
          {
            o_15 = ATgetFirst((ATermList) u_30);
            s_15 = (ATerm) ATgetNext((ATermList) u_30);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_15, o_15), (ATerm) ATmakeAppl(sym__2, q_15, s_15));
  return(t);
}
ATerm y_17 (ATerm t)
{
  ATerm u_15 = NULL,w_15 = NULL;
  if(match_cons(t, sym__2))
    {
      u_15 = ATgetArgument(t, 0);
      w_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_15), u_15);
  return(t);
}
ATerm a_18 (ATerm t)
{
  ATerm x_15 = NULL,z_15 = NULL;
  if(match_cons(t, sym__2))
    {
      x_15 = ATgetArgument(t, 0);
      z_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, x_15), (ATerm) ATmakeAppl(sym_Match_1, z_15));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm g_15 = NULL,i_15 = NULL,k_15 = NULL,m_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_31 = ATgetArgument(t, 0);
      if(match_cons(a_31, sym_Build_1))
        {
          ATerm c_31 = ATgetArgument(a_31, 0);
          if(match_cons(c_31, sym_Op_2))
            {
              i_15 = ATgetArgument(c_31, 0);
              g_15 = ATgetArgument(c_31, 1);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm b_31 = ATgetArgument(t, 1);
        if(match_cons(b_31, sym_Match_1))
          {
            ATerm d_31 = ATgetArgument(b_31, 0);
            if(match_cons(d_31, sym_Op_2))
              {
                if((i_15 != ATgetArgument(d_31, 0)))
                  {
                    _fail(ATgetArgument(d_31, 0));
                  }
                k_15 = ATgetArgument(d_31, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, g_15, k_15);
  t = genzip_4_0(v_17, w_17, y_17, a_18, t);
  m_15 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, m_15), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, i_15, g_15)));
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm a_16 = NULL,c_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_31 = ATgetArgument(t, 0);
      if(match_cons(e_31, sym_Build_1))
        {
          ATerm g_31 = ATgetArgument(e_31, 0);
          if(match_cons(g_31, sym_Op_2))
            {
              a_16 = ATgetArgument(g_31, 0);
              {
                ATerm h_31 = ATgetArgument(g_31, 1);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm f_31 = ATgetArgument(t, 1);
        if(match_cons(f_31, sym_Match_1))
          {
            ATerm i_31 = ATgetArgument(f_31, 0);
            if(match_cons(i_31, sym_Op_2))
              {
                c_16 = ATgetArgument(i_31, 0);
                {
                  ATerm j_31 = ATgetArgument(i_31, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, a_16, c_16);
  {
    ATerm k_31 = t;
    if((PushChoice() == 0))
      {
        ATerm e_16 = NULL;
        if(match_cons(t, sym__2))
          {
            e_16 = ATgetArgument(t, 0);
            if((e_16 != ATgetArgument(t, 1)))
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
        t = k_31;
      }
    t = term_l_31;
  }
  return(t);
}
ATerm j_20 (ATerm w_18, ATerm x_18, ATerm y_18, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, w_18, x_18);
  {
    ATerm m_31 = t;
    int n_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = MisMatch_0_0(t);
        ;
        LocalPopChoice(n_31);
      }
    else
      {
        t = m_31;
        {
          ATerm o_31 = t;
          int p_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = BuildMatchFusion_0_0(t);
              ;
              LocalPopChoice(p_31);
            }
          else
            {
              t = o_31;
              {
                ATerm q_31 = t;
                int r_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm l_19 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        ATerm s_31 = ATgetArgument(t, 0);
                        ATerm t_31 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = w_18;
                    if(match_cons(t, sym_Build_1))
                      {
                        ATerm u_31 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = x_18;
                    if(match_cons(t, sym_Build_1))
                      {
                        l_19 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Build_1, l_19);
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
                          t = BuildPrim_0_0(t);
                          ;
                          LocalPopChoice(w_31);
                        }
                      else
                        {
                          t = v_31;
                          {
                            ATerm p_19 = NULL,q_19 = NULL,s_19 = NULL,t_19 = NULL;
                            if(match_cons(t, sym__2))
                              {
                                ATerm x_31 = ATgetArgument(t, 0);
                                ATerm y_31 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = w_18;
                            if(match_cons(t, sym_Match_1))
                              {
                                p_19 = ATgetArgument(t, 0);
                                t = x_18;
                                if(match_cons(t, sym_Match_1))
                                  {
                                    s_19 = ATgetArgument(t, 0);
                                    t = s_19;
                                    if((p_19 != t))
                                      {
                                        _fail(t);
                                      }
                                    t = (ATerm) ATmakeAppl(sym_Match_1, p_19);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        s_19 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = p_19;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        q_19 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = s_19;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        t_19 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = t_19;
                                    if((q_19 != t))
                                      {
                                        _fail(t);
                                      }
                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, q_19));
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Build_1))
                                  {
                                    p_19 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = x_18;
                                if(match_cons(t, sym_Match_1))
                                  {
                                    s_19 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = s_19;
                                if((p_19 != t))
                                  {
                                    _fail(t);
                                  }
                                t = (ATerm) ATmakeAppl(sym_Build_1, p_19);
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
  ATerm x_19 = NULL,a_20 = NULL,b_20 = NULL,c_20 = NULL,d_20 = NULL;
  b_20 = t;
  if(match_cons(t, sym_Seq_2))
    {
      c_20 = ATgetArgument(t, 0);
      d_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_20;
  if(match_cons(t, sym_Seq_2))
    {
      x_19 = ATgetArgument(t, 0);
      a_20 = ATgetArgument(t, 1);
      {
        ATerm z_31 = t;
        int a_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_4 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, c_20, x_19);
            {
              ATerm b_32 = t;
              int c_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = MisMatch_0_0(t);
                  ;
                  LocalPopChoice(c_32);
                }
              else
                {
                  t = b_32;
                  {
                    ATerm d_32 = t;
                    int e_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = BuildMatchFusion_0_0(t);
                        ;
                        LocalPopChoice(e_32);
                      }
                    else
                      {
                        t = d_32;
                        {
                          ATerm f_32 = t;
                          int g_32 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm o_4 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  ATerm h_32 = ATgetArgument(t, 0);
                                  ATerm i_32 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = c_20;
                              if(match_cons(t, sym_Build_1))
                                {
                                  ATerm j_32 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = x_19;
                              if(match_cons(t, sym_Build_1))
                                {
                                  o_4 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym_Build_1, o_4);
                              ;
                              LocalPopChoice(g_32);
                            }
                          else
                            {
                              t = f_32;
                              {
                                ATerm k_32 = t;
                                int l_32 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildPrim_0_0(t);
                                    ;
                                    LocalPopChoice(l_32);
                                  }
                                else
                                  {
                                    t = k_32;
                                    {
                                      ATerm b_5 = NULL,c_5 = NULL,e_5 = NULL,f_5 = NULL;
                                      if(match_cons(t, sym__2))
                                        {
                                          ATerm m_32 = ATgetArgument(t, 0);
                                          ATerm n_32 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = c_20;
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          b_5 = ATgetArgument(t, 0);
                                          t = x_19;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              e_5 = ATgetArgument(t, 0);
                                              t = e_5;
                                              if((b_5 != t))
                                                {
                                                  _fail(t);
                                                }
                                              t = (ATerm) ATmakeAppl(sym_Match_1, b_5);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Build_1))
                                                {
                                                  e_5 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = b_5;
                                              if(match_cons(t, sym_Var_1))
                                                {
                                                  c_5 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = e_5;
                                              if(match_cons(t, sym_Var_1))
                                                {
                                                  f_5 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = f_5;
                                              if((c_5 != t))
                                                {
                                                  _fail(t);
                                                }
                                              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, c_5));
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_Build_1))
                                            {
                                              b_5 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = x_19;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              e_5 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = e_5;
                                          if((b_5 != t))
                                            {
                                              _fail(t);
                                            }
                                          t = (ATerm) ATmakeAppl(sym_Build_1, b_5);
                                        }
                                    }
                                  }
                              }
                            }
                        }
                      }
                  }
                }
              j_4 = t;
              t = (ATerm) ATmakeAppl(sym_Seq_2, j_4, a_20);
            }
            ;
            LocalPopChoice(a_32);
          }
        else
          {
            t = z_31;
            t = j_20(c_20, d_20, b_20, t);
          }
      }
    }
  else
    {
      t = j_20(c_20, d_20, b_20, t);
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm h_122 (ATerm), ATerm t)
{
  ATerm k_20 (ATerm t)
  {
    ATerm o_32 = t;
    int p_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_122(t);
        ;
        LocalPopChoice(p_32);
      }
    else
      {
        t = o_32;
        t = SRTS_one(k_20, t);
      }
    return(t);
  }
  t = k_20(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm n_20 = NULL,o_20 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      ATerm q_32 = ATgetArgument(t, 0);
      if(((ATgetType(q_32) == AT_LIST) && !(ATisEmpty(q_32))))
        {
          ATerm s_32 = ATgetFirst((ATermList) q_32);
          if(match_cons(s_32, sym_SDefT_4))
            {
              o_20 = ATgetArgument(s_32, 0);
              {
                ATerm u_32 = ATgetArgument(s_32, 1);
                if(((ATgetType(u_32) != AT_LIST) || !(ATisEmpty(u_32))))
                  _fail(t);
              }
              {
                ATerm v_32 = ATgetArgument(s_32, 2);
                if(((ATgetType(v_32) != AT_LIST) || !(ATisEmpty(v_32))))
                  _fail(t);
              }
              n_20 = ATgetArgument(s_32, 3);
            }
          else
            _fail(t);
          {
            ATerm t_32 = (ATerm) ATgetNext((ATermList) q_32);
            if(((ATgetType(t_32) != AT_LIST) || !(ATisEmpty(t_32))))
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm r_32 = ATgetArgument(t, 1);
        if(match_cons(r_32, sym_CallT_3))
          {
            ATerm w_32 = ATgetArgument(r_32, 0);
            if(match_cons(w_32, sym_SVar_1))
              {
                if((o_20 != ATgetArgument(w_32, 0)))
                  {
                    _fail(ATgetArgument(w_32, 0));
                  }
              }
            else
              _fail(t);
            {
              ATerm x_32 = ATgetArgument(r_32, 1);
              if(((ATgetType(x_32) != AT_LIST) || !(ATisEmpty(x_32))))
                _fail(t);
            }
            {
              ATerm y_32 = ATgetArgument(r_32, 2);
              if(((ATgetType(y_32) != AT_LIST) || !(ATisEmpty(y_32))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = n_20;
  {
    ATerm z_32 = t;
    if((PushChoice() == 0))
      {
        ATerm c_18 (ATerm t)
        {
          if(match_cons(t, sym_CallT_3))
            {
              ATerm a_33 = ATgetArgument(t, 0);
              if(match_cons(a_33, sym_SVar_1))
                {
                  if((o_20 != ATgetArgument(a_33, 0)))
                    {
                      _fail(ATgetArgument(a_33, 0));
                    }
                }
              else
                _fail(t);
              {
                ATerm b_33 = ATgetArgument(t, 1);
                if(((ATgetType(b_33) != AT_LIST) || !(ATisEmpty(b_33))))
                  _fail(t);
              }
              {
                ATerm g_33 = ATgetArgument(t, 2);
                if(((ATgetType(g_33) != AT_LIST) || !(ATisEmpty(g_33))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(c_18, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_32;
      }
    t = n_20;
  }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm c_21 = NULL,d_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL,n_21 = NULL,p_21 = NULL,q_21 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      p_21 = ATgetArgument(t, 0);
      t = p_21;
      if(match_cons(t, sym_Seq_2))
        {
          n_21 = ATgetArgument(t, 0);
          d_21 = ATgetArgument(t, 1);
          t = n_21;
          if(match_cons(t, sym_Where_1))
            {
              c_21 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = d_21;
          if(match_cons(t, sym_Seq_2))
            {
              i_21 = ATgetArgument(t, 0);
              k_21 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = i_21;
          if(match_cons(t, sym_Build_1))
            {
              j_21 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, c_21, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, j_21), k_21)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              n_21 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, n_21);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          p_21 = ATgetArgument(t, 0);
          t = p_21;
          if(match_cons(t, sym_Test_1))
            {
              n_21 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, n_21);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              p_21 = ATgetArgument(t, 0);
              t = p_21;
              if(match_cons(t, sym_Not_1))
                {
                  n_21 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, n_21);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  p_21 = ATgetArgument(t, 0);
                  q_21 = ATgetArgument(t, 1);
                  t = q_21;
                  if((p_21 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      p_21 = ATgetArgument(t, 0);
                      q_21 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = q_21;
                  if((p_21 != t))
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
  ATerm i_22 = NULL,j_22 = NULL,k_22 = NULL,l_22 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      i_22 = ATgetArgument(t, 0);
      l_22 = ATgetArgument(t, 1);
      t = i_22;
      if(match_cons(t, sym_LChoice_2))
        {
          j_22 = ATgetArgument(t, 0);
          k_22 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, j_22, (ATerm) ATmakeAppl(sym_LChoice_2, k_22, l_22));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          i_22 = ATgetArgument(t, 0);
          l_22 = ATgetArgument(t, 1);
          t = i_22;
          if(match_cons(t, sym_Seq_2))
            {
              j_22 = ATgetArgument(t, 0);
              k_22 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, j_22, (ATerm) ATmakeAppl(sym_Seq_2, k_22, l_22));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              i_22 = ATgetArgument(t, 0);
              l_22 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = i_22;
          if(match_cons(t, sym_Choice_2))
            {
              j_22 = ATgetArgument(t, 0);
              k_22 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, j_22, (ATerm) ATmakeAppl(sym_Choice_2, k_22, l_22));
        }
    }
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm h_33 = t;
  int s_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(n_0, _id, t);
      {
        ATerm d_18 (ATerm t)
        {
          ATerm t_33 = t;
          int c_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(n_0, t);
              ;
              LocalPopChoice(c_34);
            }
          else
            {
              t = t_33;
            }
          return(t);
        }
        t = Cons_2_0(_id, d_18, t);
      }
      ;
      LocalPopChoice(s_33);
    }
  else
    {
      t = h_33;
      {
        ATerm e_18 (ATerm t)
        {
          t = map1_1_0(n_0, t);
          return(t);
        }
        t = Cons_2_0(_id, e_18, t);
      }
    }
  return(t);
}
ATerm f_18 (ATerm t)
{
  ATerm b_24 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      b_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, b_24, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_j_34), term_j_34));
  return(t);
}
ATerm g_18 (ATerm t)
{
  ATerm o_34 = t;
  int p_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_24 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, d_24, term_j_34);
      ;
      LocalPopChoice(p_34);
    }
  else
    {
      t = o_34;
    }
  return(t);
}
ATerm h_18 (ATerm t)
{
  ATerm l_24 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      l_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, l_24, term_j_34);
  return(t);
}
ATerm i_18 (ATerm t)
{
  ATerm w_34 = t;
  int x_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_24 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, n_24, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_j_34), term_j_34));
      ;
      LocalPopChoice(x_34);
    }
  else
    {
      t = w_34;
    }
  return(t);
}
ATerm j_18 (ATerm t)
{
  ATerm v_24 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      v_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, v_24, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_j_34), term_j_34));
  return(t);
}
ATerm k_18 (ATerm t)
{
  ATerm d_35 = t;
  int q_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_24 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, x_24, term_j_34);
      ;
      LocalPopChoice(q_35);
    }
  else
    {
      t = d_35;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm d_23 = NULL,e_23 = NULL,g_23 = NULL,h_23 = NULL,j_23 = NULL,k_23 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      j_23 = ATgetArgument(t, 0);
      k_23 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, j_23, k_23);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          j_23 = ATgetArgument(t, 0);
          t = j_23;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              d_23 = ATgetFirst((ATermList) t);
              e_23 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, d_23, (ATerm) ATmakeAppl(sym_LChoices_1, e_23));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_l_31;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              j_23 = ATgetArgument(t, 0);
              t = j_23;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  d_23 = ATgetFirst((ATermList) t);
                  e_23 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, d_23, (ATerm) ATmakeAppl(sym_Choices_1, e_23));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_l_31;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  j_23 = ATgetArgument(t, 0);
                  t = j_23;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      d_23 = ATgetFirst((ATermList) t);
                      e_23 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, d_23, (ATerm) ATmakeAppl(sym_Seqs_1, e_23));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_r_35;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      j_23 = ATgetArgument(t, 0);
                      k_23 = ATgetArgument(t, 1);
                      h_23 = ATgetArgument(t, 2);
                      g_23 = ATgetArgument(t, 3);
                      {
                        ATerm z_23 = NULL,a_24 = NULL;
                        t = k_23;
                        t = map1_1_0(f_18, t);
                        z_23 = t;
                        t = h_23;
                        t = map1_1_0(g_18, t);
                        a_24 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, j_23, z_23, a_24, g_23);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          j_23 = ATgetArgument(t, 0);
                          k_23 = ATgetArgument(t, 1);
                          h_23 = ATgetArgument(t, 2);
                          g_23 = ATgetArgument(t, 3);
                          {
                            ATerm s_35 = t;
                            int t_35 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm j_24 = NULL,k_24 = NULL;
                                t = h_23;
                                t = map1_1_0(h_18, t);
                                j_24 = t;
                                t = k_23;
                                t = map_1_0(i_18, t);
                                k_24 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, j_23, k_24, j_24, g_23);
                                ;
                                LocalPopChoice(t_35);
                              }
                            else
                              {
                                t = s_35;
                                {
                                  ATerm t_24 = NULL,u_24 = NULL;
                                  t = k_23;
                                  t = map1_1_0(j_18, t);
                                  t_24 = t;
                                  t = h_23;
                                  t = map_1_0(k_18, t);
                                  u_24 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, j_23, t_24, u_24, g_23);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              j_23 = ATgetArgument(t, 0);
                              k_23 = ATgetArgument(t, 1);
                              h_23 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, k_23, (ATerm) ATmakeAppl(sym_Op_2, term_u_35, (ATerm) ATinsert(ATinsert(ATempty, h_23), j_23)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  j_23 = ATgetArgument(t, 0);
                                  k_23 = ATgetArgument(t, 1);
                                  h_23 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, h_23)), j_23), (ATerm) ATmakeAppl(sym_Build_1, k_23)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      j_23 = ATgetArgument(t, 0);
                                      k_23 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, j_23, (ATerm) ATmakeAppl(sym_Match_1, k_23));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          j_23 = ATgetArgument(t, 0);
                                          k_23 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, j_23), k_23);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              j_23 = ATgetArgument(t, 0);
                                              k_23 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, k_23), j_23);
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
ATerm l_18 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm o_26 = NULL,p_26 = NULL,t_26 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      o_26 = ATgetArgument(t, 0);
      t = o_26;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_l_31;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          o_26 = ATgetArgument(t, 0);
          t = o_26;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_r_35;
        }
      else
        {
          ATerm v_35 = t;
          int w_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_Seq_2))
                {
                  o_26 = ATgetArgument(t, 0);
                  {
                    ATerm y_35 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(w_35);
              t = o_26;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_l_31;
            }
          else
            {
              t = v_35;
              {
                ATerm z_35 = t;
                int c_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Scope_2))
                      {
                        ATerm h_36 = ATgetArgument(t, 0);
                        p_26 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(c_36);
                    t = p_26;
                    if(!(match_cons(t, sym_Fail_0)))
                      _fail(t);
                    t = term_l_31;
                  }
                else
                  {
                    t = z_35;
                    {
                      ATerm i_36 = t;
                      int j_36 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_Rec_2))
                            {
                              ATerm k_36 = ATgetArgument(t, 0);
                              p_26 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(j_36);
                          t = p_26;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_l_31;
                        }
                      else
                        {
                          t = i_36;
                          if(match_cons(t, sym_Some_1))
                            {
                              o_26 = ATgetArgument(t, 0);
                              t = o_26;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_l_31;
                            }
                          else
                            {
                              if(match_cons(t, sym_One_1))
                                {
                                  o_26 = ATgetArgument(t, 0);
                                  t = o_26;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_l_31;
                                }
                              else
                                {
                                  ATerm o_36 = t;
                                  int p_36 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_Path_2))
                                        {
                                          ATerm z_36 = ATgetArgument(t, 0);
                                          p_26 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(p_36);
                                      t = p_26;
                                      if(!(match_cons(t, sym_Fail_0)))
                                        _fail(t);
                                      t = term_l_31;
                                    }
                                  else
                                    {
                                      t = o_36;
                                      {
                                        ATerm a_37 = t;
                                        int b_37 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            if(match_cons(t, sym_Cong_2))
                                              {
                                                ATerm c_37 = ATgetArgument(t, 0);
                                                p_26 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            LocalPopChoice(b_37);
                                            t = p_26;
                                            t = fetch_1_0(l_18, t);
                                            t = term_l_31;
                                          }
                                        else
                                          {
                                            t = a_37;
                                            if(match_cons(t, sym_Choice_2))
                                              {
                                                o_26 = ATgetArgument(t, 0);
                                                p_26 = ATgetArgument(t, 1);
                                                t = p_26;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    t = o_26;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm e_37 = t;
                                                        int f_37 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = p_26;
                                                            ;
                                                            LocalPopChoice(f_37);
                                                          }
                                                        else
                                                          {
                                                            t = e_37;
                                                            t = o_26;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = o_26;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = o_26;
                                                    if(!(match_cons(t, sym_Fail_0)))
                                                      _fail(t);
                                                    t = p_26;
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_LChoice_2))
                                                  {
                                                    o_26 = ATgetArgument(t, 0);
                                                    p_26 = ATgetArgument(t, 1);
                                                    t = p_26;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        t = o_26;
                                                        if(match_cons(t, sym_Fail_0))
                                                          {
                                                            ATerm g_37 = t;
                                                            int h_37 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = p_26;
                                                                ;
                                                                LocalPopChoice(h_37);
                                                              }
                                                            else
                                                              {
                                                                t = g_37;
                                                                t = o_26;
                                                              }
                                                          }
                                                        else
                                                          {
                                                            t = o_26;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = o_26;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = p_26;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Where_1))
                                                      {
                                                        o_26 = ATgetArgument(t, 0);
                                                        t = o_26;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = term_l_31;
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_GuardedLChoice_3))
                                                          {
                                                            o_26 = ATgetArgument(t, 0);
                                                            p_26 = ATgetArgument(t, 1);
                                                            t_26 = ATgetArgument(t, 2);
                                                          }
                                                        else
                                                          _fail(t);
                                                        t = t_26;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, o_26, p_26);
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
  ATerm s_27 = NULL,u_27 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      u_27 = ATgetArgument(t, 0);
      t = u_27;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_r_35;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          u_27 = ATgetArgument(t, 0);
          t = u_27;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_l_31;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              u_27 = ATgetArgument(t, 0);
              s_27 = ATgetArgument(t, 1);
              t = s_27;
              if(match_cons(t, sym_Id_0))
                {
                  t = u_27;
                  if(match_cons(t, sym_Id_0))
                    {
                      ATerm i_37 = t;
                      int j_37 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = s_27;
                          ;
                          LocalPopChoice(j_37);
                        }
                      else
                        {
                          t = i_37;
                          t = u_27;
                        }
                    }
                  else
                    {
                      t = u_27;
                    }
                }
              else
                {
                  t = u_27;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = s_27;
                }
            }
          else
            {
              ATerm k_37 = t;
              int l_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      u_27 = ATgetArgument(t, 0);
                      {
                        ATerm m_37 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(l_37);
                  t = u_27;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_r_35;
                }
              else
                {
                  t = k_37;
                  {
                    ATerm n_37 = t;
                    int p_37 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            ATerm q_37 = ATgetArgument(t, 0);
                            s_27 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(p_37);
                        t = s_27;
                        if(!(match_cons(t, sym_Id_0)))
                          _fail(t);
                        t = term_r_35;
                      }
                    else
                      {
                        t = n_37;
                        {
                          ATerm r_37 = t;
                          int s_37 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Rec_2))
                                {
                                  ATerm t_37 = ATgetArgument(t, 0);
                                  s_27 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(s_37);
                              t = s_27;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_r_35;
                            }
                          else
                            {
                              t = r_37;
                              if(match_cons(t, sym_All_1))
                                {
                                  u_27 = ATgetArgument(t, 0);
                                  t = u_27;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_r_35;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Where_1))
                                    {
                                      u_27 = ATgetArgument(t, 0);
                                      t = u_27;
                                      if(!(match_cons(t, sym_Id_0)))
                                        _fail(t);
                                      t = term_r_35;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          u_27 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = u_27;
                                      if(!(match_cons(t, sym_Wld_0)))
                                        _fail(t);
                                      t = term_r_35;
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
  ATerm u_37 = t;
  int v_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(v_37);
    }
  else
    {
      t = u_37;
      {
        ATerm w_37 = t;
        int x_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(x_37);
          }
        else
          {
            t = w_37;
            {
              ATerm y_37 = t;
              int c_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(c_38);
                }
              else
                {
                  t = y_37;
                  {
                    ATerm d_38 = t;
                    int e_38 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(e_38);
                      }
                    else
                      {
                        t = d_38;
                        {
                          ATerm f_38 = t;
                          int g_38 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(g_38);
                            }
                          else
                            {
                              t = f_38;
                              {
                                ATerm h_38 = t;
                                int i_38 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm f_28 = NULL,g_28 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        f_28 = ATgetArgument(t, 0);
                                        g_28 = ATgetArgument(t, 1);
                                        t = f_28;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = g_28;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            f_28 = ATgetArgument(t, 0);
                                            g_28 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = f_28;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = g_28;
                                      }
                                    ;
                                    LocalPopChoice(i_38);
                                  }
                                else
                                  {
                                    t = h_38;
                                    {
                                      ATerm k_38 = t;
                                      int m_38 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
                                          LocalPopChoice(m_38);
                                        }
                                      else
                                        {
                                          t = k_38;
                                          {
                                            ATerm q_38 = t;
                                            int u_38 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = BuildMatch_0_0(t);
                                                ;
                                                LocalPopChoice(u_38);
                                              }
                                            else
                                              {
                                                t = q_38;
                                                {
                                                  ATerm k_28 = NULL,l_28 = NULL;
                                                  if(match_cons(t, sym_As_2))
                                                    {
                                                      k_28 = ATgetArgument(t, 0);
                                                      l_28 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = k_28;
                                                  if(!(match_cons(t, sym_Wld_0)))
                                                    _fail(t);
                                                  t = l_28;
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
  ATerm n_28 (ATerm t)
  {
    ATerm v_38 = t;
    int z_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_137(t);
        t = n_28(t);
        ;
        LocalPopChoice(z_38);
      }
    else
      {
        t = v_38;
      }
    return(t);
  }
  t = n_28(t);
  return(t);
}
ATerm downup_1_0 (ATerm f_121 (ATerm), ATerm t)
{
  t = f_121(t);
  {
    ATerm n_18 (ATerm t)
    {
      t = downup_1_0(f_121, t);
      return(t);
    }
    t = SRTS_all(n_18, t);
    t = f_121(t);
  }
  return(t);
}
ATerm WidenScope_0_0 (ATerm t)
{
  ATerm s_28 = NULL,t_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL,y_28 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      v_28 = ATgetArgument(t, 0);
      y_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_28;
  if(match_cons(t, sym_Scope_2))
    {
      s_28 = ATgetArgument(t, 0);
      t_28 = ATgetArgument(t, 1);
      t = v_28;
      if(match_cons(t, sym_Scope_2))
        {
          w_28 = ATgetArgument(t, 0);
          x_28 = ATgetArgument(t, 1);
          {
            ATerm a_39 = t;
            int c_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = (ATerm) ATmakeAppl(sym_Scope_2, s_28, (ATerm) ATmakeAppl(sym_Seq_2, v_28, t_28));
                ;
                LocalPopChoice(c_39);
              }
            else
              {
                t = a_39;
                t = (ATerm) ATmakeAppl(sym_Scope_2, w_28, (ATerm) ATmakeAppl(sym_Seq_2, x_28, y_28));
              }
          }
        }
      else
        {
          t = (ATerm) ATmakeAppl(sym_Scope_2, s_28, (ATerm) ATmakeAppl(sym_Seq_2, v_28, t_28));
        }
    }
  else
    {
      t = v_28;
      if(match_cons(t, sym_Scope_2))
        {
          w_28 = ATgetArgument(t, 0);
          x_28 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, w_28, (ATerm) ATmakeAppl(sym_Seq_2, x_28, y_28));
    }
  return(t);
}
ATerm o_18 (ATerm t)
{
  ATerm f_39 = t;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = f_39;
    }
  return(t);
}
ATerm p_18 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_g_39;
  return(t);
}
ATerm q_18 (ATerm t)
{
  ATerm r_29 = NULL,s_29 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_29 = ATgetFirst((ATermList) t);
      s_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_29, s_29);
  return(t);
}
ATerm r_18 (ATerm t)
{
  ATerm t_29 = NULL,u_29 = NULL,v_29 = NULL,x_29 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_39 = ATgetArgument(t, 0);
      if(match_cons(l_39, sym__2))
        {
          t_29 = ATgetArgument(l_39, 0);
          v_29 = ATgetArgument(l_39, 1);
        }
      else
        _fail(t);
      {
        ATerm m_39 = ATgetArgument(t, 1);
        if(match_cons(m_39, sym__2))
          {
            u_29 = ATgetArgument(m_39, 0);
            x_29 = ATgetArgument(m_39, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_29), t_29), (ATerm) ATinsert(CheckATermList(x_29), v_29));
  return(t);
}
ATerm s_18 (ATerm t)
{
  t = genzip_4_0(t_18, u_18, b_19, _id, t);
  return(t);
}
ATerm t_18 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_g_39;
  return(t);
}
ATerm u_18 (ATerm t)
{
  ATerm y_29 = NULL,z_29 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_29 = ATgetFirst((ATermList) t);
      z_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_29, z_29);
  return(t);
}
ATerm b_19 (ATerm t)
{
  ATerm a_30 = NULL,b_30 = NULL,c_30 = NULL,d_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_39 = ATgetArgument(t, 0);
      if(match_cons(n_39, sym__2))
        {
          a_30 = ATgetArgument(n_39, 0);
          c_30 = ATgetArgument(n_39, 1);
        }
      else
        _fail(t);
      {
        ATerm o_39 = ATgetArgument(t, 1);
        if(match_cons(o_39, sym__2))
          {
            b_30 = ATgetArgument(o_39, 0);
            d_30 = ATgetArgument(o_39, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_30), a_30), (ATerm) ATinsert(CheckATermList(d_30), c_30));
  return(t);
}
ATerm LiftCallArgs_0_0 (ATerm t)
{
  ATerm l_29 = NULL,m_29 = NULL,n_29 = NULL,o_29 = NULL,p_29 = NULL,q_29 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      l_29 = ATgetArgument(t, 0);
      m_29 = ATgetArgument(t, 1);
      n_29 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = n_29;
  t = fetch_1_0(o_18, t);
  t = n_29;
  t = genzip_4_0(p_18, q_18, r_18, LiftPrimArg_0_0, t);
  t = _2_0(concat_0_0, s_18, t);
  if(match_cons(t, sym__2))
    {
      o_29 = ATgetArgument(t, 0);
      {
        ATerm p_39 = ATgetArgument(t, 1);
        if(match_cons(p_39, sym__2))
          {
            p_29 = ATgetArgument(p_39, 0);
            q_29 = ATgetArgument(p_39, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, o_29, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, p_29), (ATerm) ATmakeAppl(sym_CallT_3, l_29, m_29, q_29)));
  return(t);
}
ATerm genzip_4_0 (ATerm p_125 (ATerm), ATerm q_125 (ATerm), ATerm r_125 (ATerm), ATerm s_125 (ATerm), ATerm t)
{
  ATerm e_30 (ATerm t)
  {
    ATerm q_39 = t;
    int r_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_125(t);
        ;
        LocalPopChoice(r_39);
      }
    else
      {
        t = q_39;
        t = q_125(t);
        t = _2_0(s_125, e_30, t);
        t = r_125(t);
      }
    return(t);
  }
  t = e_30(t);
  return(t);
}
ATerm at_end_1_0 (ATerm u_127 (ATerm), ATerm t)
{
  ATerm f_30 (ATerm t)
  {
    ATerm s_39 = t;
    int t_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, f_30, t);
        ;
        LocalPopChoice(t_39);
      }
    else
      {
        t = s_39;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = u_127(t);
      }
    return(t);
  }
  t = f_30(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm z_39 = t;
  int a_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(a_40);
    }
  else
    {
      t = z_39;
      {
        ATerm i_30 = NULL,j_30 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_30 = ATgetFirst((ATermList) t);
            j_30 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = i_30;
        {
          ATerm c_19 (ATerm t)
          {
            t = j_30;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(c_19, t);
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
ATerm v_30 (ATerm p_30, ATerm t)
{
  ATerm r_30 = NULL;
  t = p_30;
  {
    ATerm b_40 = t;
    if((PushChoice() == 0))
      {
        t = Var_1_0(_id, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = b_40;
      }
    t = new_0_0(t);
    r_30 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, r_30), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, p_30), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, r_30)))), (ATerm) ATmakeAppl(sym_Var_1, r_30)));
  }
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm s_30 = NULL,t_30 = NULL;
  s_30 = t;
  if(match_cons(t, sym_Var_1))
    {
      t_30 = ATgetArgument(t, 0);
      {
        ATerm d_40 = t;
        int h_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_30(s_30, t);
            ;
            LocalPopChoice(h_40);
          }
        else
          {
            t = d_40;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_r_35, (ATerm) ATmakeAppl(sym_Var_1, t_30)));
          }
      }
    }
  else
    {
      t = v_30(s_30, t);
    }
  return(t);
}
ATerm Var_1_0 (ATerm s_105 (ATerm), ATerm t)
{
  ATerm w_30 = NULL,x_30 = NULL,y_30 = NULL,z_30 = NULL,j_1 = NULL,k_1 = NULL;
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
  t = s_105(t);
  y_30 = t;
  k_1 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, y_30);
  j_1 = t;
  t = SSLsetAnnotations(j_1, w_30);
  return(t);
}
ATerm d_19 (ATerm t)
{
  ATerm i_40 = t;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_40;
    }
  return(t);
}
ATerm e_19 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_g_39;
  return(t);
}
ATerm g_19 (ATerm t)
{
  ATerm z_5 = NULL,a_6 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_5 = ATgetFirst((ATermList) t);
      a_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_5, a_6);
  return(t);
}
ATerm h_19 (ATerm t)
{
  ATerm b_6 = NULL,c_6 = NULL,e_6 = NULL,f_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_40 = ATgetArgument(t, 0);
      if(match_cons(l_40, sym__2))
        {
          b_6 = ATgetArgument(l_40, 0);
          e_6 = ATgetArgument(l_40, 1);
        }
      else
        _fail(t);
      {
        ATerm m_40 = ATgetArgument(t, 1);
        if(match_cons(m_40, sym__2))
          {
            c_6 = ATgetArgument(m_40, 0);
            f_6 = ATgetArgument(m_40, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_6), b_6), (ATerm) ATinsert(CheckATermList(f_6), e_6));
  return(t);
}
ATerm i_19 (ATerm t)
{
  t = genzip_4_0(j_19, k_19, m_19, _id, t);
  return(t);
}
ATerm j_19 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_g_39;
  return(t);
}
ATerm k_19 (ATerm t)
{
  ATerm g_6 = NULL,h_6 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_6 = ATgetFirst((ATermList) t);
      h_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_6, h_6);
  return(t);
}
ATerm m_19 (ATerm t)
{
  ATerm i_6 = NULL,j_6 = NULL,k_6 = NULL,l_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_40 = ATgetArgument(t, 0);
      if(match_cons(n_40, sym__2))
        {
          i_6 = ATgetArgument(n_40, 0);
          k_6 = ATgetArgument(n_40, 1);
        }
      else
        _fail(t);
      {
        ATerm o_40 = ATgetArgument(t, 1);
        if(match_cons(o_40, sym__2))
          {
            j_6 = ATgetArgument(o_40, 0);
            l_6 = ATgetArgument(o_40, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_6), i_6), (ATerm) ATinsert(CheckATermList(l_6), k_6));
  return(t);
}
ATerm n_19 (ATerm t)
{
  ATerm q_40 = t;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = q_40;
    }
  return(t);
}
ATerm o_19 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_g_39;
  return(t);
}
ATerm r_19 (ATerm t)
{
  ATerm a_7 = NULL,b_7 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_7 = ATgetFirst((ATermList) t);
      b_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_7, b_7);
  return(t);
}
ATerm u_19 (ATerm t)
{
  ATerm d_7 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_40 = ATgetArgument(t, 0);
      if(match_cons(r_40, sym__2))
        {
          d_7 = ATgetArgument(r_40, 0);
          f_7 = ATgetArgument(r_40, 1);
        }
      else
        _fail(t);
      {
        ATerm t_40 = ATgetArgument(t, 1);
        if(match_cons(t_40, sym__2))
          {
            e_7 = ATgetArgument(t_40, 0);
            g_7 = ATgetArgument(t_40, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_7), d_7), (ATerm) ATinsert(CheckATermList(g_7), f_7));
  return(t);
}
ATerm v_19 (ATerm t)
{
  t = genzip_4_0(w_19, y_19, h_20, _id, t);
  return(t);
}
ATerm w_19 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_g_39;
  return(t);
}
ATerm y_19 (ATerm t)
{
  ATerm h_7 = NULL,i_7 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_7 = ATgetFirst((ATermList) t);
      i_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_7, i_7);
  return(t);
}
ATerm h_20 (ATerm t)
{
  ATerm l_7 = NULL,m_7 = NULL,n_7 = NULL,o_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_40 = ATgetArgument(t, 0);
      if(match_cons(u_40, sym__2))
        {
          l_7 = ATgetArgument(u_40, 0);
          n_7 = ATgetArgument(u_40, 1);
        }
      else
        _fail(t);
      {
        ATerm v_40 = ATgetArgument(t, 1);
        if(match_cons(v_40, sym__2))
          {
            m_7 = ATgetArgument(v_40, 0);
            o_7 = ATgetArgument(v_40, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_7), l_7), (ATerm) ATinsert(CheckATermList(o_7), n_7));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm c_33 = NULL,d_33 = NULL,e_33 = NULL,f_33 = NULL;
  d_33 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      e_33 = ATgetArgument(t, 0);
      f_33 = ATgetArgument(t, 1);
      c_33 = ATgetArgument(t, 2);
      {
        ATerm w_5 = NULL,x_5 = NULL,y_5 = NULL;
        t = c_33;
        t = fetch_1_0(d_19, t);
        t = c_33;
        t = genzip_4_0(e_19, g_19, h_19, LiftPrimArg_0_0, t);
        t = _2_0(concat_0_0, i_19, t);
        if(match_cons(t, sym__2))
          {
            w_5 = ATgetArgument(t, 0);
            {
              ATerm w_40 = ATgetArgument(t, 1);
              if(match_cons(w_40, sym__2))
                {
                  x_5 = ATgetArgument(w_40, 0);
                  y_5 = ATgetArgument(w_40, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, w_5, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, x_5), (ATerm) ATmakeAppl(sym_PrimT_3, e_33, f_33, y_5)));
      }
    }
  else
    {
      ATerm x_6 = NULL,y_6 = NULL,z_6 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          e_33 = ATgetArgument(t, 0);
          f_33 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = f_33;
      t = fetch_1_0(n_19, t);
      t = f_33;
      t = genzip_4_0(o_19, r_19, u_19, LiftPrimArg_0_0, t);
      t = _2_0(concat_0_0, v_19, t);
      if(match_cons(t, sym__2))
        {
          x_6 = ATgetArgument(t, 0);
          {
            ATerm x_40 = ATgetArgument(t, 1);
            if(match_cons(x_40, sym__2))
              {
                y_6 = ATgetArgument(x_40, 0);
                z_6 = ATgetArgument(x_40, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, x_6, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, y_6), (ATerm) ATmakeAppl(sym_PrimT_3, e_33, (ATerm)ATempty, z_6)));
    }
  return(t);
}
ATerm downup2_2_0 (ATerm i_121 (ATerm), ATerm j_121 (ATerm), ATerm t)
{
  t = i_121(t);
  {
    ATerm i_20 (ATerm t)
    {
      t = downup2_2_0(i_121, j_121, t);
      return(t);
    }
    t = SRTS_all(i_20, t);
    t = j_121(t);
  }
  return(t);
}
ATerm SDefT_4_0 (ATerm u_111 (ATerm), ATerm v_111 (ATerm), ATerm w_111 (ATerm), ATerm x_111 (ATerm), ATerm t)
{
  ATerm i_33 = NULL,j_33 = NULL,k_33 = NULL,l_33 = NULL,m_33 = NULL,n_33 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL,r_33 = NULL,w_1 = NULL,x_1 = NULL;
  r_33 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      j_33 = ATgetArgument(t, 0);
      k_33 = ATgetArgument(t, 1);
      l_33 = ATgetArgument(t, 2);
      m_33 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_33);
  i_33 = t;
  t = j_33;
  t = u_111(t);
  n_33 = t;
  t = k_33;
  t = v_111(t);
  o_33 = t;
  t = l_33;
  t = w_111(t);
  p_33 = t;
  t = m_33;
  t = x_111(t);
  q_33 = t;
  x_1 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, n_33, o_33, p_33, q_33);
  w_1 = t;
  t = SSLsetAnnotations(w_1, i_33);
  return(t);
}
ATerm SDef_3_0 (ATerm r_111 (ATerm), ATerm s_111 (ATerm), ATerm t_111 (ATerm), ATerm t)
{
  ATerm u_33 = NULL,v_33 = NULL,w_33 = NULL,x_33 = NULL,y_33 = NULL,z_33 = NULL,a_34 = NULL,b_34 = NULL,z_1 = NULL,b_2 = NULL;
  b_34 = t;
  if(match_cons(t, sym_SDef_3))
    {
      v_33 = ATgetArgument(t, 0);
      w_33 = ATgetArgument(t, 1);
      x_33 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_34);
  u_33 = t;
  t = v_33;
  t = r_111(t);
  y_33 = t;
  t = w_33;
  t = s_111(t);
  z_33 = t;
  t = x_33;
  t = t_111(t);
  a_34 = t;
  b_2 = t;
  t = (ATerm) ATmakeAppl(sym_SDef_3, y_33, z_33, a_34);
  z_1 = t;
  t = SSLsetAnnotations(z_1, u_33);
  return(t);
}
ATerm Strategies_1_0 (ATerm u_104 (ATerm), ATerm t)
{
  ATerm e_34 = NULL,f_34 = NULL,g_34 = NULL,h_34 = NULL,h_2 = NULL,k_2 = NULL;
  h_34 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      f_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_34);
  e_34 = t;
  t = f_34;
  t = u_104(t);
  g_34 = t;
  k_2 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, g_34);
  h_2 = t;
  t = SSLsetAnnotations(h_2, e_34);
  return(t);
}
ATerm Specification_1_0 (ATerm z_104 (ATerm), ATerm t)
{
  ATerm k_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL,l_2 = NULL,o_2 = NULL;
  n_34 = t;
  if(match_cons(t, sym_Specification_1))
    {
      l_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_34);
  k_34 = t;
  t = l_34;
  t = z_104(t);
  m_34 = t;
  o_2 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, m_34);
  l_2 = t;
  t = SSLsetAnnotations(l_2, k_34);
  return(t);
}
ATerm u_20 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm apply_to_bodies_1_0 (ATerm e_119 (ATerm), ATerm t)
{
  ATerm l_20 (ATerm t)
  {
    ATerm m_20 (ATerm t)
    {
      ATerm p_20 (ATerm t)
      {
        ATerm v_20 (ATerm t)
        {
          ATerm w_20 (ATerm t)
          {
            ATerm y_40 = t;
            int z_40 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SDef_3_0(_id, _id, e_119, t);
                ;
                LocalPopChoice(z_40);
              }
            else
              {
                t = y_40;
                t = SDefT_4_0(_id, _id, _id, e_119, t);
              }
            return(t);
          }
          t = map_1_0(w_20, t);
          return(t);
        }
        t = Strategies_1_0(v_20, t);
        return(t);
      }
      t = Cons_2_0(p_20, u_20, t);
      return(t);
    }
    t = Cons_2_0(_id, m_20, t);
    return(t);
  }
  t = Specification_1_0(l_20, t);
  return(t);
}
ATerm _2_0 (ATerm b_100 (ATerm), ATerm c_100 (ATerm), ATerm t)
{
  ATerm q_34 = NULL,r_34 = NULL,s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL,q_2 = NULL,r_2 = NULL;
  v_34 = t;
  if(match_cons(t, sym__2))
    {
      r_34 = ATgetArgument(t, 0);
      s_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_34);
  q_34 = t;
  t = r_34;
  t = b_100(t);
  t_34 = t;
  t = s_34;
  t = c_100(t);
  u_34 = t;
  r_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_34, u_34);
  q_2 = t;
  t = SSLsetAnnotations(q_2, q_34);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm d_143 (ATerm), ATerm t)
{
  ATerm y_34 = NULL,z_34 = NULL,a_35 = NULL;
  if(match_cons(t, sym__2))
    {
      y_34 = ATgetArgument(t, 0);
      z_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_34, term_a_41);
  t = open_stream_0_0(t);
  a_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_35, z_34);
  t = d_143(t);
  t = fclose_0_0(t);
  t = z_34;
  return(t);
}
ATerm g_21 (ATerm t)
{
  t = fetch_1_0(l_21, t);
  return(t);
}
ATerm h_21 (ATerm t)
{
  t = WriteToFile_1_0(m_21, t);
  return(t);
}
ATerm l_21 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm m_21 (ATerm t)
{
  ATerm e_35 = NULL,f_35 = NULL,g_35 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_41 = ATgetArgument(t, 0);
      if(match_cons(b_41, sym_Stream_1))
        {
          e_35 = ATgetArgument(b_41, 0);
        }
      else
        _fail(t);
      f_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(e_35, f_35);
  g_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_35);
  return(t);
}
ATerm o_21 (ATerm t)
{
  t = WriteToFile_1_0(r_21, t);
  return(t);
}
ATerm r_21 (ATerm t)
{
  ATerm h_35 = NULL,i_35 = NULL,j_35 = NULL,k_35 = NULL,s_2 = NULL,u_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_41 = ATgetArgument(t, 0);
      if(match_cons(c_41, sym_Stream_1))
        {
          h_35 = ATgetArgument(c_41, 0);
        }
      else
        _fail(t);
      i_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(h_35, i_35);
  j_35 = t;
  u_2 = t;
  t = term_g_41;
  s_2 = t;
  t = SSL_fputc(s_2, j_35);
  k_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_35);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm b_35 = NULL,c_35 = NULL;
  b_35 = t;
  {
    ATerm x_20 (ATerm t)
    {
      ATerm h_41 = t;
      int j_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_20 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((c_35 != NULL) && (c_35 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  c_35 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(y_20, t);
          ;
          LocalPopChoice(j_41);
        }
      else
        {
          t = h_41;
          t = term_l_41;
          if(((c_35 != NULL) && (c_35 != t)))
            _fail(t);
          else
            c_35 = t;
        }
      return(t);
    }
    t = _2_0(x_20, _id, t);
    t = b_35;
    {
      ATerm f_21 (ATerm t)
      {
        ATerm y_7 = NULL;
        y_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_35), y_7);
        return(t);
      }
      t = _2_0(_id, f_21, t);
      {
        ATerm p_41 = t;
        int s_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(g_21, h_21, t);
            ;
            LocalPopChoice(s_41);
          }
        else
          {
            t = p_41;
            t = _2_0(_id, o_21, t);
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
  ATerm l_35 = NULL,m_35 = NULL,n_35 = NULL,o_35 = NULL,p_35 = NULL;
  l_35 = t;
  t = dtime_0_0(t);
  t = l_35;
  t = f_146(t);
  m_35 = t;
  t = dtime_0_0(t);
  n_35 = t;
  t = m_35;
  if(match_cons(t, sym__2))
    {
      o_35 = ATgetArgument(t, 0);
      p_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_35), (ATerm) ATmakeAppl(sym_Runtime_1, n_35)), p_35);
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
        ATerm t_41 = t;
        int u_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(a_36);
            ;
            LocalPopChoice(u_41);
          }
        else
          {
            t = t_41;
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
ATerm s_21 (ATerm t)
{
  ATerm q_36 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      q_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_36;
  return(t);
}
ATerm t_21 (ATerm t)
{
  ATerm u_36 = NULL;
  u_36 = t;
  t = SSL_is_string(u_36);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_42 = ATgetArgument(t, 0);
      ATerm b_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_42 = t;
    int e_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_8 = NULL,s_8 = NULL;
        r_8 = t;
        t = SSL_explode_term(r_8);
        if(match_cons(t, sym__2))
          {
            ATerm f_42 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) f_42) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm g_42 = ATgetArgument(t, 1);
              if(((ATgetType(g_42) == AT_LIST) && !(ATisEmpty(g_42))))
                {
                  s_8 = ATgetFirst((ATermList) g_42);
                  {
                    ATerm h_42 = (ATerm) ATgetNext((ATermList) g_42);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = s_8;
        if(match_cons(t, sym_stderr_0))
          {
            t = s_8;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = s_8;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = s_8;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(e_42);
      }
    else
      {
        t = c_42;
        {
          ATerm i_42 = t;
          int m_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_36 = NULL,m_36 = NULL,n_36 = NULL;
              t = _2_0(s_21, _id, t);
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
              LocalPopChoice(m_42);
            }
          else
            {
              t = i_42;
              {
                ATerm r_36 = NULL,s_36 = NULL,t_36 = NULL;
                t = _2_0(t_21, _id, t);
                if(match_cons(t, sym__2))
                  {
                    r_36 = ATgetArgument(t, 0);
                    s_36 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(r_36, s_36);
                t_36 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, t_36);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm v_36 = NULL,w_36 = NULL,x_36 = NULL;
  ATerm n_42 = t;
  int o_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_36 = NULL;
      y_36 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_36, term_r_42);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(o_42);
    }
  else
    {
      t = n_42;
      {
        ATerm u_8 = NULL,v_2 = NULL,w_2 = NULL,z_2 = NULL,a_3 = NULL;
        u_8 = t;
        t = term_s_42;
        z_2 = t;
        t = term_b_25;
        v_2 = t;
        t = z_2;
        a_3 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, u_8), term_s_42);
        w_2 = t;
        t = SSL_printnl(v_2, w_2);
        t = u_8;
        _fail(t);
      }
    }
  v_36 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(x_36);
  w_36 = t;
  t = v_36;
  t = fclose_0_0(t);
  t = w_36;
  return(t);
}
ATerm fetch_1_0 (ATerm o_127 (ATerm), ATerm t)
{
  ATerm d_37 (ATerm t)
  {
    ATerm t_42 = t;
    int u_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(o_127, _id, t);
        ;
        LocalPopChoice(u_42);
      }
    else
      {
        t = t_42;
        t = Cons_2_0(_id, d_37, t);
      }
    return(t);
  }
  t = d_37(t);
  return(t);
}
ATerm u_21 (ATerm t)
{
  ATerm v_42 = t;
  int w_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(w_42);
    }
  else
    {
      t = v_42;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm z_42 = t;
  int a_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_37 = NULL;
      o_37 = t;
      t = SSL_is_string(o_37);
      ;
      LocalPopChoice(a_43);
    }
  else
    {
      t = z_42;
      {
        ATerm b_43 = t;
        int i_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(u_21, t);
            ;
            LocalPopChoice(i_43);
          }
        else
          {
            t = b_43;
            {
              ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL;
              z_37 = t;
              if(match_cons(t, sym_Path_1))
                {
                  a_38 = ATgetArgument(t, 0);
                  t = a_38;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      a_38 = ATgetArgument(t, 0);
                      t = a_38;
                      {
                        ATerm j_43 = t;
                        int k_43 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm b_3 = NULL,g_3 = NULL;
                            g_3 = t;
                            t = term_n_43;
                            b_3 = t;
                            t = SSL_table_get(b_3, a_38);
                            {
                              ATerm q_43 = t;
                              int r_43 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm t_9 = NULL,h_3 = NULL,j_3 = NULL;
                                  t = eval_config_0_0(t);
                                  t_9 = t;
                                  j_3 = t;
                                  t = term_n_43;
                                  h_3 = t;
                                  t = SSL_table_put(h_3, a_38, t_9);
                                  t = t_9;
                                  ;
                                  LocalPopChoice(r_43);
                                }
                              else
                                {
                                  t = q_43;
                                }
                            }
                            ;
                            LocalPopChoice(k_43);
                          }
                        else
                          {
                            t = j_43;
                            {
                              ATerm k_3 = NULL,m_3 = NULL,n_3 = NULL,o_3 = NULL;
                              t = term_s_43;
                              n_3 = t;
                              t = term_b_25;
                              k_3 = t;
                              t = n_3;
                              o_3 = t;
                              t = (ATerm) ATinsert(ATinsert(ATempty, a_38), term_s_43);
                              m_3 = t;
                              t = SSL_printnl(k_3, m_3);
                              t = a_38;
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm c_11 = NULL,i_11 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          a_38 = ATgetArgument(t, 0);
                          b_38 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = a_38;
                      t = eval_config_0_0(t);
                      c_11 = t;
                      t = b_38;
                      t = eval_config_0_0(t);
                      i_11 = t;
                      t = SSL_strcat(c_11, i_11);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm o_144 (ATerm), ATerm t)
{
  ATerm t_43 = t;
  int u_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_38 = NULL,l_38 = NULL,p_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL;
      j_38 = t;
      t = term_v_43;
      s_3 = t;
      t = term_n_43;
      p_3 = t;
      t = s_3;
      t_3 = t;
      t = term_v_43;
      r_3 = t;
      t = SSL_table_get(p_3, r_3);
      {
        ATerm a_44 = t;
        int b_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_11 = NULL,v_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL;
            t = eval_config_0_0(t);
            s_11 = t;
            x_3 = t;
            t = term_n_43;
            v_3 = t;
            t = x_3;
            y_3 = t;
            t = term_v_43;
            w_3 = t;
            t = SSL_table_put(v_3, w_3, s_11);
            t = s_11;
            ;
            LocalPopChoice(b_44);
          }
        else
          {
            t = a_44;
          }
        l_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_38, term_c_44);
        t = geq_0_0(t);
        t = j_38;
        t = o_144(t);
      }
      ;
      LocalPopChoice(u_43);
    }
  else
    {
      t = t_43;
    }
  return(t);
}
ATerm v_21 (ATerm t)
{
  ATerm n_38 = NULL;
  n_38 = t;
  if(match_string(t, "-k"))
    {
      t = n_38;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = n_38;
    }
  return(t);
}
ATerm w_21 (ATerm t)
{
  ATerm o_38 = NULL,p_38 = NULL,z_3 = NULL,b_4 = NULL,c_4 = NULL,d_4 = NULL;
  o_38 = t;
  t = SSL_string_to_int(o_38);
  p_38 = t;
  c_4 = t;
  t = term_n_43;
  z_3 = t;
  t = c_4;
  d_4 = t;
  t = term_d_44;
  b_4 = t;
  t = SSL_table_put(z_3, b_4, p_38);
  t = o_38;
  return(t);
}
ATerm x_21 (ATerm t)
{
  t = term_f_44;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_21, w_21, x_21, t);
  return(t);
}
ATerm y_21 (ATerm t)
{
  ATerm r_38 = NULL;
  r_38 = t;
  if(match_string(t, "-S"))
    {
      t = r_38;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = r_38;
    }
  return(t);
}
ATerm z_21 (ATerm t)
{
  ATerm e_4 = NULL,f_4 = NULL,g_4 = NULL,h_4 = NULL,i_4 = NULL,k_4 = NULL;
  h_4 = t;
  t = term_n_43;
  e_4 = t;
  t = h_4;
  i_4 = t;
  t = term_v_43;
  f_4 = t;
  t = i_4;
  k_4 = t;
  t = term_g_44;
  g_4 = t;
  t = SSL_table_put(e_4, f_4, g_4);
  t = term_m_44;
  return(t);
}
ATerm a_22 (ATerm t)
{
  t = term_n_44;
  return(t);
}
ATerm b_22 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_22 (ATerm t)
{
  ATerm s_38 = NULL,t_38 = NULL,l_4 = NULL,m_4 = NULL,n_4 = NULL,q_4 = NULL;
  s_38 = t;
  t = SSL_string_to_int(s_38);
  t_38 = t;
  n_4 = t;
  t = term_n_43;
  l_4 = t;
  t = n_4;
  q_4 = t;
  t = term_v_43;
  m_4 = t;
  t = SSL_table_put(l_4, m_4, t_38);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, s_38);
  return(t);
}
ATerm d_22 (ATerm t)
{
  t = term_o_44;
  return(t);
}
ATerm e_22 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_22 (ATerm t)
{
  ATerm r_4 = NULL,s_4 = NULL,u_4 = NULL,v_4 = NULL,w_4 = NULL,x_4 = NULL;
  v_4 = t;
  t = term_n_43;
  r_4 = t;
  t = v_4;
  w_4 = t;
  t = term_p_44;
  s_4 = t;
  t = w_4;
  x_4 = t;
  t = term_a_25;
  u_4 = t;
  t = SSL_table_put(r_4, s_4, u_4);
  t = term_q_44;
  return(t);
}
ATerm g_22 (ATerm t)
{
  t = term_r_44;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm s_44 = t;
  int t_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_21, z_21, a_22, t);
      ;
      LocalPopChoice(t_44);
    }
  else
    {
      t = s_44;
      {
        ATerm u_44 = t;
        int z_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(b_22, c_22, d_22, t);
            ;
            LocalPopChoice(z_44);
          }
        else
          {
            t = u_44;
            t = Option_3_0(e_22, f_22, g_22, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm w_38 = NULL,x_38 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_38 = NULL;
      t = term_a_25;
      t = d_0(t);
      y_38 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_45, term_b_45, y_38);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm b_39 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_38 = ATgetFirst((ATermList) t);
          x_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_38;
      t = a_0(t);
      t = term_a_25;
      t = c_0(t);
      b_39 = t;
      t = (ATerm) ATinsert(CheckATermList(x_38), b_39);
    }
  return(t);
}
ATerm h_22 (ATerm t)
{
  ATerm d_39 = NULL;
  d_39 = t;
  if(match_string(t, "-o"))
    {
      t = d_39;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = d_39;
    }
  return(t);
}
ATerm m_22 (ATerm t)
{
  ATerm e_39 = NULL,y_4 = NULL,a_5 = NULL,d_5 = NULL,g_5 = NULL;
  e_39 = t;
  d_5 = t;
  t = term_n_43;
  y_4 = t;
  t = d_5;
  g_5 = t;
  t = term_c_45;
  a_5 = t;
  t = SSL_table_put(y_4, a_5, e_39);
  t = (ATerm) ATmakeAppl(sym_Output_1, e_39);
  return(t);
}
ATerm n_22 (ATerm t)
{
  t = term_h_45;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_22, m_22, n_22, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL,h_5 = NULL,i_5 = NULL;
  if(match_cons(t, sym__3))
    {
      h_39 = ATgetArgument(t, 0);
      i_39 = ATgetArgument(t, 1);
      j_39 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_39, i_39);
  {
    ATerm i_45 = t;
    int j_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_45 = ATgetArgument(t, 0);
            ATerm p_45 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(h_39, i_39);
        ;
        LocalPopChoice(j_45);
      }
    else
      {
        t = i_45;
        t = (ATerm) ATempty;
      }
    k_39 = t;
    i_5 = t;
    t = (ATerm) ATinsert(CheckATermList(k_39), j_39);
    h_5 = t;
    t = SSL_table_put(h_39, i_39, h_5);
    t = (ATerm) ATmakeAppl(sym__3, h_39, i_39, j_39);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm u_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_39 = NULL;
      t = term_a_25;
      t = l_0(t);
      y_39 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_45, term_b_45, y_39);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm c_40 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_39 = ATgetFirst((ATermList) t);
          v_39 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_39;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_39 = ATgetFirst((ATermList) t);
          x_39 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_39;
      t = i_0(t);
      t = w_39;
      t = k_0(t);
      c_40 = t;
      t = (ATerm) ATinsert(CheckATermList(x_39), c_40);
    }
  return(t);
}
ATerm o_22 (ATerm t)
{
  ATerm e_40 = NULL;
  e_40 = t;
  if(match_string(t, "-i"))
    {
      t = e_40;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = e_40;
    }
  return(t);
}
ATerm p_22 (ATerm t)
{
  ATerm f_40 = NULL,k_5 = NULL,l_5 = NULL,m_5 = NULL,n_5 = NULL;
  f_40 = t;
  m_5 = t;
  t = term_n_43;
  k_5 = t;
  t = m_5;
  n_5 = t;
  t = term_q_45;
  l_5 = t;
  t = SSL_table_put(k_5, l_5, f_40);
  t = (ATerm) ATmakeAppl(sym_Input_1, f_40);
  return(t);
}
ATerm q_22 (ATerm t)
{
  t = term_r_45;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_22, p_22, q_22, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm g_40 = NULL,s_5 = NULL,o_5 = NULL,p_5 = NULL,q_5 = NULL,r_5 = NULL,t_5 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_25;
  t = whoami_0_0(t);
  g_40 = t;
  q_5 = t;
  t = term_b_25;
  o_5 = t;
  t = q_5;
  r_5 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_s_45), g_40);
  p_5 = t;
  t = SSL_printnl(o_5, p_5);
  t_5 = t;
  t = term_e_25;
  s_5 = t;
  t = SSL_exit(s_5);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm u_5 = NULL,v_5 = NULL,m_6 = NULL,n_6 = NULL;
  t = term_x_45;
  m_6 = t;
  t = term_n_43;
  u_5 = t;
  t = m_6;
  n_6 = t;
  t = term_x_45;
  v_5 = t;
  t = SSL_table_get(u_5, v_5);
  {
    ATerm y_45 = t;
    int z_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_12 = NULL,o_6 = NULL,p_6 = NULL,q_6 = NULL,r_6 = NULL;
        t = eval_config_0_0(t);
        q_12 = t;
        q_6 = t;
        t = term_n_43;
        o_6 = t;
        t = q_6;
        r_6 = t;
        t = term_x_45;
        p_6 = t;
        t = SSL_table_put(o_6, p_6, q_12);
        t = q_12;
        ;
        LocalPopChoice(z_45);
      }
    else
      {
        t = y_45;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm u_131 (ATerm), ATerm v_131 (ATerm), ATerm t)
{
  ATerm a_46 = t;
  int b_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = u_131(t);
      ;
      LocalPopChoice(b_46);
    }
  else
    {
      t = a_46;
      {
        ATerm j_40 = NULL,k_40 = NULL,p_40 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_40 = ATgetFirst((ATermList) t);
            k_40 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = k_40;
        t = foldr_2_0(u_131, v_131, t);
        p_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_40, p_40);
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
ATerm r_22 (ATerm t)
{
  t = term_g_44;
  return(t);
}
ATerm s_22 (ATerm t)
{
  ATerm y_12 = NULL,z_12 = NULL;
  if(match_cons(t, sym__2))
    {
      y_12 = ATgetArgument(t, 0);
      z_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_46 = t;
    int d_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(y_12, z_12);
        ;
        LocalPopChoice(d_46);
      }
    else
      {
        t = c_46;
        t = SSL_addr(y_12, z_12);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm s_40 = NULL,u_12 = NULL,v_12 = NULL;
  t = times_0_0(t);
  u_12 = t;
  t = SSL_explode_term(u_12);
  if(match_cons(t, sym__2))
    {
      ATerm e_46 = ATgetArgument(t, 0);
      v_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_12;
  t = foldr_2_0(r_22, s_22, t);
  s_40 = t;
  t = SSL_TicksToSeconds(s_40);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm d_41 = NULL,e_41 = NULL,f_41 = NULL;
  d_41 = t;
  if(match_cons(t, sym__2))
    {
      e_41 = ATgetArgument(t, 0);
      f_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_46 = t;
    int g_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_41;
        if((e_41 != t))
          {
            _fail(t);
          }
        t = d_41;
        ;
        LocalPopChoice(g_46);
      }
    else
      {
        t = f_46;
        t = d_41;
        {
          ATerm h_46 = t;
          int i_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(e_41, f_41);
              ;
              LocalPopChoice(i_46);
            }
          else
            {
              t = h_46;
              t = SSL_gtr(e_41, f_41);
            }
          t = (ATerm) ATmakeAppl(sym__2, e_41, f_41);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm n_144 (ATerm), ATerm t)
{
  ATerm j_46 = t;
  int k_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_41 = NULL,k_41 = NULL,s_6 = NULL,t_6 = NULL,u_6 = NULL,v_6 = NULL;
      i_41 = t;
      t = term_v_43;
      u_6 = t;
      t = term_n_43;
      s_6 = t;
      t = u_6;
      v_6 = t;
      t = term_v_43;
      t_6 = t;
      t = SSL_table_get(s_6, t_6);
      {
        ATerm l_46 = t;
        int m_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_14 = NULL,w_6 = NULL,c_7 = NULL,j_7 = NULL,k_7 = NULL;
            t = eval_config_0_0(t);
            r_14 = t;
            j_7 = t;
            t = term_n_43;
            w_6 = t;
            t = j_7;
            k_7 = t;
            t = term_v_43;
            c_7 = t;
            t = SSL_table_put(w_6, c_7, r_14);
            t = r_14;
            ;
            LocalPopChoice(m_46);
          }
        else
          {
            t = l_46;
          }
        k_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_41, term_e_25);
        t = geq_0_0(t);
        t = i_41;
        t = n_144(t);
      }
      ;
      LocalPopChoice(k_46);
    }
  else
    {
      t = j_46;
    }
  return(t);
}
ATerm t_22 (ATerm t)
{
  ATerm m_41 = NULL,n_41 = NULL,q_7 = NULL,r_7 = NULL,s_7 = NULL,t_7 = NULL;
  t = run_time_0_0(t);
  m_41 = t;
  t = term_a_25;
  t = whoami_0_0(t);
  n_41 = t;
  s_7 = t;
  t = term_b_25;
  q_7 = t;
  t = s_7;
  t_7 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_46), m_41), term_n_46), n_41);
  r_7 = t;
  t = SSL_printnl(q_7, r_7);
  t = (ATerm) ATmakeAppl(sym__2, term_b_25, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_46), m_41), term_n_46), n_41));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(t_22, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm u_7 = NULL,v_7 = NULL;
  t = report_run_time_0_0(t);
  v_7 = t;
  t = term_g_44;
  u_7 = t;
  t = SSL_exit(u_7);
  return(t);
}
ATerm u_22 (ATerm t)
{
  ATerm p_46 = t;
  int q_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
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
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(s_46);
          }
        else
          {
            t = r_46;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm d_147 (ATerm), ATerm t)
{
  ATerm t_46 = t;
  int u_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_7 = NULL,x_7 = NULL,z_7 = NULL,a_8 = NULL;
      t = term_v_46;
      z_7 = t;
      t = term_n_43;
      w_7 = t;
      t = z_7;
      a_8 = t;
      t = term_v_46;
      x_7 = t;
      t = SSL_table_get(w_7, x_7);
      {
        ATerm w_46 = t;
        int x_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_15 = NULL,b_8 = NULL,c_8 = NULL,d_8 = NULL,f_8 = NULL;
            t = eval_config_0_0(t);
            l_15 = t;
            d_8 = t;
            t = term_n_43;
            b_8 = t;
            t = d_8;
            f_8 = t;
            t = term_v_46;
            c_8 = t;
            t = SSL_table_put(b_8, c_8, l_15);
            t = l_15;
            ;
            LocalPopChoice(x_46);
          }
        else
          {
            t = w_46;
          }
      }
      ;
      LocalPopChoice(u_46);
    }
  else
    {
      t = t_46;
      t = fetch_1_0(u_22, t);
    }
  t = d_147(t);
  return(t);
}
ATerm map_1_0 (ATerm e_127 (ATerm), ATerm t)
{
  ATerm o_41 (ATerm t)
  {
    ATerm y_46 = t;
    int z_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(z_46);
      }
    else
      {
        t = y_46;
        t = Cons_2_0(e_127, o_41, t);
      }
    return(t);
  }
  t = o_41(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm q_41 = NULL,r_41 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_41 = ATgetFirst((ATermList) t);
      r_41 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm v_41 = NULL,w_41 = NULL;
        t = r_41;
        t = g_0(t);
        v_41 = t;
        t = q_41;
        t = e_0(t);
        w_41 = t;
        t = r_41;
        {
          ATerm v_22 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(v_41), w_41);
            return(t);
          }
          t = reverse_acc_2_0(e_0, v_22, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_a_25;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm y_118 (ATerm), ATerm t)
{
  ATerm x_41 = NULL,y_41 = NULL,z_41 = NULL,d_42 = NULL,g_8 = NULL,h_8 = NULL;
  d_42 = t;
  if(match_cons(t, sym_Program_1))
    {
      y_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_42);
  x_41 = t;
  t = y_41;
  t = y_118(t);
  z_41 = t;
  h_8 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, z_41);
  g_8 = t;
  t = SSLsetAnnotations(g_8, x_41);
  return(t);
}
ATerm w_22 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm x_22 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_22 (ATerm t)
{
  ATerm j_42 = NULL;
  j_42 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_42), term_a_47);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL;
  ATerm b_47 = t;
  int c_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_8 = NULL,j_8 = NULL,k_8 = NULL,n_8 = NULL;
      t = term_x_45;
      k_8 = t;
      t = term_n_43;
      i_8 = t;
      t = k_8;
      n_8 = t;
      t = term_x_45;
      j_8 = t;
      t = SSL_table_get(i_8, j_8);
      {
        ATerm d_47 = t;
        int e_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_15 = NULL,o_8 = NULL,p_8 = NULL,q_8 = NULL,v_8 = NULL;
            t = eval_config_0_0(t);
            v_15 = t;
            q_8 = t;
            t = term_n_43;
            o_8 = t;
            t = q_8;
            v_8 = t;
            t = term_x_45;
            p_8 = t;
            t = SSL_table_put(o_8, p_8, v_15);
            t = v_15;
            ;
            LocalPopChoice(e_47);
          }
        else
          {
            t = d_47;
          }
      }
      ;
      LocalPopChoice(c_47);
    }
  else
    {
      t = b_47;
      t = fetch_1_0(w_22, t);
    }
  t = term_f_47;
  t = echo_0_0(t);
  y_8 = t;
  t = term_a_45;
  w_8 = t;
  t = y_8;
  z_8 = t;
  t = term_b_45;
  x_8 = t;
  t = SSL_table_get(w_8, x_8);
  t = reverse_acc_2_0(_id, x_22, t);
  t = map_1_0(y_22, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm z_118 (ATerm), ATerm t)
{
  ATerm k_42 = NULL,l_42 = NULL,p_42 = NULL,q_42 = NULL,a_9 = NULL,b_9 = NULL;
  q_42 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      l_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_42);
  k_42 = t;
  t = l_42;
  t = z_118(t);
  p_42 = t;
  b_9 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, p_42);
  a_9 = t;
  t = SSLsetAnnotations(a_9, k_42);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm x_42 = NULL,y_42 = NULL,c_9 = NULL,d_9 = NULL;
  x_42 = t;
  {
    ATerm g_47 = t;
    int h_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = x_42;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm i_47 = ATgetFirst((ATermList) t);
                ATerm j_47 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = x_42;
          }
        ;
        LocalPopChoice(h_47);
      }
    else
      {
        t = g_47;
        t = (ATerm) ATinsert(ATempty, x_42);
      }
    y_42 = t;
    d_9 = t;
    t = term_l_41;
    c_9 = t;
    t = SSL_printnl(c_9, y_42);
    t = x_42;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm e_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL;
  t = term_x_45;
  g_9 = t;
  t = term_n_43;
  e_9 = t;
  t = g_9;
  h_9 = t;
  t = term_x_45;
  f_9 = t;
  t = SSL_table_get(e_9, f_9);
  {
    ATerm k_47 = t;
    int l_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_16 = NULL,i_9 = NULL,j_9 = NULL,k_9 = NULL,l_9 = NULL;
        t = eval_config_0_0(t);
        f_16 = t;
        k_9 = t;
        t = term_n_43;
        i_9 = t;
        t = k_9;
        l_9 = t;
        t = term_x_45;
        j_9 = t;
        t = SSL_table_put(i_9, j_9, f_16);
        t = f_16;
        ;
        LocalPopChoice(l_47);
      }
    else
      {
        t = k_47;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm z_22 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_23 (ATerm t)
{
  ATerm n_9 = NULL,o_9 = NULL,p_9 = NULL,r_9 = NULL,s_9 = NULL,u_9 = NULL;
  r_9 = t;
  t = term_n_43;
  n_9 = t;
  t = r_9;
  s_9 = t;
  t = term_m_47;
  o_9 = t;
  t = s_9;
  u_9 = t;
  t = term_a_25;
  p_9 = t;
  t = SSL_table_put(n_9, o_9, p_9);
  t = term_n_47;
  return(t);
}
ATerm b_23 (ATerm t)
{
  t = term_o_47;
  return(t);
}
ATerm c_23 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_23 (ATerm t)
{
  ATerm v_9 = NULL,x_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL,i_10 = NULL,j_10 = NULL,l_10 = NULL,m_10 = NULL;
  a_10 = t;
  t = term_n_43;
  v_9 = t;
  t = a_10;
  b_10 = t;
  t = term_m_47;
  x_9 = t;
  t = b_10;
  c_10 = t;
  t = term_a_25;
  z_9 = t;
  t = SSL_table_put(v_9, x_9, z_9);
  j_10 = t;
  t = term_n_43;
  d_10 = t;
  t = j_10;
  l_10 = t;
  t = term_p_47;
  e_10 = t;
  t = l_10;
  m_10 = t;
  t = term_a_25;
  i_10 = t;
  t = SSL_table_put(d_10, e_10, i_10);
  t = term_q_47;
  return(t);
}
ATerm i_23 (ATerm t)
{
  t = term_r_47;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm s_47 = t;
  int t_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_22, a_23, b_23, t);
      ;
      LocalPopChoice(t_47);
    }
  else
    {
      t = s_47;
      t = Option_3_0(c_23, f_23, i_23, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm q_104 (ATerm), ATerm r_104 (ATerm), ATerm t)
{
  ATerm c_43 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL,g_43 = NULL,h_43 = NULL,r_10 = NULL,s_10 = NULL;
  h_43 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_43 = ATgetFirst((ATermList) t);
      e_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_43);
  c_43 = t;
  t = d_43;
  t = q_104(t);
  f_43 = t;
  t = e_43;
  t = r_104(t);
  g_43 = t;
  s_10 = t;
  t = (ATerm) ATinsert(CheckATermList(g_43), f_43);
  r_10 = t;
  t = SSLsetAnnotations(r_10, c_43);
  return(t);
}
ATerm l_23 (ATerm t)
{
  ATerm m_43 = NULL,t_10 = NULL,u_10 = NULL,j_11 = NULL,l_11 = NULL;
  m_43 = t;
  j_11 = t;
  t = term_n_43;
  t_10 = t;
  t = j_11;
  l_11 = t;
  t = term_x_45;
  u_10 = t;
  t = SSL_table_put(t_10, u_10, m_43);
  t = (ATerm) ATmakeAppl(sym_Program_1, m_43);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm g_149 (ATerm), ATerm t)
{
  ATerm l_43 = NULL;
  l_43 = t;
  {
    ATerm u_47 = t;
    int v_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_w_47;
        t = g_149(t);
        ;
        LocalPopChoice(v_47);
      }
    else
      {
        t = u_47;
      }
    t = l_43;
    {
      ATerm m_23 (ATerm t)
      {
        ATerm x_47 = t;
        int y_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_47 = t;
            int a_48 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(a_48);
              }
            else
              {
                t = z_47;
                t = g_149(t);
                t = Cons_2_0(_id, m_23, t);
              }
            ;
            LocalPopChoice(y_47);
          }
        else
          {
            t = x_47;
            {
              ATerm o_43 = NULL,p_43 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  o_43 = ATgetFirst((ATermList) t);
                  p_43 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(p_43), (ATerm) ATmakeAppl(sym_Undefined_1, o_43));
            }
          }
        return(t);
      }
      t = Cons_2_0(l_23, m_23, t);
    }
  }
  return(t);
}
ATerm o_23 (ATerm t)
{
  ATerm z_43 = NULL;
  z_43 = t;
  if(match_string(t, "--help"))
    {
      t = z_43;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = z_43;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = z_43;
        }
    }
  return(t);
}
ATerm p_23 (ATerm t)
{
  ATerm a_12 = NULL,b_12 = NULL,c_12 = NULL,g_12 = NULL,h_12 = NULL,j_12 = NULL;
  g_12 = t;
  t = term_n_43;
  a_12 = t;
  t = g_12;
  h_12 = t;
  t = term_v_46;
  b_12 = t;
  t = h_12;
  j_12 = t;
  t = term_a_25;
  c_12 = t;
  t = SSL_table_put(a_12, b_12, c_12);
  t = term_b_48;
  return(t);
}
ATerm q_23 (ATerm t)
{
  t = term_c_48;
  return(t);
}
ATerm r_23 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm f_149 (ATerm), ATerm t)
{
  ATerm w_43 = NULL,x_43 = NULL,y_43 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL,u_11 = NULL,z_11 = NULL,h_14 = NULL,i_14 = NULL;
  w_43 = t;
  r_11 = t;
  t = term_a_45;
  o_11 = t;
  t = r_11;
  u_11 = t;
  t = term_b_45;
  p_11 = t;
  t = u_11;
  z_11 = t;
  t = (ATerm) ATempty;
  q_11 = t;
  t = SSL_table_put(o_11, p_11, q_11);
  t = w_43;
  {
    ATerm n_23 (ATerm t)
    {
      ATerm d_48 = t;
      int e_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_149(t);
          ;
          LocalPopChoice(e_48);
        }
      else
        {
          t = d_48;
          {
            ATerm f_48 = t;
            int g_48 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(o_23, p_23, q_23, t);
                ;
                LocalPopChoice(g_48);
              }
            else
              {
                t = f_48;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(n_23, t);
    {
      ATerm h_48 = t;
      int i_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_44 = NULL;
          e_44 = t;
          {
            ATerm j_48 = t;
            int k_48 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_13 = NULL,j_13 = NULL;
                t = e_44;
                {
                  ATerm l_48 = t;
                  int m_48 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm k_12 = NULL,l_12 = NULL,o_12 = NULL,r_12 = NULL;
                      t = term_v_46;
                      o_12 = t;
                      t = term_n_43;
                      k_12 = t;
                      t = o_12;
                      r_12 = t;
                      t = term_v_46;
                      l_12 = t;
                      t = SSL_table_get(k_12, l_12);
                      {
                        ATerm n_48 = t;
                        int o_48 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm u_16 = NULL,s_12 = NULL,w_12 = NULL,x_12 = NULL,f_13 = NULL;
                            t = eval_config_0_0(t);
                            u_16 = t;
                            x_12 = t;
                            t = term_n_43;
                            s_12 = t;
                            t = x_12;
                            f_13 = t;
                            t = term_v_46;
                            w_12 = t;
                            t = SSL_table_put(s_12, w_12, u_16);
                            t = u_16;
                            ;
                            LocalPopChoice(o_48);
                          }
                        else
                          {
                            t = n_48;
                          }
                      }
                      ;
                      LocalPopChoice(m_48);
                    }
                  else
                    {
                      t = l_48;
                      t = fetch_1_0(r_23, t);
                    }
                  t = e_44;
                  t = default_system_usage_0_0(t);
                  j_13 = t;
                  t = term_g_44;
                  h_13 = t;
                  t = SSL_exit(h_13);
                }
                ;
                LocalPopChoice(k_48);
              }
            else
              {
                t = j_48;
                {
                  ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,t_13 = NULL,v_13 = NULL;
                  t = term_m_47;
                  m_13 = t;
                  t = term_n_43;
                  k_13 = t;
                  t = m_13;
                  n_13 = t;
                  t = term_m_47;
                  l_13 = t;
                  t = SSL_table_get(k_13, l_13);
                  {
                    ATerm p_48 = t;
                    int q_48 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm b_17 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL;
                        t = eval_config_0_0(t);
                        b_17 = t;
                        r_13 = t;
                        t = term_n_43;
                        p_13 = t;
                        t = r_13;
                        s_13 = t;
                        t = term_m_47;
                        q_13 = t;
                        t = SSL_table_put(p_13, q_13, b_17);
                        t = b_17;
                        ;
                        LocalPopChoice(q_48);
                      }
                    else
                      {
                        t = p_48;
                      }
                    t = e_44;
                    t = default_system_about_0_0(t);
                    v_13 = t;
                    t = term_g_44;
                    t_13 = t;
                    t = SSL_exit(t_13);
                  }
                }
              }
          }
          ;
          LocalPopChoice(i_48);
        }
      else
        {
          t = h_48;
          {
            ATerm r_48 = t;
            int s_48 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_13 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL;
                ATerm s_23 (ATerm t)
                {
                  ATerm t_23 (ATerm t)
                  {
                    if(((x_43 != NULL) && (x_43 != t)))
                      _fail(t);
                    else
                      x_43 = t;
                    return(t);
                  }
                  t = Undefined_1_0(t_23, t);
                  return(t);
                }
                t = fetch_1_0(s_23, t);
                d_14 = t;
                t = term_b_25;
                w_13 = t;
                t = d_14;
                e_14 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_43)), term_t_48);
                c_14 = t;
                t = SSL_printnl(w_13, c_14);
                t = (ATerm) ATmakeAppl(sym__2, term_b_25, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_43)), term_t_48));
                t = default_system_usage_0_0(t);
                g_14 = t;
                t = term_e_25;
                f_14 = t;
                t = SSL_exit(f_14);
                ;
                LocalPopChoice(s_48);
              }
            else
              {
                t = r_48;
              }
          }
        }
      y_43 = t;
      i_14 = t;
      t = term_a_45;
      h_14 = t;
      t = SSL_table_destroy(h_14);
      t = y_43;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm f_147 (ATerm), ATerm g_147 (ATerm), ATerm h_147 (ATerm), ATerm i_147 (ATerm), ATerm t)
{
  ATerm h_44 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL;
  t = parse_options_1_0(f_147, t);
  h_44 = t;
  k_14 = t;
  t = term_u_48;
  j_14 = t;
  t = SSL_table_create(j_14);
  p_14 = t;
  t = term_u_48;
  l_14 = t;
  t = p_14;
  q_14 = t;
  t = term_v_48;
  o_14 = t;
  t = SSL_table_put(l_14, o_14, h_44);
  t = h_44;
  t = h_147(t);
  {
    ATerm w_48 = t;
    int x_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(g_147, t);
        ;
        LocalPopChoice(x_48);
      }
    else
      {
        t = w_48;
        {
          ATerm y_48 = t;
          int z_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_147(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(z_48);
            }
          else
            {
              t = y_48;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm v_23 (ATerm t)
{
  t = if_verbose2_1_0(e_24, t);
  return(t);
}
ATerm x_23 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_23 (ATerm t)
{
  ATerm t_14 = NULL,y_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL;
  a_15 = t;
  t = term_n_43;
  t_14 = t;
  t = a_15;
  b_15 = t;
  t = term_a_49;
  y_14 = t;
  t = b_15;
  c_15 = t;
  t = term_a_25;
  z_14 = t;
  t = SSL_table_put(t_14, y_14, z_14);
  t = term_b_49;
  return(t);
}
ATerm c_24 (ATerm t)
{
  t = term_c_49;
  return(t);
}
ATerm e_24 (ATerm t)
{
  ATerm i_44 = NULL,j_44 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL,h_15 = NULL,y_15 = NULL,b_16 = NULL,d_16 = NULL,g_16 = NULL;
  i_44 = t;
  t = term_x_45;
  f_15 = t;
  t = term_n_43;
  d_15 = t;
  t = f_15;
  h_15 = t;
  t = term_x_45;
  e_15 = t;
  t = SSL_table_get(d_15, e_15);
  {
    ATerm d_49 = t;
    int e_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_17 = NULL,j_15 = NULL,p_15 = NULL,r_15 = NULL,t_15 = NULL;
        t = eval_config_0_0(t);
        f_17 = t;
        r_15 = t;
        t = term_n_43;
        j_15 = t;
        t = r_15;
        t_15 = t;
        t = term_x_45;
        p_15 = t;
        t = SSL_table_put(j_15, p_15, f_17);
        t = f_17;
        ;
        LocalPopChoice(e_49);
      }
    else
      {
        t = d_49;
      }
    j_44 = t;
    d_16 = t;
    t = term_b_25;
    y_15 = t;
    t = d_16;
    g_16 = t;
    t = (ATerm) ATinsert(ATempty, j_44);
    b_16 = t;
    t = SSL_printnl(y_15, b_16);
    t = i_44;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm o_146 (ATerm), ATerm p_146 (ATerm), ATerm q_146 (ATerm), ATerm t)
{
  ATerm u_23 (ATerm t)
  {
    ATerm f_49 = t;
    int g_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_146(t);
        ;
        LocalPopChoice(g_49);
      }
    else
      {
        t = f_49;
        {
          ATerm h_49 = t;
          int i_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
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
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(k_49);
                  }
                else
                  {
                    t = j_49;
                    {
                      ATerm l_49 = t;
                      int m_49 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(x_23, y_23, c_24, t);
                          ;
                          LocalPopChoice(m_49);
                        }
                      else
                        {
                          t = l_49;
                          {
                            ATerm n_49 = t;
                            int o_49 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(o_49);
                              }
                            else
                              {
                                t = n_49;
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
  ATerm w_23 (ATerm t)
  {
    ATerm k_44 = NULL,l_44 = NULL,i_17 = NULL;
    k_44 = t;
    {
      ATerm p_49 = t;
      int q_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_24 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((l_44 != NULL) && (l_44 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  l_44 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(f_24, t);
          ;
          LocalPopChoice(q_49);
        }
      else
        {
          t = p_49;
          t = term_r_49;
          l_44 = t;
        }
      t = not_null(l_44);
      t = ReadFromFile_0_0(t);
      i_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_44, i_17);
      t = apply_strategy_1_0(o_146, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(u_23, q_146, v_23, w_23, t);
  return(t);
}
ATerm g_24 (ATerm t)
{
  t = _2_0(_id, h_24, t);
  return(t);
}
ATerm h_24 (ATerm t)
{
  t = apply_to_bodies_1_0(i_24, t);
  return(t);
}
ATerm i_24 (ATerm t)
{
  t = downup2_2_0(m_24, o_24, t);
  t = downup_1_0(r_24, t);
  t = downup_1_0(w_24, t);
  t = topdown_1_0(z_24, t);
  return(t);
}
ATerm m_24 (ATerm t)
{
  t = repeat_1_0(p_24, t);
  return(t);
}
ATerm o_24 (ATerm t)
{
  t = repeat_1_0(q_24, t);
  return(t);
}
ATerm p_24 (ATerm t)
{
  ATerm s_49 = t;
  int t_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Simplify_0_0(t);
      ;
      LocalPopChoice(t_49);
    }
  else
    {
      t = s_49;
      {
        ATerm u_49 = t;
        int v_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_44 = NULL,w_44 = NULL,x_44 = NULL,y_44 = NULL;
            if(match_cons(t, sym_Seq_2))
              {
                v_44 = ATgetArgument(t, 0);
                w_44 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = w_44;
            if(match_cons(t, sym_Let_2))
              {
                x_44 = ATgetArgument(t, 0);
                y_44 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Let_2, x_44, (ATerm) ATmakeAppl(sym_Seq_2, v_44, y_44));
            ;
            LocalPopChoice(v_49);
          }
        else
          {
            t = u_49;
            {
              ATerm w_49 = t;
              int x_49 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_17 = NULL,z_17 = NULL,b_18 = NULL,m_18 = NULL;
                  if(match_cons(t, sym_Scope_2))
                    {
                      x_17 = ATgetArgument(t, 0);
                      {
                        ATerm y_49 = ATgetArgument(t, 1);
                        if(match_cons(y_49, sym_Scope_2))
                          {
                            z_17 = ATgetArgument(y_49, 0);
                            b_18 = ATgetArgument(y_49, 1);
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, x_17, z_17);
                  t = conc_0_0(t);
                  m_18 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, m_18, b_18);
                  ;
                  LocalPopChoice(x_49);
                }
              else
                {
                  t = w_49;
                  {
                    ATerm z_49 = t;
                    int a_50 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = WhereSavesCurrentTerm_0_0(t);
                        ;
                        LocalPopChoice(a_50);
                      }
                    else
                      {
                        t = z_49;
                        {
                          ATerm b_50 = t;
                          int c_50 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = TestSavesCurrentTerm_0_0(t);
                              ;
                              LocalPopChoice(c_50);
                            }
                          else
                            {
                              t = b_50;
                              {
                                ATerm d_50 = t;
                                int e_50 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = LiftPrimArgs_0_0(t);
                                    ;
                                    LocalPopChoice(e_50);
                                  }
                                else
                                  {
                                    t = d_50;
                                    t = LiftCallArgs_0_0(t);
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
ATerm q_24 (ATerm t)
{
  ATerm f_50 = t;
  int g_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Simplify_0_0(t);
      ;
      LocalPopChoice(g_50);
    }
  else
    {
      t = f_50;
      {
        ATerm h_50 = t;
        int i_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_45 = NULL,e_45 = NULL,f_45 = NULL,g_45 = NULL;
            if(match_cons(t, sym_Seq_2))
              {
                d_45 = ATgetArgument(t, 0);
                e_45 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = e_45;
            if(match_cons(t, sym_Let_2))
              {
                f_45 = ATgetArgument(t, 0);
                g_45 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Let_2, f_45, (ATerm) ATmakeAppl(sym_Seq_2, d_45, g_45));
            ;
            LocalPopChoice(i_50);
          }
        else
          {
            t = h_50;
            {
              ATerm j_50 = t;
              int k_50 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_18 = NULL,z_18 = NULL,a_19 = NULL,f_19 = NULL;
                  if(match_cons(t, sym_Scope_2))
                    {
                      v_18 = ATgetArgument(t, 0);
                      {
                        ATerm l_50 = ATgetArgument(t, 1);
                        if(match_cons(l_50, sym_Scope_2))
                          {
                            z_18 = ATgetArgument(l_50, 0);
                            a_19 = ATgetArgument(l_50, 1);
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, v_18, z_18);
                  t = conc_0_0(t);
                  f_19 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, f_19, a_19);
                  ;
                  LocalPopChoice(k_50);
                }
              else
                {
                  t = j_50;
                  {
                    ATerm m_50 = t;
                    int n_50 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = WhereSavesCurrentTerm_0_0(t);
                        ;
                        LocalPopChoice(n_50);
                      }
                    else
                      {
                        t = m_50;
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
ATerm r_24 (ATerm t)
{
  t = repeat_1_0(s_24, t);
  return(t);
}
ATerm s_24 (ATerm t)
{
  ATerm o_50 = t;
  int p_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Simplify_0_0(t);
      ;
      LocalPopChoice(p_50);
    }
  else
    {
      t = o_50;
      {
        ATerm q_50 = t;
        int r_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_45 = NULL,m_45 = NULL,n_45 = NULL,o_45 = NULL;
            if(match_cons(t, sym_Seq_2))
              {
                l_45 = ATgetArgument(t, 0);
                m_45 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = m_45;
            if(match_cons(t, sym_Let_2))
              {
                n_45 = ATgetArgument(t, 0);
                o_45 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Let_2, n_45, (ATerm) ATmakeAppl(sym_Seq_2, l_45, o_45));
            ;
            LocalPopChoice(r_50);
          }
        else
          {
            t = q_50;
            {
              ATerm s_50 = t;
              int t_50 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_19 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL;
                  if(match_cons(t, sym_Scope_2))
                    {
                      z_19 = ATgetArgument(t, 0);
                      {
                        ATerm u_50 = ATgetArgument(t, 1);
                        if(match_cons(u_50, sym_Scope_2))
                          {
                            e_20 = ATgetArgument(u_50, 0);
                            f_20 = ATgetArgument(u_50, 1);
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, z_19, e_20);
                  t = conc_0_0(t);
                  g_20 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, g_20, f_20);
                  ;
                  LocalPopChoice(t_50);
                }
              else
                {
                  t = s_50;
                  {
                    ATerm v_50 = t;
                    int w_50 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = WhereSavesCurrentTerm_0_0(t);
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
                              t = TestSavesCurrentTerm_0_0(t);
                              ;
                              LocalPopChoice(y_50);
                            }
                          else
                            {
                              t = x_50;
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
ATerm w_24 (ATerm t)
{
  t = repeat_1_0(y_24, t);
  return(t);
}
ATerm y_24 (ATerm t)
{
  ATerm z_50 = t;
  int a_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Simplify_0_0(t);
      ;
      LocalPopChoice(a_51);
    }
  else
    {
      t = z_50;
      {
        ATerm b_51 = t;
        int c_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_45 = NULL,u_45 = NULL,v_45 = NULL,w_45 = NULL;
            if(match_cons(t, sym_Seq_2))
              {
                t_45 = ATgetArgument(t, 0);
                u_45 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = u_45;
            if(match_cons(t, sym_Let_2))
              {
                v_45 = ATgetArgument(t, 0);
                w_45 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Let_2, v_45, (ATerm) ATmakeAppl(sym_Seq_2, t_45, w_45));
            ;
            LocalPopChoice(c_51);
          }
        else
          {
            t = b_51;
            {
              ATerm d_51 = t;
              int e_51 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL;
                  if(match_cons(t, sym_Scope_2))
                    {
                      q_20 = ATgetArgument(t, 0);
                      {
                        ATerm f_51 = ATgetArgument(t, 1);
                        if(match_cons(f_51, sym_Scope_2))
                          {
                            r_20 = ATgetArgument(f_51, 0);
                            s_20 = ATgetArgument(f_51, 1);
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, q_20, r_20);
                  t = conc_0_0(t);
                  t_20 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, t_20, s_20);
                  ;
                  LocalPopChoice(e_51);
                }
              else
                {
                  t = d_51;
                  {
                    ATerm g_51 = t;
                    int h_51 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = WhereSavesCurrentTerm_0_0(t);
                        ;
                        LocalPopChoice(h_51);
                      }
                    else
                      {
                        t = g_51;
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
ATerm z_24 (ATerm t)
{
  ATerm i_51 = t;
  int j_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CleanupScope_0_0(t);
      {
        ATerm k_51 = t;
        int l_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL,e_21 = NULL;
            if(match_cons(t, sym_Scope_2))
              {
                z_20 = ATgetArgument(t, 0);
                {
                  ATerm m_51 = ATgetArgument(t, 1);
                  if(match_cons(m_51, sym_Scope_2))
                    {
                      a_21 = ATgetArgument(m_51, 0);
                      b_21 = ATgetArgument(m_51, 1);
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, z_20, a_21);
            t = conc_0_0(t);
            e_21 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, e_21, b_21);
            ;
            LocalPopChoice(l_51);
          }
        else
          {
            t = k_51;
          }
      }
      ;
      LocalPopChoice(j_51);
    }
  else
    {
      t = i_51;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(g_24, _fail, default_usage_0_0, t);
  return(t);
}
