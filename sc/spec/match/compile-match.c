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
ATerm term_r_49;
ATerm term_r_48;
ATerm term_p_48;
ATerm term_o_48;
ATerm term_n_48;
ATerm term_f_48;
ATerm term_z_47;
ATerm term_y_47;
ATerm term_c_47;
ATerm term_y_46;
ATerm term_w_46;
ATerm term_n_46;
ATerm term_i_46;
ATerm term_h_46;
ATerm term_g_46;
ATerm term_f_46;
ATerm term_e_46;
ATerm term_d_46;
ATerm term_c_46;
ATerm term_v_45;
ATerm term_u_45;
ATerm term_r_45;
ATerm term_o_45;
ATerm term_h_45;
ATerm term_g_45;
ATerm term_u_44;
ATerm term_t_44;
ATerm term_s_44;
ATerm term_r_44;
ATerm term_l_44;
ATerm term_k_44;
ATerm term_h_44;
ATerm term_g_44;
ATerm term_b_44;
ATerm term_a_44;
ATerm term_z_43;
ATerm term_y_43;
ATerm term_x_43;
ATerm term_w_43;
ATerm term_v_43;
ATerm term_u_43;
ATerm term_t_43;
ATerm term_s_43;
ATerm term_r_43;
ATerm term_q_43;
ATerm term_l_43;
ATerm term_e_43;
ATerm term_z_42;
ATerm term_w_42;
ATerm term_i_42;
ATerm term_f_42;
ATerm term_c_42;
ATerm term_v_40;
ATerm term_s_37;
ATerm term_p_37;
ATerm term_l_35;
ATerm term_x_34;
ATerm term_u_34;
ATerm term_m_34;
ATerm term_p_28;
ATerm term_m_28;
ATerm term_f_28;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_k_26;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_h_13;
void init_constant_terms (void)
{
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(sym_Sort_2, term_d_28, (ATerm) ATempty);
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(sym_ConstType_1, term_e_28);
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(ATmakeSymbol("MatrixSeenBefore", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol("f_1", 0, ATtrue));
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeAppl(sym_Off_1, (ATerm) ATempty);
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_i_42));
  term_i_42 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_e_43));
  term_e_43 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_43));
  term_q_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_s_43));
  term_s_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_t_43));
  term_t_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_u_43));
  term_u_43 = (ATerm) ATmakeAppl(sym__2, term_q_43, term_u_34);
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeAppl(sym_Verbose_1, term_u_34);
  ATprotect(&(term_w_43));
  term_w_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_43));
  term_x_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeAppl(sym__2, term_y_43, term_h_13);
  ATprotect(&(term_a_44));
  term_a_44 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_44));
  term_b_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_l_44));
  term_l_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_r_44));
  term_r_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_s_44));
  term_s_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_u_44));
  term_u_44 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_g_45));
  term_g_45 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_o_45));
  term_o_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_r_45));
  term_r_45 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_45));
  term_u_45 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_45));
  term_v_45 = (ATerm) ATmakeAppl(sym__2, term_g_44, term_h_44);
  ATprotect(&(term_c_46));
  term_c_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_d_46));
  term_d_46 = (ATerm) ATmakeAppl(sym__2, term_c_46, term_h_13);
  ATprotect(&(term_e_46));
  term_e_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(sym__2, term_f_46, term_h_13);
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_i_46));
  term_i_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_n_46));
  term_n_46 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_w_46));
  term_w_46 = (ATerm) ATmakeAppl(sym__2, term_o_45, term_h_13);
  ATprotect(&(term_y_46));
  term_y_46 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_47));
  term_c_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_n_48));
  term_n_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_o_48));
  term_o_48 = (ATerm) ATmakeAppl(sym__2, term_n_48, term_h_13);
  ATprotect(&(term_p_48));
  term_p_48 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_r_48));
  term_r_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_r_49));
  term_r_49 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm i_5 (ATerm);
