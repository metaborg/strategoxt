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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  init_constant_terms();
}
ATerm term_y_34;
ATerm term_a_34;
ATerm term_g_33;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_u_32;
ATerm term_p_32;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_j_31;
ATerm term_u_30;
ATerm term_k_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_x_29;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_w_28;
ATerm term_o_28;
ATerm term_k_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_a_28;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_i_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_y_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_w_25;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_a_24;
ATerm term_v_23;
ATerm term_n_23;
ATerm term_k_23;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_l_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_z_19;
ATerm term_u_19;
ATerm term_p_19;
ATerm term_d_19;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_l_18;
ATerm term_l_17;
ATerm term_d_17;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_i_16;
ATerm term_b_16;
ATerm term_z_15;
ATerm term_s_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_j_15;
ATerm term_x_14;
ATerm term_v_14;
ATerm term_r_14;
ATerm term_p_14;
ATerm term_m_14;
ATerm term_f_14;
ATerm term_d_14;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_c_13;
ATerm term_y_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_k_11;
ATerm term_y_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_i_10;
ATerm term_w_9;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_g_8;
ATerm term_b_8;
ATerm term_v_7;
ATerm term_u_7;
void init_constant_terms (void)
{
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("dep", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" \\\n	", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" :", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym__2, term_a_12, term_d_12);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym__2, term_a_12, term_v_13);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("parse error in ", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("*** module ", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("rtree", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("str", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("cr", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" reading ", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("list-cons", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("tuple-cons", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d   Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(sym__2, term_g_8, term_n_23);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep              Don't create dependency file", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep f | -d f       Write dependency to file f", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym__2, term_e_24, term_o_16);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports            Produce a list of imported modules only", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(sym__2, term_d_17, term_z_15);
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym__2, term_t_26, term_o_16);
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(sym__2, term_k_11, term_b_27);
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_27);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(sym__2, term_n_27, term_o_16);
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(sym__2, term_g_28, term_o_16);
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(sym__2, term_p_31, term_q_31);
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(sym__2, term_p_32, term_o_16);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(sym__3, term_p_31, term_q_31, (ATerm) ATempty);
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm separate_by_0 (ATerm);
ATerm add_extension_0 (ATerm);
ATerm create_dep_file_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_to_text_0 (ATerm);
ATerm basename_1 (ATerm, ATerm k_84 (ATerm));
ATerm basename_0 (ATerm);
ATerm at_suffix_rev_1 (ATerm, ATerm x_75 (ATerm));
ATerm get_filename_0 (ATerm);
ATerm map_1 (ATerm, ATerm a_75 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm Imports_1 (ATerm, ATerm d_62 (ATerm));
ATerm flatten_stratego_0 (ATerm);
ATerm _2 (ATerm, ATerm p_55 (ATerm), ATerm q_55 (ATerm));
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm l_77 (ATerm));
ATerm unzip_0 (ATerm);
ATerm get_stratego_imports_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm pass_keep_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm k_95 (ATerm), ATerm l_95 (ATerm));
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_and_wait_1 (ATerm, ATerm q_91 (ATerm));
ATerm call_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm k_88 (ATerm));
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm j_88 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm l_88 (ATerm));
ATerm set_0 (ATerm);
ATerm union_1 (ATerm, ATerm x_80 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm u_91 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm b_95 (ATerm));
ATerm assert_1 (ATerm, ATerm r_85 (ATerm));
ATerm obsolete_1 (ATerm, ATerm f_86 (ATerm));
ATerm open_file_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm x_61 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm d_95 (ATerm), ATerm e_95 (ATerm));
ATerm parse_module_0 (ATerm);
ATerm debug_1 (ATerm, ATerm y_85 (ATerm));
ATerm if_verbose3_1 (ATerm, ATerm i_88 (ATerm));
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm fetch_elem_1 (ATerm, ATerm l_75 (ATerm));
ATerm find_module_1 (ATerm, ATerm i_67 (ATerm));
ATerm get_module_1 (ATerm, ATerm h_67 (ATerm));
ATerm Fst_0 (ATerm);
ATerm GnUndefined_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm b_81 (ATerm), ATerm c_81 (ATerm));
ATerm diff_1 (ATerm, ATerm t_80 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm b_77 (ATerm), ATerm c_77 (ATerm), ATerm d_77 (ATerm), ATerm e_77 (ATerm));
ATerm zip_1 (ATerm, ATerm g_77 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNext_3 (ATerm, ATerm j_96 (ATerm), ATerm k_96 (ATerm), ATerm l_96 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm o_68 (ATerm), ATerm p_68 (ATerm));
ATerm for_3 (ATerm, ATerm r_68 (ATerm), ATerm s_68 (ATerm), ATerm t_68 (ATerm));
ATerm graph_nodes_undef_roots_3 (ATerm, ATerm r_95 (ATerm), ATerm s_95 (ATerm), ATerm t_95 (ATerm));
ATerm graph_nodes_roots_3 (ATerm, ATerm g_96 (ATerm), ATerm h_96 (ATerm), ATerm i_96 (ATerm));
ATerm filter_1 (ATerm, ATerm r_82 (ATerm));
ATerm pack_stratego_modules_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm p_75 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm extend_config_0 (ATerm);
ATerm pack_stratego_options_0 (ATerm);
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm o_85 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm t_67 (ATerm), ATerm u_67 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm n_85 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm r_94 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm s_94 (ATerm));
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm o_81 (ATerm), ATerm p_81 (ATerm));
ATerm crush_2 (ATerm, ATerm m_80 (ATerm), ATerm n_80 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm g_88 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm a_87 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_90 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm j_90 (ATerm));
ATerm Program_1 (ATerm, ATerm o_61 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm z_85 (ATerm));
ATerm Undefined_1 (ATerm, ATerm p_61 (ATerm));
ATerm fetch_1 (ATerm, ATerm j_75 (ATerm));
ATerm option_defined_1 (ATerm, ATerm j_89 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm j_67 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm o_90 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm y_56 (ATerm), ATerm z_56 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm m_90 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm l_90 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm g_87 (ATerm), ATerm h_87 (ATerm), ATerm i_87 (ATerm), ATerm j_87 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm k_87 (ATerm), ATerm l_87 (ATerm));
ATerm xtc_io_wrap_2 (ATerm, ATerm w_94 (ATerm), ATerm x_94 (ATerm));
ATerm xtc_iowrap_2 (ATerm, ATerm z_94 (ATerm), ATerm a_95 (ATerm));
ATerm pack_stratego_0 (ATerm);
ATerm main_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm j_1 = NULL,o_1 = NULL,q_1 = NULL;
  j_1 = t;
  i_1 :
  if(match_cons(j_1, sym__2))
    {
      o_1 = ATgetArgument(j_1, 0);
      q_1 = ATgetArgument(j_1, 1);
      t = SSL_WriteToBinaryFile(not_null(o_1), not_null(q_1));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm z_2 = NULL;
  ATerm f_3 = NULL;
  z_2 = t;
  {
    ATerm g_3 = NULL;
    t = xtc_new_file_0(t);
    {
      g_3 = t;
      {
        if(((f_3 != NULL) && (f_3 != g_3)))
          _fail(g_3);
        else
          f_3 = g_3;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_3), not_null(z_2));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(f_3);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_3));
  }
  return(t);
}
ATerm separate_by_0 (ATerm t)
{
  ATerm n_3 = NULL,o_3 = NULL,p_3 = NULL;
  n_3 = t;
  m_3 :
  if(match_cons(n_3, sym__2))
    {
      o_3 = ATgetArgument(n_3, 0);
      p_3 = ATgetArgument(n_3, 1);
      {
        t = not_null(p_3);
        {
          ATerm v_3 = t;
          int p_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(p_7);
            }
          else
            {
              t = v_3;
              {
                ATerm b_0 (ATerm t)
                {
                  ATerm s_7 = t;
                  int t_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Nil_0(t);
                      LocalPopChoice(t_7);
                    }
                  else
                    {
                      t = s_7;
                      {
                        ATerm s_3 = NULL;
                        t = Cons_2(t, _id, b_0);
                        {
                          ATerm t_3 = NULL;
                          t_3 = t;
                          if(((s_3 != NULL) && (s_3 != t_3)))
                            _fail(t_3);
                          else
                            s_3 = t_3;
                          t = (ATerm) ATinsert(CheckATermList(not_null(s_3)), not_null(o_3));
                        }
                      }
                    }
                  return(t);
                }
                t = Cons_2(t, _id, b_0);
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
ATerm add_extension_0 (ATerm t)
{
  ATerm z_3 = NULL,a_4 = NULL,b_4 = NULL;
  z_3 = t;
  y_3 :
  if(match_cons(z_3, sym__2))
    {
      a_4 = ATgetArgument(z_3, 0);
      b_4 = ATgetArgument(z_3, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(b_4)), term_u_7), not_null(a_4));
        t = concat_strings_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm create_dep_file_0 (ATerm t)
{
  ATerm m_4 = NULL;
  ATerm o_4 = NULL,p_4 = NULL,q_4 = NULL,r_4 = NULL;
  m_4 = t;
  {
    ATerm s_4 = NULL;
    t = term_v_7;
    {
      ATerm t_4 = NULL;
      t = get_config_0(t);
      {
        s_4 = t;
        {
          if(((o_4 != NULL) && (o_4 != s_4)))
            _fail(s_4);
          else
            o_4 = s_4;
          {
            ATerm u_4 = NULL,w_4 = NULL;
            ATerm w_7 = t;
            int x_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_b_8;
                t = get_config_0(t);
                LocalPopChoice(x_7);
              }
            else
              {
                t = w_7;
                {
                  ATerm c_8 = t;
                  if((PushChoice() == 0))
                    {
                      t = term_g_8;
                      t = get_config_0(t);
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = c_8;
                    }
                }
              }
            {
              t_4 = t;
              {
                if(((q_4 != NULL) && (q_4 != t_4)))
                  _fail(t_4);
                else
                  q_4 = t_4;
                {
                  ATerm v_4 = NULL;
                  v_4 = t;
                  if(((u_4 != NULL) && (u_4 != v_4)))
                    _fail(v_4);
                  else
                    u_4 = v_4;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(u_4), term_j_8);
                    {
                      ATerm x_4 = NULL;
                      t = add_extension_0(t);
                      {
                        w_4 = t;
                        {
                          if(((p_4 != NULL) && (p_4 != w_4)))
                            _fail(w_4);
                          else
                            p_4 = w_4;
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(p_4), term_k_8);
                            {
                              ATerm y_4 = NULL;
                              t = open_file_0(t);
                              {
                                x_4 = t;
                                {
                                  if(((r_4 != NULL) && (r_4 != x_4)))
                                    _fail(x_4);
                                  else
                                    r_4 = x_4;
                                  {
                                    ATerm z_4 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, term_l_8, (ATerm) ATinsert(CheckATermList(not_null(m_4)), term_m_8));
                                    {
                                      t = separate_by_0(t);
                                      {
                                        z_4 = t;
                                        if(((y_4 != NULL) && (y_4 != z_4)))
                                          _fail(z_4);
                                        else
                                          y_4 = z_4;
                                      }
                                    }
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(r_4), (ATerm) ATinsert(CheckATermList(not_null(y_4)), not_null(q_4)));
                                      {
                                        t = printnl_0(t);
                                        {
                                          t = not_null(r_4);
                                          t = close_file_0(t);
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
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(p_4));
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm j_5 = NULL,k_5 = NULL,l_5 = NULL;
  j_5 = t;
  i_5 :
  if(match_cons(j_5, sym__2))
    {
      k_5 = ATgetArgument(j_5, 0);
      l_5 = ATgetArgument(j_5, 1);
      t = SSL_WriteToTextFile(not_null(k_5), not_null(l_5));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_text_0 (ATerm t)
{
  ATerm r_5 = NULL;
  ATerm t_5 = NULL;
  r_5 = t;
  {
    ATerm u_5 = NULL;
    t = xtc_new_file_0(t);
    {
      u_5 = t;
      {
        if(((t_5 != NULL) && (t_5 != u_5)))
          _fail(u_5);
        else
          t_5 = u_5;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_5), not_null(r_5));
          {
            t = WriteToTextFile_0(t);
            {
              t = not_null(t_5);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(t_5));
  }
  return(t);
}
ATerm basename_1 (ATerm t, ATerm k_84 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm n_8 = t;
    int p_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_6 (ATerm t)
        {
          ATerm s_8 = t;
          int v_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, b_6);
              LocalPopChoice(v_8);
            }
          else
            {
              t = s_8;
              {
                ATerm w_8 = t;
                int x_8 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm c_0 (ATerm t)
                    {
                      ATerm z_5 = NULL;
                      z_5 = t;
                      x_5 :
                      if(!(match_int(z_5, 47)))
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = Cons_2(t, c_0, _id);
                    LocalPopChoice(x_8);
                  }
                else
                  {
                    t = w_8;
                    {
                      ATerm e_0 (ATerm t)
                      {
                        ATerm a_6 = NULL;
                        a_6 = t;
                        y_5 :
                        if(!(match_int(a_6, 46)))
                          {
                            _fail(t);
                          }
                        return(t);
                      }
                      t = Cons_2(t, e_0, k_84);
                      t = (ATerm) ATempty;
                    }
                  }
              }
            }
          return(t);
        }
        t = b_6(t);
        LocalPopChoice(p_8);
      }
    else
      {
        t = n_8;
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
ATerm at_suffix_rev_1 (ATerm t, ATerm x_75 (ATerm))
{
  ATerm c_6 (ATerm t)
  {
    ATerm y_8 = t;
    int z_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, c_6);
        LocalPopChoice(z_8);
      }
    else
      {
        t = y_8;
        t = x_75(t);
      }
    return(t);
  }
  t = c_6(t);
  return(t);
}
ATerm get_filename_0 (ATerm t)
{
  ATerm g_6 = NULL;
  t = explode_string_0(t);
  {
    ATerm a_9 = t;
    int b_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_0 (ATerm t)
        {
          ATerm h_6 = NULL,i_6 = NULL,j_6 = NULL;
          h_6 = t;
          e_6 :
          if(((ATgetType(h_6) == AT_LIST) && !(ATisEmpty(h_6))))
            {
              i_6 = ATgetFirst((ATermList) h_6);
              j_6 = (ATerm) ATgetNext((ATermList) h_6);
              f_6 :
              if(match_int(i_6, 47))
                {
                  if(((g_6 != NULL) && (g_6 != j_6)))
                    _fail(j_6);
                  else
                    g_6 = j_6;
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
        t = at_suffix_rev_1(t, f_0);
        t = not_null(g_6);
        LocalPopChoice(b_9);
      }
    else
      {
        t = a_9;
        {
        }
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm map_1 (ATerm t, ATerm a_75 (ATerm))
{
  ATerm l_6 (ATerm t)
  {
    ATerm g_9 = t;
    int h_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(h_9);
      }
    else
      {
        t = g_9;
        t = Cons_2(t, a_75, l_6);
      }
    return(t);
  }
  t = l_6(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm n_6 = NULL;
  n_6 = t;
  t = SSL_is_string(not_null(n_6));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm i_9 = t;
  int m_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(m_9);
    }
  else
    {
      t = i_9;
      {
        ATerm o_9 = t;
        int r_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_0 (ATerm t)
            {
              ATerm s_9 = t;
              int t_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(t_9);
                }
              else
                {
                  t = s_9;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, p_0);
            LocalPopChoice(r_9);
          }
        else
          {
            t = o_9;
            {
              ATerm w_6 = NULL,x_6 = NULL,y_6 = NULL;
              w_6 = t;
              v_6 :
              if(match_cons(w_6, sym_Path_1))
                {
                  x_6 = ATgetArgument(w_6, 0);
                  t = not_null(x_6);
                }
              else
                {
                  if(match_cons(w_6, sym_Var_1))
                    {
                      x_6 = ATgetArgument(w_6, 0);
                      {
                        t = not_null(x_6);
                        {
                          ATerm u_9 = t;
                          int v_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(v_9);
                            }
                          else
                            {
                              t = u_9;
                              {
                                ATerm q_0 (ATerm t)
                                {
                                  t = term_w_9;
                                  return(t);
                                }
                                t = debug_1(t, q_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(w_6, sym_Prefix_2))
                        {
                          x_6 = ATgetArgument(w_6, 0);
                          y_6 = ATgetArgument(w_6, 1);
                          {
                            ATerm d_7 = NULL,f_7 = NULL;
                            ATerm h_10;
                            h_10 = t;
                            {
                              ATerm e_7 = NULL;
                              t = not_null(x_6);
                              {
                                t = eval_config_0(t);
                                {
                                  e_7 = t;
                                  if(((d_7 != NULL) && (d_7 != e_7)))
                                    _fail(e_7);
                                  else
                                    d_7 = e_7;
                                }
                              }
                            }
                            t = h_10;
                            {
                              ATerm g_7 = NULL;
                              t = not_null(y_6);
                              {
                                t = eval_config_0(t);
                                {
                                  g_7 = t;
                                  if(((f_7 != NULL) && (f_7 != g_7)))
                                    _fail(g_7);
                                  else
                                    f_7 = g_7;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(d_7), not_null(f_7));
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
  ATerm o_7 = NULL;
  o_7 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_i_10, not_null(o_7));
    {
      t = table_get_0(t);
      {
        ATerm j_10 = t;
        int k_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm l_10;
              l_10 = t;
              {
                ATerm q_7 = NULL;
                ATerm r_7 = NULL;
                r_7 = t;
                if(((q_7 != NULL) && (q_7 != r_7)))
                  _fail(r_7);
                else
                  q_7 = r_7;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_i_10, not_null(o_7), not_null(q_7));
                  t = table_put_0(t);
                }
              }
              t = l_10;
            }
            LocalPopChoice(k_10);
          }
        else
          {
            t = j_10;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm Imports_1 (ATerm t, ATerm d_62 (ATerm))
{
  ATerm z_7 = NULL,a_8 = NULL;
  z_7 = t;
  y_7 :
  if(match_cons(z_7, sym_Imports_1))
    {
      a_8 = ATgetArgument(z_7, 0);
      {
        ATerm d_8 = NULL,f_8 = NULL;
        ATerm e_8 = NULL;
        t = SSLgetAnnotations(not_null(z_7));
        {
          e_8 = t;
          if(((d_8 != NULL) && (d_8 != e_8)))
            _fail(e_8);
          else
            d_8 = e_8;
        }
        {
          t = not_null(a_8);
          {
            ATerm h_8 = NULL;
            t = d_62(t);
            {
              f_8 = t;
              {
                ATerm i_8 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Imports_1, not_null(f_8)), not_null(d_8));
                {
                  i_8 = t;
                  if(((h_8 != NULL) && (h_8 != i_8)))
                    _fail(i_8);
                  else
                    h_8 = i_8;
                }
                t = not_null(h_8);
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
ATerm flatten_stratego_0 (ATerm t)
{
  ATerm t_8 = NULL;
  ATerm r_0 (ATerm t)
  {
    ATerm q_8 = NULL,r_8 = NULL;
    q_8 = t;
    o_8 :
    if(match_cons(q_8, sym_Specification_1))
      {
        r_8 = ATgetArgument(q_8, 0);
        {
          t = not_null(r_8);
          {
            ATerm s_0 (ATerm t)
            {
              ATerm m_10 = t;
              if((PushChoice() == 0))
                {
                  t = Imports_1(t, _id);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = m_10;
                }
              return(t);
            }
            t = filter_1(t, s_0);
          }
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = map_1(t, r_0);
  {
    t = concat_0(t);
    {
      ATerm u_8 = NULL;
      u_8 = t;
      if(((t_8 != NULL) && (t_8 != u_8)))
        _fail(u_8);
      else
        t_8 = u_8;
      t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(t_8));
    }
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm p_55 (ATerm), ATerm q_55 (ATerm))
{
  ATerm d_9 = NULL,e_9 = NULL,f_9 = NULL;
  d_9 = t;
  c_9 :
  if(match_cons(d_9, sym__2))
    {
      e_9 = ATgetArgument(d_9, 0);
      f_9 = ATgetArgument(d_9, 1);
      {
        ATerm j_9 = NULL,l_9 = NULL;
        ATerm k_9 = NULL;
        t = SSLgetAnnotations(not_null(d_9));
        {
          k_9 = t;
          if(((j_9 != NULL) && (j_9 != k_9)))
            _fail(k_9);
          else
            j_9 = k_9;
        }
        {
          t = not_null(e_9);
          {
            ATerm n_9 = NULL;
            t = p_55(t);
            {
              l_9 = t;
              {
                t = not_null(f_9);
                {
                  ATerm p_9 = NULL;
                  t = q_55(t);
                  {
                    n_9 = t;
                    {
                      ATerm q_9 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(l_9), not_null(n_9)), not_null(j_9));
                      {
                        q_9 = t;
                        if(((p_9 != NULL) && (p_9 != q_9)))
                          _fail(q_9);
                        else
                          p_9 = q_9;
                      }
                      t = not_null(p_9);
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
ATerm UnZip2_0 (ATerm t)
{
  ATerm a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL;
  a_10 = t;
  x_9 :
  if(match_cons(a_10, sym__2))
    {
      b_10 = ATgetArgument(a_10, 0);
      e_10 = ATgetArgument(a_10, 1);
      y_9 :
      if(match_cons(b_10, sym__2))
        {
          c_10 = ATgetArgument(b_10, 0);
          d_10 = ATgetArgument(b_10, 1);
          z_9 :
          if(match_cons(e_10, sym__2))
            {
              f_10 = ATgetArgument(e_10, 0);
              g_10 = ATgetArgument(e_10, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(f_10)), not_null(c_10)), (ATerm) ATinsert(CheckATermList(not_null(g_10)), not_null(d_10)));
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
ATerm UnZip3_0 (ATerm t)
{
  ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL;
  o_10 = t;
  n_10 :
  if(((ATgetType(o_10) == AT_LIST) && !(ATisEmpty(o_10))))
    {
      p_10 = ATgetFirst((ATermList) o_10);
      q_10 = (ATerm) ATgetNext((ATermList) o_10);
      t = (ATerm) ATmakeAppl(sym__2, not_null(p_10), not_null(q_10));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm w_10 = NULL;
  w_10 = t;
  v_10 :
  if(((ATgetType(w_10) == AT_LIST) && ATisEmpty(w_10)))
    {
      t = term_r_10;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm l_77 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, l_77);
  return(t);
}
ATerm unzip_0 (ATerm t)
{
  t = unzip_1(t, _id);
  return(t);
}
ATerm get_stratego_imports_0 (ATerm t)
{
  ATerm d_11 = NULL,e_11 = NULL,f_11 = NULL,g_11 = NULL;
  d_11 = t;
  b_11 :
  if(match_cons(d_11, sym__2))
    {
      e_11 = ATgetArgument(d_11, 0);
      f_11 = ATgetArgument(d_11, 1);
      c_11 :
      if(match_cons(f_11, sym_Specification_1))
        {
          g_11 = ATgetArgument(f_11, 0);
          {
            t = not_null(g_11);
            {
              ATerm t_0 (ATerm t)
              {
                ATerm i_11 = NULL,j_11 = NULL;
                i_11 = t;
                a_11 :
                if(match_cons(i_11, sym_Imports_1))
                  {
                    j_11 = ATgetArgument(i_11, 0);
                    t = not_null(j_11);
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = filter_1(t, t_0);
              t = concat_0(t);
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
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm s_11 = NULL,t_11 = NULL;
  s_11 = t;
  r_11 :
  if(match_cons(s_11, sym_stdin_0))
    {
      ATerm u_11 = NULL;
      ATerm v_11 = NULL;
      t = term_s_10;
      {
        t = ReadFromFile_0(t);
        {
          v_11 = t;
          if(((u_11 != NULL) && (u_11 != v_11)))
            _fail(v_11);
          else
            u_11 = v_11;
        }
      }
      t = not_null(u_11);
    }
  else
    {
      if(match_cons(s_11, sym_FILE_1))
        {
          t_11 = ATgetArgument(s_11, 0);
          {
            ATerm x_11 = NULL;
            ATerm y_11 = NULL;
            t = not_null(t_11);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  y_11 = t;
                  if(((x_11 != NULL) && (x_11 != y_11)))
                    _fail(y_11);
                  else
                    x_11 = y_11;
                }
              }
            }
            t = not_null(x_11);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm Snd_0 (ATerm t)
{
  ATerm k_12 = NULL;
  ATerm m_12 = NULL,n_12 = NULL,o_12 = NULL;
  k_12 = t;
  {
    ATerm p_12 = NULL;
    ATerm r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL;
    t = not_null(k_12);
    {
      p_12 = t;
      {
        t = SSL_explode_term(not_null(p_12));
        {
          r_12 = t;
          g_12 :
          if(match_cons(r_12, sym__2))
            {
              s_12 = ATgetArgument(r_12, 0);
              t_12 = ATgetArgument(r_12, 1);
              h_12 :
              if(match_string(s_12, ""))
                {
                  i_12 :
                  if(((ATgetType(t_12) == AT_LIST) && !(ATisEmpty(t_12))))
                    {
                      u_12 = ATgetFirst((ATermList) t_12);
                      v_12 = (ATerm) ATgetNext((ATermList) t_12);
                      j_12 :
                      if(((ATgetType(v_12) == AT_LIST) && !(ATisEmpty(v_12))))
                        {
                          w_12 = ATgetFirst((ATermList) v_12);
                          x_12 = (ATerm) ATgetNext((ATermList) v_12);
                          {
                            if(((m_12 != NULL) && (m_12 != u_12)))
                              _fail(u_12);
                            else
                              m_12 = u_12;
                            {
                              if(((o_12 != NULL) && (o_12 != w_12)))
                                _fail(w_12);
                              else
                                o_12 = w_12;
                              if(((n_12 != NULL) && (n_12 != x_12)))
                                _fail(x_12);
                              else
                                n_12 = x_12;
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
    t = not_null(o_12);
  }
  return(t);
}
ATerm pass_keep_0 (ATerm t)
{
  ATerm d_13 = NULL;
  ATerm e_13 = NULL,g_13 = NULL;
  ATerm f_13 = NULL;
  t = term_t_10;
  {
    ATerm u_10 = t;
    int x_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(x_10);
      }
    else
      {
        t = u_10;
        t = term_y_10;
      }
    {
      f_13 = t;
      if(((e_13 != NULL) && (e_13 != f_13)))
        _fail(f_13);
      else
        e_13 = f_13;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_13), term_y_10);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          g_13 = t;
          if(((d_13 != NULL) && (d_13 != g_13)))
            _fail(g_13);
          else
            d_13 = g_13;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_13)), term_t_10);
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm k_13 = NULL;
  k_13 = t;
  t = SSL_int_to_string(not_null(k_13));
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL;
  p_13 = t;
  o_13 :
  if(match_cons(p_13, sym__2))
    {
      q_13 = ATgetArgument(p_13, 0);
      r_13 = ATgetArgument(p_13, 1);
      {
        ATerm z_10 = t;
        int h_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(q_13), not_null(r_13));
            LocalPopChoice(h_11);
          }
        else
          {
            t = z_10;
            t = SSL_subtr(not_null(q_13), not_null(r_13));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm pass_verbose_0 (ATerm t)
{
  ATerm x_13 = NULL;
  ATerm y_13 = NULL,a_14 = NULL;
  ATerm z_13 = NULL;
  t = term_k_11;
  {
    ATerm l_11 = t;
    int m_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(m_11);
      }
    else
      {
        t = l_11;
        t = term_y_10;
      }
    {
      z_13 = t;
      if(((y_13 != NULL) && (y_13 != z_13)))
        _fail(z_13);
      else
        y_13 = z_13;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_13), term_y_10);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          a_14 = t;
          if(((x_13 != NULL) && (x_13 != a_14)))
            _fail(a_14);
          else
            x_13 = a_14;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_13)), term_k_11);
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm k_95 (ATerm), ATerm l_95 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, k_95, l_95);
    t = read_from_0(t);
  }
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm e_14 = NULL;
  e_14 = t;
  t = SSL_close_file(not_null(e_14));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm j_14 = NULL,k_14 = NULL,l_14 = NULL;
  j_14 = t;
  i_14 :
  if(match_cons(j_14, sym__2))
    {
      k_14 = ATgetArgument(j_14, 0);
      l_14 = ATgetArgument(j_14, 1);
      t = SSL_execvp(not_null(k_14), not_null(l_14));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm q_14 = NULL;
  q_14 = t;
  t = SSL_waitpid(not_null(q_14));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm q_91 (ATerm))
{
  ATerm a_15 = NULL;
  ATerm c_15 = NULL;
  a_15 = t;
  {
    t = fork_0(t);
    {
      c_15 = t;
      {
        ATerm n_11 = t;
        int o_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_15 = NULL;
            e_15 = t;
            w_14 :
            if(match_int(e_15, 0))
              {
                t = not_null(a_15);
                t = q_91(t);
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(o_11);
          }
        else
          {
            t = n_11;
            {
              ATerm f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL;
              t = not_null(c_15);
              {
                t = waitpid_0(t);
                {
                  f_15 = t;
                  y_14 :
                  if(match_cons(f_15, sym_WaitStatus_3))
                    {
                      g_15 = ATgetArgument(f_15, 0);
                      h_15 = ATgetArgument(f_15, 1);
                      i_15 = ATgetArgument(f_15, 2);
                      z_14 :
                      if(match_int(g_15, 0))
                        {
                          t = not_null(a_15);
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
  ATerm p_15 = NULL,q_15 = NULL,r_15 = NULL;
  p_15 = t;
  o_15 :
  if(match_cons(p_15, sym__2))
    {
      q_15 = ATgetArgument(p_15, 0);
      r_15 = ATgetArgument(p_15, 1);
      {
        ATerm u_0 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_15), not_null(r_15));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, u_0);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm w_15 = NULL;
  w_15 = t;
  t = SSL_table_keys(not_null(w_15));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm c_16 = NULL;
  c_16 = t;
  {
    t = table_keys_0(t);
    {
      ATerm v_0 (ATerm t)
      {
        ATerm e_16 = NULL;
        ATerm g_16 = NULL;
        e_16 = t;
        {
          ATerm h_16 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_16), not_null(e_16));
          {
            t = table_get_0(t);
            {
              h_16 = t;
              if(((g_16 != NULL) && (g_16 != h_16)))
                _fail(h_16);
              else
                g_16 = h_16;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_16), not_null(g_16));
        }
        return(t);
      }
      t = map_1(t, v_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm k_88 (ATerm))
{
  ATerm p_11 = t;
  int q_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_11;
      w_11 = t;
      {
        ATerm m_16 = NULL;
        ATerm n_16 = NULL;
        t = term_k_11;
        {
          t = get_config_0(t);
          {
            n_16 = t;
            if(((m_16 != NULL) && (m_16 != n_16)))
              _fail(n_16);
            else
              m_16 = n_16;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_16), term_z_11);
          t = geq_0(t);
        }
      }
      t = w_11;
      t = k_88(t);
      LocalPopChoice(q_11);
    }
  else
    {
      t = p_11;
      {
      }
    }
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm t_16 = NULL;
  ATerm v_16 = NULL,w_16 = NULL;
  t_16 = t;
  {
    ATerm x_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_a_12, (ATerm) ATmakeAppl(sym_Tool_1, not_null(t_16)));
    {
      t = table_get_0(t);
      {
        x_16 = t;
        r_16 :
        if(((ATgetType(x_16) == AT_LIST) && !(ATisEmpty(x_16))))
          {
            y_16 = ATgetFirst((ATermList) x_16);
            b_17 = (ATerm) ATgetNext((ATermList) x_16);
            s_16 :
            if(match_cons(y_16, sym__2))
              {
                z_16 = ATgetArgument(y_16, 0);
                a_17 = ATgetArgument(y_16, 1);
                {
                  if(((v_16 != NULL) && (v_16 != z_16)))
                    _fail(z_16);
                  else
                    v_16 = z_16;
                  if(((w_16 != NULL) && (w_16 != a_17)))
                    _fail(a_17);
                  else
                    w_16 = a_17;
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
    t = not_null(w_16);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL;
  i_17 = t;
  h_17 :
  if(match_cons(i_17, sym__2))
    {
      j_17 = ATgetArgument(i_17, 0);
      k_17 = ATgetArgument(i_17, 1);
      {
        ATerm n_17 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_a_12, (ATerm) ATmakeAppl(sym_Tool_1, not_null(j_17)));
        {
          t = table_get_0(t);
          {
            ATerm w_0 (ATerm t)
            {
              ATerm o_17 = NULL,p_17 = NULL,q_17 = NULL;
              o_17 = t;
              g_17 :
              if(match_cons(o_17, sym__2))
                {
                  p_17 = ATgetArgument(o_17, 0);
                  q_17 = ATgetArgument(o_17, 1);
                  {
                    if(((k_17 != NULL) && (k_17 != p_17)))
                      _fail(p_17);
                    else
                      k_17 = p_17;
                    if(((n_17 != NULL) && (n_17 != q_17)))
                      _fail(q_17);
                    else
                      n_17 = q_17;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, w_0);
          }
        }
        t = not_null(n_17);
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
  ATerm b_12 = t;
  int c_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_12;
      {
        t = table_get_0(t);
        {
          ATerm x_0 (ATerm t)
          {
            t = try_1(t, xtc_read_0);
            return(t);
          }
          t = map_1(t, x_0);
        }
      }
      LocalPopChoice(c_12);
    }
  else
    {
      t = b_12;
      {
      }
    }
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm j_88 (ATerm))
{
  ATerm f_12 = t;
  int l_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_12;
      q_12 = t;
      {
        ATerm u_17 = NULL;
        ATerm v_17 = NULL;
        t = term_k_11;
        {
          t = get_config_0(t);
          {
            v_17 = t;
            if(((u_17 != NULL) && (u_17 != v_17)))
              _fail(v_17);
            else
              u_17 = v_17;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_17), term_y_12);
          t = geq_0(t);
        }
      }
      t = q_12;
      t = j_88(t);
      LocalPopChoice(l_12);
    }
  else
    {
      t = f_12;
      {
      }
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm l_88 (ATerm))
{
  ATerm z_12 = t;
  int a_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_13;
      b_13 = t;
      {
        ATerm y_17 = NULL;
        ATerm z_17 = NULL;
        t = term_k_11;
        {
          t = get_config_0(t);
          {
            z_17 = t;
            if(((y_17 != NULL) && (y_17 != z_17)))
              _fail(z_17);
            else
              y_17 = z_17;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_17), term_c_13);
          t = geq_0(t);
        }
      }
      t = b_13;
      t = l_88(t);
      LocalPopChoice(a_13);
    }
  else
    {
      t = z_12;
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
ATerm union_1 (ATerm t, ATerm x_80 (ATerm))
{
  ATerm d_18 = NULL,e_18 = NULL,f_18 = NULL;
  d_18 = t;
  c_18 :
  if(match_cons(d_18, sym__2))
    {
      e_18 = ATgetArgument(d_18, 0);
      f_18 = ATgetArgument(d_18, 1);
      {
        t = not_null(e_18);
        {
          ATerm j_18 (ATerm t)
          {
            ATerm h_13 = t;
            int i_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(f_18);
                LocalPopChoice(i_13);
              }
            else
              {
                t = h_13;
                {
                  ATerm j_13 = t;
                  int l_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm y_0 (ATerm t)
                      {
                        t = not_null(f_18);
                        return(t);
                      }
                      t = HdMember_p__2(t, x_80, y_0);
                      t = j_18(t);
                      LocalPopChoice(l_13);
                    }
                  else
                    {
                      t = j_13;
                      t = Cons_2(t, _id, j_18);
                    }
                }
              }
            return(t);
          }
          t = j_18(t);
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
  ATerm o_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL;
  o_18 = t;
  n_18 :
  if(match_cons(o_18, sym__3))
    {
      p_18 = ATgetArgument(o_18, 0);
      q_18 = ATgetArgument(o_18, 1);
      r_18 = ATgetArgument(o_18, 2);
      {
        ATerm m_13;
        m_13 = t;
        {
          ATerm v_18 = NULL;
          ATerm w_18 = NULL,y_18 = NULL;
          ATerm x_18 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_18), not_null(q_18));
          {
            ATerm n_13 = t;
            int s_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(s_13);
              }
            else
              {
                t = n_13;
                t = (ATerm) ATempty;
              }
            {
              x_18 = t;
              if(((w_18 != NULL) && (w_18 != x_18)))
                _fail(x_18);
              else
                w_18 = x_18;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(w_18), not_null(r_18));
            {
              t = union_1(t, eq_0);
              {
                y_18 = t;
                if(((v_18 != NULL) && (v_18 != y_18)))
                  _fail(y_18);
                else
                  v_18 = y_18;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(p_18), not_null(q_18), not_null(v_18));
            t = table_put_0(t);
          }
        }
        t = m_13;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm u_91 (ATerm))
{
  ATerm g_19 = NULL,h_19 = NULL,i_19 = NULL;
  g_19 = t;
  f_19 :
  if(match_cons(g_19, sym__2))
    {
      h_19 = ATgetArgument(g_19, 0);
      i_19 = ATgetArgument(g_19, 1);
      {
        t = not_null(i_19);
        {
          ATerm z_0 (ATerm t)
          {
            ATerm l_19 = NULL,m_19 = NULL,n_19 = NULL;
            l_19 = t;
            e_19 :
            if(match_cons(l_19, sym__2))
              {
                m_19 = ATgetArgument(l_19, 0);
                n_19 = ATgetArgument(l_19, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(h_19), not_null(m_19), not_null(n_19));
                  t = u_91(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, z_0);
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
  ATerm t_19 = NULL;
  t_19 = t;
  t = SSL_ReadFromFile(not_null(t_19));
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm y_19 = NULL;
  ATerm a_20 = NULL;
  y_19 = t;
  {
    ATerm t_13 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_12, (ATerm) ATmakeAppl(sym_Imported_1, not_null(y_19)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = t_13;
      }
    {
      ATerm u_13;
      u_13 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_a_12, term_v_13, (ATerm) ATinsert(ATempty, not_null(y_19)));
        t = table_put_0(t);
      }
      t = u_13;
      {
        ATerm a_1 (ATerm t)
        {
          ATerm b_1 (ATerm t)
          {
            t = term_w_13;
            return(t);
          }
          t = debug_1(t, b_1);
          return(t);
        }
        t = if_verbose4_1(t, a_1);
        {
          ATerm b_14 = t;
          int c_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(c_14);
            }
          else
            {
              t = b_14;
              t = (ATerm) ATempty;
            }
          {
            ATerm c_1 (ATerm t)
            {
              ATerm d_1 (ATerm t)
              {
                t = term_d_14;
                return(t);
              }
              t = say_1(t, d_1);
              return(t);
            }
            t = if_verbose6_1(t, c_1);
            {
              ATerm b_20 = NULL;
              b_20 = t;
              if(((a_20 != NULL) && (a_20 != b_20)))
                _fail(b_20);
              else
                a_20 = b_20;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_a_12, not_null(a_20));
                {
                  t = table_putlist_1(t, table_append_0);
                  {
                    ATerm e_1 (ATerm t)
                    {
                      ATerm f_1 (ATerm t)
                      {
                        t = term_f_14;
                        return(t);
                      }
                      t = say_1(t, f_1);
                      return(t);
                    }
                    t = if_verbose6_1(t, e_1);
                    {
                      t = (ATerm) ATmakeAppl(sym__3, term_a_12, (ATerm)ATmakeAppl(sym_Imported_1, not_null(y_19)), (ATerm) ATempty);
                      {
                        t = table_put_0(t);
                        {
                          ATerm g_1 (ATerm t)
                          {
                            ATerm h_1 (ATerm t)
                            {
                              t = term_d_14;
                              return(t);
                            }
                            t = say_1(t, h_1);
                            return(t);
                          }
                          t = if_verbose4_1(t, g_1);
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
  ATerm f_20 = NULL;
  f_20 = t;
  t = SSL_getenv(not_null(f_20));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm g_14 = t;
  int h_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_14;
      t = get_config_0(t);
      LocalPopChoice(h_14);
    }
  else
    {
      t = g_14;
      {
        ATerm n_14 = t;
        int o_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_p_14;
            t = getenv_0(t);
            LocalPopChoice(o_14);
          }
        else
          {
            t = n_14;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm k_1 (ATerm t)
  {
    ATerm l_1 (ATerm t)
    {
      t = term_r_14;
      return(t);
    }
    t = debug_1(t, l_1);
    return(t);
  }
  t = if_verbose5_1(t, k_1);
  {
    ATerm s_14;
    s_14 = t;
    {
      ATerm t_14 = t;
      int u_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_v_14;
          t = table_get_0(t);
          LocalPopChoice(u_14);
        }
      else
        {
          t = t_14;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = s_14;
    {
      ATerm m_1 (ATerm t)
      {
        ATerm n_1 (ATerm t)
        {
          t = term_x_14;
          return(t);
        }
        t = debug_1(t, n_1);
        return(t);
      }
      t = if_verbose5_1(t, m_1);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm b_15 = t;
  int d_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_1 (ATerm t)
      {
        ATerm r_1 (ATerm t)
        {
          t = term_j_15;
          return(t);
        }
        t = debug_1(t, r_1);
        return(t);
      }
      t = if_verbose5_1(t, p_1);
      {
        t = xtc_load_0(t);
        {
          ATerm k_15 = t;
          int l_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(l_15);
            }
          else
            {
              t = k_15;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm s_1 (ATerm t)
            {
              ATerm t_1 (ATerm t)
              {
                t = term_j_15;
                return(t);
              }
              t = debug_1(t, t_1);
              return(t);
            }
            t = if_verbose5_1(t, s_1);
          }
        }
      }
      LocalPopChoice(d_15);
    }
  else
    {
      t = b_15;
      {
        ATerm j_20 = NULL;
        ATerm k_20 = NULL;
        k_20 = t;
        if(((j_20 != NULL) && (j_20 != k_20)))
          _fail(k_20);
        else
          j_20 = k_20;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_15), not_null(j_20)), term_m_15);
          {
            t = error_0(t);
            {
              ATerm u_1 (ATerm t)
              {
                t = term_a_12;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm v_1 (ATerm t)
                    {
                      t = term_s_15;
                      return(t);
                    }
                    t = debug_1(t, v_1);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, u_1);
              _fail(t);
            }
          }
        }
      }
    }
  return(t);
}
ATerm xtc_find_warning_0 (ATerm t)
{
  t = xtc_find_0(t);
  return(t);
}
ATerm xtc_command_1 (ATerm t, ATerm b_95 (ATerm))
{
  ATerm o_20 = NULL;
  ATerm t_15;
  t_15 = t;
  {
    ATerm p_20 = NULL;
    t = b_95(t);
    {
      t = xtc_find_0(t);
      {
        p_20 = t;
        if(((o_20 != NULL) && (o_20 != p_20)))
          _fail(p_20);
        else
          o_20 = p_20;
      }
    }
  }
  t = t_15;
  {
    ATerm u_15;
    u_15 = t;
    {
      ATerm q_20 = NULL;
      ATerm r_20 = NULL;
      r_20 = t;
      if(((q_20 != NULL) && (q_20 != r_20)))
        _fail(r_20);
      else
        q_20 = r_20;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_20), not_null(q_20));
        t = call_0(t);
      }
    }
    t = u_15;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm r_85 (ATerm))
{
  ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL;
  z_20 = t;
  y_20 :
  if(match_cons(z_20, sym__2))
    {
      a_21 = ATgetArgument(z_20, 0);
      b_21 = ATgetArgument(z_20, 1);
      {
        ATerm e_21 = NULL,f_21 = NULL,g_21 = NULL;
        ATerm v_15;
        v_15 = t;
        {
          ATerm h_21 = NULL;
          ATerm i_21 = NULL,j_21 = NULL,k_21 = NULL;
          t = r_85(t);
          {
            h_21 = t;
            {
              if(((e_21 != NULL) && (e_21 != h_21)))
                _fail(h_21);
              else
                e_21 = h_21;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(e_21), not_null(a_21), not_null(b_21));
                {
                  t = table_push_0(t);
                  {
                    ATerm x_15 = t;
                    int y_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(e_21), term_z_15);
                        t = table_get_0(t);
                        LocalPopChoice(y_15);
                      }
                    else
                      {
                        t = x_15;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      i_21 = t;
                      x_20 :
                      if(((ATgetType(i_21) == AT_LIST) && !(ATisEmpty(i_21))))
                        {
                          j_21 = ATgetFirst((ATermList) i_21);
                          k_21 = (ATerm) ATgetNext((ATermList) i_21);
                          {
                            if(((f_21 != NULL) && (f_21 != j_21)))
                              _fail(j_21);
                            else
                              f_21 = j_21;
                            {
                              if(((g_21 != NULL) && (g_21 != k_21)))
                                _fail(k_21);
                              else
                                g_21 = k_21;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(e_21), term_z_15, (ATerm) ATinsert(CheckATermList(not_null(g_21)), (ATerm) ATinsert(CheckATermList(not_null(f_21)), not_null(a_21))));
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
        t = v_15;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm f_86 (ATerm))
{
  ATerm a_16;
  a_16 = t;
  {
    t = f_86(t);
    {
      ATerm w_1 (ATerm t)
      {
        t = term_b_16;
        return(t);
      }
      t = debug_1(t, w_1);
    }
  }
  t = a_16;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm s_21 = NULL,t_21 = NULL;
  ATerm d_16 = t;
  int f_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_21 = NULL,v_21 = NULL,w_21 = NULL;
      u_21 = t;
      p_21 :
      if(match_cons(u_21, sym__2))
        {
          v_21 = ATgetArgument(u_21, 0);
          w_21 = ATgetArgument(u_21, 1);
          {
            if(((t_21 != NULL) && (t_21 != v_21)))
              _fail(v_21);
            else
              t_21 = v_21;
            if(((s_21 != NULL) && (s_21 != w_21)))
              _fail(w_21);
            else
              s_21 = w_21;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(f_16);
      t = SSL_open_file(not_null(t_21), not_null(s_21));
    }
  else
    {
      t = d_16;
      {
        ATerm x_21 = NULL;
        ATerm y_21 = NULL;
        ATerm x_1 (ATerm t)
        {
          t = term_i_16;
          return(t);
        }
        t = obsolete_1(t, x_1);
        {
          x_21 = t;
          {
            if(((t_21 != NULL) && (t_21 != x_21)))
              _fail(x_21);
            else
              t_21 = x_21;
            {
              ATerm j_16;
              j_16 = t;
              {
                ATerm z_21 = NULL;
                t = term_k_8;
                {
                  z_21 = t;
                  if(((y_21 != NULL) && (y_21 != z_21)))
                    _fail(z_21);
                  else
                    y_21 = z_21;
                }
              }
              t = j_16;
              t = SSL_open_file(not_null(t_21), not_null(y_21));
            }
          }
        }
      }
    }
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm k_16 = t;
    int l_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(l_16);
      }
    else
      {
        t = k_16;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
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
  ATerm a_23 = NULL;
  ATerm b_23 = NULL;
  t = term_o_16;
  {
    t = new_0(t);
    {
      b_23 = t;
      if(((a_23 != NULL) && (a_23 != b_23)))
        _fail(b_23);
      else
        a_23 = b_23;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_23), term_p_16);
    {
      t = conc_strings_0(t);
      {
        ATerm q_16 = t;
        int u_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = file_exists_0(t);
            t = new_file_0(t);
            LocalPopChoice(u_16);
          }
        else
          {
            t = q_16;
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
  ATerm f_23 = NULL;
  t = new_file_0(t);
  {
    f_23 = t;
    {
      ATerm c_17;
      c_17 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_23), term_k_8);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(f_23), term_o_16);
            {
              ATerm y_1 (ATerm t)
              {
                t = term_d_17;
                return(t);
              }
              t = assert_1(t, y_1);
            }
          }
        }
      }
      t = c_17;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm p_23 = NULL,q_23 = NULL;
  p_23 = t;
  o_23 :
  if(match_cons(p_23, sym_stdin_0))
    {
      ATerm r_23 = NULL;
      ATerm s_23 = NULL;
      ATerm t_23 = NULL;
      t = xtc_new_file_0(t);
      {
        s_23 = t;
        {
          if(((r_23 != NULL) && (r_23 != s_23)))
            _fail(s_23);
          else
            r_23 = s_23;
          {
            ATerm u_23 = NULL;
            t = o_0(t);
            {
              u_23 = t;
              if(((t_23 != NULL) && (t_23 != u_23)))
                _fail(u_23);
              else
                t_23 = u_23;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(t_23), (ATerm) ATinsert(ATinsert(ATempty, not_null(r_23)), term_v_7));
              {
                ATerm e_17 = t;
                int f_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = conc_two_lists_0(t);
                    LocalPopChoice(f_17);
                  }
                else
                  {
                    t = e_17;
                    t = conc_more_lists_0(t);
                  }
                {
                  t = xtc_command_1(t, n_0);
                  {
                    t = not_null(r_23);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(r_23));
    }
  else
    {
      if(match_cons(p_23, sym_FILE_1))
        {
          q_23 = ATgetArgument(p_23, 0);
          {
            ATerm w_23 = NULL;
            ATerm x_23 = NULL;
            t = not_null(q_23);
            {
              ATerm y_23 = NULL;
              t = xtc_new_file_0(t);
              {
                x_23 = t;
                {
                  if(((w_23 != NULL) && (w_23 != x_23)))
                    _fail(x_23);
                  else
                    w_23 = x_23;
                  {
                    ATerm z_23 = NULL;
                    t = o_0(t);
                    {
                      z_23 = t;
                      if(((y_23 != NULL) && (y_23 != z_23)))
                        _fail(z_23);
                      else
                        y_23 = z_23;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(y_23), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(w_23)), term_v_7), not_null(q_23)), term_l_17));
                      {
                        ATerm m_17 = t;
                        int r_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = conc_two_lists_0(t);
                            LocalPopChoice(r_17);
                          }
                        else
                          {
                            t = m_17;
                            t = conc_more_lists_0(t);
                          }
                        {
                          t = xtc_command_1(t, n_0);
                          {
                            t = not_null(w_23);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(w_23));
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
  ATerm s_24 = NULL;
  s_24 = t;
  r_24 :
  if(match_cons(s_24, sym_stdin_0))
    {
      ATerm u_24 = NULL,w_24 = NULL;
      ATerm s_17;
      s_17 = t;
      {
        ATerm v_24 = NULL;
        t = SSLgetAnnotations(not_null(s_24));
        {
          v_24 = t;
          if(((u_24 != NULL) && (u_24 != v_24)))
            _fail(v_24);
          else
            u_24 = v_24;
        }
      }
      t = s_17;
      {
        ATerm a_25 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(u_24));
        {
          a_25 = t;
          if(((w_24 != NULL) && (w_24 != a_25)))
            _fail(a_25);
          else
            w_24 = a_25;
        }
        t = not_null(w_24);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm x_61 (ATerm))
{
  ATerm k_25 = NULL,l_25 = NULL;
  k_25 = t;
  j_25 :
  if(match_cons(k_25, sym_FILE_1))
    {
      l_25 = ATgetArgument(k_25, 0);
      {
        ATerm o_25 = NULL,q_25 = NULL;
        ATerm p_25 = NULL;
        t = SSLgetAnnotations(not_null(k_25));
        {
          p_25 = t;
          if(((o_25 != NULL) && (o_25 != p_25)))
            _fail(p_25);
          else
            o_25 = p_25;
        }
        {
          t = not_null(l_25);
          {
            ATerm s_25 = NULL;
            t = x_61(t);
            {
              q_25 = t;
              {
                ATerm t_25 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(q_25)), not_null(o_25));
                {
                  t_25 = t;
                  if(((s_25 != NULL) && (s_25 != t_25)))
                    _fail(t_25);
                  else
                    s_25 = t_25;
                }
                t = not_null(s_25);
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
ATerm xtc_transform_2 (ATerm t, ATerm d_95 (ATerm), ATerm e_95 (ATerm))
{
  ATerm t_17 = t;
  int w_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_17 = t;
      int a_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(a_18);
        }
      else
        {
          t = x_17;
          t = stdin_0(t);
        }
      LocalPopChoice(w_17);
      t = xtc_transform_file_2(t, d_95, e_95);
    }
  else
    {
      t = t_17;
      t = xtc_transform_term_2(t, d_95, e_95);
    }
  return(t);
}
ATerm parse_module_0 (ATerm t)
{
  ATerm b_18 = t;
  int g_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_26 = NULL;
      ATerm z_1 (ATerm t)
      {
        ATerm h_18 = t;
        if((PushChoice() == 0))
          {
            ATerm h_26 = NULL;
            h_26 = t;
            y_25 :
            if(!(match_string(h_26, "rtree")))
              {
                _fail(t);
              }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = h_18;
          }
        return(t);
      }
      ATerm a_2 (ATerm t)
      {
        ATerm i_26 = NULL;
        i_26 = t;
        if(((g_26 != NULL) && (g_26 != i_26)))
          _fail(i_26);
        else
          g_26 = i_26;
        return(t);
      }
      t = _2(t, z_1, a_2);
      {
        t = Snd_0(t);
        {
          ATerm i_18 = t;
          int k_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_2 (ATerm t)
              {
                t = term_l_18;
                return(t);
              }
              ATerm c_2 (ATerm t)
              {
                ATerm j_26 = NULL,l_26 = NULL,n_26 = NULL;
                ATerm m_18;
                m_18 = t;
                {
                  ATerm k_26 = NULL;
                  t = pass_verbose_0(t);
                  {
                    k_26 = t;
                    if(((j_26 != NULL) && (j_26 != k_26)))
                      _fail(k_26);
                    else
                      j_26 = k_26;
                  }
                }
                t = m_18;
                {
                  ATerm s_18;
                  s_18 = t;
                  {
                    ATerm m_26 = NULL;
                    t = pass_keep_0(t);
                    {
                      m_26 = t;
                      if(((l_26 != NULL) && (l_26 != m_26)))
                        _fail(m_26);
                      else
                        l_26 = m_26;
                    }
                  }
                  t = s_18;
                  {
                    ATerm o_26 = NULL;
                    t = term_t_18;
                    {
                      t = get_config_0(t);
                      {
                        o_26 = t;
                        if(((n_26 != NULL) && (n_26 != o_26)))
                          _fail(o_26);
                        else
                          n_26 = o_26;
                      }
                    }
                    {
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(n_26)), not_null(l_26)), not_null(j_26));
                      t = concat_0(t);
                    }
                  }
                }
                return(t);
              }
              t = xtc_transform_2(t, b_2, c_2);
              t = read_from_0(t);
              LocalPopChoice(k_18);
            }
          else
            {
              t = i_18;
              {
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_26)), term_u_18);
                t = fatal_error_0(t);
              }
            }
        }
      }
      LocalPopChoice(g_18);
    }
  else
    {
      t = b_18;
      {
        ATerm p_26 = NULL,q_26 = NULL,r_26 = NULL;
        p_26 = t;
        e_26 :
        if(match_cons(p_26, sym__2))
          {
            q_26 = ATgetArgument(p_26, 0);
            r_26 = ATgetArgument(p_26, 1);
            f_26 :
            if(match_string(q_26, "rtree"))
              {
                t = Snd_0(t);
                {
                  ATerm z_18 = t;
                  int a_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = read_from_0(t);
                      LocalPopChoice(a_19);
                    }
                  else
                    {
                      t = z_18;
                      {
                        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_26)), term_u_18);
                        t = fatal_error_0(t);
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
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm y_85 (ATerm))
{
  ATerm b_19;
  b_19 = t;
  {
    ATerm e_27 = NULL,g_27 = NULL;
    ATerm c_19;
    c_19 = t;
    {
      ATerm f_27 = NULL;
      t = y_85(t);
      {
        f_27 = t;
        if(((e_27 != NULL) && (e_27 != f_27)))
          _fail(f_27);
        else
          e_27 = f_27;
      }
    }
    t = c_19;
    {
      ATerm h_27 = NULL;
      h_27 = t;
      if(((g_27 != NULL) && (g_27 != h_27)))
        _fail(h_27);
      else
        g_27 = h_27;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_27)), not_null(e_27)));
        t = printnl_0(t);
      }
    }
  }
  t = b_19;
  return(t);
}
ATerm if_verbose3_1 (ATerm t, ATerm i_88 (ATerm))
{
  ATerm j_19 = t;
  int k_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_19;
      o_19 = t;
      {
        ATerm t_27 = NULL;
        ATerm u_27 = NULL;
        t = term_k_11;
        {
          t = get_config_0(t);
          {
            u_27 = t;
            if(((t_27 != NULL) && (t_27 != u_27)))
              _fail(u_27);
            else
              t_27 = u_27;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_27), term_p_19);
          t = geq_0(t);
        }
      }
      t = o_19;
      t = i_88(t);
      LocalPopChoice(k_19);
    }
  else
    {
      t = j_19;
      {
      }
    }
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm q_19;
  q_19 = t;
  {
    ATerm x_27 = NULL;
    ATerm y_27 = NULL;
    y_27 = t;
    if(((x_27 != NULL) && (x_27 != y_27)))
      _fail(y_27);
    else
      x_27 = y_27;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_d_19, not_null(x_27));
      t = printnl_0(t);
    }
  }
  t = q_19;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm r_19;
  r_19 = t;
  {
    t = error_0(t);
    {
      t = term_y_10;
      t = exit_0(t);
    }
  }
  t = r_19;
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm c_28 = NULL;
  ATerm e_28 = NULL;
  c_28 = t;
  {
    ATerm s_19;
    s_19 = t;
    {
      ATerm f_28 = NULL;
      t = term_u_19;
      {
        f_28 = t;
        if(((e_28 != NULL) && (e_28 != f_28)))
          _fail(f_28);
        else
          e_28 = f_28;
      }
    }
    t = s_19;
    {
      t = SSL_open_file(not_null(c_28), not_null(e_28));
      t = SSL_close_file(not_null(c_28));
    }
  }
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm j_28 = NULL;
  j_28 = t;
  t = SSL_implode_string(not_null(j_28));
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm n_28 = NULL;
  n_28 = t;
  t = SSL_explode_string(not_null(n_28));
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  {
    t = concat_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm fetch_elem_1 (ATerm t, ATerm l_75 (ATerm))
{
  ATerm r_28 = NULL;
  ATerm d_2 (ATerm t)
  {
    ATerm s_28 = NULL;
    t = l_75(t);
    {
      s_28 = t;
      if(((r_28 != NULL) && (r_28 != s_28)))
        _fail(s_28);
      else
        r_28 = s_28;
    }
    return(t);
  }
  t = fetch_1(t, d_2);
  t = not_null(r_28);
  return(t);
}
ATerm find_module_1 (ATerm t, ATerm i_67 (ATerm))
{
  ATerm a_29 = NULL,b_29 = NULL,c_29 = NULL;
  a_29 = t;
  z_28 :
  if(match_cons(a_29, sym__2))
    {
      b_29 = ATgetArgument(a_29, 0);
      c_29 = ATgetArgument(a_29, 1);
      {
        t = i_67(t);
        {
          ATerm v_19 = t;
          int w_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_2 (ATerm t)
              {
                ATerm f_29 = NULL;
                f_29 = t;
                {
                  t = not_null(c_29);
                  {
                    ATerm f_2 (ATerm t)
                    {
                      ATerm h_29 = NULL,j_29 = NULL;
                      ATerm x_19;
                      x_19 = t;
                      {
                        ATerm i_29 = NULL;
                        i_29 = t;
                        if(((h_29 != NULL) && (h_29 != i_29)))
                          _fail(i_29);
                        else
                          h_29 = i_29;
                      }
                      t = x_19;
                      {
                        ATerm k_29 = NULL,m_29 = NULL;
                        ATerm l_29 = NULL;
                        l_29 = t;
                        if(((k_29 != NULL) && (k_29 != l_29)))
                          _fail(l_29);
                        else
                          k_29 = l_29;
                        {
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(k_29)), term_u_7), not_null(b_29)), term_z_19), not_null(f_29));
                          {
                            t = concat_strings_0(t);
                            {
                              t = file_exists_0(t);
                              {
                                m_29 = t;
                                if(((j_29 != NULL) && (j_29 != m_29)))
                                  _fail(m_29);
                                else
                                  j_29 = m_29;
                              }
                            }
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym__2, not_null(h_29), (ATerm) ATmakeAppl(sym_FILE_1, not_null(j_29)));
                      }
                      return(t);
                    }
                    t = fetch_elem_1(t, f_2);
                  }
                }
                return(t);
              }
              t = fetch_elem_1(t, e_2);
              LocalPopChoice(w_19);
            }
          else
            {
              t = v_19;
              {
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_20), not_null(b_29)), term_c_20);
                t = fatal_error_0(t);
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
ATerm get_module_1 (ATerm t, ATerm h_67 (ATerm))
{
  ATerm g_30 = NULL;
  ATerm i_30 = NULL,l_30 = NULL,m_30 = NULL;
  g_30 = t;
  {
    ATerm n_30 = NULL,p_30 = NULL,q_30 = NULL,r_30 = NULL,s_30 = NULL;
    ATerm o_30 = NULL;
    t = not_null(g_30);
    {
      t = basename_1(t, _id);
      {
        o_30 = t;
        if(((n_30 != NULL) && (n_30 != o_30)))
          _fail(o_30);
        else
          n_30 = o_30;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(n_30), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_19), term_h_20), term_g_20), term_e_20));
      {
        t = find_module_1(t, h_67);
        {
          p_30 = t;
          e_30 :
          if(match_cons(p_30, sym__2))
            {
              q_30 = ATgetArgument(p_30, 0);
              r_30 = ATgetArgument(p_30, 1);
              f_30 :
              if(match_cons(r_30, sym_FILE_1))
                {
                  s_30 = ATgetArgument(r_30, 0);
                  {
                    ATerm t_30 = NULL;
                    if(((i_30 != NULL) && (i_30 != q_30)))
                      _fail(q_30);
                    else
                      i_30 = q_30;
                    {
                      if(((l_30 != NULL) && (l_30 != s_30)))
                        _fail(s_30);
                      else
                        l_30 = s_30;
                      {
                        ATerm g_2 (ATerm t)
                        {
                          ATerm i_20;
                          i_20 = t;
                          {
                            t = not_null(l_30);
                            {
                              ATerm h_2 (ATerm t)
                              {
                                t = term_l_20;
                                return(t);
                              }
                              t = debug_1(t, h_2);
                            }
                          }
                          t = i_20;
                          return(t);
                        }
                        t = if_verbose3_1(t, g_2);
                        {
                          t = parse_module_0(t);
                          {
                            t_30 = t;
                            if(((m_30 != NULL) && (m_30 != t_30)))
                              _fail(t_30);
                            else
                              m_30 = t_30;
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
          else
            {
              _fail(t);
            }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(l_30), not_null(m_30));
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm e_31 = NULL;
  ATerm g_31 = NULL,h_31 = NULL;
  e_31 = t;
  {
    ATerm i_31 = NULL;
    ATerm k_31 = NULL,l_31 = NULL,m_31 = NULL,n_31 = NULL,o_31 = NULL;
    t = not_null(e_31);
    {
      i_31 = t;
      {
        t = SSL_explode_term(not_null(i_31));
        {
          k_31 = t;
          b_31 :
          if(match_cons(k_31, sym__2))
            {
              l_31 = ATgetArgument(k_31, 0);
              m_31 = ATgetArgument(k_31, 1);
              c_31 :
              if(match_string(l_31, ""))
                {
                  d_31 :
                  if(((ATgetType(m_31) == AT_LIST) && !(ATisEmpty(m_31))))
                    {
                      n_31 = ATgetFirst((ATermList) m_31);
                      o_31 = (ATerm) ATgetNext((ATermList) m_31);
                      {
                        if(((h_31 != NULL) && (h_31 != n_31)))
                          _fail(n_31);
                        else
                          h_31 = n_31;
                        if(((g_31 != NULL) && (g_31 != o_31)))
                          _fail(o_31);
                        else
                          g_31 = o_31;
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
    t = not_null(h_31);
  }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm v_31 = NULL,w_31 = NULL,x_31 = NULL,d_32 = NULL,e_32 = NULL,f_32 = NULL,g_32 = NULL,h_32 = NULL;
  v_31 = t;
  t_31 :
  if(match_cons(v_31, sym__5))
    {
      w_31 = ATgetArgument(v_31, 0);
      e_32 = ATgetArgument(v_31, 1);
      f_32 = ATgetArgument(v_31, 2);
      g_32 = ATgetArgument(v_31, 3);
      h_32 = ATgetArgument(v_31, 4);
      u_31 :
      if(((ATgetType(w_31) == AT_LIST) && !(ATisEmpty(w_31))))
        {
          x_31 = ATgetFirst((ATermList) w_31);
          d_32 = (ATerm) ATgetNext((ATermList) w_31);
          t = (ATerm) ATmakeAppl(sym__5, not_null(d_32), not_null(e_32), not_null(f_32), not_null(g_32), (ATerm) ATinsert(CheckATermList(not_null(h_32)), not_null(x_31)));
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
ATerm eq_0 (ATerm t)
{
  ATerm r_32 = NULL,s_32 = NULL,t_32 = NULL;
  r_32 = t;
  q_32 :
  if(match_cons(r_32, sym__2))
    {
      s_32 = ATgetArgument(r_32, 0);
      t_32 = ATgetArgument(r_32, 1);
      if(((s_32 != NULL) && (s_32 != t_32)))
        _fail(t_32);
      else
        s_32 = t_32;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm b_81 (ATerm), ATerm c_81 (ATerm))
{
  ATerm z_32 = NULL,a_33 = NULL,b_33 = NULL;
  z_32 = t;
  y_32 :
  if(((ATgetType(z_32) == AT_LIST) && !(ATisEmpty(z_32))))
    {
      a_33 = ATgetFirst((ATermList) z_32);
      b_33 = (ATerm) ATgetNext((ATermList) z_32);
      {
        t = c_81(t);
        {
          ATerm i_2 (ATerm t)
          {
            ATerm e_33 = NULL;
            e_33 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(a_33), not_null(e_33));
              t = b_81(t);
            }
            return(t);
          }
          t = fetch_1(t, i_2);
        }
        t = not_null(b_33);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm t_80 (ATerm))
{
  ATerm k_33 = NULL,l_33 = NULL,m_33 = NULL;
  k_33 = t;
  j_33 :
  if(match_cons(k_33, sym__2))
    {
      l_33 = ATgetArgument(k_33, 0);
      m_33 = ATgetArgument(k_33, 1);
      {
        t = not_null(l_33);
        {
          ATerm q_33 (ATerm t)
          {
            ATerm m_20 = t;
            int n_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(n_20);
              }
            else
              {
                t = m_20;
                {
                  ATerm s_20 = t;
                  int t_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm j_2 (ATerm t)
                      {
                        t = not_null(m_33);
                        return(t);
                      }
                      t = HdMember_p__2(t, t_80, j_2);
                      t = q_33(t);
                      LocalPopChoice(t_20);
                    }
                  else
                    {
                      t = s_20;
                      t = Cons_2(t, _id, q_33);
                    }
                }
              }
            return(t);
          }
          t = q_33(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm u_33 = NULL,v_33 = NULL,w_33 = NULL,x_33 = NULL,y_33 = NULL;
  u_33 = t;
  s_33 :
  if(match_cons(u_33, sym__2))
    {
      v_33 = ATgetArgument(u_33, 0);
      w_33 = ATgetArgument(u_33, 1);
      t_33 :
      if(((ATgetType(w_33) == AT_LIST) && !(ATisEmpty(w_33))))
        {
          x_33 = ATgetFirst((ATermList) w_33);
          y_33 = (ATerm) ATgetNext((ATermList) w_33);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(v_33)), not_null(x_33)), not_null(y_33));
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
ATerm Zip3_0 (ATerm t)
{
  ATerm f_34 = NULL,g_34 = NULL,h_34 = NULL;
  f_34 = t;
  e_34 :
  if(match_cons(f_34, sym__2))
    {
      g_34 = ATgetArgument(f_34, 0);
      h_34 = ATgetArgument(f_34, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(h_34)), not_null(g_34));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm p_34 = NULL,q_34 = NULL,r_34 = NULL,s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL;
  p_34 = t;
  m_34 :
  if(match_cons(p_34, sym__2))
    {
      q_34 = ATgetArgument(p_34, 0);
      t_34 = ATgetArgument(p_34, 1);
      n_34 :
      if(((ATgetType(q_34) == AT_LIST) && !(ATisEmpty(q_34))))
        {
          r_34 = ATgetFirst((ATermList) q_34);
          s_34 = (ATerm) ATgetNext((ATermList) q_34);
          o_34 :
          if(((ATgetType(t_34) == AT_LIST) && !(ATisEmpty(t_34))))
            {
              u_34 = ATgetFirst((ATermList) t_34);
              v_34 = (ATerm) ATgetNext((ATermList) t_34);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(r_34), not_null(u_34)), (ATerm) ATmakeAppl(sym__2, not_null(s_34), not_null(v_34)));
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
ATerm Zip1_0 (ATerm t)
{
  ATerm f_35 = NULL,g_35 = NULL,h_35 = NULL;
  f_35 = t;
  c_35 :
  if(match_cons(f_35, sym__2))
    {
      g_35 = ATgetArgument(f_35, 0);
      h_35 = ATgetArgument(f_35, 1);
      d_35 :
      if(((ATgetType(g_35) == AT_LIST) && ATisEmpty(g_35)))
        {
          e_35 :
          if(((ATgetType(h_35) == AT_LIST) && ATisEmpty(h_35)))
            {
              t = (ATerm) ATempty;
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
ATerm genzip_4 (ATerm t, ATerm b_77 (ATerm), ATerm c_77 (ATerm), ATerm d_77 (ATerm), ATerm e_77 (ATerm))
{
  ATerm j_35 (ATerm t)
  {
    ATerm u_20 = t;
    int v_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_77(t);
        LocalPopChoice(v_20);
      }
    else
      {
        t = u_20;
        {
          t = c_77(t);
          {
            t = _2(t, e_77, j_35);
            t = d_77(t);
          }
        }
      }
    return(t);
  }
  t = j_35(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm g_77 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, g_77);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm x_35 = NULL,y_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL;
  x_35 = t;
  v_35 :
  if(((ATgetType(x_35) == AT_LIST) && !(ATisEmpty(x_35))))
    {
      y_35 = ATgetFirst((ATermList) x_35);
      b_36 = (ATerm) ATgetNext((ATermList) x_35);
      w_35 :
      if(match_cons(y_35, sym__2))
        {
          z_35 = ATgetArgument(y_35, 0);
          a_36 = ATgetArgument(y_35, 1);
          {
            ATerm f_36 = NULL,g_36 = NULL,m_36 = NULL,s_36 = NULL;
            ATerm w_20;
            w_20 = t;
            {
              ATerm h_36 = NULL;
              ATerm j_36 = NULL,k_36 = NULL,l_36 = NULL;
              t = not_null(a_36);
              {
                h_36 = t;
                {
                  t = SSL_explode_term(not_null(h_36));
                  {
                    j_36 = t;
                    n_35 :
                    if(match_cons(j_36, sym__2))
                      {
                        k_36 = ATgetArgument(j_36, 0);
                        l_36 = ATgetArgument(j_36, 1);
                        {
                          if(((f_36 != NULL) && (f_36 != k_36)))
                            _fail(k_36);
                          else
                            f_36 = k_36;
                          if(((g_36 != NULL) && (g_36 != l_36)))
                            _fail(l_36);
                          else
                            g_36 = l_36;
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
            t = w_20;
            {
              ATerm c_21;
              c_21 = t;
              {
                ATerm n_36 = NULL;
                ATerm p_36 = NULL,q_36 = NULL,r_36 = NULL;
                t = not_null(z_35);
                {
                  n_36 = t;
                  {
                    t = SSL_explode_term(not_null(n_36));
                    {
                      p_36 = t;
                      q_35 :
                      if(match_cons(p_36, sym__2))
                        {
                          q_36 = ATgetArgument(p_36, 0);
                          r_36 = ATgetArgument(p_36, 1);
                          {
                            if(((f_36 != NULL) && (f_36 != q_36)))
                              _fail(q_36);
                            else
                              f_36 = q_36;
                            if(((m_36 != NULL) && (m_36 != r_36)))
                              _fail(r_36);
                            else
                              m_36 = r_36;
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
              t = c_21;
              {
                ATerm t_36 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(m_36), not_null(g_36));
                {
                  t = zip_1(t, _id);
                  {
                    t_36 = t;
                    if(((s_36 != NULL) && (s_36 != t_36)))
                      _fail(t_36);
                    else
                      s_36 = t_36;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(s_36), not_null(b_36));
                  {
                    ATerm d_21 = t;
                    int l_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = conc_two_lists_0(t);
                        LocalPopChoice(l_21);
                      }
                    else
                      {
                        t = d_21;
                        t = conc_more_lists_0(t);
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UfIdem_0 (ATerm t)
{
  ATerm g_37 = NULL,h_37 = NULL,i_37 = NULL,j_37 = NULL,k_37 = NULL;
  g_37 = t;
  e_37 :
  if(((ATgetType(g_37) == AT_LIST) && !(ATisEmpty(g_37))))
    {
      h_37 = ATgetFirst((ATermList) g_37);
      k_37 = (ATerm) ATgetNext((ATermList) g_37);
      f_37 :
      if(match_cons(h_37, sym__2))
        {
          i_37 = ATgetArgument(h_37, 0);
          j_37 = ATgetArgument(h_37, 1);
          {
            ATerm m_37 = NULL;
            if(((i_37 != NULL) && (i_37 != j_37)))
              _fail(j_37);
            else
              i_37 = j_37;
            {
              if(((m_37 != NULL) && (m_37 != k_37)))
                _fail(k_37);
              else
                m_37 = k_37;
              t = not_null(m_37);
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
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm m_21 = t;
  int n_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_2 (ATerm t)
      {
        ATerm p_37 = NULL;
        p_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(p_37));
        return(t);
      }
      ATerm l_2 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm m_2 (ATerm t)
      {
        ATerm o_21 = t;
        int q_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_2 (ATerm t)
            {
              ATerm r_21 = t;
              int a_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  LocalPopChoice(a_22);
                }
              else
                {
                  t = r_21;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, n_2);
            LocalPopChoice(q_21);
          }
        else
          {
            t = o_21;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, k_2, l_2, m_2);
      LocalPopChoice(n_21);
    }
  else
    {
      t = m_21;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm GnNext_3 (ATerm t, ATerm j_96 (ATerm), ATerm k_96 (ATerm), ATerm l_96 (ATerm))
{
  ATerm b_38 = NULL,c_38 = NULL,d_38 = NULL,e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL;
  b_38 = t;
  z_37 :
  if(match_cons(b_38, sym__5))
    {
      c_38 = ATgetArgument(b_38, 0);
      f_38 = ATgetArgument(b_38, 1);
      g_38 = ATgetArgument(b_38, 2);
      h_38 = ATgetArgument(b_38, 3);
      i_38 = ATgetArgument(b_38, 4);
      a_38 :
      if(((ATgetType(c_38) == AT_LIST) && !(ATisEmpty(c_38))))
        {
          d_38 = ATgetFirst((ATermList) c_38);
          e_38 = (ATerm) ATgetNext((ATermList) c_38);
          {
            ATerm p_38 = NULL,s_38 = NULL,t_38 = NULL,z_38 = NULL,b_39 = NULL,f_39 = NULL;
            ATerm b_22;
            b_22 = t;
            {
              ATerm u_38 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(d_38), not_null(g_38));
              {
                ATerm v_38 = NULL;
                t = j_96(t);
                {
                  u_38 = t;
                  {
                    if(((p_38 != NULL) && (p_38 != u_38)))
                      _fail(u_38);
                    else
                      p_38 = u_38;
                    {
                      t = not_null(p_38);
                      {
                        ATerm y_38 = NULL;
                        t = k_96(t);
                        {
                          v_38 = t;
                          {
                            if(((s_38 != NULL) && (s_38 != v_38)))
                              _fail(v_38);
                            else
                              s_38 = v_38;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, not_null(s_38), not_null(f_38));
                              {
                                t = diff_0(t);
                                {
                                  y_38 = t;
                                  if(((t_38 != NULL) && (t_38 != y_38)))
                                    _fail(y_38);
                                  else
                                    t_38 = y_38;
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
            t = b_22;
            {
              ATerm c_22;
              c_22 = t;
              {
                ATerm a_39 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(t_38), not_null(e_38));
                {
                  ATerm d_22 = t;
                  int e_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = conc_two_lists_0(t);
                      LocalPopChoice(e_22);
                    }
                  else
                    {
                      t = d_22;
                      t = conc_more_lists_0(t);
                    }
                  {
                    a_39 = t;
                    if(((z_38 != NULL) && (z_38 != a_39)))
                      _fail(a_39);
                    else
                      z_38 = a_39;
                  }
                }
              }
              t = c_22;
              {
                ATerm f_22;
                f_22 = t;
                {
                  ATerm e_39 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(t_38), not_null(f_38));
                  {
                    ATerm g_22 = t;
                    int h_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = conc_two_lists_0(t);
                        LocalPopChoice(h_22);
                      }
                    else
                      {
                        t = g_22;
                        t = conc_more_lists_0(t);
                      }
                    {
                      e_39 = t;
                      if(((b_39 != NULL) && (b_39 != e_39)))
                        _fail(e_39);
                      else
                        b_39 = e_39;
                    }
                  }
                }
                t = f_22;
                {
                  ATerm g_39 = NULL;
                  t = (ATerm) ATmakeAppl(sym__3, not_null(d_38), not_null(p_38), not_null(h_38));
                  {
                    t = l_96(t);
                    {
                      g_39 = t;
                      if(((f_39 != NULL) && (f_39 != g_39)))
                        _fail(g_39);
                      else
                        f_39 = g_39;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__5, not_null(z_38), not_null(b_39), not_null(g_38), not_null(f_39), not_null(i_38));
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
  return(t);
}
ATerm GnExit_0 (ATerm t)
{
  ATerm r_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL,y_39 = NULL;
  r_39 = t;
  p_39 :
  if(match_cons(r_39, sym__5))
    {
      s_39 = ATgetArgument(r_39, 0);
      t_39 = ATgetArgument(r_39, 1);
      u_39 = ATgetArgument(r_39, 2);
      v_39 = ATgetArgument(r_39, 3);
      y_39 = ATgetArgument(r_39, 4);
      q_39 :
      if(((ATgetType(s_39) == AT_LIST) && ATisEmpty(s_39)))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_39), not_null(y_39));
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
ATerm GnInitRoots_0 (ATerm t)
{
  ATerm r_40 = NULL,s_40 = NULL,t_40 = NULL,u_40 = NULL;
  r_40 = t;
  q_40 :
  if(match_cons(r_40, sym__3))
    {
      s_40 = ATgetArgument(r_40, 0);
      t_40 = ATgetArgument(r_40, 1);
      u_40 = ATgetArgument(r_40, 2);
      t = (ATerm) ATmakeAppl(sym__5, not_null(s_40), not_null(s_40), not_null(t_40), not_null(u_40), (ATerm) ATempty);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm o_68 (ATerm), ATerm p_68 (ATerm))
{
  ATerm z_40 (ATerm t)
  {
    ATerm i_22 = t;
    int j_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_68(t);
        LocalPopChoice(j_22);
      }
    else
      {
        t = i_22;
        {
          t = p_68(t);
          t = z_40(t);
        }
      }
    return(t);
  }
  t = z_40(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm r_68 (ATerm), ATerm s_68 (ATerm), ATerm t_68 (ATerm))
{
  t = r_68(t);
  t = while_not_2(t, s_68, t_68);
  return(t);
}
ATerm graph_nodes_undef_roots_3 (ATerm t, ATerm r_95 (ATerm), ATerm s_95 (ATerm), ATerm t_95 (ATerm))
{
  ATerm o_2 (ATerm t)
  {
    ATerm k_22 = t;
    int l_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3(t, r_95, s_95, t_95);
        LocalPopChoice(l_22);
      }
    else
      {
        t = k_22;
        t = GnUndefined_0(t);
      }
    return(t);
  }
  t = for_3(t, GnInitRoots_0, GnExit_0, o_2);
  return(t);
}
ATerm graph_nodes_roots_3 (ATerm t, ATerm g_96 (ATerm), ATerm h_96 (ATerm), ATerm i_96 (ATerm))
{
  ATerm g_41 = NULL,h_41 = NULL,k_41 = NULL;
  t = graph_nodes_undef_roots_3(t, g_96, h_96, i_96);
  {
    g_41 = t;
    f_41 :
    if(match_cons(g_41, sym__2))
      {
        h_41 = ATgetArgument(g_41, 0);
        k_41 = ATgetArgument(g_41, 1);
        t = not_null(h_41);
      }
    else
      {
        _fail(t);
      }
  }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm r_82 (ATerm))
{
  ATerm m_22 = t;
  int n_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(n_22);
    }
  else
    {
      t = m_22;
      {
        ATerm o_22 = t;
        int p_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_2 (ATerm t)
            {
              t = filter_1(t, r_82);
              return(t);
            }
            t = Cons_2(t, r_82, p_2);
            LocalPopChoice(p_22);
          }
        else
          {
            t = o_22;
            {
              ATerm w_41 = NULL,x_41 = NULL,y_41 = NULL;
              w_41 = t;
              v_41 :
              if(((ATgetType(w_41) == AT_LIST) && !(ATisEmpty(w_41))))
                {
                  x_41 = ATgetFirst((ATermList) w_41);
                  y_41 = (ATerm) ATgetNext((ATermList) w_41);
                  {
                    t = not_null(y_41);
                    t = filter_1(t, r_82);
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
  return(t);
}
ATerm pack_stratego_modules_0 (ATerm t)
{
  ATerm h_42 = NULL,i_42 = NULL;
  h_42 = t;
  g_42 :
  if(match_cons(h_42, sym_FILE_1))
    {
      i_42 = ATgetArgument(h_42, 0);
      {
        ATerm k_42 = NULL;
        ATerm m_42 = NULL;
        ATerm q_22 = t;
        int r_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_t_18;
            {
              t = get_config_0(t);
              {
                ATerm q_2 (ATerm t)
                {
                  ATerm s_22 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm l_42 = NULL;
                      l_42 = t;
                      c_42 :
                      if(!(match_string(l_42, "-I")))
                        {
                          _fail(t);
                        }
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = s_22;
                    }
                  return(t);
                }
                t = filter_1(t, q_2);
              }
            }
            LocalPopChoice(r_22);
          }
        else
          {
            t = q_22;
            t = (ATerm) ATempty;
          }
        {
          m_42 = t;
          if(((k_42 != NULL) && (k_42 != m_42)))
            _fail(m_42);
          else
            k_42 = m_42;
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, not_null(i_42)), term_u_22), term_t_22), term_o_16, (ATerm) ATempty);
          {
            ATerm r_2 (ATerm t)
            {
              t = Fst_0(t);
              {
                ATerm t_2 (ATerm t)
                {
                  t = (ATerm) ATinsert(CheckATermList(not_null(k_42)), term_u_7);
                  return(t);
                }
                t = get_module_1(t, t_2);
              }
              return(t);
            }
            ATerm s_2 (ATerm t)
            {
              ATerm n_42 = NULL,o_42 = NULL,p_42 = NULL,q_42 = NULL;
              n_42 = t;
              f_42 :
              if(match_cons(n_42, sym__3))
                {
                  o_42 = ATgetArgument(n_42, 0);
                  p_42 = ATgetArgument(n_42, 1);
                  q_42 = ATgetArgument(n_42, 2);
                  t = (ATerm) ATinsert(CheckATermList(not_null(q_42)), not_null(p_42));
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = graph_nodes_roots_3(t, r_2, get_stratego_imports_0, s_2);
            {
              t = unzip_1(t, _id);
              t = _2(t, _id, flatten_stratego_0);
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
ATerm concat_0 (ATerm t)
{
  ATerm v_22 = t;
  int w_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(w_22);
    }
  else
    {
      t = v_22;
      {
        ATerm z_42 = NULL,a_43 = NULL,b_43 = NULL;
        z_42 = t;
        y_42 :
        if(((ATgetType(z_42) == AT_LIST) && !(ATisEmpty(z_42))))
          {
            a_43 = ATgetFirst((ATermList) z_42);
            b_43 = (ATerm) ATgetNext((ATermList) z_42);
            {
              t = not_null(a_43);
              {
                ATerm u_2 (ATerm t)
                {
                  t = not_null(b_43);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, u_2);
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
  ATerm l_43 = NULL;
  ATerm n_43 = NULL;
  l_43 = t;
  {
    ATerm o_43 = NULL;
    ATerm q_43 = NULL,r_43 = NULL,s_43 = NULL;
    t = not_null(l_43);
    {
      o_43 = t;
      {
        t = SSL_explode_term(not_null(o_43));
        {
          q_43 = t;
          j_43 :
          if(match_cons(q_43, sym__2))
            {
              r_43 = ATgetArgument(q_43, 0);
              s_43 = ATgetArgument(q_43, 1);
              k_43 :
              if(match_string(r_43, ""))
                {
                  if(((n_43 != NULL) && (n_43 != s_43)))
                    _fail(s_43);
                  else
                    n_43 = s_43;
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
      t = not_null(n_43);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm p_75 (ATerm))
{
  ATerm y_43 (ATerm t)
  {
    ATerm x_22 = t;
    int y_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, y_43);
        LocalPopChoice(y_22);
      }
    else
      {
        t = x_22;
        {
          t = Nil_0(t);
          t = p_75(t);
        }
      }
    return(t);
  }
  t = y_43(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm d_44 = NULL,e_44 = NULL,f_44 = NULL;
  d_44 = t;
  c_44 :
  if(match_cons(d_44, sym__2))
    {
      e_44 = ATgetArgument(d_44, 0);
      f_44 = ATgetArgument(d_44, 1);
      {
        t = not_null(e_44);
        {
          ATerm v_2 (ATerm t)
          {
            t = not_null(f_44);
            return(t);
          }
          t = at_end_1(t, v_2);
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
  ATerm z_22 = t;
  int c_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(c_23);
    }
  else
    {
      t = z_22;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm extend_config_0 (ATerm t)
{
  ATerm o_44 = NULL,p_44 = NULL,r_44 = NULL;
  o_44 = t;
  n_44 :
  if(match_cons(o_44, sym__2))
    {
      p_44 = ATgetArgument(o_44, 0);
      r_44 = ATgetArgument(o_44, 1);
      {
        ATerm z_44 = NULL;
        ATerm a_45 = NULL,c_45 = NULL;
        ATerm b_45 = NULL;
        t = not_null(p_44);
        {
          ATerm d_23 = t;
          int e_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(e_23);
            }
          else
            {
              t = d_23;
              t = (ATerm) ATempty;
            }
          {
            b_45 = t;
            if(((a_45 != NULL) && (a_45 != b_45)))
              _fail(b_45);
            else
              a_45 = b_45;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_44), not_null(a_45));
          {
            ATerm g_23 = t;
            int h_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(h_23);
              }
            else
              {
                t = g_23;
                t = conc_more_lists_0(t);
              }
            {
              c_45 = t;
              if(((z_44 != NULL) && (z_44 != c_45)))
                _fail(c_45);
              else
                z_44 = c_45;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_i_10, not_null(p_44), not_null(z_44));
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
ATerm pack_stratego_options_0 (ATerm t)
{
  ATerm i_23 = t;
  int j_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_2 (ATerm t)
      {
        ATerm q_45 = NULL;
        q_45 = t;
        k_45 :
        if(!(match_string(q_45, "-I")))
          {
            if(!(match_string(q_45, "--Include")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm x_2 (ATerm t)
      {
        ATerm r_45 = NULL;
        ATerm s_45 = NULL;
        s_45 = t;
        if(((r_45 != NULL) && (r_45 != s_45)))
          _fail(s_45);
        else
          r_45 = s_45;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_t_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_45)), term_t_18));
          t = extend_config_0(t);
        }
        t = term_o_16;
        return(t);
      }
      ATerm y_2 (ATerm t)
      {
        t = term_k_23;
        return(t);
      }
      t = ArgOption_3(t, w_2, x_2, y_2);
      LocalPopChoice(j_23);
    }
  else
    {
      t = i_23;
      {
        ATerm l_23 = t;
        int m_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_3 (ATerm t)
            {
              ATerm t_45 = NULL;
              t_45 = t;
              m_45 :
              if(!(match_string(t_45, "--nodep")))
                {
                  if(!(match_string(t_45, "-nodep")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm b_3 (ATerm t)
            {
              t = term_v_23;
              t = set_config_0(t);
              t = term_o_16;
              return(t);
            }
            ATerm c_3 (ATerm t)
            {
              t = term_a_24;
              return(t);
            }
            t = Option_3(t, a_3, b_3, c_3);
            LocalPopChoice(m_23);
          }
        else
          {
            t = l_23;
            {
              ATerm b_24 = t;
              int c_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_3 (ATerm t)
                  {
                    ATerm u_45 = NULL;
                    u_45 = t;
                    n_45 :
                    if(!(match_string(u_45, "--dep")))
                      {
                        if(!(match_string(u_45, "-d")))
                          {
                            if(!(match_string(u_45, "-dep")))
                              {
                                _fail(t);
                              }
                          }
                      }
                    return(t);
                  }
                  ATerm e_3 (ATerm t)
                  {
                    ATerm v_45 = NULL;
                    ATerm w_45 = NULL;
                    w_45 = t;
                    if(((v_45 != NULL) && (v_45 != w_45)))
                      _fail(w_45);
                    else
                      v_45 = w_45;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_b_8, not_null(v_45));
                      t = set_config_0(t);
                    }
                    t = term_o_16;
                    return(t);
                  }
                  ATerm h_3 (ATerm t)
                  {
                    t = term_d_24;
                    return(t);
                  }
                  t = ArgOption_3(t, d_3, e_3, h_3);
                  LocalPopChoice(c_24);
                }
              else
                {
                  t = b_24;
                  {
                    ATerm i_3 (ATerm t)
                    {
                      ATerm x_45 = NULL;
                      x_45 = t;
                      p_45 :
                      if(!(match_string(x_45, "--imports")))
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    ATerm j_3 (ATerm t)
                    {
                      t = term_f_24;
                      t = set_config_0(t);
                      t = term_o_16;
                      return(t);
                    }
                    ATerm k_3 (ATerm t)
                    {
                      t = term_g_24;
                      return(t);
                    }
                    t = Option_3(t, i_3, j_3, k_3);
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm c_46 = NULL,e_46 = NULL,f_46 = NULL;
  c_46 = t;
  b_46 :
  if(match_cons(c_46, sym__2))
    {
      e_46 = ATgetArgument(c_46, 0);
      f_46 = ATgetArgument(c_46, 1);
      t = SSL_copy(not_null(e_46), not_null(f_46));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm s_46 = NULL;
  s_46 = t;
  r_46 :
  if(match_cons(s_46, sym_stderr_0))
    {
      ATerm w_46 = NULL,y_46 = NULL;
      ATerm h_24;
      h_24 = t;
      {
        ATerm x_46 = NULL;
        t = SSLgetAnnotations(not_null(s_46));
        {
          x_46 = t;
          if(((w_46 != NULL) && (w_46 != x_46)))
            _fail(x_46);
          else
            w_46 = x_46;
        }
      }
      t = h_24;
      {
        ATerm z_46 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(w_46));
        {
          z_46 = t;
          if(((y_46 != NULL) && (y_46 != z_46)))
            _fail(z_46);
          else
            y_46 = z_46;
        }
        t = not_null(y_46);
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
  ATerm m_47 = NULL;
  m_47 = t;
  l_47 :
  if(match_cons(m_47, sym_stdout_0))
    {
      ATerm o_47 = NULL,q_47 = NULL;
      ATerm i_24;
      i_24 = t;
      {
        ATerm p_47 = NULL;
        t = SSLgetAnnotations(not_null(m_47));
        {
          p_47 = t;
          if(((o_47 != NULL) && (o_47 != p_47)))
            _fail(p_47);
          else
            o_47 = p_47;
        }
      }
      t = i_24;
      {
        ATerm r_47 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(o_47));
        {
          r_47 = t;
          if(((q_47 != NULL) && (q_47 != r_47)))
            _fail(r_47);
          else
            q_47 = r_47;
        }
        t = not_null(q_47);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_to_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm m_48 = NULL,u_48 = NULL;
  m_48 = t;
  l_48 :
  if(match_cons(m_48, sym_FILE_1))
    {
      u_48 = ATgetArgument(m_48, 0);
      {
        ATerm j_24 = t;
        int k_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_48 = NULL;
            ATerm y_48 = NULL;
            t = m_0(t);
            {
              y_48 = t;
              {
                if(((x_48 != NULL) && (x_48 != y_48)))
                  _fail(y_48);
                else
                  x_48 = y_48;
                {
                  ATerm l_24 = t;
                  int m_24 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(m_24);
                    }
                  else
                    {
                      t = l_24;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(u_48), not_null(x_48));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(u_48));
            LocalPopChoice(k_24);
          }
        else
          {
            t = j_24;
            {
              ATerm n_24 = t;
              int o_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_49 = NULL;
                  ATerm b_49 = NULL;
                  t = m_0(t);
                  {
                    b_49 = t;
                    {
                      if(((a_49 != NULL) && (a_49 != b_49)))
                        _fail(b_49);
                      else
                        a_49 = b_49;
                      {
                        ATerm p_24 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm q_24 = t;
                            int t_24 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                LocalPopChoice(t_24);
                              }
                            else
                              {
                                t = q_24;
                                {
                                  ATerm x_24 = t;
                                  int y_24 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      LocalPopChoice(y_24);
                                    }
                                  else
                                    {
                                      t = x_24;
                                      {
                                        ATerm c_49 = NULL;
                                        c_49 = t;
                                        if(((u_48 != NULL) && (u_48 != c_49)))
                                          _fail(c_49);
                                        else
                                          u_48 = c_49;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = p_24;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(u_48), not_null(a_49));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(u_48));
                  LocalPopChoice(o_24);
                }
              else
                {
                  t = n_24;
                  {
                    ATerm e_49 = NULL;
                    t = m_0(t);
                    {
                      e_49 = t;
                      if(((u_48 != NULL) && (u_48 != e_49)))
                        _fail(e_49);
                      else
                        u_48 = e_49;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(u_48));
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
ATerm Tl_0 (ATerm t)
{
  ATerm o_49 = NULL,p_49 = NULL,q_49 = NULL;
  o_49 = t;
  n_49 :
  if(((ATgetType(o_49) == AT_LIST) && !(ATisEmpty(o_49))))
    {
      p_49 = ATgetFirst((ATermList) o_49);
      q_49 = (ATerm) ATgetNext((ATermList) o_49);
      t = not_null(q_49);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm w_49 = NULL,x_49 = NULL,y_49 = NULL;
  w_49 = t;
  v_49 :
  if(match_cons(w_49, sym__2))
    {
      x_49 = ATgetArgument(w_49, 0);
      y_49 = ATgetArgument(w_49, 1);
      {
        ATerm z_24;
        z_24 = t;
        {
          ATerm b_50 = NULL;
          ATerm c_50 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_49), not_null(y_49));
          {
            ATerm b_25 = t;
            int c_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(c_25);
              }
            else
              {
                t = b_25;
                t = (ATerm) ATempty;
              }
            {
              c_50 = t;
              if(((b_50 != NULL) && (b_50 != c_50)))
                _fail(c_50);
              else
                b_50 = c_50;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(x_49), not_null(y_49), not_null(b_50));
            t = table_put_0(t);
          }
        }
        t = z_24;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm o_85 (ATerm))
{
  ATerm j_50 = NULL,k_50 = NULL,l_50 = NULL;
  ATerm d_25;
  d_25 = t;
  {
    ATerm m_50 = NULL;
    ATerm n_50 = NULL,o_50 = NULL,p_50 = NULL;
    t = o_85(t);
    {
      m_50 = t;
      {
        if(((l_50 != NULL) && (l_50 != m_50)))
          _fail(m_50);
        else
          l_50 = m_50;
        {
          ATerm e_25 = t;
          int f_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(l_50), term_z_15);
              t = table_get_0(t);
              LocalPopChoice(f_25);
            }
          else
            {
              t = e_25;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            n_50 = t;
            i_50 :
            if(((ATgetType(n_50) == AT_LIST) && !(ATisEmpty(n_50))))
              {
                o_50 = ATgetFirst((ATermList) n_50);
                p_50 = (ATerm) ATgetNext((ATermList) n_50);
                {
                  if(((k_50 != NULL) && (k_50 != o_50)))
                    _fail(o_50);
                  else
                    k_50 = o_50;
                  {
                    if(((j_50 != NULL) && (j_50 != p_50)))
                      _fail(p_50);
                    else
                      j_50 = p_50;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(l_50), term_z_15, not_null(j_50));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(k_50);
                          {
                            ATerm l_3 (ATerm t)
                            {
                              ATerm q_50 = NULL;
                              q_50 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(l_50), not_null(q_50));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, l_3);
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
  t = d_25;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm w_50 = NULL;
  w_50 = t;
  t = SSL_remove(not_null(w_50));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm t_67 (ATerm), ATerm u_67 (ATerm))
{
  ATerm g_25 = t;
  int h_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_67(t);
      t = u_67(t);
      LocalPopChoice(h_25);
    }
  else
    {
      t = g_25;
      {
        t = u_67(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm n_85 (ATerm))
{
  ATerm b_51 = NULL;
  ATerm i_25;
  i_25 = t;
  {
    ATerm c_51 = NULL;
    ATerm d_51 = NULL;
    t = n_85(t);
    {
      c_51 = t;
      {
        if(((b_51 != NULL) && (b_51 != c_51)))
          _fail(c_51);
        else
          b_51 = c_51;
        {
          ATerm o_51 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_51), term_z_15);
          {
            ATerm m_25 = t;
            int n_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(n_25);
              }
            else
              {
                t = m_25;
                t = (ATerm) ATempty;
              }
            {
              o_51 = t;
              if(((d_51 != NULL) && (d_51 != o_51)))
                _fail(o_51);
              else
                d_51 = o_51;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(b_51), term_z_15, (ATerm) ATinsert(CheckATermList(not_null(d_51)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = i_25;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm r_94 (ATerm))
{
  ATerm u_51 = NULL,v_51 = NULL;
  ATerm q_3 (ATerm t)
  {
    t = term_d_17;
    return(t);
  }
  t = begin_scope_1(t, q_3);
  {
    ATerm r_3 (ATerm t)
    {
      ATerm r_25;
      r_25 = t;
      {
        ATerm w_51 = NULL,j_52 = NULL,k_52 = NULL;
        ATerm u_25 = t;
        int v_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_w_25;
            t = table_get_0(t);
            LocalPopChoice(v_25);
          }
        else
          {
            t = u_25;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          w_51 = t;
          t_51 :
          if(((ATgetType(w_51) == AT_LIST) && !(ATisEmpty(w_51))))
            {
              j_52 = ATgetFirst((ATermList) w_51);
              k_52 = (ATerm) ATgetNext((ATermList) w_51);
              {
                if(((v_51 != NULL) && (v_51 != j_52)))
                  _fail(j_52);
                else
                  v_51 = j_52;
                {
                  if(((u_51 != NULL) && (u_51 != k_52)))
                    _fail(k_52);
                  else
                    u_51 = k_52;
                  {
                    t = not_null(v_51);
                    {
                      ATerm u_3 (ATerm t)
                      {
                        ATerm x_25 = t;
                        int z_25 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = remove_file_0(t);
                            LocalPopChoice(z_25);
                          }
                        else
                          {
                            t = x_25;
                            {
                            }
                          }
                        return(t);
                      }
                      t = map_1(t, u_3);
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
      t = r_25;
      {
        ATerm w_3 (ATerm t)
        {
          t = term_d_17;
          return(t);
        }
        t = end_scope_1(t, w_3);
      }
      return(t);
    }
    t = restore_always_2(t, r_94, r_3);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm s_94 (ATerm))
{
  ATerm x_3 (ATerm t)
  {
    ATerm a_26 = t;
    int b_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_52 = NULL;
        ATerm r_52 = NULL;
        t = term_l_17;
        {
          t = get_config_0(t);
          {
            r_52 = t;
            if(((q_52 != NULL) && (q_52 != r_52)))
              _fail(r_52);
            else
              q_52 = r_52;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_52));
        LocalPopChoice(b_26);
      }
    else
      {
        t = a_26;
        t = term_s_10;
      }
    {
      t = s_94(t);
      {
        ATerm c_4 (ATerm t)
        {
          ATerm c_26 = t;
          int d_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_v_7;
              t = get_config_0(t);
              LocalPopChoice(d_26);
            }
          else
            {
              t = c_26;
              t = term_s_26;
            }
          return(t);
        }
        t = copy_to_1(t, c_4);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, x_3);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm d_4 (ATerm t)
  {
    ATerm v_52 = NULL;
    v_52 = t;
    u_52 :
    if(!(match_string(v_52, "-v")))
      {
        if(!(match_string(v_52, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm e_4 (ATerm t)
  {
    t = term_u_26;
    t = set_config_0(t);
    t = term_v_26;
    return(t);
  }
  ATerm f_4 (ATerm t)
  {
    t = term_w_26;
    return(t);
  }
  t = Option_3(t, d_4, e_4, f_4);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm g_4 (ATerm t)
  {
    ATerm h_53 = NULL;
    h_53 = t;
    z_52 :
    if(!(match_string(h_53, "-k")))
      {
        if(!(match_string(h_53, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm h_4 (ATerm t)
  {
    ATerm x_26;
    x_26 = t;
    {
      ATerm i_53 = NULL;
      ATerm j_53 = NULL;
      t = string_to_int_0(t);
      {
        j_53 = t;
        if(((i_53 != NULL) && (i_53 != j_53)))
          _fail(j_53);
        else
          i_53 = j_53;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_10, not_null(i_53));
        t = set_config_0(t);
      }
    }
    t = x_26;
    return(t);
  }
  ATerm i_4 (ATerm t)
  {
    t = term_y_26;
    return(t);
  }
  t = ArgOption_3(t, g_4, h_4, i_4);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm m_53 = NULL;
  m_53 = t;
  t = SSL_string_to_int(not_null(m_53));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm z_26 = t;
  int a_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_4 (ATerm t)
      {
        ATerm i_54 = NULL;
        i_54 = t;
        r_53 :
        if(!(match_string(i_54, "-S")))
          {
            if(!(match_string(i_54, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm k_4 (ATerm t)
      {
        t = term_c_27;
        t = set_config_0(t);
        t = term_d_27;
        return(t);
      }
      ATerm l_4 (ATerm t)
      {
        t = term_i_27;
        return(t);
      }
      t = Option_3(t, j_4, k_4, l_4);
      LocalPopChoice(a_27);
    }
  else
    {
      t = z_26;
      {
        ATerm j_27 = t;
        int k_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_4 (ATerm t)
            {
              ATerm j_54 = NULL;
              j_54 = t;
              e_54 :
              if(!(match_string(j_54, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm a_5 (ATerm t)
            {
              ATerm m_54 = NULL;
              ATerm l_27;
              l_27 = t;
              {
                ATerm k_54 = NULL;
                ATerm l_54 = NULL;
                t = string_to_int_0(t);
                {
                  l_54 = t;
                  if(((k_54 != NULL) && (k_54 != l_54)))
                    _fail(l_54);
                  else
                    k_54 = l_54;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_k_11, not_null(k_54));
                  t = set_config_0(t);
                }
              }
              t = l_27;
              {
                ATerm n_54 = NULL;
                n_54 = t;
                if(((m_54 != NULL) && (m_54 != n_54)))
                  _fail(n_54);
                else
                  m_54 = n_54;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(m_54));
              }
              return(t);
            }
            ATerm b_5 (ATerm t)
            {
              t = term_m_27;
              return(t);
            }
            t = ArgOption_3(t, n_4, a_5, b_5);
            LocalPopChoice(k_27);
          }
        else
          {
            t = j_27;
            {
              ATerm c_5 (ATerm t)
              {
                ATerm y_54 = NULL;
                y_54 = t;
                h_54 :
                if(!(match_string(y_54, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm d_5 (ATerm t)
              {
                t = term_o_27;
                t = set_config_0(t);
                t = term_p_27;
                return(t);
              }
              ATerm e_5 (ATerm t)
              {
                t = term_q_27;
                return(t);
              }
              t = Option_3(t, c_5, d_5, e_5);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm r_27 = t;
  int s_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(s_27);
    }
  else
    {
      t = r_27;
      {
        ATerm v_27 = t;
        int w_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(w_27);
          }
        else
          {
            t = v_27;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm f_5 (ATerm t)
  {
    ATerm i_55 = NULL;
    i_55 = t;
    d_55 :
    if(!(match_string(i_55, "-o")))
      {
        if(!(match_string(i_55, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm g_5 (ATerm t)
  {
    ATerm s_55 = NULL;
    ATerm z_27;
    z_27 = t;
    {
      ATerm o_55 = NULL;
      ATerm r_55 = NULL;
      r_55 = t;
      if(((o_55 != NULL) && (o_55 != r_55)))
        _fail(r_55);
      else
        o_55 = r_55;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_7, not_null(o_55));
        t = set_config_0(t);
      }
    }
    t = z_27;
    {
      ATerm t_55 = NULL;
      t_55 = t;
      if(((s_55 != NULL) && (s_55 != t_55)))
        _fail(t_55);
      else
        s_55 = t_55;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(s_55));
    }
    return(t);
  }
  ATerm h_5 (ATerm t)
  {
    t = term_a_28;
    return(t);
  }
  t = ArgOption_3(t, f_5, g_5, h_5);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm b_28 = t;
  int d_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(d_28);
    }
  else
    {
      t = b_28;
      {
        ATerm m_5 (ATerm t)
        {
          ATerm x_55 = NULL;
          x_55 = t;
          w_55 :
          if(!(match_string(x_55, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm n_5 (ATerm t)
        {
          t = term_h_28;
          t = set_config_0(t);
          t = term_i_28;
          return(t);
        }
        ATerm o_5 (ATerm t)
        {
          t = term_k_28;
          return(t);
        }
        t = Option_3(t, m_5, n_5, o_5);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm d_56 = NULL,e_56 = NULL,f_56 = NULL,g_56 = NULL,h_56 = NULL;
  d_56 = t;
  b_56 :
  if(match_string(d_56, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(d_56) == AT_LIST) && !(ATisEmpty(d_56))))
        {
          e_56 = ATgetFirst((ATermList) d_56);
          f_56 = (ATerm) ATgetNext((ATermList) d_56);
          c_56 :
          if(((ATgetType(f_56) == AT_LIST) && !(ATisEmpty(f_56))))
            {
              g_56 = ATgetFirst((ATermList) f_56);
              h_56 = (ATerm) ATgetNext((ATermList) f_56);
              {
                ATerm l_56 = NULL;
                ATerm l_28;
                l_28 = t;
                {
                  t = not_null(e_56);
                  t = j_0(t);
                }
                t = l_28;
                {
                  ATerm m_56 = NULL;
                  t = not_null(g_56);
                  {
                    t = k_0(t);
                    {
                      m_56 = t;
                      if(((l_56 != NULL) && (l_56 != m_56)))
                        _fail(m_56);
                      else
                        l_56 = m_56;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(h_56)), not_null(l_56));
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
ATerm input_option_0 (ATerm t)
{
  ATerm p_5 (ATerm t)
  {
    ATerm t_56 = NULL;
    t_56 = t;
    q_56 :
    if(!(match_string(t_56, "-i")))
      {
        if(!(match_string(t_56, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm q_5 (ATerm t)
  {
    ATerm w_56 = NULL;
    ATerm m_28;
    m_28 = t;
    {
      ATerm u_56 = NULL;
      ATerm v_56 = NULL;
      v_56 = t;
      if(((u_56 != NULL) && (u_56 != v_56)))
        _fail(v_56);
      else
        u_56 = v_56;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_17, not_null(u_56));
        t = set_config_0(t);
      }
    }
    t = m_28;
    {
      ATerm x_56 = NULL;
      x_56 = t;
      if(((w_56 != NULL) && (w_56 != x_56)))
        _fail(x_56);
      else
        w_56 = x_56;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(w_56));
    }
    return(t);
  }
  ATerm s_5 (ATerm t)
  {
    t = term_o_28;
    return(t);
  }
  t = ArgOption_3(t, p_5, q_5, s_5);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm p_28 = t;
  int q_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(q_28);
    }
  else
    {
      t = p_28;
      {
        ATerm t_28 = t;
        int u_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(u_28);
          }
        else
          {
            t = t_28;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm e_57 = NULL;
  ATerm v_28;
  v_28 = t;
  {
    ATerm v_5 (ATerm t)
    {
      ATerm f_57 = NULL,g_57 = NULL;
      f_57 = t;
      d_57 :
      if(match_cons(f_57, sym_Program_1))
        {
          g_57 = ATgetArgument(f_57, 0);
          if(((e_57 != NULL) && (e_57 != g_57)))
            _fail(g_57);
          else
            e_57 = g_57;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, v_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_d_19, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_28), not_null(e_57)), term_w_28));
      {
        t = printnl_0(t);
        {
          t = term_y_10;
          t = exit_0(t);
        }
      }
    }
  }
  t = v_28;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_d_19, (ATerm) ATinsert(ATempty, term_y_28));
  {
    t = printnl_0(t);
    {
      t = term_y_10;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm j_57 = NULL;
  j_57 = t;
  t = SSL_TicksToSeconds(not_null(j_57));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm o_57 = NULL,p_57 = NULL,q_57 = NULL;
  o_57 = t;
  n_57 :
  if(match_cons(o_57, sym__2))
    {
      p_57 = ATgetArgument(o_57, 0);
      q_57 = ATgetArgument(o_57, 1);
      {
        ATerm d_29 = t;
        int e_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(p_57), not_null(q_57));
            LocalPopChoice(e_29);
          }
        else
          {
            t = d_29;
            t = SSL_addr(not_null(p_57), not_null(q_57));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm o_81 (ATerm), ATerm p_81 (ATerm))
{
  ATerm g_29 = t;
  int n_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = o_81(t);
      LocalPopChoice(n_29);
    }
  else
    {
      t = g_29;
      {
        ATerm x_57 = NULL,y_57 = NULL,z_57 = NULL;
        x_57 = t;
        w_57 :
        if(((ATgetType(x_57) == AT_LIST) && !(ATisEmpty(x_57))))
          {
            y_57 = ATgetFirst((ATermList) x_57);
            z_57 = (ATerm) ATgetNext((ATermList) x_57);
            {
              ATerm c_58 = NULL;
              ATerm d_58 = NULL;
              t = not_null(z_57);
              {
                t = foldr_2(t, o_81, p_81);
                {
                  d_58 = t;
                  if(((c_58 != NULL) && (c_58 != d_58)))
                    _fail(d_58);
                  else
                    c_58 = d_58;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(y_57), not_null(c_58));
                t = p_81(t);
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
ATerm crush_2 (ATerm t, ATerm m_80 (ATerm), ATerm n_80 (ATerm))
{
  ATerm k_58 = NULL;
  ATerm m_58 = NULL;
  k_58 = t;
  {
    ATerm n_58 = NULL;
    ATerm p_58 = NULL,q_58 = NULL,r_58 = NULL;
    t = not_null(k_58);
    {
      n_58 = t;
      {
        t = SSL_explode_term(not_null(n_58));
        {
          p_58 = t;
          j_58 :
          if(match_cons(p_58, sym__2))
            {
              q_58 = ATgetArgument(p_58, 0);
              r_58 = ATgetArgument(p_58, 1);
              if(((m_58 != NULL) && (m_58 != r_58)))
                _fail(r_58);
              else
                m_58 = r_58;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(m_58);
      t = foldr_2(t, m_80, n_80);
    }
  }
  return(t);
}
ATerm times_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0 (ATerm t)
{
  t = times_0(t);
  {
    ATerm w_5 (ATerm t)
    {
      t = term_b_27;
      return(t);
    }
    t = crush_2(t, w_5, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm x_58 = NULL,y_58 = NULL,z_58 = NULL;
  x_58 = t;
  w_58 :
  if(match_cons(x_58, sym__2))
    {
      y_58 = ATgetArgument(x_58, 0);
      z_58 = ATgetArgument(x_58, 1);
      {
        ATerm o_29;
        o_29 = t;
        {
          ATerm p_29 = t;
          int q_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(y_58), not_null(z_58));
              LocalPopChoice(q_29);
            }
          else
            {
              t = p_29;
              t = SSL_gtr(not_null(y_58), not_null(z_58));
            }
        }
        t = o_29;
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
  ATerm f_59 = NULL;
  ATerm r_29 = t;
  int s_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_59 = NULL,h_59 = NULL,i_59 = NULL;
      g_59 = t;
      e_59 :
      if(match_cons(g_59, sym__2))
        {
          h_59 = ATgetArgument(g_59, 0);
          i_59 = ATgetArgument(g_59, 1);
          {
            if(((f_59 != NULL) && (f_59 != h_59)))
              _fail(h_59);
            else
              f_59 = h_59;
            if(((f_59 != NULL) && (f_59 != i_59)))
              _fail(i_59);
            else
              f_59 = i_59;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(s_29);
    }
  else
    {
      t = r_29;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm g_88 (ATerm))
{
  ATerm t_29 = t;
  int u_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_29;
      v_29 = t;
      {
        ATerm l_59 = NULL;
        ATerm m_59 = NULL;
        t = term_k_11;
        {
          t = get_config_0(t);
          {
            m_59 = t;
            if(((l_59 != NULL) && (l_59 != m_59)))
              _fail(m_59);
            else
              l_59 = m_59;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_59), term_y_10);
          t = geq_0(t);
        }
      }
      t = v_29;
      t = g_88(t);
      LocalPopChoice(u_29);
    }
  else
    {
      t = t_29;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm d_6 (ATerm t)
  {
    ATerm q_59 = NULL,s_59 = NULL;
    ATerm w_29;
    w_29 = t;
    {
      ATerm r_59 = NULL;
      t = run_time_0(t);
      {
        r_59 = t;
        if(((q_59 != NULL) && (q_59 != r_59)))
          _fail(r_59);
        else
          q_59 = r_59;
      }
    }
    t = w_29;
    {
      ATerm t_59 = NULL;
      t = term_x_29;
      {
        t = get_config_0(t);
        {
          t_59 = t;
          if(((s_59 != NULL) && (s_59 != t_59)))
            _fail(t_59);
          else
            s_59 = t_59;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_29), not_null(q_59)), term_y_29), not_null(s_59)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, d_6);
  {
    t = term_b_27;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm a_60 = NULL;
  a_60 = t;
  z_59 :
  if(match_cons(a_60, sym_Version_0))
    {
      ATerm c_60 = NULL,e_60 = NULL;
      ATerm a_30;
      a_30 = t;
      {
        ATerm d_60 = NULL;
        t = SSLgetAnnotations(not_null(a_60));
        {
          d_60 = t;
          if(((c_60 != NULL) && (c_60 != d_60)))
            _fail(d_60);
          else
            c_60 = d_60;
        }
      }
      t = a_30;
      {
        ATerm f_60 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(c_60));
        {
          f_60 = t;
          if(((e_60 != NULL) && (e_60 != f_60)))
            _fail(f_60);
          else
            e_60 = f_60;
        }
        t = not_null(e_60);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm a_87 (ATerm))
{
  ATerm k_6 (ATerm t)
  {
    ATerm b_30 = t;
    int c_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(c_30);
      }
    else
      {
        t = b_30;
        {
          ATerm d_30 = t;
          int h_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(h_30);
            }
          else
            {
              t = d_30;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, k_6);
  t = a_87(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm k_60 = NULL;
  k_60 = t;
  t = SSL_table_create(not_null(k_60));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm o_60 = NULL;
  o_60 = t;
  {
    ATerm j_30;
    j_30 = t;
    {
      t = term_k_30;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_k_30, term_u_30, not_null(o_60));
          t = table_put_0(t);
        }
      }
    }
    t = j_30;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm s_60 = NULL;
  s_60 = t;
  t = SSL_table_destroy(not_null(s_60));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm w_60 = NULL;
  w_60 = t;
  t = SSL_exit(not_null(w_60));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm a_61 = NULL,b_61 = NULL,c_61 = NULL;
  a_61 = t;
  z_60 :
  if(((ATgetType(a_61) == AT_LIST) && ATisEmpty(a_61)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(a_61) == AT_LIST) && !(ATisEmpty(a_61))))
        {
          b_61 = ATgetFirst((ATermList) a_61);
          c_61 = (ATerm) ATgetNext((ATermList) a_61);
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
  ATerm v_30;
  v_30 = t;
  {
    ATerm f_61 = NULL;
    ATerm i_61 = NULL;
    ATerm w_30 = t;
    int x_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(x_30);
      }
    else
      {
        t = w_30;
        {
          ATerm g_61 = NULL;
          ATerm h_61 = NULL;
          h_61 = t;
          if(((g_61 != NULL) && (g_61 != h_61)))
            _fail(h_61);
          else
            g_61 = h_61;
          t = (ATerm) ATinsert(ATempty, not_null(g_61));
        }
      }
    {
      i_61 = t;
      if(((f_61 != NULL) && (f_61 != i_61)))
        _fail(i_61);
      else
        f_61 = i_61;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_s_26, not_null(f_61));
      t = printnl_0(t);
    }
  }
  t = v_30;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_90 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm t_61 = NULL,u_61 = NULL,v_61 = NULL;
  v_61 = t;
  s_61 :
  if(((ATgetType(v_61) == AT_LIST) && !(ATisEmpty(v_61))))
    {
      t_61 = ATgetFirst((ATermList) v_61);
      u_61 = (ATerm) ATgetNext((ATermList) v_61);
      {
        ATerm z_61 = NULL;
        t = not_null(u_61);
        {
          ATerm y_30;
          y_30 = t;
          {
            ATerm a_62 = NULL,c_62 = NULL,f_62 = NULL;
            ATerm z_30;
            z_30 = t;
            {
              ATerm b_62 = NULL;
              t = i_0(t);
              {
                b_62 = t;
                if(((a_62 != NULL) && (a_62 != b_62)))
                  _fail(b_62);
                else
                  a_62 = b_62;
              }
            }
            t = z_30;
            {
              ATerm e_62 = NULL;
              t = not_null(t_61);
              {
                t = h_0(t);
                {
                  e_62 = t;
                  if(((c_62 != NULL) && (c_62 != e_62)))
                    _fail(e_62);
                  else
                    c_62 = e_62;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(a_62)), not_null(c_62));
                {
                  f_62 = t;
                  if(((z_61 != NULL) && (z_61 != f_62)))
                    _fail(f_62);
                  else
                    z_61 = f_62;
                }
              }
            }
          }
          t = y_30;
          {
            ATerm m_6 (ATerm t)
            {
              t = not_null(z_61);
              return(t);
            }
            t = reverse_acc_2(t, h_0, m_6);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(v_61) == AT_LIST) && ATisEmpty(v_61)))
        {
          {
            t = term_o_16;
            t = i_0(t);
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
  ATerm o_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, o_6);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm j_90 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm o_61 (ATerm))
{
  ATerm q_62 = NULL,r_62 = NULL;
  q_62 = t;
  p_62 :
  if(match_cons(q_62, sym_Program_1))
    {
      r_62 = ATgetArgument(q_62, 0);
      {
        ATerm u_62 = NULL,w_62 = NULL;
        ATerm v_62 = NULL;
        t = SSLgetAnnotations(not_null(q_62));
        {
          v_62 = t;
          if(((u_62 != NULL) && (u_62 != v_62)))
            _fail(v_62);
          else
            u_62 = v_62;
        }
        {
          t = not_null(r_62);
          {
            ATerm y_62 = NULL;
            t = o_61(t);
            {
              w_62 = t;
              {
                ATerm z_62 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(w_62)), not_null(u_62));
                {
                  z_62 = t;
                  if(((y_62 != NULL) && (y_62 != z_62)))
                    _fail(z_62);
                  else
                    y_62 = z_62;
                }
                t = not_null(y_62);
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
  ATerm h_63 = NULL;
  ATerm a_31 = t;
  int f_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_63 = NULL;
      t = term_x_29;
      {
        t = get_config_0(t);
        {
          i_63 = t;
          if(((h_63 != NULL) && (h_63 != i_63)))
            _fail(i_63);
          else
            h_63 = i_63;
        }
      }
      LocalPopChoice(f_31);
    }
  else
    {
      t = a_31;
      {
        ATerm p_6 (ATerm t)
        {
          ATerm q_6 (ATerm t)
          {
            ATerm j_63 = NULL;
            j_63 = t;
            if(((h_63 != NULL) && (h_63 != j_63)))
              _fail(j_63);
            else
              h_63 = j_63;
            return(t);
          }
          t = Program_1(t, q_6);
          return(t);
        }
        t = fetch_1(t, p_6);
      }
    }
  {
    t = term_j_31;
    {
      t = echo_0(t);
      {
        t = term_r_31;
        {
          t = table_get_0(t);
          {
            ATerm r_6 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, r_6);
            {
              ATerm s_6 (ATerm t)
              {
                ATerm k_63 = NULL;
                ATerm l_63 = NULL;
                l_63 = t;
                if(((k_63 != NULL) && (k_63 != l_63)))
                  _fail(l_63);
                else
                  k_63 = l_63;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_63)), term_s_31);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, s_6);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm r_63 = NULL,s_63 = NULL,t_63 = NULL;
  r_63 = t;
  q_63 :
  if(match_cons(r_63, sym__2))
    {
      s_63 = ATgetArgument(r_63, 0);
      t_63 = ATgetArgument(r_63, 1);
      {
        ATerm y_31;
        y_31 = t;
        t = SSL_printnl(not_null(s_63), not_null(t_63));
        t = y_31;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm z_31;
  z_31 = t;
  {
    ATerm y_63 = NULL;
    ATerm z_63 = NULL;
    z_63 = t;
    if(((y_63 != NULL) && (y_63 != z_63)))
      _fail(z_63);
    else
      y_63 = z_63;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_d_19, (ATerm) ATinsert(ATempty, not_null(y_63)));
      t = printnl_0(t);
    }
  }
  t = z_31;
  return(t);
}
ATerm say_1 (ATerm t, ATerm z_85 (ATerm))
{
  ATerm a_32;
  a_32 = t;
  {
    t = z_85(t);
    t = debug_0(t);
  }
  t = a_32;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm p_61 (ATerm))
{
  ATerm g_64 = NULL,h_64 = NULL;
  g_64 = t;
  f_64 :
  if(match_cons(g_64, sym_Undefined_1))
    {
      h_64 = ATgetArgument(g_64, 0);
      {
        ATerm k_64 = NULL,m_64 = NULL;
        ATerm l_64 = NULL;
        t = SSLgetAnnotations(not_null(g_64));
        {
          l_64 = t;
          if(((k_64 != NULL) && (k_64 != l_64)))
            _fail(l_64);
          else
            k_64 = l_64;
        }
        {
          t = not_null(h_64);
          {
            ATerm o_64 = NULL;
            t = p_61(t);
            {
              m_64 = t;
              {
                ATerm p_64 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(m_64)), not_null(k_64));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm j_75 (ATerm))
{
  ATerm u_64 (ATerm t)
  {
    ATerm b_32 = t;
    int c_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, j_75, _id);
        LocalPopChoice(c_32);
      }
    else
      {
        t = b_32;
        t = Cons_2(t, _id, u_64);
      }
    return(t);
  }
  t = u_64(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm j_89 (ATerm))
{
  t = fetch_1(t, j_89);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm z_64 = NULL;
  z_64 = t;
  y_64 :
  if(match_cons(z_64, sym_Help_0))
    {
      ATerm b_65 = NULL,d_65 = NULL;
      ATerm i_32;
      i_32 = t;
      {
        ATerm c_65 = NULL;
        t = SSLgetAnnotations(not_null(z_64));
        {
          c_65 = t;
          if(((b_65 != NULL) && (b_65 != c_65)))
            _fail(c_65);
          else
            b_65 = c_65;
        }
      }
      t = i_32;
      {
        ATerm e_65 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(b_65));
        {
          e_65 = t;
          if(((d_65 != NULL) && (d_65 != e_65)))
            _fail(e_65);
          else
            d_65 = e_65;
        }
        t = not_null(d_65);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm j_67 (ATerm))
{
  ATerm j_32 = t;
  int k_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_67(t);
      LocalPopChoice(k_32);
    }
  else
    {
      t = j_32;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm k_65 = NULL,l_65 = NULL,m_65 = NULL;
  k_65 = t;
  j_65 :
  if(match_cons(k_65, sym__2))
    {
      l_65 = ATgetArgument(k_65, 0);
      m_65 = ATgetArgument(k_65, 1);
      t = SSL_table_get(not_null(l_65), not_null(m_65));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm t_65 = NULL,u_65 = NULL,v_65 = NULL,w_65 = NULL;
  t_65 = t;
  s_65 :
  if(match_cons(t_65, sym__3))
    {
      u_65 = ATgetArgument(t_65, 0);
      v_65 = ATgetArgument(t_65, 1);
      w_65 = ATgetArgument(t_65, 2);
      {
        ATerm l_32;
        l_32 = t;
        {
          ATerm a_66 = NULL;
          ATerm b_66 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_65), not_null(v_65));
          {
            ATerm m_32 = t;
            int n_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(n_32);
              }
            else
              {
                t = m_32;
                t = (ATerm) ATempty;
              }
            {
              b_66 = t;
              if(((a_66 != NULL) && (a_66 != b_66)))
                _fail(b_66);
              else
                a_66 = b_66;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(u_65), not_null(v_65), (ATerm) ATinsert(CheckATermList(not_null(a_66)), not_null(w_65)));
            t = table_put_0(t);
          }
        }
        t = l_32;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm o_90 (ATerm))
{
  ATerm f_66 = NULL;
  ATerm g_66 = NULL;
  t = term_o_16;
  {
    t = o_90(t);
    {
      g_66 = t;
      if(((f_66 != NULL) && (f_66 != g_66)))
        _fail(g_66);
      else
        f_66 = g_66;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_p_31, term_q_31, not_null(f_66));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm m_66 = NULL,n_66 = NULL,o_66 = NULL;
  m_66 = t;
  l_66 :
  if(match_string(m_66, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(m_66) == AT_LIST) && !(ATisEmpty(m_66))))
        {
          n_66 = ATgetFirst((ATermList) m_66);
          o_66 = (ATerm) ATgetNext((ATermList) m_66);
          {
            ATerm r_66 = NULL;
            ATerm o_32;
            o_32 = t;
            {
              t = not_null(n_66);
              t = a_0(t);
            }
            t = o_32;
            {
              ATerm s_66 = NULL;
              t = term_o_16;
              {
                t = d_0(t);
                {
                  s_66 = t;
                  if(((r_66 != NULL) && (r_66 != s_66)))
                    _fail(s_66);
                  else
                    r_66 = s_66;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(o_66)), not_null(r_66));
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
  ATerm t_6 (ATerm t)
  {
    ATerm x_66 = NULL;
    x_66 = t;
    w_66 :
    if(!(match_string(x_66, "--help")))
      {
        if(!(match_string(x_66, "-h")))
          {
            if(!(match_string(x_66, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm u_6 (ATerm t)
  {
    t = term_u_32;
    {
      t = set_config_0(t);
      t = term_v_32;
    }
    return(t);
  }
  ATerm z_6 (ATerm t)
  {
    t = term_w_32;
    return(t);
  }
  t = Option_3(t, t_6, u_6, z_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm a_67 = NULL,b_67 = NULL,c_67 = NULL;
  a_67 = t;
  z_66 :
  if(((ATgetType(a_67) == AT_LIST) && !(ATisEmpty(a_67))))
    {
      b_67 = ATgetFirst((ATermList) a_67);
      c_67 = (ATerm) ATgetNext((ATermList) a_67);
      t = (ATerm) ATinsert(CheckATermList(not_null(c_67)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(b_67)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm y_56 (ATerm), ATerm z_56 (ATerm))
{
  ATerm p_67 = NULL,q_67 = NULL,r_67 = NULL;
  p_67 = t;
  o_67 :
  if(((ATgetType(p_67) == AT_LIST) && !(ATisEmpty(p_67))))
    {
      q_67 = ATgetFirst((ATermList) p_67);
      r_67 = (ATerm) ATgetNext((ATermList) p_67);
      {
        ATerm x_67 = NULL,z_67 = NULL;
        ATerm y_67 = NULL;
        t = SSLgetAnnotations(not_null(p_67));
        {
          y_67 = t;
          if(((x_67 != NULL) && (x_67 != y_67)))
            _fail(y_67);
          else
            x_67 = y_67;
        }
        {
          t = not_null(q_67);
          {
            ATerm b_68 = NULL;
            t = y_56(t);
            {
              z_67 = t;
              {
                t = not_null(r_67);
                {
                  ATerm d_68 = NULL;
                  t = z_56(t);
                  {
                    b_68 = t;
                    {
                      ATerm e_68 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(b_68)), not_null(z_67)), not_null(x_67));
                      {
                        e_68 = t;
                        if(((d_68 != NULL) && (d_68 != e_68)))
                          _fail(e_68);
                        else
                          d_68 = e_68;
                      }
                      t = not_null(d_68);
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
ATerm Nil_0 (ATerm t)
{
  ATerm u_68 = NULL;
  u_68 = t;
  n_68 :
  if(((ATgetType(u_68) == AT_LIST) && ATisEmpty(u_68)))
    {
      {
        ATerm w_68 = NULL,y_68 = NULL;
        ATerm x_32;
        x_32 = t;
        {
          ATerm x_68 = NULL;
          t = SSLgetAnnotations(not_null(u_68));
          {
            x_68 = t;
            if(((w_68 != NULL) && (w_68 != x_68)))
              _fail(x_68);
            else
              w_68 = x_68;
          }
        }
        t = x_32;
        {
          ATerm z_68 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(w_68));
          {
            z_68 = t;
            if(((y_68 != NULL) && (y_68 != z_68)))
              _fail(z_68);
            else
              y_68 = z_68;
          }
          t = not_null(y_68);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm f_69 = NULL,g_69 = NULL,h_69 = NULL;
  f_69 = t;
  e_69 :
  if(match_cons(f_69, sym__2))
    {
      g_69 = ATgetArgument(f_69, 0);
      h_69 = ATgetArgument(f_69, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_i_10, not_null(g_69), not_null(h_69));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm m_90 (ATerm))
{
  ATerm c_33;
  c_33 = t;
  {
    ATerm d_33 = t;
    int f_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_g_33;
        t = m_90(t);
        LocalPopChoice(f_33);
      }
    else
      {
        t = d_33;
        {
        }
      }
  }
  t = c_33;
  {
    ATerm a_7 (ATerm t)
    {
      ATerm p_69 = NULL;
      ATerm h_33;
      h_33 = t;
      {
        ATerm n_69 = NULL;
        ATerm o_69 = NULL;
        o_69 = t;
        if(((n_69 != NULL) && (n_69 != o_69)))
          _fail(o_69);
        else
          n_69 = o_69;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_x_29, not_null(n_69));
          t = set_config_0(t);
        }
      }
      t = h_33;
      {
        ATerm q_69 = NULL;
        q_69 = t;
        if(((p_69 != NULL) && (p_69 != q_69)))
          _fail(q_69);
        else
          p_69 = q_69;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(p_69));
      }
      return(t);
    }
    ATerm b_7 (ATerm t)
    {
      ATerm i_33 = t;
      int n_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_33 = t;
          int p_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(p_33);
            }
          else
            {
              t = o_33;
              {
                t = m_90(t);
                t = Cons_2(t, _id, b_7);
              }
            }
          LocalPopChoice(n_33);
        }
      else
        {
          t = i_33;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, a_7, b_7);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm w_69 = NULL,x_69 = NULL,y_69 = NULL;
  ATerm r_33;
  r_33 = t;
  {
    ATerm z_69 = NULL,a_70 = NULL,b_70 = NULL,c_70 = NULL;
    z_69 = t;
    v_69 :
    if(match_cons(z_69, sym__3))
      {
        a_70 = ATgetArgument(z_69, 0);
        b_70 = ATgetArgument(z_69, 1);
        c_70 = ATgetArgument(z_69, 2);
        {
          if(((w_69 != NULL) && (w_69 != a_70)))
            _fail(a_70);
          else
            w_69 = a_70;
          {
            if(((x_69 != NULL) && (x_69 != b_70)))
              _fail(b_70);
            else
              x_69 = b_70;
            {
              if(((y_69 != NULL) && (y_69 != c_70)))
                _fail(c_70);
              else
                y_69 = c_70;
              t = SSL_table_put(not_null(w_69), not_null(x_69), not_null(y_69));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = r_33;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm l_90 (ATerm))
{
  ATerm f_70 = NULL;
  ATerm z_33;
  z_33 = t;
  {
    t = term_a_34;
    t = table_put_0(t);
  }
  t = z_33;
  {
    ATerm c_7 (ATerm t)
    {
      ATerm b_34 = t;
      int c_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_90(t);
          LocalPopChoice(c_34);
        }
      else
        {
          t = b_34;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, c_7);
    {
      ATerm d_34 = t;
      int i_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_34;
          j_34 = t;
          {
            ATerm k_34 = t;
            int l_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_p_32;
                t = get_config_0(t);
                LocalPopChoice(l_34);
              }
            else
              {
                t = k_34;
                t = fetch_1(t, Help_0);
              }
          }
          t = j_34;
          {
            t = system_usage_0(t);
            {
              t = term_b_27;
              t = exit_0(t);
            }
          }
          LocalPopChoice(i_34);
        }
      else
        {
          t = d_34;
          {
            ATerm w_34 = t;
            int x_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_7 (ATerm t)
                {
                  ATerm i_7 (ATerm t)
                  {
                    ATerm g_70 = NULL;
                    g_70 = t;
                    if(((f_70 != NULL) && (f_70 != g_70)))
                      _fail(g_70);
                    else
                      f_70 = g_70;
                    return(t);
                  }
                  t = Undefined_1(t, i_7);
                  return(t);
                }
                t = fetch_1(t, h_7);
                {
                  ATerm j_7 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_70)), term_y_34);
                    return(t);
                  }
                  t = say_1(t, j_7);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_y_10;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(x_34);
              }
            else
              {
                t = w_34;
                {
                }
              }
          }
        }
      {
        ATerm z_34;
        z_34 = t;
        {
          t = term_p_31;
          t = table_destroy_0(t);
        }
        t = z_34;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm g_87 (ATerm), ATerm h_87 (ATerm), ATerm i_87 (ATerm), ATerm j_87 (ATerm))
{
  t = parse_options_1(t, g_87);
  {
    t = store_options_0(t);
    {
      t = i_87(t);
      {
        ATerm a_35 = t;
        int b_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, h_87);
            LocalPopChoice(b_35);
          }
        else
          {
            t = a_35;
            {
              ATerm i_35 = t;
              int k_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_87(t);
                  t = report_success_0(t);
                  LocalPopChoice(k_35);
                }
              else
                {
                  t = i_35;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm k_87 (ATerm), ATerm l_87 (ATerm))
{
  t = option_wrap_4(t, k_87, default_usage_0, _id, l_87);
  return(t);
}
ATerm xtc_io_wrap_2 (ATerm t, ATerm w_94 (ATerm), ATerm x_94 (ATerm))
{
  ATerm k_7 (ATerm t)
  {
    ATerm l_35 = t;
    int m_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_94(t);
        LocalPopChoice(m_35);
      }
    else
      {
        t = l_35;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm l_7 (ATerm t)
  {
    t = xtc_io_1(t, x_94);
    return(t);
  }
  t = option_wrap_2(t, k_7, l_7);
  return(t);
}
ATerm xtc_iowrap_2 (ATerm t, ATerm z_94 (ATerm), ATerm a_95 (ATerm))
{
  t = xtc_io_wrap_2(t, z_94, a_95);
  return(t);
}
ATerm pack_stratego_0 (ATerm t)
{
  ATerm k_70 = NULL,l_70 = NULL;
  ATerm m_7 (ATerm t)
  {
    ATerm m_70 = NULL,n_70 = NULL,o_70 = NULL;
    t = pack_stratego_modules_0(t);
    {
      m_70 = t;
      j_70 :
      if(match_cons(m_70, sym__2))
        {
          n_70 = ATgetArgument(m_70, 0);
          o_70 = ATgetArgument(m_70, 1);
          {
            if(((k_70 != NULL) && (k_70 != n_70)))
              _fail(n_70);
            else
              k_70 = n_70;
            {
              if(((l_70 != NULL) && (l_70 != o_70)))
                _fail(o_70);
              else
                l_70 = o_70;
              {
                ATerm o_35 = t;
                int p_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_e_24;
                    {
                      t = get_config_0(t);
                      {
                        t = not_null(k_70);
                        {
                          ATerm n_7 (ATerm t)
                          {
                            t = get_filename_0(t);
                            t = basename_1(t, _id);
                            return(t);
                          }
                          t = map_1(t, n_7);
                          t = write_to_text_0(t);
                        }
                      }
                    }
                    LocalPopChoice(p_35);
                  }
                else
                  {
                    t = o_35;
                    {
                      t = not_null(k_70);
                      {
                        t = create_dep_file_0(t);
                        {
                          t = not_null(l_70);
                          t = write_to_0(t);
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
    }
    return(t);
  }
  t = xtc_iowrap_2(t, pack_stratego_options_0, m_7);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = pack_stratego_0(t);
  return(t);
}
