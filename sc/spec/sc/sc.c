#include <srts/stratego.h>
#include <ssl/stratego-lib.h>
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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Anno_2;
Symbol sym_Infinite_0;
Symbol sym_Keys_0;
Symbol sym_Keys_1;
Symbol sym_Keys_2;
Symbol sym_Keys_3;
Symbol sym_Keys_4;
Symbol sym_Keys_5;
Symbol sym_Keys_6;
Symbol sym_Keys_7;
Symbol sym_Keys_8;
Symbol sym_Keys_9;
Symbol sym_Keys_10;
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
Symbol sym_Dummy_0;
Symbol sym_Scopes_0;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Silent_0;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_DeclVersion_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_Tool_1;
Symbol sym_Repository_0;
Symbol sym_Import_0;
Symbol sym_Imported_1;
Symbol sym_XTC_0;
Symbol sym_FILE_1;
Symbol sym_DIR_1;
Symbol sym_TEMP_0;
Symbol sym_TempFiles_0;
Symbol sym_Signature_1;
Symbol sym_Overlays_1;
Symbol sym_Rules_1;
Symbol sym_Strategies_1;
Symbol sym_Imports_1;
Symbol sym_Specification_1;
Symbol sym_Overlay_3;
Symbol sym_Mod_2;
Symbol sym_Rule_3;
Symbol sym_StratRule_3;
Symbol sym_LRule_1;
Symbol sym_SRule_1;
Symbol sym_RDef_3;
Symbol sym_SRDef_3;
Symbol sym_DynamicRules_1;
Symbol sym_OverrideDynamicRules_1;
Symbol sym_Con_3;
Symbol sym_App_2;
Symbol sym_RootApp_1;
Symbol sym_InfixApp_3;
Symbol sym_Explode_2;
Symbol sym_ExplodeCong_2;
Symbol sym_As_2;
Symbol sym_BuildDefault_1;
Symbol sym_Anno_2;
Symbol sym_ListVar_1;
Symbol sym_MA_2;
Symbol sym_AM_2;
Symbol sym_BA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
Symbol sym_ScopeDefault_1;
Symbol sym_DynRuleScope_2;
Symbol sym_Prim_2;
Symbol sym_Assign_2;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_MatchVar_1;
Symbol sym_MatchFun_1;
Symbol sym_Scope_2;
Symbol sym_Where_1;
Symbol sym_Path_2;
Symbol sym_Cong_2;
Symbol sym_One_1;
Symbol sym_Some_1;
Symbol sym_All_1;
Symbol sym_Thread_1;
Symbol sym_Id_0;
Symbol sym_Fail_0;
Symbol sym_Test_1;
Symbol sym_Not_1;
Symbol sym_Seq_2;
Symbol sym_Choice_2;
Symbol sym_LChoice_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_GChoice_2;
Symbol sym_LGChoice_2;
Symbol sym_Bagof_1;
Symbol sym_SVar_1;
Symbol sym_Rec_2;
Symbol sym_Let_2;
Symbol sym_SDef_3;
Symbol sym_VarDec_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_SDef_4;
Symbol sym_DontInline_0;
Symbol sym_Call_2;
Symbol sym_Wld_0;
Symbol sym_Var_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_Str_1;
Symbol sym_Op_2;
Symbol sym_Sort_2;
Symbol sym_OpDecl_2;
Symbol sym_Sorts_1;
Symbol sym_Constructors_1;
Symbol sym_NoKind_0;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
  sym_Keys_0 = ATmakeSymbol("Keys", 0, ATfalse);
  ATprotectSymbol(sym_Keys_0);
  sym_Keys_1 = ATmakeSymbol("Keys", 1, ATfalse);
  ATprotectSymbol(sym_Keys_1);
  sym_Keys_2 = ATmakeSymbol("Keys", 2, ATfalse);
  ATprotectSymbol(sym_Keys_2);
  sym_Keys_3 = ATmakeSymbol("Keys", 3, ATfalse);
  ATprotectSymbol(sym_Keys_3);
  sym_Keys_4 = ATmakeSymbol("Keys", 4, ATfalse);
  ATprotectSymbol(sym_Keys_4);
  sym_Keys_5 = ATmakeSymbol("Keys", 5, ATfalse);
  ATprotectSymbol(sym_Keys_5);
  sym_Keys_6 = ATmakeSymbol("Keys", 6, ATfalse);
  ATprotectSymbol(sym_Keys_6);
  sym_Keys_7 = ATmakeSymbol("Keys", 7, ATfalse);
  ATprotectSymbol(sym_Keys_7);
  sym_Keys_8 = ATmakeSymbol("Keys", 8, ATfalse);
  ATprotectSymbol(sym_Keys_8);
  sym_Keys_9 = ATmakeSymbol("Keys", 9, ATfalse);
  ATprotectSymbol(sym_Keys_9);
  sym_Keys_10 = ATmakeSymbol("Keys", 10, ATfalse);
  ATprotectSymbol(sym_Keys_10);
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
  sym_Dummy_0 = ATmakeSymbol("Dummy", 0, ATfalse);
  ATprotectSymbol(sym_Dummy_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Silent_0 = ATmakeSymbol("Silent", 0, ATfalse);
  ATprotectSymbol(sym_Silent_0);
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
  sym_DeclVersion_1 = ATmakeSymbol("DeclVersion", 1, ATfalse);
  ATprotectSymbol(sym_DeclVersion_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_Tool_1 = ATmakeSymbol("Tool", 1, ATfalse);
  ATprotectSymbol(sym_Tool_1);
  sym_Repository_0 = ATmakeSymbol("Repository", 0, ATfalse);
  ATprotectSymbol(sym_Repository_0);
  sym_Import_0 = ATmakeSymbol("Import", 0, ATfalse);
  ATprotectSymbol(sym_Import_0);
  sym_Imported_1 = ATmakeSymbol("Imported", 1, ATfalse);
  ATprotectSymbol(sym_Imported_1);
  sym_XTC_0 = ATmakeSymbol("XTC", 0, ATfalse);
  ATprotectSymbol(sym_XTC_0);
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_DIR_1 = ATmakeSymbol("DIR", 1, ATfalse);
  ATprotectSymbol(sym_DIR_1);
  sym_TEMP_0 = ATmakeSymbol("TEMP", 0, ATfalse);
  ATprotectSymbol(sym_TEMP_0);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
  sym_Signature_1 = ATmakeSymbol("Signature", 1, ATfalse);
  ATprotectSymbol(sym_Signature_1);
  sym_Overlays_1 = ATmakeSymbol("Overlays", 1, ATfalse);
  ATprotectSymbol(sym_Overlays_1);
  sym_Rules_1 = ATmakeSymbol("Rules", 1, ATfalse);
  ATprotectSymbol(sym_Rules_1);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Imports_1 = ATmakeSymbol("Imports", 1, ATfalse);
  ATprotectSymbol(sym_Imports_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
  ATprotectSymbol(sym_Overlay_3);
  sym_Mod_2 = ATmakeSymbol("Mod", 2, ATfalse);
  ATprotectSymbol(sym_Mod_2);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_StratRule_3 = ATmakeSymbol("StratRule", 3, ATfalse);
  ATprotectSymbol(sym_StratRule_3);
  sym_LRule_1 = ATmakeSymbol("LRule", 1, ATfalse);
  ATprotectSymbol(sym_LRule_1);
  sym_SRule_1 = ATmakeSymbol("SRule", 1, ATfalse);
  ATprotectSymbol(sym_SRule_1);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
  sym_SRDef_3 = ATmakeSymbol("SRDef", 3, ATfalse);
  ATprotectSymbol(sym_SRDef_3);
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_OverrideDynamicRules_1);
  sym_Con_3 = ATmakeSymbol("Con", 3, ATfalse);
  ATprotectSymbol(sym_Con_3);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_RootApp_1 = ATmakeSymbol("RootApp", 1, ATfalse);
  ATprotectSymbol(sym_RootApp_1);
  sym_InfixApp_3 = ATmakeSymbol("InfixApp", 3, ATfalse);
  ATprotectSymbol(sym_InfixApp_3);
  sym_Explode_2 = ATmakeSymbol("Explode", 2, ATfalse);
  ATprotectSymbol(sym_Explode_2);
  sym_ExplodeCong_2 = ATmakeSymbol("ExplodeCong", 2, ATfalse);
  ATprotectSymbol(sym_ExplodeCong_2);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_BuildDefault_1 = ATmakeSymbol("BuildDefault", 1, ATfalse);
  ATprotectSymbol(sym_BuildDefault_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_ListVar_1 = ATmakeSymbol("ListVar", 1, ATfalse);
  ATprotectSymbol(sym_ListVar_1);
  sym_MA_2 = ATmakeSymbol("MA", 2, ATfalse);
  ATprotectSymbol(sym_MA_2);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
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
  sym_ScopeDefault_1 = ATmakeSymbol("ScopeDefault", 1, ATfalse);
  ATprotectSymbol(sym_ScopeDefault_1);
  sym_DynRuleScope_2 = ATmakeSymbol("DynRuleScope", 2, ATfalse);
  ATprotectSymbol(sym_DynRuleScope_2);
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
  sym_Assign_2 = ATmakeSymbol("Assign", 2, ATfalse);
  ATprotectSymbol(sym_Assign_2);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_MatchVar_1 = ATmakeSymbol("MatchVar", 1, ATfalse);
  ATprotectSymbol(sym_MatchVar_1);
  sym_MatchFun_1 = ATmakeSymbol("MatchFun", 1, ATfalse);
  ATprotectSymbol(sym_MatchFun_1);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
  sym_One_1 = ATmakeSymbol("One", 1, ATfalse);
  ATprotectSymbol(sym_One_1);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_All_1 = ATmakeSymbol("All", 1, ATfalse);
  ATprotectSymbol(sym_All_1);
  sym_Thread_1 = ATmakeSymbol("Thread", 1, ATfalse);
  ATprotectSymbol(sym_Thread_1);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_Test_1 = ATmakeSymbol("Test", 1, ATfalse);
  ATprotectSymbol(sym_Test_1);
  sym_Not_1 = ATmakeSymbol("Not", 1, ATfalse);
  ATprotectSymbol(sym_Not_1);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_GChoice_2 = ATmakeSymbol("GChoice", 2, ATfalse);
  ATprotectSymbol(sym_GChoice_2);
  sym_LGChoice_2 = ATmakeSymbol("LGChoice", 2, ATfalse);
  ATprotectSymbol(sym_LGChoice_2);
  sym_Bagof_1 = ATmakeSymbol("Bagof", 1, ATfalse);
  ATprotectSymbol(sym_Bagof_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_SDef_4 = ATmakeSymbol("SDef", 4, ATfalse);
  ATprotectSymbol(sym_SDef_4);
  sym_DontInline_0 = ATmakeSymbol("DontInline", 0, ATfalse);
  ATprotectSymbol(sym_DontInline_0);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
  ATprotectSymbol(sym_Sort_2);
  sym_OpDecl_2 = ATmakeSymbol("OpDecl", 2, ATfalse);
  ATprotectSymbol(sym_OpDecl_2);
  sym_Sorts_1 = ATmakeSymbol("Sorts", 1, ATfalse);
  ATprotectSymbol(sym_Sorts_1);
  sym_Constructors_1 = ATmakeSymbol("Constructors", 1, ATfalse);
  ATprotectSymbol(sym_Constructors_1);
  sym_NoKind_0 = ATmakeSymbol("NoKind", 0, ATfalse);
  ATprotectSymbol(sym_NoKind_0);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  init_constant_terms();
}
ATerm term_n_48;
ATerm term_m_48;
ATerm term_l_48;
ATerm term_k_48;
ATerm term_d_48;
ATerm term_b_48;
ATerm term_r_47;
ATerm term_o_47;
ATerm term_j_47;
ATerm term_i_47;
ATerm term_h_47;
ATerm term_g_47;
ATerm term_f_47;
ATerm term_d_47;
ATerm term_w_46;
ATerm term_u_46;
ATerm term_s_46;
ATerm term_r_46;
ATerm term_o_46;
ATerm term_n_46;
ATerm term_l_46;
ATerm term_h_46;
ATerm term_g_46;
ATerm term_f_46;
ATerm term_a_46;
ATerm term_a_45;
ATerm term_q_44;
ATerm term_i_44;
ATerm term_c_44;
ATerm term_b_44;
ATerm term_j_43;
ATerm term_h_43;
ATerm term_g_43;
ATerm term_f_43;
ATerm term_e_43;
ATerm term_b_43;
ATerm term_y_42;
ATerm term_x_42;
ATerm term_w_42;
ATerm term_v_42;
ATerm term_u_42;
ATerm term_t_42;
ATerm term_n_42;
ATerm term_m_42;
ATerm term_l_42;
ATerm term_h_42;
ATerm term_g_42;
ATerm term_a_42;
ATerm term_z_41;
ATerm term_y_41;
ATerm term_x_41;
ATerm term_w_41;
ATerm term_r_41;
ATerm term_q_41;
ATerm term_p_41;
ATerm term_l_41;
ATerm term_k_41;
ATerm term_j_41;
ATerm term_i_41;
ATerm term_h_41;
ATerm term_g_41;
ATerm term_a_41;
ATerm term_x_40;
ATerm term_w_40;
ATerm term_t_40;
ATerm term_r_40;
ATerm term_o_40;
ATerm term_l_40;
ATerm term_g_40;
ATerm term_d_40;
ATerm term_b_40;
ATerm term_a_40;
ATerm term_w_39;
ATerm term_v_39;
ATerm term_s_39;
ATerm term_p_39;
ATerm term_o_39;
ATerm term_i_39;
ATerm term_h_39;
ATerm term_a_39;
ATerm term_z_38;
ATerm term_p_38;
ATerm term_m_38;
ATerm term_j_38;
ATerm term_c_38;
ATerm term_x_37;
ATerm term_q_37;
ATerm term_i_37;
ATerm term_f_36;
ATerm term_c_36;
ATerm term_a_36;
ATerm term_w_35;
ATerm term_s_35;
ATerm term_r_35;
ATerm term_j_35;
ATerm term_e_35;
ATerm term_z_34;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_r_34;
ATerm term_m_34;
ATerm term_j_34;
ATerm term_v_33;
ATerm term_a_33;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_k_32;
ATerm term_i_32;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_u_30;
ATerm term_s_30;
ATerm term_w_29;
ATerm term_v_29;
ATerm term_l_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_z_26;
ATerm term_u_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_b_25;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_k_24;
ATerm term_h_24;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_l_23;
ATerm term_i_23;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_c_22;
ATerm term_v_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_g_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_k_19;
ATerm term_c_19;
ATerm term_y_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_f_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_n_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_a_17;
ATerm term_q_16;
ATerm term_m_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_m_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_z_14;
void init_constant_terms (void)
{
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling C code", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("C-pretty.pp", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end: ", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize2", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize1", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize: ", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("frontend", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol(".fro", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to ", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("main strategy is: ", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol(".with-main", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (before frontend) written to ", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym__2, term_s_21, term_t_21);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to file", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("infile", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("SC ", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2002 Eelco Visser <visser@acm.org>\n", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("This program is free software; you can redistribute it and/or modify\n", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("it under the terms of the GNU General Public License as published by\n", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("the Free Software Foundation; either version 2, or (at your option)\n", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("any later version.\n", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(sym__2, term_k_32, term_v_32);
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(sym__2, term_k_32, term_m_34);
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-i file            Main module to compile (required)\n", 0, ATtrue));
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f | --output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d\n", 0, ATtrue));
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(sym__2, term_z_15, term_l_20);
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(sym__2, term_u_22, term_l_20);
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(sym__2, term_c_19, term_l_20);
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(sym__2, term_t_18, term_l_20);
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(sym__2, term_a_40, term_l_20);
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all        Instrument all definitions to print tracing information", 0, ATtrue));
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-t f               Instrument definition of f to print tracing information\n", 0, ATtrue));
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i        Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(sym__2, term_d_15, term_z_14);
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-S | --silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(sym__2, term_w_40, term_l_20);
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeAppl(sym__2, term_g_41, term_l_20);
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(sym__2, term_j_41, term_l_20);
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_r_41));
  term_r_41 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M\n", 0, ATtrue));
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_x_41));
  term_x_41 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_g_42));
  term_g_42 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that sc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_m_42));
  term_m_42 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_n_42));
  term_n_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(ATmakeSymbol("SC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_e_43));
  term_e_43 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_43));
  term_g_43 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_43));
  term_h_43 = (ATerm) ATmakeAppl(sym__2, term_f_43, term_g_43);
  ATprotect(&(term_j_43));
  term_j_43 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_44));
  term_b_44 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_44));
  term_c_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(sym__3, term_f_43, term_g_43, (ATerm) ATempty);
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_a_46));
  term_a_46 = (ATerm) ATmakeAppl(ATmakeSymbol("0.9beta8", 0, ATtrue));
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(sym__2, term_g_31, term_a_46);
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(sym__2, term_d_15, term_l_23);
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(sym__2, term_z_19, term_z_14);
  ATprotect(&(term_l_46));
  term_l_46 = (ATerm) ATmakeAppl(ATmakeSymbol("lib.rtree", 0, ATtrue));
  ATprotect(&(term_n_46));
  term_n_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego.rtree", 0, ATtrue));
  ATprotect(&(term_o_46));
  term_o_46 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_r_46));
  term_r_46 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego.h>", 0, ATtrue));
  ATprotect(&(term_s_46));
  term_s_46 = (ATerm) ATmakeAppl(ATmakeSymbol("<ssl/stratego-lib.h>", 0, ATtrue));
  ATprotect(&(term_u_46));
  term_u_46 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS", 0, ATtrue));
  ATprotect(&(term_w_46));
  term_w_46 = (ATerm) ATmakeAppl(ATmakeSymbol("/include", 0, ATtrue));
  ATprotect(&(term_d_47));
  term_d_47 = (ATerm) ATmakeAppl(ATmakeSymbol("ATERM", 0, ATtrue));
  ATprotect(&(term_f_47));
  term_f_47 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib", 0, ATtrue));
  ATprotect(&(term_g_47));
  term_g_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue));
  ATprotect(&(term_h_47));
  term_h_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-lib.opt", 0, ATtrue));
  ATprotect(&(term_i_47));
  term_i_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego.opt", 0, ATtrue));
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-lATerm-gcc", 0, ATtrue));
  ATprotect(&(term_o_47));
  term_o_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-lm", 0, ATtrue));
  ATprotect(&(term_r_47));
  term_r_47 = (ATerm) ATmakeAppl(ATmakeSymbol("sc-manual.txt", 0, ATtrue));
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_k_48));
  term_k_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_l_48));
  term_l_48 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_m_48));
  term_m_48 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_48));
  term_n_48 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue));
}
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm n_79 (ATerm), ATerm o_79 (ATerm));
ATerm crush_2 (ATerm, ATerm l_78 (ATerm), ATerm m_78 (ATerm));
ATerm run_time_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm u_86 (ATerm));
ATerm Snd_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm link_object_code_0 (ATerm);
ATerm c_to_object_code_0 (ATerm);
ATerm c_compile_0 (ATerm);
ATerm rename_file_0 (ATerm);
ATerm rename_to_1 (ATerm, ATerm r_0 (ATerm));
ATerm xtc_transform_1 (ATerm, ATerm p_93 (ATerm));
ATerm abox2text_0 (ATerm);
ATerm ac2abox_0 (ATerm);
ATerm s2c_0 (ATerm);
ATerm stratego_cf_0 (ATerm);
ATerm canonicalize_0 (ATerm);
ATerm back_end_0 (ATerm);
ATerm optimize2_0 (ATerm);
ATerm compile_match_0 (ATerm);
ATerm inline_0 (ATerm);
ATerm fusion_0 (ATerm);
ATerm optimize1_0 (ATerm);
ATerm optimize_0 (ATerm);
ATerm rename_defs_0 (ATerm);
ATerm stratego_nf_0 (ATerm);
ATerm extract_0 (ATerm);
ATerm extract_all_0 (ATerm);
ATerm output_frontend_0 (ATerm);
ATerm if_keep2_1 (ATerm, ATerm i_87 (ATerm));
ATerm frontend_0 (ATerm);
ATerm if_keep3_1 (ATerm, ATerm j_87 (ATerm));
ATerm AddMain_1 (ATerm, ATerm g_65 (ATerm));
ATerm xtc_io_transform_1 (ATerm, ATerm z_93 (ATerm));
ATerm add_main_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm w_65 (ATerm), ATerm x_65 (ATerm));
ATerm repeat_1 (ATerm, ATerm z_65 (ATerm));
ATerm xtc_exit_0 (ATerm);
ATerm xtc_io_exit_0 (ATerm);
ATerm get_outfile_1 (ATerm, ATerm h_65 (ATerm));
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm q_0 (ATerm));
ATerm output_ast_0 (ATerm);
ATerm pass_keep_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm dep_name_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm x_93 (ATerm), ATerm y_93 (ATerm));
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_and_wait_1 (ATerm, ATerm d_90 (ATerm));
ATerm call_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm o_93 (ATerm));
ATerm assert_1 (ATerm, ATerm q_83 (ATerm));
ATerm obsolete_1 (ATerm, ATerm e_84 (ATerm));
ATerm open_file_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm o_0 (ATerm), ATerm p_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm a_60 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm q_93 (ATerm), ATerm r_93 (ATerm));
ATerm if_verbose3_1 (ATerm, ATerm v_86 (ATerm));
ATerm basename_1 (ATerm, ATerm j_82 (ATerm));
ATerm basename_0 (ATerm);
ATerm get_infile_0 (ATerm);
ATerm parse_0 (ATerm);
ATerm front_end_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm n_83 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm s_65 (ATerm), ATerm t_65 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm m_83 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm e_93 (ATerm));
ATerm xtc_input_1 (ATerm, ATerm h_93 (ATerm));
ATerm compile_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm t_86 (ATerm));
ATerm ticks_to_seconds_0 (ATerm);
ATerm self_children_sys_time_0 (ATerm);
ATerm add_0 (ATerm);
ATerm self_children_user_time_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm diff_times_0 (ATerm);
ATerm times_0 (ATerm);
ATerm profile_p__2 (ATerm, ATerm p_84 (ATerm), ATerm q_84 (ATerm));
ATerm debug_1 (ATerm, ATerm x_83 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm sc_announce_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm sc_version_0 (ATerm);
ATerm try_1 (ATerm, ATerm i_65 (ATerm));
ATerm copy_file_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm x_86 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm w_86 (ATerm));
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose6_1 (ATerm, ATerm y_86 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm a_79 (ATerm), ATerm b_79 (ATerm));
ATerm union_1 (ATerm, ATerm w_78 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm h_90 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm extend_config_0 (ATerm);
ATerm table_remove_0 (ATerm);
ATerm toggle_config_0 (ATerm);
ATerm post_extend_config_0 (ATerm);
ATerm sc_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_0 (ATerm));
ATerm map_1 (ATerm, ATerm z_72 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm h_0 (ATerm));
ATerm Program_1 (ATerm, ATerm r_59 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm y_83 (ATerm));
ATerm Undefined_1 (ATerm, ATerm s_59 (ATerm));
ATerm fetch_1 (ATerm, ATerm i_73 (ATerm));
ATerm option_defined_1 (ATerm, ATerm w_87 (ATerm));
ATerm Help_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm b_89 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm z_88 (ATerm));
ATerm parse_options_1 (ATerm, ATerm y_88 (ATerm));
ATerm table_put_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm Nil_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm o_73 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm _2 (ATerm, ATerm o_53 (ATerm), ATerm p_53 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm x_54 (ATerm), ATerm y_54 (ATerm));
ATerm explode_string_0 (ATerm);
ATerm get_path_0 (ATerm);
ATerm xtc_find_path_0 (ATerm);
ATerm init_sc_config_0 (ATerm);
ATerm command_line_options_0 (ATerm);
ATerm sc_0 (ATerm);
ATerm main_0 (ATerm);
ATerm exit_0 (ATerm t)
{
  ATerm e_0 = NULL;
  e_0 = t;
  t = SSL_exit(not_null(e_0));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm v_1 = NULL,w_1 = NULL,x_1 = NULL;
  v_1 = t;
  c_1 :
  if(match_cons(v_1, sym__2))
    {
      w_1 = ATgetArgument(v_1, 0);
      x_1 = ATgetArgument(v_1, 1);
      {
        ATerm q_14;
        q_14 = t;
        t = SSL_printnl(not_null(w_1), not_null(x_1));
        t = q_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm n_79 (ATerm), ATerm o_79 (ATerm))
{
  ATerm r_14 = t;
  int u_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = n_79(t);
      LocalPopChoice(u_14);
    }
  else
    {
      t = r_14;
      {
        ATerm b_3 = NULL,d_3 = NULL,f_3 = NULL;
        b_3 = t;
        a_3 :
        if(((ATgetType(b_3) == AT_LIST) && !(ATisEmpty(b_3))))
          {
            d_3 = ATgetFirst((ATermList) b_3);
            f_3 = (ATerm) ATgetNext((ATermList) b_3);
            {
              ATerm k_3 = NULL;
              ATerm l_3 = NULL;
              t = not_null(f_3);
              {
                t = foldr_2(t, n_79, o_79);
                {
                  l_3 = t;
                  if(((k_3 != NULL) && (k_3 != l_3)))
                    _fail(l_3);
                  else
                    k_3 = l_3;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(d_3), not_null(k_3));
                t = o_79(t);
              }
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm crush_2 (ATerm t, ATerm l_78 (ATerm), ATerm m_78 (ATerm))
{
  ATerm u_3 = NULL;
  ATerm w_3 = NULL;
  u_3 = t;
  {
    ATerm x_3 = NULL;
    ATerm z_3 = NULL,a_4 = NULL,b_4 = NULL;
    t = not_null(u_3);
    {
      x_3 = t;
      {
        t = SSL_explode_term(not_null(x_3));
        {
          z_3 = t;
          s_3 :
          if(match_cons(z_3, sym__2))
            {
              a_4 = ATgetArgument(z_3, 0);
              b_4 = ATgetArgument(z_3, 1);
              if(((w_3 != NULL) && (w_3 != b_4)))
                _fail(b_4);
              else
                w_3 = b_4;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(w_3);
      t = foldr_2(t, l_78, m_78);
    }
  }
  return(t);
}
ATerm run_time_0 (ATerm t)
{
  t = times_0(t);
  {
    ATerm b_0 (ATerm t)
    {
      t = term_z_14;
      return(t);
    }
    t = crush_2(t, b_0, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm u_86 (ATerm))
{
  ATerm a_15 = t;
  int b_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_15;
      c_15 = t;
      {
        ATerm g_4 = NULL;
        ATerm h_4 = NULL;
        t = term_d_15;
        {
          t = get_config_0(t);
          {
            h_4 = t;
            if(((g_4 != NULL) && (g_4 != h_4)))
              _fail(h_4);
            else
              g_4 = h_4;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_4), term_e_15);
          t = geq_0(t);
        }
      }
      t = c_15;
      t = u_86(t);
      LocalPopChoice(b_15);
    }
  else
    {
      t = a_15;
      {
      }
    }
  return(t);
}
ATerm Snd_0 (ATerm t)
{
  ATerm q_4 = NULL;
  ATerm s_4 = NULL,t_4 = NULL,u_4 = NULL;
  q_4 = t;
  {
    ATerm v_4 = NULL;
    ATerm x_4 = NULL,y_4 = NULL,z_4 = NULL,a_5 = NULL,b_5 = NULL,c_5 = NULL,d_5 = NULL;
    t = not_null(q_4);
    {
      v_4 = t;
      {
        t = SSL_explode_term(not_null(v_4));
        {
          x_4 = t;
          m_4 :
          if(match_cons(x_4, sym__2))
            {
              y_4 = ATgetArgument(x_4, 0);
              z_4 = ATgetArgument(x_4, 1);
              n_4 :
              if(match_string(y_4, ""))
                {
                  o_4 :
                  if(((ATgetType(z_4) == AT_LIST) && !(ATisEmpty(z_4))))
                    {
                      a_5 = ATgetFirst((ATermList) z_4);
                      b_5 = (ATerm) ATgetNext((ATermList) z_4);
                      p_4 :
                      if(((ATgetType(b_5) == AT_LIST) && !(ATisEmpty(b_5))))
                        {
                          c_5 = ATgetFirst((ATermList) b_5);
                          d_5 = (ATerm) ATgetNext((ATermList) b_5);
                          {
                            if(((s_4 != NULL) && (s_4 != a_5)))
                              _fail(a_5);
                            else
                              s_4 = a_5;
                            {
                              if(((u_4 != NULL) && (u_4 != c_5)))
                                _fail(c_5);
                              else
                                u_4 = c_5;
                              if(((t_4 != NULL) && (t_4 != d_5)))
                                _fail(d_5);
                              else
                                t_4 = d_5;
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    t = not_null(u_4);
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm n_5 = NULL;
  ATerm p_5 = NULL,q_5 = NULL;
  n_5 = t;
  {
    ATerm r_5 = NULL;
    ATerm t_5 = NULL,u_5 = NULL,v_5 = NULL,w_5 = NULL,x_5 = NULL;
    t = not_null(n_5);
    {
      r_5 = t;
      {
        t = SSL_explode_term(not_null(r_5));
        {
          t_5 = t;
          k_5 :
          if(match_cons(t_5, sym__2))
            {
              u_5 = ATgetArgument(t_5, 0);
              v_5 = ATgetArgument(t_5, 1);
              l_5 :
              if(match_string(u_5, ""))
                {
                  m_5 :
                  if(((ATgetType(v_5) == AT_LIST) && !(ATisEmpty(v_5))))
                    {
                      w_5 = ATgetFirst((ATermList) v_5);
                      x_5 = (ATerm) ATgetNext((ATermList) v_5);
                      {
                        if(((q_5 != NULL) && (q_5 != w_5)))
                          _fail(w_5);
                        else
                          q_5 = w_5;
                        if(((p_5 != NULL) && (p_5 != x_5)))
                          _fail(x_5);
                        else
                          p_5 = x_5;
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    t = not_null(q_5);
  }
  return(t);
}
ATerm link_object_code_0 (ATerm t)
{
  ATerm h_6 = NULL,i_6 = NULL;
  h_6 = t;
  g_6 :
  if(match_cons(h_6, sym_FILE_1))
    {
      i_6 = ATgetArgument(h_6, 0);
      {
        ATerm k_6 = NULL;
        ATerm l_6 = NULL;
        ATerm c_0 (ATerm t)
        {
          ATerm f_0 (ATerm t)
          {
            t = term_f_15;
            return(t);
          }
          t = say_1(t, f_0);
          return(t);
        }
        t = if_verbose2_1(t, c_0);
        {
          ATerm m_6 = NULL;
          ATerm s_0 (ATerm t)
          {
            t = term_g_15;
            return(t);
          }
          t = get_outfile_1(t, s_0);
          {
            l_6 = t;
            {
              if(((k_6 != NULL) && (k_6 != l_6)))
                _fail(l_6);
              else
                k_6 = l_6;
              {
                ATerm n_6 = NULL;
                t = term_h_15;
                {
                  t = get_config_0(t);
                  {
                    n_6 = t;
                    if(((m_6 != NULL) && (m_6 != n_6)))
                      _fail(n_6);
                    else
                      m_6 = n_6;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_i_15, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(m_6)), not_null(k_6)), term_m_15), not_null(i_6)));
                  {
                    ATerm t_0 (ATerm t)
                    {
                      ATerm p_15;
                      p_15 = t;
                      {
                        ATerm o_6 = NULL,q_6 = NULL;
                        ATerm t_15;
                        t_15 = t;
                        {
                          ATerm p_6 = NULL;
                          t = Fst_0(t);
                          {
                            p_6 = t;
                            if(((o_6 != NULL) && (o_6 != p_6)))
                              _fail(p_6);
                            else
                              o_6 = p_6;
                          }
                        }
                        t = t_15;
                        {
                          ATerm r_6 = NULL;
                          t = Snd_0(t);
                          {
                            r_6 = t;
                            if(((q_6 != NULL) && (q_6 != r_6)))
                              _fail(r_6);
                            else
                              q_6 = r_6;
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym__2, term_v_15, (ATerm) ATinsert(CheckATermList(not_null(q_6)), not_null(o_6)));
                            t = printnl_0(t);
                          }
                        }
                      }
                      t = p_15;
                      return(t);
                    }
                    t = if_verbose3_1(t, t_0);
                    t = call_0(t);
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(k_6));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm c_to_object_code_0 (ATerm t)
{
  ATerm d_7 = NULL,e_7 = NULL;
  d_7 = t;
  c_7 :
  if(match_cons(d_7, sym_FILE_1))
    {
      e_7 = ATgetArgument(d_7, 0);
      {
        ATerm g_7 = NULL;
        ATerm h_7 = NULL;
        ATerm u_0 (ATerm t)
        {
          ATerm v_0 (ATerm t)
          {
            t = term_w_15;
            return(t);
          }
          t = say_1(t, v_0);
          return(t);
        }
        t = if_verbose2_1(t, u_0);
        {
          ATerm i_7 = NULL;
          ATerm w_0 (ATerm t)
          {
            t = term_x_15;
            return(t);
          }
          t = get_outfile_1(t, w_0);
          {
            h_7 = t;
            {
              if(((g_7 != NULL) && (g_7 != h_7)))
                _fail(h_7);
              else
                g_7 = h_7;
              {
                ATerm j_7 = NULL,l_7 = NULL;
                ATerm k_7 = NULL;
                t = term_y_15;
                {
                  t = get_config_0(t);
                  {
                    k_7 = t;
                    if(((j_7 != NULL) && (j_7 != k_7)))
                      _fail(k_7);
                    else
                      j_7 = k_7;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(j_7), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(g_7)), term_m_15), not_null(e_7)), term_z_15));
                  {
                    ATerm a_16 = t;
                    int b_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = conc_two_lists_0(t);
                        LocalPopChoice(b_16);
                      }
                    else
                      {
                        t = a_16;
                        t = conc_more_lists_0(t);
                      }
                    {
                      l_7 = t;
                      if(((i_7 != NULL) && (i_7 != l_7)))
                        _fail(l_7);
                      else
                        i_7 = l_7;
                    }
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_i_15, not_null(i_7));
                  {
                    ATerm x_0 (ATerm t)
                    {
                      ATerm c_16;
                      c_16 = t;
                      {
                        ATerm m_7 = NULL;
                        ATerm n_7 = NULL;
                        n_7 = t;
                        if(((m_7 != NULL) && (m_7 != n_7)))
                          _fail(n_7);
                        else
                          m_7 = n_7;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_v_15, not_null(m_7));
                          t = printnl_0(t);
                        }
                      }
                      t = c_16;
                      return(t);
                    }
                    t = if_verbose3_1(t, x_0);
                    t = call_0(t);
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_7));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm c_compile_0 (ATerm t)
{
  ATerm f_16 = t;
  int g_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_16;
      h_16 = t;
      {
        t = term_z_15;
        t = get_config_0(t);
      }
      t = h_16;
      LocalPopChoice(g_16);
    }
  else
    {
      t = f_16;
      {
        ATerm y_0 (ATerm t)
        {
          ATerm a_1 (ATerm t)
          {
            ATerm u_7 = NULL;
            ATerm v_7 = NULL;
            v_7 = t;
            if(((u_7 != NULL) && (u_7 != v_7)))
              _fail(v_7);
            else
              u_7 = v_7;
            {
              t = (ATerm) ATmakeAppl(sym__2, term_v_15, (ATerm) ATinsert(CheckATermList(not_null(u_7)), term_m_16));
              t = printnl_0(t);
            }
            return(t);
          }
          t = if_verbose1_1(t, a_1);
          return(t);
        }
        ATerm z_0 (ATerm t)
        {
          t = c_to_object_code_0(t);
          t = link_object_code_0(t);
          return(t);
        }
        t = profile_p__2(t, y_0, z_0);
      }
    }
  return(t);
}
ATerm rename_file_0 (ATerm t)
{
  ATerm z_7 = NULL,a_8 = NULL,b_8 = NULL;
  z_7 = t;
  y_7 :
  if(match_cons(z_7, sym__2))
    {
      a_8 = ATgetArgument(z_7, 0);
      b_8 = ATgetArgument(z_7, 1);
      t = SSL_rename(not_null(a_8), not_null(b_8));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rename_to_1 (ATerm t, ATerm r_0 (ATerm))
{
  ATerm o_8 = NULL,p_8 = NULL;
  o_8 = t;
  n_8 :
  if(match_cons(o_8, sym_FILE_1))
    {
      p_8 = ATgetArgument(o_8, 0);
      {
        ATerm n_16 = t;
        int o_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_8 = NULL;
            t = r_0(t);
            {
              r_8 = t;
              j_8 :
              if(match_cons(r_8, sym_stdout_0))
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(p_8), term_q_16);
                  {
                    t = copy_file_0(t);
                    {
                      t = not_null(p_8);
                      t = remove_file_0(t);
                    }
                  }
                }
              else
                {
                  _fail(t);
                }
            }
            t = term_q_16;
            LocalPopChoice(o_16);
          }
        else
          {
            t = n_16;
            {
              ATerm r_16 = t;
              int s_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_8 = NULL;
                  ATerm u_8 = NULL;
                  t = r_0(t);
                  {
                    u_8 = t;
                    {
                      if(((t_8 != NULL) && (t_8 != u_8)))
                        _fail(u_8);
                      else
                        t_8 = u_8;
                      {
                        ATerm t_16 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm y_16 = t;
                            int z_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                LocalPopChoice(z_16);
                              }
                            else
                              {
                                t = y_16;
                                {
                                  ATerm v_8 = NULL;
                                  v_8 = t;
                                  if(((p_8 != NULL) && (p_8 != v_8)))
                                    _fail(v_8);
                                  else
                                    p_8 = v_8;
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = t_16;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(p_8), not_null(t_8));
                          t = rename_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(t_8));
                  LocalPopChoice(s_16);
                }
              else
                {
                  t = r_16;
                  {
                    ATerm x_8 = NULL;
                    t = r_0(t);
                    {
                      x_8 = t;
                      if(((p_8 != NULL) && (p_8 != x_8)))
                        _fail(x_8);
                      else
                        p_8 = x_8;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(p_8));
                  }
                }
            }
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm xtc_transform_1 (ATerm t, ATerm p_93 (ATerm))
{
  ATerm b_1 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, p_93, b_1);
  return(t);
}
ATerm abox2text_0 (ATerm t)
{
  ATerm d_1 (ATerm t)
  {
    t = term_a_17;
    return(t);
  }
  t = xtc_transform_1(t, d_1);
  return(t);
}
ATerm ac2abox_0 (ATerm t)
{
  ATerm e_1 (ATerm t)
  {
    t = term_d_17;
    return(t);
  }
  ATerm f_1 (ATerm t)
  {
    ATerm g_9 = NULL;
    ATerm h_9 = NULL;
    t = term_e_17;
    {
      t = xtc_find_0(t);
      {
        h_9 = t;
        if(((g_9 != NULL) && (g_9 != h_9)))
          _fail(h_9);
        else
          g_9 = h_9;
      }
    }
    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_9)), term_f_17);
    return(t);
  }
  t = xtc_transform_2(t, e_1, f_1);
  return(t);
}
ATerm s2c_0 (ATerm t)
{
  ATerm g_1 (ATerm t)
  {
    t = term_g_17;
    return(t);
  }
  ATerm h_1 (ATerm t)
  {
    ATerm m_9 = NULL,o_9 = NULL;
    ATerm h_17;
    h_17 = t;
    {
      ATerm n_9 = NULL;
      t = pass_verbose_0(t);
      {
        n_9 = t;
        if(((m_9 != NULL) && (m_9 != n_9)))
          _fail(n_9);
        else
          m_9 = n_9;
      }
    }
    t = h_17;
    {
      ATerm r_9 = NULL;
      t = term_n_17;
      {
        t = get_config_0(t);
        {
          ATerm i_1 (ATerm t)
          {
            ATerm p_9 = NULL;
            ATerm q_9 = NULL;
            q_9 = t;
            if(((p_9 != NULL) && (p_9 != q_9)))
              _fail(q_9);
            else
              p_9 = q_9;
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_9)), term_n_17);
            return(t);
          }
          t = map_1(t, i_1);
          {
            r_9 = t;
            if(((o_9 != NULL) && (o_9 != r_9)))
              _fail(r_9);
            else
              o_9 = r_9;
          }
        }
      }
      {
        t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(o_9)), (ATerm) ATinsert(ATempty, term_q_17)), not_null(m_9));
        t = concat_0(t);
      }
    }
    return(t);
  }
  t = xtc_transform_2(t, g_1, h_1);
  return(t);
}
ATerm stratego_cf_0 (ATerm t)
{
  ATerm j_1 (ATerm t)
  {
    t = term_r_17;
    return(t);
  }
  ATerm k_1 (ATerm t)
  {
    ATerm w_9 = NULL;
    ATerm x_9 = NULL;
    t = pass_verbose_0(t);
    {
      x_9 = t;
      if(((w_9 != NULL) && (w_9 != x_9)))
        _fail(x_9);
      else
        w_9 = x_9;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(w_9)), term_q_17);
    return(t);
  }
  t = xtc_transform_2(t, j_1, k_1);
  return(t);
}
ATerm canonicalize_0 (ATerm t)
{
  ATerm l_1 (ATerm t)
  {
    t = term_s_17;
    return(t);
  }
  ATerm m_1 (ATerm t)
  {
    ATerm a_10 = NULL;
    ATerm b_10 = NULL;
    t = pass_verbose_0(t);
    {
      b_10 = t;
      if(((a_10 != NULL) && (a_10 != b_10)))
        _fail(b_10);
      else
        a_10 = b_10;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(a_10)), term_q_17);
    return(t);
  }
  t = xtc_transform_2(t, l_1, m_1);
  return(t);
}
ATerm back_end_0 (ATerm t)
{
  ATerm n_1 (ATerm t)
  {
    ATerm o_1 (ATerm t)
    {
      t = term_t_17;
      return(t);
    }
    t = debug_1(t, o_1);
    return(t);
  }
  t = if_verbose2_1(t, n_1);
  {
    ATerm p_1 (ATerm t)
    {
      ATerm r_1 (ATerm t)
      {
        ATerm e_10 = NULL;
        ATerm f_10 = NULL;
        f_10 = t;
        if(((e_10 != NULL) && (e_10 != f_10)))
          _fail(f_10);
        else
          e_10 = f_10;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_v_15, (ATerm) ATinsert(CheckATermList(not_null(e_10)), term_u_17));
          t = printnl_0(t);
        }
        return(t);
      }
      t = if_verbose1_1(t, r_1);
      return(t);
    }
    ATerm q_1 (ATerm t)
    {
      t = canonicalize_0(t);
      {
        t = stratego_cf_0(t);
        {
          t = s2c_0(t);
          {
            t = ac2abox_0(t);
            {
              ATerm s_1 (ATerm t)
              {
                t = term_a_17;
                return(t);
              }
              t = xtc_transform_1(t, s_1);
              {
                ATerm t_1 (ATerm t)
                {
                  ATerm u_1 (ATerm t)
                  {
                    t = term_z_17;
                    return(t);
                  }
                  t = get_outfile_1(t, u_1);
                  return(t);
                }
                t = rename_to_1(t, t_1);
              }
            }
          }
        }
      }
      return(t);
    }
    t = profile_p__2(t, p_1, q_1);
  }
  return(t);
}
ATerm optimize2_0 (ATerm t)
{
  ATerm y_1 (ATerm t)
  {
    t = term_a_18;
    return(t);
  }
  ATerm z_1 (ATerm t)
  {
    ATerm i_10 = NULL;
    ATerm j_10 = NULL;
    t = pass_verbose_0(t);
    {
      j_10 = t;
      if(((i_10 != NULL) && (i_10 != j_10)))
        _fail(j_10);
      else
        i_10 = j_10;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(i_10)), term_q_17);
    return(t);
  }
  t = xtc_transform_2(t, y_1, z_1);
  return(t);
}
ATerm compile_match_0 (ATerm t)
{
  ATerm a_2 (ATerm t)
  {
    t = term_b_18;
    return(t);
  }
  ATerm b_2 (ATerm t)
  {
    ATerm m_10 = NULL;
    ATerm n_10 = NULL;
    t = pass_verbose_0(t);
    {
      n_10 = t;
      if(((m_10 != NULL) && (m_10 != n_10)))
        _fail(n_10);
      else
        m_10 = n_10;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(m_10)), term_q_17);
    return(t);
  }
  t = xtc_transform_2(t, a_2, b_2);
  return(t);
}
ATerm inline_0 (ATerm t)
{
  ATerm c_2 (ATerm t)
  {
    t = term_c_18;
    return(t);
  }
  ATerm d_2 (ATerm t)
  {
    ATerm q_10 = NULL;
    ATerm r_10 = NULL;
    t = pass_verbose_0(t);
    {
      r_10 = t;
      if(((q_10 != NULL) && (q_10 != r_10)))
        _fail(r_10);
      else
        q_10 = r_10;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(q_10)), term_q_17);
    return(t);
  }
  t = xtc_transform_2(t, c_2, d_2);
  return(t);
}
ATerm fusion_0 (ATerm t)
{
  ATerm e_2 (ATerm t)
  {
    t = term_d_18;
    return(t);
  }
  ATerm f_2 (ATerm t)
  {
    ATerm u_10 = NULL;
    ATerm v_10 = NULL;
    t = pass_verbose_0(t);
    {
      v_10 = t;
      if(((u_10 != NULL) && (u_10 != v_10)))
        _fail(v_10);
      else
        u_10 = v_10;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(u_10)), term_q_17);
    return(t);
  }
  t = xtc_transform_2(t, e_2, f_2);
  return(t);
}
ATerm optimize1_0 (ATerm t)
{
  ATerm g_2 (ATerm t)
  {
    t = term_f_18;
    return(t);
  }
  ATerm h_2 (ATerm t)
  {
    ATerm y_10 = NULL;
    ATerm z_10 = NULL;
    t = pass_verbose_0(t);
    {
      z_10 = t;
      if(((y_10 != NULL) && (y_10 != z_10)))
        _fail(z_10);
      else
        y_10 = z_10;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(y_10)), term_q_17);
    return(t);
  }
  t = xtc_transform_2(t, g_2, h_2);
  return(t);
}
ATerm optimize_0 (ATerm t)
{
  ATerm i_2 (ATerm t)
  {
    ATerm j_2 (ATerm t)
    {
      t = term_i_18;
      return(t);
    }
    t = debug_1(t, j_2);
    return(t);
  }
  t = if_verbose2_1(t, i_2);
  {
    ATerm k_2 (ATerm t)
    {
      ATerm m_2 (ATerm t)
      {
        ATerm c_11 = NULL;
        ATerm d_11 = NULL;
        d_11 = t;
        if(((c_11 != NULL) && (c_11 != d_11)))
          _fail(d_11);
        else
          c_11 = d_11;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_v_15, (ATerm) ATinsert(CheckATermList(not_null(c_11)), term_j_18));
          t = printnl_0(t);
        }
        return(t);
      }
      t = if_verbose1_1(t, m_2);
      return(t);
    }
    ATerm l_2 (ATerm t)
    {
      t = optimize1_0(t);
      {
        ATerm k_18 = t;
        int m_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_18;
            n_18 = t;
            {
              ATerm o_18 = t;
              if((PushChoice() == 0))
                {
                  t = term_t_18;
                  t = get_config_0(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = o_18;
                }
            }
            t = n_18;
            t = fusion_0(t);
            LocalPopChoice(m_18);
          }
        else
          {
            t = k_18;
            {
            }
          }
        {
          t = inline_0(t);
          {
            t = compile_match_0(t);
            t = optimize2_0(t);
          }
        }
      }
      return(t);
    }
    t = profile_p__2(t, k_2, l_2);
  }
  return(t);
}
ATerm rename_defs_0 (ATerm t)
{
  ATerm n_2 (ATerm t)
  {
    t = term_u_18;
    return(t);
  }
  ATerm o_2 (ATerm t)
  {
    ATerm g_11 = NULL;
    ATerm h_11 = NULL;
    t = pass_verbose_0(t);
    {
      h_11 = t;
      if(((g_11 != NULL) && (g_11 != h_11)))
        _fail(h_11);
      else
        g_11 = h_11;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(g_11)), term_q_17);
    return(t);
  }
  t = xtc_transform_2(t, n_2, o_2);
  return(t);
}
ATerm stratego_nf_0 (ATerm t)
{
  ATerm p_2 (ATerm t)
  {
    t = term_v_18;
    return(t);
  }
  ATerm q_2 (ATerm t)
  {
    ATerm k_11 = NULL;
    ATerm l_11 = NULL;
    t = pass_verbose_0(t);
    {
      l_11 = t;
      if(((k_11 != NULL) && (k_11 != l_11)))
        _fail(l_11);
      else
        k_11 = l_11;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(k_11)), term_q_17);
    return(t);
  }
  t = xtc_transform_2(t, p_2, q_2);
  return(t);
}
ATerm extract_0 (ATerm t)
{
  ATerm r_2 (ATerm t)
  {
    t = term_w_18;
    return(t);
  }
  ATerm s_2 (ATerm t)
  {
    ATerm o_11 = NULL;
    ATerm p_11 = NULL;
    t = pass_verbose_0(t);
    {
      p_11 = t;
      if(((o_11 != NULL) && (o_11 != p_11)))
        _fail(p_11);
      else
        o_11 = p_11;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(o_11)), term_q_17);
    return(t);
  }
  t = xtc_transform_2(t, r_2, s_2);
  return(t);
}
ATerm extract_all_0 (ATerm t)
{
  ATerm t_2 (ATerm t)
  {
    t = term_y_18;
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    ATerm s_11 = NULL;
    ATerm t_11 = NULL;
    t = pass_verbose_0(t);
    {
      t_11 = t;
      if(((s_11 != NULL) && (s_11 != t_11)))
        _fail(t_11);
      else
        s_11 = t_11;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(s_11)), term_q_17);
    return(t);
  }
  t = xtc_transform_2(t, t_2, u_2);
  return(t);
}
ATerm output_frontend_0 (ATerm t)
{
  ATerm w_11 = NULL;
  ATerm z_18 = t;
  int a_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_19;
      b_19 = t;
      {
        t = term_c_19;
        t = get_config_0(t);
      }
      t = b_19;
      {
        ATerm e_19 = t;
        int i_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = extract_all_0(t);
            LocalPopChoice(i_19);
          }
        else
          {
            t = e_19;
            {
              t = (ATerm) ATinsert(ATempty, term_k_19);
              t = fatal_error_0(t);
            }
          }
        {
          ATerm v_2 (ATerm t)
          {
            ATerm x_11 = NULL;
            ATerm w_2 (ATerm t)
            {
              t = term_q_19;
              return(t);
            }
            t = get_outfile_1(t, w_2);
            {
              x_11 = t;
              if(((w_11 != NULL) && (w_11 != x_11)))
                _fail(x_11);
              else
                w_11 = x_11;
            }
            return(t);
          }
          t = copy_to_1(t, v_2);
          {
            ATerm x_2 (ATerm t)
            {
              t = (ATerm) ATinsert(ATempty, term_r_19);
              return(t);
            }
            t = say_1(t, x_2);
            t = xtc_io_exit_0(t);
          }
        }
      }
      LocalPopChoice(a_19);
    }
  else
    {
      t = z_18;
      {
      }
    }
  return(t);
}
ATerm if_keep2_1 (ATerm t, ATerm i_87 (ATerm))
{
  ATerm s_19 = t;
  int t_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_19;
      u_19 = t;
      {
        ATerm a_12 = NULL;
        ATerm b_12 = NULL;
        t = term_z_19;
        {
          t = get_config_0(t);
          {
            b_12 = t;
            if(((a_12 != NULL) && (a_12 != b_12)))
              _fail(b_12);
            else
              a_12 = b_12;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_12), term_e_15);
          t = geq_0(t);
        }
      }
      t = u_19;
      t = i_87(t);
      LocalPopChoice(t_19);
    }
  else
    {
      t = s_19;
      {
      }
    }
  return(t);
}
ATerm frontend_0 (ATerm t)
{
  ATerm h_12 = NULL;
  ATerm y_2 (ATerm t)
  {
    t = term_a_20;
    return(t);
  }
  ATerm z_2 (ATerm t)
  {
    ATerm f_12 = NULL;
    ATerm g_12 = NULL;
    t = pass_verbose_0(t);
    {
      g_12 = t;
      if(((f_12 != NULL) && (f_12 != g_12)))
        _fail(g_12);
      else
        f_12 = g_12;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(f_12)), term_q_17);
    return(t);
  }
  t = xtc_transform_2(t, y_2, z_2);
  {
    ATerm c_3 (ATerm t)
    {
      ATerm e_3 (ATerm t)
      {
        ATerm i_12 = NULL;
        ATerm g_3 (ATerm t)
        {
          t = term_b_20;
          return(t);
        }
        t = get_outfile_1(t, g_3);
        {
          i_12 = t;
          if(((h_12 != NULL) && (h_12 != i_12)))
            _fail(i_12);
          else
            h_12 = i_12;
        }
        return(t);
      }
      t = copy_to_1(t, e_3);
      {
        ATerm h_3 (ATerm t)
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_12)), term_c_20);
          return(t);
        }
        t = say_1(t, h_3);
      }
      return(t);
    }
    t = if_keep2_1(t, c_3);
  }
  return(t);
}
ATerm if_keep3_1 (ATerm t, ATerm j_87 (ATerm))
{
  ATerm d_20 = t;
  int i_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_20;
      j_20 = t;
      {
        ATerm m_12 = NULL;
        ATerm n_12 = NULL;
        t = term_z_19;
        {
          t = get_config_0(t);
          {
            n_12 = t;
            if(((m_12 != NULL) && (m_12 != n_12)))
              _fail(n_12);
            else
              m_12 = n_12;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_12), term_k_20);
          t = geq_0(t);
        }
      }
      t = j_20;
      t = j_87(t);
      LocalPopChoice(i_20);
    }
  else
    {
      t = d_20;
      {
      }
    }
  return(t);
}
ATerm AddMain_1 (ATerm t, ATerm g_65 (ATerm))
{
  ATerm s_12 = NULL,t_12 = NULL;
  s_12 = t;
  r_12 :
  if(match_cons(s_12, sym_Specification_1))
    {
      t_12 = ATgetArgument(s_12, 0);
      {
        ATerm v_12 = NULL;
        ATerm w_12 = NULL;
        t = term_l_20;
        {
          t = g_65(t);
          {
            w_12 = t;
            if(((v_12 != NULL) && (v_12 != w_12)))
              _fail(w_12);
            else
              v_12 = w_12;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(not_null(t_12)), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_m_20, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(v_12)), (ATerm) ATempty))))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm xtc_io_transform_1 (ATerm t, ATerm z_93 (ATerm))
{
  t = read_from_0(t);
  {
    t = z_93(t);
    t = write_to_0(t);
  }
  return(t);
}
ATerm add_main_0 (ATerm t)
{
  ATerm b_13 = NULL,d_13 = NULL;
  ATerm s_20 = t;
  int t_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_21;
      b_21 = t;
      {
        ATerm c_13 = NULL;
        t = term_c_21;
        {
          t = get_config_0(t);
          {
            c_13 = t;
            {
              if(((b_13 != NULL) && (b_13 != c_13)))
                _fail(c_13);
              else
                b_13 = c_13;
              {
                ATerm i_3 (ATerm t)
                {
                  ATerm j_3 (ATerm t)
                  {
                    t = term_d_21;
                    return(t);
                  }
                  t = debug_1(t, j_3);
                  return(t);
                }
                t = if_verbose2_1(t, i_3);
              }
            }
          }
        }
      }
      t = b_21;
      {
        ATerm m_3 (ATerm t)
        {
          ATerm n_3 (ATerm t)
          {
            t = not_null(b_13);
            return(t);
          }
          t = AddMain_1(t, n_3);
          return(t);
        }
        t = xtc_io_transform_1(t, m_3);
      }
      LocalPopChoice(t_20);
    }
  else
    {
      t = s_20;
      {
      }
    }
  {
    ATerm o_3 (ATerm t)
    {
      ATerm p_3 (ATerm t)
      {
        ATerm e_13 = NULL;
        ATerm q_3 (ATerm t)
        {
          t = term_e_21;
          return(t);
        }
        t = get_outfile_1(t, q_3);
        {
          e_13 = t;
          if(((d_13 != NULL) && (d_13 != e_13)))
            _fail(e_13);
          else
            d_13 = e_13;
        }
        return(t);
      }
      t = copy_to_1(t, p_3);
      {
        ATerm r_3 (ATerm t)
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_13)), term_g_21);
          return(t);
        }
        t = say_1(t, r_3);
      }
      return(t);
    }
    t = if_keep3_1(t, o_3);
  }
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm w_65 (ATerm), ATerm x_65 (ATerm))
{
  ATerm h_13 (ATerm t)
  {
    ATerm h_21 = t;
    int q_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_65(t);
        t = h_13(t);
        LocalPopChoice(q_21);
      }
    else
      {
        t = h_21;
        t = x_65(t);
      }
    return(t);
  }
  t = h_13(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm z_65 (ATerm))
{
  t = repeat_2(t, z_65, _id);
  return(t);
}
ATerm xtc_exit_0 (ATerm t)
{
  ATerm l_13 = NULL;
  ATerm n_13 = NULL,o_13 = NULL;
  l_13 = t;
  {
    ATerm t_3 (ATerm t)
    {
      ATerm r_21;
      r_21 = t;
      {
        ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL;
        t = term_v_21;
        {
          t = table_get_0(t);
          {
            p_13 = t;
            k_13 :
            if(((ATgetType(p_13) == AT_LIST) && !(ATisEmpty(p_13))))
              {
                q_13 = ATgetFirst((ATermList) p_13);
                r_13 = (ATerm) ATgetNext((ATermList) p_13);
                {
                  if(((o_13 != NULL) && (o_13 != q_13)))
                    _fail(q_13);
                  else
                    o_13 = q_13;
                  {
                    if(((n_13 != NULL) && (n_13 != r_13)))
                      _fail(r_13);
                    else
                      n_13 = r_13;
                    {
                      t = not_null(o_13);
                      {
                        ATerm v_3 (ATerm t)
                        {
                          ATerm w_21 = t;
                          int x_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = remove_file_0(t);
                              LocalPopChoice(x_21);
                            }
                          else
                            {
                              t = w_21;
                              {
                              }
                            }
                          return(t);
                        }
                        t = map_1(t, v_3);
                      }
                    }
                  }
                }
              }
            else
              {
                _fail(t);
              }
          }
        }
      }
      t = r_21;
      {
        ATerm y_3 (ATerm t)
        {
          t = term_s_21;
          return(t);
        }
        t = end_scope_1(t, y_3);
      }
      return(t);
    }
    t = repeat_2(t, t_3, _id);
    t = exit_0(t);
  }
  return(t);
}
ATerm xtc_io_exit_0 (ATerm t)
{
  ATerm c_4 (ATerm t)
  {
    ATerm y_21 = t;
    int a_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_15;
        t = get_config_0(t);
        LocalPopChoice(a_22);
      }
    else
      {
        t = y_21;
        t = term_q_16;
      }
    return(t);
  }
  t = copy_to_1(t, c_4);
  {
    t = term_z_14;
    t = xtc_exit_0(t);
  }
  return(t);
}
ATerm get_outfile_1 (ATerm t, ATerm h_65 (ATerm))
{
  ATerm w_13 = NULL,y_13 = NULL;
  ATerm b_22;
  b_22 = t;
  {
    ATerm x_13 = NULL;
    t = h_65(t);
    {
      x_13 = t;
      if(((w_13 != NULL) && (w_13 != x_13)))
        _fail(x_13);
      else
        w_13 = x_13;
    }
  }
  t = b_22;
  {
    ATerm z_13 = NULL;
    t = term_c_22;
    {
      t = get_config_0(t);
      {
        z_13 = t;
        if(((y_13 != NULL) && (y_13 != z_13)))
          _fail(z_13);
        else
          y_13 = z_13;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(y_13), not_null(w_13));
      t = conc_strings_0(t);
    }
  }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm g_14 = NULL;
  g_14 = t;
  f_14 :
  if(match_cons(g_14, sym_stderr_0))
    {
      ATerm i_14 = NULL,k_14 = NULL;
      ATerm d_22;
      d_22 = t;
      {
        ATerm j_14 = NULL;
        t = SSLgetAnnotations(not_null(g_14));
        {
          j_14 = t;
          if(((i_14 != NULL) && (i_14 != j_14)))
            _fail(j_14);
          else
            i_14 = j_14;
        }
      }
      t = d_22;
      {
        ATerm l_14 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(i_14));
        {
          l_14 = t;
          if(((k_14 != NULL) && (k_14 != l_14)))
            _fail(l_14);
          else
            k_14 = l_14;
        }
        t = not_null(k_14);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stdout_0 (ATerm t)
{
  ATerm t_14 = NULL;
  t_14 = t;
  s_14 :
  if(match_cons(t_14, sym_stdout_0))
    {
      ATerm v_14 = NULL,x_14 = NULL;
      ATerm e_22;
      e_22 = t;
      {
        ATerm w_14 = NULL;
        t = SSLgetAnnotations(not_null(t_14));
        {
          w_14 = t;
          if(((v_14 != NULL) && (v_14 != w_14)))
            _fail(w_14);
          else
            v_14 = w_14;
        }
      }
      t = e_22;
      {
        ATerm y_14 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(v_14));
        {
          y_14 = t;
          if(((x_14 != NULL) && (x_14 != y_14)))
            _fail(y_14);
          else
            x_14 = y_14;
        }
        t = not_null(x_14);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_to_1 (ATerm t, ATerm q_0 (ATerm))
{
  ATerm k_15 = NULL,l_15 = NULL;
  k_15 = t;
  j_15 :
  if(match_cons(k_15, sym_FILE_1))
    {
      l_15 = ATgetArgument(k_15, 0);
      {
        ATerm f_22 = t;
        int g_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_15 = NULL;
            ATerm o_15 = NULL;
            t = q_0(t);
            {
              o_15 = t;
              {
                if(((n_15 != NULL) && (n_15 != o_15)))
                  _fail(o_15);
                else
                  n_15 = o_15;
                {
                  ATerm h_22 = t;
                  int i_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(i_22);
                    }
                  else
                    {
                      t = h_22;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(l_15), not_null(n_15));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(l_15));
            LocalPopChoice(g_22);
          }
        else
          {
            t = f_22;
            {
              ATerm j_22 = t;
              int k_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_15 = NULL;
                  ATerm r_15 = NULL;
                  t = q_0(t);
                  {
                    r_15 = t;
                    {
                      if(((q_15 != NULL) && (q_15 != r_15)))
                        _fail(r_15);
                      else
                        q_15 = r_15;
                      {
                        ATerm l_22 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm m_22 = t;
                            int o_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                LocalPopChoice(o_22);
                              }
                            else
                              {
                                t = m_22;
                                {
                                  ATerm p_22 = t;
                                  int q_22 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      LocalPopChoice(q_22);
                                    }
                                  else
                                    {
                                      t = p_22;
                                      {
                                        ATerm s_15 = NULL;
                                        s_15 = t;
                                        if(((l_15 != NULL) && (l_15 != s_15)))
                                          _fail(s_15);
                                        else
                                          l_15 = s_15;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = l_22;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(l_15), not_null(q_15));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(l_15));
                  LocalPopChoice(k_22);
                }
              else
                {
                  t = j_22;
                  {
                    ATerm u_15 = NULL;
                    t = q_0(t);
                    {
                      u_15 = t;
                      if(((l_15 != NULL) && (l_15 != u_15)))
                        _fail(u_15);
                      else
                        l_15 = u_15;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(l_15));
                  }
                }
            }
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_ast_0 (ATerm t)
{
  ATerm d_16 = NULL;
  ATerm r_22 = t;
  int s_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_22;
      t_22 = t;
      {
        t = term_u_22;
        t = get_config_0(t);
      }
      t = t_22;
      {
        ATerm d_4 (ATerm t)
        {
          ATerm e_16 = NULL;
          ATerm e_4 (ATerm t)
          {
            t = term_v_22;
            return(t);
          }
          t = get_outfile_1(t, e_4);
          {
            e_16 = t;
            if(((d_16 != NULL) && (d_16 != e_16)))
              _fail(e_16);
            else
              d_16 = e_16;
          }
          return(t);
        }
        t = copy_to_1(t, d_4);
        {
          ATerm d_23;
          d_23 = t;
          {
            t = (ATerm) ATinsert(ATempty, term_i_23);
            t = echo_0(t);
          }
          t = d_23;
          t = xtc_io_exit_0(t);
        }
      }
      LocalPopChoice(s_22);
    }
  else
    {
      t = r_22;
      {
      }
    }
  return(t);
}
ATerm pass_keep_0 (ATerm t)
{
  ATerm i_16 = NULL;
  ATerm j_16 = NULL,l_16 = NULL;
  ATerm k_16 = NULL;
  t = term_z_19;
  {
    ATerm j_23 = t;
    int k_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(k_23);
      }
    else
      {
        t = j_23;
        t = term_l_23;
      }
    {
      k_16 = t;
      if(((j_16 != NULL) && (j_16 != k_16)))
        _fail(k_16);
      else
        j_16 = k_16;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_16), term_l_23);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          l_16 = t;
          if(((i_16 != NULL) && (i_16 != l_16)))
            _fail(l_16);
          else
            i_16 = l_16;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_16)), term_z_19);
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm p_16 = NULL;
  p_16 = t;
  t = SSL_int_to_string(not_null(p_16));
  return(t);
}
ATerm pass_verbose_0 (ATerm t)
{
  ATerm u_16 = NULL;
  ATerm v_16 = NULL,x_16 = NULL;
  ATerm w_16 = NULL;
  t = term_d_15;
  {
    ATerm m_23 = t;
    int n_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(n_23);
      }
    else
      {
        t = m_23;
        t = term_l_23;
      }
    {
      w_16 = t;
      if(((v_16 != NULL) && (v_16 != w_16)))
        _fail(w_16);
      else
        v_16 = w_16;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(v_16), term_l_23);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          x_16 = t;
          if(((u_16 != NULL) && (u_16 != x_16)))
            _fail(x_16);
          else
            u_16 = x_16;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_16)), term_d_15);
  return(t);
}
ATerm dep_name_0 (ATerm t)
{
  ATerm b_17 = NULL;
  ATerm c_17 = NULL;
  ATerm o_23 = t;
  int p_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_15;
      t = get_config_0(t);
      LocalPopChoice(p_23);
    }
  else
    {
      t = o_23;
      {
        t = term_q_23;
        t = get_config_0(t);
      }
    }
  {
    c_17 = t;
    if(((b_17 != NULL) && (b_17 != c_17)))
      _fail(c_17);
    else
      b_17 = c_17;
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_17)), term_r_23);
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm j_17 = NULL,k_17 = NULL;
  j_17 = t;
  i_17 :
  if(match_cons(j_17, sym_stdin_0))
    {
      ATerm l_17 = NULL;
      ATerm m_17 = NULL;
      t = term_s_23;
      {
        t = ReadFromFile_0(t);
        {
          m_17 = t;
          if(((l_17 != NULL) && (l_17 != m_17)))
            _fail(m_17);
          else
            l_17 = m_17;
        }
      }
      t = not_null(l_17);
    }
  else
    {
      if(match_cons(j_17, sym_FILE_1))
        {
          k_17 = ATgetArgument(j_17, 0);
          {
            ATerm o_17 = NULL;
            ATerm p_17 = NULL;
            t = not_null(k_17);
            {
              t = ReadFromFile_0(t);
              {
                p_17 = t;
                if(((o_17 != NULL) && (o_17 != p_17)))
                  _fail(p_17);
                else
                  o_17 = p_17;
              }
            }
            t = not_null(o_17);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm w_17 = NULL,x_17 = NULL,y_17 = NULL;
  w_17 = t;
  v_17 :
  if(match_cons(w_17, sym__2))
    {
      x_17 = ATgetArgument(w_17, 0);
      y_17 = ATgetArgument(w_17, 1);
      t = SSL_WriteToBinaryFile(not_null(x_17), not_null(y_17));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm e_18 = NULL;
  ATerm g_18 = NULL;
  e_18 = t;
  {
    ATerm h_18 = NULL;
    t = xtc_new_file_0(t);
    {
      h_18 = t;
      {
        if(((g_18 != NULL) && (g_18 != h_18)))
          _fail(h_18);
        else
          g_18 = h_18;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_18), not_null(e_18));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(g_18);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_18));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm x_93 (ATerm), ATerm y_93 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, x_93, y_93);
    t = read_from_0(t);
  }
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm l_18 = NULL;
  l_18 = t;
  t = SSL_close_file(not_null(l_18));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL;
  q_18 = t;
  p_18 :
  if(match_cons(q_18, sym__2))
    {
      r_18 = ATgetArgument(q_18, 0);
      s_18 = ATgetArgument(q_18, 1);
      t = SSL_execvp(not_null(r_18), not_null(s_18));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm x_18 = NULL;
  x_18 = t;
  t = SSL_waitpid(not_null(x_18));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm d_90 (ATerm))
{
  ATerm h_19 = NULL;
  ATerm j_19 = NULL;
  h_19 = t;
  {
    t = fork_0(t);
    {
      j_19 = t;
      {
        ATerm t_23 = t;
        int u_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_19 = NULL;
            l_19 = t;
            d_19 :
            if(match_int(l_19, 0))
              {
                t = not_null(h_19);
                t = d_90(t);
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(u_23);
          }
        else
          {
            t = t_23;
            {
              ATerm m_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL;
              t = not_null(j_19);
              {
                t = waitpid_0(t);
                {
                  m_19 = t;
                  f_19 :
                  if(match_cons(m_19, sym_WaitStatus_3))
                    {
                      n_19 = ATgetArgument(m_19, 0);
                      o_19 = ATgetArgument(m_19, 1);
                      p_19 = ATgetArgument(m_19, 2);
                      g_19 :
                      if(match_int(n_19, 0))
                        {
                          t = not_null(h_19);
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
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
ATerm call_0 (ATerm t)
{
  ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL;
  w_19 = t;
  v_19 :
  if(match_cons(w_19, sym__2))
    {
      x_19 = ATgetArgument(w_19, 0);
      y_19 = ATgetArgument(w_19, 1);
      {
        ATerm f_4 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_19), not_null(y_19));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, f_4);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm xtc_find_warning_0 (ATerm t)
{
  t = xtc_find_0(t);
  return(t);
}
ATerm xtc_command_1 (ATerm t, ATerm o_93 (ATerm))
{
  ATerm e_20 = NULL;
  ATerm v_23;
  v_23 = t;
  {
    ATerm f_20 = NULL;
    t = o_93(t);
    {
      t = xtc_find_0(t);
      {
        f_20 = t;
        if(((e_20 != NULL) && (e_20 != f_20)))
          _fail(f_20);
        else
          e_20 = f_20;
      }
    }
  }
  t = v_23;
  {
    ATerm y_23;
    y_23 = t;
    {
      ATerm g_20 = NULL;
      ATerm h_20 = NULL;
      h_20 = t;
      if(((g_20 != NULL) && (g_20 != h_20)))
        _fail(h_20);
      else
        g_20 = h_20;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_20), not_null(g_20));
        t = call_0(t);
      }
    }
    t = y_23;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm q_83 (ATerm))
{
  ATerm p_20 = NULL,q_20 = NULL,r_20 = NULL;
  p_20 = t;
  o_20 :
  if(match_cons(p_20, sym__2))
    {
      q_20 = ATgetArgument(p_20, 0);
      r_20 = ATgetArgument(p_20, 1);
      {
        ATerm u_20 = NULL,v_20 = NULL,w_20 = NULL;
        ATerm d_24;
        d_24 = t;
        {
          ATerm x_20 = NULL;
          ATerm y_20 = NULL,z_20 = NULL,a_21 = NULL;
          t = q_83(t);
          {
            x_20 = t;
            {
              if(((u_20 != NULL) && (u_20 != x_20)))
                _fail(x_20);
              else
                u_20 = x_20;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(u_20), not_null(q_20), not_null(r_20));
                {
                  t = table_push_0(t);
                  {
                    ATerm e_24 = t;
                    int f_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(u_20), term_t_21);
                        t = table_get_0(t);
                        LocalPopChoice(f_24);
                      }
                    else
                      {
                        t = e_24;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      y_20 = t;
                      n_20 :
                      if(((ATgetType(y_20) == AT_LIST) && !(ATisEmpty(y_20))))
                        {
                          z_20 = ATgetFirst((ATermList) y_20);
                          a_21 = (ATerm) ATgetNext((ATermList) y_20);
                          {
                            if(((v_20 != NULL) && (v_20 != z_20)))
                              _fail(z_20);
                            else
                              v_20 = z_20;
                            {
                              if(((w_20 != NULL) && (w_20 != a_21)))
                                _fail(a_21);
                              else
                                w_20 = a_21;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(u_20), term_t_21, (ATerm) ATinsert(CheckATermList(not_null(w_20)), (ATerm) ATinsert(CheckATermList(not_null(v_20)), not_null(q_20))));
                                t = table_put_0(t);
                              }
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  }
                }
              }
            }
          }
        }
        t = d_24;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm e_84 (ATerm))
{
  ATerm g_24;
  g_24 = t;
  {
    t = e_84(t);
    {
      ATerm i_4 (ATerm t)
      {
        t = term_h_24;
        return(t);
      }
      t = debug_1(t, i_4);
    }
  }
  t = g_24;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm i_21 = NULL,j_21 = NULL;
  ATerm i_24 = t;
  int j_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_21 = NULL,l_21 = NULL,m_21 = NULL;
      k_21 = t;
      f_21 :
      if(match_cons(k_21, sym__2))
        {
          l_21 = ATgetArgument(k_21, 0);
          m_21 = ATgetArgument(k_21, 1);
          {
            if(((j_21 != NULL) && (j_21 != l_21)))
              _fail(l_21);
            else
              j_21 = l_21;
            if(((i_21 != NULL) && (i_21 != m_21)))
              _fail(m_21);
            else
              i_21 = m_21;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(j_24);
      t = SSL_open_file(not_null(j_21), not_null(i_21));
    }
  else
    {
      t = i_24;
      {
        ATerm n_21 = NULL;
        ATerm o_21 = NULL;
        ATerm j_4 (ATerm t)
        {
          t = term_k_24;
          return(t);
        }
        t = obsolete_1(t, j_4);
        {
          n_21 = t;
          {
            if(((j_21 != NULL) && (j_21 != n_21)))
              _fail(n_21);
            else
              j_21 = n_21;
            {
              ATerm l_24;
              l_24 = t;
              {
                ATerm p_21 = NULL;
                t = term_m_24;
                {
                  p_21 = t;
                  if(((o_21 != NULL) && (o_21 != p_21)))
                    _fail(p_21);
                  else
                    o_21 = p_21;
                }
              }
              t = l_24;
              t = SSL_open_file(not_null(j_21), not_null(o_21));
            }
          }
        }
      }
    }
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0 (ATerm t)
{
  ATerm u_21 = NULL;
  ATerm z_21 = NULL;
  t = term_l_20;
  {
    t = new_0(t);
    {
      z_21 = t;
      if(((u_21 != NULL) && (u_21 != z_21)))
        _fail(z_21);
      else
        u_21 = z_21;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_21), term_n_24);
    {
      t = conc_strings_0(t);
      {
        ATerm r_24 = t;
        int s_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = file_exists_0(t);
            t = new_file_0(t);
            LocalPopChoice(s_24);
          }
        else
          {
            t = r_24;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm n_22 = NULL;
  t = new_file_0(t);
  {
    n_22 = t;
    {
      ATerm w_24;
      w_24 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_22), term_m_24);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(n_22), term_l_20);
            {
              ATerm k_4 (ATerm t)
              {
                t = term_s_21;
                return(t);
              }
              t = assert_1(t, k_4);
            }
          }
        }
      }
      t = w_24;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm o_0 (ATerm), ATerm p_0 (ATerm))
{
  ATerm x_22 = NULL,y_22 = NULL;
  x_22 = t;
  w_22 :
  if(match_cons(x_22, sym_stdin_0))
    {
      ATerm z_22 = NULL;
      ATerm a_23 = NULL;
      ATerm b_23 = NULL;
      t = xtc_new_file_0(t);
      {
        a_23 = t;
        {
          if(((z_22 != NULL) && (z_22 != a_23)))
            _fail(a_23);
          else
            z_22 = a_23;
          {
            ATerm c_23 = NULL;
            t = p_0(t);
            {
              c_23 = t;
              if(((b_23 != NULL) && (b_23 != c_23)))
                _fail(c_23);
              else
                b_23 = c_23;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(b_23), (ATerm) ATinsert(ATinsert(ATempty, not_null(z_22)), term_m_15));
              {
                ATerm z_24 = t;
                int a_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = conc_two_lists_0(t);
                    LocalPopChoice(a_25);
                  }
                else
                  {
                    t = z_24;
                    t = conc_more_lists_0(t);
                  }
                {
                  t = xtc_command_1(t, o_0);
                  {
                    t = not_null(z_22);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(z_22));
    }
  else
    {
      if(match_cons(x_22, sym_FILE_1))
        {
          y_22 = ATgetArgument(x_22, 0);
          {
            ATerm e_23 = NULL;
            ATerm f_23 = NULL;
            t = not_null(y_22);
            {
              ATerm g_23 = NULL;
              t = xtc_new_file_0(t);
              {
                f_23 = t;
                {
                  if(((e_23 != NULL) && (e_23 != f_23)))
                    _fail(f_23);
                  else
                    e_23 = f_23;
                  {
                    ATerm h_23 = NULL;
                    t = p_0(t);
                    {
                      h_23 = t;
                      if(((g_23 != NULL) && (g_23 != h_23)))
                        _fail(h_23);
                      else
                        g_23 = h_23;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(g_23), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(e_23)), term_m_15), not_null(y_22)), term_b_25));
                      {
                        ATerm c_25 = t;
                        int d_25 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = conc_two_lists_0(t);
                            LocalPopChoice(d_25);
                          }
                        else
                          {
                            t = c_25;
                            t = conc_more_lists_0(t);
                          }
                        {
                          t = xtc_command_1(t, o_0);
                          {
                            t = not_null(e_23);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(e_23));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm stdin_0 (ATerm t)
{
  ATerm x_23 = NULL;
  x_23 = t;
  w_23 :
  if(match_cons(x_23, sym_stdin_0))
    {
      ATerm z_23 = NULL,b_24 = NULL;
      ATerm g_25;
      g_25 = t;
      {
        ATerm a_24 = NULL;
        t = SSLgetAnnotations(not_null(x_23));
        {
          a_24 = t;
          if(((z_23 != NULL) && (z_23 != a_24)))
            _fail(a_24);
          else
            z_23 = a_24;
        }
      }
      t = g_25;
      {
        ATerm c_24 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(z_23));
        {
          c_24 = t;
          if(((b_24 != NULL) && (b_24 != c_24)))
            _fail(c_24);
          else
            b_24 = c_24;
        }
        t = not_null(b_24);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm a_60 (ATerm))
{
  ATerm p_24 = NULL,q_24 = NULL;
  p_24 = t;
  o_24 :
  if(match_cons(p_24, sym_FILE_1))
    {
      q_24 = ATgetArgument(p_24, 0);
      {
        ATerm t_24 = NULL,v_24 = NULL;
        ATerm u_24 = NULL;
        t = SSLgetAnnotations(not_null(p_24));
        {
          u_24 = t;
          if(((t_24 != NULL) && (t_24 != u_24)))
            _fail(u_24);
          else
            t_24 = u_24;
        }
        {
          t = not_null(q_24);
          {
            ATerm x_24 = NULL;
            t = a_60(t);
            {
              v_24 = t;
              {
                ATerm y_24 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(v_24)), not_null(t_24));
                {
                  y_24 = t;
                  if(((x_24 != NULL) && (x_24 != y_24)))
                    _fail(y_24);
                  else
                    x_24 = y_24;
                }
                t = not_null(x_24);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm xtc_transform_2 (ATerm t, ATerm q_93 (ATerm), ATerm r_93 (ATerm))
{
  ATerm m_25 = t;
  int n_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_25 = t;
      int s_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(s_25);
        }
      else
        {
          t = o_25;
          t = stdin_0(t);
        }
      LocalPopChoice(n_25);
      t = xtc_transform_file_2(t, q_93, r_93);
    }
  else
    {
      t = m_25;
      t = xtc_transform_term_2(t, q_93, r_93);
    }
  return(t);
}
ATerm if_verbose3_1 (ATerm t, ATerm v_86 (ATerm))
{
  ATerm x_25 = t;
  int y_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_25;
      z_25 = t;
      {
        ATerm e_25 = NULL;
        ATerm f_25 = NULL;
        t = term_d_15;
        {
          t = get_config_0(t);
          {
            f_25 = t;
            if(((e_25 != NULL) && (e_25 != f_25)))
              _fail(f_25);
            else
              e_25 = f_25;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_25), term_k_20);
          t = geq_0(t);
        }
      }
      t = z_25;
      t = v_86(t);
      LocalPopChoice(y_25);
    }
  else
    {
      t = x_25;
      {
      }
    }
  return(t);
}
ATerm basename_1 (ATerm t, ATerm j_82 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm a_26 = t;
    int b_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_25 (ATerm t)
        {
          ATerm c_26 = t;
          int d_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, l_25);
              LocalPopChoice(d_26);
            }
          else
            {
              t = c_26;
              {
                ATerm m_26 = t;
                int n_26 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm l_4 (ATerm t)
                    {
                      ATerm j_25 = NULL;
                      j_25 = t;
                      h_25 :
                      if(!(match_int(j_25, 47)))
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = Cons_2(t, l_4, _id);
                    LocalPopChoice(n_26);
                  }
                else
                  {
                    t = m_26;
                    {
                      ATerm r_4 (ATerm t)
                      {
                        ATerm k_25 = NULL;
                        k_25 = t;
                        i_25 :
                        if(!(match_int(k_25, 46)))
                          {
                            _fail(t);
                          }
                        return(t);
                      }
                      t = Cons_2(t, r_4, j_82);
                      t = (ATerm) ATempty;
                    }
                  }
              }
            }
          return(t);
        }
        t = l_25(t);
        LocalPopChoice(b_26);
      }
    else
      {
        t = a_26;
        {
        }
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm basename_0 (ATerm t)
{
  t = basename_1(t, _id);
  return(t);
}
ATerm get_infile_0 (ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL;
  q_25 = t;
  p_25 :
  if(match_cons(q_25, sym_FILE_1))
    {
      r_25 = ATgetArgument(q_25, 0);
      {
        ATerm t_25 = NULL,u_25 = NULL;
        ATerm v_25 = NULL;
        t = not_null(r_25);
        {
          ATerm w_25 = NULL;
          t = basename_1(t, _id);
          {
            v_25 = t;
            {
              if(((t_25 != NULL) && (t_25 != v_25)))
                _fail(v_25);
              else
                t_25 = v_25;
              {
                ATerm w_4 (ATerm t)
                {
                  ATerm e_5 (ATerm t)
                  {
                    t = term_o_26;
                    return(t);
                  }
                  t = debug_1(t, e_5);
                  return(t);
                }
                t = if_verbose3_1(t, w_4);
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_p_26, not_null(t_25));
                  {
                    t = set_config_0(t);
                    {
                      ATerm q_26 = t;
                      int t_26 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = term_m_15;
                          {
                            t = get_config_0(t);
                            t = basename_1(t, _id);
                          }
                          LocalPopChoice(t_26);
                        }
                      else
                        {
                          t = q_26;
                          t = not_null(t_25);
                        }
                      {
                        w_25 = t;
                        {
                          if(((u_25 != NULL) && (u_25 != w_25)))
                            _fail(w_25);
                          else
                            u_25 = w_25;
                          {
                            ATerm f_5 (ATerm t)
                            {
                              ATerm g_5 (ATerm t)
                              {
                                t = term_u_26;
                                return(t);
                              }
                              t = debug_1(t, g_5);
                              return(t);
                            }
                            t = if_verbose3_1(t, f_5);
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_c_22, not_null(u_25));
                              t = set_config_0(t);
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
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(t_25));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_0 (ATerm t)
{
  t = get_infile_0(t);
  {
    ATerm h_5 (ATerm t)
    {
      t = term_z_26;
      return(t);
    }
    ATerm i_5 (ATerm t)
    {
      ATerm e_26 = NULL,g_26 = NULL,i_26 = NULL,k_26 = NULL;
      ATerm a_27;
      a_27 = t;
      {
        ATerm f_26 = NULL;
        t = dep_name_0(t);
        {
          f_26 = t;
          if(((e_26 != NULL) && (e_26 != f_26)))
            _fail(f_26);
          else
            e_26 = f_26;
        }
      }
      t = a_27;
      {
        ATerm b_27;
        b_27 = t;
        {
          ATerm h_26 = NULL;
          t = pass_verbose_0(t);
          {
            h_26 = t;
            if(((g_26 != NULL) && (g_26 != h_26)))
              _fail(h_26);
            else
              g_26 = h_26;
          }
        }
        t = b_27;
        {
          ATerm c_27;
          c_27 = t;
          {
            ATerm j_26 = NULL;
            t = pass_keep_0(t);
            {
              j_26 = t;
              if(((i_26 != NULL) && (i_26 != j_26)))
                _fail(j_26);
              else
                i_26 = j_26;
            }
          }
          t = c_27;
          {
            ATerm l_26 = NULL;
            t = term_h_27;
            {
              t = get_config_0(t);
              {
                l_26 = t;
                if(((k_26 != NULL) && (k_26 != l_26)))
                  _fail(l_26);
                else
                  k_26 = l_26;
              }
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(i_26)), not_null(g_26)), not_null(k_26)), not_null(e_26));
              t = concat_0(t);
            }
          }
        }
      }
      return(t);
    }
    t = xtc_transform_2(t, h_5, i_5);
  }
  return(t);
}
ATerm front_end_0 (ATerm t)
{
  ATerm j_5 (ATerm t)
  {
    ATerm o_5 (ATerm t)
    {
      t = term_i_27;
      return(t);
    }
    t = debug_1(t, o_5);
    return(t);
  }
  t = if_verbose2_1(t, j_5);
  {
    ATerm s_5 (ATerm t)
    {
      ATerm z_5 (ATerm t)
      {
        ATerm r_26 = NULL;
        ATerm s_26 = NULL;
        s_26 = t;
        if(((r_26 != NULL) && (r_26 != s_26)))
          _fail(s_26);
        else
          r_26 = s_26;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_v_15, (ATerm) ATinsert(CheckATermList(not_null(r_26)), term_l_27));
          t = printnl_0(t);
        }
        return(t);
      }
      t = if_verbose1_1(t, z_5);
      return(t);
    }
    ATerm y_5 (ATerm t)
    {
      t = parse_0(t);
      {
        t = output_ast_0(t);
        {
          t = add_main_0(t);
          {
            t = frontend_0(t);
            {
              t = output_frontend_0(t);
              {
                t = extract_0(t);
                {
                  t = stratego_nf_0(t);
                  t = rename_defs_0(t);
                }
              }
            }
          }
        }
      }
      return(t);
    }
    t = profile_p__2(t, s_5, y_5);
  }
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm w_26 = NULL,x_26 = NULL,y_26 = NULL;
  w_26 = t;
  v_26 :
  if(((ATgetType(w_26) == AT_LIST) && !(ATisEmpty(w_26))))
    {
      x_26 = ATgetFirst((ATermList) w_26);
      y_26 = (ATerm) ATgetNext((ATermList) w_26);
      t = not_null(y_26);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm e_27 = NULL,f_27 = NULL,g_27 = NULL;
  e_27 = t;
  d_27 :
  if(match_cons(e_27, sym__2))
    {
      f_27 = ATgetArgument(e_27, 0);
      g_27 = ATgetArgument(e_27, 1);
      {
        ATerm m_27;
        m_27 = t;
        {
          ATerm j_27 = NULL;
          ATerm k_27 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_27), not_null(g_27));
          {
            ATerm n_27 = t;
            int o_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(o_27);
              }
            else
              {
                t = n_27;
                t = (ATerm) ATempty;
              }
            {
              k_27 = t;
              if(((j_27 != NULL) && (j_27 != k_27)))
                _fail(k_27);
              else
                j_27 = k_27;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(f_27), not_null(g_27), not_null(j_27));
            t = table_put_0(t);
          }
        }
        t = m_27;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm n_83 (ATerm))
{
  ATerm r_27 = NULL,s_27 = NULL,t_27 = NULL;
  ATerm p_27;
  p_27 = t;
  {
    ATerm u_27 = NULL;
    ATerm v_27 = NULL,w_27 = NULL,x_27 = NULL;
    t = n_83(t);
    {
      u_27 = t;
      {
        if(((t_27 != NULL) && (t_27 != u_27)))
          _fail(u_27);
        else
          t_27 = u_27;
        {
          ATerm z_27 = t;
          int a_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(t_27), term_t_21);
              t = table_get_0(t);
              LocalPopChoice(a_28);
            }
          else
            {
              t = z_27;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            v_27 = t;
            q_27 :
            if(((ATgetType(v_27) == AT_LIST) && !(ATisEmpty(v_27))))
              {
                w_27 = ATgetFirst((ATermList) v_27);
                x_27 = (ATerm) ATgetNext((ATermList) v_27);
                {
                  if(((s_27 != NULL) && (s_27 != w_27)))
                    _fail(w_27);
                  else
                    s_27 = w_27;
                  {
                    if(((r_27 != NULL) && (r_27 != x_27)))
                      _fail(x_27);
                    else
                      r_27 = x_27;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(t_27), term_t_21, not_null(r_27));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(s_27);
                          {
                            ATerm a_6 (ATerm t)
                            {
                              ATerm y_27 = NULL;
                              y_27 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(t_27), not_null(y_27));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, a_6);
                          }
                        }
                      }
                    }
                  }
                }
              }
            else
              {
                _fail(t);
              }
          }
        }
      }
    }
  }
  t = p_27;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm e_28 = NULL;
  e_28 = t;
  t = SSL_remove(not_null(e_28));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm s_65 (ATerm), ATerm t_65 (ATerm))
{
  ATerm b_28 = t;
  int c_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_65(t);
      t = t_65(t);
      LocalPopChoice(c_28);
    }
  else
    {
      t = b_28;
      {
        t = t_65(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm m_83 (ATerm))
{
  ATerm j_28 = NULL;
  ATerm d_28;
  d_28 = t;
  {
    ATerm k_28 = NULL;
    ATerm l_28 = NULL;
    t = m_83(t);
    {
      k_28 = t;
      {
        if(((j_28 != NULL) && (j_28 != k_28)))
          _fail(k_28);
        else
          j_28 = k_28;
        {
          ATerm m_28 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_28), term_t_21);
          {
            ATerm f_28 = t;
            int g_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(g_28);
              }
            else
              {
                t = f_28;
                t = (ATerm) ATempty;
              }
            {
              m_28 = t;
              if(((l_28 != NULL) && (l_28 != m_28)))
                _fail(m_28);
              else
                l_28 = m_28;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_28), term_t_21, (ATerm) ATinsert(CheckATermList(not_null(l_28)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = d_28;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm e_93 (ATerm))
{
  ATerm r_28 = NULL,s_28 = NULL;
  ATerm b_6 (ATerm t)
  {
    t = term_s_21;
    return(t);
  }
  t = begin_scope_1(t, b_6);
  {
    ATerm c_6 (ATerm t)
    {
      ATerm h_28;
      h_28 = t;
      {
        ATerm t_28 = NULL,u_28 = NULL,v_28 = NULL;
        ATerm i_28 = t;
        int n_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_v_21;
            t = table_get_0(t);
            LocalPopChoice(n_28);
          }
        else
          {
            t = i_28;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          t_28 = t;
          q_28 :
          if(((ATgetType(t_28) == AT_LIST) && !(ATisEmpty(t_28))))
            {
              u_28 = ATgetFirst((ATermList) t_28);
              v_28 = (ATerm) ATgetNext((ATermList) t_28);
              {
                if(((s_28 != NULL) && (s_28 != u_28)))
                  _fail(u_28);
                else
                  s_28 = u_28;
                {
                  if(((r_28 != NULL) && (r_28 != v_28)))
                    _fail(v_28);
                  else
                    r_28 = v_28;
                  {
                    t = not_null(s_28);
                    {
                      ATerm d_6 (ATerm t)
                      {
                        ATerm o_28 = t;
                        int p_28 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = remove_file_0(t);
                            LocalPopChoice(p_28);
                          }
                        else
                          {
                            t = o_28;
                            {
                            }
                          }
                        return(t);
                      }
                      t = map_1(t, d_6);
                    }
                  }
                }
              }
            }
          else
            {
              _fail(t);
            }
        }
      }
      t = h_28;
      {
        ATerm e_6 (ATerm t)
        {
          t = term_s_21;
          return(t);
        }
        t = end_scope_1(t, e_6);
      }
      return(t);
    }
    t = restore_always_2(t, e_93, c_6);
  }
  return(t);
}
ATerm xtc_input_1 (ATerm t, ATerm h_93 (ATerm))
{
  ATerm f_6 (ATerm t)
  {
    ATerm w_28 = t;
    int x_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_28 = NULL;
        ATerm a_29 = NULL;
        t = term_b_25;
        {
          t = get_config_0(t);
          {
            a_29 = t;
            if(((y_28 != NULL) && (y_28 != a_29)))
              _fail(a_29);
            else
              y_28 = a_29;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(y_28));
        LocalPopChoice(x_28);
      }
    else
      {
        t = w_28;
        t = term_s_23;
      }
    t = h_93(t);
    return(t);
  }
  t = xtc_temp_files_1(t, f_6);
  return(t);
}
ATerm compile_0 (ATerm t)
{
  ATerm j_6 (ATerm t)
  {
    t = front_end_0(t);
    {
      t = optimize_0(t);
      {
        t = back_end_0(t);
        t = c_compile_0(t);
      }
    }
    return(t);
  }
  t = xtc_input_1(t, j_6);
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm t_86 (ATerm))
{
  ATerm z_28 = t;
  int b_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_29;
      c_29 = t;
      {
        ATerm d_29 = NULL;
        ATerm e_29 = NULL;
        t = term_d_15;
        {
          t = get_config_0(t);
          {
            e_29 = t;
            if(((d_29 != NULL) && (d_29 != e_29)))
              _fail(e_29);
            else
              d_29 = e_29;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_29), term_l_23);
          t = geq_0(t);
        }
      }
      t = c_29;
      t = t_86(t);
      LocalPopChoice(b_29);
    }
  else
    {
      t = z_28;
      {
      }
    }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm m_29 = NULL;
  m_29 = t;
  t = SSL_TicksToSeconds(not_null(m_29));
  return(t);
}
ATerm self_children_sys_time_0 (ATerm t)
{
  ATerm r_29 = NULL,s_29 = NULL,t_29 = NULL,u_29 = NULL,x_29 = NULL;
  r_29 = t;
  q_29 :
  if(match_cons(r_29, sym__4))
    {
      s_29 = ATgetArgument(r_29, 0);
      t_29 = ATgetArgument(r_29, 1);
      u_29 = ATgetArgument(r_29, 2);
      x_29 = ATgetArgument(r_29, 3);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_29), not_null(x_29));
        t = add_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm f_30 = NULL,g_30 = NULL,h_30 = NULL;
  f_30 = t;
  e_30 :
  if(match_cons(f_30, sym__2))
    {
      g_30 = ATgetArgument(f_30, 0);
      h_30 = ATgetArgument(f_30, 1);
      {
        ATerm f_29 = t;
        int g_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(g_30), not_null(h_30));
            LocalPopChoice(g_29);
          }
        else
          {
            t = f_29;
            t = SSL_addr(not_null(g_30), not_null(h_30));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm self_children_user_time_0 (ATerm t)
{
  ATerm n_30 = NULL,o_30 = NULL,p_30 = NULL,q_30 = NULL,r_30 = NULL;
  n_30 = t;
  m_30 :
  if(match_cons(n_30, sym__4))
    {
      o_30 = ATgetArgument(n_30, 0);
      p_30 = ATgetArgument(n_30, 1);
      q_30 = ATgetArgument(n_30, 2);
      r_30 = ATgetArgument(n_30, 3);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_30), not_null(q_30));
        t = add_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL;
  z_30 = t;
  y_30 :
  if(match_cons(z_30, sym__2))
    {
      a_31 = ATgetArgument(z_30, 0);
      b_31 = ATgetArgument(z_30, 1);
      {
        ATerm h_29 = t;
        int i_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(a_31), not_null(b_31));
            LocalPopChoice(i_29);
          }
        else
          {
            t = h_29;
            t = SSL_subtr(not_null(a_31), not_null(b_31));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_times_0 (ATerm t)
{
  ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL,w_31 = NULL,x_31 = NULL,y_31 = NULL,z_31 = NULL,a_32 = NULL,b_32 = NULL,c_32 = NULL;
  s_31 = t;
  p_31 :
  if(match_cons(s_31, sym__2))
    {
      t_31 = ATgetArgument(s_31, 0);
      y_31 = ATgetArgument(s_31, 1);
      q_31 :
      if(match_cons(t_31, sym__4))
        {
          u_31 = ATgetArgument(t_31, 0);
          v_31 = ATgetArgument(t_31, 1);
          w_31 = ATgetArgument(t_31, 2);
          x_31 = ATgetArgument(t_31, 3);
          r_31 :
          if(match_cons(y_31, sym__4))
            {
              z_31 = ATgetArgument(y_31, 0);
              a_32 = ATgetArgument(y_31, 1);
              b_32 = ATgetArgument(y_31, 2);
              c_32 = ATgetArgument(y_31, 3);
              {
                ATerm l_32 = NULL,n_32 = NULL,p_32 = NULL,r_32 = NULL;
                ATerm j_29;
                j_29 = t;
                {
                  ATerm m_32 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(u_31), not_null(z_31));
                  {
                    t = subt_0(t);
                    {
                      m_32 = t;
                      if(((l_32 != NULL) && (l_32 != m_32)))
                        _fail(m_32);
                      else
                        l_32 = m_32;
                    }
                  }
                }
                t = j_29;
                {
                  ATerm k_29;
                  k_29 = t;
                  {
                    ATerm o_32 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(v_31), not_null(a_32));
                    {
                      t = subt_0(t);
                      {
                        o_32 = t;
                        if(((n_32 != NULL) && (n_32 != o_32)))
                          _fail(o_32);
                        else
                          n_32 = o_32;
                      }
                    }
                  }
                  t = k_29;
                  {
                    ATerm l_29;
                    l_29 = t;
                    {
                      ATerm q_32 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(w_31), not_null(b_32));
                      {
                        t = subt_0(t);
                        {
                          q_32 = t;
                          if(((p_32 != NULL) && (p_32 != q_32)))
                            _fail(q_32);
                          else
                            p_32 = q_32;
                        }
                      }
                    }
                    t = l_29;
                    {
                      ATerm s_32 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(x_31), not_null(c_32));
                      {
                        t = subt_0(t);
                        {
                          s_32 = t;
                          if(((r_32 != NULL) && (r_32 != s_32)))
                            _fail(s_32);
                          else
                            r_32 = s_32;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym__4, not_null(l_32), not_null(n_32), not_null(p_32), not_null(r_32));
                    }
                  }
                }
              }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm times_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm profile_p__2 (ATerm t, ATerm p_84 (ATerm), ATerm q_84 (ATerm))
{
  ATerm c_33 = NULL;
  ATerm n_29;
  n_29 = t;
  {
    ATerm d_33 = NULL;
    t = times_0(t);
    {
      d_33 = t;
      if(((c_33 != NULL) && (c_33 != d_33)))
        _fail(d_33);
      else
        c_33 = d_33;
    }
  }
  t = n_29;
  {
    t = q_84(t);
    {
      ATerm o_29;
      o_29 = t;
      {
        ATerm e_33 = NULL,g_33 = NULL,i_33 = NULL;
        ATerm f_33 = NULL;
        t = times_0(t);
        {
          f_33 = t;
          if(((e_33 != NULL) && (e_33 != f_33)))
            _fail(f_33);
          else
            e_33 = f_33;
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_33), not_null(c_33));
          {
            t = diff_times_0(t);
            {
              ATerm p_29;
              p_29 = t;
              {
                ATerm h_33 = NULL;
                t = self_children_user_time_0(t);
                {
                  t = ticks_to_seconds_0(t);
                  {
                    h_33 = t;
                    if(((g_33 != NULL) && (g_33 != h_33)))
                      _fail(h_33);
                    else
                      g_33 = h_33;
                  }
                }
              }
              t = p_29;
              {
                ATerm j_33 = NULL;
                t = self_children_sys_time_0(t);
                {
                  t = ticks_to_seconds_0(t);
                  {
                    j_33 = t;
                    if(((i_33 != NULL) && (i_33 != j_33)))
                      _fail(j_33);
                    else
                      i_33 = j_33;
                  }
                }
                {
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(i_33)), term_w_29), not_null(g_33)), term_v_29);
                  t = p_84(t);
                }
              }
            }
          }
        }
      }
      t = o_29;
    }
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm x_83 (ATerm))
{
  ATerm y_29;
  y_29 = t;
  {
    ATerm q_33 = NULL,s_33 = NULL;
    ATerm z_29;
    z_29 = t;
    {
      ATerm r_33 = NULL;
      t = x_83(t);
      {
        r_33 = t;
        if(((q_33 != NULL) && (q_33 != r_33)))
          _fail(r_33);
        else
          q_33 = r_33;
      }
    }
    t = z_29;
    {
      ATerm t_33 = NULL;
      t_33 = t;
      if(((s_33 != NULL) && (s_33 != t_33)))
        _fail(t_33);
      else
        s_33 = t_33;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_33)), not_null(q_33)));
        t = printnl_0(t);
      }
    }
  }
  t = y_29;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm x_33 = NULL;
  x_33 = t;
  t = SSL_is_string(not_null(x_33));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm a_30 = t;
  int b_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
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
            ATerm s_6 (ATerm t)
            {
              ATerm i_30 = t;
              int j_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(j_30);
                }
              else
                {
                  t = i_30;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, s_6);
            LocalPopChoice(d_30);
          }
        else
          {
            t = c_30;
            {
              ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL;
              g_34 = t;
              f_34 :
              if(match_cons(g_34, sym_Path_1))
                {
                  h_34 = ATgetArgument(g_34, 0);
                  t = not_null(h_34);
                }
              else
                {
                  if(match_cons(g_34, sym_Var_1))
                    {
                      h_34 = ATgetArgument(g_34, 0);
                      {
                        t = not_null(h_34);
                        {
                          ATerm k_30 = t;
                          int l_30 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(l_30);
                            }
                          else
                            {
                              t = k_30;
                              {
                                ATerm t_6 (ATerm t)
                                {
                                  t = term_s_30;
                                  return(t);
                                }
                                t = debug_1(t, t_6);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(g_34, sym_Prefix_2))
                        {
                          h_34 = ATgetArgument(g_34, 0);
                          i_34 = ATgetArgument(g_34, 1);
                          {
                            ATerm n_34 = NULL,p_34 = NULL;
                            ATerm t_30;
                            t_30 = t;
                            {
                              ATerm o_34 = NULL;
                              t = not_null(h_34);
                              {
                                t = eval_config_0(t);
                                {
                                  o_34 = t;
                                  if(((n_34 != NULL) && (n_34 != o_34)))
                                    _fail(o_34);
                                  else
                                    n_34 = o_34;
                                }
                              }
                            }
                            t = t_30;
                            {
                              ATerm q_34 = NULL;
                              t = not_null(i_34);
                              {
                                t = eval_config_0(t);
                                {
                                  q_34 = t;
                                  if(((p_34 != NULL) && (p_34 != q_34)))
                                    _fail(q_34);
                                  else
                                    p_34 = q_34;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(n_34), not_null(p_34));
                                t = conc_strings_0(t);
                              }
                            }
                          }
                        }
                      else
                        {
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
ATerm get_config_0 (ATerm t)
{
  ATerm y_34 = NULL;
  y_34 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_u_30, not_null(y_34));
    {
      t = table_get_0(t);
      {
        ATerm v_30 = t;
        int w_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm x_30;
              x_30 = t;
              {
                ATerm a_35 = NULL;
                ATerm b_35 = NULL;
                b_35 = t;
                if(((a_35 != NULL) && (a_35 != b_35)))
                  _fail(b_35);
                else
                  a_35 = b_35;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_u_30, not_null(y_34), not_null(a_35));
                  t = table_put_0(t);
                }
              }
              t = x_30;
            }
            LocalPopChoice(w_30);
          }
        else
          {
            t = v_30;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm sc_announce_0 (ATerm t)
{
  t = if_verbose2_1(t, sc_version_0);
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm c_31;
  c_31 = t;
  {
    t = error_0(t);
    {
      t = term_l_23;
      t = exit_0(t);
    }
  }
  t = c_31;
  return(t);
}
ATerm sc_version_0 (ATerm t)
{
  ATerm d_31 = t;
  int e_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_31;
      f_31 = t;
      {
        ATerm g_35 = NULL;
        ATerm h_35 = NULL;
        t = term_g_31;
        {
          t = get_config_0(t);
          {
            h_35 = t;
            if(((g_35 != NULL) && (g_35 != h_35)))
              _fail(h_35);
            else
              g_35 = h_35;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_q_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_31), term_n_31), term_m_31), term_l_31), term_k_31), term_j_31), term_i_31), not_null(g_35)), term_h_31));
          t = printnl_0(t);
        }
      }
      t = f_31;
      LocalPopChoice(e_31);
    }
  else
    {
      t = d_31;
      {
        ATerm i_35 = NULL;
        i_35 = t;
        f_35 :
        if(!(match_string(i_35, "0.9beta8")))
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm i_65 (ATerm))
{
  ATerm d_32 = t;
  int e_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_65(t);
      LocalPopChoice(e_32);
    }
  else
    {
      t = d_32;
      {
      }
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm m_35 = NULL,n_35 = NULL,o_35 = NULL;
  m_35 = t;
  l_35 :
  if(match_cons(m_35, sym__2))
    {
      n_35 = ATgetArgument(m_35, 0);
      o_35 = ATgetArgument(m_35, 1);
      t = SSL_copy(not_null(n_35), not_null(o_35));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm t_35 = NULL;
  t_35 = t;
  t = SSL_table_keys(not_null(t_35));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm z_35 = NULL;
  z_35 = t;
  {
    t = table_keys_0(t);
    {
      ATerm u_6 (ATerm t)
      {
        ATerm b_36 = NULL;
        ATerm d_36 = NULL;
        b_36 = t;
        {
          ATerm e_36 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_35), not_null(b_36));
          {
            t = table_get_0(t);
            {
              e_36 = t;
              if(((d_36 != NULL) && (d_36 != e_36)))
                _fail(e_36);
              else
                d_36 = e_36;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_36), not_null(d_36));
        }
        return(t);
      }
      t = map_1(t, u_6);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm x_86 (ATerm))
{
  ATerm f_32 = t;
  int g_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_32;
      h_32 = t;
      {
        ATerm j_36 = NULL;
        ATerm n_36 = NULL;
        t = term_d_15;
        {
          t = get_config_0(t);
          {
            n_36 = t;
            if(((j_36 != NULL) && (j_36 != n_36)))
              _fail(n_36);
            else
              j_36 = n_36;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_36), term_i_32);
          t = geq_0(t);
        }
      }
      t = h_32;
      t = x_86(t);
      LocalPopChoice(g_32);
    }
  else
    {
      t = f_32;
      {
      }
    }
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm j_32;
  j_32 = t;
  {
    ATerm q_36 = NULL;
    ATerm r_36 = NULL;
    r_36 = t;
    if(((q_36 != NULL) && (q_36 != r_36)))
      _fail(r_36);
    else
      q_36 = r_36;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_15, not_null(q_36));
      t = printnl_0(t);
    }
  }
  t = j_32;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm x_36 = NULL;
  ATerm z_36 = NULL,a_37 = NULL;
  x_36 = t;
  {
    ATerm b_37 = NULL,c_37 = NULL,d_37 = NULL,e_37 = NULL,f_37 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_k_32, (ATerm) ATmakeAppl(sym_Tool_1, not_null(x_36)));
    {
      t = table_get_0(t);
      {
        b_37 = t;
        v_36 :
        if(((ATgetType(b_37) == AT_LIST) && !(ATisEmpty(b_37))))
          {
            c_37 = ATgetFirst((ATermList) b_37);
            f_37 = (ATerm) ATgetNext((ATermList) b_37);
            w_36 :
            if(match_cons(c_37, sym__2))
              {
                d_37 = ATgetArgument(c_37, 0);
                e_37 = ATgetArgument(c_37, 1);
                {
                  if(((z_36 != NULL) && (z_36 != d_37)))
                    _fail(d_37);
                  else
                    z_36 = d_37;
                  if(((a_37 != NULL) && (a_37 != e_37)))
                    _fail(e_37);
                  else
                    a_37 = e_37;
                }
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
      }
    }
    t = not_null(a_37);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm m_37 = NULL,n_37 = NULL,o_37 = NULL;
  m_37 = t;
  l_37 :
  if(match_cons(m_37, sym__2))
    {
      n_37 = ATgetArgument(m_37, 0);
      o_37 = ATgetArgument(m_37, 1);
      {
        ATerm r_37 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_k_32, (ATerm) ATmakeAppl(sym_Tool_1, not_null(n_37)));
        {
          t = table_get_0(t);
          {
            ATerm v_6 (ATerm t)
            {
              ATerm s_37 = NULL,t_37 = NULL,u_37 = NULL;
              s_37 = t;
              k_37 :
              if(match_cons(s_37, sym__2))
                {
                  t_37 = ATgetArgument(s_37, 0);
                  u_37 = ATgetArgument(s_37, 1);
                  {
                    if(((o_37 != NULL) && (o_37 != t_37)))
                      _fail(t_37);
                    else
                      o_37 = t_37;
                    if(((r_37 != NULL) && (r_37 != u_37)))
                      _fail(u_37);
                    else
                      r_37 = u_37;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, v_6);
          }
        }
        t = not_null(r_37);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm xtc_import_0 (ATerm t)
{
  ATerm t_32 = t;
  int u_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_32;
      {
        t = table_get_0(t);
        {
          ATerm w_6 (ATerm t)
          {
            t = try_1(t, xtc_read_0);
            return(t);
          }
          t = map_1(t, w_6);
        }
      }
      LocalPopChoice(u_32);
    }
  else
    {
      t = t_32;
      {
      }
    }
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm w_86 (ATerm))
{
  ATerm x_32 = t;
  int y_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_32;
      z_32 = t;
      {
        ATerm y_37 = NULL;
        ATerm z_37 = NULL;
        t = term_d_15;
        {
          t = get_config_0(t);
          {
            z_37 = t;
            if(((y_37 != NULL) && (y_37 != z_37)))
              _fail(z_37);
            else
              y_37 = z_37;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_37), term_a_33);
          t = geq_0(t);
        }
      }
      t = z_32;
      t = w_86(t);
      LocalPopChoice(y_32);
    }
  else
    {
      t = x_32;
      {
      }
    }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm f_38 = NULL,g_38 = NULL,h_38 = NULL;
  f_38 = t;
  e_38 :
  if(match_cons(f_38, sym__2))
    {
      g_38 = ATgetArgument(f_38, 0);
      h_38 = ATgetArgument(f_38, 1);
      {
        ATerm b_33;
        b_33 = t;
        {
          ATerm k_33 = t;
          int l_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(g_38), not_null(h_38));
              LocalPopChoice(l_33);
            }
          else
            {
              t = k_33;
              t = SSL_gtr(not_null(g_38), not_null(h_38));
            }
        }
        t = b_33;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm geq_0 (ATerm t)
{
  ATerm r_38 = NULL;
  ATerm m_33 = t;
  int n_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_38 = NULL,t_38 = NULL,u_38 = NULL;
      s_38 = t;
      q_38 :
      if(match_cons(s_38, sym__2))
        {
          t_38 = ATgetArgument(s_38, 0);
          u_38 = ATgetArgument(s_38, 1);
          {
            if(((r_38 != NULL) && (r_38 != t_38)))
              _fail(t_38);
            else
              r_38 = t_38;
            if(((r_38 != NULL) && (r_38 != u_38)))
              _fail(u_38);
            else
              r_38 = u_38;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(n_33);
    }
  else
    {
      t = m_33;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm y_86 (ATerm))
{
  ATerm o_33 = t;
  int p_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_33;
      u_33 = t;
      {
        ATerm x_38 = NULL;
        ATerm y_38 = NULL;
        t = term_d_15;
        {
          t = get_config_0(t);
          {
            y_38 = t;
            if(((x_38 != NULL) && (x_38 != y_38)))
              _fail(y_38);
            else
              x_38 = y_38;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_38), term_v_33);
          t = geq_0(t);
        }
      }
      t = u_33;
      t = y_86(t);
      LocalPopChoice(p_33);
    }
  else
    {
      t = o_33;
      {
      }
    }
  return(t);
}
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm c_39 = NULL,d_39 = NULL,e_39 = NULL;
  c_39 = t;
  b_39 :
  if(match_cons(c_39, sym__2))
    {
      d_39 = ATgetArgument(c_39, 0);
      e_39 = ATgetArgument(c_39, 1);
      if(((d_39 != NULL) && (d_39 != e_39)))
        _fail(e_39);
      else
        d_39 = e_39;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm a_79 (ATerm), ATerm b_79 (ATerm))
{
  ATerm m_39 = NULL,n_39 = NULL,z_39 = NULL;
  m_39 = t;
  l_39 :
  if(((ATgetType(m_39) == AT_LIST) && !(ATisEmpty(m_39))))
    {
      n_39 = ATgetFirst((ATermList) m_39);
      z_39 = (ATerm) ATgetNext((ATermList) m_39);
      {
        t = b_79(t);
        {
          ATerm x_6 (ATerm t)
          {
            ATerm c_40 = NULL;
            c_40 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(n_39), not_null(c_40));
              t = a_79(t);
            }
            return(t);
          }
          t = fetch_1(t, x_6);
        }
        t = not_null(z_39);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm w_78 (ATerm))
{
  ATerm i_40 = NULL,j_40 = NULL,k_40 = NULL;
  i_40 = t;
  h_40 :
  if(match_cons(i_40, sym__2))
    {
      j_40 = ATgetArgument(i_40, 0);
      k_40 = ATgetArgument(i_40, 1);
      {
        t = not_null(j_40);
        {
          ATerm s_40 (ATerm t)
          {
            ATerm w_33 = t;
            int y_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(k_40);
                LocalPopChoice(y_33);
              }
            else
              {
                t = w_33;
                {
                  ATerm z_33 = t;
                  int a_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm y_6 (ATerm t)
                      {
                        t = not_null(k_40);
                        return(t);
                      }
                      t = HdMember_p__2(t, w_78, y_6);
                      t = s_40(t);
                      LocalPopChoice(a_34);
                    }
                  else
                    {
                      t = z_33;
                      t = Cons_2(t, _id, s_40);
                    }
                }
              }
            return(t);
          }
          t = s_40(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_0 (ATerm t)
{
  t = union_1(t, eq_0);
  return(t);
}
ATerm get_0 (ATerm t)
{
  t = table_get_0(t);
  return(t);
}
ATerm table_append_0 (ATerm t)
{
  ATerm z_40 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL;
  z_40 = t;
  y_40 :
  if(match_cons(z_40, sym__3))
    {
      d_41 = ATgetArgument(z_40, 0);
      e_41 = ATgetArgument(z_40, 1);
      f_41 = ATgetArgument(z_40, 2);
      {
        ATerm b_34;
        b_34 = t;
        {
          ATerm s_41 = NULL;
          ATerm t_41 = NULL,v_41 = NULL;
          ATerm u_41 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_41), not_null(e_41));
          {
            ATerm c_34 = t;
            int d_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(d_34);
              }
            else
              {
                t = c_34;
                t = (ATerm) ATempty;
              }
            {
              u_41 = t;
              if(((t_41 != NULL) && (t_41 != u_41)))
                _fail(u_41);
              else
                t_41 = u_41;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(t_41), not_null(f_41));
            {
              t = union_1(t, eq_0);
              {
                v_41 = t;
                if(((s_41 != NULL) && (s_41 != v_41)))
                  _fail(v_41);
                else
                  s_41 = v_41;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(d_41), not_null(e_41), not_null(s_41));
            t = table_put_0(t);
          }
        }
        t = b_34;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm h_90 (ATerm))
{
  ATerm d_42 = NULL,e_42 = NULL,f_42 = NULL;
  d_42 = t;
  c_42 :
  if(match_cons(d_42, sym__2))
    {
      e_42 = ATgetArgument(d_42, 0);
      f_42 = ATgetArgument(d_42, 1);
      {
        t = not_null(f_42);
        {
          ATerm z_6 (ATerm t)
          {
            ATerm i_42 = NULL,j_42 = NULL,k_42 = NULL;
            i_42 = t;
            b_42 :
            if(match_cons(i_42, sym__2))
              {
                j_42 = ATgetArgument(i_42, 0);
                k_42 = ATgetArgument(i_42, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(e_42), not_null(j_42), not_null(k_42));
                  t = h_90(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, z_6);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm q_42 = NULL;
  q_42 = t;
  t = SSL_ReadFromFile(not_null(q_42));
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm i_43 = NULL;
  ATerm k_43 = NULL;
  i_43 = t;
  {
    ATerm e_34;
    e_34 = t;
    {
      ATerm n_43 = NULL;
      t = term_j_34;
      {
        n_43 = t;
        if(((k_43 != NULL) && (k_43 != n_43)))
          _fail(n_43);
        else
          k_43 = n_43;
      }
    }
    t = e_34;
    {
      t = SSL_open_file(not_null(i_43), not_null(k_43));
      t = SSL_close_file(not_null(i_43));
    }
  }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm s_43 = NULL;
  ATerm u_43 = NULL;
  s_43 = t;
  {
    ATerm k_34 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_32, (ATerm) ATmakeAppl(sym_Imported_1, not_null(s_43)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_34;
      }
    {
      ATerm l_34;
      l_34 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_k_32, term_m_34, (ATerm) ATinsert(ATempty, not_null(s_43)));
        t = table_put_0(t);
      }
      t = l_34;
      {
        ATerm a_7 (ATerm t)
        {
          ATerm b_7 (ATerm t)
          {
            t = term_r_34;
            return(t);
          }
          t = debug_1(t, b_7);
          return(t);
        }
        t = if_verbose4_1(t, a_7);
        {
          ATerm s_34 = t;
          int t_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(t_34);
            }
          else
            {
              t = s_34;
              t = (ATerm) ATempty;
            }
          {
            ATerm f_7 (ATerm t)
            {
              ATerm o_7 (ATerm t)
              {
                t = term_u_34;
                return(t);
              }
              t = say_1(t, o_7);
              return(t);
            }
            t = if_verbose6_1(t, f_7);
            {
              ATerm v_43 = NULL;
              v_43 = t;
              if(((u_43 != NULL) && (u_43 != v_43)))
                _fail(v_43);
              else
                u_43 = v_43;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_k_32, not_null(u_43));
                {
                  t = table_putlist_1(t, table_append_0);
                  {
                    ATerm p_7 (ATerm t)
                    {
                      ATerm q_7 (ATerm t)
                      {
                        t = term_v_34;
                        return(t);
                      }
                      t = say_1(t, q_7);
                      return(t);
                    }
                    t = if_verbose6_1(t, p_7);
                    {
                      t = (ATerm) ATmakeAppl(sym__3, term_k_32, (ATerm)ATmakeAppl(sym_Imported_1, not_null(s_43)), (ATerm) ATempty);
                      {
                        t = table_put_0(t);
                        {
                          ATerm r_7 (ATerm t)
                          {
                            ATerm s_7 (ATerm t)
                            {
                              t = term_u_34;
                              return(t);
                            }
                            t = say_1(t, s_7);
                            return(t);
                          }
                          t = if_verbose4_1(t, r_7);
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
ATerm getenv_0 (ATerm t)
{
  ATerm z_43 = NULL;
  z_43 = t;
  t = SSL_getenv(not_null(z_43));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm w_34 = t;
  int x_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_34;
      t = get_config_0(t);
      LocalPopChoice(x_34);
    }
  else
    {
      t = w_34;
      {
        ATerm c_35 = t;
        int d_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_e_35;
            t = getenv_0(t);
            LocalPopChoice(d_35);
          }
        else
          {
            t = c_35;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm t_7 (ATerm t)
  {
    ATerm w_7 (ATerm t)
    {
      t = term_j_35;
      return(t);
    }
    t = debug_1(t, w_7);
    return(t);
  }
  t = if_verbose5_1(t, t_7);
  {
    ATerm k_35;
    k_35 = t;
    {
      ATerm p_35 = t;
      int q_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_r_35;
          t = table_get_0(t);
          LocalPopChoice(q_35);
        }
      else
        {
          t = p_35;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = k_35;
    {
      ATerm x_7 (ATerm t)
      {
        ATerm c_8 (ATerm t)
        {
          t = term_s_35;
          return(t);
        }
        t = debug_1(t, c_8);
        return(t);
      }
      t = if_verbose5_1(t, x_7);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm u_35 = t;
  int v_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_8 (ATerm t)
      {
        ATerm e_8 (ATerm t)
        {
          t = term_w_35;
          return(t);
        }
        t = debug_1(t, e_8);
        return(t);
      }
      t = if_verbose5_1(t, d_8);
      {
        t = xtc_load_0(t);
        {
          ATerm x_35 = t;
          int y_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(y_35);
            }
          else
            {
              t = x_35;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm f_8 (ATerm t)
            {
              ATerm g_8 (ATerm t)
              {
                t = term_w_35;
                return(t);
              }
              t = debug_1(t, g_8);
              return(t);
            }
            t = if_verbose5_1(t, f_8);
          }
        }
      }
      LocalPopChoice(v_35);
    }
  else
    {
      t = u_35;
      {
        ATerm d_44 = NULL;
        ATerm e_44 = NULL;
        e_44 = t;
        if(((d_44 != NULL) && (d_44 != e_44)))
          _fail(e_44);
        else
          d_44 = e_44;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_36), not_null(d_44)), term_a_36);
          {
            t = error_0(t);
            {
              ATerm h_8 (ATerm t)
              {
                t = term_k_32;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm i_8 (ATerm t)
                    {
                      t = term_f_36;
                      return(t);
                    }
                    t = debug_1(t, i_8);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, h_8);
              _fail(t);
            }
          }
        }
      }
    }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm j_44 = NULL;
  j_44 = t;
  t = SSL_string_to_int(not_null(j_44));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm h_45 = NULL,m_45 = NULL,n_45 = NULL,o_45 = NULL,p_45 = NULL;
  h_45 = t;
  f_45 :
  if(match_string(h_45, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(h_45) == AT_LIST) && !(ATisEmpty(h_45))))
        {
          m_45 = ATgetFirst((ATermList) h_45);
          n_45 = (ATerm) ATgetNext((ATermList) h_45);
          g_45 :
          if(((ATgetType(n_45) == AT_LIST) && !(ATisEmpty(n_45))))
            {
              o_45 = ATgetFirst((ATermList) n_45);
              p_45 = (ATerm) ATgetNext((ATermList) n_45);
              {
                ATerm t_45 = NULL;
                ATerm g_36;
                g_36 = t;
                {
                  t = not_null(m_45);
                  t = l_0(t);
                }
                t = g_36;
                {
                  ATerm u_45 = NULL;
                  t = not_null(o_45);
                  {
                    t = m_0(t);
                    {
                      u_45 = t;
                      if(((t_45 != NULL) && (t_45 != u_45)))
                        _fail(u_45);
                      else
                        t_45 = u_45;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(p_45)), not_null(t_45));
                }
              }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm extend_config_0 (ATerm t)
{
  ATerm c_46 = NULL,d_46 = NULL,e_46 = NULL;
  c_46 = t;
  b_46 :
  if(match_cons(c_46, sym__2))
    {
      d_46 = ATgetArgument(c_46, 0);
      e_46 = ATgetArgument(c_46, 1);
      {
        ATerm i_46 = NULL;
        ATerm j_46 = NULL,q_46 = NULL;
        ATerm p_46 = NULL;
        t = not_null(d_46);
        {
          ATerm h_36 = t;
          int i_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(i_36);
            }
          else
            {
              t = h_36;
              t = (ATerm) ATempty;
            }
          {
            p_46 = t;
            if(((j_46 != NULL) && (j_46 != p_46)))
              _fail(p_46);
            else
              j_46 = p_46;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_46), not_null(j_46));
          {
            ATerm k_36 = t;
            int l_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(l_36);
              }
            else
              {
                t = k_36;
                t = conc_more_lists_0(t);
              }
            {
              q_46 = t;
              if(((i_46 != NULL) && (i_46 != q_46)))
                _fail(q_46);
              else
                i_46 = q_46;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_u_30, not_null(d_46), not_null(i_46));
          t = table_put_0(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_remove_0 (ATerm t)
{
  ATerm y_46 = NULL,z_46 = NULL;
  ATerm m_36;
  m_36 = t;
  {
    ATerm a_47 = NULL,b_47 = NULL,c_47 = NULL;
    a_47 = t;
    v_46 :
    if(match_cons(a_47, sym__2))
      {
        b_47 = ATgetArgument(a_47, 0);
        c_47 = ATgetArgument(a_47, 1);
        {
          if(((y_46 != NULL) && (y_46 != b_47)))
            _fail(b_47);
          else
            y_46 = b_47;
          {
            if(((z_46 != NULL) && (z_46 != c_47)))
              _fail(c_47);
            else
              z_46 = c_47;
            t = SSL_table_remove(not_null(y_46), not_null(z_46));
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = m_36;
  return(t);
}
ATerm toggle_config_0 (ATerm t)
{
  ATerm l_47 = NULL,m_47 = NULL,n_47 = NULL;
  l_47 = t;
  k_47 :
  if(match_cons(l_47, sym__2))
    {
      m_47 = ATgetArgument(l_47, 0);
      n_47 = ATgetArgument(l_47, 1);
      {
        ATerm o_36 = t;
        int p_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = not_null(m_47);
            {
              t = get_config_0(t);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_u_30, not_null(m_47));
                t = table_remove_0(t);
              }
            }
            LocalPopChoice(p_36);
          }
        else
          {
            t = o_36;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(m_47), not_null(n_47));
              t = set_config_0(t);
            }
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm post_extend_config_0 (ATerm t)
{
  ATerm v_47 = NULL,w_47 = NULL,x_47 = NULL;
  v_47 = t;
  u_47 :
  if(match_cons(v_47, sym__2))
    {
      w_47 = ATgetArgument(v_47, 0);
      x_47 = ATgetArgument(v_47, 1);
      {
        ATerm f_48 = NULL;
        ATerm g_48 = NULL,i_48 = NULL;
        ATerm h_48 = NULL;
        t = not_null(w_47);
        {
          ATerm s_36 = t;
          int t_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(t_36);
            }
          else
            {
              t = s_36;
              t = (ATerm) ATempty;
            }
          {
            h_48 = t;
            if(((g_48 != NULL) && (g_48 != h_48)))
              _fail(h_48);
            else
              g_48 = h_48;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_48), not_null(x_47));
          {
            ATerm u_36 = t;
            int y_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(y_36);
              }
            else
              {
                t = u_36;
                t = conc_more_lists_0(t);
              }
            {
              i_48 = t;
              if(((f_48 != NULL) && (f_48 != i_48)))
                _fail(i_48);
              else
                f_48 = i_48;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_u_30, not_null(w_47), not_null(f_48));
          t = table_put_0(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm sc_options_0 (ATerm t)
{
  ATerm g_37 = t;
  int h_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_8 (ATerm t)
      {
        ATerm c_50 = NULL;
        c_50 = t;
        z_48 :
        if(!(match_string(c_50, "-i")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm l_8 (ATerm t)
      {
        ATerm d_50 = NULL;
        ATerm e_50 = NULL;
        e_50 = t;
        if(((d_50 != NULL) && (d_50 != e_50)))
          _fail(e_50);
        else
          d_50 = e_50;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_b_25, not_null(d_50));
          t = set_config_0(t);
        }
        t = term_l_20;
        return(t);
      }
      ATerm m_8 (ATerm t)
      {
        t = term_i_37;
        return(t);
      }
      t = ArgOption_3(t, k_8, l_8, m_8);
      LocalPopChoice(h_37);
    }
  else
    {
      t = g_37;
      {
        ATerm j_37 = t;
        int p_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_8 (ATerm t)
            {
              ATerm f_50 = NULL;
              f_50 = t;
              b_49 :
              if(!(match_string(f_50, "-o")))
                {
                  if(!(match_string(f_50, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm s_8 (ATerm t)
            {
              ATerm g_50 = NULL;
              ATerm h_50 = NULL;
              h_50 = t;
              if(((g_50 != NULL) && (g_50 != h_50)))
                _fail(h_50);
              else
                g_50 = h_50;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_m_15, not_null(g_50));
                t = set_config_0(t);
              }
              t = term_l_20;
              return(t);
            }
            ATerm w_8 (ATerm t)
            {
              t = term_q_37;
              return(t);
            }
            t = ArgOption_3(t, q_8, s_8, w_8);
            LocalPopChoice(p_37);
          }
        else
          {
            t = j_37;
            {
              ATerm v_37 = t;
              int w_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_8 (ATerm t)
                  {
                    ATerm i_50 = NULL;
                    i_50 = t;
                    d_49 :
                    if(!(match_string(i_50, "-I")))
                      {
                        if(!(match_string(i_50, "--Include")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm z_8 (ATerm t)
                  {
                    ATerm j_50 = NULL;
                    ATerm k_50 = NULL;
                    k_50 = t;
                    if(((j_50 != NULL) && (j_50 != k_50)))
                      _fail(k_50);
                    else
                      j_50 = k_50;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_h_27, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_50)), term_h_27));
                      t = extend_config_0(t);
                    }
                    t = term_l_20;
                    return(t);
                  }
                  ATerm a_9 (ATerm t)
                  {
                    t = term_x_37;
                    return(t);
                  }
                  t = ArgOption_3(t, y_8, z_8, a_9);
                  LocalPopChoice(w_37);
                }
              else
                {
                  t = v_37;
                  {
                    ATerm a_38 = t;
                    int b_38 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm b_9 (ATerm t)
                        {
                          ATerm l_50 = NULL;
                          l_50 = t;
                          f_49 :
                          if(!(match_string(l_50, "--main")))
                            {
                              if(!(match_string(l_50, "-m")))
                                {
                                  _fail(t);
                                }
                            }
                          return(t);
                        }
                        ATerm c_9 (ATerm t)
                        {
                          ATerm m_50 = NULL;
                          ATerm n_50 = NULL;
                          n_50 = t;
                          if(((m_50 != NULL) && (m_50 != n_50)))
                            _fail(n_50);
                          else
                            m_50 = n_50;
                          {
                            t = (ATerm) ATmakeAppl(sym__2, term_c_21, not_null(m_50));
                            t = set_config_0(t);
                          }
                          t = term_l_20;
                          return(t);
                        }
                        ATerm d_9 (ATerm t)
                        {
                          t = term_c_38;
                          return(t);
                        }
                        t = ArgOption_3(t, b_9, c_9, d_9);
                        LocalPopChoice(b_38);
                      }
                    else
                      {
                        t = a_38;
                        {
                          ATerm d_38 = t;
                          int i_38 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm e_9 (ATerm t)
                              {
                                ATerm o_50 = NULL;
                                o_50 = t;
                                h_49 :
                                if(!(match_string(o_50, "--C-include")))
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              ATerm f_9 (ATerm t)
                              {
                                ATerm p_50 = NULL;
                                ATerm q_50 = NULL;
                                q_50 = t;
                                if(((p_50 != NULL) && (p_50 != q_50)))
                                  _fail(q_50);
                                else
                                  p_50 = q_50;
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, term_n_17, (ATerm) ATinsert(ATempty, not_null(p_50)));
                                  t = post_extend_config_0(t);
                                }
                                t = term_l_20;
                                return(t);
                              }
                              ATerm i_9 (ATerm t)
                              {
                                t = term_j_38;
                                return(t);
                              }
                              t = ArgOption_3(t, e_9, f_9, i_9);
                              LocalPopChoice(i_38);
                            }
                          else
                            {
                              t = d_38;
                              {
                                ATerm k_38 = t;
                                int l_38 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm j_9 (ATerm t)
                                    {
                                      ATerm r_50 = NULL;
                                      r_50 = t;
                                      j_49 :
                                      if(!(match_string(r_50, "-CI")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm k_9 (ATerm t)
                                    {
                                      ATerm s_50 = NULL;
                                      ATerm t_50 = NULL;
                                      t_50 = t;
                                      if(((s_50 != NULL) && (s_50 != t_50)))
                                        _fail(t_50);
                                      else
                                        s_50 = t_50;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, term_y_15, (ATerm) ATinsert(ATempty, not_null(s_50)));
                                        t = extend_config_0(t);
                                      }
                                      t = term_l_20;
                                      return(t);
                                    }
                                    ATerm l_9 (ATerm t)
                                    {
                                      t = term_m_38;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, j_9, k_9, l_9);
                                    LocalPopChoice(l_38);
                                  }
                                else
                                  {
                                    t = k_38;
                                    {
                                      ATerm n_38 = t;
                                      int o_38 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm s_9 (ATerm t)
                                          {
                                            ATerm u_50 = NULL;
                                            u_50 = t;
                                            l_49 :
                                            if(!(match_string(u_50, "-CL")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm t_9 (ATerm t)
                                          {
                                            ATerm v_50 = NULL;
                                            ATerm w_50 = NULL;
                                            w_50 = t;
                                            if(((v_50 != NULL) && (v_50 != w_50)))
                                              _fail(w_50);
                                            else
                                              v_50 = w_50;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, term_h_15, (ATerm) ATinsert(ATempty, not_null(v_50)));
                                              t = extend_config_0(t);
                                            }
                                            t = term_l_20;
                                            return(t);
                                          }
                                          ATerm u_9 (ATerm t)
                                          {
                                            t = term_p_38;
                                            return(t);
                                          }
                                          t = ArgOption_3(t, s_9, t_9, u_9);
                                          LocalPopChoice(o_38);
                                        }
                                      else
                                        {
                                          t = n_38;
                                          {
                                            ATerm v_38 = t;
                                            int w_38 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm v_9 (ATerm t)
                                                {
                                                  ATerm x_50 = NULL;
                                                  x_50 = t;
                                                  n_49 :
                                                  if(!(match_string(x_50, "-c")))
                                                    {
                                                      _fail(t);
                                                    }
                                                  return(t);
                                                }
                                                ATerm y_9 (ATerm t)
                                                {
                                                  t = term_z_38;
                                                  t = set_config_0(t);
                                                  t = term_l_20;
                                                  return(t);
                                                }
                                                ATerm z_9 (ATerm t)
                                                {
                                                  t = term_a_39;
                                                  return(t);
                                                }
                                                t = Option_3(t, v_9, y_9, z_9);
                                                LocalPopChoice(w_38);
                                              }
                                            else
                                              {
                                                t = v_38;
                                                {
                                                  ATerm f_39 = t;
                                                  int g_39 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm c_10 (ATerm t)
                                                      {
                                                        ATerm y_50 = NULL;
                                                        y_50 = t;
                                                        o_49 :
                                                        if(!(match_string(y_50, "--ast")))
                                                          {
                                                            _fail(t);
                                                          }
                                                        return(t);
                                                      }
                                                      ATerm d_10 (ATerm t)
                                                      {
                                                        t = term_h_39;
                                                        t = set_config_0(t);
                                                        t = term_l_20;
                                                        return(t);
                                                      }
                                                      ATerm g_10 (ATerm t)
                                                      {
                                                        t = term_i_39;
                                                        return(t);
                                                      }
                                                      t = Option_3(t, c_10, d_10, g_10);
                                                      LocalPopChoice(g_39);
                                                    }
                                                  else
                                                    {
                                                      t = f_39;
                                                      {
                                                        ATerm j_39 = t;
                                                        int k_39 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm h_10 (ATerm t)
                                                            {
                                                              ATerm z_50 = NULL;
                                                              z_50 = t;
                                                              p_49 :
                                                              if(!(match_string(z_50, "-F")))
                                                                {
                                                                  _fail(t);
                                                                }
                                                              return(t);
                                                            }
                                                            ATerm k_10 (ATerm t)
                                                            {
                                                              t = term_o_39;
                                                              t = set_config_0(t);
                                                              t = term_l_20;
                                                              return(t);
                                                            }
                                                            ATerm l_10 (ATerm t)
                                                            {
                                                              t = term_p_39;
                                                              return(t);
                                                            }
                                                            t = Option_3(t, h_10, k_10, l_10);
                                                            LocalPopChoice(k_39);
                                                          }
                                                        else
                                                          {
                                                            t = j_39;
                                                            {
                                                              ATerm q_39 = t;
                                                              int r_39 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm o_10 (ATerm t)
                                                                  {
                                                                    ATerm a_51 = NULL;
                                                                    a_51 = t;
                                                                    q_49 :
                                                                    if(!(match_string(a_51, "--keep")))
                                                                      {
                                                                        _fail(t);
                                                                      }
                                                                    return(t);
                                                                  }
                                                                  ATerm p_10 (ATerm t)
                                                                  {
                                                                    ATerm b_51 = NULL;
                                                                    ATerm c_51 = NULL;
                                                                    t = string_to_int_0(t);
                                                                    {
                                                                      c_51 = t;
                                                                      if(((b_51 != NULL) && (b_51 != c_51)))
                                                                        _fail(c_51);
                                                                      else
                                                                        b_51 = c_51;
                                                                    }
                                                                    {
                                                                      t = (ATerm) ATmakeAppl(sym__2, term_z_19, not_null(b_51));
                                                                      t = set_config_0(t);
                                                                    }
                                                                    t = term_l_20;
                                                                    return(t);
                                                                  }
                                                                  ATerm s_10 (ATerm t)
                                                                  {
                                                                    t = term_s_39;
                                                                    return(t);
                                                                  }
                                                                  t = ArgOption_3(t, o_10, p_10, s_10);
                                                                  LocalPopChoice(r_39);
                                                                }
                                                              else
                                                                {
                                                                  t = q_39;
                                                                  {
                                                                    ATerm t_39 = t;
                                                                    int u_39 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm t_10 (ATerm t)
                                                                        {
                                                                          ATerm d_51 = NULL;
                                                                          d_51 = t;
                                                                          s_49 :
                                                                          if(!(match_string(d_51, "--fusion")))
                                                                            {
                                                                              _fail(t);
                                                                            }
                                                                          return(t);
                                                                        }
                                                                        ATerm w_10 (ATerm t)
                                                                        {
                                                                          t = term_v_39;
                                                                          t = toggle_config_0(t);
                                                                          t = term_l_20;
                                                                          return(t);
                                                                        }
                                                                        ATerm x_10 (ATerm t)
                                                                        {
                                                                          t = term_w_39;
                                                                          return(t);
                                                                        }
                                                                        t = Option_3(t, t_10, w_10, x_10);
                                                                        LocalPopChoice(u_39);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = t_39;
                                                                        {
                                                                          ATerm x_39 = t;
                                                                          int y_39 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              ATerm a_11 (ATerm t)
                                                                              {
                                                                                ATerm e_51 = NULL;
                                                                                e_51 = t;
                                                                                t_49 :
                                                                                if(!(match_string(e_51, "--trace-all")))
                                                                                  {
                                                                                    _fail(t);
                                                                                  }
                                                                                return(t);
                                                                              }
                                                                              ATerm b_11 (ATerm t)
                                                                              {
                                                                                t = term_b_40;
                                                                                t = set_config_0(t);
                                                                                t = term_l_20;
                                                                                return(t);
                                                                              }
                                                                              ATerm e_11 (ATerm t)
                                                                              {
                                                                                t = term_d_40;
                                                                                return(t);
                                                                              }
                                                                              t = Option_3(t, a_11, b_11, e_11);
                                                                              LocalPopChoice(y_39);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = x_39;
                                                                              {
                                                                                ATerm e_40 = t;
                                                                                int f_40 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm f_11 (ATerm t)
                                                                                    {
                                                                                      ATerm f_51 = NULL;
                                                                                      f_51 = t;
                                                                                      u_49 :
                                                                                      if(!(match_string(f_51, "-t")))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm i_11 (ATerm t)
                                                                                    {
                                                                                      ATerm g_51 = NULL;
                                                                                      ATerm h_51 = NULL;
                                                                                      h_51 = t;
                                                                                      if(((g_51 != NULL) && (g_51 != h_51)))
                                                                                        _fail(h_51);
                                                                                      else
                                                                                        g_51 = h_51;
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym__2, term_g_40, (ATerm) ATinsert(ATempty, not_null(g_51)));
                                                                                        t = extend_config_0(t);
                                                                                      }
                                                                                      t = term_l_20;
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm j_11 (ATerm t)
                                                                                    {
                                                                                      t = term_l_40;
                                                                                      return(t);
                                                                                    }
                                                                                    t = ArgOption_3(t, f_11, i_11, j_11);
                                                                                    LocalPopChoice(f_40);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = e_40;
                                                                                    {
                                                                                      ATerm m_40 = t;
                                                                                      int n_40 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm m_11 (ATerm t)
                                                                                          {
                                                                                            ATerm i_51 = NULL;
                                                                                            i_51 = t;
                                                                                            w_49 :
                                                                                            if(!(match_string(i_51, "--verbose")))
                                                                                              {
                                                                                                _fail(t);
                                                                                              }
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm n_11 (ATerm t)
                                                                                          {
                                                                                            ATerm j_51 = NULL;
                                                                                            ATerm k_51 = NULL;
                                                                                            t = string_to_int_0(t);
                                                                                            {
                                                                                              k_51 = t;
                                                                                              if(((j_51 != NULL) && (j_51 != k_51)))
                                                                                                _fail(k_51);
                                                                                              else
                                                                                                j_51 = k_51;
                                                                                            }
                                                                                            {
                                                                                              t = (ATerm) ATmakeAppl(sym__2, term_d_15, not_null(j_51));
                                                                                              t = set_config_0(t);
                                                                                            }
                                                                                            t = term_l_20;
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm q_11 (ATerm t)
                                                                                          {
                                                                                            t = term_o_40;
                                                                                            return(t);
                                                                                          }
                                                                                          t = ArgOption_3(t, m_11, n_11, q_11);
                                                                                          LocalPopChoice(n_40);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = m_40;
                                                                                          {
                                                                                            ATerm p_40 = t;
                                                                                            int q_40 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm r_11 (ATerm t)
                                                                                                {
                                                                                                  ATerm l_51 = NULL;
                                                                                                  l_51 = t;
                                                                                                  y_49 :
                                                                                                  if(!(match_string(l_51, "-S")))
                                                                                                    {
                                                                                                      if(!(match_string(l_51, "--silent")))
                                                                                                        {
                                                                                                          _fail(t);
                                                                                                        }
                                                                                                    }
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm u_11 (ATerm t)
                                                                                                {
                                                                                                  t = term_r_40;
                                                                                                  t = set_config_0(t);
                                                                                                  t = term_l_20;
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm v_11 (ATerm t)
                                                                                                {
                                                                                                  t = term_t_40;
                                                                                                  return(t);
                                                                                                }
                                                                                                t = Option_3(t, r_11, u_11, v_11);
                                                                                                LocalPopChoice(q_40);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = p_40;
                                                                                                {
                                                                                                  ATerm u_40 = t;
                                                                                                  int v_40 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      ATerm y_11 (ATerm t)
                                                                                                      {
                                                                                                        ATerm m_51 = NULL;
                                                                                                        m_51 = t;
                                                                                                        z_49 :
                                                                                                        if(!(match_string(m_51, "-h")))
                                                                                                          {
                                                                                                            if(!(match_string(m_51, "--help")))
                                                                                                              {
                                                                                                                _fail(t);
                                                                                                              }
                                                                                                          }
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm z_11 (ATerm t)
                                                                                                      {
                                                                                                        t = term_x_40;
                                                                                                        t = set_config_0(t);
                                                                                                        t = term_l_20;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm c_12 (ATerm t)
                                                                                                      {
                                                                                                        t = term_a_41;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      t = Option_3(t, y_11, z_11, c_12);
                                                                                                      LocalPopChoice(v_40);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = u_40;
                                                                                                      {
                                                                                                        ATerm b_41 = t;
                                                                                                        int c_41 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm d_12 (ATerm t)
                                                                                                            {
                                                                                                              ATerm n_51 = NULL;
                                                                                                              n_51 = t;
                                                                                                              a_50 :
                                                                                                              if(!(match_string(n_51, "--man")))
                                                                                                                {
                                                                                                                  _fail(t);
                                                                                                                }
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm e_12 (ATerm t)
                                                                                                            {
                                                                                                              t = term_h_41;
                                                                                                              t = set_config_0(t);
                                                                                                              t = term_l_20;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm j_12 (ATerm t)
                                                                                                            {
                                                                                                              t = term_i_41;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            t = Option_3(t, d_12, e_12, j_12);
                                                                                                            LocalPopChoice(c_41);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = b_41;
                                                                                                            {
                                                                                                              ATerm k_12 (ATerm t)
                                                                                                              {
                                                                                                                ATerm o_51 = NULL;
                                                                                                                o_51 = t;
                                                                                                                b_50 :
                                                                                                                if(!(match_string(o_51, "-v")))
                                                                                                                  {
                                                                                                                    if(!(match_string(o_51, "--version")))
                                                                                                                      {
                                                                                                                        _fail(t);
                                                                                                                      }
                                                                                                                  }
                                                                                                                return(t);
                                                                                                              }
                                                                                                              ATerm l_12 (ATerm t)
                                                                                                              {
                                                                                                                t = term_k_41;
                                                                                                                t = set_config_0(t);
                                                                                                                t = term_l_20;
                                                                                                                return(t);
                                                                                                              }
                                                                                                              ATerm o_12 (ATerm t)
                                                                                                              {
                                                                                                                t = term_l_41;
                                                                                                                return(t);
                                                                                                              }
                                                                                                              t = Option_3(t, k_12, l_12, o_12);
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
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm w_52 = NULL;
  w_52 = t;
  t = SSL_table_destroy(not_null(w_52));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm j_53 = NULL,k_53 = NULL,l_53 = NULL;
  j_53 = t;
  i_53 :
  if(((ATgetType(j_53) == AT_LIST) && ATisEmpty(j_53)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(j_53) == AT_LIST) && !(ATisEmpty(j_53))))
        {
          k_53 = ATgetFirst((ATermList) j_53);
          l_53 = (ATerm) ATgetNext((ATermList) j_53);
          {
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm echo_0 (ATerm t)
{
  ATerm m_41;
  m_41 = t;
  {
    ATerm q_53 = NULL;
    ATerm t_53 = NULL;
    ATerm n_41 = t;
    int o_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(o_41);
      }
    else
      {
        t = n_41;
        {
          ATerm r_53 = NULL;
          ATerm s_53 = NULL;
          s_53 = t;
          if(((r_53 != NULL) && (r_53 != s_53)))
            _fail(s_53);
          else
            r_53 = s_53;
          t = (ATerm) ATinsert(ATempty, not_null(r_53));
        }
      }
    {
      t_53 = t;
      if(((q_53 != NULL) && (q_53 != t_53)))
        _fail(t_53);
      else
        q_53 = t_53;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_16, not_null(q_53));
      t = printnl_0(t);
    }
  }
  t = m_41;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_0 (ATerm))
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_42), term_k_31), term_m_42), term_l_42), term_h_42), term_k_31), term_g_42), term_a_42), term_z_41), term_y_41), term_x_41), term_w_41), term_r_41), term_q_41), term_p_41);
  return(t);
}
ATerm map_1 (ATerm t, ATerm z_72 (ATerm))
{
  ATerm w_53 (ATerm t)
  {
    ATerm o_42 = t;
    int p_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(p_42);
      }
    else
      {
        t = o_42;
        t = Cons_2(t, z_72, w_53);
      }
    return(t);
  }
  t = w_53(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm d_54 = NULL,e_54 = NULL,f_54 = NULL;
  f_54 = t;
  c_54 :
  if(((ATgetType(f_54) == AT_LIST) && !(ATisEmpty(f_54))))
    {
      d_54 = ATgetFirst((ATermList) f_54);
      e_54 = (ATerm) ATgetNext((ATermList) f_54);
      {
        ATerm i_54 = NULL;
        t = not_null(e_54);
        {
          ATerm r_42;
          r_42 = t;
          {
            ATerm j_54 = NULL,l_54 = NULL,n_54 = NULL;
            ATerm s_42;
            s_42 = t;
            {
              ATerm k_54 = NULL;
              t = j_0(t);
              {
                k_54 = t;
                if(((j_54 != NULL) && (j_54 != k_54)))
                  _fail(k_54);
                else
                  j_54 = k_54;
              }
            }
            t = s_42;
            {
              ATerm m_54 = NULL;
              t = not_null(d_54);
              {
                t = i_0(t);
                {
                  m_54 = t;
                  if(((l_54 != NULL) && (l_54 != m_54)))
                    _fail(m_54);
                  else
                    l_54 = m_54;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(j_54)), not_null(l_54));
                {
                  n_54 = t;
                  if(((i_54 != NULL) && (i_54 != n_54)))
                    _fail(n_54);
                  else
                    i_54 = n_54;
                }
              }
            }
          }
          t = r_42;
          {
            ATerm p_12 (ATerm t)
            {
              t = not_null(i_54);
              return(t);
            }
            t = reverse_acc_2(t, i_0, p_12);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(f_54) == AT_LIST) && ATisEmpty(f_54)))
        {
          {
            t = term_l_20;
            t = j_0(t);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  ATerm q_12 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, q_12);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm h_0 (ATerm))
{
  ATerm u_54 = NULL;
  ATerm v_54 = NULL;
  t = term_l_20;
  {
    t = h_0(t);
    {
      v_54 = t;
      if(((u_54 != NULL) && (u_54 != v_54)))
        _fail(v_54);
      else
        u_54 = v_54;
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_42), not_null(u_54)), term_x_42), term_k_31), term_w_42), term_k_31), term_v_42), term_u_42), term_k_31), term_t_42);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm r_59 (ATerm))
{
  ATerm e_55 = NULL,f_55 = NULL;
  e_55 = t;
  d_55 :
  if(match_cons(e_55, sym_Program_1))
    {
      f_55 = ATgetArgument(e_55, 0);
      {
        ATerm i_55 = NULL,k_55 = NULL;
        ATerm j_55 = NULL;
        t = SSLgetAnnotations(not_null(e_55));
        {
          j_55 = t;
          if(((i_55 != NULL) && (i_55 != j_55)))
            _fail(j_55);
          else
            i_55 = j_55;
        }
        {
          t = not_null(f_55);
          {
            ATerm m_55 = NULL;
            t = r_59(t);
            {
              k_55 = t;
              {
                ATerm n_55 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(k_55)), not_null(i_55));
                {
                  n_55 = t;
                  if(((m_55 != NULL) && (m_55 != n_55)))
                    _fail(n_55);
                  else
                    m_55 = n_55;
                }
                t = not_null(m_55);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm w_55 = NULL;
  ATerm z_42 = t;
  int a_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_55 = NULL;
      t = term_b_43;
      {
        t = get_config_0(t);
        {
          x_55 = t;
          if(((w_55 != NULL) && (w_55 != x_55)))
            _fail(x_55);
          else
            w_55 = x_55;
        }
      }
      LocalPopChoice(a_43);
    }
  else
    {
      t = z_42;
      {
        ATerm u_12 (ATerm t)
        {
          ATerm x_12 (ATerm t)
          {
            ATerm y_55 = NULL;
            y_55 = t;
            if(((w_55 != NULL) && (w_55 != y_55)))
              _fail(y_55);
            else
              w_55 = y_55;
            return(t);
          }
          t = Program_1(t, x_12);
          return(t);
        }
        t = fetch_1(t, u_12);
      }
    }
  {
    ATerm c_43 = t;
    int d_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_12 (ATerm t)
        {
          t = not_null(w_55);
          return(t);
        }
        t = short_description_1(t, y_12);
        t = echo_0(t);
        LocalPopChoice(d_43);
      }
    else
      {
        t = c_43;
        {
        }
      }
    {
      t = term_e_43;
      {
        t = echo_0(t);
        {
          t = term_h_43;
          {
            t = table_get_0(t);
            {
              ATerm z_12 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = reverse_acc_2(t, _id, z_12);
              {
                ATerm a_13 (ATerm t)
                {
                  ATerm z_55 = NULL;
                  ATerm a_56 = NULL;
                  a_56 = t;
                  if(((z_55 != NULL) && (z_55 != a_56)))
                    _fail(a_56);
                  else
                    z_55 = a_56;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_55)), term_j_43);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, a_13);
                {
                  ATerm l_43 = t;
                  int m_43 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm b_56 = NULL;
                      ATerm c_56 = NULL;
                      ATerm f_13 (ATerm t)
                      {
                        t = not_null(w_55);
                        return(t);
                      }
                      t = long_description_1(t, f_13);
                      {
                        c_56 = t;
                        if(((b_56 != NULL) && (b_56 != c_56)))
                          _fail(c_56);
                        else
                          b_56 = c_56;
                      }
                      {
                        t = (ATerm) ATinsert(CheckATermList(not_null(b_56)), term_k_31);
                        t = echo_0(t);
                      }
                      LocalPopChoice(m_43);
                    }
                  else
                    {
                      t = l_43;
                      {
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
ATerm debug_0 (ATerm t)
{
  ATerm o_43;
  o_43 = t;
  {
    ATerm i_56 = NULL;
    ATerm j_56 = NULL;
    j_56 = t;
    if(((i_56 != NULL) && (i_56 != j_56)))
      _fail(j_56);
    else
      i_56 = j_56;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_15, (ATerm) ATinsert(ATempty, not_null(i_56)));
      t = printnl_0(t);
    }
  }
  t = o_43;
  return(t);
}
ATerm say_1 (ATerm t, ATerm y_83 (ATerm))
{
  ATerm p_43;
  p_43 = t;
  {
    t = y_83(t);
    t = debug_0(t);
  }
  t = p_43;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm s_59 (ATerm))
{
  ATerm q_56 = NULL,r_56 = NULL;
  q_56 = t;
  p_56 :
  if(match_cons(q_56, sym_Undefined_1))
    {
      r_56 = ATgetArgument(q_56, 0);
      {
        ATerm u_56 = NULL,w_56 = NULL;
        ATerm v_56 = NULL;
        t = SSLgetAnnotations(not_null(q_56));
        {
          v_56 = t;
          if(((u_56 != NULL) && (u_56 != v_56)))
            _fail(v_56);
          else
            u_56 = v_56;
        }
        {
          t = not_null(r_56);
          {
            ATerm y_56 = NULL;
            t = s_59(t);
            {
              w_56 = t;
              {
                ATerm z_56 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(w_56)), not_null(u_56));
                {
                  z_56 = t;
                  if(((y_56 != NULL) && (y_56 != z_56)))
                    _fail(z_56);
                  else
                    y_56 = z_56;
                }
                t = not_null(y_56);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm i_73 (ATerm))
{
  ATerm e_57 (ATerm t)
  {
    ATerm q_43 = t;
    int r_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, i_73, _id);
        LocalPopChoice(r_43);
      }
    else
      {
        t = q_43;
        t = Cons_2(t, _id, e_57);
      }
    return(t);
  }
  t = e_57(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm w_87 (ATerm))
{
  t = fetch_1(t, w_87);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm j_57 = NULL;
  j_57 = t;
  i_57 :
  if(match_cons(j_57, sym_Help_0))
    {
      ATerm l_57 = NULL,n_57 = NULL;
      ATerm t_43;
      t_43 = t;
      {
        ATerm m_57 = NULL;
        t = SSLgetAnnotations(not_null(j_57));
        {
          m_57 = t;
          if(((l_57 != NULL) && (l_57 != m_57)))
            _fail(m_57);
          else
            l_57 = m_57;
        }
      }
      t = t_43;
      {
        ATerm o_57 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(l_57));
        {
          o_57 = t;
          if(((n_57 != NULL) && (n_57 != o_57)))
            _fail(o_57);
          else
            n_57 = o_57;
        }
        t = not_null(n_57);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm u_57 = NULL,v_57 = NULL,w_57 = NULL;
  u_57 = t;
  t_57 :
  if(match_cons(u_57, sym__2))
    {
      v_57 = ATgetArgument(u_57, 0);
      w_57 = ATgetArgument(u_57, 1);
      t = SSL_table_get(not_null(v_57), not_null(w_57));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm d_58 = NULL,e_58 = NULL,f_58 = NULL,g_58 = NULL;
  d_58 = t;
  c_58 :
  if(match_cons(d_58, sym__3))
    {
      e_58 = ATgetArgument(d_58, 0);
      f_58 = ATgetArgument(d_58, 1);
      g_58 = ATgetArgument(d_58, 2);
      {
        ATerm w_43;
        w_43 = t;
        {
          ATerm k_58 = NULL;
          ATerm l_58 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_58), not_null(f_58));
          {
            ATerm x_43 = t;
            int y_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(y_43);
              }
            else
              {
                t = x_43;
                t = (ATerm) ATempty;
              }
            {
              l_58 = t;
              if(((k_58 != NULL) && (k_58 != l_58)))
                _fail(l_58);
              else
                k_58 = l_58;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(e_58), not_null(f_58), (ATerm) ATinsert(CheckATermList(not_null(k_58)), not_null(g_58)));
            t = table_put_0(t);
          }
        }
        t = w_43;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm b_89 (ATerm))
{
  ATerm p_58 = NULL;
  ATerm q_58 = NULL;
  t = term_l_20;
  {
    t = b_89(t);
    {
      q_58 = t;
      if(((p_58 != NULL) && (p_58 != q_58)))
        _fail(q_58);
      else
        p_58 = q_58;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_f_43, term_g_43, not_null(p_58));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm w_58 = NULL,x_58 = NULL,y_58 = NULL;
  w_58 = t;
  v_58 :
  if(match_string(w_58, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(w_58) == AT_LIST) && !(ATisEmpty(w_58))))
        {
          x_58 = ATgetFirst((ATermList) w_58);
          y_58 = (ATerm) ATgetNext((ATermList) w_58);
          {
            ATerm b_59 = NULL;
            ATerm a_44;
            a_44 = t;
            {
              t = not_null(x_58);
              t = a_0(t);
            }
            t = a_44;
            {
              ATerm c_59 = NULL;
              t = term_l_20;
              {
                t = d_0(t);
                {
                  c_59 = t;
                  if(((b_59 != NULL) && (b_59 != c_59)))
                    _fail(c_59);
                  else
                    b_59 = c_59;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(y_58)), not_null(b_59));
            }
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm g_13 (ATerm t)
  {
    ATerm h_59 = NULL;
    h_59 = t;
    g_59 :
    if(!(match_string(h_59, "--help")))
      {
        if(!(match_string(h_59, "-h")))
          {
            if(!(match_string(h_59, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm i_13 (ATerm t)
  {
    t = term_x_40;
    {
      t = set_config_0(t);
      t = term_b_44;
    }
    return(t);
  }
  ATerm j_13 (ATerm t)
  {
    t = term_c_44;
    return(t);
  }
  t = Option_3(t, g_13, i_13, j_13);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm k_59 = NULL,l_59 = NULL,m_59 = NULL;
  k_59 = t;
  j_59 :
  if(((ATgetType(k_59) == AT_LIST) && !(ATisEmpty(k_59))))
    {
      l_59 = ATgetFirst((ATermList) k_59);
      m_59 = (ATerm) ATgetNext((ATermList) k_59);
      t = (ATerm) ATinsert(CheckATermList(not_null(m_59)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(l_59)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm z_88 (ATerm))
{
  ATerm f_44;
  f_44 = t;
  {
    ATerm g_44 = t;
    int h_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_44;
        t = z_88(t);
        LocalPopChoice(h_44);
      }
    else
      {
        t = g_44;
        {
        }
      }
  }
  t = f_44;
  {
    ATerm m_13 (ATerm t)
    {
      ATerm w_59 = NULL;
      ATerm k_44;
      k_44 = t;
      {
        ATerm u_59 = NULL;
        ATerm v_59 = NULL;
        v_59 = t;
        if(((u_59 != NULL) && (u_59 != v_59)))
          _fail(v_59);
        else
          u_59 = v_59;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_b_43, not_null(u_59));
          t = set_config_0(t);
        }
      }
      t = k_44;
      {
        ATerm x_59 = NULL;
        x_59 = t;
        if(((w_59 != NULL) && (w_59 != x_59)))
          _fail(x_59);
        else
          w_59 = x_59;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(w_59));
      }
      return(t);
    }
    ATerm s_13 (ATerm t)
    {
      ATerm l_44 = t;
      int m_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_44 = t;
          int o_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(o_44);
            }
          else
            {
              t = n_44;
              {
                t = z_88(t);
                t = Cons_2(t, _id, s_13);
              }
            }
          LocalPopChoice(m_44);
        }
      else
        {
          t = l_44;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, m_13, s_13);
  }
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm y_88 (ATerm))
{
  ATerm d_60 = NULL;
  ATerm p_44;
  p_44 = t;
  {
    t = term_q_44;
    t = table_put_0(t);
  }
  t = p_44;
  {
    ATerm t_13 (ATerm t)
    {
      ATerm r_44 = t;
      int s_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_88(t);
          LocalPopChoice(s_44);
        }
      else
        {
          t = r_44;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, t_13);
    {
      ATerm t_44 = t;
      int u_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_44;
          v_44 = t;
          {
            ATerm w_44 = t;
            int x_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_w_40;
                t = get_config_0(t);
                LocalPopChoice(x_44);
              }
            else
              {
                t = w_44;
                t = fetch_1(t, Help_0);
              }
          }
          t = v_44;
          {
            t = system_usage_0(t);
            {
              t = term_z_14;
              t = exit_0(t);
            }
          }
          LocalPopChoice(u_44);
        }
      else
        {
          t = t_44;
          {
            ATerm y_44 = t;
            int z_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_13 (ATerm t)
                {
                  ATerm v_13 (ATerm t)
                  {
                    ATerm e_60 = NULL;
                    e_60 = t;
                    if(((d_60 != NULL) && (d_60 != e_60)))
                      _fail(e_60);
                    else
                      d_60 = e_60;
                    return(t);
                  }
                  t = Undefined_1(t, v_13);
                  return(t);
                }
                t = fetch_1(t, u_13);
                {
                  ATerm a_14 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_60)), term_a_45);
                    return(t);
                  }
                  t = say_1(t, a_14);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_l_23;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(z_44);
              }
            else
              {
                t = y_44;
                {
                }
              }
          }
        }
      {
        ATerm b_45;
        b_45 = t;
        {
          t = term_f_43;
          t = table_destroy_0(t);
        }
        t = b_45;
      }
    }
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm i_60 = NULL,j_60 = NULL,k_60 = NULL;
  ATerm c_45;
  c_45 = t;
  {
    ATerm l_60 = NULL,m_60 = NULL,n_60 = NULL,o_60 = NULL;
    l_60 = t;
    h_60 :
    if(match_cons(l_60, sym__3))
      {
        m_60 = ATgetArgument(l_60, 0);
        n_60 = ATgetArgument(l_60, 1);
        o_60 = ATgetArgument(l_60, 2);
        {
          if(((i_60 != NULL) && (i_60 != m_60)))
            _fail(m_60);
          else
            i_60 = m_60;
          {
            if(((j_60 != NULL) && (j_60 != n_60)))
              _fail(n_60);
            else
              j_60 = n_60;
            {
              if(((k_60 != NULL) && (k_60 != o_60)))
                _fail(o_60);
              else
                k_60 = o_60;
              t = SSL_table_put(not_null(i_60), not_null(j_60), not_null(k_60));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = c_45;
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm s_60 = NULL,t_60 = NULL,u_60 = NULL;
  s_60 = t;
  r_60 :
  if(match_cons(s_60, sym__2))
    {
      t_60 = ATgetArgument(s_60, 0);
      u_60 = ATgetArgument(s_60, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_u_30, not_null(t_60), not_null(u_60));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm d_45 = t;
  int e_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(e_45);
    }
  else
    {
      t = d_45;
      {
        ATerm a_61 = NULL,b_61 = NULL,c_61 = NULL;
        a_61 = t;
        z_60 :
        if(((ATgetType(a_61) == AT_LIST) && !(ATisEmpty(a_61))))
          {
            b_61 = ATgetFirst((ATermList) a_61);
            c_61 = (ATerm) ATgetNext((ATermList) a_61);
            {
              t = not_null(b_61);
              {
                ATerm b_14 (ATerm t)
                {
                  t = not_null(c_61);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, b_14);
              }
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm m_61 = NULL;
  ATerm o_61 = NULL;
  m_61 = t;
  {
    ATerm p_61 = NULL;
    ATerm r_61 = NULL,s_61 = NULL,t_61 = NULL;
    t = not_null(m_61);
    {
      p_61 = t;
      {
        t = SSL_explode_term(not_null(p_61));
        {
          r_61 = t;
          k_61 :
          if(match_cons(r_61, sym__2))
            {
              s_61 = ATgetArgument(r_61, 0);
              t_61 = ATgetArgument(r_61, 1);
              l_61 :
              if(match_string(s_61, ""))
                {
                  if(((o_61 != NULL) && (o_61 != t_61)))
                    _fail(t_61);
                  else
                    o_61 = t_61;
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(o_61);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm b_62 = NULL;
  b_62 = t;
  a_62 :
  if(((ATgetType(b_62) == AT_LIST) && ATisEmpty(b_62)))
    {
      {
        ATerm d_62 = NULL,f_62 = NULL;
        ATerm i_45;
        i_45 = t;
        {
          ATerm e_62 = NULL;
          t = SSLgetAnnotations(not_null(b_62));
          {
            e_62 = t;
            if(((d_62 != NULL) && (d_62 != e_62)))
              _fail(e_62);
            else
              d_62 = e_62;
          }
        }
        t = i_45;
        {
          ATerm g_62 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(d_62));
          {
            g_62 = t;
            if(((f_62 != NULL) && (f_62 != g_62)))
              _fail(g_62);
            else
              f_62 = g_62;
          }
          t = not_null(f_62);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm o_73 (ATerm))
{
  ATerm k_62 (ATerm t)
  {
    ATerm j_45 = t;
    int k_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, k_62);
        LocalPopChoice(k_45);
      }
    else
      {
        t = j_45;
        {
          t = Nil_0(t);
          t = o_73(t);
        }
      }
    return(t);
  }
  t = k_62(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm n_62 = NULL,o_62 = NULL,p_62 = NULL;
  n_62 = t;
  m_62 :
  if(match_cons(n_62, sym__2))
    {
      o_62 = ATgetArgument(n_62, 0);
      p_62 = ATgetArgument(n_62, 1);
      {
        t = not_null(o_62);
        {
          ATerm c_14 (ATerm t)
          {
            t = not_null(p_62);
            return(t);
          }
          t = at_end_1(t, c_14);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm l_45 = t;
  int q_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(q_45);
    }
  else
    {
      t = l_45;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm o_53 (ATerm), ATerm p_53 (ATerm))
{
  ATerm z_62 = NULL,a_63 = NULL,b_63 = NULL;
  z_62 = t;
  y_62 :
  if(match_cons(z_62, sym__2))
    {
      a_63 = ATgetArgument(z_62, 0);
      b_63 = ATgetArgument(z_62, 1);
      {
        ATerm f_63 = NULL,h_63 = NULL;
        ATerm g_63 = NULL;
        t = SSLgetAnnotations(not_null(z_62));
        {
          g_63 = t;
          if(((f_63 != NULL) && (f_63 != g_63)))
            _fail(g_63);
          else
            f_63 = g_63;
        }
        {
          t = not_null(a_63);
          {
            ATerm j_63 = NULL;
            t = o_53(t);
            {
              h_63 = t;
              {
                t = not_null(b_63);
                {
                  ATerm l_63 = NULL;
                  t = p_53(t);
                  {
                    j_63 = t;
                    {
                      ATerm m_63 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(h_63), not_null(j_63)), not_null(f_63));
                      {
                        m_63 = t;
                        if(((l_63 != NULL) && (l_63 != m_63)))
                          _fail(m_63);
                        else
                          l_63 = m_63;
                      }
                      t = not_null(l_63);
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
      _fail(t);
    }
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm r_45 = t;
    int s_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(s_45);
      }
    else
      {
        t = r_45;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm t_63 = NULL;
  t_63 = t;
  t = SSL_implode_string(not_null(t_63));
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm x_54 (ATerm), ATerm y_54 (ATerm))
{
  ATerm c_64 = NULL,d_64 = NULL,e_64 = NULL;
  c_64 = t;
  b_64 :
  if(((ATgetType(c_64) == AT_LIST) && !(ATisEmpty(c_64))))
    {
      d_64 = ATgetFirst((ATermList) c_64);
      e_64 = (ATerm) ATgetNext((ATermList) c_64);
      {
        ATerm i_64 = NULL,k_64 = NULL;
        ATerm j_64 = NULL;
        t = SSLgetAnnotations(not_null(c_64));
        {
          j_64 = t;
          if(((i_64 != NULL) && (i_64 != j_64)))
            _fail(j_64);
          else
            i_64 = j_64;
        }
        {
          t = not_null(d_64);
          {
            ATerm m_64 = NULL;
            t = x_54(t);
            {
              k_64 = t;
              {
                t = not_null(e_64);
                {
                  ATerm o_64 = NULL;
                  t = y_54(t);
                  {
                    m_64 = t;
                    {
                      ATerm p_64 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(m_64)), not_null(k_64)), not_null(i_64));
                      {
                        p_64 = t;
                        if(((o_64 != NULL) && (o_64 != p_64)))
                          _fail(p_64);
                        else
                          o_64 = p_64;
                      }
                      t = not_null(o_64);
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
      _fail(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm w_64 = NULL;
  w_64 = t;
  t = SSL_explode_string(not_null(w_64));
  return(t);
}
ATerm get_path_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm v_45 = t;
    int w_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_65 (ATerm t)
        {
          ATerm x_45 = t;
          int y_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, b_65);
              LocalPopChoice(y_45);
            }
          else
            {
              t = x_45;
              {
                ATerm d_14 (ATerm t)
                {
                  ATerm a_65 = NULL;
                  a_65 = t;
                  z_64 :
                  if(!(match_int(a_65, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                ATerm e_14 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = Cons_2(t, d_14, e_14);
              }
            }
          return(t);
        }
        t = b_65(t);
        LocalPopChoice(w_45);
      }
    else
      {
        t = v_45;
        t = (ATerm) ATempty;
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm xtc_find_path_0 (ATerm t)
{
  t = xtc_find_0(t);
  t = get_path_0(t);
  return(t);
}
ATerm init_sc_config_0 (ATerm t)
{
  ATerm z_45;
  z_45 = t;
  {
    ATerm u_65 = NULL,a_66 = NULL,c_66 = NULL,e_66 = NULL,i_66 = NULL,m_66 = NULL,q_66 = NULL,u_66 = NULL;
    t = term_f_46;
    {
      t = set_config_0(t);
      {
        t = term_g_46;
        {
          t = set_config_0(t);
          {
            t = term_h_46;
            {
              t = set_config_0(t);
              {
                ATerm k_46;
                k_46 = t;
                {
                  ATerm v_65 = NULL;
                  t = term_l_46;
                  {
                    t = xtc_find_path_0(t);
                    {
                      v_65 = t;
                      if(((u_65 != NULL) && (u_65 != v_65)))
                        _fail(v_65);
                      else
                        u_65 = v_65;
                    }
                  }
                }
                t = k_46;
                {
                  ATerm m_46;
                  m_46 = t;
                  {
                    ATerm b_66 = NULL;
                    t = term_n_46;
                    {
                      t = xtc_find_path_0(t);
                      {
                        b_66 = t;
                        if(((a_66 != NULL) && (a_66 != b_66)))
                          _fail(b_66);
                        else
                          a_66 = b_66;
                      }
                    }
                  }
                  t = m_46;
                  {
                    ATerm d_66 = NULL;
                    t = term_o_46;
                    {
                      t = xtc_find_path_0(t);
                      {
                        d_66 = t;
                        if(((c_66 != NULL) && (c_66 != d_66)))
                          _fail(d_66);
                        else
                          c_66 = d_66;
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_h_27, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(c_66)), term_h_27), not_null(a_66)), term_h_27), not_null(u_65)), term_h_27));
                      {
                        t = set_config_0(t);
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_n_17, (ATerm) ATinsert(ATinsert(ATempty, term_s_46), term_r_46));
                          {
                            t = set_config_0(t);
                            {
                              ATerm t_46;
                              t_46 = t;
                              {
                                ATerm f_66 = NULL,h_66 = NULL;
                                ATerm g_66 = NULL;
                                t = term_u_46;
                                {
                                  t = xtc_find_path_0(t);
                                  {
                                    g_66 = t;
                                    if(((f_66 != NULL) && (f_66 != g_66)))
                                      _fail(g_66);
                                    else
                                      f_66 = g_66;
                                  }
                                }
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(f_66), term_w_46);
                                  {
                                    t = conc_strings_0(t);
                                    {
                                      h_66 = t;
                                      if(((e_66 != NULL) && (e_66 != h_66)))
                                        _fail(h_66);
                                      else
                                        e_66 = h_66;
                                    }
                                  }
                                }
                              }
                              t = t_46;
                              {
                                ATerm x_46;
                                x_46 = t;
                                {
                                  ATerm j_66 = NULL,l_66 = NULL;
                                  ATerm k_66 = NULL;
                                  t = term_u_46;
                                  {
                                    t = xtc_find_path_0(t);
                                    {
                                      k_66 = t;
                                      if(((j_66 != NULL) && (j_66 != k_66)))
                                        _fail(k_66);
                                      else
                                        j_66 = k_66;
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(j_66), term_w_46);
                                    {
                                      t = conc_strings_0(t);
                                      {
                                        l_66 = t;
                                        if(((i_66 != NULL) && (i_66 != l_66)))
                                          _fail(l_66);
                                        else
                                          i_66 = l_66;
                                      }
                                    }
                                  }
                                }
                                t = x_46;
                                {
                                  ATerm n_66 = NULL,p_66 = NULL;
                                  ATerm o_66 = NULL;
                                  t = term_d_47;
                                  {
                                    t = xtc_find_path_0(t);
                                    {
                                      o_66 = t;
                                      if(((n_66 != NULL) && (n_66 != o_66)))
                                        _fail(o_66);
                                      else
                                        n_66 = o_66;
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(n_66), term_w_46);
                                    {
                                      t = conc_strings_0(t);
                                      {
                                        p_66 = t;
                                        if(((m_66 != NULL) && (m_66 != p_66)))
                                          _fail(p_66);
                                        else
                                          m_66 = p_66;
                                      }
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_y_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(m_66)), term_h_27), not_null(i_66)), term_h_27), not_null(e_66)), term_h_27));
                                    {
                                      t = set_config_0(t);
                                      {
                                        ATerm e_47;
                                        e_47 = t;
                                        {
                                          ATerm r_66 = NULL,t_66 = NULL;
                                          ATerm s_66 = NULL;
                                          t = term_u_46;
                                          {
                                            t = xtc_find_path_0(t);
                                            {
                                              s_66 = t;
                                              if(((r_66 != NULL) && (r_66 != s_66)))
                                                _fail(s_66);
                                              else
                                                r_66 = s_66;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(r_66), term_f_47);
                                            {
                                              t = conc_strings_0(t);
                                              {
                                                t_66 = t;
                                                if(((q_66 != NULL) && (q_66 != t_66)))
                                                  _fail(t_66);
                                                else
                                                  q_66 = t_66;
                                              }
                                            }
                                          }
                                        }
                                        t = e_47;
                                        {
                                          ATerm v_66 = NULL,x_66 = NULL;
                                          ATerm w_66 = NULL;
                                          t = term_d_47;
                                          {
                                            t = xtc_find_path_0(t);
                                            {
                                              w_66 = t;
                                              if(((v_66 != NULL) && (v_66 != w_66)))
                                                _fail(w_66);
                                              else
                                                v_66 = w_66;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(v_66), term_f_47);
                                            {
                                              t = conc_strings_0(t);
                                              {
                                                x_66 = t;
                                                if(((u_66 != NULL) && (u_66 != x_66)))
                                                  _fail(x_66);
                                                else
                                                  u_66 = x_66;
                                              }
                                            }
                                          }
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, term_h_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_47), term_j_47), not_null(u_66)), term_g_47), term_i_47), term_h_47), not_null(q_66)), term_g_47));
                                            t = set_config_0(t);
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
  t = z_45;
  return(t);
}
ATerm command_line_options_0 (ATerm t)
{
  t = init_sc_config_0(t);
  {
    t = parse_options_1(t, sc_options_0);
    {
      ATerm p_47 = t;
      int q_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_67 = NULL;
          t = term_g_41;
          {
            t = get_config_0(t);
            {
              ATerm n_67 = NULL;
              t = term_r_47;
              {
                t = xtc_find_0(t);
                {
                  n_67 = t;
                  if(((m_67 != NULL) && (m_67 != n_67)))
                    _fail(n_67);
                  else
                    m_67 = n_67;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(m_67), term_q_16);
                {
                  t = copy_file_0(t);
                  {
                    t = term_z_14;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
          LocalPopChoice(q_47);
        }
      else
        {
          t = p_47;
          {
          }
        }
      {
        ATerm s_47 = t;
        int t_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_j_41;
            {
              t = get_config_0(t);
              {
                t = sc_version_0(t);
                {
                  t = term_z_14;
                  t = exit_0(t);
                }
              }
            }
            LocalPopChoice(t_47);
          }
        else
          {
            t = s_47;
            {
            }
          }
        {
          ATerm y_47 = t;
          int z_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_48;
              a_48 = t;
              {
                t = term_b_25;
                t = get_config_0(t);
              }
              t = a_48;
              LocalPopChoice(z_47);
            }
          else
            {
              t = y_47;
              {
                t = (ATerm) ATinsert(ATempty, term_b_48);
                t = fatal_error_0(t);
              }
            }
          {
            t = if_verbose2_1(t, sc_version_0);
            {
              ATerm h_14 (ATerm t)
              {
                ATerm c_48;
                c_48 = t;
                {
                  t = term_b_25;
                  {
                    t = get_config_0(t);
                    {
                      ATerm m_14 (ATerm t)
                      {
                        t = term_d_48;
                        return(t);
                      }
                      t = debug_1(t, m_14);
                    }
                  }
                }
                t = c_48;
                return(t);
              }
              t = if_verbose1_1(t, h_14);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm sc_0 (ATerm t)
{
  ATerm e_48 = t;
  int j_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = command_line_options_0(t);
      {
        ATerm n_14 (ATerm t)
        {
          ATerm o_14 (ATerm t)
          {
            ATerm s_67 = NULL;
            ATerm t_67 = NULL;
            t_67 = t;
            if(((s_67 != NULL) && (s_67 != t_67)))
              _fail(t_67);
            else
              s_67 = t_67;
            {
              t = (ATerm) ATmakeAppl(sym__2, term_v_15, (ATerm) ATinsert(CheckATermList(not_null(s_67)), term_k_48));
              t = printnl_0(t);
            }
            return(t);
          }
          t = if_verbose1_1(t, o_14);
          return(t);
        }
        t = profile_p__2(t, n_14, compile_0);
        {
          ATerm p_14 (ATerm t)
          {
            ATerm u_67 = NULL;
            ATerm v_67 = NULL;
            t = run_time_0(t);
            {
              v_67 = t;
              if(((u_67 != NULL) && (u_67 != v_67)))
                _fail(v_67);
              else
                u_67 = v_67;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, term_v_15, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_48), not_null(u_67)), term_l_48));
              t = printnl_0(t);
            }
            return(t);
          }
          t = if_verbose2_1(t, p_14);
          {
            t = term_z_14;
            t = exit_0(t);
          }
        }
      }
      LocalPopChoice(j_48);
    }
  else
    {
      t = e_48;
      {
        ATerm w_67 = NULL;
        ATerm x_67 = NULL;
        t = run_time_0(t);
        {
          x_67 = t;
          if(((w_67 != NULL) && (w_67 != x_67)))
            _fail(x_67);
          else
            w_67 = x_67;
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_v_15, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_48), not_null(w_67)), term_n_48));
          {
            t = printnl_0(t);
            {
              t = term_l_23;
              t = exit_0(t);
            }
          }
        }
      }
    }
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = sc_0(t);
  return(t);
}