ATerm j_5 (ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm t_5 (ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
ATerm spaste_1_0 (ATerm w_120 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm o_110 (ATerm), ATerm p_110 (ATerm), ATerm);
ATerm Let_2_0 (ATerm r_109 (ATerm), ATerm s_109 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm x_120 (ATerm), ATerm y_120 (ATerm), ATerm z_120 (ATerm), ATerm);
ATerm e_6 (ATerm);
ATerm f_8 (ATerm i_52, ATerm h_52, ATerm);
ATerm SVar_1_0 (ATerm q_109 (ATerm), ATerm);
ATerm g_8 (ATerm v_134 (ATerm), ATerm w_134 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm s_67, ATerm r_67, ATerm q_67, ATerm);
ATerm i_6 (ATerm);
ATerm l_6 (ATerm);
ATerm p_6 (ATerm);
ATerm h_8 (ATerm p_134 (ATerm), ATerm q_134 (ATerm (ATerm), ATerm), ATerm k_67, ATerm n_67, ATerm);
ATerm lookup_0_0 (ATerm);
ATerm env_alltd_1_0 (ATerm d_135 (ATerm), ATerm);
ATerm rename_4_0 (ATerm k_134 (ATerm (ATerm), ATerm), ATerm l_134 (ATerm), ATerm m_134 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm n_134 (ATerm (ATerm), ATerm), ATerm);
ATerm a_7 (ATerm);
ATerm b_7 (ATerm);
ATerm c_7 (ATerm);
ATerm e_7 (ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm n_7 (ATerm);
ATerm p_7 (ATerm);
ATerm tpaste_1_0 (ATerm s_120 (ATerm), ATerm);
ATerm q_7 (ATerm);
ATerm s_7 (ATerm);
ATerm t_7 (ATerm);
ATerm u_7 (ATerm);
ATerm v_7 (ATerm);
ATerm w_7 (ATerm);
ATerm z_7 (ATerm);
ATerm strename_0_0 (ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm d_8 (ATerm);
ATerm e_8 (ATerm);
ATerm i_8 (ATerm);
ATerm j_8 (ATerm);
ATerm r_9 (ATerm i_97, ATerm h_97, ATerm g_97, ATerm);
ATerm f_34 (ATerm z_31, ATerm a_32, ATerm b_32, ATerm);
ATerm BuildMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm w_122 (ATerm), ATerm);
ATerm LetHoist_0_0 (ATerm);
ATerm Idempotency_0_0 (ATerm);
ATerm AssociateR_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm p_8 (ATerm);
ATerm q_8 (ATerm);
ATerm r_8 (ATerm);
ATerm t_8 (ATerm);
ATerm v_8 (ATerm);
ATerm y_8 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm c_9 (ATerm);
ATerm ElimFail_0_0 (ATerm);
ATerm ElimId_0_0 (ATerm);
ATerm Simplify_0_0 (ATerm);
ATerm Seqs_1_0 (ATerm y_113 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm v_109 (ATerm), ATerm w_109 (ATerm), ATerm x_109 (ATerm), ATerm);
ATerm Prim_2_0 (ATerm v_110 (ATerm), ATerm w_110 (ATerm), ATerm);
ATerm Var_1_0 (ATerm h_106 (ATerm), ATerm);
ATerm Match_1_0 (ATerm y_109 (ATerm), ATerm);
ATerm Assign_2_0 (ATerm j_113 (ATerm), ATerm k_113 (ATerm), ATerm);
ATerm Op_2_0 (ATerm n_106 (ATerm), ATerm o_106 (ATerm), ATerm);
ATerm Str_1_0 (ATerm l_106 (ATerm), ATerm);
ATerm Real_1_0 (ATerm k_106 (ATerm), ATerm);
ATerm Int_1_0 (ATerm j_106 (ATerm), ATerm);
ATerm Build_1_0 (ATerm z_109 (ATerm), ATerm);
ATerm i_9 (ATerm);
ATerm l_9 (ATerm);
ATerm n_9 (ATerm);
ATerm o_9 (ATerm);
ATerm simple_strategy_0_0 (ATerm);
ATerm m_8 (ATerm o_129 (ATerm), ATerm s_59, ATerm r_59, ATerm);
ATerm Matrix_2_0 (ATerm s_112 (ATerm), ATerm t_112 (ATerm), ATerm);
ATerm tvars_matrix_boundin_3_0 (ATerm v_150 (ATerm), ATerm w_150 (ATerm), ATerm x_150 (ATerm), ATerm);
ATerm DynamicRules_1_0 (ATerm y_108 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm p_108 (ATerm), ATerm q_108 (ATerm), ATerm r_108 (ATerm), ATerm s_108 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm t_120 (ATerm), ATerm u_120 (ATerm), ATerm v_120 (ATerm), ATerm);
ATerm q_9 (ATerm);
ATerm s_9 (ATerm);
ATerm t_9 (ATerm);
ATerm u_9 (ATerm);
ATerm Bind4_0_0 (ATerm);
ATerm v_9 (ATerm);
ATerm x_9 (ATerm);
ATerm y_9 (ATerm);
ATerm z_9 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm a_10 (ATerm);
ATerm b_10 (ATerm);
ATerm c_10 (ATerm);
ATerm g_10 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm s_8 (ATerm q_129 (ATerm), ATerm u_59, ATerm t_59, ATerm);
ATerm i_10 (ATerm);
ATerm r_10 (ATerm);
ATerm s_10 (ATerm);
ATerm u_8 (ATerm v_713, ATerm a_714, ATerm q_89, ATerm);
ATerm while_not_2_0 (ATerm t_138 (ATerm), ATerm u_138 (ATerm), ATerm);
ATerm for_3_0 (ATerm w_138 (ATerm), ATerm x_138 (ATerm), ATerm y_138 (ATerm), ATerm);
ATerm t_10 (ATerm);
ATerm j_11 (ATerm);
ATerm k_11 (ATerm);
ATerm l_11 (ATerm);
ATerm o_11 (ATerm);
ATerm p_11 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm s_11 (ATerm);
ATerm t_11 (ATerm);
ATerm c_12 (ATerm);
ATerm f_12 (ATerm);
ATerm m_12 (ATerm);
ATerm p_12 (ATerm);
ATerm q_12 (ATerm);
ATerm free_vars_3_0 (ATerm n_136 (ATerm), ATerm o_136 (ATerm), ATerm p_136 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm s_12 (ATerm);
ATerm t_12 (ATerm);
ATerm x_12 (ATerm);
ATerm y_12 (ATerm);
ATerm z_12 (ATerm);
ATerm a_13 (ATerm);
ATerm b_13 (ATerm);
ATerm c_13 (ATerm);
ATerm d_13 (ATerm);
ATerm e_13 (ATerm);
ATerm f_13 (ATerm);
ATerm g_13 (ATerm);
ATerm i_13 (ATerm);
ATerm RowLet_1_0 (ATerm v_0 (ATerm), ATerm);
ATerm k_13 (ATerm);
ATerm l_13 (ATerm);
ATerm m_13 (ATerm);
ATerm w_8 (ATerm y_99, ATerm x_99, ATerm);
ATerm x_8 (ATerm u_133 (ATerm), ATerm x_64, ATerm v_64, ATerm);
ATerm new_0_0 (ATerm);
ATerm p_13 (ATerm);
ATerm default_state_0_0 (ATerm);
ATerm q_13 (ATerm);
ATerm r_13 (ATerm);
ATerm s_13 (ATerm);
ATerm t_13 (ATerm);
ATerm MatchCons_2_0 (ATerm q_0 (ATerm), ATerm t_0 (ATerm), ATerm);
ATerm z_8 (ATerm g_150 (ATerm), ATerm l_98, ATerm i_98, ATerm j_98, ATerm k_98, ATerm);
ATerm a_9 (ATerm e_98, ATerm f_98, ATerm g_98, ATerm);
ATerm filter_1_0 (ATerm y_133 (ATerm), ATerm);
ATerm listtd_1_0 (ATerm c_129 (ATerm), ATerm);
ATerm c_14 (ATerm);
ATerm d_14 (ATerm);
ATerm e_14 (ATerm);
ATerm f_14 (ATerm);
ATerm ConsArgs_0_0 (ATerm);
ATerm i_14 (ATerm);
ATerm outedges_0_0 (ATerm);
ATerm r_73 (ATerm r_72, ATerm);
ATerm k_14 (ATerm);
ATerm m_14 (ATerm);
ATerm get_path_0_0 (ATerm);
ATerm n_14 (ATerm);
ATerm o_14 (ATerm);
ATerm q_14 (ATerm);
ATerm r_14 (ATerm);
ATerm s_14 (ATerm);
ATerm d_9 (ATerm r_99, ATerm);
ATerm t_14 (ATerm);
ATerm u_14 (ATerm);
ATerm v_14 (ATerm);
ATerm w_14 (ATerm);
ATerm x_14 (ATerm);
ATerm f_9 (ATerm h_99, ATerm);
ATerm As_2_0 (ATerm y_106 (ATerm), ATerm z_106 (ATerm), ATerm);
ATerm Row_3_0 (ATerm p_112 (ATerm), ATerm q_112 (ATerm), ATerm r_112 (ATerm), ATerm);
ATerm y_14 (ATerm);
ATerm z_14 (ATerm);
ATerm c_15 (ATerm);
ATerm e_15 (ATerm);
ATerm h_9 (ATerm f_99, ATerm);
ATerm repeat_1_0 (ATerm e_138 (ATerm), ATerm);
ATerm j_9 (ATerm k_65, ATerm l_65, ATerm);
ATerm end_scope_1_0 (ATerm r_133 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm z_124 (ATerm), ATerm a_125 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm q_133 (ATerm), ATerm);
ATerm scope_2_0 (ATerm s_133 (ATerm), ATerm t_133 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm j_128 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm l_77 (ATerm b_77, ATerm);
ATerm conc_0_0 (ATerm);
ATerm k_15 (ATerm);
ATerm l_15 (ATerm);
ATerm o_15 (ATerm);
ATerm p_15 (ATerm);
ATerm q_15 (ATerm);
ATerm g_16 (ATerm);
ATerm MatrixMerge_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm t_121 (ATerm), ATerm);
ATerm m_10 (ATerm y_129 (ATerm), ATerm z_129 (ATerm), ATerm a_60, ATerm z_59, ATerm);
ATerm n_10 (ATerm v_129 (ATerm), ATerm w_59, ATerm v_59, ATerm);
ATerm foldr_3_0 (ATerm l_132 (ATerm), ATerm m_132 (ATerm), ATerm n_132 (ATerm), ATerm);
ATerm l_16 (ATerm);
ATerm collect_om_2_0 (ATerm p_131 (ATerm), ATerm q_131 (ATerm), ATerm);
ATerm CollectSubst_0_0 (ATerm);
ATerm IgnoreVar_0_0 (ATerm);
ATerm o_16 (ATerm);
ATerm p_16 (ATerm);
ATerm q_16 (ATerm);
ATerm r_16 (ATerm);
ATerm s_16 (ATerm);
ATerm t_16 (ATerm);
ATerm u_16 (ATerm);
ATerm CollectSplit_2_0 (ATerm s_130 (ATerm), ATerm t_130 (ATerm), ATerm);
ATerm collect_split_2_0 (ATerm j_131 (ATerm), ATerm k_131 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm e_126 (ATerm), ATerm f_126 (ATerm), ATerm g_126 (ATerm), ATerm h_126 (ATerm), ATerm);
ATerm w_16 (ATerm);
ATerm x_16 (ATerm);
ATerm y_16 (ATerm);
ATerm nzip0_1_0 (ATerm p_126 (ATerm), ATerm);
ATerm Propagate_0_0 (ATerm);
ATerm topdown_1_0 (ATerm s_121 (ATerm), ATerm);
ATerm f_17 (ATerm);
ATerm h_17 (ATerm);
ATerm i_17 (ATerm);
ATerm n_17 (ATerm);
ATerm o_17 (ATerm);
ATerm term_to_matrix_0_0 (ATerm);
ATerm Scope_2_0 (ATerm b_110 (ATerm), ATerm c_110 (ATerm), ATerm);
ATerm Seq_2_0 (ATerm f_110 (ATerm), ATerm g_110 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm h_110 (ATerm), ATerm i_110 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm f_109 (ATerm), ATerm g_109 (ATerm), ATerm);
ATerm p_17 (ATerm);
ATerm q_17 (ATerm);
ATerm match_to_matrix_0_0 (ATerm);
ATerm t_17 (ATerm);
ATerm v_17 (ATerm);
ATerm w_17 (ATerm);
ATerm match_to_dfa_0_0 (ATerm);
ATerm SDefT_4_0 (ATerm j_112 (ATerm), ATerm k_112 (ATerm), ATerm l_112 (ATerm), ATerm m_112 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm g_112 (ATerm), ATerm h_112 (ATerm), ATerm i_112 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm e_105 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm j_105 (ATerm), ATerm);
ATerm b_18 (ATerm);
ATerm apply_to_bodies_1_0 (ATerm t_119 (ATerm), ATerm);
ATerm _2_0 (ATerm l_100 (ATerm), ATerm m_100 (ATerm), ATerm);
ATerm x_10 (ATerm y_78, ATerm z_78, ATerm);
ATerm y_10 (ATerm m_82, ATerm n_82, ATerm);
ATerm a_11 (ATerm s_143 (ATerm), ATerm x_586, ATerm q_82, ATerm);
ATerm z_10 (ATerm i_82, ATerm j_82, ATerm);
ATerm h_18 (ATerm);
ATerm i_18 (ATerm);
ATerm k_18 (ATerm);
ATerm l_18 (ATerm);
ATerm m_18 (ATerm);
ATerm n_18 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm u_146 (ATerm), ATerm);
ATerm e_99 (ATerm c_98, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm b_11 (ATerm o_82, ATerm);
ATerm c_11 (ATerm a_79, ATerm b_79, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm p_18 (ATerm);
ATerm q_18 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm r_18 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm d_128 (ATerm), ATerm);
ATerm w_10 (ATerm m_73, ATerm n_73, ATerm);
ATerm debug_1_0 (ATerm q_143 (ATerm), ATerm);
ATerm s_18 (ATerm);
ATerm t_18 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm d_145 (ATerm), ATerm);
ATerm u_18 (ATerm);
ATerm v_18 (ATerm);
ATerm w_18 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm x_18 (ATerm);
ATerm y_18 (ATerm);
ATerm z_18 (ATerm);
ATerm b_19 (ATerm);
ATerm d_19 (ATerm);
ATerm e_19 (ATerm);
ATerm h_19 (ATerm);
ATerm i_19 (ATerm);
ATerm j_19 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm i_11 (ATerm p_83, ATerm q_83, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm k_19 (ATerm);
ATerm l_19 (ATerm);
ATerm m_19 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm g_11 (ATerm f_65, ATerm g_65, ATerm e_65, ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm n_19 (ATerm);
ATerm o_19 (ATerm);
ATerm p_19 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm d_11 (ATerm j_63, ATerm k_63, ATerm);
ATerm foldr_2_0 (ATerm j_132 (ATerm), ATerm k_132 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm q_19 (ATerm);
ATerm r_19 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm c_145 (ATerm), ATerm);
ATerm s_19 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm u_19 (ATerm);
ATerm need_help_1_0 (ATerm s_147 (ATerm), ATerm);
ATerm map_1_0 (ATerm t_127 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm f_11 (ATerm w_66, ATerm x_66, ATerm);
ATerm Program_1_0 (ATerm n_119 (ATerm), ATerm);
ATerm w_19 (ATerm);
ATerm z_19 (ATerm);
ATerm c_20 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm o_119 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm d_20 (ATerm);
ATerm e_20 (ATerm);
ATerm f_20 (ATerm);
ATerm g_20 (ATerm);
ATerm h_20 (ATerm);
ATerm i_20 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm a_105 (ATerm), ATerm b_105 (ATerm), ATerm);
ATerm j_20 (ATerm);
ATerm parse_options_p__1_0 (ATerm v_149 (ATerm), ATerm);
ATerm s_20 (ATerm);
ATerm t_20 (ATerm);
ATerm w_20 (ATerm);
ATerm x_20 (ATerm);
ATerm parse_options_1_0 (ATerm u_149 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm u_147 (ATerm), ATerm v_147 (ATerm), ATerm w_147 (ATerm), ATerm x_147 (ATerm), ATerm);
ATerm b_21 (ATerm);
ATerm d_21 (ATerm);
ATerm e_21 (ATerm);
ATerm f_21 (ATerm);
ATerm g_21 (ATerm);
ATerm iowrap_3_0 (ATerm d_147 (ATerm), ATerm e_147 (ATerm), ATerm f_147 (ATerm), ATerm);
ATerm i_21 (ATerm);
ATerm j_21 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm j_0 = NULL,l_0 = NULL,o_0 = NULL,p_0 = NULL,s_0 = NULL;
  j_0 = t;
  t = term_h_13;
  t = whoami_0_0(t);
  l_0 = t;
  t = term_k_21;
  o_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_21), l_0), term_l_21);
  p_0 = t;
  t = SSL_printnl(o_0, p_0);
  t = term_n_21;
  s_0 = t;
  t = SSL_exit(s_0);
  t = j_0;
  return(t);
}
ATerm c_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_21 = ATgetArgument(t, 0);
      if(((ATgetType(o_21) != AT_LIST) || !(ATisEmpty(o_21))))
        _fail(t);
      {
        ATerm p_21 = ATgetArgument(t, 1);
        if(((ATgetType(p_21) != AT_LIST) || !(ATisEmpty(p_21))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm r_1 = NULL,s_1 = NULL,u_1 = NULL,v_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_21 = ATgetArgument(t, 0);
      if(((ATgetType(q_21) == AT_LIST) && !(ATisEmpty(q_21))))
        {
          r_1 = ATgetFirst((ATermList) q_21);
          s_1 = (ATerm) ATgetNext((ATermList) q_21);
        }
      else
        _fail(t);
      {
        ATerm r_21 = ATgetArgument(t, 1);
        if(((ATgetType(r_21) == AT_LIST) && !(ATisEmpty(r_21))))
          {
            u_1 = ATgetFirst((ATermList) r_21);
            v_1 = (ATerm) ATgetNext((ATermList) r_21);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_1, u_1), (ATerm) ATmakeAppl(sym__2, s_1, v_1));
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm w_1 = NULL,x_1 = NULL;
  if(match_cons(t, sym__2))
    {
      w_1 = ATgetArgument(t, 0);
      x_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_1), w_1);
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm z_1 = NULL,c_2 = NULL,f_2 = NULL,g_2 = NULL,h_2 = NULL;
  if(match_cons(t, sym__2))
    {
      z_1 = ATgetArgument(t, 0);
      h_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_1;
  {
    ATerm s_21 = t;
    int w_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm x_21 = ATgetArgument(t, 0);
            c_2 = ATgetArgument(t, 1);
            f_2 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(w_21);
        t = (ATerm) ATmakeAppl(sym_SDef_3, h_2, c_2, f_2);
      }
    else
      {
        t = s_21;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm z_21 = ATgetArgument(t, 0);
            c_2 = ATgetArgument(t, 1);
            f_2 = ATgetArgument(t, 2);
            g_2 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, h_2, c_2, f_2, g_2);
      }
  }
  return(t);
}
ATerm i_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_22 = ATgetArgument(t, 0);
      if(((ATgetType(a_22) != AT_LIST) || !(ATisEmpty(a_22))))
        _fail(t);
      {
        ATerm b_22 = ATgetArgument(t, 1);
        if(((ATgetType(b_22) != AT_LIST) || !(ATisEmpty(b_22))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm x_2 = NULL,y_2 = NULL,z_2 = NULL,b_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_22 = ATgetArgument(t, 0);
      if(((ATgetType(c_22) == AT_LIST) && !(ATisEmpty(c_22))))
        {
          x_2 = ATgetFirst((ATermList) c_22);
          y_2 = (ATerm) ATgetNext((ATermList) c_22);
        }
      else
        _fail(t);
      {
        ATerm d_22 = ATgetArgument(t, 1);
        if(((ATgetType(d_22) == AT_LIST) && !(ATisEmpty(d_22))))
          {
            z_2 = ATgetFirst((ATermList) d_22);
            b_3 = (ATerm) ATgetNext((ATermList) d_22);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_2, z_2), (ATerm) ATmakeAppl(sym__2, y_2, b_3));
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm c_3 = NULL,d_3 = NULL;
  if(match_cons(t, sym__2))
    {
      c_3 = ATgetArgument(t, 0);
      d_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_3), c_3);
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm f_3 = NULL,h_3 = NULL,i_3 = NULL;
  if(match_cons(t, sym__2))
    {
      f_3 = ATgetArgument(t, 0);
      i_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_3;
  {
    ATerm e_22 = t;
    int f_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm g_22 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(f_22);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, i_3);
      }
    else
      {
        t = e_22;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm h_22 = ATgetArgument(t, 0);
            h_3 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, i_3, h_3);
      }
  }
  return(t);
}
ATerm p_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_22 = ATgetArgument(t, 0);
      if(((ATgetType(i_22) != AT_LIST) || !(ATisEmpty(i_22))))
        _fail(t);
      {
        ATerm j_22 = ATgetArgument(t, 1);
        if(((ATgetType(j_22) != AT_LIST) || !(ATisEmpty(j_22))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm o_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_22 = ATgetArgument(t, 0);
      if(((ATgetType(k_22) == AT_LIST) && !(ATisEmpty(k_22))))
        {
          o_3 = ATgetFirst((ATermList) k_22);
          p_3 = (ATerm) ATgetNext((ATermList) k_22);
        }
      else
        _fail(t);
      {
        ATerm l_22 = ATgetArgument(t, 1);
        if(((ATgetType(l_22) == AT_LIST) && !(ATisEmpty(l_22))))
          {
            q_3 = ATgetFirst((ATermList) l_22);
            r_3 = (ATerm) ATgetNext((ATermList) l_22);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_3, q_3), (ATerm) ATmakeAppl(sym__2, p_3, r_3));
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm s_3 = NULL,t_3 = NULL;
  if(match_cons(t, sym__2))
    {
      s_3 = ATgetArgument(t, 0);
      t_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(t_3), s_3);
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm v_3 = NULL,x_3 = NULL,y_3 = NULL;
  if(match_cons(t, sym__2))
    {
      v_3 = ATgetArgument(t, 0);
      y_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_3;
  {
    ATerm m_22 = t;
    int o_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm p_22 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(o_22);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, y_3);
      }
    else
      {
        t = m_22;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm q_22 = ATgetArgument(t, 0);
            x_3 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, y_3, x_3);
      }
  }
  return(t);
}
ATerm v_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_22 = ATgetArgument(t, 0);
      if(((ATgetType(r_22) != AT_LIST) || !(ATisEmpty(r_22))))
        _fail(t);
      {
        ATerm s_22 = ATgetArgument(t, 1);
        if(((ATgetType(s_22) != AT_LIST) || !(ATisEmpty(s_22))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm f_4 = NULL,g_4 = NULL,h_4 = NULL,i_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_22 = ATgetArgument(t, 0);
      if(((ATgetType(t_22) == AT_LIST) && !(ATisEmpty(t_22))))
        {
          f_4 = ATgetFirst((ATermList) t_22);
          g_4 = (ATerm) ATgetNext((ATermList) t_22);
        }
      else
        _fail(t);
      {
        ATerm u_22 = ATgetArgument(t, 1);
        if(((ATgetType(u_22) == AT_LIST) && !(ATisEmpty(u_22))))
          {
            h_4 = ATgetFirst((ATermList) u_22);
            i_4 = (ATerm) ATgetNext((ATermList) u_22);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_4, h_4), (ATerm) ATmakeAppl(sym__2, g_4, i_4));
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm k_4 = NULL,m_4 = NULL;
  if(match_cons(t, sym__2))
    {
      k_4 = ATgetArgument(t, 0);
      m_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_4), k_4);
  return(t);
}
ATerm y_5 (ATerm t)
{
  ATerm p_4 = NULL,u_4 = NULL,v_4 = NULL;
  if(match_cons(t, sym__2))
    {
      p_4 = ATgetArgument(t, 0);
      v_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_4;
  {
    ATerm v_22 = t;
    int w_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm x_22 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(w_22);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, v_4);
      }
    else
      {
        t = v_22;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm z_22 = ATgetArgument(t, 0);
            u_4 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, v_4, u_4);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm w_120 (ATerm), ATerm t)
{
  ATerm a_23 = t;
  int b_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_5 (ATerm t)
      {
        ATerm m_1 = NULL,o_1 = NULL;
        m_1 = t;
        t = w_120(t);
        o_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_1, o_1);
        t = genzip_4_0(c_5, d_5, e_5, f_5, t);
        return(t);
      }
      t = Let_2_0(a_5, _id, t);
      ;
      LocalPopChoice(b_23);
    }
  else
    {
      t = a_23;
      {
        ATerm c_23 = t;
        int d_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_5 (ATerm t)
            {
              ATerm v_2 = NULL,w_2 = NULL;
              v_2 = t;
              t = w_120(t);
              w_2 = t;
              t = (ATerm) ATmakeAppl(sym__2, v_2, w_2);
              t = genzip_4_0(i_5, j_5, k_5, l_5, t);
              return(t);
            }
            t = SDef_3_0(_id, h_5, _id, t);
            ;
            LocalPopChoice(d_23);
          }
        else
          {
            t = c_23;
            {
              ATerm e_23 = t;
              int f_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_5 (ATerm t)
                  {
                    ATerm m_3 = NULL,n_3 = NULL;
                    m_3 = t;
                    t = w_120(t);
                    n_3 = t;
                    t = (ATerm) ATmakeAppl(sym__2, m_3, n_3);
                    t = genzip_4_0(p_5, q_5, r_5, t_5, t);
                    return(t);
                  }
                  t = SDefT_4_0(_id, o_5, _id, _id, t);
                  ;
                  LocalPopChoice(f_23);
                }
              else
                {
                  t = e_23;
                  {
                    ATerm g_23 = t;
                    int h_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm u_5 (ATerm t)
                        {
                          ATerm d_4 = NULL,e_4 = NULL;
                          d_4 = t;
                          t = w_120(t);
                          e_4 = t;
                          t = (ATerm) ATmakeAppl(sym__2, d_4, e_4);
                          t = genzip_4_0(v_5, w_5, x_5, y_5, t);
                          return(t);
                        }
                        t = RDefT_4_0(_id, u_5, _id, _id, t);
                        ;
                        LocalPopChoice(h_23);
                      }
                    else
                      {
                        t = g_23;
                        {
                          ATerm b_6 (ATerm t)
                          {
                            ATerm g_5 = NULL;
                            t = w_120(t);
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                g_5 = ATgetFirst((ATermList) t);
                                {
                                  ATerm i_23 = (ATerm) ATgetNext((ATermList) t);
                                }
                              }
                            else
                              _fail(t);
                            t = g_5;
                            return(t);
                          }
                          t = Rec_2_0(b_6, _id, t);
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
ATerm Rec_2_0 (ATerm o_110 (ATerm), ATerm p_110 (ATerm), ATerm t)
{
  ATerm m_5 = NULL,n_5 = NULL,z_5 = NULL,a_6 = NULL,c_6 = NULL,d_6 = NULL,c_0 = NULL,e_0 = NULL;
  d_6 = t;
  if(match_cons(t, sym_Rec_2))
    {
      n_5 = ATgetArgument(t, 0);
      z_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_6);
  m_5 = t;
  t = n_5;
  t = o_110(t);
  a_6 = t;
  t = z_5;
  t = p_110(t);
  c_6 = t;
  e_0 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, a_6, c_6);
  c_0 = t;
  t = SSLsetAnnotations(c_0, m_5);
  return(t);
}
ATerm Let_2_0 (ATerm r_109 (ATerm), ATerm s_109 (ATerm), ATerm t)
{
  ATerm h_6 = NULL,j_6 = NULL,k_6 = NULL,m_6 = NULL,n_6 = NULL,o_6 = NULL,h_0 = NULL,r_0 = NULL;
  o_6 = t;
  if(match_cons(t, sym_Let_2))
    {
      j_6 = ATgetArgument(t, 0);
      k_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_6);
  h_6 = t;
  t = j_6;
  t = r_109(t);
  m_6 = t;
  t = k_6;
  t = s_109(t);
  n_6 = t;
  r_0 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, m_6, n_6);
  h_0 = t;
  t = SSLsetAnnotations(h_0, h_6);
  return(t);
}
ATerm sboundin_3_0 (ATerm x_120 (ATerm), ATerm y_120 (ATerm), ATerm z_120 (ATerm), ATerm t)
{
  ATerm j_23 = t;
  int m_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(x_120, x_120, t);
      ;
      LocalPopChoice(m_23);
    }
  else
    {
      t = j_23;
      {
        ATerm o_23 = t;
        int p_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(z_120, z_120, x_120, t);
            ;
            LocalPopChoice(p_23);
          }
        else
          {
            t = o_23;
            {
              ATerm s_23 = t;
              int t_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(z_120, z_120, z_120, x_120, t);
                  ;
                  LocalPopChoice(t_23);
                }
              else
                {
                  t = s_23;
                  t = Rec_2_0(z_120, x_120, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm u_6 = NULL;
  ATerm u_23 = t;
  int v_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          u_6 = ATgetArgument(t, 0);
          {
            ATerm w_23 = ATgetArgument(t, 1);
          }
          {
            ATerm x_23 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_23);
      t = u_6;
    }
  else
    {
      t = u_23;
      if(match_cons(t, sym_SDefT_4))
        {
          u_6 = ATgetArgument(t, 0);
          {
            ATerm y_23 = ATgetArgument(t, 1);
          }
          {
            ATerm z_23 = ATgetArgument(t, 2);
          }
          {
            ATerm a_24 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = u_6;
    }
  return(t);
}
ATerm f_8 (ATerm i_52, ATerm h_52, ATerm t)
{
  t = i_52;
  t = map_1_0(e_6, t);
  return(t);
}
ATerm SVar_1_0 (ATerm q_109 (ATerm), ATerm t)
{
  ATerm d_7 = NULL,h_7 = NULL,i_7 = NULL,j_7 = NULL,u_0 = NULL,x_0 = NULL;
  j_7 = t;
  if(match_cons(t, sym_SVar_1))
    {
      h_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_7);
  d_7 = t;
  t = h_7;
  t = q_109(t);
  i_7 = t;
  x_0 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, i_7);
  u_0 = t;
  t = SSLsetAnnotations(u_0, d_7);
  return(t);
}
ATerm g_8 (ATerm v_134 (ATerm), ATerm w_134 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm s_67, ATerm r_67, ATerm q_67, ATerm t)
{
  t = s_67;
  {
    ATerm f_6 (ATerm t)
    {
      ATerm o_7 = NULL;
      o_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_7, q_67);
      t = v_134(t);
      return(t);
    }
    ATerm g_6 (ATerm t)
    {
      ATerm r_7 = NULL;
      r_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_7, r_67);
      t = v_134(t);
      return(t);
    }
    t = w_134(f_6, g_6, _id, t);
  }
  return(t);
}
ATerm i_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_24 = ATgetArgument(t, 0);
      if(((ATgetType(b_24) != AT_LIST) || !(ATisEmpty(b_24))))
        _fail(t);
      {
        ATerm c_24 = ATgetArgument(t, 1);
        if(((ATgetType(c_24) != AT_LIST) || !(ATisEmpty(c_24))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm f_10 = NULL,o_10 = NULL,v_10 = NULL,m_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_24 = ATgetArgument(t, 0);
      if(((ATgetType(d_24) == AT_LIST) && !(ATisEmpty(d_24))))
        {
          f_10 = ATgetFirst((ATermList) d_24);
          o_10 = (ATerm) ATgetNext((ATermList) d_24);
        }
      else
        _fail(t);
      {
        ATerm e_24 = ATgetArgument(t, 1);
        if(((ATgetType(e_24) == AT_LIST) && !(ATisEmpty(e_24))))
          {
            v_10 = ATgetFirst((ATermList) e_24);
            m_11 = (ATerm) ATgetNext((ATermList) e_24);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_10, v_10), (ATerm) ATmakeAppl(sym__2, o_10, m_11));
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm n_11 = NULL,r_11 = NULL;
  if(match_cons(t, sym__2))
    {
      n_11 = ATgetArgument(t, 0);
      r_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_11), n_11);
  return(t);
}
ATerm h_8 (ATerm p_134 (ATerm), ATerm q_134 (ATerm (ATerm), ATerm), ATerm k_67, ATerm n_67, ATerm t)
{
  ATerm b_8 = NULL,o_8 = NULL,b_9 = NULL,m_9 = NULL,w_9 = NULL;
  t = k_67;
  t = p_134(t);
  b_8 = t;
  t = map_1_0(new_0_0, t);
  o_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_8, o_8);
  t = genzip_4_0(i_6, l_6, p_6, _id, t);
  b_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_9, n_67);
  t = conc_0_0(t);
  m_9 = t;
  t = k_67;
  {
    ATerm q_6 (ATerm t)
    {
      t = o_8;
      return(t);
    }
    t = q_134(q_6, t);
    w_9 = t;
    t = (ATerm) ATmakeAppl(sym__3, w_9, n_67, m_9);
  }
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL,n_12 = NULL,o_12 = NULL;
  i_12 = t;
  if(match_cons(t, sym__2))
    {
      j_12 = ATgetArgument(t, 0);
      k_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_12;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_12 = ATgetFirst((ATermList) t);
      o_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_12;
  if(match_cons(t, sym__2))
    {
      g_12 = ATgetArgument(t, 0);
      h_12 = ATgetArgument(t, 1);
      {
        ATerm f_24 = t;
        int g_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_12;
            if((j_12 != t))
              {
                _fail(t);
              }
            t = h_12;
            ;
            LocalPopChoice(g_24);
          }
        else
          {
            t = f_24;
            t = (ATerm) ATmakeAppl(sym__2, j_12, o_12);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, j_12, o_12);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm d_135 (ATerm), ATerm t)
{
  ATerm h_14 (ATerm t)
  {
    ATerm h_24 = t;
    int i_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_135(t);
        ;
        LocalPopChoice(i_24);
      }
    else
      {
        t = h_24;
        {
          ATerm w_13 = NULL,x_13 = NULL,g_14 = NULL;
          ATerm s_6 (ATerm t)
          {
            ATerm w_0 = NULL;
            w_0 = t;
            t = (ATerm) ATmakeAppl(sym__2, w_0, not_null(g_14));
            t = h_14(t);
            return(t);
          }
          if(((w_13 != NULL) && (w_13 != t)))
            _fail(t);
          else
            w_13 = t;
          if(match_cons(t, sym__2))
            {
              if(((x_13 != NULL) && (x_13 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                x_13 = ATgetArgument(t, 0);
              if(((g_14 != NULL) && (g_14 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                g_14 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = not_null(x_13);
          t = SRTS_all(s_6, t);
        }
      }
    return(t);
  }
  t = h_14(t);
  return(t);
}
ATerm rename_4_0 (ATerm k_134 (ATerm (ATerm), ATerm), ATerm l_134 (ATerm), ATerm m_134 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm n_134 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm l_14 = NULL;
  l_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_14, (ATerm) ATempty);
  {
    ATerm n_15 (ATerm t)
    {
      ATerm x_6 (ATerm t)
      {
        ATerm a_15 = NULL,b_15 = NULL,d_15 = NULL;
        a_15 = t;
        if(match_cons(t, sym__2))
          {
            b_15 = ATgetArgument(t, 0);
            d_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        {
          ATerm j_24 = t;
          int k_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_6 (ATerm t)
              {
                ATerm m_15 = NULL;
                m_15 = t;
                t = (ATerm) ATmakeAppl(sym__2, m_15, d_15);
                t = lookup_0_0(t);
                return(t);
              }
              t = b_15;
              t = k_134(y_6, t);
              ;
              LocalPopChoice(k_24);
            }
          else
            {
              t = j_24;
              {
                ATerm d_1 = NULL,e_1 = NULL,g_1 = NULL;
                t = a_15;
                t = h_8(l_134, n_134, b_15, d_15, t);
                if(match_cons(t, sym__3))
                  {
                    d_1 = ATgetArgument(t, 0);
                    e_1 = ATgetArgument(t, 1);
                    g_1 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = g_8(n_15, m_134, d_1, e_1, g_1, t);
              }
            }
        }
        return(t);
      }
      t = env_alltd_1_0(x_6, t);
      return(t);
    }
    t = n_15(t);
  }
  return(t);
}
ATerm a_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_24 = ATgetArgument(t, 0);
      if(((ATgetType(l_24) != AT_LIST) || !(ATisEmpty(l_24))))
        _fail(t);
      {
        ATerm m_24 = ATgetArgument(t, 1);
        if(((ATgetType(m_24) != AT_LIST) || !(ATisEmpty(m_24))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm b_7 (ATerm t)
{
  ATerm x_15 = NULL,y_15 = NULL,a_16 = NULL,e_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_24 = ATgetArgument(t, 0);
      if(((ATgetType(n_24) == AT_LIST) && !(ATisEmpty(n_24))))
        {
          x_15 = ATgetFirst((ATermList) n_24);
          y_15 = (ATerm) ATgetNext((ATermList) n_24);
        }
      else
        _fail(t);
      {
        ATerm o_24 = ATgetArgument(t, 1);
        if(((ATgetType(o_24) == AT_LIST) && !(ATisEmpty(o_24))))
          {
            a_16 = ATgetFirst((ATermList) o_24);
            e_16 = (ATerm) ATgetNext((ATermList) o_24);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_15, a_16), (ATerm) ATmakeAppl(sym__2, y_15, e_16));
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm f_16 = NULL,m_16 = NULL;
  if(match_cons(t, sym__2))
    {
      f_16 = ATgetArgument(t, 0);
      m_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_16), f_16);
  return(t);
}
ATerm e_7 (ATerm t)
{
  ATerm g_17 = NULL,a_18 = NULL,j_18 = NULL;
  if(match_cons(t, sym__2))
    {
      g_17 = ATgetArgument(t, 0);
      j_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_17;
  {
    ATerm p_24 = t;
    int q_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm r_24 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(q_24);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, j_18);
      }
    else
      {
        t = p_24;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm s_24 = ATgetArgument(t, 0);
            a_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, j_18, a_18);
      }
  }
  return(t);
}
ATerm l_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm t_24 = ATgetArgument(t, 0);
      if(((ATgetType(t_24) != AT_LIST) || !(ATisEmpty(t_24))))
        _fail(t);
      {
        ATerm u_24 = ATgetArgument(t, 1);
        if(((ATgetType(u_24) != AT_LIST) || !(ATisEmpty(u_24))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm m_7 (ATerm t)
{
  ATerm b_20 = NULL,k_20 = NULL,l_20 = NULL,m_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_24 = ATgetArgument(t, 0);
      if(((ATgetType(v_24) == AT_LIST) && !(ATisEmpty(v_24))))
        {
          b_20 = ATgetFirst((ATermList) v_24);
          k_20 = (ATerm) ATgetNext((ATermList) v_24);
        }
      else
        _fail(t);
      {
        ATerm w_24 = ATgetArgument(t, 1);
        if(((ATgetType(w_24) == AT_LIST) && !(ATisEmpty(w_24))))
          {
            l_20 = ATgetFirst((ATermList) w_24);
            m_20 = (ATerm) ATgetNext((ATermList) w_24);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_20, l_20), (ATerm) ATmakeAppl(sym__2, k_20, m_20));
  return(t);
}
ATerm n_7 (ATerm t)
{
  ATerm n_20 = NULL,o_20 = NULL;
  if(match_cons(t, sym__2))
    {
      n_20 = ATgetArgument(t, 0);
      o_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_20), n_20);
  return(t);
}
ATerm p_7 (ATerm t)
{
  ATerm q_20 = NULL,u_20 = NULL,v_20 = NULL;
  if(match_cons(t, sym__2))
    {
      q_20 = ATgetArgument(t, 0);
      v_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_20;
  {
    ATerm x_24 = t;
    int y_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm z_24 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(y_24);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, v_20);
      }
    else
      {
        t = x_24;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm a_25 = ATgetArgument(t, 0);
            u_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, v_20, u_20);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm s_120 (ATerm), ATerm t)
{
  ATerm b_25 = t;
  int d_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(s_120, _id, t);
      ;
      LocalPopChoice(d_25);
    }
  else
    {
      t = b_25;
      {
        ATerm e_25 = t;
        int f_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_6 (ATerm t)
            {
              ATerm v_15 = NULL,w_15 = NULL;
              v_15 = t;
              t = s_120(t);
              w_15 = t;
              t = (ATerm) ATmakeAppl(sym__2, v_15, w_15);
              t = genzip_4_0(a_7, b_7, c_7, e_7, t);
              return(t);
            }
            t = SDefT_4_0(_id, _id, z_6, _id, t);
            ;
            LocalPopChoice(f_25);
          }
        else
          {
            t = e_25;
            {
              ATerm g_7 (ATerm t)
              {
                ATerm x_19 = NULL,a_20 = NULL;
                x_19 = t;
                t = s_120(t);
                a_20 = t;
                t = (ATerm) ATmakeAppl(sym__2, x_19, a_20);
                t = genzip_4_0(l_7, m_7, n_7, p_7, t);
                return(t);
              }
              t = RDefT_4_0(_id, _id, g_7, _id, t);
            }
          }
      }
    }
  return(t);
}
ATerm q_7 (ATerm t)
{
  ATerm g_25 = t;
  int h_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(h_25);
    }
  else
    {
      t = g_25;
      {
        ATerm t_21 = NULL,u_21 = NULL,v_21 = NULL,y_21 = NULL;
        if(match_cons(t, sym_SDefT_4))
          {
            t_21 = ATgetArgument(t, 0);
            u_21 = ATgetArgument(t, 1);
            v_21 = ATgetArgument(t, 2);
            y_21 = ATgetArgument(t, 3);
            t = v_21;
            t = map_1_0(s_7, t);
          }
        else
          {
            if(match_cons(t, sym_RDefT_4))
              {
                t_21 = ATgetArgument(t, 0);
                u_21 = ATgetArgument(t, 1);
                v_21 = ATgetArgument(t, 2);
                y_21 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = v_21;
            t = map_1_0(t_7, t);
          }
      }
    }
  return(t);
}
ATerm s_7 (ATerm t)
{
  ATerm n_22 = NULL;
  ATerm i_25 = t;
  int j_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_22 = ATgetArgument(t, 0);
          {
            ATerm k_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_25);
      t = n_22;
    }
  else
    {
      t = i_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_22;
    }
  return(t);
}
ATerm t_7 (ATerm t)
{
  ATerm y_22 = NULL;
  ATerm l_25 = t;
  int m_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_22 = ATgetArgument(t, 0);
          {
            ATerm n_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_25);
      t = y_22;
    }
  else
    {
      t = l_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_22;
    }
  return(t);
}
ATerm u_7 (ATerm t)
{
  ATerm k_23 = NULL,l_23 = NULL,n_23 = NULL,q_23 = NULL,r_23 = NULL;
  k_23 = t;
  if(match_cons(t, sym_Let_2))
    {
      l_23 = ATgetArgument(t, 0);
      n_23 = ATgetArgument(t, 1);
      t = k_23;
      t = f_8(l_23, n_23, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          l_23 = ATgetArgument(t, 0);
          n_23 = ATgetArgument(t, 1);
          q_23 = ATgetArgument(t, 2);
          t = n_23;
          t = map_1_0(v_7, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              l_23 = ATgetArgument(t, 0);
              n_23 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, l_23);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  l_23 = ATgetArgument(t, 0);
                  n_23 = ATgetArgument(t, 1);
                  q_23 = ATgetArgument(t, 2);
                  r_23 = ATgetArgument(t, 3);
                  t = n_23;
                  t = map_1_0(w_7, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      l_23 = ATgetArgument(t, 0);
                      n_23 = ATgetArgument(t, 1);
                      q_23 = ATgetArgument(t, 2);
                      r_23 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = n_23;
                  t = map_1_0(z_7, t);
                }
            }
        }
    }
  return(t);
}
ATerm v_7 (ATerm t)
{
  ATerm c_25 = NULL;
  ATerm o_25 = t;
  int p_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_25 = ATgetArgument(t, 0);
          {
            ATerm q_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_25);
      t = c_25;
    }
  else
    {
      t = o_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_25;
    }
  return(t);
}
ATerm w_7 (ATerm t)
{
  ATerm s_25 = NULL;
  ATerm r_25 = t;
  int t_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_25 = ATgetArgument(t, 0);
          {
            ATerm u_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_25);
      t = s_25;
    }
  else
    {
      t = r_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_25;
    }
  return(t);
}
ATerm z_7 (ATerm t)
{
  ATerm o_26 = NULL;
  ATerm v_25 = t;
  int w_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_26 = ATgetArgument(t, 0);
          {
            ATerm x_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_25);
      t = o_26;
    }
  else
    {
      t = v_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_26;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, q_7, tboundin_3_0, tpaste_1_0, t);
  t = rename_4_0(SVar_1_0, u_7, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm v_26 = NULL,w_26 = NULL,y_26 = NULL,a_27 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL;
  if(match_cons(t, sym__2))
    {
      y_26 = ATgetArgument(t, 0);
      a_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_26;
  if(match_cons(t, sym_Build_1))
    {
      ATerm y_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_27;
  if(match_cons(t, sym_Where_1))
    {
      b_27 = ATgetArgument(t, 0);
      t = b_27;
      if(match_cons(t, sym_Prim_2))
        {
          v_26 = ATgetArgument(t, 0);
          w_26 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Prim_2, v_26, w_26);
    }
  else
    {
      if(match_cons(t, sym_Prim_2))
        {
          b_27 = ATgetArgument(t, 0);
          c_27 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_Prim_2, b_27, c_27);
        }
      else
        {
          if(match_cons(t, sym_PrimT_3))
            {
              b_27 = ATgetArgument(t, 0);
              c_27 = ATgetArgument(t, 1);
              d_27 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_PrimT_3, b_27, c_27, d_27);
        }
    }
  return(t);
}
ATerm d_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_25 = ATgetArgument(t, 0);
      if(((ATgetType(z_25) != AT_LIST) || !(ATisEmpty(z_25))))
        _fail(t);
      {
        ATerm a_26 = ATgetArgument(t, 1);
        if(((ATgetType(a_26) != AT_LIST) || !(ATisEmpty(a_26))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm e_8 (ATerm t)
{
  ATerm m_27 = NULL,n_27 = NULL,o_27 = NULL,t_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_26 = ATgetArgument(t, 0);
      if(((ATgetType(b_26) == AT_LIST) && !(ATisEmpty(b_26))))
        {
          m_27 = ATgetFirst((ATermList) b_26);
          n_27 = (ATerm) ATgetNext((ATermList) b_26);
        }
      else
        _fail(t);
      {
        ATerm c_26 = ATgetArgument(t, 1);
        if(((ATgetType(c_26) == AT_LIST) && !(ATisEmpty(c_26))))
          {
            o_27 = ATgetFirst((ATermList) c_26);
            t_27 = (ATerm) ATgetNext((ATermList) c_26);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_27, o_27), (ATerm) ATmakeAppl(sym__2, n_27, t_27));
  return(t);
}
ATerm i_8 (ATerm t)
{
  ATerm u_27 = NULL,v_27 = NULL;
  if(match_cons(t, sym__2))
    {
      u_27 = ATgetArgument(t, 0);
      v_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_27), u_27);
  return(t);
}
ATerm j_8 (ATerm t)
{
  ATerm w_27 = NULL,x_27 = NULL;
  if(match_cons(t, sym__2))
    {
      w_27 = ATgetArgument(t, 0);
      x_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, w_27), (ATerm) ATmakeAppl(sym_Match_1, x_27));
  return(t);
}
ATerm r_9 (ATerm i_97, ATerm h_97, ATerm g_97, ATerm t)
{
  ATerm l_27 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, i_97, g_97);
  t = genzip_4_0(d_8, e_8, i_8, j_8, t);
  l_27 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, l_27), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, h_97, i_97)));
  return(t);
}
ATerm f_34 (ATerm z_31, ATerm a_32, ATerm b_32, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, z_31, a_32);
  {
    ATerm d_26 = t;
    int e_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_32 = NULL,q_32 = NULL,r_32 = NULL,w_32 = NULL,z_32 = NULL,b_33 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm f_26 = ATgetArgument(t, 0);
            ATerm g_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_31;
        if(match_cons(t, sym_Build_1))
          {
            z_32 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = a_32;
        if(match_cons(t, sym_Match_1))
          {
            b_33 = ATgetArgument(t, 0);
            t = z_32;
            if(match_cons(t, sym_Op_2))
              {
                o_32 = ATgetArgument(t, 0);
                q_32 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = b_33;
            if(match_cons(t, sym_Op_2))
              {
                r_32 = ATgetArgument(t, 0);
                w_32 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            {
              ATerm h_26 = t;
              int i_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = (ATerm) ATmakeAppl(sym__2, o_32, r_32);
                  {
                    ATerm j_26 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm b_5 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            b_5 = ATgetArgument(t, 0);
                            if((b_5 != ATgetArgument(t, 1)))
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
                        t = j_26;
                      }
                    t = term_k_26;
                  }
                  ;
                  LocalPopChoice(i_26);
                }
              else
                {
                  t = h_26;
                  t = r_32;
                  if((o_32 != t))
                    {
                      _fail(t);
                    }
                  t = (ATerm) ATmakeAppl(sym__2, z_31, a_32);
                  t = r_9(q_32, o_32, w_32, t);
                }
            }
          }
        else
          {
            if(match_cons(t, sym_Build_1))
              {
                b_33 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Build_1, b_33);
          }
        ;
        LocalPopChoice(e_26);
      }
    else
      {
        t = d_26;
        {
          ATerm l_26 = t;
          int m_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = BuildPrim_0_0(t);
              ;
              LocalPopChoice(m_26);
            }
          else
            {
              t = l_26;
              {
                ATerm p_33 = NULL,q_33 = NULL,s_33 = NULL,t_33 = NULL;
                if(match_cons(t, sym__2))
                  {
                    ATerm n_26 = ATgetArgument(t, 0);
                    ATerm p_26 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = z_31;
                if(match_cons(t, sym_Match_1))
                  {
                    p_33 = ATgetArgument(t, 0);
                    t = a_32;
                    if(match_cons(t, sym_Match_1))
                      {
                        s_33 = ATgetArgument(t, 0);
                        t = s_33;
                        if((p_33 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym_Match_1, p_33);
                      }
                    else
                      {
                        if(match_cons(t, sym_Build_1))
                          {
                            s_33 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = p_33;
                        if(match_cons(t, sym_Var_1))
                          {
                            q_33 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = s_33;
                        if(match_cons(t, sym_Var_1))
                          {
                            t_33 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = t_33;
                        if((q_33 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, q_33));
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Build_1))
                      {
                        p_33 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = a_32;
                    if(match_cons(t, sym_Match_1))
                      {
                        s_33 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = s_33;
                    if((p_33 != t))
                      {
                        _fail(t);
                      }
                    t = (ATerm) ATmakeAppl(sym_Build_1, p_33);
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
  ATerm z_33 = NULL,a_34 = NULL,b_34 = NULL,c_34 = NULL,d_34 = NULL;
  b_34 = t;
  if(match_cons(t, sym_Seq_2))
    {
      c_34 = ATgetArgument(t, 0);
      d_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_34;
  if(match_cons(t, sym_Seq_2))
    {
      z_33 = ATgetArgument(t, 0);
      a_34 = ATgetArgument(t, 1);
      {
        ATerm q_26 = t;
        int r_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_5 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, c_34, z_33);
            {
              ATerm s_26 = t;
              int t_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_6 = NULL,t_6 = NULL,v_6 = NULL,w_6 = NULL,f_7 = NULL,k_7 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm u_26 = ATgetArgument(t, 0);
                      ATerm x_26 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = c_34;
                  if(match_cons(t, sym_Build_1))
                    {
                      f_7 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = z_33;
                  if(match_cons(t, sym_Match_1))
                    {
                      k_7 = ATgetArgument(t, 0);
                      t = f_7;
                      if(match_cons(t, sym_Op_2))
                        {
                          r_6 = ATgetArgument(t, 0);
                          t_6 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = k_7;
                      if(match_cons(t, sym_Op_2))
                        {
                          v_6 = ATgetArgument(t, 0);
                          w_6 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      {
                        ATerm z_26 = t;
                        int e_27 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = (ATerm) ATmakeAppl(sym__2, r_6, v_6);
                            {
                              ATerm f_27 = t;
                              if((PushChoice() == 0))
                                {
                                  ATerm k_9 = NULL;
                                  if(match_cons(t, sym__2))
                                    {
                                      k_9 = ATgetArgument(t, 0);
                                      if((k_9 != ATgetArgument(t, 1)))
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
                                  t = f_27;
                                }
                              t = term_k_26;
                            }
                            ;
                            LocalPopChoice(e_27);
                          }
                        else
                          {
                            t = z_26;
                            t = v_6;
                            if((r_6 != t))
                              {
                                _fail(t);
                              }
                            t = (ATerm) ATmakeAppl(sym__2, c_34, z_33);
                            t = r_9(t_6, r_6, w_6, t);
                          }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Build_1))
                        {
                          k_7 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_Build_1, k_7);
                    }
                  ;
                  LocalPopChoice(t_26);
                }
              else
                {
                  t = s_26;
                  {
                    ATerm g_27 = t;
                    int h_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = BuildPrim_0_0(t);
                        ;
                        LocalPopChoice(h_27);
                      }
                    else
                      {
                        t = g_27;
                        {
                          ATerm x_7 = NULL,y_7 = NULL,a_8 = NULL,c_8 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              ATerm i_27 = ATgetArgument(t, 0);
                              ATerm j_27 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = c_34;
                          if(match_cons(t, sym_Match_1))
                            {
                              x_7 = ATgetArgument(t, 0);
                              t = z_33;
                              if(match_cons(t, sym_Match_1))
                                {
                                  a_8 = ATgetArgument(t, 0);
                                  t = a_8;
                                  if((x_7 != t))
                                    {
                                      _fail(t);
                                    }
                                  t = (ATerm) ATmakeAppl(sym_Match_1, x_7);
                                }
                              else
                                {
                                  if(match_cons(t, sym_Build_1))
                                    {
                                      a_8 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = x_7;
                                  if(match_cons(t, sym_Var_1))
                                    {
                                      y_7 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = a_8;
                                  if(match_cons(t, sym_Var_1))
                                    {
                                      c_8 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = c_8;
                                  if((y_7 != t))
                                    {
                                      _fail(t);
                                    }
                                  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, y_7));
                                }
                            }
                          else
                            {
                              if(match_cons(t, sym_Build_1))
                                {
                                  x_7 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = z_33;
                              if(match_cons(t, sym_Match_1))
                                {
                                  a_8 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = a_8;
                              if((x_7 != t))
                                {
                                  _fail(t);
                                }
                              t = (ATerm) ATmakeAppl(sym_Build_1, x_7);
                            }
                        }
                      }
                  }
                }
              s_5 = t;
              t = (ATerm) ATmakeAppl(sym_Seq_2, s_5, a_34);
            }
            ;
            LocalPopChoice(r_26);
          }
        else
          {
            t = q_26;
            t = f_34(c_34, d_34, b_34, t);
          }
      }
    }
  else
    {
      t = f_34(c_34, d_34, b_34, t);
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm w_122 (ATerm), ATerm t)
{
  ATerm i_34 (ATerm t)
  {
    ATerm k_27 = t;
    int p_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_122(t);
        ;
        LocalPopChoice(p_27);
      }
    else
      {
        t = k_27;
        t = SRTS_one(i_34, t);
      }
    return(t);
  }
  t = i_34(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm b_35 = NULL,c_35 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL,h_35 = NULL,j_35 = NULL,k_35 = NULL,m_35 = NULL,n_35 = NULL,o_35 = NULL,p_35 = NULL;
  b_35 = t;
  if(match_cons(t, sym_Let_2))
    {
      c_35 = ATgetArgument(t, 0);
      k_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_35;
  if(match_cons(t, sym_Let_2))
    {
      m_35 = ATgetArgument(t, 0);
      o_35 = ATgetArgument(t, 1);
      {
        ATerm x_35 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, c_35, m_35);
        t = conc_0_0(t);
        x_35 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, x_35, o_35);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          m_35 = ATgetArgument(t, 0);
          o_35 = ATgetArgument(t, 1);
          p_35 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = c_35;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_35 = ATgetFirst((ATermList) t);
          j_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_35;
      if(match_cons(t, sym_SDefT_4))
        {
          e_35 = ATgetArgument(t, 0);
          f_35 = ATgetArgument(t, 1);
          g_35 = ATgetArgument(t, 2);
          h_35 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = f_35;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = g_35;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = j_35;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = m_35;
      if(match_cons(t, sym_SVar_1))
        {
          n_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_35;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = p_35;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = n_35;
      if((e_35 != t))
        {
          _fail(t);
        }
      t = h_35;
      {
        ATerm q_27 = t;
        if((PushChoice() == 0))
          {
            ATerm k_8 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm r_27 = ATgetArgument(t, 0);
                  if(match_cons(r_27, sym_SVar_1))
                    {
                      if((e_35 != ATgetArgument(r_27, 0)))
                        {
                          _fail(ATgetArgument(r_27, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm s_27 = ATgetArgument(t, 1);
                    if(((ATgetType(s_27) != AT_LIST) || !(ATisEmpty(s_27))))
                      _fail(t);
                  }
                  {
                    ATerm y_27 = ATgetArgument(t, 2);
                    if(((ATgetType(y_27) != AT_LIST) || !(ATisEmpty(y_27))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1_0(k_8, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = q_27;
          }
        t = h_35;
      }
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm m_36 = NULL,n_36 = NULL,o_36 = NULL,p_36 = NULL,q_36 = NULL,r_36 = NULL,t_36 = NULL,x_36 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      t_36 = ATgetArgument(t, 0);
      t = t_36;
      if(match_cons(t, sym_Seq_2))
        {
          r_36 = ATgetArgument(t, 0);
          n_36 = ATgetArgument(t, 1);
          t = r_36;
          if(match_cons(t, sym_Where_1))
            {
              m_36 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = n_36;
          if(match_cons(t, sym_Seq_2))
            {
              o_36 = ATgetArgument(t, 0);
              q_36 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = o_36;
          if(match_cons(t, sym_Build_1))
            {
              p_36 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, m_36, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, p_36), q_36)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              r_36 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, r_36);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          t_36 = ATgetArgument(t, 0);
          t = t_36;
          if(match_cons(t, sym_Test_1))
            {
              r_36 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, r_36);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              t_36 = ATgetArgument(t, 0);
              t = t_36;
              if(match_cons(t, sym_Not_1))
                {
                  r_36 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, r_36);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  t_36 = ATgetArgument(t, 0);
                  x_36 = ATgetArgument(t, 1);
                  t = x_36;
                  if((t_36 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      t_36 = ATgetArgument(t, 0);
                      x_36 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = x_36;
                  if((t_36 != t))
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
  ATerm q_37 = NULL,r_37 = NULL,y_37 = NULL,z_37 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      q_37 = ATgetArgument(t, 0);
      z_37 = ATgetArgument(t, 1);
      t = q_37;
      if(match_cons(t, sym_LChoice_2))
        {
          r_37 = ATgetArgument(t, 0);
          y_37 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, r_37, (ATerm) ATmakeAppl(sym_LChoice_2, y_37, z_37));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          q_37 = ATgetArgument(t, 0);
          z_37 = ATgetArgument(t, 1);
          t = q_37;
          if(match_cons(t, sym_Seq_2))
            {
              r_37 = ATgetArgument(t, 0);
              y_37 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, r_37, (ATerm) ATmakeAppl(sym_Seq_2, y_37, z_37));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              q_37 = ATgetArgument(t, 0);
              z_37 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = q_37;
          if(match_cons(t, sym_Choice_2))
            {
              r_37 = ATgetArgument(t, 0);
              y_37 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, r_37, (ATerm) ATmakeAppl(sym_Choice_2, y_37, z_37));
        }
    }
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm z_27 = t;
  int a_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(n_0, _id, t);
      {
        ATerm l_8 (ATerm t)
        {
          ATerm b_28 = t;
          int c_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(n_0, t);
              ;
              LocalPopChoice(c_28);
            }
          else
            {
              t = b_28;
            }
          return(t);
        }
        t = Cons_2_0(_id, l_8, t);
      }
      ;
      LocalPopChoice(a_28);
    }
  else
    {
      t = z_27;
      {
        ATerm n_8 (ATerm t)
        {
          t = map1_1_0(n_0, t);
          return(t);
        }
        t = Cons_2_0(_id, n_8, t);
      }
    }
  return(t);
}
ATerm p_8 (ATerm t)
{
  ATerm x_39 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      x_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, x_39, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_f_28), term_f_28));
  return(t);
}
ATerm q_8 (ATerm t)
{
  ATerm g_28 = t;
  int h_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_40 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, f_40, term_f_28);
      ;
      LocalPopChoice(h_28);
    }
  else
    {
      t = g_28;
    }
  return(t);
}
ATerm r_8 (ATerm t)
{
  ATerm s_40 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      s_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, s_40, term_f_28);
  return(t);
}
ATerm t_8 (ATerm t)
{
  ATerm i_28 = t;
  int j_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_40 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, u_40, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_f_28), term_f_28));
      ;
      LocalPopChoice(j_28);
    }
  else
    {
      t = i_28;
    }
  return(t);
}
ATerm v_8 (ATerm t)
{
  ATerm i_41 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      i_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, i_41, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_f_28), term_f_28));
  return(t);
}
ATerm y_8 (ATerm t)
{
  ATerm k_28 = t;
  int l_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_41 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, k_41, term_f_28);
      ;
      LocalPopChoice(l_28);
    }
  else
    {
      t = k_28;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm u_38 = NULL,v_38 = NULL,w_38 = NULL,b_39 = NULL,d_39 = NULL,e_39 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      d_39 = ATgetArgument(t, 0);
      e_39 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, d_39, e_39);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          d_39 = ATgetArgument(t, 0);
          t = d_39;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              u_38 = ATgetFirst((ATermList) t);
              v_38 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, u_38, (ATerm) ATmakeAppl(sym_LChoices_1, v_38));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_k_26;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              d_39 = ATgetArgument(t, 0);
              t = d_39;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  u_38 = ATgetFirst((ATermList) t);
                  v_38 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, u_38, (ATerm) ATmakeAppl(sym_Choices_1, v_38));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_k_26;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  d_39 = ATgetArgument(t, 0);
                  t = d_39;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      u_38 = ATgetFirst((ATermList) t);
                      v_38 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_38, (ATerm) ATmakeAppl(sym_Seqs_1, v_38));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_m_28;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      d_39 = ATgetArgument(t, 0);
                      e_39 = ATgetArgument(t, 1);
                      b_39 = ATgetArgument(t, 2);
                      w_38 = ATgetArgument(t, 3);
                      {
                        ATerm v_39 = NULL,w_39 = NULL;
                        t = e_39;
                        t = map1_1_0(p_8, t);
                        v_39 = t;
                        t = b_39;
                        t = map1_1_0(q_8, t);
                        w_39 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, d_39, v_39, w_39, w_38);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          d_39 = ATgetArgument(t, 0);
                          e_39 = ATgetArgument(t, 1);
                          b_39 = ATgetArgument(t, 2);
                          w_38 = ATgetArgument(t, 3);
                          {
                            ATerm n_28 = t;
                            int o_28 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm n_40 = NULL,r_40 = NULL;
                                t = b_39;
                                t = map1_1_0(r_8, t);
                                n_40 = t;
                                t = e_39;
                                t = map_1_0(t_8, t);
                                r_40 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, d_39, r_40, n_40, w_38);
                                ;
                                LocalPopChoice(o_28);
                              }
                            else
                              {
                                t = n_28;
                                {
                                  ATerm g_41 = NULL,h_41 = NULL;
                                  t = e_39;
                                  t = map1_1_0(v_8, t);
                                  g_41 = t;
                                  t = b_39;
                                  t = map_1_0(y_8, t);
                                  h_41 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, d_39, g_41, h_41, w_38);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              d_39 = ATgetArgument(t, 0);
                              e_39 = ATgetArgument(t, 1);
                              b_39 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, e_39, (ATerm) ATmakeAppl(sym_Op_2, term_p_28, (ATerm) ATinsert(ATinsert(ATempty, b_39), d_39)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  d_39 = ATgetArgument(t, 0);
                                  e_39 = ATgetArgument(t, 1);
                                  b_39 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, b_39)), d_39), (ATerm) ATmakeAppl(sym_Build_1, e_39)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      d_39 = ATgetArgument(t, 0);
                                      e_39 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, d_39, (ATerm) ATmakeAppl(sym_Match_1, e_39));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          d_39 = ATgetArgument(t, 0);
                                          e_39 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, d_39), e_39);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              d_39 = ATgetArgument(t, 0);
                                              e_39 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, e_39), d_39);
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
ATerm c_9 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm i_44 = NULL,j_44 = NULL,q_44 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      i_44 = ATgetArgument(t, 0);
      t = i_44;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_k_26;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          i_44 = ATgetArgument(t, 0);
          t = i_44;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_m_28;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              i_44 = ATgetArgument(t, 0);
              j_44 = ATgetArgument(t, 1);
              t = i_44;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_k_26;
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  i_44 = ATgetArgument(t, 0);
                  j_44 = ATgetArgument(t, 1);
                  t = j_44;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_k_26;
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      i_44 = ATgetArgument(t, 0);
                      j_44 = ATgetArgument(t, 1);
                      t = j_44;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = term_k_26;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          i_44 = ATgetArgument(t, 0);
                          t = i_44;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_k_26;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              i_44 = ATgetArgument(t, 0);
                              t = i_44;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_k_26;
                            }
                          else
                            {
                              if(match_cons(t, sym_Path_2))
                                {
                                  i_44 = ATgetArgument(t, 0);
                                  j_44 = ATgetArgument(t, 1);
                                  t = j_44;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_k_26;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      i_44 = ATgetArgument(t, 0);
                                      j_44 = ATgetArgument(t, 1);
                                      t = j_44;
                                      t = fetch_1_0(c_9, t);
                                      t = term_k_26;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          i_44 = ATgetArgument(t, 0);
                                          j_44 = ATgetArgument(t, 1);
                                          t = j_44;
                                          if(match_cons(t, sym_Fail_0))
                                            {
                                              t = i_44;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  ATerm q_28 = t;
                                                  int r_28 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = j_44;
                                                      ;
                                                      LocalPopChoice(r_28);
                                                    }
                                                  else
                                                    {
                                                      t = q_28;
                                                      t = i_44;
                                                    }
                                                }
                                              else
                                                {
                                                  t = i_44;
                                                }
                                            }
                                          else
                                            {
                                              t = i_44;
                                              if(!(match_cons(t, sym_Fail_0)))
                                                _fail(t);
                                              t = j_44;
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              i_44 = ATgetArgument(t, 0);
                                              j_44 = ATgetArgument(t, 1);
                                              t = j_44;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = i_44;
                                                  if(match_cons(t, sym_Fail_0))
                                                    {
                                                      ATerm s_28 = t;
                                                      int t_28 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = j_44;
                                                          ;
                                                          LocalPopChoice(t_28);
                                                        }
                                                      else
                                                        {
                                                          t = s_28;
                                                          t = i_44;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      t = i_44;
                                                    }
                                                }
                                              else
                                                {
                                                  t = i_44;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = j_44;
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  i_44 = ATgetArgument(t, 0);
                                                  t = i_44;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = term_k_26;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      i_44 = ATgetArgument(t, 0);
                                                      j_44 = ATgetArgument(t, 1);
                                                      q_44 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = q_44;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, i_44, j_44);
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
  ATerm y_45 = NULL,a_46 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      a_46 = ATgetArgument(t, 0);
      t = a_46;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_m_28;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          a_46 = ATgetArgument(t, 0);
          t = a_46;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_k_26;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              a_46 = ATgetArgument(t, 0);
              y_45 = ATgetArgument(t, 1);
              t = y_45;
              if(match_cons(t, sym_Id_0))
                {
                  t = a_46;
                  if(match_cons(t, sym_Id_0))
                    {
                      ATerm u_28 = t;
                      int v_28 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = y_45;
                          ;
                          LocalPopChoice(v_28);
                        }
                      else
                        {
                          t = u_28;
                          t = a_46;
                        }
                    }
                  else
                    {
                      t = a_46;
                    }
                }
              else
                {
                  t = a_46;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = y_45;
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  a_46 = ATgetArgument(t, 0);
                  y_45 = ATgetArgument(t, 1);
                  t = a_46;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_m_28;
                }
              else
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      a_46 = ATgetArgument(t, 0);
                      y_45 = ATgetArgument(t, 1);
                      t = y_45;
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = term_m_28;
                    }
                  else
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          a_46 = ATgetArgument(t, 0);
                          y_45 = ATgetArgument(t, 1);
                          t = y_45;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = term_m_28;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              a_46 = ATgetArgument(t, 0);
                              t = a_46;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_m_28;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  a_46 = ATgetArgument(t, 0);
                                  t = a_46;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_m_28;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      a_46 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = a_46;
                                  if(!(match_cons(t, sym_Wld_0)))
                                    _fail(t);
                                  t = term_m_28;
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
  ATerm w_28 = t;
  int x_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(x_28);
    }
  else
    {
      t = w_28;
      {
        ATerm y_28 = t;
        int z_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(z_28);
          }
        else
          {
            t = y_28;
            {
              ATerm a_29 = t;
              int b_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(b_29);
                }
              else
                {
                  t = a_29;
                  {
                    ATerm c_29 = t;
                    int d_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(d_29);
                      }
                    else
                      {
                        t = c_29;
                        {
                          ATerm e_29 = t;
                          int f_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(f_29);
                            }
                          else
                            {
                              t = e_29;
                              {
                                ATerm g_29 = t;
                                int h_29 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm o_46 = NULL,p_46 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        o_46 = ATgetArgument(t, 0);
                                        p_46 = ATgetArgument(t, 1);
                                        t = o_46;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = p_46;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            o_46 = ATgetArgument(t, 0);
                                            p_46 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = o_46;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = p_46;
                                      }
                                    ;
                                    LocalPopChoice(h_29);
                                  }
                                else
                                  {
                                    t = g_29;
                                    {
                                      ATerm i_29 = t;
                                      int j_29 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
                                          LocalPopChoice(j_29);
                                        }
                                      else
                                        {
                                          t = i_29;
                                          {
                                            ATerm k_29 = t;
                                            int l_29 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = BuildMatch_0_0(t);
                                                ;
                                                LocalPopChoice(l_29);
                                              }
                                            else
                                              {
                                                t = k_29;
                                                {
                                                  ATerm t_46 = NULL,u_46 = NULL;
                                                  if(match_cons(t, sym_As_2))
                                                    {
                                                      t_46 = ATgetArgument(t, 0);
                                                      u_46 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = t_46;
                                                  if(!(match_cons(t, sym_Wld_0)))
                                                    _fail(t);
                                                  t = u_46;
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
ATerm Seqs_1_0 (ATerm y_113 (ATerm), ATerm t)
{
  ATerm x_46 = NULL,z_46 = NULL,a_47 = NULL,b_47 = NULL,y_0 = NULL,z_0 = NULL;
  b_47 = t;
  if(match_cons(t, sym_Seqs_1))
    {
      z_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_47);
  x_46 = t;
  t = z_46;
  t = y_113(t);
  a_47 = t;
  z_0 = t;
  t = (ATerm) ATmakeAppl(sym_Seqs_1, a_47);
  y_0 = t;
  t = SSLsetAnnotations(y_0, x_46);
  return(t);
}
ATerm CallT_3_0 (ATerm v_109 (ATerm), ATerm w_109 (ATerm), ATerm x_109 (ATerm), ATerm t)
{
  ATerm f_47 = NULL,k_47 = NULL,l_47 = NULL,m_47 = NULL,n_47 = NULL,o_47 = NULL,p_47 = NULL,q_47 = NULL,a_1 = NULL,b_1 = NULL;
  q_47 = t;
  if(match_cons(t, sym_CallT_3))
    {
      k_47 = ATgetArgument(t, 0);
      l_47 = ATgetArgument(t, 1);
      m_47 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_47);
  f_47 = t;
  t = k_47;
  t = v_109(t);
  n_47 = t;
  t = l_47;
  t = w_109(t);
  o_47 = t;
  t = m_47;
  t = x_109(t);
  p_47 = t;
  b_1 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, n_47, o_47, p_47);
  a_1 = t;
  t = SSLsetAnnotations(a_1, f_47);
  return(t);
}
ATerm Prim_2_0 (ATerm v_110 (ATerm), ATerm w_110 (ATerm), ATerm t)
{
  ATerm t_47 = NULL,a_48 = NULL,b_48 = NULL,c_48 = NULL,d_48 = NULL,e_48 = NULL,c_1 = NULL,h_1 = NULL;
  e_48 = t;
  if(match_cons(t, sym_Prim_2))
    {
      a_48 = ATgetArgument(t, 0);
      b_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_48);
  t_47 = t;
  t = a_48;
  t = v_110(t);
  c_48 = t;
  t = b_48;
  t = w_110(t);
  d_48 = t;
  h_1 = t;
  t = (ATerm) ATmakeAppl(sym_Prim_2, c_48, d_48);
  c_1 = t;
  t = SSLsetAnnotations(c_1, t_47);
  return(t);
}
ATerm Var_1_0 (ATerm h_106 (ATerm), ATerm t)
{
  ATerm h_48 = NULL,i_48 = NULL,j_48 = NULL,q_48 = NULL,i_1 = NULL,j_1 = NULL;
  q_48 = t;
  if(match_cons(t, sym_Var_1))
    {
      i_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_48);
  h_48 = t;
  t = i_48;
  t = h_106(t);
  j_48 = t;
  j_1 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, j_48);
  i_1 = t;
  t = SSLsetAnnotations(i_1, h_48);
  return(t);
}
ATerm Match_1_0 (ATerm y_109 (ATerm), ATerm t)
{
  ATerm t_48 = NULL,u_48 = NULL,v_48 = NULL,w_48 = NULL,k_1 = NULL,l_1 = NULL;
  w_48 = t;
  if(match_cons(t, sym_Match_1))
    {
      u_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_48);
  t_48 = t;
  t = u_48;
  t = y_109(t);
  v_48 = t;
  l_1 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, v_48);
  k_1 = t;
  t = SSLsetAnnotations(k_1, t_48);
  return(t);
}
ATerm Assign_2_0 (ATerm j_113 (ATerm), ATerm k_113 (ATerm), ATerm t)
{
  ATerm z_48 = NULL,g_49 = NULL,h_49 = NULL,i_49 = NULL,j_49 = NULL,k_49 = NULL,n_1 = NULL,p_1 = NULL;
  k_49 = t;
  if(match_cons(t, sym_Assign_2))
    {
      g_49 = ATgetArgument(t, 0);
      h_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_49);
  z_48 = t;
  t = g_49;
  t = j_113(t);
  i_49 = t;
  t = h_49;
  t = k_113(t);
  j_49 = t;
  p_1 = t;
  t = (ATerm) ATmakeAppl(sym_Assign_2, i_49, j_49);
  n_1 = t;
  t = SSLsetAnnotations(n_1, z_48);
  return(t);
}
ATerm Op_2_0 (ATerm n_106 (ATerm), ATerm o_106 (ATerm), ATerm t)
{
  ATerm n_49 = NULL,o_49 = NULL,p_49 = NULL,u_49 = NULL,v_49 = NULL,a_51 = NULL,q_1 = NULL,t_1 = NULL;
  a_51 = t;
  if(match_cons(t, sym_Op_2))
    {
      o_49 = ATgetArgument(t, 0);
      p_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_51);
  n_49 = t;
  t = o_49;
  t = n_106(t);
  u_49 = t;
  t = p_49;
  t = o_106(t);
  v_49 = t;
  t_1 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, u_49, v_49);
  q_1 = t;
  t = SSLsetAnnotations(q_1, n_49);
  return(t);
}
ATerm Str_1_0 (ATerm l_106 (ATerm), ATerm t)
{
  ATerm l_51 = NULL,m_51 = NULL,n_51 = NULL,o_51 = NULL,y_1 = NULL,a_2 = NULL;
  o_51 = t;
  if(match_cons(t, sym_Str_1))
    {
      m_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_51);
  l_51 = t;
  t = m_51;
  t = l_106(t);
  n_51 = t;
  a_2 = t;
  t = (ATerm) ATmakeAppl(sym_Str_1, n_51);
  y_1 = t;
  t = SSLsetAnnotations(y_1, l_51);
  return(t);
}
ATerm Real_1_0 (ATerm k_106 (ATerm), ATerm t)
{
  ATerm r_51 = NULL,s_51 = NULL,t_51 = NULL,u_51 = NULL,b_2 = NULL,d_2 = NULL;
  u_51 = t;
  if(match_cons(t, sym_Real_1))
    {
      s_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_51);
  r_51 = t;
  t = s_51;
  t = k_106(t);
  t_51 = t;
  d_2 = t;
  t = (ATerm) ATmakeAppl(sym_Real_1, t_51);
  b_2 = t;
  t = SSLsetAnnotations(b_2, r_51);
  return(t);
}
ATerm Int_1_0 (ATerm j_106 (ATerm), ATerm t)
{
  ATerm x_51 = NULL,y_51 = NULL,z_51 = NULL,a_52 = NULL,e_2 = NULL,i_2 = NULL;
  a_52 = t;
  if(match_cons(t, sym_Int_1))
    {
      y_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_52);
  x_51 = t;
  t = y_51;
  t = j_106(t);
  z_51 = t;
  i_2 = t;
  t = (ATerm) ATmakeAppl(sym_Int_1, z_51);
  e_2 = t;
  t = SSLsetAnnotations(e_2, x_51);
  return(t);
}
ATerm Build_1_0 (ATerm z_109 (ATerm), ATerm t)
{
  ATerm e_52 = NULL,f_52 = NULL,j_52 = NULL,k_52 = NULL,j_2 = NULL,k_2 = NULL;
  k_52 = t;
  if(match_cons(t, sym_Build_1))
    {
      f_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_52);
  e_52 = t;
  t = f_52;
  t = z_109(t);
  j_52 = t;
  k_2 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, j_52);
  j_2 = t;
  t = SSLsetAnnotations(j_2, e_52);
  return(t);
}
ATerm i_9 (ATerm t)
{
  t = Var_1_0(_id, t);
  return(t);
}
ATerm l_9 (ATerm t)
{
  t = Var_1_0(_id, t);
  return(t);
}
ATerm n_9 (ATerm t)
{
  t = Var_1_0(_id, t);
  return(t);
}
ATerm o_9 (ATerm t)
{
  t = map_1_0(simple_strategy_0_0, t);
  return(t);
}
ATerm simple_strategy_0_0 (ATerm t)
{
  ATerm m_29 = t;
  int n_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      ;
      LocalPopChoice(n_29);
    }
  else
    {
      t = m_29;
      {
        ATerm o_29 = t;
        int p_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_Fail_0)))
              _fail(t);
            ;
            LocalPopChoice(p_29);
          }
        else
          {
            t = o_29;
            {
              ATerm q_29 = t;
              int r_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_9 (ATerm t)
                  {
                    ATerm s_29 = t;
                    int t_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Var_1_0(_id, t);
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
                              t = Int_1_0(_id, t);
                              ;
                              LocalPopChoice(v_29);
                            }
                          else
                            {
                              t = u_29;
                              {
                                ATerm w_29 = t;
                                int x_29 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Real_1_0(_id, t);
                                    ;
                                    LocalPopChoice(x_29);
                                  }
                                else
                                  {
                                    t = w_29;
                                    {
                                      ATerm y_29 = t;
                                      int z_29 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Str_1_0(_id, t);
                                          ;
                                          LocalPopChoice(z_29);
                                        }
                                      else
                                        {
                                          t = y_29;
                                          {
                                            ATerm g_9 (ATerm t)
                                            {
                                              t = map_1_0(e_9, t);
                                              return(t);
                                            }
                                            t = Op_2_0(_id, g_9, t);
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
                  t = Build_1_0(e_9, t);
                  ;
                  LocalPopChoice(r_29);
                }
              else
                {
                  t = q_29;
                  {
                    ATerm a_30 = t;
                    int b_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Assign_2_0(i_9, l_9, t);
                        ;
                        LocalPopChoice(b_30);
                      }
                    else
                      {
                        t = a_30;
                        {
                          ATerm c_30 = t;
                          int d_30 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Match_1_0(n_9, t);
                              ;
                              LocalPopChoice(d_30);
                            }
                          else
                            {
                              t = c_30;
                              {
                                ATerm e_30 = t;
                                int f_30 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Prim_2_0(_id, _id, t);
                                    ;
                                    LocalPopChoice(f_30);
                                  }
                                else
                                  {
                                    t = e_30;
                                    {
                                      ATerm g_30 = t;
                                      int h_30 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = CallT_3_0(_id, _id, _id, t);
                                          ;
                                          LocalPopChoice(h_30);
                                        }
                                      else
                                        {
                                          t = g_30;
                                          {
                                            ATerm i_30 = t;
                                            int j_30 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Seq_2_0(simple_strategy_0_0, simple_strategy_0_0, t);
                                                ;
                                                LocalPopChoice(j_30);
                                              }
                                            else
                                              {
                                                t = i_30;
                                                {
                                                  ATerm k_30 = t;
                                                  int l_30 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Seqs_1_0(o_9, t);
                                                      ;
                                                      LocalPopChoice(l_30);
                                                    }
                                                  else
                                                    {
                                                      t = k_30;
                                                      t = Scope_2_0(_id, simple_strategy_0_0, t);
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
ATerm m_8 (ATerm o_129 (ATerm), ATerm s_59, ATerm r_59, ATerm t)
{
  t = s_59;
  {
    ATerm a_53 (ATerm t)
    {
      ATerm m_30 = t;
      int n_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(n_30);
        }
      else
        {
          t = m_30;
          {
            ATerm b_53 (ATerm s_52, ATerm t)
            {
              ATerm u_52 = NULL,v_52 = NULL;
              t = s_52;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  u_52 = ATgetFirst((ATermList) t);
                  v_52 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              {
                ATerm p_9 (ATerm t)
                {
                  t = r_59;
                  return(t);
                }
                t = m_10(o_129, p_9, u_52, v_52, t);
                t = s_52;
                t = Cons_2_0(_id, a_53, t);
              }
              return(t);
            }
            ATerm w_52 = NULL,y_52 = NULL;
            w_52 = t;
            {
              ATerm o_30 = t;
              int p_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm q_30 = ATgetFirst((ATermList) t);
                      y_52 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(p_30);
                  {
                    ATerm r_30 = t;
                    int s_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = b_53(w_52, t);
                        ;
                        LocalPopChoice(s_30);
                      }
                    else
                      {
                        t = r_30;
                        t = y_52;
                        t = a_53(t);
                      }
                  }
                }
              else
                {
                  t = o_30;
                  t = b_53(w_52, t);
                }
            }
          }
        }
      return(t);
    }
    t = a_53(t);
  }
  return(t);
}
ATerm Matrix_2_0 (ATerm s_112 (ATerm), ATerm t_112 (ATerm), ATerm t)
{
  ATerm c_53 = NULL,d_53 = NULL,e_53 = NULL,f_53 = NULL,g_53 = NULL,h_53 = NULL,l_2 = NULL,m_2 = NULL;
  h_53 = t;
  if(match_cons(t, sym_Matrix_2))
    {
      d_53 = ATgetArgument(t, 0);
      e_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_53);
  c_53 = t;
  t = d_53;
  t = s_112(t);
  f_53 = t;
  t = e_53;
  t = t_112(t);
  g_53 = t;
  m_2 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_2, f_53, g_53);
  l_2 = t;
  t = SSLsetAnnotations(l_2, c_53);
  return(t);
}
ATerm tvars_matrix_boundin_3_0 (ATerm v_150 (ATerm), ATerm w_150 (ATerm), ATerm x_150 (ATerm), ATerm t)
{
  ATerm t_30 = t;
  int u_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = tboundin_3_0(v_150, w_150, x_150, t);
      ;
      LocalPopChoice(u_30);
    }
  else
    {
      t = t_30;
      t = Matrix_2_0(x_150, v_150, t);
    }
  return(t);
}
ATerm DynamicRules_1_0 (ATerm y_108 (ATerm), ATerm t)
{
  ATerm m_53 = NULL,n_53 = NULL,q_53 = NULL,r_53 = NULL,n_2 = NULL,o_2 = NULL;
  r_53 = t;
  if(match_cons(t, sym_DynamicRules_1))
    {
      n_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_53);
  m_53 = t;
  t = n_53;
  t = y_108(t);
  q_53 = t;
  o_2 = t;
  t = (ATerm) ATmakeAppl(sym_DynamicRules_1, q_53);
  n_2 = t;
  t = SSLsetAnnotations(n_2, m_53);
  return(t);
}
ATerm RDefT_4_0 (ATerm p_108 (ATerm), ATerm q_108 (ATerm), ATerm r_108 (ATerm), ATerm s_108 (ATerm), ATerm t)
{
  ATerm y_53 = NULL,z_53 = NULL,a_54 = NULL,b_54 = NULL,c_54 = NULL,d_54 = NULL,e_54 = NULL,f_54 = NULL,g_54 = NULL,h_54 = NULL,p_2 = NULL,q_2 = NULL;
  h_54 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      z_53 = ATgetArgument(t, 0);
      a_54 = ATgetArgument(t, 1);
      b_54 = ATgetArgument(t, 2);
      c_54 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_54);
  y_53 = t;
  t = z_53;
  t = p_108(t);
  d_54 = t;
  t = a_54;
  t = q_108(t);
  e_54 = t;
  t = b_54;
  t = r_108(t);
  f_54 = t;
  t = c_54;
  t = s_108(t);
  g_54 = t;
  q_2 = t;
  t = (ATerm) ATmakeAppl(sym_RDefT_4, d_54, e_54, f_54, g_54);
  p_2 = t;
  t = SSLsetAnnotations(p_2, y_53);
  return(t);
}
ATerm tboundin_3_0 (ATerm t_120 (ATerm), ATerm u_120 (ATerm), ATerm v_120 (ATerm), ATerm t)
{
  ATerm v_30 = t;
  int w_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(v_120, t_120, t);
      ;
      LocalPopChoice(w_30);
    }
  else
    {
      t = v_30;
      {
        ATerm x_30 = t;
        int y_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(v_120, v_120, v_120, t_120, t);
            ;
            LocalPopChoice(y_30);
          }
        else
          {
            t = x_30;
            {
              ATerm z_30 = t;
              int a_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(v_120, v_120, v_120, t_120, t);
                  ;
                  LocalPopChoice(a_31);
                }
              else
                {
                  t = z_30;
                  t = DynamicRules_1_0(t_120, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm q_9 (ATerm t)
{
  ATerm u_54 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      u_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, u_54);
  return(t);
}
ATerm s_9 (ATerm t)
{
  ATerm b_31 = t;
  int c_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(c_31);
    }
  else
    {
      t = b_31;
      {
        ATerm d_31 = t;
        int e_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            ;
            LocalPopChoice(e_31);
          }
        else
          {
            t = d_31;
            {
              ATerm w_54 = NULL,x_54 = NULL,y_54 = NULL,z_54 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  w_54 = ATgetArgument(t, 0);
                  x_54 = ATgetArgument(t, 1);
                  y_54 = ATgetArgument(t, 2);
                  z_54 = ATgetArgument(t, 3);
                  t = y_54;
                  t = map_1_0(t_9, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      w_54 = ATgetArgument(t, 0);
                      x_54 = ATgetArgument(t, 1);
                      y_54 = ATgetArgument(t, 2);
                      z_54 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = y_54;
                  t = map_1_0(u_9, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm t_9 (ATerm t)
{
  ATerm h_55 = NULL;
  ATerm f_31 = t;
  int g_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_55 = ATgetArgument(t, 0);
          {
            ATerm h_31 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_31);
      t = h_55;
    }
  else
    {
      t = f_31;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_55;
    }
  return(t);
}
ATerm u_9 (ATerm t)
{
  ATerm v_55 = NULL;
  ATerm i_31 = t;
  int j_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_55 = ATgetArgument(t, 0);
          {
            ATerm k_31 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_31);
      t = v_55;
    }
  else
    {
      t = i_31;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_55;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm q_54 = NULL;
  if(match_cons(t, sym_DynamicRules_1))
    {
      q_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_54;
  t = free_vars_3_0(q_9, s_9, tboundin_3_0, t);
  return(t);
}
ATerm v_9 (ATerm t)
{
  ATerm i_56 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      i_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, i_56);
  return(t);
}
ATerm x_9 (ATerm t)
{
  ATerm l_31 = t;
  int m_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(m_31);
    }
  else
    {
      t = l_31;
      {
        ATerm k_56 = NULL,l_56 = NULL,m_56 = NULL,n_56 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            k_56 = ATgetArgument(t, 0);
            t = k_56;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                k_56 = ATgetArgument(t, 0);
                l_56 = ATgetArgument(t, 1);
                m_56 = ATgetArgument(t, 2);
                n_56 = ATgetArgument(t, 3);
                t = m_56;
                t = map_1_0(y_9, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    k_56 = ATgetArgument(t, 0);
                    l_56 = ATgetArgument(t, 1);
                    m_56 = ATgetArgument(t, 2);
                    n_56 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = m_56;
                t = map_1_0(z_9, t);
              }
          }
      }
    }
  return(t);
}
ATerm y_9 (ATerm t)
{
  ATerm v_56 = NULL;
  ATerm n_31 = t;
  int o_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_56 = ATgetArgument(t, 0);
          {
            ATerm p_31 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_31);
      t = v_56;
    }
  else
    {
      t = n_31;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_56;
    }
  return(t);
}
ATerm z_9 (ATerm t)
{
  ATerm e_57 = NULL;
  ATerm q_31 = t;
  int r_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_57 = ATgetArgument(t, 0);
          {
            ATerm s_31 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_31);
      t = e_57;
    }
  else
    {
      t = q_31;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_57 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_57;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(v_9, x_9, tboundin_3_0, t);
  return(t);
}
ATerm a_10 (ATerm t)
{
  ATerm t_57 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      t_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, t_57);
  return(t);
}
ATerm b_10 (ATerm t)
{
  ATerm t_31 = t;
  int u_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(u_31);
    }
  else
    {
      t = t_31;
      {
        ATerm v_57 = NULL,w_57 = NULL,x_57 = NULL,y_57 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            v_57 = ATgetArgument(t, 0);
            t = v_57;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                v_57 = ATgetArgument(t, 0);
                w_57 = ATgetArgument(t, 1);
                x_57 = ATgetArgument(t, 2);
                y_57 = ATgetArgument(t, 3);
                t = x_57;
                t = map_1_0(c_10, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    v_57 = ATgetArgument(t, 0);
                    w_57 = ATgetArgument(t, 1);
                    x_57 = ATgetArgument(t, 2);
                    y_57 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = x_57;
                t = map_1_0(g_10, t);
              }
          }
      }
    }
  return(t);
}
ATerm c_10 (ATerm t)
{
  ATerm g_58 = NULL;
  ATerm v_31 = t;
  int w_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_58 = ATgetArgument(t, 0);
          {
            ATerm x_31 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_31);
      t = g_58;
    }
  else
    {
      t = v_31;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_58;
    }
  return(t);
}
ATerm g_10 (ATerm t)
{
  ATerm u_58 = NULL;
  ATerm y_31 = t;
  int c_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_58 = ATgetArgument(t, 0);
          {
            ATerm d_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_32);
      t = u_58;
    }
  else
    {
      t = y_31;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_58;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm m_57 = NULL,q_57 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      q_57 = ATgetArgument(t, 0);
      t = q_57;
      if(match_cons(t, sym_Rule_3))
        {
          m_57 = ATgetArgument(t, 0);
          {
            ATerm e_32 = ATgetArgument(t, 1);
          }
          {
            ATerm f_32 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = m_57;
      t = free_vars_3_0(a_10, b_10, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          q_57 = ATgetArgument(t, 0);
          {
            ATerm g_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = q_57;
    }
  return(t);
}
ATerm s_8 (ATerm q_129 (ATerm), ATerm u_59, ATerm t_59, ATerm t)
{
  t = u_59;
  {
    ATerm e_59 (ATerm t)
    {
      ATerm h_32 = t;
      int i_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(i_32);
        }
      else
        {
          t = h_32;
          {
            ATerm j_32 = t;
            int k_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_58 = NULL,a_59 = NULL,b_59 = NULL;
                z_58 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    a_59 = ATgetFirst((ATermList) t);
                    b_59 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = z_58;
                {
                  ATerm h_10 (ATerm t)
                  {
                    t = t_59;
                    return(t);
                  }
                  t = m_10(q_129, h_10, a_59, b_59, t);
                  t = e_59(t);
                }
                ;
                LocalPopChoice(k_32);
              }
            else
              {
                t = j_32;
                t = Cons_2_0(_id, e_59, t);
              }
          }
        }
      return(t);
    }
    t = e_59(t);
  }
  return(t);
}
ATerm i_10 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_32 = ATgetArgument(t, 0);
      if(((ATgetType(l_32) != AT_LIST) || !(ATisEmpty(l_32))))
        _fail(t);
      {
        ATerm m_32 = ATgetArgument(t, 1);
        if(((ATgetType(m_32) != AT_LIST) || !(ATisEmpty(m_32))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_10 (ATerm t)
{
  ATerm m_59 = NULL,n_59 = NULL,o_59 = NULL,p_59 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_32 = ATgetArgument(t, 0);
      if(((ATgetType(n_32) == AT_LIST) && !(ATisEmpty(n_32))))
        {
          m_59 = ATgetFirst((ATermList) n_32);
          n_59 = (ATerm) ATgetNext((ATermList) n_32);
        }
      else
        _fail(t);
      {
        ATerm p_32 = ATgetArgument(t, 1);
        if(((ATgetType(p_32) == AT_LIST) && !(ATisEmpty(p_32))))
          {
            o_59 = ATgetFirst((ATermList) p_32);
            p_59 = (ATerm) ATgetNext((ATermList) p_32);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_59, o_59), (ATerm) ATmakeAppl(sym__2, n_59, p_59));
  return(t);
}
ATerm s_10 (ATerm t)
{
  ATerm q_59 = NULL,x_59 = NULL;
  if(match_cons(t, sym__2))
    {
      q_59 = ATgetArgument(t, 0);
      x_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_59), q_59);
  return(t);
}
ATerm u_8 (ATerm v_713, ATerm a_714, ATerm q_89, ATerm t)
{
  ATerm g_59 = NULL,j_59 = NULL,k_59 = NULL,l_59 = NULL;
  t = SSL_explode_term(a_714);
  if(match_cons(t, sym__2))
    {
      g_59 = ATgetArgument(t, 0);
      j_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(v_713);
  if(match_cons(t, sym__2))
    {
      if((g_59 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      k_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_59, j_59);
  t = genzip_4_0(i_10, r_10, s_10, _id, t);
  l_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_59, q_89);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm t_138 (ATerm), ATerm u_138 (ATerm), ATerm t)
{
  ATerm y_59 (ATerm t)
  {
    ATerm s_32 = t;
    int t_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_138(t);
        ;
        LocalPopChoice(t_32);
      }
    else
      {
        t = s_32;
        t = u_138(t);
        t = y_59(t);
      }
    return(t);
  }
  t = y_59(t);
  return(t);
}
ATerm for_3_0 (ATerm w_138 (ATerm), ATerm x_138 (ATerm), ATerm y_138 (ATerm), ATerm t)
{
  t = w_138(t);
  t = while_not_2_0(x_138, y_138, t);
  return(t);
}
ATerm t_10 (ATerm t)
{
  ATerm w_60 = NULL;
  w_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, w_60);
  return(t);
}
ATerm j_11 (ATerm t)
{
  t = _2_0(_id, l_11, t);
  return(t);
}
ATerm k_11 (ATerm t)
{
  ATerm u_32 = t;
  int v_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(_id, o_11, t);
      ;
      LocalPopChoice(v_32);
    }
  else
    {
      t = u_32;
      {
        ATerm r_61 = NULL,u_61 = NULL,v_61 = NULL,w_61 = NULL;
        if(match_cons(t, sym__2))
          {
            r_61 = ATgetArgument(t, 0);
            u_61 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_61;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_61 = ATgetFirst((ATermList) t);
            w_61 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_61), v_61), w_61);
      }
    }
  return(t);
}
ATerm l_11 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm o_11 (ATerm t)
{
  ATerm x_60 = NULL,y_60 = NULL,z_60 = NULL,a_61 = NULL,b_61 = NULL;
  x_60 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_60 = ATgetFirst((ATermList) t);
      b_61 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = y_60;
  if(match_cons(t, sym__2))
    {
      z_60 = ATgetArgument(t, 0);
      a_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_32 = t;
    int y_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_61;
        if((z_60 != t))
          {
            _fail(t);
          }
        t = b_61;
        ;
        LocalPopChoice(y_32);
      }
    else
      {
        t = x_32;
        t = x_60;
        t = u_8(z_60, a_61, b_61, t);
      }
  }
  return(t);
}
ATerm p_11 (ATerm t)
{
  ATerm k_62 = NULL;
  if(match_cons(t, sym__2))
    {
      k_62 = ATgetArgument(t, 0);
      if((k_62 != ATgetArgument(t, 1)))
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
  ATerm a_33 = t;
  int c_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(t_10, j_11, k_11, t);
      ;
      LocalPopChoice(c_33);
    }
  else
    {
      t = a_33;
      {
        ATerm f_62 = NULL,g_62 = NULL,h_62 = NULL;
        f_62 = t;
        if(match_cons(t, sym__2))
          {
            g_62 = ATgetArgument(t, 0);
            h_62 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_62;
        t = s_8(p_11, g_62, h_62, t);
      }
    }
  return(t);
}
ATerm s_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm c_12 (ATerm t)
{
  ATerm j_10 = NULL,k_10 = NULL;
  if(match_cons(t, sym__2))
    {
      j_10 = ATgetArgument(t, 0);
      k_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_10(f_12, j_10, k_10, t);
  return(t);
}
ATerm f_12 (ATerm t)
{
  ATerm l_10 = NULL;
  if(match_cons(t, sym__2))
    {
      l_10 = ATgetArgument(t, 0);
      if((l_10 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm m_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm p_12 (ATerm t)
{
  ATerm u_10 = NULL,e_11 = NULL;
  if(match_cons(t, sym__2))
    {
      u_10 = ATgetArgument(t, 0);
      e_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_10(q_12, u_10, e_11, t);
  return(t);
}
ATerm q_12 (ATerm t)
{
  ATerm h_11 = NULL;
  if(match_cons(t, sym__2))
    {
      h_11 = ATgetArgument(t, 0);
      if((h_11 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm n_136 (ATerm), ATerm o_136 (ATerm), ATerm p_136 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm b_63 (ATerm t)
  {
    ATerm d_33 = t;
    int e_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_136(t);
        ;
        LocalPopChoice(e_33);
      }
    else
      {
        t = d_33;
        {
          ATerm f_33 = t;
          int g_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_62 = NULL,r_62 = NULL,d_10 = NULL,e_10 = NULL;
              l_62 = t;
              t = o_136(t);
              r_62 = t;
              t = l_62;
              {
                ATerm q_11 (ATerm t)
                {
                  ATerm t_62 = NULL;
                  t = b_63(t);
                  t_62 = t;
                  t = (ATerm) ATmakeAppl(sym__2, t_62, r_62);
                  t = diff_0_0(t);
                  return(t);
                }
                t = p_136(q_11, b_63, s_11, t);
                d_10 = t;
                t = SSL_explode_term(d_10);
                if(match_cons(t, sym__2))
                  {
                    ATerm h_33 = ATgetArgument(t, 0);
                    e_10 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = e_10;
                t = foldr_3_0(t_11, c_12, _id, t);
              }
              ;
              LocalPopChoice(g_33);
            }
          else
            {
              t = f_33;
              {
                ATerm p_10 = NULL,q_10 = NULL;
                p_10 = t;
                t = SSL_explode_term(p_10);
                if(match_cons(t, sym__2))
                  {
                    ATerm i_33 = ATgetArgument(t, 0);
                    q_10 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = q_10;
                t = foldr_3_0(m_12, p_12, b_63, t);
              }
            }
        }
      }
    return(t);
  }
  t = b_63(t);
  return(t);
}
ATerm s_12 (ATerm t)
{
  ATerm z_11 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      z_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, z_11);
  return(t);
}
ATerm t_12 (ATerm t)
{
  ATerm j_33 = t;
  int k_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(k_33);
    }
  else
    {
      t = j_33;
      {
        ATerm a_12 = NULL,b_12 = NULL,d_12 = NULL,e_12 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            d_12 = ATgetArgument(t, 0);
            t = d_12;
            t = free_vars_3_0(x_12, y_12, tboundin_3_0, t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                d_12 = ATgetArgument(t, 0);
                e_12 = ATgetArgument(t, 1);
                a_12 = ATgetArgument(t, 2);
                b_12 = ATgetArgument(t, 3);
                t = a_12;
                t = map_1_0(b_13, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    d_12 = ATgetArgument(t, 0);
                    e_12 = ATgetArgument(t, 1);
                    a_12 = ATgetArgument(t, 2);
                    b_12 = ATgetArgument(t, 3);
                    t = a_12;
                    t = map_1_0(c_13, t);
                  }
                else
                  {
                    if(match_cons(t, sym_Matrix_2))
                      {
                        d_12 = ATgetArgument(t, 0);
                        e_12 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = d_12;
                  }
              }
          }
      }
    }
  return(t);
}
ATerm x_12 (ATerm t)
{
  ATerm l_12 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      l_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, l_12);
  return(t);
}
ATerm y_12 (ATerm t)
{
  ATerm l_33 = t;
  int m_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(m_33);
    }
  else
    {
      t = l_33;
      {
        ATerm n_33 = t;
        int o_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            ;
            LocalPopChoice(o_33);
          }
        else
          {
            t = n_33;
            {
              ATerm r_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  r_12 = ATgetArgument(t, 0);
                  u_12 = ATgetArgument(t, 1);
                  v_12 = ATgetArgument(t, 2);
                  w_12 = ATgetArgument(t, 3);
                  t = v_12;
                  t = map_1_0(z_12, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      r_12 = ATgetArgument(t, 0);
                      u_12 = ATgetArgument(t, 1);
                      v_12 = ATgetArgument(t, 2);
                      w_12 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = v_12;
                  t = map_1_0(a_13, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm z_12 (ATerm t)
{
  ATerm j_13 = NULL;
  ATerm r_33 = t;
  int u_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_13 = ATgetArgument(t, 0);
          {
            ATerm v_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_33);
      t = j_13;
    }
  else
    {
      t = r_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_13;
    }
  return(t);
}
ATerm a_13 (ATerm t)
{
  ATerm a_14 = NULL;
  ATerm w_33 = t;
  int x_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_14 = ATgetArgument(t, 0);
          {
            ATerm y_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_33);
      t = a_14;
    }
  else
    {
      t = w_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_14;
    }
  return(t);
}
ATerm b_13 (ATerm t)
{
  ATerm p_14 = NULL;
  ATerm e_34 = t;
  int g_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_14 = ATgetArgument(t, 0);
          {
            ATerm h_34 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_34);
      t = p_14;
    }
  else
    {
      t = e_34;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_14;
    }
  return(t);
}
ATerm c_13 (ATerm t)
{
  ATerm h_15 = NULL;
  ATerm j_34 = t;
  int k_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_15 = ATgetArgument(t, 0);
          {
            ATerm l_34 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_34);
      t = h_15;
    }
  else
    {
      t = j_34;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_15;
    }
  return(t);
}
ATerm d_13 (ATerm t)
{
  ATerm r_15 = NULL;
  if(match_cons(t, sym__2))
    {
      r_15 = ATgetArgument(t, 0);
      if((r_15 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm e_13 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_m_34;
  return(t);
}
ATerm f_13 (ATerm t)
{
  ATerm s_15 = NULL,t_15 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_15 = ATgetFirst((ATermList) t);
      t_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_15, t_15);
  return(t);
}
ATerm g_13 (ATerm t)
{
  ATerm u_15 = NULL,z_15 = NULL,b_16 = NULL,c_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_34 = ATgetArgument(t, 0);
      if(match_cons(n_34, sym__2))
        {
          u_15 = ATgetArgument(n_34, 0);
          z_15 = ATgetArgument(n_34, 1);
        }
      else
        _fail(t);
      {
        ATerm o_34 = ATgetArgument(t, 1);
        if(match_cons(o_34, sym__2))
          {
            b_16 = ATgetArgument(o_34, 0);
            c_16 = ATgetArgument(o_34, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_16), u_15), (ATerm) ATinsert(CheckATermList(c_16), z_15));
  return(t);
}
ATerm i_13 (ATerm t)
{
  ATerm d_16 = NULL;
  d_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_VarDec_2, d_16, term_f_28), (ATerm) ATmakeAppl(sym_Var_1, d_16));
  return(t);
}
ATerm RowLet_1_0 (ATerm v_0 (ATerm), ATerm t)
{
  ATerm b_67 = NULL,c_67 = NULL,d_67 = NULL;
  b_67 = t;
  if(match_cons(t, sym_Row_2))
    {
      c_67 = ATgetArgument(t, 0);
      d_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_34 = t;
    int q_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL;
        t = d_67;
        {
          ATerm r_34 = t;
          if((PushChoice() == 0))
            {
              t = simple_strategy_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = r_34;
            }
          t = new_0_0(t);
          u_11 = t;
          t = d_67;
          t = free_vars_3_0(s_12, t_12, tvars_matrix_boundin_3_0, t);
          v_11 = t;
          t = v_0(t);
          w_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, v_11, w_11);
          t = m_8(d_13, v_11, w_11, t);
          t = genzip_4_0(e_13, f_13, g_13, i_13, t);
          if(match_cons(t, sym__2))
            {
              x_11 = ATgetArgument(t, 0);
              y_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, u_11, (ATerm)ATempty, x_11, d_67)), (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATempty, c_67, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, u_11), (ATerm)ATempty, y_11)));
        }
        ;
        LocalPopChoice(q_34);
      }
    else
      {
        t = p_34;
        t = d_67;
        t = simple_strategy_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATempty, c_67, d_67));
      }
  }
  return(t);
}
ATerm k_13 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_m_34;
  return(t);
}
ATerm l_13 (ATerm t)
{
  ATerm p_67 = NULL,v_67 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_67 = ATgetFirst((ATermList) t);
      v_67 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_67, v_67);
  return(t);
}
ATerm m_13 (ATerm t)
{
  ATerm w_67 = NULL,x_67 = NULL,y_67 = NULL,z_67 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_34 = ATgetArgument(t, 0);
      if(match_cons(s_34, sym__2))
        {
          w_67 = ATgetArgument(s_34, 0);
          x_67 = ATgetArgument(s_34, 1);
        }
      else
        _fail(t);
      {
        ATerm t_34 = ATgetArgument(t, 1);
        if(match_cons(t_34, sym__2))
          {
            y_67 = ATgetArgument(t_34, 0);
            z_67 = ATgetArgument(t_34, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_67), w_67), (ATerm) ATinsert(CheckATermList(z_67), x_67));
  return(t);
}
ATerm w_8 (ATerm y_99, ATerm x_99, ATerm t)
{
  ATerm h_67 = NULL,i_67 = NULL;
  t = x_99;
  {
    ATerm n_13 (ATerm t)
    {
      ATerm o_13 (ATerm t)
      {
        t = y_99;
        return(t);
      }
      t = RowLet_1_0(o_13, t);
      return(t);
    }
    t = genzip_4_0(k_13, l_13, m_13, n_13, t);
    t = _2_0(concat_0_0, _id, t);
    if(match_cons(t, sym__2))
      {
        h_67 = ATgetArgument(t, 0);
        i_67 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym_Let_2, h_67, (ATerm) ATmakeAppl(sym_Scope_2, y_99, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATinsert(ATempty, term_u_34))), (ATerm) ATmakeAppl(sym_Matrix_1, i_67))));
  }
  return(t);
}
ATerm x_8 (ATerm u_133 (ATerm), ATerm x_64, ATerm v_64, ATerm t)
{
  ATerm a_68 = NULL,b_68 = NULL,c_68 = NULL,d_68 = NULL,e_68 = NULL,f_68 = NULL;
  a_68 = t;
  t = u_133(t);
  b_68 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_68, x_64, v_64);
  t = g_11(b_68, x_64, v_64, t);
  {
    ATerm v_34 = t;
    int w_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_68 = NULL;
        t = term_x_34;
        g_68 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_68, term_x_34);
        t = f_11(b_68, g_68, t);
        ;
        LocalPopChoice(w_34);
      }
    else
      {
        t = v_34;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_68 = ATgetFirst((ATermList) t);
        d_68 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_x_34;
    e_68 = t;
    t = (ATerm) ATinsert(CheckATermList(d_68), (ATerm) ATinsert(CheckATermList(c_68), x_64));
    f_68 = t;
    t = SSL_table_put(b_68, e_68, f_68);
    t = a_68;
  }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm p_13 (ATerm t)
{
  ATerm i_68 = NULL,j_68 = NULL,k_68 = NULL;
  if(match_cons(t, sym_Row_3))
    {
      ATerm y_34 = ATgetArgument(t, 0);
      if(((ATgetType(y_34) == AT_LIST) && !(ATisEmpty(y_34))))
        {
          ATerm z_34 = ATgetFirst((ATermList) y_34);
          if(match_cons(z_34, sym_As_2))
            {
              ATerm a_35 = ATgetArgument(z_34, 0);
              ATerm i_35 = ATgetArgument(z_34, 1);
              if(!(match_cons(i_35, sym_Wld_0)))
                _fail(t);
            }
          else
            _fail(t);
          i_68 = (ATerm) ATgetNext((ATermList) y_34);
        }
      else
        _fail(t);
      j_68 = ATgetArgument(t, 1);
      k_68 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Row_3, i_68, j_68, k_68);
  return(t);
}
ATerm default_state_0_0 (ATerm t)
{
  ATerm h_68 = NULL;
  t = filter_1_0(p_13, t);
  h_68 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, h_68);
  return(t);
}
ATerm q_13 (ATerm t)
{
  ATerm v_69 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, v_69), term_l_35);
  return(t);
}
ATerm r_13 (ATerm t)
{
  t = term_u_34;
  return(t);
}
ATerm s_13 (ATerm t)
{
  ATerm l_17 = NULL,m_17 = NULL;
  if(match_cons(t, sym__2))
    {
      l_17 = ATgetArgument(t, 0);
      m_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_11(l_17, m_17, t);
  return(t);
}
ATerm t_13 (ATerm t)
{
  t = term_n_21;
  return(t);
}
ATerm MatchCons_2_0 (ATerm q_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm s_69 = NULL,t_69 = NULL,u_69 = NULL;
  s_69 = t;
  if(match_cons(t, sym_Wld_0))
    {
      t = s_69;
      t = t_0(t);
      t = map_1_0(q_13, t);
    }
  else
    {
      if(match_cons(t, sym_Int_1))
        {
          t_69 = ATgetArgument(t, 0);
          t = s_69;
          t = q_0(t);
          if(match_cons(t, sym_Int_1))
            {
              if((t_69 != ATgetArgument(t, 0)))
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
              t_69 = ATgetArgument(t, 0);
              t = s_69;
              t = q_0(t);
              if(match_cons(t, sym_Real_1))
                {
                  if((t_69 != ATgetArgument(t, 0)))
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
                  t_69 = ATgetArgument(t, 0);
                  t = s_69;
                  t = q_0(t);
                  if(match_cons(t, sym_Str_1))
                    {
                      if((t_69 != ATgetArgument(t, 0)))
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
                  ATerm j_17 = NULL,k_17 = NULL;
                  if(match_cons(t, sym_Op_2))
                    {
                      t_69 = ATgetArgument(t, 0);
                      u_69 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = s_69;
                  t = q_0(t);
                  if(match_cons(t, sym_Fun_2))
                    {
                      if((t_69 != ATgetArgument(t, 0)))
                        {
                          _fail(ATgetArgument(t, 0));
                        }
                      j_17 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = u_69;
                  t = foldr_3_0(r_13, s_13, t_13, t);
                  k_17 = t;
                  t = j_17;
                  if((k_17 != t))
                    {
                      _fail(t);
                    }
                  t = u_69;
                }
            }
        }
    }
  return(t);
}
ATerm z_8 (ATerm g_150 (ATerm), ATerm l_98, ATerm i_98, ATerm j_98, ATerm k_98, ATerm t)
{
  ATerm b_70 = NULL,c_70 = NULL;
  t = l_98;
  t = g_150(t);
  b_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_70, j_98);
  t = conc_0_0(t);
  c_70 = t;
  t = (ATerm) ATmakeAppl(sym_Row_3, i_98, c_70, k_98);
  return(t);
}
ATerm a_9 (ATerm e_98, ATerm f_98, ATerm g_98, ATerm t)
{
  ATerm d_70 = NULL;
  t = e_98;
  {
    ATerm u_13 (ATerm t)
    {
      ATerm e_70 = NULL,f_70 = NULL,g_70 = NULL,h_70 = NULL;
      ATerm v_13 (ATerm t)
      {
        ATerm y_13 (ATerm t)
        {
          t = f_98;
          return(t);
        }
        ATerm z_13 (ATerm t)
        {
          t = g_98;
          return(t);
        }
        t = MatchCons_2_0(y_13, z_13, t);
        return(t);
      }
      if(match_cons(t, sym_Row_3))
        {
          ATerm q_35 = ATgetArgument(t, 0);
          if(((ATgetType(q_35) == AT_LIST) && !(ATisEmpty(q_35))))
            {
              ATerm r_35 = ATgetFirst((ATermList) q_35);
              if(match_cons(r_35, sym_As_2))
                {
                  ATerm s_35 = ATgetArgument(r_35, 0);
                  if(((e_70 != NULL) && (e_70 != ATgetArgument(r_35, 1))))
                    _fail(ATgetArgument(r_35, 1));
                  else
                    e_70 = ATgetArgument(r_35, 1);
                }
              else
                _fail(t);
              if(((f_70 != NULL) && (f_70 != (ATerm) ATgetNext((ATermList) q_35))))
                _fail((ATerm) ATgetNext((ATermList) q_35));
              else
                f_70 = (ATerm) ATgetNext((ATermList) q_35);
            }
          else
            _fail(t);
          if(((g_70 != NULL) && (g_70 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            g_70 = ATgetArgument(t, 1);
          if(((h_70 != NULL) && (h_70 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            h_70 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = z_8(v_13, not_null(e_70), not_null(f_70), not_null(g_70), not_null(h_70), t);
      return(t);
    }
    t = filter_1_0(u_13, t);
    d_70 = t;
    t = (ATerm) ATmakeAppl(sym_Alt_3, f_98, g_98, (ATerm) ATmakeAppl(sym_Matrix_1, d_70));
  }
  return(t);
}
ATerm filter_1_0 (ATerm y_133 (ATerm), ATerm t)
{
  ATerm t_35 = t;
  int u_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(u_35);
    }
  else
    {
      t = t_35;
      {
        ATerm v_35 = t;
        int w_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_14 (ATerm t)
            {
              t = filter_1_0(y_133, t);
              return(t);
            }
            t = Cons_2_0(y_133, b_14, t);
            ;
            LocalPopChoice(w_35);
          }
        else
          {
            t = v_35;
            {
              ATerm l_70 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm y_35 = ATgetFirst((ATermList) t);
                  l_70 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = l_70;
              t = filter_1_0(y_133, t);
            }
          }
      }
    }
  return(t);
}
ATerm listtd_1_0 (ATerm c_129 (ATerm), ATerm t)
{
  ATerm n_70 (ATerm t)
  {
    t = c_129(t);
    {
      ATerm z_35 = t;
      int a_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(a_36);
        }
      else
        {
          t = z_35;
          t = Cons_2_0(_id, n_70, t);
        }
    }
    return(t);
  }
  t = n_70(t);
  return(t);
}
ATerm c_14 (ATerm t)
{
  t = term_u_34;
  return(t);
}
ATerm d_14 (ATerm t)
{
  ATerm u_71 = NULL,v_71 = NULL;
  if(match_cons(t, sym__2))
    {
      u_71 = ATgetArgument(t, 0);
      v_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_11(u_71, v_71, t);
  return(t);
}
ATerm e_14 (ATerm t)
{
  t = term_n_21;
  return(t);
}
ATerm f_14 (ATerm t)
{
  ATerm w_71 = NULL;
  if(match_cons(t, sym_As_2))
    {
      ATerm b_36 = ATgetArgument(t, 0);
      if(match_cons(b_36, sym_Off_1))
        {
          w_71 = ATgetArgument(b_36, 0);
        }
      else
        _fail(t);
      {
        ATerm c_36 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, w_71);
  return(t);
}
ATerm ConsArgs_0_0 (ATerm t)
{
  ATerm s_70 = NULL,t_70 = NULL,u_70 = NULL,w_70 = NULL,x_70 = NULL,y_70 = NULL;
  s_70 = t;
  if(match_cons(t, sym_Row_3))
    {
      t_70 = ATgetArgument(t, 0);
      {
        ATerm d_36 = ATgetArgument(t, 1);
      }
      {
        ATerm e_36 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = t_70;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_70 = ATgetFirst((ATermList) t);
      {
        ATerm f_36 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = u_70;
  if(match_cons(t, sym_As_2))
    {
      ATerm g_36 = ATgetArgument(t, 0);
      w_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_70;
  if(match_cons(t, sym_Str_1))
    {
      x_70 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Str_1, x_70), (ATerm) ATempty);
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          x_70 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Real_1, x_70), (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              x_70 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Int_1, x_70), (ATerm) ATempty);
            }
          else
            {
              ATerm m_71 = NULL,t_71 = NULL;
              if(match_cons(t, sym_Op_2))
                {
                  x_70 = ATgetArgument(t, 0);
                  y_70 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = y_70;
              t = foldr_3_0(c_14, d_14, e_14, t);
              m_71 = t;
              t = y_70;
              t = map_1_0(f_14, t);
              t_71 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Fun_2, x_70, m_71), t_71);
            }
        }
    }
  return(t);
}
ATerm i_14 (ATerm t)
{
  ATerm h_36 = t;
  int i_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_72 = NULL,c_72 = NULL,k_72 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_72 = ATgetFirst((ATermList) t);
          c_72 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_72;
      {
        ATerm j_14 (ATerm t)
        {
          ATerm j_36 = t;
          if((PushChoice() == 0))
            {
              if((b_72 != t))
                {
                  _fail(t);
                }
              PopChoice();
              _fail(t);
            }
          else
            {
              t = j_36;
            }
          return(t);
        }
        t = filter_1_0(j_14, t);
        k_72 = t;
        t = (ATerm) ATinsert(CheckATermList(k_72), b_72);
      }
      ;
      LocalPopChoice(i_36);
    }
  else
    {
      t = h_36;
    }
  return(t);
}
ATerm outedges_0_0 (ATerm t)
{
  t = filter_1_0(ConsArgs_0_0, t);
  t = listtd_1_0(i_14, t);
  return(t);
}
ATerm r_73 (ATerm r_72, ATerm t)
{
  ATerm z_72 = NULL;
  t = SSL_explode_string(r_72);
  {
    ATerm k_36 = t;
    int l_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_73 (ATerm t)
        {
          ATerm s_36 = t;
          int u_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2_0(_id, s_73, t);
              ;
              LocalPopChoice(u_36);
            }
          else
            {
              t = s_36;
              t = Cons_2_0(k_14, m_14, t);
            }
          return(t);
        }
        t = s_73(t);
        ;
        LocalPopChoice(l_36);
      }
    else
      {
        t = k_36;
        t = (ATerm) ATempty;
      }
    z_72 = t;
    t = SSL_implode_string(z_72);
  }
  return(t);
}
ATerm k_14 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
    _fail(t);
  return(t);
}
ATerm m_14 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm a_73 = NULL,b_73 = NULL,c_73 = NULL,e_73 = NULL,f_73 = NULL,p_73 = NULL;
  p_73 = t;
  {
    ATerm v_36 = t;
    int w_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_73 = ATgetFirst((ATermList) t);
            {
              ATerm y_36 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        LocalPopChoice(w_36);
        t = a_73;
        {
          ATerm z_36 = t;
          int a_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_Row_3))
                {
                  b_73 = ATgetArgument(t, 0);
                  {
                    ATerm b_37 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm c_37 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(a_37);
              t = b_73;
              {
                ATerm d_37 = t;
                int e_37 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        c_73 = ATgetFirst((ATermList) t);
                        {
                          ATerm f_37 = (ATerm) ATgetNext((ATermList) t);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(e_37);
                    t = c_73;
                    {
                      ATerm g_37 = t;
                      int h_37 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_As_2))
                            {
                              e_73 = ATgetArgument(t, 0);
                              {
                                ATerm i_37 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(h_37);
                          t = e_73;
                          if(match_cons(t, sym_Off_1))
                            {
                              f_73 = ATgetArgument(t, 0);
                              {
                                ATerm j_37 = t;
                                int k_37 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = f_73;
                                    ;
                                    LocalPopChoice(k_37);
                                  }
                                else
                                  {
                                    t = j_37;
                                    t = r_73(p_73, t);
                                  }
                              }
                            }
                          else
                            {
                              t = r_73(p_73, t);
                            }
                        }
                      else
                        {
                          t = g_37;
                          t = r_73(p_73, t);
                        }
                    }
                  }
                else
                  {
                    t = d_37;
                    t = r_73(p_73, t);
                  }
              }
            }
          else
            {
              t = z_36;
              t = r_73(p_73, t);
            }
        }
      }
    else
      {
        t = v_36;
        t = r_73(p_73, t);
      }
  }
  return(t);
}
ATerm n_14 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_37 = ATgetArgument(t, 0);
      ATerm m_37 = ATgetArgument(t, 1);
      if(((ATgetType(m_37) != AT_LIST) || !(ATisEmpty(m_37))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm o_14 (ATerm t)
{
  ATerm b_74 = NULL,c_74 = NULL,d_74 = NULL;
  if(match_cons(t, sym__2))
    {
      b_74 = ATgetArgument(t, 0);
      {
        ATerm n_37 = ATgetArgument(t, 1);
        if(((ATgetType(n_37) == AT_LIST) && !(ATisEmpty(n_37))))
          {
            c_74 = ATgetFirst((ATermList) n_37);
            d_74 = (ATerm) ATgetNext((ATermList) n_37);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_74, c_74), (ATerm) ATmakeAppl(sym__2, b_74, d_74));
  return(t);
}
ATerm q_14 (ATerm t)
{
  ATerm f_74 = NULL,g_74 = NULL;
  if(match_cons(t, sym__2))
    {
      f_74 = ATgetArgument(t, 0);
      g_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_74), f_74);
  return(t);
}
ATerm r_14 (ATerm t)
{
  ATerm h_74 = NULL,i_74 = NULL,j_74 = NULL;
  if(match_cons(t, sym__2))
    {
      h_74 = ATgetArgument(t, 0);
      {
        ATerm o_37 = ATgetArgument(t, 1);
        if(match_cons(o_37, sym__2))
          {
            i_74 = ATgetArgument(o_37, 0);
            j_74 = ATgetArgument(o_37, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = a_9(h_74, i_74, j_74, t);
  return(t);
}
ATerm s_14 (ATerm t)
{
  t = term_p_37;
  return(t);
}
ATerm d_9 (ATerm r_99, ATerm t)
{
  ATerm t_73 = NULL,u_73 = NULL,v_73 = NULL,w_73 = NULL,x_73 = NULL,y_73 = NULL,z_73 = NULL;
  t = r_99;
  t = get_path_0_0(t);
  t_73 = t;
  t = r_99;
  t = outedges_0_0(t);
  u_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_99, u_73);
  t = genzip_4_0(n_14, o_14, q_14, r_14, t);
  v_73 = t;
  t = r_99;
  t = default_state_0_0(t);
  w_73 = t;
  t = new_0_0(t);
  x_73 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, r_99);
  y_73 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_s_37, x_73);
  z_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Matrix_1, r_99), (ATerm) ATmakeAppl(sym_Defined_2, term_s_37, x_73));
  t = x_8(s_14, y_73, z_73, t);
  t = (ATerm) ATmakeAppl(sym_Case_4, x_73, (ATerm)ATmakeAppl(sym_Var_1, t_73), v_73, w_73);
  return(t);
}
ATerm t_14 (ATerm t)
{
  t = Row_3_0(u_14, _id, _id, t);
  return(t);
}
ATerm u_14 (ATerm t)
{
  t = Cons_2_0(v_14, _id, t);
  return(t);
}
ATerm v_14 (ATerm t)
{
  t = As_2_0(_id, w_14, t);
  return(t);
}
ATerm w_14 (ATerm t)
{
  ATerm t_37 = t;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = t_37;
    }
  return(t);
}
ATerm x_14 (ATerm t)
{
  ATerm m_74 = NULL,n_74 = NULL,p_74 = NULL,q_74 = NULL;
  if(match_cons(t, sym_Row_3))
    {
      m_74 = ATgetArgument(t, 0);
      {
        ATerm u_37 = ATgetArgument(t, 1);
        if(((ATgetType(u_37) == AT_LIST) && !(ATisEmpty(u_37))))
          {
            n_74 = ATgetFirst((ATermList) u_37);
            p_74 = (ATerm) ATgetNext((ATermList) u_37);
          }
        else
          _fail(t);
      }
      q_74 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATinsert(CheckATermList(m_74), n_74), p_74, q_74);
  return(t);
}
ATerm f_9 (ATerm h_99, ATerm t)
{
  ATerm l_74 = NULL;
  t = h_99;
  {
    ATerm v_37 = t;
    if((PushChoice() == 0))
      {
        t = map_1_0(t_14, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_37;
      }
    t = h_99;
    t = map_1_0(x_14, t);
    l_74 = t;
    t = (ATerm) ATmakeAppl(sym_Matrix_1, l_74);
  }
  return(t);
}
ATerm As_2_0 (ATerm y_106 (ATerm), ATerm z_106 (ATerm), ATerm t)
{
  ATerm s_74 = NULL,t_74 = NULL,u_74 = NULL,w_74 = NULL,x_74 = NULL,y_74 = NULL,r_2 = NULL,s_2 = NULL;
  y_74 = t;
  if(match_cons(t, sym_As_2))
    {
      t_74 = ATgetArgument(t, 0);
      u_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_74);
  s_74 = t;
  t = t_74;
  t = y_106(t);
  w_74 = t;
  t = u_74;
  t = z_106(t);
  x_74 = t;
  s_2 = t;
  t = (ATerm) ATmakeAppl(sym_As_2, w_74, x_74);
  r_2 = t;
  t = SSLsetAnnotations(r_2, s_74);
  return(t);
}
ATerm Row_3_0 (ATerm p_112 (ATerm), ATerm q_112 (ATerm), ATerm r_112 (ATerm), ATerm t)
{
  ATerm b_75 = NULL,c_75 = NULL,d_75 = NULL,e_75 = NULL,f_75 = NULL,g_75 = NULL,h_75 = NULL,i_75 = NULL,t_2 = NULL,u_2 = NULL;
  i_75 = t;
  if(match_cons(t, sym_Row_3))
    {
      c_75 = ATgetArgument(t, 0);
      d_75 = ATgetArgument(t, 1);
      e_75 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_75);
  b_75 = t;
  t = c_75;
  t = p_112(t);
  f_75 = t;
  t = d_75;
  t = q_112(t);
  g_75 = t;
  t = e_75;
  t = r_112(t);
  h_75 = t;
  u_2 = t;
  t = (ATerm) ATmakeAppl(sym_Row_3, f_75, g_75, h_75);
  t_2 = t;
  t = SSLsetAnnotations(t_2, b_75);
  return(t);
}
ATerm y_14 (ATerm t)
{
  t = Row_3_0(_id, z_14, _id, t);
  return(t);
}
ATerm z_14 (ATerm t)
{
  ATerm m_75 = NULL;
  t = Cons_2_0(c_15, _id, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm w_37 = ATgetFirst((ATermList) t);
      m_75 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = m_75;
  return(t);
}
ATerm c_15 (ATerm t)
{
  t = As_2_0(_id, e_15, t);
  return(t);
}
ATerm e_15 (ATerm t)
{
  if(!(match_cons(t, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm h_9 (ATerm f_99, ATerm t)
{
  ATerm l_75 = NULL;
  t = f_99;
  t = map_1_0(y_14, t);
  l_75 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, l_75);
  return(t);
}
ATerm repeat_1_0 (ATerm e_138 (ATerm), ATerm t)
{
  ATerm n_75 (ATerm t)
  {
    ATerm x_37 = t;
    int a_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_138(t);
        t = n_75(t);
        ;
        LocalPopChoice(a_38);
      }
    else
      {
        t = x_37;
      }
    return(t);
  }
  t = n_75(t);
  return(t);
}
ATerm j_9 (ATerm k_65, ATerm l_65, ATerm t)
{
  ATerm o_75 = NULL,p_75 = NULL;
  o_75 = t;
  {
    ATerm b_38 = t;
    int c_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, k_65, l_65);
        t = f_11(k_65, l_65, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm d_38 = ATgetFirst((ATermList) t);
            p_75 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(c_38);
        t = SSL_table_put(k_65, l_65, p_75);
        t = (ATerm) ATmakeAppl(sym__3, k_65, l_65, p_75);
      }
    else
      {
        t = b_38;
        t = SSL_table_remove(k_65, l_65);
        t = (ATerm) ATmakeAppl(sym__2, k_65, l_65);
      }
    t = o_75;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm r_133 (ATerm), ATerm t)
{
  ATerm q_75 = NULL,r_75 = NULL,s_75 = NULL,t_75 = NULL,u_75 = NULL;
  q_75 = t;
  t = r_133(t);
  r_75 = t;
  {
    ATerm e_38 = t;
    int f_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_75 = NULL;
        t = term_x_34;
        v_75 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_75, term_x_34);
        t = f_11(r_75, v_75, t);
        ;
        LocalPopChoice(f_38);
      }
    else
      {
        t = e_38;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_75 = ATgetFirst((ATermList) t);
        s_75 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_x_34;
    u_75 = t;
    t = SSL_table_put(r_75, u_75, s_75);
    t = t_75;
    {
      ATerm f_15 (ATerm t)
      {
        ATerm w_75 = NULL;
        w_75 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_75, w_75);
        t = j_9(r_75, w_75, t);
        return(t);
      }
      t = map_1_0(f_15, t);
      t = q_75;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm z_124 (ATerm), ATerm a_125 (ATerm), ATerm t)
{
  ATerm g_38 = t;
  int h_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = z_124(t);
      t = a_125(t);
      ;
      LocalPopChoice(h_38);
    }
  else
    {
      t = g_38;
      t = a_125(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm q_133 (ATerm), ATerm t)
{
  ATerm z_75 = NULL,b_76 = NULL,c_76 = NULL,e_76 = NULL,f_76 = NULL;
  z_75 = t;
  t = q_133(t);
  b_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_76, term_x_34);
  {
    ATerm i_38 = t;
    int j_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_76 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm k_38 = ATgetArgument(t, 0);
            ATerm l_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_x_34;
        m_76 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_76, term_x_34);
        t = f_11(b_76, m_76, t);
        ;
        LocalPopChoice(j_38);
      }
    else
      {
        t = i_38;
        t = (ATerm) ATempty;
      }
    c_76 = t;
    t = term_x_34;
    e_76 = t;
    t = (ATerm) ATinsert(CheckATermList(c_76), (ATerm) ATempty);
    f_76 = t;
    t = SSL_table_put(b_76, e_76, f_76);
    t = z_75;
  }
  return(t);
}
ATerm scope_2_0 (ATerm s_133 (ATerm), ATerm t_133 (ATerm), ATerm t)
{
  t = begin_scope_1_0(s_133, t);
  {
    ATerm g_15 (ATerm t)
    {
      t = end_scope_1_0(s_133, t);
      return(t);
    }
    t = restore_always_2_0(t_133, g_15, t);
  }
  return(t);
}
ATerm at_end_1_0 (ATerm j_128 (ATerm), ATerm t)
{
  ATerm x_76 (ATerm t)
  {
    ATerm m_38 = t;
    int n_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, x_76, t);
        ;
        LocalPopChoice(n_38);
      }
    else
      {
        t = m_38;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = j_128(t);
      }
    return(t);
  }
  t = x_76(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm o_38 = t;
  int p_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(p_38);
    }
  else
    {
      t = o_38;
      {
        ATerm p_76 = NULL,r_76 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_76 = ATgetFirst((ATermList) t);
            r_76 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = p_76;
        {
          ATerm i_15 (ATerm t)
          {
            t = r_76;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(i_15, t);
        }
      }
    }
  return(t);
}
ATerm l_77 (ATerm b_77, ATerm t)
{
  ATerm f_77 = NULL;
  t = SSL_explode_term(b_77);
  if(match_cons(t, sym__2))
    {
      ATerm q_38 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_38) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      f_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_77;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm g_77 = NULL,h_77 = NULL,i_77 = NULL;
  i_77 = t;
  if(match_cons(t, sym__2))
    {
      g_77 = ATgetArgument(t, 0);
      h_77 = ATgetArgument(t, 1);
      {
        ATerm r_38 = t;
        int s_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_15 (ATerm t)
            {
              t = h_77;
              return(t);
            }
            t = g_77;
            t = at_end_1_0(j_15, t);
            ;
            LocalPopChoice(s_38);
          }
        else
          {
            t = r_38;
            t = l_77(i_77, t);
          }
      }
    }
  else
    {
      t = l_77(i_77, t);
    }
  return(t);
}
ATerm k_15 (ATerm t)
{
  ATerm m_79 = NULL;
  if(match_cons(t, sym__2))
    {
      m_79 = ATgetArgument(t, 0);
      if((m_79 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm l_15 (ATerm t)
{
  ATerm w_79 = NULL;
  if(match_cons(t, sym__2))
    {
      w_79 = ATgetArgument(t, 0);
      if((w_79 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm o_15 (ATerm t)
{
  ATerm d_80 = NULL;
  if(match_cons(t, sym__2))
    {
      d_80 = ATgetArgument(t, 0);
      if((d_80 != ATgetArgument(t, 1)))
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
  ATerm l_80 = NULL;
  if(match_cons(t, sym__2))
    {
      l_80 = ATgetArgument(t, 0);
      if((l_80 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm q_15 (ATerm t)
{
  ATerm v_80 = NULL;
  if(match_cons(t, sym__2))
    {
      v_80 = ATgetArgument(t, 0);
      if((v_80 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm g_16 (ATerm t)
{
  ATerm c_81 = NULL;
  if(match_cons(t, sym__2))
    {
      c_81 = ATgetArgument(t, 0);
      if((c_81 != ATgetArgument(t, 1)))
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
  ATerm f_78 = NULL,g_78 = NULL,i_78 = NULL,j_78 = NULL,m_78 = NULL,o_78 = NULL,p_78 = NULL,q_78 = NULL,r_78 = NULL,s_78 = NULL,u_78 = NULL,v_78 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      m_78 = ATgetArgument(t, 0);
      v_78 = ATgetArgument(t, 1);
      t = m_78;
      if(match_cons(t, sym_Matrix_2))
        {
          o_78 = ATgetArgument(t, 0);
          p_78 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = v_78;
      if(match_cons(t, sym_Choice_2))
        {
          i_78 = ATgetArgument(t, 0);
          j_78 = ATgetArgument(t, 1);
          {
            ATerm j_79 = NULL,k_79 = NULL;
            t = i_78;
            if(match_cons(t, sym_Matrix_2))
              {
                f_78 = ATgetArgument(t, 0);
                g_78 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, o_78, f_78);
            t = n_10(k_15, o_78, f_78, t);
            j_79 = t;
            t = (ATerm) ATmakeAppl(sym__2, p_78, g_78);
            t = conc_0_0(t);
            k_79 = t;
            t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, j_79, k_79), j_78);
          }
        }
      else
        {
          if(match_cons(t, sym_LChoice_2))
            {
              i_78 = ATgetArgument(t, 0);
              j_78 = ATgetArgument(t, 1);
              {
                ATerm u_79 = NULL,v_79 = NULL;
                t = i_78;
                if(match_cons(t, sym_Matrix_2))
                  {
                    f_78 = ATgetArgument(t, 0);
                    g_78 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, o_78, f_78);
                t = n_10(l_15, o_78, f_78, t);
                u_79 = t;
                t = (ATerm) ATmakeAppl(sym__2, p_78, g_78);
                t = conc_0_0(t);
                v_79 = t;
                t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, u_79, v_79), j_78);
              }
            }
          else
            {
              ATerm b_80 = NULL,c_80 = NULL;
              if(match_cons(t, sym_Matrix_2))
                {
                  i_78 = ATgetArgument(t, 0);
                  j_78 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, o_78, i_78);
              t = n_10(o_15, o_78, i_78, t);
              b_80 = t;
              t = (ATerm) ATmakeAppl(sym__2, p_78, j_78);
              t = conc_0_0(t);
              c_80 = t;
              t = (ATerm) ATmakeAppl(sym_Matrix_2, b_80, c_80);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Choice_2))
        {
          m_78 = ATgetArgument(t, 0);
          v_78 = ATgetArgument(t, 1);
          t = m_78;
          if(match_cons(t, sym_Matrix_2))
            {
              o_78 = ATgetArgument(t, 0);
              p_78 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = v_78;
          if(match_cons(t, sym_LChoice_2))
            {
              i_78 = ATgetArgument(t, 0);
              j_78 = ATgetArgument(t, 1);
              {
                ATerm j_80 = NULL,k_80 = NULL;
                t = i_78;
                if(match_cons(t, sym_Matrix_2))
                  {
                    f_78 = ATgetArgument(t, 0);
                    g_78 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, o_78, f_78);
                t = n_10(p_15, o_78, f_78, t);
                j_80 = t;
                t = (ATerm) ATmakeAppl(sym__2, p_78, g_78);
                t = conc_0_0(t);
                k_80 = t;
                t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, j_80, k_80), j_78);
              }
            }
          else
            {
              if(match_cons(t, sym_Choice_2))
                {
                  i_78 = ATgetArgument(t, 0);
                  j_78 = ATgetArgument(t, 1);
                  {
                    ATerm t_80 = NULL,u_80 = NULL;
                    t = i_78;
                    if(match_cons(t, sym_Matrix_2))
                      {
                        f_78 = ATgetArgument(t, 0);
                        g_78 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__2, o_78, f_78);
                    t = n_10(q_15, o_78, f_78, t);
                    t_80 = t;
                    t = (ATerm) ATmakeAppl(sym__2, p_78, g_78);
                    t = conc_0_0(t);
                    u_80 = t;
                    t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Matrix_2, t_80, u_80), j_78);
                  }
                }
              else
                {
                  ATerm a_81 = NULL,b_81 = NULL;
                  if(match_cons(t, sym_Matrix_2))
                    {
                      i_78 = ATgetArgument(t, 0);
                      j_78 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, o_78, i_78);
                  t = n_10(g_16, o_78, i_78, t);
                  a_81 = t;
                  t = (ATerm) ATmakeAppl(sym__2, p_78, j_78);
                  t = conc_0_0(t);
                  b_81 = t;
                  t = (ATerm) ATmakeAppl(sym_Matrix_2, a_81, b_81);
                }
            }
        }
      else
        {
          if(match_cons(t, sym_Scope_2))
            {
              m_78 = ATgetArgument(t, 0);
              v_78 = ATgetArgument(t, 1);
              {
                ATerm g_81 = NULL;
                t = v_78;
                if(match_cons(t, sym_Matrix_2))
                  {
                    i_78 = ATgetArgument(t, 0);
                    j_78 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = j_78;
                {
                  ATerm h_16 (ATerm t)
                  {
                    ATerm h_81 = NULL,i_81 = NULL;
                    if(match_cons(t, sym_Row_2))
                      {
                        h_81 = ATgetArgument(t, 0);
                        i_81 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Row_2, h_81, (ATerm) ATmakeAppl(sym_Scope_2, m_78, i_81));
                    return(t);
                  }
                  t = map_1_0(h_16, t);
                  g_81 = t;
                  t = (ATerm) ATmakeAppl(sym_Matrix_2, i_78, g_81);
                }
              }
            }
          else
            {
              if(match_cons(t, sym_Seq_2))
                {
                  m_78 = ATgetArgument(t, 0);
                  v_78 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = m_78;
              if(match_cons(t, sym_Matrix_2))
                {
                  o_78 = ATgetArgument(t, 0);
                  p_78 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = p_78;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  q_78 = ATgetFirst((ATermList) t);
                  u_78 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = q_78;
              if(match_cons(t, sym_Row_2))
                {
                  r_78 = ATgetArgument(t, 0);
                  s_78 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = u_78;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Matrix_2, o_78, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, r_78, (ATerm) ATmakeAppl(sym_Seq_2, s_78, v_78))));
            }
        }
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm t_121 (ATerm), ATerm t)
{
  ATerm i_16 (ATerm t)
  {
    t = bottomup_1_0(t_121, t);
    return(t);
  }
  t = SRTS_all(i_16, t);
  t = t_121(t);
  return(t);
}
ATerm m_10 (ATerm y_129 (ATerm), ATerm z_129 (ATerm), ATerm a_60, ATerm z_59, ATerm t)
{
  t = z_129(t);
  {
    ATerm j_16 (ATerm t)
    {
      ATerm n_81 = NULL;
      n_81 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_60, n_81);
      t = y_129(t);
      return(t);
    }
    t = fetch_1_0(j_16, t);
    t = z_59;
  }
  return(t);
}
ATerm n_10 (ATerm v_129 (ATerm), ATerm w_59, ATerm v_59, ATerm t)
{
  t = w_59;
  {
    ATerm u_81 (ATerm t)
    {
      ATerm t_38 = t;
      int x_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = v_59;
          ;
          LocalPopChoice(x_38);
        }
      else
        {
          t = t_38;
          {
            ATerm y_38 = t;
            int z_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_81 = NULL,q_81 = NULL,r_81 = NULL;
                p_81 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    q_81 = ATgetFirst((ATermList) t);
                    r_81 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = p_81;
                {
                  ATerm k_16 (ATerm t)
                  {
                    t = v_59;
                    return(t);
                  }
                  t = m_10(v_129, k_16, q_81, r_81, t);
                  t = u_81(t);
                }
                ;
                LocalPopChoice(z_38);
              }
            else
              {
                t = y_38;
                t = Cons_2_0(_id, u_81, t);
              }
          }
        }
      return(t);
    }
    t = u_81(t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm l_132 (ATerm), ATerm m_132 (ATerm), ATerm n_132 (ATerm), ATerm t)
{
  ATerm a_39 = t;
  int c_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = l_132(t);
      ;
      LocalPopChoice(c_39);
    }
  else
    {
      t = a_39;
      {
        ATerm x_81 = NULL,y_81 = NULL,b_82 = NULL,c_82 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_81 = ATgetFirst((ATermList) t);
            y_81 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = x_81;
        t = n_132(t);
        b_82 = t;
        t = y_81;
        t = foldr_3_0(l_132, m_132, n_132, t);
        c_82 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_82, c_82);
        t = m_132(t);
      }
    }
  return(t);
}
ATerm l_16 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm p_131 (ATerm), ATerm q_131 (ATerm), ATerm t)
{
  ATerm f_39 = t;
  int g_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_82 = NULL;
      t = p_131(t);
      f_82 = t;
      t = (ATerm) ATinsert(ATempty, f_82);
      ;
      LocalPopChoice(g_39);
    }
  else
    {
      t = f_39;
      {
        ATerm r_17 = NULL,s_17 = NULL;
        r_17 = t;
        t = SSL_explode_term(r_17);
        if(match_cons(t, sym__2))
          {
            ATerm h_39 = ATgetArgument(t, 0);
            s_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_17;
        {
          ATerm n_16 (ATerm t)
          {
            t = collect_om_2_0(p_131, q_131, t);
            return(t);
          }
          t = foldr_3_0(l_16, q_131, n_16, t);
        }
      }
    }
  return(t);
}
ATerm CollectSubst_0_0 (ATerm t)
{
  ATerm u_82 = NULL,b_83 = NULL,c_83 = NULL,d_83 = NULL,e_83 = NULL;
  if(match_cons(t, sym_As_2))
    {
      b_83 = ATgetArgument(t, 0);
      d_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_83;
  if(match_cons(t, sym_Var_1))
    {
      c_83 = ATgetArgument(t, 0);
      t = d_83;
      if(match_cons(t, sym_As_2))
        {
          e_83 = ATgetArgument(t, 0);
          {
            ATerm i_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = e_83;
      if(match_cons(t, sym_Off_1))
        {
          u_82 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, c_83), (ATerm) ATmakeAppl(sym_Var_1, u_82)));
    }
  else
    {
      if(match_cons(t, sym_Off_1))
        {
          c_83 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_83;
      if(match_cons(t, sym_Var_1))
        {
          e_83 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, e_83), (ATerm) ATmakeAppl(sym_Var_1, c_83)));
    }
  return(t);
}
ATerm IgnoreVar_0_0 (ATerm t)
{
  ATerm h_84 = NULL,i_84 = NULL,j_84 = NULL,k_84 = NULL,l_84 = NULL,m_84 = NULL,n_84 = NULL;
  j_84 = t;
  if(match_cons(t, sym_As_2))
    {
      k_84 = ATgetArgument(t, 0);
      m_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_84;
  {
    ATerm j_39 = t;
    int k_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm l_39 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(k_39);
        t = m_84;
        if(match_cons(t, sym_As_2))
          {
            n_84 = ATgetArgument(t, 0);
            i_84 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_84;
        if(match_cons(t, sym_Off_1))
          {
            h_84 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, h_84), i_84);
      }
    else
      {
        t = j_39;
        if(match_cons(t, sym_Off_1))
          {
            l_84 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = m_84;
        if(match_cons(t, sym_Var_1))
          {
            ATerm m_39 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = l_84;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = l_84;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm n_39 = ATgetFirst((ATermList) t);
                ATerm o_39 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = l_84;
          }
        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, l_84), term_l_35);
      }
  }
  return(t);
}
ATerm o_16 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_m_34;
  return(t);
}
ATerm p_16 (ATerm t)
{
  ATerm n_85 = NULL,o_85 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_85 = ATgetFirst((ATermList) t);
      o_85 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_85, o_85);
  return(t);
}
ATerm q_16 (ATerm t)
{
  ATerm p_85 = NULL,q_85 = NULL,s_85 = NULL,t_85 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_39 = ATgetArgument(t, 0);
      if(match_cons(p_39, sym__2))
        {
          p_85 = ATgetArgument(p_39, 0);
          q_85 = ATgetArgument(p_39, 1);
        }
      else
        _fail(t);
      {
        ATerm q_39 = ATgetArgument(t, 1);
        if(match_cons(q_39, sym__2))
          {
            s_85 = ATgetArgument(q_39, 0);
            t_85 = ATgetArgument(q_39, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_85), p_85), (ATerm) ATinsert(CheckATermList(t_85), q_85));
  return(t);
}
ATerm r_16 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm s_16 (ATerm t)
{
  ATerm u_85 = NULL,v_85 = NULL;
  if(match_cons(t, sym__2))
    {
      u_85 = ATgetArgument(t, 0);
      v_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_10(t_16, u_85, v_85, t);
  return(t);
}
ATerm t_16 (ATerm t)
{
  ATerm z_85 = NULL;
  if(match_cons(t, sym__2))
    {
      z_85 = ATgetArgument(t, 0);
      if((z_85 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm u_16 (ATerm t)
{
  ATerm a_86 = NULL;
  if(match_cons(t, sym__2))
    {
      a_86 = ATgetArgument(t, 0);
      if((a_86 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm CollectSplit_2_0 (ATerm s_130 (ATerm), ATerm t_130 (ATerm), ATerm t)
{
  ATerm r_84 = NULL,s_84 = NULL,u_84 = NULL,v_84 = NULL,w_84 = NULL,x_84 = NULL,y_84 = NULL,b_85 = NULL,c_85 = NULL,f_85 = NULL,k_85 = NULL,m_85 = NULL;
  r_84 = t;
  s_84 = t;
  t = SSL_explode_term(s_84);
  if(match_cons(t, sym__2))
    {
      u_84 = ATgetArgument(t, 0);
      v_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_84);
  w_84 = t;
  t = v_84;
  t = genzip_4_0(o_16, p_16, q_16, s_130, t);
  if(match_cons(t, sym__2))
    {
      x_84 = ATgetArgument(t, 0);
      y_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_mkterm(u_84, x_84);
  b_85 = t;
  t = SSLsetAnnotations(b_85, w_84);
  t = t_130(t);
  if(match_cons(t, sym__2))
    {
      c_85 = ATgetArgument(t, 0);
      f_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_84;
  t = foldr_2_0(r_16, s_16, t);
  k_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_85, k_85);
  t = n_10(u_16, f_85, k_85, t);
  m_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_85, m_85);
  return(t);
}
ATerm collect_split_2_0 (ATerm j_131 (ATerm), ATerm k_131 (ATerm), ATerm t)
{
  ATerm g_86 (ATerm t)
  {
    ATerm v_16 (ATerm t)
    {
      ATerm b_86 = NULL,c_86 = NULL,f_86 = NULL;
      b_86 = t;
      {
        ATerm r_39 = t;
        int s_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_131(t);
            ;
            LocalPopChoice(s_39);
          }
        else
          {
            t = r_39;
          }
        c_86 = t;
        t = b_86;
        {
          ATerm t_39 = t;
          int u_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_131(t);
              ;
              LocalPopChoice(u_39);
            }
          else
            {
              t = t_39;
              t = (ATerm) ATempty;
            }
          f_86 = t;
          t = (ATerm) ATmakeAppl(sym__2, c_86, f_86);
        }
      }
      return(t);
    }
    t = CollectSplit_2_0(g_86, v_16, t);
    return(t);
  }
  t = g_86(t);
  return(t);
}
ATerm genzip_4_0 (ATerm e_126 (ATerm), ATerm f_126 (ATerm), ATerm g_126 (ATerm), ATerm h_126 (ATerm), ATerm t)
{
  ATerm h_86 (ATerm t)
  {
    ATerm y_39 = t;
    int z_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_126(t);
        ;
        LocalPopChoice(z_39);
      }
    else
      {
        t = y_39;
        t = f_126(t);
        t = _2_0(h_126, h_86, t);
        t = g_126(t);
      }
    return(t);
  }
  t = h_86(t);
  return(t);
}
ATerm w_16 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_40 = ATgetArgument(t, 0);
      ATerm b_40 = ATgetArgument(t, 1);
      if(((ATgetType(b_40) != AT_LIST) || !(ATisEmpty(b_40))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm x_16 (ATerm t)
{
  ATerm k_86 = NULL,l_86 = NULL,m_86 = NULL,n_86 = NULL,p_86 = NULL;
  if(match_cons(t, sym__2))
    {
      k_86 = ATgetArgument(t, 0);
      {
        ATerm c_40 = ATgetArgument(t, 1);
        if(((ATgetType(c_40) == AT_LIST) && !(ATisEmpty(c_40))))
          {
            l_86 = ATgetFirst((ATermList) c_40);
            m_86 = (ATerm) ATgetNext((ATermList) c_40);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_n_21;
  p_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_86, term_n_21);
  t = d_11(k_86, p_86, t);
  n_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_86, l_86), (ATerm) ATmakeAppl(sym__2, n_86, m_86));
  return(t);
}
ATerm y_16 (ATerm t)
{
  ATerm q_86 = NULL,r_86 = NULL;
  if(match_cons(t, sym__2))
    {
      q_86 = ATgetArgument(t, 0);
      r_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_86), q_86);
  return(t);
}
ATerm nzip0_1_0 (ATerm p_126 (ATerm), ATerm t)
{
  ATerm i_86 = NULL;
  i_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_34, i_86);
  t = genzip_4_0(w_16, x_16, y_16, p_126, t);
  return(t);
}
ATerm Propagate_0_0 (ATerm t)
{
  ATerm a_87 = NULL,c_87 = NULL,e_87 = NULL,f_87 = NULL,g_87 = NULL,h_87 = NULL;
  if(match_cons(t, sym_As_2))
    {
      c_87 = ATgetArgument(t, 0);
      f_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_87;
  if(match_cons(t, sym_Off_1))
    {
      e_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_87;
  {
    ATerm d_40 = t;
    int e_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_BuildDefault_1))
          {
            ATerm g_40 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(e_40);
        {
          ATerm h_40 = t;
          int i_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_87;
              {
                ATerm z_16 (ATerm t)
                {
                  ATerm o_87 = NULL,u_87 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      o_87 = ATgetArgument(t, 0);
                      u_87 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(e_87), o_87)), u_87);
                  return(t);
                }
                t = nzip0_1_0(z_16, t);
              }
              ;
              LocalPopChoice(i_40);
            }
          else
            {
              t = h_40;
              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, e_87), term_l_35);
            }
        }
      }
    else
      {
        t = d_40;
        if(match_cons(t, sym_As_2))
          {
            g_87 = ATgetArgument(t, 0);
            h_87 = ATgetArgument(t, 1);
            t = g_87;
            if(match_cons(t, sym_Var_1))
              {
                a_87 = ATgetArgument(t, 0);
                {
                  ATerm j_40 = t;
                  int k_40 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = f_87;
                      {
                        ATerm a_17 (ATerm t)
                        {
                          ATerm f_88 = NULL,h_88 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              f_88 = ATgetArgument(t, 0);
                              h_88 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(e_87), f_88)), h_88);
                          return(t);
                        }
                        t = nzip0_1_0(a_17, t);
                      }
                      ;
                      LocalPopChoice(k_40);
                    }
                  else
                    {
                      t = j_40;
                      t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, a_87), (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, e_87), h_87));
                    }
                }
              }
            else
              {
                t = f_87;
                {
                  ATerm b_17 (ATerm t)
                  {
                    ATerm o_88 = NULL,p_88 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        o_88 = ATgetArgument(t, 0);
                        p_88 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(e_87), o_88)), p_88);
                    return(t);
                  }
                  t = nzip0_1_0(b_17, t);
                }
              }
          }
        else
          {
            if(match_cons(t, sym_Op_2))
              {
                g_87 = ATgetArgument(t, 0);
                h_87 = ATgetArgument(t, 1);
                {
                  ATerm l_40 = t;
                  int m_40 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = f_87;
                      {
                        ATerm c_17 (ATerm t)
                        {
                          ATerm t_88 = NULL,u_88 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              t_88 = ATgetArgument(t, 0);
                              u_88 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(e_87), t_88)), u_88);
                          return(t);
                        }
                        t = nzip0_1_0(c_17, t);
                      }
                      ;
                      LocalPopChoice(m_40);
                    }
                  else
                    {
                      t = l_40;
                      t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, e_87), (ATerm) ATmakeAppl(sym_Op_2, g_87, (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, e_87), h_87)));
                    }
                }
              }
            else
              {
                t = f_87;
                {
                  ATerm d_17 (ATerm t)
                  {
                    ATerm c_89 = NULL,e_89 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        c_89 = ATgetArgument(t, 0);
                        e_89 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(e_87), c_89)), e_89);
                    return(t);
                  }
                  t = nzip0_1_0(d_17, t);
                }
              }
          }
      }
  }
  return(t);
}
ATerm topdown_1_0 (ATerm s_121 (ATerm), ATerm t)
{
  t = s_121(t);
  {
    ATerm e_17 (ATerm t)
    {
      t = topdown_1_0(s_121, t);
      return(t);
    }
    t = SRTS_all(e_17, t);
  }
  return(t);
}
ATerm f_17 (ATerm t)
{
  ATerm o_40 = t;
  int p_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_89 = NULL,d_90 = NULL;
      if(match_cons(t, sym_As_2))
        {
          s_89 = ATgetArgument(t, 0);
          d_90 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = s_89;
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = d_90;
      ;
      LocalPopChoice(p_40);
    }
  else
    {
      t = o_40;
    }
  return(t);
}
ATerm h_17 (ATerm t)
{
  ATerm q_40 = t;
  int t_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Propagate_0_0(t);
      ;
      LocalPopChoice(t_40);
    }
  else
    {
      t = q_40;
    }
  return(t);
}
ATerm i_17 (ATerm t)
{
  ATerm n_90 = NULL;
  if(match_cons(t, sym_Off_1))
    {
      n_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_90;
  return(t);
}
ATerm n_17 (ATerm t)
{
  ATerm o_90 = NULL,p_90 = NULL;
  if(match_cons(t, sym__2))
    {
      o_90 = ATgetArgument(t, 0);
      p_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_10(o_17, o_90, p_90, t);
  return(t);
}
ATerm o_17 (ATerm t)
{
  ATerm q_90 = NULL;
  if(match_cons(t, sym__2))
    {
      q_90 = ATgetArgument(t, 0);
      if((q_90 != ATgetArgument(t, 1)))
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
  ATerm h_89 = NULL,i_89 = NULL,j_89 = NULL,l_89 = NULL;
  h_89 = t;
  t = (ATerm) ATmakeAppl(sym_As_2, term_v_40, (ATerm) ATinsert(ATempty, h_89));
  t = topdown_1_0(f_17, t);
  t = topdown_1_0(h_17, t);
  t = collect_split_2_0(IgnoreVar_0_0, CollectSubst_0_0, t);
  if(match_cons(t, sym__2))
    {
      i_89 = ATgetArgument(t, 0);
      j_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_89;
  t = collect_om_2_0(i_17, n_17, t);
  l_89 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_2, l_89, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, i_89, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, j_89), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATinsert(ATempty, term_u_34)))))));
  return(t);
}
ATerm Scope_2_0 (ATerm b_110 (ATerm), ATerm c_110 (ATerm), ATerm t)
{
  ATerm r_90 = NULL,s_90 = NULL,t_90 = NULL,u_90 = NULL,v_90 = NULL,w_90 = NULL,a_3 = NULL,e_3 = NULL;
  w_90 = t;
  if(match_cons(t, sym_Scope_2))
    {
      s_90 = ATgetArgument(t, 0);
      t_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_90);
  r_90 = t;
  t = s_90;
  t = b_110(t);
  u_90 = t;
  t = t_90;
  t = c_110(t);
  v_90 = t;
  e_3 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, u_90, v_90);
  a_3 = t;
  t = SSLsetAnnotations(a_3, r_90);
  return(t);
}
ATerm Seq_2_0 (ATerm f_110 (ATerm), ATerm g_110 (ATerm), ATerm t)
{
  ATerm z_90 = NULL,a_91 = NULL,c_91 = NULL,d_91 = NULL,e_91 = NULL,f_91 = NULL,g_3 = NULL,j_3 = NULL;
  f_91 = t;
  if(match_cons(t, sym_Seq_2))
    {
      a_91 = ATgetArgument(t, 0);
      c_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_91);
  z_90 = t;
  t = a_91;
  t = f_110(t);
  d_91 = t;
  t = c_91;
  t = g_110(t);
  e_91 = t;
  j_3 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, d_91, e_91);
  g_3 = t;
  t = SSLsetAnnotations(g_3, z_90);
  return(t);
}
ATerm LChoice_2_0 (ATerm h_110 (ATerm), ATerm i_110 (ATerm), ATerm t)
{
  ATerm k_91 = NULL,n_91 = NULL,o_91 = NULL,r_91 = NULL,t_91 = NULL,y_91 = NULL,k_3 = NULL,l_3 = NULL;
  y_91 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      n_91 = ATgetArgument(t, 0);
      o_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_91);
  k_91 = t;
  t = n_91;
  t = h_110(t);
  r_91 = t;
  t = o_91;
  t = i_110(t);
  t_91 = t;
  l_3 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, r_91, t_91);
  k_3 = t;
  t = SSLsetAnnotations(k_3, k_91);
  return(t);
}
ATerm Choice_2_0 (ATerm f_109 (ATerm), ATerm g_109 (ATerm), ATerm t)
{
  ATerm d_92 = NULL,e_92 = NULL,g_92 = NULL,h_92 = NULL,i_92 = NULL,q_92 = NULL,u_3 = NULL,w_3 = NULL;
  q_92 = t;
  if(match_cons(t, sym_Choice_2))
    {
      e_92 = ATgetArgument(t, 0);
      g_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_92);
  d_92 = t;
  t = e_92;
  t = f_109(t);
  h_92 = t;
  t = g_92;
  t = g_109(t);
  i_92 = t;
  w_3 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, h_92, i_92);
  u_3 = t;
  t = SSLsetAnnotations(u_3, d_92);
  return(t);
}
ATerm p_17 (ATerm t)
{
  t = repeat_1_0(q_17, t);
  return(t);
}
ATerm q_17 (ATerm t)
{
  ATerm w_40 = t;
  int x_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MatrixMerge_0_0(t);
      ;
      LocalPopChoice(x_40);
    }
  else
    {
      t = w_40;
      t = Simplify_0_0(t);
    }
  return(t);
}
ATerm match_to_matrix_0_0 (ATerm t)
{
  ATerm y_40 = t;
  int z_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_41 = t;
      int b_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Choice_2_0(_id, _id, t);
          ;
          LocalPopChoice(b_41);
        }
      else
        {
          t = a_41;
          t = LChoice_2_0(_id, _id, t);
        }
      {
        ATerm x_92 (ATerm t)
        {
          ATerm c_41 = t;
          int d_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Choice_2_0(x_92, x_92, t);
              ;
              LocalPopChoice(d_41);
            }
          else
            {
              t = c_41;
              {
                ATerm e_41 = t;
                int f_41 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = LChoice_2_0(x_92, x_92, t);
                    ;
                    LocalPopChoice(f_41);
                  }
                else
                  {
                    t = e_41;
                    {
                      ATerm z_92 (ATerm t)
                      {
                        ATerm j_41 = t;
                        int l_41 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = Seq_2_0(z_92, match_to_matrix_0_0, t);
                            ;
                            LocalPopChoice(l_41);
                          }
                        else
                          {
                            t = j_41;
                            {
                              ATerm m_41 = t;
                              int n_41 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = Scope_2_0(_id, z_92, t);
                                  ;
                                  LocalPopChoice(n_41);
                                }
                              else
                                {
                                  t = m_41;
                                  {
                                    ATerm o_41 = t;
                                    int p_41 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm v_92 = NULL;
                                        if(match_cons(t, sym_Match_1))
                                          {
                                            v_92 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = v_92;
                                        t = term_to_matrix_0_0(t);
                                        ;
                                        LocalPopChoice(p_41);
                                      }
                                    else
                                      {
                                        t = o_41;
                                        t = SRTS_all(match_to_matrix_0_0, t);
                                      }
                                  }
                                }
                            }
                          }
                        return(t);
                      }
                      t = z_92(t);
                    }
                  }
              }
            }
          return(t);
        }
        t = x_92(t);
      }
      ;
      LocalPopChoice(z_40);
    }
  else
    {
      t = y_40;
      t = SRTS_all(match_to_matrix_0_0, t);
    }
  t = bottomup_1_0(p_17, t);
  return(t);
}
ATerm t_17 (ATerm t)
{
  t = term_p_37;
  return(t);
}
ATerm v_17 (ATerm t)
{
  ATerm q_41 = t;
  int r_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_93 = NULL,i_93 = NULL,j_93 = NULL;
      e_93 = t;
      if(match_cons(t, sym_Matrix_1))
        {
          i_93 = ATgetArgument(t, 0);
          {
            ATerm s_41 = t;
            int t_41 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_93 = NULL;
                t = i_93;
                t = map_1_0(w_17, t);
                l_93 = t;
                t = (ATerm) ATmakeAppl(sym_LChoices_1, l_93);
                ;
                LocalPopChoice(t_41);
              }
            else
              {
                t = s_41;
                {
                  ATerm u_41 = t;
                  int v_41 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = e_93;
                      t = h_9(i_93, t);
                      ;
                      LocalPopChoice(v_41);
                    }
                  else
                    {
                      t = u_41;
                      {
                        ATerm w_41 = t;
                        int x_41 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = e_93;
                            t = f_9(i_93, t);
                            ;
                            LocalPopChoice(x_41);
                          }
                        else
                          {
                            t = w_41;
                            t = e_93;
                            t = d_9(i_93, t);
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
              i_93 = ATgetArgument(t, 0);
              j_93 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = e_93;
          t = w_8(i_93, j_93, t);
        }
      ;
      LocalPopChoice(r_41);
    }
  else
    {
      t = q_41;
      t = Simplify_0_0(t);
    }
  return(t);
}
ATerm w_17 (ATerm t)
{
  ATerm n_93 = NULL;
  if(match_cons(t, sym_Row_3))
    {
      ATerm y_41 = ATgetArgument(t, 0);
      if(((ATgetType(y_41) != AT_LIST) || !(ATisEmpty(y_41))))
        _fail(t);
      {
        ATerm z_41 = ATgetArgument(t, 1);
        if(((ATgetType(z_41) != AT_LIST) || !(ATisEmpty(z_41))))
          _fail(t);
      }
      n_93 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = n_93;
  return(t);
}
ATerm match_to_dfa_0_0 (ATerm t)
{
  t = match_to_matrix_0_0(t);
  {
    ATerm u_17 (ATerm t)
    {
      t = repeat_1_0(v_17, t);
      t = SRTS_all(u_17, t);
      return(t);
    }
    t = scope_2_0(t_17, u_17, t);
    t = strename_0_0(t);
  }
  return(t);
}
ATerm SDefT_4_0 (ATerm j_112 (ATerm), ATerm k_112 (ATerm), ATerm l_112 (ATerm), ATerm m_112 (ATerm), ATerm t)
{
  ATerm x_93 = NULL,a_94 = NULL,b_94 = NULL,c_94 = NULL,h_94 = NULL,i_94 = NULL,j_94 = NULL,k_94 = NULL,l_94 = NULL,r_94 = NULL,z_3 = NULL,a_4 = NULL;
  r_94 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      a_94 = ATgetArgument(t, 0);
      b_94 = ATgetArgument(t, 1);
      c_94 = ATgetArgument(t, 2);
      h_94 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_94);
  x_93 = t;
  t = a_94;
  t = j_112(t);
  i_94 = t;
  t = b_94;
  t = k_112(t);
  j_94 = t;
  t = c_94;
  t = l_112(t);
  k_94 = t;
  t = h_94;
  t = m_112(t);
  l_94 = t;
  a_4 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, i_94, j_94, k_94, l_94);
  z_3 = t;
  t = SSLsetAnnotations(z_3, x_93);
  return(t);
}
ATerm SDef_3_0 (ATerm g_112 (ATerm), ATerm h_112 (ATerm), ATerm i_112 (ATerm), ATerm t)
{
  ATerm u_94 = NULL,v_94 = NULL,w_94 = NULL,x_94 = NULL,y_94 = NULL,z_94 = NULL,a_95 = NULL,b_95 = NULL,b_4 = NULL,c_4 = NULL;
  b_95 = t;
  if(match_cons(t, sym_SDef_3))
    {
      v_94 = ATgetArgument(t, 0);
      w_94 = ATgetArgument(t, 1);
      x_94 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_95);
  u_94 = t;
  t = v_94;
  t = g_112(t);
  y_94 = t;
  t = w_94;
  t = h_112(t);
  z_94 = t;
  t = x_94;
  t = i_112(t);
  a_95 = t;
  c_4 = t;
  t = (ATerm) ATmakeAppl(sym_SDef_3, y_94, z_94, a_95);
  b_4 = t;
  t = SSLsetAnnotations(b_4, u_94);
  return(t);
}
ATerm Strategies_1_0 (ATerm e_105 (ATerm), ATerm t)
{
  ATerm e_95 = NULL,f_95 = NULL,i_95 = NULL,j_95 = NULL,j_4 = NULL,l_4 = NULL;
  j_95 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      f_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_95);
  e_95 = t;
  t = f_95;
  t = e_105(t);
  i_95 = t;
  l_4 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, i_95);
  j_4 = t;
  t = SSLsetAnnotations(j_4, e_95);
  return(t);
}
ATerm Specification_1_0 (ATerm j_105 (ATerm), ATerm t)
{
  ATerm m_95 = NULL,n_95 = NULL,o_95 = NULL,p_95 = NULL,n_4 = NULL,o_4 = NULL;
  p_95 = t;
  if(match_cons(t, sym_Specification_1))
    {
      n_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_95);
  m_95 = t;
  t = n_95;
  t = j_105(t);
  o_95 = t;
  o_4 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, o_95);
  n_4 = t;
  t = SSLsetAnnotations(n_4, m_95);
  return(t);
}
ATerm b_18 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm apply_to_bodies_1_0 (ATerm t_119 (ATerm), ATerm t)
{
  ATerm x_17 (ATerm t)
  {
    ATerm y_17 (ATerm t)
    {
      ATerm z_17 (ATerm t)
      {
        ATerm c_18 (ATerm t)
        {
          ATerm d_18 (ATerm t)
          {
            ATerm a_42 = t;
            int b_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SDef_3_0(_id, _id, t_119, t);
                ;
                LocalPopChoice(b_42);
              }
            else
              {
                t = a_42;
                t = SDefT_4_0(_id, _id, _id, t_119, t);
              }
            return(t);
          }
          t = map_1_0(d_18, t);
          return(t);
        }
        t = Strategies_1_0(c_18, t);
        return(t);
      }
      t = Cons_2_0(z_17, b_18, t);
      return(t);
    }
    t = Cons_2_0(_id, y_17, t);
    return(t);
  }
  t = Specification_1_0(x_17, t);
  return(t);
}
ATerm _2_0 (ATerm l_100 (ATerm), ATerm m_100 (ATerm), ATerm t)
{
  ATerm u_95 = NULL,v_95 = NULL,y_95 = NULL,z_95 = NULL,a_96 = NULL,c_96 = NULL,q_4 = NULL,r_4 = NULL;
  c_96 = t;
  if(match_cons(t, sym__2))
    {
      v_95 = ATgetArgument(t, 0);
      y_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_96);
  u_95 = t;
  t = v_95;
  t = l_100(t);
  z_95 = t;
  t = y_95;
  t = m_100(t);
  a_96 = t;
  r_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_95, a_96);
  q_4 = t;
  t = SSLsetAnnotations(q_4, u_95);
  return(t);
}
ATerm x_10 (ATerm y_78, ATerm z_78, ATerm t)
{
  ATerm f_96 = NULL;
  t = SSL_fputc(y_78, z_78);
  f_96 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_96);
  return(t);
}
ATerm y_10 (ATerm m_82, ATerm n_82, ATerm t)
{
  ATerm g_96 = NULL;
  t = SSL_write_term_to_stream_text(m_82, n_82);
  g_96 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_96);
  return(t);
}
ATerm a_11 (ATerm s_143 (ATerm), ATerm x_586, ATerm q_82, ATerm t)
{
  ATerm h_96 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_586, term_c_42);
  t = open_stream_0_0(t);
  h_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_96, q_82);
  t = s_143(t);
  t = fclose_0_0(t);
  t = q_82;
  return(t);
}
ATerm z_10 (ATerm i_82, ATerm j_82, ATerm t)
{
  ATerm i_96 = NULL;
  t = SSL_write_term_to_stream_baf(i_82, j_82);
  i_96 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_96);
  return(t);
}
ATerm h_18 (ATerm t)
{
  t = fetch_1_0(k_18, t);
  return(t);
}
ATerm i_18 (ATerm t)
{
  ATerm o_96 = NULL,p_96 = NULL;
  if(match_cons(t, sym__2))
    {
      o_96 = ATgetArgument(t, 0);
      p_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_11(l_18, o_96, p_96, t);
  return(t);
}
ATerm k_18 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm l_18 (ATerm t)
{
  ATerm q_96 = NULL,r_96 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_42 = ATgetArgument(t, 0);
      if(match_cons(d_42, sym_Stream_1))
        {
          q_96 = ATgetArgument(d_42, 0);
        }
      else
        _fail(t);
      r_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_10(q_96, r_96, t);
  return(t);
}
ATerm m_18 (ATerm t)
{
  ATerm s_96 = NULL,t_96 = NULL;
  if(match_cons(t, sym__2))
    {
      s_96 = ATgetArgument(t, 0);
      t_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_11(n_18, s_96, t_96, t);
  return(t);
}
ATerm n_18 (ATerm t)
{
  ATerm x_96 = NULL,c_97 = NULL,d_97 = NULL,e_97 = NULL,f_97 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_42 = ATgetArgument(t, 0);
      if(match_cons(e_42, sym_Stream_1))
        {
          c_97 = ATgetArgument(e_42, 0);
        }
      else
        _fail(t);
      d_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_10(c_97, d_97, t);
  x_96 = t;
  t = term_f_42;
  e_97 = t;
  t = x_96;
  if(match_cons(t, sym_Stream_1))
    {
      f_97 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_f_42, x_96);
  t = x_10(e_97, f_97, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm j_96 = NULL,k_96 = NULL;
  j_96 = t;
  {
    ATerm e_18 (ATerm t)
    {
      ATerm g_42 = t;
      int h_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_18 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((k_96 != NULL) && (k_96 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  k_96 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(f_18, t);
          ;
          LocalPopChoice(h_42);
        }
      else
        {
          t = g_42;
          t = term_i_42;
          if(((k_96 != NULL) && (k_96 != t)))
            _fail(t);
          else
            k_96 = t;
        }
      return(t);
    }
    t = _2_0(e_18, _id, t);
    t = j_96;
    {
      ATerm g_18 (ATerm t)
      {
        ATerm n_96 = NULL;
        n_96 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_96), n_96);
        return(t);
      }
      t = _2_0(_id, g_18, t);
      {
        ATerm j_42 = t;
        int k_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(h_18, i_18, t);
            ;
            LocalPopChoice(k_42);
          }
        else
          {
            t = j_42;
            t = _2_0(_id, m_18, t);
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
ATerm apply_strategy_1_0 (ATerm u_146 (ATerm), ATerm t)
{
  ATerm j_97 = NULL,k_97 = NULL,l_97 = NULL,m_97 = NULL,n_97 = NULL;
  j_97 = t;
  t = dtime_0_0(t);
  t = j_97;
  t = u_146(t);
  k_97 = t;
  t = dtime_0_0(t);
  l_97 = t;
  t = k_97;
  if(match_cons(t, sym__2))
    {
      m_97 = ATgetArgument(t, 0);
      n_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_97), (ATerm) ATmakeAppl(sym_Runtime_1, l_97)), n_97);
  return(t);
}
ATerm e_99 (ATerm c_98, ATerm t)
{
  t = SSL_fclose(c_98);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm b_99 = NULL,c_99 = NULL;
  c_99 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_99 = ATgetArgument(t, 0);
      {
        ATerm l_42 = t;
        int m_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(b_99);
            ;
            LocalPopChoice(m_42);
          }
        else
          {
            t = l_42;
            t = e_99(c_99, t);
          }
      }
    }
  else
    {
      t = e_99(c_99, t);
    }
  return(t);
}
ATerm b_11 (ATerm o_82, ATerm t)
{
  t = SSL_read_term_from_stream(o_82);
  return(t);
}
ATerm c_11 (ATerm a_79, ATerm b_79, ATerm t)
{
  ATerm j_99 = NULL;
  t = SSL_fopen(a_79, b_79);
  j_99 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_99);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm k_99 = NULL;
  t = SSL_stdin_stream();
  k_99 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_99);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm l_99 = NULL;
  t = SSL_stdout_stream();
  l_99 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_99);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm m_99 = NULL;
  t = SSL_stderr_stream();
  m_99 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_99);
  return(t);
}
ATerm p_18 (ATerm t)
{
  ATerm w_100 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      w_100 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_100;
  return(t);
}
ATerm q_18 (ATerm t)
{
  ATerm a_101 = NULL;
  a_101 = t;
  t = SSL_is_string(a_101);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_42 = ATgetArgument(t, 0);
      ATerm o_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_42 = t;
    int q_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_100 = NULL,o_18 = NULL;
        t_100 = t;
        t = SSL_explode_term(t_100);
        if(match_cons(t, sym__2))
          {
            ATerm r_42 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) r_42) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm s_42 = ATgetArgument(t, 1);
              if(((ATgetType(s_42) == AT_LIST) && !(ATisEmpty(s_42))))
                {
                  o_18 = ATgetFirst((ATermList) s_42);
                  {
                    ATerm t_42 = (ATerm) ATgetNext((ATermList) s_42);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = o_18;
        if(match_cons(t, sym_stderr_0))
          {
            t = o_18;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = o_18;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = o_18;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(q_42);
      }
    else
      {
        t = p_42;
        {
          ATerm u_42 = t;
          int v_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_100 = NULL,v_100 = NULL;
              t = _2_0(p_18, _id, t);
              if(match_cons(t, sym__2))
                {
                  u_100 = ATgetArgument(t, 0);
                  v_100 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = c_11(u_100, v_100, t);
              ;
              LocalPopChoice(v_42);
            }
          else
            {
              t = u_42;
              {
                ATerm x_100 = NULL,z_100 = NULL;
                t = _2_0(q_18, _id, t);
                if(match_cons(t, sym__2))
                  {
                    x_100 = ATgetArgument(t, 0);
                    z_100 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = c_11(x_100, z_100, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm r_18 (ATerm t)
{
  t = term_w_42;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm c_101 = NULL,e_101 = NULL,h_101 = NULL;
  ATerm x_42 = t;
  int y_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_101 = NULL;
      i_101 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_101, term_z_42);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(y_42);
    }
  else
    {
      t = x_42;
      t = debug_1_0(r_18, t);
      _fail(t);
    }
  c_101 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_101 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_11(h_101, t);
  e_101 = t;
  t = c_101;
  t = fclose_0_0(t);
  t = e_101;
  return(t);
}
ATerm fetch_1_0 (ATerm d_128 (ATerm), ATerm t)
{
  ATerm k_101 (ATerm t)
  {
    ATerm a_43 = t;
    int b_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(d_128, _id, t);
        ;
        LocalPopChoice(b_43);
      }
    else
      {
        t = a_43;
        t = Cons_2_0(_id, k_101, t);
      }
    return(t);
  }
  t = k_101(t);
  return(t);
}
ATerm w_10 (ATerm m_73, ATerm n_73, ATerm t)
{
  t = SSL_strcat(m_73, n_73);
  return(t);
}
ATerm debug_1_0 (ATerm q_143 (ATerm), ATerm t)
{
  ATerm l_101 = NULL,m_101 = NULL,n_101 = NULL,o_101 = NULL;
  l_101 = t;
  t = q_143(t);
  m_101 = t;
  t = term_k_21;
  n_101 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_101), m_101);
  o_101 = t;
  t = SSL_printnl(n_101, o_101);
  t = l_101;
  return(t);
}
ATerm s_18 (ATerm t)
{
  ATerm c_43 = t;
  int d_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(d_43);
    }
  else
    {
      t = c_43;
    }
  return(t);
}
ATerm t_18 (ATerm t)
{
  t = term_e_43;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm f_43 = t;
  int g_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_101 = NULL;
      y_101 = t;
      t = SSL_is_string(y_101);
      ;
      LocalPopChoice(g_43);
    }
  else
    {
      t = f_43;
      {
        ATerm h_43 = t;
        int i_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(s_18, t);
            ;
            LocalPopChoice(i_43);
          }
        else
          {
            t = h_43;
            {
              ATerm h_102 = NULL,k_102 = NULL,n_102 = NULL;
              h_102 = t;
              if(match_cons(t, sym_Path_1))
                {
                  k_102 = ATgetArgument(t, 0);
                  t = k_102;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      k_102 = ATgetArgument(t, 0);
                      t = k_102;
                      {
                        ATerm j_43 = t;
                        int k_43 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(k_43);
                          }
                        else
                          {
                            t = j_43;
                            t = debug_1_0(t_18, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm t_102 = NULL,u_102 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          k_102 = ATgetArgument(t, 0);
                          n_102 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = k_102;
                      t = eval_config_0_0(t);
                      t_102 = t;
                      t = n_102;
                      t = eval_config_0_0(t);
                      u_102 = t;
                      t = (ATerm) ATmakeAppl(sym__2, t_102, u_102);
                      t = w_10(t_102, u_102, t);
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
  ATerm d_103 = NULL,e_103 = NULL;
  d_103 = t;
  t = term_l_43;
  e_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_43, d_103);
  t = f_11(e_103, d_103, t);
  {
    ATerm m_43 = t;
    int n_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_103 = NULL,g_103 = NULL;
        t = eval_config_0_0(t);
        f_103 = t;
        t = term_l_43;
        g_103 = t;
        t = SSL_table_put(g_103, d_103, f_103);
        t = f_103;
        ;
        LocalPopChoice(n_43);
      }
    else
      {
        t = m_43;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm d_145 (ATerm), ATerm t)
{
  ATerm o_43 = t;
  int p_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_103 = NULL,j_103 = NULL;
      h_103 = t;
      t = term_q_43;
      t = get_config_0_0(t);
      j_103 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_103, term_r_43);
      t = geq_0_0(t);
      t = h_103;
      t = d_145(t);
      ;
      LocalPopChoice(p_43);
    }
  else
    {
      t = o_43;
    }
  return(t);
}
ATerm u_18 (ATerm t)
{
  ATerm l_103 = NULL;
  l_103 = t;
  if(match_string(t, "-k"))
    {
      t = l_103;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = l_103;
    }
  return(t);
}
ATerm v_18 (ATerm t)
{
  ATerm m_103 = NULL,n_103 = NULL,o_103 = NULL;
  m_103 = t;
  t = SSL_string_to_int(m_103);
  n_103 = t;
  t = term_s_43;
  o_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_43, n_103);
  t = i_11(o_103, n_103, t);
  t = m_103;
  return(t);
}
ATerm w_18 (ATerm t)
{
  t = term_t_43;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_18, v_18, w_18, t);
  return(t);
}
ATerm x_18 (ATerm t)
{
  ATerm q_103 = NULL;
  q_103 = t;
  if(match_string(t, "-S"))
    {
      t = q_103;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = q_103;
    }
  return(t);
}
ATerm y_18 (ATerm t)
{
  ATerm r_103 = NULL,s_103 = NULL;
  t = term_q_43;
  r_103 = t;
  t = term_u_34;
  s_103 = t;
  t = term_u_43;
  t = i_11(r_103, s_103, t);
  t = term_v_43;
  return(t);
}
ATerm z_18 (ATerm t)
{
  t = term_w_43;
  return(t);
}
ATerm b_19 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_19 (ATerm t)
{
  ATerm t_103 = NULL,v_103 = NULL,x_103 = NULL;
  t_103 = t;
  t = SSL_string_to_int(t_103);
  v_103 = t;
  t = term_q_43;
  x_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_43, v_103);
  t = i_11(x_103, v_103, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, t_103);
  return(t);
}
ATerm e_19 (ATerm t)
{
  t = term_x_43;
  return(t);
}
ATerm h_19 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_19 (ATerm t)
{
  ATerm a_104 = NULL,b_104 = NULL;
  t = term_y_43;
  a_104 = t;
  t = term_h_13;
  b_104 = t;
  t = term_z_43;
  t = i_11(a_104, b_104, t);
  t = term_a_44;
  return(t);
}
ATerm j_19 (ATerm t)
{
  t = term_b_44;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm c_44 = t;
  int d_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_18, y_18, z_18, t);
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
            t = ArgOption_3_0(b_19, d_19, e_19, t);
            ;
            LocalPopChoice(f_44);
          }
        else
          {
            t = e_44;
            t = Option_3_0(h_19, i_19, j_19, t);
          }
      }
    }
  return(t);
}
ATerm i_11 (ATerm p_83, ATerm q_83, ATerm t)
{
  ATerm e_104 = NULL;
  t = term_l_43;
  e_104 = t;
  t = SSL_table_put(e_104, p_83, q_83);
  t = (ATerm) ATmakeAppl(sym__3, term_l_43, p_83, q_83);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm j_104 = NULL,k_104 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_104 = NULL,m_104 = NULL,o_104 = NULL;
      t = term_h_13;
      t = d_0(t);
      l_104 = t;
      t = term_g_44;
      m_104 = t;
      t = term_h_44;
      o_104 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_44, term_h_44, l_104);
      t = g_11(m_104, o_104, l_104, t);
      _fail(t);
    }
  else
    {
      ATerm r_104 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_104 = ATgetFirst((ATermList) t);
          k_104 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_104;
      t = a_0(t);
      t = term_h_13;
      t = b_0(t);
      r_104 = t;
      t = (ATerm) ATinsert(CheckATermList(k_104), r_104);
    }
  return(t);
}
ATerm k_19 (ATerm t)
{
  ATerm t_104 = NULL;
  t_104 = t;
  if(match_string(t, "-o"))
    {
      t = t_104;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = t_104;
    }
  return(t);
}
ATerm l_19 (ATerm t)
{
  ATerm u_104 = NULL,v_104 = NULL;
  u_104 = t;
  t = term_k_44;
  v_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_44, u_104);
  t = i_11(v_104, u_104, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, u_104);
  return(t);
}
ATerm m_19 (ATerm t)
{
  t = term_l_44;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_19, l_19, m_19, t);
  return(t);
}
ATerm g_11 (ATerm f_65, ATerm g_65, ATerm e_65, ATerm t)
{
  ATerm x_104 = NULL,y_104 = NULL,z_104 = NULL;
  x_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_65, g_65);
  {
    ATerm m_44 = t;
    int n_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm o_44 = ATgetArgument(t, 0);
            ATerm p_44 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, f_65, g_65);
        t = f_11(f_65, g_65, t);
        ;
        LocalPopChoice(n_44);
      }
    else
      {
        t = m_44;
        t = (ATerm) ATempty;
      }
    y_104 = t;
    t = (ATerm) ATinsert(CheckATermList(y_104), e_65);
    z_104 = t;
    t = SSL_table_put(f_65, g_65, z_104);
    t = x_104;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm k_105 = NULL,l_105 = NULL,m_105 = NULL,n_105 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_105 = NULL,p_105 = NULL,q_105 = NULL;
      t = term_h_13;
      t = m_0(t);
      o_105 = t;
      t = term_g_44;
      p_105 = t;
      t = term_h_44;
      q_105 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_44, term_h_44, o_105);
      t = g_11(p_105, q_105, o_105, t);
      _fail(t);
    }
  else
    {
      ATerm u_105 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_105 = ATgetFirst((ATermList) t);
          l_105 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_105;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_105 = ATgetFirst((ATermList) t);
          n_105 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_105;
      t = i_0(t);
      t = m_105;
      t = k_0(t);
      u_105 = t;
      t = (ATerm) ATinsert(CheckATermList(n_105), u_105);
    }
  return(t);
}
ATerm n_19 (ATerm t)
{
  ATerm w_105 = NULL;
  w_105 = t;
  if(match_string(t, "-i"))
    {
      t = w_105;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = w_105;
    }
  return(t);
}
ATerm o_19 (ATerm t)
{
  ATerm x_105 = NULL,y_105 = NULL;
  x_105 = t;
  t = term_r_44;
  y_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_44, x_105);
  t = i_11(y_105, x_105, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, x_105);
  return(t);
}
ATerm p_19 (ATerm t)
{
  t = term_s_44;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_19, o_19, p_19, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm z_105 = NULL,a_106 = NULL,b_106 = NULL,c_106 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_13;
  t = whoami_0_0(t);
  z_105 = t;
  t = term_k_21;
  a_106 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_t_44), z_105);
  b_106 = t;
  t = SSL_printnl(a_106, b_106);
  t = term_n_21;
  c_106 = t;
  t = SSL_exit(c_106);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_u_44;
  t = get_config_0_0(t);
  return(t);
}
ATerm d_11 (ATerm j_63, ATerm k_63, ATerm t)
{
  ATerm v_44 = t;
  int w_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(j_63, k_63);
      ;
      LocalPopChoice(w_44);
    }
  else
    {
      t = v_44;
      t = SSL_addr(j_63, k_63);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm j_132 (ATerm), ATerm k_132 (ATerm), ATerm t)
{
  ATerm x_44 = t;
  int y_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = j_132(t);
      ;
      LocalPopChoice(y_44);
    }
  else
    {
      t = x_44;
      {
        ATerm f_106 = NULL,g_106 = NULL,p_106 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_106 = ATgetFirst((ATermList) t);
            g_106 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = g_106;
        t = foldr_2_0(j_132, k_132, t);
        p_106 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_106, p_106);
        t = k_132(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm q_19 (ATerm t)
{
  t = term_u_34;
  return(t);
}
ATerm r_19 (ATerm t)
{
  ATerm f_19 = NULL,g_19 = NULL;
  if(match_cons(t, sym__2))
    {
      f_19 = ATgetArgument(t, 0);
      g_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_11(f_19, g_19, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm s_106 = NULL,a_19 = NULL,c_19 = NULL;
  t = times_0_0(t);
  a_19 = t;
  t = SSL_explode_term(a_19);
  if(match_cons(t, sym__2))
    {
      ATerm z_44 = ATgetArgument(t, 0);
      c_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_19;
  t = foldr_2_0(q_19, r_19, t);
  s_106 = t;
  t = SSL_TicksToSeconds(s_106);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm f_107 = NULL,g_107 = NULL,h_107 = NULL;
  f_107 = t;
  if(match_cons(t, sym__2))
    {
      g_107 = ATgetArgument(t, 0);
      h_107 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_45 = t;
    int b_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_107;
        if((g_107 != t))
          {
            _fail(t);
          }
        t = f_107;
        ;
        LocalPopChoice(b_45);
      }
    else
      {
        t = a_45;
        t = (ATerm) ATmakeAppl(sym__2, g_107, h_107);
        {
          ATerm c_45 = t;
          int d_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(g_107, h_107);
              ;
              LocalPopChoice(d_45);
            }
          else
            {
              t = c_45;
              t = SSL_gtr(g_107, h_107);
            }
          t = (ATerm) ATmakeAppl(sym__2, g_107, h_107);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm c_145 (ATerm), ATerm t)
{
  ATerm e_45 = t;
  int f_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_107 = NULL,m_107 = NULL;
      k_107 = t;
      t = term_q_43;
      t = get_config_0_0(t);
      m_107 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_107, term_n_21);
      t = geq_0_0(t);
      t = k_107;
      t = c_145(t);
      ;
      LocalPopChoice(f_45);
    }
  else
    {
      t = e_45;
    }
  return(t);
}
ATerm s_19 (ATerm t)
{
  ATerm o_107 = NULL,p_107 = NULL,q_107 = NULL,r_107 = NULL;
  t = run_time_0_0(t);
  o_107 = t;
  t = term_h_13;
  t = whoami_0_0(t);
  p_107 = t;
  t = term_k_21;
  q_107 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_45), o_107), term_g_45), p_107);
  r_107 = t;
  t = SSL_printnl(q_107, r_107);
  t = (ATerm) ATmakeAppl(sym__2, term_k_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_45), o_107), term_g_45), p_107));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(s_19, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm s_107 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_34;
  s_107 = t;
  t = SSL_exit(s_107);
  return(t);
}
ATerm u_19 (ATerm t)
{
  ATerm i_45 = t;
  int j_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
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
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(l_45);
          }
        else
          {
            t = k_45;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm s_147 (ATerm), ATerm t)
{
  ATerm m_45 = t;
  int n_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_45;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(n_45);
    }
  else
    {
      t = m_45;
      t = fetch_1_0(u_19, t);
    }
  t = s_147(t);
  return(t);
}
ATerm map_1_0 (ATerm t_127 (ATerm), ATerm t)
{
  ATerm t_107 (ATerm t)
  {
    ATerm p_45 = t;
    int q_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(q_45);
      }
    else
      {
        t = p_45;
        t = Cons_2_0(t_127, t_107, t);
      }
    return(t);
  }
  t = t_107(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm v_107 = NULL,w_107 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_107 = ATgetFirst((ATermList) t);
      w_107 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm a_108 = NULL,b_108 = NULL;
        t = w_107;
        t = g_0(t);
        a_108 = t;
        t = v_107;
        t = f_0(t);
        b_108 = t;
        t = w_107;
        {
          ATerm v_19 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(a_108), b_108);
            return(t);
          }
          t = reverse_acc_2_0(f_0, v_19, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_h_13;
      t = g_0(t);
    }
  return(t);
}
ATerm f_11 (ATerm w_66, ATerm x_66, ATerm t)
{
  t = SSL_table_get(w_66, x_66);
  return(t);
}
ATerm Program_1_0 (ATerm n_119 (ATerm), ATerm t)
{
  ATerm c_108 = NULL,d_108 = NULL,e_108 = NULL,f_108 = NULL,s_4 = NULL,t_4 = NULL;
  f_108 = t;
  if(match_cons(t, sym_Program_1))
    {
      d_108 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_108);
  c_108 = t;
  t = d_108;
  t = n_119(t);
  e_108 = t;
  t_4 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, e_108);
  s_4 = t;
  t = SSLsetAnnotations(s_4, c_108);
  return(t);
}
ATerm w_19 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm z_19 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm c_20 (ATerm t)
{
  ATerm k_108 = NULL;
  k_108 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_108), term_r_45);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm i_108 = NULL,j_108 = NULL;
  ATerm s_45 = t;
  int t_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_44;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(t_45);
    }
  else
    {
      t = s_45;
      t = fetch_1_0(w_19, t);
    }
  t = term_u_45;
  t = echo_0_0(t);
  t = term_g_44;
  i_108 = t;
  t = term_h_44;
  j_108 = t;
  t = term_v_45;
  t = f_11(i_108, j_108, t);
  t = reverse_acc_2_0(_id, z_19, t);
  t = map_1_0(c_20, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm o_119 (ATerm), ATerm t)
{
  ATerm l_108 = NULL,m_108 = NULL,n_108 = NULL,o_108 = NULL,w_4 = NULL,x_4 = NULL;
  o_108 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      m_108 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_108);
  l_108 = t;
  t = m_108;
  t = o_119(t);
  n_108 = t;
  x_4 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, n_108);
  w_4 = t;
  t = SSLsetAnnotations(w_4, l_108);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm w_108 = NULL,x_108 = NULL,z_108 = NULL;
  w_108 = t;
  {
    ATerm w_45 = t;
    int x_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = w_108;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm z_45 = ATgetFirst((ATermList) t);
                ATerm b_46 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = w_108;
          }
        ;
        LocalPopChoice(x_45);
      }
    else
      {
        t = w_45;
        t = (ATerm) ATinsert(ATempty, w_108);
      }
    x_108 = t;
    t = term_i_42;
    z_108 = t;
    t = SSL_printnl(z_108, x_108);
    t = w_108;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_u_44;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm d_20 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_20 (ATerm t)
{
  ATerm d_109 = NULL,e_109 = NULL;
  t = term_c_46;
  d_109 = t;
  t = term_h_13;
  e_109 = t;
  t = term_d_46;
  t = i_11(d_109, e_109, t);
  return(t);
}
ATerm f_20 (ATerm t)
{
  t = term_e_46;
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
  ATerm h_109 = NULL,i_109 = NULL,j_109 = NULL,k_109 = NULL;
  t = term_c_46;
  h_109 = t;
  t = term_h_13;
  i_109 = t;
  t = term_d_46;
  t = i_11(h_109, i_109, t);
  t = term_f_46;
  j_109 = t;
  t = term_h_13;
  k_109 = t;
  t = term_g_46;
  t = i_11(j_109, k_109, t);
  t = term_h_46;
  return(t);
}
ATerm i_20 (ATerm t)
{
  t = term_i_46;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm j_46 = t;
  int k_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_20, e_20, f_20, t);
      ;
      LocalPopChoice(k_46);
    }
  else
    {
      t = j_46;
      t = Option_3_0(g_20, h_20, i_20, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm a_105 (ATerm), ATerm b_105 (ATerm), ATerm t)
{
  ATerm l_109 = NULL,m_109 = NULL,n_109 = NULL,o_109 = NULL,p_109 = NULL,t_109 = NULL,y_4 = NULL,z_4 = NULL;
  t_109 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_109 = ATgetFirst((ATermList) t);
      n_109 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_109);
  l_109 = t;
  t = m_109;
  t = a_105(t);
  o_109 = t;
  t = n_109;
  t = b_105(t);
  p_109 = t;
  z_4 = t;
  t = (ATerm) ATinsert(CheckATermList(p_109), o_109);
  y_4 = t;
  t = SSLsetAnnotations(y_4, l_109);
  return(t);
}
ATerm j_20 (ATerm t)
{
  ATerm j_110 = NULL,k_110 = NULL;
  j_110 = t;
  t = term_u_44;
  k_110 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_44, j_110);
  t = i_11(k_110, j_110, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, j_110);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_149 (ATerm), ATerm t)
{
  ATerm e_110 = NULL;
  e_110 = t;
  {
    ATerm l_46 = t;
    int m_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_n_46;
        t = v_149(t);
        ;
        LocalPopChoice(m_46);
      }
    else
      {
        t = l_46;
      }
    t = e_110;
    {
      ATerm p_20 (ATerm t)
      {
        ATerm q_46 = t;
        int r_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_46 = t;
            int v_46 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(v_46);
              }
            else
              {
                t = s_46;
                t = v_149(t);
                t = Cons_2_0(_id, p_20, t);
              }
            ;
            LocalPopChoice(r_46);
          }
        else
          {
            t = q_46;
            {
              ATerm m_110 = NULL,n_110 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  m_110 = ATgetFirst((ATermList) t);
                  n_110 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(n_110), (ATerm) ATmakeAppl(sym_Undefined_1, m_110));
            }
          }
        return(t);
      }
      t = Cons_2_0(j_20, p_20, t);
    }
  }
  return(t);
}
ATerm s_20 (ATerm t)
{
  ATerm f_111 = NULL;
  f_111 = t;
  if(match_string(t, "--help"))
    {
      t = f_111;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = f_111;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = f_111;
        }
    }
  return(t);
}
ATerm t_20 (ATerm t)
{
  ATerm g_111 = NULL,h_111 = NULL;
  t = term_o_45;
  g_111 = t;
  t = term_h_13;
  h_111 = t;
  t = term_w_46;
  t = i_11(g_111, h_111, t);
  t = term_y_46;
  return(t);
}
ATerm w_20 (ATerm t)
{
  t = term_c_47;
  return(t);
}
ATerm x_20 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm u_149 (ATerm), ATerm t)
{
  ATerm y_110 = NULL,z_110 = NULL,a_111 = NULL,b_111 = NULL,c_111 = NULL,d_111 = NULL,e_111 = NULL;
  y_110 = t;
  t = term_g_44;
  b_111 = t;
  t = term_h_44;
  c_111 = t;
  t = (ATerm) ATempty;
  d_111 = t;
  t = SSL_table_put(b_111, c_111, d_111);
  t = y_110;
  {
    ATerm r_20 (ATerm t)
    {
      ATerm d_47 = t;
      int e_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_149(t);
          ;
          LocalPopChoice(e_47);
        }
      else
        {
          t = d_47;
          {
            ATerm g_47 = t;
            int h_47 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(s_20, t_20, w_20, t);
                ;
                LocalPopChoice(h_47);
              }
            else
              {
                t = g_47;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(r_20, t);
    {
      ATerm i_47 = t;
      int j_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_111 = NULL;
          o_111 = t;
          {
            ATerm r_47 = t;
            int s_47 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_19 = NULL;
                t = o_111;
                {
                  ATerm u_47 = t;
                  int v_47 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_o_45;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(v_47);
                    }
                  else
                    {
                      t = u_47;
                      t = fetch_1_0(x_20, t);
                    }
                  t = o_111;
                  t = default_system_usage_0_0(t);
                  t = term_u_34;
                  t_19 = t;
                  t = SSL_exit(t_19);
                }
                ;
                LocalPopChoice(s_47);
              }
            else
              {
                t = r_47;
                {
                  ATerm y_19 = NULL;
                  t = term_c_46;
                  t = get_config_0_0(t);
                  t = o_111;
                  t = default_system_about_0_0(t);
                  t = term_u_34;
                  y_19 = t;
                  t = SSL_exit(y_19);
                }
              }
          }
          ;
          LocalPopChoice(j_47);
        }
      else
        {
          t = i_47;
          {
            ATerm w_47 = t;
            int x_47 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_111 = NULL,q_111 = NULL,r_111 = NULL;
                ATerm y_20 (ATerm t)
                {
                  ATerm z_20 (ATerm t)
                  {
                    if(((z_110 != NULL) && (z_110 != t)))
                      _fail(t);
                    else
                      z_110 = t;
                    return(t);
                  }
                  t = Undefined_1_0(z_20, t);
                  return(t);
                }
                t = fetch_1_0(y_20, t);
                t = term_k_21;
                p_111 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_110)), term_y_47);
                q_111 = t;
                t = SSL_printnl(p_111, q_111);
                t = (ATerm) ATmakeAppl(sym__2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_110)), term_y_47));
                t = default_system_usage_0_0(t);
                t = term_n_21;
                r_111 = t;
                t = SSL_exit(r_111);
                ;
                LocalPopChoice(x_47);
              }
            else
              {
                t = w_47;
              }
          }
        }
      a_111 = t;
      t = term_g_44;
      e_111 = t;
      t = SSL_table_destroy(e_111);
      t = a_111;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm u_147 (ATerm), ATerm v_147 (ATerm), ATerm w_147 (ATerm), ATerm x_147 (ATerm), ATerm t)
{
  ATerm u_111 = NULL,v_111 = NULL,w_111 = NULL,x_111 = NULL;
  t = parse_options_1_0(u_147, t);
  u_111 = t;
  t = term_z_47;
  v_111 = t;
  t = SSL_table_create(v_111);
  t = term_z_47;
  w_111 = t;
  t = term_f_48;
  x_111 = t;
  t = SSL_table_put(w_111, x_111, u_111);
  t = u_111;
  t = w_147(t);
  {
    ATerm g_48 = t;
    int k_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(v_147, t);
        ;
        LocalPopChoice(k_48);
      }
    else
      {
        t = g_48;
        {
          ATerm l_48 = t;
          int m_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_147(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(m_48);
            }
          else
            {
              t = l_48;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm b_21 (ATerm t)
{
  t = if_verbose2_1_0(g_21, t);
  return(t);
}
ATerm d_21 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_21 (ATerm t)
{
  ATerm y_111 = NULL,z_111 = NULL;
  t = term_n_48;
  y_111 = t;
  t = term_h_13;
  z_111 = t;
  t = term_o_48;
  t = i_11(y_111, z_111, t);
  t = term_p_48;
  return(t);
}
ATerm f_21 (ATerm t)
{
  t = term_r_48;
  return(t);
}
ATerm g_21 (ATerm t)
{
  ATerm a_112 = NULL,b_112 = NULL,c_112 = NULL,d_112 = NULL;
  a_112 = t;
  t = term_u_44;
  t = get_config_0_0(t);
  b_112 = t;
  t = term_k_21;
  c_112 = t;
  t = (ATerm) ATinsert(ATempty, b_112);
  d_112 = t;
  t = SSL_printnl(c_112, d_112);
  t = a_112;
  return(t);
}
ATerm iowrap_3_0 (ATerm d_147 (ATerm), ATerm e_147 (ATerm), ATerm f_147 (ATerm), ATerm t)
{
  ATerm a_21 (ATerm t)
  {
    ATerm s_48 = t;
    int x_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_147(t);
        ;
        LocalPopChoice(x_48);
      }
    else
      {
        t = s_48;
        {
          ATerm y_48 = t;
          int a_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(a_49);
            }
          else
            {
              t = y_48;
              {
                ATerm b_49 = t;
                int c_49 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(c_49);
                  }
                else
                  {
                    t = b_49;
                    {
                      ATerm d_49 = t;
                      int e_49 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(d_21, e_21, f_21, t);
                          ;
                          LocalPopChoice(e_49);
                        }
                      else
                        {
                          t = d_49;
                          {
                            ATerm f_49 = t;
                            int l_49 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(l_49);
                              }
                            else
                              {
                                t = f_49;
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
  ATerm c_21 (ATerm t)
  {
    ATerm e_112 = NULL,f_112 = NULL,n_112 = NULL;
    e_112 = t;
    {
      ATerm m_49 = t;
      int q_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_21 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((f_112 != NULL) && (f_112 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  f_112 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(h_21, t);
          ;
          LocalPopChoice(q_49);
        }
      else
        {
          t = m_49;
          t = term_r_49;
          f_112 = t;
        }
      t = not_null(f_112);
      t = ReadFromFile_0_0(t);
      n_112 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_112, n_112);
      t = apply_strategy_1_0(d_147, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(a_21, f_147, b_21, c_21, t);
  return(t);
}
ATerm i_21 (ATerm t)
{
  t = _2_0(_id, j_21, t);
  return(t);
}
ATerm j_21 (ATerm t)
{
  t = apply_to_bodies_1_0(match_to_dfa_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(i_21, _fail, default_usage_0_0, t);
  return(t);
}
