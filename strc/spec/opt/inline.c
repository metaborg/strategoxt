#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_RDecT_3;
Symbol sym_DynRuleId_1;
Symbol sym_AddDynRule_2;
Symbol sym_SetDynRule_2;
Symbol sym_UndefineDynRule_2;
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_As_2;
Symbol sym_App_2;
Symbol sym_Op_2;
Symbol sym_Wld_0;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_SVar_1;
Symbol sym_ExtendOverrideDynamicRules_1;
Symbol sym_ExtendDynamicRules_1;
Symbol sym_OverrideDynamicRules_1;
Symbol sym_GenDynRules_1;
Symbol sym_AM_2;
Symbol sym_Choice_2;
Symbol sym_LRule_1;
Symbol sym_All_1;
Symbol sym_One_1;
Symbol sym_Some_1;
Symbol sym_Path_2;
Symbol sym_PrimT_3;
Symbol sym_Test_1;
Symbol sym_Where_1;
Symbol sym_Not_1;
Symbol sym_Rec_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_LChoice_2;
Symbol sym_Seq_2;
Symbol sym_BA_2;
Symbol sym_Scope_2;
Symbol sym_Build_1;
Symbol sym_Match_1;
Symbol sym_CallT_3;
Symbol sym_Let_2;
Symbol sym_Id_0;
Symbol sym_Fail_0;
Symbol sym_VarDec_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_ExtSDefInl_4;
Symbol sym_SDefT_4;
Symbol sym_SDef_3;
Symbol sym_FunType_2;
Symbol sym_Rule_3;
Symbol sym_RDefT_4;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Some_1;
Symbol sym_DynamicRules_1;
Symbol sym_RDecT_3;
Symbol sym_DynRuleId_1;
Symbol sym_AddDynRule_2;
Symbol sym_SetDynRule_2;
Symbol sym_UndefineDynRule_2;
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_As_2;
Symbol sym_App_2;
Symbol sym_Op_2;
Symbol sym_Wld_0;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_SVar_1;
Symbol sym_ExtendOverrideDynamicRules_1;
Symbol sym_ExtendDynamicRules_1;
Symbol sym_OverrideDynamicRules_1;
Symbol sym_GenDynRules_1;
Symbol sym_AM_2;
Symbol sym_Choice_2;
Symbol sym_LRule_1;
Symbol sym_All_1;
Symbol sym_One_1;
Symbol sym_Some_1;
Symbol sym_Path_2;
Symbol sym_PrimT_3;
Symbol sym_Test_1;
Symbol sym_Where_1;
Symbol sym_Not_1;
Symbol sym_Rec_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_LChoice_2;
Symbol sym_Seq_2;
Symbol sym_BA_2;
Symbol sym_Scope_2;
Symbol sym_Build_1;
Symbol sym_Match_1;
Symbol sym_CallT_3;
Symbol sym_Let_2;
Symbol sym_Id_0;
Symbol sym_Fail_0;
Symbol sym_VarDec_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_ExtSDefInl_4;
Symbol sym_SDefT_4;
Symbol sym_SDef_3;
Symbol sym_FunType_2;
Symbol sym_Rule_3;
Symbol sym_RDefT_4;
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
Symbol sym__16;
Symbol sym__17;
Symbol sym__18;
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
Symbol sym_Hashtable_1;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_InfixApp_3;
Symbol sym_MA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
Symbol sym_Cong_2;
static void init_module_constructors (void)
{
  sym_RDecT_3 = ATmakeSymbol("RDecT", 3, ATfalse);
  ATprotectSymbol(sym_RDecT_3);
  sym_DynRuleId_1 = ATmakeSymbol("DynRuleId", 1, ATfalse);
  ATprotectSymbol(sym_DynRuleId_1);
  sym_AddDynRule_2 = ATmakeSymbol("AddDynRule", 2, ATfalse);
  ATprotectSymbol(sym_AddDynRule_2);
  sym_SetDynRule_2 = ATmakeSymbol("SetDynRule", 2, ATfalse);
  ATprotectSymbol(sym_SetDynRule_2);
  sym_UndefineDynRule_2 = ATmakeSymbol("UndefineDynRule", 2, ATfalse);
  ATprotectSymbol(sym_UndefineDynRule_2);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_ExtendOverrideDynamicRules_1 = ATmakeSymbol("ExtendOverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendOverrideDynamicRules_1);
  sym_ExtendDynamicRules_1 = ATmakeSymbol("ExtendDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendDynamicRules_1);
  sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_OverrideDynamicRules_1);
  sym_GenDynRules_1 = ATmakeSymbol("GenDynRules", 1, ATfalse);
  ATprotectSymbol(sym_GenDynRules_1);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_LRule_1 = ATmakeSymbol("LRule", 1, ATfalse);
  ATprotectSymbol(sym_LRule_1);
  sym_All_1 = ATmakeSymbol("All", 1, ATfalse);
  ATprotectSymbol(sym_All_1);
  sym_One_1 = ATmakeSymbol("One", 1, ATfalse);
  ATprotectSymbol(sym_One_1);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_PrimT_3 = ATmakeSymbol("PrimT", 3, ATfalse);
  ATprotectSymbol(sym_PrimT_3);
  sym_Test_1 = ATmakeSymbol("Test", 1, ATfalse);
  ATprotectSymbol(sym_Test_1);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_Not_1 = ATmakeSymbol("Not", 1, ATfalse);
  ATprotectSymbol(sym_Not_1);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_ExtSDefInl_4 = ATmakeSymbol("ExtSDefInl", 4, ATfalse);
  ATprotectSymbol(sym_ExtSDefInl_4);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_RDecT_3 = ATmakeSymbol("RDecT", 3, ATfalse);
  ATprotectSymbol(sym_RDecT_3);
  sym_DynRuleId_1 = ATmakeSymbol("DynRuleId", 1, ATfalse);
  ATprotectSymbol(sym_DynRuleId_1);
  sym_AddDynRule_2 = ATmakeSymbol("AddDynRule", 2, ATfalse);
  ATprotectSymbol(sym_AddDynRule_2);
  sym_SetDynRule_2 = ATmakeSymbol("SetDynRule", 2, ATfalse);
  ATprotectSymbol(sym_SetDynRule_2);
  sym_UndefineDynRule_2 = ATmakeSymbol("UndefineDynRule", 2, ATfalse);
  ATprotectSymbol(sym_UndefineDynRule_2);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_ExtendOverrideDynamicRules_1 = ATmakeSymbol("ExtendOverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendOverrideDynamicRules_1);
  sym_ExtendDynamicRules_1 = ATmakeSymbol("ExtendDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendDynamicRules_1);
  sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_OverrideDynamicRules_1);
  sym_GenDynRules_1 = ATmakeSymbol("GenDynRules", 1, ATfalse);
  ATprotectSymbol(sym_GenDynRules_1);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_LRule_1 = ATmakeSymbol("LRule", 1, ATfalse);
  ATprotectSymbol(sym_LRule_1);
  sym_All_1 = ATmakeSymbol("All", 1, ATfalse);
  ATprotectSymbol(sym_All_1);
  sym_One_1 = ATmakeSymbol("One", 1, ATfalse);
  ATprotectSymbol(sym_One_1);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_PrimT_3 = ATmakeSymbol("PrimT", 3, ATfalse);
  ATprotectSymbol(sym_PrimT_3);
  sym_Test_1 = ATmakeSymbol("Test", 1, ATfalse);
  ATprotectSymbol(sym_Test_1);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_Not_1 = ATmakeSymbol("Not", 1, ATfalse);
  ATprotectSymbol(sym_Not_1);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_ExtSDefInl_4 = ATmakeSymbol("ExtSDefInl", 4, ATfalse);
  ATprotectSymbol(sym_ExtSDefInl_4);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
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
  sym__16 = ATmakeSymbol("", 16, ATfalse);
  ATprotectSymbol(sym__16);
  sym__17 = ATmakeSymbol("", 17, ATfalse);
  ATprotectSymbol(sym__17);
  sym__18 = ATmakeSymbol("", 18, ATfalse);
  ATprotectSymbol(sym__18);
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
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
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
}
ATerm term_x_74;
ATerm term_w_74;
ATerm term_v_74;
ATerm term_h_74;
ATerm term_g_74;
ATerm term_f_74;
ATerm term_c_74;
ATerm term_q_73;
ATerm term_p_73;
ATerm term_o_73;
ATerm term_n_73;
ATerm term_i_73;
ATerm term_d_73;
ATerm term_c_73;
ATerm term_b_73;
ATerm term_a_73;
ATerm term_z_72;
ATerm term_y_72;
ATerm term_x_72;
ATerm term_q_72;
ATerm term_p_72;
ATerm term_j_72;
ATerm term_i_72;
ATerm term_h_72;
ATerm term_e_72;
ATerm term_d_72;
ATerm term_a_72;
ATerm term_x_71;
ATerm term_w_71;
ATerm term_y_70;
ATerm term_w_70;
ATerm term_v_70;
ATerm term_o_70;
ATerm term_v_69;
ATerm term_u_69;
ATerm term_t_69;
ATerm term_k_69;
ATerm term_j_69;
ATerm term_b_69;
ATerm term_a_69;
ATerm term_x_68;
ATerm term_v_68;
ATerm term_u_68;
ATerm term_o_68;
ATerm term_n_68;
ATerm term_m_68;
ATerm term_l_68;
ATerm term_h_68;
ATerm term_g_68;
ATerm term_f_68;
ATerm term_e_68;
ATerm term_u_67;
ATerm term_t_67;
ATerm term_s_67;
ATerm term_p_67;
ATerm term_m_67;
ATerm term_d_66;
ATerm term_c_66;
ATerm term_w_65;
ATerm term_u_65;
ATerm term_t_65;
ATerm term_s_65;
ATerm term_o_65;
ATerm term_b_65;
ATerm term_x_58;
ATerm term_b_58;
ATerm term_t_57;
ATerm term_x_39;
ATerm term_w_39;
ATerm term_m_39;
ATerm term_d_39;
ATerm term_d_38;
ATerm term_m_20;
ATerm term_y_19;
ATerm term_y_17;
ATerm term_o_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_f_17;
ATerm term_e_17;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall0", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("d_0", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeInt(50);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue));
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_t_57));
  term_t_57 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_b_58));
  term_b_58 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_58));
  term_x_58 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_b_65));
  term_b_65 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_65));
  term_o_65 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_s_65));
  term_s_65 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_65));
  term_t_65 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_u_65));
  term_u_65 = (ATerm) ATmakeAppl(sym__2, term_s_65, term_t_65);
  ATprotect(&(term_w_65));
  term_w_65 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_66));
  term_c_66 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_d_66));
  term_d_66 = (ATerm) ATmakeAppl(sym__2, term_s_65, term_c_66);
  ATprotect(&(term_m_67));
  term_m_67 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_p_67));
  term_p_67 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_s_67));
  term_s_67 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_67));
  term_t_67 = (ATerm) ATmakeAppl(sym__2, term_s_65, term_s_67);
  ATprotect(&(term_u_67));
  term_u_67 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_e_68));
  term_e_68 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_f_68));
  term_f_68 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_g_68));
  term_g_68 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_h_68));
  term_h_68 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_l_68));
  term_l_68 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_m_68));
  term_m_68 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_68));
  term_n_68 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_o_68));
  term_o_68 = (ATerm) ATmakeAppl(sym__2, term_n_68, term_b_58);
  ATprotect(&(term_u_68));
  term_u_68 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_58);
  ATprotect(&(term_v_68));
  term_v_68 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_68));
  term_x_68 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_a_69));
  term_a_69 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_b_69));
  term_b_69 = (ATerm) ATmakeAppl(sym__2, term_a_69, term_e_68);
  ATprotect(&(term_j_69));
  term_j_69 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_69));
  term_k_69 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_t_69));
  term_t_69 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_u_69));
  term_u_69 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_v_69));
  term_v_69 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_o_70));
  term_o_70 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_70));
  term_v_70 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_w_70));
  term_w_70 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_70));
  term_y_70 = (ATerm) ATmakeAppl(sym__2, term_s_65, term_w_70);
  ATprotect(&(term_w_71));
  term_w_71 = (ATerm) ATmakeAppl(sym__2, term_s_65, term_n_68);
  ATprotect(&(term_x_71));
  term_x_71 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_72));
  term_a_72 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_72));
  term_d_72 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_e_72));
  term_e_72 = (ATerm) ATmakeAppl(sym__2, term_s_65, term_d_72);
  ATprotect(&(term_h_72));
  term_h_72 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_i_72));
  term_i_72 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_j_72));
  term_j_72 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_72));
  term_p_72 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_72));
  term_q_72 = (ATerm) ATmakeAppl(sym__2, term_t_69, term_u_69);
  ATprotect(&(term_x_72));
  term_x_72 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_y_72));
  term_y_72 = (ATerm) ATmakeAppl(sym__2, term_x_72, term_e_68);
  ATprotect(&(term_z_72));
  term_z_72 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_a_73));
  term_a_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_b_73));
  term_b_73 = (ATerm) ATmakeAppl(sym__2, term_a_73, term_e_68);
  ATprotect(&(term_c_73));
  term_c_73 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_73));
  term_d_73 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_i_73));
  term_i_73 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_n_73));
  term_n_73 = (ATerm) ATmakeAppl(sym__2, term_d_72, term_e_68);
  ATprotect(&(term_o_73));
  term_o_73 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_73));
  term_p_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_73));
  term_q_73 = (ATerm) ATmakeAppl(sym__3, term_t_69, term_u_69, (ATerm) ATempty);
  ATprotect(&(term_c_74));
  term_c_74 = (ATerm) ATmakeAppl(sym__2, term_s_65, term_x_72);
  ATprotect(&(term_f_74));
  term_f_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_g_74));
  term_g_74 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_h_74));
  term_h_74 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_v_74));
  term_v_74 = (ATerm) ATmakeAppl(sym__2, term_c_66, term_e_68);
  ATprotect(&(term_w_74));
  term_w_74 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_74));
  term_x_74 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm u_0 (ATerm t);
