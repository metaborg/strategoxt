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
ATerm term_f_45;
ATerm term_q_44;
ATerm term_p_44;
ATerm term_o_44;
ATerm term_j_44;
ATerm term_i_44;
ATerm term_h_44;
ATerm term_q_43;
ATerm term_p_43;
ATerm term_k_43;
ATerm term_f_43;
ATerm term_e_43;
ATerm term_d_43;
ATerm term_c_43;
ATerm term_b_43;
ATerm term_a_43;
ATerm term_t_42;
ATerm term_o_42;
ATerm term_j_42;
ATerm term_c_42;
ATerm term_b_42;
ATerm term_l_41;
ATerm term_k_41;
ATerm term_j_41;
ATerm term_i_41;
ATerm term_d_41;
ATerm term_c_41;
ATerm term_b_41;
ATerm term_a_41;
ATerm term_v_40;
ATerm term_u_40;
ATerm term_t_40;
ATerm term_s_40;
ATerm term_r_40;
ATerm term_q_40;
ATerm term_p_40;
ATerm term_o_40;
ATerm term_n_40;
ATerm term_m_40;
ATerm term_j_40;
ATerm term_c_40;
ATerm term_v_39;
ATerm term_t_38;
ATerm term_s_38;
ATerm term_l_37;
ATerm term_c_37;
ATerm term_t_36;
ATerm term_h_33;
ATerm term_b_33;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_r_32;
ATerm term_w_27;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_o_21;
void init_constant_terms (void)
{
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(sym_Op_2, term_r_32, (ATerm) ATempty);
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(sym_ConstType_1, term_s_32);
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_p_40));
  term_p_40 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(sym_Verbose_1, term_p_40);
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_u_40));
  term_u_40 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_o_42));
  term_o_42 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_43));
  term_a_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(sym__3, term_v_39, term_a_43, term_o_21);
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_43));
  term_e_43 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_q_43));
  term_q_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_o_44));
  term_o_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_p_44));
  term_p_44 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_f_45));
  term_f_45 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm FuseScope_0_0 (ATerm);
