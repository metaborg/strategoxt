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
Symbol sym_Sort_2;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_Str_1;
Symbol sym_Wld_0;
Symbol sym_Op_2;
Symbol sym_App_2;
Symbol sym_As_2;
Symbol sym_BuildDefault_1;
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
Symbol sym_Row_2;
Symbol sym_Row_3;
Symbol sym_Matrix_2;
Symbol sym_Matrix_1;
Symbol sym_Off_1;
Symbol sym_Case_4;
Symbol sym_Case_3;
Symbol sym_Case_2;
Symbol sym_Alt_3;
Symbol sym_Assign_2;
Symbol sym_Assign_1;
Symbol sym_Fun_2;
Symbol sym_Str_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_Cong_2;
Symbol sym_InfixApp_3;
Symbol sym_MA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
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
  sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
  ATprotectSymbol(sym_Sort_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_BuildDefault_1 = ATmakeSymbol("BuildDefault", 1, ATfalse);
  ATprotectSymbol(sym_BuildDefault_1);
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
  sym_Row_2 = ATmakeSymbol("Row", 2, ATfalse);
  ATprotectSymbol(sym_Row_2);
  sym_Row_3 = ATmakeSymbol("Row", 3, ATfalse);
  ATprotectSymbol(sym_Row_3);
  sym_Matrix_2 = ATmakeSymbol("Matrix", 2, ATfalse);
  ATprotectSymbol(sym_Matrix_2);
  sym_Matrix_1 = ATmakeSymbol("Matrix", 1, ATfalse);
  ATprotectSymbol(sym_Matrix_1);
  sym_Off_1 = ATmakeSymbol("Off", 1, ATfalse);
  ATprotectSymbol(sym_Off_1);
  sym_Case_4 = ATmakeSymbol("Case", 4, ATfalse);
  ATprotectSymbol(sym_Case_4);
  sym_Case_3 = ATmakeSymbol("Case", 3, ATfalse);
  ATprotectSymbol(sym_Case_3);
  sym_Case_2 = ATmakeSymbol("Case", 2, ATfalse);
  ATprotectSymbol(sym_Case_2);
  sym_Alt_3 = ATmakeSymbol("Alt", 3, ATfalse);
  ATprotectSymbol(sym_Alt_3);
  sym_Assign_2 = ATmakeSymbol("Assign", 2, ATfalse);
  ATprotectSymbol(sym_Assign_2);
  sym_Assign_1 = ATmakeSymbol("Assign", 1, ATfalse);
  ATprotectSymbol(sym_Assign_1);
  sym_Fun_2 = ATmakeSymbol("Fun", 2, ATfalse);
  ATprotectSymbol(sym_Fun_2);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
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
ATerm term_o_44;
ATerm term_x_43;
ATerm term_v_43;
ATerm term_u_43;
ATerm term_t_43;
ATerm term_n_43;
ATerm term_m_43;
ATerm term_k_43;
ATerm term_t_42;
ATerm term_s_42;
ATerm term_q_42;
ATerm term_l_42;
ATerm term_g_42;
ATerm term_f_42;
ATerm term_e_42;
ATerm term_d_42;
ATerm term_b_42;
ATerm term_a_42;
ATerm term_z_41;
ATerm term_u_41;
ATerm term_t_41;
ATerm term_q_41;
ATerm term_p_41;
ATerm term_m_41;
ATerm term_k_41;
ATerm term_o_40;
ATerm term_n_40;
ATerm term_l_40;
ATerm term_k_40;
ATerm term_t_39;
ATerm term_p_39;
ATerm term_o_39;
ATerm term_m_39;
ATerm term_z_38;
ATerm term_v_38;
ATerm term_u_38;
ATerm term_t_38;
ATerm term_r_38;
ATerm term_q_38;
ATerm term_o_38;
ATerm term_n_38;
ATerm term_m_38;
ATerm term_l_38;
ATerm term_k_38;
ATerm term_j_38;
ATerm term_d_38;
ATerm term_t_37;
ATerm term_l_37;
ATerm term_h_37;
ATerm term_k_36;
ATerm term_h_36;
ATerm term_e_36;
ATerm term_z_34;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_f_30;
ATerm term_a_30;
ATerm term_v_29;
ATerm term_l_29;
ATerm term_i_24;
ATerm term_f_24;
ATerm term_z_23;
ATerm term_x_23;
ATerm term_v_23;
ATerm term_e_23;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
void init_constant_terms (void)
{
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym_Sort_2, term_v_23, (ATerm) ATempty);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(sym_ConstType_1, term_x_23);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("MatrixSeenBefore", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("f_1", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(sym_Off_1, (ATerm) ATempty);
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_38));
  term_n_38 = (ATerm) ATmakeAppl(sym__2, term_j_38, term_v_29);
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(sym_Verbose_1, term_v_29);
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(sym__2, term_t_38, term_w_17);
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_41));
  term_t_41 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeAppl(sym__2, term_m_39, term_o_39);
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(sym__2, term_z_41, term_w_17);
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_d_42));
  term_d_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(sym__2, term_d_42, term_w_17);
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_g_42));
  term_g_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(sym__2, term_p_41, term_w_17);
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_n_43));
  term_n_43 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_43));
  term_t_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_u_43));
  term_u_43 = (ATerm) ATmakeAppl(sym__2, term_t_43, term_w_17);
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_43));
  term_x_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_o_44));
  term_o_44 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm c_0 (ATerm);