static ATerm v_0 (ATerm t);
ATerm AddSDef_0_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm f_1 (ATerm t);
ATerm term_size_0_0 (ATerm t);
ATerm Seq_2_0 (ATerm y_108 (ATerm), ATerm z_108 (ATerm), ATerm t);
static ATerm g_1 (ATerm t);
ATerm body_to_inline_0_0 (ATerm t);
ATerm inlineable_0_0 (ATerm t);
static ATerm j_7 (ATerm f_39, ATerm h_39, ATerm t);
ATerm bottomup_1_0 (ATerm v_128 (ATerm), ATerm t);
static ATerm e_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
ATerm simplify_0_0 (ATerm t);
ATerm SubsArgCall2_0_0 (ATerm t);
ATerm SubsArgCall1_0_0 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
ATerm substitute_arg_0_0 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
ATerm substitute_args_0_0 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
ATerm spaste_1_0 (ATerm n_127 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm o_127 (ATerm), ATerm p_127 (ATerm), ATerm q_127 (ATerm), ATerm t);
ATerm dynrule_sargs_1_0 (ATerm s_127 (ATerm), ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
ATerm Bind7_0_0 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm d_13 (ATerm w_27, ATerm v_27, ATerm t);
ATerm SVar_1_0 (ATerm v_105 (ATerm), ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
ATerm srename_0_0 (ATerm t);
ATerm dynrule_cong_6_0 (ATerm u_127 (ATerm), ATerm v_127 (ATerm), ATerm w_127 (ATerm), ATerm x_127 (ATerm), ATerm y_127 (ATerm), ATerm z_127 (ATerm), ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
ATerm tpaste_1_0 (ATerm j_127 (ATerm), ATerm t);
ATerm tboundin_3_0 (ATerm k_127 (ATerm), ATerm l_127 (ATerm), ATerm m_127 (ATerm), ATerm t);
ATerm dynrule_targs_1_0 (ATerm t_127 (ATerm), ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
ATerm Bind8_0_0 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm g_13 (ATerm s_142 (ATerm), ATerm g_58, ATerm f_58, ATerm t);
static ATerm i_13 (ATerm v_142 (ATerm), ATerm w_142 (ATerm), ATerm k_58, ATerm j_58, ATerm t);
static ATerm j_13 (ATerm n_142 (ATerm), ATerm e_58, ATerm d_58, ATerm t);
static ATerm t_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm l_13 (ATerm u_752, ATerm z_752, ATerm w_77, ATerm t);
ATerm while_not_2_0 (ATerm k_135 (ATerm), ATerm l_135 (ATerm), ATerm t);
ATerm for_3_0 (ATerm n_135 (ATerm), ATerm o_135 (ATerm), ATerm p_135 (ATerm), ATerm t);
static ATerm z_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm o_140 (ATerm d_139, ATerm e_139, ATerm f_139, ATerm t);
static ATerm c_9 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
ATerm free_vars_3_0 (ATerm p_149 (ATerm), ATerm q_149 (ATerm), ATerm r_149 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm p_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm c_10 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
ATerm Var_1_0 (ATerm r_105 (ATerm), ATerm t);
static ATerm n_13 (ATerm x_147 (ATerm), ATerm y_147 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm n_61, ATerm m_61, ATerm l_61, ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm l_10 (ATerm t);
static ATerm m_10 (ATerm t);
static ATerm o_10 (ATerm t);
static ATerm o_13 (ATerm r_147 (ATerm), ATerm s_147 (ATerm (ATerm), ATerm), ATerm f_61, ATerm i_61, ATerm t);
ATerm lookup_0_0 (ATerm t);
ATerm env_alltd_1_0 (ATerm f_148 (ATerm), ATerm t);
ATerm rename_4_0 (ATerm m_147 (ATerm (ATerm), ATerm), ATerm n_147 (ATerm), ATerm o_147 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm p_147 (ATerm (ATerm), ATerm), ATerm t);
static ATerm z_10 (ATerm t);
static ATerm c_11 (ATerm t);
static ATerm d_11 (ATerm t);
static ATerm e_11 (ATerm t);
ATerm strename_0_0 (ATerm t);
static ATerm f_11 (ATerm t);
static ATerm g_11 (ATerm t);
static ATerm h_11 (ATerm t);
static ATerm i_11 (ATerm t);
static ATerm j_11 (ATerm t);
static ATerm k_11 (ATerm t);
ATerm InlineCall_0_0 (ATerm t);
ATerm leq_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm x_145 (ATerm), ATerm y_145 (ATerm), ATerm z_145 (ATerm), ATerm t);
static ATerm m_11 (ATerm t);
static ATerm n_11 (ATerm t);
ATerm occurrences_1_0 (ATerm z_142 (ATerm), ATerm t);
static ATerm t_13 (ATerm n_126 (ATerm), ATerm z_26, ATerm y_26, ATerm t);
static ATerm v_13 (ATerm t_136 (ATerm), ATerm i_37, ATerm g_37, ATerm t);
static ATerm x_13 (ATerm y_38, ATerm z_38, ATerm t);
ATerm end_scope_1_0 (ATerm q_136 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm f_132 (ATerm), ATerm g_132 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm p_136 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm r_136 (ATerm), ATerm s_136 (ATerm), ATerm t);
static ATerm v_11 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm a_12 (ATerm t);
ATerm inline_sdef_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm u_128 (ATerm), ATerm t);
static ATerm e_12 (ATerm t);
static ATerm z_13 (ATerm g_95, ATerm f_95, ATerm t);
ATerm MatchBuildIdemVar_0_0 (ATerm t);
ATerm BuildMatchIdem_0_0 (ATerm t);
ATerm MatchIdem_0_0 (ATerm t);
ATerm BuildPrim_0_0 (ATerm t);
ATerm BuildBuild_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm k_133 (ATerm), ATerm l_133 (ATerm), ATerm m_133 (ATerm), ATerm n_133 (ATerm), ATerm t);
static ATerm i_12 (ATerm t);
static ATerm j_12 (ATerm t);
static ATerm k_12 (ATerm t);
static ATerm l_12 (ATerm t);
static ATerm m_12 (ATerm t);
static ATerm o_12 (ATerm t);
static ATerm p_12 (ATerm t);
static ATerm q_12 (ATerm t);
ATerm BuildMatchFusion_0_0 (ATerm t);
ATerm MisMatch_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm y_129 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm p_140 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm n_160 (ATerm f_160, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm LetHoist_0_0 (ATerm t);
ATerm Idempotency_0_0 (ATerm t);
ATerm AssociateR_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm v_12 (ATerm t);
ATerm ElimFail_0_0 (ATerm t);
ATerm ElimId_0_0 (ATerm t);
ATerm Simplify_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm t_134 (ATerm), ATerm u_134 (ATerm), ATerm t);
ATerm downup_1_0 (ATerm w_128 (ATerm), ATerm t);
static ATerm y_12 (ATerm t);
static ATerm c_13 (ATerm t);
static ATerm e_13 (ATerm t);
ATerm inline_sdefs_0_0 (ATerm t);
static ATerm f_15 (ATerm f_69, ATerm g_69, ATerm t);
static ATerm g_15 (ATerm o_34, ATerm p_34, ATerm t);
static ATerm i_15 (ATerm i_136 (ATerm), ATerm y_261, ATerm u_34, ATerm t);
static ATerm h_15 (ATerm k_34, ATerm l_34, ATerm t);
static ATerm f_13 (ATerm t);
static ATerm h_13 (ATerm t);
ATerm output_1_0 (ATerm b_157 (ATerm), ATerm t);
static ATerm e_169 (ATerm y_168, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm j_15 (ATerm q_34, ATerm t);
static ATerm k_15 (ATerm j_67, ATerm k_67, ATerm t);
static ATerm l_15 (ATerm h_69, ATerm i_69, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm p_170 (ATerm o_169, ATerm t);
static ATerm q_170 (ATerm s_169, ATerm t_169, ATerm u_169, ATerm t);
static ATerm r_170 (ATerm c_170, ATerm d_170, ATerm e_170, ATerm t);
static ATerm m_15 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm c_157 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm k_13 (ATerm t);
static ATerm m_13 (ATerm t);
static ATerm p_13 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm r_13 (ATerm t);
static ATerm u_13 (ATerm t);
static ATerm y_13 (ATerm t);
static ATerm a_14 (ATerm t);
static ATerm b_14 (ATerm t);
static ATerm d_14 (ATerm t);
static ATerm e_14 (ATerm t);
static ATerm g_14 (ATerm t);
static ATerm i_14 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm w_15 (ATerm y_71, ATerm z_71, ATerm t);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t);
static ATerm k_14 (ATerm t);
static ATerm n_14 (ATerm t);
static ATerm o_14 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm u_15 (ATerm r_38, ATerm s_38, ATerm q_38, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm q_14 (ATerm t);
static ATerm s_14 (ATerm t);
static ATerm u_14 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm n_15 (ATerm u_35, ATerm v_35, ATerm t);
ATerm foldr_2_0 (ATerm v_145 (ATerm), ATerm w_145 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm x_14 (ATerm t);
static ATerm y_14 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm h_154 (ATerm), ATerm t);
static ATerm a_15 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm s_15 (ATerm t);
ATerm need_help_1_0 (ATerm s_156 (ATerm), ATerm t);
static ATerm x_15 (ATerm v_43, ATerm w_43, ATerm x_43, ATerm t);
ATerm lookup_table_0_1 (ATerm p_40, ATerm t);
ATerm new_hashtable_0_2 (ATerm g_44, ATerm h_44, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm q_15 (ATerm c_44, ATerm d_44, ATerm t);
static ATerm r_15 (ATerm i_44, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm y_139 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t);
static ATerm a_16 (ATerm t);
static ATerm e_16 (ATerm t);
static ATerm f_16 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm i_140 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm y_15 (ATerm z_43, ATerm a_44, ATerm t);
static ATerm t_15 (ATerm w_40, ATerm x_40, ATerm t);
static ATerm g_16 (ATerm t);
static ATerm h_16 (ATerm t);
static ATerm i_16 (ATerm t);
static ATerm l_16 (ATerm t);
static ATerm m_16 (ATerm t);
static ATerm n_16 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm c_112 (ATerm), ATerm d_112 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm v_158 (ATerm), ATerm t);
static ATerm p_16 (ATerm t);
static ATerm q_16 (ATerm t);
static ATerm r_16 (ATerm t);
static ATerm s_16 (ATerm t);
ATerm parse_options_1_0 (ATerm u_158 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm u_156 (ATerm), ATerm v_156 (ATerm), ATerm w_156 (ATerm), ATerm x_156 (ATerm), ATerm t);
static ATerm u_16 (ATerm t);
static ATerm v_16 (ATerm t);
static ATerm y_16 (ATerm t);
static ATerm z_16 (ATerm t);
static ATerm a_17 (ATerm t);
static ATerm b_17 (ATerm t);
static ATerm d_17 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  t = term_e_17;
  return(t);
}
static ATerm v_0 (ATerm t)
{
  t = term_f_17;
  return(t);
}
ATerm AddSDef_0_0 (ATerm t)
{
  ATerm i_0 = NULL,n_0 = NULL,r_0 = NULL,s_0 = NULL,t_0 = NULL;
  i_0 = t;
  {
    ATerm g_17 = t;
    int h_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDefT_4))
          {
            n_0 = ATgetArgument(t, 0);
            {
              ATerm i_17 = ATgetArgument(t, 1);
            }
            {
              ATerm j_17 = ATgetArgument(t, 2);
            }
            {
              ATerm k_17 = ATgetArgument(t, 3);
            }
          }
        else
          _fail(t);
        LocalPopChoice(h_17);
        {
          ATerm x_0 = NULL,y_0 = NULL,z_0 = NULL,a_1 = NULL;
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, n_0), (ATerm)ATempty, (ATerm) ATempty);
          z_0 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_l_17, i_0);
          a_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, n_0), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_l_17, i_0));
          t = v_13(u_0, z_0, a_1, t);
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, n_0), (ATerm)ATempty, (ATerm) ATempty);
          x_0 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_m_17, i_0);
          y_0 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, n_0), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_m_17, i_0));
          t = v_13(v_0, x_0, y_0, t);
          t = i_0;
        }
      }
    else
      {
        t = g_17;
        if(match_cons(t, sym_ExtSDefInl_4))
          {
            n_0 = ATgetArgument(t, 0);
            r_0 = ATgetArgument(t, 1);
            s_0 = ATgetArgument(t, 2);
            t_0 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, n_0, r_0, s_0, t_0);
        t = AddSDef_0_0(t);
        t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, n_0, r_0, s_0, t_0);
      }
  }
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = term_o_17;
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm e_1 = NULL,t_1 = NULL;
  if(match_cons(t, sym__2))
    {
      e_1 = ATgetArgument(t, 0);
      t_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_15(e_1, t_1, t);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = term_o_17;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm z_1 = NULL,a_2 = NULL;
  if(match_cons(t, sym__2))
    {
      z_1 = ATgetArgument(t, 0);
      a_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_15(z_1, a_2, t);
  return(t);
}
ATerm term_size_0_0 (ATerm t)
{
  ATerm p_17 = t;
  int q_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_0 = NULL,c_0 = NULL;
      c_0 = t;
      t = SSL_explode_term(c_0);
      if(match_cons(t, sym__2))
        {
          ATerm r_17 = ATgetArgument(t, 0);
          a_0 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = a_0;
      t = foldr_3_0(w_0, b_1, term_size_0_0, t);
      LocalPopChoice(q_17);
    }
  else
    {
      t = p_17;
      {
        static ATerm m_1 (ATerm t);
        static ATerm m_1 (ATerm t)
        {
          ATerm u_1 = NULL,v_1 = NULL;
          v_1 = t;
          t = SSL_explode_term(v_1);
          if(match_cons(t, sym__2))
            {
              ATerm s_17 = ATgetArgument(t, 0);
              u_1 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = u_1;
          t = foldr_3_0(c_1, f_1, m_1, t);
          return(t);
        }
        t = m_1(t);
      }
    }
  return(t);
}
ATerm Seq_2_0 (ATerm y_108 (ATerm), ATerm z_108 (ATerm), ATerm t)
{
  ATerm n_1 = NULL,o_1 = NULL,p_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL,q_0 = NULL;
  s_1 = t;
  if(match_cons(t, sym_Seq_2))
    {
      o_1 = ATgetArgument(t, 0);
      p_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_1);
  n_1 = t;
  t = o_1;
  t = y_108(t);
  q_1 = t;
  t = p_1;
  t = z_108(t);
  r_1 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, q_1, r_1);
  q_0 = t;
  t = SSLsetAnnotations(q_0, n_1);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm u_8 = NULL,v_8 = NULL,w_8 = NULL,n_2 = NULL;
  w_8 = t;
  if(match_cons(t, sym_Match_1))
    {
      v_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_8);
  u_8 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, v_8);
  n_2 = t;
  t = SSLsetAnnotations(n_2, u_8);
  return(t);
}
ATerm body_to_inline_0_0 (ATerm t)
{
  ATerm k_2 = NULL,l_2 = NULL;
  static ATerm b_13 (ATerm t);
  static ATerm b_13 (ATerm t)
  {
    ATerm n_12 = NULL,w_12 = NULL,z_12 = NULL,a_13 = NULL;
    w_12 = t;
    if(match_cons(t, sym_Id_0))
      {
        t = w_12;
      }
    else
      {
        if(match_cons(t, sym_Fail_0))
          {
            t = w_12;
          }
        else
          {
            if(match_cons(t, sym_CallT_3))
              {
                z_12 = ATgetArgument(t, 0);
                a_13 = ATgetArgument(t, 1);
                n_12 = ATgetArgument(t, 2);
                {
                  ATerm f_2 = NULL,j_2 = NULL,m_2 = NULL,o_2 = NULL,i_1 = NULL,d_1 = NULL;
                  t = SSLgetAnnotations(w_12);
                  f_2 = t;
                  t = z_12;
                  if(match_cons(t, sym_SVar_1))
                    {
                      m_2 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(z_12);
                  j_2 = t;
                  t = (ATerm) ATmakeAppl(sym_SVar_1, m_2);
                  d_1 = t;
                  t = SSLsetAnnotations(d_1, j_2);
                  o_2 = t;
                  t = (ATerm) ATmakeAppl(sym_CallT_3, o_2, a_13, n_12);
                  i_1 = t;
                  t = SSLsetAnnotations(i_1, f_2);
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    z_12 = ATgetArgument(t, 0);
                    a_13 = ATgetArgument(t, 1);
                    n_12 = ATgetArgument(t, 2);
                    {
                      ATerm d_4 = NULL,l_4 = NULL,m_4 = NULL,n_4 = NULL,k_1 = NULL,j_1 = NULL;
                      t = SSLgetAnnotations(w_12);
                      d_4 = t;
                      t = z_12;
                      if(match_cons(t, sym_SVar_1))
                        {
                          m_4 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(z_12);
                      l_4 = t;
                      t = (ATerm) ATmakeAppl(sym_SVar_1, m_4);
                      j_1 = t;
                      t = SSLsetAnnotations(j_1, l_4);
                      n_4 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, n_4, a_13, n_12);
                      k_1 = t;
                      t = SSLsetAnnotations(k_1, d_4);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_Build_1))
                      {
                        z_12 = ATgetArgument(t, 0);
                        {
                          ATerm h_5 = NULL,l_1 = NULL;
                          t = SSLgetAnnotations(w_12);
                          h_5 = t;
                          t = (ATerm) ATmakeAppl(sym_Build_1, z_12);
                          l_1 = t;
                          t = SSLsetAnnotations(l_1, h_5);
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Match_1))
                          {
                            z_12 = ATgetArgument(t, 0);
                            {
                              ATerm k_6 = NULL,w_1 = NULL;
                              t = SSLgetAnnotations(w_12);
                              k_6 = t;
                              t = (ATerm) ATmakeAppl(sym_Match_1, z_12);
                              w_1 = t;
                              t = SSLsetAnnotations(w_1, k_6);
                            }
                          }
                        else
                          {
                            if(match_cons(t, sym_Seq_2))
                              {
                                z_12 = ATgetArgument(t, 0);
                                a_13 = ATgetArgument(t, 1);
                                {
                                  ATerm t_17 = t;
                                  int v_17 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm i_7 = NULL,s_7 = NULL,b_8 = NULL,d_8 = NULL,y_1 = NULL,x_1 = NULL;
                                      t = SSLgetAnnotations(w_12);
                                      i_7 = t;
                                      t = z_12;
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          b_8 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = SSLgetAnnotations(z_12);
                                      s_7 = t;
                                      t = (ATerm) ATmakeAppl(sym_Match_1, b_8);
                                      x_1 = t;
                                      t = SSLsetAnnotations(x_1, s_7);
                                      d_8 = t;
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, d_8, a_13);
                                      y_1 = t;
                                      t = SSLsetAnnotations(y_1, i_7);
                                      LocalPopChoice(v_17);
                                    }
                                  else
                                    {
                                      t = t_17;
                                      {
                                        ATerm l_8 = NULL,o_8 = NULL,p_8 = NULL,q_8 = NULL,r_8 = NULL,s_8 = NULL,q_2 = NULL,p_2 = NULL;
                                        t = SSLgetAnnotations(w_12);
                                        l_8 = t;
                                        t = z_12;
                                        if(match_cons(t, sym_Scope_2))
                                          {
                                            p_8 = ATgetArgument(t, 0);
                                            q_8 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = SSLgetAnnotations(z_12);
                                        o_8 = t;
                                        t = q_8;
                                        t = Seq_2_0(g_1, _id, t);
                                        r_8 = t;
                                        t = (ATerm) ATmakeAppl(sym_Scope_2, p_8, r_8);
                                        p_2 = t;
                                        t = SSLsetAnnotations(p_2, o_8);
                                        s_8 = t;
                                        t = (ATerm) ATmakeAppl(sym_Seq_2, s_8, a_13);
                                        q_2 = t;
                                        t = SSLsetAnnotations(q_2, l_8);
                                      }
                                    }
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    z_12 = ATgetArgument(t, 0);
                                    a_13 = ATgetArgument(t, 1);
                                    {
                                      ATerm w_17 = t;
                                      int x_17 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm e_9 = NULL,h_9 = NULL,i_9 = NULL,j_9 = NULL,t_2 = NULL,r_2 = NULL;
                                          t = SSLgetAnnotations(w_12);
                                          e_9 = t;
                                          t = a_13;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              i_9 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = SSLgetAnnotations(a_13);
                                          h_9 = t;
                                          t = (ATerm) ATmakeAppl(sym_Match_1, i_9);
                                          r_2 = t;
                                          t = SSLsetAnnotations(r_2, h_9);
                                          j_9 = t;
                                          t = (ATerm) ATmakeAppl(sym_Scope_2, z_12, j_9);
                                          t_2 = t;
                                          t = SSLsetAnnotations(t_2, e_9);
                                          LocalPopChoice(x_17);
                                        }
                                      else
                                        {
                                          t = w_17;
                                          {
                                            ATerm r_9 = NULL,u_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL,b_10 = NULL,x_2 = NULL,w_2 = NULL,u_2 = NULL;
                                            t = SSLgetAnnotations(w_12);
                                            r_9 = t;
                                            t = a_13;
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                v_9 = ATgetArgument(t, 0);
                                                w_9 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = SSLgetAnnotations(a_13);
                                            u_9 = t;
                                            t = v_9;
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                z_9 = ATgetArgument(t, 0);
                                              }
                                            else
                                              _fail(t);
                                            t = SSLgetAnnotations(v_9);
                                            y_9 = t;
                                            t = (ATerm) ATmakeAppl(sym_Match_1, z_9);
                                            u_2 = t;
                                            t = SSLsetAnnotations(u_2, y_9);
                                            b_10 = t;
                                            t = (ATerm) ATmakeAppl(sym_Seq_2, b_10, w_9);
                                            w_2 = t;
                                            t = SSLsetAnnotations(w_2, u_9);
                                            x_9 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, z_12, x_9);
                                            x_2 = t;
                                            t = SSLsetAnnotations(x_2, r_9);
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Choice_2))
                                      {
                                        z_12 = ATgetArgument(t, 0);
                                        a_13 = ATgetArgument(t, 1);
                                        {
                                          ATerm q_10 = NULL,w_10 = NULL,x_10 = NULL,y_2 = NULL;
                                          t = SSLgetAnnotations(w_12);
                                          q_10 = t;
                                          t = z_12;
                                          t = b_13(t);
                                          w_10 = t;
                                          t = a_13;
                                          t = b_13(t);
                                          x_10 = t;
                                          t = (ATerm) ATmakeAppl(sym_Choice_2, w_10, x_10);
                                          y_2 = t;
                                          t = SSLsetAnnotations(y_2, q_10);
                                        }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_LChoice_2))
                                          {
                                            z_12 = ATgetArgument(t, 0);
                                            a_13 = ATgetArgument(t, 1);
                                            {
                                              ATerm l_11 = NULL,p_11 = NULL,q_11 = NULL,z_2 = NULL;
                                              t = SSLgetAnnotations(w_12);
                                              l_11 = t;
                                              t = z_12;
                                              t = b_13(t);
                                              p_11 = t;
                                              t = a_13;
                                              t = b_13(t);
                                              q_11 = t;
                                              t = (ATerm) ATmakeAppl(sym_LChoice_2, p_11, q_11);
                                              z_2 = t;
                                              t = SSLsetAnnotations(z_2, l_11);
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_GuardedLChoice_3))
                                              {
                                                z_12 = ATgetArgument(t, 0);
                                                a_13 = ATgetArgument(t, 1);
                                                n_12 = ATgetArgument(t, 2);
                                                {
                                                  ATerm z_11 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL,a_3 = NULL;
                                                  t = SSLgetAnnotations(w_12);
                                                  z_11 = t;
                                                  t = z_12;
                                                  t = b_13(t);
                                                  f_12 = t;
                                                  t = a_13;
                                                  t = b_13(t);
                                                  g_12 = t;
                                                  t = n_12;
                                                  t = b_13(t);
                                                  h_12 = t;
                                                  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, f_12, g_12, h_12);
                                                  a_3 = t;
                                                  t = SSLsetAnnotations(a_3, z_11);
                                                }
                                              }
                                            else
                                              {
                                                ATerm r_12 = NULL,b_3 = NULL;
                                                if(match_cons(t, sym_Cong_2))
                                                  {
                                                    z_12 = ATgetArgument(t, 0);
                                                    a_13 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                t = SSLgetAnnotations(w_12);
                                                r_12 = t;
                                                t = (ATerm) ATmakeAppl(sym_Cong_2, z_12, a_13);
                                                b_3 = t;
                                                t = SSLsetAnnotations(b_3, r_12);
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
  t = b_13(t);
  k_2 = t;
  t = term_size_0_0(t);
  l_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_2, term_y_17);
  t = leq_0_0(t);
  t = k_2;
  return(t);
}
ATerm inlineable_0_0 (ATerm t)
{
  ATerm c_15 = NULL,d_15 = NULL,e_15 = NULL,o_15 = NULL,p_15 = NULL;
  c_15 = t;
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      d_15 = ATgetArgument(t, 0);
      e_15 = ATgetArgument(t, 1);
      o_15 = ATgetArgument(t, 2);
      p_15 = ATgetArgument(t, 3);
      {
        ATerm c_16 = NULL,d_16 = NULL,k_16 = NULL,e_4 = NULL;
        t = SSLgetAnnotations(c_15);
        d_16 = t;
        t = d_15;
        {
          ATerm z_17 = t;
          if((PushChoice() == 0))
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main_0_0", 0, ATtrue)))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = z_17;
            }
        }
        c_16 = t;
        t = p_15;
        {
          ATerm a_18 = t;
          if((PushChoice() == 0))
            {
              static ATerm h_1 (ATerm t);
              static ATerm h_1 (ATerm t)
              {
                if(match_cons(t, sym_CallT_3))
                  {
                    ATerm b_18 = ATgetArgument(t, 0);
                    if(match_cons(b_18, sym_SVar_1))
                      {
                        if((c_16 != ATgetArgument(b_18, 0)))
                          {
                            _fail(ATgetArgument(b_18, 0));
                          }
                      }
                    else
                      _fail(t);
                    {
                      ATerm c_18 = ATgetArgument(t, 1);
                    }
                    {
                      ATerm d_18 = ATgetArgument(t, 2);
                    }
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1_0(h_1, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = a_18;
            }
        }
        t = p_15;
        t = body_to_inline_0_0(t);
        k_16 = t;
        t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, c_16, e_15, o_15, k_16);
        e_4 = t;
        t = SSLsetAnnotations(e_4, d_16);
      }
    }
  else
    {
      ATerm w_16 = NULL,x_16 = NULL,c_17 = NULL,g_4 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          d_15 = ATgetArgument(t, 0);
          e_15 = ATgetArgument(t, 1);
          o_15 = ATgetArgument(t, 2);
          p_15 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(c_15);
      x_16 = t;
      t = d_15;
      {
        ATerm e_18 = t;
        if((PushChoice() == 0))
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main_0_0", 0, ATtrue)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = e_18;
          }
      }
      w_16 = t;
      t = p_15;
      {
        ATerm f_18 = t;
        if((PushChoice() == 0))
          {
            static ATerm b_2 (ATerm t);
            static ATerm b_2 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm g_18 = ATgetArgument(t, 0);
                  if(match_cons(g_18, sym_SVar_1))
                    {
                      if((w_16 != ATgetArgument(g_18, 0)))
                        {
                          _fail(ATgetArgument(g_18, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm k_18 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm n_18 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1_0(b_2, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = f_18;
          }
      }
      t = p_15;
      t = body_to_inline_0_0(t);
      c_17 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, w_16, e_15, o_15, c_17);
      g_4 = t;
      t = SSLsetAnnotations(g_4, x_16);
    }
  return(t);
}
static ATerm j_7 (ATerm f_39, ATerm h_39, ATerm t)
{
  ATerm b_16 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_39, h_39);
  t = t_15(f_39, h_39, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_16 = ATgetFirst((ATermList) t);
      {
        ATerm o_18 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = b_16;
  return(t);
}
ATerm bottomup_1_0 (ATerm v_128 (ATerm), ATerm t)
{
  static ATerm c_2 (ATerm t);
  static ATerm c_2 (ATerm t)
  {
    t = bottomup_1_0(v_128, t);
    return(t);
  }
  t = SRTS_all(c_2, t);
  t = v_128(t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_18 = ATgetArgument(t, 0);
      if(((ATgetType(p_18) != AT_LIST) || !(ATisEmpty(p_18))))
        _fail(t);
      {
        ATerm r_18 = ATgetArgument(t, 1);
        if(((ATgetType(r_18) != AT_LIST) || !(ATisEmpty(r_18))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm a_31 = NULL,b_31 = NULL,c_31 = NULL,d_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_18 = ATgetArgument(t, 0);
      if(((ATgetType(s_18) == AT_LIST) && !(ATisEmpty(s_18))))
        {
          a_31 = ATgetFirst((ATermList) s_18);
          b_31 = (ATerm) ATgetNext((ATermList) s_18);
        }
      else
        _fail(t);
      {
        ATerm v_18 = ATgetArgument(t, 1);
        if(((ATgetType(v_18) == AT_LIST) && !(ATisEmpty(v_18))))
          {
            c_31 = ATgetFirst((ATermList) v_18);
            d_31 = (ATerm) ATgetNext((ATermList) v_18);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_31, c_31), (ATerm) ATmakeAppl(sym__2, b_31, d_31));
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm e_31 = NULL,g_31 = NULL;
  if(match_cons(t, sym__2))
    {
      e_31 = ATgetArgument(t, 0);
      g_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_31), e_31);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm h_31 = NULL,k_31 = NULL;
  if(match_cons(t, sym__2))
    {
      h_31 = ATgetArgument(t, 0);
      k_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, h_31), (ATerm) ATmakeAppl(sym_Match_1, k_31));
  return(t);
}
static ATerm s_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_19 = ATgetArgument(t, 0);
      if(((ATgetType(c_19) != AT_LIST) || !(ATisEmpty(c_19))))
        _fail(t);
      {
        ATerm e_19 = ATgetArgument(t, 1);
        if(((ATgetType(e_19) != AT_LIST) || !(ATisEmpty(e_19))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm c_41 = NULL,d_41 = NULL,e_41 = NULL,h_41 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_19 = ATgetArgument(t, 0);
      if(((ATgetType(j_19) == AT_LIST) && !(ATisEmpty(j_19))))
        {
          c_41 = ATgetFirst((ATermList) j_19);
          d_41 = (ATerm) ATgetNext((ATermList) j_19);
        }
      else
        _fail(t);
      {
        ATerm k_19 = ATgetArgument(t, 1);
        if(((ATgetType(k_19) == AT_LIST) && !(ATisEmpty(k_19))))
          {
            e_41 = ATgetFirst((ATermList) k_19);
            h_41 = (ATerm) ATgetNext((ATermList) k_19);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_41, e_41), (ATerm) ATmakeAppl(sym__2, d_41, h_41));
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm i_41 = NULL,j_41 = NULL;
  if(match_cons(t, sym__2))
    {
      i_41 = ATgetArgument(t, 0);
      j_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_41), i_41);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm k_41 = NULL,p_41 = NULL;
  if(match_cons(t, sym__2))
    {
      k_41 = ATgetArgument(t, 0);
      p_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, k_41), (ATerm) ATmakeAppl(sym_Match_1, p_41));
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm l_19 = t;
  int m_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm n_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(m_19);
      {
        ATerm x_57 = NULL,y_57 = NULL;
        x_57 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm o_19 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        y_57 = t;
        t = SSLgetAnnotations(x_57);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm p_19 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) p_19) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm q_19 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(q_19) != AT_LIST) || !(ATisEmpty(q_19))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = y_57;
      }
    }
  else
    {
      t = l_19;
      {
        ATerm r_19 = t;
        int s_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm t_19 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) t_19) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm u_19 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(s_19);
            _fail(t);
          }
        else
          {
            t = r_19;
          }
      }
    }
  return(t);
}
static ATerm f_3 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm simplify_0_0 (ATerm t)
{
  static ATerm d_2 (ATerm t);
  static ATerm d_2 (ATerm t)
  {
    ATerm w_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL,g_22 = NULL,h_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL,l_22 = NULL,m_22 = NULL,n_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL,w_22 = NULL,x_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL;
    b_23 = t;
    if(match_cons(t, sym_Test_1))
      {
        a_23 = ATgetArgument(t, 0);
        t = a_23;
        if(match_cons(t, sym_Id_0))
          {
            ATerm v_19 = t;
            int w_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_y_19;
                t = d_2(t);
                LocalPopChoice(w_19);
              }
            else
              {
                t = v_19;
                {
                  ATerm z_19 = t;
                  int a_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm f_23 = NULL,g_23 = NULL,h_23 = NULL,j_23 = NULL,k_23 = NULL,r_23 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL,e_24 = NULL,f_24 = NULL,g_24 = NULL,h_24 = NULL;
                      t = b_23;
                      t = new_0_0(t);
                      f_23 = t;
                      t = bottomup_1_0(d_2, t);
                      g_24 = t;
                      t = (ATerm) ATempty;
                      t = d_2(t);
                      h_24 = t;
                      t = (ATerm) ATinsert(CheckATermList(h_24), g_24);
                      t = d_2(t);
                      g_23 = t;
                      t = f_23;
                      t = bottomup_1_0(d_2, t);
                      f_24 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, f_24);
                      t = d_2(t);
                      e_24 = t;
                      t = (ATerm) ATmakeAppl(sym_Match_1, e_24);
                      t = d_2(t);
                      j_23 = t;
                      t = a_23;
                      t = bottomup_1_0(d_2, t);
                      r_23 = t;
                      t = f_23;
                      t = bottomup_1_0(d_2, t);
                      d_24 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, d_24);
                      t = d_2(t);
                      c_24 = t;
                      t = (ATerm) ATmakeAppl(sym_Build_1, c_24);
                      t = d_2(t);
                      b_24 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, r_23, b_24);
                      t = d_2(t);
                      k_23 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, j_23, k_23);
                      t = d_2(t);
                      h_23 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, g_23, h_23);
                      t = d_2(t);
                      LocalPopChoice(a_20);
                    }
                  else
                    {
                      t = z_19;
                      t = b_23;
                    }
                }
              }
          }
        else
          {
            if(match_cons(t, sym_Fail_0))
              {
                ATerm d_20 = t;
                int k_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_m_20;
                    t = d_2(t);
                    LocalPopChoice(k_20);
                  }
                else
                  {
                    t = d_20;
                    {
                      ATerm p_20 = t;
                      int q_20 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm n_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL,j_25 = NULL;
                          t = b_23;
                          t = new_0_0(t);
                          n_24 = t;
                          t = bottomup_1_0(d_2, t);
                          b_25 = t;
                          t = (ATerm) ATempty;
                          t = d_2(t);
                          j_25 = t;
                          t = (ATerm) ATinsert(CheckATermList(j_25), b_25);
                          t = d_2(t);
                          o_24 = t;
                          t = n_24;
                          t = bottomup_1_0(d_2, t);
                          a_25 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, a_25);
                          t = d_2(t);
                          z_24 = t;
                          t = (ATerm) ATmakeAppl(sym_Match_1, z_24);
                          t = d_2(t);
                          q_24 = t;
                          t = a_23;
                          t = bottomup_1_0(d_2, t);
                          t_24 = t;
                          t = n_24;
                          t = bottomup_1_0(d_2, t);
                          y_24 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, y_24);
                          t = d_2(t);
                          x_24 = t;
                          t = (ATerm) ATmakeAppl(sym_Build_1, x_24);
                          t = d_2(t);
                          u_24 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, t_24, u_24);
                          t = d_2(t);
                          s_24 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, q_24, s_24);
                          t = d_2(t);
                          p_24 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, o_24, p_24);
                          t = d_2(t);
                          LocalPopChoice(q_20);
                        }
                      else
                        {
                          t = p_20;
                          t = b_23;
                        }
                    }
                  }
              }
            else
              {
                if(match_cons(t, sym_Test_1))
                  {
                    w_22 = ATgetArgument(t, 0);
                    {
                      ATerm r_20 = t;
                      int s_20 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym_Test_1, w_22);
                          t = d_2(t);
                          LocalPopChoice(s_20);
                        }
                      else
                        {
                          t = r_20;
                          {
                            ATerm t_20 = t;
                            int u_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm w_25 = NULL,y_25 = NULL,z_25 = NULL,c_26 = NULL,f_26 = NULL,m_26 = NULL,r_26 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL,j_27 = NULL,k_27 = NULL,m_27 = NULL;
                                t = b_23;
                                t = new_0_0(t);
                                w_25 = t;
                                t = bottomup_1_0(d_2, t);
                                k_27 = t;
                                t = (ATerm) ATempty;
                                t = d_2(t);
                                m_27 = t;
                                t = (ATerm) ATinsert(CheckATermList(m_27), k_27);
                                t = d_2(t);
                                y_25 = t;
                                t = w_25;
                                t = bottomup_1_0(d_2, t);
                                j_27 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, j_27);
                                t = d_2(t);
                                e_27 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, e_27);
                                t = d_2(t);
                                c_26 = t;
                                t = a_23;
                                t = bottomup_1_0(d_2, t);
                                m_26 = t;
                                t = w_25;
                                t = bottomup_1_0(d_2, t);
                                d_27 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, d_27);
                                t = d_2(t);
                                c_27 = t;
                                t = (ATerm) ATmakeAppl(sym_Build_1, c_27);
                                t = d_2(t);
                                r_26 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, m_26, r_26);
                                t = d_2(t);
                                f_26 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, c_26, f_26);
                                t = d_2(t);
                                z_25 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, y_25, z_25);
                                t = d_2(t);
                                LocalPopChoice(u_20);
                              }
                            else
                              {
                                t = t_20;
                                t = b_23;
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    ATerm v_20 = t;
                    int x_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm p_27 = NULL,q_27 = NULL,s_27 = NULL,t_27 = NULL,z_27 = NULL,a_28 = NULL,k_28 = NULL,l_28 = NULL,m_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL,t_28 = NULL;
                        t = b_23;
                        t = new_0_0(t);
                        p_27 = t;
                        t = bottomup_1_0(d_2, t);
                        r_28 = t;
                        t = (ATerm) ATempty;
                        t = d_2(t);
                        t_28 = t;
                        t = (ATerm) ATinsert(CheckATermList(t_28), r_28);
                        t = d_2(t);
                        q_27 = t;
                        t = p_27;
                        t = bottomup_1_0(d_2, t);
                        q_28 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, q_28);
                        t = d_2(t);
                        p_28 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, p_28);
                        t = d_2(t);
                        t_27 = t;
                        t = a_23;
                        t = bottomup_1_0(d_2, t);
                        a_28 = t;
                        t = p_27;
                        t = bottomup_1_0(d_2, t);
                        m_28 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, m_28);
                        t = d_2(t);
                        l_28 = t;
                        t = (ATerm) ATmakeAppl(sym_Build_1, l_28);
                        t = d_2(t);
                        k_28 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, a_28, k_28);
                        t = d_2(t);
                        z_27 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, t_27, z_27);
                        t = d_2(t);
                        s_27 = t;
                        t = (ATerm) ATmakeAppl(sym_Scope_2, q_27, s_27);
                        t = d_2(t);
                        LocalPopChoice(x_20);
                      }
                    else
                      {
                        t = v_20;
                        t = b_23;
                      }
                  }
              }
          }
      }
    else
      {
        if(match_cons(t, sym_Not_1))
          {
            a_23 = ATgetArgument(t, 0);
            t = a_23;
            if(match_cons(t, sym_Id_0))
              {
                ATerm y_20 = t;
                int z_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_m_20;
                    t = d_2(t);
                    LocalPopChoice(z_20);
                  }
                else
                  {
                    t = y_20;
                    t = b_23;
                  }
              }
            else
              {
                if(match_cons(t, sym_Fail_0))
                  {
                    ATerm a_21 = t;
                    int b_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_y_19;
                        t = d_2(t);
                        LocalPopChoice(b_21);
                      }
                    else
                      {
                        t = a_21;
                        t = b_23;
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Not_1))
                      {
                        w_22 = ATgetArgument(t, 0);
                        {
                          ATerm c_21 = t;
                          int d_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_Test_1, w_22);
                              t = d_2(t);
                              LocalPopChoice(d_21);
                            }
                          else
                            {
                              t = c_21;
                              t = b_23;
                            }
                        }
                      }
                    else
                      {
                        t = b_23;
                      }
                  }
              }
          }
        else
          {
            if(match_cons(t, sym_Seq_2))
              {
                a_23 = ATgetArgument(t, 0);
                z_22 = ATgetArgument(t, 1);
                t = z_22;
                if(match_cons(t, sym_Id_0))
                  {
                    t = a_23;
                    if(match_cons(t, sym_Id_0))
                      {
                        t = z_22;
                      }
                    else
                      {
                        if(match_cons(t, sym_Fail_0))
                          {
                            t = a_23;
                          }
                        else
                          {
                            if(match_cons(t, sym_Seq_2))
                              {
                                w_22 = ATgetArgument(t, 0);
                                x_22 = ATgetArgument(t, 1);
                                t = a_23;
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    w_22 = ATgetArgument(t, 0);
                                    x_22 = ATgetArgument(t, 1);
                                    t = a_23;
                                  }
                                else
                                  {
                                    t = a_23;
                                  }
                              }
                          }
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Seq_2))
                      {
                        s_22 = ATgetArgument(t, 0);
                        t_22 = ATgetArgument(t, 1);
                        t = s_22;
                        if(match_cons(t, sym_Match_1))
                          {
                            r_22 = ATgetArgument(t, 0);
                            t = r_22;
                            if(match_cons(t, sym_Op_2))
                              {
                                n_22 = ATgetArgument(t, 0);
                                i_22 = ATgetArgument(t, 1);
                                t = a_23;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = z_22;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm f_21 = t;
                                        int g_21 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_m_20;
                                            t = d_2(t);
                                            LocalPopChoice(g_21);
                                          }
                                        else
                                          {
                                            t = f_21;
                                            t = b_23;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            w_22 = ATgetArgument(t, 0);
                                            x_22 = ATgetArgument(t, 1);
                                            {
                                              ATerm h_21 = t;
                                              int i_21 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm r_30 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, x_22, z_22);
                                                  t = d_2(t);
                                                  r_30 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, r_30);
                                                  t = d_2(t);
                                                  LocalPopChoice(i_21);
                                                }
                                              else
                                                {
                                                  t = h_21;
                                                  t = b_23;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                w_22 = ATgetArgument(t, 0);
                                                t = w_22;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    q_22 = ATgetArgument(t, 0);
                                                    j_22 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm j_21 = t;
                                                      int k_21 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, q_22, n_22);
                                                          {
                                                            ATerm l_21 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm n_17 = NULL;
                                                                if(match_cons(t, sym__2))
                                                                  {
                                                                    n_17 = ATgetArgument(t, 0);
                                                                    if((n_17 != ATgetArgument(t, 1)))
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
                                                                t = l_21;
                                                              }
                                                          }
                                                          t = term_m_20;
                                                          t = bottomup_1_0(d_2, t);
                                                          LocalPopChoice(k_21);
                                                        }
                                                      else
                                                        {
                                                          t = j_21;
                                                          {
                                                            ATerm m_21 = t;
                                                            int n_21 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm z_30 = NULL;
                                                                t = n_22;
                                                                if((q_22 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, j_22, i_22);
                                                                t = genzip_4_0(e_2, g_2, h_2, i_2, t);
                                                                z_30 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, z_30), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, q_22, j_22)), t_22));
                                                                t = bottomup_1_0(d_2, t);
                                                                LocalPopChoice(n_21);
                                                              }
                                                            else
                                                              {
                                                                t = m_21;
                                                                {
                                                                  ATerm o_21 = t;
                                                                  int p_21 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm q_31 = NULL;
                                                                      t = r_22;
                                                                      if((w_22 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, w_22);
                                                                      t = d_2(t);
                                                                      q_31 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, q_31, t_22);
                                                                      t = d_2(t);
                                                                      LocalPopChoice(p_21);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = o_21;
                                                                      t = b_23;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm q_21 = t;
                                                    int r_21 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm a_32 = NULL;
                                                        t = r_22;
                                                        if((w_22 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, w_22);
                                                        t = d_2(t);
                                                        a_32 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, a_32, t_22);
                                                        t = d_2(t);
                                                        LocalPopChoice(r_21);
                                                      }
                                                    else
                                                      {
                                                        t = q_21;
                                                        t = b_23;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    w_22 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm s_21 = t;
                                                      int t_21 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm e_32 = NULL;
                                                          t = r_22;
                                                          if((w_22 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, w_22);
                                                          t = d_2(t);
                                                          e_32 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, e_32, t_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(t_21);
                                                        }
                                                      else
                                                        {
                                                          t = s_21;
                                                          t = b_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        w_22 = ATgetArgument(t, 0);
                                                        x_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm u_21 = t;
                                                          int v_21 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm l_32 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, x_22, z_22);
                                                              t = d_2(t);
                                                              l_32 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, l_32);
                                                              t = d_2(t);
                                                              LocalPopChoice(v_21);
                                                            }
                                                          else
                                                            {
                                                              t = u_21;
                                                              t = b_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = b_23;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = a_23;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = z_22;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm c_22 = t;
                                        int v_22 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_m_20;
                                            t = d_2(t);
                                            LocalPopChoice(v_22);
                                          }
                                        else
                                          {
                                            t = c_22;
                                            t = b_23;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            w_22 = ATgetArgument(t, 0);
                                            x_22 = ATgetArgument(t, 1);
                                            {
                                              ATerm c_23 = t;
                                              int d_23 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm d_33 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, x_22, z_22);
                                                  t = d_2(t);
                                                  d_33 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, d_33);
                                                  t = d_2(t);
                                                  LocalPopChoice(d_23);
                                                }
                                              else
                                                {
                                                  t = c_23;
                                                  t = b_23;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                w_22 = ATgetArgument(t, 0);
                                                {
                                                  ATerm l_23 = t;
                                                  int m_23 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm o_33 = NULL;
                                                      t = r_22;
                                                      if((w_22 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, w_22);
                                                      t = d_2(t);
                                                      o_33 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, o_33, t_22);
                                                      t = d_2(t);
                                                      LocalPopChoice(m_23);
                                                    }
                                                  else
                                                    {
                                                      t = l_23;
                                                      t = b_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    w_22 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm n_23 = t;
                                                      int o_23 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm s_33 = NULL;
                                                          t = r_22;
                                                          if((w_22 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, w_22);
                                                          t = d_2(t);
                                                          s_33 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, s_33, t_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(o_23);
                                                        }
                                                      else
                                                        {
                                                          t = n_23;
                                                          t = b_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        w_22 = ATgetArgument(t, 0);
                                                        x_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm p_23 = t;
                                                          int q_23 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm z_33 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, x_22, z_22);
                                                              t = d_2(t);
                                                              z_33 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, z_33);
                                                              t = d_2(t);
                                                              LocalPopChoice(q_23);
                                                            }
                                                          else
                                                            {
                                                              t = p_23;
                                                              t = b_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = b_23;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Build_1))
                              {
                                r_22 = ATgetArgument(t, 0);
                                t = r_22;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    n_22 = ATgetArgument(t, 0);
                                    t = a_23;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = z_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm s_23 = t;
                                            int t_23 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_m_20;
                                                t = d_2(t);
                                                LocalPopChoice(t_23);
                                              }
                                            else
                                              {
                                                t = s_23;
                                                t = b_23;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                w_22 = ATgetArgument(t, 0);
                                                x_22 = ATgetArgument(t, 1);
                                                {
                                                  ATerm u_23 = t;
                                                  int v_23 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm c_35 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_22, z_22);
                                                      t = d_2(t);
                                                      c_35 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, c_35);
                                                      t = d_2(t);
                                                      LocalPopChoice(v_23);
                                                    }
                                                  else
                                                    {
                                                      t = u_23;
                                                      t = b_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm w_23 = t;
                                                int x_23 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm y_23 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(x_23);
                                                    {
                                                      ATerm a_24 = t;
                                                      int i_24 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm g_35 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, r_22);
                                                          t = d_2(t);
                                                          g_35 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, g_35, t_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(i_24);
                                                        }
                                                      else
                                                        {
                                                          t = a_24;
                                                          t = b_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = w_23;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        w_22 = ATgetArgument(t, 0);
                                                        t = w_22;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            q_22 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm j_24 = t;
                                                              int k_24 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm m_35 = NULL,n_35 = NULL;
                                                                  t = n_22;
                                                                  if((q_22 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, q_22);
                                                                  t = d_2(t);
                                                                  n_35 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, n_35);
                                                                  t = d_2(t);
                                                                  m_35 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, m_35, t_22);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(k_24);
                                                                }
                                                              else
                                                                {
                                                                  t = j_24;
                                                                  t = b_23;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = b_23;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            w_22 = ATgetArgument(t, 0);
                                                            x_22 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm l_24 = t;
                                                              int m_24 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm f_36 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, x_22, z_22);
                                                                  t = d_2(t);
                                                                  f_36 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, f_36);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(m_24);
                                                                }
                                                              else
                                                                {
                                                                  t = l_24;
                                                                  t = b_23;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = b_23;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = a_23;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = z_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm w_24 = t;
                                            int i_25 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_m_20;
                                                t = d_2(t);
                                                LocalPopChoice(i_25);
                                              }
                                            else
                                              {
                                                t = w_24;
                                                t = b_23;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                w_22 = ATgetArgument(t, 0);
                                                x_22 = ATgetArgument(t, 1);
                                                {
                                                  ATerm l_25 = t;
                                                  int o_25 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm l_37 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_22, z_22);
                                                      t = d_2(t);
                                                      l_37 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, l_37);
                                                      t = d_2(t);
                                                      LocalPopChoice(o_25);
                                                    }
                                                  else
                                                    {
                                                      t = l_25;
                                                      t = b_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm p_25 = t;
                                                int q_25 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm r_25 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(q_25);
                                                    {
                                                      ATerm s_25 = t;
                                                      int t_25 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm q_37 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, r_22);
                                                          t = d_2(t);
                                                          q_37 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, q_37, t_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(t_25);
                                                        }
                                                      else
                                                        {
                                                          t = s_25;
                                                          t = b_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = p_25;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        w_22 = ATgetArgument(t, 0);
                                                        x_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm u_25 = t;
                                                          int v_25 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm a_38 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, x_22, z_22);
                                                              t = d_2(t);
                                                              a_38 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, a_38);
                                                              t = d_2(t);
                                                              LocalPopChoice(v_25);
                                                            }
                                                          else
                                                            {
                                                              t = u_25;
                                                              t = b_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = b_23;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_PrimT_3))
                                  {
                                    r_22 = ATgetArgument(t, 0);
                                    k_22 = ATgetArgument(t, 1);
                                    l_22 = ATgetArgument(t, 2);
                                    t = a_23;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = z_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm x_25 = t;
                                            int a_26 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_m_20;
                                                t = d_2(t);
                                                LocalPopChoice(a_26);
                                              }
                                            else
                                              {
                                                t = x_25;
                                                t = b_23;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                w_22 = ATgetArgument(t, 0);
                                                x_22 = ATgetArgument(t, 1);
                                                {
                                                  ATerm b_26 = t;
                                                  int d_26 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm j_38 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_22, z_22);
                                                      t = d_2(t);
                                                      j_38 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, j_38);
                                                      t = d_2(t);
                                                      LocalPopChoice(d_26);
                                                    }
                                                  else
                                                    {
                                                      t = b_26;
                                                      t = b_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm e_26 = t;
                                                int g_26 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm h_26 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(g_26);
                                                    {
                                                      ATerm j_26 = t;
                                                      int k_26 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm p_38 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, r_22, k_22, l_22);
                                                          t = d_2(t);
                                                          p_38 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, p_38, t_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(k_26);
                                                        }
                                                      else
                                                        {
                                                          t = j_26;
                                                          t = b_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = e_26;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        w_22 = ATgetArgument(t, 0);
                                                        x_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm l_26 = t;
                                                          int p_26 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm a_39 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, x_22, z_22);
                                                              t = d_2(t);
                                                              a_39 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, a_39);
                                                              t = d_2(t);
                                                              LocalPopChoice(p_26);
                                                            }
                                                          else
                                                            {
                                                              t = l_26;
                                                              t = b_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = b_23;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = a_23;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = z_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm x_26 = t;
                                            int b_27 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_m_20;
                                                t = d_2(t);
                                                LocalPopChoice(b_27);
                                              }
                                            else
                                              {
                                                t = x_26;
                                                t = b_23;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                w_22 = ATgetArgument(t, 0);
                                                x_22 = ATgetArgument(t, 1);
                                                {
                                                  ATerm h_27 = t;
                                                  int i_27 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm l_39 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_22, z_22);
                                                      t = d_2(t);
                                                      l_39 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, l_39);
                                                      t = d_2(t);
                                                      LocalPopChoice(i_27);
                                                    }
                                                  else
                                                    {
                                                      t = h_27;
                                                      t = b_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Scope_2))
                                                  {
                                                    w_22 = ATgetArgument(t, 0);
                                                    x_22 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm l_27 = t;
                                                      int n_27 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm v_39 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, x_22, z_22);
                                                          t = d_2(t);
                                                          v_39 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, v_39);
                                                          t = d_2(t);
                                                          LocalPopChoice(n_27);
                                                        }
                                                      else
                                                        {
                                                          t = l_27;
                                                          t = b_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = b_23;
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        if(match_cons(t, sym_Match_1))
                          {
                            s_22 = ATgetArgument(t, 0);
                            t = s_22;
                            if(match_cons(t, sym_Op_2))
                              {
                                r_22 = ATgetArgument(t, 0);
                                k_22 = ATgetArgument(t, 1);
                                t = a_23;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = z_22;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm o_27 = t;
                                        int r_27 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_m_20;
                                            t = d_2(t);
                                            LocalPopChoice(r_27);
                                          }
                                        else
                                          {
                                            t = o_27;
                                            t = b_23;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            w_22 = ATgetArgument(t, 0);
                                            x_22 = ATgetArgument(t, 1);
                                            {
                                              ATerm u_27 = t;
                                              int x_27 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm j_40 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, x_22, z_22);
                                                  t = d_2(t);
                                                  j_40 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, j_40);
                                                  t = d_2(t);
                                                  LocalPopChoice(x_27);
                                                }
                                              else
                                                {
                                                  t = u_27;
                                                  t = b_23;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                w_22 = ATgetArgument(t, 0);
                                                t = w_22;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    q_22 = ATgetArgument(t, 0);
                                                    j_22 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm y_27 = t;
                                                      int b_28 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, q_22, r_22);
                                                          {
                                                            ATerm c_28 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm u_17 = NULL;
                                                                if(match_cons(t, sym__2))
                                                                  {
                                                                    u_17 = ATgetArgument(t, 0);
                                                                    if((u_17 != ATgetArgument(t, 1)))
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
                                                                t = c_28;
                                                              }
                                                          }
                                                          t = term_m_20;
                                                          t = bottomup_1_0(d_2, t);
                                                          LocalPopChoice(b_28);
                                                        }
                                                      else
                                                        {
                                                          t = y_27;
                                                          {
                                                            ATerm d_28 = t;
                                                            int f_28 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm b_41 = NULL;
                                                                t = r_22;
                                                                if((q_22 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, j_22, k_22);
                                                                t = genzip_4_0(s_2, v_2, c_3, d_3, t);
                                                                b_41 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, b_41), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, q_22, j_22)));
                                                                t = bottomup_1_0(d_2, t);
                                                                LocalPopChoice(f_28);
                                                              }
                                                            else
                                                              {
                                                                t = d_28;
                                                                {
                                                                  ATerm g_28 = t;
                                                                  int i_28 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = s_22;
                                                                      if((w_22 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, w_22);
                                                                      t = d_2(t);
                                                                      LocalPopChoice(i_28);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = g_28;
                                                                      t = b_23;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm j_28 = t;
                                                    int n_28 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = s_22;
                                                        if((w_22 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, w_22);
                                                        t = d_2(t);
                                                        LocalPopChoice(n_28);
                                                      }
                                                    else
                                                      {
                                                        t = j_28;
                                                        t = b_23;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    w_22 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm o_28 = t;
                                                      int s_28 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = s_22;
                                                          if((w_22 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, w_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(s_28);
                                                        }
                                                      else
                                                        {
                                                          t = o_28;
                                                          t = b_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        w_22 = ATgetArgument(t, 0);
                                                        x_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm u_28 = t;
                                                          int v_28 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm i_42 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, x_22, z_22);
                                                              t = d_2(t);
                                                              i_42 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, i_42);
                                                              t = d_2(t);
                                                              LocalPopChoice(v_28);
                                                            }
                                                          else
                                                            {
                                                              t = u_28;
                                                              t = b_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = b_23;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = a_23;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = z_22;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm w_28 = t;
                                        int x_28 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_m_20;
                                            t = d_2(t);
                                            LocalPopChoice(x_28);
                                          }
                                        else
                                          {
                                            t = w_28;
                                            t = b_23;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            w_22 = ATgetArgument(t, 0);
                                            x_22 = ATgetArgument(t, 1);
                                            {
                                              ATerm y_28 = t;
                                              int z_28 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm f_43 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, x_22, z_22);
                                                  t = d_2(t);
                                                  f_43 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, f_43);
                                                  t = d_2(t);
                                                  LocalPopChoice(z_28);
                                                }
                                              else
                                                {
                                                  t = y_28;
                                                  t = b_23;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                w_22 = ATgetArgument(t, 0);
                                                {
                                                  ATerm a_29 = t;
                                                  int b_29 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = s_22;
                                                      if((w_22 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, w_22);
                                                      t = d_2(t);
                                                      LocalPopChoice(b_29);
                                                    }
                                                  else
                                                    {
                                                      t = a_29;
                                                      t = b_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    w_22 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm d_29 = t;
                                                      int e_29 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = s_22;
                                                          if((w_22 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, w_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(e_29);
                                                        }
                                                      else
                                                        {
                                                          t = d_29;
                                                          t = b_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        w_22 = ATgetArgument(t, 0);
                                                        x_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm f_29 = t;
                                                          int g_29 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm q_43 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, x_22, z_22);
                                                              t = d_2(t);
                                                              q_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, q_43);
                                                              t = d_2(t);
                                                              LocalPopChoice(g_29);
                                                            }
                                                          else
                                                            {
                                                              t = f_29;
                                                              t = b_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = b_23;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Build_1))
                              {
                                s_22 = ATgetArgument(t, 0);
                                t = s_22;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    r_22 = ATgetArgument(t, 0);
                                    t = a_23;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = z_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm h_29 = t;
                                            int i_29 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_m_20;
                                                t = d_2(t);
                                                LocalPopChoice(i_29);
                                              }
                                            else
                                              {
                                                t = h_29;
                                                t = b_23;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                w_22 = ATgetArgument(t, 0);
                                                x_22 = ATgetArgument(t, 1);
                                                {
                                                  ATerm j_29 = t;
                                                  int k_29 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm p_44 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_22, z_22);
                                                      t = d_2(t);
                                                      p_44 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, p_44);
                                                      t = d_2(t);
                                                      LocalPopChoice(k_29);
                                                    }
                                                  else
                                                    {
                                                      t = j_29;
                                                      t = b_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm l_29 = t;
                                                int n_29 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm o_29 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(n_29);
                                                    {
                                                      ATerm p_29 = t;
                                                      int q_29 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, s_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(q_29);
                                                        }
                                                      else
                                                        {
                                                          t = p_29;
                                                          t = b_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = l_29;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        w_22 = ATgetArgument(t, 0);
                                                        t = w_22;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            q_22 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm r_29 = t;
                                                              int t_29 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm a_45 = NULL;
                                                                  t = r_22;
                                                                  if((q_22 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, q_22);
                                                                  t = d_2(t);
                                                                  a_45 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, a_45);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(t_29);
                                                                }
                                                              else
                                                                {
                                                                  t = r_29;
                                                                  t = b_23;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = b_23;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            w_22 = ATgetArgument(t, 0);
                                                            x_22 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm u_29 = t;
                                                              int v_29 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm g_45 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, x_22, z_22);
                                                                  t = d_2(t);
                                                                  g_45 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, g_45);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(v_29);
                                                                }
                                                              else
                                                                {
                                                                  t = u_29;
                                                                  t = b_23;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = b_23;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = a_23;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = z_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm w_29 = t;
                                            int x_29 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_m_20;
                                                t = d_2(t);
                                                LocalPopChoice(x_29);
                                              }
                                            else
                                              {
                                                t = w_29;
                                                t = b_23;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                w_22 = ATgetArgument(t, 0);
                                                x_22 = ATgetArgument(t, 1);
                                                {
                                                  ATerm y_29 = t;
                                                  int z_29 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm e_46 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_22, z_22);
                                                      t = d_2(t);
                                                      e_46 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, e_46);
                                                      t = d_2(t);
                                                      LocalPopChoice(z_29);
                                                    }
                                                  else
                                                    {
                                                      t = y_29;
                                                      t = b_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm a_30 = t;
                                                int b_30 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm c_30 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(b_30);
                                                    {
                                                      ATerm d_30 = t;
                                                      int e_30 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, s_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(e_30);
                                                        }
                                                      else
                                                        {
                                                          t = d_30;
                                                          t = b_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = a_30;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        w_22 = ATgetArgument(t, 0);
                                                        x_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm f_30 = t;
                                                          int g_30 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm q_46 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, x_22, z_22);
                                                              t = d_2(t);
                                                              q_46 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, q_46);
                                                              t = d_2(t);
                                                              LocalPopChoice(g_30);
                                                            }
                                                          else
                                                            {
                                                              t = f_30;
                                                              t = b_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = b_23;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_PrimT_3))
                                  {
                                    s_22 = ATgetArgument(t, 0);
                                    t_22 = ATgetArgument(t, 1);
                                    m_22 = ATgetArgument(t, 2);
                                    t = a_23;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = z_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm h_30 = t;
                                            int i_30 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_m_20;
                                                t = d_2(t);
                                                LocalPopChoice(i_30);
                                              }
                                            else
                                              {
                                                t = h_30;
                                                t = b_23;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                w_22 = ATgetArgument(t, 0);
                                                x_22 = ATgetArgument(t, 1);
                                                {
                                                  ATerm j_30 = t;
                                                  int k_30 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm c_47 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_22, z_22);
                                                      t = d_2(t);
                                                      c_47 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, c_47);
                                                      t = d_2(t);
                                                      LocalPopChoice(k_30);
                                                    }
                                                  else
                                                    {
                                                      t = j_30;
                                                      t = b_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm l_30 = t;
                                                int n_30 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm o_30 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(n_30);
                                                    {
                                                      ATerm p_30 = t;
                                                      int q_30 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, s_22, t_22, m_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(q_30);
                                                        }
                                                      else
                                                        {
                                                          t = p_30;
                                                          t = b_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = l_30;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        w_22 = ATgetArgument(t, 0);
                                                        x_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm s_30 = t;
                                                          int t_30 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm u_47 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, x_22, z_22);
                                                              t = d_2(t);
                                                              u_47 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, u_47);
                                                              t = d_2(t);
                                                              LocalPopChoice(t_30);
                                                            }
                                                          else
                                                            {
                                                              t = s_30;
                                                              t = b_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = b_23;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Let_2))
                                      {
                                        s_22 = ATgetArgument(t, 0);
                                        t_22 = ATgetArgument(t, 1);
                                        t = a_23;
                                        if(match_cons(t, sym_Id_0))
                                          {
                                            t = z_22;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm u_30 = t;
                                                int v_30 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_m_20;
                                                    t = d_2(t);
                                                    LocalPopChoice(v_30);
                                                  }
                                                else
                                                  {
                                                    t = u_30;
                                                    {
                                                      ATerm w_30 = t;
                                                      int x_30 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm t_48 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, a_23, t_22);
                                                          t = d_2(t);
                                                          t_48 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Let_2, s_22, t_48);
                                                          t = d_2(t);
                                                          LocalPopChoice(x_30);
                                                        }
                                                      else
                                                        {
                                                          t = w_30;
                                                          t = b_23;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    w_22 = ATgetArgument(t, 0);
                                                    x_22 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm j_31 = t;
                                                      int l_31 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm i_49 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, x_22, z_22);
                                                          t = d_2(t);
                                                          i_49 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, i_49);
                                                          t = d_2(t);
                                                          LocalPopChoice(l_31);
                                                        }
                                                      else
                                                        {
                                                          t = j_31;
                                                          {
                                                            ATerm m_31 = t;
                                                            int n_31 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm q_49 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, a_23, t_22);
                                                                t = d_2(t);
                                                                q_49 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Let_2, s_22, q_49);
                                                                t = d_2(t);
                                                                LocalPopChoice(n_31);
                                                              }
                                                            else
                                                              {
                                                                t = m_31;
                                                                t = b_23;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        w_22 = ATgetArgument(t, 0);
                                                        x_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm o_31 = t;
                                                          int p_31 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm a_50 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, a_23, t_22);
                                                              t = d_2(t);
                                                              a_50 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Let_2, s_22, a_50);
                                                              t = d_2(t);
                                                              LocalPopChoice(p_31);
                                                            }
                                                          else
                                                            {
                                                              t = o_31;
                                                              {
                                                                ATerm r_31 = t;
                                                                int s_31 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm e_50 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, x_22, z_22);
                                                                    t = d_2(t);
                                                                    e_50 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, e_50);
                                                                    t = d_2(t);
                                                                    LocalPopChoice(s_31);
                                                                  }
                                                                else
                                                                  {
                                                                    t = r_31;
                                                                    t = b_23;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        ATerm t_31 = t;
                                                        int u_31 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm q_50 = NULL;
                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, a_23, t_22);
                                                            t = d_2(t);
                                                            q_50 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Let_2, s_22, q_50);
                                                            t = d_2(t);
                                                            LocalPopChoice(u_31);
                                                          }
                                                        else
                                                          {
                                                            t = t_31;
                                                            t = b_23;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Scope_2))
                                          {
                                            s_22 = ATgetArgument(t, 0);
                                            t_22 = ATgetArgument(t, 1);
                                            t = a_23;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = z_22;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm v_31 = t;
                                                    int w_31 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_m_20;
                                                        t = d_2(t);
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
                                                              ATerm k_51 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, a_23, t_22);
                                                              t = d_2(t);
                                                              k_51 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, s_22, k_51);
                                                              t = d_2(t);
                                                              LocalPopChoice(y_31);
                                                            }
                                                          else
                                                            {
                                                              t = x_31;
                                                              t = b_23;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        w_22 = ATgetArgument(t, 0);
                                                        x_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm z_31 = t;
                                                          int b_32 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm t_51 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, x_22, z_22);
                                                              t = d_2(t);
                                                              t_51 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, t_51);
                                                              t = d_2(t);
                                                              LocalPopChoice(b_32);
                                                            }
                                                          else
                                                            {
                                                              t = z_31;
                                                              {
                                                                ATerm c_32 = t;
                                                                int d_32 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm a_52 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, a_23, t_22);
                                                                    t = d_2(t);
                                                                    a_52 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, s_22, a_52);
                                                                    t = d_2(t);
                                                                    LocalPopChoice(d_32);
                                                                  }
                                                                else
                                                                  {
                                                                    t = c_32;
                                                                    t = b_23;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            w_22 = ATgetArgument(t, 0);
                                                            x_22 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm f_32 = t;
                                                              int g_32 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm i_52 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, a_23, t_22);
                                                                  t = d_2(t);
                                                                  i_52 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, s_22, i_52);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(g_32);
                                                                }
                                                              else
                                                                {
                                                                  t = f_32;
                                                                  {
                                                                    ATerm i_32 = t;
                                                                    int j_32 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm q_52 = NULL;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, x_22, z_22);
                                                                        t = d_2(t);
                                                                        q_52 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, q_52);
                                                                        t = d_2(t);
                                                                        LocalPopChoice(j_32);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = i_32;
                                                                        t = b_23;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm k_32 = t;
                                                            int m_32 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm x_52 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, a_23, t_22);
                                                                t = d_2(t);
                                                                x_52 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, s_22, x_52);
                                                                t = d_2(t);
                                                                LocalPopChoice(m_32);
                                                              }
                                                            else
                                                              {
                                                                t = k_32;
                                                                t = b_23;
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                        else
                                          {
                                            t = a_23;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = z_22;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm n_32 = t;
                                                    int o_32 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_m_20;
                                                        t = d_2(t);
                                                        LocalPopChoice(o_32);
                                                      }
                                                    else
                                                      {
                                                        t = n_32;
                                                        t = b_23;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        w_22 = ATgetArgument(t, 0);
                                                        x_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm p_32 = t;
                                                          int q_32 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm n_53 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, x_22, z_22);
                                                              t = d_2(t);
                                                              n_53 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, n_53);
                                                              t = d_2(t);
                                                              LocalPopChoice(q_32);
                                                            }
                                                          else
                                                            {
                                                              t = p_32;
                                                              t = b_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            w_22 = ATgetArgument(t, 0);
                                                            x_22 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm r_32 = t;
                                                              int t_32 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm u_53 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, x_22, z_22);
                                                                  t = d_2(t);
                                                                  u_53 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, u_53);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(t_32);
                                                                }
                                                              else
                                                                {
                                                                  t = r_32;
                                                                  t = b_23;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = b_23;
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
            else
              {
                if(match_cons(t, sym_LChoice_2))
                  {
                    a_23 = ATgetArgument(t, 0);
                    z_22 = ATgetArgument(t, 1);
                    t = z_22;
                    if(match_cons(t, sym_Fail_0))
                      {
                        t = a_23;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm x_32 = t;
                            int y_32 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_y_19;
                                t = d_2(t);
                                LocalPopChoice(y_32);
                              }
                            else
                              {
                                t = x_32;
                                t = a_23;
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = z_22;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    w_22 = ATgetArgument(t, 0);
                                    x_22 = ATgetArgument(t, 1);
                                    t = a_23;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        w_22 = ATgetArgument(t, 0);
                                        t = a_23;
                                      }
                                    else
                                      {
                                        t = a_23;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = a_23;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm z_32 = t;
                            int a_33 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_y_19;
                                t = d_2(t);
                                LocalPopChoice(a_33);
                              }
                            else
                              {
                                t = z_32;
                                {
                                  ATerm b_33 = t;
                                  int c_33 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = z_22;
                                      if((a_23 != t))
                                        {
                                          _fail(t);
                                        }
                                      LocalPopChoice(c_33);
                                    }
                                  else
                                    {
                                      t = b_33;
                                      t = b_23;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = z_22;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    w_22 = ATgetArgument(t, 0);
                                    x_22 = ATgetArgument(t, 1);
                                    {
                                      ATerm e_33 = t;
                                      int f_33 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm m_57 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, x_22, z_22);
                                          t = d_2(t);
                                          m_57 = t;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, w_22, m_57);
                                          t = d_2(t);
                                          LocalPopChoice(f_33);
                                        }
                                      else
                                        {
                                          t = e_33;
                                          {
                                            ATerm g_33 = t;
                                            int h_33 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = z_22;
                                                if((a_23 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                LocalPopChoice(h_33);
                                              }
                                            else
                                              {
                                                t = g_33;
                                                t = b_23;
                                              }
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        w_22 = ATgetArgument(t, 0);
                                        {
                                          ATerm i_33 = t;
                                          int j_33 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = z_22;
                                              if((a_23 != t))
                                                {
                                                  _fail(t);
                                                }
                                              LocalPopChoice(j_33);
                                            }
                                          else
                                            {
                                              t = i_33;
                                              {
                                                ATerm k_33 = t;
                                                int l_33 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = w_22;
                                                    t = topdown_1_0(e_3, t);
                                                    t = (ATerm) ATmakeAppl(sym_Build_1, w_22);
                                                    t = bottomup_1_0(d_2, t);
                                                    LocalPopChoice(l_33);
                                                  }
                                                else
                                                  {
                                                    t = k_33;
                                                    t = b_23;
                                                  }
                                              }
                                            }
                                        }
                                      }
                                    else
                                      {
                                        ATerm m_33 = t;
                                        int n_33 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = z_22;
                                            if((a_23 != t))
                                              {
                                                _fail(t);
                                              }
                                            LocalPopChoice(n_33);
                                          }
                                        else
                                          {
                                            t = m_33;
                                            t = b_23;
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Scope_2))
                      {
                        a_23 = ATgetArgument(t, 0);
                        z_22 = ATgetArgument(t, 1);
                        t = z_22;
                        if(match_cons(t, sym_Id_0))
                          {
                            t = a_23;
                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                              {
                                ATerm p_33 = t;
                                int q_33 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_y_19;
                                    t = d_2(t);
                                    LocalPopChoice(q_33);
                                  }
                                else
                                  {
                                    t = p_33;
                                    t = z_22;
                                  }
                              }
                            else
                              {
                                ATerm r_33 = t;
                                int t_33 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_y_19;
                                    t = d_2(t);
                                    LocalPopChoice(t_33);
                                  }
                                else
                                  {
                                    t = r_33;
                                    t = b_23;
                                  }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = a_23;
                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                  {
                                    ATerm u_33 = t;
                                    int v_33 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_m_20;
                                        t = d_2(t);
                                        LocalPopChoice(v_33);
                                      }
                                    else
                                      {
                                        t = u_33;
                                        t = z_22;
                                      }
                                  }
                                else
                                  {
                                    ATerm w_33 = t;
                                    int x_33 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_m_20;
                                        t = d_2(t);
                                        LocalPopChoice(x_33);
                                      }
                                    else
                                      {
                                        t = w_33;
                                        t = b_23;
                                      }
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    s_22 = ATgetArgument(t, 0);
                                    t_22 = ATgetArgument(t, 1);
                                    t = a_23;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = z_22;
                                      }
                                    else
                                      {
                                        ATerm y_33 = t;
                                        int a_34 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm z_60 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, a_23, s_22);
                                            t = conc_0_0(t);
                                            z_60 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, z_60, t_22);
                                            t = bottomup_1_0(d_2, t);
                                            LocalPopChoice(a_34);
                                          }
                                        else
                                          {
                                            t = y_33;
                                            t = b_23;
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = a_23;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = z_22;
                                      }
                                    else
                                      {
                                        t = b_23;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        ATerm c_34 = t;
                        int d_34 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_Rec_2))
                              {
                                ATerm e_34 = ATgetArgument(t, 0);
                                z_22 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(d_34);
                            t = z_22;
                            if(match_cons(t, sym_Id_0))
                              {
                                ATerm f_34 = t;
                                int g_34 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_y_19;
                                    t = d_2(t);
                                    LocalPopChoice(g_34);
                                  }
                                else
                                  {
                                    t = f_34;
                                    t = b_23;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Fail_0))
                                  {
                                    ATerm h_34 = t;
                                    int i_34 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_m_20;
                                        t = d_2(t);
                                        LocalPopChoice(i_34);
                                      }
                                    else
                                      {
                                        t = h_34;
                                        t = b_23;
                                      }
                                  }
                                else
                                  {
                                    t = b_23;
                                  }
                              }
                          }
                        else
                          {
                            t = c_34;
                            if(match_cons(t, sym_All_1))
                              {
                                a_23 = ATgetArgument(t, 0);
                                t = a_23;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    ATerm r_34 = t;
                                    int t_34 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_y_19;
                                        t = d_2(t);
                                        LocalPopChoice(t_34);
                                      }
                                    else
                                      {
                                        t = r_34;
                                        t = b_23;
                                      }
                                  }
                                else
                                  {
                                    t = b_23;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Where_1))
                                  {
                                    a_23 = ATgetArgument(t, 0);
                                    t = a_23;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        ATerm v_34 = t;
                                        int w_34 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_y_19;
                                            t = d_2(t);
                                            LocalPopChoice(w_34);
                                          }
                                        else
                                          {
                                            t = v_34;
                                            {
                                              ATerm x_34 = t;
                                              int y_34 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm i_62 = NULL,j_62 = NULL,k_62 = NULL,o_62 = NULL,p_62 = NULL,q_62 = NULL,r_62 = NULL,t_62 = NULL,w_62 = NULL,x_62 = NULL,z_62 = NULL,c_63 = NULL,d_63 = NULL;
                                                  t = b_23;
                                                  t = new_0_0(t);
                                                  i_62 = t;
                                                  t = bottomup_1_0(d_2, t);
                                                  c_63 = t;
                                                  t = (ATerm) ATempty;
                                                  t = d_2(t);
                                                  d_63 = t;
                                                  t = (ATerm) ATinsert(CheckATermList(d_63), c_63);
                                                  t = d_2(t);
                                                  j_62 = t;
                                                  t = i_62;
                                                  t = bottomup_1_0(d_2, t);
                                                  z_62 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, z_62);
                                                  t = d_2(t);
                                                  x_62 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, x_62);
                                                  t = d_2(t);
                                                  o_62 = t;
                                                  t = a_23;
                                                  t = bottomup_1_0(d_2, t);
                                                  q_62 = t;
                                                  t = i_62;
                                                  t = bottomup_1_0(d_2, t);
                                                  w_62 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, w_62);
                                                  t = d_2(t);
                                                  t_62 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Build_1, t_62);
                                                  t = d_2(t);
                                                  r_62 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, q_62, r_62);
                                                  t = d_2(t);
                                                  p_62 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, o_62, p_62);
                                                  t = d_2(t);
                                                  k_62 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, j_62, k_62);
                                                  t = d_2(t);
                                                  LocalPopChoice(y_34);
                                                }
                                              else
                                                {
                                                  t = x_34;
                                                  t = b_23;
                                                }
                                            }
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm z_34 = t;
                                            int a_35 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_m_20;
                                                t = d_2(t);
                                                LocalPopChoice(a_35);
                                              }
                                            else
                                              {
                                                t = z_34;
                                                {
                                                  ATerm b_35 = t;
                                                  int d_35 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm h_63 = NULL,i_63 = NULL,j_63 = NULL,k_63 = NULL,l_63 = NULL,m_63 = NULL,n_63 = NULL,o_63 = NULL,p_63 = NULL,q_63 = NULL,r_63 = NULL,s_63 = NULL,t_63 = NULL;
                                                      t = b_23;
                                                      t = new_0_0(t);
                                                      h_63 = t;
                                                      t = bottomup_1_0(d_2, t);
                                                      s_63 = t;
                                                      t = (ATerm) ATempty;
                                                      t = d_2(t);
                                                      t_63 = t;
                                                      t = (ATerm) ATinsert(CheckATermList(t_63), s_63);
                                                      t = d_2(t);
                                                      i_63 = t;
                                                      t = h_63;
                                                      t = bottomup_1_0(d_2, t);
                                                      r_63 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, r_63);
                                                      t = d_2(t);
                                                      q_63 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, q_63);
                                                      t = d_2(t);
                                                      k_63 = t;
                                                      t = a_23;
                                                      t = bottomup_1_0(d_2, t);
                                                      m_63 = t;
                                                      t = h_63;
                                                      t = bottomup_1_0(d_2, t);
                                                      p_63 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, p_63);
                                                      t = d_2(t);
                                                      o_63 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Build_1, o_63);
                                                      t = d_2(t);
                                                      n_63 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_63, n_63);
                                                      t = d_2(t);
                                                      l_63 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, k_63, l_63);
                                                      t = d_2(t);
                                                      j_63 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Scope_2, i_63, j_63);
                                                      t = d_2(t);
                                                      LocalPopChoice(d_35);
                                                    }
                                                  else
                                                    {
                                                      t = b_35;
                                                      t = b_23;
                                                    }
                                                }
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                w_22 = ATgetArgument(t, 0);
                                                x_22 = ATgetArgument(t, 1);
                                                t = x_22;
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    z_21 = ATgetArgument(t, 0);
                                                    b_22 = ATgetArgument(t, 1);
                                                    t = z_21;
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        a_22 = ATgetArgument(t, 0);
                                                        t = w_22;
                                                        if(match_cons(t, sym_Where_1))
                                                          {
                                                            q_22 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm e_35 = t;
                                                              int f_35 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm d_64 = NULL,k_64 = NULL,o_64 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Build_1, a_22);
                                                                  t = d_2(t);
                                                                  o_64 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, o_64, b_22);
                                                                  t = d_2(t);
                                                                  k_64 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, q_22, k_64);
                                                                  t = d_2(t);
                                                                  d_64 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Where_1, d_64);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(f_35);
                                                                }
                                                              else
                                                                {
                                                                  t = e_35;
                                                                  {
                                                                    ATerm h_35 = t;
                                                                    int i_35 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm q_64 = NULL,r_64 = NULL,t_64 = NULL,u_64 = NULL,w_64 = NULL,x_64 = NULL,y_64 = NULL,c_65 = NULL,d_65 = NULL,e_65 = NULL,f_65 = NULL,g_65 = NULL,h_65 = NULL;
                                                                        t = b_23;
                                                                        t = new_0_0(t);
                                                                        q_64 = t;
                                                                        t = bottomup_1_0(d_2, t);
                                                                        g_65 = t;
                                                                        t = (ATerm) ATempty;
                                                                        t = d_2(t);
                                                                        h_65 = t;
                                                                        t = (ATerm) ATinsert(CheckATermList(h_65), g_65);
                                                                        t = d_2(t);
                                                                        r_64 = t;
                                                                        t = q_64;
                                                                        t = bottomup_1_0(d_2, t);
                                                                        f_65 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, f_65);
                                                                        t = d_2(t);
                                                                        e_65 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, e_65);
                                                                        t = d_2(t);
                                                                        u_64 = t;
                                                                        t = a_23;
                                                                        t = bottomup_1_0(d_2, t);
                                                                        x_64 = t;
                                                                        t = q_64;
                                                                        t = bottomup_1_0(d_2, t);
                                                                        d_65 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, d_65);
                                                                        t = d_2(t);
                                                                        c_65 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, c_65);
                                                                        t = d_2(t);
                                                                        y_64 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, x_64, y_64);
                                                                        t = d_2(t);
                                                                        w_64 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, u_64, w_64);
                                                                        t = d_2(t);
                                                                        t_64 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, r_64, t_64);
                                                                        t = d_2(t);
                                                                        LocalPopChoice(i_35);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = h_35;
                                                                        t = b_23;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm j_35 = t;
                                                            int k_35 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm k_65 = NULL,l_65 = NULL,n_65 = NULL,x_65 = NULL,a_66 = NULL,i_66 = NULL,m_66 = NULL,n_66 = NULL,w_66 = NULL,x_66 = NULL,y_66 = NULL,z_66 = NULL,a_67 = NULL;
                                                                t = b_23;
                                                                t = new_0_0(t);
                                                                k_65 = t;
                                                                t = bottomup_1_0(d_2, t);
                                                                z_66 = t;
                                                                t = (ATerm) ATempty;
                                                                t = d_2(t);
                                                                a_67 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(a_67), z_66);
                                                                t = d_2(t);
                                                                l_65 = t;
                                                                t = k_65;
                                                                t = bottomup_1_0(d_2, t);
                                                                y_66 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, y_66);
                                                                t = d_2(t);
                                                                x_66 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, x_66);
                                                                t = d_2(t);
                                                                x_65 = t;
                                                                t = a_23;
                                                                t = bottomup_1_0(d_2, t);
                                                                i_66 = t;
                                                                t = k_65;
                                                                t = bottomup_1_0(d_2, t);
                                                                w_66 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, w_66);
                                                                t = d_2(t);
                                                                n_66 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, n_66);
                                                                t = d_2(t);
                                                                m_66 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, i_66, m_66);
                                                                t = d_2(t);
                                                                a_66 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, x_65, a_66);
                                                                t = d_2(t);
                                                                n_65 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, l_65, n_65);
                                                                t = d_2(t);
                                                                LocalPopChoice(k_35);
                                                              }
                                                            else
                                                              {
                                                                t = j_35;
                                                                t = b_23;
                                                              }
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = w_22;
                                                        {
                                                          ATerm l_35 = t;
                                                          int o_35 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm f_67 = NULL,g_67 = NULL,h_67 = NULL,i_67 = NULL,n_67 = NULL,w_67 = NULL,x_67 = NULL,y_67 = NULL,z_67 = NULL,a_68 = NULL,b_68 = NULL,c_68 = NULL,d_68 = NULL;
                                                              t = b_23;
                                                              t = new_0_0(t);
                                                              f_67 = t;
                                                              t = bottomup_1_0(d_2, t);
                                                              c_68 = t;
                                                              t = (ATerm) ATempty;
                                                              t = d_2(t);
                                                              d_68 = t;
                                                              t = (ATerm) ATinsert(CheckATermList(d_68), c_68);
                                                              t = d_2(t);
                                                              g_67 = t;
                                                              t = f_67;
                                                              t = bottomup_1_0(d_2, t);
                                                              b_68 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, b_68);
                                                              t = d_2(t);
                                                              a_68 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Match_1, a_68);
                                                              t = d_2(t);
                                                              i_67 = t;
                                                              t = a_23;
                                                              t = bottomup_1_0(d_2, t);
                                                              w_67 = t;
                                                              t = f_67;
                                                              t = bottomup_1_0(d_2, t);
                                                              z_67 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, z_67);
                                                              t = d_2(t);
                                                              y_67 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Build_1, y_67);
                                                              t = d_2(t);
                                                              x_67 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, w_67, x_67);
                                                              t = d_2(t);
                                                              n_67 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, i_67, n_67);
                                                              t = d_2(t);
                                                              h_67 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, g_67, h_67);
                                                              t = d_2(t);
                                                              LocalPopChoice(o_35);
                                                            }
                                                          else
                                                            {
                                                              t = l_35;
                                                              t = b_23;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = w_22;
                                                    {
                                                      ATerm p_35 = t;
                                                      int q_35 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm i_68 = NULL,j_68 = NULL,p_68 = NULL,q_68 = NULL,r_68 = NULL,s_68 = NULL,t_68 = NULL,w_68 = NULL,z_68 = NULL,c_69 = NULL,d_69 = NULL,m_69 = NULL,p_69 = NULL;
                                                          t = b_23;
                                                          t = new_0_0(t);
                                                          i_68 = t;
                                                          t = bottomup_1_0(d_2, t);
                                                          m_69 = t;
                                                          t = (ATerm) ATempty;
                                                          t = d_2(t);
                                                          p_69 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(p_69), m_69);
                                                          t = d_2(t);
                                                          j_68 = t;
                                                          t = i_68;
                                                          t = bottomup_1_0(d_2, t);
                                                          d_69 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, d_69);
                                                          t = d_2(t);
                                                          c_69 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, c_69);
                                                          t = d_2(t);
                                                          q_68 = t;
                                                          t = a_23;
                                                          t = bottomup_1_0(d_2, t);
                                                          s_68 = t;
                                                          t = i_68;
                                                          t = bottomup_1_0(d_2, t);
                                                          z_68 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, z_68);
                                                          t = d_2(t);
                                                          w_68 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, w_68);
                                                          t = d_2(t);
                                                          t_68 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, s_68, t_68);
                                                          t = d_2(t);
                                                          r_68 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, q_68, r_68);
                                                          t = d_2(t);
                                                          p_68 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, j_68, p_68);
                                                          t = d_2(t);
                                                          LocalPopChoice(q_35);
                                                        }
                                                      else
                                                        {
                                                          t = p_35;
                                                          t = b_23;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Where_1))
                                                  {
                                                    w_22 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm r_35 = t;
                                                      int s_35 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Where_1, w_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(s_35);
                                                        }
                                                      else
                                                        {
                                                          t = r_35;
                                                          {
                                                            ATerm t_35 = t;
                                                            int x_35 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm x_69 = NULL,y_69 = NULL,z_69 = NULL,a_70 = NULL,c_70 = NULL,d_70 = NULL,e_70 = NULL,f_70 = NULL,k_70 = NULL,p_70 = NULL,t_70 = NULL,u_70 = NULL,x_70 = NULL;
                                                                t = b_23;
                                                                t = new_0_0(t);
                                                                x_69 = t;
                                                                t = bottomup_1_0(d_2, t);
                                                                u_70 = t;
                                                                t = (ATerm) ATempty;
                                                                t = d_2(t);
                                                                x_70 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(x_70), u_70);
                                                                t = d_2(t);
                                                                y_69 = t;
                                                                t = x_69;
                                                                t = bottomup_1_0(d_2, t);
                                                                t_70 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, t_70);
                                                                t = d_2(t);
                                                                p_70 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, p_70);
                                                                t = d_2(t);
                                                                a_70 = t;
                                                                t = a_23;
                                                                t = bottomup_1_0(d_2, t);
                                                                d_70 = t;
                                                                t = x_69;
                                                                t = bottomup_1_0(d_2, t);
                                                                k_70 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, k_70);
                                                                t = d_2(t);
                                                                f_70 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, f_70);
                                                                t = d_2(t);
                                                                e_70 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, d_70, e_70);
                                                                t = d_2(t);
                                                                c_70 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, a_70, c_70);
                                                                t = d_2(t);
                                                                z_69 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, y_69, z_69);
                                                                t = d_2(t);
                                                                LocalPopChoice(x_35);
                                                              }
                                                            else
                                                              {
                                                                t = t_35;
                                                                t = b_23;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm y_35 = t;
                                                    int z_35 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm a_71 = NULL,b_71 = NULL,c_71 = NULL,d_71 = NULL,e_71 = NULL,h_71 = NULL,i_71 = NULL,j_71 = NULL,k_71 = NULL,l_71 = NULL,m_71 = NULL,n_71 = NULL,r_71 = NULL;
                                                        t = b_23;
                                                        t = new_0_0(t);
                                                        a_71 = t;
                                                        t = bottomup_1_0(d_2, t);
                                                        n_71 = t;
                                                        t = (ATerm) ATempty;
                                                        t = d_2(t);
                                                        r_71 = t;
                                                        t = (ATerm) ATinsert(CheckATermList(r_71), n_71);
                                                        t = d_2(t);
                                                        b_71 = t;
                                                        t = a_71;
                                                        t = bottomup_1_0(d_2, t);
                                                        m_71 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, m_71);
                                                        t = d_2(t);
                                                        l_71 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, l_71);
                                                        t = d_2(t);
                                                        d_71 = t;
                                                        t = a_23;
                                                        t = bottomup_1_0(d_2, t);
                                                        h_71 = t;
                                                        t = a_71;
                                                        t = bottomup_1_0(d_2, t);
                                                        k_71 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, k_71);
                                                        t = d_2(t);
                                                        j_71 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, j_71);
                                                        t = d_2(t);
                                                        i_71 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, h_71, i_71);
                                                        t = d_2(t);
                                                        e_71 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, d_71, e_71);
                                                        t = d_2(t);
                                                        c_71 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, b_71, c_71);
                                                        t = d_2(t);
                                                        LocalPopChoice(z_35);
                                                      }
                                                    else
                                                      {
                                                        t = y_35;
                                                        t = b_23;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Match_1))
                                      {
                                        a_23 = ATgetArgument(t, 0);
                                        t = a_23;
                                        if(match_cons(t, sym_Wld_0))
                                          {
                                            ATerm a_36 = t;
                                            int b_36 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_y_19;
                                                t = d_2(t);
                                                LocalPopChoice(b_36);
                                              }
                                            else
                                              {
                                                t = a_36;
                                                t = b_23;
                                              }
                                          }
                                        else
                                          {
                                            t = b_23;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Some_1))
                                          {
                                            a_23 = ATgetArgument(t, 0);
                                            t = a_23;
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm g_36 = t;
                                                int h_36 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_m_20;
                                                    t = d_2(t);
                                                    LocalPopChoice(h_36);
                                                  }
                                                else
                                                  {
                                                    t = g_36;
                                                    t = b_23;
                                                  }
                                              }
                                            else
                                              {
                                                t = b_23;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_One_1))
                                              {
                                                a_23 = ATgetArgument(t, 0);
                                                t = a_23;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm i_36 = t;
                                                    int j_36 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_m_20;
                                                        t = d_2(t);
                                                        LocalPopChoice(j_36);
                                                      }
                                                    else
                                                      {
                                                        t = i_36;
                                                        t = b_23;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = b_23;
                                                  }
                                              }
                                            else
                                              {
                                                ATerm k_36 = t;
                                                int l_36 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Path_2))
                                                      {
                                                        ATerm m_36 = ATgetArgument(t, 0);
                                                        z_22 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(l_36);
                                                    t = z_22;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm n_36 = t;
                                                        int o_36 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = term_m_20;
                                                            t = d_2(t);
                                                            LocalPopChoice(o_36);
                                                          }
                                                        else
                                                          {
                                                            t = n_36;
                                                            t = b_23;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = b_23;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = k_36;
                                                    {
                                                      ATerm p_36 = t;
                                                      int q_36 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              ATerm r_36 = ATgetArgument(t, 0);
                                                              z_22 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(q_36);
                                                          {
                                                            ATerm s_36 = t;
                                                            int u_36 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = z_22;
                                                                t = fetch_1_0(f_3, t);
                                                                t = term_m_20;
                                                                t = bottomup_1_0(d_2, t);
                                                                LocalPopChoice(u_36);
                                                              }
                                                            else
                                                              {
                                                                t = s_36;
                                                                t = b_23;
                                                              }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          t = p_36;
                                                          if(match_cons(t, sym_Choice_2))
                                                            {
                                                              a_23 = ATgetArgument(t, 0);
                                                              z_22 = ATgetArgument(t, 1);
                                                              t = z_22;
                                                              if(match_cons(t, sym_Fail_0))
                                                                {
                                                                  t = a_23;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = z_22;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          w_22 = ATgetArgument(t, 0);
                                                                          x_22 = ATgetArgument(t, 1);
                                                                          t = a_23;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = a_23;
                                                                        }
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  t = a_23;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = z_22;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          w_22 = ATgetArgument(t, 0);
                                                                          x_22 = ATgetArgument(t, 1);
                                                                          {
                                                                            ATerm v_36 = t;
                                                                            int w_36 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                ATerm a_74 = NULL;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, x_22, z_22);
                                                                                t = d_2(t);
                                                                                a_74 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, w_22, a_74);
                                                                                t = d_2(t);
                                                                                LocalPopChoice(w_36);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = v_36;
                                                                                {
                                                                                  ATerm x_36 = t;
                                                                                  int z_36 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = z_22;
                                                                                      if((a_23 != t))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      LocalPopChoice(z_36);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = x_36;
                                                                                      t = b_23;
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          ATerm b_37 = t;
                                                                          int c_37 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = z_22;
                                                                              if((a_23 != t))
                                                                                {
                                                                                  _fail(t);
                                                                                }
                                                                              LocalPopChoice(c_37);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = b_37;
                                                                              t = b_23;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                {
                                                                  a_23 = ATgetArgument(t, 0);
                                                                  z_22 = ATgetArgument(t, 1);
                                                                  w_21 = ATgetArgument(t, 2);
                                                                  t = w_21;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      ATerm d_37 = t;
                                                                      int e_37 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, a_23, z_22);
                                                                          t = d_2(t);
                                                                          LocalPopChoice(e_37);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = d_37;
                                                                          t = b_23;
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      t = b_23;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Lets_2))
                                                                    {
                                                                      a_23 = ATgetArgument(t, 0);
                                                                      z_22 = ATgetArgument(t, 1);
                                                                      {
                                                                        ATerm f_37 = t;
                                                                        int h_37 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Let_2, a_23, z_22);
                                                                            t = d_2(t);
                                                                            LocalPopChoice(h_37);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = f_37;
                                                                            t = b_23;
                                                                          }
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_LChoices_1))
                                                                        {
                                                                          a_23 = ATgetArgument(t, 0);
                                                                          t = a_23;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              w_22 = ATgetFirst((ATermList) t);
                                                                              x_22 = (ATerm) ATgetNext((ATermList) t);
                                                                              {
                                                                                ATerm j_37 = t;
                                                                                int m_37 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm o_74 = NULL;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoices_1, x_22);
                                                                                    t = d_2(t);
                                                                                    o_74 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, w_22, o_74);
                                                                                    t = d_2(t);
                                                                                    LocalPopChoice(m_37);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = j_37;
                                                                                    t = b_23;
                                                                                  }
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  ATerm n_37 = t;
                                                                                  int o_37 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = term_m_20;
                                                                                      t = d_2(t);
                                                                                      LocalPopChoice(o_37);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = n_37;
                                                                                      t = b_23;
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = b_23;
                                                                                }
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Choices_1))
                                                                            {
                                                                              a_23 = ATgetArgument(t, 0);
                                                                              t = a_23;
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  w_22 = ATgetFirst((ATermList) t);
                                                                                  x_22 = (ATerm) ATgetNext((ATermList) t);
                                                                                  {
                                                                                    ATerm p_37 = t;
                                                                                    int r_37 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        ATerm y_74 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choices_1, x_22);
                                                                                        t = d_2(t);
                                                                                        y_74 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choice_2, w_22, y_74);
                                                                                        t = d_2(t);
                                                                                        LocalPopChoice(r_37);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = p_37;
                                                                                        t = b_23;
                                                                                      }
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                    {
                                                                                      ATerm s_37 = t;
                                                                                      int t_37 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = term_m_20;
                                                                                          t = d_2(t);
                                                                                          LocalPopChoice(t_37);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = s_37;
                                                                                          t = b_23;
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = b_23;
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Seqs_1))
                                                                                {
                                                                                  a_23 = ATgetArgument(t, 0);
                                                                                  t = a_23;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      w_22 = ATgetFirst((ATermList) t);
                                                                                      x_22 = (ATerm) ATgetNext((ATermList) t);
                                                                                      {
                                                                                        ATerm v_37 = t;
                                                                                        int x_37 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm l_75 = NULL;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seqs_1, x_22);
                                                                                            t = d_2(t);
                                                                                            l_75 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, l_75);
                                                                                            t = d_2(t);
                                                                                            LocalPopChoice(x_37);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = v_37;
                                                                                            t = b_23;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                        {
                                                                                          ATerm y_37 = t;
                                                                                          int z_37 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              t = term_y_19;
                                                                                              t = d_2(t);
                                                                                              LocalPopChoice(z_37);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = y_37;
                                                                                              t = b_23;
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = b_23;
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_InfixApp_3))
                                                                                    {
                                                                                      a_23 = ATgetArgument(t, 0);
                                                                                      z_22 = ATgetArgument(t, 1);
                                                                                      w_21 = ATgetArgument(t, 2);
                                                                                      {
                                                                                        ATerm b_38 = t;
                                                                                        int c_38 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm u_75 = NULL,v_75 = NULL,w_75 = NULL,i_76 = NULL,j_76 = NULL;
                                                                                            t = term_d_38;
                                                                                            t = bottomup_1_0(d_2, t);
                                                                                            v_75 = t;
                                                                                            t = (ATerm) ATempty;
                                                                                            t = d_2(t);
                                                                                            j_76 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(j_76), w_21);
                                                                                            t = d_2(t);
                                                                                            i_76 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(i_76), a_23);
                                                                                            t = d_2(t);
                                                                                            w_75 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Op_2, v_75, w_75);
                                                                                            t = d_2(t);
                                                                                            u_75 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_App_2, z_22, u_75);
                                                                                            t = d_2(t);
                                                                                            LocalPopChoice(c_38);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = b_38;
                                                                                            t = b_23;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_BAM_3))
                                                                                        {
                                                                                          a_23 = ATgetArgument(t, 0);
                                                                                          z_22 = ATgetArgument(t, 1);
                                                                                          w_21 = ATgetArgument(t, 2);
                                                                                          {
                                                                                            ATerm e_38 = t;
                                                                                            int f_38 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm o_76 = NULL,r_76 = NULL,s_76 = NULL,t_76 = NULL,w_76 = NULL,x_76 = NULL;
                                                                                                t = (ATerm) ATmakeAppl(sym_Build_1, z_22);
                                                                                                t = d_2(t);
                                                                                                r_76 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, w_21);
                                                                                                t = d_2(t);
                                                                                                w_76 = t;
                                                                                                t = (ATerm) ATempty;
                                                                                                t = d_2(t);
                                                                                                x_76 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(x_76), w_76);
                                                                                                t = d_2(t);
                                                                                                t_76 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(t_76), a_23);
                                                                                                t = d_2(t);
                                                                                                s_76 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(s_76), r_76);
                                                                                                t = d_2(t);
                                                                                                o_76 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Seqs_1, o_76);
                                                                                                t = d_2(t);
                                                                                                LocalPopChoice(f_38);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = e_38;
                                                                                                t = b_23;
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_AM_2))
                                                                                            {
                                                                                              a_23 = ATgetArgument(t, 0);
                                                                                              z_22 = ATgetArgument(t, 1);
                                                                                              {
                                                                                                ATerm g_38 = t;
                                                                                                int h_38 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    ATerm f_77 = NULL;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, z_22);
                                                                                                    t = d_2(t);
                                                                                                    f_77 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, a_23, f_77);
                                                                                                    t = d_2(t);
                                                                                                    LocalPopChoice(h_38);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = g_38;
                                                                                                    t = b_23;
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_MA_2))
                                                                                                {
                                                                                                  a_23 = ATgetArgument(t, 0);
                                                                                                  z_22 = ATgetArgument(t, 1);
                                                                                                  {
                                                                                                    ATerm i_38 = t;
                                                                                                    int k_38 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        ATerm n_77 = NULL;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, a_23);
                                                                                                        t = d_2(t);
                                                                                                        n_77 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, n_77, z_22);
                                                                                                        t = d_2(t);
                                                                                                        LocalPopChoice(k_38);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = i_38;
                                                                                                        t = b_23;
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(t, sym_BA_2))
                                                                                                    {
                                                                                                      a_23 = ATgetArgument(t, 0);
                                                                                                      z_22 = ATgetArgument(t, 1);
                                                                                                      {
                                                                                                        ATerm l_38 = t;
                                                                                                        int m_38 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm e_78 = NULL;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Build_1, z_22);
                                                                                                            t = d_2(t);
                                                                                                            e_78 = t;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, e_78, a_23);
                                                                                                            t = d_2(t);
                                                                                                            LocalPopChoice(m_38);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = l_38;
                                                                                                            t = b_23;
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(t, sym_Let_2))
                                                                                                        {
                                                                                                          a_23 = ATgetArgument(t, 0);
                                                                                                          z_22 = ATgetArgument(t, 1);
                                                                                                          t = z_22;
                                                                                                          if(match_cons(t, sym_Let_2))
                                                                                                            {
                                                                                                              s_22 = ATgetArgument(t, 0);
                                                                                                              t_22 = ATgetArgument(t, 1);
                                                                                                              t = a_23;
                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                {
                                                                                                                  t = z_22;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  ATerm n_38 = t;
                                                                                                                  int o_38 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      ATerm q_79 = NULL;
                                                                                                                      t = (ATerm) ATmakeAppl(sym__2, a_23, s_22);
                                                                                                                      t = conc_0_0(t);
                                                                                                                      q_79 = t;
                                                                                                                      t = (ATerm) ATmakeAppl(sym_Let_2, q_79, t_22);
                                                                                                                      t = bottomup_1_0(d_2, t);
                                                                                                                      LocalPopChoice(o_38);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = n_38;
                                                                                                                      t = b_23;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_cons(t, sym_CallT_3))
                                                                                                                {
                                                                                                                  s_22 = ATgetArgument(t, 0);
                                                                                                                  t_22 = ATgetArgument(t, 1);
                                                                                                                  m_22 = ATgetArgument(t, 2);
                                                                                                                  t = m_22;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = t_22;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = s_22;
                                                                                                                          if(match_cons(t, sym_SVar_1))
                                                                                                                            {
                                                                                                                              r_22 = ATgetArgument(t, 0);
                                                                                                                              t = a_23;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = z_22;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                    {
                                                                                                                                      w_22 = ATgetFirst((ATermList) t);
                                                                                                                                      x_22 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                      t = x_22;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                        {
                                                                                                                                          t = w_22;
                                                                                                                                          if(match_cons(t, sym_SDefT_4))
                                                                                                                                            {
                                                                                                                                              q_22 = ATgetArgument(t, 0);
                                                                                                                                              j_22 = ATgetArgument(t, 1);
                                                                                                                                              g_22 = ATgetArgument(t, 2);
                                                                                                                                              h_22 = ATgetArgument(t, 3);
                                                                                                                                              t = g_22;
                                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                {
                                                                                                                                                  t = j_22;
                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                    {
                                                                                                                                                      ATerm t_38 = t;
                                                                                                                                                      int u_38 = stack_ptr;
                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                        {
                                                                                                                                                          t = r_22;
                                                                                                                                                          if((q_22 != t))
                                                                                                                                                            {
                                                                                                                                                              _fail(t);
                                                                                                                                                            }
                                                                                                                                                          t = h_22;
                                                                                                                                                          {
                                                                                                                                                            ATerm v_38 = t;
                                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                                              {
                                                                                                                                                                static ATerm g_3 (ATerm t);
                                                                                                                                                                static ATerm g_3 (ATerm t)
                                                                                                                                                                {
                                                                                                                                                                  if(match_cons(t, sym_CallT_3))
                                                                                                                                                                    {
                                                                                                                                                                      ATerm w_38 = ATgetArgument(t, 0);
                                                                                                                                                                      if(match_cons(w_38, sym_SVar_1))
                                                                                                                                                                        {
                                                                                                                                                                          if((q_22 != ATgetArgument(w_38, 0)))
                                                                                                                                                                            {
                                                                                                                                                                              _fail(ATgetArgument(w_38, 0));
                                                                                                                                                                            }
                                                                                                                                                                        }
                                                                                                                                                                      else
                                                                                                                                                                        _fail(t);
                                                                                                                                                                      {
                                                                                                                                                                        ATerm x_38 = ATgetArgument(t, 1);
                                                                                                                                                                        if(((ATgetType(x_38) != AT_LIST) || !(ATisEmpty(x_38))))
                                                                                                                                                                          _fail(t);
                                                                                                                                                                      }
                                                                                                                                                                      {
                                                                                                                                                                        ATerm b_39 = ATgetArgument(t, 2);
                                                                                                                                                                        if(((ATgetType(b_39) != AT_LIST) || !(ATisEmpty(b_39))))
                                                                                                                                                                          _fail(t);
                                                                                                                                                                      }
                                                                                                                                                                    }
                                                                                                                                                                  else
                                                                                                                                                                    _fail(t);
                                                                                                                                                                  return(t);
                                                                                                                                                                }
                                                                                                                                                                t = oncetd_1_0(g_3, t);
                                                                                                                                                                PopChoice();
                                                                                                                                                                _fail(t);
                                                                                                                                                              }
                                                                                                                                                            else
                                                                                                                                                              {
                                                                                                                                                                t = v_38;
                                                                                                                                                              }
                                                                                                                                                          }
                                                                                                                                                          t = h_22;
                                                                                                                                                          t = bottomup_1_0(d_2, t);
                                                                                                                                                          LocalPopChoice(u_38);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = t_38;
                                                                                                                                                          t = b_23;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = b_23;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = b_23;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = b_23;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = b_23;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = b_23;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = a_23;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = z_22;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = b_23;
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = a_23;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                            {
                                                                                                                              t = z_22;
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = b_23;
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = a_23;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = z_22;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = b_23;
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = a_23;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = z_22;
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = b_23;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_cons(t, sym_As_2))
                                                                                                            {
                                                                                                              a_23 = ATgetArgument(t, 0);
                                                                                                              z_22 = ATgetArgument(t, 1);
                                                                                                              t = a_23;
                                                                                                              if(match_cons(t, sym_Wld_0))
                                                                                                                {
                                                                                                                  t = z_22;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = b_23;
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = b_23;
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
  t = bottomup_1_0(d_2, t);
  return(t);
}
ATerm SubsArgCall2_0_0 (ATerm t)
{
  ATerm f_81 = NULL,k_81 = NULL,l_81 = NULL,n_81 = NULL,h_18 = NULL,i_18 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm c_39 = ATgetArgument(t, 0);
      if(match_cons(c_39, sym_SVar_1))
        {
          l_81 = ATgetArgument(c_39, 0);
        }
      else
        _fail(t);
      f_81 = ATgetArgument(t, 1);
      k_81 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, l_81), (ATerm)ATempty, (ATerm) ATempty);
  h_18 = t;
  t = term_d_39;
  i_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_39, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, l_81), (ATerm)ATempty, (ATerm) ATempty));
  t = j_7(i_18, h_18, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm e_39 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_39) != ATmakeSymbol("o_0", 0, ATtrue)))
        _fail(t);
      n_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, n_81), f_81, k_81);
  return(t);
}
ATerm SubsArgCall1_0_0 (ATerm t)
{
  ATerm o_81 = NULL,p_81 = NULL,l_18 = NULL;
  o_81 = t;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm g_39 = ATgetArgument(t, 0);
      if(match_cons(g_39, sym_SVar_1))
        {
          ATerm k_39 = ATgetArgument(g_39, 0);
        }
      else
        _fail(t);
      {
        ATerm i_39 = ATgetArgument(t, 1);
        if(((ATgetType(i_39) != AT_LIST) || !(ATisEmpty(i_39))))
          _fail(t);
      }
      {
        ATerm j_39 = ATgetArgument(t, 2);
        if(((ATgetType(j_39) != AT_LIST) || !(ATisEmpty(j_39))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_m_39;
  l_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_39, o_81);
  t = j_7(l_18, o_81, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm n_39 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_39) != ATmakeSymbol("l_0", 0, ATtrue)))
        _fail(t);
      p_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_81;
  t = strename_0_0(t);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_d_39;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = term_m_39;
  return(t);
}
ATerm substitute_arg_0_0 (ATerm t)
{
  ATerm k_82 = NULL,p_82 = NULL,x_82 = NULL,b_83 = NULL,d_83 = NULL,h_83 = NULL,i_83 = NULL,l_83 = NULL,m_83 = NULL,q_83 = NULL,w_83 = NULL;
  d_83 = t;
  if(match_cons(t, sym__2))
    {
      h_83 = ATgetArgument(t, 0);
      w_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_83;
  if(match_cons(t, sym_VarDec_2))
    {
      i_83 = ATgetArgument(t, 0);
      l_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_83;
  if(match_cons(t, sym_FunType_2))
    {
      m_83 = ATgetArgument(t, 0);
      {
        ATerm o_39 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = m_83;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm p_39 = ATgetFirst((ATermList) t);
      q_83 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = q_83;
  {
    ATerm q_39 = t;
    int s_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm t_39 = ATgetFirst((ATermList) t);
            ATerm u_39 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(s_39);
        {
          ATerm w_84 = NULL,x_84 = NULL;
          t = w_83;
          if(match_cons(t, sym_CallT_3))
            {
              k_82 = ATgetArgument(t, 0);
              x_82 = ATgetArgument(t, 1);
              b_83 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = k_82;
          if(match_cons(t, sym_SVar_1))
            {
              p_82 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = x_82;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = b_83;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_83), (ATerm)ATempty, (ATerm) ATempty);
          w_84 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_w_39, p_82);
          x_84 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_83), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_w_39, p_82));
          t = v_13(h_3, w_84, x_84, t);
          t = d_83;
        }
      }
    else
      {
        t = q_39;
        {
          ATerm t_85 = NULL,w_85 = NULL;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_83), (ATerm)ATempty, (ATerm) ATempty);
          t_85 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_x_39, w_83);
          w_85 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_83), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_x_39, w_83));
          t = v_13(i_3, t_85, w_85, t);
          t = d_83;
        }
      }
  }
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_m_39;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_d_39;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_39 = ATgetArgument(t, 0);
      if(((ATgetType(y_39) != AT_LIST) || !(ATisEmpty(y_39))))
        _fail(t);
      {
        ATerm z_39 = ATgetArgument(t, 1);
        if(((ATgetType(z_39) != AT_LIST) || !(ATisEmpty(z_39))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm h_86 = NULL,l_86 = NULL,m_86 = NULL,q_86 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_40 = ATgetArgument(t, 0);
      if(((ATgetType(a_40) == AT_LIST) && !(ATisEmpty(a_40))))
        {
          h_86 = ATgetFirst((ATermList) a_40);
          l_86 = (ATerm) ATgetNext((ATermList) a_40);
        }
      else
        _fail(t);
      {
        ATerm b_40 = ATgetArgument(t, 1);
        if(((ATgetType(b_40) == AT_LIST) && !(ATisEmpty(b_40))))
          {
            m_86 = ATgetFirst((ATermList) b_40);
            q_86 = (ATerm) ATgetNext((ATermList) b_40);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_86, m_86), (ATerm) ATmakeAppl(sym__2, l_86, q_86));
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm u_86 = NULL,w_86 = NULL;
  if(match_cons(t, sym__2))
    {
      u_86 = ATgetArgument(t, 0);
      w_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_86), u_86);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm e_40 = t;
  int f_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_40 = t;
      int h_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SubsArgCall1_0_0(t);
          LocalPopChoice(h_40);
        }
      else
        {
          t = g_40;
          t = SubsArgCall2_0_0(t);
        }
      LocalPopChoice(f_40);
    }
  else
    {
      t = e_40;
    }
  return(t);
}
ATerm substitute_args_0_0 (ATerm t)
{
  ATerm a_86 = NULL,c_86 = NULL,f_86 = NULL;
  static ATerm k_3 (ATerm t);
  static ATerm k_3 (ATerm t)
  {
    static ATerm m_3 (ATerm t);
    static ATerm m_3 (ATerm t)
    {
      if(match_cons(t, sym__3))
        {
          if(((a_86 != NULL) && (a_86 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            a_86 = ATgetArgument(t, 0);
          if(((c_86 != NULL) && (c_86 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            c_86 = ATgetArgument(t, 1);
          if(((f_86 != NULL) && (f_86 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            f_86 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, a_86, c_86);
      t = genzip_4_0(n_3, o_3, p_3, substitute_arg_0_0, t);
      t = f_86;
      t = topdown_1_0(q_3, t);
      return(t);
    }
    t = scope_2_0(l_3, m_3, t);
    return(t);
  }
  t = scope_2_0(j_3, k_3, t);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_40 = ATgetArgument(t, 0);
      if(((ATgetType(i_40) != AT_LIST) || !(ATisEmpty(i_40))))
        _fail(t);
      {
        ATerm k_40 = ATgetArgument(t, 1);
        if(((ATgetType(k_40) != AT_LIST) || !(ATisEmpty(k_40))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_40 = ATgetArgument(t, 0);
      if(((ATgetType(l_40) == AT_LIST) && !(ATisEmpty(l_40))))
        {
          w_18 = ATgetFirst((ATermList) l_40);
          x_18 = (ATerm) ATgetNext((ATermList) l_40);
        }
      else
        _fail(t);
      {
        ATerm m_40 = ATgetArgument(t, 1);
        if(((ATgetType(m_40) == AT_LIST) && !(ATisEmpty(m_40))))
          {
            y_18 = ATgetFirst((ATermList) m_40);
            z_18 = (ATerm) ATgetNext((ATermList) m_40);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_18, y_18), (ATerm) ATmakeAppl(sym__2, x_18, z_18));
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm a_19 = NULL,b_19 = NULL;
  if(match_cons(t, sym__2))
    {
      a_19 = ATgetArgument(t, 0);
      b_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_19), a_19);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm d_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL,i_19 = NULL;
  if(match_cons(t, sym__2))
    {
      d_19 = ATgetArgument(t, 0);
      i_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_19;
  {
    ATerm n_40 = t;
    int o_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm q_40 = ATgetArgument(t, 0);
            f_19 = ATgetArgument(t, 1);
            g_19 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(o_40);
        t = (ATerm) ATmakeAppl(sym_SDef_3, i_19, f_19, g_19);
      }
    else
      {
        t = n_40;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm r_40 = ATgetArgument(t, 0);
            f_19 = ATgetArgument(t, 1);
            g_19 = ATgetArgument(t, 2);
            h_19 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, i_19, f_19, g_19, h_19);
      }
  }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm t_40 = ATgetArgument(t, 0);
      if(((ATgetType(t_40) != AT_LIST) || !(ATisEmpty(t_40))))
        _fail(t);
      {
        ATerm u_40 = ATgetArgument(t, 1);
        if(((ATgetType(u_40) != AT_LIST) || !(ATisEmpty(u_40))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_40 = ATgetArgument(t, 0);
      if(((ATgetType(v_40) == AT_LIST) && !(ATisEmpty(v_40))))
        {
          e_20 = ATgetFirst((ATermList) v_40);
          f_20 = (ATerm) ATgetNext((ATermList) v_40);
        }
      else
        _fail(t);
      {
        ATerm y_40 = ATgetArgument(t, 1);
        if(((ATgetType(y_40) == AT_LIST) && !(ATisEmpty(y_40))))
          {
            g_20 = ATgetFirst((ATermList) y_40);
            h_20 = (ATerm) ATgetNext((ATermList) y_40);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_20, g_20), (ATerm) ATmakeAppl(sym__2, f_20, h_20));
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm i_20 = NULL,j_20 = NULL;
  if(match_cons(t, sym__2))
    {
      i_20 = ATgetArgument(t, 0);
      j_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_20), i_20);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm l_20 = NULL,n_20 = NULL,o_20 = NULL;
  if(match_cons(t, sym__2))
    {
      l_20 = ATgetArgument(t, 0);
      o_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_20;
  {
    ATerm a_41 = t;
    int g_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm l_41 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(g_41);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, o_20);
      }
    else
      {
        t = a_41;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm m_41 = ATgetArgument(t, 0);
            n_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, o_20, n_20);
      }
  }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_41 = ATgetArgument(t, 0);
      if(((ATgetType(n_41) != AT_LIST) || !(ATisEmpty(n_41))))
        _fail(t);
      {
        ATerm o_41 = ATgetArgument(t, 1);
        if(((ATgetType(o_41) != AT_LIST) || !(ATisEmpty(o_41))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm d_22 = NULL,e_22 = NULL,f_22 = NULL,o_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_41 = ATgetArgument(t, 0);
      if(((ATgetType(q_41) == AT_LIST) && !(ATisEmpty(q_41))))
        {
          d_22 = ATgetFirst((ATermList) q_41);
          e_22 = (ATerm) ATgetNext((ATermList) q_41);
        }
      else
        _fail(t);
      {
        ATerm r_41 = ATgetArgument(t, 1);
        if(((ATgetType(r_41) == AT_LIST) && !(ATisEmpty(r_41))))
          {
            f_22 = ATgetFirst((ATermList) r_41);
            o_22 = (ATerm) ATgetNext((ATermList) r_41);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_22, f_22), (ATerm) ATmakeAppl(sym__2, e_22, o_22));
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm p_22 = NULL,u_22 = NULL;
  if(match_cons(t, sym__2))
    {
      p_22 = ATgetArgument(t, 0);
      u_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_22), p_22);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm y_22 = NULL,e_23 = NULL,i_23 = NULL;
  if(match_cons(t, sym__2))
    {
      y_22 = ATgetArgument(t, 0);
      i_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_22;
  {
    ATerm s_41 = t;
    int t_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm u_41 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(t_41);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, i_23);
      }
    else
      {
        t = s_41;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm w_41 = ATgetArgument(t, 0);
            e_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, i_23, e_23);
      }
  }
  return(t);
}
static ATerm f_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_41 = ATgetArgument(t, 0);
      if(((ATgetType(x_41) != AT_LIST) || !(ATisEmpty(x_41))))
        _fail(t);
      {
        ATerm y_41 = ATgetArgument(t, 1);
        if(((ATgetType(y_41) != AT_LIST) || !(ATisEmpty(y_41))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_42 = ATgetArgument(t, 0);
      if(((ATgetType(b_42) == AT_LIST) && !(ATisEmpty(b_42))))
        {
          c_25 = ATgetFirst((ATermList) b_42);
          d_25 = (ATerm) ATgetNext((ATermList) b_42);
        }
      else
        _fail(t);
      {
        ATerm c_42 = ATgetArgument(t, 1);
        if(((ATgetType(c_42) == AT_LIST) && !(ATisEmpty(c_42))))
          {
            e_25 = ATgetFirst((ATermList) c_42);
            f_25 = (ATerm) ATgetNext((ATermList) c_42);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_25, e_25), (ATerm) ATmakeAppl(sym__2, d_25, f_25));
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm g_25 = NULL,h_25 = NULL;
  if(match_cons(t, sym__2))
    {
      g_25 = ATgetArgument(t, 0);
      h_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(h_25), g_25);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm k_25 = NULL,m_25 = NULL,n_25 = NULL;
  if(match_cons(t, sym__2))
    {
      k_25 = ATgetArgument(t, 0);
      n_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_25;
  {
    ATerm d_42 = t;
    int g_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm h_42 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(g_42);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, n_25);
      }
    else
      {
        t = d_42;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm j_42 = ATgetArgument(t, 0);
            m_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, n_25, m_25);
      }
  }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_42 = ATgetArgument(t, 0);
      if(((ATgetType(k_42) != AT_LIST) || !(ATisEmpty(k_42))))
        _fail(t);
      {
        ATerm p_42 = ATgetArgument(t, 1);
        if(((ATgetType(p_42) != AT_LIST) || !(ATisEmpty(p_42))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm q_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_42 = ATgetArgument(t, 0);
      if(((ATgetType(r_42) == AT_LIST) && !(ATisEmpty(r_42))))
        {
          q_26 = ATgetFirst((ATermList) r_42);
          s_26 = (ATerm) ATgetNext((ATermList) r_42);
        }
      else
        _fail(t);
      {
        ATerm s_42 = ATgetArgument(t, 1);
        if(((ATgetType(s_42) == AT_LIST) && !(ATisEmpty(s_42))))
          {
            t_26 = ATgetFirst((ATermList) s_42);
            u_26 = (ATerm) ATgetNext((ATermList) s_42);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_26, t_26), (ATerm) ATmakeAppl(sym__2, s_26, u_26));
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm v_26 = NULL,w_26 = NULL;
  if(match_cons(t, sym__2))
    {
      v_26 = ATgetArgument(t, 0);
      w_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_26), v_26);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm a_27 = NULL,f_27 = NULL,g_27 = NULL;
  if(match_cons(t, sym__2))
    {
      a_27 = ATgetArgument(t, 0);
      g_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_27;
  {
    ATerm t_42 = t;
    int w_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm x_42 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(w_42);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, g_27);
      }
    else
      {
        t = t_42;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm z_42 = ATgetArgument(t, 0);
            f_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, g_27, f_27);
      }
  }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_43 = ATgetArgument(t, 0);
      if(((ATgetType(a_43) != AT_LIST) || !(ATisEmpty(a_43))))
        _fail(t);
      {
        ATerm b_43 = ATgetArgument(t, 1);
        if(((ATgetType(b_43) != AT_LIST) || !(ATisEmpty(b_43))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm w_100 = NULL,x_100 = NULL,a_101 = NULL,f_101 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_43 = ATgetArgument(t, 0);
      if(((ATgetType(c_43) == AT_LIST) && !(ATisEmpty(c_43))))
        {
          w_100 = ATgetFirst((ATermList) c_43);
          x_100 = (ATerm) ATgetNext((ATermList) c_43);
        }
      else
        _fail(t);
      {
        ATerm d_43 = ATgetArgument(t, 1);
        if(((ATgetType(d_43) == AT_LIST) && !(ATisEmpty(d_43))))
          {
            a_101 = ATgetFirst((ATermList) d_43);
            f_101 = (ATerm) ATgetNext((ATermList) d_43);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_100, a_101), (ATerm) ATmakeAppl(sym__2, x_100, f_101));
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm g_101 = NULL,h_101 = NULL;
  if(match_cons(t, sym__2))
    {
      g_101 = ATgetArgument(t, 0);
      h_101 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(h_101), g_101);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm p_101 = NULL,t_101 = NULL,v_101 = NULL;
  if(match_cons(t, sym__2))
    {
      p_101 = ATgetArgument(t, 0);
      v_101 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_101;
  {
    ATerm e_43 = t;
    int g_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm h_43 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(g_43);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, v_101);
      }
    else
      {
        t = e_43;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm i_43 = ATgetArgument(t, 0);
            t_101 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, v_101, t_101);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm n_127 (ATerm), ATerm t)
{
  ATerm j_43 = t;
  int k_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_100 = NULL,j_100 = NULL,k_100 = NULL,m_100 = NULL,q_100 = NULL;
      j_100 = t;
      if(match_cons(t, sym_Let_2))
        {
          k_100 = ATgetArgument(t, 0);
          m_100 = ATgetArgument(t, 1);
          {
            ATerm q_18 = NULL,t_18 = NULL,u_18 = NULL,p_4 = NULL;
            t = SSLgetAnnotations(j_100);
            q_18 = t;
            t = k_100;
            t = n_127(t);
            u_18 = t;
            t = (ATerm) ATmakeAppl(sym__2, k_100, u_18);
            t = genzip_4_0(r_3, s_3, t_3, u_3, t);
            t_18 = t;
            t = (ATerm) ATmakeAppl(sym_Let_2, t_18, m_100);
            p_4 = t;
            t = SSLsetAnnotations(p_4, q_18);
          }
        }
      else
        {
          if(match_cons(t, sym_SDef_3))
            {
              k_100 = ATgetArgument(t, 0);
              m_100 = ATgetArgument(t, 1);
              q_100 = ATgetArgument(t, 2);
              {
                ATerm x_19 = NULL,b_20 = NULL,c_20 = NULL,t_4 = NULL;
                t = SSLgetAnnotations(j_100);
                x_19 = t;
                t = m_100;
                t = n_127(t);
                c_20 = t;
                t = (ATerm) ATmakeAppl(sym__2, m_100, c_20);
                t = genzip_4_0(v_3, w_3, x_3, y_3, t);
                b_20 = t;
                t = (ATerm) ATmakeAppl(sym_SDef_3, k_100, b_20, q_100);
                t_4 = t;
                t = SSLsetAnnotations(t_4, x_19);
              }
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  k_100 = ATgetArgument(t, 0);
                  m_100 = ATgetArgument(t, 1);
                  q_100 = ATgetArgument(t, 2);
                  g_100 = ATgetArgument(t, 3);
                  {
                    ATerm e_21 = NULL,x_21 = NULL,y_21 = NULL,v_4 = NULL;
                    t = SSLgetAnnotations(j_100);
                    e_21 = t;
                    t = m_100;
                    t = n_127(t);
                    y_21 = t;
                    t = (ATerm) ATmakeAppl(sym__2, m_100, y_21);
                    t = genzip_4_0(z_3, a_4, b_4, c_4, t);
                    x_21 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, k_100, x_21, q_100, g_100);
                    v_4 = t;
                    t = SSLsetAnnotations(v_4, e_21);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      k_100 = ATgetArgument(t, 0);
                      m_100 = ATgetArgument(t, 1);
                      q_100 = ATgetArgument(t, 2);
                      g_100 = ATgetArgument(t, 3);
                      {
                        ATerm z_23 = NULL,r_24 = NULL,v_24 = NULL,w_4 = NULL;
                        t = SSLgetAnnotations(j_100);
                        z_23 = t;
                        t = m_100;
                        t = n_127(t);
                        v_24 = t;
                        t = (ATerm) ATmakeAppl(sym__2, m_100, v_24);
                        t = genzip_4_0(f_4, h_4, i_4, j_4, t);
                        r_24 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, k_100, r_24, q_100, g_100);
                        w_4 = t;
                        t = SSLsetAnnotations(w_4, z_23);
                      }
                    }
                  else
                    {
                      ATerm i_26 = NULL,n_26 = NULL,o_26 = NULL,y_4 = NULL;
                      if(match_cons(t, sym_RDecT_3))
                        {
                          k_100 = ATgetArgument(t, 0);
                          m_100 = ATgetArgument(t, 1);
                          q_100 = ATgetArgument(t, 2);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(j_100);
                      i_26 = t;
                      t = m_100;
                      t = n_127(t);
                      o_26 = t;
                      t = (ATerm) ATmakeAppl(sym__2, m_100, o_26);
                      t = genzip_4_0(k_4, o_4, q_4, r_4, t);
                      n_26 = t;
                      t = (ATerm) ATmakeAppl(sym_RDecT_3, k_100, n_26, q_100);
                      y_4 = t;
                      t = SSLsetAnnotations(y_4, i_26);
                    }
                }
            }
        }
      LocalPopChoice(k_43);
    }
  else
    {
      t = j_43;
      {
        ATerm l_43 = t;
        int m_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm s_4 (ATerm t);
            static ATerm s_4 (ATerm t)
            {
              ATerm u_100 = NULL,v_100 = NULL;
              v_100 = t;
              t = n_127(t);
              u_100 = t;
              t = (ATerm) ATmakeAppl(sym__2, v_100, u_100);
              t = genzip_4_0(u_4, x_4, a_5, b_5, t);
              return(t);
            }
            t = dynrule_cong_6_0(_id, s_4, _id, _id, _id, _id, t);
            LocalPopChoice(m_43);
          }
        else
          {
            t = l_43;
            {
              ATerm z_102 = NULL,b_103 = NULL,c_103 = NULL,e_28 = NULL,h_28 = NULL,z_4 = NULL;
              z_102 = t;
              if(match_cons(t, sym_Rec_2))
                {
                  b_103 = ATgetArgument(t, 0);
                  c_103 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(z_102);
              e_28 = t;
              t = b_103;
              t = n_127(t);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  h_28 = ATgetFirst((ATermList) t);
                  {
                    ATerm n_43 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Rec_2, h_28, c_103);
              z_4 = t;
              t = SSLsetAnnotations(z_4, e_28);
            }
          }
      }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm o_127 (ATerm), ATerm p_127 (ATerm), ATerm q_127 (ATerm), ATerm t)
{
  ATerm y_109 = NULL,z_109 = NULL,a_110 = NULL,b_110 = NULL,c_110 = NULL;
  a_110 = t;
  if(match_cons(t, sym_Let_2))
    {
      b_110 = ATgetArgument(t, 0);
      c_110 = ATgetArgument(t, 1);
      {
        ATerm c_29 = NULL,m_29 = NULL,s_29 = NULL,i_5 = NULL;
        t = SSLgetAnnotations(a_110);
        c_29 = t;
        t = b_110;
        t = o_127(t);
        m_29 = t;
        t = c_110;
        t = o_127(t);
        s_29 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, m_29, s_29);
        i_5 = t;
        t = SSLsetAnnotations(i_5, c_29);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          b_110 = ATgetArgument(t, 0);
          c_110 = ATgetArgument(t, 1);
          z_109 = ATgetArgument(t, 2);
          {
            ATerm m_30 = NULL,y_30 = NULL,f_31 = NULL,i_31 = NULL,j_5 = NULL;
            t = SSLgetAnnotations(a_110);
            m_30 = t;
            t = b_110;
            t = q_127(t);
            y_30 = t;
            t = c_110;
            t = q_127(t);
            f_31 = t;
            t = z_109;
            t = o_127(t);
            i_31 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, y_30, f_31, i_31);
            j_5 = t;
            t = SSLsetAnnotations(j_5, m_30);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              b_110 = ATgetArgument(t, 0);
              c_110 = ATgetArgument(t, 1);
              z_109 = ATgetArgument(t, 2);
              y_109 = ATgetArgument(t, 3);
              {
                ATerm h_32 = NULL,s_32 = NULL,u_32 = NULL,v_32 = NULL,w_32 = NULL,l_5 = NULL;
                t = SSLgetAnnotations(a_110);
                h_32 = t;
                t = b_110;
                t = q_127(t);
                s_32 = t;
                t = c_110;
                t = q_127(t);
                u_32 = t;
                t = z_109;
                t = q_127(t);
                v_32 = t;
                t = y_109;
                t = o_127(t);
                w_32 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, s_32, u_32, v_32, w_32);
                l_5 = t;
                t = SSLsetAnnotations(l_5, h_32);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  b_110 = ATgetArgument(t, 0);
                  c_110 = ATgetArgument(t, 1);
                  z_109 = ATgetArgument(t, 2);
                  y_109 = ATgetArgument(t, 3);
                  {
                    ATerm b_34 = NULL,j_34 = NULL,m_34 = NULL,n_34 = NULL,s_34 = NULL,m_5 = NULL;
                    t = SSLgetAnnotations(a_110);
                    b_34 = t;
                    t = b_110;
                    t = q_127(t);
                    j_34 = t;
                    t = c_110;
                    t = q_127(t);
                    m_34 = t;
                    t = z_109;
                    t = q_127(t);
                    n_34 = t;
                    t = y_109;
                    t = o_127(t);
                    s_34 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, j_34, m_34, n_34, s_34);
                    m_5 = t;
                    t = SSLsetAnnotations(m_5, b_34);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDecT_3))
                    {
                      b_110 = ATgetArgument(t, 0);
                      c_110 = ATgetArgument(t, 1);
                      z_109 = ATgetArgument(t, 2);
                      {
                        ATerm w_35 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL,n_5 = NULL;
                        t = SSLgetAnnotations(a_110);
                        w_35 = t;
                        t = b_110;
                        t = q_127(t);
                        c_36 = t;
                        t = c_110;
                        t = q_127(t);
                        d_36 = t;
                        t = z_109;
                        t = q_127(t);
                        e_36 = t;
                        t = (ATerm) ATmakeAppl(sym_RDecT_3, c_36, d_36, e_36);
                        n_5 = t;
                        t = SSLsetAnnotations(n_5, w_35);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          b_110 = ATgetArgument(t, 0);
                          c_110 = ATgetArgument(t, 1);
                          {
                            ATerm t_36 = NULL,y_36 = NULL,a_37 = NULL,o_5 = NULL;
                            t = SSLgetAnnotations(a_110);
                            t_36 = t;
                            t = b_110;
                            t = q_127(t);
                            y_36 = t;
                            t = c_110;
                            t = o_127(t);
                            a_37 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, y_36, a_37);
                            o_5 = t;
                            t = SSLsetAnnotations(o_5, t_36);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              b_110 = ATgetArgument(t, 0);
                              c_110 = ATgetArgument(t, 1);
                              {
                                ATerm k_37 = NULL,u_37 = NULL,w_37 = NULL,p_5 = NULL;
                                t = SSLgetAnnotations(a_110);
                                k_37 = t;
                                t = b_110;
                                t = q_127(t);
                                u_37 = t;
                                t = c_110;
                                t = o_127(t);
                                w_37 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, u_37, w_37);
                                p_5 = t;
                                t = SSLsetAnnotations(p_5, k_37);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  b_110 = ATgetArgument(t, 0);
                                  c_110 = ATgetArgument(t, 1);
                                  {
                                    ATerm r_39 = NULL,c_40 = NULL,d_40 = NULL,q_5 = NULL;
                                    t = SSLgetAnnotations(a_110);
                                    r_39 = t;
                                    t = b_110;
                                    t = q_127(t);
                                    c_40 = t;
                                    t = c_110;
                                    t = o_127(t);
                                    d_40 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, c_40, d_40);
                                    q_5 = t;
                                    t = SSLsetAnnotations(q_5, r_39);
                                  }
                                }
                              else
                                {
                                  ATerm s_40 = NULL,z_40 = NULL,f_41 = NULL,r_5 = NULL;
                                  if(match_cons(t, sym_Rec_2))
                                    {
                                      b_110 = ATgetArgument(t, 0);
                                      c_110 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(a_110);
                                  s_40 = t;
                                  t = b_110;
                                  t = q_127(t);
                                  z_40 = t;
                                  t = c_110;
                                  t = o_127(t);
                                  f_41 = t;
                                  t = (ATerm) ATmakeAppl(sym_Rec_2, z_40, f_41);
                                  r_5 = t;
                                  t = SSLsetAnnotations(r_5, s_40);
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
ATerm dynrule_sargs_1_0 (ATerm s_127 (ATerm), ATerm t)
{
  ATerm x_110 = NULL,y_110 = NULL,a_111 = NULL;
  ATerm p_43 = t;
  int r_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          x_110 = ATgetArgument(t, 0);
          {
            ATerm s_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_43);
      t = x_110;
      if(match_cons(t, sym_DynRuleId_1))
        {
          y_110 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_110;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm t_43 = ATgetArgument(t, 0);
          a_111 = ATgetArgument(t, 1);
          {
            ATerm u_43 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = a_111;
    }
  else
    {
      t = p_43;
      {
        ATerm y_43 = t;
        int b_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                x_110 = ATgetArgument(t, 0);
                {
                  ATerm j_44 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(b_44);
            t = x_110;
            if(match_cons(t, sym_DynRuleId_1))
              {
                y_110 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = y_110;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm k_44 = ATgetArgument(t, 0);
                a_111 = ATgetArgument(t, 1);
                {
                  ATerm m_44 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = a_111;
          }
        else
          {
            t = y_43;
            if(match_cons(t, sym_AddDynRule_2))
              {
                x_110 = ATgetArgument(t, 0);
                {
                  ATerm n_44 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = x_110;
            if(match_cons(t, sym_DynRuleId_1))
              {
                y_110 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = y_110;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm q_44 = ATgetArgument(t, 0);
                a_111 = ATgetArgument(t, 1);
                {
                  ATerm s_44 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = a_111;
          }
      }
    }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm r_111 = NULL;
  ATerm y_44 = t;
  int z_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_111 = ATgetArgument(t, 0);
          {
            ATerm b_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_44);
      t = r_111;
    }
  else
    {
      t = y_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_111 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_111;
    }
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm x_111 = NULL;
  ATerm c_45 = t;
  int d_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_111 = ATgetArgument(t, 0);
          {
            ATerm e_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_45);
      t = x_111;
    }
  else
    {
      t = c_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_111 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_111;
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm l_111 = NULL;
  ATerm f_45 = t;
  int l_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm m_45 = ATgetArgument(t, 0);
          l_111 = ATgetArgument(t, 1);
          {
            ATerm n_45 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_45);
      t = l_111;
      t = map_1_0(c_5, t);
    }
  else
    {
      t = f_45;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm o_45 = ATgetArgument(t, 0);
          l_111 = ATgetArgument(t, 1);
          {
            ATerm p_45 = ATgetArgument(t, 2);
          }
          {
            ATerm r_45 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = l_111;
      t = map_1_0(d_5, t);
    }
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm e_112 = NULL;
  ATerm w_45 = t;
  int x_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          e_112 = ATgetArgument(t, 0);
          {
            ATerm y_45 = ATgetArgument(t, 1);
          }
          {
            ATerm z_45 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_45);
      t = e_112;
    }
  else
    {
      t = w_45;
      if(match_cons(t, sym_SDefT_4))
        {
          e_112 = ATgetArgument(t, 0);
          {
            ATerm a_46 = ATgetArgument(t, 1);
          }
          {
            ATerm b_46 = ATgetArgument(t, 2);
          }
          {
            ATerm c_46 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = e_112;
    }
  return(t);
}
static ATerm d_13 (ATerm w_27, ATerm v_27, ATerm t)
{
  t = w_27;
  t = map_1_0(e_5, t);
  return(t);
}
ATerm SVar_1_0 (ATerm v_105 (ATerm), ATerm t)
{
  ATerm k_112 = NULL,l_112 = NULL,m_112 = NULL,n_112 = NULL,g_6 = NULL;
  n_112 = t;
  if(match_cons(t, sym_SVar_1))
    {
      l_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_112);
  k_112 = t;
  t = l_112;
  t = v_105(t);
  m_112 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, m_112);
  g_6 = t;
  t = SSLsetAnnotations(g_6, k_112);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm d_46 = t;
  int f_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_112 = NULL,t_112 = NULL,u_112 = NULL,v_112 = NULL,w_112 = NULL;
      s_112 = t;
      if(match_cons(t, sym_Let_2))
        {
          t_112 = ATgetArgument(t, 0);
          u_112 = ATgetArgument(t, 1);
          t = s_112;
          t = d_13(t_112, u_112, t);
        }
      else
        {
          if(match_cons(t, sym_SDef_3))
            {
              t_112 = ATgetArgument(t, 0);
              u_112 = ATgetArgument(t, 1);
              v_112 = ATgetArgument(t, 2);
              t = u_112;
              t = map_1_0(g_5, t);
            }
          else
            {
              if(match_cons(t, sym_Rec_2))
                {
                  t_112 = ATgetArgument(t, 0);
                  u_112 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(ATempty, t_112);
                }
              else
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      t_112 = ATgetArgument(t, 0);
                      u_112 = ATgetArgument(t, 1);
                      v_112 = ATgetArgument(t, 2);
                      w_112 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = u_112;
                  t = map_1_0(k_5, t);
                }
            }
        }
      LocalPopChoice(f_46);
    }
  else
    {
      t = d_46;
      {
        ATerm g_46 = t;
        int h_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind7_0_0(t);
            LocalPopChoice(h_46);
          }
        else
          {
            t = g_46;
            t = dynrule_sargs_1_0(s_5, t);
          }
      }
    }
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm e_113 = NULL;
  ATerm j_46 = t;
  int k_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_113 = ATgetArgument(t, 0);
          {
            ATerm m_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_46);
      t = e_113;
    }
  else
    {
      t = j_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_113 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_113;
    }
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm p_113 = NULL;
  ATerm n_46 = t;
  int o_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_113 = ATgetArgument(t, 0);
          {
            ATerm p_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_46);
      t = p_113;
    }
  else
    {
      t = n_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_113 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_113;
    }
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = map_1_0(t_5, t);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm u_113 = NULL;
  ATerm r_46 = t;
  int s_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_113 = ATgetArgument(t, 0);
          {
            ATerm t_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_46);
      t = u_113;
    }
  else
    {
      t = r_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_113 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_113;
    }
  return(t);
}
ATerm srename_0_0 (ATerm t)
{
  t = rename_4_0(SVar_1_0, f_5, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm dynrule_cong_6_0 (ATerm u_127 (ATerm), ATerm v_127 (ATerm), ATerm w_127 (ATerm), ATerm x_127 (ATerm), ATerm y_127 (ATerm), ATerm z_127 (ATerm), ATerm t)
{
  ATerm d_117 = NULL,e_117 = NULL,f_117 = NULL;
  d_117 = t;
  if(match_cons(t, sym_UndefineDynRule_2))
    {
      e_117 = ATgetArgument(t, 0);
      f_117 = ATgetArgument(t, 1);
      {
        ATerm v_41 = NULL,z_41 = NULL,a_42 = NULL,e_42 = NULL,f_42 = NULL,l_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL,q_42 = NULL,u_42 = NULL,v_42 = NULL,y_42 = NULL,l_6 = NULL,j_6 = NULL,i_6 = NULL;
        t = SSLgetAnnotations(d_117);
        v_41 = t;
        t = e_117;
        if(match_cons(t, sym_DynRuleId_1))
          {
            e_42 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_117);
        a_42 = t;
        t = e_42;
        if(match_cons(t, sym_RDecT_3))
          {
            m_42 = ATgetArgument(t, 0);
            n_42 = ATgetArgument(t, 1);
            o_42 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_42);
        l_42 = t;
        t = m_42;
        t = u_127(t);
        q_42 = t;
        t = n_42;
        t = v_127(t);
        u_42 = t;
        t = o_42;
        t = w_127(t);
        v_42 = t;
        t = (ATerm) ATmakeAppl(sym_RDecT_3, q_42, u_42, v_42);
        i_6 = t;
        t = SSLsetAnnotations(i_6, l_42);
        y_42 = t;
        t = (ATerm) ATmakeAppl(sym_DynRuleId_1, y_42);
        j_6 = t;
        t = SSLsetAnnotations(j_6, a_42);
        f_42 = t;
        t = f_117;
        t = x_127(t);
        z_41 = t;
        t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, f_42, z_41);
        l_6 = t;
        t = SSLsetAnnotations(l_6, v_41);
      }
    }
  else
    {
      if(match_cons(t, sym_SetDynRule_2))
        {
          e_117 = ATgetArgument(t, 0);
          f_117 = ATgetArgument(t, 1);
          {
            ATerm o_43 = NULL,e_44 = NULL,f_44 = NULL,l_44 = NULL,o_44 = NULL,r_44 = NULL,t_44 = NULL,u_44 = NULL,v_44 = NULL,w_44 = NULL,x_44 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL,k_45 = NULL,q_45 = NULL,s_45 = NULL,t_45 = NULL,u_45 = NULL,v_45 = NULL,q_6 = NULL,p_6 = NULL,n_6 = NULL,m_6 = NULL;
            t = SSLgetAnnotations(d_117);
            o_43 = t;
            t = e_117;
            if(match_cons(t, sym_DynRuleId_1))
              {
                x_44 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(e_117);
            w_44 = t;
            t = x_44;
            if(match_cons(t, sym_RDecT_3))
              {
                j_45 = ATgetArgument(t, 0);
                k_45 = ATgetArgument(t, 1);
                q_45 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(x_44);
            i_45 = t;
            t = j_45;
            t = u_127(t);
            s_45 = t;
            t = k_45;
            t = v_127(t);
            t_45 = t;
            t = q_45;
            t = w_127(t);
            u_45 = t;
            t = (ATerm) ATmakeAppl(sym_RDecT_3, s_45, t_45, u_45);
            m_6 = t;
            t = SSLsetAnnotations(m_6, i_45);
            v_45 = t;
            t = (ATerm) ATmakeAppl(sym_DynRuleId_1, v_45);
            n_6 = t;
            t = SSLsetAnnotations(n_6, w_44);
            h_45 = t;
            t = f_117;
            if(match_cons(t, sym_Rule_3))
              {
                f_44 = ATgetArgument(t, 0);
                l_44 = ATgetArgument(t, 1);
                o_44 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(f_117);
            e_44 = t;
            t = f_44;
            t = x_127(t);
            r_44 = t;
            t = l_44;
            t = y_127(t);
            t_44 = t;
            t = o_44;
            t = z_127(t);
            u_44 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, r_44, t_44, u_44);
            p_6 = t;
            t = SSLsetAnnotations(p_6, e_44);
            v_44 = t;
            t = (ATerm) ATmakeAppl(sym_SetDynRule_2, h_45, v_44);
            q_6 = t;
            t = SSLsetAnnotations(q_6, o_43);
          }
        }
      else
        {
          ATerm i_46 = NULL,l_46 = NULL,u_46 = NULL,v_46 = NULL,b_47 = NULL,d_47 = NULL,e_47 = NULL,g_47 = NULL,i_47 = NULL,k_47 = NULL,m_47 = NULL,n_47 = NULL,o_47 = NULL,p_47 = NULL,y_47 = NULL,z_47 = NULL,f_48 = NULL,i_48 = NULL,j_48 = NULL,k_48 = NULL,v_6 = NULL,u_6 = NULL,t_6 = NULL,r_6 = NULL;
          if(match_cons(t, sym_AddDynRule_2))
            {
              e_117 = ATgetArgument(t, 0);
              f_117 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(d_117);
          i_46 = t;
          t = e_117;
          if(match_cons(t, sym_DynRuleId_1))
            {
              m_47 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(e_117);
          k_47 = t;
          t = m_47;
          if(match_cons(t, sym_RDecT_3))
            {
              p_47 = ATgetArgument(t, 0);
              y_47 = ATgetArgument(t, 1);
              z_47 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(m_47);
          o_47 = t;
          t = p_47;
          t = u_127(t);
          f_48 = t;
          t = y_47;
          t = v_127(t);
          i_48 = t;
          t = z_47;
          t = w_127(t);
          j_48 = t;
          t = (ATerm) ATmakeAppl(sym_RDecT_3, f_48, i_48, j_48);
          r_6 = t;
          t = SSLsetAnnotations(r_6, o_47);
          k_48 = t;
          t = (ATerm) ATmakeAppl(sym_DynRuleId_1, k_48);
          t_6 = t;
          t = SSLsetAnnotations(t_6, k_47);
          n_47 = t;
          t = f_117;
          if(match_cons(t, sym_Rule_3))
            {
              u_46 = ATgetArgument(t, 0);
              v_46 = ATgetArgument(t, 1);
              b_47 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(f_117);
          l_46 = t;
          t = u_46;
          t = x_127(t);
          d_47 = t;
          t = v_46;
          t = y_127(t);
          e_47 = t;
          t = b_47;
          t = z_127(t);
          g_47 = t;
          t = (ATerm) ATmakeAppl(sym_Rule_3, d_47, e_47, g_47);
          u_6 = t;
          t = SSLsetAnnotations(u_6, l_46);
          i_47 = t;
          t = (ATerm) ATmakeAppl(sym_AddDynRule_2, n_47, i_47);
          v_6 = t;
          t = SSLsetAnnotations(v_6, i_46);
        }
    }
  return(t);
}
static ATerm u_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_46 = ATgetArgument(t, 0);
      if(((ATgetType(w_46) != AT_LIST) || !(ATisEmpty(w_46))))
        _fail(t);
      {
        ATerm x_46 = ATgetArgument(t, 1);
        if(((ATgetType(x_46) != AT_LIST) || !(ATisEmpty(x_46))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm r_50 = NULL,s_50 = NULL,t_50 = NULL,u_50 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_46 = ATgetArgument(t, 0);
      if(((ATgetType(y_46) == AT_LIST) && !(ATisEmpty(y_46))))
        {
          r_50 = ATgetFirst((ATermList) y_46);
          s_50 = (ATerm) ATgetNext((ATermList) y_46);
        }
      else
        _fail(t);
      {
        ATerm z_46 = ATgetArgument(t, 1);
        if(((ATgetType(z_46) == AT_LIST) && !(ATisEmpty(z_46))))
          {
            t_50 = ATgetFirst((ATermList) z_46);
            u_50 = (ATerm) ATgetNext((ATermList) z_46);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_50, t_50), (ATerm) ATmakeAppl(sym__2, s_50, u_50));
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm b_51 = NULL,c_51 = NULL;
  if(match_cons(t, sym__2))
    {
      b_51 = ATgetArgument(t, 0);
      c_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_51), b_51);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm i_51 = NULL,m_51 = NULL,n_51 = NULL;
  if(match_cons(t, sym__2))
    {
      i_51 = ATgetArgument(t, 0);
      n_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_51;
  {
    ATerm a_47 = t;
    int f_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm h_47 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(f_47);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, n_51);
      }
    else
      {
        t = a_47;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm j_47 = ATgetArgument(t, 0);
            m_51 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, n_51, m_51);
      }
  }
  return(t);
}
static ATerm y_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_47 = ATgetArgument(t, 0);
      if(((ATgetType(l_47) != AT_LIST) || !(ATisEmpty(l_47))))
        _fail(t);
      {
        ATerm q_47 = ATgetArgument(t, 1);
        if(((ATgetType(q_47) != AT_LIST) || !(ATisEmpty(q_47))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm i_53 = NULL,j_53 = NULL,q_53 = NULL,r_53 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_47 = ATgetArgument(t, 0);
      if(((ATgetType(r_47) == AT_LIST) && !(ATisEmpty(r_47))))
        {
          i_53 = ATgetFirst((ATermList) r_47);
          j_53 = (ATerm) ATgetNext((ATermList) r_47);
        }
      else
        _fail(t);
      {
        ATerm s_47 = ATgetArgument(t, 1);
        if(((ATgetType(s_47) == AT_LIST) && !(ATisEmpty(s_47))))
          {
            q_53 = ATgetFirst((ATermList) s_47);
            r_53 = (ATerm) ATgetNext((ATermList) s_47);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_53, q_53), (ATerm) ATmakeAppl(sym__2, j_53, r_53));
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm w_53 = NULL,x_53 = NULL;
  if(match_cons(t, sym__2))
    {
      w_53 = ATgetArgument(t, 0);
      x_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_53), w_53);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm b_54 = NULL,d_54 = NULL,e_54 = NULL;
  if(match_cons(t, sym__2))
    {
      b_54 = ATgetArgument(t, 0);
      e_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_54;
  {
    ATerm t_47 = t;
    int v_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm w_47 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(v_47);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, e_54);
      }
    else
      {
        t = t_47;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm x_47 = ATgetArgument(t, 0);
            d_54 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, e_54, d_54);
      }
  }
  return(t);
}
static ATerm c_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_48 = ATgetArgument(t, 0);
      if(((ATgetType(a_48) != AT_LIST) || !(ATisEmpty(a_48))))
        _fail(t);
      {
        ATerm b_48 = ATgetArgument(t, 1);
        if(((ATgetType(b_48) != AT_LIST) || !(ATisEmpty(b_48))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm m_55 = NULL,n_55 = NULL,o_55 = NULL,p_55 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_48 = ATgetArgument(t, 0);
      if(((ATgetType(c_48) == AT_LIST) && !(ATisEmpty(c_48))))
        {
          m_55 = ATgetFirst((ATermList) c_48);
          n_55 = (ATerm) ATgetNext((ATermList) c_48);
        }
      else
        _fail(t);
      {
        ATerm d_48 = ATgetArgument(t, 1);
        if(((ATgetType(d_48) == AT_LIST) && !(ATisEmpty(d_48))))
          {
            o_55 = ATgetFirst((ATermList) d_48);
            p_55 = (ATerm) ATgetNext((ATermList) d_48);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_55, o_55), (ATerm) ATmakeAppl(sym__2, n_55, p_55));
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm q_55 = NULL,s_55 = NULL;
  if(match_cons(t, sym__2))
    {
      q_55 = ATgetArgument(t, 0);
      s_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_55), q_55);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm u_55 = NULL,w_55 = NULL,x_55 = NULL;
  if(match_cons(t, sym__2))
    {
      u_55 = ATgetArgument(t, 0);
      x_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_55;
  {
    ATerm e_48 = t;
    int g_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm h_48 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(g_48);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, x_55);
      }
    else
      {
        t = e_48;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm l_48 = ATgetArgument(t, 0);
            w_55 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, x_55, w_55);
      }
  }
  return(t);
}
static ATerm o_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm m_48 = ATgetArgument(t, 0);
      if(((ATgetType(m_48) != AT_LIST) || !(ATisEmpty(m_48))))
        _fail(t);
      {
        ATerm n_48 = ATgetArgument(t, 1);
        if(((ATgetType(n_48) != AT_LIST) || !(ATisEmpty(n_48))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm c_122 = NULL,d_122 = NULL,e_122 = NULL,f_122 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_48 = ATgetArgument(t, 0);
      if(((ATgetType(o_48) == AT_LIST) && !(ATisEmpty(o_48))))
        {
          c_122 = ATgetFirst((ATermList) o_48);
          d_122 = (ATerm) ATgetNext((ATermList) o_48);
        }
      else
        _fail(t);
      {
        ATerm p_48 = ATgetArgument(t, 1);
        if(((ATgetType(p_48) == AT_LIST) && !(ATisEmpty(p_48))))
          {
            e_122 = ATgetFirst((ATermList) p_48);
            f_122 = (ATerm) ATgetNext((ATermList) p_48);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_122, e_122), (ATerm) ATmakeAppl(sym__2, d_122, f_122));
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm g_122 = NULL,h_122 = NULL;
  if(match_cons(t, sym__2))
    {
      g_122 = ATgetArgument(t, 0);
      h_122 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(h_122), g_122);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm j_122 = NULL,l_122 = NULL,m_122 = NULL;
  if(match_cons(t, sym__2))
    {
      j_122 = ATgetArgument(t, 0);
      m_122 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_122;
  {
    ATerm q_48 = t;
    int r_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm s_48 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(r_48);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, m_122);
      }
    else
      {
        t = q_48;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm u_48 = ATgetArgument(t, 0);
            l_122 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, m_122, l_122);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm j_127 (ATerm), ATerm t)
{
  ATerm w_48 = t;
  int x_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_121 = NULL,u_121 = NULL,v_121 = NULL,w_121 = NULL,x_121 = NULL;
      t_121 = t;
      if(match_cons(t, sym_Scope_2))
        {
          u_121 = ATgetArgument(t, 0);
          v_121 = ATgetArgument(t, 1);
          {
            ATerm v_48 = NULL,z_48 = NULL,o_7 = NULL;
            t = SSLgetAnnotations(t_121);
            v_48 = t;
            t = u_121;
            t = j_127(t);
            z_48 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, z_48, v_121);
            o_7 = t;
            t = SSLsetAnnotations(o_7, v_48);
          }
        }
      else
        {
          if(match_cons(t, sym_LRule_1))
            {
              u_121 = ATgetArgument(t, 0);
              {
                ATerm j_49 = NULL,p_7 = NULL;
                t = SSLgetAnnotations(t_121);
                j_49 = t;
                t = (ATerm) ATmakeAppl(sym_LRule_1, u_121);
                p_7 = t;
                t = SSLsetAnnotations(p_7, j_49);
              }
            }
          else
            {
              if(match_cons(t, sym_RDecT_3))
                {
                  u_121 = ATgetArgument(t, 0);
                  v_121 = ATgetArgument(t, 1);
                  w_121 = ATgetArgument(t, 2);
                  {
                    ATerm h_50 = NULL,l_50 = NULL,m_50 = NULL,t_7 = NULL;
                    t = SSLgetAnnotations(t_121);
                    h_50 = t;
                    t = w_121;
                    t = j_127(t);
                    m_50 = t;
                    t = (ATerm) ATmakeAppl(sym__2, w_121, m_50);
                    t = genzip_4_0(u_5, v_5, w_5, x_5, t);
                    l_50 = t;
                    t = (ATerm) ATmakeAppl(sym_RDecT_3, u_121, v_121, l_50);
                    t_7 = t;
                    t = SSLsetAnnotations(t_7, h_50);
                  }
                }
              else
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      u_121 = ATgetArgument(t, 0);
                      v_121 = ATgetArgument(t, 1);
                      w_121 = ATgetArgument(t, 2);
                      x_121 = ATgetArgument(t, 3);
                      {
                        ATerm t_52 = NULL,f_53 = NULL,g_53 = NULL,u_7 = NULL;
                        t = SSLgetAnnotations(t_121);
                        t_52 = t;
                        t = w_121;
                        t = j_127(t);
                        g_53 = t;
                        t = (ATerm) ATmakeAppl(sym__2, w_121, g_53);
                        t = genzip_4_0(y_5, z_5, a_6, b_6, t);
                        f_53 = t;
                        t = (ATerm) ATmakeAppl(sym_SDefT_4, u_121, v_121, f_53, x_121);
                        u_7 = t;
                        t = SSLsetAnnotations(u_7, t_52);
                      }
                    }
                  else
                    {
                      ATerm d_55 = NULL,j_55 = NULL,k_55 = NULL,v_7 = NULL;
                      if(match_cons(t, sym_RDefT_4))
                        {
                          u_121 = ATgetArgument(t, 0);
                          v_121 = ATgetArgument(t, 1);
                          w_121 = ATgetArgument(t, 2);
                          x_121 = ATgetArgument(t, 3);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(t_121);
                      d_55 = t;
                      t = w_121;
                      t = j_127(t);
                      k_55 = t;
                      t = (ATerm) ATmakeAppl(sym__2, w_121, k_55);
                      t = genzip_4_0(c_6, d_6, e_6, f_6, t);
                      j_55 = t;
                      t = (ATerm) ATmakeAppl(sym_RDefT_4, u_121, v_121, j_55, x_121);
                      v_7 = t;
                      t = SSLsetAnnotations(v_7, d_55);
                    }
                }
            }
        }
      LocalPopChoice(x_48);
    }
  else
    {
      t = w_48;
      {
        static ATerm h_6 (ATerm t);
        static ATerm h_6 (ATerm t)
        {
          ATerm a_122 = NULL,b_122 = NULL;
          b_122 = t;
          t = j_127(t);
          a_122 = t;
          t = (ATerm) ATmakeAppl(sym__2, b_122, a_122);
          t = genzip_4_0(o_6, s_6, w_6, x_6, t);
          return(t);
        }
        t = dynrule_cong_6_0(_id, _id, h_6, _id, _id, _id, t);
      }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm k_127 (ATerm), ATerm l_127 (ATerm), ATerm m_127 (ATerm), ATerm t)
{
  ATerm a_129 = NULL,b_129 = NULL,c_129 = NULL,d_129 = NULL,e_129 = NULL;
  d_129 = t;
  if(match_cons(t, sym_Scope_2))
    {
      e_129 = ATgetArgument(t, 0);
      c_129 = ATgetArgument(t, 1);
      {
        ATerm x_56 = NULL,a_57 = NULL,b_57 = NULL,c_8 = NULL;
        t = SSLgetAnnotations(d_129);
        x_56 = t;
        t = e_129;
        t = m_127(t);
        a_57 = t;
        t = c_129;
        t = k_127(t);
        b_57 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, a_57, b_57);
        c_8 = t;
        t = SSLsetAnnotations(c_8, x_56);
      }
    }
  else
    {
      if(match_cons(t, sym_LRule_1))
        {
          e_129 = ATgetArgument(t, 0);
          {
            ATerm n_57 = NULL,p_57 = NULL,q_57 = NULL,r_57 = NULL,s_57 = NULL,z_57 = NULL,a_58 = NULL,c_58 = NULL,h_58 = NULL,d_10 = NULL,a_10 = NULL;
            t = SSLgetAnnotations(d_129);
            n_57 = t;
            t = e_129;
            if(match_cons(t, sym_Rule_3))
              {
                q_57 = ATgetArgument(t, 0);
                r_57 = ATgetArgument(t, 1);
                s_57 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(e_129);
            p_57 = t;
            t = q_57;
            t = k_127(t);
            z_57 = t;
            t = r_57;
            t = k_127(t);
            a_58 = t;
            t = s_57;
            t = k_127(t);
            c_58 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, z_57, a_58, c_58);
            a_10 = t;
            t = SSLsetAnnotations(a_10, p_57);
            h_58 = t;
            t = (ATerm) ATmakeAppl(sym_LRule_1, h_58);
            d_10 = t;
            t = SSLsetAnnotations(d_10, n_57);
          }
        }
      else
        {
          if(match_cons(t, sym_RDecT_3))
            {
              e_129 = ATgetArgument(t, 0);
              c_129 = ATgetArgument(t, 1);
              a_129 = ATgetArgument(t, 2);
              {
                ATerm t_58 = NULL,y_58 = NULL,z_58 = NULL,a_59 = NULL,e_10 = NULL;
                t = SSLgetAnnotations(d_129);
                t_58 = t;
                t = e_129;
                t = m_127(t);
                y_58 = t;
                t = c_129;
                t = m_127(t);
                z_58 = t;
                t = a_129;
                t = m_127(t);
                a_59 = t;
                t = (ATerm) ATmakeAppl(sym_RDecT_3, y_58, z_58, a_59);
                e_10 = t;
                t = SSLsetAnnotations(e_10, t_58);
              }
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  e_129 = ATgetArgument(t, 0);
                  c_129 = ATgetArgument(t, 1);
                  a_129 = ATgetArgument(t, 2);
                  b_129 = ATgetArgument(t, 3);
                  {
                    ATerm m_59 = NULL,s_59 = NULL,t_59 = NULL,u_59 = NULL,v_59 = NULL,f_10 = NULL;
                    t = SSLgetAnnotations(d_129);
                    m_59 = t;
                    t = e_129;
                    t = m_127(t);
                    s_59 = t;
                    t = c_129;
                    t = m_127(t);
                    t_59 = t;
                    t = a_129;
                    t = m_127(t);
                    u_59 = t;
                    t = b_129;
                    t = k_127(t);
                    v_59 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, s_59, t_59, u_59, v_59);
                    f_10 = t;
                    t = SSLsetAnnotations(f_10, m_59);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      e_129 = ATgetArgument(t, 0);
                      c_129 = ATgetArgument(t, 1);
                      a_129 = ATgetArgument(t, 2);
                      b_129 = ATgetArgument(t, 3);
                      {
                        ATerm p_60 = NULL,a_61 = NULL,b_61 = NULL,c_61 = NULL,d_61 = NULL,i_10 = NULL;
                        t = SSLgetAnnotations(d_129);
                        p_60 = t;
                        t = e_129;
                        t = m_127(t);
                        a_61 = t;
                        t = c_129;
                        t = m_127(t);
                        b_61 = t;
                        t = a_129;
                        t = m_127(t);
                        c_61 = t;
                        t = b_129;
                        t = k_127(t);
                        d_61 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, a_61, b_61, c_61, d_61);
                        i_10 = t;
                        t = SSLsetAnnotations(i_10, p_60);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          e_129 = ATgetArgument(t, 0);
                          c_129 = ATgetArgument(t, 1);
                          {
                            ATerm t_61 = NULL,e_62 = NULL,f_62 = NULL,j_10 = NULL;
                            t = SSLgetAnnotations(d_129);
                            t_61 = t;
                            t = e_129;
                            t = m_127(t);
                            e_62 = t;
                            t = c_129;
                            t = k_127(t);
                            f_62 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, e_62, f_62);
                            j_10 = t;
                            t = SSLsetAnnotations(j_10, t_61);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              e_129 = ATgetArgument(t, 0);
                              c_129 = ATgetArgument(t, 1);
                              {
                                ATerm y_62 = NULL,e_63 = NULL,v_63 = NULL,k_10 = NULL;
                                t = SSLgetAnnotations(d_129);
                                y_62 = t;
                                t = e_129;
                                t = m_127(t);
                                e_63 = t;
                                t = c_129;
                                t = k_127(t);
                                v_63 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, e_63, v_63);
                                k_10 = t;
                                t = SSLsetAnnotations(k_10, y_62);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  e_129 = ATgetArgument(t, 0);
                                  c_129 = ATgetArgument(t, 1);
                                  {
                                    ATerm h_64 = NULL,l_64 = NULL,m_64 = NULL,n_10 = NULL;
                                    t = SSLgetAnnotations(d_129);
                                    h_64 = t;
                                    t = e_129;
                                    t = m_127(t);
                                    l_64 = t;
                                    t = c_129;
                                    t = k_127(t);
                                    m_64 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, l_64, m_64);
                                    n_10 = t;
                                    t = SSLsetAnnotations(n_10, h_64);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GenDynRules_1))
                                    {
                                      e_129 = ATgetArgument(t, 0);
                                      {
                                        ATerm m_65 = NULL,p_65 = NULL,t_10 = NULL;
                                        t = SSLgetAnnotations(d_129);
                                        m_65 = t;
                                        t = e_129;
                                        t = k_127(t);
                                        p_65 = t;
                                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, p_65);
                                        t_10 = t;
                                        t = SSLsetAnnotations(t_10, m_65);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_DynamicRules_1))
                                        {
                                          e_129 = ATgetArgument(t, 0);
                                          {
                                            ATerm v_65 = NULL,y_65 = NULL,u_10 = NULL;
                                            t = SSLgetAnnotations(d_129);
                                            v_65 = t;
                                            t = e_129;
                                            t = k_127(t);
                                            y_65 = t;
                                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, y_65);
                                            u_10 = t;
                                            t = SSLsetAnnotations(u_10, v_65);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OverrideDynamicRules_1))
                                            {
                                              e_129 = ATgetArgument(t, 0);
                                              {
                                                ATerm f_66 = NULL,h_66 = NULL,v_10 = NULL;
                                                t = SSLgetAnnotations(d_129);
                                                f_66 = t;
                                                t = e_129;
                                                t = k_127(t);
                                                h_66 = t;
                                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, h_66);
                                                v_10 = t;
                                                t = SSLsetAnnotations(v_10, f_66);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                                {
                                                  e_129 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm q_66 = NULL,s_66 = NULL,a_11 = NULL;
                                                    t = SSLgetAnnotations(d_129);
                                                    q_66 = t;
                                                    t = e_129;
                                                    t = k_127(t);
                                                    s_66 = t;
                                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, s_66);
                                                    a_11 = t;
                                                    t = SSLsetAnnotations(a_11, q_66);
                                                  }
                                                }
                                              else
                                                {
                                                  ATerm l_67 = NULL,o_67 = NULL,b_11 = NULL;
                                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                                    {
                                                      e_129 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = SSLgetAnnotations(d_129);
                                                  l_67 = t;
                                                  t = e_129;
                                                  t = k_127(t);
                                                  o_67 = t;
                                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, o_67);
                                                  b_11 = t;
                                                  t = SSLsetAnnotations(b_11, l_67);
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
ATerm dynrule_targs_1_0 (ATerm t_127 (ATerm), ATerm t)
{
  ATerm c_130 = NULL,d_130 = NULL,g_130 = NULL;
  ATerm y_48 = t;
  int a_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          c_130 = ATgetArgument(t, 0);
          {
            ATerm b_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_49);
      t = c_130;
      if(match_cons(t, sym_DynRuleId_1))
        {
          d_130 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_130;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm c_49 = ATgetArgument(t, 0);
          ATerm d_49 = ATgetArgument(t, 1);
          g_130 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = g_130;
    }
  else
    {
      t = y_48;
      {
        ATerm e_49 = t;
        int f_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                c_130 = ATgetArgument(t, 0);
                {
                  ATerm g_49 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(f_49);
            t = c_130;
            if(match_cons(t, sym_DynRuleId_1))
              {
                d_130 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = d_130;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm h_49 = ATgetArgument(t, 0);
                ATerm k_49 = ATgetArgument(t, 1);
                g_130 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = g_130;
          }
        else
          {
            t = e_49;
            if(match_cons(t, sym_AddDynRule_2))
              {
                c_130 = ATgetArgument(t, 0);
                {
                  ATerm l_49 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = c_130;
            if(match_cons(t, sym_DynRuleId_1))
              {
                d_130 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = d_130;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm m_49 = ATgetArgument(t, 0);
                ATerm n_49 = ATgetArgument(t, 1);
                g_130 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = g_130;
          }
      }
    }
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm w_130 = NULL;
  ATerm o_49 = t;
  int p_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_130 = ATgetArgument(t, 0);
          {
            ATerm r_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_49);
      t = w_130;
    }
  else
    {
      t = o_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_130 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_130;
    }
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm c_131 = NULL;
  ATerm s_49 = t;
  int t_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_131 = ATgetArgument(t, 0);
          {
            ATerm u_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_49);
      t = c_131;
    }
  else
    {
      t = s_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_131 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_131;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm r_130 = NULL;
  ATerm v_49 = t;
  int w_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm x_49 = ATgetArgument(t, 0);
          ATerm y_49 = ATgetArgument(t, 1);
          r_130 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(w_49);
      t = r_130;
      t = map_1_0(y_6, t);
    }
  else
    {
      t = v_49;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm z_49 = ATgetArgument(t, 0);
          ATerm b_50 = ATgetArgument(t, 1);
          r_130 = ATgetArgument(t, 2);
          {
            ATerm c_50 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = r_130;
      t = map_1_0(z_6, t);
    }
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm y_131 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_131 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_131);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm d_50 = t;
  int f_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(f_50);
    }
  else
    {
      t = d_50;
      {
        ATerm g_50 = t;
        int i_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(i_50);
          }
        else
          {
            t = g_50;
            {
              ATerm j_50 = t;
              int k_50 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_132 = NULL,b_132 = NULL,c_132 = NULL,d_132 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      a_132 = ATgetArgument(t, 0);
                      b_132 = ATgetArgument(t, 1);
                      c_132 = ATgetArgument(t, 2);
                      d_132 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = c_132;
                  t = map_1_0(c_7, t);
                  LocalPopChoice(k_50);
                }
              else
                {
                  t = j_50;
                  {
                    ATerm n_50 = t;
                    int o_50 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(o_50);
                      }
                    else
                      {
                        t = n_50;
                        t = dynrule_targs_1_0(d_7, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm m_132 = NULL;
  ATerm p_50 = t;
  int v_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_132 = ATgetArgument(t, 0);
          {
            ATerm w_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_50);
      t = m_132;
    }
  else
    {
      t = p_50;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_132 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_132;
    }
  return(t);
}
static ATerm d_7 (ATerm t)
{
  t = map_1_0(e_7, t);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm r_132 = NULL;
  ATerm x_50 = t;
  int y_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_132 = ATgetArgument(t, 0);
          {
            ATerm z_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_50);
      t = r_132;
    }
  else
    {
      t = x_50;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_132 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_132;
    }
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm v_132 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_132 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_132);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm a_51 = t;
  int d_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(d_51);
    }
  else
    {
      t = a_51;
      {
        ATerm e_51 = t;
        int f_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(f_51);
          }
        else
          {
            t = e_51;
            {
              ATerm g_51 = t;
              int h_51 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_132 = NULL,y_132 = NULL,z_132 = NULL,a_133 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      x_132 = ATgetArgument(t, 0);
                      y_132 = ATgetArgument(t, 1);
                      z_132 = ATgetArgument(t, 2);
                      a_133 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = z_132;
                  t = map_1_0(h_7, t);
                  LocalPopChoice(h_51);
                }
              else
                {
                  t = g_51;
                  {
                    ATerm j_51 = t;
                    int l_51 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(l_51);
                      }
                    else
                      {
                        t = j_51;
                        t = dynrule_targs_1_0(k_7, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm h_133 = NULL;
  ATerm o_51 = t;
  int p_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_133 = ATgetArgument(t, 0);
          {
            ATerm q_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_51);
      t = h_133;
    }
  else
    {
      t = o_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_133 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_133;
    }
  return(t);
}
static ATerm k_7 (ATerm t)
{
  t = map_1_0(l_7, t);
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm r_133 = NULL;
  ATerm r_51 = t;
  int s_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_133 = ATgetArgument(t, 0);
          {
            ATerm u_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_51);
      t = r_133;
    }
  else
    {
      t = r_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_133 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_133;
    }
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm v_133 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_133 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_133);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm v_51 = t;
  int w_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(w_51);
    }
  else
    {
      t = v_51;
      {
        ATerm x_51 = t;
        int y_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(y_51);
          }
        else
          {
            t = x_51;
            {
              ATerm z_51 = t;
              int b_52 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_133 = NULL,y_133 = NULL,z_133 = NULL,a_134 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      x_133 = ATgetArgument(t, 0);
                      y_133 = ATgetArgument(t, 1);
                      z_133 = ATgetArgument(t, 2);
                      a_134 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = z_133;
                  t = map_1_0(q_7, t);
                  LocalPopChoice(b_52);
                }
              else
                {
                  t = z_51;
                  {
                    ATerm c_52 = t;
                    int d_52 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(d_52);
                      }
                    else
                      {
                        t = c_52;
                        t = dynrule_targs_1_0(r_7, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm h_134 = NULL;
  ATerm e_52 = t;
  int f_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_134 = ATgetArgument(t, 0);
          {
            ATerm g_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_52);
      t = h_134;
    }
  else
    {
      t = e_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_134 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_134;
    }
  return(t);
}
static ATerm r_7 (ATerm t)
{
  t = map_1_0(w_7, t);
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm m_134 = NULL;
  ATerm h_52 = t;
  int j_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_134 = ATgetArgument(t, 0);
          {
            ATerm k_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_52);
      t = m_134;
    }
  else
    {
      t = h_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_134 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_134;
    }
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm q_134 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_134 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, q_134);
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm l_52 = t;
  int m_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(m_52);
    }
  else
    {
      t = l_52;
      {
        ATerm n_52 = t;
        int o_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(o_52);
          }
        else
          {
            t = n_52;
            {
              ATerm p_52 = t;
              int r_52 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_134 = NULL,w_134 = NULL,x_134 = NULL,y_134 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      s_134 = ATgetArgument(t, 0);
                      w_134 = ATgetArgument(t, 1);
                      x_134 = ATgetArgument(t, 2);
                      y_134 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = x_134;
                  t = map_1_0(z_7, t);
                  LocalPopChoice(r_52);
                }
              else
                {
                  t = p_52;
                  {
                    ATerm s_52 = t;
                    int u_52 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(u_52);
                      }
                    else
                      {
                        t = s_52;
                        t = dynrule_targs_1_0(a_8, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm f_135 = NULL;
  ATerm v_52 = t;
  int w_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_135 = ATgetArgument(t, 0);
          {
            ATerm y_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_52);
      t = f_135;
    }
  else
    {
      t = v_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_135 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_135;
    }
  return(t);
}
static ATerm a_8 (ATerm t)
{
  t = map_1_0(e_8, t);
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm q_135 = NULL;
  ATerm z_52 = t;
  int a_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_135 = ATgetArgument(t, 0);
          {
            ATerm b_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_53);
      t = q_135;
    }
  else
    {
      t = z_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_135 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_135;
    }
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm u_135 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      u_135 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, u_135);
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm c_53 = t;
  int d_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(d_53);
    }
  else
    {
      t = c_53;
      {
        ATerm e_53 = t;
        int h_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(h_53);
          }
        else
          {
            t = e_53;
            {
              ATerm k_53 = t;
              int l_53 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_135 = NULL,x_135 = NULL,y_135 = NULL,z_135 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      w_135 = ATgetArgument(t, 0);
                      x_135 = ATgetArgument(t, 1);
                      y_135 = ATgetArgument(t, 2);
                      z_135 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = y_135;
                  t = map_1_0(h_8, t);
                  LocalPopChoice(l_53);
                }
              else
                {
                  t = k_53;
                  {
                    ATerm m_53 = t;
                    int o_53 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(o_53);
                      }
                    else
                      {
                        t = m_53;
                        t = dynrule_targs_1_0(i_8, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm g_136 = NULL;
  ATerm p_53 = t;
  int s_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_136 = ATgetArgument(t, 0);
          {
            ATerm t_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_53);
      t = g_136;
    }
  else
    {
      t = p_53;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_136 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_136;
    }
  return(t);
}
static ATerm i_8 (ATerm t)
{
  t = map_1_0(j_8, t);
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm m_136 = NULL;
  ATerm v_53 = t;
  int y_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_136 = ATgetArgument(t, 0);
          {
            ATerm z_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_53);
      t = m_136;
    }
  else
    {
      t = v_53;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_136 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_136;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm w_131 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      w_131 = ATgetArgument(t, 0);
      t = w_131;
      t = free_vars_3_0(a_7, b_7, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          w_131 = ATgetArgument(t, 0);
          t = w_131;
          t = free_vars_3_0(f_7, g_7, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              w_131 = ATgetArgument(t, 0);
              t = w_131;
              t = free_vars_3_0(m_7, n_7, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  w_131 = ATgetArgument(t, 0);
                  t = w_131;
                  t = free_vars_3_0(x_7, y_7, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      w_131 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = w_131;
                  t = free_vars_3_0(f_8, g_8, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm g_13 (ATerm s_142 (ATerm), ATerm g_58, ATerm f_58, ATerm t)
{
  static ATerm k_137 (ATerm t);
  static ATerm k_137 (ATerm t)
  {
    ATerm f_137 = NULL,g_137 = NULL,h_137 = NULL;
    f_137 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_58;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_137 = ATgetFirst((ATermList) t);
            h_137 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm a_54 = t;
          int c_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_137;
              {
                static ATerm k_8 (ATerm t);
                static ATerm k_8 (ATerm t)
                {
                  t = f_58;
                  return(t);
                }
                t = i_13(s_142, k_8, g_137, h_137, t);
              }
              t = k_137(t);
              LocalPopChoice(c_54);
            }
          else
            {
              t = a_54;
              {
                ATerm v_67 = NULL,k_68 = NULL,q_13 = NULL;
                t = SSLgetAnnotations(f_137);
                v_67 = t;
                t = h_137;
                t = k_137(t);
                k_68 = t;
                t = (ATerm) ATinsert(CheckATermList(k_68), g_137);
                q_13 = t;
                t = SSLsetAnnotations(q_13, v_67);
              }
            }
        }
      }
    return(t);
  }
  t = g_58;
  t = k_137(t);
  return(t);
}
static ATerm i_13 (ATerm v_142 (ATerm), ATerm w_142 (ATerm), ATerm k_58, ATerm j_58, ATerm t)
{
  t = w_142(t);
  {
    static ATerm m_8 (ATerm t);
    static ATerm m_8 (ATerm t)
    {
      ATerm m_137 = NULL;
      m_137 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_58, m_137);
      t = v_142(t);
      return(t);
    }
    t = fetch_1_0(m_8, t);
  }
  t = j_58;
  return(t);
}
static ATerm j_13 (ATerm n_142 (ATerm), ATerm e_58, ATerm d_58, ATerm t)
{
  static ATerm c_138 (ATerm t);
  static ATerm c_138 (ATerm t)
  {
    ATerm x_137 = NULL,y_137 = NULL,z_137 = NULL;
    x_137 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_137;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_137 = ATgetFirst((ATermList) t);
            z_137 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm f_54 = t;
          int g_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_137;
              {
                static ATerm n_8 (ATerm t);
                static ATerm n_8 (ATerm t)
                {
                  t = d_58;
                  return(t);
                }
                t = i_13(n_142, n_8, y_137, z_137, t);
              }
              t = c_138(t);
              LocalPopChoice(g_54);
            }
          else
            {
              t = f_54;
              {
                ATerm y_68 = NULL,e_69 = NULL,s_13 = NULL;
                t = SSLgetAnnotations(x_137);
                y_68 = t;
                t = z_137;
                t = c_138(t);
                e_69 = t;
                t = (ATerm) ATinsert(CheckATermList(e_69), y_137);
                s_13 = t;
                t = SSLsetAnnotations(s_13, y_68);
              }
            }
        }
      }
    return(t);
  }
  t = e_58;
  t = c_138(t);
  return(t);
}
static ATerm t_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm h_54 = ATgetArgument(t, 0);
      if(((ATgetType(h_54) != AT_LIST) || !(ATisEmpty(h_54))))
        _fail(t);
      {
        ATerm i_54 = ATgetArgument(t, 1);
        if(((ATgetType(i_54) != AT_LIST) || !(ATisEmpty(i_54))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm k_138 = NULL,l_138 = NULL,m_138 = NULL,n_138 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_54 = ATgetArgument(t, 0);
      if(((ATgetType(j_54) == AT_LIST) && !(ATisEmpty(j_54))))
        {
          k_138 = ATgetFirst((ATermList) j_54);
          l_138 = (ATerm) ATgetNext((ATermList) j_54);
        }
      else
        _fail(t);
      {
        ATerm k_54 = ATgetArgument(t, 1);
        if(((ATgetType(k_54) == AT_LIST) && !(ATisEmpty(k_54))))
          {
            m_138 = ATgetFirst((ATermList) k_54);
            n_138 = (ATerm) ATgetNext((ATermList) k_54);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_138, m_138), (ATerm) ATmakeAppl(sym__2, l_138, n_138));
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm o_138 = NULL,p_138 = NULL;
  if(match_cons(t, sym__2))
    {
      o_138 = ATgetArgument(t, 0);
      p_138 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_138), o_138);
  return(t);
}
static ATerm l_13 (ATerm u_752, ATerm z_752, ATerm w_77, ATerm t)
{
  ATerm f_138 = NULL,g_138 = NULL,h_138 = NULL,i_138 = NULL;
  t = SSL_explode_term(z_752);
  if(match_cons(t, sym__2))
    {
      f_138 = ATgetArgument(t, 0);
      h_138 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(u_752);
  if(match_cons(t, sym__2))
    {
      if((f_138 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      g_138 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_138, h_138);
  t = genzip_4_0(t_8, x_8, y_8, _id, t);
  i_138 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_138, w_77);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm k_135 (ATerm), ATerm l_135 (ATerm), ATerm t)
{
  static ATerm r_138 (ATerm t);
  static ATerm r_138 (ATerm t)
  {
    ATerm l_54 = t;
    int m_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_135(t);
        LocalPopChoice(m_54);
      }
    else
      {
        t = l_54;
        t = l_135(t);
        t = r_138(t);
      }
    return(t);
  }
  t = r_138(t);
  return(t);
}
ATerm for_3_0 (ATerm n_135 (ATerm), ATerm o_135 (ATerm), ATerm p_135 (ATerm), ATerm t)
{
  t = n_135(t);
  t = while_not_2_0(o_135, p_135, t);
  return(t);
}
static ATerm z_8 (ATerm t)
{
  ATerm y_138 = NULL;
  y_138 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, y_138);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm z_138 = NULL,a_139 = NULL,b_139 = NULL,c_139 = NULL,w_13 = NULL;
  c_139 = t;
  if(match_cons(t, sym__2))
    {
      a_139 = ATgetArgument(t, 0);
      b_139 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_139);
  z_138 = t;
  t = b_139;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_139, b_139);
  w_13 = t;
  t = SSLsetAnnotations(w_13, z_138);
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm v_139 = NULL,x_139 = NULL,a_140 = NULL,b_140 = NULL,c_140 = NULL;
  v_139 = t;
  if(match_cons(t, sym__2))
    {
      x_139 = ATgetArgument(t, 0);
      a_140 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_140;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_140 = ATgetFirst((ATermList) t);
      c_140 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm n_54 = t;
        int o_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_140(x_139, a_140, v_139, t);
            LocalPopChoice(o_54);
          }
        else
          {
            t = n_54;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_139), b_140), c_140);
          }
      }
    }
  else
    {
      t = o_140(x_139, a_140, v_139, t);
    }
  return(t);
}
static ATerm o_140 (ATerm d_139, ATerm e_139, ATerm f_139, ATerm t)
{
  ATerm g_139 = NULL,j_139 = NULL,c_14 = NULL,m_139 = NULL,n_139 = NULL,o_139 = NULL,p_139 = NULL;
  t = SSLgetAnnotations(f_139);
  g_139 = t;
  t = e_139;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_139 = ATgetFirst((ATermList) t);
      p_139 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = m_139;
  if(match_cons(t, sym__2))
    {
      n_139 = ATgetArgument(t, 0);
      o_139 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_54 = t;
    int q_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_139;
        if((n_139 != t))
          {
            _fail(t);
          }
        t = p_139;
        LocalPopChoice(q_54);
      }
    else
      {
        t = p_54;
        t = e_139;
        t = l_13(n_139, o_139, p_139, t);
      }
  }
  j_139 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_139, j_139);
  c_14 = t;
  t = SSLsetAnnotations(c_14, g_139);
  return(t);
}
static ATerm c_9 (ATerm t)
{
  ATerm n_140 = NULL;
  if(match_cons(t, sym__2))
    {
      n_140 = ATgetArgument(t, 0);
      if((n_140 != ATgetArgument(t, 1)))
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
  ATerm r_54 = t;
  int s_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(z_8, a_9, b_9, t);
      LocalPopChoice(s_54);
    }
  else
    {
      t = r_54;
      {
        ATerm g_140 = NULL,h_140 = NULL,k_140 = NULL;
        g_140 = t;
        if(match_cons(t, sym__2))
          {
            h_140 = ATgetArgument(t, 0);
            k_140 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_140;
        t = j_13(c_9, h_140, k_140, t);
      }
    }
  return(t);
}
static ATerm f_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm b_70 = NULL,g_70 = NULL;
  if(match_cons(t, sym__2))
    {
      b_70 = ATgetArgument(t, 0);
      g_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_13(l_9, b_70, g_70, t);
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm h_70 = NULL;
  if(match_cons(t, sym__2))
    {
      h_70 = ATgetArgument(t, 0);
      if((h_70 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm m_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm q_70 = NULL,r_70 = NULL;
  if(match_cons(t, sym__2))
    {
      q_70 = ATgetArgument(t, 0);
      r_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_13(o_9, q_70, r_70, t);
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm s_70 = NULL;
  if(match_cons(t, sym__2))
    {
      s_70 = ATgetArgument(t, 0);
      if((s_70 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm p_149 (ATerm), ATerm q_149 (ATerm), ATerm r_149 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm e_141 (ATerm t);
  static ATerm e_141 (ATerm t)
  {
    ATerm t_54 = t;
    int u_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_149(t);
        LocalPopChoice(u_54);
      }
    else
      {
        t = t_54;
        {
          ATerm v_54 = t;
          int w_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_140 = NULL,t_140 = NULL,o_69 = NULL,s_69 = NULL;
              s_140 = t;
              t = q_149(t);
              t_140 = t;
              t = s_140;
              {
                static ATerm d_9 (ATerm t);
                static ATerm d_9 (ATerm t)
                {
                  ATerm v_140 = NULL;
                  t = e_141(t);
                  v_140 = t;
                  t = (ATerm) ATmakeAppl(sym__2, v_140, t_140);
                  t = diff_0_0(t);
                  return(t);
                }
                t = r_149(d_9, e_141, f_9, t);
              }
              s_69 = t;
              t = SSL_explode_term(s_69);
              if(match_cons(t, sym__2))
                {
                  ATerm x_54 = ATgetArgument(t, 0);
                  o_69 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = o_69;
              t = foldr_3_0(g_9, k_9, _id, t);
              LocalPopChoice(w_54);
            }
          else
            {
              t = v_54;
              {
                ATerm j_70 = NULL,l_70 = NULL;
                l_70 = t;
                t = SSL_explode_term(l_70);
                if(match_cons(t, sym__2))
                  {
                    ATerm y_54 = ATgetArgument(t, 0);
                    j_70 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = j_70;
                t = foldr_3_0(m_9, n_9, e_141, t);
              }
            }
        }
      }
    return(t);
  }
  t = e_141(t);
  return(t);
}
static ATerm p_9 (ATerm t)
{
  ATerm r_141 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_141 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, r_141);
  return(t);
}
static ATerm q_9 (ATerm t)
{
  ATerm z_54 = t;
  int a_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(a_55);
    }
  else
    {
      t = z_54;
      {
        ATerm b_55 = t;
        int c_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(c_55);
          }
        else
          {
            t = b_55;
            {
              ATerm e_55 = t;
              int f_55 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_141 = NULL,u_141 = NULL,v_141 = NULL,w_141 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      t_141 = ATgetArgument(t, 0);
                      u_141 = ATgetArgument(t, 1);
                      v_141 = ATgetArgument(t, 2);
                      w_141 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = v_141;
                  t = map_1_0(s_9, t);
                  LocalPopChoice(f_55);
                }
              else
                {
                  t = e_55;
                  {
                    ATerm g_55 = t;
                    int h_55 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(h_55);
                      }
                    else
                      {
                        t = g_55;
                        t = dynrule_targs_1_0(t_9, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm d_142 = NULL;
  ATerm i_55 = t;
  int l_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_142 = ATgetArgument(t, 0);
          {
            ATerm r_55 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_55);
      t = d_142;
    }
  else
    {
      t = i_55;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_142 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_142;
    }
  return(t);
}
static ATerm t_9 (ATerm t)
{
  t = map_1_0(c_10, t);
  return(t);
}
static ATerm c_10 (ATerm t)
{
  ATerm i_142 = NULL;
  ATerm t_55 = t;
  int v_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_142 = ATgetArgument(t, 0);
          {
            ATerm y_55 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_55);
      t = i_142;
    }
  else
    {
      t = t_55;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_142 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_142;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm k_141 = NULL,o_141 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      o_141 = ATgetArgument(t, 0);
      t = o_141;
      if(match_cons(t, sym_Rule_3))
        {
          k_141 = ATgetArgument(t, 0);
          {
            ATerm z_55 = ATgetArgument(t, 1);
          }
          {
            ATerm a_56 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = k_141;
      t = free_vars_3_0(p_9, q_9, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          o_141 = ATgetArgument(t, 0);
          {
            ATerm b_56 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = o_141;
    }
  return(t);
}
ATerm Var_1_0 (ATerm r_105 (ATerm), ATerm t)
{
  ATerm m_142 = NULL,p_142 = NULL,q_142 = NULL,r_142 = NULL,f_14 = NULL;
  r_142 = t;
  if(match_cons(t, sym_Var_1))
    {
      p_142 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_142);
  m_142 = t;
  t = p_142;
  t = r_105(t);
  q_142 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, q_142);
  f_14 = t;
  t = SSLsetAnnotations(f_14, m_142);
  return(t);
}
static ATerm n_13 (ATerm x_147 (ATerm), ATerm y_147 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm n_61, ATerm m_61, ATerm l_61, ATerm t)
{
  static ATerm g_10 (ATerm t);
  static ATerm h_10 (ATerm t);
  static ATerm g_10 (ATerm t)
  {
    ATerm x_142 = NULL;
    x_142 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_142, l_61);
    t = x_147(t);
    return(t);
  }
  static ATerm h_10 (ATerm t)
  {
    ATerm y_142 = NULL;
    y_142 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_142, m_61);
    t = x_147(t);
    return(t);
  }
  t = n_61;
  t = y_147(g_10, h_10, _id, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm l_10 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_56 = ATgetArgument(t, 0);
      if(((ATgetType(c_56) != AT_LIST) || !(ATisEmpty(c_56))))
        _fail(t);
      {
        ATerm d_56 = ATgetArgument(t, 1);
        if(((ATgetType(d_56) != AT_LIST) || !(ATisEmpty(d_56))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_10 (ATerm t)
{
  ATerm n_143 = NULL,o_143 = NULL,p_143 = NULL,q_143 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_56 = ATgetArgument(t, 0);
      if(((ATgetType(e_56) == AT_LIST) && !(ATisEmpty(e_56))))
        {
          n_143 = ATgetFirst((ATermList) e_56);
          o_143 = (ATerm) ATgetNext((ATermList) e_56);
        }
      else
        _fail(t);
      {
        ATerm f_56 = ATgetArgument(t, 1);
        if(((ATgetType(f_56) == AT_LIST) && !(ATisEmpty(f_56))))
          {
            p_143 = ATgetFirst((ATermList) f_56);
            q_143 = (ATerm) ATgetNext((ATermList) f_56);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_143, p_143), (ATerm) ATmakeAppl(sym__2, o_143, q_143));
  return(t);
}
static ATerm o_10 (ATerm t)
{
  ATerm r_143 = NULL,s_143 = NULL;
  if(match_cons(t, sym__2))
    {
      r_143 = ATgetArgument(t, 0);
      s_143 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_143), r_143);
  return(t);
}
static ATerm o_13 (ATerm r_147 (ATerm), ATerm s_147 (ATerm (ATerm), ATerm), ATerm f_61, ATerm i_61, ATerm t)
{
  ATerm h_143 = NULL,i_143 = NULL,j_143 = NULL,k_143 = NULL,m_143 = NULL;
  t = f_61;
  t = r_147(t);
  h_143 = t;
  t = map_1_0(new_0_0, t);
  i_143 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_143, i_143);
  t = genzip_4_0(l_10, m_10, o_10, _id, t);
  m_143 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_143, i_61);
  t = conc_0_0(t);
  j_143 = t;
  t = f_61;
  {
    static ATerm p_10 (ATerm t);
    static ATerm p_10 (ATerm t)
    {
      t = i_143;
      return(t);
    }
    t = s_147(p_10, t);
  }
  k_143 = t;
  t = (ATerm) ATmakeAppl(sym__3, k_143, i_61, j_143);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm x_143 = NULL,y_143 = NULL,z_143 = NULL,a_144 = NULL,b_144 = NULL,c_144 = NULL,d_144 = NULL;
  z_143 = t;
  if(match_cons(t, sym__2))
    {
      a_144 = ATgetArgument(t, 0);
      b_144 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_144;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_144 = ATgetFirst((ATermList) t);
      d_144 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = c_144;
  if(match_cons(t, sym__2))
    {
      x_143 = ATgetArgument(t, 0);
      y_143 = ATgetArgument(t, 1);
      {
        ATerm g_56 = t;
        int h_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_143;
            if((a_144 != t))
              {
                _fail(t);
              }
            t = y_143;
            LocalPopChoice(h_56);
          }
        else
          {
            t = g_56;
            t = (ATerm) ATmakeAppl(sym__2, a_144, d_144);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, a_144, d_144);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm f_148 (ATerm), ATerm t)
{
  static ATerm z_144 (ATerm t);
  static ATerm z_144 (ATerm t)
  {
    ATerm i_56 = t;
    int j_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_148(t);
        LocalPopChoice(j_56);
      }
    else
      {
        t = i_56;
        {
          ATerm w_144 = NULL,x_144 = NULL,y_144 = NULL;
          static ATerm r_10 (ATerm t);
          static ATerm r_10 (ATerm t)
          {
            ATerm p_71 = NULL;
            p_71 = t;
            t = (ATerm) ATmakeAppl(sym__2, p_71, not_null(y_144));
            t = z_144(t);
            return(t);
          }
          w_144 = t;
          if(match_cons(t, sym__2))
            {
              x_144 = ATgetArgument(t, 0);
              if(((y_144 != NULL) && (y_144 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                y_144 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = x_144;
          t = SRTS_all(r_10, t);
        }
      }
    return(t);
  }
  t = z_144(t);
  return(t);
}
ATerm rename_4_0 (ATerm m_147 (ATerm (ATerm), ATerm), ATerm n_147 (ATerm), ATerm o_147 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm p_147 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm d_145 = NULL;
  static ATerm t_145 (ATerm t);
  static ATerm t_145 (ATerm t)
  {
    static ATerm s_10 (ATerm t);
    static ATerm s_10 (ATerm t)
    {
      ATerm n_145 = NULL,o_145 = NULL,p_145 = NULL;
      n_145 = t;
      if(match_cons(t, sym__2))
        {
          o_145 = ATgetArgument(t, 0);
          p_145 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm k_56 = t;
        int l_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm y_10 (ATerm t);
            static ATerm y_10 (ATerm t)
            {
              ATerm s_145 = NULL;
              s_145 = t;
              t = (ATerm) ATmakeAppl(sym__2, s_145, p_145);
              t = lookup_0_0(t);
              return(t);
            }
            t = o_145;
            t = m_147(y_10, t);
            LocalPopChoice(l_56);
          }
        else
          {
            t = k_56;
            {
              ATerm m_72 = NULL,n_72 = NULL,o_72 = NULL;
              t = n_145;
              t = o_13(n_147, p_147, o_145, p_145, t);
              if(match_cons(t, sym__3))
                {
                  m_72 = ATgetArgument(t, 0);
                  n_72 = ATgetArgument(t, 1);
                  o_72 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = n_13(t_145, o_147, m_72, n_72, o_72, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(s_10, t);
    return(t);
  }
  d_145 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_145, (ATerm) ATempty);
  t = t_145(t);
  return(t);
}
static ATerm z_10 (ATerm t)
{
  ATerm m_56 = t;
  int n_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(n_56);
    }
  else
    {
      t = m_56;
      {
        ATerm o_56 = t;
        int p_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_146 = NULL,f_146 = NULL,g_146 = NULL,h_146 = NULL;
            if(match_cons(t, sym_SDefT_4))
              {
                e_146 = ATgetArgument(t, 0);
                f_146 = ATgetArgument(t, 1);
                g_146 = ATgetArgument(t, 2);
                h_146 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = g_146;
            t = map_1_0(c_11, t);
            LocalPopChoice(p_56);
          }
        else
          {
            t = o_56;
            {
              ATerm q_56 = t;
              int r_56 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Bind8_0_0(t);
                  LocalPopChoice(r_56);
                }
              else
                {
                  t = q_56;
                  t = dynrule_targs_1_0(d_11, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm c_11 (ATerm t)
{
  ATerm o_146 = NULL;
  ATerm s_56 = t;
  int t_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_146 = ATgetArgument(t, 0);
          {
            ATerm u_56 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_56);
      t = o_146;
    }
  else
    {
      t = s_56;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_146 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_146;
    }
  return(t);
}
static ATerm d_11 (ATerm t)
{
  t = map_1_0(e_11, t);
  return(t);
}
static ATerm e_11 (ATerm t)
{
  ATerm t_146 = NULL;
  ATerm v_56 = t;
  int w_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_146 = ATgetArgument(t, 0);
          {
            ATerm y_56 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_56);
      t = t_146;
    }
  else
    {
      t = v_56;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_146 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_146;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, z_10, tboundin_3_0, tpaste_1_0, t);
  t = srename_0_0(t);
  return(t);
}
static ATerm f_11 (ATerm t)
{
  ATerm i_77 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      i_77 = ATgetArgument(t, 0);
      {
        ATerm z_56 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = i_77;
  return(t);
}
static ATerm g_11 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_57 = ATgetArgument(t, 0);
      if(((ATgetType(c_57) != AT_LIST) || !(ATisEmpty(c_57))))
        _fail(t);
      {
        ATerm d_57 = ATgetArgument(t, 1);
        if(((ATgetType(d_57) != AT_LIST) || !(ATisEmpty(d_57))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_11 (ATerm t)
{
  ATerm k_77 = NULL,l_77 = NULL,o_77 = NULL,p_77 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_57 = ATgetArgument(t, 0);
      if(((ATgetType(e_57) == AT_LIST) && !(ATisEmpty(e_57))))
        {
          k_77 = ATgetFirst((ATermList) e_57);
          l_77 = (ATerm) ATgetNext((ATermList) e_57);
        }
      else
        _fail(t);
      {
        ATerm f_57 = ATgetArgument(t, 1);
        if(((ATgetType(f_57) == AT_LIST) && !(ATisEmpty(f_57))))
          {
            o_77 = ATgetFirst((ATermList) f_57);
            p_77 = (ATerm) ATgetNext((ATermList) f_57);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_77, o_77), (ATerm) ATmakeAppl(sym__2, l_77, p_77));
  return(t);
}
static ATerm i_11 (ATerm t)
{
  ATerm q_77 = NULL,s_77 = NULL;
  if(match_cons(t, sym__2))
    {
      q_77 = ATgetArgument(t, 0);
      s_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_77), q_77);
  return(t);
}
static ATerm j_11 (ATerm t)
{
  ATerm t_77 = NULL,u_77 = NULL;
  if(match_cons(t, sym__2))
    {
      t_77 = ATgetArgument(t, 0);
      u_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, t_77), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, u_77))));
  return(t);
}
static ATerm k_11 (ATerm t)
{
  t = term_e_17;
  return(t);
}
ATerm InlineCall_0_0 (ATerm t)
{
  ATerm z_148 = NULL,a_149 = NULL,b_149 = NULL,c_149 = NULL,d_149 = NULL;
  z_148 = t;
  if(match_cons(t, sym_CallT_3))
    {
      a_149 = ATgetArgument(t, 0);
      c_149 = ATgetArgument(t, 1);
      d_149 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = a_149;
  if(match_cons(t, sym_SVar_1))
    {
      b_149 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm g_57 = t;
    int h_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_74 = NULL,c_75 = NULL;
        t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, b_149), (ATerm)ATempty, (ATerm) ATempty);
        z_74 = t;
        t = term_e_17;
        c_75 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_e_17, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, b_149), (ATerm)ATempty, (ATerm) ATempty));
        t = j_7(c_75, z_74, t);
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        t = z_148;
        _fail(t);
        LocalPopChoice(h_57);
      }
    else
      {
        t = g_57;
        {
          ATerm i_57 = t;
          int j_57 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_75 = NULL,y_75 = NULL;
              t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, b_149), (ATerm)ATempty, (ATerm) ATempty);
              x_75 = t;
              t = term_e_17;
              y_75 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_e_17, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, b_149), (ATerm)ATempty, (ATerm) ATempty));
              t = j_7(y_75, x_75, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              t = z_148;
              _fail(t);
              LocalPopChoice(j_57);
            }
          else
            {
              t = i_57;
              {
                ATerm k_57 = t;
                int l_57 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm e_76 = NULL,f_76 = NULL,h_76 = NULL,p_76 = NULL,u_76 = NULL,v_76 = NULL,c_77 = NULL,e_77 = NULL,h_77 = NULL,a_78 = NULL,d_78 = NULL;
                    t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, b_149), (ATerm)ATempty, (ATerm) ATempty);
                    a_78 = t;
                    t = term_e_17;
                    d_78 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_e_17, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, b_149), (ATerm)ATempty, (ATerm) ATempty));
                    t = j_7(d_78, a_78, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm o_57 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) o_57) != ATmakeSymbol("d_0", 0, ATtrue)))
                          _fail(t);
                        e_76 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = e_76;
                    t = strename_0_0(t);
                    if(match_cons(t, sym_SDefT_4))
                      {
                        if((b_149 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        f_76 = ATgetArgument(t, 1);
                        p_76 = ATgetArgument(t, 2);
                        h_76 = ATgetArgument(t, 3);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__3, f_76, c_149, h_76);
                    t = substitute_args_0_0(t);
                    v_76 = t;
                    t = p_76;
                    t = map_1_0(f_11, t);
                    u_76 = t;
                    t = (ATerm) ATmakeAppl(sym__2, d_149, u_76);
                    t = genzip_4_0(g_11, h_11, i_11, j_11, t);
                    c_77 = t;
                    t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, b_149), (ATerm)ATempty, (ATerm) ATempty);
                    e_77 = t;
                    t = term_t_57;
                    h_77 = t;
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, b_149), (ATerm)ATempty, (ATerm) ATempty), term_t_57);
                    t = v_13(k_11, e_77, h_77, t);
                    t = (ATerm) ATmakeAppl(sym_Scope_2, u_76, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, c_77), v_76));
                    t = simplify_0_0(t);
                    LocalPopChoice(l_57);
                  }
                else
                  {
                    t = k_57;
                    {
                      ATerm q_78 = NULL,t_78 = NULL;
                      t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, b_149), (ATerm)ATempty, (ATerm) ATempty);
                      q_78 = t;
                      t = term_e_17;
                      t_78 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_e_17, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, b_149), (ATerm)ATempty, (ATerm) ATempty));
                      t = j_7(t_78, q_78, t);
                      if(!(match_cons(t, sym_Undefined_0)))
                        _fail(t);
                      t = z_148;
                      _fail(t);
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm u_57 = t;
  if((PushChoice() == 0))
    {
      ATerm i_149 = NULL,j_149 = NULL;
      if(match_cons(t, sym__2))
        {
          i_149 = ATgetArgument(t, 0);
          j_149 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, i_149, j_149);
      {
        ATerm v_57 = t;
        int w_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(i_149, j_149);
            LocalPopChoice(w_57);
          }
        else
          {
            t = v_57;
            t = SSL_gtr(i_149, j_149);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, i_149, j_149);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = u_57;
    }
  return(t);
}
ATerm foldr_3_0 (ATerm x_145 (ATerm), ATerm y_145 (ATerm), ATerm z_145 (ATerm), ATerm t)
{
  ATerm l_149 = NULL,m_149 = NULL,n_149 = NULL;
  l_149 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_149;
      t = x_145(t);
    }
  else
    {
      ATerm u_149 = NULL,v_149 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_149 = ATgetFirst((ATermList) t);
          n_149 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_149;
      t = z_145(t);
      u_149 = t;
      t = n_149;
      t = foldr_3_0(x_145, y_145, z_145, t);
      v_149 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_149, v_149);
      t = y_145(t);
    }
  return(t);
}
static ATerm m_11 (ATerm t)
{
  t = term_b_58;
  return(t);
}
static ATerm n_11 (ATerm t)
{
  ATerm a_79 = NULL,b_79 = NULL;
  if(match_cons(t, sym__2))
    {
      a_79 = ATgetArgument(t, 0);
      b_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_15(a_79, b_79, t);
  return(t);
}
ATerm occurrences_1_0 (ATerm z_142 (ATerm), ATerm t)
{
  ATerm y_149 = NULL,z_149 = NULL,a_150 = NULL,v_78 = NULL;
  a_150 = t;
  {
    ATerm i_58 = t;
    int l_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_142(t);
        t = term_o_17;
        LocalPopChoice(l_58);
      }
    else
      {
        t = i_58;
        t = term_b_58;
      }
  }
  y_149 = t;
  t = SSL_explode_term(a_150);
  if(match_cons(t, sym__2))
    {
      ATerm m_58 = ATgetArgument(t, 0);
      v_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_78;
  {
    static ATerm o_11 (ATerm t);
    static ATerm o_11 (ATerm t)
    {
      t = occurrences_1_0(z_142, t);
      return(t);
    }
    t = foldr_3_0(m_11, n_11, o_11, t);
  }
  z_149 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_149, z_149);
  t = n_15(y_149, z_149, t);
  return(t);
}
static ATerm t_13 (ATerm n_126 (ATerm), ATerm z_26, ATerm y_26, ATerm t)
{
  ATerm d_150 = NULL,e_150 = NULL;
  d_150 = t;
  t = y_26;
  {
    ATerm n_58 = t;
    if((PushChoice() == 0))
      {
        static ATerm r_11 (ATerm t);
        static ATerm r_11 (ATerm t)
        {
          if(match_cons(t, sym_CallT_3))
            {
              ATerm o_58 = ATgetArgument(t, 0);
              if(match_cons(o_58, sym_SVar_1))
                {
                  if((z_26 != ATgetArgument(o_58, 0)))
                    {
                      _fail(ATgetArgument(o_58, 0));
                    }
                }
              else
                _fail(t);
              {
                ATerm p_58 = ATgetArgument(t, 1);
              }
              {
                ATerm q_58 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(r_11, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_58;
      }
  }
  t = n_126(t);
  {
    static ATerm s_11 (ATerm t);
    static ATerm s_11 (ATerm t)
    {
      if(match_cons(t, sym_CallT_3))
        {
          ATerm r_58 = ATgetArgument(t, 0);
          if(match_cons(r_58, sym_SVar_1))
            {
              if((z_26 != ATgetArgument(r_58, 0)))
                {
                  _fail(ATgetArgument(r_58, 0));
                }
            }
          else
            _fail(t);
          {
            ATerm s_58 = ATgetArgument(t, 1);
          }
          {
            ATerm u_58 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      return(t);
    }
    t = occurrences_1_0(s_11, t);
  }
  e_150 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_150, term_o_17);
  t = leq_0_0(t);
  t = d_150;
  return(t);
}
static ATerm v_13 (ATerm t_136 (ATerm), ATerm i_37, ATerm g_37, ATerm t)
{
  ATerm f_150 = NULL,g_150 = NULL,h_150 = NULL,i_150 = NULL,j_150 = NULL,k_150 = NULL,l_150 = NULL,m_150 = NULL;
  i_150 = t;
  t = t_136(t);
  f_150 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_150, i_37, g_37);
  t = u_15(f_150, i_37, g_37, t);
  {
    ATerm v_58 = t;
    int w_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_150 = NULL;
        t = term_x_58;
        n_150 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_150, term_x_58);
        t = t_15(f_150, n_150, t);
        {
          ATerm b_59 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = b_59;
            }
        }
        LocalPopChoice(w_58);
      }
    else
      {
        t = v_58;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_150 = ATgetFirst((ATermList) t);
      h_150 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, f_150, term_x_58, (ATerm) ATinsert(CheckATermList(h_150), (ATerm) ATinsert(CheckATermList(g_150), i_37)));
  t = lookup_table_0_1(f_150, t);
  m_150 = t;
  t = term_x_58;
  j_150 = t;
  t = (ATerm) ATinsert(CheckATermList(h_150), (ATerm) ATinsert(CheckATermList(g_150), i_37));
  k_150 = t;
  t = m_150;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_150 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_15(j_150, k_150, l_150, t);
  t = i_150;
  return(t);
}
static ATerm x_13 (ATerm y_38, ATerm z_38, ATerm t)
{
  ATerm o_150 = NULL,p_150 = NULL;
  p_150 = t;
  {
    ATerm c_59 = t;
    int d_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, y_38, z_38);
        t = t_15(y_38, z_38, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm e_59 = ATgetFirst((ATermList) t);
            o_150 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(d_59);
        {
          ATerm q_150 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, y_38, z_38, o_150);
          t = lookup_table_0_1(y_38, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              q_150 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = x_15(z_38, o_150, q_150, t);
          t = (ATerm) ATmakeAppl(sym__3, y_38, z_38, o_150);
        }
      }
    else
      {
        t = c_59;
        {
          ATerm s_150 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, y_38, z_38);
          t = lookup_table_0_1(y_38, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              s_150 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_15(z_38, s_150, t);
          t = (ATerm) ATmakeAppl(sym__2, y_38, z_38);
        }
      }
  }
  t = p_150;
  return(t);
}
ATerm end_scope_1_0 (ATerm q_136 (ATerm), ATerm t)
{
  ATerm u_150 = NULL,v_150 = NULL,w_150 = NULL,x_150 = NULL,y_150 = NULL,z_150 = NULL,a_151 = NULL;
  x_150 = t;
  t = q_136(t);
  w_150 = t;
  {
    ATerm f_59 = t;
    int g_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_151 = NULL;
        t = term_x_58;
        b_151 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_150, term_x_58);
        t = t_15(w_150, b_151, t);
        {
          ATerm h_59 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = h_59;
            }
        }
        LocalPopChoice(g_59);
      }
    else
      {
        t = f_59;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_150 = ATgetFirst((ATermList) t);
      u_150 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, w_150, term_x_58, u_150);
  t = lookup_table_0_1(w_150, t);
  a_151 = t;
  t = term_x_58;
  y_150 = t;
  t = a_151;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_150 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_15(y_150, u_150, z_150, t);
  t = v_150;
  {
    static ATerm t_11 (ATerm t);
    static ATerm t_11 (ATerm t)
    {
      ATerm c_151 = NULL;
      c_151 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_150, c_151);
      t = x_13(w_150, c_151, t);
      return(t);
    }
    t = map_1_0(t_11, t);
  }
  t = x_150;
  return(t);
}
ATerm restore_always_2_0 (ATerm f_132 (ATerm), ATerm g_132 (ATerm), ATerm t)
{
  ATerm i_59 = t;
  int j_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_132(t);
      t = g_132(t);
      LocalPopChoice(j_59);
    }
  else
    {
      t = i_59;
      t = g_132(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm p_136 (ATerm), ATerm t)
{
  ATerm e_151 = NULL,f_151 = NULL,g_151 = NULL,h_151 = NULL,i_151 = NULL,j_151 = NULL,k_151 = NULL;
  f_151 = t;
  t = p_136(t);
  e_151 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_151, term_x_58);
  {
    ATerm k_59 = t;
    int l_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_151 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm n_59 = ATgetArgument(t, 0);
            ATerm o_59 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_x_58;
        o_151 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_151, term_x_58);
        t = t_15(e_151, o_151, t);
        LocalPopChoice(l_59);
      }
    else
      {
        t = k_59;
        t = (ATerm) ATempty;
      }
  }
  g_151 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_151, term_x_58, (ATerm) ATinsert(CheckATermList(g_151), (ATerm) ATempty));
  t = lookup_table_0_1(e_151, t);
  k_151 = t;
  t = term_x_58;
  h_151 = t;
  t = (ATerm) ATinsert(CheckATermList(g_151), (ATerm) ATempty);
  i_151 = t;
  t = k_151;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_151 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_15(h_151, i_151, j_151, t);
  t = f_151;
  return(t);
}
ATerm scope_2_0 (ATerm r_136 (ATerm), ATerm s_136 (ATerm), ATerm t)
{
  static ATerm u_11 (ATerm t);
  static ATerm u_11 (ATerm t)
  {
    t = end_scope_1_0(r_136, t);
    return(t);
  }
  t = begin_scope_1_0(r_136, t);
  t = restore_always_2_0(s_136, u_11, t);
  return(t);
}
static ATerm v_11 (ATerm t)
{
  t = term_e_17;
  return(t);
}
static ATerm x_11 (ATerm t)
{
  t = term_f_17;
  return(t);
}
static ATerm a_12 (ATerm t)
{
  t = term_e_17;
  return(t);
}
ATerm inline_sdef_0_0 (ATerm t)
{
  static ATerm w_11 (ATerm t);
  static ATerm w_11 (ATerm t)
  {
    static ATerm y_11 (ATerm t);
    static ATerm y_11 (ATerm t)
    {
      ATerm p_59 = t;
      int q_59 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_151 = NULL,u_151 = NULL,v_151 = NULL;
          t_151 = t;
          {
            ATerm r_59 = t;
            int w_59 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    u_151 = ATgetArgument(t, 0);
                    {
                      ATerm x_59 = ATgetArgument(t, 1);
                    }
                    {
                      ATerm y_59 = ATgetArgument(t, 2);
                    }
                    {
                      ATerm z_59 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(w_59);
                {
                  ATerm y_151 = NULL,z_151 = NULL;
                  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, u_151), (ATerm)ATempty, (ATerm) ATempty);
                  y_151 = t;
                  t = term_t_57;
                  z_151 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, u_151), (ATerm)ATempty, (ATerm) ATempty), term_t_57);
                  t = v_13(a_12, y_151, z_151, t);
                  t = t_151;
                }
              }
            else
              {
                t = r_59;
                if(match_cons(t, sym_Let_2))
                  {
                    u_151 = ATgetArgument(t, 0);
                    v_151 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = u_151;
                {
                  static ATerm b_12 (ATerm t);
                  static ATerm b_12 (ATerm t)
                  {
                    ATerm c_152 = NULL,d_152 = NULL;
                    if(match_cons(t, sym_SDefT_4))
                      {
                        c_152 = ATgetArgument(t, 0);
                        {
                          ATerm a_60 = ATgetArgument(t, 1);
                        }
                        {
                          ATerm b_60 = ATgetArgument(t, 2);
                        }
                        d_152 = ATgetArgument(t, 3);
                      }
                    else
                      _fail(t);
                    {
                      static ATerm c_12 (ATerm t);
                      static ATerm c_12 (ATerm t)
                      {
                        t = v_151;
                        return(t);
                      }
                      t = t_13(c_12, c_152, d_152, t);
                    }
                    t = AddSDef_0_0(t);
                    return(t);
                  }
                  t = map_1_0(b_12, t);
                }
                t = (ATerm) ATmakeAppl(sym_Let_2, u_151, v_151);
              }
          }
          LocalPopChoice(q_59);
        }
      else
        {
          t = p_59;
          t = repeat_2_0(InlineCall_0_0, _id, t);
        }
      t = SRTS_all(inline_sdef_0_0, t);
      return(t);
    }
    t = scope_2_0(x_11, y_11, t);
    return(t);
  }
  t = scope_2_0(v_11, w_11, t);
  return(t);
}
ATerm topdown_1_0 (ATerm u_128 (ATerm), ATerm t)
{
  static ATerm d_12 (ATerm t);
  static ATerm d_12 (ATerm t)
  {
    t = topdown_1_0(u_128, t);
    return(t);
  }
  t = u_128(t);
  t = SRTS_all(d_12, t);
  return(t);
}
static ATerm e_12 (ATerm t)
{
  ATerm c_60 = t;
  int d_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm e_60 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(d_60);
      {
        ATerm h_152 = NULL,i_152 = NULL;
        h_152 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm f_60 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        i_152 = t;
        t = SSLgetAnnotations(h_152);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm g_60 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) g_60) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm h_60 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(h_60) != AT_LIST) || !(ATisEmpty(h_60))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = i_152;
      }
    }
  else
    {
      t = c_60;
      {
        ATerm i_60 = t;
        int j_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm k_60 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) k_60) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm l_60 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(j_60);
            _fail(t);
          }
        else
          {
            t = i_60;
          }
      }
    }
  return(t);
}
static ATerm z_13 (ATerm g_95, ATerm f_95, ATerm t)
{
  t = g_95;
  t = topdown_1_0(e_12, t);
  t = (ATerm) ATmakeAppl(sym_Build_1, g_95);
  return(t);
}
ATerm MatchBuildIdemVar_0_0 (ATerm t)
{
  ATerm r_152 = NULL,s_152 = NULL,u_152 = NULL,v_152 = NULL,w_152 = NULL,x_152 = NULL,y_152 = NULL,z_152 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      u_152 = ATgetArgument(t, 0);
      x_152 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_152;
  if(match_cons(t, sym_Match_1))
    {
      v_152 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_152;
  if(match_cons(t, sym_Var_1))
    {
      w_152 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_152;
  if(match_cons(t, sym_Seq_2))
    {
      y_152 = ATgetArgument(t, 0);
      s_152 = ATgetArgument(t, 1);
      t = y_152;
      if(match_cons(t, sym_Build_1))
        {
          z_152 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_152;
      if(match_cons(t, sym_Var_1))
        {
          r_152 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_152;
      if((w_152 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, w_152)), s_152);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          y_152 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_152;
      if(match_cons(t, sym_Var_1))
        {
          z_152 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_152;
      if((w_152 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, w_152));
    }
  return(t);
}
ATerm BuildMatchIdem_0_0 (ATerm t)
{
  ATerm h_153 = NULL,i_153 = NULL,k_153 = NULL,l_153 = NULL,m_153 = NULL,n_153 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      k_153 = ATgetArgument(t, 0);
      m_153 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_153;
  if(match_cons(t, sym_Build_1))
    {
      l_153 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_153;
  if(match_cons(t, sym_Seq_2))
    {
      n_153 = ATgetArgument(t, 0);
      i_153 = ATgetArgument(t, 1);
      t = n_153;
      if(match_cons(t, sym_Match_1))
        {
          h_153 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_153;
      if((l_153 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, l_153), i_153);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          n_153 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_153;
      if((l_153 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Build_1, l_153);
    }
  return(t);
}
ATerm MatchIdem_0_0 (ATerm t)
{
  ATerm v_153 = NULL,w_153 = NULL,y_153 = NULL,z_153 = NULL,a_154 = NULL,b_154 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      y_153 = ATgetArgument(t, 0);
      a_154 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_153;
  if(match_cons(t, sym_Match_1))
    {
      z_153 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_154;
  if(match_cons(t, sym_Seq_2))
    {
      b_154 = ATgetArgument(t, 0);
      w_153 = ATgetArgument(t, 1);
      t = b_154;
      if(match_cons(t, sym_Match_1))
        {
          v_153 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_153;
      if((z_153 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, z_153), w_153);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          b_154 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_154;
      if((z_153 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, z_153);
    }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm k_154 = NULL,l_154 = NULL,m_154 = NULL,o_154 = NULL,q_154 = NULL,r_154 = NULL,s_154 = NULL,t_154 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      o_154 = ATgetArgument(t, 0);
      q_154 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_154;
  if(match_cons(t, sym_Build_1))
    {
      ATerm m_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_154;
  if(match_cons(t, sym_Seq_2))
    {
      r_154 = ATgetArgument(t, 0);
      s_154 = ATgetArgument(t, 1);
      t = r_154;
      if(match_cons(t, sym_PrimT_3))
        {
          k_154 = ATgetArgument(t, 0);
          l_154 = ATgetArgument(t, 1);
          m_154 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, k_154, l_154, m_154), s_154);
    }
  else
    {
      if(match_cons(t, sym_PrimT_3))
        {
          r_154 = ATgetArgument(t, 0);
          s_154 = ATgetArgument(t, 1);
          t_154 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, r_154, s_154, t_154);
    }
  return(t);
}
ATerm BuildBuild_0_0 (ATerm t)
{
  ATerm f_155 = NULL,g_155 = NULL,i_155 = NULL,k_155 = NULL,l_155 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      i_155 = ATgetArgument(t, 0);
      k_155 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_155;
  if(match_cons(t, sym_Build_1))
    {
      ATerm n_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_155;
  if(match_cons(t, sym_Seq_2))
    {
      l_155 = ATgetArgument(t, 0);
      g_155 = ATgetArgument(t, 1);
      t = l_155;
      if(match_cons(t, sym_Build_1))
        {
          f_155 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, f_155), g_155);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          l_155 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Build_1, l_155);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm k_133 (ATerm), ATerm l_133 (ATerm), ATerm m_133 (ATerm), ATerm n_133 (ATerm), ATerm t)
{
  static ATerm v_155 (ATerm t);
  static ATerm v_155 (ATerm t)
  {
    ATerm o_60 = t;
    int q_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_133(t);
        LocalPopChoice(q_60);
      }
    else
      {
        t = o_60;
        {
          ATerm p_155 = NULL,q_155 = NULL,r_155 = NULL,s_155 = NULL,t_155 = NULL,u_155 = NULL,h_14 = NULL;
          t = l_133(t);
          u_155 = t;
          if(match_cons(t, sym__2))
            {
              q_155 = ATgetArgument(t, 0);
              r_155 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(u_155);
          p_155 = t;
          t = q_155;
          t = n_133(t);
          s_155 = t;
          t = r_155;
          t = v_155(t);
          t_155 = t;
          t = (ATerm) ATmakeAppl(sym__2, s_155, t_155);
          h_14 = t;
          t = SSLsetAnnotations(h_14, p_155);
          t = m_133(t);
        }
      }
    return(t);
  }
  t = v_155(t);
  return(t);
}
static ATerm i_12 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_60 = ATgetArgument(t, 0);
      if(((ATgetType(r_60) != AT_LIST) || !(ATisEmpty(r_60))))
        _fail(t);
      {
        ATerm s_60 = ATgetArgument(t, 1);
        if(((ATgetType(s_60) != AT_LIST) || !(ATisEmpty(s_60))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_12 (ATerm t)
{
  ATerm z_156 = NULL,a_157 = NULL,d_157 = NULL,e_157 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_60 = ATgetArgument(t, 0);
      if(((ATgetType(t_60) == AT_LIST) && !(ATisEmpty(t_60))))
        {
          z_156 = ATgetFirst((ATermList) t_60);
          a_157 = (ATerm) ATgetNext((ATermList) t_60);
        }
      else
        _fail(t);
      {
        ATerm u_60 = ATgetArgument(t, 1);
        if(((ATgetType(u_60) == AT_LIST) && !(ATisEmpty(u_60))))
          {
            d_157 = ATgetFirst((ATermList) u_60);
            e_157 = (ATerm) ATgetNext((ATermList) u_60);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_156, d_157), (ATerm) ATmakeAppl(sym__2, a_157, e_157));
  return(t);
}
static ATerm k_12 (ATerm t)
{
  ATerm f_157 = NULL,g_157 = NULL;
  if(match_cons(t, sym__2))
    {
      f_157 = ATgetArgument(t, 0);
      g_157 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_157), f_157);
  return(t);
}
static ATerm l_12 (ATerm t)
{
  ATerm h_157 = NULL,i_157 = NULL;
  if(match_cons(t, sym__2))
    {
      h_157 = ATgetArgument(t, 0);
      i_157 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, h_157), (ATerm) ATmakeAppl(sym_Match_1, i_157));
  return(t);
}
static ATerm m_12 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_60 = ATgetArgument(t, 0);
      if(((ATgetType(v_60) != AT_LIST) || !(ATisEmpty(v_60))))
        _fail(t);
      {
        ATerm w_60 = ATgetArgument(t, 1);
        if(((ATgetType(w_60) != AT_LIST) || !(ATisEmpty(w_60))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_12 (ATerm t)
{
  ATerm n_157 = NULL,o_157 = NULL,p_157 = NULL,q_157 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_60 = ATgetArgument(t, 0);
      if(((ATgetType(x_60) == AT_LIST) && !(ATisEmpty(x_60))))
        {
          n_157 = ATgetFirst((ATermList) x_60);
          o_157 = (ATerm) ATgetNext((ATermList) x_60);
        }
      else
        _fail(t);
      {
        ATerm y_60 = ATgetArgument(t, 1);
        if(((ATgetType(y_60) == AT_LIST) && !(ATisEmpty(y_60))))
          {
            p_157 = ATgetFirst((ATermList) y_60);
            q_157 = (ATerm) ATgetNext((ATermList) y_60);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_157, p_157), (ATerm) ATmakeAppl(sym__2, o_157, q_157));
  return(t);
}
static ATerm p_12 (ATerm t)
{
  ATerm r_157 = NULL,s_157 = NULL;
  if(match_cons(t, sym__2))
    {
      r_157 = ATgetArgument(t, 0);
      s_157 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_157), r_157);
  return(t);
}
static ATerm q_12 (ATerm t)
{
  ATerm t_157 = NULL,u_157 = NULL;
  if(match_cons(t, sym__2))
    {
      t_157 = ATgetArgument(t, 0);
      u_157 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, t_157), (ATerm) ATmakeAppl(sym_Match_1, u_157));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm d_156 = NULL,e_156 = NULL,f_156 = NULL,h_156 = NULL,i_156 = NULL,j_156 = NULL,k_156 = NULL,l_156 = NULL,m_156 = NULL,n_156 = NULL,o_156 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      h_156 = ATgetArgument(t, 0);
      l_156 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_156;
  if(match_cons(t, sym_Build_1))
    {
      i_156 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_156;
  if(match_cons(t, sym_Op_2))
    {
      j_156 = ATgetArgument(t, 0);
      k_156 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_156;
  if(match_cons(t, sym_Seq_2))
    {
      m_156 = ATgetArgument(t, 0);
      f_156 = ATgetArgument(t, 1);
      {
        ATerm y_156 = NULL;
        t = m_156;
        if(match_cons(t, sym_Match_1))
          {
            n_156 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = n_156;
        if(match_cons(t, sym_Op_2))
          {
            d_156 = ATgetArgument(t, 0);
            e_156 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_156;
        if((j_156 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym__2, k_156, e_156);
        t = genzip_4_0(i_12, j_12, k_12, l_12, t);
        y_156 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, y_156), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, j_156, k_156)), f_156));
      }
    }
  else
    {
      ATerm m_157 = NULL;
      if(match_cons(t, sym_Match_1))
        {
          m_156 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_156;
      if(match_cons(t, sym_Op_2))
        {
          n_156 = ATgetArgument(t, 0);
          o_156 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = n_156;
      if((j_156 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, k_156, o_156);
      t = genzip_4_0(m_12, o_12, p_12, q_12, t);
      m_157 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, m_157), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, j_156, k_156)));
    }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm q_158 = NULL,t_158 = NULL,w_158 = NULL,x_158 = NULL,y_158 = NULL,a_159 = NULL,b_159 = NULL,c_159 = NULL;
  t_158 = t;
  if(match_cons(t, sym_Seq_2))
    {
      w_158 = ATgetArgument(t, 0);
      a_159 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_158;
  if(match_cons(t, sym_Build_1))
    {
      x_158 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_158;
  if(match_cons(t, sym_Op_2))
    {
      y_158 = ATgetArgument(t, 0);
      {
        ATerm e_61 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = a_159;
  {
    ATerm g_61 = t;
    int h_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Seq_2))
          {
            b_159 = ATgetArgument(t, 0);
            {
              ATerm j_61 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(h_61);
        t = b_159;
        if(match_cons(t, sym_Match_1))
          {
            c_159 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = c_159;
        if(match_cons(t, sym_Op_2))
          {
            q_158 = ATgetArgument(t, 0);
            {
              ATerm k_61 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, y_158, q_158);
        {
          ATerm o_61 = t;
          if((PushChoice() == 0))
            {
              ATerm j_79 = NULL;
              if(match_cons(t, sym__2))
                {
                  j_79 = ATgetArgument(t, 0);
                  if((j_79 != ATgetArgument(t, 1)))
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
              t = o_61;
            }
        }
        t = term_m_20;
      }
    else
      {
        t = g_61;
        if(match_cons(t, sym_Match_1))
          {
            b_159 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = b_159;
        if(match_cons(t, sym_Op_2))
          {
            c_159 = ATgetArgument(t, 0);
            {
              ATerm p_61 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, y_158, c_159);
        {
          ATerm q_61 = t;
          if((PushChoice() == 0))
            {
              ATerm f_80 = NULL;
              if(match_cons(t, sym__2))
                {
                  f_80 = ATgetArgument(t, 0);
                  if((f_80 != ATgetArgument(t, 1)))
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
              t = q_61;
            }
        }
        t = term_m_20;
      }
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm y_129 (ATerm), ATerm t)
{
  static ATerm g_159 (ATerm t);
  static ATerm g_159 (ATerm t)
  {
    ATerm r_61 = t;
    int s_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_129(t);
        LocalPopChoice(s_61);
      }
    else
      {
        t = r_61;
        t = SRTS_one(g_159, t);
      }
    return(t);
  }
  t = g_159(t);
  return(t);
}
ATerm at_end_1_0 (ATerm p_140 (ATerm), ATerm t)
{
  static ATerm b_160 (ATerm t);
  static ATerm b_160 (ATerm t)
  {
    ATerm y_159 = NULL,z_159 = NULL,a_160 = NULL;
    a_160 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_159 = ATgetFirst((ATermList) t);
        z_159 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm g_81 = NULL,j_81 = NULL,j_14 = NULL;
          t = SSLgetAnnotations(a_160);
          g_81 = t;
          t = z_159;
          t = b_160(t);
          j_81 = t;
          t = (ATerm) ATinsert(CheckATermList(j_81), y_159);
          j_14 = t;
          t = SSLsetAnnotations(j_14, g_81);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = a_160;
        t = p_140(t);
      }
    return(t);
  }
  t = b_160(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm i_159 = NULL,j_159 = NULL,k_159 = NULL;
  i_159 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_159;
    }
  else
    {
      static ATerm s_12 (ATerm t);
      static ATerm s_12 (ATerm t)
      {
        t = not_null(k_159);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_159 = ATgetFirst((ATermList) t);
          if(((k_159 != NULL) && (k_159 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            k_159 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_159;
      t = at_end_1_0(s_12, t);
    }
  return(t);
}
static ATerm n_160 (ATerm f_160, ATerm t)
{
  ATerm g_160 = NULL;
  t = SSL_explode_term(f_160);
  if(match_cons(t, sym__2))
    {
      ATerm u_61 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_61) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      g_160 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_160;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm i_160 = NULL,j_160 = NULL,k_160 = NULL;
  k_160 = t;
  if(match_cons(t, sym__2))
    {
      i_160 = ATgetArgument(t, 0);
      j_160 = ATgetArgument(t, 1);
      {
        ATerm v_61 = t;
        int w_61 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm t_12 (ATerm t);
            static ATerm t_12 (ATerm t)
            {
              t = j_160;
              return(t);
            }
            t = i_160;
            t = at_end_1_0(t_12, t);
            LocalPopChoice(w_61);
          }
        else
          {
            t = v_61;
            t = n_160(k_160, t);
          }
      }
    }
  else
    {
      t = n_160(k_160, t);
    }
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm g_161 = NULL,h_161 = NULL,i_161 = NULL,j_161 = NULL,k_161 = NULL,l_161 = NULL,m_161 = NULL,n_161 = NULL,o_161 = NULL,p_161 = NULL,q_161 = NULL,r_161 = NULL,s_161 = NULL;
  g_161 = t;
  if(match_cons(t, sym_Let_2))
    {
      h_161 = ATgetArgument(t, 0);
      o_161 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_161;
  if(match_cons(t, sym_Let_2))
    {
      p_161 = ATgetArgument(t, 0);
      r_161 = ATgetArgument(t, 1);
      {
        ATerm w_161 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, h_161, p_161);
        t = conc_0_0(t);
        w_161 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, w_161, r_161);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          p_161 = ATgetArgument(t, 0);
          r_161 = ATgetArgument(t, 1);
          s_161 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = h_161;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_161 = ATgetFirst((ATermList) t);
          n_161 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_161;
      if(match_cons(t, sym_SDefT_4))
        {
          j_161 = ATgetArgument(t, 0);
          k_161 = ATgetArgument(t, 1);
          l_161 = ATgetArgument(t, 2);
          m_161 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = k_161;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = l_161;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = n_161;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = p_161;
      if(match_cons(t, sym_SVar_1))
        {
          q_161 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_161;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = s_161;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = q_161;
      if((j_161 != t))
        {
          _fail(t);
        }
      t = m_161;
      {
        ATerm x_61 = t;
        if((PushChoice() == 0))
          {
            static ATerm u_12 (ATerm t);
            static ATerm u_12 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm y_61 = ATgetArgument(t, 0);
                  if(match_cons(y_61, sym_SVar_1))
                    {
                      if((j_161 != ATgetArgument(y_61, 0)))
                        {
                          _fail(ATgetArgument(y_61, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm z_61 = ATgetArgument(t, 1);
                    if(((ATgetType(z_61) != AT_LIST) || !(ATisEmpty(z_61))))
                      _fail(t);
                  }
                  {
                    ATerm a_62 = ATgetArgument(t, 2);
                    if(((ATgetType(a_62) != AT_LIST) || !(ATisEmpty(a_62))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1_0(u_12, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = x_61;
          }
      }
      t = m_161;
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm f_162 = NULL,g_162 = NULL,h_162 = NULL,i_162 = NULL,j_162 = NULL,k_162 = NULL,m_162 = NULL,n_162 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      m_162 = ATgetArgument(t, 0);
      t = m_162;
      if(match_cons(t, sym_Seq_2))
        {
          k_162 = ATgetArgument(t, 0);
          g_162 = ATgetArgument(t, 1);
          t = k_162;
          if(match_cons(t, sym_Where_1))
            {
              f_162 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = g_162;
          if(match_cons(t, sym_Seq_2))
            {
              h_162 = ATgetArgument(t, 0);
              j_162 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = h_162;
          if(match_cons(t, sym_Build_1))
            {
              i_162 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, f_162, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, i_162), j_162)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              k_162 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, k_162);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          m_162 = ATgetArgument(t, 0);
          t = m_162;
          if(match_cons(t, sym_Test_1))
            {
              k_162 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, k_162);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              m_162 = ATgetArgument(t, 0);
              t = m_162;
              if(match_cons(t, sym_Not_1))
                {
                  k_162 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, k_162);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  m_162 = ATgetArgument(t, 0);
                  n_162 = ATgetArgument(t, 1);
                  t = n_162;
                  if((m_162 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      m_162 = ATgetArgument(t, 0);
                      n_162 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = n_162;
                  if((m_162 != t))
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
  ATerm b_163 = NULL,c_163 = NULL,d_163 = NULL,e_163 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      b_163 = ATgetArgument(t, 0);
      e_163 = ATgetArgument(t, 1);
      t = b_163;
      if(match_cons(t, sym_LChoice_2))
        {
          c_163 = ATgetArgument(t, 0);
          d_163 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, c_163, (ATerm) ATmakeAppl(sym_LChoice_2, d_163, e_163));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          b_163 = ATgetArgument(t, 0);
          e_163 = ATgetArgument(t, 1);
          t = b_163;
          if(match_cons(t, sym_Seq_2))
            {
              c_163 = ATgetArgument(t, 0);
              d_163 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, c_163, (ATerm) ATmakeAppl(sym_Seq_2, d_163, e_163));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              b_163 = ATgetArgument(t, 0);
              e_163 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_163;
          if(match_cons(t, sym_Choice_2))
            {
              c_163 = ATgetArgument(t, 0);
              d_163 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, c_163, (ATerm) ATmakeAppl(sym_Choice_2, d_163, e_163));
        }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm s_163 = NULL,t_163 = NULL,u_163 = NULL,w_163 = NULL,x_163 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      w_163 = ATgetArgument(t, 0);
      x_163 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, w_163, x_163);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          w_163 = ATgetArgument(t, 0);
          t = w_163;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              s_163 = ATgetFirst((ATermList) t);
              t_163 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, s_163, (ATerm) ATmakeAppl(sym_LChoices_1, t_163));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_m_20;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              w_163 = ATgetArgument(t, 0);
              t = w_163;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  s_163 = ATgetFirst((ATermList) t);
                  t_163 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, s_163, (ATerm) ATmakeAppl(sym_Choices_1, t_163));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_m_20;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  w_163 = ATgetArgument(t, 0);
                  t = w_163;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      s_163 = ATgetFirst((ATermList) t);
                      t_163 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, s_163, (ATerm) ATmakeAppl(sym_Seqs_1, t_163));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_y_19;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      w_163 = ATgetArgument(t, 0);
                      x_163 = ATgetArgument(t, 1);
                      u_163 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, x_163, (ATerm) ATmakeAppl(sym_Op_2, term_d_38, (ATerm) ATinsert(ATinsert(ATempty, u_163), w_163)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          w_163 = ATgetArgument(t, 0);
                          x_163 = ATgetArgument(t, 1);
                          u_163 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, u_163)), w_163), (ATerm) ATmakeAppl(sym_Build_1, x_163)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              w_163 = ATgetArgument(t, 0);
                              x_163 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, w_163, (ATerm) ATmakeAppl(sym_Match_1, x_163));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  w_163 = ATgetArgument(t, 0);
                                  x_163 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, w_163), x_163);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      w_163 = ATgetArgument(t, 0);
                                      x_163 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, x_163), w_163);
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
static ATerm v_12 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm k_165 = NULL,l_165 = NULL,m_165 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      k_165 = ATgetArgument(t, 0);
      t = k_165;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_m_20;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          k_165 = ATgetArgument(t, 0);
          t = k_165;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_y_19;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              k_165 = ATgetArgument(t, 0);
              l_165 = ATgetArgument(t, 1);
              t = k_165;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_m_20;
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  k_165 = ATgetArgument(t, 0);
                  l_165 = ATgetArgument(t, 1);
                  t = l_165;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_m_20;
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      k_165 = ATgetArgument(t, 0);
                      l_165 = ATgetArgument(t, 1);
                      t = l_165;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = term_m_20;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          k_165 = ATgetArgument(t, 0);
                          t = k_165;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_m_20;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              k_165 = ATgetArgument(t, 0);
                              t = k_165;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_m_20;
                            }
                          else
                            {
                              if(match_cons(t, sym_Path_2))
                                {
                                  k_165 = ATgetArgument(t, 0);
                                  l_165 = ATgetArgument(t, 1);
                                  t = l_165;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_m_20;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      k_165 = ATgetArgument(t, 0);
                                      l_165 = ATgetArgument(t, 1);
                                      t = l_165;
                                      t = fetch_1_0(v_12, t);
                                      t = term_m_20;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          k_165 = ATgetArgument(t, 0);
                                          l_165 = ATgetArgument(t, 1);
                                          t = l_165;
                                          if(match_cons(t, sym_Fail_0))
                                            {
                                              t = k_165;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = l_165;
                                                }
                                              else
                                                {
                                                  t = k_165;
                                                }
                                            }
                                          else
                                            {
                                              t = k_165;
                                              if(!(match_cons(t, sym_Fail_0)))
                                                _fail(t);
                                              t = l_165;
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              k_165 = ATgetArgument(t, 0);
                                              l_165 = ATgetArgument(t, 1);
                                              t = l_165;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = k_165;
                                                  if(match_cons(t, sym_Fail_0))
                                                    {
                                                      t = l_165;
                                                    }
                                                  else
                                                    {
                                                      t = k_165;
                                                    }
                                                }
                                              else
                                                {
                                                  t = k_165;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = l_165;
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  k_165 = ATgetArgument(t, 0);
                                                  t = k_165;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = term_m_20;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      k_165 = ATgetArgument(t, 0);
                                                      l_165 = ATgetArgument(t, 1);
                                                      m_165 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = m_165;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, k_165, l_165);
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
  ATerm p_166 = NULL,r_166 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      r_166 = ATgetArgument(t, 0);
      t = r_166;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_y_19;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          r_166 = ATgetArgument(t, 0);
          t = r_166;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_m_20;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              r_166 = ATgetArgument(t, 0);
              p_166 = ATgetArgument(t, 1);
              t = p_166;
              if(match_cons(t, sym_Id_0))
                {
                  t = r_166;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = p_166;
                    }
                  else
                    {
                      t = r_166;
                    }
                }
              else
                {
                  t = r_166;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = p_166;
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  r_166 = ATgetArgument(t, 0);
                  p_166 = ATgetArgument(t, 1);
                  t = r_166;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_y_19;
                }
              else
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      r_166 = ATgetArgument(t, 0);
                      p_166 = ATgetArgument(t, 1);
                      t = p_166;
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = term_y_19;
                    }
                  else
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          r_166 = ATgetArgument(t, 0);
                          p_166 = ATgetArgument(t, 1);
                          t = p_166;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = term_y_19;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              r_166 = ATgetArgument(t, 0);
                              t = r_166;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_y_19;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  r_166 = ATgetArgument(t, 0);
                                  t = r_166;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_y_19;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      r_166 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = r_166;
                                  if(!(match_cons(t, sym_Wld_0)))
                                    _fail(t);
                                  t = term_y_19;
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
  ATerm b_62 = t;
  int c_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      LocalPopChoice(c_62);
    }
  else
    {
      t = b_62;
      {
        ATerm d_62 = t;
        int g_62 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            LocalPopChoice(g_62);
          }
        else
          {
            t = d_62;
            {
              ATerm h_62 = t;
              int l_62 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(l_62);
                }
              else
                {
                  t = h_62;
                  {
                    ATerm m_62 = t;
                    int n_62 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        LocalPopChoice(n_62);
                      }
                    else
                      {
                        t = m_62;
                        {
                          ATerm s_62 = t;
                          int u_62 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              LocalPopChoice(u_62);
                            }
                          else
                            {
                              t = s_62;
                              {
                                ATerm v_62 = t;
                                int a_63 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm g_167 = NULL,h_167 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        g_167 = ATgetArgument(t, 0);
                                        h_167 = ATgetArgument(t, 1);
                                        t = g_167;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = h_167;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            g_167 = ATgetArgument(t, 0);
                                            h_167 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = g_167;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = h_167;
                                      }
                                    LocalPopChoice(a_63);
                                  }
                                else
                                  {
                                    t = v_62;
                                    {
                                      ATerm b_63 = t;
                                      int f_63 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          LocalPopChoice(f_63);
                                        }
                                      else
                                        {
                                          t = b_63;
                                          {
                                            ATerm g_63 = t;
                                            int u_63 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = MisMatch_0_0(t);
                                                LocalPopChoice(u_63);
                                              }
                                            else
                                              {
                                                t = g_63;
                                                {
                                                  ATerm w_63 = t;
                                                  int x_63 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = BuildMatchFusion_0_0(t);
                                                      LocalPopChoice(x_63);
                                                    }
                                                  else
                                                    {
                                                      t = w_63;
                                                      {
                                                        ATerm y_63 = t;
                                                        int z_63 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = BuildBuild_0_0(t);
                                                            LocalPopChoice(z_63);
                                                          }
                                                        else
                                                          {
                                                            t = y_63;
                                                            {
                                                              ATerm a_64 = t;
                                                              int b_64 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = BuildPrim_0_0(t);
                                                                  LocalPopChoice(b_64);
                                                                }
                                                              else
                                                                {
                                                                  t = a_64;
                                                                  {
                                                                    ATerm c_64 = t;
                                                                    int e_64 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = MatchIdem_0_0(t);
                                                                        LocalPopChoice(e_64);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = c_64;
                                                                        {
                                                                          ATerm f_64 = t;
                                                                          int g_64 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = BuildMatchIdem_0_0(t);
                                                                              LocalPopChoice(g_64);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = f_64;
                                                                              {
                                                                                ATerm i_64 = t;
                                                                                int j_64 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = MatchBuildIdemVar_0_0(t);
                                                                                    LocalPopChoice(j_64);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = i_64;
                                                                                    {
                                                                                      ATerm k_167 = NULL,l_167 = NULL,m_167 = NULL,n_167 = NULL;
                                                                                      l_167 = t;
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          m_167 = ATgetArgument(t, 0);
                                                                                          n_167 = ATgetArgument(t, 1);
                                                                                          t = m_167;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              k_167 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = l_167;
                                                                                          t = z_13(k_167, n_167, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_As_2))
                                                                                            {
                                                                                              m_167 = ATgetArgument(t, 0);
                                                                                              n_167 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = m_167;
                                                                                          if(!(match_cons(t, sym_Wld_0)))
                                                                                            _fail(t);
                                                                                          t = n_167;
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
ATerm repeat_2_0 (ATerm t_134 (ATerm), ATerm u_134 (ATerm), ATerm t)
{
  static ATerm r_167 (ATerm t);
  static ATerm r_167 (ATerm t)
  {
    ATerm n_64 = t;
    int p_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_134(t);
        t = r_167(t);
        LocalPopChoice(p_64);
      }
    else
      {
        t = n_64;
        t = u_134(t);
      }
    return(t);
  }
  t = r_167(t);
  return(t);
}
ATerm downup_1_0 (ATerm w_128 (ATerm), ATerm t)
{
  t = w_128(t);
  {
    static ATerm x_12 (ATerm t);
    static ATerm x_12 (ATerm t)
    {
      t = downup_1_0(w_128, t);
      return(t);
    }
    t = SRTS_all(x_12, t);
  }
  t = w_128(t);
  return(t);
}
static ATerm y_12 (ATerm t)
{
  t = downup_1_0(c_13, t);
  {
    ATerm s_64 = t;
    int v_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = inlineable_0_0(t);
        t = AddSDef_0_0(t);
        LocalPopChoice(v_64);
      }
    else
      {
        t = s_64;
      }
  }
  return(t);
}
static ATerm c_13 (ATerm t)
{
  t = repeat_2_0(Simplify_0_0, _id, t);
  return(t);
}
static ATerm e_13 (ATerm t)
{
  t = inline_sdef_0_0(t);
  {
    ATerm z_64 = t;
    int a_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = inlineable_0_0(t);
        t = AddSDef_0_0(t);
        LocalPopChoice(a_65);
      }
    else
      {
        t = z_64;
      }
  }
  return(t);
}
ATerm inline_sdefs_0_0 (ATerm t)
{
  t = map_1_0(y_12, t);
  t = map_1_0(e_13, t);
  return(t);
}
static ATerm f_15 (ATerm f_69, ATerm g_69, ATerm t)
{
  ATerm a_168 = NULL;
  t = SSL_fputc(f_69, g_69);
  a_168 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_168);
  return(t);
}
static ATerm g_15 (ATerm o_34, ATerm p_34, ATerm t)
{
  ATerm b_168 = NULL;
  t = SSL_write_term_to_stream_text(o_34, p_34);
  b_168 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_168);
  return(t);
}
static ATerm i_15 (ATerm i_136 (ATerm), ATerm y_261, ATerm u_34, ATerm t)
{
  ATerm c_168 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, y_261, term_b_65);
  t = m_15(t);
  c_168 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_168, u_34);
  t = i_136(t);
  t = fclose_0_0(t);
  t = u_34;
  return(t);
}
static ATerm h_15 (ATerm k_34, ATerm l_34, ATerm t)
{
  ATerm d_168 = NULL;
  t = SSL_write_term_to_stream_baf(k_34, l_34);
  d_168 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_168);
  return(t);
}
static ATerm f_13 (ATerm t)
{
  ATerm k_168 = NULL,l_168 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_65 = ATgetArgument(t, 0);
      if(match_cons(i_65, sym_Stream_1))
        {
          k_168 = ATgetArgument(i_65, 0);
        }
      else
        _fail(t);
      l_168 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_15(k_168, l_168, t);
  return(t);
}
static ATerm h_13 (ATerm t)
{
  ATerm m_168 = NULL,n_168 = NULL,o_168 = NULL,p_168 = NULL,q_168 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_65 = ATgetArgument(t, 0);
      if(match_cons(j_65, sym_Stream_1))
        {
          p_168 = ATgetArgument(j_65, 0);
        }
      else
        _fail(t);
      q_168 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_15(p_168, q_168, t);
  m_168 = t;
  t = term_o_65;
  n_168 = t;
  t = m_168;
  if(match_cons(t, sym_Stream_1))
    {
      o_168 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_o_65, m_168);
  t = f_15(n_168, o_168, t);
  return(t);
}
ATerm output_1_0 (ATerm b_157 (ATerm), ATerm t)
{
  ATerm e_168 = NULL,f_168 = NULL;
  t = b_157(t);
  f_168 = t;
  {
    ATerm q_65 = t;
    int r_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_168 = NULL,h_168 = NULL;
        t = term_s_65;
        g_168 = t;
        t = term_t_65;
        h_168 = t;
        t = term_u_65;
        t = t_15(g_168, h_168, t);
        LocalPopChoice(r_65);
      }
    else
      {
        t = q_65;
        t = term_w_65;
      }
  }
  e_168 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_168, f_168);
  {
    ATerm z_65 = t;
    int b_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_168 = NULL,j_168 = NULL;
        t = term_s_65;
        i_168 = t;
        t = term_c_66;
        j_168 = t;
        t = term_d_66;
        t = t_15(i_168, j_168, t);
        t = (ATerm) ATmakeAppl(sym__2, e_168, f_168);
        LocalPopChoice(b_66);
        if(match_cons(t, sym__2))
          {
            ATerm e_66 = ATgetArgument(t, 0);
            ATerm g_66 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = i_15(f_13, e_168, f_168, t);
      }
    else
      {
        t = z_65;
        if(match_cons(t, sym__2))
          {
            ATerm j_66 = ATgetArgument(t, 0);
            ATerm k_66 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = i_15(h_13, e_168, f_168, t);
      }
  }
  return(t);
}
static ATerm e_169 (ATerm y_168, ATerm t)
{
  t = SSL_fclose(y_168);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm b_169 = NULL,c_169 = NULL;
  c_169 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_169 = ATgetArgument(t, 0);
      {
        ATerm l_66 = t;
        int o_66 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(b_169);
            LocalPopChoice(o_66);
          }
        else
          {
            t = l_66;
            t = e_169(c_169, t);
          }
      }
    }
  else
    {
      t = e_169(c_169, t);
    }
  return(t);
}
static ATerm j_15 (ATerm q_34, ATerm t)
{
  t = SSL_read_term_from_stream(q_34);
  return(t);
}
static ATerm k_15 (ATerm j_67, ATerm k_67, ATerm t)
{
  t = SSL_strcat(j_67, k_67);
  return(t);
}
static ATerm l_15 (ATerm h_69, ATerm i_69, ATerm t)
{
  ATerm f_169 = NULL;
  t = SSL_fopen(h_69, i_69);
  f_169 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_169);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm g_169 = NULL;
  t = SSL_stdin_stream();
  g_169 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_169);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm h_169 = NULL;
  t = SSL_stdout_stream();
  h_169 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_169);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm i_169 = NULL;
  t = SSL_stderr_stream();
  i_169 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_169);
  return(t);
}
static ATerm p_170 (ATerm o_169, ATerm t)
{
  ATerm p_169 = NULL;
  t = SSL_explode_term(o_169);
  if(match_cons(t, sym__2))
    {
      ATerm p_66 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_66) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm r_66 = ATgetArgument(t, 1);
        if(((ATgetType(r_66) == AT_LIST) && !(ATisEmpty(r_66))))
          {
            p_169 = ATgetFirst((ATermList) r_66);
            {
              ATerm t_66 = (ATerm) ATgetNext((ATermList) r_66);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = p_169;
  if(match_cons(t, sym_stderr_0))
    {
      t = p_169;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = p_169;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = p_169;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm q_170 (ATerm s_169, ATerm t_169, ATerm u_169, ATerm t)
{
  ATerm v_169 = NULL,w_169 = NULL,x_169 = NULL,a_170 = NULL,l_14 = NULL;
  t = SSLgetAnnotations(u_169);
  x_169 = t;
  t = s_169;
  if(match_cons(t, sym_Path_1))
    {
      a_170 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_170, t_169);
  l_14 = t;
  t = SSLsetAnnotations(l_14, x_169);
  if(match_cons(t, sym__2))
    {
      v_169 = ATgetArgument(t, 0);
      w_169 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_15(v_169, w_169, t);
  return(t);
}
static ATerm r_170 (ATerm c_170, ATerm d_170, ATerm e_170, ATerm t)
{
  ATerm f_170 = NULL,g_170 = NULL,h_170 = NULL,k_170 = NULL,m_14 = NULL;
  t = SSLgetAnnotations(e_170);
  h_170 = t;
  t = SSL_is_string(c_170);
  k_170 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_170, d_170);
  m_14 = t;
  t = SSLsetAnnotations(m_14, h_170);
  if(match_cons(t, sym__2))
    {
      f_170 = ATgetArgument(t, 0);
      g_170 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_15(f_170, g_170, t);
  return(t);
}
static ATerm m_15 (ATerm t)
{
  ATerm m_170 = NULL,n_170 = NULL,o_170 = NULL;
  m_170 = t;
  if(match_cons(t, sym__2))
    {
      n_170 = ATgetArgument(t, 0);
      o_170 = ATgetArgument(t, 1);
      {
        ATerm u_66 = t;
        int v_66 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_170(m_170, t);
            LocalPopChoice(v_66);
          }
        else
          {
            t = u_66;
            {
              ATerm b_67 = t;
              int c_67 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = q_170(n_170, o_170, m_170, t);
                  LocalPopChoice(c_67);
                }
              else
                {
                  t = b_67;
                  t = r_170(n_170, o_170, m_170, t);
                }
            }
          }
      }
    }
  else
    {
      t = p_170(m_170, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm t_170 = NULL,u_170 = NULL,v_170 = NULL,a_171 = NULL;
  a_171 = t;
  {
    ATerm d_67 = t;
    int e_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, a_171, term_m_67);
        t = m_15(t);
        LocalPopChoice(e_67);
      }
    else
      {
        t = d_67;
        {
          ATerm q_82 = NULL,r_82 = NULL;
          t = term_p_67;
          r_82 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_p_67, a_171);
          t = k_15(r_82, a_171, t);
          q_82 = t;
          t = SSL_perror(q_82);
          _fail(t);
        }
      }
  }
  u_170 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_170 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_15(v_170, t);
  t_170 = t;
  t = u_170;
  t = fclose_0_0(t);
  t = t_170;
  return(t);
}
ATerm input_1_0 (ATerm c_157 (ATerm), ATerm t)
{
  ATerm q_67 = t;
  int r_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_171 = NULL,e_171 = NULL;
      t = term_s_65;
      d_171 = t;
      t = term_s_67;
      e_171 = t;
      t = term_t_67;
      t = t_15(d_171, e_171, t);
      LocalPopChoice(r_67);
    }
  else
    {
      t = q_67;
      t = term_u_67;
    }
  t = ReadFromFile_0_0(t);
  t = c_157(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm f_171 = NULL,g_171 = NULL,h_171 = NULL,i_171 = NULL,j_171 = NULL;
  f_171 = t;
  t = term_e_68;
  t = whoami_0_0(t);
  g_171 = t;
  t = term_f_68;
  i_171 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_68), g_171), term_g_68);
  j_171 = t;
  t = SSL_printnl(i_171, j_171);
  t = term_o_17;
  h_171 = t;
  t = SSL_exit(h_171);
  t = f_171;
  return(t);
}
static ATerm k_13 (ATerm t)
{
  ATerm l_171 = NULL;
  l_171 = t;
  if(match_string(t, "-k"))
    {
      t = l_171;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = l_171;
    }
  return(t);
}
static ATerm m_13 (ATerm t)
{
  ATerm m_171 = NULL,n_171 = NULL,o_171 = NULL;
  m_171 = t;
  t = SSL_string_to_int(m_171);
  n_171 = t;
  t = term_l_68;
  o_171 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_68, n_171);
  t = w_15(o_171, n_171, t);
  t = m_171;
  return(t);
}
static ATerm p_13 (ATerm t)
{
  t = term_m_68;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_13, m_13, p_13, t);
  return(t);
}
static ATerm r_13 (ATerm t)
{
  ATerm q_171 = NULL;
  q_171 = t;
  if(match_string(t, "-S"))
    {
      t = q_171;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = q_171;
    }
  return(t);
}
static ATerm u_13 (ATerm t)
{
  ATerm r_171 = NULL,s_171 = NULL;
  t = term_n_68;
  r_171 = t;
  t = term_b_58;
  s_171 = t;
  t = term_o_68;
  t = w_15(r_171, s_171, t);
  t = term_u_68;
  return(t);
}
static ATerm y_13 (ATerm t)
{
  t = term_v_68;
  return(t);
}
static ATerm a_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_14 (ATerm t)
{
  ATerm t_171 = NULL,u_171 = NULL,v_171 = NULL;
  t_171 = t;
  t = SSL_string_to_int(t_171);
  u_171 = t;
  t = term_n_68;
  v_171 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_68, u_171);
  t = w_15(v_171, u_171, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, t_171);
  return(t);
}
static ATerm d_14 (ATerm t)
{
  t = term_x_68;
  return(t);
}
static ATerm e_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_14 (ATerm t)
{
  ATerm w_171 = NULL,x_171 = NULL;
  t = term_a_69;
  w_171 = t;
  t = term_e_68;
  x_171 = t;
  t = term_b_69;
  t = w_15(w_171, x_171, t);
  t = term_j_69;
  return(t);
}
static ATerm i_14 (ATerm t)
{
  t = term_k_69;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm l_69 = t;
  int n_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_13, u_13, y_13, t);
      LocalPopChoice(n_69);
    }
  else
    {
      t = l_69;
      {
        ATerm q_69 = t;
        int r_69 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(a_14, b_14, d_14, t);
            LocalPopChoice(r_69);
          }
        else
          {
            t = q_69;
            t = Option_3_0(e_14, g_14, i_14, t);
          }
      }
    }
  return(t);
}
static ATerm w_15 (ATerm y_71, ATerm z_71, ATerm t)
{
  ATerm y_171 = NULL,z_171 = NULL;
  t = term_s_65;
  y_171 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_s_65, y_71, z_71);
  t = lookup_table_0_1(y_171, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_171 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_15(y_71, z_71, z_171, t);
  t = (ATerm) ATmakeAppl(sym__3, term_s_65, y_71, z_71);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm d_172 = NULL,e_172 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_172 = NULL,g_172 = NULL,h_172 = NULL;
      t = term_e_68;
      t = f_0(t);
      f_172 = t;
      t = term_t_69;
      g_172 = t;
      t = term_u_69;
      h_172 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_t_69, term_u_69, f_172);
      t = u_15(g_172, h_172, f_172, t);
      _fail(t);
    }
  else
    {
      ATerm k_172 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_172 = ATgetFirst((ATermList) t);
          e_172 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_172;
      t = b_0(t);
      t = term_e_68;
      t = e_0(t);
      k_172 = t;
      t = (ATerm) ATinsert(CheckATermList(e_172), k_172);
    }
  return(t);
}
static ATerm k_14 (ATerm t)
{
  ATerm m_172 = NULL;
  m_172 = t;
  if(match_string(t, "-o"))
    {
      t = m_172;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = m_172;
    }
  return(t);
}
static ATerm n_14 (ATerm t)
{
  ATerm n_172 = NULL,o_172 = NULL;
  n_172 = t;
  t = term_t_65;
  o_172 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_65, n_172);
  t = w_15(o_172, n_172, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, n_172);
  return(t);
}
static ATerm o_14 (ATerm t)
{
  t = term_v_69;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_14, n_14, o_14, t);
  return(t);
}
static ATerm u_15 (ATerm r_38, ATerm s_38, ATerm q_38, ATerm t)
{
  ATerm q_172 = NULL,r_172 = NULL,s_172 = NULL,t_172 = NULL,u_172 = NULL;
  q_172 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_38, s_38);
  {
    ATerm w_69 = t;
    int i_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_70 = ATgetArgument(t, 0);
            ATerm n_70 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, r_38, s_38);
        t = t_15(r_38, s_38, t);
        LocalPopChoice(i_70);
      }
    else
      {
        t = w_69;
        t = (ATerm) ATempty;
      }
  }
  r_172 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_38, s_38, (ATerm) ATinsert(CheckATermList(r_172), q_38));
  t = lookup_table_0_1(r_38, t);
  u_172 = t;
  t = (ATerm) ATinsert(CheckATermList(r_172), q_38);
  s_172 = t;
  t = u_172;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_172 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_15(s_38, s_172, t_172, t);
  t = q_172;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm b_173 = NULL,c_173 = NULL,d_173 = NULL,e_173 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_173 = NULL,g_173 = NULL,h_173 = NULL;
      t = term_e_68;
      t = p_0(t);
      f_173 = t;
      t = term_t_69;
      g_173 = t;
      t = term_u_69;
      h_173 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_t_69, term_u_69, f_173);
      t = u_15(g_173, h_173, f_173, t);
      _fail(t);
    }
  else
    {
      ATerm l_173 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_173 = ATgetFirst((ATermList) t);
          c_173 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_173;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_173 = ATgetFirst((ATermList) t);
          e_173 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_173;
      t = k_0(t);
      t = d_173;
      t = m_0(t);
      l_173 = t;
      t = (ATerm) ATinsert(CheckATermList(e_173), l_173);
    }
  return(t);
}
static ATerm q_14 (ATerm t)
{
  ATerm n_173 = NULL;
  n_173 = t;
  if(match_string(t, "-i"))
    {
      t = n_173;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = n_173;
    }
  return(t);
}
static ATerm s_14 (ATerm t)
{
  ATerm o_173 = NULL,p_173 = NULL;
  o_173 = t;
  t = term_s_67;
  p_173 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_67, o_173);
  t = w_15(p_173, o_173, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, o_173);
  return(t);
}
static ATerm u_14 (ATerm t)
{
  t = term_o_70;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_14, s_14, u_14, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm q_173 = NULL,r_173 = NULL,s_173 = NULL,t_173 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_68;
  t = whoami_0_0(t);
  q_173 = t;
  t = term_f_68;
  s_173 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_v_70), q_173);
  t_173 = t;
  t = SSL_printnl(s_173, t_173);
  t = term_o_17;
  r_173 = t;
  t = SSL_exit(r_173);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm u_173 = NULL,v_173 = NULL;
  t = term_s_65;
  u_173 = t;
  t = term_w_70;
  v_173 = t;
  t = term_y_70;
  t = t_15(u_173, v_173, t);
  return(t);
}
static ATerm n_15 (ATerm u_35, ATerm v_35, ATerm t)
{
  ATerm z_70 = t;
  int f_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(u_35, v_35);
      LocalPopChoice(f_71);
    }
  else
    {
      t = z_70;
      t = SSL_addr(u_35, v_35);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm v_145 (ATerm), ATerm w_145 (ATerm), ATerm t)
{
  ATerm x_173 = NULL,z_173 = NULL,a_174 = NULL;
  x_173 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_173;
      t = v_145(t);
    }
  else
    {
      ATerm d_174 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_173 = ATgetFirst((ATermList) t);
          a_174 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_174;
      t = foldr_2_0(v_145, w_145, t);
      d_174 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_173, d_174);
      t = w_145(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm x_14 (ATerm t)
{
  t = term_b_58;
  return(t);
}
static ATerm y_14 (ATerm t)
{
  ATerm y_82 = NULL,z_82 = NULL;
  if(match_cons(t, sym__2))
    {
      y_82 = ATgetArgument(t, 0);
      z_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_15(y_82, z_82, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm g_174 = NULL,t_82 = NULL,u_82 = NULL;
  t = times_0_0(t);
  u_82 = t;
  t = SSL_explode_term(u_82);
  if(match_cons(t, sym__2))
    {
      ATerm g_71 = ATgetArgument(t, 0);
      t_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_82;
  t = foldr_2_0(x_14, y_14, t);
  g_174 = t;
  t = SSL_TicksToSeconds(g_174);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm r_174 = NULL,s_174 = NULL,t_174 = NULL;
  r_174 = t;
  if(match_cons(t, sym__2))
    {
      s_174 = ATgetArgument(t, 0);
      t_174 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_71 = t;
    int q_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_174;
        if((s_174 != t))
          {
            _fail(t);
          }
        t = r_174;
        LocalPopChoice(q_71);
      }
    else
      {
        t = o_71;
        t = (ATerm) ATmakeAppl(sym__2, s_174, t_174);
        {
          ATerm s_71 = t;
          int t_71 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(s_174, t_174);
              LocalPopChoice(t_71);
            }
          else
            {
              t = s_71;
              t = SSL_gtr(s_174, t_174);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, s_174, t_174);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm h_154 (ATerm), ATerm t)
{
  ATerm x_174 = NULL;
  x_174 = t;
  {
    ATerm u_71 = t;
    int v_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_175 = NULL,b_175 = NULL,c_175 = NULL;
        t = term_s_65;
        b_175 = t;
        t = term_n_68;
        c_175 = t;
        t = term_w_71;
        t = t_15(b_175, c_175, t);
        a_175 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_175, term_o_17);
        t = geq_0_0(t);
        t = x_174;
        t = h_154(t);
        LocalPopChoice(v_71);
      }
    else
      {
        t = u_71;
        t = x_174;
      }
  }
  return(t);
}
static ATerm a_15 (ATerm t)
{
  ATerm e_175 = NULL,f_175 = NULL,h_175 = NULL,i_175 = NULL;
  t = run_time_0_0(t);
  e_175 = t;
  t = term_e_68;
  t = whoami_0_0(t);
  f_175 = t;
  t = term_f_68;
  h_175 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_72), e_175), term_x_71), f_175);
  i_175 = t;
  t = SSL_printnl(h_175, i_175);
  t = (ATerm) ATmakeAppl(sym__2, term_f_68, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_72), e_175), term_x_71), f_175));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(a_15, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm j_175 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_58;
  j_175 = t;
  t = SSL_exit(j_175);
  return(t);
}
static ATerm s_15 (ATerm t)
{
  ATerm t_175 = NULL,u_175 = NULL;
  u_175 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = u_175;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          t_175 = ATgetArgument(t, 0);
          {
            ATerm u_83 = NULL,p_14 = NULL;
            t = SSLgetAnnotations(u_175);
            u_83 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, t_175);
            p_14 = t;
            t = SSLsetAnnotations(p_14, u_83);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = u_175;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm s_156 (ATerm), ATerm t)
{
  ATerm b_72 = t;
  int c_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_175 = NULL,n_175 = NULL;
      t = term_s_65;
      m_175 = t;
      t = term_d_72;
      n_175 = t;
      t = term_e_72;
      t = t_15(m_175, n_175, t);
      LocalPopChoice(c_72);
    }
  else
    {
      t = b_72;
      t = fetch_1_0(s_15, t);
    }
  t = s_156(t);
  return(t);
}
static ATerm x_15 (ATerm v_43, ATerm w_43, ATerm x_43, ATerm t)
{
  ATerm w_175 = NULL;
  t = SSL_hashtable_put(x_43, v_43, w_43);
  w_175 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_175);
  return(t);
}
ATerm lookup_table_0_1 (ATerm p_40, ATerm t)
{
  ATerm f_176 = NULL;
  t = table_hashtable_0_0(t);
  f_176 = t;
  {
    ATerm f_72 = t;
    int g_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_84 = NULL;
        t = f_176;
        if(match_cons(t, sym_Hashtable_1))
          {
            d_84 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = y_15(p_40, d_84, t);
        LocalPopChoice(g_72);
      }
    else
      {
        t = f_72;
        {
          ATerm j_84 = NULL;
          t = p_40;
          t = table_create_0_0(t);
          t = f_176;
          if(match_cons(t, sym_Hashtable_1))
            {
              j_84 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = y_15(p_40, j_84, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm g_44, ATerm h_44, ATerm t)
{
  ATerm i_176 = NULL;
  t = SSL_hashtable_create(g_44, h_44);
  i_176 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_176);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm j_176 = NULL,k_176 = NULL,l_176 = NULL,n_176 = NULL,o_176 = NULL;
  j_176 = t;
  t = term_h_72;
  n_176 = t;
  t = term_i_72;
  o_176 = t;
  t = j_176;
  t = new_hashtable_0_2(n_176, o_176, t);
  k_176 = t;
  t = j_176;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_176 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_15(j_176, k_176, l_176, t);
  t = j_176;
  return(t);
}
static ATerm q_15 (ATerm c_44, ATerm d_44, ATerm t)
{
  ATerm p_176 = NULL;
  t = SSL_hashtable_remove(d_44, c_44);
  p_176 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, p_176);
  return(t);
}
static ATerm r_15 (ATerm i_44, ATerm t)
{
  ATerm q_176 = NULL;
  t = SSL_hashtable_destroy(i_44);
  q_176 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_176);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm r_176 = NULL;
  t = SSL_table_hashtable();
  r_176 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_176);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm s_176 = NULL,t_176 = NULL,u_176 = NULL,v_176 = NULL;
  s_176 = t;
  t = table_hashtable_0_0(t);
  t_176 = t;
  t = lookup_table_0_1(s_176, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_176 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_15(v_176, t);
  t = t_176;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_176 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_15(s_176, u_176, t);
  t = s_176;
  return(t);
}
ATerm map_1_0 (ATerm y_139 (ATerm), ATerm t)
{
  static ATerm k_177 (ATerm t);
  static ATerm k_177 (ATerm t)
  {
    ATerm h_177 = NULL,i_177 = NULL,j_177 = NULL;
    h_177 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_177;
      }
    else
      {
        ATerm o_84 = NULL,r_84 = NULL,s_84 = NULL,r_14 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_177 = ATgetFirst((ATermList) t);
            j_177 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_177);
        o_84 = t;
        t = i_177;
        t = y_139(t);
        r_84 = t;
        t = j_177;
        t = k_177(t);
        s_84 = t;
        t = (ATerm) ATinsert(CheckATermList(s_84), r_84);
        r_14 = t;
        t = SSLsetAnnotations(r_14, o_84);
      }
    return(t);
  }
  t = k_177(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm n_177 = NULL,o_177 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_177 = ATgetFirst((ATermList) t);
      o_177 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm s_177 = NULL,t_177 = NULL;
        static ATerm z_15 (ATerm t);
        static ATerm z_15 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(s_177)), not_null(t_177));
          return(t);
        }
        t = o_177;
        t = j_0(t);
        if(((s_177 != NULL) && (s_177 != t)))
          _fail(t);
        else
          s_177 = t;
        t = n_177;
        t = h_0(t);
        if(((t_177 != NULL) && (t_177 != t)))
          _fail(t);
        else
          t_177 = t;
        t = o_177;
        t = reverse_acc_2_0(h_0, z_15, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_e_68;
      t = j_0(t);
    }
  return(t);
}
static ATerm a_16 (ATerm t)
{
  ATerm z_177 = NULL,a_178 = NULL,b_178 = NULL,t_14 = NULL;
  b_178 = t;
  if(match_cons(t, sym_Program_1))
    {
      a_178 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_178);
  z_177 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, a_178);
  t_14 = t;
  t = SSLsetAnnotations(t_14, z_177);
  return(t);
}
static ATerm e_16 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_16 (ATerm t)
{
  ATerm d_178 = NULL;
  d_178 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_178), term_j_72);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm v_177 = NULL,w_177 = NULL;
  ATerm k_72 = t;
  int l_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_177 = NULL,y_177 = NULL;
      t = term_s_65;
      x_177 = t;
      t = term_w_70;
      y_177 = t;
      t = term_y_70;
      t = t_15(x_177, y_177, t);
      LocalPopChoice(l_72);
    }
  else
    {
      t = k_72;
      t = fetch_1_0(a_16, t);
    }
  t = term_p_72;
  t = echo_0_0(t);
  t = term_t_69;
  v_177 = t;
  t = term_u_69;
  w_177 = t;
  t = term_q_72;
  t = t_15(v_177, w_177, t);
  t = reverse_acc_2_0(_id, e_16, t);
  t = map_1_0(f_16, t);
  return(t);
}
ATerm fetch_1_0 (ATerm i_140 (ATerm), ATerm t)
{
  static ATerm a_179 (ATerm t);
  static ATerm a_179 (ATerm t)
  {
    ATerm x_178 = NULL,y_178 = NULL,z_178 = NULL;
    x_178 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_178 = ATgetFirst((ATermList) t);
        z_178 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm r_72 = t;
      int s_72 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_85 = NULL,i_85 = NULL,v_14 = NULL;
          t = SSLgetAnnotations(x_178);
          e_85 = t;
          t = y_178;
          t = i_140(t);
          i_85 = t;
          t = (ATerm) ATinsert(CheckATermList(z_178), i_85);
          v_14 = t;
          t = SSLsetAnnotations(v_14, e_85);
          LocalPopChoice(s_72);
        }
      else
        {
          t = r_72;
          {
            ATerm q_85 = NULL,u_85 = NULL,w_14 = NULL;
            t = SSLgetAnnotations(x_178);
            q_85 = t;
            t = z_178;
            t = a_179(t);
            u_85 = t;
            t = (ATerm) ATinsert(CheckATermList(u_85), y_178);
            w_14 = t;
            t = SSLsetAnnotations(w_14, q_85);
          }
        }
    }
    return(t);
  }
  t = a_179(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm e_179 = NULL,f_179 = NULL,g_179 = NULL;
  e_179 = t;
  {
    ATerm t_72 = t;
    int u_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = e_179;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm v_72 = ATgetFirst((ATermList) t);
                ATerm w_72 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = e_179;
          }
        LocalPopChoice(u_72);
      }
    else
      {
        t = t_72;
        t = (ATerm) ATinsert(ATempty, e_179);
      }
  }
  f_179 = t;
  t = term_w_65;
  g_179 = t;
  t = SSL_printnl(g_179, f_179);
  t = e_179;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm k_179 = NULL,l_179 = NULL;
  t = term_s_65;
  k_179 = t;
  t = term_w_70;
  l_179 = t;
  t = term_y_70;
  t = t_15(k_179, l_179, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm y_15 (ATerm z_43, ATerm a_44, ATerm t)
{
  t = SSL_hashtable_get(a_44, z_43);
  return(t);
}
static ATerm t_15 (ATerm w_40, ATerm x_40, ATerm t)
{
  ATerm m_179 = NULL;
  t = lookup_table_0_1(w_40, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_179 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_15(x_40, m_179, t);
  return(t);
}
static ATerm g_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_16 (ATerm t)
{
  ATerm o_179 = NULL,p_179 = NULL;
  t = term_x_72;
  o_179 = t;
  t = term_e_68;
  p_179 = t;
  t = term_y_72;
  t = w_15(o_179, p_179, t);
  return(t);
}
static ATerm i_16 (ATerm t)
{
  t = term_z_72;
  return(t);
}
static ATerm l_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_16 (ATerm t)
{
  ATerm q_179 = NULL,r_179 = NULL,s_179 = NULL,t_179 = NULL;
  t = term_x_72;
  s_179 = t;
  t = term_e_68;
  t_179 = t;
  t = term_y_72;
  t = w_15(s_179, t_179, t);
  t = term_a_73;
  q_179 = t;
  t = term_e_68;
  r_179 = t;
  t = term_b_73;
  t = w_15(q_179, r_179, t);
  t = term_c_73;
  return(t);
}
static ATerm n_16 (ATerm t)
{
  t = term_d_73;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm e_73 = t;
  int f_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_16, h_16, i_16, t);
      LocalPopChoice(f_73);
    }
  else
    {
      t = e_73;
      t = Option_3_0(l_16, m_16, n_16, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm c_112 (ATerm), ATerm d_112 (ATerm), ATerm t)
{
  ATerm u_179 = NULL,v_179 = NULL,w_179 = NULL,x_179 = NULL,y_179 = NULL,z_179 = NULL,z_14 = NULL;
  z_179 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_179 = ATgetFirst((ATermList) t);
      w_179 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_179);
  u_179 = t;
  t = v_179;
  t = c_112(t);
  x_179 = t;
  t = w_179;
  t = d_112(t);
  y_179 = t;
  t = (ATerm) ATinsert(CheckATermList(y_179), x_179);
  z_14 = t;
  t = SSLsetAnnotations(z_14, u_179);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_158 (ATerm), ATerm t)
{
  ATerm e_180 = NULL,f_180 = NULL,g_180 = NULL,h_180 = NULL,j_180 = NULL,k_180 = NULL,b_15 = NULL;
  e_180 = t;
  {
    ATerm g_73 = t;
    int h_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_73;
        t = v_158(t);
        LocalPopChoice(h_73);
      }
    else
      {
        t = g_73;
      }
  }
  t = e_180;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_180 = ATgetFirst((ATermList) t);
      h_180 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_180);
  f_180 = t;
  t = term_w_70;
  k_180 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_70, g_180);
  t = w_15(k_180, g_180, t);
  t = h_180;
  {
    static ATerm v_180 (ATerm t);
    static ATerm v_180 (ATerm t)
    {
      ATerm j_73 = t;
      int k_73 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_73 = t;
          int m_73 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_180 = NULL;
              o_180 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = o_180;
              LocalPopChoice(m_73);
            }
          else
            {
              t = l_73;
              t = v_158(t);
              t = Cons_2_0(_id, v_180, t);
            }
          LocalPopChoice(k_73);
        }
      else
        {
          t = j_73;
          {
            ATerm r_180 = NULL,s_180 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                r_180 = ATgetFirst((ATermList) t);
                s_180 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(s_180), (ATerm) ATmakeAppl(sym_Undefined_1, r_180));
          }
        }
      return(t);
    }
    t = v_180(t);
  }
  j_180 = t;
  t = (ATerm) ATinsert(CheckATermList(j_180), (ATerm) ATmakeAppl(sym_Program_1, g_180));
  b_15 = t;
  t = SSLsetAnnotations(b_15, f_180);
  return(t);
}
static ATerm p_16 (ATerm t)
{
  ATerm k_181 = NULL;
  k_181 = t;
  if(match_string(t, "--help"))
    {
      t = k_181;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = k_181;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = k_181;
        }
    }
  return(t);
}
static ATerm q_16 (ATerm t)
{
  ATerm l_181 = NULL,m_181 = NULL;
  t = term_d_72;
  l_181 = t;
  t = term_e_68;
  m_181 = t;
  t = term_n_73;
  t = w_15(l_181, m_181, t);
  t = term_o_73;
  return(t);
}
static ATerm r_16 (ATerm t)
{
  t = term_p_73;
  return(t);
}
static ATerm s_16 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm u_158 (ATerm), ATerm t)
{
  ATerm b_181 = NULL,c_181 = NULL,d_181 = NULL,e_181 = NULL,f_181 = NULL,g_181 = NULL,h_181 = NULL,i_181 = NULL;
  d_181 = t;
  t = term_t_69;
  e_181 = t;
  t = term_q_73;
  t = lookup_table_0_1(e_181, t);
  i_181 = t;
  t = term_u_69;
  f_181 = t;
  t = (ATerm) ATempty;
  g_181 = t;
  t = i_181;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_181 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_15(f_181, g_181, h_181, t);
  t = d_181;
  {
    static ATerm o_16 (ATerm t);
    static ATerm o_16 (ATerm t)
    {
      ATerm r_73 = t;
      int s_73 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_158(t);
          LocalPopChoice(s_73);
        }
      else
        {
          t = r_73;
          {
            ATerm t_73 = t;
            int u_73 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(p_16, q_16, r_16, t);
                LocalPopChoice(u_73);
              }
            else
              {
                t = t_73;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(o_16, t);
  }
  {
    ATerm v_73 = t;
    int w_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_181 = NULL;
        y_181 = t;
        {
          ATerm x_73 = t;
          int y_73 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_86 = NULL;
              t = y_181;
              {
                ATerm z_73 = t;
                int b_74 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm g_86 = NULL,i_86 = NULL;
                    t = term_s_65;
                    g_86 = t;
                    t = term_d_72;
                    i_86 = t;
                    t = term_e_72;
                    t = t_15(g_86, i_86, t);
                    LocalPopChoice(b_74);
                  }
                else
                  {
                    t = z_73;
                    t = fetch_1_0(s_16, t);
                  }
              }
              t = y_181;
              t = default_system_usage_0_0(t);
              t = term_b_58;
              e_86 = t;
              t = SSL_exit(e_86);
              LocalPopChoice(y_73);
            }
          else
            {
              t = x_73;
              {
                ATerm o_86 = NULL,p_86 = NULL,r_86 = NULL;
                t = term_s_65;
                p_86 = t;
                t = term_x_72;
                r_86 = t;
                t = term_c_74;
                t = t_15(p_86, r_86, t);
                t = y_181;
                t = default_system_about_0_0(t);
                t = term_b_58;
                o_86 = t;
                t = SSL_exit(o_86);
              }
            }
        }
        LocalPopChoice(w_73);
      }
    else
      {
        t = v_73;
        {
          ATerm d_74 = t;
          int e_74 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_181 = NULL,a_182 = NULL,b_182 = NULL;
              static ATerm t_16 (ATerm t);
              static ATerm t_16 (ATerm t)
              {
                ATerm c_182 = NULL,d_182 = NULL,e_182 = NULL,v_15 = NULL;
                e_182 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    d_182 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(e_182);
                c_182 = t;
                t = d_182;
                if(((b_181 != NULL) && (b_181 != t)))
                  _fail(t);
                else
                  b_181 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, d_182);
                v_15 = t;
                t = SSLsetAnnotations(v_15, c_182);
                return(t);
              }
              t = fetch_1_0(t_16, t);
              t = term_f_68;
              a_182 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_181)), term_f_74);
              b_182 = t;
              t = SSL_printnl(a_182, b_182);
              t = (ATerm) ATmakeAppl(sym__2, term_f_68, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_181)), term_f_74));
              t = default_system_usage_0_0(t);
              t = term_o_17;
              z_181 = t;
              t = SSL_exit(z_181);
              LocalPopChoice(e_74);
            }
          else
            {
              t = d_74;
            }
        }
      }
  }
  c_181 = t;
  t = term_t_69;
  t = table_destroy_0_0(t);
  t = c_181;
  return(t);
}
ATerm option_wrap_4_0 (ATerm u_156 (ATerm), ATerm v_156 (ATerm), ATerm w_156 (ATerm), ATerm x_156 (ATerm), ATerm t)
{
  ATerm k_182 = NULL,l_182 = NULL,m_182 = NULL,n_182 = NULL,o_182 = NULL;
  t = parse_options_1_0(u_156, t);
  k_182 = t;
  t = term_g_74;
  t = table_create_0_0(t);
  t = term_g_74;
  l_182 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_g_74, term_h_74, k_182);
  t = lookup_table_0_1(l_182, t);
  o_182 = t;
  t = term_h_74;
  m_182 = t;
  t = o_182;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_182 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_15(m_182, k_182, n_182, t);
  t = k_182;
  t = w_156(t);
  {
    ATerm i_74 = t;
    int j_74 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(v_156, t);
        LocalPopChoice(j_74);
      }
    else
      {
        t = i_74;
        {
          ATerm k_74 = t;
          int l_74 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_156(t);
              t = report_success_0_0(t);
              LocalPopChoice(l_74);
            }
          else
            {
              t = k_74;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm u_16 (ATerm t)
{
  ATerm m_74 = t;
  int n_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(n_74);
    }
  else
    {
      t = m_74;
      {
        ATerm p_74 = t;
        int q_74 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(q_74);
          }
        else
          {
            t = p_74;
            {
              ATerm r_74 = t;
              int s_74 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(y_16, z_16, a_17, t);
                  LocalPopChoice(s_74);
                }
              else
                {
                  t = r_74;
                  {
                    ATerm t_74 = t;
                    int u_74 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(u_74);
                      }
                    else
                      {
                        t = t_74;
                        t = keep_option_0_0(t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm v_16 (ATerm t)
{
  t = input_1_0(b_17, t);
  return(t);
}
static ATerm y_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_16 (ATerm t)
{
  ATerm r_182 = NULL,s_182 = NULL;
  t = term_c_66;
  r_182 = t;
  t = term_e_68;
  s_182 = t;
  t = term_v_74;
  t = w_15(r_182, s_182, t);
  t = term_w_74;
  return(t);
}
static ATerm a_17 (ATerm t)
{
  t = term_x_74;
  return(t);
}
static ATerm b_17 (ATerm t)
{
  t = output_1_0(d_17, t);
  return(t);
}
static ATerm d_17 (ATerm t)
{
  ATerm u_182 = NULL,v_182 = NULL,w_182 = NULL,x_182 = NULL,y_182 = NULL,z_182 = NULL,a_183 = NULL,b_183 = NULL,c_183 = NULL,d_183 = NULL,e_183 = NULL,f_183 = NULL,g_183 = NULL,h_183 = NULL,i_183 = NULL,w_20 = NULL,m_18 = NULL,j_18 = NULL,j_16 = NULL;
  i_183 = t;
  if(match_cons(t, sym_Specification_1))
    {
      v_182 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_183);
  u_182 = t;
  t = v_182;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_182 = ATgetFirst((ATermList) t);
      y_182 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_182);
  w_182 = t;
  t = y_182;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_183 = ATgetFirst((ATermList) t);
      c_183 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_182);
  a_183 = t;
  t = b_183;
  if(match_cons(t, sym_Strategies_1))
    {
      f_183 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_183);
  e_183 = t;
  t = f_183;
  t = inline_sdefs_0_0(t);
  g_183 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, g_183);
  j_16 = t;
  t = SSLsetAnnotations(j_16, e_183);
  h_183 = t;
  t = c_183;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_183), h_183);
  j_18 = t;
  t = SSLsetAnnotations(j_18, a_183);
  d_183 = t;
  t = (ATerm) ATinsert(CheckATermList(d_183), x_182);
  m_18 = t;
  t = SSLsetAnnotations(m_18, w_182);
  z_182 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, z_182);
  w_20 = t;
  t = SSLsetAnnotations(w_20, u_182);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(u_16, default_usage_0_0, _id, v_16, t);
  return(t);
}
