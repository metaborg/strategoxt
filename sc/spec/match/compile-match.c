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
ATerm term_y_76;
ATerm term_s_74;
ATerm term_r_74;
ATerm term_q_74;
ATerm term_e_74;
ATerm term_d_74;
ATerm term_c_74;
ATerm term_g_73;
ATerm term_f_73;
ATerm term_z_72;
ATerm term_q_72;
ATerm term_p_72;
ATerm term_o_72;
ATerm term_n_72;
ATerm term_m_72;
ATerm term_l_72;
ATerm term_b_72;
ATerm term_j_71;
ATerm term_e_71;
ATerm term_x_70;
ATerm term_w_70;
ATerm term_g_70;
ATerm term_f_70;
ATerm term_e_70;
ATerm term_d_70;
ATerm term_y_69;
ATerm term_x_69;
ATerm term_w_69;
ATerm term_v_69;
ATerm term_q_69;
ATerm term_p_69;
ATerm term_o_69;
ATerm term_n_69;
ATerm term_m_69;
ATerm term_l_69;
ATerm term_k_69;
ATerm term_j_69;
ATerm term_i_69;
ATerm term_f_69;
ATerm term_c_69;
ATerm term_z_68;
ATerm term_h_68;
ATerm term_g_68;
ATerm term_q_67;
ATerm term_n_67;
ATerm term_k_67;
ATerm term_f_66;
ATerm term_f_60;
ATerm term_e_60;
ATerm term_l_57;
ATerm term_d_57;
ATerm term_a_57;
ATerm term_s_56;
ATerm term_h_46;
ATerm term_e_46;
ATerm term_u_45;
ATerm term_t_45;
ATerm term_s_45;
ATerm term_j_43;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_x_11;
void init_constant_terms (void)
{
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_43));
  term_j_43 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_s_45));
  term_s_45 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_t_45));
  term_t_45 = (ATerm) ATmakeAppl(sym_Op_2, term_s_45, (ATerm) ATempty);
  ATprotect(&(term_u_45));
  term_u_45 = (ATerm) ATmakeAppl(sym_ConstType_1, term_t_45);
  ATprotect(&(term_e_46));
  term_e_46 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_s_56));
  term_s_56 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_a_57));
  term_a_57 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_57));
  term_d_57 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_l_57));
  term_l_57 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_e_60));
  term_e_60 = (ATerm) ATmakeAppl(ATmakeSymbol("MatrixSeenBefore", 0, ATtrue));
  ATprotect(&(term_f_60));
  term_f_60 = (ATerm) ATmakeAppl(ATmakeSymbol("f_1", 0, ATtrue));
  ATprotect(&(term_f_66));
  term_f_66 = (ATerm) ATmakeAppl(sym_Off_1, (ATerm) ATempty);
  ATprotect(&(term_k_67));
  term_k_67 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_n_67));
  term_n_67 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_q_67));
  term_q_67 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_68));
  term_g_68 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_68));
  term_h_68 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_z_68));
  term_z_68 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_c_69));
  term_c_69 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_f_69));
  term_f_69 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_i_69));
  term_i_69 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_j_69));
  term_j_69 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_k_69));
  term_k_69 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_l_69));
  term_l_69 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_57);
  ATprotect(&(term_m_69));
  term_m_69 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_69));
  term_n_69 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_o_69));
  term_o_69 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_p_69));
  term_p_69 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_q_69));
  term_q_69 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_v_69));
  term_v_69 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_69));
  term_w_69 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_69));
  term_x_69 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_69));
  term_y_69 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_d_70));
  term_d_70 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_e_70));
  term_e_70 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_f_70));
  term_f_70 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_g_70));
  term_g_70 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_w_70));
  term_w_70 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_x_70));
  term_x_70 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_e_71));
  term_e_71 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_71));
  term_j_71 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_72));
  term_b_72 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_72));
  term_l_72 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_m_72));
  term_m_72 = (ATerm) ATmakeAppl(sym__3, term_z_68, term_l_72, term_x_11);
  ATprotect(&(term_n_72));
  term_n_72 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_o_72));
  term_o_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_p_72));
  term_p_72 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_72));
  term_q_72 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_z_72));
  term_z_72 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_73));
  term_f_73 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_g_73));
  term_g_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_74));
  term_c_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_74));
  term_d_74 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_e_74));
  term_e_74 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_q_74));
  term_q_74 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_r_74));
  term_r_74 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_s_74));
  term_s_74 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_y_76));
  term_y_76 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm i_19 (ATerm);