ATerm isect_1_0 (ATerm a_129 (ATerm), ATerm);
ATerm DynamicRules_1_0 (ATerm j_108 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm a_108 (ATerm), ATerm b_108 (ATerm), ATerm c_108 (ATerm), ATerm d_108 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm m_109 (ATerm), ATerm n_109 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm e_120 (ATerm), ATerm f_120 (ATerm), ATerm g_120 (ATerm), ATerm);
ATerm n_15 (ATerm);
ATerm o_15 (ATerm);
ATerm p_15 (ATerm);
ATerm q_15 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm r_15 (ATerm);
ATerm s_15 (ATerm);
ATerm t_15 (ATerm);
ATerm u_15 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm union_1_0 (ATerm h_129 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm v_131 (ATerm), ATerm w_131 (ATerm), ATerm x_131 (ATerm), ATerm);
ATerm diff_1_0 (ATerm c_129 (ATerm), ATerm);
ATerm x_15 (ATerm);
ATerm y_15 (ATerm);
ATerm z_15 (ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm while_not_2_0 (ATerm d_138 (ATerm), ATerm e_138 (ATerm), ATerm);
ATerm for_3_0 (ATerm g_138 (ATerm), ATerm h_138 (ATerm), ATerm i_138 (ATerm), ATerm);
ATerm b_16 (ATerm);
ATerm c_16 (ATerm);
ATerm d_16 (ATerm);
ATerm e_16 (ATerm);
ATerm f_16 (ATerm);
ATerm g_16 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm i_16 (ATerm);
ATerm j_16 (ATerm);
ATerm k_16 (ATerm);
ATerm l_16 (ATerm);
ATerm m_16 (ATerm);
ATerm n_16 (ATerm);
ATerm o_16 (ATerm);
ATerm free_vars_3_0 (ATerm x_135 (ATerm), ATerm y_135 (ATerm), ATerm z_135 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm p_16 (ATerm);
ATerm q_16 (ATerm);
ATerm r_16 (ATerm);
ATerm s_16 (ATerm);
ATerm t_16 (ATerm);
ATerm CleanupScope_0_0 (ATerm);
ATerm topdown_1_0 (ATerm d_121 (ATerm), ATerm);
ATerm TestSavesCurrentTerm_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm WhereSavesCurrentTerm_0_0 (ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm genzip_4_0 (ATerm p_125 (ATerm), ATerm q_125 (ATerm), ATerm r_125 (ATerm), ATerm s_125 (ATerm), ATerm);
ATerm v_16 (ATerm);
ATerm w_16 (ATerm);
ATerm x_16 (ATerm);
ATerm y_16 (ATerm);
ATerm BuildMatchFusion_0_0 (ATerm);
ATerm MisMatch_0_0 (ATerm);
ATerm j_19 (ATerm i_18, ATerm j_18, ATerm k_18, ATerm);
ATerm BuildMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm h_122 (ATerm), ATerm);
ATerm LetHoist_0_0 (ATerm);
ATerm Idempotency_0_0 (ATerm);
ATerm AssociateR_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm c_17 (ATerm);
ATerm d_17 (ATerm);
ATerm e_17 (ATerm);
ATerm f_17 (ATerm);
ATerm g_17 (ATerm);
ATerm h_17 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm i_17 (ATerm);
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
ATerm n_17 (ATerm);
ATerm apply_to_bodies_1_0 (ATerm e_119 (ATerm), ATerm);
ATerm _2_0 (ATerm b_100 (ATerm), ATerm c_100 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm c_143 (ATerm), ATerm);
ATerm t_17 (ATerm);
ATerm u_17 (ATerm);
ATerm v_17 (ATerm);
ATerm w_17 (ATerm);
ATerm x_17 (ATerm);
ATerm y_17 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm e_146 (ATerm), ATerm);
ATerm a_31 (ATerm u_30, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm z_17 (ATerm);
ATerm a_18 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm p_127 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm v_127 (ATerm), ATerm);
ATerm c_18 (ATerm);
ATerm d_18 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm f_18 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm n_144 (ATerm), ATerm);
ATerm g_18 (ATerm);
ATerm h_18 (ATerm);
ATerm l_18 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm m_18 (ATerm);
ATerm n_18 (ATerm);
ATerm o_18 (ATerm);
ATerm p_18 (ATerm);
ATerm q_18 (ATerm);
ATerm s_18 (ATerm);
ATerm t_18 (ATerm);
ATerm u_18 (ATerm);
ATerm x_18 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm a_19 (ATerm);
ATerm b_19 (ATerm);
ATerm c_19 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm i_19 (ATerm);
ATerm m_19 (ATerm);
ATerm o_19 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm t_131 (ATerm), ATerm u_131 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm p_19 (ATerm);
ATerm q_19 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm m_144 (ATerm), ATerm);
ATerm r_19 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm s_19 (ATerm);
ATerm need_help_1_0 (ATerm c_147 (ATerm), ATerm);
ATerm map_1_0 (ATerm e_127 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm y_118 (ATerm), ATerm);
ATerm u_19 (ATerm);
ATerm v_19 (ATerm);
ATerm w_19 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm z_118 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm x_19 (ATerm);
ATerm y_19 (ATerm);
ATerm a_20 (ATerm);
ATerm g_20 (ATerm);
ATerm h_20 (ATerm);
ATerm k_20 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm q_104 (ATerm), ATerm r_104 (ATerm), ATerm);
ATerm l_20 (ATerm);
ATerm parse_options_p__1_0 (ATerm f_149 (ATerm), ATerm);
ATerm o_20 (ATerm);
ATerm p_20 (ATerm);
ATerm q_20 (ATerm);
ATerm r_20 (ATerm);
ATerm parse_options_1_0 (ATerm e_149 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm e_147 (ATerm), ATerm f_147 (ATerm), ATerm g_147 (ATerm), ATerm h_147 (ATerm), ATerm);
ATerm v_20 (ATerm);
ATerm x_20 (ATerm);
ATerm y_20 (ATerm);
ATerm d_21 (ATerm);
ATerm e_21 (ATerm);
ATerm iowrap_3_0 (ATerm n_146 (ATerm), ATerm o_146 (ATerm), ATerm p_146 (ATerm), ATerm);
ATerm g_21 (ATerm);
ATerm h_21 (ATerm);
ATerm i_21 (ATerm);
ATerm j_21 (ATerm);
ATerm k_21 (ATerm);
ATerm l_21 (ATerm);
ATerm m_21 (ATerm);
ATerm n_21 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_0 = NULL,o_0 = NULL,f_0 = NULL,h_0 = NULL,j_0 = NULL,u_0 = NULL,v_0 = NULL,w_0 = NULL;
  b_0 = t;
  t = term_o_21;
  t = whoami_0_0(t);
  o_0 = t;
  j_0 = t;
  t = term_p_21;
  f_0 = t;
  t = j_0;
  u_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_21), o_0), term_q_21);
  h_0 = t;
  t = SSL_printnl(f_0, h_0);
  w_0 = t;
  t = term_s_21;
  v_0 = t;
  t = SSL_exit(v_0);
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
        ATerm x_21 = ATgetArgument(t, 1);
        if(match_cons(x_21, sym_Scope_2))
          {
            r_0 = ATgetArgument(x_21, 0);
            s_0 = ATgetArgument(x_21, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_0, r_0);
  {
    ATerm a_22 = t;
    int b_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_22 = ATgetArgument(t, 0);
            ATerm d_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_0;
        {
          ATerm u_14 (ATerm t)
          {
            t = r_0;
            return(t);
          }
          t = at_end_1_0(u_14, t);
        }
        ;
        LocalPopChoice(b_22);
      }
    else
      {
        t = a_22;
        {
          ATerm m_0 = NULL,x_0 = NULL,b_1 = NULL;
          b_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, q_0, r_0);
          x_0 = t;
          t = SSL_explode_term(x_0);
          if(match_cons(t, sym__2))
            {
              ATerm e_22 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) e_22) != ATmakeSymbol("", 0, ATtrue)))
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
      ATerm f_22 = t;
      int g_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(g_22);
        }
      else
        {
          t = f_22;
          {
            ATerm a_1 = NULL,d_1 = NULL;
            a_1 = t;
            {
              ATerm h_22 = t;
              int i_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm j_22 = ATgetFirst((ATermList) t);
                      d_1 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(i_22);
                  {
                    ATerm k_22 = t;
                    int l_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm p_0 = NULL;
                        t = a_1;
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            p_0 = ATgetFirst((ATermList) t);
                            {
                              ATerm m_22 = (ATerm) ATgetNext((ATermList) t);
                            }
                          }
                        else
                          _fail(t);
                        t = z_0;
                        {
                          ATerm v_14 (ATerm t)
                          {
                            ATerm c_1 = NULL;
                            c_1 = t;
                            t = (ATerm) ATmakeAppl(sym__2, p_0, c_1);
                            t = a_129(t);
                            return(t);
                          }
                          t = fetch_1_0(v_14, t);
                          t = a_1;
                          t = Cons_2_0(_id, i_1, t);
                        }
                        ;
                        LocalPopChoice(l_22);
                      }
                    else
                      {
                        t = k_22;
                        t = d_1;
                        t = i_1(t);
                      }
                  }
                }
              else
                {
                  t = h_22;
                  {
                    ATerm r_1 = NULL;
                    t = a_1;
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        r_1 = ATgetFirst((ATermList) t);
                        {
                          ATerm n_22 = (ATerm) ATgetNext((ATermList) t);
                        }
                      }
                    else
                      _fail(t);
                    t = z_0;
                    {
                      ATerm l_15 (ATerm t)
                      {
                        ATerm x_1 = NULL;
                        x_1 = t;
                        t = (ATerm) ATmakeAppl(sym__2, r_1, x_1);
                        t = a_129(t);
                        return(t);
                      }
                      t = fetch_1_0(l_15, t);
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
  ATerm j_1 = NULL,k_1 = NULL,l_1 = NULL,m_1 = NULL,e_1 = NULL,f_1 = NULL;
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
  f_1 = t;
  t = (ATerm) ATmakeAppl(sym_DynamicRules_1, l_1);
  e_1 = t;
  t = SSLsetAnnotations(e_1, j_1);
  return(t);
}
ATerm RDefT_4_0 (ATerm a_108 (ATerm), ATerm b_108 (ATerm), ATerm c_108 (ATerm), ATerm d_108 (ATerm), ATerm t)
{
  ATerm p_1 = NULL,s_1 = NULL,u_1 = NULL,v_1 = NULL,w_1 = NULL,y_1 = NULL,z_1 = NULL,a_2 = NULL,b_2 = NULL,c_2 = NULL,g_1 = NULL,h_1 = NULL;
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
  h_1 = t;
  t = (ATerm) ATmakeAppl(sym_RDefT_4, y_1, z_1, a_2, b_2);
  g_1 = t;
  t = SSLsetAnnotations(g_1, p_1);
  return(t);
}
ATerm Scope_2_0 (ATerm m_109 (ATerm), ATerm n_109 (ATerm), ATerm t)
{
  ATerm r_2 = NULL,w_2 = NULL,a_3 = NULL,d_3 = NULL,e_3 = NULL,g_3 = NULL,n_1 = NULL,o_1 = NULL;
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
  o_1 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, d_3, e_3);
  n_1 = t;
  t = SSLsetAnnotations(n_1, r_2);
  return(t);
}
ATerm tboundin_3_0 (ATerm e_120 (ATerm), ATerm f_120 (ATerm), ATerm g_120 (ATerm), ATerm t)
{
  ATerm o_22 = t;
  int p_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(g_120, e_120, t);
      ;
      LocalPopChoice(p_22);
    }
  else
    {
      t = o_22;
      {
        ATerm q_22 = t;
        int r_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(g_120, g_120, g_120, e_120, t);
            ;
            LocalPopChoice(r_22);
          }
        else
          {
            t = q_22;
            {
              ATerm v_22 = t;
              int w_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(g_120, g_120, g_120, e_120, t);
                  ;
                  LocalPopChoice(w_22);
                }
              else
                {
                  t = v_22;
                  t = DynamicRules_1_0(e_120, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm n_15 (ATerm t)
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
ATerm o_15 (ATerm t)
{
  ATerm y_22 = t;
  int z_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(z_22);
    }
  else
    {
      t = y_22;
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
            ATerm a_23 = t;
            int b_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm c_23 = ATgetArgument(t, 0);
                    ATerm g_23 = ATgetArgument(t, 1);
                    t_3 = ATgetArgument(t, 2);
                    {
                      ATerm i_23 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(b_23);
                t = t_3;
                t = map_1_0(p_15, t);
              }
            else
              {
                t = a_23;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm j_23 = ATgetArgument(t, 0);
                    ATerm k_23 = ATgetArgument(t, 1);
                    t_3 = ATgetArgument(t, 2);
                    {
                      ATerm l_23 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = t_3;
                t = map_1_0(q_15, t);
              }
          }
      }
    }
  return(t);
}
ATerm p_15 (ATerm t)
{
  ATerm d_4 = NULL;
  ATerm m_23 = t;
  int n_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_4 = ATgetArgument(t, 0);
          {
            ATerm o_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_23);
      t = d_4;
    }
  else
    {
      t = m_23;
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
ATerm q_15 (ATerm t)
{
  ATerm m_4 = NULL;
  ATerm p_23 = t;
  int q_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_4 = ATgetArgument(t, 0);
          {
            ATerm s_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_23);
      t = m_4;
    }
  else
    {
      t = p_23;
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
  t = free_vars_3_0(n_15, o_15, tboundin_3_0, t);
  return(t);
}
ATerm r_15 (ATerm t)
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
ATerm s_15 (ATerm t)
{
  ATerm t_23 = t;
  int u_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(u_23);
    }
  else
    {
      t = t_23;
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
            ATerm x_23 = t;
            int y_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm a_24 = ATgetArgument(t, 0);
                    ATerm b_24 = ATgetArgument(t, 1);
                    q_7 = ATgetArgument(t, 2);
                    {
                      ATerm c_24 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(y_23);
                t = q_7;
                t = map_1_0(t_15, t);
              }
            else
              {
                t = x_23;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm d_24 = ATgetArgument(t, 0);
                    ATerm e_24 = ATgetArgument(t, 1);
                    q_7 = ATgetArgument(t, 2);
                    {
                      ATerm f_24 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = q_7;
                t = map_1_0(u_15, t);
              }
          }
      }
    }
  return(t);
}
ATerm t_15 (ATerm t)
{
  ATerm g_8 = NULL;
  ATerm g_24 = t;
  int h_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_8 = ATgetArgument(t, 0);
          {
            ATerm i_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_24);
      t = g_8;
    }
  else
    {
      t = g_24;
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
ATerm u_15 (ATerm t)
{
  ATerm t_8 = NULL;
  ATerm j_24 = t;
  int k_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_8 = ATgetArgument(t, 0);
          {
            ATerm l_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_24);
      t = t_8;
    }
  else
    {
      t = j_24;
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
            ATerm m_24 = ATgetArgument(t, 1);
          }
          {
            ATerm n_24 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = e_5;
      t = free_vars_3_0(r_15, s_15, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          q_6 = ATgetArgument(t, 0);
          {
            ATerm o_24 = ATgetArgument(t, 1);
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
      ATerm p_24 = t;
      int q_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = e_9;
          ;
          LocalPopChoice(q_24);
        }
      else
        {
          t = p_24;
          {
            ATerm r_24 = t;
            int s_24 = stack_ptr;
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
                  ATerm v_15 (ATerm t)
                  {
                    ATerm h_2 = NULL;
                    h_2 = t;
                    t = (ATerm) ATmakeAppl(sym__2, f_2, h_2);
                    t = h_129(t);
                    return(t);
                  }
                  t = fetch_1_0(v_15, t);
                  t = g_2;
                  t = f_9(t);
                }
                ;
                LocalPopChoice(s_24);
              }
            else
              {
                t = r_24;
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
  ATerm t_24 = t;
  int u_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = v_131(t);
      ;
      LocalPopChoice(u_24);
    }
  else
    {
      t = t_24;
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
      ATerm v_24 = t;
      int w_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(w_24);
        }
      else
        {
          t = v_24;
          {
            ATerm x_24 = t;
            int y_24 = stack_ptr;
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
                  ATerm w_15 (ATerm t)
                  {
                    ATerm n_2 = NULL;
                    n_2 = t;
                    t = (ATerm) ATmakeAppl(sym__2, l_2, n_2);
                    t = c_129(t);
                    return(t);
                  }
                  t = fetch_1_0(w_15, t);
                  t = m_2;
                  t = e_10(t);
                }
                ;
                LocalPopChoice(y_24);
              }
            else
              {
                t = x_24;
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
ATerm x_15 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_24 = ATgetArgument(t, 0);
      if(((ATgetType(z_24) != AT_LIST) || !(ATisEmpty(z_24))))
        _fail(t);
      {
        ATerm a_25 = ATgetArgument(t, 1);
        if(((ATgetType(a_25) != AT_LIST) || !(ATisEmpty(a_25))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_15 (ATerm t)
{
  ATerm o_10 = NULL,p_10 = NULL,r_10 = NULL,s_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_25 = ATgetArgument(t, 0);
      if(((ATgetType(b_25) == AT_LIST) && !(ATisEmpty(b_25))))
        {
          o_10 = ATgetFirst((ATermList) b_25);
          r_10 = (ATerm) ATgetNext((ATermList) b_25);
        }
      else
        _fail(t);
      {
        ATerm c_25 = ATgetArgument(t, 1);
        if(((ATgetType(c_25) == AT_LIST) && !(ATisEmpty(c_25))))
          {
            p_10 = ATgetFirst((ATermList) c_25);
            s_10 = (ATerm) ATgetNext((ATermList) c_25);
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
ATerm z_15 (ATerm t)
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
      ATerm d_25 = ATgetFirst((ATermList) t);
      if(match_cons(d_25, sym__2))
        {
          h_10 = ATgetArgument(d_25, 0);
          i_10 = ATgetArgument(d_25, 1);
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
  t = genzip_4_0(x_15, y_15, z_15, _id, t);
  n_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_10, j_10);
  {
    ATerm e_25 = t;
    int i_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_25 = ATgetArgument(t, 0);
            ATerm k_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_10;
        {
          ATerm a_16 (ATerm t)
          {
            t = j_10;
            return(t);
          }
          t = at_end_1_0(a_16, t);
        }
        ;
        LocalPopChoice(i_25);
      }
    else
      {
        t = e_25;
        {
          ATerm v_2 = NULL,q_1 = NULL,t_1 = NULL;
          t_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, n_10, j_10);
          q_1 = t;
          t = SSL_explode_term(q_1);
          if(match_cons(t, sym__2))
            {
              ATerm l_25 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) l_25) != ATmakeSymbol("", 0, ATtrue)))
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
    ATerm m_25 = t;
    int n_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_138(t);
        ;
        LocalPopChoice(n_25);
      }
    else
      {
        t = m_25;
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
ATerm b_16 (ATerm t)
{
  ATerm f_11 = NULL;
  f_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, f_11);
  return(t);
}
ATerm c_16 (ATerm t)
{
  t = _2_0(_id, e_16, t);
  return(t);
}
ATerm d_16 (ATerm t)
{
  ATerm o_25 = t;
  int p_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(_id, f_16, t);
      ;
      LocalPopChoice(p_25);
    }
  else
    {
      t = o_25;
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
ATerm e_16 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm f_16 (ATerm t)
{
  ATerm q_25 = t;
  int r_25 = stack_ptr;
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
      LocalPopChoice(r_25);
    }
  else
    {
      t = q_25;
      t = UfDecompose_0_0(t);
    }
  return(t);
}
ATerm g_16 (ATerm t)
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
  ATerm s_25 = t;
  int t_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(b_16, c_16, d_16, t);
      ;
      LocalPopChoice(t_25);
    }
  else
    {
      t = s_25;
      t = diff_1_0(g_16, t);
    }
  return(t);
}
ATerm i_16 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_16 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_16 (ATerm t)
{
  t = union_1_0(l_16, t);
  return(t);
}
ATerm l_16 (ATerm t)
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
ATerm m_16 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm n_16 (ATerm t)
{
  t = union_1_0(o_16, t);
  return(t);
}
ATerm o_16 (ATerm t)
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
    ATerm u_25 = t;
    int v_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_135(t);
        ;
        LocalPopChoice(v_25);
      }
    else
      {
        t = u_25;
        {
          ATerm w_25 = t;
          int x_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_12 = NULL,d_12 = NULL,f_3 = NULL,j_3 = NULL;
              b_12 = t;
              t = y_135(t);
              d_12 = t;
              t = b_12;
              {
                ATerm h_16 (ATerm t)
                {
                  ATerm y_2 = NULL;
                  t = h_12(t);
                  y_2 = t;
                  t = (ATerm) ATmakeAppl(sym__2, y_2, d_12);
                  t = diff_0_0(t);
                  return(t);
                }
                t = z_135(h_16, h_12, i_16, t);
                f_3 = t;
                t = SSL_explode_term(f_3);
                if(match_cons(t, sym__2))
                  {
                    ATerm y_25 = ATgetArgument(t, 0);
                    j_3 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = j_3;
                t = foldr_3_0(j_16, k_16, _id, t);
              }
              ;
              LocalPopChoice(x_25);
            }
          else
            {
              t = w_25;
              {
                ATerm p_3 = NULL,x_3 = NULL;
                p_3 = t;
                t = SSL_explode_term(p_3);
                if(match_cons(t, sym__2))
                  {
                    ATerm z_25 = ATgetArgument(t, 0);
                    x_3 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = x_3;
                t = foldr_3_0(m_16, n_16, h_12, t);
              }
            }
        }
      }
    return(t);
  }
  t = h_12(t);
  return(t);
}
ATerm p_16 (ATerm t)
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
ATerm q_16 (ATerm t)
{
  ATerm a_26 = t;
  int b_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(b_26);
    }
  else
    {
      t = a_26;
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
            ATerm c_26 = t;
            int d_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm e_26 = ATgetArgument(t, 0);
                    ATerm g_26 = ATgetArgument(t, 1);
                    w_12 = ATgetArgument(t, 2);
                    {
                      ATerm i_26 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(d_26);
                t = w_12;
                t = map_1_0(r_16, t);
              }
            else
              {
                t = c_26;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm j_26 = ATgetArgument(t, 0);
                    ATerm k_26 = ATgetArgument(t, 1);
                    w_12 = ATgetArgument(t, 2);
                    {
                      ATerm l_26 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = w_12;
                t = map_1_0(s_16, t);
              }
          }
      }
    }
  return(t);
}
ATerm r_16 (ATerm t)
{
  ATerm f_13 = NULL;
  ATerm m_26 = t;
  int n_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_13 = ATgetArgument(t, 0);
          {
            ATerm o_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_26);
      t = f_13;
    }
  else
    {
      t = m_26;
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
ATerm s_16 (ATerm t)
{
  ATerm l_13 = NULL;
  ATerm p_26 = t;
  int q_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_13 = ATgetArgument(t, 0);
          {
            ATerm r_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_26);
      t = l_13;
    }
  else
    {
      t = p_26;
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
ATerm t_16 (ATerm t)
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
  t = free_vars_3_0(p_16, q_16, tboundin_3_0, t);
  p_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_12, p_12);
  t = isect_1_0(t_16, t);
  q_12 = t;
  {
    ATerm u_26 = t;
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
        t = u_26;
      }
    t = (ATerm) ATmakeAppl(sym_Scope_2, q_12, o_12);
  }
  return(t);
}
ATerm topdown_1_0 (ATerm d_121 (ATerm), ATerm t)
{
  t = d_121(t);
  {
    ATerm u_16 (ATerm t)
    {
      t = topdown_1_0(d_121, t);
      return(t);
    }
    t = SRTS_all(u_16, t);
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
      ATerm v_26 = ATgetArgument(t, 0);
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
    ATerm w_26 = t;
    int y_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_125(t);
        ;
        LocalPopChoice(y_26);
      }
    else
      {
        t = w_26;
        t = q_125(t);
        t = _2_0(s_125, t_14, t);
        t = r_125(t);
      }
    return(t);
  }
  t = t_14(t);
  return(t);
}
ATerm v_16 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_27 = ATgetArgument(t, 0);
      if(((ATgetType(a_27) != AT_LIST) || !(ATisEmpty(a_27))))
        _fail(t);
      {
        ATerm c_27 = ATgetArgument(t, 1);
        if(((ATgetType(c_27) != AT_LIST) || !(ATisEmpty(c_27))))
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
  ATerm b_15 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_27 = ATgetArgument(t, 0);
      if(((ATgetType(d_27) == AT_LIST) && !(ATisEmpty(d_27))))
        {
          b_15 = ATgetFirst((ATermList) d_27);
          d_15 = (ATerm) ATgetNext((ATermList) d_27);
        }
      else
        _fail(t);
      {
        ATerm e_27 = ATgetArgument(t, 1);
        if(((ATgetType(e_27) == AT_LIST) && !(ATisEmpty(e_27))))
          {
            c_15 = ATgetFirst((ATermList) e_27);
            e_15 = (ATerm) ATgetNext((ATermList) e_27);
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
ATerm x_16 (ATerm t)
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
ATerm y_16 (ATerm t)
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
      ATerm f_27 = ATgetArgument(t, 0);
      if(match_cons(f_27, sym_Build_1))
        {
          ATerm n_27 = ATgetArgument(f_27, 0);
          if(match_cons(n_27, sym_Op_2))
            {
              y_14 = ATgetArgument(n_27, 0);
              w_14 = ATgetArgument(n_27, 1);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm i_27 = ATgetArgument(t, 1);
        if(match_cons(i_27, sym_Match_1))
          {
            ATerm o_27 = ATgetArgument(i_27, 0);
            if(match_cons(o_27, sym_Op_2))
              {
                if((y_14 != ATgetArgument(o_27, 0)))
                  {
                    _fail(ATgetArgument(o_27, 0));
                  }
                z_14 = ATgetArgument(o_27, 1);
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
  t = genzip_4_0(v_16, w_16, x_16, y_16, t);
  a_15 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, a_15), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, y_14, w_14)));
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm j_15 = NULL,k_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_27 = ATgetArgument(t, 0);
      if(match_cons(p_27, sym_Build_1))
        {
          ATerm r_27 = ATgetArgument(p_27, 0);
          if(match_cons(r_27, sym_Op_2))
            {
              j_15 = ATgetArgument(r_27, 0);
              {
                ATerm s_27 = ATgetArgument(r_27, 1);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm q_27 = ATgetArgument(t, 1);
        if(match_cons(q_27, sym_Match_1))
          {
            ATerm t_27 = ATgetArgument(q_27, 0);
            if(match_cons(t_27, sym_Op_2))
              {
                k_15 = ATgetArgument(t_27, 0);
                {
                  ATerm u_27 = ATgetArgument(t_27, 1);
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
    ATerm v_27 = t;
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
        t = v_27;
      }
    t = term_w_27;
  }
  return(t);
}
ATerm j_19 (ATerm i_18, ATerm j_18, ATerm k_18, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, i_18, j_18);
  {
    ATerm x_27 = t;
    int y_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = MisMatch_0_0(t);
        ;
        LocalPopChoice(y_27);
      }
    else
      {
        t = x_27;
        {
          ATerm j_28 = t;
          int k_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = BuildMatchFusion_0_0(t);
              ;
              LocalPopChoice(k_28);
            }
          else
            {
              t = j_28;
              {
                ATerm l_28 = t;
                int m_28 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm r_18 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        ATerm n_28 = ATgetArgument(t, 0);
                        ATerm r_28 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = i_18;
                    if(match_cons(t, sym_Build_1))
                      {
                        ATerm s_28 = ATgetArgument(t, 0);
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
                    LocalPopChoice(m_28);
                  }
                else
                  {
                    t = l_28;
                    {
                      ATerm v_28 = t;
                      int x_28 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = BuildPrim_0_0(t);
                          ;
                          LocalPopChoice(x_28);
                        }
                      else
                        {
                          t = v_28;
                          {
                            ATerm v_18 = NULL,w_18 = NULL,y_18 = NULL,z_18 = NULL;
                            if(match_cons(t, sym__2))
                              {
                                ATerm a_29 = ATgetArgument(t, 0);
                                ATerm b_29 = ATgetArgument(t, 1);
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
        ATerm g_29 = t;
        int h_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_4 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, g_19, d_19);
            {
              ATerm m_29 = t;
              int n_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = MisMatch_0_0(t);
                  ;
                  LocalPopChoice(n_29);
                }
              else
                {
                  t = m_29;
                  {
                    ATerm u_29 = t;
                    int v_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = BuildMatchFusion_0_0(t);
                        ;
                        LocalPopChoice(v_29);
                      }
                    else
                      {
                        t = u_29;
                        {
                          ATerm n_30 = t;
                          int o_30 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm z_4 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  ATerm p_30 = ATgetArgument(t, 0);
                                  ATerm q_30 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = g_19;
                              if(match_cons(t, sym_Build_1))
                                {
                                  ATerm r_30 = ATgetArgument(t, 0);
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
                              LocalPopChoice(o_30);
                            }
                          else
                            {
                              t = n_30;
                              {
                                ATerm s_30 = t;
                                int t_30 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildPrim_0_0(t);
                                    ;
                                    LocalPopChoice(t_30);
                                  }
                                else
                                  {
                                    t = s_30;
                                    {
                                      ATerm d_5 = NULL,f_5 = NULL,h_5 = NULL,i_5 = NULL;
                                      if(match_cons(t, sym__2))
                                        {
                                          ATerm v_30 = ATgetArgument(t, 0);
                                          ATerm w_30 = ATgetArgument(t, 1);
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
            LocalPopChoice(h_29);
          }
        else
          {
            t = g_29;
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
    ATerm z_30 = t;
    int e_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_122(t);
        ;
        LocalPopChoice(e_31);
      }
    else
      {
        t = z_30;
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
      ATerm f_31 = ATgetArgument(t, 0);
      if(((ATgetType(f_31) == AT_LIST) && !(ATisEmpty(f_31))))
        {
          ATerm h_31 = ATgetFirst((ATermList) f_31);
          if(match_cons(h_31, sym_SDefT_4))
            {
              n_19 = ATgetArgument(h_31, 0);
              {
                ATerm v_31 = ATgetArgument(h_31, 1);
                if(((ATgetType(v_31) != AT_LIST) || !(ATisEmpty(v_31))))
                  _fail(t);
              }
              {
                ATerm w_31 = ATgetArgument(h_31, 2);
                if(((ATgetType(w_31) != AT_LIST) || !(ATisEmpty(w_31))))
                  _fail(t);
              }
              l_19 = ATgetArgument(h_31, 3);
            }
          else
            _fail(t);
          {
            ATerm u_31 = (ATerm) ATgetNext((ATermList) f_31);
            if(((ATgetType(u_31) != AT_LIST) || !(ATisEmpty(u_31))))
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm g_31 = ATgetArgument(t, 1);
        if(match_cons(g_31, sym_CallT_3))
          {
            ATerm x_31 = ATgetArgument(g_31, 0);
            if(match_cons(x_31, sym_SVar_1))
              {
                if((n_19 != ATgetArgument(x_31, 0)))
                  {
                    _fail(ATgetArgument(x_31, 0));
                  }
              }
            else
              _fail(t);
            {
              ATerm z_31 = ATgetArgument(g_31, 1);
              if(((ATgetType(z_31) != AT_LIST) || !(ATisEmpty(z_31))))
                _fail(t);
            }
            {
              ATerm a_32 = ATgetArgument(g_31, 2);
              if(((ATgetType(a_32) != AT_LIST) || !(ATisEmpty(a_32))))
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
    ATerm d_32 = t;
    if((PushChoice() == 0))
      {
        ATerm z_16 (ATerm t)
        {
          if(match_cons(t, sym_CallT_3))
            {
              ATerm e_32 = ATgetArgument(t, 0);
              if(match_cons(e_32, sym_SVar_1))
                {
                  if((n_19 != ATgetArgument(e_32, 0)))
                    {
                      _fail(ATgetArgument(e_32, 0));
                    }
                }
              else
                _fail(t);
              {
                ATerm f_32 = ATgetArgument(t, 1);
                if(((ATgetType(f_32) != AT_LIST) || !(ATisEmpty(f_32))))
                  _fail(t);
              }
              {
                ATerm g_32 = ATgetArgument(t, 2);
                if(((ATgetType(g_32) != AT_LIST) || !(ATisEmpty(g_32))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(z_16, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_32;
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
  ATerm h_32 = t;
  int i_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(n_0, _id, t);
      {
        ATerm a_17 (ATerm t)
        {
          ATerm k_32 = t;
          int o_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(n_0, t);
              ;
              LocalPopChoice(o_32);
            }
          else
            {
              t = k_32;
            }
          return(t);
        }
        t = Cons_2_0(_id, a_17, t);
      }
      ;
      LocalPopChoice(i_32);
    }
  else
    {
      t = h_32;
      {
        ATerm b_17 (ATerm t)
        {
          t = map1_1_0(n_0, t);
          return(t);
        }
        t = Cons_2_0(_id, b_17, t);
      }
    }
  return(t);
}
ATerm c_17 (ATerm t)
{
  ATerm u_22 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      u_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, u_22, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_t_32), term_t_32));
  return(t);
}
ATerm d_17 (ATerm t)
{
  ATerm u_32 = t;
  int v_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_22 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, x_22, term_t_32);
      ;
      LocalPopChoice(v_32);
    }
  else
    {
      t = u_32;
    }
  return(t);
}
ATerm e_17 (ATerm t)
{
  ATerm f_23 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      f_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, f_23, term_t_32);
  return(t);
}
ATerm f_17 (ATerm t)
{
  ATerm w_32 = t;
  int x_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_23 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, h_23, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_t_32), term_t_32));
      ;
      LocalPopChoice(x_32);
    }
  else
    {
      t = w_32;
    }
  return(t);
}
ATerm g_17 (ATerm t)
{
  ATerm w_23 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      w_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, w_23, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_t_32), term_t_32));
  return(t);
}
ATerm h_17 (ATerm t)
{
  ATerm y_32 = t;
  int z_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_23 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, z_23, term_t_32);
      ;
      LocalPopChoice(z_32);
    }
  else
    {
      t = y_32;
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
              t = term_w_27;
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
                  t = term_w_27;
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
                      t = term_b_33;
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
                        t = map1_1_0(c_17, t);
                        s_22 = t;
                        t = w_21;
                        t = map1_1_0(d_17, t);
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
                            ATerm c_33 = t;
                            int d_33 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm d_23 = NULL,e_23 = NULL;
                                t = w_21;
                                t = map1_1_0(e_17, t);
                                d_23 = t;
                                t = z_21;
                                t = map_1_0(f_17, t);
                                e_23 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, y_21, e_23, d_23, v_21);
                                ;
                                LocalPopChoice(d_33);
                              }
                            else
                              {
                                t = c_33;
                                {
                                  ATerm r_23 = NULL,v_23 = NULL;
                                  t = z_21;
                                  t = map1_1_0(g_17, t);
                                  r_23 = t;
                                  t = w_21;
                                  t = map_1_0(h_17, t);
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
                              t = (ATerm) ATmakeAppl(sym_App_2, z_21, (ATerm) ATmakeAppl(sym_Op_2, term_h_33, (ATerm) ATinsert(ATinsert(ATempty, w_21), y_21)));
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
ATerm i_17 (ATerm t)
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
      t = term_w_27;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          f_25 = ATgetArgument(t, 0);
          t = f_25;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_b_33;
        }
      else
        {
          ATerm i_33 = t;
          int j_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_Seq_2))
                {
                  f_25 = ATgetArgument(t, 0);
                  {
                    ATerm m_33 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(j_33);
              t = f_25;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_w_27;
            }
          else
            {
              t = i_33;
              {
                ATerm n_33 = t;
                int o_33 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Scope_2))
                      {
                        ATerm p_33 = ATgetArgument(t, 0);
                        g_25 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(o_33);
                    t = g_25;
                    if(!(match_cons(t, sym_Fail_0)))
                      _fail(t);
                    t = term_w_27;
                  }
                else
                  {
                    t = n_33;
                    {
                      ATerm q_33 = t;
                      int r_33 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_Rec_2))
                            {
                              ATerm t_33 = ATgetArgument(t, 0);
                              g_25 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(r_33);
                          t = g_25;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_w_27;
                        }
                      else
                        {
                          t = q_33;
                          if(match_cons(t, sym_Some_1))
                            {
                              f_25 = ATgetArgument(t, 0);
                              t = f_25;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_w_27;
                            }
                          else
                            {
                              if(match_cons(t, sym_One_1))
                                {
                                  f_25 = ATgetArgument(t, 0);
                                  t = f_25;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_w_27;
                                }
                              else
                                {
                                  ATerm v_33 = t;
                                  int z_33 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_Path_2))
                                        {
                                          ATerm d_34 = ATgetArgument(t, 0);
                                          g_25 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(z_33);
                                      t = g_25;
                                      if(!(match_cons(t, sym_Fail_0)))
                                        _fail(t);
                                      t = term_w_27;
                                    }
                                  else
                                    {
                                      t = v_33;
                                      {
                                        ATerm e_34 = t;
                                        int i_34 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            if(match_cons(t, sym_Cong_2))
                                              {
                                                ATerm j_34 = ATgetArgument(t, 0);
                                                g_25 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            LocalPopChoice(i_34);
                                            t = g_25;
                                            t = fetch_1_0(i_17, t);
                                            t = term_w_27;
                                          }
                                        else
                                          {
                                            t = e_34;
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
                                                        ATerm l_34 = t;
                                                        int n_34 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = g_25;
                                                            ;
                                                            LocalPopChoice(n_34);
                                                          }
                                                        else
                                                          {
                                                            t = l_34;
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
                                                            ATerm o_34 = t;
                                                            int q_34 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = g_25;
                                                                ;
                                                                LocalPopChoice(q_34);
                                                              }
                                                            else
                                                              {
                                                                t = o_34;
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
                                                        t = term_w_27;
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
      t = term_b_33;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          h_26 = ATgetArgument(t, 0);
          t = h_26;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_w_27;
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
                      ATerm r_34 = t;
                      int w_34 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = f_26;
                          ;
                          LocalPopChoice(w_34);
                        }
                      else
                        {
                          t = r_34;
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
              ATerm x_34 = t;
              int y_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      h_26 = ATgetArgument(t, 0);
                      {
                        ATerm z_34 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(y_34);
                  t = h_26;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_b_33;
                }
              else
                {
                  t = x_34;
                  {
                    ATerm a_35 = t;
                    int b_35 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            ATerm c_35 = ATgetArgument(t, 0);
                            f_26 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(b_35);
                        t = f_26;
                        if(!(match_cons(t, sym_Id_0)))
                          _fail(t);
                        t = term_b_33;
                      }
                    else
                      {
                        t = a_35;
                        {
                          ATerm h_35 = t;
                          int j_35 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Rec_2))
                                {
                                  ATerm k_35 = ATgetArgument(t, 0);
                                  f_26 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(j_35);
                              t = f_26;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_b_33;
                            }
                          else
                            {
                              t = h_35;
                              if(match_cons(t, sym_All_1))
                                {
                                  h_26 = ATgetArgument(t, 0);
                                  t = h_26;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_b_33;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Where_1))
                                    {
                                      h_26 = ATgetArgument(t, 0);
                                      t = h_26;
                                      if(!(match_cons(t, sym_Id_0)))
                                        _fail(t);
                                      t = term_b_33;
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
                                      t = term_b_33;
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
  ATerm l_35 = t;
  int n_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(n_35);
    }
  else
    {
      t = l_35;
      {
        ATerm r_35 = t;
        int s_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(s_35);
          }
        else
          {
            t = r_35;
            {
              ATerm v_35 = t;
              int w_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(w_35);
                }
              else
                {
                  t = v_35;
                  {
                    ATerm y_35 = t;
                    int z_35 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(z_35);
                      }
                    else
                      {
                        t = y_35;
                        {
                          ATerm b_36 = t;
                          int c_36 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(c_36);
                            }
                          else
                            {
                              t = b_36;
                              {
                                ATerm d_36 = t;
                                int e_36 = stack_ptr;
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
                                    LocalPopChoice(e_36);
                                  }
                                else
                                  {
                                    t = d_36;
                                    {
                                      ATerm f_36 = t;
                                      int g_36 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
                                          LocalPopChoice(g_36);
                                        }
                                      else
                                        {
                                          t = f_36;
                                          {
                                            ATerm h_36 = t;
                                            int i_36 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = BuildMatch_0_0(t);
                                                ;
                                                LocalPopChoice(i_36);
                                              }
                                            else
                                              {
                                                t = h_36;
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
    ATerm j_36 = t;
    int k_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_137(t);
        t = b_27(t);
        ;
        LocalPopChoice(k_36);
      }
    else
      {
        t = j_36;
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
    ATerm j_17 (ATerm t)
    {
      t = downup_1_0(f_121, t);
      return(t);
    }
    t = SRTS_all(j_17, t);
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
            ATerm o_36 = t;
            int p_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = (ATerm) ATmakeAppl(sym_Scope_2, g_27, (ATerm) ATmakeAppl(sym_Seq_2, j_27, h_27));
                ;
                LocalPopChoice(p_36);
              }
            else
              {
                t = o_36;
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
  ATerm z_27 = NULL,a_28 = NULL,b_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL,h_28 = NULL,i_28 = NULL,d_2 = NULL,e_2 = NULL;
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
  e_2 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, e_28, f_28, g_28, h_28);
  d_2 = t;
  t = SSLsetAnnotations(d_2, z_27);
  return(t);
}
ATerm SDef_3_0 (ATerm r_111 (ATerm), ATerm s_111 (ATerm), ATerm t_111 (ATerm), ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL,q_28 = NULL,t_28 = NULL,u_28 = NULL,w_28 = NULL,y_28 = NULL,z_28 = NULL,i_2 = NULL,j_2 = NULL;
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
  j_2 = t;
  t = (ATerm) ATmakeAppl(sym_SDef_3, u_28, w_28, y_28);
  i_2 = t;
  t = SSLsetAnnotations(i_2, o_28);
  return(t);
}
ATerm Strategies_1_0 (ATerm u_104 (ATerm), ATerm t)
{
  ATerm c_29 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL,k_2 = NULL,o_2 = NULL;
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
  o_2 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, e_29);
  k_2 = t;
  t = SSLsetAnnotations(k_2, c_29);
  return(t);
}
ATerm Specification_1_0 (ATerm z_104 (ATerm), ATerm t)
{
  ATerm i_29 = NULL,j_29 = NULL,k_29 = NULL,l_29 = NULL,p_2 = NULL,q_2 = NULL;
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
  q_2 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, k_29);
  p_2 = t;
  t = SSLsetAnnotations(p_2, i_29);
  return(t);
}
ATerm n_17 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm apply_to_bodies_1_0 (ATerm e_119 (ATerm), ATerm t)
{
  ATerm k_17 (ATerm t)
  {
    ATerm l_17 (ATerm t)
    {
      ATerm m_17 (ATerm t)
      {
        ATerm o_17 (ATerm t)
        {
          ATerm p_17 (ATerm t)
          {
            ATerm q_36 = t;
            int s_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SDef_3_0(_id, _id, e_119, t);
                ;
                LocalPopChoice(s_36);
              }
            else
              {
                t = q_36;
                t = SDefT_4_0(_id, _id, _id, e_119, t);
              }
            return(t);
          }
          t = map_1_0(p_17, t);
          return(t);
        }
        t = Strategies_1_0(o_17, t);
        return(t);
      }
      t = Cons_2_0(m_17, n_17, t);
      return(t);
    }
    t = Cons_2_0(_id, l_17, t);
    return(t);
  }
  t = Specification_1_0(k_17, t);
  return(t);
}
ATerm _2_0 (ATerm b_100 (ATerm), ATerm c_100 (ATerm), ATerm t)
{
  ATerm o_29 = NULL,p_29 = NULL,q_29 = NULL,r_29 = NULL,s_29 = NULL,t_29 = NULL,s_2 = NULL,t_2 = NULL;
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
  t_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_29, s_29);
  s_2 = t;
  t = SSLsetAnnotations(s_2, o_29);
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
  t = (ATerm) ATmakeAppl(sym__2, w_29, term_t_36);
  t = open_stream_0_0(t);
  y_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_29, x_29);
  t = c_143(t);
  t = fclose_0_0(t);
  t = x_29;
  return(t);
}
ATerm t_17 (ATerm t)
{
  t = fetch_1_0(v_17, t);
  return(t);
}
ATerm u_17 (ATerm t)
{
  t = WriteToFile_1_0(w_17, t);
  return(t);
}
ATerm v_17 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm w_17 (ATerm t)
{
  ATerm b_30 = NULL,c_30 = NULL,d_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_36 = ATgetArgument(t, 0);
      if(match_cons(v_36, sym_Stream_1))
        {
          b_30 = ATgetArgument(v_36, 0);
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
ATerm x_17 (ATerm t)
{
  t = WriteToFile_1_0(y_17, t);
  return(t);
}
ATerm y_17 (ATerm t)
{
  ATerm e_30 = NULL,f_30 = NULL,g_30 = NULL,h_30 = NULL,u_2 = NULL,x_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_36 = ATgetArgument(t, 0);
      if(match_cons(z_36, sym_Stream_1))
        {
          e_30 = ATgetArgument(z_36, 0);
        }
      else
        _fail(t);
      f_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(e_30, f_30);
  g_30 = t;
  x_2 = t;
  t = term_c_37;
  u_2 = t;
  t = SSL_fputc(u_2, g_30);
  h_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_30);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm z_29 = NULL,a_30 = NULL;
  z_29 = t;
  {
    ATerm q_17 (ATerm t)
    {
      ATerm d_37 = t;
      int e_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_17 (ATerm t)
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
          t = fetch_1_0(r_17, t);
          ;
          LocalPopChoice(e_37);
        }
      else
        {
          t = d_37;
          t = term_l_37;
          if(((a_30 != NULL) && (a_30 != t)))
            _fail(t);
          else
            a_30 = t;
        }
      return(t);
    }
    t = _2_0(q_17, _id, t);
    t = z_29;
    {
      ATerm s_17 (ATerm t)
      {
        ATerm q_5 = NULL;
        q_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_30), q_5);
        return(t);
      }
      t = _2_0(_id, s_17, t);
      {
        ATerm m_37 = t;
        int p_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(t_17, u_17, t);
            ;
            LocalPopChoice(p_37);
          }
        else
          {
            t = m_37;
            t = _2_0(_id, x_17, t);
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
        ATerm q_37 = t;
        int u_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(x_30);
            ;
            LocalPopChoice(u_37);
          }
        else
          {
            t = q_37;
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
ATerm z_17 (ATerm t)
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
ATerm a_18 (ATerm t)
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
      ATerm v_37 = ATgetArgument(t, 0);
      ATerm w_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_37 = t;
    int a_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_6 = NULL,g_6 = NULL;
        f_6 = t;
        t = SSL_explode_term(f_6);
        if(match_cons(t, sym__2))
          {
            ATerm b_38 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) b_38) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm i_38 = ATgetArgument(t, 1);
              if(((ATgetType(i_38) == AT_LIST) && !(ATisEmpty(i_38))))
                {
                  g_6 = ATgetFirst((ATermList) i_38);
                  {
                    ATerm j_38 = (ATerm) ATgetNext((ATermList) i_38);
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
        LocalPopChoice(a_38);
      }
    else
      {
        t = z_37;
        {
          ATerm k_38 = t;
          int n_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_31 = NULL,j_31 = NULL,k_31 = NULL;
              t = _2_0(z_17, _id, t);
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
              LocalPopChoice(n_38);
            }
          else
            {
              t = k_38;
              {
                ATerm m_31 = NULL,n_31 = NULL,o_31 = NULL;
                t = _2_0(a_18, _id, t);
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
  ATerm q_38 = t;
  int r_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_31 = NULL;
      t_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_31, term_s_38);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(r_38);
    }
  else
    {
      t = q_38;
      {
        ATerm h_6 = NULL,z_2 = NULL,b_3 = NULL,c_3 = NULL,h_3 = NULL;
        h_6 = t;
        t = term_t_38;
        c_3 = t;
        t = term_p_21;
        z_2 = t;
        t = c_3;
        h_3 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, h_6), term_t_38);
        b_3 = t;
        t = SSL_printnl(z_2, b_3);
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
    ATerm u_38 = t;
    int v_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(p_127, _id, t);
        ;
        LocalPopChoice(v_38);
      }
    else
      {
        t = u_38;
        t = Cons_2_0(_id, y_31, t);
      }
    return(t);
  }
  t = y_31(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm w_38 = t;
  int x_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(x_38);
    }
  else
    {
      t = w_38;
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
          ATerm b_18 (ATerm t)
          {
            t = c_32;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(b_18, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm v_127 (ATerm), ATerm t)
{
  ATerm j_32 (ATerm t)
  {
    ATerm y_38 = t;
    int z_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, j_32, t);
        ;
        LocalPopChoice(z_38);
      }
    else
      {
        t = y_38;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = v_127(t);
      }
    return(t);
  }
  t = j_32(t);
  return(t);
}
ATerm c_18 (ATerm t)
{
  ATerm m_32 = NULL;
  m_32 = t;
  t = SSL_explode_string(m_32);
  return(t);
}
ATerm d_18 (ATerm t)
{
  ATerm n_32 = NULL;
  n_32 = t;
  t = SSL_explode_string(n_32);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm l_32 = NULL;
  t = _2_0(c_18, d_18, t);
  {
    ATerm a_39 = t;
    int b_39 = stack_ptr;
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
          ATerm e_18 (ATerm t)
          {
            t = q_32;
            return(t);
          }
          t = at_end_1_0(e_18, t);
        }
        ;
        LocalPopChoice(b_39);
      }
    else
      {
        t = a_39;
        {
          ATerm n_6 = NULL,o_6 = NULL;
          n_6 = t;
          t = SSL_explode_term(n_6);
          if(match_cons(t, sym__2))
            {
              ATerm g_39 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) g_39) != ATmakeSymbol("", 0, ATtrue)))
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
ATerm f_18 (ATerm t)
{
  ATerm h_39 = t;
  int i_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(i_39);
    }
  else
    {
      t = h_39;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm j_39 = t;
  int l_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_33 = NULL;
      a_33 = t;
      t = SSL_is_string(a_33);
      ;
      LocalPopChoice(l_39);
    }
  else
    {
      t = j_39;
      {
        ATerm m_39 = t;
        int s_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(f_18, t);
            ;
            LocalPopChoice(s_39);
          }
        else
          {
            t = m_39;
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
                        ATerm t_39 = t;
                        int u_39 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm i_3 = NULL,k_3 = NULL;
                            k_3 = t;
                            t = term_v_39;
                            i_3 = t;
                            t = SSL_table_get(i_3, f_33);
                            {
                              ATerm w_39 = t;
                              int b_40 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm m_7 = NULL,l_3 = NULL,m_3 = NULL;
                                  t = eval_config_0_0(t);
                                  m_7 = t;
                                  m_3 = t;
                                  t = term_v_39;
                                  l_3 = t;
                                  t = SSL_table_put(l_3, f_33, m_7);
                                  t = m_7;
                                  ;
                                  LocalPopChoice(b_40);
                                }
                              else
                                {
                                  t = w_39;
                                }
                            }
                            ;
                            LocalPopChoice(u_39);
                          }
                        else
                          {
                            t = t_39;
                            {
                              ATerm q_3 = NULL,s_3 = NULL,u_3 = NULL,v_3 = NULL;
                              t = term_c_40;
                              u_3 = t;
                              t = term_p_21;
                              q_3 = t;
                              t = u_3;
                              v_3 = t;
                              t = (ATerm) ATinsert(ATinsert(ATempty, f_33), term_c_40);
                              s_3 = t;
                              t = SSL_printnl(q_3, s_3);
                              t = f_33;
                              _fail(t);
                            }
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
  ATerm d_40 = t;
  int e_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_33 = NULL,u_33 = NULL,w_3 = NULL,y_3 = NULL,z_3 = NULL,a_4 = NULL;
      s_33 = t;
      t = term_j_40;
      z_3 = t;
      t = term_v_39;
      w_3 = t;
      t = z_3;
      a_4 = t;
      t = term_j_40;
      y_3 = t;
      t = SSL_table_get(w_3, y_3);
      {
        ATerm k_40 = t;
        int l_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_7 = NULL,b_4 = NULL,c_4 = NULL,e_4 = NULL,f_4 = NULL;
            t = eval_config_0_0(t);
            y_7 = t;
            e_4 = t;
            t = term_v_39;
            b_4 = t;
            t = e_4;
            f_4 = t;
            t = term_j_40;
            c_4 = t;
            t = SSL_table_put(b_4, c_4, y_7);
            t = y_7;
            ;
            LocalPopChoice(l_40);
          }
        else
          {
            t = k_40;
          }
        u_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_33, term_m_40);
        t = geq_0_0(t);
        t = s_33;
        t = n_144(t);
      }
      ;
      LocalPopChoice(e_40);
    }
  else
    {
      t = d_40;
    }
  return(t);
}
ATerm g_18 (ATerm t)
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
ATerm h_18 (ATerm t)
{
  ATerm x_33 = NULL,y_33 = NULL,g_4 = NULL,h_4 = NULL,j_4 = NULL,k_4 = NULL;
  x_33 = t;
  t = SSL_string_to_int(x_33);
  y_33 = t;
  j_4 = t;
  t = term_v_39;
  g_4 = t;
  t = j_4;
  k_4 = t;
  t = term_n_40;
  h_4 = t;
  t = SSL_table_put(g_4, h_4, y_33);
  t = x_33;
  return(t);
}
ATerm l_18 (ATerm t)
{
  t = term_o_40;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_18, h_18, l_18, t);
  return(t);
}
ATerm m_18 (ATerm t)
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
ATerm n_18 (ATerm t)
{
  ATerm l_4 = NULL,n_4 = NULL,o_4 = NULL,p_4 = NULL,q_4 = NULL,r_4 = NULL;
  p_4 = t;
  t = term_v_39;
  l_4 = t;
  t = p_4;
  q_4 = t;
  t = term_j_40;
  n_4 = t;
  t = q_4;
  r_4 = t;
  t = term_p_40;
  o_4 = t;
  t = SSL_table_put(l_4, n_4, o_4);
  t = term_q_40;
  return(t);
}
ATerm o_18 (ATerm t)
{
  t = term_r_40;
  return(t);
}
ATerm p_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_18 (ATerm t)
{
  ATerm b_34 = NULL,c_34 = NULL,s_4 = NULL,t_4 = NULL,v_4 = NULL,w_4 = NULL;
  b_34 = t;
  t = SSL_string_to_int(b_34);
  c_34 = t;
  v_4 = t;
  t = term_v_39;
  s_4 = t;
  t = v_4;
  w_4 = t;
  t = term_j_40;
  t_4 = t;
  t = SSL_table_put(s_4, t_4, c_34);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, b_34);
  return(t);
}
ATerm s_18 (ATerm t)
{
  t = term_s_40;
  return(t);
}
ATerm t_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_18 (ATerm t)
{
  ATerm x_4 = NULL,y_4 = NULL,a_5 = NULL,b_5 = NULL,c_5 = NULL,g_5 = NULL;
  b_5 = t;
  t = term_v_39;
  x_4 = t;
  t = b_5;
  c_5 = t;
  t = term_t_40;
  y_4 = t;
  t = c_5;
  g_5 = t;
  t = term_o_21;
  a_5 = t;
  t = SSL_table_put(x_4, y_4, a_5);
  t = term_u_40;
  return(t);
}
ATerm x_18 (ATerm t)
{
  t = term_v_40;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm w_40 = t;
  int x_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_18, n_18, o_18, t);
      ;
      LocalPopChoice(x_40);
    }
  else
    {
      t = w_40;
      {
        ATerm y_40 = t;
        int z_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(p_18, q_18, s_18, t);
            ;
            LocalPopChoice(z_40);
          }
        else
          {
            t = y_40;
            t = Option_3_0(t_18, u_18, x_18, t);
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
      t = term_o_21;
      t = d_0(t);
      h_34 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_41, term_b_41, h_34);
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
      t = term_o_21;
      t = c_0(t);
      k_34 = t;
      t = (ATerm) ATinsert(CheckATermList(g_34), k_34);
    }
  return(t);
}
ATerm a_19 (ATerm t)
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
ATerm b_19 (ATerm t)
{
  ATerm p_34 = NULL,j_5 = NULL,k_5 = NULL,l_5 = NULL,m_5 = NULL;
  p_34 = t;
  l_5 = t;
  t = term_v_39;
  j_5 = t;
  t = l_5;
  m_5 = t;
  t = term_c_41;
  k_5 = t;
  t = SSL_table_put(j_5, k_5, p_34);
  t = (ATerm) ATmakeAppl(sym_Output_1, p_34);
  return(t);
}
ATerm c_19 (ATerm t)
{
  t = term_d_41;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_19, b_19, c_19, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL,n_5 = NULL,o_5 = NULL;
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
    ATerm e_41 = t;
    int f_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_41 = ATgetArgument(t, 0);
            ATerm h_41 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(s_34, t_34);
        ;
        LocalPopChoice(f_41);
      }
    else
      {
        t = e_41;
        t = (ATerm) ATempty;
      }
    v_34 = t;
    o_5 = t;
    t = (ATerm) ATinsert(CheckATermList(v_34), u_34);
    n_5 = t;
    t = SSL_table_put(s_34, t_34, n_5);
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
      t = term_o_21;
      t = l_0(t);
      i_35 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_41, term_b_41, i_35);
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
ATerm i_19 (ATerm t)
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
ATerm m_19 (ATerm t)
{
  ATerm p_35 = NULL,p_5 = NULL,r_5 = NULL,s_5 = NULL,t_5 = NULL;
  p_35 = t;
  s_5 = t;
  t = term_v_39;
  p_5 = t;
  t = s_5;
  t_5 = t;
  t = term_i_41;
  r_5 = t;
  t = SSL_table_put(p_5, r_5, p_35);
  t = (ATerm) ATmakeAppl(sym_Input_1, p_35);
  return(t);
}
ATerm o_19 (ATerm t)
{
  t = term_j_41;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_19, m_19, o_19, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm q_35 = NULL,y_5 = NULL,u_5 = NULL,v_5 = NULL,w_5 = NULL,x_5 = NULL,z_5 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_21;
  t = whoami_0_0(t);
  q_35 = t;
  w_5 = t;
  t = term_p_21;
  u_5 = t;
  t = w_5;
  x_5 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_k_41), q_35);
  v_5 = t;
  t = SSL_printnl(u_5, v_5);
  z_5 = t;
  t = term_s_21;
  y_5 = t;
  t = SSL_exit(y_5);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm a_6 = NULL,b_6 = NULL,c_6 = NULL,d_6 = NULL;
  t = term_l_41;
  c_6 = t;
  t = term_v_39;
  a_6 = t;
  t = c_6;
  d_6 = t;
  t = term_l_41;
  b_6 = t;
  t = SSL_table_get(a_6, b_6);
  {
    ATerm m_41 = t;
    int n_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_8 = NULL,e_6 = NULL,i_6 = NULL,j_6 = NULL,k_6 = NULL;
        t = eval_config_0_0(t);
        f_8 = t;
        j_6 = t;
        t = term_v_39;
        e_6 = t;
        t = j_6;
        k_6 = t;
        t = term_l_41;
        i_6 = t;
        t = SSL_table_put(e_6, i_6, f_8);
        t = f_8;
        ;
        LocalPopChoice(n_41);
      }
    else
      {
        t = m_41;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm t_131 (ATerm), ATerm u_131 (ATerm), ATerm t)
{
  ATerm o_41 = t;
  int p_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = t_131(t);
      ;
      LocalPopChoice(p_41);
    }
  else
    {
      t = o_41;
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
ATerm p_19 (ATerm t)
{
  t = term_p_40;
  return(t);
}
ATerm q_19 (ATerm t)
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
    ATerm q_41 = t;
    int r_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(n_8, o_8);
        ;
        LocalPopChoice(r_41);
      }
    else
      {
        t = q_41;
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
      ATerm s_41 = ATgetArgument(t, 0);
      k_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_8;
  t = foldr_2_0(p_19, q_19, t);
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
    ATerm t_41 = t;
    int u_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_36;
        if((m_36 != t))
          {
            _fail(t);
          }
        t = l_36;
        ;
        LocalPopChoice(u_41);
      }
    else
      {
        t = t_41;
        t = l_36;
        {
          ATerm v_41 = t;
          int w_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(m_36, n_36);
              ;
              LocalPopChoice(w_41);
            }
          else
            {
              t = v_41;
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
  ATerm x_41 = t;
  int y_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_36 = NULL,u_36 = NULL,l_6 = NULL,m_6 = NULL,p_6 = NULL,r_6 = NULL;
      r_36 = t;
      t = term_j_40;
      p_6 = t;
      t = term_v_39;
      l_6 = t;
      t = p_6;
      r_6 = t;
      t = term_j_40;
      m_6 = t;
      t = SSL_table_get(l_6, m_6);
      {
        ATerm z_41 = t;
        int a_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_9 = NULL,s_6 = NULL,t_6 = NULL,u_6 = NULL,v_6 = NULL;
            t = eval_config_0_0(t);
            t_9 = t;
            u_6 = t;
            t = term_v_39;
            s_6 = t;
            t = u_6;
            v_6 = t;
            t = term_j_40;
            t_6 = t;
            t = SSL_table_put(s_6, t_6, t_9);
            t = t_9;
            ;
            LocalPopChoice(a_42);
          }
        else
          {
            t = z_41;
          }
        u_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_36, term_s_21);
        t = geq_0_0(t);
        t = r_36;
        t = m_144(t);
      }
      ;
      LocalPopChoice(y_41);
    }
  else
    {
      t = x_41;
    }
  return(t);
}
ATerm r_19 (ATerm t)
{
  ATerm w_36 = NULL,x_36 = NULL,w_6 = NULL,x_6 = NULL,y_6 = NULL,z_6 = NULL;
  t = run_time_0_0(t);
  w_36 = t;
  t = term_o_21;
  t = whoami_0_0(t);
  x_36 = t;
  y_6 = t;
  t = term_p_21;
  w_6 = t;
  t = y_6;
  z_6 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_42), w_36), term_b_42), x_36);
  x_6 = t;
  t = SSL_printnl(w_6, x_6);
  t = (ATerm) ATmakeAppl(sym__2, term_p_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_42), w_36), term_b_42), x_36));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(r_19, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm a_7 = NULL,b_7 = NULL;
  t = report_run_time_0_0(t);
  b_7 = t;
  t = term_p_40;
  a_7 = t;
  t = SSL_exit(a_7);
  return(t);
}
ATerm s_19 (ATerm t)
{
  ATerm d_42 = t;
  int e_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(e_42);
    }
  else
    {
      t = d_42;
      {
        ATerm f_42 = t;
        int g_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(g_42);
          }
        else
          {
            t = f_42;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm c_147 (ATerm), ATerm t)
{
  ATerm h_42 = t;
  int i_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL;
      t = term_j_42;
      e_7 = t;
      t = term_v_39;
      c_7 = t;
      t = e_7;
      f_7 = t;
      t = term_j_42;
      d_7 = t;
      t = SSL_table_get(c_7, d_7);
      {
        ATerm k_42 = t;
        int l_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_10 = NULL,h_7 = NULL,i_7 = NULL,j_7 = NULL,k_7 = NULL;
            t = eval_config_0_0(t);
            b_10 = t;
            j_7 = t;
            t = term_v_39;
            h_7 = t;
            t = j_7;
            k_7 = t;
            t = term_j_42;
            i_7 = t;
            t = SSL_table_put(h_7, i_7, b_10);
            t = b_10;
            ;
            LocalPopChoice(l_42);
          }
        else
          {
            t = k_42;
          }
      }
      ;
      LocalPopChoice(i_42);
    }
  else
    {
      t = h_42;
      t = fetch_1_0(s_19, t);
    }
  t = c_147(t);
  return(t);
}
ATerm map_1_0 (ATerm e_127 (ATerm), ATerm t)
{
  ATerm y_36 (ATerm t)
  {
    ATerm m_42 = t;
    int n_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(n_42);
      }
    else
      {
        t = m_42;
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
          ATerm t_19 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(f_37), g_37);
            return(t);
          }
          t = reverse_acc_2_0(e_0, t_19, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_o_21;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm y_118 (ATerm), ATerm t)
{
  ATerm h_37 = NULL,i_37 = NULL,j_37 = NULL,k_37 = NULL,l_7 = NULL,o_7 = NULL;
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
  o_7 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, j_37);
  l_7 = t;
  t = SSLsetAnnotations(l_7, h_37);
  return(t);
}
ATerm u_19 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm v_19 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm w_19 (ATerm t)
{
  ATerm n_37 = NULL;
  n_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_37), term_o_42);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm z_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL;
  ATerm p_42 = t;
  int q_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_7 = NULL,r_7 = NULL,s_7 = NULL,t_7 = NULL;
      t = term_l_41;
      s_7 = t;
      t = term_v_39;
      p_7 = t;
      t = s_7;
      t_7 = t;
      t = term_l_41;
      r_7 = t;
      t = SSL_table_get(p_7, r_7);
      {
        ATerm r_42 = t;
        int s_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_10 = NULL,u_7 = NULL,v_7 = NULL,w_7 = NULL,x_7 = NULL;
            t = eval_config_0_0(t);
            w_10 = t;
            w_7 = t;
            t = term_v_39;
            u_7 = t;
            t = w_7;
            x_7 = t;
            t = term_l_41;
            v_7 = t;
            t = SSL_table_put(u_7, v_7, w_10);
            t = w_10;
            ;
            LocalPopChoice(s_42);
          }
        else
          {
            t = r_42;
          }
      }
      ;
      LocalPopChoice(q_42);
    }
  else
    {
      t = p_42;
      t = fetch_1_0(u_19, t);
    }
  t = term_t_42;
  t = echo_0_0(t);
  b_8 = t;
  t = term_a_41;
  z_7 = t;
  t = b_8;
  c_8 = t;
  t = term_b_41;
  a_8 = t;
  t = SSL_table_get(z_7, a_8);
  t = reverse_acc_2_0(_id, v_19, t);
  t = map_1_0(w_19, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm z_118 (ATerm), ATerm t)
{
  ATerm o_37 = NULL,r_37 = NULL,s_37 = NULL,t_37 = NULL,d_8 = NULL,e_8 = NULL;
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
  e_8 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, s_37);
  d_8 = t;
  t = SSLsetAnnotations(d_8, o_37);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm x_37 = NULL,y_37 = NULL,h_8 = NULL,i_8 = NULL;
  x_37 = t;
  {
    ATerm u_42 = t;
    int v_42 = stack_ptr;
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
                ATerm w_42 = ATgetFirst((ATermList) t);
                ATerm x_42 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = x_37;
          }
        ;
        LocalPopChoice(v_42);
      }
    else
      {
        t = u_42;
        t = (ATerm) ATinsert(ATempty, x_37);
      }
    y_37 = t;
    i_8 = t;
    t = term_l_37;
    h_8 = t;
    t = SSL_printnl(h_8, y_37);
    t = x_37;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm l_8 = NULL,m_8 = NULL,p_8 = NULL,q_8 = NULL;
  t = term_l_41;
  p_8 = t;
  t = term_v_39;
  l_8 = t;
  t = p_8;
  q_8 = t;
  t = term_l_41;
  m_8 = t;
  t = SSL_table_get(l_8, m_8);
  {
    ATerm y_42 = t;
    int z_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_11 = NULL,r_8 = NULL,s_8 = NULL,u_8 = NULL,v_8 = NULL;
        t = eval_config_0_0(t);
        d_11 = t;
        u_8 = t;
        t = term_v_39;
        r_8 = t;
        t = u_8;
        v_8 = t;
        t = term_l_41;
        s_8 = t;
        t = SSL_table_put(r_8, s_8, d_11);
        t = d_11;
        ;
        LocalPopChoice(z_42);
      }
    else
      {
        t = y_42;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm x_19 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_19 (ATerm t)
{
  ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL;
  z_8 = t;
  t = term_v_39;
  w_8 = t;
  t = z_8;
  a_9 = t;
  t = term_a_43;
  x_8 = t;
  t = a_9;
  b_9 = t;
  t = term_o_21;
  y_8 = t;
  t = SSL_table_put(w_8, x_8, y_8);
  t = term_b_43;
  return(t);
}
ATerm a_20 (ATerm t)
{
  t = term_c_43;
  return(t);
}
ATerm g_20 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_20 (ATerm t)
{
  ATerm c_9 = NULL,g_9 = NULL,h_9 = NULL,k_9 = NULL,l_9 = NULL,m_9 = NULL,n_9 = NULL,q_9 = NULL,r_9 = NULL,s_9 = NULL,u_9 = NULL,v_9 = NULL;
  k_9 = t;
  t = term_v_39;
  c_9 = t;
  t = k_9;
  l_9 = t;
  t = term_a_43;
  g_9 = t;
  t = l_9;
  m_9 = t;
  t = term_o_21;
  h_9 = t;
  t = SSL_table_put(c_9, g_9, h_9);
  s_9 = t;
  t = term_v_39;
  n_9 = t;
  t = s_9;
  u_9 = t;
  t = term_d_43;
  q_9 = t;
  t = u_9;
  v_9 = t;
  t = term_o_21;
  r_9 = t;
  t = SSL_table_put(n_9, q_9, r_9);
  t = term_e_43;
  return(t);
}
ATerm k_20 (ATerm t)
{
  t = term_f_43;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm g_43 = t;
  int h_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_19, y_19, a_20, t);
      ;
      LocalPopChoice(h_43);
    }
  else
    {
      t = g_43;
      t = Option_3_0(g_20, h_20, k_20, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm q_104 (ATerm), ATerm r_104 (ATerm), ATerm t)
{
  ATerm c_38 = NULL,d_38 = NULL,e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL,w_9 = NULL,x_9 = NULL;
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
  x_9 = t;
  t = (ATerm) ATinsert(CheckATermList(g_38), f_38);
  w_9 = t;
  t = SSLsetAnnotations(w_9, c_38);
  return(t);
}
ATerm l_20 (ATerm t)
{
  ATerm m_38 = NULL,y_9 = NULL,z_9 = NULL,a_10 = NULL,f_10 = NULL;
  m_38 = t;
  a_10 = t;
  t = term_v_39;
  y_9 = t;
  t = a_10;
  f_10 = t;
  t = term_l_41;
  z_9 = t;
  t = SSL_table_put(y_9, z_9, m_38);
  t = (ATerm) ATmakeAppl(sym_Program_1, m_38);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm f_149 (ATerm), ATerm t)
{
  ATerm l_38 = NULL;
  l_38 = t;
  {
    ATerm i_43 = t;
    int j_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_k_43;
        t = f_149(t);
        ;
        LocalPopChoice(j_43);
      }
    else
      {
        t = i_43;
      }
    t = l_38;
    {
      ATerm m_20 (ATerm t)
      {
        ATerm l_43 = t;
        int m_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_43 = t;
            int o_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(o_43);
              }
            else
              {
                t = n_43;
                t = f_149(t);
                t = Cons_2_0(_id, m_20, t);
              }
            ;
            LocalPopChoice(m_43);
          }
        else
          {
            t = l_43;
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
      t = Cons_2_0(l_20, m_20, t);
    }
  }
  return(t);
}
ATerm o_20 (ATerm t)
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
ATerm p_20 (ATerm t)
{
  ATerm b_11 = NULL,c_11 = NULL,e_11 = NULL,g_11 = NULL,h_11 = NULL,m_11 = NULL;
  g_11 = t;
  t = term_v_39;
  b_11 = t;
  t = g_11;
  h_11 = t;
  t = term_j_42;
  c_11 = t;
  t = h_11;
  m_11 = t;
  t = term_o_21;
  e_11 = t;
  t = SSL_table_put(b_11, c_11, e_11);
  t = term_p_43;
  return(t);
}
ATerm q_20 (ATerm t)
{
  t = term_q_43;
  return(t);
}
ATerm r_20 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm e_149 (ATerm), ATerm t)
{
  ATerm c_39 = NULL,d_39 = NULL,e_39 = NULL,g_10 = NULL,q_10 = NULL,v_10 = NULL,x_10 = NULL,y_10 = NULL,z_10 = NULL,d_13 = NULL,e_13 = NULL;
  c_39 = t;
  x_10 = t;
  t = term_a_41;
  g_10 = t;
  t = x_10;
  y_10 = t;
  t = term_b_41;
  q_10 = t;
  t = y_10;
  z_10 = t;
  t = (ATerm) ATempty;
  v_10 = t;
  t = SSL_table_put(g_10, q_10, v_10);
  t = c_39;
  {
    ATerm n_20 (ATerm t)
    {
      ATerm r_43 = t;
      int s_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_149(t);
          ;
          LocalPopChoice(s_43);
        }
      else
        {
          t = r_43;
          {
            ATerm t_43 = t;
            int u_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(o_20, p_20, q_20, t);
                ;
                LocalPopChoice(u_43);
              }
            else
              {
                t = t_43;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(n_20, t);
    {
      ATerm v_43 = t;
      int w_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_39 = NULL;
          k_39 = t;
          {
            ATerm x_43 = t;
            int y_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_11 = NULL,c_12 = NULL;
                t = k_39;
                {
                  ATerm z_43 = t;
                  int a_44 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm n_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL;
                      t = term_j_42;
                      p_11 = t;
                      t = term_v_39;
                      n_11 = t;
                      t = p_11;
                      q_11 = t;
                      t = term_j_42;
                      o_11 = t;
                      t = SSL_table_get(n_11, o_11);
                      {
                        ATerm b_44 = t;
                        int c_44 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm b_13 = NULL,r_11 = NULL,t_11 = NULL,x_11 = NULL,y_11 = NULL;
                            t = eval_config_0_0(t);
                            b_13 = t;
                            x_11 = t;
                            t = term_v_39;
                            r_11 = t;
                            t = x_11;
                            y_11 = t;
                            t = term_j_42;
                            t_11 = t;
                            t = SSL_table_put(r_11, t_11, b_13);
                            t = b_13;
                            ;
                            LocalPopChoice(c_44);
                          }
                        else
                          {
                            t = b_44;
                          }
                      }
                      ;
                      LocalPopChoice(a_44);
                    }
                  else
                    {
                      t = z_43;
                      t = fetch_1_0(r_20, t);
                    }
                  t = k_39;
                  t = default_system_usage_0_0(t);
                  c_12 = t;
                  t = term_p_40;
                  z_11 = t;
                  t = SSL_exit(z_11);
                }
                ;
                LocalPopChoice(y_43);
              }
            else
              {
                t = x_43;
                {
                  ATerm e_12 = NULL,f_12 = NULL,g_12 = NULL,i_12 = NULL,s_12 = NULL,u_12 = NULL;
                  t = term_a_43;
                  g_12 = t;
                  t = term_v_39;
                  e_12 = t;
                  t = g_12;
                  i_12 = t;
                  t = term_a_43;
                  f_12 = t;
                  t = SSL_table_get(e_12, f_12);
                  {
                    ATerm d_44 = t;
                    int e_44 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm j_14 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL;
                        t = eval_config_0_0(t);
                        j_14 = t;
                        l_12 = t;
                        t = term_v_39;
                        j_12 = t;
                        t = l_12;
                        m_12 = t;
                        t = term_a_43;
                        k_12 = t;
                        t = SSL_table_put(j_12, k_12, j_14);
                        t = j_14;
                        ;
                        LocalPopChoice(e_44);
                      }
                    else
                      {
                        t = d_44;
                      }
                    t = k_39;
                    t = default_system_about_0_0(t);
                    u_12 = t;
                    t = term_p_40;
                    s_12 = t;
                    t = SSL_exit(s_12);
                  }
                }
              }
          }
          ;
          LocalPopChoice(w_43);
        }
      else
        {
          t = v_43;
          {
            ATerm f_44 = t;
            int g_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,c_13 = NULL;
                ATerm s_20 (ATerm t)
                {
                  ATerm t_20 (ATerm t)
                  {
                    if(((d_39 != NULL) && (d_39 != t)))
                      _fail(t);
                    else
                      d_39 = t;
                    return(t);
                  }
                  t = Undefined_1_0(t_20, t);
                  return(t);
                }
                t = fetch_1_0(s_20, t);
                y_12 = t;
                t = term_p_21;
                v_12 = t;
                t = y_12;
                z_12 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_39)), term_h_44);
                x_12 = t;
                t = SSL_printnl(v_12, x_12);
                t = (ATerm) ATmakeAppl(sym__2, term_p_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_39)), term_h_44));
                t = default_system_usage_0_0(t);
                c_13 = t;
                t = term_s_21;
                a_13 = t;
                t = SSL_exit(a_13);
                ;
                LocalPopChoice(g_44);
              }
            else
              {
                t = f_44;
              }
          }
        }
      e_39 = t;
      e_13 = t;
      t = term_a_41;
      d_13 = t;
      t = SSL_table_destroy(d_13);
      t = e_39;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm e_147 (ATerm), ATerm f_147 (ATerm), ATerm g_147 (ATerm), ATerm h_147 (ATerm), ATerm t)
{
  ATerm n_39 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,m_13 = NULL;
  t = parse_options_1_0(e_147, t);
  n_39 = t;
  h_13 = t;
  t = term_i_44;
  g_13 = t;
  t = SSL_table_create(g_13);
  k_13 = t;
  t = term_i_44;
  i_13 = t;
  t = k_13;
  m_13 = t;
  t = term_j_44;
  j_13 = t;
  t = SSL_table_put(i_13, j_13, n_39);
  t = n_39;
  t = g_147(t);
  {
    ATerm k_44 = t;
    int l_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(f_147, t);
        ;
        LocalPopChoice(l_44);
      }
    else
      {
        t = k_44;
        {
          ATerm m_44 = t;
          int n_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_147(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(n_44);
            }
          else
            {
              t = m_44;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm v_20 (ATerm t)
{
  t = if_verbose2_1_0(e_21, t);
  return(t);
}
ATerm x_20 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_20 (ATerm t)
{
  ATerm n_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL,z_13 = NULL;
  v_13 = t;
  t = term_v_39;
  n_13 = t;
  t = v_13;
  w_13 = t;
  t = term_o_44;
  t_13 = t;
  t = w_13;
  z_13 = t;
  t = term_o_21;
  u_13 = t;
  t = SSL_table_put(n_13, t_13, u_13);
  t = term_p_44;
  return(t);
}
ATerm d_21 (ATerm t)
{
  t = term_q_44;
  return(t);
}
ATerm e_21 (ATerm t)
{
  ATerm o_39 = NULL,p_39 = NULL,b_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL,s_14 = NULL;
  o_39 = t;
  t = term_l_41;
  h_14 = t;
  t = term_v_39;
  b_14 = t;
  t = h_14;
  i_14 = t;
  t = term_l_41;
  g_14 = t;
  t = SSL_table_get(b_14, g_14);
  {
    ATerm r_44 = t;
    int s_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_14 = NULL,k_14 = NULL,l_14 = NULL,m_14 = NULL,n_14 = NULL;
        t = eval_config_0_0(t);
        r_14 = t;
        m_14 = t;
        t = term_v_39;
        k_14 = t;
        t = m_14;
        n_14 = t;
        t = term_l_41;
        l_14 = t;
        t = SSL_table_put(k_14, l_14, r_14);
        t = r_14;
        ;
        LocalPopChoice(s_44);
      }
    else
      {
        t = r_44;
      }
    p_39 = t;
    q_14 = t;
    t = term_p_21;
    o_14 = t;
    t = q_14;
    s_14 = t;
    t = (ATerm) ATinsert(ATempty, p_39);
    p_14 = t;
    t = SSL_printnl(o_14, p_14);
    t = o_39;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm n_146 (ATerm), ATerm o_146 (ATerm), ATerm p_146 (ATerm), ATerm t)
{
  ATerm u_20 (ATerm t)
  {
    ATerm t_44 = t;
    int u_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_146(t);
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
              t = input_option_0_0(t);
              ;
              LocalPopChoice(w_44);
            }
          else
            {
              t = v_44;
              {
                ATerm x_44 = t;
                int y_44 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(y_44);
                  }
                else
                  {
                    t = x_44;
                    {
                      ATerm z_44 = t;
                      int a_45 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(x_20, y_20, d_21, t);
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
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(c_45);
                              }
                            else
                              {
                                t = b_45;
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
  ATerm w_20 (ATerm t)
  {
    ATerm q_39 = NULL,r_39 = NULL,x_14 = NULL;
    q_39 = t;
    {
      ATerm d_45 = t;
      int e_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_21 (ATerm t)
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
          t = fetch_1_0(f_21, t);
          ;
          LocalPopChoice(e_45);
        }
      else
        {
          t = d_45;
          t = term_f_45;
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
  t = option_wrap_4_0(u_20, p_146, v_20, w_20, t);
  return(t);
}
ATerm g_21 (ATerm t)
{
  t = _2_0(_id, h_21, t);
  return(t);
}
ATerm h_21 (ATerm t)
{
  t = apply_to_bodies_1_0(i_21, t);
  return(t);
}
ATerm i_21 (ATerm t)
{
  t = downup_1_0(j_21, t);
  t = downup_1_0(l_21, t);
  t = topdown_1_0(n_21, t);
  return(t);
}
ATerm j_21 (ATerm t)
{
  t = repeat_1_0(k_21, t);
  return(t);
}
ATerm k_21 (ATerm t)
{
  ATerm g_45 = t;
  int h_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Simplify_0_0(t);
      ;
      LocalPopChoice(h_45);
    }
  else
    {
      t = g_45;
      {
        ATerm i_45 = t;
        int j_45 = stack_ptr;
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
                  t = FuseScope_0_0(t);
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
                        t = WhereSavesCurrentTerm_0_0(t);
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
                              t = TestSavesCurrentTerm_0_0(t);
                              ;
                              LocalPopChoice(p_45);
                            }
                          else
                            {
                              t = o_45;
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
ATerm l_21 (ATerm t)
{
  t = repeat_1_0(m_21, t);
  return(t);
}
ATerm m_21 (ATerm t)
{
  ATerm q_45 = t;
  int r_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Simplify_0_0(t);
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
                  t = FuseScope_0_0(t);
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
                        t = WhereSavesCurrentTerm_0_0(t);
                        ;
                        LocalPopChoice(x_45);
                      }
                    else
                      {
                        t = w_45;
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
ATerm n_21 (ATerm t)
{
  ATerm y_45 = t;
  int z_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CleanupScope_0_0(t);
      {
        ATerm a_46 = t;
        int b_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FuseScope_0_0(t);
            ;
            LocalPopChoice(b_46);
          }
        else
          {
            t = a_46;
          }
      }
      ;
      LocalPopChoice(z_45);
    }
  else
    {
      t = y_45;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(g_21, _fail, default_usage_0_0, t);
  return(t);
}