ATerm e_0 (ATerm);
ATerm h_0 (ATerm);
ATerm u_0 (ATerm);
ATerm w_0 (ATerm);
ATerm z_0 (ATerm);
ATerm h_1 (ATerm);
ATerm j_1 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm a_2 (ATerm);
ATerm spaste_1_0 (ATerm p_121 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm q_121 (ATerm), ATerm r_121 (ATerm), ATerm s_121 (ATerm), ATerm);
ATerm b_2 (ATerm);
ATerm k_8 (ATerm p_52, ATerm o_52, ATerm);
ATerm SVar_1_0 (ATerm k_110 (ATerm), ATerm);
ATerm l_8 (ATerm o_135 (ATerm), ATerm p_135 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm z_67, ATerm y_67, ATerm x_67, ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm m_8 (ATerm i_135 (ATerm), ATerm j_135 (ATerm (ATerm), ATerm), ATerm r_67, ATerm u_67, ATerm);
ATerm lookup_0_0 (ATerm);
ATerm env_alltd_1_0 (ATerm w_135 (ATerm), ATerm);
ATerm rename_4_0 (ATerm d_135 (ATerm (ATerm), ATerm), ATerm e_135 (ATerm), ATerm f_135 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm g_135 (ATerm (ATerm), ATerm), ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm v_2 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm tpaste_1_0 (ATerm l_121 (ATerm), ATerm);
ATerm Var_1_0 (ATerm b_107 (ATerm), ATerm);
ATerm b_3 (ATerm);
ATerm d_3 (ATerm);
ATerm i_3 (ATerm);
ATerm j_3 (ATerm);
ATerm k_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm strename_0_0 (ATerm);
ATerm Anno__Cong_____2_0 (ATerm j_120 (ATerm), ATerm k_120 (ATerm), ATerm);
ATerm q_3 (ATerm);
ATerm g_4 (ATerm);
ATerm i_4 (ATerm);
ATerm q_9 (ATerm w_96, ATerm v_96, ATerm);
ATerm MatchBuildIdemVar_0_0 (ATerm);
ATerm BuildMatchIdem_0_0 (ATerm);
ATerm MatchIdem_0_0 (ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm BuildBuild_0_0 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm BuildMatchFusion_0_0 (ATerm);
ATerm MisMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm p_123 (ATerm), ATerm);
ATerm LetHoist_0_0 (ATerm);
ATerm Idempotency_0_0 (ATerm);
ATerm AssociateR_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm t_4 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm c_5 (ATerm);
ATerm ElimFail_0_0 (ATerm);
ATerm ElimId_0_0 (ATerm);
ATerm Simplify_0_0 (ATerm);
ATerm simple_strategy_0_0 (ATerm);
ATerm r_8 (ATerm h_130 (ATerm), ATerm z_59, ATerm y_59, ATerm);
ATerm tvars_matrix_boundin_3_0 (ATerm o_151 (ATerm), ATerm p_151 (ATerm), ATerm q_151 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm m_121 (ATerm), ATerm n_121 (ATerm), ATerm o_121 (ATerm), ATerm);
ATerm g_5 (ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm n_5 (ATerm);
ATerm Bind4_0_0 (ATerm);
ATerm r_5 (ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm u_5 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm x_8 (ATerm j_130 (ATerm), ATerm b_60, ATerm a_60, ATerm);
ATerm b_6 (ATerm);
ATerm c_6 (ATerm);
ATerm e_6 (ATerm);
ATerm z_8 (ATerm d_715, ATerm i_715, ATerm x_89, ATerm);
ATerm while_not_2_0 (ATerm m_139 (ATerm), ATerm n_139 (ATerm), ATerm);
ATerm for_3_0 (ATerm p_139 (ATerm), ATerm q_139 (ATerm), ATerm r_139 (ATerm), ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
ATerm j_6 (ATerm);
ATerm k_89 (ATerm o_87, ATerm p_87, ATerm q_87, ATerm);
ATerm k_6 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm n_6 (ATerm);
ATerm p_6 (ATerm);
ATerm r_6 (ATerm);
ATerm t_6 (ATerm);
ATerm u_6 (ATerm);
ATerm w_6 (ATerm);
ATerm y_6 (ATerm);
ATerm free_vars_3_0 (ATerm g_137 (ATerm), ATerm h_137 (ATerm), ATerm i_137 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm z_6 (ATerm);
ATerm a_7 (ATerm);
ATerm e_7 (ATerm);
ATerm h_7 (ATerm);
ATerm i_7 (ATerm);
ATerm j_7 (ATerm);
ATerm o_7 (ATerm);
ATerm p_7 (ATerm);
ATerm r_7 (ATerm);
ATerm z_7 (ATerm);
ATerm b_8 (ATerm);
ATerm c_8 (ATerm);
ATerm d_8 (ATerm);
ATerm RowLet_1_0 (ATerm v_0 (ATerm), ATerm);
ATerm f_8 (ATerm);
ATerm h_8 (ATerm);
ATerm j_8 (ATerm);
ATerm b_9 (ATerm s_100, ATerm r_100, ATerm);
ATerm c_9 (ATerm n_134 (ATerm), ATerm e_65, ATerm c_65, ATerm);
ATerm y_8 (ATerm);
ATerm default_state_0_0 (ATerm);
ATerm a_9 (ATerm);
ATerm d_9 (ATerm);
ATerm g_9 (ATerm);
ATerm h_9 (ATerm);
ATerm MatchCons_2_0 (ATerm q_0 (ATerm), ATerm t_0 (ATerm), ATerm);
ATerm e_9 (ATerm z_150 (ATerm), ATerm f_99, ATerm c_99, ATerm d_99, ATerm e_99, ATerm);
ATerm f_9 (ATerm y_98, ATerm z_98, ATerm a_99, ATerm);
ATerm filter_1_0 (ATerm r_134 (ATerm), ATerm);
ATerm listtd_1_0 (ATerm v_129 (ATerm), ATerm);
ATerm r_9 (ATerm);
ATerm s_9 (ATerm);
ATerm t_9 (ATerm);
ATerm w_9 (ATerm);
ATerm ConsArgs_0_0 (ATerm);
ATerm x_9 (ATerm);
ATerm outedges_0_0 (ATerm);
ATerm i_107 (ATerm l_105, ATerm);
ATerm get_path_0_0 (ATerm);
ATerm z_9 (ATerm);
ATerm c_10 (ATerm);
ATerm k_10 (ATerm);
ATerm p_10 (ATerm);
ATerm s_10 (ATerm);
ATerm i_9 (ATerm l_100, ATerm);
ATerm t_10 (ATerm);
ATerm f_11 (ATerm);
ATerm k_9 (ATerm b_100, ATerm);
ATerm i_11 (ATerm);
ATerm m_9 (ATerm z_99, ATerm);
ATerm repeat_1_0 (ATerm x_138 (ATerm), ATerm);
ATerm o_9 (ATerm r_65, ATerm s_65, ATerm);
ATerm end_scope_1_0 (ATerm k_134 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm s_125 (ATerm), ATerm t_125 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm j_134 (ATerm), ATerm);
ATerm scope_2_0 (ATerm l_134 (ATerm), ATerm m_134 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm c_129 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm e_112 (ATerm w_111, ATerm);
ATerm conc_0_0 (ATerm);
ATerm o_11 (ATerm);
ATerm p_11 (ATerm);
ATerm q_11 (ATerm);
ATerm r_11 (ATerm);
ATerm s_11 (ATerm);
ATerm t_11 (ATerm);
ATerm MatrixMerge_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm m_122 (ATerm), ATerm);
ATerm m_10 (ATerm r_130 (ATerm), ATerm s_130 (ATerm), ATerm h_60, ATerm g_60, ATerm);
ATerm n_10 (ATerm o_130 (ATerm), ATerm d_60, ATerm c_60, ATerm);
ATerm foldr_3_0 (ATerm e_133 (ATerm), ATerm f_133 (ATerm), ATerm g_133 (ATerm), ATerm);
ATerm a_12 (ATerm);
ATerm collect_om_2_0 (ATerm i_132 (ATerm), ATerm j_132 (ATerm), ATerm);
ATerm CollectSubst_0_0 (ATerm);
ATerm IgnoreVar_0_0 (ATerm);
ATerm d_12 (ATerm);
ATerm e_12 (ATerm);
ATerm f_12 (ATerm);
ATerm g_12 (ATerm);
ATerm h_12 (ATerm);
ATerm i_12 (ATerm);
ATerm j_12 (ATerm);
ATerm CollectSplit_2_0 (ATerm l_131 (ATerm), ATerm m_131 (ATerm), ATerm);
ATerm collect_split_2_0 (ATerm c_132 (ATerm), ATerm d_132 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm x_126 (ATerm), ATerm y_126 (ATerm), ATerm z_126 (ATerm), ATerm a_127 (ATerm), ATerm);
ATerm m_12 (ATerm);
ATerm o_12 (ATerm);
ATerm t_12 (ATerm);
ATerm nzip0_1_0 (ATerm i_127 (ATerm), ATerm);
ATerm Propagate_0_0 (ATerm);
ATerm d_13 (ATerm);
ATerm e_13 (ATerm);
ATerm f_13 (ATerm);
ATerm g_13 (ATerm);
ATerm j_13 (ATerm);
ATerm term_to_matrix_0_0 (ATerm);
ATerm k_13 (ATerm);
ATerm l_13 (ATerm);
ATerm match_to_matrix_0_0 (ATerm);
ATerm m_13 (ATerm);
ATerm p_13 (ATerm);
ATerm r_13 (ATerm);
ATerm match_to_dfa_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm topdown_1_0 (ATerm l_122 (ATerm), ATerm);
ATerm map_1_0 (ATerm m_128 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm u_105 (ATerm), ATerm v_105 (ATerm), ATerm);
ATerm y_10 (ATerm f_79, ATerm g_79, ATerm);
ATerm z_10 (ATerm t_82, ATerm u_82, ATerm);
ATerm b_11 (ATerm l_144 (ATerm), ATerm f_588, ATerm x_82, ATerm);
ATerm a_11 (ATerm p_82, ATerm q_82, ATerm);
ATerm x_13 (ATerm);
ATerm y_13 (ATerm);
ATerm z_13 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm n_147 (ATerm), ATerm);
ATerm m_129 (ATerm g_129, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm c_11 (ATerm v_82, ATerm);
ATerm d_11 (ATerm h_79, ATerm i_79, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm o_131 (ATerm y_129, ATerm);
ATerm p_131 (ATerm c_130, ATerm d_130, ATerm e_130, ATerm);
ATerm q_131 (ATerm u_130, ATerm v_130, ATerm w_130, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm e_14 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm w_128 (ATerm), ATerm);
ATerm x_10 (ATerm t_73, ATerm u_73, ATerm);
ATerm debug_1_0 (ATerm j_144 (ATerm), ATerm);
ATerm i_14 (ATerm);
ATerm k_14 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm w_145 (ATerm), ATerm);
ATerm l_14 (ATerm);
ATerm m_14 (ATerm);
ATerm n_14 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm q_14 (ATerm);
ATerm r_14 (ATerm);
ATerm s_14 (ATerm);
ATerm t_14 (ATerm);
ATerm u_14 (ATerm);
ATerm v_14 (ATerm);
ATerm w_14 (ATerm);
ATerm a_15 (ATerm);
ATerm b_15 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm j_11 (ATerm w_83, ATerm x_83, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm c_15 (ATerm);
ATerm d_15 (ATerm);
ATerm e_15 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm h_11 (ATerm m_65, ATerm n_65, ATerm l_65, ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm g_15 (ATerm);
ATerm h_15 (ATerm);
ATerm j_15 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm e_11 (ATerm q_63, ATerm r_63, ATerm);
ATerm foldr_2_0 (ATerm c_133 (ATerm), ATerm d_133 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm k_15 (ATerm);
ATerm l_15 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm v_145 (ATerm), ATerm);
ATerm m_15 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm n_15 (ATerm);
ATerm need_help_1_0 (ATerm l_148 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm g_11 (ATerm d_67, ATerm e_67, ATerm);
ATerm p_15 (ATerm);
ATerm r_15 (ATerm);
ATerm z_15 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm b_16 (ATerm);
ATerm c_16 (ATerm);
ATerm d_16 (ATerm);
ATerm e_16 (ATerm);
ATerm g_16 (ATerm);
ATerm h_16 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm o_150 (ATerm), ATerm);
ATerm n_16 (ATerm);
ATerm o_16 (ATerm);
ATerm u_16 (ATerm);
ATerm x_16 (ATerm);
ATerm parse_options_1_0 (ATerm n_150 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm n_148 (ATerm), ATerm o_148 (ATerm), ATerm p_148 (ATerm), ATerm q_148 (ATerm), ATerm);
ATerm d_17 (ATerm);
ATerm i_17 (ATerm);
ATerm j_17 (ATerm);
ATerm k_17 (ATerm);
ATerm p_17 (ATerm);
ATerm iowrap_3_0 (ATerm w_147 (ATerm), ATerm x_147 (ATerm), ATerm y_147 (ATerm), ATerm);
ATerm r_17 (ATerm);
ATerm s_17 (ATerm);
ATerm t_17 (ATerm);
ATerm u_17 (ATerm);
ATerm v_17 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm j_0 = NULL,l_0 = NULL,o_0 = NULL,p_0 = NULL,r_0 = NULL;
  j_0 = t;
  t = term_w_17;
  t = whoami_0_0(t);
  l_0 = t;
  t = term_x_17;
  p_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_17), l_0), term_y_17);
  r_0 = t;
  t = SSL_printnl(p_0, r_0);
  t = term_a_18;
  o_0 = t;
  t = SSL_exit(o_0);
  t = j_0;
  return(t);
}
ATerm c_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_18 = ATgetArgument(t, 0);
      if(((ATgetType(c_18) != AT_LIST) || !(ATisEmpty(c_18))))
        _fail(t);
      {
        ATerm d_18 = ATgetArgument(t, 1);
        if(((ATgetType(d_18) != AT_LIST) || !(ATisEmpty(d_18))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm e_0 (ATerm t)
{
  ATerm a_1 = NULL,b_1 = NULL,c_1 = NULL,d_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_18 = ATgetArgument(t, 0);
      if(((ATgetType(e_18) == AT_LIST) && !(ATisEmpty(e_18))))
        {
          a_1 = ATgetFirst((ATermList) e_18);
          b_1 = (ATerm) ATgetNext((ATermList) e_18);
        }
      else
        _fail(t);
      {
        ATerm f_18 = ATgetArgument(t, 1);
        if(((ATgetType(f_18) == AT_LIST) && !(ATisEmpty(f_18))))
          {
            c_1 = ATgetFirst((ATermList) f_18);
            d_1 = (ATerm) ATgetNext((ATermList) f_18);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_1, c_1), (ATerm) ATmakeAppl(sym__2, b_1, d_1));
  return(t);
}
ATerm h_0 (ATerm t)
{
  ATerm e_1 = NULL,g_1 = NULL;
  if(match_cons(t, sym__2))
    {
      e_1 = ATgetArgument(t, 0);
      g_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_1), e_1);
  return(t);
}
ATerm u_0 (ATerm t)
{
  ATerm i_1 = NULL,k_1 = NULL,l_1 = NULL,m_1 = NULL,n_1 = NULL;
  if(match_cons(t, sym__2))
    {
      i_1 = ATgetArgument(t, 0);
      n_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_1;
  {
    ATerm g_18 = t;
    int h_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm i_18 = ATgetArgument(t, 0);
            k_1 = ATgetArgument(t, 1);
            l_1 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(h_18);
        t = (ATerm) ATmakeAppl(sym_SDef_3, n_1, k_1, l_1);
      }
    else
      {
        t = g_18;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm j_18 = ATgetArgument(t, 0);
            k_1 = ATgetArgument(t, 1);
            l_1 = ATgetArgument(t, 2);
            m_1 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, n_1, k_1, l_1, m_1);
      }
  }
  return(t);
}
ATerm w_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_18 = ATgetArgument(t, 0);
      if(((ATgetType(k_18) != AT_LIST) || !(ATisEmpty(k_18))))
        _fail(t);
      {
        ATerm m_18 = ATgetArgument(t, 1);
        if(((ATgetType(m_18) != AT_LIST) || !(ATisEmpty(m_18))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm x_4 = NULL,y_4 = NULL,d_5 = NULL,f_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_18 = ATgetArgument(t, 0);
      if(((ATgetType(n_18) == AT_LIST) && !(ATisEmpty(n_18))))
        {
          x_4 = ATgetFirst((ATermList) n_18);
          y_4 = (ATerm) ATgetNext((ATermList) n_18);
        }
      else
        _fail(t);
      {
        ATerm p_18 = ATgetArgument(t, 1);
        if(((ATgetType(p_18) == AT_LIST) && !(ATisEmpty(p_18))))
          {
            d_5 = ATgetFirst((ATermList) p_18);
            f_5 = (ATerm) ATgetNext((ATermList) p_18);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_4, d_5), (ATerm) ATmakeAppl(sym__2, y_4, f_5));
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm h_5 = NULL,i_5 = NULL;
  if(match_cons(t, sym__2))
    {
      h_5 = ATgetArgument(t, 0);
      i_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(i_5), h_5);
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm m_5 = NULL,o_5 = NULL,p_5 = NULL;
  if(match_cons(t, sym__2))
    {
      m_5 = ATgetArgument(t, 0);
      p_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_5;
  {
    ATerm q_18 = t;
    int r_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm x_18 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(r_18);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, p_5);
      }
    else
      {
        t = q_18;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm y_18 = ATgetArgument(t, 0);
            o_5 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, p_5, o_5);
      }
  }
  return(t);
}
ATerm o_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_18 = ATgetArgument(t, 0);
      if(((ATgetType(z_18) != AT_LIST) || !(ATisEmpty(z_18))))
        _fail(t);
      {
        ATerm a_19 = ATgetArgument(t, 1);
        if(((ATgetType(a_19) != AT_LIST) || !(ATisEmpty(a_19))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm n_7 = NULL,q_7 = NULL,u_7 = NULL,v_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_19 = ATgetArgument(t, 0);
      if(((ATgetType(b_19) == AT_LIST) && !(ATisEmpty(b_19))))
        {
          n_7 = ATgetFirst((ATermList) b_19);
          q_7 = (ATerm) ATgetNext((ATermList) b_19);
        }
      else
        _fail(t);
      {
        ATerm c_19 = ATgetArgument(t, 1);
        if(((ATgetType(c_19) == AT_LIST) && !(ATisEmpty(c_19))))
          {
            u_7 = ATgetFirst((ATermList) c_19);
            v_7 = (ATerm) ATgetNext((ATermList) c_19);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_7, u_7), (ATerm) ATmakeAppl(sym__2, q_7, v_7));
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm x_7 = NULL,y_7 = NULL;
  if(match_cons(t, sym__2))
    {
      x_7 = ATgetArgument(t, 0);
      y_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_7), x_7);
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm a_8 = NULL,e_8 = NULL,u_8 = NULL;
  if(match_cons(t, sym__2))
    {
      a_8 = ATgetArgument(t, 0);
      u_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_8;
  {
    ATerm d_19 = t;
    int e_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm f_19 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(e_19);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, u_8);
      }
    else
      {
        t = d_19;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm h_19 = ATgetArgument(t, 0);
            e_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, u_8, e_8);
      }
  }
  return(t);
}
ATerm s_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_19 = ATgetArgument(t, 0);
      if(((ATgetType(i_19) != AT_LIST) || !(ATisEmpty(i_19))))
        _fail(t);
      {
        ATerm l_19 = ATgetArgument(t, 1);
        if(((ATgetType(l_19) != AT_LIST) || !(ATisEmpty(l_19))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm d_10 = NULL,e_10 = NULL,g_10 = NULL,h_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_19 = ATgetArgument(t, 0);
      if(((ATgetType(m_19) == AT_LIST) && !(ATisEmpty(m_19))))
        {
          d_10 = ATgetFirst((ATermList) m_19);
          e_10 = (ATerm) ATgetNext((ATermList) m_19);
        }
      else
        _fail(t);
      {
        ATerm n_19 = ATgetArgument(t, 1);
        if(((ATgetType(n_19) == AT_LIST) && !(ATisEmpty(n_19))))
          {
            g_10 = ATgetFirst((ATermList) n_19);
            h_10 = (ATerm) ATgetNext((ATermList) n_19);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_10, g_10), (ATerm) ATmakeAppl(sym__2, e_10, h_10));
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm i_10 = NULL,j_10 = NULL;
  if(match_cons(t, sym__2))
    {
      i_10 = ATgetArgument(t, 0);
      j_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_10), i_10);
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm l_10 = NULL,q_10 = NULL,r_10 = NULL;
  if(match_cons(t, sym__2))
    {
      l_10 = ATgetArgument(t, 0);
      r_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_10;
  {
    ATerm o_19 = t;
    int p_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm q_19 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(p_19);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, r_10);
      }
    else
      {
        t = o_19;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm r_19 = ATgetArgument(t, 0);
            q_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, r_10, q_10);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm p_121 (ATerm), ATerm t)
{
  ATerm n_8 = NULL,o_8 = NULL,p_8 = NULL,q_8 = NULL,s_8 = NULL;
  p_8 = t;
  if(match_cons(t, sym_Let_2))
    {
      q_8 = ATgetArgument(t, 0);
      s_8 = ATgetArgument(t, 1);
      {
        ATerm s_0 = NULL,x_0 = NULL,y_0 = NULL,v_1 = NULL;
        t = SSLgetAnnotations(p_8);
        s_0 = t;
        t = q_8;
        t = p_121(t);
        y_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_8, y_0);
        t = genzip_4_0(c_0, e_0, h_0, u_0, t);
        x_0 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, x_0, s_8);
        v_1 = t;
        t = SSLsetAnnotations(v_1, s_0);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          q_8 = ATgetArgument(t, 0);
          s_8 = ATgetArgument(t, 1);
          n_8 = ATgetArgument(t, 2);
          {
            ATerm e_3 = NULL,s_4 = NULL,u_4 = NULL,w_1 = NULL;
            t = SSLgetAnnotations(p_8);
            e_3 = t;
            t = s_8;
            t = p_121(t);
            u_4 = t;
            t = (ATerm) ATmakeAppl(sym__2, s_8, u_4);
            t = genzip_4_0(w_0, z_0, h_1, j_1, t);
            s_4 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, q_8, s_4, n_8);
            w_1 = t;
            t = SSLsetAnnotations(w_1, e_3);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              q_8 = ATgetArgument(t, 0);
              s_8 = ATgetArgument(t, 1);
              n_8 = ATgetArgument(t, 2);
              o_8 = ATgetArgument(t, 3);
              {
                ATerm l_6 = NULL,b_7 = NULL,d_7 = NULL,x_1 = NULL;
                t = SSLgetAnnotations(p_8);
                l_6 = t;
                t = s_8;
                t = p_121(t);
                d_7 = t;
                t = (ATerm) ATmakeAppl(sym__2, s_8, d_7);
                t = genzip_4_0(o_1, p_1, q_1, r_1, t);
                b_7 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, q_8, b_7, n_8, o_8);
                x_1 = t;
                t = SSLsetAnnotations(x_1, l_6);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  q_8 = ATgetArgument(t, 0);
                  s_8 = ATgetArgument(t, 1);
                  n_8 = ATgetArgument(t, 2);
                  o_8 = ATgetArgument(t, 3);
                  {
                    ATerm v_9 = NULL,a_10 = NULL,b_10 = NULL,y_1 = NULL;
                    t = SSLgetAnnotations(p_8);
                    v_9 = t;
                    t = s_8;
                    t = p_121(t);
                    b_10 = t;
                    t = (ATerm) ATmakeAppl(sym__2, s_8, b_10);
                    t = genzip_4_0(s_1, t_1, u_1, a_2, t);
                    a_10 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, q_8, a_10, n_8, o_8);
                    y_1 = t;
                    t = SSLsetAnnotations(y_1, v_9);
                  }
                }
              else
                {
                  ATerm w_11 = NULL,c_12 = NULL,z_1 = NULL;
                  if(match_cons(t, sym_Rec_2))
                    {
                      q_8 = ATgetArgument(t, 0);
                      s_8 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(p_8);
                  w_11 = t;
                  t = q_8;
                  t = p_121(t);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      c_12 = ATgetFirst((ATermList) t);
                      {
                        ATerm s_19 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Rec_2, c_12, s_8);
                  z_1 = t;
                  t = SSLsetAnnotations(z_1, w_11);
                }
            }
        }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm q_121 (ATerm), ATerm r_121 (ATerm), ATerm s_121 (ATerm), ATerm t)
{
  ATerm o_14 = NULL,p_14 = NULL,x_14 = NULL,y_14 = NULL,z_14 = NULL;
  x_14 = t;
  if(match_cons(t, sym_Let_2))
    {
      y_14 = ATgetArgument(t, 0);
      z_14 = ATgetArgument(t, 1);
      {
        ATerm k_12 = NULL,v_12 = NULL,w_12 = NULL,h_2 = NULL;
        t = SSLgetAnnotations(x_14);
        k_12 = t;
        t = y_14;
        t = q_121(t);
        v_12 = t;
        t = z_14;
        t = q_121(t);
        w_12 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, v_12, w_12);
        h_2 = t;
        t = SSLsetAnnotations(h_2, k_12);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          y_14 = ATgetArgument(t, 0);
          z_14 = ATgetArgument(t, 1);
          o_14 = ATgetArgument(t, 2);
          {
            ATerm o_13 = NULL,g_14 = NULL,h_14 = NULL,j_14 = NULL,i_2 = NULL;
            t = SSLgetAnnotations(x_14);
            o_13 = t;
            t = y_14;
            t = s_121(t);
            g_14 = t;
            t = z_14;
            t = s_121(t);
            h_14 = t;
            t = o_14;
            t = q_121(t);
            j_14 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, g_14, h_14, j_14);
            i_2 = t;
            t = SSLsetAnnotations(i_2, o_13);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              y_14 = ATgetArgument(t, 0);
              z_14 = ATgetArgument(t, 1);
              o_14 = ATgetArgument(t, 2);
              p_14 = ATgetArgument(t, 3);
              {
                ATerm f_15 = NULL,q_15 = NULL,t_15 = NULL,v_15 = NULL,y_15 = NULL,j_2 = NULL;
                t = SSLgetAnnotations(x_14);
                f_15 = t;
                t = y_14;
                t = s_121(t);
                q_15 = t;
                t = z_14;
                t = s_121(t);
                t_15 = t;
                t = o_14;
                t = s_121(t);
                v_15 = t;
                t = p_14;
                t = q_121(t);
                y_15 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, q_15, t_15, v_15, y_15);
                j_2 = t;
                t = SSLsetAnnotations(j_2, f_15);
              }
            }
          else
            {
              ATerm w_16 = NULL,b_17 = NULL,c_17 = NULL,l_2 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  y_14 = ATgetArgument(t, 0);
                  z_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(x_14);
              w_16 = t;
              t = y_14;
              t = s_121(t);
              b_17 = t;
              t = z_14;
              t = q_121(t);
              c_17 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, b_17, c_17);
              l_2 = t;
              t = SSLsetAnnotations(l_2, w_16);
            }
        }
    }
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm i_15 = NULL;
  ATerm t_19 = t;
  int u_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          i_15 = ATgetArgument(t, 0);
          {
            ATerm v_19 = ATgetArgument(t, 1);
          }
          {
            ATerm w_19 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_19);
      t = i_15;
    }
  else
    {
      t = t_19;
      if(match_cons(t, sym_SDefT_4))
        {
          i_15 = ATgetArgument(t, 0);
          {
            ATerm a_20 = ATgetArgument(t, 1);
          }
          {
            ATerm b_20 = ATgetArgument(t, 2);
          }
          {
            ATerm c_20 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = i_15;
    }
  return(t);
}
ATerm k_8 (ATerm p_52, ATerm o_52, ATerm t)
{
  t = p_52;
  t = map_1_0(b_2, t);
  return(t);
}
ATerm SVar_1_0 (ATerm k_110 (ATerm), ATerm t)
{
  ATerm s_15 = NULL,u_15 = NULL,w_15 = NULL,x_15 = NULL,u_2 = NULL;
  x_15 = t;
  if(match_cons(t, sym_SVar_1))
    {
      u_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_15);
  s_15 = t;
  t = u_15;
  t = k_110(t);
  w_15 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, w_15);
  u_2 = t;
  t = SSLsetAnnotations(u_2, s_15);
  return(t);
}
ATerm l_8 (ATerm o_135 (ATerm), ATerm p_135 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm z_67, ATerm y_67, ATerm x_67, ATerm t)
{
  ATerm c_2 (ATerm t)
  {
    ATerm a_16 = NULL;
    a_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_16, not_null(x_67));
    t = o_135(t);
    return(t);
  }
  ATerm d_2 (ATerm t)
  {
    ATerm f_16 = NULL;
    f_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_16, not_null(y_67));
    t = o_135(t);
    return(t);
  }
  t = not_null(z_67);
  t = p_135(c_2, d_2, _id, t);
  return(t);
}
ATerm e_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_20 = ATgetArgument(t, 0);
      if(((ATgetType(d_20) != AT_LIST) || !(ATisEmpty(d_20))))
        _fail(t);
      {
        ATerm e_20 = ATgetArgument(t, 1);
        if(((ATgetType(e_20) != AT_LIST) || !(ATisEmpty(e_20))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_20 = ATgetArgument(t, 0);
      if(((ATgetType(h_20) == AT_LIST) && !(ATisEmpty(h_20))))
        {
          q_16 = ATgetFirst((ATermList) h_20);
          r_16 = (ATerm) ATgetNext((ATermList) h_20);
        }
      else
        _fail(t);
      {
        ATerm i_20 = ATgetArgument(t, 1);
        if(((ATgetType(i_20) == AT_LIST) && !(ATisEmpty(i_20))))
          {
            s_16 = ATgetFirst((ATermList) i_20);
            t_16 = (ATerm) ATgetNext((ATermList) i_20);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_16, s_16), (ATerm) ATmakeAppl(sym__2, r_16, t_16));
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm v_16 = NULL,y_16 = NULL;
  if(match_cons(t, sym__2))
    {
      v_16 = ATgetArgument(t, 0);
      y_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_16), v_16);
  return(t);
}
ATerm m_8 (ATerm i_135 (ATerm), ATerm j_135 (ATerm (ATerm), ATerm), ATerm r_67, ATerm u_67, ATerm t)
{
  ATerm i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL,p_16 = NULL;
  t = not_null(r_67);
  t = i_135(t);
  if(((i_16 != NULL) && (i_16 != t)))
    _fail(t);
  else
    i_16 = t;
  t = map_1_0(new_0_0, t);
  if(((j_16 != NULL) && (j_16 != t)))
    _fail(t);
  else
    j_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(i_16), not_null(j_16));
  t = genzip_4_0(e_2, f_2, g_2, _id, t);
  if(((p_16 != NULL) && (p_16 != t)))
    _fail(t);
  else
    p_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(p_16), not_null(u_67));
  t = conc_0_0(t);
  if(((k_16 != NULL) && (k_16 != t)))
    _fail(t);
  else
    k_16 = t;
  t = not_null(r_67);
  {
    ATerm k_2 (ATerm t)
    {
      t = not_null(j_16);
      return(t);
    }
    t = j_135(k_2, t);
    if(((l_16 != NULL) && (l_16 != t)))
      _fail(t);
    else
      l_16 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(l_16), not_null(u_67), not_null(k_16));
  }
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm e_17 = NULL,f_17 = NULL,g_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL;
  g_17 = t;
  if(match_cons(t, sym__2))
    {
      l_17 = ATgetArgument(t, 0);
      m_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_17;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_17 = ATgetFirst((ATermList) t);
      o_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_17;
  if(match_cons(t, sym__2))
    {
      e_17 = ATgetArgument(t, 0);
      f_17 = ATgetArgument(t, 1);
      {
        ATerm j_20 = t;
        int l_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_17;
            if((l_17 != t))
              {
                _fail(t);
              }
            t = f_17;
            ;
            LocalPopChoice(l_20);
          }
        else
          {
            t = j_20;
            t = (ATerm) ATmakeAppl(sym__2, l_17, o_17);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, l_17, o_17);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm w_135 (ATerm), ATerm t)
{
  ATerm v_18 (ATerm t)
  {
    ATerm m_20 = t;
    int n_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_135(t);
        ;
        LocalPopChoice(n_20);
      }
    else
      {
        t = m_20;
        {
          ATerm s_18 = NULL,t_18 = NULL,u_18 = NULL;
          ATerm m_2 (ATerm t)
          {
            ATerm b_18 = NULL;
            b_18 = t;
            t = (ATerm) ATmakeAppl(sym__2, b_18, not_null(u_18));
            t = v_18(t);
            return(t);
          }
          if(((s_18 != NULL) && (s_18 != t)))
            _fail(t);
          else
            s_18 = t;
          if(match_cons(t, sym__2))
            {
              if(((t_18 != NULL) && (t_18 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                t_18 = ATgetArgument(t, 0);
              if(((u_18 != NULL) && (u_18 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                u_18 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = not_null(t_18);
          t = SRTS_all(m_2, t);
        }
      }
    return(t);
  }
  t = v_18(t);
  return(t);
}
ATerm rename_4_0 (ATerm d_135 (ATerm (ATerm), ATerm), ATerm e_135 (ATerm), ATerm f_135 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm g_135 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm j_19 = NULL;
  ATerm g_20 (ATerm t)
  {
    ATerm n_2 (ATerm t)
    {
      ATerm x_19 = NULL,y_19 = NULL,z_19 = NULL;
      if(((x_19 != NULL) && (x_19 != t)))
        _fail(t);
      else
        x_19 = t;
      if(match_cons(t, sym__2))
        {
          if(((y_19 != NULL) && (y_19 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            y_19 = ATgetArgument(t, 0);
          if(((z_19 != NULL) && (z_19 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            z_19 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm o_20 = t;
        int r_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_2 (ATerm t)
            {
              ATerm f_20 = NULL;
              f_20 = t;
              t = (ATerm) ATmakeAppl(sym__2, f_20, not_null(z_19));
              t = lookup_0_0(t);
              return(t);
            }
            t = not_null(y_19);
            t = d_135(o_2, t);
            ;
            LocalPopChoice(r_20);
          }
        else
          {
            t = o_20;
            {
              ATerm l_18 = NULL,o_18 = NULL,w_18 = NULL;
              t = not_null(x_19);
              t = m_8(e_135, g_135, not_null(y_19), not_null(z_19), t);
              if(match_cons(t, sym__3))
                {
                  l_18 = ATgetArgument(t, 0);
                  o_18 = ATgetArgument(t, 1);
                  w_18 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = l_8(g_20, f_135, l_18, o_18, w_18, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(n_2, t);
    return(t);
  }
  if(((j_19 != NULL) && (j_19 != t)))
    _fail(t);
  else
    j_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(j_19), (ATerm) ATempty);
  t = g_20(t);
  return(t);
}
ATerm p_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_20 = ATgetArgument(t, 0);
      if(((ATgetType(w_20) != AT_LIST) || !(ATisEmpty(w_20))))
        _fail(t);
      {
        ATerm x_20 = ATgetArgument(t, 1);
        if(((ATgetType(x_20) != AT_LIST) || !(ATisEmpty(x_20))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm s_20 = NULL,t_20 = NULL,u_20 = NULL,v_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_21 = ATgetArgument(t, 0);
      if(((ATgetType(a_21) == AT_LIST) && !(ATisEmpty(a_21))))
        {
          s_20 = ATgetFirst((ATermList) a_21);
          t_20 = (ATerm) ATgetNext((ATermList) a_21);
        }
      else
        _fail(t);
      {
        ATerm b_21 = ATgetArgument(t, 1);
        if(((ATgetType(b_21) == AT_LIST) && !(ATisEmpty(b_21))))
          {
            u_20 = ATgetFirst((ATermList) b_21);
            v_20 = (ATerm) ATgetNext((ATermList) b_21);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_20, u_20), (ATerm) ATmakeAppl(sym__2, t_20, v_20));
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm y_20 = NULL,z_20 = NULL;
  if(match_cons(t, sym__2))
    {
      y_20 = ATgetArgument(t, 0);
      z_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_20), y_20);
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm d_21 = NULL,f_21 = NULL,h_21 = NULL;
  if(match_cons(t, sym__2))
    {
      d_21 = ATgetArgument(t, 0);
      h_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_21;
  {
    ATerm c_21 = t;
    int e_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm g_21 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(e_21);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, h_21);
      }
    else
      {
        t = c_21;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm i_21 = ATgetArgument(t, 0);
            f_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, h_21, f_21);
      }
  }
  return(t);
}
ATerm t_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_21 = ATgetArgument(t, 0);
      if(((ATgetType(j_21) != AT_LIST) || !(ATisEmpty(j_21))))
        _fail(t);
      {
        ATerm k_21 = ATgetArgument(t, 1);
        if(((ATgetType(k_21) != AT_LIST) || !(ATisEmpty(k_21))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm f_23 = NULL,g_23 = NULL,p_23 = NULL,q_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_21 = ATgetArgument(t, 0);
      if(((ATgetType(l_21) == AT_LIST) && !(ATisEmpty(l_21))))
        {
          f_23 = ATgetFirst((ATermList) l_21);
          g_23 = (ATerm) ATgetNext((ATermList) l_21);
        }
      else
        _fail(t);
      {
        ATerm m_21 = ATgetArgument(t, 1);
        if(((ATgetType(m_21) == AT_LIST) && !(ATisEmpty(m_21))))
          {
            p_23 = ATgetFirst((ATermList) m_21);
            q_23 = (ATerm) ATgetNext((ATermList) m_21);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_23, p_23), (ATerm) ATmakeAppl(sym__2, g_23, q_23));
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm w_23 = NULL,y_23 = NULL;
  if(match_cons(t, sym__2))
    {
      w_23 = ATgetArgument(t, 0);
      y_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_23), w_23);
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm b_24 = NULL,d_24 = NULL,e_24 = NULL;
  if(match_cons(t, sym__2))
    {
      b_24 = ATgetArgument(t, 0);
      e_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_24;
  {
    ATerm n_21 = t;
    int o_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm p_21 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(o_21);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, e_24);
      }
    else
      {
        t = n_21;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm q_21 = ATgetArgument(t, 0);
            d_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, e_24, d_24);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm l_121 (ATerm), ATerm t)
{
  ATerm x_24 = NULL,d_25 = NULL,e_25 = NULL,g_25 = NULL,j_25 = NULL;
  x_24 = t;
  if(match_cons(t, sym_Scope_2))
    {
      d_25 = ATgetArgument(t, 0);
      e_25 = ATgetArgument(t, 1);
      {
        ATerm g_19 = NULL,k_19 = NULL,w_2 = NULL;
        t = SSLgetAnnotations(x_24);
        g_19 = t;
        t = d_25;
        t = l_121(t);
        k_19 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, k_19, e_25);
        w_2 = t;
        t = SSLsetAnnotations(w_2, g_19);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          d_25 = ATgetArgument(t, 0);
          e_25 = ATgetArgument(t, 1);
          g_25 = ATgetArgument(t, 2);
          j_25 = ATgetArgument(t, 3);
          {
            ATerm k_20 = NULL,p_20 = NULL,q_20 = NULL,x_2 = NULL;
            t = SSLgetAnnotations(x_24);
            k_20 = t;
            t = g_25;
            t = l_121(t);
            q_20 = t;
            t = (ATerm) ATmakeAppl(sym__2, g_25, q_20);
            t = genzip_4_0(p_2, q_2, r_2, s_2, t);
            p_20 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, d_25, e_25, p_20, j_25);
            x_2 = t;
            t = SSLsetAnnotations(x_2, k_20);
          }
        }
      else
        {
          ATerm q_22 = NULL,b_23 = NULL,d_23 = NULL,y_2 = NULL;
          if(match_cons(t, sym_RDefT_4))
            {
              d_25 = ATgetArgument(t, 0);
              e_25 = ATgetArgument(t, 1);
              g_25 = ATgetArgument(t, 2);
              j_25 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(x_24);
          q_22 = t;
          t = g_25;
          t = l_121(t);
          d_23 = t;
          t = (ATerm) ATmakeAppl(sym__2, g_25, d_23);
          t = genzip_4_0(t_2, v_2, z_2, a_3, t);
          b_23 = t;
          t = (ATerm) ATmakeAppl(sym_RDefT_4, d_25, e_25, b_23, j_25);
          y_2 = t;
          t = SSLsetAnnotations(y_2, q_22);
        }
    }
  return(t);
}
ATerm Var_1_0 (ATerm b_107 (ATerm), ATerm t)
{
  ATerm p_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL,c_3 = NULL;
  t_25 = t;
  if(match_cons(t, sym_Var_1))
    {
      r_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_25);
  p_25 = t;
  t = r_25;
  t = b_107(t);
  s_25 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, s_25);
  c_3 = t;
  t = SSLsetAnnotations(c_3, p_25);
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm r_21 = t;
  int s_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(s_21);
    }
  else
    {
      t = r_21;
      {
        ATerm l_26 = NULL,m_26 = NULL,o_26 = NULL,p_26 = NULL;
        if(match_cons(t, sym_SDefT_4))
          {
            l_26 = ATgetArgument(t, 0);
            m_26 = ATgetArgument(t, 1);
            o_26 = ATgetArgument(t, 2);
            p_26 = ATgetArgument(t, 3);
            t = o_26;
            t = map_1_0(d_3, t);
          }
        else
          {
            if(match_cons(t, sym_RDefT_4))
              {
                l_26 = ATgetArgument(t, 0);
                m_26 = ATgetArgument(t, 1);
                o_26 = ATgetArgument(t, 2);
                p_26 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = o_26;
            t = map_1_0(i_3, t);
          }
      }
    }
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm z_26 = NULL;
  ATerm t_21 = t;
  int u_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_26 = ATgetArgument(t, 0);
          {
            ATerm v_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_21);
      t = z_26;
    }
  else
    {
      t = t_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_26;
    }
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm m_27 = NULL;
  ATerm w_21 = t;
  int x_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_27 = ATgetArgument(t, 0);
          {
            ATerm y_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_21);
      t = m_27;
    }
  else
    {
      t = w_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_27;
    }
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm p_27 = NULL,v_27 = NULL,w_27 = NULL,a_28 = NULL,c_28 = NULL;
  p_27 = t;
  if(match_cons(t, sym_Let_2))
    {
      v_27 = ATgetArgument(t, 0);
      w_27 = ATgetArgument(t, 1);
      t = p_27;
      t = k_8(v_27, w_27, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          v_27 = ATgetArgument(t, 0);
          w_27 = ATgetArgument(t, 1);
          a_28 = ATgetArgument(t, 2);
          t = w_27;
          t = map_1_0(k_3, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              v_27 = ATgetArgument(t, 0);
              w_27 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, v_27);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  v_27 = ATgetArgument(t, 0);
                  w_27 = ATgetArgument(t, 1);
                  a_28 = ATgetArgument(t, 2);
                  c_28 = ATgetArgument(t, 3);
                  t = w_27;
                  t = map_1_0(o_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      v_27 = ATgetArgument(t, 0);
                      w_27 = ATgetArgument(t, 1);
                      a_28 = ATgetArgument(t, 2);
                      c_28 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = w_27;
                  t = map_1_0(p_3, t);
                }
            }
        }
    }
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm z_28 = NULL;
  ATerm z_21 = t;
  int a_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_28 = ATgetArgument(t, 0);
          {
            ATerm b_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_22);
      t = z_28;
    }
  else
    {
      t = z_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_28;
    }
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm o_29 = NULL;
  ATerm c_22 = t;
  int d_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_29 = ATgetArgument(t, 0);
          {
            ATerm e_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_22);
      t = o_29;
    }
  else
    {
      t = c_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_29;
    }
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm x_29 = NULL;
  ATerm f_22 = t;
  int g_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_29 = ATgetArgument(t, 0);
          {
            ATerm h_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_22);
      t = x_29;
    }
  else
    {
      t = f_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_29;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, b_3, tboundin_3_0, tpaste_1_0, t);
  t = rename_4_0(SVar_1_0, j_3, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm Anno__Cong_____2_0 (ATerm j_120 (ATerm), ATerm k_120 (ATerm), ATerm t)
{
  ATerm g_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL,k_30 = NULL;
  k_30 = t;
  g_30 = t;
  t = SSLgetAnnotations(k_30);
  i_30 = t;
  t = g_30;
  t = j_120(t);
  h_30 = t;
  t = i_30;
  t = k_120(t);
  j_30 = t;
  t = SSLsetAnnotations(h_30, j_30);
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm i_22 = t;
  int j_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_31 = NULL,j_31 = NULL,k_31 = NULL,i_25 = NULL,f_3 = NULL;
      i_31 = t;
      if(match_cons(t, sym_Op_2))
        {
          j_31 = ATgetArgument(t, 0);
          k_31 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(i_31);
      i_25 = t;
      t = j_31;
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Op_2, j_31, k_31);
      f_3 = t;
      t = SSLsetAnnotations(f_3, i_25);
      ;
      LocalPopChoice(j_22);
    }
  else
    {
      t = i_22;
      t = Anno__Cong_____2_0(g_4, i_4, t);
    }
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm l_31 = NULL,q_31 = NULL,r_31 = NULL,g_3 = NULL;
  r_31 = t;
  if(match_cons(t, sym_Var_1))
    {
      q_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_31);
  l_31 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, q_31);
  g_3 = t;
  t = SSLsetAnnotations(g_3, l_31);
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm z_31 = NULL,g_32 = NULL,h_32 = NULL;
  z_31 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_31;
    }
  else
    {
      ATerm a_26 = NULL,h_3 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_32 = ATgetFirst((ATermList) t);
          h_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_31);
      a_26 = t;
      t = g_32;
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("unbound", 0, ATtrue)))
        _fail(t);
      t = h_32;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(h_32), g_32);
      h_3 = t;
      t = SSLsetAnnotations(h_3, a_26);
    }
  return(t);
}
ATerm q_9 (ATerm w_96, ATerm v_96, ATerm t)
{
  t = w_96;
  {
    ATerm k_22 = t;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(q_3, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_22;
      }
    t = (ATerm) ATmakeAppl(sym_Build_1, w_96);
  }
  return(t);
}
ATerm MatchBuildIdemVar_0_0 (ATerm t)
{
  ATerm u_32 = NULL,v_32 = NULL,x_32 = NULL,y_32 = NULL,z_32 = NULL,a_33 = NULL,b_33 = NULL,c_33 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      x_32 = ATgetArgument(t, 0);
      a_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_32;
  if(match_cons(t, sym_Match_1))
    {
      y_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_32;
  if(match_cons(t, sym_Var_1))
    {
      z_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_33;
  if(match_cons(t, sym_Seq_2))
    {
      b_33 = ATgetArgument(t, 0);
      v_32 = ATgetArgument(t, 1);
      t = b_33;
      if(match_cons(t, sym_Build_1))
        {
          c_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_33;
      if(match_cons(t, sym_Var_1))
        {
          u_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_32;
      if((z_32 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, z_32)), v_32);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          b_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_33;
      if(match_cons(t, sym_Var_1))
        {
          c_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_33;
      if((z_32 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, z_32));
    }
  return(t);
}
ATerm BuildMatchIdem_0_0 (ATerm t)
{
  ATerm n_33 = NULL,p_33 = NULL,t_33 = NULL,u_33 = NULL,b_34 = NULL,c_34 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      t_33 = ATgetArgument(t, 0);
      b_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_33;
  if(match_cons(t, sym_Build_1))
    {
      u_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_34;
  if(match_cons(t, sym_Seq_2))
    {
      c_34 = ATgetArgument(t, 0);
      p_33 = ATgetArgument(t, 1);
      t = c_34;
      if(match_cons(t, sym_Match_1))
        {
          n_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_33;
      if((u_33 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, u_33), p_33);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          c_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_34;
      if((u_33 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Build_1, u_33);
    }
  return(t);
}
ATerm MatchIdem_0_0 (ATerm t)
{
  ATerm m_35 = NULL,o_35 = NULL,u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      u_35 = ATgetArgument(t, 0);
      w_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_35;
  if(match_cons(t, sym_Match_1))
    {
      v_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_35;
  if(match_cons(t, sym_Seq_2))
    {
      x_35 = ATgetArgument(t, 0);
      o_35 = ATgetArgument(t, 1);
      t = x_35;
      if(match_cons(t, sym_Match_1))
        {
          m_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_35;
      if((v_35 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, v_35), o_35);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          x_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_35;
      if((v_35 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, v_35);
    }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm l_36 = NULL,m_36 = NULL,n_36 = NULL,p_36 = NULL,r_36 = NULL,s_36 = NULL,t_36 = NULL,y_36 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      p_36 = ATgetArgument(t, 0);
      r_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_36;
  if(match_cons(t, sym_Build_1))
    {
      ATerm l_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_36;
  if(match_cons(t, sym_Seq_2))
    {
      s_36 = ATgetArgument(t, 0);
      t_36 = ATgetArgument(t, 1);
      t = s_36;
      if(match_cons(t, sym_PrimT_3))
        {
          l_36 = ATgetArgument(t, 0);
          m_36 = ATgetArgument(t, 1);
          n_36 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, l_36, m_36, n_36), t_36);
    }
  else
    {
      if(match_cons(t, sym_PrimT_3))
        {
          s_36 = ATgetArgument(t, 0);
          t_36 = ATgetArgument(t, 1);
          y_36 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, s_36, t_36, y_36);
    }
  return(t);
}
ATerm BuildBuild_0_0 (ATerm t)
{
  ATerm p_37 = NULL,q_37 = NULL,s_37 = NULL,x_37 = NULL,z_37 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      s_37 = ATgetArgument(t, 0);
      x_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_37;
  if(match_cons(t, sym_Build_1))
    {
      ATerm m_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_37;
  if(match_cons(t, sym_Seq_2))
    {
      z_37 = ATgetArgument(t, 0);
      q_37 = ATgetArgument(t, 1);
      t = z_37;
      if(match_cons(t, sym_Build_1))
        {
          p_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, p_37), q_37);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          z_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Build_1, z_37);
    }
  return(t);
}
ATerm j_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_22 = ATgetArgument(t, 0);
      if(((ATgetType(n_22) != AT_LIST) || !(ATisEmpty(n_22))))
        _fail(t);
      {
        ATerm o_22 = ATgetArgument(t, 1);
        if(((ATgetType(o_22) != AT_LIST) || !(ATisEmpty(o_22))))
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
  ATerm x_39 = NULL,y_39 = NULL,z_39 = NULL,a_40 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_22 = ATgetArgument(t, 0);
      if(((ATgetType(p_22) == AT_LIST) && !(ATisEmpty(p_22))))
        {
          x_39 = ATgetFirst((ATermList) p_22);
          y_39 = (ATerm) ATgetNext((ATermList) p_22);
        }
      else
        _fail(t);
      {
        ATerm r_22 = ATgetArgument(t, 1);
        if(((ATgetType(r_22) == AT_LIST) && !(ATisEmpty(r_22))))
          {
            z_39 = ATgetFirst((ATermList) r_22);
            a_40 = (ATerm) ATgetNext((ATermList) r_22);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_39, z_39), (ATerm) ATmakeAppl(sym__2, y_39, a_40));
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm b_40 = NULL,c_40 = NULL;
  if(match_cons(t, sym__2))
    {
      b_40 = ATgetArgument(t, 0);
      c_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_40), b_40);
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm g_40 = NULL,h_40 = NULL;
  if(match_cons(t, sym__2))
    {
      g_40 = ATgetArgument(t, 0);
      h_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, g_40), (ATerm) ATmakeAppl(sym_Match_1, h_40));
  return(t);
}
ATerm n_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_22 = ATgetArgument(t, 0);
      if(((ATgetType(s_22) != AT_LIST) || !(ATisEmpty(s_22))))
        _fail(t);
      {
        ATerm t_22 = ATgetArgument(t, 1);
        if(((ATgetType(t_22) != AT_LIST) || !(ATisEmpty(t_22))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm r_40 = NULL,s_40 = NULL,t_40 = NULL,u_40 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_22 = ATgetArgument(t, 0);
      if(((ATgetType(u_22) == AT_LIST) && !(ATisEmpty(u_22))))
        {
          r_40 = ATgetFirst((ATermList) u_22);
          s_40 = (ATerm) ATgetNext((ATermList) u_22);
        }
      else
        _fail(t);
      {
        ATerm v_22 = ATgetArgument(t, 1);
        if(((ATgetType(v_22) == AT_LIST) && !(ATisEmpty(v_22))))
          {
            t_40 = ATgetFirst((ATermList) v_22);
            u_40 = (ATerm) ATgetNext((ATermList) v_22);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_40, t_40), (ATerm) ATmakeAppl(sym__2, s_40, u_40));
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm v_40 = NULL,w_40 = NULL;
  if(match_cons(t, sym__2))
    {
      v_40 = ATgetArgument(t, 0);
      w_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_40), v_40);
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm x_40 = NULL,y_40 = NULL;
  if(match_cons(t, sym__2))
    {
      x_40 = ATgetArgument(t, 0);
      y_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, x_40), (ATerm) ATmakeAppl(sym_Match_1, y_40));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm w_38 = NULL,x_38 = NULL,y_38 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL,h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      e_39 = ATgetArgument(t, 0);
      i_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_39;
  if(match_cons(t, sym_Build_1))
    {
      f_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_39;
  if(match_cons(t, sym_Op_2))
    {
      g_39 = ATgetArgument(t, 0);
      h_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_39;
  if(match_cons(t, sym_Seq_2))
    {
      j_39 = ATgetArgument(t, 0);
      y_38 = ATgetArgument(t, 1);
      {
        ATerm w_39 = NULL;
        t = j_39;
        if(match_cons(t, sym_Match_1))
          {
            k_39 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = k_39;
        if(match_cons(t, sym_Op_2))
          {
            w_38 = ATgetArgument(t, 0);
            x_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = w_38;
        if((g_39 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym__2, h_39, x_38);
        t = genzip_4_0(j_4, k_4, l_4, m_4, t);
        w_39 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, w_39), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, g_39, h_39)), y_38));
      }
    }
  else
    {
      ATerm m_40 = NULL;
      if(match_cons(t, sym_Match_1))
        {
          j_39 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_39;
      if(match_cons(t, sym_Op_2))
        {
          k_39 = ATgetArgument(t, 0);
          l_39 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = k_39;
      if((g_39 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, h_39, l_39);
      t = genzip_4_0(n_4, o_4, p_4, q_4, t);
      m_40 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, m_40), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, g_39, h_39)));
    }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm n_44 = NULL,q_44 = NULL,x_44 = NULL,b_45 = NULL,c_45 = NULL,i_45 = NULL,j_45 = NULL,k_45 = NULL;
  q_44 = t;
  if(match_cons(t, sym_Seq_2))
    {
      x_44 = ATgetArgument(t, 0);
      i_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_44;
  if(match_cons(t, sym_Build_1))
    {
      b_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_45;
  if(match_cons(t, sym_Op_2))
    {
      c_45 = ATgetArgument(t, 0);
      {
        ATerm w_22 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = i_45;
  {
    ATerm x_22 = t;
    int y_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Seq_2))
          {
            j_45 = ATgetArgument(t, 0);
            {
              ATerm z_22 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(y_22);
        t = j_45;
        if(match_cons(t, sym_Match_1))
          {
            k_45 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = k_45;
        if(match_cons(t, sym_Op_2))
          {
            n_44 = ATgetArgument(t, 0);
            {
              ATerm a_23 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, c_45, n_44);
        {
          ATerm c_23 = t;
          if((PushChoice() == 0))
            {
              ATerm r_26 = NULL;
              if(match_cons(t, sym__2))
                {
                  r_26 = ATgetArgument(t, 0);
                  if((r_26 != ATgetArgument(t, 1)))
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
              t = c_23;
            }
          t = term_e_23;
        }
      }
    else
      {
        t = x_22;
        if(match_cons(t, sym_Match_1))
          {
            j_45 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = j_45;
        if(match_cons(t, sym_Op_2))
          {
            k_45 = ATgetArgument(t, 0);
            {
              ATerm h_23 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, c_45, k_45);
        {
          ATerm i_23 = t;
          if((PushChoice() == 0))
            {
              ATerm t_27 = NULL;
              if(match_cons(t, sym__2))
                {
                  t_27 = ATgetArgument(t, 0);
                  if((t_27 != ATgetArgument(t, 1)))
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
              t = i_23;
            }
          t = term_e_23;
        }
      }
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm p_123 (ATerm), ATerm t)
{
  ATerm q_45 (ATerm t)
  {
    ATerm j_23 = t;
    int k_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_123(t);
        ;
        LocalPopChoice(k_23);
      }
    else
      {
        t = j_23;
        t = SRTS_one(q_45, t);
      }
    return(t);
  }
  t = q_45(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm j_47 = NULL,m_47 = NULL,n_47 = NULL,o_47 = NULL,p_47 = NULL,q_47 = NULL,u_47 = NULL,w_47 = NULL,b_48 = NULL,c_48 = NULL,d_48 = NULL,j_48 = NULL,k_48 = NULL;
  j_47 = t;
  if(match_cons(t, sym_Let_2))
    {
      m_47 = ATgetArgument(t, 0);
      b_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_48;
  if(match_cons(t, sym_Let_2))
    {
      c_48 = ATgetArgument(t, 0);
      j_48 = ATgetArgument(t, 1);
      {
        ATerm p_48 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, m_47, c_48);
        t = conc_0_0(t);
        p_48 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, p_48, j_48);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          c_48 = ATgetArgument(t, 0);
          j_48 = ATgetArgument(t, 1);
          k_48 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = m_47;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_47 = ATgetFirst((ATermList) t);
          w_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_47;
      if(match_cons(t, sym_SDefT_4))
        {
          o_47 = ATgetArgument(t, 0);
          p_47 = ATgetArgument(t, 1);
          q_47 = ATgetArgument(t, 2);
          u_47 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = p_47;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = q_47;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = w_47;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = c_48;
      if(match_cons(t, sym_SVar_1))
        {
          d_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_48;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = k_48;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = d_48;
      if((o_47 != t))
        {
          _fail(t);
        }
      t = u_47;
      {
        ATerm l_23 = t;
        if((PushChoice() == 0))
          {
            ATerm r_4 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm m_23 = ATgetArgument(t, 0);
                  if(match_cons(m_23, sym_SVar_1))
                    {
                      if(((o_47 != NULL) && (o_47 != ATgetArgument(m_23, 0))))
                        _fail(ATgetArgument(m_23, 0));
                      else
                        o_47 = ATgetArgument(m_23, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm n_23 = ATgetArgument(t, 1);
                    if(((ATgetType(n_23) != AT_LIST) || !(ATisEmpty(n_23))))
                      _fail(t);
                  }
                  {
                    ATerm o_23 = ATgetArgument(t, 2);
                    if(((ATgetType(o_23) != AT_LIST) || !(ATisEmpty(o_23))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1_0(r_4, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = l_23;
          }
        t = not_null(u_47);
      }
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm b_49 = NULL,c_49 = NULL,h_49 = NULL,i_49 = NULL,j_49 = NULL,k_49 = NULL,q_49 = NULL,r_49 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      q_49 = ATgetArgument(t, 0);
      t = q_49;
      if(match_cons(t, sym_Seq_2))
        {
          k_49 = ATgetArgument(t, 0);
          c_49 = ATgetArgument(t, 1);
          t = k_49;
          if(match_cons(t, sym_Where_1))
            {
              b_49 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = c_49;
          if(match_cons(t, sym_Seq_2))
            {
              h_49 = ATgetArgument(t, 0);
              j_49 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = h_49;
          if(match_cons(t, sym_Build_1))
            {
              i_49 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, b_49, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, i_49), j_49)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              k_49 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, k_49);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          q_49 = ATgetArgument(t, 0);
          t = q_49;
          if(match_cons(t, sym_Test_1))
            {
              k_49 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, k_49);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              q_49 = ATgetArgument(t, 0);
              t = q_49;
              if(match_cons(t, sym_Not_1))
                {
                  k_49 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, k_49);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  q_49 = ATgetArgument(t, 0);
                  r_49 = ATgetArgument(t, 1);
                  t = r_49;
                  if((q_49 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      q_49 = ATgetArgument(t, 0);
                      r_49 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = r_49;
                  if((q_49 != t))
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
  ATerm c_52 = NULL,d_52 = NULL,j_52 = NULL,l_52 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      c_52 = ATgetArgument(t, 0);
      l_52 = ATgetArgument(t, 1);
      t = c_52;
      if(match_cons(t, sym_LChoice_2))
        {
          d_52 = ATgetArgument(t, 0);
          j_52 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, d_52, (ATerm) ATmakeAppl(sym_LChoice_2, j_52, l_52));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          c_52 = ATgetArgument(t, 0);
          l_52 = ATgetArgument(t, 1);
          t = c_52;
          if(match_cons(t, sym_Seq_2))
            {
              d_52 = ATgetArgument(t, 0);
              j_52 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, d_52, (ATerm) ATmakeAppl(sym_Seq_2, j_52, l_52));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              c_52 = ATgetArgument(t, 0);
              l_52 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = c_52;
          if(match_cons(t, sym_Choice_2))
            {
              d_52 = ATgetArgument(t, 0);
              j_52 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, d_52, (ATerm) ATmakeAppl(sym_Choice_2, j_52, l_52));
        }
    }
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm c_55 = NULL,d_55 = NULL,e_55 = NULL;
  c_55 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_55 = ATgetFirst((ATermList) t);
      e_55 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm r_23 = t;
    int s_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_28 = NULL,r_28 = NULL,t_28 = NULL,u_28 = NULL,k_29 = NULL,n_29 = NULL,y_29 = NULL,m_3 = NULL,l_3 = NULL;
        t = SSLgetAnnotations(c_55);
        k_29 = t;
        t = d_55;
        t = n_0(t);
        n_29 = t;
        t = (ATerm) ATinsert(CheckATermList(e_55), n_29);
        l_3 = t;
        t = SSLsetAnnotations(l_3, k_29);
        y_29 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_28 = ATgetFirst((ATermList) t);
            t_28 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_29);
        q_28 = t;
        t = t_28;
        {
          ATerm t_23 = t;
          int u_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(n_0, t);
              ;
              LocalPopChoice(u_23);
            }
          else
            {
              t = t_23;
            }
          u_28 = t;
          t = (ATerm) ATinsert(CheckATermList(u_28), r_28);
          m_3 = t;
          t = SSLsetAnnotations(m_3, q_28);
        }
        ;
        LocalPopChoice(s_23);
      }
    else
      {
        t = r_23;
        {
          ATerm q_30 = NULL,t_30 = NULL,n_3 = NULL;
          t = SSLgetAnnotations(c_55);
          q_30 = t;
          t = e_55;
          t = map1_1_0(n_0, t);
          t_30 = t;
          t = (ATerm) ATinsert(CheckATermList(t_30), d_55);
          n_3 = t;
          t = SSLsetAnnotations(n_3, q_30);
        }
      }
  }
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm p_57 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      p_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, p_57, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_z_23), term_z_23));
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm t_57 = NULL,w_57 = NULL;
  w_57 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      t_57 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, t_57, term_z_23);
    }
  else
    {
      t = w_57;
    }
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm j_58 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      j_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, j_58, term_z_23);
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm k_58 = NULL,l_58 = NULL;
  l_58 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      k_58 = ATgetArgument(t, 0);
      {
        ATerm a_24 = t;
        int c_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_VarDec_2, k_58, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_z_23), term_z_23));
            ;
            LocalPopChoice(c_24);
          }
        else
          {
            t = a_24;
            t = l_58;
          }
      }
    }
  else
    {
      t = l_58;
    }
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm e_59 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      e_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, e_59, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_z_23), term_z_23));
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm h_59 = NULL,i_59 = NULL;
  i_59 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      h_59 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, h_59, term_z_23);
    }
  else
    {
      t = i_59;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm x_55 = NULL,y_55 = NULL,z_55 = NULL,a_56 = NULL,i_56 = NULL,j_56 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      i_56 = ATgetArgument(t, 0);
      j_56 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, i_56, j_56);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          i_56 = ATgetArgument(t, 0);
          t = i_56;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              x_55 = ATgetFirst((ATermList) t);
              y_55 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, x_55, (ATerm) ATmakeAppl(sym_LChoices_1, y_55));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_e_23;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              i_56 = ATgetArgument(t, 0);
              t = i_56;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  x_55 = ATgetFirst((ATermList) t);
                  y_55 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, x_55, (ATerm) ATmakeAppl(sym_Choices_1, y_55));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_e_23;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  i_56 = ATgetArgument(t, 0);
                  t = i_56;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      x_55 = ATgetFirst((ATermList) t);
                      y_55 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_55, (ATerm) ATmakeAppl(sym_Seqs_1, y_55));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_f_24;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      i_56 = ATgetArgument(t, 0);
                      j_56 = ATgetArgument(t, 1);
                      a_56 = ATgetArgument(t, 2);
                      z_55 = ATgetArgument(t, 3);
                      {
                        ATerm c_57 = NULL,h_57 = NULL;
                        t = j_56;
                        t = map1_1_0(t_4, t);
                        c_57 = t;
                        t = a_56;
                        t = map1_1_0(v_4, t);
                        h_57 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, i_56, c_57, h_57, z_55);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          i_56 = ATgetArgument(t, 0);
                          j_56 = ATgetArgument(t, 1);
                          a_56 = ATgetArgument(t, 2);
                          z_55 = ATgetArgument(t, 3);
                          {
                            ATerm g_24 = t;
                            int h_24 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm d_58 = NULL,f_58 = NULL;
                                t = a_56;
                                t = map1_1_0(w_4, t);
                                d_58 = t;
                                t = j_56;
                                t = map_1_0(z_4, t);
                                f_58 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, i_56, f_58, d_58, z_55);
                                ;
                                LocalPopChoice(h_24);
                              }
                            else
                              {
                                t = g_24;
                                {
                                  ATerm b_59 = NULL,d_59 = NULL;
                                  t = j_56;
                                  t = map1_1_0(a_5, t);
                                  b_59 = t;
                                  t = a_56;
                                  t = map_1_0(b_5, t);
                                  d_59 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, i_56, b_59, d_59, z_55);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              i_56 = ATgetArgument(t, 0);
                              j_56 = ATgetArgument(t, 1);
                              a_56 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, j_56, (ATerm) ATmakeAppl(sym_Op_2, term_i_24, (ATerm) ATinsert(ATinsert(ATempty, a_56), i_56)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  i_56 = ATgetArgument(t, 0);
                                  j_56 = ATgetArgument(t, 1);
                                  a_56 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, a_56)), i_56), (ATerm) ATmakeAppl(sym_Build_1, j_56)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      i_56 = ATgetArgument(t, 0);
                                      j_56 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, i_56, (ATerm) ATmakeAppl(sym_Match_1, j_56));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          i_56 = ATgetArgument(t, 0);
                                          j_56 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, i_56), j_56);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              i_56 = ATgetArgument(t, 0);
                                              j_56 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, j_56), i_56);
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
ATerm c_5 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm r_62 = NULL,w_62 = NULL,x_62 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      r_62 = ATgetArgument(t, 0);
      t = r_62;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_e_23;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          r_62 = ATgetArgument(t, 0);
          t = r_62;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_f_24;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              r_62 = ATgetArgument(t, 0);
              w_62 = ATgetArgument(t, 1);
              t = r_62;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_e_23;
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  r_62 = ATgetArgument(t, 0);
                  w_62 = ATgetArgument(t, 1);
                  t = w_62;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_e_23;
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      r_62 = ATgetArgument(t, 0);
                      w_62 = ATgetArgument(t, 1);
                      t = w_62;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = term_e_23;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          r_62 = ATgetArgument(t, 0);
                          t = r_62;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_e_23;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              r_62 = ATgetArgument(t, 0);
                              t = r_62;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_e_23;
                            }
                          else
                            {
                              if(match_cons(t, sym_Path_2))
                                {
                                  r_62 = ATgetArgument(t, 0);
                                  w_62 = ATgetArgument(t, 1);
                                  t = w_62;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_e_23;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      r_62 = ATgetArgument(t, 0);
                                      w_62 = ATgetArgument(t, 1);
                                      t = w_62;
                                      t = fetch_1_0(c_5, t);
                                      t = term_e_23;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          r_62 = ATgetArgument(t, 0);
                                          w_62 = ATgetArgument(t, 1);
                                          t = w_62;
                                          if(match_cons(t, sym_Fail_0))
                                            {
                                              t = r_62;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = w_62;
                                                }
                                              else
                                                {
                                                  t = r_62;
                                                }
                                            }
                                          else
                                            {
                                              t = r_62;
                                              if(!(match_cons(t, sym_Fail_0)))
                                                _fail(t);
                                              t = w_62;
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              r_62 = ATgetArgument(t, 0);
                                              w_62 = ATgetArgument(t, 1);
                                              t = w_62;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = r_62;
                                                  if(match_cons(t, sym_Fail_0))
                                                    {
                                                      t = w_62;
                                                    }
                                                  else
                                                    {
                                                      t = r_62;
                                                    }
                                                }
                                              else
                                                {
                                                  t = r_62;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = w_62;
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  r_62 = ATgetArgument(t, 0);
                                                  t = r_62;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = term_e_23;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      r_62 = ATgetArgument(t, 0);
                                                      w_62 = ATgetArgument(t, 1);
                                                      x_62 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = x_62;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, r_62, w_62);
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
  ATerm z_65 = NULL,b_66 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      b_66 = ATgetArgument(t, 0);
      t = b_66;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_f_24;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          b_66 = ATgetArgument(t, 0);
          t = b_66;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_e_23;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              b_66 = ATgetArgument(t, 0);
              z_65 = ATgetArgument(t, 1);
              t = z_65;
              if(match_cons(t, sym_Id_0))
                {
                  t = b_66;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = z_65;
                    }
                  else
                    {
                      t = b_66;
                    }
                }
              else
                {
                  t = b_66;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = z_65;
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  b_66 = ATgetArgument(t, 0);
                  z_65 = ATgetArgument(t, 1);
                  t = b_66;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_f_24;
                }
              else
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      b_66 = ATgetArgument(t, 0);
                      z_65 = ATgetArgument(t, 1);
                      t = z_65;
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = term_f_24;
                    }
                  else
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          b_66 = ATgetArgument(t, 0);
                          z_65 = ATgetArgument(t, 1);
                          t = z_65;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = term_f_24;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              b_66 = ATgetArgument(t, 0);
                              t = b_66;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_f_24;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  b_66 = ATgetArgument(t, 0);
                                  t = b_66;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_f_24;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      b_66 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = b_66;
                                  if(!(match_cons(t, sym_Wld_0)))
                                    _fail(t);
                                  t = term_f_24;
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
  ATerm j_24 = t;
  int k_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(k_24);
    }
  else
    {
      t = j_24;
      {
        ATerm l_24 = t;
        int m_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(m_24);
          }
        else
          {
            t = l_24;
            {
              ATerm n_24 = t;
              int o_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(o_24);
                }
              else
                {
                  t = n_24;
                  {
                    ATerm p_24 = t;
                    int q_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
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
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(s_24);
                            }
                          else
                            {
                              t = r_24;
                              {
                                ATerm t_24 = t;
                                int u_24 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm g_67 = NULL,m_67 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        g_67 = ATgetArgument(t, 0);
                                        m_67 = ATgetArgument(t, 1);
                                        t = g_67;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = m_67;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            g_67 = ATgetArgument(t, 0);
                                            m_67 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = g_67;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = m_67;
                                      }
                                    ;
                                    LocalPopChoice(u_24);
                                  }
                                else
                                  {
                                    t = t_24;
                                    {
                                      ATerm v_24 = t;
                                      int w_24 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
                                          LocalPopChoice(w_24);
                                        }
                                      else
                                        {
                                          t = v_24;
                                          {
                                            ATerm y_24 = t;
                                            int z_24 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = MisMatch_0_0(t);
                                                ;
                                                LocalPopChoice(z_24);
                                              }
                                            else
                                              {
                                                t = y_24;
                                                {
                                                  ATerm a_25 = t;
                                                  int b_25 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = BuildMatchFusion_0_0(t);
                                                      ;
                                                      LocalPopChoice(b_25);
                                                    }
                                                  else
                                                    {
                                                      t = a_25;
                                                      {
                                                        ATerm c_25 = t;
                                                        int f_25 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = BuildBuild_0_0(t);
                                                            ;
                                                            LocalPopChoice(f_25);
                                                          }
                                                        else
                                                          {
                                                            t = c_25;
                                                            {
                                                              ATerm h_25 = t;
                                                              int k_25 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = BuildPrim_0_0(t);
                                                                  ;
                                                                  LocalPopChoice(k_25);
                                                                }
                                                              else
                                                                {
                                                                  t = h_25;
                                                                  {
                                                                    ATerm l_25 = t;
                                                                    int m_25 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = MatchIdem_0_0(t);
                                                                        ;
                                                                        LocalPopChoice(m_25);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = l_25;
                                                                        {
                                                                          ATerm n_25 = t;
                                                                          int o_25 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = BuildMatchIdem_0_0(t);
                                                                              ;
                                                                              LocalPopChoice(o_25);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = n_25;
                                                                              {
                                                                                ATerm q_25 = t;
                                                                                int u_25 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = MatchBuildIdemVar_0_0(t);
                                                                                    ;
                                                                                    LocalPopChoice(u_25);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = q_25;
                                                                                    {
                                                                                      ATerm p_67 = NULL,w_67 = NULL,c_68 = NULL,f_68 = NULL;
                                                                                      w_67 = t;
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          c_68 = ATgetArgument(t, 0);
                                                                                          f_68 = ATgetArgument(t, 1);
                                                                                          t = c_68;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              p_67 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = w_67;
                                                                                          t = q_9(p_67, f_68, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_As_2))
                                                                                            {
                                                                                              c_68 = ATgetArgument(t, 0);
                                                                                              f_68 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = c_68;
                                                                                          if(!(match_cons(t, sym_Wld_0)))
                                                                                            _fail(t);
                                                                                          t = f_68;
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
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm simple_strategy_0_0 (ATerm t)
{
  ATerm f_75 = NULL,g_75 = NULL,h_75 = NULL,i_75 = NULL;
  g_75 = t;
  if(match_cons(t, sym_Id_0))
    {
      t = g_75;
    }
  else
    {
      if(match_cons(t, sym_Fail_0))
        {
          t = g_75;
        }
      else
        {
          if(match_cons(t, sym_Build_1))
            {
              h_75 = ATgetArgument(t, 0);
              {
                ATerm g_34 = NULL,i_34 = NULL,w_3 = NULL;
                t = SSLgetAnnotations(not_null(g_75));
                if(((g_34 != NULL) && (g_34 != t)))
                  _fail(t);
                else
                  g_34 = t;
                t = not_null(h_75);
                {
                  ATerm b_36 (ATerm t)
                  {
                    ATerm r_35 = NULL,s_35 = NULL,t_35 = NULL;
                    r_35 = t;
                    if(match_cons(t, sym_Var_1))
                      {
                        s_35 = ATgetArgument(t, 0);
                        {
                          ATerm u_36 = NULL,r_3 = NULL;
                          t = SSLgetAnnotations(r_35);
                          u_36 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, s_35);
                          r_3 = t;
                          t = SSLsetAnnotations(r_3, u_36);
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Int_1))
                          {
                            s_35 = ATgetArgument(t, 0);
                            {
                              ATerm j_37 = NULL,s_3 = NULL;
                              t = SSLgetAnnotations(r_35);
                              j_37 = t;
                              t = (ATerm) ATmakeAppl(sym_Int_1, s_35);
                              s_3 = t;
                              t = SSLsetAnnotations(s_3, j_37);
                            }
                          }
                        else
                          {
                            if(match_cons(t, sym_Real_1))
                              {
                                s_35 = ATgetArgument(t, 0);
                                {
                                  ATerm u_37 = NULL,t_3 = NULL;
                                  t = SSLgetAnnotations(r_35);
                                  u_37 = t;
                                  t = (ATerm) ATmakeAppl(sym_Real_1, s_35);
                                  t_3 = t;
                                  t = SSLsetAnnotations(t_3, u_37);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_Str_1))
                                  {
                                    s_35 = ATgetArgument(t, 0);
                                    {
                                      ATerm f_38 = NULL,u_3 = NULL;
                                      t = SSLgetAnnotations(r_35);
                                      f_38 = t;
                                      t = (ATerm) ATmakeAppl(sym_Str_1, s_35);
                                      u_3 = t;
                                      t = SSLsetAnnotations(u_3, f_38);
                                    }
                                  }
                                else
                                  {
                                    ATerm p_38 = NULL,s_38 = NULL,v_3 = NULL;
                                    if(match_cons(t, sym_Op_2))
                                      {
                                        s_35 = ATgetArgument(t, 0);
                                        t_35 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(r_35);
                                    p_38 = t;
                                    t = t_35;
                                    t = map_1_0(b_36, t);
                                    s_38 = t;
                                    t = (ATerm) ATmakeAppl(sym_Op_2, s_35, s_38);
                                    v_3 = t;
                                    t = SSLsetAnnotations(v_3, p_38);
                                  }
                              }
                          }
                      }
                    return(t);
                  }
                  t = b_36(t);
                  if(((i_34 != NULL) && (i_34 != t)))
                    _fail(t);
                  else
                    i_34 = t;
                  t = (ATerm) ATmakeAppl(sym_Build_1, not_null(i_34));
                  if(((w_3 != NULL) && (w_3 != t)))
                    _fail(t);
                  else
                    w_3 = t;
                  t = SSLsetAnnotations(not_null(w_3), not_null(g_34));
                }
              }
            }
          else
            {
              if(match_cons(t, sym_Assign_2))
                {
                  h_75 = ATgetArgument(t, 0);
                  i_75 = ATgetArgument(t, 1);
                  {
                    ATerm n_39 = NULL,q_39 = NULL,r_39 = NULL,s_39 = NULL,d_40 = NULL,e_40 = NULL,f_40 = NULL,z_3 = NULL,y_3 = NULL,x_3 = NULL;
                    t = SSLgetAnnotations(g_75);
                    n_39 = t;
                    t = h_75;
                    if(match_cons(t, sym_Var_1))
                      {
                        e_40 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(h_75);
                    d_40 = t;
                    t = (ATerm) ATmakeAppl(sym_Var_1, e_40);
                    x_3 = t;
                    t = SSLsetAnnotations(x_3, d_40);
                    f_40 = t;
                    t = i_75;
                    if(match_cons(t, sym_Var_1))
                      {
                        r_39 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(i_75);
                    q_39 = t;
                    t = (ATerm) ATmakeAppl(sym_Var_1, r_39);
                    y_3 = t;
                    t = SSLsetAnnotations(y_3, q_39);
                    s_39 = t;
                    t = (ATerm) ATmakeAppl(sym_Assign_2, f_40, s_39);
                    z_3 = t;
                    t = SSLsetAnnotations(z_3, n_39);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Match_1))
                    {
                      h_75 = ATgetArgument(t, 0);
                      {
                        ATerm a_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL,b_4 = NULL,a_4 = NULL;
                        t = SSLgetAnnotations(g_75);
                        a_41 = t;
                        t = h_75;
                        if(match_cons(t, sym_Var_1))
                          {
                            d_41 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(h_75);
                        c_41 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, d_41);
                        a_4 = t;
                        t = SSLsetAnnotations(a_4, c_41);
                        e_41 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, e_41);
                        b_4 = t;
                        t = SSLsetAnnotations(b_4, a_41);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Prim_2))
                        {
                          h_75 = ATgetArgument(t, 0);
                          i_75 = ATgetArgument(t, 1);
                          {
                            ATerm l_41 = NULL,c_4 = NULL;
                            t = SSLgetAnnotations(g_75);
                            l_41 = t;
                            t = (ATerm) ATmakeAppl(sym_Prim_2, h_75, i_75);
                            c_4 = t;
                            t = SSLsetAnnotations(c_4, l_41);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_CallT_3))
                            {
                              h_75 = ATgetArgument(t, 0);
                              i_75 = ATgetArgument(t, 1);
                              f_75 = ATgetArgument(t, 2);
                              {
                                ATerm c_42 = NULL,d_4 = NULL;
                                t = SSLgetAnnotations(g_75);
                                c_42 = t;
                                t = (ATerm) ATmakeAppl(sym_CallT_3, h_75, i_75, f_75);
                                d_4 = t;
                                t = SSLsetAnnotations(d_4, c_42);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_Seq_2))
                                {
                                  h_75 = ATgetArgument(t, 0);
                                  i_75 = ATgetArgument(t, 1);
                                  {
                                    ATerm r_42 = NULL,u_42 = NULL,v_42 = NULL,e_4 = NULL;
                                    t = SSLgetAnnotations(g_75);
                                    r_42 = t;
                                    t = h_75;
                                    t = simple_strategy_0_0(t);
                                    u_42 = t;
                                    t = i_75;
                                    t = simple_strategy_0_0(t);
                                    v_42 = t;
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, u_42, v_42);
                                    e_4 = t;
                                    t = SSLsetAnnotations(e_4, r_42);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_Seqs_1))
                                    {
                                      h_75 = ATgetArgument(t, 0);
                                      {
                                        ATerm c_43 = NULL,e_43 = NULL,f_4 = NULL;
                                        t = SSLgetAnnotations(g_75);
                                        c_43 = t;
                                        t = h_75;
                                        t = map_1_0(simple_strategy_0_0, t);
                                        e_43 = t;
                                        t = (ATerm) ATmakeAppl(sym_Seqs_1, e_43);
                                        f_4 = t;
                                        t = SSLsetAnnotations(f_4, c_43);
                                      }
                                    }
                                  else
                                    {
                                      ATerm l_43 = NULL,o_43 = NULL,h_4 = NULL;
                                      if(match_cons(t, sym_Scope_2))
                                        {
                                          h_75 = ATgetArgument(t, 0);
                                          i_75 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = SSLgetAnnotations(g_75);
                                      l_43 = t;
                                      t = i_75;
                                      t = simple_strategy_0_0(t);
                                      o_43 = t;
                                      t = (ATerm) ATmakeAppl(sym_Scope_2, h_75, o_43);
                                      h_4 = t;
                                      t = SSLsetAnnotations(h_4, l_43);
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
ATerm r_8 (ATerm h_130 (ATerm), ATerm z_59, ATerm y_59, ATerm t)
{
  ATerm s_76 (ATerm t)
  {
    ATerm t_76 (ATerm e_76, ATerm t)
    {
      ATerm h_76 = NULL,i_76 = NULL,j_76 = NULL,l_76 = NULL,m_76 = NULL,n_76 = NULL,j_5 = NULL;
      t = not_null(e_76);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((h_76 != NULL) && (h_76 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            h_76 = ATgetFirst((ATermList) t);
          if(((i_76 != NULL) && (i_76 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            i_76 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm e_5 (ATerm t)
        {
          t = not_null(y_59);
          return(t);
        }
        t = m_10(h_130, e_5, not_null(h_76), not_null(i_76), t);
        t = not_null(e_76);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((l_76 != NULL) && (l_76 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              l_76 = ATgetFirst((ATermList) t);
            if(((m_76 != NULL) && (m_76 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              m_76 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(not_null(e_76));
        if(((j_76 != NULL) && (j_76 != t)))
          _fail(t);
        else
          j_76 = t;
        t = not_null(m_76);
        t = s_76(t);
        if(((n_76 != NULL) && (n_76 != t)))
          _fail(t);
        else
          n_76 = t;
        t = (ATerm) ATinsert(CheckATermList(not_null(n_76)), not_null(l_76));
        if(((j_5 != NULL) && (j_5 != t)))
          _fail(t);
        else
          j_5 = t;
        t = SSLsetAnnotations(not_null(j_5), not_null(j_76));
      }
      return(t);
    }
    ATerm o_76 = NULL,q_76 = NULL;
    o_76 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = o_76;
      }
    else
      {
        ATerm v_25 = t;
        int w_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm x_25 = ATgetFirst((ATermList) t);
                q_76 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            LocalPopChoice(w_25);
            {
              ATerm y_25 = t;
              int z_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = t_76(o_76, t);
                  ;
                  LocalPopChoice(z_25);
                }
              else
                {
                  t = y_25;
                  t = q_76;
                  t = s_76(t);
                }
            }
          }
        else
          {
            t = v_25;
            t = t_76(o_76, t);
          }
      }
    return(t);
  }
  t = not_null(z_59);
  t = s_76(t);
  return(t);
}
ATerm tvars_matrix_boundin_3_0 (ATerm o_151 (ATerm), ATerm p_151 (ATerm), ATerm q_151 (ATerm), ATerm t)
{
  ATerm b_26 = t;
  int c_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = tboundin_3_0(o_151, p_151, q_151, t);
      ;
      LocalPopChoice(c_26);
    }
  else
    {
      t = b_26;
      {
        ATerm f_77 = NULL,g_77 = NULL,h_77 = NULL,w_43 = NULL,z_43 = NULL,a_44 = NULL,q_5 = NULL;
        f_77 = t;
        if(match_cons(t, sym_Matrix_2))
          {
            g_77 = ATgetArgument(t, 0);
            h_77 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_77);
        w_43 = t;
        t = g_77;
        t = q_151(t);
        z_43 = t;
        t = h_77;
        t = o_151(t);
        a_44 = t;
        t = (ATerm) ATmakeAppl(sym_Matrix_2, z_43, a_44);
        q_5 = t;
        t = SSLsetAnnotations(q_5, w_43);
      }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm m_121 (ATerm), ATerm n_121 (ATerm), ATerm o_121 (ATerm), ATerm t)
{
  ATerm g_80 = NULL,h_80 = NULL,l_80 = NULL,m_80 = NULL,n_80 = NULL;
  m_80 = t;
  if(match_cons(t, sym_Scope_2))
    {
      n_80 = ATgetArgument(t, 0);
      g_80 = ATgetArgument(t, 1);
      {
        ATerm l_44 = NULL,s_44 = NULL,t_44 = NULL,a_6 = NULL;
        t = SSLgetAnnotations(m_80);
        l_44 = t;
        t = n_80;
        t = o_121(t);
        s_44 = t;
        t = g_80;
        t = m_121(t);
        t_44 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, s_44, t_44);
        a_6 = t;
        t = SSLsetAnnotations(a_6, l_44);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          n_80 = ATgetArgument(t, 0);
          g_80 = ATgetArgument(t, 1);
          h_80 = ATgetArgument(t, 2);
          l_80 = ATgetArgument(t, 3);
          {
            ATerm g_45 = NULL,t_45 = NULL,u_45 = NULL,v_45 = NULL,w_45 = NULL,d_6 = NULL;
            t = SSLgetAnnotations(m_80);
            g_45 = t;
            t = n_80;
            t = o_121(t);
            t_45 = t;
            t = g_80;
            t = o_121(t);
            u_45 = t;
            t = h_80;
            t = o_121(t);
            v_45 = t;
            t = l_80;
            t = m_121(t);
            w_45 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, t_45, u_45, v_45, w_45);
            d_6 = t;
            t = SSLsetAnnotations(d_6, g_45);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              n_80 = ATgetArgument(t, 0);
              g_80 = ATgetArgument(t, 1);
              h_80 = ATgetArgument(t, 2);
              l_80 = ATgetArgument(t, 3);
              {
                ATerm i_46 = NULL,n_46 = NULL,o_46 = NULL,r_46 = NULL,s_46 = NULL,f_6 = NULL;
                t = SSLgetAnnotations(m_80);
                i_46 = t;
                t = n_80;
                t = o_121(t);
                n_46 = t;
                t = g_80;
                t = o_121(t);
                o_46 = t;
                t = h_80;
                t = o_121(t);
                r_46 = t;
                t = l_80;
                t = m_121(t);
                s_46 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, n_46, o_46, r_46, s_46);
                f_6 = t;
                t = SSLsetAnnotations(f_6, i_46);
              }
            }
          else
            {
              ATerm f_47 = NULL,h_47 = NULL,g_6 = NULL;
              if(match_cons(t, sym_DynamicRules_1))
                {
                  n_80 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(m_80);
              f_47 = t;
              t = n_80;
              t = m_121(t);
              h_47 = t;
              t = (ATerm) ATmakeAppl(sym_DynamicRules_1, h_47);
              g_6 = t;
              t = SSLsetAnnotations(g_6, f_47);
            }
        }
    }
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm y_80 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_80);
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm d_26 = t;
  int e_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(e_26);
    }
  else
    {
      t = d_26;
      {
        ATerm f_26 = t;
        int g_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            ;
            LocalPopChoice(g_26);
          }
        else
          {
            t = f_26;
            {
              ATerm b_81 = NULL,c_81 = NULL,d_81 = NULL,f_81 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  b_81 = ATgetArgument(t, 0);
                  c_81 = ATgetArgument(t, 1);
                  d_81 = ATgetArgument(t, 2);
                  f_81 = ATgetArgument(t, 3);
                  t = d_81;
                  t = map_1_0(l_5, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      b_81 = ATgetArgument(t, 0);
                      c_81 = ATgetArgument(t, 1);
                      d_81 = ATgetArgument(t, 2);
                      f_81 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = d_81;
                  t = map_1_0(n_5, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm o_81 = NULL;
  ATerm h_26 = t;
  int i_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_81 = ATgetArgument(t, 0);
          {
            ATerm j_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_26);
      t = o_81;
    }
  else
    {
      t = h_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_81 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_81;
    }
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm x_81 = NULL;
  ATerm k_26 = t;
  int n_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_81 = ATgetArgument(t, 0);
          {
            ATerm q_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_26);
      t = x_81;
    }
  else
    {
      t = k_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_81 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_81;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm x_80 = NULL;
  if(match_cons(t, sym_DynamicRules_1))
    {
      x_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_80;
  t = free_vars_3_0(g_5, k_5, tboundin_3_0, t);
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm d_82 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_82);
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm s_26 = t;
  int t_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(t_26);
    }
  else
    {
      t = s_26;
      {
        ATerm f_82 = NULL,g_82 = NULL,h_82 = NULL,i_82 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            f_82 = ATgetArgument(t, 0);
            t = f_82;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                f_82 = ATgetArgument(t, 0);
                g_82 = ATgetArgument(t, 1);
                h_82 = ATgetArgument(t, 2);
                i_82 = ATgetArgument(t, 3);
                t = h_82;
                t = map_1_0(t_5, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    f_82 = ATgetArgument(t, 0);
                    g_82 = ATgetArgument(t, 1);
                    h_82 = ATgetArgument(t, 2);
                    i_82 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = h_82;
                t = map_1_0(u_5, t);
              }
          }
      }
    }
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm z_82 = NULL;
  ATerm u_26 = t;
  int v_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_82 = ATgetArgument(t, 0);
          {
            ATerm w_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_26);
      t = z_82;
    }
  else
    {
      t = u_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_82 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_82;
    }
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm i_83 = NULL;
  ATerm x_26 = t;
  int y_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_83 = ATgetArgument(t, 0);
          {
            ATerm a_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_26);
      t = i_83;
    }
  else
    {
      t = x_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_83 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_83;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(r_5, s_5, tboundin_3_0, t);
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm z_83 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      z_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, z_83);
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm b_27 = t;
  int c_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(c_27);
    }
  else
    {
      t = b_27;
      {
        ATerm b_84 = NULL,c_84 = NULL,d_84 = NULL,e_84 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            b_84 = ATgetArgument(t, 0);
            t = b_84;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                b_84 = ATgetArgument(t, 0);
                c_84 = ATgetArgument(t, 1);
                d_84 = ATgetArgument(t, 2);
                e_84 = ATgetArgument(t, 3);
                t = d_84;
                t = map_1_0(x_5, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    b_84 = ATgetArgument(t, 0);
                    c_84 = ATgetArgument(t, 1);
                    d_84 = ATgetArgument(t, 2);
                    e_84 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = d_84;
                t = map_1_0(y_5, t);
              }
          }
      }
    }
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm r_84 = NULL;
  ATerm d_27 = t;
  int e_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_84 = ATgetArgument(t, 0);
          {
            ATerm f_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_27);
      t = r_84;
    }
  else
    {
      t = d_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_84 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_84;
    }
  return(t);
}
ATerm y_5 (ATerm t)
{
  ATerm g_85 = NULL;
  ATerm g_27 = t;
  int h_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_85 = ATgetArgument(t, 0);
          {
            ATerm i_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_27);
      t = g_85;
    }
  else
    {
      t = g_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_85 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_85;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm q_83 = NULL,u_83 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      u_83 = ATgetArgument(t, 0);
      t = u_83;
      if(match_cons(t, sym_Rule_3))
        {
          q_83 = ATgetArgument(t, 0);
          {
            ATerm j_27 = ATgetArgument(t, 1);
          }
          {
            ATerm k_27 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = q_83;
      t = free_vars_3_0(v_5, w_5, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          u_83 = ATgetArgument(t, 0);
          {
            ATerm l_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = u_83;
    }
  return(t);
}
ATerm x_8 (ATerm j_130 (ATerm), ATerm b_60, ATerm a_60, ATerm t)
{
  ATerm h_86 (ATerm t)
  {
    ATerm c_86 = NULL,d_86 = NULL,e_86 = NULL;
    c_86 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_86;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_86 = ATgetFirst((ATermList) t);
            e_86 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm n_27 = t;
          int o_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_86;
              {
                ATerm z_5 (ATerm t)
                {
                  t = not_null(a_60);
                  return(t);
                }
                t = m_10(j_130, z_5, not_null(d_86), not_null(e_86), t);
                t = h_86(t);
              }
              ;
              LocalPopChoice(o_27);
            }
          else
            {
              t = n_27;
              {
                ATerm v_47 = NULL,z_47 = NULL,o_6 = NULL;
                t = SSLgetAnnotations(c_86);
                v_47 = t;
                t = e_86;
                t = h_86(t);
                z_47 = t;
                t = (ATerm) ATinsert(CheckATermList(z_47), d_86);
                o_6 = t;
                t = SSLsetAnnotations(o_6, v_47);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(b_60);
  t = h_86(t);
  return(t);
}
ATerm b_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_27 = ATgetArgument(t, 0);
      if(((ATgetType(q_27) != AT_LIST) || !(ATisEmpty(q_27))))
        _fail(t);
      {
        ATerm r_27 = ATgetArgument(t, 1);
        if(((ATgetType(r_27) != AT_LIST) || !(ATisEmpty(r_27))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm p_86 = NULL,q_86 = NULL,r_86 = NULL,s_86 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_27 = ATgetArgument(t, 0);
      if(((ATgetType(s_27) == AT_LIST) && !(ATisEmpty(s_27))))
        {
          p_86 = ATgetFirst((ATermList) s_27);
          q_86 = (ATerm) ATgetNext((ATermList) s_27);
        }
      else
        _fail(t);
      {
        ATerm u_27 = ATgetArgument(t, 1);
        if(((ATgetType(u_27) == AT_LIST) && !(ATisEmpty(u_27))))
          {
            r_86 = ATgetFirst((ATermList) u_27);
            s_86 = (ATerm) ATgetNext((ATermList) u_27);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_86, r_86), (ATerm) ATmakeAppl(sym__2, q_86, s_86));
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm t_86 = NULL,u_86 = NULL;
  if(match_cons(t, sym__2))
    {
      t_86 = ATgetArgument(t, 0);
      u_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_86), t_86);
  return(t);
}
ATerm z_8 (ATerm d_715, ATerm i_715, ATerm x_89, ATerm t)
{
  ATerm k_86 = NULL,l_86 = NULL,m_86 = NULL,n_86 = NULL;
  t = SSL_explode_term(i_715);
  if(match_cons(t, sym__2))
    {
      k_86 = ATgetArgument(t, 0);
      m_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(d_715);
  if(match_cons(t, sym__2))
    {
      if((k_86 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      l_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_86, m_86);
  t = genzip_4_0(b_6, c_6, e_6, _id, t);
  n_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_86, x_89);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm m_139 (ATerm), ATerm n_139 (ATerm), ATerm t)
{
  ATerm w_86 (ATerm t)
  {
    ATerm x_27 = t;
    int y_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_139(t);
        ;
        LocalPopChoice(y_27);
      }
    else
      {
        t = x_27;
        t = n_139(t);
        t = w_86(t);
      }
    return(t);
  }
  t = w_86(t);
  return(t);
}
ATerm for_3_0 (ATerm p_139 (ATerm), ATerm q_139 (ATerm), ATerm r_139 (ATerm), ATerm t)
{
  t = p_139(t);
  t = while_not_2_0(q_139, r_139, t);
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm f_87 = NULL;
  f_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, f_87);
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm g_87 = NULL,k_87 = NULL,l_87 = NULL,m_87 = NULL,q_6 = NULL;
  m_87 = t;
  if(match_cons(t, sym__2))
    {
      k_87 = ATgetArgument(t, 0);
      l_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_87);
  g_87 = t;
  t = l_87;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_87, l_87);
  q_6 = t;
  t = SSLsetAnnotations(q_6, g_87);
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm q_88 = NULL,s_88 = NULL,t_88 = NULL,v_88 = NULL,w_88 = NULL;
  q_88 = t;
  if(match_cons(t, sym__2))
    {
      s_88 = ATgetArgument(t, 0);
      t_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_88;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_88 = ATgetFirst((ATermList) t);
      w_88 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_27 = t;
        int b_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_89(s_88, t_88, q_88, t);
            ;
            LocalPopChoice(b_28);
          }
        else
          {
            t = z_27;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_88), v_88), w_88);
          }
      }
    }
  else
    {
      t = k_89(s_88, t_88, q_88, t);
    }
  return(t);
}
ATerm k_89 (ATerm o_87, ATerm p_87, ATerm q_87, ATerm t)
{
  ATerm r_87 = NULL,x_87 = NULL,s_6 = NULL,h_88 = NULL,i_88 = NULL,j_88 = NULL,k_88 = NULL;
  t = SSLgetAnnotations(q_87);
  r_87 = t;
  t = p_87;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_88 = ATgetFirst((ATermList) t);
      k_88 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = h_88;
  if(match_cons(t, sym__2))
    {
      i_88 = ATgetArgument(t, 0);
      j_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_28 = t;
    int e_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_88;
        if((i_88 != t))
          {
            _fail(t);
          }
        t = k_88;
        ;
        LocalPopChoice(e_28);
      }
    else
      {
        t = d_28;
        t = p_87;
        t = z_8(i_88, j_88, k_88, t);
      }
    x_87 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_87, x_87);
    s_6 = t;
    t = SSLsetAnnotations(s_6, r_87);
  }
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm j_89 = NULL;
  if(match_cons(t, sym__2))
    {
      j_89 = ATgetArgument(t, 0);
      if((j_89 != ATgetArgument(t, 1)))
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
  ATerm f_28 = t;
  int g_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(h_6, i_6, j_6, t);
      ;
      LocalPopChoice(g_28);
    }
  else
    {
      t = f_28;
      {
        ATerm d_89 = NULL,f_89 = NULL,g_89 = NULL;
        d_89 = t;
        if(match_cons(t, sym__2))
          {
            f_89 = ATgetArgument(t, 0);
            g_89 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_89;
        t = x_8(k_6, f_89, g_89, t);
      }
    }
  return(t);
}
ATerm n_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm p_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm t_48 = NULL,u_48 = NULL;
  if(match_cons(t, sym__2))
    {
      t_48 = ATgetArgument(t, 0);
      u_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_10(t_6, t_48, u_48, t);
  return(t);
}
ATerm t_6 (ATerm t)
{
  ATerm v_48 = NULL;
  if(match_cons(t, sym__2))
    {
      v_48 = ATgetArgument(t, 0);
      if((v_48 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm u_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm w_6 (ATerm t)
{
  ATerm e_49 = NULL,f_49 = NULL;
  if(match_cons(t, sym__2))
    {
      e_49 = ATgetArgument(t, 0);
      f_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_10(y_6, e_49, f_49, t);
  return(t);
}
ATerm y_6 (ATerm t)
{
  ATerm g_49 = NULL;
  if(match_cons(t, sym__2))
    {
      g_49 = ATgetArgument(t, 0);
      if((g_49 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm g_137 (ATerm), ATerm h_137 (ATerm), ATerm i_137 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm u_90 (ATerm t)
  {
    ATerm h_28 = t;
    int i_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_137(t);
        ;
        LocalPopChoice(i_28);
      }
    else
      {
        t = h_28;
        {
          ATerm j_28 = t;
          int k_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_89 = NULL,n_89 = NULL,h_48 = NULL,i_48 = NULL;
              if(((m_89 != NULL) && (m_89 != t)))
                _fail(t);
              else
                m_89 = t;
              t = h_137(t);
              if(((n_89 != NULL) && (n_89 != t)))
                _fail(t);
              else
                n_89 = t;
              t = not_null(m_89);
              {
                ATerm m_6 (ATerm t)
                {
                  ATerm p_89 = NULL;
                  t = u_90(t);
                  p_89 = t;
                  t = (ATerm) ATmakeAppl(sym__2, p_89, not_null(n_89));
                  t = diff_0_0(t);
                  return(t);
                }
                t = i_137(m_6, u_90, n_6, t);
                if(((i_48 != NULL) && (i_48 != t)))
                  _fail(t);
                else
                  i_48 = t;
                t = SSL_explode_term(not_null(i_48));
                if(match_cons(t, sym__2))
                  {
                    ATerm l_28 = ATgetArgument(t, 0);
                    if(((h_48 != NULL) && (h_48 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      h_48 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = not_null(h_48);
                t = foldr_3_0(p_6, r_6, _id, t);
              }
              ;
              LocalPopChoice(k_28);
            }
          else
            {
              t = j_28;
              {
                ATerm x_48 = NULL,y_48 = NULL;
                y_48 = t;
                t = SSL_explode_term(y_48);
                if(match_cons(t, sym__2))
                  {
                    ATerm m_28 = ATgetArgument(t, 0);
                    x_48 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = x_48;
                t = foldr_3_0(u_6, w_6, u_90, t);
              }
            }
        }
      }
    return(t);
  }
  t = u_90(t);
  return(t);
}
ATerm z_6 (ATerm t)
{
  ATerm f_50 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      f_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, f_50);
  return(t);
}
ATerm a_7 (ATerm t)
{
  ATerm n_28 = t;
  int o_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(o_28);
    }
  else
    {
      t = n_28;
      {
        ATerm g_50 = NULL,h_50 = NULL,j_50 = NULL,k_50 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            j_50 = ATgetArgument(t, 0);
            t = j_50;
            t = free_vars_3_0(e_7, h_7, tboundin_3_0, t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                j_50 = ATgetArgument(t, 0);
                k_50 = ATgetArgument(t, 1);
                g_50 = ATgetArgument(t, 2);
                h_50 = ATgetArgument(t, 3);
                t = g_50;
                t = map_1_0(o_7, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    j_50 = ATgetArgument(t, 0);
                    k_50 = ATgetArgument(t, 1);
                    g_50 = ATgetArgument(t, 2);
                    h_50 = ATgetArgument(t, 3);
                    t = g_50;
                    t = map_1_0(p_7, t);
                  }
                else
                  {
                    if(match_cons(t, sym_Matrix_2))
                      {
                        j_50 = ATgetArgument(t, 0);
                        k_50 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = j_50;
                  }
              }
          }
      }
    }
  return(t);
}
ATerm e_7 (ATerm t)
{
  ATerm m_50 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      m_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, m_50);
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm p_28 = t;
  int s_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(s_28);
    }
  else
    {
      t = p_28;
      {
        ATerm v_28 = t;
        int w_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            ;
            LocalPopChoice(w_28);
          }
        else
          {
            t = v_28;
            {
              ATerm o_50 = NULL,p_50 = NULL,q_50 = NULL,r_50 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  o_50 = ATgetArgument(t, 0);
                  p_50 = ATgetArgument(t, 1);
                  q_50 = ATgetArgument(t, 2);
                  r_50 = ATgetArgument(t, 3);
                  t = q_50;
                  t = map_1_0(i_7, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      o_50 = ATgetArgument(t, 0);
                      p_50 = ATgetArgument(t, 1);
                      q_50 = ATgetArgument(t, 2);
                      r_50 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = q_50;
                  t = map_1_0(j_7, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm i_7 (ATerm t)
{
  ATerm y_50 = NULL;
  ATerm x_28 = t;
  int y_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_50 = ATgetArgument(t, 0);
          {
            ATerm a_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_28);
      t = y_50;
    }
  else
    {
      t = x_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_50;
    }
  return(t);
}
ATerm j_7 (ATerm t)
{
  ATerm i_51 = NULL;
  ATerm b_29 = t;
  int c_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_51 = ATgetArgument(t, 0);
          {
            ATerm d_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_29);
      t = i_51;
    }
  else
    {
      t = b_29;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_51 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_51;
    }
  return(t);
}
ATerm o_7 (ATerm t)
{
  ATerm r_51 = NULL;
  ATerm e_29 = t;
  int f_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_51 = ATgetArgument(t, 0);
          {
            ATerm g_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_29);
      t = r_51;
    }
  else
    {
      t = e_29;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_51 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_51;
    }
  return(t);
}
ATerm p_7 (ATerm t)
{
  ATerm a_52 = NULL;
  ATerm h_29 = t;
  int i_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_52 = ATgetArgument(t, 0);
          {
            ATerm j_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_29);
      t = a_52;
    }
  else
    {
      t = h_29;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_52;
    }
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm i_52 = NULL;
  if(match_cons(t, sym__2))
    {
      i_52 = ATgetArgument(t, 0);
      if((i_52 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm z_7 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_l_29;
  return(t);
}
ATerm b_8 (ATerm t)
{
  ATerm k_52 = NULL,n_52 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_52 = ATgetFirst((ATermList) t);
      n_52 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_52, n_52);
  return(t);
}
ATerm c_8 (ATerm t)
{
  ATerm q_52 = NULL,v_52 = NULL,y_52 = NULL,z_52 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_29 = ATgetArgument(t, 0);
      if(match_cons(m_29, sym__2))
        {
          q_52 = ATgetArgument(m_29, 0);
          v_52 = ATgetArgument(m_29, 1);
        }
      else
        _fail(t);
      {
        ATerm p_29 = ATgetArgument(t, 1);
        if(match_cons(p_29, sym__2))
          {
            y_52 = ATgetArgument(p_29, 0);
            z_52 = ATgetArgument(p_29, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_52), q_52), (ATerm) ATinsert(CheckATermList(z_52), v_52));
  return(t);
}
ATerm d_8 (ATerm t)
{
  ATerm a_53 = NULL;
  a_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_VarDec_2, a_53, term_z_23), (ATerm) ATmakeAppl(sym_Var_1, a_53));
  return(t);
}
ATerm RowLet_1_0 (ATerm v_0 (ATerm), ATerm t)
{
  ATerm y_94 = NULL,z_94 = NULL,a_95 = NULL;
  y_94 = t;
  if(match_cons(t, sym_Row_2))
    {
      z_94 = ATgetArgument(t, 0);
      a_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_29 = t;
    int r_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_49 = NULL,b_50 = NULL,c_50 = NULL,d_50 = NULL,e_50 = NULL;
        t = a_95;
        {
          ATerm s_29 = t;
          if((PushChoice() == 0))
            {
              t = simple_strategy_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = s_29;
            }
          t = new_0_0(t);
          s_49 = t;
          t = a_95;
          t = free_vars_3_0(z_6, a_7, tvars_matrix_boundin_3_0, t);
          e_50 = t;
          t = v_0(t);
          d_50 = t;
          t = (ATerm) ATmakeAppl(sym__2, e_50, d_50);
          t = r_8(r_7, e_50, d_50, t);
          t = genzip_4_0(z_7, b_8, c_8, d_8, t);
          if(match_cons(t, sym__2))
            {
              b_50 = ATgetArgument(t, 0);
              c_50 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, s_49, (ATerm)ATempty, b_50, a_95)), (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATempty, z_94, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, s_49), (ATerm)ATempty, c_50)));
        }
        ;
        LocalPopChoice(r_29);
      }
    else
      {
        t = q_29;
        t = a_95;
        t = simple_strategy_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATempty, z_94, a_95));
      }
  }
  return(t);
}
ATerm f_8 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_l_29;
  return(t);
}
ATerm h_8 (ATerm t)
{
  ATerm l_95 = NULL,m_95 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_95 = ATgetFirst((ATermList) t);
      m_95 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_95, m_95);
  return(t);
}
ATerm j_8 (ATerm t)
{
  ATerm n_95 = NULL,p_95 = NULL,q_95 = NULL,r_95 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_29 = ATgetArgument(t, 0);
      if(match_cons(t_29, sym__2))
        {
          n_95 = ATgetArgument(t_29, 0);
          p_95 = ATgetArgument(t_29, 1);
        }
      else
        _fail(t);
      {
        ATerm u_29 = ATgetArgument(t, 1);
        if(match_cons(u_29, sym__2))
          {
            q_95 = ATgetArgument(u_29, 0);
            r_95 = ATgetArgument(u_29, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_95), n_95), (ATerm) ATinsert(CheckATermList(r_95), p_95));
  return(t);
}
ATerm b_9 (ATerm s_100, ATerm r_100, ATerm t)
{
  ATerm e_95 = NULL,f_95 = NULL,g_95 = NULL,h_95 = NULL,i_95 = NULL,j_95 = NULL,k_95 = NULL,v_6 = NULL;
  t = not_null(r_100);
  {
    ATerm v_8 (ATerm t)
    {
      ATerm w_8 (ATerm t)
      {
        t = not_null(s_100);
        return(t);
      }
      t = RowLet_1_0(w_8, t);
      return(t);
    }
    t = genzip_4_0(f_8, h_8, j_8, v_8, t);
    if(((k_95 != NULL) && (k_95 != t)))
      _fail(t);
    else
      k_95 = t;
    if(match_cons(t, sym__2))
      {
        if(((h_95 != NULL) && (h_95 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          h_95 = ATgetArgument(t, 0);
        if(((i_95 != NULL) && (i_95 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          i_95 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(k_95));
    if(((g_95 != NULL) && (g_95 != t)))
      _fail(t);
    else
      g_95 = t;
    t = not_null(h_95);
    t = concat_0_0(t);
    if(((j_95 != NULL) && (j_95 != t)))
      _fail(t);
    else
      j_95 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_95), not_null(i_95));
    if(((v_6 != NULL) && (v_6 != t)))
      _fail(t);
    else
      v_6 = t;
    t = SSLsetAnnotations(not_null(v_6), not_null(g_95));
    if(match_cons(t, sym__2))
      {
        if(((e_95 != NULL) && (e_95 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          e_95 = ATgetArgument(t, 0);
        if(((f_95 != NULL) && (f_95 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          f_95 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym_Let_2, not_null(e_95), (ATerm) ATmakeAppl(sym_Scope_2, not_null(s_100), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATinsert(ATempty, term_v_29))), (ATerm) ATmakeAppl(sym_Matrix_1, not_null(f_95)))));
  }
  return(t);
}
ATerm c_9 (ATerm n_134 (ATerm), ATerm e_65, ATerm c_65, ATerm t)
{
  ATerm w_95 = NULL,x_95 = NULL,a_96 = NULL,b_96 = NULL,c_96 = NULL,d_96 = NULL;
  b_96 = t;
  t = n_134(t);
  w_95 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_95, e_65, c_65);
  t = h_11(w_95, e_65, c_65, t);
  {
    ATerm w_29 = t;
    int z_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_96 = NULL;
        t = term_a_30;
        g_96 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_95, term_a_30);
        t = g_11(w_95, g_96, t);
        ;
        LocalPopChoice(z_29);
      }
    else
      {
        t = w_29;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_95 = ATgetFirst((ATermList) t);
        a_96 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_a_30;
    c_96 = t;
    t = (ATerm) ATinsert(CheckATermList(a_96), (ATerm) ATinsert(CheckATermList(x_95), e_65));
    d_96 = t;
    t = SSL_table_put(w_95, c_96, d_96);
    t = b_96;
  }
  return(t);
}
ATerm y_8 (ATerm t)
{
  ATerm i_96 = NULL,j_96 = NULL,n_96 = NULL;
  if(match_cons(t, sym_Row_3))
    {
      ATerm b_30 = ATgetArgument(t, 0);
      if(((ATgetType(b_30) == AT_LIST) && !(ATisEmpty(b_30))))
        {
          ATerm c_30 = ATgetFirst((ATermList) b_30);
          if(match_cons(c_30, sym_As_2))
            {
              ATerm d_30 = ATgetArgument(c_30, 0);
              ATerm e_30 = ATgetArgument(c_30, 1);
              if(!(match_cons(e_30, sym_Wld_0)))
                _fail(t);
            }
          else
            _fail(t);
          i_96 = (ATerm) ATgetNext((ATermList) b_30);
        }
      else
        _fail(t);
      j_96 = ATgetArgument(t, 1);
      n_96 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Row_3, i_96, j_96, n_96);
  return(t);
}
ATerm default_state_0_0 (ATerm t)
{
  ATerm h_96 = NULL;
  t = filter_1_0(y_8, t);
  h_96 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, h_96);
  return(t);
}
ATerm a_9 (ATerm t)
{
  ATerm u_99 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      u_99 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, u_99), term_f_30);
  return(t);
}
ATerm d_9 (ATerm t)
{
  t = term_v_29;
  return(t);
}
ATerm g_9 (ATerm t)
{
  ATerm y_54 = NULL,z_54 = NULL;
  if(match_cons(t, sym__2))
    {
      y_54 = ATgetArgument(t, 0);
      z_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_11(y_54, z_54, t);
  return(t);
}
ATerm h_9 (ATerm t)
{
  t = term_a_18;
  return(t);
}
ATerm MatchCons_2_0 (ATerm q_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm v_98 = NULL,w_98 = NULL,n_99 = NULL;
  v_98 = t;
  if(match_cons(t, sym_Wld_0))
    {
      t = v_98;
      t = t_0(t);
      t = map_1_0(a_9, t);
    }
  else
    {
      if(match_cons(t, sym_Int_1))
        {
          w_98 = ATgetArgument(t, 0);
          t = v_98;
          t = q_0(t);
          if(match_cons(t, sym_Int_1))
            {
              if((w_98 != ATgetArgument(t, 0)))
                {
                  _fail(ATgetArgument(t, 0));
                }
            }
          else
            _fail(t);
          t = t_0(t);
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATempty;
        }
      else
        {
          if(match_cons(t, sym_Real_1))
            {
              w_98 = ATgetArgument(t, 0);
              t = v_98;
              t = q_0(t);
              if(match_cons(t, sym_Real_1))
                {
                  if((w_98 != ATgetArgument(t, 0)))
                    {
                      _fail(ATgetArgument(t, 0));
                    }
                }
              else
                _fail(t);
              t = t_0(t);
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATempty;
            }
          else
            {
              if(match_cons(t, sym_Str_1))
                {
                  w_98 = ATgetArgument(t, 0);
                  t = v_98;
                  t = q_0(t);
                  if(match_cons(t, sym_Str_1))
                    {
                      if((w_98 != ATgetArgument(t, 0)))
                        {
                          _fail(ATgetArgument(t, 0));
                        }
                    }
                  else
                    _fail(t);
                  t = t_0(t);
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = (ATerm) ATempty;
                }
              else
                {
                  ATerm v_54 = NULL,w_54 = NULL;
                  if(match_cons(t, sym_Op_2))
                    {
                      w_98 = ATgetArgument(t, 0);
                      n_99 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = v_98;
                  t = q_0(t);
                  if(match_cons(t, sym_Fun_2))
                    {
                      if((w_98 != ATgetArgument(t, 0)))
                        {
                          _fail(ATgetArgument(t, 0));
                        }
                      v_54 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = n_99;
                  t = foldr_3_0(d_9, g_9, h_9, t);
                  w_54 = t;
                  t = v_54;
                  if((w_54 != t))
                    {
                      _fail(t);
                    }
                  t = n_99;
                }
            }
        }
    }
  return(t);
}
ATerm e_9 (ATerm z_150 (ATerm), ATerm f_99, ATerm c_99, ATerm d_99, ATerm e_99, ATerm t)
{
  ATerm d_100 = NULL,e_100 = NULL;
  t = f_99;
  t = z_150(t);
  d_100 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_100, d_99);
  t = conc_0_0(t);
  e_100 = t;
  t = (ATerm) ATmakeAppl(sym_Row_3, c_99, e_100, e_99);
  return(t);
}
ATerm f_9 (ATerm y_98, ATerm z_98, ATerm a_99, ATerm t)
{
  ATerm g_100 = NULL;
  t = not_null(y_98);
  {
    ATerm j_9 (ATerm t)
    {
      ATerm o_100 = NULL,c_101 = NULL,d_101 = NULL,f_101 = NULL;
      ATerm l_9 (ATerm t)
      {
        ATerm n_9 (ATerm t)
        {
          t = not_null(z_98);
          return(t);
        }
        ATerm p_9 (ATerm t)
        {
          t = not_null(a_99);
          return(t);
        }
        t = MatchCons_2_0(n_9, p_9, t);
        return(t);
      }
      if(match_cons(t, sym_Row_3))
        {
          ATerm l_30 = ATgetArgument(t, 0);
          if(((ATgetType(l_30) == AT_LIST) && !(ATisEmpty(l_30))))
            {
              ATerm m_30 = ATgetFirst((ATermList) l_30);
              if(match_cons(m_30, sym_As_2))
                {
                  ATerm n_30 = ATgetArgument(m_30, 0);
                  if(((o_100 != NULL) && (o_100 != ATgetArgument(m_30, 1))))
                    _fail(ATgetArgument(m_30, 1));
                  else
                    o_100 = ATgetArgument(m_30, 1);
                }
              else
                _fail(t);
              if(((c_101 != NULL) && (c_101 != (ATerm) ATgetNext((ATermList) l_30))))
                _fail((ATerm) ATgetNext((ATermList) l_30));
              else
                c_101 = (ATerm) ATgetNext((ATermList) l_30);
            }
          else
            _fail(t);
          if(((d_101 != NULL) && (d_101 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            d_101 = ATgetArgument(t, 1);
          if(((f_101 != NULL) && (f_101 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            f_101 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = e_9(l_9, not_null(o_100), not_null(c_101), not_null(d_101), not_null(f_101), t);
      return(t);
    }
    t = filter_1_0(j_9, t);
    if(((g_100 != NULL) && (g_100 != t)))
      _fail(t);
    else
      g_100 = t;
    t = (ATerm) ATmakeAppl(sym_Alt_3, not_null(z_98), not_null(a_99), (ATerm) ATmakeAppl(sym_Matrix_1, not_null(g_100)));
  }
  return(t);
}
ATerm filter_1_0 (ATerm r_134 (ATerm), ATerm t)
{
  ATerm z_101 = NULL,a_102 = NULL,b_102 = NULL;
  z_101 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_101;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_102 = ATgetFirst((ATermList) t);
          b_102 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm o_30 = t;
        int p_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_55 = NULL,p_55 = NULL,q_55 = NULL,x_6 = NULL;
            t = SSLgetAnnotations(z_101);
            m_55 = t;
            t = a_102;
            t = r_134(t);
            p_55 = t;
            t = b_102;
            t = filter_1_0(r_134, t);
            q_55 = t;
            t = (ATerm) ATinsert(CheckATermList(q_55), p_55);
            x_6 = t;
            t = SSLsetAnnotations(x_6, m_55);
            ;
            LocalPopChoice(p_30);
          }
        else
          {
            t = o_30;
            t = b_102;
            t = filter_1_0(r_134, t);
          }
      }
    }
  return(t);
}
ATerm listtd_1_0 (ATerm v_129 (ATerm), ATerm t)
{
  ATerm b_103 (ATerm t)
  {
    ATerm w_102 = NULL,x_102 = NULL,y_102 = NULL;
    t = v_129(t);
    w_102 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_102;
      }
    else
      {
        ATerm c_56 = NULL,f_56 = NULL,c_7 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_102 = ATgetFirst((ATermList) t);
            y_102 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_102);
        c_56 = t;
        t = y_102;
        t = b_103(t);
        f_56 = t;
        t = (ATerm) ATinsert(CheckATermList(f_56), x_102);
        c_7 = t;
        t = SSLsetAnnotations(c_7, c_56);
      }
    return(t);
  }
  t = b_103(t);
  return(t);
}
ATerm r_9 (ATerm t)
{
  t = term_v_29;
  return(t);
}
ATerm s_9 (ATerm t)
{
  ATerm e_104 = NULL,f_104 = NULL;
  if(match_cons(t, sym__2))
    {
      e_104 = ATgetArgument(t, 0);
      f_104 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_11(e_104, f_104, t);
  return(t);
}
ATerm t_9 (ATerm t)
{
  t = term_a_18;
  return(t);
}
ATerm w_9 (ATerm t)
{
  ATerm g_104 = NULL;
  if(match_cons(t, sym_As_2))
    {
      ATerm r_30 = ATgetArgument(t, 0);
      if(match_cons(r_30, sym_Off_1))
        {
          g_104 = ATgetArgument(r_30, 0);
        }
      else
        _fail(t);
      {
        ATerm s_30 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, g_104);
  return(t);
}
ATerm ConsArgs_0_0 (ATerm t)
{
  ATerm k_103 = NULL,l_103 = NULL,m_103 = NULL,o_103 = NULL,p_103 = NULL,q_103 = NULL;
  k_103 = t;
  if(match_cons(t, sym_Row_3))
    {
      l_103 = ATgetArgument(t, 0);
      {
        ATerm u_30 = ATgetArgument(t, 1);
      }
      {
        ATerm v_30 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = l_103;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_103 = ATgetFirst((ATermList) t);
      {
        ATerm w_30 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = m_103;
  if(match_cons(t, sym_As_2))
    {
      ATerm x_30 = ATgetArgument(t, 0);
      o_103 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_103;
  if(match_cons(t, sym_Str_1))
    {
      p_103 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Str_1, p_103), (ATerm) ATempty);
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          p_103 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Real_1, p_103), (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              p_103 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Int_1, p_103), (ATerm) ATempty);
            }
          else
            {
              ATerm b_104 = NULL,c_104 = NULL;
              if(match_cons(t, sym_Op_2))
                {
                  p_103 = ATgetArgument(t, 0);
                  q_103 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = q_103;
              t = foldr_3_0(r_9, s_9, t_9, t);
              b_104 = t;
              t = q_103;
              t = map_1_0(w_9, t);
              c_104 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Fun_2, p_103, b_104), c_104);
            }
        }
    }
  return(t);
}
ATerm x_9 (ATerm t)
{
  ATerm k_104 = NULL,l_104 = NULL,m_104 = NULL;
  if(((m_104 != NULL) && (m_104 != t)))
    _fail(t);
  else
    m_104 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_104 = ATgetFirst((ATermList) t);
      l_104 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_30 = t;
        int z_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_104 = NULL;
            t = not_null(l_104);
            {
              ATerm y_9 (ATerm t)
              {
                ATerm a_31 = t;
                if((PushChoice() == 0))
                  {
                    if(((k_104 != NULL) && (k_104 != t)))
                      _fail(t);
                    else
                      k_104 = t;
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = a_31;
                  }
                return(t);
              }
              t = filter_1_0(y_9, t);
              if(((v_104 != NULL) && (v_104 != t)))
                _fail(t);
              else
                v_104 = t;
              t = (ATerm) ATinsert(CheckATermList(not_null(v_104)), not_null(k_104));
            }
            ;
            LocalPopChoice(z_30);
          }
        else
          {
            t = y_30;
            t = not_null(m_104);
          }
      }
    }
  else
    {
      t = not_null(m_104);
    }
  return(t);
}
ATerm outedges_0_0 (ATerm t)
{
  t = filter_1_0(ConsArgs_0_0, t);
  t = listtd_1_0(x_9, t);
  return(t);
}
ATerm i_107 (ATerm l_105, ATerm t)
{
  ATerm m_105 = NULL;
  t = SSL_explode_string(not_null(l_105));
  {
    ATerm b_31 = t;
    int c_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_107 (ATerm t)
        {
          ATerm h_106 = NULL,k_106 = NULL,l_106 = NULL;
          h_106 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              k_106 = ATgetFirst((ATermList) t);
              l_106 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm d_31 = t;
            int e_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_57 = NULL,f_57 = NULL,f_7 = NULL;
                t = SSLgetAnnotations(h_106);
                b_57 = t;
                t = l_106;
                t = j_107(t);
                f_57 = t;
                t = (ATerm) ATinsert(CheckATermList(f_57), k_106);
                f_7 = t;
                t = SSLsetAnnotations(f_7, b_57);
                ;
                LocalPopChoice(e_31);
              }
            else
              {
                t = d_31;
                {
                  ATerm o_57 = NULL,g_7 = NULL;
                  t = SSLgetAnnotations(h_106);
                  o_57 = t;
                  t = k_106;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  t = (ATerm) ATinsert(ATempty, k_106);
                  g_7 = t;
                  t = SSLsetAnnotations(g_7, o_57);
                }
              }
          }
          return(t);
        }
        t = j_107(t);
        ;
        LocalPopChoice(c_31);
      }
    else
      {
        t = b_31;
        t = (ATerm) ATempty;
      }
    if(((m_105 != NULL) && (m_105 != t)))
      _fail(t);
    else
      m_105 = t;
    t = SSL_implode_string(not_null(m_105));
  }
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm m_106 = NULL,n_106 = NULL,r_106 = NULL,u_106 = NULL,x_106 = NULL,g_107 = NULL;
  g_107 = t;
  {
    ATerm f_31 = t;
    int g_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_106 = ATgetFirst((ATermList) t);
            {
              ATerm h_31 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        LocalPopChoice(g_31);
        t = m_106;
        {
          ATerm m_31 = t;
          int n_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_Row_3))
                {
                  n_106 = ATgetArgument(t, 0);
                  {
                    ATerm o_31 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm p_31 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(n_31);
              t = n_106;
              {
                ATerm s_31 = t;
                int t_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        r_106 = ATgetFirst((ATermList) t);
                        {
                          ATerm u_31 = (ATerm) ATgetNext((ATermList) t);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(t_31);
                    t = r_106;
                    {
                      ATerm v_31 = t;
                      int w_31 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_As_2))
                            {
                              u_106 = ATgetArgument(t, 0);
                              {
                                ATerm x_31 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(w_31);
                          t = u_106;
                          if(match_cons(t, sym_Off_1))
                            {
                              x_106 = ATgetArgument(t, 0);
                              t = x_106;
                            }
                          else
                            {
                              t = i_107(g_107, t);
                            }
                        }
                      else
                        {
                          t = v_31;
                          t = i_107(g_107, t);
                        }
                    }
                  }
                else
                  {
                    t = s_31;
                    t = i_107(g_107, t);
                  }
              }
            }
          else
            {
              t = m_31;
              t = i_107(g_107, t);
            }
        }
      }
    else
      {
        t = f_31;
        t = i_107(g_107, t);
      }
  }
  return(t);
}
ATerm z_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_31 = ATgetArgument(t, 0);
      ATerm a_32 = ATgetArgument(t, 1);
      if(((ATgetType(a_32) != AT_LIST) || !(ATisEmpty(a_32))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm c_10 (ATerm t)
{
  ATerm b_108 = NULL,c_108 = NULL,d_108 = NULL;
  if(match_cons(t, sym__2))
    {
      b_108 = ATgetArgument(t, 0);
      {
        ATerm b_32 = ATgetArgument(t, 1);
        if(((ATgetType(b_32) == AT_LIST) && !(ATisEmpty(b_32))))
          {
            c_108 = ATgetFirst((ATermList) b_32);
            d_108 = (ATerm) ATgetNext((ATermList) b_32);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_108, c_108), (ATerm) ATmakeAppl(sym__2, b_108, d_108));
  return(t);
}
ATerm k_10 (ATerm t)
{
  ATerm e_108 = NULL,f_108 = NULL;
  if(match_cons(t, sym__2))
    {
      e_108 = ATgetArgument(t, 0);
      f_108 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(f_108), e_108);
  return(t);
}
ATerm p_10 (ATerm t)
{
  ATerm g_108 = NULL,h_108 = NULL,i_108 = NULL;
  if(match_cons(t, sym__2))
    {
      g_108 = ATgetArgument(t, 0);
      {
        ATerm c_32 = ATgetArgument(t, 1);
        if(match_cons(c_32, sym__2))
          {
            h_108 = ATgetArgument(c_32, 0);
            i_108 = ATgetArgument(c_32, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = f_9(g_108, h_108, i_108, t);
  return(t);
}
ATerm s_10 (ATerm t)
{
  t = term_d_32;
  return(t);
}
ATerm i_9 (ATerm l_100, ATerm t)
{
  ATerm o_107 = NULL,s_107 = NULL,t_107 = NULL,u_107 = NULL,y_107 = NULL,z_107 = NULL,a_108 = NULL;
  t = l_100;
  t = get_path_0_0(t);
  o_107 = t;
  t = l_100;
  t = outedges_0_0(t);
  s_107 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_100, s_107);
  t = genzip_4_0(z_9, c_10, k_10, p_10, t);
  t_107 = t;
  t = l_100;
  t = default_state_0_0(t);
  u_107 = t;
  t = new_0_0(t);
  y_107 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, l_100);
  z_107 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_e_32, y_107);
  a_108 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Matrix_1, l_100), (ATerm) ATmakeAppl(sym_Defined_2, term_e_32, y_107));
  t = c_9(s_10, z_107, a_108, t);
  t = (ATerm) ATmakeAppl(sym_Case_4, y_107, (ATerm)ATmakeAppl(sym_Var_1, o_107), t_107, u_107);
  return(t);
}
ATerm t_10 (ATerm t)
{
  ATerm k_108 = NULL,l_108 = NULL,m_108 = NULL,n_108 = NULL,o_108 = NULL,p_108 = NULL,s_108 = NULL,t_108 = NULL,w_108 = NULL,x_108 = NULL,a_109 = NULL,b_109 = NULL,c_109 = NULL,f_109 = NULL,m_7 = NULL,l_7 = NULL,k_7 = NULL;
  f_109 = t;
  if(match_cons(t, sym_Row_3))
    {
      l_108 = ATgetArgument(t, 0);
      m_108 = ATgetArgument(t, 1);
      n_108 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_109);
  k_108 = t;
  t = l_108;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_108 = ATgetFirst((ATermList) t);
      s_108 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_108);
  o_108 = t;
  t = p_108;
  if(match_cons(t, sym_As_2))
    {
      x_108 = ATgetArgument(t, 0);
      a_109 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_108);
  w_108 = t;
  t = a_109;
  {
    ATerm f_32 = t;
    if((PushChoice() == 0))
      {
        if(!(match_cons(t, sym_Wld_0)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_32;
      }
    b_109 = t;
    t = (ATerm) ATmakeAppl(sym_As_2, x_108, b_109);
    k_7 = t;
    t = SSLsetAnnotations(k_7, w_108);
    c_109 = t;
    t = (ATerm) ATinsert(CheckATermList(s_108), c_109);
    l_7 = t;
    t = SSLsetAnnotations(l_7, o_108);
    t_108 = t;
    t = (ATerm) ATmakeAppl(sym_Row_3, t_108, m_108, n_108);
    m_7 = t;
    t = SSLsetAnnotations(m_7, k_108);
  }
  return(t);
}
ATerm f_11 (ATerm t)
{
  ATerm g_109 = NULL,i_109 = NULL,j_109 = NULL,k_109 = NULL;
  if(match_cons(t, sym_Row_3))
    {
      g_109 = ATgetArgument(t, 0);
      {
        ATerm i_32 = ATgetArgument(t, 1);
        if(((ATgetType(i_32) == AT_LIST) && !(ATisEmpty(i_32))))
          {
            i_109 = ATgetFirst((ATermList) i_32);
            j_109 = (ATerm) ATgetNext((ATermList) i_32);
          }
        else
          _fail(t);
      }
      k_109 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATinsert(CheckATermList(g_109), i_109), j_109, k_109);
  return(t);
}
ATerm k_9 (ATerm b_100, ATerm t)
{
  ATerm j_108 = NULL;
  t = b_100;
  {
    ATerm j_32 = t;
    if((PushChoice() == 0))
      {
        t = map_1_0(t_10, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_32;
      }
    t = b_100;
    t = map_1_0(f_11, t);
    j_108 = t;
    t = (ATerm) ATmakeAppl(sym_Matrix_1, j_108);
  }
  return(t);
}
ATerm i_11 (ATerm t)
{
  ATerm m_109 = NULL,n_109 = NULL,o_109 = NULL,p_109 = NULL,q_109 = NULL,r_109 = NULL,s_109 = NULL,t_109 = NULL,u_109 = NULL,v_109 = NULL,w_109 = NULL,x_109 = NULL,y_109 = NULL,w_7 = NULL,t_7 = NULL,s_7 = NULL;
  y_109 = t;
  if(match_cons(t, sym_Row_3))
    {
      n_109 = ATgetArgument(t, 0);
      o_109 = ATgetArgument(t, 1);
      p_109 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_109);
  m_109 = t;
  t = o_109;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_109 = ATgetFirst((ATermList) t);
      t_109 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_109);
  r_109 = t;
  t = s_109;
  if(match_cons(t, sym_As_2))
    {
      v_109 = ATgetArgument(t, 0);
      w_109 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_109);
  u_109 = t;
  t = w_109;
  if(!(match_cons(t, sym_Wld_0)))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_As_2, v_109, w_109);
  s_7 = t;
  t = SSLsetAnnotations(s_7, u_109);
  x_109 = t;
  t = (ATerm) ATinsert(CheckATermList(t_109), x_109);
  t_7 = t;
  t = SSLsetAnnotations(t_7, r_109);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm k_32 = ATgetFirst((ATermList) t);
      q_109 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Row_3, n_109, q_109, p_109);
  w_7 = t;
  t = SSLsetAnnotations(w_7, m_109);
  return(t);
}
ATerm m_9 (ATerm z_99, ATerm t)
{
  ATerm l_109 = NULL;
  t = z_99;
  t = map_1_0(i_11, t);
  l_109 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, l_109);
  return(t);
}
ATerm repeat_1_0 (ATerm x_138 (ATerm), ATerm t)
{
  ATerm c_110 (ATerm t)
  {
    ATerm l_32 = t;
    int m_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_138(t);
        t = c_110(t);
        ;
        LocalPopChoice(m_32);
      }
    else
      {
        t = l_32;
      }
    return(t);
  }
  t = c_110(t);
  return(t);
}
ATerm o_9 (ATerm r_65, ATerm s_65, ATerm t)
{
  ATerm d_110 = NULL,e_110 = NULL;
  e_110 = t;
  {
    ATerm n_32 = t;
    int o_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, r_65, s_65);
        t = g_11(r_65, s_65, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm p_32 = ATgetFirst((ATermList) t);
            d_110 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(o_32);
        t = SSL_table_put(r_65, s_65, d_110);
        t = (ATerm) ATmakeAppl(sym__3, r_65, s_65, d_110);
      }
    else
      {
        t = n_32;
        t = SSL_table_remove(r_65, s_65);
        t = (ATerm) ATmakeAppl(sym__2, r_65, s_65);
      }
    t = e_110;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm k_134 (ATerm), ATerm t)
{
  ATerm f_110 = NULL,g_110 = NULL,h_110 = NULL,i_110 = NULL,j_110 = NULL;
  if(((i_110 != NULL) && (i_110 != t)))
    _fail(t);
  else
    i_110 = t;
  t = k_134(t);
  if(((h_110 != NULL) && (h_110 != t)))
    _fail(t);
  else
    h_110 = t;
  {
    ATerm q_32 = t;
    int r_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_110 = NULL;
        t = term_a_30;
        l_110 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_110), term_a_30);
        t = g_11(not_null(h_110), l_110, t);
        ;
        LocalPopChoice(r_32);
      }
    else
      {
        t = q_32;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((g_110 != NULL) && (g_110 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          g_110 = ATgetFirst((ATermList) t);
        if(((f_110 != NULL) && (f_110 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          f_110 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_a_30;
    if(((j_110 != NULL) && (j_110 != t)))
      _fail(t);
    else
      j_110 = t;
    t = SSL_table_put(not_null(h_110), not_null(j_110), not_null(f_110));
    t = not_null(g_110);
    {
      ATerm k_11 (ATerm t)
      {
        ATerm m_110 = NULL;
        m_110 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_110), m_110);
        t = o_9(not_null(h_110), m_110, t);
        return(t);
      }
      t = map_1_0(k_11, t);
      t = not_null(i_110);
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm s_125 (ATerm), ATerm t_125 (ATerm), ATerm t)
{
  ATerm s_32 = t;
  int t_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_125(t);
      t = t_125(t);
      ;
      LocalPopChoice(t_32);
    }
  else
    {
      t = s_32;
      t = t_125(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm j_134 (ATerm), ATerm t)
{
  ATerm o_110 = NULL,p_110 = NULL,q_110 = NULL,r_110 = NULL,s_110 = NULL;
  p_110 = t;
  t = j_134(t);
  o_110 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_110, term_a_30);
  {
    ATerm w_32 = t;
    int d_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_110 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm e_33 = ATgetArgument(t, 0);
            ATerm f_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_a_30;
        w_110 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_110, term_a_30);
        t = g_11(o_110, w_110, t);
        ;
        LocalPopChoice(d_33);
      }
    else
      {
        t = w_32;
        t = (ATerm) ATempty;
      }
    q_110 = t;
    t = term_a_30;
    r_110 = t;
    t = (ATerm) ATinsert(CheckATermList(q_110), (ATerm) ATempty);
    s_110 = t;
    t = SSL_table_put(o_110, r_110, s_110);
    t = p_110;
  }
  return(t);
}
ATerm scope_2_0 (ATerm l_134 (ATerm), ATerm m_134 (ATerm), ATerm t)
{
  ATerm l_11 (ATerm t)
  {
    t = end_scope_1_0(l_134, t);
    return(t);
  }
  t = begin_scope_1_0(l_134, t);
  t = restore_always_2_0(m_134, l_11, t);
  return(t);
}
ATerm at_end_1_0 (ATerm c_129 (ATerm), ATerm t)
{
  ATerm r_111 (ATerm t)
  {
    ATerm o_111 = NULL,p_111 = NULL,q_111 = NULL;
    q_111 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_111 = ATgetFirst((ATermList) t);
        p_111 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm n_58 = NULL,q_58 = NULL,g_8 = NULL;
          t = SSLgetAnnotations(q_111);
          n_58 = t;
          t = p_111;
          t = r_111(t);
          q_58 = t;
          t = (ATerm) ATinsert(CheckATermList(q_58), o_111);
          g_8 = t;
          t = SSLsetAnnotations(g_8, n_58);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = q_111;
        t = c_129(t);
      }
    return(t);
  }
  t = r_111(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm y_110 = NULL,z_110 = NULL,a_111 = NULL;
  y_110 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_110;
    }
  else
    {
      ATerm m_11 (ATerm t)
      {
        t = not_null(a_111);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((z_110 != NULL) && (z_110 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            z_110 = ATgetFirst((ATermList) t);
          if(((a_111 != NULL) && (a_111 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            a_111 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(z_110);
      t = at_end_1_0(m_11, t);
    }
  return(t);
}
ATerm e_112 (ATerm w_111, ATerm t)
{
  ATerm x_111 = NULL;
  t = SSL_explode_term(w_111);
  if(match_cons(t, sym__2))
    {
      ATerm g_33 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_33) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      x_111 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_111;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm z_111 = NULL,a_112 = NULL,b_112 = NULL;
  if(((b_112 != NULL) && (b_112 != t)))
    _fail(t);
  else
    b_112 = t;
  if(match_cons(t, sym__2))
    {
      z_111 = ATgetArgument(t, 0);
      a_112 = ATgetArgument(t, 1);
      {
        ATerm h_33 = t;
        int i_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_11 (ATerm t)
            {
              t = not_null(a_112);
              return(t);
            }
            t = not_null(z_111);
            t = at_end_1_0(n_11, t);
            ;
            LocalPopChoice(i_33);
          }
        else
          {
            t = h_33;
            t = e_112(not_null(b_112), t);
          }
      }
    }
  else
    {
      t = e_112(not_null(b_112), t);
    }
  return(t);
}
ATerm o_11 (ATerm t)
{
  ATerm n_113 = NULL;
  if(match_cons(t, sym__2))
    {
      n_113 = ATgetArgument(t, 0);
      if((n_113 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm p_11 (ATerm t)
{
  ATerm v_113 = NULL;
  if(match_cons(t, sym__2))
    {
      v_113 = ATgetArgument(t, 0);
      if((v_113 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm q_11 (ATerm t)
{
  ATerm c_114 = NULL;
  if(match_cons(t, sym__2))
    {
      c_114 = ATgetArgument(t, 0);
      if((c_114 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm r_11 (ATerm t)
{
  ATerm k_114 = NULL;
  if(match_cons(t, sym__2))
    {
      k_114 = ATgetArgument(t, 0);
      if((k_114 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm s_11 (ATerm t)
{
  ATerm s_114 = NULL;
  if(match_cons(t, sym__2))
    {
      s_114 = ATgetArgument(t, 0);
      if((s_114 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm t_11 (ATerm t)
{
  ATerm z_114 = NULL;
  if(match_cons(t, sym__2))
    {
      z_114 = ATgetArgument(t, 0);
      if((z_114 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm MatrixMerge_0_0 (ATerm t)
{
  ATerm t_112 = NULL,u_112 = NULL,v_112 = NULL,w_112 = NULL,y_112 = NULL,z_112 = NULL,a_113 = NULL,b_113 = NULL,c_113 = NULL,d_113 = NULL,e_113 = NULL,f_113 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      y_112 = ATgetArgument(t, 0);
      f_113 = ATgetArgument(t, 1);
      t = y_112;
      if(match_cons(t, sym_Matrix_2))
        {
          z_112 = ATgetArgument(t, 0);
          a_113 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = f_113;
      if(match_cons(t, sym_Choice_2))
        {
          v_112 = ATgetArgument(t, 0);
          w_112 = ATgetArgument(t, 1);
          {
            ATerm l_113 = NULL,m_113 = NULL;
            t = v_112;
            if(match_cons(t, sym_Matrix_2))
              {
                t_112 = ATgetArgument(t, 0);
                u_112 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, z_112, t_112);
            t = n_10(o_11, z_112, t_112, t);
            l_113 = t;
            t = (ATerm) ATmakeAppl(sym__2, a_113, u_112);
            t = conc_0_0(t);
            m_113 = t;
            t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, l_113, m_113), w_112);
          }
        }
      else
        {
          if(match_cons(t, sym_LChoice_2))
            {
              v_112 = ATgetArgument(t, 0);
              w_112 = ATgetArgument(t, 1);
              {
                ATerm t_113 = NULL,u_113 = NULL;
                t = v_112;
                if(match_cons(t, sym_Matrix_2))
                  {
                    t_112 = ATgetArgument(t, 0);
                    u_112 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, z_112, t_112);
                t = n_10(p_11, z_112, t_112, t);
                t_113 = t;
                t = (ATerm) ATmakeAppl(sym__2, a_113, u_112);
                t = conc_0_0(t);
                u_113 = t;
                t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, t_113, u_113), w_112);
              }
            }
          else
            {
              ATerm a_114 = NULL,b_114 = NULL;
              if(match_cons(t, sym_Matrix_2))
                {
                  v_112 = ATgetArgument(t, 0);
                  w_112 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, z_112, v_112);
              t = n_10(q_11, z_112, v_112, t);
              a_114 = t;
              t = (ATerm) ATmakeAppl(sym__2, a_113, w_112);
              t = conc_0_0(t);
              b_114 = t;
              t = (ATerm) ATmakeAppl(sym_Matrix_2, a_114, b_114);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Choice_2))
        {
          y_112 = ATgetArgument(t, 0);
          f_113 = ATgetArgument(t, 1);
          t = y_112;
          if(match_cons(t, sym_Matrix_2))
            {
              z_112 = ATgetArgument(t, 0);
              a_113 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = f_113;
          if(match_cons(t, sym_LChoice_2))
            {
              v_112 = ATgetArgument(t, 0);
              w_112 = ATgetArgument(t, 1);
              {
                ATerm i_114 = NULL,j_114 = NULL;
                t = v_112;
                if(match_cons(t, sym_Matrix_2))
                  {
                    t_112 = ATgetArgument(t, 0);
                    u_112 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, z_112, t_112);
                t = n_10(r_11, z_112, t_112, t);
                i_114 = t;
                t = (ATerm) ATmakeAppl(sym__2, a_113, u_112);
                t = conc_0_0(t);
                j_114 = t;
                t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, i_114, j_114), w_112);
              }
            }
          else
            {
              if(match_cons(t, sym_Choice_2))
                {
                  v_112 = ATgetArgument(t, 0);
                  w_112 = ATgetArgument(t, 1);
                  {
                    ATerm q_114 = NULL,r_114 = NULL;
                    t = v_112;
                    if(match_cons(t, sym_Matrix_2))
                      {
                        t_112 = ATgetArgument(t, 0);
                        u_112 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__2, z_112, t_112);
                    t = n_10(s_11, z_112, t_112, t);
                    q_114 = t;
                    t = (ATerm) ATmakeAppl(sym__2, a_113, u_112);
                    t = conc_0_0(t);
                    r_114 = t;
                    t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Matrix_2, q_114, r_114), w_112);
                  }
                }
              else
                {
                  ATerm x_114 = NULL,y_114 = NULL;
                  if(match_cons(t, sym_Matrix_2))
                    {
                      v_112 = ATgetArgument(t, 0);
                      w_112 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, z_112, v_112);
                  t = n_10(t_11, z_112, v_112, t);
                  x_114 = t;
                  t = (ATerm) ATmakeAppl(sym__2, a_113, w_112);
                  t = conc_0_0(t);
                  y_114 = t;
                  t = (ATerm) ATmakeAppl(sym_Matrix_2, x_114, y_114);
                }
            }
        }
      else
        {
          if(match_cons(t, sym_Scope_2))
            {
              y_112 = ATgetArgument(t, 0);
              f_113 = ATgetArgument(t, 1);
              {
                ATerm d_115 = NULL;
                t = not_null(f_113);
                if(match_cons(t, sym_Matrix_2))
                  {
                    if(((v_112 != NULL) && (v_112 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      v_112 = ATgetArgument(t, 0);
                    if(((w_112 != NULL) && (w_112 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      w_112 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = not_null(w_112);
                {
                  ATerm u_11 (ATerm t)
                  {
                    ATerm e_115 = NULL,f_115 = NULL;
                    if(match_cons(t, sym_Row_2))
                      {
                        e_115 = ATgetArgument(t, 0);
                        f_115 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Row_2, e_115, (ATerm) ATmakeAppl(sym_Scope_2, not_null(y_112), f_115));
                    return(t);
                  }
                  t = map_1_0(u_11, t);
                  if(((d_115 != NULL) && (d_115 != t)))
                    _fail(t);
                  else
                    d_115 = t;
                  t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(v_112), not_null(d_115));
                }
              }
            }
          else
            {
              if(match_cons(t, sym_Seq_2))
                {
                  y_112 = ATgetArgument(t, 0);
                  f_113 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = y_112;
              if(match_cons(t, sym_Matrix_2))
                {
                  z_112 = ATgetArgument(t, 0);
                  a_113 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = a_113;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  b_113 = ATgetFirst((ATermList) t);
                  e_113 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = b_113;
              if(match_cons(t, sym_Row_2))
                {
                  c_113 = ATgetArgument(t, 0);
                  d_113 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = e_113;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Matrix_2, z_112, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, c_113, (ATerm) ATmakeAppl(sym_Seq_2, d_113, f_113))));
            }
        }
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm m_122 (ATerm), ATerm t)
{
  ATerm v_11 (ATerm t)
  {
    t = bottomup_1_0(m_122, t);
    return(t);
  }
  t = SRTS_all(v_11, t);
  t = m_122(t);
  return(t);
}
ATerm m_10 (ATerm r_130 (ATerm), ATerm s_130 (ATerm), ATerm h_60, ATerm g_60, ATerm t)
{
  t = s_130(t);
  {
    ATerm x_11 (ATerm t)
    {
      ATerm k_115 = NULL;
      k_115 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(h_60), k_115);
      t = r_130(t);
      return(t);
    }
    t = fetch_1_0(x_11, t);
    t = not_null(g_60);
  }
  return(t);
}
ATerm n_10 (ATerm o_130 (ATerm), ATerm d_60, ATerm c_60, ATerm t)
{
  ATerm a_116 (ATerm t)
  {
    ATerm v_115 = NULL,w_115 = NULL,x_115 = NULL;
    v_115 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = not_null(c_60);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_115 = ATgetFirst((ATermList) t);
            x_115 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm j_33 = t;
          int k_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_115;
              {
                ATerm z_11 (ATerm t)
                {
                  t = not_null(c_60);
                  return(t);
                }
                t = m_10(o_130, z_11, not_null(w_115), not_null(x_115), t);
                t = a_116(t);
              }
              ;
              LocalPopChoice(k_33);
            }
          else
            {
              t = j_33;
              {
                ATerm l_59 = NULL,o_59 = NULL,i_8 = NULL;
                t = SSLgetAnnotations(v_115);
                l_59 = t;
                t = x_115;
                t = a_116(t);
                o_59 = t;
                t = (ATerm) ATinsert(CheckATermList(o_59), w_115);
                i_8 = t;
                t = SSLsetAnnotations(i_8, l_59);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(d_60);
  t = a_116(t);
  return(t);
}
ATerm foldr_3_0 (ATerm e_133 (ATerm), ATerm f_133 (ATerm), ATerm g_133 (ATerm), ATerm t)
{
  ATerm d_116 = NULL,e_116 = NULL,f_116 = NULL;
  d_116 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_116;
      t = e_133(t);
    }
  else
    {
      ATerm i_116 = NULL,j_116 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_116 = ATgetFirst((ATermList) t);
          f_116 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_116;
      t = g_133(t);
      i_116 = t;
      t = f_116;
      t = foldr_3_0(e_133, f_133, g_133, t);
      j_116 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_116, j_116);
      t = f_133(t);
    }
  return(t);
}
ATerm a_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm i_132 (ATerm), ATerm j_132 (ATerm), ATerm t)
{
  ATerm l_33 = t;
  int m_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_116 = NULL;
      t = i_132(t);
      m_116 = t;
      t = (ATerm) ATinsert(ATempty, m_116);
      ;
      LocalPopChoice(m_33);
    }
  else
    {
      t = l_33;
      {
        ATerm l_60 = NULL,p_60 = NULL;
        ATerm b_12 (ATerm t)
        {
          t = collect_om_2_0(i_132, j_132, t);
          return(t);
        }
        if(((p_60 != NULL) && (p_60 != t)))
          _fail(t);
        else
          p_60 = t;
        t = SSL_explode_term(not_null(p_60));
        if(match_cons(t, sym__2))
          {
            ATerm o_33 = ATgetArgument(t, 0);
            if(((l_60 != NULL) && (l_60 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              l_60 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = not_null(l_60);
        t = foldr_3_0(a_12, j_132, b_12, t);
      }
    }
  return(t);
}
ATerm CollectSubst_0_0 (ATerm t)
{
  ATerm s_116 = NULL,v_116 = NULL,w_116 = NULL,x_116 = NULL,y_116 = NULL;
  if(match_cons(t, sym_As_2))
    {
      v_116 = ATgetArgument(t, 0);
      x_116 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_116;
  if(match_cons(t, sym_Var_1))
    {
      w_116 = ATgetArgument(t, 0);
      t = x_116;
      if(match_cons(t, sym_As_2))
        {
          y_116 = ATgetArgument(t, 0);
          {
            ATerm q_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = y_116;
      if(match_cons(t, sym_Off_1))
        {
          s_116 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, w_116), (ATerm) ATmakeAppl(sym_Var_1, s_116)));
    }
  else
    {
      if(match_cons(t, sym_Off_1))
        {
          w_116 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_116;
      if(match_cons(t, sym_Var_1))
        {
          y_116 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, y_116), (ATerm) ATmakeAppl(sym_Var_1, w_116)));
    }
  return(t);
}
ATerm IgnoreVar_0_0 (ATerm t)
{
  ATerm q_117 = NULL,r_117 = NULL,s_117 = NULL,t_117 = NULL,u_117 = NULL,v_117 = NULL,w_117 = NULL;
  s_117 = t;
  if(match_cons(t, sym_As_2))
    {
      t_117 = ATgetArgument(t, 0);
      v_117 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_117;
  {
    ATerm r_33 = t;
    int s_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm v_33 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(s_33);
        t = v_117;
        if(match_cons(t, sym_As_2))
          {
            w_117 = ATgetArgument(t, 0);
            r_117 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = w_117;
        if(match_cons(t, sym_Off_1))
          {
            q_117 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, q_117), r_117);
      }
    else
      {
        t = r_33;
        if(match_cons(t, sym_Off_1))
          {
            u_117 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = v_117;
        if(match_cons(t, sym_Var_1))
          {
            ATerm w_33 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = u_117;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = u_117;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm x_33 = ATgetFirst((ATermList) t);
                ATerm y_33 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = u_117;
          }
        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, u_117), term_f_30);
      }
  }
  return(t);
}
ATerm d_12 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_l_29;
  return(t);
}
ATerm e_12 (ATerm t)
{
  ATerm n_118 = NULL,o_118 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_118 = ATgetFirst((ATermList) t);
      o_118 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_118, o_118);
  return(t);
}
ATerm f_12 (ATerm t)
{
  ATerm p_118 = NULL,q_118 = NULL,r_118 = NULL,s_118 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_33 = ATgetArgument(t, 0);
      if(match_cons(z_33, sym__2))
        {
          p_118 = ATgetArgument(z_33, 0);
          q_118 = ATgetArgument(z_33, 1);
        }
      else
        _fail(t);
      {
        ATerm a_34 = ATgetArgument(t, 1);
        if(match_cons(a_34, sym__2))
          {
            r_118 = ATgetArgument(a_34, 0);
            s_118 = ATgetArgument(a_34, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_118), p_118), (ATerm) ATinsert(CheckATermList(s_118), q_118));
  return(t);
}
ATerm g_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm h_12 (ATerm t)
{
  ATerm t_118 = NULL,u_118 = NULL;
  if(match_cons(t, sym__2))
    {
      t_118 = ATgetArgument(t, 0);
      u_118 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_10(i_12, t_118, u_118, t);
  return(t);
}
ATerm i_12 (ATerm t)
{
  ATerm v_118 = NULL;
  if(match_cons(t, sym__2))
    {
      v_118 = ATgetArgument(t, 0);
      if((v_118 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm j_12 (ATerm t)
{
  ATerm w_118 = NULL;
  if(match_cons(t, sym__2))
    {
      w_118 = ATgetArgument(t, 0);
      if((w_118 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm CollectSplit_2_0 (ATerm l_131 (ATerm), ATerm m_131 (ATerm), ATerm t)
{
  ATerm a_118 = NULL,b_118 = NULL,c_118 = NULL,d_118 = NULL,e_118 = NULL,f_118 = NULL,g_118 = NULL,h_118 = NULL,i_118 = NULL,j_118 = NULL,k_118 = NULL,l_118 = NULL;
  k_118 = t;
  l_118 = t;
  t = SSL_explode_term(l_118);
  if(match_cons(t, sym__2))
    {
      c_118 = ATgetArgument(t, 0);
      a_118 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_118);
  e_118 = t;
  t = a_118;
  t = genzip_4_0(d_12, e_12, f_12, l_131, t);
  if(match_cons(t, sym__2))
    {
      d_118 = ATgetArgument(t, 0);
      b_118 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_mkterm(c_118, d_118);
  j_118 = t;
  t = SSLsetAnnotations(j_118, e_118);
  t = m_131(t);
  if(match_cons(t, sym__2))
    {
      f_118 = ATgetArgument(t, 0);
      g_118 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_118;
  t = foldr_2_0(g_12, h_12, t);
  i_118 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_118, i_118);
  t = n_10(j_12, g_118, i_118, t);
  h_118 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_118, h_118);
  return(t);
}
ATerm collect_split_2_0 (ATerm c_132 (ATerm), ATerm d_132 (ATerm), ATerm t)
{
  ATerm d_119 (ATerm t)
  {
    ATerm l_12 (ATerm t)
    {
      ATerm y_118 = NULL,z_118 = NULL,a_119 = NULL;
      a_119 = t;
      {
        ATerm d_34 = t;
        int e_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_132(t);
            ;
            LocalPopChoice(e_34);
          }
        else
          {
            t = d_34;
          }
        y_118 = t;
        t = a_119;
        {
          ATerm f_34 = t;
          int h_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_132(t);
              ;
              LocalPopChoice(h_34);
            }
          else
            {
              t = f_34;
              t = (ATerm) ATempty;
            }
          z_118 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_118, z_118);
        }
      }
      return(t);
    }
    t = CollectSplit_2_0(d_119, l_12, t);
    return(t);
  }
  t = d_119(t);
  return(t);
}
ATerm genzip_4_0 (ATerm x_126 (ATerm), ATerm y_126 (ATerm), ATerm z_126 (ATerm), ATerm a_127 (ATerm), ATerm t)
{
  ATerm k_119 (ATerm t)
  {
    ATerm j_34 = t;
    int k_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_126(t);
        ;
        LocalPopChoice(k_34);
      }
    else
      {
        t = j_34;
        {
          ATerm e_119 = NULL,f_119 = NULL,g_119 = NULL,h_119 = NULL,i_119 = NULL,j_119 = NULL,t_8 = NULL;
          t = y_126(t);
          j_119 = t;
          if(match_cons(t, sym__2))
            {
              f_119 = ATgetArgument(t, 0);
              g_119 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(j_119);
          e_119 = t;
          t = f_119;
          t = a_127(t);
          h_119 = t;
          t = g_119;
          t = k_119(t);
          i_119 = t;
          t = (ATerm) ATmakeAppl(sym__2, h_119, i_119);
          t_8 = t;
          t = SSLsetAnnotations(t_8, e_119);
          t = z_126(t);
        }
      }
    return(t);
  }
  t = k_119(t);
  return(t);
}
ATerm m_12 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_34 = ATgetArgument(t, 0);
      ATerm m_34 = ATgetArgument(t, 1);
      if(((ATgetType(m_34) != AT_LIST) || !(ATisEmpty(m_34))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm o_12 (ATerm t)
{
  ATerm n_119 = NULL,o_119 = NULL,p_119 = NULL,q_119 = NULL,r_119 = NULL;
  if(match_cons(t, sym__2))
    {
      n_119 = ATgetArgument(t, 0);
      {
        ATerm n_34 = ATgetArgument(t, 1);
        if(((ATgetType(n_34) == AT_LIST) && !(ATisEmpty(n_34))))
          {
            o_119 = ATgetFirst((ATermList) n_34);
            p_119 = (ATerm) ATgetNext((ATermList) n_34);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_a_18;
  r_119 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_119, term_a_18);
  t = e_11(n_119, r_119, t);
  q_119 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_119, o_119), (ATerm) ATmakeAppl(sym__2, q_119, p_119));
  return(t);
}
ATerm t_12 (ATerm t)
{
  ATerm s_119 = NULL,t_119 = NULL;
  if(match_cons(t, sym__2))
    {
      s_119 = ATgetArgument(t, 0);
      t_119 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(t_119), s_119);
  return(t);
}
ATerm nzip0_1_0 (ATerm i_127 (ATerm), ATerm t)
{
  ATerm l_119 = NULL;
  l_119 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_29, l_119);
  t = genzip_4_0(m_12, o_12, t_12, i_127, t);
  return(t);
}
ATerm Propagate_0_0 (ATerm t)
{
  ATerm y_119 = NULL,a_120 = NULL,b_120 = NULL,c_120 = NULL,d_120 = NULL,e_120 = NULL;
  if(match_cons(t, sym_As_2))
    {
      if(((a_120 != NULL) && (a_120 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_120 = ATgetArgument(t, 0);
      if(((c_120 != NULL) && (c_120 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        c_120 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(a_120);
  if(match_cons(t, sym_Off_1))
    {
      if(((b_120 != NULL) && (b_120 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_120 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(c_120);
  {
    ATerm o_34 = t;
    int p_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_BuildDefault_1))
          {
            ATerm q_34 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(p_34);
        {
          ATerm r_34 = t;
          int s_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_12 (ATerm t)
              {
                ATerm h_120 = NULL,i_120 = NULL;
                if(match_cons(t, sym__2))
                  {
                    h_120 = ATgetArgument(t, 0);
                    i_120 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(not_null(b_120)), h_120)), i_120);
                return(t);
              }
              t = not_null(c_120);
              t = nzip0_1_0(u_12, t);
              ;
              LocalPopChoice(s_34);
            }
          else
            {
              t = r_34;
              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(b_120)), term_f_30);
            }
        }
      }
    else
      {
        t = o_34;
        if(match_cons(t, sym_As_2))
          {
            d_120 = ATgetArgument(t, 0);
            e_120 = ATgetArgument(t, 1);
            t = not_null(d_120);
            if(match_cons(t, sym_Var_1))
              {
                y_119 = ATgetArgument(t, 0);
                {
                  ATerm t_34 = t;
                  int u_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm x_12 (ATerm t)
                      {
                        ATerm q_120 = NULL,r_120 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            q_120 = ATgetArgument(t, 0);
                            r_120 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(not_null(b_120)), q_120)), r_120);
                        return(t);
                      }
                      t = not_null(c_120);
                      t = nzip0_1_0(x_12, t);
                      ;
                      LocalPopChoice(u_34);
                    }
                  else
                    {
                      t = t_34;
                      t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(y_119)), (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(b_120)), not_null(e_120)));
                    }
                }
              }
            else
              {
                ATerm y_12 (ATerm t)
                {
                  ATerm x_120 = NULL,y_120 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      x_120 = ATgetArgument(t, 0);
                      y_120 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(not_null(b_120)), x_120)), y_120);
                  return(t);
                }
                t = not_null(c_120);
                t = nzip0_1_0(y_12, t);
              }
          }
        else
          {
            if(match_cons(t, sym_Op_2))
              {
                d_120 = ATgetArgument(t, 0);
                e_120 = ATgetArgument(t, 1);
                {
                  ATerm v_34 = t;
                  int w_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm b_13 (ATerm t)
                      {
                        ATerm b_121 = NULL,c_121 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            b_121 = ATgetArgument(t, 0);
                            c_121 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(not_null(b_120)), b_121)), c_121);
                        return(t);
                      }
                      t = not_null(c_120);
                      t = nzip0_1_0(b_13, t);
                      ;
                      LocalPopChoice(w_34);
                    }
                  else
                    {
                      t = v_34;
                      t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(b_120)), (ATerm) ATmakeAppl(sym_Op_2, not_null(d_120), (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(b_120)), not_null(e_120))));
                    }
                }
              }
            else
              {
                ATerm c_13 (ATerm t)
                {
                  ATerm i_121 = NULL,j_121 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      i_121 = ATgetArgument(t, 0);
                      j_121 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(not_null(b_120)), i_121)), j_121);
                  return(t);
                }
                t = not_null(c_120);
                t = nzip0_1_0(c_13, t);
              }
          }
      }
  }
  return(t);
}
ATerm d_13 (ATerm t)
{
  ATerm a_122 = NULL,b_122 = NULL,c_122 = NULL;
  c_122 = t;
  if(match_cons(t, sym_As_2))
    {
      a_122 = ATgetArgument(t, 0);
      b_122 = ATgetArgument(t, 1);
      t = a_122;
      if(match_cons(t, sym_Wld_0))
        {
          t = b_122;
        }
      else
        {
          t = c_122;
        }
    }
  else
    {
      t = c_122;
    }
  return(t);
}
ATerm e_13 (ATerm t)
{
  ATerm x_34 = t;
  int y_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Propagate_0_0(t);
      ;
      LocalPopChoice(y_34);
    }
  else
    {
      t = x_34;
    }
  return(t);
}
ATerm f_13 (ATerm t)
{
  ATerm j_122 = NULL;
  if(match_cons(t, sym_Off_1))
    {
      j_122 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_122;
  return(t);
}
ATerm g_13 (ATerm t)
{
  ATerm k_122 = NULL,n_122 = NULL;
  if(match_cons(t, sym__2))
    {
      k_122 = ATgetArgument(t, 0);
      n_122 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_10(j_13, k_122, n_122, t);
  return(t);
}
ATerm j_13 (ATerm t)
{
  ATerm o_122 = NULL;
  if(match_cons(t, sym__2))
    {
      o_122 = ATgetArgument(t, 0);
      if((o_122 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm term_to_matrix_0_0 (ATerm t)
{
  ATerm w_121 = NULL,x_121 = NULL,y_121 = NULL,z_121 = NULL;
  z_121 = t;
  t = (ATerm) ATmakeAppl(sym_As_2, term_z_34, (ATerm) ATinsert(ATempty, z_121));
  t = topdown_1_0(d_13, t);
  t = topdown_1_0(e_13, t);
  t = collect_split_2_0(IgnoreVar_0_0, CollectSubst_0_0, t);
  if(match_cons(t, sym__2))
    {
      w_121 = ATgetArgument(t, 0);
      x_121 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_121;
  t = collect_om_2_0(f_13, g_13, t);
  y_121 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_2, y_121, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, w_121, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, x_121), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATinsert(ATempty, term_v_29)))))));
  return(t);
}
ATerm k_13 (ATerm t)
{
  t = repeat_1_0(l_13, t);
  return(t);
}
ATerm l_13 (ATerm t)
{
  ATerm a_35 = t;
  int b_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MatrixMerge_0_0(t);
      ;
      LocalPopChoice(b_35);
    }
  else
    {
      t = a_35;
      t = Simplify_0_0(t);
    }
  return(t);
}
ATerm match_to_matrix_0_0 (ATerm t)
{
  ATerm c_35 = t;
  int d_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_124 (ATerm t)
      {
        ATerm e_35 = t;
        int f_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_123 = NULL,y_123 = NULL,z_123 = NULL;
            x_123 = t;
            if(match_cons(t, sym_Choice_2))
              {
                y_123 = ATgetArgument(t, 0);
                z_123 = ATgetArgument(t, 1);
                {
                  ATerm e_61 = NULL,h_61 = NULL,i_61 = NULL,o_10 = NULL;
                  t = SSLgetAnnotations(x_123);
                  e_61 = t;
                  t = y_123;
                  t = v_124(t);
                  h_61 = t;
                  t = z_123;
                  t = v_124(t);
                  i_61 = t;
                  t = (ATerm) ATmakeAppl(sym_Choice_2, h_61, i_61);
                  o_10 = t;
                  t = SSLsetAnnotations(o_10, e_61);
                }
              }
            else
              {
                ATerm q_61 = NULL,t_61 = NULL,u_61 = NULL,u_10 = NULL;
                if(match_cons(t, sym_LChoice_2))
                  {
                    y_123 = ATgetArgument(t, 0);
                    z_123 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(x_123);
                q_61 = t;
                t = y_123;
                t = v_124(t);
                t_61 = t;
                t = z_123;
                t = v_124(t);
                u_61 = t;
                t = (ATerm) ATmakeAppl(sym_LChoice_2, t_61, u_61);
                u_10 = t;
                t = SSLsetAnnotations(u_10, q_61);
              }
            ;
            LocalPopChoice(f_35);
          }
        else
          {
            t = e_35;
            {
              ATerm y_124 (ATerm t)
              {
                ATerm g_35 = t;
                int h_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm r_124 = NULL,s_124 = NULL,t_124 = NULL;
                    s_124 = t;
                    if(match_cons(t, sym_Seq_2))
                      {
                        t_124 = ATgetArgument(t, 0);
                        r_124 = ATgetArgument(t, 1);
                        {
                          ATerm c_62 = NULL,f_62 = NULL,g_62 = NULL,v_10 = NULL;
                          t = SSLgetAnnotations(s_124);
                          c_62 = t;
                          t = t_124;
                          t = y_124(t);
                          f_62 = t;
                          t = r_124;
                          t = match_to_matrix_0_0(t);
                          g_62 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, f_62, g_62);
                          v_10 = t;
                          t = SSLsetAnnotations(v_10, c_62);
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            t_124 = ATgetArgument(t, 0);
                            r_124 = ATgetArgument(t, 1);
                            {
                              ATerm o_62 = NULL,t_62 = NULL,w_10 = NULL;
                              t = SSLgetAnnotations(s_124);
                              o_62 = t;
                              t = r_124;
                              t = y_124(t);
                              t_62 = t;
                              t = (ATerm) ATmakeAppl(sym_Scope_2, t_124, t_62);
                              w_10 = t;
                              t = SSLsetAnnotations(w_10, o_62);
                            }
                          }
                        else
                          {
                            if(match_cons(t, sym_Match_1))
                              {
                                t_124 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = t_124;
                            t = term_to_matrix_0_0(t);
                          }
                      }
                    ;
                    LocalPopChoice(h_35);
                  }
                else
                  {
                    t = g_35;
                    t = SRTS_all(match_to_matrix_0_0, t);
                  }
                return(t);
              }
              t = y_124(t);
            }
          }
        return(t);
      }
      ATerm i_35 = t;
      int j_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_122 = NULL,w_122 = NULL,x_122 = NULL,y_122 = NULL,u_9 = NULL;
          y_122 = t;
          if(match_cons(t, sym_Choice_2))
            {
              w_122 = ATgetArgument(t, 0);
              x_122 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(y_122);
          v_122 = t;
          t = (ATerm) ATmakeAppl(sym_Choice_2, w_122, x_122);
          u_9 = t;
          t = SSLsetAnnotations(u_9, v_122);
          ;
          LocalPopChoice(j_35);
        }
      else
        {
          t = i_35;
          {
            ATerm z_122 = NULL,a_123 = NULL,b_123 = NULL,c_123 = NULL,f_10 = NULL;
            c_123 = t;
            if(match_cons(t, sym_LChoice_2))
              {
                a_123 = ATgetArgument(t, 0);
                b_123 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(c_123);
            z_122 = t;
            t = (ATerm) ATmakeAppl(sym_LChoice_2, a_123, b_123);
            f_10 = t;
            t = SSLsetAnnotations(f_10, z_122);
          }
        }
      t = v_124(t);
      ;
      LocalPopChoice(d_35);
    }
  else
    {
      t = c_35;
      t = SRTS_all(match_to_matrix_0_0, t);
    }
  t = bottomup_1_0(k_13, t);
  return(t);
}
ATerm m_13 (ATerm t)
{
  t = term_d_32;
  return(t);
}
ATerm p_13 (ATerm t)
{
  ATerm k_35 = t;
  int l_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_125 = NULL,d_125 = NULL,e_125 = NULL;
      c_125 = t;
      if(match_cons(t, sym_Matrix_1))
        {
          d_125 = ATgetArgument(t, 0);
          {
            ATerm n_35 = t;
            int p_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_125 = NULL;
                t = d_125;
                t = map_1_0(r_13, t);
                g_125 = t;
                t = (ATerm) ATmakeAppl(sym_LChoices_1, g_125);
                ;
                LocalPopChoice(p_35);
              }
            else
              {
                t = n_35;
                {
                  ATerm q_35 = t;
                  int y_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = c_125;
                      t = m_9(d_125, t);
                      ;
                      LocalPopChoice(y_35);
                    }
                  else
                    {
                      t = q_35;
                      {
                        ATerm z_35 = t;
                        int a_36 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = c_125;
                            t = k_9(d_125, t);
                            ;
                            LocalPopChoice(a_36);
                          }
                        else
                          {
                            t = z_35;
                            t = c_125;
                            t = i_9(d_125, t);
                          }
                      }
                    }
                }
              }
          }
        }
      else
        {
          if(match_cons(t, sym_Matrix_2))
            {
              d_125 = ATgetArgument(t, 0);
              e_125 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = c_125;
          t = b_9(d_125, e_125, t);
        }
      ;
      LocalPopChoice(l_35);
    }
  else
    {
      t = k_35;
      t = Simplify_0_0(t);
    }
  return(t);
}
ATerm r_13 (ATerm t)
{
  ATerm h_125 = NULL;
  if(match_cons(t, sym_Row_3))
    {
      ATerm c_36 = ATgetArgument(t, 0);
      if(((ATgetType(c_36) != AT_LIST) || !(ATisEmpty(c_36))))
        _fail(t);
      {
        ATerm d_36 = ATgetArgument(t, 1);
        if(((ATgetType(d_36) != AT_LIST) || !(ATisEmpty(d_36))))
          _fail(t);
      }
      h_125 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = h_125;
  return(t);
}
ATerm match_to_dfa_0_0 (ATerm t)
{
  t = match_to_matrix_0_0(t);
  {
    ATerm n_13 (ATerm t)
    {
      t = repeat_1_0(p_13, t);
      t = SRTS_all(n_13, t);
      return(t);
    }
    t = scope_2_0(m_13, n_13, t);
    t = strename_0_0(t);
  }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm topdown_1_0 (ATerm l_122 (ATerm), ATerm t)
{
  ATerm t_13 (ATerm t)
  {
    t = topdown_1_0(l_122, t);
    return(t);
  }
  t = l_122(t);
  t = SRTS_all(t_13, t);
  return(t);
}
ATerm map_1_0 (ATerm m_128 (ATerm), ATerm t)
{
  ATerm e_126 (ATerm t)
  {
    ATerm b_126 = NULL,c_126 = NULL,d_126 = NULL;
    b_126 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_126;
      }
    else
      {
        ATerm g_63 = NULL,j_63 = NULL,k_63 = NULL,y_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_126 = ATgetFirst((ATermList) t);
            d_126 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_126);
        g_63 = t;
        t = c_126;
        t = m_128(t);
        j_63 = t;
        t = d_126;
        t = e_126(t);
        k_63 = t;
        t = (ATerm) ATinsert(CheckATermList(k_63), j_63);
        y_11 = t;
        t = SSLsetAnnotations(y_11, g_63);
      }
    return(t);
  }
  t = e_126(t);
  return(t);
}
ATerm Cons_2_0 (ATerm u_105 (ATerm), ATerm v_105 (ATerm), ATerm t)
{
  ATerm g_126 = NULL,h_126 = NULL,i_126 = NULL,j_126 = NULL,k_126 = NULL,l_126 = NULL,n_12 = NULL;
  l_126 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_126 = ATgetFirst((ATermList) t);
      i_126 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_126);
  g_126 = t;
  t = h_126;
  t = u_105(t);
  j_126 = t;
  t = i_126;
  t = v_105(t);
  k_126 = t;
  t = (ATerm) ATinsert(CheckATermList(k_126), j_126);
  n_12 = t;
  t = SSLsetAnnotations(n_12, g_126);
  return(t);
}
ATerm y_10 (ATerm f_79, ATerm g_79, ATerm t)
{
  ATerm m_126 = NULL;
  t = SSL_fputc(f_79, g_79);
  m_126 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_126);
  return(t);
}
ATerm z_10 (ATerm t_82, ATerm u_82, ATerm t)
{
  ATerm n_126 = NULL;
  t = SSL_write_term_to_stream_text(t_82, u_82);
  n_126 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_126);
  return(t);
}
ATerm b_11 (ATerm l_144 (ATerm), ATerm f_588, ATerm x_82, ATerm t)
{
  ATerm o_126 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_588, term_e_36);
  t = open_stream_0_0(t);
  o_126 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_126, x_82);
  t = l_144(t);
  t = fclose_0_0(t);
  t = x_82;
  return(t);
}
ATerm a_11 (ATerm p_82, ATerm q_82, ATerm t)
{
  ATerm p_126 = NULL;
  t = SSL_write_term_to_stream_baf(p_82, q_82);
  p_126 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_126);
  return(t);
}
ATerm x_13 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm y_13 (ATerm t)
{
  ATerm n_64 = NULL,o_64 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_36 = ATgetArgument(t, 0);
      if(match_cons(f_36, sym_Stream_1))
        {
          n_64 = ATgetArgument(f_36, 0);
        }
      else
        _fail(t);
      o_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_11(n_64, o_64, t);
  return(t);
}
ATerm z_13 (ATerm t)
{
  ATerm z_64 = NULL,a_65 = NULL,b_65 = NULL,d_65 = NULL,f_65 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_36 = ATgetArgument(t, 0);
      if(match_cons(g_36, sym_Stream_1))
        {
          d_65 = ATgetArgument(g_36, 0);
        }
      else
        _fail(t);
      f_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_10(d_65, f_65, t);
  z_64 = t;
  t = term_h_36;
  a_65 = t;
  t = z_64;
  if(match_cons(t, sym_Stream_1))
    {
      b_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_h_36, z_64);
  t = y_10(a_65, b_65, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm t_126 = NULL,u_126 = NULL,v_126 = NULL,w_126 = NULL,c_127 = NULL,e_127 = NULL,f_127 = NULL,g_127 = NULL,h_127 = NULL,j_127 = NULL,j_128 = NULL,l_128 = NULL,q_12 = NULL,p_12 = NULL;
  if(((u_126 != NULL) && (u_126 != t)))
    _fail(t);
  else
    u_126 = t;
  if(match_cons(t, sym__2))
    {
      if(((g_127 != NULL) && (g_127 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_127 = ATgetArgument(t, 0);
      if(((h_127 != NULL) && (h_127 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_127 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(u_126));
  if(((f_127 != NULL) && (f_127 != t)))
    _fail(t);
  else
    f_127 = t;
  t = not_null(g_127);
  {
    ATerm i_36 = t;
    int j_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_13 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((t_126 != NULL) && (t_126 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                t_126 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(v_13, t);
        ;
        LocalPopChoice(j_36);
      }
    else
      {
        t = i_36;
        t = term_k_36;
        if(((t_126 != NULL) && (t_126 != t)))
          _fail(t);
        else
          t_126 = t;
      }
    if(((j_127 != NULL) && (j_127 != t)))
      _fail(t);
    else
      j_127 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_127), not_null(h_127));
    if(((p_12 != NULL) && (p_12 != t)))
      _fail(t);
    else
      p_12 = t;
    t = SSLsetAnnotations(not_null(p_12), not_null(f_127));
    t = not_null(u_126);
    if(match_cons(t, sym__2))
      {
        if(((w_126 != NULL) && (w_126 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          w_126 = ATgetArgument(t, 0);
        if(((c_127 != NULL) && (c_127 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          c_127 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(u_126));
    if(((v_126 != NULL) && (v_126 != t)))
      _fail(t);
    else
      v_126 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_126), (ATerm) ATmakeAppl(sym__2, not_null(t_126), not_null(c_127)));
    if(((q_12 != NULL) && (q_12 != t)))
      _fail(t);
    else
      q_12 = t;
    t = SSLsetAnnotations(not_null(q_12), not_null(v_126));
    if(((e_127 != NULL) && (e_127 != t)))
      _fail(t);
    else
      e_127 = t;
    if(match_cons(t, sym__2))
      {
        if(((j_128 != NULL) && (j_128 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          j_128 = ATgetArgument(t, 0);
        if(((l_128 != NULL) && (l_128 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          l_128 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm o_36 = t;
      int q_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_64 = NULL,j_64 = NULL,k_64 = NULL,l_64 = NULL,m_64 = NULL,r_12 = NULL;
          t = SSLgetAnnotations(not_null(e_127));
          g_64 = t;
          t = not_null(j_128);
          t = fetch_1_0(x_13, t);
          j_64 = t;
          t = not_null(l_128);
          if(match_cons(t, sym__2))
            {
              l_64 = ATgetArgument(t, 0);
              m_64 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_11(y_13, l_64, m_64, t);
          k_64 = t;
          t = (ATerm) ATmakeAppl(sym__2, j_64, k_64);
          r_12 = t;
          t = SSLsetAnnotations(r_12, g_64);
          ;
          LocalPopChoice(q_36);
        }
      else
        {
          t = o_36;
          {
            ATerm t_64 = NULL,w_64 = NULL,x_64 = NULL,y_64 = NULL,s_12 = NULL;
            t = SSLgetAnnotations(not_null(e_127));
            t_64 = t;
            t = not_null(l_128);
            if(match_cons(t, sym__2))
              {
                x_64 = ATgetArgument(t, 0);
                y_64 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = b_11(z_13, x_64, y_64, t);
            w_64 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(j_128), w_64);
            s_12 = t;
            t = SSLsetAnnotations(s_12, t_64);
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
ATerm apply_strategy_1_0 (ATerm n_147 (ATerm), ATerm t)
{
  ATerm q_128 = NULL,r_128 = NULL,s_128 = NULL,t_128 = NULL,u_128 = NULL;
  u_128 = t;
  t = dtime_0_0(t);
  t = u_128;
  t = n_147(t);
  t_128 = t;
  t = dtime_0_0(t);
  q_128 = t;
  t = t_128;
  if(match_cons(t, sym__2))
    {
      r_128 = ATgetArgument(t, 0);
      s_128 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_128), (ATerm) ATmakeAppl(sym_Runtime_1, q_128)), s_128);
  return(t);
}
ATerm m_129 (ATerm g_129, ATerm t)
{
  t = SSL_fclose(g_129);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm j_129 = NULL,k_129 = NULL;
  k_129 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_129 = ATgetArgument(t, 0);
      {
        ATerm v_36 = t;
        int w_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(j_129);
            ;
            LocalPopChoice(w_36);
          }
        else
          {
            t = v_36;
            t = m_129(k_129, t);
          }
      }
    }
  else
    {
      t = m_129(k_129, t);
    }
  return(t);
}
ATerm c_11 (ATerm v_82, ATerm t)
{
  t = SSL_read_term_from_stream(v_82);
  return(t);
}
ATerm d_11 (ATerm h_79, ATerm i_79, ATerm t)
{
  ATerm n_129 = NULL;
  t = SSL_fopen(h_79, i_79);
  n_129 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_129);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm o_129 = NULL;
  t = SSL_stdin_stream();
  o_129 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_129);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm p_129 = NULL;
  t = SSL_stdout_stream();
  p_129 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_129);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm q_129 = NULL;
  t = SSL_stderr_stream();
  q_129 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_129);
  return(t);
}
ATerm o_131 (ATerm y_129, ATerm t)
{
  ATerm z_129 = NULL;
  t = SSL_explode_term(y_129);
  if(match_cons(t, sym__2))
    {
      ATerm x_36 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_36) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_36 = ATgetArgument(t, 1);
        if(((ATgetType(z_36) == AT_LIST) && !(ATisEmpty(z_36))))
          {
            z_129 = ATgetFirst((ATermList) z_36);
            {
              ATerm a_37 = (ATerm) ATgetNext((ATermList) z_36);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = z_129;
  if(match_cons(t, sym_stderr_0))
    {
      t = z_129;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = z_129;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = z_129;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm p_131 (ATerm c_130, ATerm d_130, ATerm e_130, ATerm t)
{
  ATerm f_130 = NULL,g_130 = NULL,l_130 = NULL,q_130 = NULL,z_12 = NULL;
  t = SSLgetAnnotations(e_130);
  l_130 = t;
  t = c_130;
  if(match_cons(t, sym_Path_1))
    {
      q_130 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_130, d_130);
  z_12 = t;
  t = SSLsetAnnotations(z_12, l_130);
  if(match_cons(t, sym__2))
    {
      f_130 = ATgetArgument(t, 0);
      g_130 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_11(f_130, g_130, t);
  return(t);
}
ATerm q_131 (ATerm u_130, ATerm v_130, ATerm w_130, ATerm t)
{
  ATerm x_130 = NULL,d_131 = NULL,e_131 = NULL,h_131 = NULL,a_13 = NULL;
  t = SSLgetAnnotations(w_130);
  e_131 = t;
  t = SSL_is_string(u_130);
  h_131 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_131, v_130);
  a_13 = t;
  t = SSLsetAnnotations(a_13, e_131);
  if(match_cons(t, sym__2))
    {
      x_130 = ATgetArgument(t, 0);
      d_131 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_11(x_130, d_131, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm j_131 = NULL,k_131 = NULL,n_131 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_37 = ATgetArgument(t, 0);
      ATerm c_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  j_131 = t;
  if(match_cons(t, sym__2))
    {
      k_131 = ATgetArgument(t, 0);
      n_131 = ATgetArgument(t, 1);
      {
        ATerm d_37 = t;
        int e_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_131(j_131, t);
            ;
            LocalPopChoice(e_37);
          }
        else
          {
            t = d_37;
            {
              ATerm f_37 = t;
              int g_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_131(k_131, n_131, j_131, t);
                  ;
                  LocalPopChoice(g_37);
                }
              else
                {
                  t = f_37;
                  t = q_131(k_131, n_131, j_131, t);
                }
            }
          }
      }
    }
  else
    {
      t = o_131(j_131, t);
    }
  return(t);
}
ATerm e_14 (ATerm t)
{
  t = term_h_37;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm r_131 = NULL,s_131 = NULL,t_131 = NULL;
  ATerm i_37 = t;
  int k_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_131 = NULL;
      u_131 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_131, term_l_37);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(k_37);
    }
  else
    {
      t = i_37;
      t = debug_1_0(e_14, t);
      _fail(t);
    }
  s_131 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_131 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_11(t_131, t);
  r_131 = t;
  t = s_131;
  t = fclose_0_0(t);
  t = r_131;
  return(t);
}
ATerm fetch_1_0 (ATerm w_128 (ATerm), ATerm t)
{
  ATerm y_132 (ATerm t)
  {
    ATerm v_132 = NULL,w_132 = NULL,x_132 = NULL;
    v_132 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_132 = ATgetFirst((ATermList) t);
        x_132 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm m_37 = t;
      int n_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_65 = NULL,c_66 = NULL,h_13 = NULL;
          t = SSLgetAnnotations(v_132);
          w_65 = t;
          t = w_132;
          t = w_128(t);
          c_66 = t;
          t = (ATerm) ATinsert(CheckATermList(x_132), c_66);
          h_13 = t;
          t = SSLsetAnnotations(h_13, w_65);
          ;
          LocalPopChoice(n_37);
        }
      else
        {
          t = m_37;
          {
            ATerm r_66 = NULL,u_66 = NULL,i_13 = NULL;
            t = SSLgetAnnotations(v_132);
            r_66 = t;
            t = x_132;
            t = y_132(t);
            u_66 = t;
            t = (ATerm) ATinsert(CheckATermList(u_66), w_132);
            i_13 = t;
            t = SSLsetAnnotations(i_13, r_66);
          }
        }
    }
    return(t);
  }
  t = y_132(t);
  return(t);
}
ATerm x_10 (ATerm t_73, ATerm u_73, ATerm t)
{
  t = SSL_strcat(t_73, u_73);
  return(t);
}
ATerm debug_1_0 (ATerm j_144 (ATerm), ATerm t)
{
  ATerm b_133 = NULL,h_133 = NULL,i_133 = NULL,j_133 = NULL;
  b_133 = t;
  t = j_144(t);
  h_133 = t;
  t = term_x_17;
  i_133 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_133), h_133);
  j_133 = t;
  t = SSL_printnl(i_133, j_133);
  t = b_133;
  return(t);
}
ATerm i_14 (ATerm t)
{
  ATerm o_37 = t;
  int r_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(r_37);
    }
  else
    {
      t = o_37;
    }
  return(t);
}
ATerm k_14 (ATerm t)
{
  t = term_t_37;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm v_37 = t;
  int w_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_133 = NULL;
      q_133 = t;
      t = SSL_is_string(q_133);
      ;
      LocalPopChoice(w_37);
    }
  else
    {
      t = v_37;
      {
        ATerm y_37 = t;
        int a_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(i_14, t);
            ;
            LocalPopChoice(a_38);
          }
        else
          {
            t = y_37;
            {
              ATerm w_133 = NULL,x_133 = NULL,y_133 = NULL;
              w_133 = t;
              if(match_cons(t, sym_Path_1))
                {
                  x_133 = ATgetArgument(t, 0);
                  t = x_133;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      x_133 = ATgetArgument(t, 0);
                      t = x_133;
                      {
                        ATerm b_38 = t;
                        int c_38 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(c_38);
                          }
                        else
                          {
                            t = b_38;
                            t = debug_1_0(k_14, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm c_134 = NULL,d_134 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          x_133 = ATgetArgument(t, 0);
                          y_133 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = x_133;
                      t = eval_config_0_0(t);
                      c_134 = t;
                      t = y_133;
                      t = eval_config_0_0(t);
                      d_134 = t;
                      t = (ATerm) ATmakeAppl(sym__2, c_134, d_134);
                      t = x_10(c_134, d_134, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm h_134 = NULL,i_134 = NULL;
  h_134 = t;
  t = term_d_38;
  i_134 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_38, h_134);
  t = g_11(i_134, h_134, t);
  {
    ATerm e_38 = t;
    int g_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_134 = NULL,p_134 = NULL;
        t = eval_config_0_0(t);
        o_134 = t;
        t = term_d_38;
        p_134 = t;
        t = SSL_table_put(p_134, h_134, o_134);
        t = o_134;
        ;
        LocalPopChoice(g_38);
      }
    else
      {
        t = e_38;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm w_145 (ATerm), ATerm t)
{
  ATerm u_134 = NULL;
  u_134 = t;
  {
    ATerm h_38 = t;
    int i_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_134 = NULL;
        t = term_j_38;
        t = get_config_0_0(t);
        w_134 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_134, term_k_38);
        t = geq_0_0(t);
        t = u_134;
        t = w_145(t);
        ;
        LocalPopChoice(i_38);
      }
    else
      {
        t = h_38;
        t = u_134;
      }
  }
  return(t);
}
ATerm l_14 (ATerm t)
{
  ATerm z_134 = NULL;
  z_134 = t;
  if(match_string(t, "-k"))
    {
      t = z_134;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = z_134;
    }
  return(t);
}
ATerm m_14 (ATerm t)
{
  ATerm a_135 = NULL,b_135 = NULL,c_135 = NULL;
  a_135 = t;
  t = SSL_string_to_int(a_135);
  b_135 = t;
  t = term_l_38;
  c_135 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_38, b_135);
  t = j_11(c_135, b_135, t);
  t = a_135;
  return(t);
}
ATerm n_14 (ATerm t)
{
  t = term_m_38;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_14, m_14, n_14, t);
  return(t);
}
ATerm q_14 (ATerm t)
{
  ATerm l_135 = NULL;
  l_135 = t;
  if(match_string(t, "-S"))
    {
      t = l_135;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = l_135;
    }
  return(t);
}
ATerm r_14 (ATerm t)
{
  ATerm m_135 = NULL,n_135 = NULL;
  t = term_j_38;
  m_135 = t;
  t = term_v_29;
  n_135 = t;
  t = term_n_38;
  t = j_11(m_135, n_135, t);
  t = term_o_38;
  return(t);
}
ATerm s_14 (ATerm t)
{
  t = term_q_38;
  return(t);
}
ATerm t_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_14 (ATerm t)
{
  ATerm q_135 = NULL,r_135 = NULL,s_135 = NULL;
  q_135 = t;
  t = SSL_string_to_int(q_135);
  r_135 = t;
  t = term_j_38;
  s_135 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_38, r_135);
  t = j_11(s_135, r_135, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, q_135);
  return(t);
}
ATerm v_14 (ATerm t)
{
  t = term_r_38;
  return(t);
}
ATerm w_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_15 (ATerm t)
{
  ATerm t_135 = NULL,u_135 = NULL;
  t = term_t_38;
  t_135 = t;
  t = term_w_17;
  u_135 = t;
  t = term_u_38;
  t = j_11(t_135, u_135, t);
  t = term_v_38;
  return(t);
}
ATerm b_15 (ATerm t)
{
  t = term_z_38;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm a_39 = t;
  int b_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_14, r_14, s_14, t);
      ;
      LocalPopChoice(b_39);
    }
  else
    {
      t = a_39;
      {
        ATerm c_39 = t;
        int d_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(t_14, u_14, v_14, t);
            ;
            LocalPopChoice(d_39);
          }
        else
          {
            t = c_39;
            t = Option_3_0(w_14, a_15, b_15, t);
          }
      }
    }
  return(t);
}
ATerm j_11 (ATerm w_83, ATerm x_83, ATerm t)
{
  ATerm v_135 = NULL;
  t = term_d_38;
  v_135 = t;
  t = SSL_table_put(v_135, w_83, x_83);
  t = (ATerm) ATmakeAppl(sym__3, term_d_38, w_83, x_83);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm a_136 = NULL,b_136 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_136 = NULL,d_136 = NULL,e_136 = NULL;
      t = term_w_17;
      t = d_0(t);
      c_136 = t;
      t = term_m_39;
      d_136 = t;
      t = term_o_39;
      e_136 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_39, term_o_39, c_136);
      t = h_11(d_136, e_136, c_136, t);
      _fail(t);
    }
  else
    {
      ATerm h_136 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_136 = ATgetFirst((ATermList) t);
          b_136 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_136;
      t = a_0(t);
      t = term_w_17;
      t = b_0(t);
      h_136 = t;
      t = (ATerm) ATinsert(CheckATermList(b_136), h_136);
    }
  return(t);
}
ATerm c_15 (ATerm t)
{
  ATerm j_136 = NULL;
  j_136 = t;
  if(match_string(t, "-o"))
    {
      t = j_136;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = j_136;
    }
  return(t);
}
ATerm d_15 (ATerm t)
{
  ATerm k_136 = NULL,l_136 = NULL;
  k_136 = t;
  t = term_p_39;
  l_136 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_39, k_136);
  t = j_11(l_136, k_136, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, k_136);
  return(t);
}
ATerm e_15 (ATerm t)
{
  t = term_t_39;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_15, d_15, e_15, t);
  return(t);
}
ATerm h_11 (ATerm m_65, ATerm n_65, ATerm l_65, ATerm t)
{
  ATerm n_136 = NULL,o_136 = NULL,p_136 = NULL;
  n_136 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_65, n_65);
  {
    ATerm u_39 = t;
    int v_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_40 = ATgetArgument(t, 0);
            ATerm j_40 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, m_65, n_65);
        t = g_11(m_65, n_65, t);
        ;
        LocalPopChoice(v_39);
      }
    else
      {
        t = u_39;
        t = (ATerm) ATempty;
      }
    o_136 = t;
    t = (ATerm) ATinsert(CheckATermList(o_136), l_65);
    p_136 = t;
    t = SSL_table_put(m_65, n_65, p_136);
    t = n_136;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm w_136 = NULL,x_136 = NULL,y_136 = NULL,z_136 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_137 = NULL,b_137 = NULL,c_137 = NULL;
      t = term_w_17;
      t = m_0(t);
      a_137 = t;
      t = term_m_39;
      b_137 = t;
      t = term_o_39;
      c_137 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_39, term_o_39, a_137);
      t = h_11(b_137, c_137, a_137, t);
      _fail(t);
    }
  else
    {
      ATerm k_137 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_136 = ATgetFirst((ATermList) t);
          x_136 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_136;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_136 = ATgetFirst((ATermList) t);
          z_136 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_136;
      t = i_0(t);
      t = y_136;
      t = k_0(t);
      k_137 = t;
      t = (ATerm) ATinsert(CheckATermList(z_136), k_137);
    }
  return(t);
}
ATerm g_15 (ATerm t)
{
  ATerm m_137 = NULL;
  m_137 = t;
  if(match_string(t, "-i"))
    {
      t = m_137;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = m_137;
    }
  return(t);
}
ATerm h_15 (ATerm t)
{
  ATerm n_137 = NULL,o_137 = NULL;
  n_137 = t;
  t = term_k_40;
  o_137 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_40, n_137);
  t = j_11(o_137, n_137, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, n_137);
  return(t);
}
ATerm j_15 (ATerm t)
{
  t = term_l_40;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_15, h_15, j_15, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm p_137 = NULL,q_137 = NULL,r_137 = NULL,s_137 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_17;
  t = whoami_0_0(t);
  p_137 = t;
  t = term_x_17;
  r_137 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_n_40), p_137);
  s_137 = t;
  t = SSL_printnl(r_137, s_137);
  t = term_a_18;
  q_137 = t;
  t = SSL_exit(q_137);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_o_40;
  t = get_config_0_0(t);
  return(t);
}
ATerm e_11 (ATerm q_63, ATerm r_63, ATerm t)
{
  ATerm p_40 = t;
  int q_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(q_63, r_63);
      ;
      LocalPopChoice(q_40);
    }
  else
    {
      t = p_40;
      t = SSL_addr(q_63, r_63);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm c_133 (ATerm), ATerm d_133 (ATerm), ATerm t)
{
  ATerm u_137 = NULL,v_137 = NULL,w_137 = NULL;
  u_137 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_137;
      t = c_133(t);
    }
  else
    {
      ATerm z_137 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_137 = ATgetFirst((ATermList) t);
          w_137 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_137;
      t = foldr_2_0(c_133, d_133, t);
      z_137 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_137, z_137);
      t = d_133(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm k_15 (ATerm t)
{
  t = term_v_29;
  return(t);
}
ATerm l_15 (ATerm t)
{
  ATerm v_67 = NULL,a_68 = NULL;
  if(match_cons(t, sym__2))
    {
      v_67 = ATgetArgument(t, 0);
      a_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_11(v_67, a_68, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm c_138 = NULL,l_67 = NULL,q_67 = NULL;
  t = times_0_0(t);
  q_67 = t;
  t = SSL_explode_term(q_67);
  if(match_cons(t, sym__2))
    {
      ATerm z_40 = ATgetArgument(t, 0);
      l_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_67;
  t = foldr_2_0(k_15, l_15, t);
  c_138 = t;
  t = SSL_TicksToSeconds(c_138);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm o_138 = NULL,p_138 = NULL,q_138 = NULL;
  o_138 = t;
  if(match_cons(t, sym__2))
    {
      p_138 = ATgetArgument(t, 0);
      q_138 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_41 = t;
    int f_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_138;
        if((p_138 != t))
          {
            _fail(t);
          }
        t = o_138;
        ;
        LocalPopChoice(f_41);
      }
    else
      {
        t = b_41;
        t = (ATerm) ATmakeAppl(sym__2, p_138, q_138);
        {
          ATerm g_41 = t;
          int h_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(p_138, q_138);
              ;
              LocalPopChoice(h_41);
            }
          else
            {
              t = g_41;
              t = SSL_gtr(p_138, q_138);
            }
          t = (ATerm) ATmakeAppl(sym__2, p_138, q_138);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm v_145 (ATerm), ATerm t)
{
  ATerm u_138 = NULL;
  u_138 = t;
  {
    ATerm i_41 = t;
    int j_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_138 = NULL;
        t = term_j_38;
        t = get_config_0_0(t);
        w_138 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_138, term_a_18);
        t = geq_0_0(t);
        t = u_138;
        t = v_145(t);
        ;
        LocalPopChoice(j_41);
      }
    else
      {
        t = i_41;
        t = u_138;
      }
  }
  return(t);
}
ATerm m_15 (ATerm t)
{
  ATerm a_139 = NULL,b_139 = NULL,d_139 = NULL,e_139 = NULL;
  t = run_time_0_0(t);
  a_139 = t;
  t = term_w_17;
  t = whoami_0_0(t);
  b_139 = t;
  t = term_x_17;
  d_139 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_41), a_139), term_k_41), b_139);
  e_139 = t;
  t = SSL_printnl(d_139, e_139);
  t = (ATerm) ATmakeAppl(sym__2, term_x_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_41), a_139), term_k_41), b_139));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(m_15, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm f_139 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_29;
  f_139 = t;
  t = SSL_exit(f_139);
  return(t);
}
ATerm n_15 (ATerm t)
{
  ATerm t_139 = NULL,u_139 = NULL;
  u_139 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = u_139;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          t_139 = ATgetArgument(t, 0);
          {
            ATerm r_68 = NULL,q_13 = NULL;
            t = SSLgetAnnotations(u_139);
            r_68 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, t_139);
            q_13 = t;
            t = SSLsetAnnotations(q_13, r_68);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = u_139;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm l_148 (ATerm), ATerm t)
{
  ATerm n_41 = t;
  int o_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_41;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(o_41);
    }
  else
    {
      t = n_41;
      t = fetch_1_0(n_15, t);
    }
  t = l_148(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm x_139 = NULL,y_139 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_139 = ATgetFirst((ATermList) t);
      y_139 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm c_140 = NULL,d_140 = NULL;
        ATerm o_15 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(c_140)), not_null(d_140));
          return(t);
        }
        t = not_null(y_139);
        t = g_0(t);
        if(((c_140 != NULL) && (c_140 != t)))
          _fail(t);
        else
          c_140 = t;
        t = not_null(x_139);
        t = f_0(t);
        if(((d_140 != NULL) && (d_140 != t)))
          _fail(t);
        else
          d_140 = t;
        t = not_null(y_139);
        t = reverse_acc_2_0(f_0, o_15, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_w_17;
      t = g_0(t);
    }
  return(t);
}
ATerm g_11 (ATerm d_67, ATerm e_67, ATerm t)
{
  t = SSL_table_get(d_67, e_67);
  return(t);
}
ATerm p_15 (ATerm t)
{
  ATerm h_140 = NULL,i_140 = NULL,j_140 = NULL,s_13 = NULL;
  j_140 = t;
  if(match_cons(t, sym_Program_1))
    {
      i_140 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_140);
  h_140 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, i_140);
  s_13 = t;
  t = SSLsetAnnotations(s_13, h_140);
  return(t);
}
ATerm r_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm z_15 (ATerm t)
{
  ATerm l_140 = NULL;
  l_140 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_140), term_q_41);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm f_140 = NULL,g_140 = NULL;
  ATerm r_41 = t;
  int s_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_40;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(s_41);
    }
  else
    {
      t = r_41;
      t = fetch_1_0(p_15, t);
    }
  t = term_t_41;
  t = echo_0_0(t);
  t = term_m_39;
  f_140 = t;
  t = term_o_39;
  g_140 = t;
  t = term_u_41;
  t = g_11(f_140, g_140, t);
  t = reverse_acc_2_0(_id, r_15, t);
  t = map_1_0(z_15, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm n_140 = NULL,o_140 = NULL,p_140 = NULL;
  n_140 = t;
  {
    ATerm v_41 = t;
    int w_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = n_140;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm x_41 = ATgetFirst((ATermList) t);
                ATerm y_41 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = n_140;
          }
        ;
        LocalPopChoice(w_41);
      }
    else
      {
        t = v_41;
        t = (ATerm) ATinsert(ATempty, n_140);
      }
    o_140 = t;
    t = term_k_36;
    p_140 = t;
    t = SSL_printnl(p_140, o_140);
    t = n_140;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_o_40;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm b_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_16 (ATerm t)
{
  ATerm t_140 = NULL,u_140 = NULL;
  t = term_z_41;
  t_140 = t;
  t = term_w_17;
  u_140 = t;
  t = term_a_42;
  t = j_11(t_140, u_140, t);
  return(t);
}
ATerm d_16 (ATerm t)
{
  t = term_b_42;
  return(t);
}
ATerm e_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_16 (ATerm t)
{
  ATerm v_140 = NULL,w_140 = NULL,x_140 = NULL,y_140 = NULL;
  t = term_z_41;
  x_140 = t;
  t = term_w_17;
  y_140 = t;
  t = term_a_42;
  t = j_11(x_140, y_140, t);
  t = term_d_42;
  v_140 = t;
  t = term_w_17;
  w_140 = t;
  t = term_e_42;
  t = j_11(v_140, w_140, t);
  t = term_f_42;
  return(t);
}
ATerm h_16 (ATerm t)
{
  t = term_g_42;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm h_42 = t;
  int i_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_16, c_16, d_16, t);
      ;
      LocalPopChoice(i_42);
    }
  else
    {
      t = h_42;
      t = Option_3_0(e_16, g_16, h_16, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm o_150 (ATerm), ATerm t)
{
  ATerm d_141 = NULL,e_141 = NULL,f_141 = NULL,g_141 = NULL,i_141 = NULL,j_141 = NULL,u_13 = NULL;
  if(((d_141 != NULL) && (d_141 != t)))
    _fail(t);
  else
    d_141 = t;
  {
    ATerm j_42 = t;
    int k_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_l_42;
        t = o_150(t);
        ;
        LocalPopChoice(k_42);
      }
    else
      {
        t = j_42;
      }
    t = not_null(d_141);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((f_141 != NULL) && (f_141 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          f_141 = ATgetFirst((ATermList) t);
        if(((g_141 != NULL) && (g_141 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          g_141 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(d_141));
    if(((e_141 != NULL) && (e_141 != t)))
      _fail(t);
    else
      e_141 = t;
    t = term_o_40;
    if(((j_141 != NULL) && (j_141 != t)))
      _fail(t);
    else
      j_141 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_o_40, not_null(f_141));
    t = j_11(not_null(j_141), not_null(f_141), t);
    t = not_null(g_141);
    {
      ATerm t_141 (ATerm t)
      {
        ATerm m_42 = t;
        int n_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_42 = t;
            int p_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_141 = NULL;
                m_141 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = m_141;
                ;
                LocalPopChoice(p_42);
              }
            else
              {
                t = o_42;
                t = o_150(t);
                t = Cons_2_0(_id, t_141, t);
              }
            ;
            LocalPopChoice(n_42);
          }
        else
          {
            t = m_42;
            {
              ATerm p_141 = NULL,q_141 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  p_141 = ATgetFirst((ATermList) t);
                  q_141 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(q_141), (ATerm) ATmakeAppl(sym_Undefined_1, p_141));
            }
          }
        return(t);
      }
      t = t_141(t);
      if(((i_141 != NULL) && (i_141 != t)))
        _fail(t);
      else
        i_141 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(i_141)), (ATerm) ATmakeAppl(sym_Program_1, not_null(f_141)));
      if(((u_13 != NULL) && (u_13 != t)))
        _fail(t);
      else
        u_13 = t;
      t = SSLsetAnnotations(not_null(u_13), not_null(e_141));
    }
  }
  return(t);
}
ATerm n_16 (ATerm t)
{
  ATerm f_142 = NULL;
  f_142 = t;
  if(match_string(t, "--help"))
    {
      t = f_142;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = f_142;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = f_142;
        }
    }
  return(t);
}
ATerm o_16 (ATerm t)
{
  ATerm g_142 = NULL,h_142 = NULL;
  t = term_p_41;
  g_142 = t;
  t = term_w_17;
  h_142 = t;
  t = term_q_42;
  t = j_11(g_142, h_142, t);
  t = term_s_42;
  return(t);
}
ATerm u_16 (ATerm t)
{
  t = term_t_42;
  return(t);
}
ATerm x_16 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm n_150 (ATerm), ATerm t)
{
  ATerm y_141 = NULL,z_141 = NULL,a_142 = NULL,b_142 = NULL,c_142 = NULL,d_142 = NULL,e_142 = NULL;
  if(((a_142 != NULL) && (a_142 != t)))
    _fail(t);
  else
    a_142 = t;
  t = term_m_39;
  if(((c_142 != NULL) && (c_142 != t)))
    _fail(t);
  else
    c_142 = t;
  t = term_o_39;
  if(((d_142 != NULL) && (d_142 != t)))
    _fail(t);
  else
    d_142 = t;
  t = (ATerm) ATempty;
  if(((e_142 != NULL) && (e_142 != t)))
    _fail(t);
  else
    e_142 = t;
  t = SSL_table_put(not_null(c_142), not_null(d_142), not_null(e_142));
  t = not_null(a_142);
  {
    ATerm m_16 (ATerm t)
    {
      ATerm w_42 = t;
      int x_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_150(t);
          ;
          LocalPopChoice(x_42);
        }
      else
        {
          t = w_42;
          {
            ATerm y_42 = t;
            int z_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(n_16, o_16, u_16, t);
                ;
                LocalPopChoice(z_42);
              }
            else
              {
                t = y_42;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(m_16, t);
    {
      ATerm a_43 = t;
      int b_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_142 = NULL;
          o_142 = t;
          {
            ATerm d_43 = t;
            int f_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_68 = NULL;
                t = o_142;
                {
                  ATerm g_43 = t;
                  int h_43 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_p_41;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(h_43);
                    }
                  else
                    {
                      t = g_43;
                      t = fetch_1_0(x_16, t);
                    }
                  t = o_142;
                  t = default_system_usage_0_0(t);
                  t = term_v_29;
                  y_68 = t;
                  t = SSL_exit(y_68);
                }
                ;
                LocalPopChoice(f_43);
              }
            else
              {
                t = d_43;
                {
                  ATerm c_69 = NULL;
                  t = term_z_41;
                  t = get_config_0_0(t);
                  t = o_142;
                  t = default_system_about_0_0(t);
                  t = term_v_29;
                  c_69 = t;
                  t = SSL_exit(c_69);
                }
              }
          }
          ;
          LocalPopChoice(b_43);
        }
      else
        {
          t = a_43;
          {
            ATerm i_43 = t;
            int j_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_142 = NULL,q_142 = NULL,r_142 = NULL;
                ATerm z_16 (ATerm t)
                {
                  ATerm s_142 = NULL,t_142 = NULL,u_142 = NULL,w_13 = NULL;
                  u_142 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      t_142 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(u_142);
                  s_142 = t;
                  t = t_142;
                  if(((y_141 != NULL) && (y_141 != t)))
                    _fail(t);
                  else
                    y_141 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, t_142);
                  w_13 = t;
                  t = SSLsetAnnotations(w_13, s_142);
                  return(t);
                }
                t = fetch_1_0(z_16, t);
                t = term_x_17;
                if(((q_142 != NULL) && (q_142 != t)))
                  _fail(t);
                else
                  q_142 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_141)), term_k_43);
                if(((r_142 != NULL) && (r_142 != t)))
                  _fail(t);
                else
                  r_142 = t;
                t = SSL_printnl(not_null(q_142), not_null(r_142));
                t = (ATerm) ATmakeAppl(sym__2, term_x_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_141)), term_k_43));
                t = default_system_usage_0_0(t);
                t = term_a_18;
                if(((p_142 != NULL) && (p_142 != t)))
                  _fail(t);
                else
                  p_142 = t;
                t = SSL_exit(not_null(p_142));
                ;
                LocalPopChoice(j_43);
              }
            else
              {
                t = i_43;
              }
          }
        }
      if(((z_141 != NULL) && (z_141 != t)))
        _fail(t);
      else
        z_141 = t;
      t = term_m_39;
      if(((b_142 != NULL) && (b_142 != t)))
        _fail(t);
      else
        b_142 = t;
      t = SSL_table_destroy(not_null(b_142));
      t = not_null(z_141);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm n_148 (ATerm), ATerm o_148 (ATerm), ATerm p_148 (ATerm), ATerm q_148 (ATerm), ATerm t)
{
  ATerm z_142 = NULL,a_143 = NULL,b_143 = NULL,c_143 = NULL;
  t = parse_options_1_0(n_148, t);
  z_142 = t;
  t = term_m_43;
  c_143 = t;
  t = SSL_table_create(c_143);
  t = term_m_43;
  a_143 = t;
  t = term_n_43;
  b_143 = t;
  t = SSL_table_put(a_143, b_143, z_142);
  t = z_142;
  t = p_148(t);
  {
    ATerm p_43 = t;
    int q_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(o_148, t);
        ;
        LocalPopChoice(q_43);
      }
    else
      {
        t = p_43;
        {
          ATerm r_43 = t;
          int s_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_148(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(s_43);
            }
          else
            {
              t = r_43;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm d_17 (ATerm t)
{
  t = if_verbose2_1_0(p_17, t);
  return(t);
}
ATerm i_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_17 (ATerm t)
{
  ATerm d_143 = NULL,e_143 = NULL;
  t = term_t_43;
  d_143 = t;
  t = term_w_17;
  e_143 = t;
  t = term_u_43;
  t = j_11(d_143, e_143, t);
  t = term_v_43;
  return(t);
}
ATerm k_17 (ATerm t)
{
  t = term_x_43;
  return(t);
}
ATerm p_17 (ATerm t)
{
  ATerm f_143 = NULL,g_143 = NULL,h_143 = NULL,i_143 = NULL;
  f_143 = t;
  t = term_o_40;
  t = get_config_0_0(t);
  g_143 = t;
  t = term_x_17;
  h_143 = t;
  t = (ATerm) ATinsert(ATempty, g_143);
  i_143 = t;
  t = SSL_printnl(h_143, i_143);
  t = f_143;
  return(t);
}
ATerm iowrap_3_0 (ATerm w_147 (ATerm), ATerm x_147 (ATerm), ATerm y_147 (ATerm), ATerm t)
{
  ATerm a_17 (ATerm t)
  {
    ATerm y_43 = t;
    int b_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_147(t);
        ;
        LocalPopChoice(b_44);
      }
    else
      {
        t = y_43;
        {
          ATerm c_44 = t;
          int d_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(d_44);
            }
          else
            {
              t = c_44;
              {
                ATerm e_44 = t;
                int f_44 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(f_44);
                  }
                else
                  {
                    t = e_44;
                    {
                      ATerm g_44 = t;
                      int h_44 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(i_17, j_17, k_17, t);
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
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(j_44);
                              }
                            else
                              {
                                t = i_44;
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
  ATerm h_17 (ATerm t)
  {
    ATerm j_143 = NULL,k_143 = NULL,l_143 = NULL;
    if(((k_143 != NULL) && (k_143 != t)))
      _fail(t);
    else
      k_143 = t;
    {
      ATerm k_44 = t;
      int m_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_17 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((j_143 != NULL) && (j_143 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  j_143 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(q_17, t);
          ;
          LocalPopChoice(m_44);
        }
      else
        {
          t = k_44;
          t = term_o_44;
          if(((j_143 != NULL) && (j_143 != t)))
            _fail(t);
          else
            j_143 = t;
        }
      t = not_null(j_143);
      t = ReadFromFile_0_0(t);
      if(((l_143 != NULL) && (l_143 != t)))
        _fail(t);
      else
        l_143 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(k_143), not_null(l_143));
      t = apply_strategy_1_0(w_147, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(a_17, y_147, d_17, h_17, t);
  return(t);
}
ATerm r_17 (ATerm t)
{
  ATerm o_143 = NULL,p_143 = NULL,q_143 = NULL,r_143 = NULL,s_143 = NULL,t_143 = NULL,u_143 = NULL,v_143 = NULL,w_143 = NULL,x_143 = NULL,y_143 = NULL,z_143 = NULL,f_14 = NULL,d_14 = NULL,c_14 = NULL;
  z_143 = t;
  if(match_cons(t, sym__2))
    {
      p_143 = ATgetArgument(t, 0);
      q_143 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_143);
  o_143 = t;
  t = q_143;
  if(match_cons(t, sym_Specification_1))
    {
      s_143 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_143);
  r_143 = t;
  t = s_143;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_143 = ATgetFirst((ATermList) t);
      w_143 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_143);
  u_143 = t;
  t = w_143;
  t = Cons_2_0(s_17, t_17, t);
  x_143 = t;
  t = (ATerm) ATinsert(CheckATermList(x_143), v_143);
  c_14 = t;
  t = SSLsetAnnotations(c_14, u_143);
  y_143 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, y_143);
  d_14 = t;
  t = SSLsetAnnotations(d_14, r_143);
  t_143 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_143, t_143);
  f_14 = t;
  t = SSLsetAnnotations(f_14, o_143);
  return(t);
}
ATerm s_17 (ATerm t)
{
  ATerm a_144 = NULL,b_144 = NULL,c_144 = NULL,d_144 = NULL,b_14 = NULL;
  d_144 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      b_144 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_144);
  a_144 = t;
  t = b_144;
  t = map_1_0(u_17, t);
  c_144 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, c_144);
  b_14 = t;
  t = SSLsetAnnotations(b_14, a_144);
  return(t);
}
ATerm t_17 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm u_17 (ATerm t)
{
  ATerm e_144 = NULL,f_144 = NULL,g_144 = NULL,h_144 = NULL,i_144 = NULL,k_144 = NULL,m_144 = NULL,a_14 = NULL;
  m_144 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      f_144 = ATgetArgument(t, 0);
      g_144 = ATgetArgument(t, 1);
      h_144 = ATgetArgument(t, 2);
      i_144 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_144);
  e_144 = t;
  t = i_144;
  t = topdown_1_0(v_17, t);
  t = match_to_dfa_0_0(t);
  k_144 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, f_144, g_144, h_144, k_144);
  a_14 = t;
  t = SSLsetAnnotations(a_14, e_144);
  return(t);
}
ATerm v_17 (ATerm t)
{
  ATerm n_144 = NULL;
  n_144 = t;
  if(match_cons(t, sym_Id_0))
    {
      ATerm p_44 = t;
      int r_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_144 = NULL;
          t = n_144;
          t = new_0_0(t);
          o_144 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, o_144), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, o_144)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, o_144))));
          ;
          LocalPopChoice(r_44);
        }
      else
        {
          t = p_44;
          t = n_144;
        }
    }
  else
    {
      t = n_144;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(r_17, _fail, default_usage_0_0, t);
  return(t);
}