ATerm j_19 (ATerm);
ATerm m_19 (ATerm);
ATerm q_19 (ATerm);
ATerm t_19 (ATerm);
ATerm u_19 (ATerm);
ATerm v_19 (ATerm);
ATerm w_19 (ATerm);
ATerm y_19 (ATerm);
ATerm z_19 (ATerm);
ATerm a_20 (ATerm);
ATerm b_20 (ATerm);
ATerm d_20 (ATerm);
ATerm e_20 (ATerm);
ATerm f_20 (ATerm);
ATerm h_20 (ATerm);
ATerm spaste_1_0 (ATerm h_120 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm z_109 (ATerm), ATerm a_110 (ATerm), ATerm);
ATerm Let_2_0 (ATerm c_109 (ATerm), ATerm d_109 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm i_120 (ATerm), ATerm j_120 (ATerm), ATerm k_120 (ATerm), ATerm);
ATerm j_20 (ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm SVar_1_0 (ATerm b_109 (ATerm), ATerm);
ATerm DistBinding_2_0 (ATerm f_134 (ATerm), ATerm g_134 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm m_20 (ATerm);
ATerm n_20 (ATerm);
ATerm o_20 (ATerm);
ATerm RnBinding_2_0 (ATerm z_133 (ATerm), ATerm a_134 (ATerm (ATerm), ATerm), ATerm);
ATerm lookup_0_0 (ATerm);
ATerm env_alltd_1_0 (ATerm n_134 (ATerm), ATerm);
ATerm rename_4_0 (ATerm u_133 (ATerm (ATerm), ATerm), ATerm v_133 (ATerm), ATerm w_133 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm x_133 (ATerm (ATerm), ATerm), ATerm);
ATerm z_20 (ATerm);
ATerm a_21 (ATerm);
ATerm b_21 (ATerm);
ATerm c_21 (ATerm);
ATerm e_21 (ATerm);
ATerm f_21 (ATerm);
ATerm g_21 (ATerm);
ATerm h_21 (ATerm);
ATerm tpaste_1_0 (ATerm d_120 (ATerm), ATerm);
ATerm i_21 (ATerm);
ATerm j_21 (ATerm);
ATerm k_21 (ATerm);
ATerm l_21 (ATerm);
ATerm n_21 (ATerm);
ATerm o_21 (ATerm);
ATerm p_21 (ATerm);
ATerm strename_0_0 (ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm q_21 (ATerm);
ATerm r_21 (ATerm);
ATerm s_21 (ATerm);
ATerm t_21 (ATerm);
ATerm BuildMatchFusion_0_0 (ATerm);
ATerm MisMatch_0_0 (ATerm);
ATerm r_28 (ATerm q_27, ATerm r_27, ATerm s_27, ATerm);
ATerm BuildMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm h_122 (ATerm), ATerm);
ATerm LetHoist_0_0 (ATerm);
ATerm Idempotency_0_0 (ATerm);
ATerm AssociateR_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm y_21 (ATerm);
ATerm z_21 (ATerm);
ATerm a_22 (ATerm);
ATerm c_22 (ATerm);
ATerm d_22 (ATerm);
ATerm e_22 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm g_22 (ATerm);
ATerm ElimFail_0_0 (ATerm);
ATerm ElimId_0_0 (ATerm);
ATerm Simplify_0_0 (ATerm);
ATerm Seqs_1_0 (ATerm j_113 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm g_109 (ATerm), ATerm h_109 (ATerm), ATerm i_109 (ATerm), ATerm);
ATerm Prim_2_0 (ATerm g_110 (ATerm), ATerm h_110 (ATerm), ATerm);
ATerm Var_1_0 (ATerm s_105 (ATerm), ATerm);
ATerm Match_1_0 (ATerm j_109 (ATerm), ATerm);
ATerm Assign_2_0 (ATerm u_112 (ATerm), ATerm v_112 (ATerm), ATerm);
ATerm list_1_0 (ATerm i_127 (ATerm), ATerm);
ATerm Op_2_0 (ATerm y_105 (ATerm), ATerm z_105 (ATerm), ATerm);
ATerm Str_1_0 (ATerm w_105 (ATerm), ATerm);
ATerm Real_1_0 (ATerm v_105 (ATerm), ATerm);
ATerm Int_1_0 (ATerm u_105 (ATerm), ATerm);
ATerm Build_1_0 (ATerm k_109 (ATerm), ATerm);
ATerm k_22 (ATerm);
ATerm l_22 (ATerm);
ATerm m_22 (ATerm);
ATerm n_22 (ATerm);
ATerm simple_strategy_0_0 (ATerm);
ATerm isect_1_0 (ATerm a_129 (ATerm), ATerm);
ATerm Matrix_2_0 (ATerm d_112 (ATerm), ATerm e_112 (ATerm), ATerm);
ATerm DynamicRules_1_0 (ATerm j_108 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm a_108 (ATerm), ATerm b_108 (ATerm), ATerm c_108 (ATerm), ATerm d_108 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm e_120 (ATerm), ATerm f_120 (ATerm), ATerm g_120 (ATerm), ATerm);
ATerm r_22 (ATerm);
ATerm s_22 (ATerm);
ATerm t_22 (ATerm);
ATerm u_22 (ATerm);
ATerm Bind4_0_0 (ATerm);
ATerm v_22 (ATerm);
ATerm w_22 (ATerm);
ATerm a_23 (ATerm);
ATerm b_23 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm c_23 (ATerm);
ATerm e_23 (ATerm);
ATerm f_23 (ATerm);
ATerm h_23 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm diff_1_0 (ATerm c_129 (ATerm), ATerm);
ATerm j_23 (ATerm);
ATerm k_23 (ATerm);
ATerm l_23 (ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm while_not_2_0 (ATerm d_138 (ATerm), ATerm e_138 (ATerm), ATerm);
ATerm for_3_0 (ATerm g_138 (ATerm), ATerm h_138 (ATerm), ATerm i_138 (ATerm), ATerm);
ATerm o_23 (ATerm);
ATerm q_23 (ATerm);
ATerm s_23 (ATerm);
ATerm u_23 (ATerm);
ATerm v_23 (ATerm);
ATerm z_23 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm b_24 (ATerm);
ATerm c_24 (ATerm);
ATerm d_24 (ATerm);
ATerm e_24 (ATerm);
ATerm f_24 (ATerm);
ATerm g_24 (ATerm);
ATerm k_24 (ATerm);
ATerm free_vars_3_0 (ATerm x_135 (ATerm), ATerm y_135 (ATerm), ATerm z_135 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm l_24 (ATerm);
ATerm n_24 (ATerm);
ATerm t_12 (ATerm p_12 (ATerm), ATerm q_12 (ATerm), ATerm r_12 (ATerm), ATerm);
ATerm c_25 (ATerm);
ATerm d_25 (ATerm);
ATerm e_25 (ATerm);
ATerm g_25 (ATerm);
ATerm h_25 (ATerm);
ATerm i_25 (ATerm);
ATerm j_25 (ATerm);
ATerm k_25 (ATerm);
ATerm l_25 (ATerm);
ATerm m_25 (ATerm);
ATerm n_25 (ATerm);
ATerm RowLet_1_0 (ATerm u_0 (ATerm), ATerm);
ATerm r_25 (ATerm);
ATerm s_25 (ATerm);
ATerm t_25 (ATerm);
ATerm MatrixScope_0_0 (ATerm);
ATerm assert_1_0 (ATerm e_133 (ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm a_26 (ATerm);
ATerm default_state_0_0 (ATerm);
ATerm b_26 (ATerm);
ATerm c_26 (ATerm);
ATerm d_26 (ATerm);
ATerm e_26 (ATerm);
ATerm MatchCons_2_0 (ATerm q_0 (ATerm), ATerm t_0 (ATerm), ATerm);
ATerm ConsTransition_1_0 (ATerm q_149 (ATerm), ATerm);
ATerm Transition_0_0 (ATerm);
ATerm filter_1_0 (ATerm i_133 (ATerm), ATerm);
ATerm listtd_1_0 (ATerm o_128 (ATerm), ATerm);
ATerm l_26 (ATerm);
ATerm m_26 (ATerm);
ATerm n_26 (ATerm);
ATerm o_26 (ATerm);
ATerm ConsArgs_0_0 (ATerm);
ATerm p_26 (ATerm);
ATerm outedges_0_0 (ATerm);
ATerm c_62 (ATerm k_61, ATerm);
ATerm r_26 (ATerm);
ATerm s_26 (ATerm);
ATerm get_path_0_0 (ATerm);
ATerm t_26 (ATerm);
ATerm u_26 (ATerm);
ATerm v_26 (ATerm);
ATerm w_26 (ATerm);
ATerm Mixture_0_0 (ATerm);
ATerm x_26 (ATerm);
ATerm y_26 (ATerm);
ATerm z_26 (ATerm);
ATerm a_27 (ATerm);
ATerm b_27 (ATerm);
ATerm ShiftColumn_0_0 (ATerm);
ATerm As_2_0 (ATerm j_106 (ATerm), ATerm k_106 (ATerm), ATerm);
ATerm Row_3_0 (ATerm a_112 (ATerm), ATerm b_112 (ATerm), ATerm c_112 (ATerm), ATerm);
ATerm f_27 (ATerm);
ATerm g_27 (ATerm);
ATerm h_27 (ATerm);
ATerm i_27 (ATerm);
ATerm SkipWild_0_0 (ATerm);
ATerm repeat_1_0 (ATerm o_137 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm b_133 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm k_124 (ATerm), ATerm l_124 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm a_133 (ATerm), ATerm);
ATerm scope_2_0 (ATerm c_133 (ATerm), ATerm d_133 (ATerm), ATerm);
ATerm l_27 (ATerm);
ATerm n_27 (ATerm);
ATerm p_27 (ATerm);
ATerm u_27 (ATerm);
ATerm w_27 (ATerm);
ATerm y_27 (ATerm);
ATerm MatrixMerge_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm e_121 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm v_131 (ATerm), ATerm w_131 (ATerm), ATerm x_131 (ATerm), ATerm);
ATerm f_28 (ATerm);
ATerm i_28 (ATerm);
ATerm k_28 (ATerm);
ATerm collect_om_1_0 (ATerm r_130 (ATerm), ATerm);
ATerm CollectSubst_0_0 (ATerm);
ATerm IgnoreVar_0_0 (ATerm);
ATerm union_1_0 (ATerm h_129 (ATerm), ATerm);
ATerm v_28 (ATerm);
ATerm y_28 (ATerm);
ATerm z_28 (ATerm);
ATerm a_29 (ATerm);
ATerm b_29 (ATerm);
ATerm i_29 (ATerm);
ATerm l_29 (ATerm);
ATerm CollectSplit_2_0 (ATerm e_130 (ATerm), ATerm f_130 (ATerm), ATerm);
ATerm collect_split_2_0 (ATerm f_131 (ATerm), ATerm g_131 (ATerm), ATerm);
ATerm NZip2_0_0 (ATerm);
ATerm genzip_4_0 (ATerm p_125 (ATerm), ATerm q_125 (ATerm), ATerm r_125 (ATerm), ATerm s_125 (ATerm), ATerm);
ATerm n_29 (ATerm);
ATerm o_29 (ATerm);
ATerm nzip0_1_0 (ATerm a_126 (ATerm), ATerm);
ATerm Propagate_0_0 (ATerm);
ATerm topdown_1_0 (ATerm d_121 (ATerm), ATerm);
ATerm v_29 (ATerm);
ATerm w_29 (ATerm);
ATerm x_29 (ATerm);
ATerm term_to_matrix_0_0 (ATerm);
ATerm Scope_2_0 (ATerm m_109 (ATerm), ATerm n_109 (ATerm), ATerm);
ATerm Seq_2_0 (ATerm q_109 (ATerm), ATerm r_109 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm s_109 (ATerm), ATerm t_109 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm q_108 (ATerm), ATerm r_108 (ATerm), ATerm);
ATerm c_30 (ATerm);
ATerm d_30 (ATerm);
ATerm match_to_matrix_0_0 (ATerm);
ATerm e_30 (ATerm);
ATerm g_30 (ATerm);
ATerm h_30 (ATerm);
ATerm match_to_dfa_0_0 (ATerm);
ATerm SDefT_4_0 (ATerm u_111 (ATerm), ATerm v_111 (ATerm), ATerm w_111 (ATerm), ATerm x_111 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm r_111 (ATerm), ATerm s_111 (ATerm), ATerm t_111 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm u_104 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm z_104 (ATerm), ATerm);
ATerm l_30 (ATerm);
ATerm apply_to_bodies_1_0 (ATerm e_119 (ATerm), ATerm);
ATerm _2_0 (ATerm b_100 (ATerm), ATerm c_100 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm c_143 (ATerm), ATerm);
ATerm r_30 (ATerm);
ATerm t_30 (ATerm);
ATerm x_30 (ATerm);
ATerm y_30 (ATerm);
ATerm b_31 (ATerm);
ATerm c_31 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm e_146 (ATerm), ATerm);
ATerm u_82 (ATerm o_82, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm d_31 (ATerm);
ATerm e_31 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm p_127 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm v_127 (ATerm), ATerm);
ATerm g_31 (ATerm);
ATerm h_31 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm j_31 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm n_144 (ATerm), ATerm);
ATerm k_31 (ATerm);
ATerm l_31 (ATerm);
ATerm m_31 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm o_31 (ATerm);
ATerm s_31 (ATerm);
ATerm t_31 (ATerm);
ATerm u_31 (ATerm);
ATerm w_31 (ATerm);
ATerm x_31 (ATerm);
ATerm y_31 (ATerm);
ATerm z_31 (ATerm);
ATerm a_32 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm d_32 (ATerm);
ATerm f_32 (ATerm);
ATerm h_32 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm i_32 (ATerm);
ATerm j_32 (ATerm);
ATerm k_32 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm t_131 (ATerm), ATerm u_131 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm l_32 (ATerm);
ATerm m_32 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm m_144 (ATerm), ATerm);
ATerm n_32 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm r_32 (ATerm);
ATerm need_help_1_0 (ATerm c_147 (ATerm), ATerm);
ATerm map_1_0 (ATerm e_127 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm y_118 (ATerm), ATerm);
ATerm u_32 (ATerm);
ATerm v_32 (ATerm);
ATerm w_32 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm z_118 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm x_32 (ATerm);
ATerm y_32 (ATerm);
ATerm a_33 (ATerm);
ATerm b_33 (ATerm);
ATerm c_33 (ATerm);
ATerm d_33 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm q_104 (ATerm), ATerm r_104 (ATerm), ATerm);
ATerm e_33 (ATerm);
ATerm parse_options_p__1_0 (ATerm f_149 (ATerm), ATerm);
ATerm h_33 (ATerm);
ATerm i_33 (ATerm);
ATerm j_33 (ATerm);
ATerm k_33 (ATerm);
ATerm parse_options_1_0 (ATerm e_149 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm e_147 (ATerm), ATerm f_147 (ATerm), ATerm g_147 (ATerm), ATerm h_147 (ATerm), ATerm);
ATerm t_33 (ATerm);
ATerm v_33 (ATerm);
ATerm w_33 (ATerm);
ATerm x_33 (ATerm);
ATerm y_33 (ATerm);
ATerm iowrap_3_0 (ATerm n_146 (ATerm), ATerm o_146 (ATerm), ATerm p_146 (ATerm), ATerm);
ATerm a_34 (ATerm);
ATerm b_34 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm j_0 = NULL,m_0 = NULL,f_0 = NULL,o_0 = NULL,p_0 = NULL,s_0 = NULL,w_0 = NULL,x_0 = NULL;
  j_0 = t;
  t = term_x_11;
  t = whoami_0_0(t);
  m_0 = t;
  p_0 = t;
  t = term_c_34;
  f_0 = t;
  t = p_0;
  s_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_34), m_0), term_d_34);
  o_0 = t;
  t = SSL_printnl(f_0, o_0);
  x_0 = t;
  t = term_g_34;
  w_0 = t;
  t = SSL_exit(w_0);
  t = j_0;
  return(t);
}
ATerm i_19 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm h_34 = ATgetArgument(t, 0);
      if(((ATgetType(h_34) != AT_LIST) || !(ATisEmpty(h_34))))
        _fail(t);
      {
        ATerm j_34 = ATgetArgument(t, 1);
        if(((ATgetType(j_34) != AT_LIST) || !(ATisEmpty(j_34))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_19 (ATerm t)
{
  ATerm z_0 = NULL,d_1 = NULL,e_1 = NULL,g_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_34 = ATgetArgument(t, 0);
      if(((ATgetType(k_34) == AT_LIST) && !(ATisEmpty(k_34))))
        {
          z_0 = ATgetFirst((ATermList) k_34);
          e_1 = (ATerm) ATgetNext((ATermList) k_34);
        }
      else
        _fail(t);
      {
        ATerm l_34 = ATgetArgument(t, 1);
        if(((ATgetType(l_34) == AT_LIST) && !(ATisEmpty(l_34))))
          {
            d_1 = ATgetFirst((ATermList) l_34);
            g_1 = (ATerm) ATgetNext((ATermList) l_34);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_0, d_1), (ATerm) ATmakeAppl(sym__2, e_1, g_1));
  return(t);
}
ATerm m_19 (ATerm t)
{
  ATerm h_1 = NULL,i_1 = NULL;
  if(match_cons(t, sym__2))
    {
      h_1 = ATgetArgument(t, 0);
      i_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(i_1), h_1);
  return(t);
}
ATerm q_19 (ATerm t)
{
  ATerm k_1 = NULL,o_1 = NULL,r_1 = NULL,s_1 = NULL,t_1 = NULL;
  if(match_cons(t, sym__2))
    {
      k_1 = ATgetArgument(t, 0);
      t_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_1;
  {
    ATerm m_34 = t;
    int p_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm q_34 = ATgetArgument(t, 0);
            o_1 = ATgetArgument(t, 1);
            r_1 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(p_34);
        t = (ATerm) ATmakeAppl(sym_SDef_3, t_1, o_1, r_1);
      }
    else
      {
        t = m_34;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm r_34 = ATgetArgument(t, 0);
            o_1 = ATgetArgument(t, 1);
            r_1 = ATgetArgument(t, 2);
            s_1 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, t_1, o_1, r_1, s_1);
      }
  }
  return(t);
}
ATerm t_19 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm u_34 = ATgetArgument(t, 0);
      if(((ATgetType(u_34) != AT_LIST) || !(ATisEmpty(u_34))))
        _fail(t);
      {
        ATerm w_34 = ATgetArgument(t, 1);
        if(((ATgetType(w_34) != AT_LIST) || !(ATisEmpty(w_34))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm u_19 (ATerm t)
{
  ATerm c_2 = NULL,f_2 = NULL,g_2 = NULL,h_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_34 = ATgetArgument(t, 0);
      if(((ATgetType(x_34) == AT_LIST) && !(ATisEmpty(x_34))))
        {
          c_2 = ATgetFirst((ATermList) x_34);
          g_2 = (ATerm) ATgetNext((ATermList) x_34);
        }
      else
        _fail(t);
      {
        ATerm y_34 = ATgetArgument(t, 1);
        if(((ATgetType(y_34) == AT_LIST) && !(ATisEmpty(y_34))))
          {
            f_2 = ATgetFirst((ATermList) y_34);
            h_2 = (ATerm) ATgetNext((ATermList) y_34);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_2, f_2), (ATerm) ATmakeAppl(sym__2, g_2, h_2));
  return(t);
}
ATerm v_19 (ATerm t)
{
  ATerm i_2 = NULL,j_2 = NULL;
  if(match_cons(t, sym__2))
    {
      i_2 = ATgetArgument(t, 0);
      j_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_2), i_2);
  return(t);
}
ATerm w_19 (ATerm t)
{
  ATerm l_2 = NULL,o_2 = NULL,q_2 = NULL;
  if(match_cons(t, sym__2))
    {
      l_2 = ATgetArgument(t, 0);
      q_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_2;
  {
    ATerm z_34 = t;
    int a_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm b_35 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(a_35);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, q_2);
      }
    else
      {
        t = z_34;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm c_35 = ATgetArgument(t, 0);
            o_2 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, q_2, o_2);
      }
  }
  return(t);
}
ATerm y_19 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_35 = ATgetArgument(t, 0);
      if(((ATgetType(d_35) != AT_LIST) || !(ATisEmpty(d_35))))
        _fail(t);
      {
        ATerm e_35 = ATgetArgument(t, 1);
        if(((ATgetType(e_35) != AT_LIST) || !(ATisEmpty(e_35))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm z_19 (ATerm t)
{
  ATerm u_2 = NULL,v_2 = NULL,w_2 = NULL,x_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_35 = ATgetArgument(t, 0);
      if(((ATgetType(f_35) == AT_LIST) && !(ATisEmpty(f_35))))
        {
          u_2 = ATgetFirst((ATermList) f_35);
          w_2 = (ATerm) ATgetNext((ATermList) f_35);
        }
      else
        _fail(t);
      {
        ATerm g_35 = ATgetArgument(t, 1);
        if(((ATgetType(g_35) == AT_LIST) && !(ATisEmpty(g_35))))
          {
            v_2 = ATgetFirst((ATermList) g_35);
            x_2 = (ATerm) ATgetNext((ATermList) g_35);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_2, v_2), (ATerm) ATmakeAppl(sym__2, w_2, x_2));
  return(t);
}
ATerm a_20 (ATerm t)
{
  ATerm y_2 = NULL,z_2 = NULL;
  if(match_cons(t, sym__2))
    {
      y_2 = ATgetArgument(t, 0);
      z_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_2), y_2);
  return(t);
}
ATerm b_20 (ATerm t)
{
  ATerm b_3 = NULL,d_3 = NULL,e_3 = NULL;
  if(match_cons(t, sym__2))
    {
      b_3 = ATgetArgument(t, 0);
      e_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_3;
  {
    ATerm h_35 = t;
    int i_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm j_35 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(i_35);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, e_3);
      }
    else
      {
        t = h_35;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm k_35 = ATgetArgument(t, 0);
            d_3 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, e_3, d_3);
      }
  }
  return(t);
}
ATerm d_20 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_35 = ATgetArgument(t, 0);
      if(((ATgetType(l_35) != AT_LIST) || !(ATisEmpty(l_35))))
        _fail(t);
      {
        ATerm m_35 = ATgetArgument(t, 1);
        if(((ATgetType(m_35) != AT_LIST) || !(ATisEmpty(m_35))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm e_20 (ATerm t)
{
  ATerm i_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_35 = ATgetArgument(t, 0);
      if(((ATgetType(n_35) == AT_LIST) && !(ATisEmpty(n_35))))
        {
          i_3 = ATgetFirst((ATermList) n_35);
          k_3 = (ATerm) ATgetNext((ATermList) n_35);
        }
      else
        _fail(t);
      {
        ATerm o_35 = ATgetArgument(t, 1);
        if(((ATgetType(o_35) == AT_LIST) && !(ATisEmpty(o_35))))
          {
            j_3 = ATgetFirst((ATermList) o_35);
            l_3 = (ATerm) ATgetNext((ATermList) o_35);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_3, j_3), (ATerm) ATmakeAppl(sym__2, k_3, l_3));
  return(t);
}
ATerm f_20 (ATerm t)
{
  ATerm m_3 = NULL,n_3 = NULL;
  if(match_cons(t, sym__2))
    {
      m_3 = ATgetArgument(t, 0);
      n_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_3), m_3);
  return(t);
}
ATerm h_20 (ATerm t)
{
  ATerm p_3 = NULL,r_3 = NULL,s_3 = NULL;
  if(match_cons(t, sym__2))
    {
      p_3 = ATgetArgument(t, 0);
      s_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_3;
  {
    ATerm p_35 = t;
    int q_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm r_35 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(q_35);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, s_3);
      }
    else
      {
        t = p_35;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm s_35 = ATgetArgument(t, 0);
            r_3 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, s_3, r_3);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm h_120 (ATerm), ATerm t)
{
  ATerm t_35 = t;
  int v_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_19 (ATerm t)
      {
        ATerm b_0 = NULL,h_0 = NULL;
        b_0 = t;
        t = h_120(t);
        h_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_0, h_0);
        t = genzip_4_0(i_19, j_19, m_19, q_19, t);
        return(t);
      }
      t = Let_2_0(h_19, _id, t);
      ;
      LocalPopChoice(v_35);
    }
  else
    {
      t = t_35;
      {
        ATerm w_35 = t;
        int x_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_19 (ATerm t)
            {
              ATerm r_0 = NULL,v_0 = NULL;
              r_0 = t;
              t = h_120(t);
              v_0 = t;
              t = (ATerm) ATmakeAppl(sym__2, r_0, v_0);
              t = genzip_4_0(t_19, u_19, v_19, w_19, t);
              return(t);
            }
            t = SDef_3_0(_id, s_19, _id, t);
            ;
            LocalPopChoice(x_35);
          }
        else
          {
            t = w_35;
            {
              ATerm y_35 = t;
              int z_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_19 (ATerm t)
                  {
                    ATerm y_0 = NULL,b_1 = NULL;
                    y_0 = t;
                    t = h_120(t);
                    b_1 = t;
                    t = (ATerm) ATmakeAppl(sym__2, y_0, b_1);
                    t = genzip_4_0(y_19, z_19, a_20, b_20, t);
                    return(t);
                  }
                  t = SDefT_4_0(_id, x_19, _id, _id, t);
                  ;
                  LocalPopChoice(z_35);
                }
              else
                {
                  t = y_35;
                  {
                    ATerm a_36 = t;
                    int d_36 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm c_20 (ATerm t)
                        {
                          ATerm n_1 = NULL,q_1 = NULL;
                          n_1 = t;
                          t = h_120(t);
                          q_1 = t;
                          t = (ATerm) ATmakeAppl(sym__2, n_1, q_1);
                          t = genzip_4_0(d_20, e_20, f_20, h_20, t);
                          return(t);
                        }
                        t = RDefT_4_0(_id, c_20, _id, _id, t);
                        ;
                        LocalPopChoice(d_36);
                      }
                    else
                      {
                        t = a_36;
                        {
                          ATerm i_20 (ATerm t)
                          {
                            ATerm w_3 = NULL;
                            t = h_120(t);
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                w_3 = ATgetFirst((ATermList) t);
                                {
                                  ATerm f_36 = (ATerm) ATgetNext((ATermList) t);
                                }
                              }
                            else
                              _fail(t);
                            t = w_3;
                            return(t);
                          }
                          t = Rec_2_0(i_20, _id, t);
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
ATerm Rec_2_0 (ATerm z_109 (ATerm), ATerm a_110 (ATerm), ATerm t)
{
  ATerm y_3 = NULL,z_3 = NULL,a_4 = NULL,b_4 = NULL,c_4 = NULL,d_4 = NULL,a_1 = NULL,c_1 = NULL;
  d_4 = t;
  if(match_cons(t, sym_Rec_2))
    {
      z_3 = ATgetArgument(t, 0);
      a_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_4);
  y_3 = t;
  t = z_3;
  t = z_109(t);
  b_4 = t;
  t = a_4;
  t = a_110(t);
  c_4 = t;
  c_1 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, b_4, c_4);
  a_1 = t;
  t = SSLsetAnnotations(a_1, y_3);
  return(t);
}
ATerm Let_2_0 (ATerm c_109 (ATerm), ATerm d_109 (ATerm), ATerm t)
{
  ATerm i_4 = NULL,k_4 = NULL,n_4 = NULL,p_4 = NULL,q_4 = NULL,r_4 = NULL,j_1 = NULL,l_1 = NULL;
  r_4 = t;
  if(match_cons(t, sym_Let_2))
    {
      k_4 = ATgetArgument(t, 0);
      n_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_4);
  i_4 = t;
  t = k_4;
  t = c_109(t);
  p_4 = t;
  t = n_4;
  t = d_109(t);
  q_4 = t;
  l_1 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, p_4, q_4);
  j_1 = t;
  t = SSLsetAnnotations(j_1, i_4);
  return(t);
}
ATerm sboundin_3_0 (ATerm i_120 (ATerm), ATerm j_120 (ATerm), ATerm k_120 (ATerm), ATerm t)
{
  ATerm g_36 = t;
  int h_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(i_120, i_120, t);
      ;
      LocalPopChoice(h_36);
    }
  else
    {
      t = g_36;
      {
        ATerm i_36 = t;
        int j_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(k_120, k_120, i_120, t);
            ;
            LocalPopChoice(j_36);
          }
        else
          {
            t = i_36;
            {
              ATerm k_36 = t;
              int l_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(k_120, k_120, k_120, i_120, t);
                  ;
                  LocalPopChoice(l_36);
                }
              else
                {
                  t = k_36;
                  t = Rec_2_0(k_120, i_120, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm j_20 (ATerm t)
{
  ATerm f_5 = NULL;
  ATerm n_36 = t;
  int o_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          f_5 = ATgetArgument(t, 0);
          {
            ATerm r_36 = ATgetArgument(t, 1);
          }
          {
            ATerm s_36 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_36);
      t = f_5;
    }
  else
    {
      t = n_36;
      if(match_cons(t, sym_SDefT_4))
        {
          f_5 = ATgetArgument(t, 0);
          {
            ATerm t_36 = ATgetArgument(t, 1);
          }
          {
            ATerm w_36 = ATgetArgument(t, 2);
          }
          {
            ATerm b_37 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = f_5;
    }
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm w_4 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      w_4 = ATgetArgument(t, 0);
      {
        ATerm c_37 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = w_4;
  t = map_1_0(j_20, t);
  return(t);
}
ATerm SVar_1_0 (ATerm b_109 (ATerm), ATerm t)
{
  ATerm z_5 = NULL,b_6 = NULL,c_6 = NULL,d_6 = NULL,m_1 = NULL,p_1 = NULL;
  d_6 = t;
  if(match_cons(t, sym_SVar_1))
    {
      b_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_6);
  z_5 = t;
  t = b_6;
  t = b_109(t);
  c_6 = t;
  p_1 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, c_6);
  m_1 = t;
  t = SSLsetAnnotations(m_1, z_5);
  return(t);
}
ATerm DistBinding_2_0 (ATerm f_134 (ATerm), ATerm g_134 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm i_6 = NULL,j_6 = NULL,l_6 = NULL;
  if(match_cons(t, sym__3))
    {
      i_6 = ATgetArgument(t, 0);
      j_6 = ATgetArgument(t, 1);
      l_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = i_6;
  {
    ATerm k_20 (ATerm t)
    {
      ATerm m_6 = NULL;
      m_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_6, l_6);
      t = f_134(t);
      return(t);
    }
    ATerm l_20 (ATerm t)
    {
      ATerm n_6 = NULL;
      n_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_6, j_6);
      t = f_134(t);
      return(t);
    }
    t = g_134(k_20, l_20, _id, t);
  }
  return(t);
}
ATerm m_20 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_37 = ATgetArgument(t, 0);
      if(((ATgetType(l_37) != AT_LIST) || !(ATisEmpty(l_37))))
        _fail(t);
      {
        ATerm m_37 = ATgetArgument(t, 1);
        if(((ATgetType(m_37) != AT_LIST) || !(ATisEmpty(m_37))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm n_20 (ATerm t)
{
  ATerm a_7 = NULL,b_7 = NULL,c_7 = NULL,g_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_37 = ATgetArgument(t, 0);
      if(((ATgetType(t_37) == AT_LIST) && !(ATisEmpty(t_37))))
        {
          a_7 = ATgetFirst((ATermList) t_37);
          c_7 = (ATerm) ATgetNext((ATermList) t_37);
        }
      else
        _fail(t);
      {
        ATerm u_37 = ATgetArgument(t, 1);
        if(((ATgetType(u_37) == AT_LIST) && !(ATisEmpty(u_37))))
          {
            b_7 = ATgetFirst((ATermList) u_37);
            g_7 = (ATerm) ATgetNext((ATermList) u_37);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_7, b_7), (ATerm) ATmakeAppl(sym__2, c_7, g_7));
  return(t);
}
ATerm o_20 (ATerm t)
{
  ATerm h_7 = NULL,i_7 = NULL;
  if(match_cons(t, sym__2))
    {
      h_7 = ATgetArgument(t, 0);
      i_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(i_7), h_7);
  return(t);
}
ATerm RnBinding_2_0 (ATerm z_133 (ATerm), ATerm a_134 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm p_6 = NULL,q_6 = NULL,r_6 = NULL,s_6 = NULL,w_6 = NULL,y_6 = NULL,z_6 = NULL;
  if(match_cons(t, sym__2))
    {
      p_6 = ATgetArgument(t, 0);
      q_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_6;
  t = z_133(t);
  r_6 = t;
  t = map_1_0(new_0_0, t);
  s_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_6, s_6);
  t = genzip_4_0(m_20, n_20, o_20, _id, t);
  w_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_6, q_6);
  {
    ATerm v_37 = t;
    int z_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_38 = ATgetArgument(t, 0);
            ATerm d_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = w_6;
        {
          ATerm p_20 (ATerm t)
          {
            t = q_6;
            return(t);
          }
          t = at_end_1_0(p_20, t);
        }
        ;
        LocalPopChoice(z_37);
      }
    else
      {
        t = v_37;
        {
          ATerm x_3 = NULL,u_1 = NULL,v_1 = NULL;
          v_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, w_6, q_6);
          u_1 = t;
          t = SSL_explode_term(u_1);
          if(match_cons(t, sym__2))
            {
              ATerm g_38 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) g_38) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              x_3 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = x_3;
          t = concat_0_0(t);
        }
      }
    y_6 = t;
    t = p_6;
    {
      ATerm q_20 (ATerm t)
      {
        t = s_6;
        return(t);
      }
      t = a_134(q_20, t);
      z_6 = t;
      t = (ATerm) ATmakeAppl(sym__3, z_6, q_6, y_6);
    }
  }
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm u_7 = NULL,t_8 = NULL,l_9 = NULL,n_9 = NULL,u_9 = NULL,h_10 = NULL;
  if(match_cons(t, sym__2))
    {
      l_9 = ATgetArgument(t, 0);
      n_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_9;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_9 = ATgetFirst((ATermList) t);
      h_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_9;
  if(match_cons(t, sym__2))
    {
      u_7 = ATgetArgument(t, 0);
      t_8 = ATgetArgument(t, 1);
      {
        ATerm h_38 = t;
        int j_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_7;
            if((l_9 != t))
              {
                _fail(t);
              }
            t = t_8;
            ;
            LocalPopChoice(j_38);
          }
        else
          {
            t = h_38;
            t = (ATerm) ATmakeAppl(sym__2, l_9, h_10);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, l_9, h_10);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm n_134 (ATerm), ATerm t)
{
  ATerm v_13 (ATerm t)
  {
    ATerm l_38 = t;
    int m_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_134(t);
        ;
        LocalPopChoice(m_38);
      }
    else
      {
        t = l_38;
        {
          ATerm o_4 = NULL,s_4 = NULL;
          ATerm r_20 (ATerm t)
          {
            ATerm v_4 = NULL;
            v_4 = t;
            t = (ATerm) ATmakeAppl(sym__2, v_4, not_null(s_4));
            t = v_13(t);
            return(t);
          }
          if(match_cons(t, sym__2))
            {
              if(((o_4 != NULL) && (o_4 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                o_4 = ATgetArgument(t, 0);
              if(((s_4 != NULL) && (s_4 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                s_4 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = not_null(o_4);
          t = SRTS_all(r_20, t);
        }
      }
    return(t);
  }
  t = v_13(t);
  return(t);
}
ATerm rename_4_0 (ATerm u_133 (ATerm (ATerm), ATerm), ATerm v_133 (ATerm), ATerm w_133 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm x_133 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm k_14 = NULL;
  k_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_14, (ATerm) ATempty);
  {
    ATerm o_14 (ATerm t)
    {
      ATerm v_20 (ATerm t)
      {
        ATerm n_38 = t;
        int o_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_4 = NULL,z_4 = NULL;
            ATerm w_20 (ATerm t)
            {
              ATerm c_5 = NULL;
              c_5 = t;
              t = (ATerm) ATmakeAppl(sym__2, c_5, not_null(z_4));
              t = lookup_0_0(t);
              return(t);
            }
            if(match_cons(t, sym__2))
              {
                if(((y_4 != NULL) && (y_4 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  y_4 = ATgetArgument(t, 0);
                if(((z_4 != NULL) && (z_4 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  z_4 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = not_null(y_4);
            t = u_133(w_20, t);
            ;
            LocalPopChoice(o_38);
          }
        else
          {
            t = n_38;
            t = RnBinding_2_0(v_133, x_133, t);
            t = DistBinding_2_0(o_14, w_133, t);
          }
        return(t);
      }
      t = env_alltd_1_0(v_20, t);
      return(t);
    }
    t = o_14(t);
  }
  return(t);
}
ATerm z_20 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_38 = ATgetArgument(t, 0);
      if(((ATgetType(s_38) != AT_LIST) || !(ATisEmpty(s_38))))
        _fail(t);
      {
        ATerm t_38 = ATgetArgument(t, 1);
        if(((ATgetType(t_38) != AT_LIST) || !(ATisEmpty(t_38))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm a_21 (ATerm t)
{
  ATerm u_15 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_38 = ATgetArgument(t, 0);
      if(((ATgetType(u_38) == AT_LIST) && !(ATisEmpty(u_38))))
        {
          u_15 = ATgetFirst((ATermList) u_38);
          i_16 = (ATerm) ATgetNext((ATermList) u_38);
        }
      else
        _fail(t);
      {
        ATerm x_38 = ATgetArgument(t, 1);
        if(((ATgetType(x_38) == AT_LIST) && !(ATisEmpty(x_38))))
          {
            h_16 = ATgetFirst((ATermList) x_38);
            j_16 = (ATerm) ATgetNext((ATermList) x_38);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_15, h_16), (ATerm) ATmakeAppl(sym__2, i_16, j_16));
  return(t);
}
ATerm b_21 (ATerm t)
{
  ATerm k_16 = NULL,p_16 = NULL;
  if(match_cons(t, sym__2))
    {
      k_16 = ATgetArgument(t, 0);
      p_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_16), k_16);
  return(t);
}
ATerm c_21 (ATerm t)
{
  ATerm j_17 = NULL,f_18 = NULL,g_18 = NULL;
  if(match_cons(t, sym__2))
    {
      j_17 = ATgetArgument(t, 0);
      g_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_17;
  {
    ATerm y_38 = t;
    int a_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm b_39 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(a_39);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, g_18);
      }
    else
      {
        t = y_38;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm d_39 = ATgetArgument(t, 0);
            f_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, g_18, f_18);
      }
  }
  return(t);
}
ATerm e_21 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm e_39 = ATgetArgument(t, 0);
      if(((ATgetType(e_39) != AT_LIST) || !(ATisEmpty(e_39))))
        _fail(t);
      {
        ATerm f_39 = ATgetArgument(t, 1);
        if(((ATgetType(f_39) != AT_LIST) || !(ATisEmpty(f_39))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_21 (ATerm t)
{
  ATerm p_18 = NULL,v_18 = NULL,w_18 = NULL,y_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_39 = ATgetArgument(t, 0);
      if(((ATgetType(g_39) == AT_LIST) && !(ATisEmpty(g_39))))
        {
          p_18 = ATgetFirst((ATermList) g_39);
          w_18 = (ATerm) ATgetNext((ATermList) g_39);
        }
      else
        _fail(t);
      {
        ATerm i_39 = ATgetArgument(t, 1);
        if(((ATgetType(i_39) == AT_LIST) && !(ATisEmpty(i_39))))
          {
            v_18 = ATgetFirst((ATermList) i_39);
            y_18 = (ATerm) ATgetNext((ATermList) i_39);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_18, v_18), (ATerm) ATmakeAppl(sym__2, w_18, y_18));
  return(t);
}
ATerm g_21 (ATerm t)
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
ATerm h_21 (ATerm t)
{
  ATerm k_19 = NULL,n_19 = NULL,o_19 = NULL;
  if(match_cons(t, sym__2))
    {
      k_19 = ATgetArgument(t, 0);
      o_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_19;
  {
    ATerm o_39 = t;
    int p_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm q_39 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(p_39);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, o_19);
      }
    else
      {
        t = o_39;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm v_39 = ATgetArgument(t, 0);
            n_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, o_19, n_19);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm d_120 (ATerm), ATerm t)
{
  ATerm w_39 = t;
  int b_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(d_120, _id, t);
      ;
      LocalPopChoice(b_40);
    }
  else
    {
      t = w_39;
      {
        ATerm c_40 = t;
        int h_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_20 (ATerm t)
            {
              ATerm i_5 = NULL,k_5 = NULL;
              i_5 = t;
              t = d_120(t);
              k_5 = t;
              t = (ATerm) ATmakeAppl(sym__2, i_5, k_5);
              t = genzip_4_0(z_20, a_21, b_21, c_21, t);
              return(t);
            }
            t = SDefT_4_0(_id, _id, x_20, _id, t);
            ;
            LocalPopChoice(h_40);
          }
        else
          {
            t = c_40;
            {
              ATerm d_21 (ATerm t)
              {
                ATerm p_5 = NULL,s_5 = NULL;
                p_5 = t;
                t = d_120(t);
                s_5 = t;
                t = (ATerm) ATmakeAppl(sym__2, p_5, s_5);
                t = genzip_4_0(e_21, f_21, g_21, h_21, t);
                return(t);
              }
              t = RDefT_4_0(_id, _id, d_21, _id, t);
            }
          }
      }
    }
  return(t);
}
ATerm i_21 (ATerm t)
{
  ATerm i_40 = t;
  int n_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(n_40);
    }
  else
    {
      t = i_40;
      {
        ATerm y_20 = NULL;
        ATerm o_40 = t;
        int p_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SDefT_4))
              {
                ATerm q_40 = ATgetArgument(t, 0);
                ATerm r_40 = ATgetArgument(t, 1);
                y_20 = ATgetArgument(t, 2);
                {
                  ATerm v_40 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            LocalPopChoice(p_40);
            t = y_20;
            t = map_1_0(j_21, t);
          }
        else
          {
            t = o_40;
            if(match_cons(t, sym_RDefT_4))
              {
                ATerm x_40 = ATgetArgument(t, 0);
                ATerm y_40 = ATgetArgument(t, 1);
                y_20 = ATgetArgument(t, 2);
                {
                  ATerm z_40 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            t = y_20;
            t = map_1_0(k_21, t);
          }
      }
    }
  return(t);
}
ATerm j_21 (ATerm t)
{
  ATerm u_21 = NULL;
  ATerm h_41 = t;
  int i_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_21 = ATgetArgument(t, 0);
          {
            ATerm k_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_41);
      t = u_21;
    }
  else
    {
      t = h_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_21;
    }
  return(t);
}
ATerm k_21 (ATerm t)
{
  ATerm b_22 = NULL;
  ATerm l_41 = t;
  int p_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_22 = ATgetArgument(t, 0);
          {
            ATerm q_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_41);
      t = b_22;
    }
  else
    {
      t = l_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_22;
    }
  return(t);
}
ATerm l_21 (ATerm t)
{
  ATerm r_41 = t;
  int s_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind1_0_0(t);
      ;
      LocalPopChoice(s_41);
    }
  else
    {
      t = r_41;
      {
        ATerm f_22 = NULL,i_22 = NULL;
        ATerm t_41 = t;
        int u_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SDef_3))
              {
                ATerm w_41 = ATgetArgument(t, 0);
                i_22 = ATgetArgument(t, 1);
                {
                  ATerm y_41 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            LocalPopChoice(u_41);
            t = i_22;
            t = map_1_0(n_21, t);
          }
        else
          {
            t = t_41;
            {
              ATerm z_41 = t;
              int a_42 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      f_22 = ATgetArgument(t, 0);
                      {
                        ATerm b_42 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(a_42);
                  t = (ATerm) ATinsert(ATempty, f_22);
                }
              else
                {
                  t = z_41;
                  {
                    ATerm c_42 = t;
                    int d_42 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_SDefT_4))
                          {
                            ATerm e_42 = ATgetArgument(t, 0);
                            i_22 = ATgetArgument(t, 1);
                            {
                              ATerm f_42 = ATgetArgument(t, 2);
                            }
                            {
                              ATerm g_42 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(d_42);
                        t = i_22;
                        t = map_1_0(o_21, t);
                      }
                    else
                      {
                        t = c_42;
                        if(match_cons(t, sym_RDefT_4))
                          {
                            ATerm h_42 = ATgetArgument(t, 0);
                            i_22 = ATgetArgument(t, 1);
                            {
                              ATerm i_42 = ATgetArgument(t, 2);
                            }
                            {
                              ATerm j_42 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        t = i_22;
                        t = map_1_0(p_21, t);
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
  ATerm o_22 = NULL;
  ATerm k_42 = t;
  int l_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_22 = ATgetArgument(t, 0);
          {
            ATerm m_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_42);
      t = o_22;
    }
  else
    {
      t = k_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_22;
    }
  return(t);
}
ATerm o_21 (ATerm t)
{
  ATerm y_22 = NULL;
  ATerm n_42 = t;
  int o_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_22 = ATgetArgument(t, 0);
          {
            ATerm p_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_42);
      t = y_22;
    }
  else
    {
      t = n_42;
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
ATerm p_21 (ATerm t)
{
  ATerm g_23 = NULL;
  ATerm q_42 = t;
  int r_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_23 = ATgetArgument(t, 0);
          {
            ATerm s_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_42);
      t = g_23;
    }
  else
    {
      t = q_42;
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
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, i_21, tboundin_3_0, tpaste_1_0, t);
  t = rename_4_0(SVar_1_0, l_21, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm n_23 = NULL,p_23 = NULL,r_23 = NULL,t_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL;
  if(match_cons(t, sym__2))
    {
      r_23 = ATgetArgument(t, 0);
      t_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_23;
  if(match_cons(t, sym_Build_1))
    {
      ATerm t_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_23;
  if(match_cons(t, sym_Where_1))
    {
      w_23 = ATgetArgument(t, 0);
      t = w_23;
      if(match_cons(t, sym_Prim_2))
        {
          n_23 = ATgetArgument(t, 0);
          p_23 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Prim_2, n_23, p_23);
    }
  else
    {
      if(match_cons(t, sym_Prim_2))
        {
          w_23 = ATgetArgument(t, 0);
          x_23 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_Prim_2, w_23, x_23);
        }
      else
        {
          if(match_cons(t, sym_PrimT_3))
            {
              w_23 = ATgetArgument(t, 0);
              x_23 = ATgetArgument(t, 1);
              y_23 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_PrimT_3, w_23, x_23, y_23);
        }
    }
  return(t);
}
ATerm q_21 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm u_42 = ATgetArgument(t, 0);
      if(((ATgetType(u_42) != AT_LIST) || !(ATisEmpty(u_42))))
        _fail(t);
      {
        ATerm v_42 = ATgetArgument(t, 1);
        if(((ATgetType(v_42) != AT_LIST) || !(ATisEmpty(v_42))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_21 (ATerm t)
{
  ATerm o_24 = NULL,p_24 = NULL,q_24 = NULL,s_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_42 = ATgetArgument(t, 0);
      if(((ATgetType(w_42) == AT_LIST) && !(ATisEmpty(w_42))))
        {
          o_24 = ATgetFirst((ATermList) w_42);
          q_24 = (ATerm) ATgetNext((ATermList) w_42);
        }
      else
        _fail(t);
      {
        ATerm x_42 = ATgetArgument(t, 1);
        if(((ATgetType(x_42) == AT_LIST) && !(ATisEmpty(x_42))))
          {
            p_24 = ATgetFirst((ATermList) x_42);
            s_24 = (ATerm) ATgetNext((ATermList) x_42);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_24, p_24), (ATerm) ATmakeAppl(sym__2, q_24, s_24));
  return(t);
}
ATerm s_21 (ATerm t)
{
  ATerm t_24 = NULL,u_24 = NULL;
  if(match_cons(t, sym__2))
    {
      t_24 = ATgetArgument(t, 0);
      u_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_24), t_24);
  return(t);
}
ATerm t_21 (ATerm t)
{
  ATerm v_24 = NULL,w_24 = NULL;
  if(match_cons(t, sym__2))
    {
      v_24 = ATgetArgument(t, 0);
      w_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, v_24), (ATerm) ATmakeAppl(sym_Match_1, w_24));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm h_24 = NULL,i_24 = NULL,j_24 = NULL,m_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_42 = ATgetArgument(t, 0);
      if(match_cons(y_42, sym_Build_1))
        {
          ATerm a_43 = ATgetArgument(y_42, 0);
          if(match_cons(a_43, sym_Op_2))
            {
              i_24 = ATgetArgument(a_43, 0);
              h_24 = ATgetArgument(a_43, 1);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm z_42 = ATgetArgument(t, 1);
        if(match_cons(z_42, sym_Match_1))
          {
            ATerm b_43 = ATgetArgument(z_42, 0);
            if(match_cons(b_43, sym_Op_2))
              {
                if((i_24 != ATgetArgument(b_43, 0)))
                  {
                    _fail(ATgetArgument(b_43, 0));
                  }
                j_24 = ATgetArgument(b_43, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, h_24, j_24);
  t = genzip_4_0(q_21, r_21, s_21, t_21, t);
  m_24 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, m_24), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, i_24, h_24)));
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm x_24 = NULL,y_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_43 = ATgetArgument(t, 0);
      if(match_cons(c_43, sym_Build_1))
        {
          ATerm e_43 = ATgetArgument(c_43, 0);
          if(match_cons(e_43, sym_Op_2))
            {
              x_24 = ATgetArgument(e_43, 0);
              {
                ATerm f_43 = ATgetArgument(e_43, 1);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm d_43 = ATgetArgument(t, 1);
        if(match_cons(d_43, sym_Match_1))
          {
            ATerm g_43 = ATgetArgument(d_43, 0);
            if(match_cons(g_43, sym_Op_2))
              {
                y_24 = ATgetArgument(g_43, 0);
                {
                  ATerm h_43 = ATgetArgument(g_43, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, x_24, y_24);
  {
    ATerm i_43 = t;
    if((PushChoice() == 0))
      {
        ATerm z_24 = NULL;
        if(match_cons(t, sym__2))
          {
            z_24 = ATgetArgument(t, 0);
            if((z_24 != ATgetArgument(t, 1)))
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
        t = i_43;
      }
    t = term_j_43;
  }
  return(t);
}
ATerm r_28 (ATerm q_27, ATerm r_27, ATerm s_27, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, q_27, r_27);
  {
    ATerm l_43 = t;
    int p_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = MisMatch_0_0(t);
        ;
        LocalPopChoice(p_43);
      }
    else
      {
        t = l_43;
        {
          ATerm q_43 = t;
          int r_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = BuildMatchFusion_0_0(t);
              ;
              LocalPopChoice(r_43);
            }
          else
            {
              t = q_43;
              {
                ATerm t_43 = t;
                int u_43 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm z_27 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        ATerm w_43 = ATgetArgument(t, 0);
                        ATerm x_43 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = q_27;
                    if(match_cons(t, sym_Build_1))
                      {
                        ATerm a_44 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = r_27;
                    if(match_cons(t, sym_Build_1))
                      {
                        z_27 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Build_1, z_27);
                    ;
                    LocalPopChoice(u_43);
                  }
                else
                  {
                    t = t_43;
                    {
                      ATerm b_44 = t;
                      int c_44 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = BuildPrim_0_0(t);
                          ;
                          LocalPopChoice(c_44);
                        }
                      else
                        {
                          t = b_44;
                          {
                            ATerm d_28 = NULL,e_28 = NULL,g_28 = NULL,h_28 = NULL;
                            if(match_cons(t, sym__2))
                              {
                                ATerm d_44 = ATgetArgument(t, 0);
                                ATerm e_44 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = q_27;
                            if(match_cons(t, sym_Match_1))
                              {
                                d_28 = ATgetArgument(t, 0);
                                t = r_27;
                                if(match_cons(t, sym_Match_1))
                                  {
                                    g_28 = ATgetArgument(t, 0);
                                    t = g_28;
                                    if((d_28 != t))
                                      {
                                        _fail(t);
                                      }
                                    t = (ATerm) ATmakeAppl(sym_Match_1, d_28);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        g_28 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = d_28;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        e_28 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = g_28;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        h_28 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = h_28;
                                    if((e_28 != t))
                                      {
                                        _fail(t);
                                      }
                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, e_28));
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Build_1))
                                  {
                                    d_28 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = r_27;
                                if(match_cons(t, sym_Match_1))
                                  {
                                    g_28 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = g_28;
                                if((d_28 != t))
                                  {
                                    _fail(t);
                                  }
                                t = (ATerm) ATmakeAppl(sym_Build_1, d_28);
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
  ATerm l_28 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL;
  n_28 = t;
  if(match_cons(t, sym_Seq_2))
    {
      o_28 = ATgetArgument(t, 0);
      p_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_28;
  if(match_cons(t, sym_Seq_2))
    {
      l_28 = ATgetArgument(t, 0);
      m_28 = ATgetArgument(t, 1);
      {
        ATerm f_44 = t;
        int g_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_6 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, o_28, l_28);
            {
              ATerm h_44 = t;
              int i_44 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = MisMatch_0_0(t);
                  ;
                  LocalPopChoice(i_44);
                }
              else
                {
                  t = h_44;
                  {
                    ATerm j_44 = t;
                    int k_44 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = BuildMatchFusion_0_0(t);
                        ;
                        LocalPopChoice(k_44);
                      }
                    else
                      {
                        t = j_44;
                        {
                          ATerm l_44 = t;
                          int m_44 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm e_7 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  ATerm n_44 = ATgetArgument(t, 0);
                                  ATerm q_44 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = o_28;
                              if(match_cons(t, sym_Build_1))
                                {
                                  ATerm r_44 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = l_28;
                              if(match_cons(t, sym_Build_1))
                                {
                                  e_7 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym_Build_1, e_7);
                              ;
                              LocalPopChoice(m_44);
                            }
                          else
                            {
                              t = l_44;
                              {
                                ATerm s_44 = t;
                                int t_44 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildPrim_0_0(t);
                                    ;
                                    LocalPopChoice(t_44);
                                  }
                                else
                                  {
                                    t = s_44;
                                    {
                                      ATerm o_7 = NULL,p_7 = NULL,r_7 = NULL,s_7 = NULL;
                                      if(match_cons(t, sym__2))
                                        {
                                          ATerm u_44 = ATgetArgument(t, 0);
                                          ATerm w_44 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = o_28;
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          o_7 = ATgetArgument(t, 0);
                                          t = l_28;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              r_7 = ATgetArgument(t, 0);
                                              t = r_7;
                                              if((o_7 != t))
                                                {
                                                  _fail(t);
                                                }
                                              t = (ATerm) ATmakeAppl(sym_Match_1, o_7);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Build_1))
                                                {
                                                  r_7 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = o_7;
                                              if(match_cons(t, sym_Var_1))
                                                {
                                                  p_7 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = r_7;
                                              if(match_cons(t, sym_Var_1))
                                                {
                                                  s_7 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = s_7;
                                              if((p_7 != t))
                                                {
                                                  _fail(t);
                                                }
                                              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, p_7));
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_Build_1))
                                            {
                                              o_7 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = l_28;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              r_7 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = r_7;
                                          if((o_7 != t))
                                            {
                                              _fail(t);
                                            }
                                          t = (ATerm) ATmakeAppl(sym_Build_1, o_7);
                                        }
                                    }
                                  }
                              }
                            }
                        }
                      }
                  }
                }
              t_6 = t;
              t = (ATerm) ATmakeAppl(sym_Seq_2, t_6, m_28);
            }
            ;
            LocalPopChoice(g_44);
          }
        else
          {
            t = f_44;
            t = r_28(o_28, p_28, n_28, t);
          }
      }
    }
  else
    {
      t = r_28(o_28, p_28, n_28, t);
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm h_122 (ATerm), ATerm t)
{
  ATerm s_28 (ATerm t)
  {
    ATerm x_44 = t;
    int y_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_122(t);
        ;
        LocalPopChoice(y_44);
      }
    else
      {
        t = x_44;
        t = SRTS_one(s_28, t);
      }
    return(t);
  }
  t = s_28(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm t_28 = NULL,u_28 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      ATerm z_44 = ATgetArgument(t, 0);
      if(((ATgetType(z_44) == AT_LIST) && !(ATisEmpty(z_44))))
        {
          ATerm b_45 = ATgetFirst((ATermList) z_44);
          if(match_cons(b_45, sym_SDefT_4))
            {
              u_28 = ATgetArgument(b_45, 0);
              {
                ATerm e_45 = ATgetArgument(b_45, 1);
                if(((ATgetType(e_45) != AT_LIST) || !(ATisEmpty(e_45))))
                  _fail(t);
              }
              {
                ATerm f_45 = ATgetArgument(b_45, 2);
                if(((ATgetType(f_45) != AT_LIST) || !(ATisEmpty(f_45))))
                  _fail(t);
              }
              t_28 = ATgetArgument(b_45, 3);
            }
          else
            _fail(t);
          {
            ATerm d_45 = (ATerm) ATgetNext((ATermList) z_44);
            if(((ATgetType(d_45) != AT_LIST) || !(ATisEmpty(d_45))))
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm a_45 = ATgetArgument(t, 1);
        if(match_cons(a_45, sym_CallT_3))
          {
            ATerm g_45 = ATgetArgument(a_45, 0);
            if(match_cons(g_45, sym_SVar_1))
              {
                if((u_28 != ATgetArgument(g_45, 0)))
                  {
                    _fail(ATgetArgument(g_45, 0));
                  }
              }
            else
              _fail(t);
            {
              ATerm h_45 = ATgetArgument(a_45, 1);
              if(((ATgetType(h_45) != AT_LIST) || !(ATisEmpty(h_45))))
                _fail(t);
            }
            {
              ATerm i_45 = ATgetArgument(a_45, 2);
              if(((ATgetType(i_45) != AT_LIST) || !(ATisEmpty(i_45))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = t_28;
  {
    ATerm j_45 = t;
    if((PushChoice() == 0))
      {
        ATerm v_21 (ATerm t)
        {
          if(match_cons(t, sym_CallT_3))
            {
              ATerm k_45 = ATgetArgument(t, 0);
              if(match_cons(k_45, sym_SVar_1))
                {
                  if((u_28 != ATgetArgument(k_45, 0)))
                    {
                      _fail(ATgetArgument(k_45, 0));
                    }
                }
              else
                _fail(t);
              {
                ATerm l_45 = ATgetArgument(t, 1);
                if(((ATgetType(l_45) != AT_LIST) || !(ATisEmpty(l_45))))
                  _fail(t);
              }
              {
                ATerm n_45 = ATgetArgument(t, 2);
                if(((ATgetType(n_45) != AT_LIST) || !(ATisEmpty(n_45))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(v_21, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_45;
      }
    t = t_28;
  }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm c_29 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL,j_29 = NULL,k_29 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      j_29 = ATgetArgument(t, 0);
      t = j_29;
      if(match_cons(t, sym_Seq_2))
        {
          h_29 = ATgetArgument(t, 0);
          d_29 = ATgetArgument(t, 1);
          t = h_29;
          if(match_cons(t, sym_Where_1))
            {
              c_29 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = d_29;
          if(match_cons(t, sym_Seq_2))
            {
              e_29 = ATgetArgument(t, 0);
              g_29 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = e_29;
          if(match_cons(t, sym_Build_1))
            {
              f_29 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, c_29, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, f_29), g_29)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              h_29 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, h_29);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          j_29 = ATgetArgument(t, 0);
          t = j_29;
          if(match_cons(t, sym_Test_1))
            {
              h_29 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, h_29);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              j_29 = ATgetArgument(t, 0);
              t = j_29;
              if(match_cons(t, sym_Not_1))
                {
                  h_29 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, h_29);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  j_29 = ATgetArgument(t, 0);
                  k_29 = ATgetArgument(t, 1);
                  t = k_29;
                  if((j_29 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      j_29 = ATgetArgument(t, 0);
                      k_29 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = k_29;
                  if((j_29 != t))
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
  ATerm y_29 = NULL,z_29 = NULL,a_30 = NULL,b_30 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      y_29 = ATgetArgument(t, 0);
      b_30 = ATgetArgument(t, 1);
      t = y_29;
      if(match_cons(t, sym_LChoice_2))
        {
          z_29 = ATgetArgument(t, 0);
          a_30 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, z_29, (ATerm) ATmakeAppl(sym_LChoice_2, a_30, b_30));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          y_29 = ATgetArgument(t, 0);
          b_30 = ATgetArgument(t, 1);
          t = y_29;
          if(match_cons(t, sym_Seq_2))
            {
              z_29 = ATgetArgument(t, 0);
              a_30 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, z_29, (ATerm) ATmakeAppl(sym_Seq_2, a_30, b_30));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              y_29 = ATgetArgument(t, 0);
              b_30 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = y_29;
          if(match_cons(t, sym_Choice_2))
            {
              z_29 = ATgetArgument(t, 0);
              a_30 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, z_29, (ATerm) ATmakeAppl(sym_Choice_2, a_30, b_30));
        }
    }
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm o_45 = t;
  int p_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(n_0, _id, t);
      {
        ATerm w_21 (ATerm t)
        {
          ATerm q_45 = t;
          int r_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(n_0, t);
              ;
              LocalPopChoice(r_45);
            }
          else
            {
              t = q_45;
            }
          return(t);
        }
        t = Cons_2_0(_id, w_21, t);
      }
      ;
      LocalPopChoice(p_45);
    }
  else
    {
      t = o_45;
      {
        ATerm x_21 (ATerm t)
        {
          t = map1_1_0(n_0, t);
          return(t);
        }
        t = Cons_2_0(_id, x_21, t);
      }
    }
  return(t);
}
ATerm y_21 (ATerm t)
{
  ATerm r_31 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      r_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, r_31, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_u_45), term_u_45));
  return(t);
}
ATerm z_21 (ATerm t)
{
  ATerm v_45 = t;
  int x_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_31 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, v_31, term_u_45);
      ;
      LocalPopChoice(x_45);
    }
  else
    {
      t = v_45;
    }
  return(t);
}
ATerm a_22 (ATerm t)
{
  ATerm e_32 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      e_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, e_32, term_u_45);
  return(t);
}
ATerm c_22 (ATerm t)
{
  ATerm y_45 = t;
  int a_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_32 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, g_32, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_u_45), term_u_45));
      ;
      LocalPopChoice(a_46);
    }
  else
    {
      t = y_45;
    }
  return(t);
}
ATerm d_22 (ATerm t)
{
  ATerm q_32 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      q_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, q_32, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_u_45), term_u_45));
  return(t);
}
ATerm e_22 (ATerm t)
{
  ATerm b_46 = t;
  int c_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_32 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, s_32, term_u_45);
      ;
      LocalPopChoice(c_46);
    }
  else
    {
      t = b_46;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm s_30 = NULL,u_30 = NULL,v_30 = NULL,w_30 = NULL,z_30 = NULL,a_31 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      z_30 = ATgetArgument(t, 0);
      a_31 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, z_30, a_31);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          z_30 = ATgetArgument(t, 0);
          t = z_30;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              s_30 = ATgetFirst((ATermList) t);
              u_30 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, s_30, (ATerm) ATmakeAppl(sym_LChoices_1, u_30));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_j_43;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              z_30 = ATgetArgument(t, 0);
              t = z_30;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  s_30 = ATgetFirst((ATermList) t);
                  u_30 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, s_30, (ATerm) ATmakeAppl(sym_Choices_1, u_30));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_j_43;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  z_30 = ATgetArgument(t, 0);
                  t = z_30;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      s_30 = ATgetFirst((ATermList) t);
                      u_30 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, s_30, (ATerm) ATmakeAppl(sym_Seqs_1, u_30));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_e_46;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      z_30 = ATgetArgument(t, 0);
                      a_31 = ATgetArgument(t, 1);
                      w_30 = ATgetArgument(t, 2);
                      v_30 = ATgetArgument(t, 3);
                      {
                        ATerm p_31 = NULL,q_31 = NULL;
                        t = a_31;
                        t = map1_1_0(y_21, t);
                        p_31 = t;
                        t = w_30;
                        t = map1_1_0(z_21, t);
                        q_31 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, z_30, p_31, q_31, v_30);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          z_30 = ATgetArgument(t, 0);
                          a_31 = ATgetArgument(t, 1);
                          w_30 = ATgetArgument(t, 2);
                          v_30 = ATgetArgument(t, 3);
                          {
                            ATerm f_46 = t;
                            int g_46 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm b_32 = NULL,c_32 = NULL;
                                t = w_30;
                                t = map1_1_0(a_22, t);
                                b_32 = t;
                                t = a_31;
                                t = map_1_0(c_22, t);
                                c_32 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, z_30, c_32, b_32, v_30);
                                ;
                                LocalPopChoice(g_46);
                              }
                            else
                              {
                                t = f_46;
                                {
                                  ATerm o_32 = NULL,p_32 = NULL;
                                  t = a_31;
                                  t = map1_1_0(d_22, t);
                                  o_32 = t;
                                  t = w_30;
                                  t = map_1_0(e_22, t);
                                  p_32 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, z_30, o_32, p_32, v_30);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              z_30 = ATgetArgument(t, 0);
                              a_31 = ATgetArgument(t, 1);
                              w_30 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, a_31, (ATerm) ATmakeAppl(sym_Op_2, term_h_46, (ATerm) ATinsert(ATinsert(ATempty, w_30), z_30)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  z_30 = ATgetArgument(t, 0);
                                  a_31 = ATgetArgument(t, 1);
                                  w_30 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, w_30)), z_30), (ATerm) ATmakeAppl(sym_Build_1, a_31)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      z_30 = ATgetArgument(t, 0);
                                      a_31 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, z_30, (ATerm) ATmakeAppl(sym_Match_1, a_31));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          z_30 = ATgetArgument(t, 0);
                                          a_31 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, z_30), a_31);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              z_30 = ATgetArgument(t, 0);
                                              a_31 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, a_31), z_30);
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
ATerm g_22 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm n_34 = NULL,s_34 = NULL,t_34 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      n_34 = ATgetArgument(t, 0);
      t = n_34;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_j_43;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          n_34 = ATgetArgument(t, 0);
          t = n_34;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_e_46;
        }
      else
        {
          ATerm i_46 = t;
          int j_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_Seq_2))
                {
                  n_34 = ATgetArgument(t, 0);
                  {
                    ATerm l_46 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(j_46);
              t = n_34;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_j_43;
            }
          else
            {
              t = i_46;
              {
                ATerm m_46 = t;
                int n_46 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Scope_2))
                      {
                        ATerm o_46 = ATgetArgument(t, 0);
                        s_34 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(n_46);
                    t = s_34;
                    if(!(match_cons(t, sym_Fail_0)))
                      _fail(t);
                    t = term_j_43;
                  }
                else
                  {
                    t = m_46;
                    {
                      ATerm p_46 = t;
                      int r_46 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_Rec_2))
                            {
                              ATerm s_46 = ATgetArgument(t, 0);
                              s_34 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(r_46);
                          t = s_34;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_j_43;
                        }
                      else
                        {
                          t = p_46;
                          if(match_cons(t, sym_Some_1))
                            {
                              n_34 = ATgetArgument(t, 0);
                              t = n_34;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_j_43;
                            }
                          else
                            {
                              if(match_cons(t, sym_One_1))
                                {
                                  n_34 = ATgetArgument(t, 0);
                                  t = n_34;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_j_43;
                                }
                              else
                                {
                                  ATerm t_46 = t;
                                  int u_46 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_Path_2))
                                        {
                                          ATerm v_46 = ATgetArgument(t, 0);
                                          s_34 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(u_46);
                                      t = s_34;
                                      if(!(match_cons(t, sym_Fail_0)))
                                        _fail(t);
                                      t = term_j_43;
                                    }
                                  else
                                    {
                                      t = t_46;
                                      {
                                        ATerm w_46 = t;
                                        int x_46 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            if(match_cons(t, sym_Cong_2))
                                              {
                                                ATerm y_46 = ATgetArgument(t, 0);
                                                s_34 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            LocalPopChoice(x_46);
                                            t = s_34;
                                            t = fetch_1_0(g_22, t);
                                            t = term_j_43;
                                          }
                                        else
                                          {
                                            t = w_46;
                                            if(match_cons(t, sym_Choice_2))
                                              {
                                                n_34 = ATgetArgument(t, 0);
                                                s_34 = ATgetArgument(t, 1);
                                                t = s_34;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    t = n_34;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm z_46 = t;
                                                        int a_47 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = s_34;
                                                            ;
                                                            LocalPopChoice(a_47);
                                                          }
                                                        else
                                                          {
                                                            t = z_46;
                                                            t = n_34;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = n_34;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = n_34;
                                                    if(!(match_cons(t, sym_Fail_0)))
                                                      _fail(t);
                                                    t = s_34;
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_LChoice_2))
                                                  {
                                                    n_34 = ATgetArgument(t, 0);
                                                    s_34 = ATgetArgument(t, 1);
                                                    t = s_34;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        t = n_34;
                                                        if(match_cons(t, sym_Fail_0))
                                                          {
                                                            ATerm b_47 = t;
                                                            int c_47 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = s_34;
                                                                ;
                                                                LocalPopChoice(c_47);
                                                              }
                                                            else
                                                              {
                                                                t = b_47;
                                                                t = n_34;
                                                              }
                                                          }
                                                        else
                                                          {
                                                            t = n_34;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = n_34;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = s_34;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Where_1))
                                                      {
                                                        n_34 = ATgetArgument(t, 0);
                                                        t = n_34;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = term_j_43;
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_GuardedLChoice_3))
                                                          {
                                                            n_34 = ATgetArgument(t, 0);
                                                            s_34 = ATgetArgument(t, 1);
                                                            t_34 = ATgetArgument(t, 2);
                                                          }
                                                        else
                                                          _fail(t);
                                                        t = t_34;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, n_34, s_34);
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
  ATerm c_36 = NULL,e_36 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      e_36 = ATgetArgument(t, 0);
      t = e_36;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_e_46;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          e_36 = ATgetArgument(t, 0);
          t = e_36;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_j_43;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              e_36 = ATgetArgument(t, 0);
              c_36 = ATgetArgument(t, 1);
              t = c_36;
              if(match_cons(t, sym_Id_0))
                {
                  t = e_36;
                  if(match_cons(t, sym_Id_0))
                    {
                      ATerm e_47 = t;
                      int f_47 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = c_36;
                          ;
                          LocalPopChoice(f_47);
                        }
                      else
                        {
                          t = e_47;
                          t = e_36;
                        }
                    }
                  else
                    {
                      t = e_36;
                    }
                }
              else
                {
                  t = e_36;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = c_36;
                }
            }
          else
            {
              ATerm g_47 = t;
              int h_47 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      e_36 = ATgetArgument(t, 0);
                      {
                        ATerm i_47 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(h_47);
                  t = e_36;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_e_46;
                }
              else
                {
                  t = g_47;
                  {
                    ATerm j_47 = t;
                    int k_47 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            ATerm m_47 = ATgetArgument(t, 0);
                            c_36 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(k_47);
                        t = c_36;
                        if(!(match_cons(t, sym_Id_0)))
                          _fail(t);
                        t = term_e_46;
                      }
                    else
                      {
                        t = j_47;
                        {
                          ATerm n_47 = t;
                          int p_47 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Rec_2))
                                {
                                  ATerm r_47 = ATgetArgument(t, 0);
                                  c_36 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(p_47);
                              t = c_36;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_e_46;
                            }
                          else
                            {
                              t = n_47;
                              if(match_cons(t, sym_All_1))
                                {
                                  e_36 = ATgetArgument(t, 0);
                                  t = e_36;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_e_46;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Where_1))
                                    {
                                      e_36 = ATgetArgument(t, 0);
                                      t = e_36;
                                      if(!(match_cons(t, sym_Id_0)))
                                        _fail(t);
                                      t = term_e_46;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          e_36 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = e_36;
                                      if(!(match_cons(t, sym_Wld_0)))
                                        _fail(t);
                                      t = term_e_46;
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
  ATerm s_47 = t;
  int t_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(t_47);
    }
  else
    {
      t = s_47;
      {
        ATerm v_47 = t;
        int w_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(w_47);
          }
        else
          {
            t = v_47;
            {
              ATerm x_47 = t;
              int y_47 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(y_47);
                }
              else
                {
                  t = x_47;
                  {
                    ATerm z_47 = t;
                    int a_48 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(a_48);
                      }
                    else
                      {
                        t = z_47;
                        {
                          ATerm b_48 = t;
                          int d_48 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(d_48);
                            }
                          else
                            {
                              t = b_48;
                              {
                                ATerm e_48 = t;
                                int f_48 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm p_36 = NULL,q_36 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        p_36 = ATgetArgument(t, 0);
                                        q_36 = ATgetArgument(t, 1);
                                        t = p_36;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = q_36;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            p_36 = ATgetArgument(t, 0);
                                            q_36 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = p_36;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = q_36;
                                      }
                                    ;
                                    LocalPopChoice(f_48);
                                  }
                                else
                                  {
                                    t = e_48;
                                    {
                                      ATerm g_48 = t;
                                      int h_48 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
                                          LocalPopChoice(h_48);
                                        }
                                      else
                                        {
                                          t = g_48;
                                          {
                                            ATerm i_48 = t;
                                            int k_48 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = BuildMatch_0_0(t);
                                                ;
                                                LocalPopChoice(k_48);
                                              }
                                            else
                                              {
                                                t = i_48;
                                                {
                                                  ATerm u_36 = NULL,v_36 = NULL;
                                                  if(match_cons(t, sym_As_2))
                                                    {
                                                      u_36 = ATgetArgument(t, 0);
                                                      v_36 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = u_36;
                                                  if(!(match_cons(t, sym_Wld_0)))
                                                    _fail(t);
                                                  t = v_36;
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
ATerm Seqs_1_0 (ATerm j_113 (ATerm), ATerm t)
{
  ATerm x_36 = NULL,y_36 = NULL,z_36 = NULL,a_37 = NULL,w_1 = NULL,x_1 = NULL;
  a_37 = t;
  if(match_cons(t, sym_Seqs_1))
    {
      y_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_37);
  x_36 = t;
  t = y_36;
  t = j_113(t);
  z_36 = t;
  x_1 = t;
  t = (ATerm) ATmakeAppl(sym_Seqs_1, z_36);
  w_1 = t;
  t = SSLsetAnnotations(w_1, x_36);
  return(t);
}
ATerm CallT_3_0 (ATerm g_109 (ATerm), ATerm h_109 (ATerm), ATerm i_109 (ATerm), ATerm t)
{
  ATerm d_37 = NULL,e_37 = NULL,f_37 = NULL,g_37 = NULL,h_37 = NULL,i_37 = NULL,j_37 = NULL,k_37 = NULL,y_1 = NULL,z_1 = NULL;
  k_37 = t;
  if(match_cons(t, sym_CallT_3))
    {
      e_37 = ATgetArgument(t, 0);
      f_37 = ATgetArgument(t, 1);
      g_37 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_37);
  d_37 = t;
  t = e_37;
  t = g_109(t);
  h_37 = t;
  t = f_37;
  t = h_109(t);
  i_37 = t;
  t = g_37;
  t = i_109(t);
  j_37 = t;
  z_1 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, h_37, i_37, j_37);
  y_1 = t;
  t = SSLsetAnnotations(y_1, d_37);
  return(t);
}
ATerm Prim_2_0 (ATerm g_110 (ATerm), ATerm h_110 (ATerm), ATerm t)
{
  ATerm n_37 = NULL,o_37 = NULL,p_37 = NULL,q_37 = NULL,r_37 = NULL,s_37 = NULL,a_2 = NULL,b_2 = NULL;
  s_37 = t;
  if(match_cons(t, sym_Prim_2))
    {
      o_37 = ATgetArgument(t, 0);
      p_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_37);
  n_37 = t;
  t = o_37;
  t = g_110(t);
  q_37 = t;
  t = p_37;
  t = h_110(t);
  r_37 = t;
  b_2 = t;
  t = (ATerm) ATmakeAppl(sym_Prim_2, q_37, r_37);
  a_2 = t;
  t = SSLsetAnnotations(a_2, n_37);
  return(t);
}
ATerm Var_1_0 (ATerm s_105 (ATerm), ATerm t)
{
  ATerm x_37 = NULL,y_37 = NULL,a_38 = NULL,b_38 = NULL,d_2 = NULL,e_2 = NULL;
  b_38 = t;
  if(match_cons(t, sym_Var_1))
    {
      y_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_38);
  x_37 = t;
  t = y_37;
  t = s_105(t);
  a_38 = t;
  e_2 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, a_38);
  d_2 = t;
  t = SSLsetAnnotations(d_2, x_37);
  return(t);
}
ATerm Match_1_0 (ATerm j_109 (ATerm), ATerm t)
{
  ATerm e_38 = NULL,f_38 = NULL,i_38 = NULL,k_38 = NULL,k_2 = NULL,m_2 = NULL;
  k_38 = t;
  if(match_cons(t, sym_Match_1))
    {
      f_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_38);
  e_38 = t;
  t = f_38;
  t = j_109(t);
  i_38 = t;
  m_2 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, i_38);
  k_2 = t;
  t = SSLsetAnnotations(k_2, e_38);
  return(t);
}
ATerm Assign_2_0 (ATerm u_112 (ATerm), ATerm v_112 (ATerm), ATerm t)
{
  ATerm p_38 = NULL,q_38 = NULL,r_38 = NULL,v_38 = NULL,w_38 = NULL,z_38 = NULL,n_2 = NULL,p_2 = NULL;
  z_38 = t;
  if(match_cons(t, sym_Assign_2))
    {
      q_38 = ATgetArgument(t, 0);
      r_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_38);
  p_38 = t;
  t = q_38;
  t = u_112(t);
  v_38 = t;
  t = r_38;
  t = v_112(t);
  w_38 = t;
  p_2 = t;
  t = (ATerm) ATmakeAppl(sym_Assign_2, v_38, w_38);
  n_2 = t;
  t = SSLsetAnnotations(n_2, p_38);
  return(t);
}
ATerm list_1_0 (ATerm i_127 (ATerm), ATerm t)
{
  ATerm c_39 (ATerm t)
  {
    ATerm l_48 = t;
    int m_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(m_48);
      }
    else
      {
        t = l_48;
        t = Cons_2_0(i_127, c_39, t);
      }
    return(t);
  }
  t = c_39(t);
  return(t);
}
ATerm Op_2_0 (ATerm y_105 (ATerm), ATerm z_105 (ATerm), ATerm t)
{
  ATerm h_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL,m_39 = NULL,n_39 = NULL,r_2 = NULL,s_2 = NULL;
  n_39 = t;
  if(match_cons(t, sym_Op_2))
    {
      j_39 = ATgetArgument(t, 0);
      k_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_39);
  h_39 = t;
  t = j_39;
  t = y_105(t);
  l_39 = t;
  t = k_39;
  t = z_105(t);
  m_39 = t;
  s_2 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, l_39, m_39);
  r_2 = t;
  t = SSLsetAnnotations(r_2, h_39);
  return(t);
}
ATerm Str_1_0 (ATerm w_105 (ATerm), ATerm t)
{
  ATerm r_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL,t_2 = NULL,a_3 = NULL;
  u_39 = t;
  if(match_cons(t, sym_Str_1))
    {
      s_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_39);
  r_39 = t;
  t = s_39;
  t = w_105(t);
  t_39 = t;
  a_3 = t;
  t = (ATerm) ATmakeAppl(sym_Str_1, t_39);
  t_2 = t;
  t = SSLsetAnnotations(t_2, r_39);
  return(t);
}
ATerm Real_1_0 (ATerm v_105 (ATerm), ATerm t)
{
  ATerm x_39 = NULL,y_39 = NULL,z_39 = NULL,a_40 = NULL,c_3 = NULL,f_3 = NULL;
  a_40 = t;
  if(match_cons(t, sym_Real_1))
    {
      y_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_40);
  x_39 = t;
  t = y_39;
  t = v_105(t);
  z_39 = t;
  f_3 = t;
  t = (ATerm) ATmakeAppl(sym_Real_1, z_39);
  c_3 = t;
  t = SSLsetAnnotations(c_3, x_39);
  return(t);
}
ATerm Int_1_0 (ATerm u_105 (ATerm), ATerm t)
{
  ATerm d_40 = NULL,e_40 = NULL,f_40 = NULL,g_40 = NULL,g_3 = NULL,h_3 = NULL;
  g_40 = t;
  if(match_cons(t, sym_Int_1))
    {
      e_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_40);
  d_40 = t;
  t = e_40;
  t = u_105(t);
  f_40 = t;
  h_3 = t;
  t = (ATerm) ATmakeAppl(sym_Int_1, f_40);
  g_3 = t;
  t = SSLsetAnnotations(g_3, d_40);
  return(t);
}
ATerm Build_1_0 (ATerm k_109 (ATerm), ATerm t)
{
  ATerm j_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL,o_3 = NULL,q_3 = NULL;
  m_40 = t;
  if(match_cons(t, sym_Build_1))
    {
      k_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_40);
  j_40 = t;
  t = k_40;
  t = k_109(t);
  l_40 = t;
  q_3 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, l_40);
  o_3 = t;
  t = SSLsetAnnotations(o_3, j_40);
  return(t);
}
ATerm k_22 (ATerm t)
{
  t = Var_1_0(_id, t);
  return(t);
}
ATerm l_22 (ATerm t)
{
  t = Var_1_0(_id, t);
  return(t);
}
ATerm m_22 (ATerm t)
{
  t = Var_1_0(_id, t);
  return(t);
}
ATerm n_22 (ATerm t)
{
  t = map_1_0(simple_strategy_0_0, t);
  return(t);
}
ATerm simple_strategy_0_0 (ATerm t)
{
  ATerm q_48 = t;
  int r_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      ;
      LocalPopChoice(r_48);
    }
  else
    {
      t = q_48;
      {
        ATerm b_49 = t;
        int g_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_Fail_0)))
              _fail(t);
            ;
            LocalPopChoice(g_49);
          }
        else
          {
            t = b_49;
            {
              ATerm h_49 = t;
              int i_49 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_22 (ATerm t)
                  {
                    ATerm k_49 = t;
                    int l_49 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Var_1_0(_id, t);
                        ;
                        LocalPopChoice(l_49);
                      }
                    else
                      {
                        t = k_49;
                        {
                          ATerm m_49 = t;
                          int n_49 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Int_1_0(_id, t);
                              ;
                              LocalPopChoice(n_49);
                            }
                          else
                            {
                              t = m_49;
                              {
                                ATerm o_49 = t;
                                int q_49 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Real_1_0(_id, t);
                                    ;
                                    LocalPopChoice(q_49);
                                  }
                                else
                                  {
                                    t = o_49;
                                    {
                                      ATerm r_49 = t;
                                      int s_49 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Str_1_0(_id, t);
                                          ;
                                          LocalPopChoice(s_49);
                                        }
                                      else
                                        {
                                          t = r_49;
                                          {
                                            ATerm j_22 (ATerm t)
                                            {
                                              t = list_1_0(h_22, t);
                                              return(t);
                                            }
                                            t = Op_2_0(_id, j_22, t);
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
                  t = Build_1_0(h_22, t);
                  ;
                  LocalPopChoice(i_49);
                }
              else
                {
                  t = h_49;
                  {
                    ATerm t_49 = t;
                    int u_49 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Assign_2_0(k_22, l_22, t);
                        ;
                        LocalPopChoice(u_49);
                      }
                    else
                      {
                        t = t_49;
                        {
                          ATerm v_49 = t;
                          int w_49 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Match_1_0(m_22, t);
                              ;
                              LocalPopChoice(w_49);
                            }
                          else
                            {
                              t = v_49;
                              {
                                ATerm x_49 = t;
                                int y_49 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Prim_2_0(_id, _id, t);
                                    ;
                                    LocalPopChoice(y_49);
                                  }
                                else
                                  {
                                    t = x_49;
                                    {
                                      ATerm z_49 = t;
                                      int a_50 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = CallT_3_0(_id, _id, _id, t);
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
                                                t = Seq_2_0(simple_strategy_0_0, simple_strategy_0_0, t);
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
                                                      t = Seqs_1_0(n_22, t);
                                                      ;
                                                      LocalPopChoice(e_50);
                                                    }
                                                  else
                                                    {
                                                      t = d_50;
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
ATerm isect_1_0 (ATerm a_129 (ATerm), ATerm t)
{
  ATerm s_40 = NULL,t_40 = NULL;
  if(match_cons(t, sym__2))
    {
      s_40 = ATgetArgument(t, 0);
      t_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_40;
  {
    ATerm a_41 (ATerm t)
    {
      ATerm f_50 = t;
      int g_50 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(g_50);
        }
      else
        {
          t = f_50;
          {
            ATerm u_40 = NULL,w_40 = NULL;
            u_40 = t;
            {
              ATerm h_50 = t;
              int i_50 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm j_50 = ATgetFirst((ATermList) t);
                      w_40 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(i_50);
                  {
                    ATerm k_50 = t;
                    int l_50 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm b_8 = NULL;
                        t = u_40;
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            b_8 = ATgetFirst((ATermList) t);
                            {
                              ATerm m_50 = (ATerm) ATgetNext((ATermList) t);
                            }
                          }
                        else
                          _fail(t);
                        t = t_40;
                        {
                          ATerm p_22 (ATerm t)
                          {
                            ATerm d_8 = NULL;
                            d_8 = t;
                            t = (ATerm) ATmakeAppl(sym__2, b_8, d_8);
                            t = a_129(t);
                            return(t);
                          }
                          t = fetch_1_0(p_22, t);
                          t = u_40;
                          t = Cons_2_0(_id, a_41, t);
                        }
                        ;
                        LocalPopChoice(l_50);
                      }
                    else
                      {
                        t = k_50;
                        t = w_40;
                        t = a_41(t);
                      }
                  }
                }
              else
                {
                  t = h_50;
                  {
                    ATerm g_8 = NULL;
                    t = u_40;
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        g_8 = ATgetFirst((ATermList) t);
                        {
                          ATerm n_50 = (ATerm) ATgetNext((ATermList) t);
                        }
                      }
                    else
                      _fail(t);
                    t = t_40;
                    {
                      ATerm q_22 (ATerm t)
                      {
                        ATerm i_8 = NULL;
                        i_8 = t;
                        t = (ATerm) ATmakeAppl(sym__2, g_8, i_8);
                        t = a_129(t);
                        return(t);
                      }
                      t = fetch_1_0(q_22, t);
                      t = u_40;
                      t = Cons_2_0(_id, a_41, t);
                    }
                  }
                }
            }
          }
        }
      return(t);
    }
    t = a_41(t);
  }
  return(t);
}
ATerm Matrix_2_0 (ATerm d_112 (ATerm), ATerm e_112 (ATerm), ATerm t)
{
  ATerm b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL,g_41 = NULL,t_3 = NULL,u_3 = NULL;
  g_41 = t;
  if(match_cons(t, sym_Matrix_2))
    {
      c_41 = ATgetArgument(t, 0);
      d_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_41);
  b_41 = t;
  t = c_41;
  t = d_112(t);
  e_41 = t;
  t = d_41;
  t = e_112(t);
  f_41 = t;
  u_3 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_2, e_41, f_41);
  t_3 = t;
  t = SSLsetAnnotations(t_3, b_41);
  return(t);
}
ATerm DynamicRules_1_0 (ATerm j_108 (ATerm), ATerm t)
{
  ATerm j_41 = NULL,m_41 = NULL,n_41 = NULL,o_41 = NULL,v_3 = NULL,e_4 = NULL;
  o_41 = t;
  if(match_cons(t, sym_DynamicRules_1))
    {
      m_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_41);
  j_41 = t;
  t = m_41;
  t = j_108(t);
  n_41 = t;
  e_4 = t;
  t = (ATerm) ATmakeAppl(sym_DynamicRules_1, n_41);
  v_3 = t;
  t = SSLsetAnnotations(v_3, j_41);
  return(t);
}
ATerm RDefT_4_0 (ATerm a_108 (ATerm), ATerm b_108 (ATerm), ATerm c_108 (ATerm), ATerm d_108 (ATerm), ATerm t)
{
  ATerm v_41 = NULL,x_41 = NULL,k_43 = NULL,m_43 = NULL,n_43 = NULL,o_43 = NULL,s_43 = NULL,v_43 = NULL,y_43 = NULL,z_43 = NULL,f_4 = NULL,g_4 = NULL;
  z_43 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      x_41 = ATgetArgument(t, 0);
      k_43 = ATgetArgument(t, 1);
      m_43 = ATgetArgument(t, 2);
      n_43 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_43);
  v_41 = t;
  t = x_41;
  t = a_108(t);
  o_43 = t;
  t = k_43;
  t = b_108(t);
  s_43 = t;
  t = m_43;
  t = c_108(t);
  v_43 = t;
  t = n_43;
  t = d_108(t);
  y_43 = t;
  g_4 = t;
  t = (ATerm) ATmakeAppl(sym_RDefT_4, o_43, s_43, v_43, y_43);
  f_4 = t;
  t = SSLsetAnnotations(f_4, v_41);
  return(t);
}
ATerm tboundin_3_0 (ATerm e_120 (ATerm), ATerm f_120 (ATerm), ATerm g_120 (ATerm), ATerm t)
{
  ATerm o_50 = t;
  int p_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(g_120, e_120, t);
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
            t = SDefT_4_0(g_120, g_120, g_120, e_120, t);
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
                  t = RDefT_4_0(g_120, g_120, g_120, e_120, t);
                  ;
                  LocalPopChoice(t_50);
                }
              else
                {
                  t = s_50;
                  t = DynamicRules_1_0(e_120, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm r_22 (ATerm t)
{
  ATerm p_44 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      p_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, p_44);
  return(t);
}
ATerm s_22 (ATerm t)
{
  ATerm u_50 = t;
  int w_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(w_50);
    }
  else
    {
      t = u_50;
      {
        ATerm x_50 = t;
        int y_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            ;
            LocalPopChoice(y_50);
          }
        else
          {
            t = x_50;
            {
              ATerm v_44 = NULL;
              ATerm z_50 = t;
              int a_51 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      ATerm b_51 = ATgetArgument(t, 0);
                      ATerm c_51 = ATgetArgument(t, 1);
                      v_44 = ATgetArgument(t, 2);
                      {
                        ATerm d_51 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(a_51);
                  t = v_44;
                  t = map_1_0(t_22, t);
                }
              else
                {
                  t = z_50;
                  if(match_cons(t, sym_RDefT_4))
                    {
                      ATerm h_51 = ATgetArgument(t, 0);
                      ATerm i_51 = ATgetArgument(t, 1);
                      v_44 = ATgetArgument(t, 2);
                      {
                        ATerm j_51 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  t = v_44;
                  t = map_1_0(u_22, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm t_22 (ATerm t)
{
  ATerm c_45 = NULL;
  ATerm k_51 = t;
  int p_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_45 = ATgetArgument(t, 0);
          {
            ATerm q_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_51);
      t = c_45;
    }
  else
    {
      t = k_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_45 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_45;
    }
  return(t);
}
ATerm u_22 (ATerm t)
{
  ATerm m_45 = NULL;
  ATerm r_51 = t;
  int u_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_45 = ATgetArgument(t, 0);
          {
            ATerm w_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_51);
      t = m_45;
    }
  else
    {
      t = r_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_45 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_45;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm o_44 = NULL;
  if(match_cons(t, sym_DynamicRules_1))
    {
      o_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_44;
  t = free_vars_3_0(r_22, s_22, tboundin_3_0, t);
  return(t);
}
ATerm v_22 (ATerm t)
{
  ATerm w_45 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_45);
  return(t);
}
ATerm w_22 (ATerm t)
{
  ATerm x_51 = t;
  int y_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(y_51);
    }
  else
    {
      t = x_51;
      {
        ATerm z_45 = NULL,d_46 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            z_45 = ATgetArgument(t, 0);
            t = z_45;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm a_52 = t;
            int b_52 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm c_52 = ATgetArgument(t, 0);
                    ATerm d_52 = ATgetArgument(t, 1);
                    d_46 = ATgetArgument(t, 2);
                    {
                      ATerm e_52 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(b_52);
                t = d_46;
                t = map_1_0(a_23, t);
              }
            else
              {
                t = a_52;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm f_52 = ATgetArgument(t, 0);
                    ATerm g_52 = ATgetArgument(t, 1);
                    d_46 = ATgetArgument(t, 2);
                    {
                      ATerm h_52 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = d_46;
                t = map_1_0(b_23, t);
              }
          }
      }
    }
  return(t);
}
ATerm a_23 (ATerm t)
{
  ATerm k_46 = NULL;
  ATerm i_52 = t;
  int j_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_46 = ATgetArgument(t, 0);
          {
            ATerm k_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_52);
      t = k_46;
    }
  else
    {
      t = i_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_46 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_46;
    }
  return(t);
}
ATerm b_23 (ATerm t)
{
  ATerm q_46 = NULL;
  ATerm l_52 = t;
  int m_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_46 = ATgetArgument(t, 0);
          {
            ATerm n_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_52);
      t = q_46;
    }
  else
    {
      t = l_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_46 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_46;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(v_22, w_22, tboundin_3_0, t);
  return(t);
}
ATerm c_23 (ATerm t)
{
  ATerm o_47 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_47);
  return(t);
}
ATerm e_23 (ATerm t)
{
  ATerm o_52 = t;
  int p_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(p_52);
    }
  else
    {
      t = o_52;
      {
        ATerm q_47 = NULL,u_47 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            q_47 = ATgetArgument(t, 0);
            t = q_47;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm q_52 = t;
            int r_52 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm s_52 = ATgetArgument(t, 0);
                    ATerm t_52 = ATgetArgument(t, 1);
                    u_47 = ATgetArgument(t, 2);
                    {
                      ATerm u_52 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(r_52);
                t = u_47;
                t = map_1_0(f_23, t);
              }
            else
              {
                t = q_52;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm v_52 = ATgetArgument(t, 0);
                    ATerm w_52 = ATgetArgument(t, 1);
                    u_47 = ATgetArgument(t, 2);
                    {
                      ATerm x_52 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = u_47;
                t = map_1_0(h_23, t);
              }
          }
      }
    }
  return(t);
}
ATerm f_23 (ATerm t)
{
  ATerm c_48 = NULL;
  ATerm y_52 = t;
  int z_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_48 = ATgetArgument(t, 0);
          {
            ATerm a_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_52);
      t = c_48;
    }
  else
    {
      t = y_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_48;
    }
  return(t);
}
ATerm h_23 (ATerm t)
{
  ATerm j_48 = NULL;
  ATerm b_53 = t;
  int c_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_48 = ATgetArgument(t, 0);
          {
            ATerm d_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_53);
      t = j_48;
    }
  else
    {
      t = b_53;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_48;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm d_47 = NULL,l_47 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      l_47 = ATgetArgument(t, 0);
      t = l_47;
      if(match_cons(t, sym_Rule_3))
        {
          d_47 = ATgetArgument(t, 0);
          {
            ATerm e_53 = ATgetArgument(t, 1);
          }
          {
            ATerm f_53 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = d_47;
      t = free_vars_3_0(c_23, e_23, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          l_47 = ATgetArgument(t, 0);
          {
            ATerm g_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = l_47;
    }
  return(t);
}
ATerm diff_1_0 (ATerm c_129 (ATerm), ATerm t)
{
  ATerm n_48 = NULL,o_48 = NULL;
  if(match_cons(t, sym__2))
    {
      n_48 = ATgetArgument(t, 0);
      o_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_48;
  {
    ATerm p_48 (ATerm t)
    {
      ATerm h_53 = t;
      int i_53 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(i_53);
        }
      else
        {
          t = h_53;
          {
            ATerm j_53 = t;
            int k_53 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_8 = NULL,m_8 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    l_8 = ATgetFirst((ATermList) t);
                    m_8 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = o_48;
                {
                  ATerm i_23 (ATerm t)
                  {
                    ATerm n_8 = NULL;
                    n_8 = t;
                    t = (ATerm) ATmakeAppl(sym__2, l_8, n_8);
                    t = c_129(t);
                    return(t);
                  }
                  t = fetch_1_0(i_23, t);
                  t = m_8;
                  t = p_48(t);
                }
                ;
                LocalPopChoice(k_53);
              }
            else
              {
                t = j_53;
                t = Cons_2_0(_id, p_48, t);
              }
          }
        }
      return(t);
    }
    t = p_48(t);
  }
  return(t);
}
ATerm j_23 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_53 = ATgetArgument(t, 0);
      if(((ATgetType(l_53) != AT_LIST) || !(ATisEmpty(l_53))))
        _fail(t);
      {
        ATerm m_53 = ATgetArgument(t, 1);
        if(((ATgetType(m_53) != AT_LIST) || !(ATisEmpty(m_53))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_23 (ATerm t)
{
  ATerm z_48 = NULL,a_49 = NULL,c_49 = NULL,d_49 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_53 = ATgetArgument(t, 0);
      if(((ATgetType(n_53) == AT_LIST) && !(ATisEmpty(n_53))))
        {
          z_48 = ATgetFirst((ATermList) n_53);
          c_49 = (ATerm) ATgetNext((ATermList) n_53);
        }
      else
        _fail(t);
      {
        ATerm o_53 = ATgetArgument(t, 1);
        if(((ATgetType(o_53) == AT_LIST) && !(ATisEmpty(o_53))))
          {
            a_49 = ATgetFirst((ATermList) o_53);
            d_49 = (ATerm) ATgetNext((ATermList) o_53);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_48, a_49), (ATerm) ATmakeAppl(sym__2, c_49, d_49));
  return(t);
}
ATerm l_23 (ATerm t)
{
  ATerm e_49 = NULL,f_49 = NULL;
  if(match_cons(t, sym__2))
    {
      e_49 = ATgetArgument(t, 0);
      f_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(f_49), e_49);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm s_48 = NULL,t_48 = NULL,u_48 = NULL,v_48 = NULL,w_48 = NULL,x_48 = NULL,y_48 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm p_53 = ATgetFirst((ATermList) t);
      if(match_cons(p_53, sym__2))
        {
          s_48 = ATgetArgument(p_53, 0);
          t_48 = ATgetArgument(p_53, 1);
        }
      else
        _fail(t);
      u_48 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(t_48);
  if(match_cons(t, sym__2))
    {
      v_48 = ATgetArgument(t, 0);
      w_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(s_48);
  if(match_cons(t, sym__2))
    {
      if((v_48 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      x_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_48, w_48);
  t = genzip_4_0(j_23, k_23, l_23, _id, t);
  y_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_48, u_48);
  {
    ATerm q_53 = t;
    int r_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_53 = ATgetArgument(t, 0);
            ATerm t_53 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_48;
        {
          ATerm m_23 (ATerm t)
          {
            t = u_48;
            return(t);
          }
          t = at_end_1_0(m_23, t);
        }
        ;
        LocalPopChoice(r_53);
      }
    else
      {
        t = q_53;
        {
          ATerm u_8 = NULL,h_4 = NULL,j_4 = NULL;
          j_4 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_48, u_48);
          h_4 = t;
          t = SSL_explode_term(h_4);
          if(match_cons(t, sym__2))
            {
              ATerm u_53 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) u_53) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              u_8 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = u_8;
          t = concat_0_0(t);
        }
      }
  }
  return(t);
}
ATerm while_not_2_0 (ATerm d_138 (ATerm), ATerm e_138 (ATerm), ATerm t)
{
  ATerm j_49 (ATerm t)
  {
    ATerm v_53 = t;
    int w_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_138(t);
        ;
        LocalPopChoice(w_53);
      }
    else
      {
        t = v_53;
        t = e_138(t);
        t = j_49(t);
      }
    return(t);
  }
  t = j_49(t);
  return(t);
}
ATerm for_3_0 (ATerm g_138 (ATerm), ATerm h_138 (ATerm), ATerm i_138 (ATerm), ATerm t)
{
  t = g_138(t);
  t = while_not_2_0(h_138, i_138, t);
  return(t);
}
ATerm o_23 (ATerm t)
{
  ATerm p_49 = NULL;
  p_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, p_49);
  return(t);
}
ATerm q_23 (ATerm t)
{
  t = _2_0(_id, u_23, t);
  return(t);
}
ATerm s_23 (ATerm t)
{
  ATerm x_53 = t;
  int y_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(_id, v_23, t);
      ;
      LocalPopChoice(y_53);
    }
  else
    {
      t = x_53;
      {
        ATerm l_51 = NULL,m_51 = NULL,n_51 = NULL,o_51 = NULL;
        if(match_cons(t, sym__2))
          {
            l_51 = ATgetArgument(t, 0);
            m_51 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_51;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_51 = ATgetFirst((ATermList) t);
            o_51 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_51), n_51), o_51);
      }
    }
  return(t);
}
ATerm u_23 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm v_23 (ATerm t)
{
  ATerm z_53 = t;
  int a_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_50 = NULL,e_51 = NULL,f_51 = NULL,g_51 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_50 = ATgetFirst((ATermList) t);
          g_51 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_50;
      if(match_cons(t, sym__2))
        {
          e_51 = ATgetArgument(t, 0);
          f_51 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = f_51;
      if((e_51 != t))
        {
          _fail(t);
        }
      t = g_51;
      ;
      LocalPopChoice(a_54);
    }
  else
    {
      t = z_53;
      t = UfDecompose_0_0(t);
    }
  return(t);
}
ATerm z_23 (ATerm t)
{
  ATerm s_51 = NULL;
  if(match_cons(t, sym__2))
    {
      s_51 = ATgetArgument(t, 0);
      if((s_51 != ATgetArgument(t, 1)))
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
  ATerm b_54 = t;
  int c_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(o_23, q_23, s_23, t);
      ;
      LocalPopChoice(c_54);
    }
  else
    {
      t = b_54;
      t = diff_1_0(z_23, t);
    }
  return(t);
}
ATerm b_24 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm c_24 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm d_24 (ATerm t)
{
  t = union_1_0(e_24, t);
  return(t);
}
ATerm e_24 (ATerm t)
{
  ATerm f_9 = NULL;
  if(match_cons(t, sym__2))
    {
      f_9 = ATgetArgument(t, 0);
      if((f_9 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm f_24 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm g_24 (ATerm t)
{
  t = union_1_0(k_24, t);
  return(t);
}
ATerm k_24 (ATerm t)
{
  ATerm o_9 = NULL;
  if(match_cons(t, sym__2))
    {
      o_9 = ATgetArgument(t, 0);
      if((o_9 != ATgetArgument(t, 1)))
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
  ATerm z_51 (ATerm t)
  {
    ATerm d_54 = t;
    int e_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_135(t);
        ;
        LocalPopChoice(e_54);
      }
    else
      {
        t = d_54;
        {
          ATerm f_54 = t;
          int g_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_51 = NULL,v_51 = NULL,a_9 = NULL,b_9 = NULL;
              t_51 = t;
              t = y_135(t);
              v_51 = t;
              t = t_51;
              {
                ATerm a_24 (ATerm t)
                {
                  ATerm w_8 = NULL;
                  t = z_51(t);
                  w_8 = t;
                  t = (ATerm) ATmakeAppl(sym__2, w_8, v_51);
                  t = diff_0_0(t);
                  return(t);
                }
                t = z_135(a_24, z_51, b_24, t);
                a_9 = t;
                t = SSL_explode_term(a_9);
                if(match_cons(t, sym__2))
                  {
                    ATerm h_54 = ATgetArgument(t, 0);
                    b_9 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = b_9;
                t = foldr_3_0(c_24, d_24, _id, t);
              }
              ;
              LocalPopChoice(g_54);
            }
          else
            {
              t = f_54;
              {
                ATerm g_9 = NULL,h_9 = NULL;
                g_9 = t;
                t = SSL_explode_term(g_9);
                if(match_cons(t, sym__2))
                  {
                    ATerm i_54 = ATgetArgument(t, 0);
                    h_9 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = h_9;
                t = foldr_3_0(f_24, g_24, z_51, t);
              }
            }
        }
      }
    return(t);
  }
  t = z_51(t);
  return(t);
}
ATerm l_24 (ATerm t)
{
  ATerm e_10 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      e_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, e_10);
  return(t);
}
ATerm n_24 (ATerm t)
{
  ATerm j_54 = t;
  int k_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(k_54);
    }
  else
    {
      t = j_54;
      {
        ATerm f_10 = NULL,l_10 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            l_10 = ATgetArgument(t, 0);
            t = l_10;
            t = free_vars_3_0(c_25, d_25, tboundin_3_0, t);
          }
        else
          {
            ATerm l_54 = t;
            int m_54 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm n_54 = ATgetArgument(t, 0);
                    ATerm o_54 = ATgetArgument(t, 1);
                    f_10 = ATgetArgument(t, 2);
                    {
                      ATerm p_54 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(m_54);
                t = f_10;
                t = map_1_0(h_25, t);
              }
            else
              {
                t = l_54;
                {
                  ATerm q_54 = t;
                  int r_54 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_RDefT_4))
                        {
                          ATerm s_54 = ATgetArgument(t, 0);
                          ATerm t_54 = ATgetArgument(t, 1);
                          f_10 = ATgetArgument(t, 2);
                          {
                            ATerm u_54 = ATgetArgument(t, 3);
                          }
                        }
                      else
                        _fail(t);
                      LocalPopChoice(r_54);
                      t = f_10;
                      t = map_1_0(i_25, t);
                    }
                  else
                    {
                      t = q_54;
                      if(match_cons(t, sym_Matrix_2))
                        {
                          l_10 = ATgetArgument(t, 0);
                          {
                            ATerm v_54 = ATgetArgument(t, 1);
                          }
                        }
                      else
                        _fail(t);
                      t = l_10;
                    }
                }
              }
          }
      }
    }
  return(t);
}
ATerm t_12 (ATerm p_12 (ATerm), ATerm q_12 (ATerm), ATerm r_12 (ATerm), ATerm t)
{
  ATerm w_54 = t;
  int x_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = tboundin_3_0(p_12, q_12, r_12, t);
      ;
      LocalPopChoice(x_54);
    }
  else
    {
      t = w_54;
      t = Matrix_2_0(r_12, p_12, t);
    }
  return(t);
}
ATerm c_25 (ATerm t)
{
  ATerm o_10 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_10);
  return(t);
}
ATerm d_25 (ATerm t)
{
  ATerm y_54 = t;
  int c_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(c_55);
    }
  else
    {
      t = y_54;
      {
        ATerm d_55 = t;
        int e_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            ;
            LocalPopChoice(e_55);
          }
        else
          {
            t = d_55;
            {
              ATerm s_10 = NULL;
              ATerm f_55 = t;
              int g_55 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      ATerm h_55 = ATgetArgument(t, 0);
                      ATerm i_55 = ATgetArgument(t, 1);
                      s_10 = ATgetArgument(t, 2);
                      {
                        ATerm j_55 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(g_55);
                  t = s_10;
                  t = map_1_0(e_25, t);
                }
              else
                {
                  t = f_55;
                  if(match_cons(t, sym_RDefT_4))
                    {
                      ATerm k_55 = ATgetArgument(t, 0);
                      ATerm l_55 = ATgetArgument(t, 1);
                      s_10 = ATgetArgument(t, 2);
                      {
                        ATerm m_55 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  t = s_10;
                  t = map_1_0(g_25, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm e_25 (ATerm t)
{
  ATerm x_10 = NULL;
  ATerm n_55 = t;
  int s_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_10 = ATgetArgument(t, 0);
          {
            ATerm x_55 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_55);
      t = x_10;
    }
  else
    {
      t = n_55;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_10;
    }
  return(t);
}
ATerm g_25 (ATerm t)
{
  ATerm e_11 = NULL;
  ATerm b_56 = t;
  int f_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_11 = ATgetArgument(t, 0);
          {
            ATerm l_56 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_56);
      t = e_11;
    }
  else
    {
      t = b_56;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_11;
    }
  return(t);
}
ATerm h_25 (ATerm t)
{
  ATerm m_11 = NULL;
  ATerm m_56 = t;
  int n_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_11 = ATgetArgument(t, 0);
          {
            ATerm o_56 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_56);
      t = m_11;
    }
  else
    {
      t = m_56;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_11;
    }
  return(t);
}
ATerm i_25 (ATerm t)
{
  ATerm t_11 = NULL;
  ATerm p_56 = t;
  int q_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_11 = ATgetArgument(t, 0);
          {
            ATerm r_56 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_56);
      t = t_11;
    }
  else
    {
      t = p_56;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_11;
    }
  return(t);
}
ATerm j_25 (ATerm t)
{
  ATerm y_11 = NULL;
  if(match_cons(t, sym__2))
    {
      y_11 = ATgetArgument(t, 0);
      if((y_11 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm k_25 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_s_56;
  return(t);
}
ATerm l_25 (ATerm t)
{
  ATerm z_11 = NULL,a_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_11 = ATgetFirst((ATermList) t);
      a_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_11, a_12);
  return(t);
}
ATerm m_25 (ATerm t)
{
  ATerm b_12 = NULL,c_12 = NULL,d_12 = NULL,f_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_56 = ATgetArgument(t, 0);
      if(match_cons(t_56, sym__2))
        {
          b_12 = ATgetArgument(t_56, 0);
          d_12 = ATgetArgument(t_56, 1);
        }
      else
        _fail(t);
      {
        ATerm u_56 = ATgetArgument(t, 1);
        if(match_cons(u_56, sym__2))
          {
            c_12 = ATgetArgument(u_56, 0);
            f_12 = ATgetArgument(u_56, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_12), b_12), (ATerm) ATinsert(CheckATermList(f_12), d_12));
  return(t);
}
ATerm n_25 (ATerm t)
{
  ATerm g_12 = NULL;
  g_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_VarDec_2, g_12, term_u_45), (ATerm) ATmakeAppl(sym_Var_1, g_12));
  return(t);
}
ATerm RowLet_1_0 (ATerm u_0 (ATerm), ATerm t)
{
  ATerm z_54 = NULL,a_55 = NULL,b_55 = NULL;
  z_54 = t;
  if(match_cons(t, sym_Row_2))
    {
      a_55 = ATgetArgument(t, 0);
      b_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_56 = t;
    int w_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL;
        t = b_55;
        {
          ATerm x_56 = t;
          if((PushChoice() == 0))
            {
              t = simple_strategy_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = x_56;
            }
          t = new_0_0(t);
          z_9 = t;
          t = b_55;
          t = free_vars_3_0(l_24, n_24, t_12, t);
          a_10 = t;
          t = u_0(t);
          b_10 = t;
          t = (ATerm) ATmakeAppl(sym__2, a_10, b_10);
          t = isect_1_0(j_25, t);
          t = genzip_4_0(k_25, l_25, m_25, n_25, t);
          if(match_cons(t, sym__2))
            {
              c_10 = ATgetArgument(t, 0);
              d_10 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, z_9, (ATerm)ATempty, c_10, b_55)), (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATempty, a_55, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, z_9), (ATerm)ATempty, d_10)));
        }
        ;
        LocalPopChoice(w_56);
      }
    else
      {
        t = v_56;
        t = b_55;
        t = simple_strategy_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATempty, a_55, b_55));
      }
  }
  return(t);
}
ATerm r_25 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_s_56;
  return(t);
}
ATerm s_25 (ATerm t)
{
  ATerm t_55 = NULL,u_55 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_55 = ATgetFirst((ATermList) t);
      u_55 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_55, u_55);
  return(t);
}
ATerm t_25 (ATerm t)
{
  ATerm v_55 = NULL,w_55 = NULL,y_55 = NULL,z_55 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_56 = ATgetArgument(t, 0);
      if(match_cons(y_56, sym__2))
        {
          v_55 = ATgetArgument(y_56, 0);
          y_55 = ATgetArgument(y_56, 1);
        }
      else
        _fail(t);
      {
        ATerm z_56 = ATgetArgument(t, 1);
        if(match_cons(z_56, sym__2))
          {
            w_55 = ATgetArgument(z_56, 0);
            z_55 = ATgetArgument(z_56, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_55), v_55), (ATerm) ATinsert(CheckATermList(z_55), y_55));
  return(t);
}
ATerm MatrixScope_0_0 (ATerm t)
{
  ATerm o_55 = NULL,p_55 = NULL,q_55 = NULL,r_55 = NULL;
  if(match_cons(t, sym_Matrix_2))
    {
      o_55 = ATgetArgument(t, 0);
      p_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_55;
  {
    ATerm u_25 (ATerm t)
    {
      ATerm v_25 (ATerm t)
      {
        t = o_55;
        return(t);
      }
      t = RowLet_1_0(v_25, t);
      return(t);
    }
    t = genzip_4_0(r_25, s_25, t_25, u_25, t);
    t = _2_0(concat_0_0, _id, t);
    if(match_cons(t, sym__2))
      {
        q_55 = ATgetArgument(t, 0);
        r_55 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym_Let_2, q_55, (ATerm) ATmakeAppl(sym_Scope_2, o_55, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATinsert(ATempty, term_a_57))), (ATerm) ATmakeAppl(sym_Matrix_1, r_55))));
  }
  return(t);
}
ATerm assert_1_0 (ATerm e_133 (ATerm), ATerm t)
{
  ATerm a_56 = NULL,c_56 = NULL,d_56 = NULL,e_56 = NULL,g_56 = NULL,t_4 = NULL,u_4 = NULL,x_4 = NULL,a_5 = NULL;
  if(match_cons(t, sym__2))
    {
      a_56 = ATgetArgument(t, 0);
      c_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_133(t);
  d_56 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_56, a_56, c_56);
  t = table_push_0_0(t);
  {
    ATerm b_57 = t;
    int c_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_4 = NULL,m_4 = NULL;
        m_4 = t;
        t = term_d_57;
        l_4 = t;
        t = SSL_table_get(d_56, l_4);
        ;
        LocalPopChoice(c_57);
      }
    else
      {
        t = b_57;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_56 = ATgetFirst((ATermList) t);
        g_56 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    x_4 = t;
    t = term_d_57;
    t_4 = t;
    t = x_4;
    a_5 = t;
    t = (ATerm) ATinsert(CheckATermList(g_56), (ATerm) ATinsert(CheckATermList(e_56), a_56));
    u_4 = t;
    t = SSL_table_put(d_56, t_4, u_4);
    t = (ATerm) ATmakeAppl(sym__2, a_56, c_56);
  }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm a_26 (ATerm t)
{
  ATerm i_56 = NULL,j_56 = NULL,k_56 = NULL;
  if(match_cons(t, sym_Row_3))
    {
      ATerm e_57 = ATgetArgument(t, 0);
      if(((ATgetType(e_57) == AT_LIST) && !(ATisEmpty(e_57))))
        {
          ATerm f_57 = ATgetFirst((ATermList) e_57);
          if(match_cons(f_57, sym_As_2))
            {
              ATerm g_57 = ATgetArgument(f_57, 0);
              ATerm h_57 = ATgetArgument(f_57, 1);
              if(!(match_cons(h_57, sym_Wld_0)))
                _fail(t);
            }
          else
            _fail(t);
          i_56 = (ATerm) ATgetNext((ATermList) e_57);
        }
      else
        _fail(t);
      j_56 = ATgetArgument(t, 1);
      k_56 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Row_3, i_56, j_56, k_56);
  return(t);
}
ATerm default_state_0_0 (ATerm t)
{
  ATerm h_56 = NULL;
  t = filter_1_0(a_26, t);
  h_56 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, h_56);
  return(t);
}
ATerm b_26 (ATerm t)
{
  ATerm o_57 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, o_57), term_l_57);
  return(t);
}
ATerm c_26 (ATerm t)
{
  t = term_a_57;
  return(t);
}
ATerm d_26 (ATerm t)
{
  ATerm s_13 = NULL,t_13 = NULL;
  if(match_cons(t, sym__2))
    {
      s_13 = ATgetArgument(t, 0);
      t_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_57 = t;
    int n_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(s_13, t_13);
        ;
        LocalPopChoice(n_57);
      }
    else
      {
        t = m_57;
        t = SSL_addr(s_13, t_13);
      }
  }
  return(t);
}
ATerm e_26 (ATerm t)
{
  t = term_g_34;
  return(t);
}
ATerm MatchCons_2_0 (ATerm q_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm i_57 = NULL,j_57 = NULL,k_57 = NULL;
  i_57 = t;
  if(match_cons(t, sym_Wld_0))
    {
      t = i_57;
      t = t_0(t);
      t = map_1_0(b_26, t);
    }
  else
    {
      if(match_cons(t, sym_Int_1))
        {
          j_57 = ATgetArgument(t, 0);
          t = i_57;
          t = q_0(t);
          if(match_cons(t, sym_Int_1))
            {
              if((j_57 != ATgetArgument(t, 0)))
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
              j_57 = ATgetArgument(t, 0);
              t = i_57;
              t = q_0(t);
              if(match_cons(t, sym_Real_1))
                {
                  if((j_57 != ATgetArgument(t, 0)))
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
                  j_57 = ATgetArgument(t, 0);
                  t = i_57;
                  t = q_0(t);
                  if(match_cons(t, sym_Str_1))
                    {
                      if((j_57 != ATgetArgument(t, 0)))
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
                  ATerm q_13 = NULL,r_13 = NULL;
                  if(match_cons(t, sym_Op_2))
                    {
                      j_57 = ATgetArgument(t, 0);
                      k_57 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = i_57;
                  t = q_0(t);
                  if(match_cons(t, sym_Fun_2))
                    {
                      if((j_57 != ATgetArgument(t, 0)))
                        {
                          _fail(ATgetArgument(t, 0));
                        }
                      q_13 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = k_57;
                  t = foldr_3_0(c_26, d_26, e_26, t);
                  r_13 = t;
                  t = q_13;
                  if((r_13 != t))
                    {
                      _fail(t);
                    }
                  t = k_57;
                }
            }
        }
    }
  return(t);
}
ATerm ConsTransition_1_0 (ATerm q_149 (ATerm), ATerm t)
{
  ATerm w_57 = NULL,x_57 = NULL,y_57 = NULL,z_57 = NULL,d_58 = NULL,e_58 = NULL;
  if(match_cons(t, sym_Row_3))
    {
      ATerm p_57 = ATgetArgument(t, 0);
      if(((ATgetType(p_57) == AT_LIST) && !(ATisEmpty(p_57))))
        {
          ATerm q_57 = ATgetFirst((ATermList) p_57);
          if(match_cons(q_57, sym_As_2))
            {
              ATerm r_57 = ATgetArgument(q_57, 0);
              w_57 = ATgetArgument(q_57, 1);
            }
          else
            _fail(t);
          x_57 = (ATerm) ATgetNext((ATermList) p_57);
        }
      else
        _fail(t);
      y_57 = ATgetArgument(t, 1);
      z_57 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = w_57;
  t = q_149(t);
  d_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_58, y_57);
  {
    ATerm s_57 = t;
    int t_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_57 = ATgetArgument(t, 0);
            ATerm v_57 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_58;
        {
          ATerm f_26 (ATerm t)
          {
            t = y_57;
            return(t);
          }
          t = at_end_1_0(f_26, t);
        }
        ;
        LocalPopChoice(t_57);
      }
    else
      {
        t = s_57;
        {
          ATerm b_14 = NULL,b_5 = NULL,d_5 = NULL;
          d_5 = t;
          t = (ATerm) ATmakeAppl(sym__2, d_58, y_57);
          b_5 = t;
          t = SSL_explode_term(b_5);
          if(match_cons(t, sym__2))
            {
              ATerm a_58 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) a_58) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              b_14 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_14;
          t = concat_0_0(t);
        }
      }
    e_58 = t;
    t = (ATerm) ATmakeAppl(sym_Row_3, x_57, e_58, z_57);
  }
  return(t);
}
ATerm Transition_0_0 (ATerm t)
{
  ATerm n_58 = NULL,o_58 = NULL,p_58 = NULL,q_58 = NULL;
  if(match_cons(t, sym__2))
    {
      n_58 = ATgetArgument(t, 0);
      {
        ATerm b_58 = ATgetArgument(t, 1);
        if(match_cons(b_58, sym__2))
          {
            o_58 = ATgetArgument(b_58, 0);
            p_58 = ATgetArgument(b_58, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = n_58;
  {
    ATerm g_26 (ATerm t)
    {
      ATerm h_26 (ATerm t)
      {
        ATerm i_26 (ATerm t)
        {
          t = o_58;
          return(t);
        }
        ATerm j_26 (ATerm t)
        {
          t = p_58;
          return(t);
        }
        t = MatchCons_2_0(i_26, j_26, t);
        return(t);
      }
      t = ConsTransition_1_0(h_26, t);
      return(t);
    }
    t = filter_1_0(g_26, t);
    q_58 = t;
    t = (ATerm) ATmakeAppl(sym_Alt_3, o_58, p_58, (ATerm) ATmakeAppl(sym_Matrix_1, q_58));
  }
  return(t);
}
ATerm filter_1_0 (ATerm i_133 (ATerm), ATerm t)
{
  ATerm c_58 = t;
  int f_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(f_58);
    }
  else
    {
      t = c_58;
      {
        ATerm g_58 = t;
        int h_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_26 (ATerm t)
            {
              t = filter_1_0(i_133, t);
              return(t);
            }
            t = Cons_2_0(i_133, k_26, t);
            ;
            LocalPopChoice(h_58);
          }
        else
          {
            t = g_58;
            {
              ATerm v_58 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm i_58 = ATgetFirst((ATermList) t);
                  v_58 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = v_58;
              t = filter_1_0(i_133, t);
            }
          }
      }
    }
  return(t);
}
ATerm listtd_1_0 (ATerm o_128 (ATerm), ATerm t)
{
  ATerm x_58 (ATerm t)
  {
    t = o_128(t);
    {
      ATerm j_58 = t;
      int k_58 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(k_58);
        }
      else
        {
          t = j_58;
          t = Cons_2_0(_id, x_58, t);
        }
    }
    return(t);
  }
  t = x_58(t);
  return(t);
}
ATerm l_26 (ATerm t)
{
  t = term_a_57;
  return(t);
}
ATerm m_26 (ATerm t)
{
  ATerm q_60 = NULL,r_60 = NULL;
  if(match_cons(t, sym__2))
    {
      q_60 = ATgetArgument(t, 0);
      r_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_58 = t;
    int m_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(q_60, r_60);
        ;
        LocalPopChoice(m_58);
      }
    else
      {
        t = l_58;
        t = SSL_addr(q_60, r_60);
      }
  }
  return(t);
}
ATerm n_26 (ATerm t)
{
  t = term_g_34;
  return(t);
}
ATerm o_26 (ATerm t)
{
  ATerm s_60 = NULL;
  if(match_cons(t, sym_As_2))
    {
      ATerm r_58 = ATgetArgument(t, 0);
      if(match_cons(r_58, sym_Off_1))
        {
          s_60 = ATgetArgument(r_58, 0);
        }
      else
        _fail(t);
      {
        ATerm s_58 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, s_60);
  return(t);
}
ATerm ConsArgs_0_0 (ATerm t)
{
  ATerm e_59 = NULL,f_59 = NULL,g_59 = NULL,i_59 = NULL,j_59 = NULL,r_59 = NULL;
  e_59 = t;
  if(match_cons(t, sym_Row_3))
    {
      f_59 = ATgetArgument(t, 0);
      {
        ATerm t_58 = ATgetArgument(t, 1);
      }
      {
        ATerm u_58 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = f_59;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_59 = ATgetFirst((ATermList) t);
      {
        ATerm w_58 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = g_59;
  if(match_cons(t, sym_As_2))
    {
      ATerm y_58 = ATgetArgument(t, 0);
      i_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_59;
  if(match_cons(t, sym_Str_1))
    {
      j_59 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Str_1, j_59), (ATerm) ATempty);
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          j_59 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Real_1, j_59), (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              j_59 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Int_1, j_59), (ATerm) ATempty);
            }
          else
            {
              ATerm o_60 = NULL,p_60 = NULL;
              if(match_cons(t, sym_Op_2))
                {
                  j_59 = ATgetArgument(t, 0);
                  r_59 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = r_59;
              t = foldr_3_0(l_26, m_26, n_26, t);
              o_60 = t;
              t = r_59;
              t = map_1_0(o_26, t);
              p_60 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Fun_2, j_59, o_60), p_60);
            }
        }
    }
  return(t);
}
ATerm p_26 (ATerm t)
{
  ATerm z_58 = t;
  int a_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_60 = NULL,w_60 = NULL,d_61 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_60 = ATgetFirst((ATermList) t);
          w_60 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_60;
      {
        ATerm q_26 (ATerm t)
        {
          ATerm b_59 = t;
          if((PushChoice() == 0))
            {
              if((v_60 != t))
                {
                  _fail(t);
                }
              PopChoice();
              _fail(t);
            }
          else
            {
              t = b_59;
            }
          return(t);
        }
        t = filter_1_0(q_26, t);
        d_61 = t;
        t = (ATerm) ATinsert(CheckATermList(d_61), v_60);
      }
      ;
      LocalPopChoice(a_59);
    }
  else
    {
      t = z_58;
    }
  return(t);
}
ATerm outedges_0_0 (ATerm t)
{
  t = filter_1_0(ConsArgs_0_0, t);
  t = listtd_1_0(p_26, t);
  return(t);
}
ATerm c_62 (ATerm k_61, ATerm t)
{
  ATerm m_61 = NULL;
  t = SSL_explode_string(k_61);
  {
    ATerm c_59 = t;
    int d_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_62 (ATerm t)
        {
          ATerm h_59 = t;
          int k_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2_0(_id, g_62, t);
              ;
              LocalPopChoice(k_59);
            }
          else
            {
              t = h_59;
              t = Cons_2_0(r_26, s_26, t);
            }
          return(t);
        }
        t = g_62(t);
        ;
        LocalPopChoice(d_59);
      }
    else
      {
        t = c_59;
        t = (ATerm) ATempty;
      }
    m_61 = t;
    t = SSL_implode_string(m_61);
  }
  return(t);
}
ATerm r_26 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
    _fail(t);
  return(t);
}
ATerm s_26 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm n_61 = NULL,o_61 = NULL,p_61 = NULL,q_61 = NULL,u_61 = NULL,a_62 = NULL;
  a_62 = t;
  {
    ATerm l_59 = t;
    int m_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_61 = ATgetFirst((ATermList) t);
            {
              ATerm n_59 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        LocalPopChoice(m_59);
        t = n_61;
        {
          ATerm o_59 = t;
          int p_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_Row_3))
                {
                  o_61 = ATgetArgument(t, 0);
                  {
                    ATerm q_59 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm s_59 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(p_59);
              t = o_61;
              {
                ATerm t_59 = t;
                int u_59 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        p_61 = ATgetFirst((ATermList) t);
                        {
                          ATerm v_59 = (ATerm) ATgetNext((ATermList) t);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(u_59);
                    t = p_61;
                    {
                      ATerm w_59 = t;
                      int x_59 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_As_2))
                            {
                              q_61 = ATgetArgument(t, 0);
                              {
                                ATerm y_59 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(x_59);
                          t = q_61;
                          if(match_cons(t, sym_Off_1))
                            {
                              u_61 = ATgetArgument(t, 0);
                              {
                                ATerm z_59 = t;
                                int a_60 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = u_61;
                                    ;
                                    LocalPopChoice(a_60);
                                  }
                                else
                                  {
                                    t = z_59;
                                    t = c_62(a_62, t);
                                  }
                              }
                            }
                          else
                            {
                              t = c_62(a_62, t);
                            }
                        }
                      else
                        {
                          t = w_59;
                          t = c_62(a_62, t);
                        }
                    }
                  }
                else
                  {
                    t = t_59;
                    t = c_62(a_62, t);
                  }
              }
            }
          else
            {
              t = o_59;
              t = c_62(a_62, t);
            }
        }
      }
    else
      {
        t = l_59;
        t = c_62(a_62, t);
      }
  }
  return(t);
}
ATerm t_26 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_60 = ATgetArgument(t, 0);
      ATerm c_60 = ATgetArgument(t, 1);
      if(((ATgetType(c_60) != AT_LIST) || !(ATisEmpty(c_60))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm u_26 (ATerm t)
{
  ATerm o_62 = NULL,p_62 = NULL,q_62 = NULL;
  if(match_cons(t, sym__2))
    {
      p_62 = ATgetArgument(t, 0);
      {
        ATerm d_60 = ATgetArgument(t, 1);
        if(((ATgetType(d_60) == AT_LIST) && !(ATisEmpty(d_60))))
          {
            o_62 = ATgetFirst((ATermList) d_60);
            q_62 = (ATerm) ATgetNext((ATermList) d_60);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_62, o_62), (ATerm) ATmakeAppl(sym__2, p_62, q_62));
  return(t);
}
ATerm v_26 (ATerm t)
{
  ATerm r_62 = NULL,s_62 = NULL;
  if(match_cons(t, sym__2))
    {
      r_62 = ATgetArgument(t, 0);
      s_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_62), r_62);
  return(t);
}
ATerm w_26 (ATerm t)
{
  t = term_e_60;
  return(t);
}
ATerm Mixture_0_0 (ATerm t)
{
  ATerm h_62 = NULL,i_62 = NULL,j_62 = NULL,k_62 = NULL,l_62 = NULL,m_62 = NULL;
  if(match_cons(t, sym_Matrix_1))
    {
      h_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_62;
  t = get_path_0_0(t);
  i_62 = t;
  t = h_62;
  t = outedges_0_0(t);
  j_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_62, j_62);
  t = genzip_4_0(t_26, u_26, v_26, Transition_0_0, t);
  k_62 = t;
  t = h_62;
  t = default_state_0_0(t);
  l_62 = t;
  t = new_0_0(t);
  m_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Matrix_1, h_62), (ATerm) ATmakeAppl(sym_Defined_2, term_f_60, m_62));
  t = assert_1_0(w_26, t);
  t = (ATerm) ATmakeAppl(sym_Case_4, m_62, (ATerm)ATmakeAppl(sym_Var_1, i_62), k_62, l_62);
  return(t);
}
ATerm x_26 (ATerm t)
{
  t = Row_3_0(y_26, _id, _id, t);
  return(t);
}
ATerm y_26 (ATerm t)
{
  t = Cons_2_0(z_26, _id, t);
  return(t);
}
ATerm z_26 (ATerm t)
{
  t = As_2_0(_id, a_27, t);
  return(t);
}
ATerm a_27 (ATerm t)
{
  ATerm g_60 = t;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = g_60;
    }
  return(t);
}
ATerm b_27 (ATerm t)
{
  ATerm v_62 = NULL,w_62 = NULL,x_62 = NULL,y_62 = NULL;
  if(match_cons(t, sym_Row_3))
    {
      w_62 = ATgetArgument(t, 0);
      {
        ATerm h_60 = ATgetArgument(t, 1);
        if(((ATgetType(h_60) == AT_LIST) && !(ATisEmpty(h_60))))
          {
            v_62 = ATgetFirst((ATermList) h_60);
            x_62 = (ATerm) ATgetNext((ATermList) h_60);
          }
        else
          _fail(t);
      }
      y_62 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATinsert(CheckATermList(w_62), v_62), x_62, y_62);
  return(t);
}
ATerm ShiftColumn_0_0 (ATerm t)
{
  ATerm t_62 = NULL,u_62 = NULL;
  if(match_cons(t, sym_Matrix_1))
    {
      t_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_62;
  {
    ATerm i_60 = t;
    if((PushChoice() == 0))
      {
        t = map_1_0(x_26, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = i_60;
      }
    t = t_62;
    t = map_1_0(b_27, t);
    u_62 = t;
    t = (ATerm) ATmakeAppl(sym_Matrix_1, u_62);
  }
  return(t);
}
ATerm As_2_0 (ATerm j_106 (ATerm), ATerm k_106 (ATerm), ATerm t)
{
  ATerm z_62 = NULL,d_63 = NULL,e_63 = NULL,f_63 = NULL,g_63 = NULL,i_63 = NULL,e_5 = NULL,g_5 = NULL;
  i_63 = t;
  if(match_cons(t, sym_As_2))
    {
      d_63 = ATgetArgument(t, 0);
      e_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_63);
  z_62 = t;
  t = d_63;
  t = j_106(t);
  f_63 = t;
  t = e_63;
  t = k_106(t);
  g_63 = t;
  g_5 = t;
  t = (ATerm) ATmakeAppl(sym_As_2, f_63, g_63);
  e_5 = t;
  t = SSLsetAnnotations(e_5, z_62);
  return(t);
}
ATerm Row_3_0 (ATerm a_112 (ATerm), ATerm b_112 (ATerm), ATerm c_112 (ATerm), ATerm t)
{
  ATerm l_63 = NULL,p_63 = NULL,q_63 = NULL,s_63 = NULL,t_63 = NULL,u_63 = NULL,v_63 = NULL,w_63 = NULL,h_5 = NULL,j_5 = NULL;
  w_63 = t;
  if(match_cons(t, sym_Row_3))
    {
      p_63 = ATgetArgument(t, 0);
      q_63 = ATgetArgument(t, 1);
      s_63 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_63);
  l_63 = t;
  t = p_63;
  t = a_112(t);
  t_63 = t;
  t = q_63;
  t = b_112(t);
  u_63 = t;
  t = s_63;
  t = c_112(t);
  v_63 = t;
  j_5 = t;
  t = (ATerm) ATmakeAppl(sym_Row_3, t_63, u_63, v_63);
  h_5 = t;
  t = SSLsetAnnotations(h_5, l_63);
  return(t);
}
ATerm f_27 (ATerm t)
{
  t = Row_3_0(_id, g_27, _id, t);
  return(t);
}
ATerm g_27 (ATerm t)
{
  ATerm b_64 = NULL;
  t = Cons_2_0(h_27, _id, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm j_60 = ATgetFirst((ATermList) t);
      b_64 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = b_64;
  return(t);
}
ATerm h_27 (ATerm t)
{
  t = As_2_0(_id, i_27, t);
  return(t);
}
ATerm i_27 (ATerm t)
{
  if(!(match_cons(t, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm SkipWild_0_0 (ATerm t)
{
  ATerm z_63 = NULL,a_64 = NULL;
  if(match_cons(t, sym_Matrix_1))
    {
      z_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_63;
  t = map_1_0(f_27, t);
  a_64 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, a_64);
  return(t);
}
ATerm repeat_1_0 (ATerm o_137 (ATerm), ATerm t)
{
  ATerm f_64 (ATerm t)
  {
    ATerm k_60 = t;
    int l_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_137(t);
        t = f_64(t);
        ;
        LocalPopChoice(l_60);
      }
    else
      {
        t = k_60;
      }
    return(t);
  }
  t = f_64(t);
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm i_64 = NULL,u_64 = NULL,v_64 = NULL;
  if(match_cons(t, sym__2))
    {
      i_64 = ATgetArgument(t, 0);
      u_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_64, u_64);
  {
    ATerm m_60 = t;
    int n_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_14 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm t_60 = ATgetArgument(t, 0);
            ATerm u_60 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(i_64, u_64);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm x_60 = ATgetFirst((ATermList) t);
            d_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = d_14;
        ;
        LocalPopChoice(n_60);
      }
    else
      {
        t = m_60;
        t = (ATerm) ATempty;
      }
    v_64 = t;
    t = SSL_table_put(i_64, u_64, v_64);
    t = (ATerm) ATmakeAppl(sym__2, i_64, u_64);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm b_133 (ATerm), ATerm t)
{
  ATerm g_65 = NULL,h_65 = NULL,i_65 = NULL,j_65 = NULL,n_5 = NULL,o_5 = NULL;
  g_65 = t;
  t = b_133(t);
  h_65 = t;
  {
    ATerm y_60 = t;
    int z_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_5 = NULL,m_5 = NULL;
        m_5 = t;
        t = term_d_57;
        l_5 = t;
        t = SSL_table_get(h_65, l_5);
        ;
        LocalPopChoice(z_60);
      }
    else
      {
        t = y_60;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_65 = ATgetFirst((ATermList) t);
        i_65 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    o_5 = t;
    t = term_d_57;
    n_5 = t;
    t = SSL_table_put(h_65, n_5, i_65);
    t = j_65;
    {
      ATerm j_27 (ATerm t)
      {
        ATerm k_65 = NULL;
        k_65 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_65, k_65);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(j_27, t);
      t = g_65;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm k_124 (ATerm), ATerm l_124 (ATerm), ATerm t)
{
  ATerm a_61 = t;
  int b_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_124(t);
      t = l_124(t);
      ;
      LocalPopChoice(b_61);
    }
  else
    {
      t = a_61;
      t = l_124(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm a_133 (ATerm), ATerm t)
{
  ATerm n_65 = NULL,o_65 = NULL,p_65 = NULL,t_5 = NULL,u_5 = NULL,v_5 = NULL,w_5 = NULL;
  n_65 = t;
  t = a_133(t);
  o_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_65, term_d_57);
  {
    ATerm c_61 = t;
    int e_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_5 = NULL,r_5 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm f_61 = ATgetArgument(t, 0);
            ATerm g_61 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        r_5 = t;
        t = term_d_57;
        q_5 = t;
        t = SSL_table_get(o_65, q_5);
        ;
        LocalPopChoice(e_61);
      }
    else
      {
        t = c_61;
        t = (ATerm) ATempty;
      }
    p_65 = t;
    v_5 = t;
    t = term_d_57;
    t_5 = t;
    t = v_5;
    w_5 = t;
    t = (ATerm) ATinsert(CheckATermList(p_65), (ATerm) ATempty);
    u_5 = t;
    t = SSL_table_put(o_65, t_5, u_5);
    t = n_65;
  }
  return(t);
}
ATerm scope_2_0 (ATerm c_133 (ATerm), ATerm d_133 (ATerm), ATerm t)
{
  t = begin_scope_1_0(c_133, t);
  {
    ATerm k_27 (ATerm t)
    {
      t = end_scope_1_0(c_133, t);
      return(t);
    }
    t = restore_always_2_0(d_133, k_27, t);
  }
  return(t);
}
ATerm l_27 (ATerm t)
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
ATerm n_27 (ATerm t)
{
  ATerm y_16 = NULL;
  if(match_cons(t, sym__2))
    {
      y_16 = ATgetArgument(t, 0);
      if((y_16 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm p_27 (ATerm t)
{
  ATerm a_18 = NULL;
  if(match_cons(t, sym__2))
    {
      a_18 = ATgetArgument(t, 0);
      if((a_18 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm u_27 (ATerm t)
{
  ATerm r_19 = NULL;
  if(match_cons(t, sym__2))
    {
      r_19 = ATgetArgument(t, 0);
      if((r_19 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm w_27 (ATerm t)
{
  ATerm u_20 = NULL;
  if(match_cons(t, sym__2))
    {
      u_20 = ATgetArgument(t, 0);
      if((u_20 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm y_27 (ATerm t)
{
  ATerm d_23 = NULL;
  if(match_cons(t, sym__2))
    {
      d_23 = ATgetArgument(t, 0);
      if((d_23 != ATgetArgument(t, 1)))
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
  ATerm n_71 = NULL,o_71 = NULL,p_71 = NULL,q_71 = NULL,r_71 = NULL,s_71 = NULL,t_71 = NULL,u_71 = NULL,v_71 = NULL,w_71 = NULL,x_71 = NULL,y_71 = NULL,z_71 = NULL;
  r_71 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      s_71 = ATgetArgument(t, 0);
      z_71 = ATgetArgument(t, 1);
      t = s_71;
      if(match_cons(t, sym_Matrix_2))
        {
          t_71 = ATgetArgument(t, 0);
          u_71 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = z_71;
      if(match_cons(t, sym_Choice_2))
        {
          p_71 = ATgetArgument(t, 0);
          q_71 = ATgetArgument(t, 1);
          {
            ATerm p_15 = NULL,q_15 = NULL;
            t = p_71;
            if(match_cons(t, sym_Matrix_2))
              {
                n_71 = ATgetArgument(t, 0);
                o_71 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, t_71, n_71);
            t = union_1_0(l_27, t);
            p_15 = t;
            t = (ATerm) ATmakeAppl(sym__2, u_71, o_71);
            {
              ATerm h_61 = t;
              int i_61 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym__2))
                    {
                      ATerm j_61 = ATgetArgument(t, 0);
                      ATerm l_61 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = u_71;
                  {
                    ATerm m_27 (ATerm t)
                    {
                      t = o_71;
                      return(t);
                    }
                    t = at_end_1_0(m_27, t);
                  }
                  ;
                  LocalPopChoice(i_61);
                }
              else
                {
                  t = h_61;
                  {
                    ATerm f_16 = NULL,x_5 = NULL,y_5 = NULL;
                    y_5 = t;
                    t = (ATerm) ATmakeAppl(sym__2, u_71, o_71);
                    x_5 = t;
                    t = SSL_explode_term(x_5);
                    if(match_cons(t, sym__2))
                      {
                        ATerm r_61 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) r_61) != ATmakeSymbol("", 0, ATtrue)))
                          _fail(t);
                        f_16 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = f_16;
                    t = concat_0_0(t);
                  }
                }
              q_15 = t;
              t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, p_15, q_15), q_71);
            }
          }
        }
      else
        {
          if(match_cons(t, sym_LChoice_2))
            {
              p_71 = ATgetArgument(t, 0);
              q_71 = ATgetArgument(t, 1);
              {
                ATerm w_16 = NULL,x_16 = NULL;
                t = p_71;
                if(match_cons(t, sym_Matrix_2))
                  {
                    n_71 = ATgetArgument(t, 0);
                    o_71 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, t_71, n_71);
                t = union_1_0(n_27, t);
                w_16 = t;
                t = (ATerm) ATmakeAppl(sym__2, u_71, o_71);
                {
                  ATerm s_61 = t;
                  int t_61 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym__2))
                        {
                          ATerm v_61 = ATgetArgument(t, 0);
                          ATerm w_61 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = u_71;
                      {
                        ATerm o_27 (ATerm t)
                        {
                          t = o_71;
                          return(t);
                        }
                        t = at_end_1_0(o_27, t);
                      }
                      ;
                      LocalPopChoice(t_61);
                    }
                  else
                    {
                      t = s_61;
                      {
                        ATerm n_17 = NULL,a_6 = NULL,e_6 = NULL;
                        e_6 = t;
                        t = (ATerm) ATmakeAppl(sym__2, u_71, o_71);
                        a_6 = t;
                        t = SSL_explode_term(a_6);
                        if(match_cons(t, sym__2))
                          {
                            ATerm x_61 = ATgetArgument(t, 0);
                            if((ATgetSymbol((ATermAppl) x_61) != ATmakeSymbol("", 0, ATtrue)))
                              _fail(t);
                            n_17 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = n_17;
                        t = concat_0_0(t);
                      }
                    }
                  x_16 = t;
                  t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, w_16, x_16), q_71);
                }
              }
            }
          else
            {
              ATerm y_17 = NULL,z_17 = NULL;
              if(match_cons(t, sym_Matrix_2))
                {
                  p_71 = ATgetArgument(t, 0);
                  q_71 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, t_71, p_71);
              t = union_1_0(p_27, t);
              y_17 = t;
              t = (ATerm) ATmakeAppl(sym__2, u_71, q_71);
              {
                ATerm y_61 = t;
                int z_61 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym__2))
                      {
                        ATerm b_62 = ATgetArgument(t, 0);
                        ATerm d_62 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = u_71;
                    {
                      ATerm t_27 (ATerm t)
                      {
                        t = q_71;
                        return(t);
                      }
                      t = at_end_1_0(t_27, t);
                    }
                    ;
                    LocalPopChoice(z_61);
                  }
                else
                  {
                    t = y_61;
                    {
                      ATerm s_18 = NULL,f_6 = NULL,g_6 = NULL;
                      g_6 = t;
                      t = (ATerm) ATmakeAppl(sym__2, u_71, q_71);
                      f_6 = t;
                      t = SSL_explode_term(f_6);
                      if(match_cons(t, sym__2))
                        {
                          ATerm e_62 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) e_62) != ATmakeSymbol("", 0, ATtrue)))
                            _fail(t);
                          s_18 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = s_18;
                      t = concat_0_0(t);
                    }
                  }
                z_17 = t;
                t = (ATerm) ATmakeAppl(sym_Matrix_2, y_17, z_17);
              }
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Choice_2))
        {
          s_71 = ATgetArgument(t, 0);
          z_71 = ATgetArgument(t, 1);
          t = s_71;
          if(match_cons(t, sym_Matrix_2))
            {
              t_71 = ATgetArgument(t, 0);
              u_71 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_71;
          if(match_cons(t, sym_LChoice_2))
            {
              p_71 = ATgetArgument(t, 0);
              q_71 = ATgetArgument(t, 1);
              {
                ATerm l_19 = NULL,p_19 = NULL;
                t = p_71;
                if(match_cons(t, sym_Matrix_2))
                  {
                    n_71 = ATgetArgument(t, 0);
                    o_71 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, t_71, n_71);
                t = union_1_0(u_27, t);
                l_19 = t;
                t = (ATerm) ATmakeAppl(sym__2, u_71, o_71);
                {
                  ATerm f_62 = t;
                  int n_62 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym__2))
                        {
                          ATerm a_63 = ATgetArgument(t, 0);
                          ATerm b_63 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = u_71;
                      {
                        ATerm v_27 (ATerm t)
                        {
                          t = o_71;
                          return(t);
                        }
                        t = at_end_1_0(v_27, t);
                      }
                      ;
                      LocalPopChoice(n_62);
                    }
                  else
                    {
                      t = f_62;
                      {
                        ATerm g_20 = NULL,h_6 = NULL,k_6 = NULL;
                        k_6 = t;
                        t = (ATerm) ATmakeAppl(sym__2, u_71, o_71);
                        h_6 = t;
                        t = SSL_explode_term(h_6);
                        if(match_cons(t, sym__2))
                          {
                            ATerm c_63 = ATgetArgument(t, 0);
                            if((ATgetSymbol((ATermAppl) c_63) != ATmakeSymbol("", 0, ATtrue)))
                              _fail(t);
                            g_20 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = g_20;
                        t = concat_0_0(t);
                      }
                    }
                  p_19 = t;
                  t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, l_19, p_19), q_71);
                }
              }
            }
          else
            {
              if(match_cons(t, sym_Choice_2))
                {
                  p_71 = ATgetArgument(t, 0);
                  q_71 = ATgetArgument(t, 1);
                  {
                    ATerm s_20 = NULL,t_20 = NULL;
                    t = p_71;
                    if(match_cons(t, sym_Matrix_2))
                      {
                        n_71 = ATgetArgument(t, 0);
                        o_71 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__2, t_71, n_71);
                    t = union_1_0(w_27, t);
                    s_20 = t;
                    t = (ATerm) ATmakeAppl(sym__2, u_71, o_71);
                    {
                      ATerm h_63 = t;
                      int j_63 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym__2))
                            {
                              ATerm k_63 = ATgetArgument(t, 0);
                              ATerm m_63 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = u_71;
                          {
                            ATerm x_27 (ATerm t)
                            {
                              t = o_71;
                              return(t);
                            }
                            t = at_end_1_0(x_27, t);
                          }
                          ;
                          LocalPopChoice(j_63);
                        }
                      else
                        {
                          t = h_63;
                          {
                            ATerm m_21 = NULL,o_6 = NULL,u_6 = NULL;
                            u_6 = t;
                            t = (ATerm) ATmakeAppl(sym__2, u_71, o_71);
                            o_6 = t;
                            t = SSL_explode_term(o_6);
                            if(match_cons(t, sym__2))
                              {
                                ATerm n_63 = ATgetArgument(t, 0);
                                if((ATgetSymbol((ATermAppl) n_63) != ATmakeSymbol("", 0, ATtrue)))
                                  _fail(t);
                                m_21 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = m_21;
                            t = concat_0_0(t);
                          }
                        }
                      t_20 = t;
                      t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Matrix_2, s_20, t_20), q_71);
                    }
                  }
                }
              else
                {
                  ATerm x_22 = NULL,z_22 = NULL;
                  if(match_cons(t, sym_Matrix_2))
                    {
                      p_71 = ATgetArgument(t, 0);
                      q_71 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, t_71, p_71);
                  t = union_1_0(y_27, t);
                  x_22 = t;
                  t = (ATerm) ATmakeAppl(sym__2, u_71, q_71);
                  {
                    ATerm o_63 = t;
                    int r_63 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym__2))
                          {
                            ATerm x_63 = ATgetArgument(t, 0);
                            ATerm y_63 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = u_71;
                        {
                          ATerm a_28 (ATerm t)
                          {
                            t = q_71;
                            return(t);
                          }
                          t = at_end_1_0(a_28, t);
                        }
                        ;
                        LocalPopChoice(r_63);
                      }
                    else
                      {
                        t = o_63;
                        {
                          ATerm r_24 = NULL,v_6 = NULL,x_6 = NULL;
                          x_6 = t;
                          t = (ATerm) ATmakeAppl(sym__2, u_71, q_71);
                          v_6 = t;
                          t = SSL_explode_term(v_6);
                          if(match_cons(t, sym__2))
                            {
                              ATerm c_64 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) c_64) != ATmakeSymbol("", 0, ATtrue)))
                                _fail(t);
                              r_24 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = r_24;
                          t = concat_0_0(t);
                        }
                      }
                    z_22 = t;
                    t = (ATerm) ATmakeAppl(sym_Matrix_2, x_22, z_22);
                  }
                }
            }
        }
      else
        {
          if(match_cons(t, sym_Scope_2))
            {
              s_71 = ATgetArgument(t, 0);
              z_71 = ATgetArgument(t, 1);
              {
                ATerm d_72 = NULL;
                t = z_71;
                if(match_cons(t, sym_Matrix_2))
                  {
                    p_71 = ATgetArgument(t, 0);
                    q_71 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = q_71;
                {
                  ATerm b_28 (ATerm t)
                  {
                    ATerm e_72 = NULL,f_72 = NULL;
                    if(match_cons(t, sym_Row_2))
                      {
                        e_72 = ATgetArgument(t, 0);
                        f_72 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Row_2, e_72, (ATerm) ATmakeAppl(sym_Scope_2, s_71, f_72));
                    return(t);
                  }
                  t = map_1_0(b_28, t);
                  d_72 = t;
                  t = (ATerm) ATmakeAppl(sym_Matrix_2, p_71, d_72);
                }
              }
            }
          else
            {
              if(match_cons(t, sym_Seq_2))
                {
                  s_71 = ATgetArgument(t, 0);
                  z_71 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = s_71;
              if(match_cons(t, sym_Matrix_2))
                {
                  t_71 = ATgetArgument(t, 0);
                  u_71 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = u_71;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  v_71 = ATgetFirst((ATermList) t);
                  y_71 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = v_71;
              if(match_cons(t, sym_Row_2))
                {
                  w_71 = ATgetArgument(t, 0);
                  x_71 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = y_71;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Matrix_2, t_71, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, w_71, (ATerm) ATmakeAppl(sym_Seq_2, x_71, z_71))));
            }
        }
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm e_121 (ATerm), ATerm t)
{
  ATerm c_28 (ATerm t)
  {
    t = bottomup_1_0(e_121, t);
    return(t);
  }
  t = SRTS_all(c_28, t);
  t = e_121(t);
  return(t);
}
ATerm foldr_3_0 (ATerm v_131 (ATerm), ATerm w_131 (ATerm), ATerm x_131 (ATerm), ATerm t)
{
  ATerm d_64 = t;
  int e_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = v_131(t);
      ;
      LocalPopChoice(e_64);
    }
  else
    {
      t = d_64;
      {
        ATerm s_72 = NULL,t_72 = NULL,w_72 = NULL,x_72 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_72 = ATgetFirst((ATermList) t);
            t_72 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = s_72;
        t = x_131(t);
        w_72 = t;
        t = t_72;
        t = foldr_3_0(v_131, w_131, x_131, t);
        x_72 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_72, x_72);
        t = w_131(t);
      }
    }
  return(t);
}
ATerm f_28 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm i_28 (ATerm t)
{
  t = union_1_0(k_28, t);
  return(t);
}
ATerm k_28 (ATerm t)
{
  ATerm f_25 = NULL;
  if(match_cons(t, sym__2))
    {
      f_25 = ATgetArgument(t, 0);
      if((f_25 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm collect_om_1_0 (ATerm r_130 (ATerm), ATerm t)
{
  ATerm g_64 = t;
  int h_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_73 = NULL;
      t = r_130(t);
      a_73 = t;
      t = (ATerm) ATinsert(ATempty, a_73);
      ;
      LocalPopChoice(h_64);
    }
  else
    {
      t = g_64;
      {
        ATerm a_25 = NULL,b_25 = NULL;
        a_25 = t;
        t = SSL_explode_term(a_25);
        if(match_cons(t, sym__2))
          {
            ATerm j_64 = ATgetArgument(t, 0);
            b_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = b_25;
        {
          ATerm j_28 (ATerm t)
          {
            t = collect_om_1_0(r_130, t);
            return(t);
          }
          t = foldr_3_0(f_28, i_28, j_28, t);
        }
      }
    }
  return(t);
}
ATerm CollectSubst_0_0 (ATerm t)
{
  ATerm h_73 = NULL,k_73 = NULL,l_73 = NULL,m_73 = NULL,n_73 = NULL;
  if(match_cons(t, sym_As_2))
    {
      k_73 = ATgetArgument(t, 0);
      m_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_73;
  if(match_cons(t, sym_Var_1))
    {
      l_73 = ATgetArgument(t, 0);
      t = m_73;
      if(match_cons(t, sym_As_2))
        {
          n_73 = ATgetArgument(t, 0);
          {
            ATerm k_64 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = n_73;
      if(match_cons(t, sym_Off_1))
        {
          h_73 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, l_73), (ATerm) ATmakeAppl(sym_Var_1, h_73)));
    }
  else
    {
      if(match_cons(t, sym_Off_1))
        {
          l_73 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_73;
      if(match_cons(t, sym_Var_1))
        {
          n_73 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, n_73), (ATerm) ATmakeAppl(sym_Var_1, l_73)));
    }
  return(t);
}
ATerm IgnoreVar_0_0 (ATerm t)
{
  ATerm g_74 = NULL,h_74 = NULL,i_74 = NULL,j_74 = NULL,k_74 = NULL,l_74 = NULL,m_74 = NULL;
  i_74 = t;
  if(match_cons(t, sym_As_2))
    {
      j_74 = ATgetArgument(t, 0);
      l_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_74;
  {
    ATerm l_64 = t;
    int m_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm n_64 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(m_64);
        t = l_74;
        if(match_cons(t, sym_As_2))
          {
            m_74 = ATgetArgument(t, 0);
            h_74 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_74;
        if(match_cons(t, sym_Off_1))
          {
            g_74 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, g_74), h_74);
      }
    else
      {
        t = l_64;
        if(match_cons(t, sym_Off_1))
          {
            k_74 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = l_74;
        if(match_cons(t, sym_Var_1))
          {
            ATerm o_64 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = k_74;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = k_74;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm p_64 = ATgetFirst((ATermList) t);
                ATerm q_64 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_74;
          }
        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, k_74), term_l_57);
      }
  }
  return(t);
}
ATerm union_1_0 (ATerm h_129 (ATerm), ATerm t)
{
  ATerm t_74 = NULL,u_74 = NULL;
  if(match_cons(t, sym__2))
    {
      t_74 = ATgetArgument(t, 0);
      u_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_74;
  {
    ATerm v_74 (ATerm t)
    {
      ATerm r_64 = t;
      int s_64 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = u_74;
          ;
          LocalPopChoice(s_64);
        }
      else
        {
          t = r_64;
          {
            ATerm t_64 = t;
            int w_64 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_25 = NULL,p_25 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    o_25 = ATgetFirst((ATermList) t);
                    p_25 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = u_74;
                {
                  ATerm q_28 (ATerm t)
                  {
                    ATerm q_25 = NULL;
                    q_25 = t;
                    t = (ATerm) ATmakeAppl(sym__2, o_25, q_25);
                    t = h_129(t);
                    return(t);
                  }
                  t = fetch_1_0(q_28, t);
                  t = p_25;
                  t = v_74(t);
                }
                ;
                LocalPopChoice(w_64);
              }
            else
              {
                t = t_64;
                t = Cons_2_0(_id, v_74, t);
              }
          }
        }
      return(t);
    }
    t = v_74(t);
  }
  return(t);
}
ATerm v_28 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_s_56;
  return(t);
}
ATerm y_28 (ATerm t)
{
  ATerm l_75 = NULL,m_75 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_75 = ATgetFirst((ATermList) t);
      m_75 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_75, m_75);
  return(t);
}
ATerm z_28 (ATerm t)
{
  ATerm n_75 = NULL,o_75 = NULL,p_75 = NULL,q_75 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_64 = ATgetArgument(t, 0);
      if(match_cons(x_64, sym__2))
        {
          n_75 = ATgetArgument(x_64, 0);
          p_75 = ATgetArgument(x_64, 1);
        }
      else
        _fail(t);
      {
        ATerm y_64 = ATgetArgument(t, 1);
        if(match_cons(y_64, sym__2))
          {
            o_75 = ATgetArgument(y_64, 0);
            q_75 = ATgetArgument(y_64, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_75), n_75), (ATerm) ATinsert(CheckATermList(q_75), p_75));
  return(t);
}
ATerm a_29 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm b_29 (ATerm t)
{
  t = union_1_0(i_29, t);
  return(t);
}
ATerm i_29 (ATerm t)
{
  ATerm r_75 = NULL;
  if(match_cons(t, sym__2))
    {
      r_75 = ATgetArgument(t, 0);
      if((r_75 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm l_29 (ATerm t)
{
  ATerm s_75 = NULL;
  if(match_cons(t, sym__2))
    {
      s_75 = ATgetArgument(t, 0);
      if((s_75 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm CollectSplit_2_0 (ATerm e_130 (ATerm), ATerm f_130 (ATerm), ATerm t)
{
  ATerm w_74 = NULL,x_74 = NULL,z_74 = NULL,a_75 = NULL,b_75 = NULL,c_75 = NULL,d_75 = NULL,e_75 = NULL,f_75 = NULL,i_75 = NULL,j_75 = NULL,k_75 = NULL;
  w_74 = t;
  x_74 = t;
  t = SSL_explode_term(x_74);
  if(match_cons(t, sym__2))
    {
      z_74 = ATgetArgument(t, 0);
      a_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_74);
  b_75 = t;
  t = a_75;
  t = genzip_4_0(v_28, y_28, z_28, e_130, t);
  if(match_cons(t, sym__2))
    {
      c_75 = ATgetArgument(t, 0);
      d_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_mkterm(z_74, c_75);
  e_75 = t;
  t = SSLsetAnnotations(e_75, b_75);
  t = f_130(t);
  if(match_cons(t, sym__2))
    {
      f_75 = ATgetArgument(t, 0);
      i_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_75;
  t = foldr_2_0(a_29, b_29, t);
  j_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_75, j_75);
  t = union_1_0(l_29, t);
  k_75 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_75, k_75);
  return(t);
}
ATerm collect_split_2_0 (ATerm f_131 (ATerm), ATerm g_131 (ATerm), ATerm t)
{
  ATerm w_75 (ATerm t)
  {
    ATerm m_29 (ATerm t)
    {
      ATerm t_75 = NULL,u_75 = NULL,v_75 = NULL;
      t_75 = t;
      {
        ATerm z_64 = t;
        int a_65 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_131(t);
            ;
            LocalPopChoice(a_65);
          }
        else
          {
            t = z_64;
          }
        u_75 = t;
        t = t_75;
        {
          ATerm b_65 = t;
          int c_65 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = g_131(t);
              ;
              LocalPopChoice(c_65);
            }
          else
            {
              t = b_65;
              t = (ATerm) ATempty;
            }
          v_75 = t;
          t = (ATerm) ATmakeAppl(sym__2, u_75, v_75);
        }
      }
      return(t);
    }
    t = CollectSplit_2_0(w_75, m_29, t);
    return(t);
  }
  t = w_75(t);
  return(t);
}
ATerm NZip2_0_0 (ATerm t)
{
  ATerm x_75 = NULL,y_75 = NULL,z_75 = NULL,a_76 = NULL;
  if(match_cons(t, sym__2))
    {
      x_75 = ATgetArgument(t, 0);
      {
        ATerm d_65 = ATgetArgument(t, 1);
        if(((ATgetType(d_65) == AT_LIST) && !(ATisEmpty(d_65))))
          {
            y_75 = ATgetFirst((ATermList) d_65);
            z_75 = (ATerm) ATgetNext((ATermList) d_65);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_75, term_g_34);
  {
    ATerm e_65 = t;
    int f_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_7 = NULL,f_7 = NULL;
        f_7 = t;
        t = term_g_34;
        d_7 = t;
        t = SSL_addi(x_75, d_7);
        ;
        LocalPopChoice(f_65);
      }
    else
      {
        t = e_65;
        {
          ATerm j_7 = NULL,k_7 = NULL;
          k_7 = t;
          t = term_g_34;
          j_7 = t;
          t = SSL_addr(x_75, j_7);
        }
      }
    a_76 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_75, y_75), (ATerm) ATmakeAppl(sym__2, a_76, z_75));
  }
  return(t);
}
ATerm genzip_4_0 (ATerm p_125 (ATerm), ATerm q_125 (ATerm), ATerm r_125 (ATerm), ATerm s_125 (ATerm), ATerm t)
{
  ATerm b_76 (ATerm t)
  {
    ATerm l_65 = t;
    int m_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_125(t);
        ;
        LocalPopChoice(m_65);
      }
    else
      {
        t = l_65;
        t = q_125(t);
        t = _2_0(s_125, b_76, t);
        t = r_125(t);
      }
    return(t);
  }
  t = b_76(t);
  return(t);
}
ATerm n_29 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_65 = ATgetArgument(t, 0);
      ATerm r_65 = ATgetArgument(t, 1);
      if(((ATgetType(r_65) != AT_LIST) || !(ATisEmpty(r_65))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm o_29 (ATerm t)
{
  ATerm f_76 = NULL,g_76 = NULL;
  if(match_cons(t, sym__2))
    {
      f_76 = ATgetArgument(t, 0);
      g_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_76), f_76);
  return(t);
}
ATerm nzip0_1_0 (ATerm a_126 (ATerm), ATerm t)
{
  ATerm c_76 = NULL;
  c_76 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_57, c_76);
  t = genzip_4_0(n_29, NZip2_0_0, o_29, a_126, t);
  return(t);
}
ATerm Propagate_0_0 (ATerm t)
{
  ATerm l_76 = NULL,n_76 = NULL,o_76 = NULL,p_76 = NULL,q_76 = NULL,r_76 = NULL;
  if(match_cons(t, sym_As_2))
    {
      n_76 = ATgetArgument(t, 0);
      p_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_76;
  if(match_cons(t, sym_Off_1))
    {
      o_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_76;
  {
    ATerm s_65 = t;
    int t_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_BuildDefault_1))
          {
            ATerm u_65 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(t_65);
        {
          ATerm v_65 = t;
          int w_65 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_76;
              {
                ATerm p_29 (ATerm t)
                {
                  ATerm u_76 = NULL,v_76 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      u_76 = ATgetArgument(t, 0);
                      v_76 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(o_76), u_76)), v_76);
                  return(t);
                }
                t = nzip0_1_0(p_29, t);
              }
              ;
              LocalPopChoice(w_65);
            }
          else
            {
              t = v_65;
              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, o_76), term_l_57);
            }
        }
      }
    else
      {
        t = s_65;
        if(match_cons(t, sym_As_2))
          {
            q_76 = ATgetArgument(t, 0);
            r_76 = ATgetArgument(t, 1);
            t = q_76;
            if(match_cons(t, sym_Var_1))
              {
                l_76 = ATgetArgument(t, 0);
                {
                  ATerm x_65 = t;
                  int y_65 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = p_76;
                      {
                        ATerm q_29 (ATerm t)
                        {
                          ATerm a_77 = NULL,b_77 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              a_77 = ATgetArgument(t, 0);
                              b_77 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(o_76), a_77)), b_77);
                          return(t);
                        }
                        t = nzip0_1_0(q_29, t);
                      }
                      ;
                      LocalPopChoice(y_65);
                    }
                  else
                    {
                      t = x_65;
                      t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, l_76), (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, o_76), r_76));
                    }
                }
              }
            else
              {
                t = p_76;
                {
                  ATerm r_29 (ATerm t)
                  {
                    ATerm h_77 = NULL,i_77 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        h_77 = ATgetArgument(t, 0);
                        i_77 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(o_76), h_77)), i_77);
                    return(t);
                  }
                  t = nzip0_1_0(r_29, t);
                }
              }
          }
        else
          {
            if(match_cons(t, sym_Op_2))
              {
                q_76 = ATgetArgument(t, 0);
                r_76 = ATgetArgument(t, 1);
                {
                  ATerm z_65 = t;
                  int a_66 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = p_76;
                      {
                        ATerm s_29 (ATerm t)
                        {
                          ATerm l_77 = NULL,m_77 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              l_77 = ATgetArgument(t, 0);
                              m_77 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(o_76), l_77)), m_77);
                          return(t);
                        }
                        t = nzip0_1_0(s_29, t);
                      }
                      ;
                      LocalPopChoice(a_66);
                    }
                  else
                    {
                      t = z_65;
                      t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, o_76), (ATerm) ATmakeAppl(sym_Op_2, q_76, (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, o_76), r_76)));
                    }
                }
              }
            else
              {
                t = p_76;
                {
                  ATerm t_29 (ATerm t)
                  {
                    ATerm s_77 = NULL,t_77 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        s_77 = ATgetArgument(t, 0);
                        t_77 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(o_76), s_77)), t_77);
                    return(t);
                  }
                  t = nzip0_1_0(t_29, t);
                }
              }
          }
      }
  }
  return(t);
}
ATerm topdown_1_0 (ATerm d_121 (ATerm), ATerm t)
{
  t = d_121(t);
  {
    ATerm u_29 (ATerm t)
    {
      t = topdown_1_0(d_121, t);
      return(t);
    }
    t = SRTS_all(u_29, t);
  }
  return(t);
}
ATerm v_29 (ATerm t)
{
  ATerm b_66 = t;
  int c_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_78 = NULL,c_78 = NULL;
      if(match_cons(t, sym_As_2))
        {
          b_78 = ATgetArgument(t, 0);
          c_78 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = b_78;
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = c_78;
      ;
      LocalPopChoice(c_66);
    }
  else
    {
      t = b_66;
    }
  return(t);
}
ATerm w_29 (ATerm t)
{
  ATerm d_66 = t;
  int e_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Propagate_0_0(t);
      ;
      LocalPopChoice(e_66);
    }
  else
    {
      t = d_66;
    }
  return(t);
}
ATerm x_29 (ATerm t)
{
  ATerm e_78 = NULL;
  if(match_cons(t, sym_Off_1))
    {
      e_78 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_78;
  return(t);
}
ATerm term_to_matrix_0_0 (ATerm t)
{
  ATerm w_77 = NULL,x_77 = NULL,y_77 = NULL,z_77 = NULL;
  w_77 = t;
  t = (ATerm) ATmakeAppl(sym_As_2, term_f_66, (ATerm) ATinsert(ATempty, w_77));
  t = topdown_1_0(v_29, t);
  t = topdown_1_0(w_29, t);
  t = collect_split_2_0(IgnoreVar_0_0, CollectSubst_0_0, t);
  if(match_cons(t, sym__2))
    {
      x_77 = ATgetArgument(t, 0);
      y_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_77;
  t = collect_om_1_0(x_29, t);
  z_77 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_2, z_77, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, x_77, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, y_77), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATinsert(ATempty, term_a_57)))))));
  return(t);
}
ATerm Scope_2_0 (ATerm m_109 (ATerm), ATerm n_109 (ATerm), ATerm t)
{
  ATerm f_78 = NULL,h_78 = NULL,j_78 = NULL,k_78 = NULL,l_78 = NULL,m_78 = NULL,l_7 = NULL,m_7 = NULL;
  m_78 = t;
  if(match_cons(t, sym_Scope_2))
    {
      h_78 = ATgetArgument(t, 0);
      j_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_78);
  f_78 = t;
  t = h_78;
  t = m_109(t);
  k_78 = t;
  t = j_78;
  t = n_109(t);
  l_78 = t;
  m_7 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, k_78, l_78);
  l_7 = t;
  t = SSLsetAnnotations(l_7, f_78);
  return(t);
}
ATerm Seq_2_0 (ATerm q_109 (ATerm), ATerm r_109 (ATerm), ATerm t)
{
  ATerm p_78 = NULL,q_78 = NULL,r_78 = NULL,s_78 = NULL,v_78 = NULL,w_78 = NULL,n_7 = NULL,q_7 = NULL;
  w_78 = t;
  if(match_cons(t, sym_Seq_2))
    {
      q_78 = ATgetArgument(t, 0);
      r_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_78);
  p_78 = t;
  t = q_78;
  t = q_109(t);
  s_78 = t;
  t = r_78;
  t = r_109(t);
  v_78 = t;
  q_7 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, s_78, v_78);
  n_7 = t;
  t = SSLsetAnnotations(n_7, p_78);
  return(t);
}
ATerm LChoice_2_0 (ATerm s_109 (ATerm), ATerm t_109 (ATerm), ATerm t)
{
  ATerm z_78 = NULL,a_79 = NULL,b_79 = NULL,c_79 = NULL,d_79 = NULL,e_79 = NULL,t_7 = NULL,v_7 = NULL;
  e_79 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      a_79 = ATgetArgument(t, 0);
      b_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_79);
  z_78 = t;
  t = a_79;
  t = s_109(t);
  c_79 = t;
  t = b_79;
  t = t_109(t);
  d_79 = t;
  v_7 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, c_79, d_79);
  t_7 = t;
  t = SSLsetAnnotations(t_7, z_78);
  return(t);
}
ATerm Choice_2_0 (ATerm q_108 (ATerm), ATerm r_108 (ATerm), ATerm t)
{
  ATerm h_79 = NULL,i_79 = NULL,j_79 = NULL,k_79 = NULL,n_79 = NULL,o_79 = NULL,w_7 = NULL,x_7 = NULL;
  o_79 = t;
  if(match_cons(t, sym_Choice_2))
    {
      i_79 = ATgetArgument(t, 0);
      j_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_79);
  h_79 = t;
  t = i_79;
  t = q_108(t);
  k_79 = t;
  t = j_79;
  t = r_108(t);
  n_79 = t;
  x_7 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, k_79, n_79);
  w_7 = t;
  t = SSLsetAnnotations(w_7, h_79);
  return(t);
}
ATerm c_30 (ATerm t)
{
  t = repeat_1_0(d_30, t);
  return(t);
}
ATerm d_30 (ATerm t)
{
  ATerm g_66 = t;
  int h_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MatrixMerge_0_0(t);
      ;
      LocalPopChoice(h_66);
    }
  else
    {
      t = g_66;
      t = Simplify_0_0(t);
    }
  return(t);
}
ATerm match_to_matrix_0_0 (ATerm t)
{
  ATerm i_66 = t;
  int j_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_66 = t;
      int l_66 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Choice_2_0(_id, _id, t);
          ;
          LocalPopChoice(l_66);
        }
      else
        {
          t = k_66;
          t = LChoice_2_0(_id, _id, t);
        }
      {
        ATerm v_79 (ATerm t)
        {
          ATerm m_66 = t;
          int n_66 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Choice_2_0(v_79, v_79, t);
              ;
              LocalPopChoice(n_66);
            }
          else
            {
              t = m_66;
              {
                ATerm o_66 = t;
                int p_66 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = LChoice_2_0(v_79, v_79, t);
                    ;
                    LocalPopChoice(p_66);
                  }
                else
                  {
                    t = o_66;
                    {
                      ATerm w_79 (ATerm t)
                      {
                        ATerm q_66 = t;
                        int r_66 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = Seq_2_0(w_79, match_to_matrix_0_0, t);
                            ;
                            LocalPopChoice(r_66);
                          }
                        else
                          {
                            t = q_66;
                            {
                              ATerm s_66 = t;
                              int t_66 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = Scope_2_0(_id, w_79, t);
                                  ;
                                  LocalPopChoice(t_66);
                                }
                              else
                                {
                                  t = s_66;
                                  {
                                    ATerm u_66 = t;
                                    int v_66 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm t_79 = NULL;
                                        if(match_cons(t, sym_Match_1))
                                          {
                                            t_79 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = t_79;
                                        t = term_to_matrix_0_0(t);
                                        ;
                                        LocalPopChoice(v_66);
                                      }
                                    else
                                      {
                                        t = u_66;
                                        t = SRTS_all(match_to_matrix_0_0, t);
                                      }
                                  }
                                }
                            }
                          }
                        return(t);
                      }
                      t = w_79(t);
                    }
                  }
              }
            }
          return(t);
        }
        t = v_79(t);
      }
      ;
      LocalPopChoice(j_66);
    }
  else
    {
      t = i_66;
      t = SRTS_all(match_to_matrix_0_0, t);
    }
  t = bottomup_1_0(c_30, t);
  return(t);
}
ATerm e_30 (ATerm t)
{
  t = term_e_60;
  return(t);
}
ATerm g_30 (ATerm t)
{
  ATerm w_66 = t;
  int x_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_66 = t;
      int z_66 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_25 = NULL,x_25 = NULL;
          if(match_cons(t, sym_Matrix_1))
            {
              w_25 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = w_25;
          t = map_1_0(h_30, t);
          x_25 = t;
          t = (ATerm) ATmakeAppl(sym_LChoices_1, x_25);
          ;
          LocalPopChoice(z_66);
        }
      else
        {
          t = y_66;
          {
            ATerm a_67 = t;
            int b_67 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SkipWild_0_0(t);
                ;
                LocalPopChoice(b_67);
              }
            else
              {
                t = a_67;
                {
                  ATerm c_67 = t;
                  int d_67 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = ShiftColumn_0_0(t);
                      ;
                      LocalPopChoice(d_67);
                    }
                  else
                    {
                      t = c_67;
                      t = Mixture_0_0(t);
                    }
                }
              }
          }
        }
      ;
      LocalPopChoice(x_66);
    }
  else
    {
      t = w_66;
      {
        ATerm e_67 = t;
        int f_67 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = MatrixScope_0_0(t);
            ;
            LocalPopChoice(f_67);
          }
        else
          {
            t = e_67;
            t = Simplify_0_0(t);
          }
      }
    }
  return(t);
}
ATerm h_30 (ATerm t)
{
  ATerm y_25 = NULL;
  if(match_cons(t, sym_Row_3))
    {
      ATerm g_67 = ATgetArgument(t, 0);
      if(((ATgetType(g_67) != AT_LIST) || !(ATisEmpty(g_67))))
        _fail(t);
      {
        ATerm h_67 = ATgetArgument(t, 1);
        if(((ATgetType(h_67) != AT_LIST) || !(ATisEmpty(h_67))))
          _fail(t);
      }
      y_25 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = y_25;
  return(t);
}
ATerm match_to_dfa_0_0 (ATerm t)
{
  t = match_to_matrix_0_0(t);
  {
    ATerm f_30 (ATerm t)
    {
      t = repeat_1_0(g_30, t);
      t = SRTS_all(f_30, t);
      return(t);
    }
    t = scope_2_0(e_30, f_30, t);
    t = strename_0_0(t);
  }
  return(t);
}
ATerm SDefT_4_0 (ATerm u_111 (ATerm), ATerm v_111 (ATerm), ATerm w_111 (ATerm), ATerm x_111 (ATerm), ATerm t)
{
  ATerm y_79 = NULL,z_79 = NULL,a_80 = NULL,b_80 = NULL,c_80 = NULL,d_80 = NULL,e_80 = NULL,f_80 = NULL,g_80 = NULL,h_80 = NULL,y_7 = NULL,z_7 = NULL;
  h_80 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      z_79 = ATgetArgument(t, 0);
      a_80 = ATgetArgument(t, 1);
      b_80 = ATgetArgument(t, 2);
      c_80 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_80);
  y_79 = t;
  t = z_79;
  t = u_111(t);
  d_80 = t;
  t = a_80;
  t = v_111(t);
  e_80 = t;
  t = b_80;
  t = w_111(t);
  f_80 = t;
  t = c_80;
  t = x_111(t);
  g_80 = t;
  z_7 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, d_80, e_80, f_80, g_80);
  y_7 = t;
  t = SSLsetAnnotations(y_7, y_79);
  return(t);
}
ATerm SDef_3_0 (ATerm r_111 (ATerm), ATerm s_111 (ATerm), ATerm t_111 (ATerm), ATerm t)
{
  ATerm k_80 = NULL,l_80 = NULL,m_80 = NULL,n_80 = NULL,o_80 = NULL,p_80 = NULL,q_80 = NULL,r_80 = NULL,a_8 = NULL,c_8 = NULL;
  r_80 = t;
  if(match_cons(t, sym_SDef_3))
    {
      l_80 = ATgetArgument(t, 0);
      m_80 = ATgetArgument(t, 1);
      n_80 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_80);
  k_80 = t;
  t = l_80;
  t = r_111(t);
  o_80 = t;
  t = m_80;
  t = s_111(t);
  p_80 = t;
  t = n_80;
  t = t_111(t);
  q_80 = t;
  c_8 = t;
  t = (ATerm) ATmakeAppl(sym_SDef_3, o_80, p_80, q_80);
  a_8 = t;
  t = SSLsetAnnotations(a_8, k_80);
  return(t);
}
ATerm Strategies_1_0 (ATerm u_104 (ATerm), ATerm t)
{
  ATerm u_80 = NULL,v_80 = NULL,w_80 = NULL,x_80 = NULL,e_8 = NULL,f_8 = NULL;
  x_80 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      v_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_80);
  u_80 = t;
  t = v_80;
  t = u_104(t);
  w_80 = t;
  f_8 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, w_80);
  e_8 = t;
  t = SSLsetAnnotations(e_8, u_80);
  return(t);
}
ATerm Specification_1_0 (ATerm z_104 (ATerm), ATerm t)
{
  ATerm a_81 = NULL,b_81 = NULL,c_81 = NULL,d_81 = NULL,h_8 = NULL,j_8 = NULL;
  d_81 = t;
  if(match_cons(t, sym_Specification_1))
    {
      b_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_81);
  a_81 = t;
  t = b_81;
  t = z_104(t);
  c_81 = t;
  j_8 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, c_81);
  h_8 = t;
  t = SSLsetAnnotations(h_8, a_81);
  return(t);
}
ATerm l_30 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm apply_to_bodies_1_0 (ATerm e_119 (ATerm), ATerm t)
{
  ATerm i_30 (ATerm t)
  {
    ATerm j_30 (ATerm t)
    {
      ATerm k_30 (ATerm t)
      {
        ATerm m_30 (ATerm t)
        {
          ATerm n_30 (ATerm t)
          {
            ATerm i_67 = t;
            int j_67 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SDef_3_0(_id, _id, e_119, t);
                ;
                LocalPopChoice(j_67);
              }
            else
              {
                t = i_67;
                t = SDefT_4_0(_id, _id, _id, e_119, t);
              }
            return(t);
          }
          t = map_1_0(n_30, t);
          return(t);
        }
        t = Strategies_1_0(m_30, t);
        return(t);
      }
      t = Cons_2_0(k_30, l_30, t);
      return(t);
    }
    t = Cons_2_0(_id, j_30, t);
    return(t);
  }
  t = Specification_1_0(i_30, t);
  return(t);
}
ATerm _2_0 (ATerm b_100 (ATerm), ATerm c_100 (ATerm), ATerm t)
{
  ATerm g_81 = NULL,h_81 = NULL,i_81 = NULL,j_81 = NULL,k_81 = NULL,l_81 = NULL,k_8 = NULL,o_8 = NULL;
  l_81 = t;
  if(match_cons(t, sym__2))
    {
      h_81 = ATgetArgument(t, 0);
      i_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_81);
  g_81 = t;
  t = h_81;
  t = b_100(t);
  j_81 = t;
  t = i_81;
  t = c_100(t);
  k_81 = t;
  o_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_81, k_81);
  k_8 = t;
  t = SSLsetAnnotations(k_8, g_81);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm c_143 (ATerm), ATerm t)
{
  ATerm o_81 = NULL,p_81 = NULL,q_81 = NULL;
  if(match_cons(t, sym__2))
    {
      o_81 = ATgetArgument(t, 0);
      p_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_81, term_k_67);
  t = open_stream_0_0(t);
  q_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_81, p_81);
  t = c_143(t);
  t = fclose_0_0(t);
  t = p_81;
  return(t);
}
ATerm r_30 (ATerm t)
{
  t = fetch_1_0(x_30, t);
  return(t);
}
ATerm t_30 (ATerm t)
{
  t = WriteToFile_1_0(y_30, t);
  return(t);
}
ATerm x_30 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm y_30 (ATerm t)
{
  ATerm t_81 = NULL,u_81 = NULL,v_81 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_67 = ATgetArgument(t, 0);
      if(match_cons(l_67, sym_Stream_1))
        {
          t_81 = ATgetArgument(l_67, 0);
        }
      else
        _fail(t);
      u_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(t_81, u_81);
  v_81 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_81);
  return(t);
}
ATerm b_31 (ATerm t)
{
  t = WriteToFile_1_0(c_31, t);
  return(t);
}
ATerm c_31 (ATerm t)
{
  ATerm w_81 = NULL,x_81 = NULL,y_81 = NULL,z_81 = NULL,p_8 = NULL,q_8 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_67 = ATgetArgument(t, 0);
      if(match_cons(m_67, sym_Stream_1))
        {
          w_81 = ATgetArgument(m_67, 0);
        }
      else
        _fail(t);
      x_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(w_81, x_81);
  y_81 = t;
  q_8 = t;
  t = term_n_67;
  p_8 = t;
  t = SSL_fputc(p_8, y_81);
  z_81 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_81);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm r_81 = NULL,s_81 = NULL;
  r_81 = t;
  {
    ATerm o_30 (ATerm t)
    {
      ATerm o_67 = t;
      int p_67 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_30 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((s_81 != NULL) && (s_81 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  s_81 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(p_30, t);
          ;
          LocalPopChoice(p_67);
        }
      else
        {
          t = o_67;
          t = term_q_67;
          if(((s_81 != NULL) && (s_81 != t)))
            _fail(t);
          else
            s_81 = t;
        }
      return(t);
    }
    t = _2_0(o_30, _id, t);
    t = r_81;
    {
      ATerm q_30 (ATerm t)
      {
        ATerm z_25 = NULL;
        z_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_81), z_25);
        return(t);
      }
      t = _2_0(_id, q_30, t);
      {
        ATerm r_67 = t;
        int s_67 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(r_30, t_30, t);
            ;
            LocalPopChoice(s_67);
          }
        else
          {
            t = r_67;
            t = _2_0(_id, b_31, t);
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
  ATerm a_82 = NULL,b_82 = NULL,c_82 = NULL,d_82 = NULL,e_82 = NULL;
  a_82 = t;
  t = dtime_0_0(t);
  t = a_82;
  t = e_146(t);
  b_82 = t;
  t = dtime_0_0(t);
  c_82 = t;
  t = b_82;
  if(match_cons(t, sym__2))
    {
      d_82 = ATgetArgument(t, 0);
      e_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_82), (ATerm) ATmakeAppl(sym_Runtime_1, c_82)), e_82);
  return(t);
}
ATerm u_82 (ATerm o_82, ATerm t)
{
  t = SSL_fclose(o_82);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm r_82 = NULL,s_82 = NULL;
  s_82 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_82 = ATgetArgument(t, 0);
      {
        ATerm t_67 = t;
        int u_67 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(r_82);
            ;
            LocalPopChoice(u_67);
          }
        else
          {
            t = t_67;
            t = u_82(s_82, t);
          }
      }
    }
  else
    {
      t = u_82(s_82, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm v_82 = NULL;
  t = SSL_stdin_stream();
  v_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_82);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm w_82 = NULL;
  t = SSL_stdout_stream();
  w_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_82);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm x_82 = NULL;
  t = SSL_stderr_stream();
  x_82 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_82);
  return(t);
}
ATerm d_31 (ATerm t)
{
  ATerm f_83 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      f_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_83;
  return(t);
}
ATerm e_31 (ATerm t)
{
  ATerm j_83 = NULL;
  j_83 = t;
  t = SSL_is_string(j_83);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_67 = ATgetArgument(t, 0);
      ATerm w_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_67 = t;
    int y_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_27 = NULL,d_27 = NULL;
        c_27 = t;
        t = SSL_explode_term(c_27);
        if(match_cons(t, sym__2))
          {
            ATerm z_67 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) z_67) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm a_68 = ATgetArgument(t, 1);
              if(((ATgetType(a_68) == AT_LIST) && !(ATisEmpty(a_68))))
                {
                  d_27 = ATgetFirst((ATermList) a_68);
                  {
                    ATerm b_68 = (ATerm) ATgetNext((ATermList) a_68);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = d_27;
        if(match_cons(t, sym_stderr_0))
          {
            t = d_27;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = d_27;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = d_27;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(y_67);
      }
    else
      {
        t = x_67;
        {
          ATerm c_68 = t;
          int d_68 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_83 = NULL,d_83 = NULL,e_83 = NULL;
              t = _2_0(d_31, _id, t);
              if(match_cons(t, sym__2))
                {
                  c_83 = ATgetArgument(t, 0);
                  d_83 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(c_83, d_83);
              e_83 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, e_83);
              ;
              LocalPopChoice(d_68);
            }
          else
            {
              t = c_68;
              {
                ATerm g_83 = NULL,h_83 = NULL,i_83 = NULL;
                t = _2_0(e_31, _id, t);
                if(match_cons(t, sym__2))
                  {
                    g_83 = ATgetArgument(t, 0);
                    h_83 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(g_83, h_83);
                i_83 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, i_83);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm k_83 = NULL,l_83 = NULL,m_83 = NULL;
  ATerm e_68 = t;
  int f_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_83 = NULL;
      n_83 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_83, term_g_68);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(f_68);
    }
  else
    {
      t = e_68;
      {
        ATerm e_27 = NULL,r_8 = NULL,s_8 = NULL,v_8 = NULL,x_8 = NULL;
        e_27 = t;
        t = term_h_68;
        v_8 = t;
        t = term_c_34;
        r_8 = t;
        t = v_8;
        x_8 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, e_27), term_h_68);
        s_8 = t;
        t = SSL_printnl(r_8, s_8);
        t = e_27;
        _fail(t);
      }
    }
  k_83 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(m_83);
  l_83 = t;
  t = k_83;
  t = fclose_0_0(t);
  t = l_83;
  return(t);
}
ATerm fetch_1_0 (ATerm p_127 (ATerm), ATerm t)
{
  ATerm x_83 (ATerm t)
  {
    ATerm i_68 = t;
    int j_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(p_127, _id, t);
        ;
        LocalPopChoice(j_68);
      }
    else
      {
        t = i_68;
        t = Cons_2_0(_id, x_83, t);
      }
    return(t);
  }
  t = x_83(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm k_68 = t;
  int l_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(l_68);
    }
  else
    {
      t = k_68;
      {
        ATerm a_84 = NULL,b_84 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_84 = ATgetFirst((ATermList) t);
            b_84 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = a_84;
        {
          ATerm f_31 (ATerm t)
          {
            t = b_84;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(f_31, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm v_127 (ATerm), ATerm t)
{
  ATerm h_84 (ATerm t)
  {
    ATerm m_68 = t;
    int n_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, h_84, t);
        ;
        LocalPopChoice(n_68);
      }
    else
      {
        t = m_68;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = v_127(t);
      }
    return(t);
  }
  t = h_84(t);
  return(t);
}
ATerm g_31 (ATerm t)
{
  ATerm k_84 = NULL;
  k_84 = t;
  t = SSL_explode_string(k_84);
  return(t);
}
ATerm h_31 (ATerm t)
{
  ATerm l_84 = NULL;
  l_84 = t;
  t = SSL_explode_string(l_84);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm j_84 = NULL;
  t = _2_0(g_31, h_31, t);
  {
    ATerm o_68 = t;
    int p_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_84 = NULL,o_84 = NULL;
        if(match_cons(t, sym__2))
          {
            n_84 = ATgetArgument(t, 0);
            o_84 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_84;
        {
          ATerm i_31 (ATerm t)
          {
            t = o_84;
            return(t);
          }
          t = at_end_1_0(i_31, t);
        }
        ;
        LocalPopChoice(p_68);
      }
    else
      {
        t = o_68;
        {
          ATerm w_28 = NULL,x_28 = NULL;
          w_28 = t;
          t = SSL_explode_term(w_28);
          if(match_cons(t, sym__2))
            {
              ATerm q_68 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) q_68) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              x_28 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = x_28;
          t = concat_0_0(t);
        }
      }
    j_84 = t;
    t = SSL_implode_string(j_84);
  }
  return(t);
}
ATerm j_31 (ATerm t)
{
  ATerm r_68 = t;
  int s_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(s_68);
    }
  else
    {
      t = r_68;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm t_68 = t;
  int u_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_84 = NULL;
      y_84 = t;
      t = SSL_is_string(y_84);
      ;
      LocalPopChoice(u_68);
    }
  else
    {
      t = t_68;
      {
        ATerm v_68 = t;
        int w_68 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(j_31, t);
            ;
            LocalPopChoice(w_68);
          }
        else
          {
            t = v_68;
            {
              ATerm g_85 = NULL,h_85 = NULL,i_85 = NULL;
              g_85 = t;
              if(match_cons(t, sym_Path_1))
                {
                  h_85 = ATgetArgument(t, 0);
                  t = h_85;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      h_85 = ATgetArgument(t, 0);
                      t = h_85;
                      {
                        ATerm x_68 = t;
                        int y_68 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm y_8 = NULL,z_8 = NULL;
                            z_8 = t;
                            t = term_z_68;
                            y_8 = t;
                            t = SSL_table_get(y_8, h_85);
                            {
                              ATerm a_69 = t;
                              int b_69 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm n_31 = NULL,c_9 = NULL,d_9 = NULL;
                                  t = eval_config_0_0(t);
                                  n_31 = t;
                                  d_9 = t;
                                  t = term_z_68;
                                  c_9 = t;
                                  t = SSL_table_put(c_9, h_85, n_31);
                                  t = n_31;
                                  ;
                                  LocalPopChoice(b_69);
                                }
                              else
                                {
                                  t = a_69;
                                }
                            }
                            ;
                            LocalPopChoice(y_68);
                          }
                        else
                          {
                            t = x_68;
                            {
                              ATerm e_9 = NULL,i_9 = NULL,j_9 = NULL,k_9 = NULL;
                              t = term_c_69;
                              j_9 = t;
                              t = term_c_34;
                              e_9 = t;
                              t = j_9;
                              k_9 = t;
                              t = (ATerm) ATinsert(ATinsert(ATempty, h_85), term_c_69);
                              i_9 = t;
                              t = SSL_printnl(e_9, i_9);
                              t = h_85;
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm m_85 = NULL,n_85 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          h_85 = ATgetArgument(t, 0);
                          i_85 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = h_85;
                      t = eval_config_0_0(t);
                      m_85 = t;
                      t = i_85;
                      t = eval_config_0_0(t);
                      n_85 = t;
                      t = (ATerm) ATmakeAppl(sym__2, m_85, n_85);
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
  ATerm d_69 = t;
  int e_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_85 = NULL,u_85 = NULL,m_9 = NULL,p_9 = NULL,q_9 = NULL,r_9 = NULL;
      s_85 = t;
      t = term_f_69;
      q_9 = t;
      t = term_z_68;
      m_9 = t;
      t = q_9;
      r_9 = t;
      t = term_f_69;
      p_9 = t;
      t = SSL_table_get(m_9, p_9);
      {
        ATerm g_69 = t;
        int h_69 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_32 = NULL,s_9 = NULL,t_9 = NULL,v_9 = NULL,w_9 = NULL;
            t = eval_config_0_0(t);
            z_32 = t;
            v_9 = t;
            t = term_z_68;
            s_9 = t;
            t = v_9;
            w_9 = t;
            t = term_f_69;
            t_9 = t;
            t = SSL_table_put(s_9, t_9, z_32);
            t = z_32;
            ;
            LocalPopChoice(h_69);
          }
        else
          {
            t = g_69;
          }
        u_85 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_85, term_i_69);
        t = geq_0_0(t);
        t = s_85;
        t = n_144(t);
      }
      ;
      LocalPopChoice(e_69);
    }
  else
    {
      t = d_69;
    }
  return(t);
}
ATerm k_31 (ATerm t)
{
  ATerm w_85 = NULL;
  w_85 = t;
  if(match_string(t, "-k"))
    {
      t = w_85;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = w_85;
    }
  return(t);
}
ATerm l_31 (ATerm t)
{
  ATerm x_85 = NULL,y_85 = NULL,x_9 = NULL,y_9 = NULL,g_10 = NULL,i_10 = NULL;
  x_85 = t;
  t = SSL_string_to_int(x_85);
  y_85 = t;
  g_10 = t;
  t = term_z_68;
  x_9 = t;
  t = g_10;
  i_10 = t;
  t = term_j_69;
  y_9 = t;
  t = SSL_table_put(x_9, y_9, y_85);
  t = x_85;
  return(t);
}
ATerm m_31 (ATerm t)
{
  t = term_k_69;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_31, l_31, m_31, t);
  return(t);
}
ATerm o_31 (ATerm t)
{
  ATerm a_86 = NULL;
  a_86 = t;
  if(match_string(t, "-S"))
    {
      t = a_86;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = a_86;
    }
  return(t);
}
ATerm s_31 (ATerm t)
{
  ATerm j_10 = NULL,k_10 = NULL,m_10 = NULL,n_10 = NULL,p_10 = NULL,q_10 = NULL;
  n_10 = t;
  t = term_z_68;
  j_10 = t;
  t = n_10;
  p_10 = t;
  t = term_f_69;
  k_10 = t;
  t = p_10;
  q_10 = t;
  t = term_a_57;
  m_10 = t;
  t = SSL_table_put(j_10, k_10, m_10);
  t = term_l_69;
  return(t);
}
ATerm t_31 (ATerm t)
{
  t = term_m_69;
  return(t);
}
ATerm u_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_31 (ATerm t)
{
  ATerm b_86 = NULL,c_86 = NULL,r_10 = NULL,t_10 = NULL,u_10 = NULL,v_10 = NULL;
  b_86 = t;
  t = SSL_string_to_int(b_86);
  c_86 = t;
  u_10 = t;
  t = term_z_68;
  r_10 = t;
  t = u_10;
  v_10 = t;
  t = term_f_69;
  t_10 = t;
  t = SSL_table_put(r_10, t_10, c_86);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, b_86);
  return(t);
}
ATerm x_31 (ATerm t)
{
  t = term_n_69;
  return(t);
}
ATerm y_31 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_31 (ATerm t)
{
  ATerm w_10 = NULL,y_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL;
  a_11 = t;
  t = term_z_68;
  w_10 = t;
  t = a_11;
  b_11 = t;
  t = term_o_69;
  y_10 = t;
  t = b_11;
  c_11 = t;
  t = term_x_11;
  z_10 = t;
  t = SSL_table_put(w_10, y_10, z_10);
  t = term_p_69;
  return(t);
}
ATerm a_32 (ATerm t)
{
  t = term_q_69;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm r_69 = t;
  int s_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_31, s_31, t_31, t);
      ;
      LocalPopChoice(s_69);
    }
  else
    {
      t = r_69;
      {
        ATerm t_69 = t;
        int u_69 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(u_31, w_31, x_31, t);
            ;
            LocalPopChoice(u_69);
          }
        else
          {
            t = t_69;
            t = Option_3_0(y_31, z_31, a_32, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm f_86 = NULL,g_86 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_86 = NULL;
      t = term_x_11;
      t = d_0(t);
      h_86 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_69, term_w_69, h_86);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm k_86 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_86 = ATgetFirst((ATermList) t);
          g_86 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_86;
      t = a_0(t);
      t = term_x_11;
      t = c_0(t);
      k_86 = t;
      t = (ATerm) ATinsert(CheckATermList(g_86), k_86);
    }
  return(t);
}
ATerm d_32 (ATerm t)
{
  ATerm m_86 = NULL;
  m_86 = t;
  if(match_string(t, "-o"))
    {
      t = m_86;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = m_86;
    }
  return(t);
}
ATerm f_32 (ATerm t)
{
  ATerm n_86 = NULL,d_11 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL;
  n_86 = t;
  g_11 = t;
  t = term_z_68;
  d_11 = t;
  t = g_11;
  h_11 = t;
  t = term_x_69;
  f_11 = t;
  t = SSL_table_put(d_11, f_11, n_86);
  t = (ATerm) ATmakeAppl(sym_Output_1, n_86);
  return(t);
}
ATerm h_32 (ATerm t)
{
  t = term_y_69;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_32, f_32, h_32, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm q_86 = NULL,r_86 = NULL,s_86 = NULL,t_86 = NULL,i_11 = NULL,j_11 = NULL;
  if(match_cons(t, sym__3))
    {
      q_86 = ATgetArgument(t, 0);
      r_86 = ATgetArgument(t, 1);
      s_86 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_86, r_86);
  {
    ATerm z_69 = t;
    int a_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_70 = ATgetArgument(t, 0);
            ATerm c_70 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(q_86, r_86);
        ;
        LocalPopChoice(a_70);
      }
    else
      {
        t = z_69;
        t = (ATerm) ATempty;
      }
    t_86 = t;
    j_11 = t;
    t = (ATerm) ATinsert(CheckATermList(t_86), s_86);
    i_11 = t;
    t = SSL_table_put(q_86, r_86, i_11);
    t = (ATerm) ATmakeAppl(sym__3, q_86, r_86, s_86);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm b_87 = NULL,c_87 = NULL,d_87 = NULL,e_87 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_87 = NULL;
      t = term_x_11;
      t = l_0(t);
      f_87 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_69, term_w_69, f_87);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm j_87 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_87 = ATgetFirst((ATermList) t);
          c_87 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_87;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_87 = ATgetFirst((ATermList) t);
          e_87 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_87;
      t = i_0(t);
      t = d_87;
      t = k_0(t);
      j_87 = t;
      t = (ATerm) ATinsert(CheckATermList(e_87), j_87);
    }
  return(t);
}
ATerm i_32 (ATerm t)
{
  ATerm l_87 = NULL;
  l_87 = t;
  if(match_string(t, "-i"))
    {
      t = l_87;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = l_87;
    }
  return(t);
}
ATerm j_32 (ATerm t)
{
  ATerm m_87 = NULL,k_11 = NULL,l_11 = NULL,n_11 = NULL,o_11 = NULL;
  m_87 = t;
  n_11 = t;
  t = term_z_68;
  k_11 = t;
  t = n_11;
  o_11 = t;
  t = term_d_70;
  l_11 = t;
  t = SSL_table_put(k_11, l_11, m_87);
  t = (ATerm) ATmakeAppl(sym_Input_1, m_87);
  return(t);
}
ATerm k_32 (ATerm t)
{
  t = term_e_70;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_32, j_32, k_32, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm n_87 = NULL,u_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL,v_11 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_11;
  t = whoami_0_0(t);
  n_87 = t;
  r_11 = t;
  t = term_c_34;
  p_11 = t;
  t = r_11;
  s_11 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_f_70), n_87);
  q_11 = t;
  t = SSL_printnl(p_11, q_11);
  v_11 = t;
  t = term_g_34;
  u_11 = t;
  t = SSL_exit(u_11);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm w_11 = NULL,e_12 = NULL,h_12 = NULL,i_12 = NULL;
  t = term_g_70;
  h_12 = t;
  t = term_z_68;
  w_11 = t;
  t = h_12;
  i_12 = t;
  t = term_g_70;
  e_12 = t;
  t = SSL_table_get(w_11, e_12);
  {
    ATerm h_70 = t;
    int i_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_33 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL;
        t = eval_config_0_0(t);
        l_33 = t;
        l_12 = t;
        t = term_z_68;
        j_12 = t;
        t = l_12;
        m_12 = t;
        t = term_g_70;
        k_12 = t;
        t = SSL_table_put(j_12, k_12, l_33);
        t = l_33;
        ;
        LocalPopChoice(i_70);
      }
    else
      {
        t = h_70;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm t_131 (ATerm), ATerm u_131 (ATerm), ATerm t)
{
  ATerm j_70 = t;
  int k_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = t_131(t);
      ;
      LocalPopChoice(k_70);
    }
  else
    {
      t = j_70;
      {
        ATerm v_87 = NULL,w_87 = NULL,z_87 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_87 = ATgetFirst((ATermList) t);
            w_87 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = w_87;
        t = foldr_2_0(t_131, u_131, t);
        z_87 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_87, z_87);
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
ATerm l_32 (ATerm t)
{
  t = term_a_57;
  return(t);
}
ATerm m_32 (ATerm t)
{
  ATerm q_33 = NULL,r_33 = NULL;
  if(match_cons(t, sym__2))
    {
      q_33 = ATgetArgument(t, 0);
      r_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_70 = t;
    int m_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(q_33, r_33);
        ;
        LocalPopChoice(m_70);
      }
    else
      {
        t = l_70;
        t = SSL_addr(q_33, r_33);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm c_88 = NULL,m_33 = NULL,n_33 = NULL;
  t = times_0_0(t);
  m_33 = t;
  t = SSL_explode_term(m_33);
  if(match_cons(t, sym__2))
    {
      ATerm n_70 = ATgetArgument(t, 0);
      n_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_33;
  t = foldr_2_0(l_32, m_32, t);
  c_88 = t;
  t = SSL_TicksToSeconds(c_88);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm o_88 = NULL,p_88 = NULL,q_88 = NULL;
  o_88 = t;
  if(match_cons(t, sym__2))
    {
      p_88 = ATgetArgument(t, 0);
      q_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_70 = t;
    int p_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_88;
        if((p_88 != t))
          {
            _fail(t);
          }
        t = o_88;
        ;
        LocalPopChoice(p_70);
      }
    else
      {
        t = o_70;
        t = o_88;
        {
          ATerm q_70 = t;
          int r_70 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(p_88, q_88);
              ;
              LocalPopChoice(r_70);
            }
          else
            {
              t = q_70;
              t = SSL_gtr(p_88, q_88);
            }
          t = (ATerm) ATmakeAppl(sym__2, p_88, q_88);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm m_144 (ATerm), ATerm t)
{
  ATerm s_70 = t;
  int t_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_88 = NULL,v_88 = NULL,n_12 = NULL,o_12 = NULL,s_12 = NULL,u_12 = NULL;
      t_88 = t;
      t = term_f_69;
      s_12 = t;
      t = term_z_68;
      n_12 = t;
      t = s_12;
      u_12 = t;
      t = term_f_69;
      o_12 = t;
      t = SSL_table_get(n_12, o_12);
      {
        ATerm u_70 = t;
        int v_70 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_34 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL;
            t = eval_config_0_0(t);
            e_34 = t;
            x_12 = t;
            t = term_z_68;
            v_12 = t;
            t = x_12;
            y_12 = t;
            t = term_f_69;
            w_12 = t;
            t = SSL_table_put(v_12, w_12, e_34);
            t = e_34;
            ;
            LocalPopChoice(v_70);
          }
        else
          {
            t = u_70;
          }
        v_88 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_88, term_g_34);
        t = geq_0_0(t);
        t = t_88;
        t = m_144(t);
      }
      ;
      LocalPopChoice(t_70);
    }
  else
    {
      t = s_70;
    }
  return(t);
}
ATerm n_32 (ATerm t)
{
  ATerm x_88 = NULL,y_88 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL;
  t = run_time_0_0(t);
  x_88 = t;
  t = term_x_11;
  t = whoami_0_0(t);
  y_88 = t;
  b_13 = t;
  t = term_c_34;
  z_12 = t;
  t = b_13;
  c_13 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_70), x_88), term_w_70), y_88);
  a_13 = t;
  t = SSL_printnl(z_12, a_13);
  t = (ATerm) ATmakeAppl(sym__2, term_c_34, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_70), x_88), term_w_70), y_88));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(n_32, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm d_13 = NULL,e_13 = NULL;
  t = report_run_time_0_0(t);
  e_13 = t;
  t = term_a_57;
  d_13 = t;
  t = SSL_exit(d_13);
  return(t);
}
ATerm r_32 (ATerm t)
{
  ATerm y_70 = t;
  int z_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(z_70);
    }
  else
    {
      t = y_70;
      {
        ATerm a_71 = t;
        int b_71 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(b_71);
          }
        else
          {
            t = a_71;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm c_147 (ATerm), ATerm t)
{
  ATerm c_71 = t;
  int d_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL;
      t = term_e_71;
      h_13 = t;
      t = term_z_68;
      f_13 = t;
      t = h_13;
      i_13 = t;
      t = term_e_71;
      g_13 = t;
      t = SSL_table_get(f_13, g_13);
      {
        ATerm f_71 = t;
        int g_71 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_34 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL;
            t = eval_config_0_0(t);
            i_34 = t;
            l_13 = t;
            t = term_z_68;
            j_13 = t;
            t = l_13;
            m_13 = t;
            t = term_e_71;
            k_13 = t;
            t = SSL_table_put(j_13, k_13, i_34);
            t = i_34;
            ;
            LocalPopChoice(g_71);
          }
        else
          {
            t = f_71;
          }
      }
      ;
      LocalPopChoice(d_71);
    }
  else
    {
      t = c_71;
      t = fetch_1_0(r_32, t);
    }
  t = c_147(t);
  return(t);
}
ATerm map_1_0 (ATerm e_127 (ATerm), ATerm t)
{
  ATerm z_88 (ATerm t)
  {
    ATerm h_71 = t;
    int i_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(i_71);
      }
    else
      {
        t = h_71;
        t = Cons_2_0(e_127, z_88, t);
      }
    return(t);
  }
  t = z_88(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm b_89 = NULL,c_89 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_89 = ATgetFirst((ATermList) t);
      c_89 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm l_89 = NULL,v_89 = NULL;
        t = c_89;
        t = g_0(t);
        l_89 = t;
        t = b_89;
        t = e_0(t);
        v_89 = t;
        t = c_89;
        {
          ATerm t_32 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(l_89), v_89);
            return(t);
          }
          t = reverse_acc_2_0(e_0, t_32, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_x_11;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm y_118 (ATerm), ATerm t)
{
  ATerm w_89 = NULL,x_89 = NULL,g_90 = NULL,h_90 = NULL,n_13 = NULL,o_13 = NULL;
  h_90 = t;
  if(match_cons(t, sym_Program_1))
    {
      x_89 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_90);
  w_89 = t;
  t = x_89;
  t = y_118(t);
  g_90 = t;
  o_13 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, g_90);
  n_13 = t;
  t = SSLsetAnnotations(n_13, w_89);
  return(t);
}
ATerm u_32 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm v_32 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm w_32 (ATerm t)
{
  ATerm k_90 = NULL;
  k_90 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_90), term_j_71);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm e_14 = NULL,f_14 = NULL,g_14 = NULL,h_14 = NULL;
  ATerm k_71 = t;
  int l_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_13 = NULL,u_13 = NULL,w_13 = NULL,x_13 = NULL;
      t = term_g_70;
      w_13 = t;
      t = term_z_68;
      p_13 = t;
      t = w_13;
      x_13 = t;
      t = term_g_70;
      u_13 = t;
      t = SSL_table_get(p_13, u_13);
      {
        ATerm m_71 = t;
        int a_72 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_34 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL,c_14 = NULL;
            t = eval_config_0_0(t);
            o_34 = t;
            a_14 = t;
            t = term_z_68;
            y_13 = t;
            t = a_14;
            c_14 = t;
            t = term_g_70;
            z_13 = t;
            t = SSL_table_put(y_13, z_13, o_34);
            t = o_34;
            ;
            LocalPopChoice(a_72);
          }
        else
          {
            t = m_71;
          }
      }
      ;
      LocalPopChoice(l_71);
    }
  else
    {
      t = k_71;
      t = fetch_1_0(u_32, t);
    }
  t = term_b_72;
  t = echo_0_0(t);
  g_14 = t;
  t = term_v_69;
  e_14 = t;
  t = g_14;
  h_14 = t;
  t = term_w_69;
  f_14 = t;
  t = SSL_table_get(e_14, f_14);
  t = reverse_acc_2_0(_id, v_32, t);
  t = map_1_0(w_32, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm z_118 (ATerm), ATerm t)
{
  ATerm l_90 = NULL,m_90 = NULL,n_90 = NULL,o_90 = NULL,i_14 = NULL,j_14 = NULL;
  o_90 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      m_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_90);
  l_90 = t;
  t = m_90;
  t = z_118(t);
  n_90 = t;
  j_14 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, n_90);
  i_14 = t;
  t = SSLsetAnnotations(i_14, l_90);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm s_90 = NULL,t_90 = NULL,l_14 = NULL,m_14 = NULL;
  s_90 = t;
  {
    ATerm c_72 = t;
    int g_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = s_90;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm h_72 = ATgetFirst((ATermList) t);
                ATerm i_72 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = s_90;
          }
        ;
        LocalPopChoice(g_72);
      }
    else
      {
        t = c_72;
        t = (ATerm) ATinsert(ATempty, s_90);
      }
    t_90 = t;
    m_14 = t;
    t = term_q_67;
    l_14 = t;
    t = SSL_printnl(l_14, t_90);
    t = s_90;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm n_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL;
  t = term_g_70;
  q_14 = t;
  t = term_z_68;
  n_14 = t;
  t = q_14;
  r_14 = t;
  t = term_g_70;
  p_14 = t;
  t = SSL_table_get(n_14, p_14);
  {
    ATerm j_72 = t;
    int k_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_34 = NULL,s_14 = NULL,t_14 = NULL,u_14 = NULL,v_14 = NULL;
        t = eval_config_0_0(t);
        v_34 = t;
        u_14 = t;
        t = term_z_68;
        s_14 = t;
        t = u_14;
        v_14 = t;
        t = term_g_70;
        t_14 = t;
        t = SSL_table_put(s_14, t_14, v_34);
        t = v_34;
        ;
        LocalPopChoice(k_72);
      }
    else
      {
        t = j_72;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm x_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_32 (ATerm t)
{
  ATerm w_14 = NULL,x_14 = NULL,y_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL;
  z_14 = t;
  t = term_z_68;
  w_14 = t;
  t = z_14;
  a_15 = t;
  t = term_l_72;
  x_14 = t;
  t = a_15;
  b_15 = t;
  t = term_x_11;
  y_14 = t;
  t = SSL_table_put(w_14, x_14, y_14);
  t = term_m_72;
  return(t);
}
ATerm a_33 (ATerm t)
{
  t = term_n_72;
  return(t);
}
ATerm b_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_33 (ATerm t)
{
  ATerm c_15 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL;
  f_15 = t;
  t = term_z_68;
  c_15 = t;
  t = f_15;
  g_15 = t;
  t = term_l_72;
  d_15 = t;
  t = g_15;
  h_15 = t;
  t = term_x_11;
  e_15 = t;
  t = SSL_table_put(c_15, d_15, e_15);
  l_15 = t;
  t = term_z_68;
  i_15 = t;
  t = l_15;
  m_15 = t;
  t = term_o_72;
  j_15 = t;
  t = m_15;
  n_15 = t;
  t = term_x_11;
  k_15 = t;
  t = SSL_table_put(i_15, j_15, k_15);
  t = term_p_72;
  return(t);
}
ATerm d_33 (ATerm t)
{
  t = term_q_72;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm r_72 = t;
  int u_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_32, y_32, a_33, t);
      ;
      LocalPopChoice(u_72);
    }
  else
    {
      t = r_72;
      t = Option_3_0(b_33, c_33, d_33, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm q_104 (ATerm), ATerm r_104 (ATerm), ATerm t)
{
  ATerm x_90 = NULL,y_90 = NULL,z_90 = NULL,a_91 = NULL,b_91 = NULL,c_91 = NULL,o_15 = NULL,s_15 = NULL;
  c_91 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_90 = ATgetFirst((ATermList) t);
      z_90 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_91);
  x_90 = t;
  t = y_90;
  t = q_104(t);
  a_91 = t;
  t = z_90;
  t = r_104(t);
  b_91 = t;
  s_15 = t;
  t = (ATerm) ATinsert(CheckATermList(b_91), a_91);
  o_15 = t;
  t = SSLsetAnnotations(o_15, x_90);
  return(t);
}
ATerm e_33 (ATerm t)
{
  ATerm h_91 = NULL,t_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL;
  h_91 = t;
  w_15 = t;
  t = term_z_68;
  t_15 = t;
  t = w_15;
  x_15 = t;
  t = term_g_70;
  v_15 = t;
  t = SSL_table_put(t_15, v_15, h_91);
  t = (ATerm) ATmakeAppl(sym_Program_1, h_91);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm f_149 (ATerm), ATerm t)
{
  ATerm g_91 = NULL;
  g_91 = t;
  {
    ATerm v_72 = t;
    int y_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_72;
        t = f_149(t);
        ;
        LocalPopChoice(y_72);
      }
    else
      {
        t = v_72;
      }
    t = g_91;
    {
      ATerm f_33 (ATerm t)
      {
        ATerm b_73 = t;
        int c_73 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_73 = t;
            int e_73 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(e_73);
              }
            else
              {
                t = d_73;
                t = f_149(t);
                t = Cons_2_0(_id, f_33, t);
              }
            ;
            LocalPopChoice(c_73);
          }
        else
          {
            t = b_73;
            {
              ATerm j_91 = NULL,k_91 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  j_91 = ATgetFirst((ATermList) t);
                  k_91 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(k_91), (ATerm) ATmakeAppl(sym_Undefined_1, j_91));
            }
          }
        return(t);
      }
      t = Cons_2_0(e_33, f_33, t);
    }
  }
  return(t);
}
ATerm h_33 (ATerm t)
{
  ATerm u_91 = NULL;
  u_91 = t;
  if(match_string(t, "--help"))
    {
      t = u_91;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = u_91;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = u_91;
        }
    }
  return(t);
}
ATerm i_33 (ATerm t)
{
  ATerm e_16 = NULL,g_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL;
  m_16 = t;
  t = term_z_68;
  e_16 = t;
  t = m_16;
  n_16 = t;
  t = term_e_71;
  g_16 = t;
  t = n_16;
  o_16 = t;
  t = term_x_11;
  l_16 = t;
  t = SSL_table_put(e_16, g_16, l_16);
  t = term_f_73;
  return(t);
}
ATerm j_33 (ATerm t)
{
  t = term_g_73;
  return(t);
}
ATerm k_33 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm e_149 (ATerm), ATerm t)
{
  ATerm r_91 = NULL,s_91 = NULL,t_91 = NULL,y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL,v_17 = NULL,w_17 = NULL;
  r_91 = t;
  b_16 = t;
  t = term_v_69;
  y_15 = t;
  t = b_16;
  c_16 = t;
  t = term_w_69;
  z_15 = t;
  t = c_16;
  d_16 = t;
  t = (ATerm) ATempty;
  a_16 = t;
  t = SSL_table_put(y_15, z_15, a_16);
  t = r_91;
  {
    ATerm g_33 (ATerm t)
    {
      ATerm i_73 = t;
      int j_73 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_149(t);
          ;
          LocalPopChoice(j_73);
        }
      else
        {
          t = i_73;
          {
            ATerm o_73 = t;
            int p_73 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(h_33, i_33, j_33, t);
                ;
                LocalPopChoice(p_73);
              }
            else
              {
                t = o_73;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(g_33, t);
    {
      ATerm q_73 = t;
      int r_73 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_91 = NULL;
          z_91 = t;
          {
            ATerm s_73 = t;
            int t_73 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_17 = NULL,c_17 = NULL;
                t = z_91;
                {
                  ATerm u_73 = t;
                  int v_73 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL;
                      t = term_e_71;
                      s_16 = t;
                      t = term_z_68;
                      q_16 = t;
                      t = s_16;
                      t_16 = t;
                      t = term_e_71;
                      r_16 = t;
                      t = SSL_table_get(q_16, r_16);
                      {
                        ATerm w_73 = t;
                        int x_73 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm u_35 = NULL,u_16 = NULL,v_16 = NULL,z_16 = NULL,a_17 = NULL;
                            t = eval_config_0_0(t);
                            u_35 = t;
                            z_16 = t;
                            t = term_z_68;
                            u_16 = t;
                            t = z_16;
                            a_17 = t;
                            t = term_e_71;
                            v_16 = t;
                            t = SSL_table_put(u_16, v_16, u_35);
                            t = u_35;
                            ;
                            LocalPopChoice(x_73);
                          }
                        else
                          {
                            t = w_73;
                          }
                      }
                      ;
                      LocalPopChoice(v_73);
                    }
                  else
                    {
                      t = u_73;
                      t = fetch_1_0(k_33, t);
                    }
                  t = z_91;
                  t = default_system_usage_0_0(t);
                  c_17 = t;
                  t = term_a_57;
                  b_17 = t;
                  t = SSL_exit(b_17);
                }
                ;
                LocalPopChoice(t_73);
              }
            else
              {
                t = s_73;
                {
                  ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL,m_17 = NULL,o_17 = NULL;
                  t = term_l_72;
                  f_17 = t;
                  t = term_z_68;
                  d_17 = t;
                  t = f_17;
                  g_17 = t;
                  t = term_l_72;
                  e_17 = t;
                  t = SSL_table_get(d_17, e_17);
                  {
                    ATerm y_73 = t;
                    int z_73 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm b_36 = NULL,h_17 = NULL,i_17 = NULL,k_17 = NULL,l_17 = NULL;
                        t = eval_config_0_0(t);
                        b_36 = t;
                        k_17 = t;
                        t = term_z_68;
                        h_17 = t;
                        t = k_17;
                        l_17 = t;
                        t = term_l_72;
                        i_17 = t;
                        t = SSL_table_put(h_17, i_17, b_36);
                        t = b_36;
                        ;
                        LocalPopChoice(z_73);
                      }
                    else
                      {
                        t = y_73;
                      }
                    t = z_91;
                    t = default_system_about_0_0(t);
                    o_17 = t;
                    t = term_a_57;
                    m_17 = t;
                    t = SSL_exit(m_17);
                  }
                }
              }
          }
          ;
          LocalPopChoice(r_73);
        }
      else
        {
          t = q_73;
          {
            ATerm a_74 = t;
            int b_74 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL;
                ATerm o_33 (ATerm t)
                {
                  ATerm p_33 (ATerm t)
                  {
                    if(((s_91 != NULL) && (s_91 != t)))
                      _fail(t);
                    else
                      s_91 = t;
                    return(t);
                  }
                  t = Undefined_1_0(p_33, t);
                  return(t);
                }
                t = fetch_1_0(o_33, t);
                r_17 = t;
                t = term_c_34;
                p_17 = t;
                t = r_17;
                s_17 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_91)), term_c_74);
                q_17 = t;
                t = SSL_printnl(p_17, q_17);
                t = (ATerm) ATmakeAppl(sym__2, term_c_34, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_91)), term_c_74));
                t = default_system_usage_0_0(t);
                u_17 = t;
                t = term_g_34;
                t_17 = t;
                t = SSL_exit(t_17);
                ;
                LocalPopChoice(b_74);
              }
            else
              {
                t = a_74;
              }
          }
        }
      t_91 = t;
      w_17 = t;
      t = term_v_69;
      v_17 = t;
      t = SSL_table_destroy(v_17);
      t = t_91;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm e_147 (ATerm), ATerm f_147 (ATerm), ATerm g_147 (ATerm), ATerm h_147 (ATerm), ATerm t)
{
  ATerm c_92 = NULL,x_17 = NULL,b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL,h_18 = NULL;
  t = parse_options_1_0(e_147, t);
  c_92 = t;
  b_18 = t;
  t = term_d_74;
  x_17 = t;
  t = SSL_table_create(x_17);
  e_18 = t;
  t = term_d_74;
  c_18 = t;
  t = e_18;
  h_18 = t;
  t = term_e_74;
  d_18 = t;
  t = SSL_table_put(c_18, d_18, c_92);
  t = c_92;
  t = g_147(t);
  {
    ATerm f_74 = t;
    int n_74 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(f_147, t);
        ;
        LocalPopChoice(n_74);
      }
    else
      {
        t = f_74;
        {
          ATerm o_74 = t;
          int p_74 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_147(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(p_74);
            }
          else
            {
              t = o_74;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm t_33 (ATerm t)
{
  t = if_verbose2_1_0(y_33, t);
  return(t);
}
ATerm v_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_33 (ATerm t)
{
  ATerm i_18 = NULL,j_18 = NULL,k_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL;
  l_18 = t;
  t = term_z_68;
  i_18 = t;
  t = l_18;
  m_18 = t;
  t = term_q_74;
  j_18 = t;
  t = m_18;
  n_18 = t;
  t = term_x_11;
  k_18 = t;
  t = SSL_table_put(i_18, j_18, k_18);
  t = term_r_74;
  return(t);
}
ATerm x_33 (ATerm t)
{
  t = term_s_74;
  return(t);
}
ATerm y_33 (ATerm t)
{
  ATerm d_92 = NULL,e_92 = NULL,o_18 = NULL,q_18 = NULL,r_18 = NULL,t_18 = NULL,d_19 = NULL,e_19 = NULL,f_19 = NULL,g_19 = NULL;
  d_92 = t;
  t = term_g_70;
  r_18 = t;
  t = term_z_68;
  o_18 = t;
  t = r_18;
  t_18 = t;
  t = term_g_70;
  q_18 = t;
  t = SSL_table_get(o_18, q_18);
  {
    ATerm y_74 = t;
    int g_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_36 = NULL,u_18 = NULL,x_18 = NULL,b_19 = NULL,c_19 = NULL;
        t = eval_config_0_0(t);
        m_36 = t;
        b_19 = t;
        t = term_z_68;
        u_18 = t;
        t = b_19;
        c_19 = t;
        t = term_g_70;
        x_18 = t;
        t = SSL_table_put(u_18, x_18, m_36);
        t = m_36;
        ;
        LocalPopChoice(g_75);
      }
    else
      {
        t = y_74;
      }
    e_92 = t;
    f_19 = t;
    t = term_c_34;
    d_19 = t;
    t = f_19;
    g_19 = t;
    t = (ATerm) ATinsert(ATempty, e_92);
    e_19 = t;
    t = SSL_printnl(d_19, e_19);
    t = d_92;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm n_146 (ATerm), ATerm o_146 (ATerm), ATerm p_146 (ATerm), ATerm t)
{
  ATerm s_33 (ATerm t)
  {
    ATerm h_75 = t;
    int d_76 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_146(t);
        ;
        LocalPopChoice(d_76);
      }
    else
      {
        t = h_75;
        {
          ATerm e_76 = t;
          int h_76 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(h_76);
            }
          else
            {
              t = e_76;
              {
                ATerm i_76 = t;
                int j_76 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(j_76);
                  }
                else
                  {
                    t = i_76;
                    {
                      ATerm k_76 = t;
                      int m_76 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(v_33, w_33, x_33, t);
                          ;
                          LocalPopChoice(m_76);
                        }
                      else
                        {
                          t = k_76;
                          {
                            ATerm s_76 = t;
                            int t_76 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(t_76);
                              }
                            else
                              {
                                t = s_76;
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
  ATerm u_33 (ATerm t)
  {
    ATerm f_92 = NULL,g_92 = NULL,w_37 = NULL;
    f_92 = t;
    {
      ATerm w_76 = t;
      int x_76 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_33 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((g_92 != NULL) && (g_92 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  g_92 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(z_33, t);
          ;
          LocalPopChoice(x_76);
        }
      else
        {
          t = w_76;
          t = term_y_76;
          g_92 = t;
        }
      t = not_null(g_92);
      t = ReadFromFile_0_0(t);
      w_37 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_92, w_37);
      t = apply_strategy_1_0(n_146, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(s_33, p_146, t_33, u_33, t);
  return(t);
}
ATerm a_34 (ATerm t)
{
  t = _2_0(_id, b_34, t);
  return(t);
}
ATerm b_34 (ATerm t)
{
  t = apply_to_bodies_1_0(match_to_dfa_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(a_34, _fail, default_usage_0_0, t);
  return(t);
}
