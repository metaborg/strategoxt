#include <srts/stratego.h>
#include <ssl/stratego-lib.h>
#include "xtc-conf.h"
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
Symbol sym_CUT_0;
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
  sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
  ATprotectSymbol(sym_CUT_0);
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
ATerm term_p_32;
ATerm term_r_31;
ATerm term_f_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_g_29;
ATerm term_w_28;
ATerm term_s_28;
ATerm term_r_28;
ATerm term_i_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_r_26;
ATerm term_m_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_d_26;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_i_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_s_23;
ATerm term_n_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_v_22;
ATerm term_r_22;
ATerm term_x_21;
ATerm term_v_21;
ATerm term_l_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_e_20;
ATerm term_b_20;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_b_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_l_16;
ATerm term_h_16;
ATerm term_e_16;
ATerm term_c_16;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_m_15;
ATerm term_n_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_z_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_c_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_t_12;
ATerm term_q_12;
ATerm term_o_12;
ATerm term_k_12;
ATerm term_g_12;
ATerm term_y_11;
ATerm term_v_11;
ATerm term_q_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_o_10;
ATerm term_b_10;
ATerm term_q_9;
ATerm term_m_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_w_8;
ATerm term_t_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_j_8;
void init_constant_terms (void)
{
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym__2, term_h_9, term_m_9);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym__2, term_h_9, term_h_11);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("parse error in ", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("*** module ", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("rtree", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("str", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("cr", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" reading ", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("list-cons", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("tuple-cons", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("dep", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" :", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" \\\n	", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(sym__2, term_w_8, term_c_23);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_23);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym__2, term_v_23, term_p_13);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(sym__2, term_f_24, term_p_13);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym__2, term_r_24, term_p_13);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d   Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-nodep", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(sym__2, term_h_26, term_i_26);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep              Don't create dependency file", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-dep", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep f | -d f       Write dependency to file f", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(sym__2, term_o_29, term_p_29);
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(sym__2, term_o_30, term_p_13);
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(sym__3, term_o_29, term_p_29, (ATerm) ATempty);
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm basename_1 (ATerm, ATerm x_82 (ATerm));
ATerm basename_0 (ATerm);
ATerm Imports_1 (ATerm, ATerm p_60 (ATerm));
ATerm flatten_stratego_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_0 (ATerm);
ATerm get_stratego_imports_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm pass_keep_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm q_93 (ATerm), ATerm r_93 (ATerm));
ATerm call_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm x_86 (ATerm));
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm w_86 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm y_86 (ATerm));
ATerm set_0 (ATerm);
ATerm union_1 (ATerm, ATerm j_79 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm g_90 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm h_93 (ATerm));
ATerm assert_1 (ATerm, ATerm e_84 (ATerm));
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm j_60 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm j_93 (ATerm), ATerm k_93 (ATerm));
ATerm parse_module_0 (ATerm);
ATerm if_verbose3_1 (ATerm, ATerm v_86 (ATerm));
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm find_in_path_0 (ATerm);
ATerm split_2 (ATerm, ATerm p_81 (ATerm), ATerm q_81 (ATerm));
ATerm guarantee_extension_1 (ATerm, ATerm z_82 (ATerm));
ATerm find_file_1 (ATerm, ATerm i_85 (ATerm));
ATerm fetch_elem_1 (ATerm, ATerm z_73 (ATerm));
ATerm find_module_1 (ATerm, ATerm v_65 (ATerm));
ATerm get_module_1 (ATerm, ATerm u_65 (ATerm));
ATerm Fst_0 (ATerm);
ATerm GnUndefined_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm n_79 (ATerm), ATerm o_79 (ATerm));
ATerm diff_1 (ATerm, ATerm f_79 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm n_75 (ATerm), ATerm o_75 (ATerm), ATerm p_75 (ATerm), ATerm q_75 (ATerm));
ATerm zip_1 (ATerm, ATerm s_75 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNext_3 (ATerm, ATerm l_94 (ATerm), ATerm m_94 (ATerm), ATerm n_94 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm c_67 (ATerm), ATerm d_67 (ATerm));
ATerm for_3 (ATerm, ATerm f_67 (ATerm), ATerm g_67 (ATerm), ATerm h_67 (ATerm));
ATerm graph_nodes_undef_roots_3 (ATerm, ATerm t_93 (ATerm), ATerm u_93 (ATerm), ATerm v_93 (ATerm));
ATerm graph_nodes_roots_3 (ATerm, ATerm i_94 (ATerm), ATerm j_94 (ATerm), ATerm k_94 (ATerm));
ATerm pack_stratego_modules_1 (ATerm, ATerm t_65 (ATerm));
ATerm close_file_0 (ATerm);
ATerm Sep_1 (ATerm, ATerm l_73 (ATerm));
ATerm separate_by_1 (ATerm, ATerm j_73 (ATerm));
ATerm obsolete_1 (ATerm, ATerm s_84 (ATerm));
ATerm open_file_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm add_extension_0 (ATerm);
ATerm create_dep_file_1 (ATerm, ATerm u_94 (ATerm));
ATerm implode_string_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm b_54 (ATerm), ATerm c_54 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm l_84 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm w_65 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm filter_1 (ATerm, ATerm d_81 (ATerm));
ATerm string_to_int_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm d_74 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm extend_config_0 (ATerm);
ATerm pack_options_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm a_80 (ATerm), ATerm b_80 (ATerm));
ATerm crush_2 (ATerm, ATerm y_78 (ATerm), ATerm z_78 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm t_86 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm n_85 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm x_88 (ATerm));
ATerm map_1 (ATerm, ATerm o_73 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm w_88 (ATerm));
ATerm Program_1 (ATerm, ATerm a_60 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm m_84 (ATerm));
ATerm Undefined_1 (ATerm, ATerm b_60 (ATerm));
ATerm fetch_1 (ATerm, ATerm x_73 (ATerm));
ATerm option_defined_1 (ATerm, ATerm w_87 (ATerm));
ATerm Help_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm b_89 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm k_55 (ATerm), ATerm l_55 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm z_88 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm y_88 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm t_85 (ATerm), ATerm u_85 (ATerm), ATerm v_85 (ATerm), ATerm w_85 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm x_85 (ATerm), ATerm y_85 (ATerm));
ATerm pack_modules_2 (ATerm, ATerm s_94 (ATerm, ATerm (ATerm)), ATerm t_94 (ATerm));
ATerm pack_stratego_0 (ATerm);
ATerm main_0 (ATerm);
ATerm basename_1 (ATerm t, ATerm x_82 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm z_7 = t;
    int a_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_1 (ATerm t)
        {
          ATerm b_8 = t;
          int c_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, y_1);
              LocalPopChoice(c_8);
            }
          else
            {
              t = b_8;
              {
                ATerm e_8 = t;
                int h_8 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm b_0 (ATerm t)
                    {
                      ATerm i_1 = NULL;
                      i_1 = t;
                      p_0 :
                      if(!(match_int(i_1, 47)))
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = Cons_2(t, b_0, _id);
                    LocalPopChoice(h_8);
                  }
                else
                  {
                    t = e_8;
                    {
                      ATerm c_0 (ATerm t)
                      {
                        ATerm j_1 = NULL;
                        j_1 = t;
                        r_0 :
                        if(!(match_int(j_1, 46)))
                          {
                            _fail(t);
                          }
                        return(t);
                      }
                      t = Cons_2(t, c_0, x_82);
                      t = (ATerm) ATempty;
                    }
                  }
              }
            }
          return(t);
        }
        t = y_1(t);
        LocalPopChoice(a_8);
      }
    else
      {
        t = z_7;
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
ATerm Imports_1 (ATerm t, ATerm p_60 (ATerm))
{
  ATerm u_2 = NULL,w_2 = NULL;
  u_2 = t;
  t_2 :
  if(match_cons(u_2, sym_Imports_1))
    {
      w_2 = ATgetArgument(u_2, 0);
      {
        ATerm z_2 = NULL,c_3 = NULL;
        ATerm a_3 = NULL;
        t = SSLgetAnnotations(not_null(u_2));
        {
          a_3 = t;
          if(((z_2 != NULL) && (z_2 != a_3)))
            _fail(a_3);
          else
            z_2 = a_3;
        }
        {
          t = not_null(w_2);
          {
            ATerm e_3 = NULL;
            t = p_60(t);
            {
              c_3 = t;
              {
                ATerm f_3 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Imports_1, not_null(c_3)), not_null(z_2));
                {
                  f_3 = t;
                  if(((e_3 != NULL) && (e_3 != f_3)))
                    _fail(f_3);
                  else
                    e_3 = f_3;
                }
                t = not_null(e_3);
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
  ATerm q_3 = NULL;
  ATerm e_0 (ATerm t)
  {
    ATerm n_3 = NULL,o_3 = NULL;
    n_3 = t;
    l_3 :
    if(match_cons(n_3, sym_Specification_1))
      {
        o_3 = ATgetArgument(n_3, 0);
        {
          t = not_null(o_3);
          {
            ATerm f_0 (ATerm t)
            {
              ATerm i_8 = t;
              if((PushChoice() == 0))
                {
                  t = Imports_1(t, _id);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = i_8;
                }
              return(t);
            }
            t = filter_1(t, f_0);
          }
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = map_1(t, e_0);
  {
    t = concat_0(t);
    {
      ATerm r_3 = NULL;
      r_3 = t;
      if(((q_3 != NULL) && (q_3 != r_3)))
        _fail(r_3);
      else
        q_3 = r_3;
      t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(q_3));
    }
  }
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm y_3 = NULL,z_3 = NULL,a_4 = NULL,b_4 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL;
  y_3 = t;
  v_3 :
  if(match_cons(y_3, sym__2))
    {
      z_3 = ATgetArgument(y_3, 0);
      c_4 = ATgetArgument(y_3, 1);
      w_3 :
      if(match_cons(z_3, sym__2))
        {
          a_4 = ATgetArgument(z_3, 0);
          b_4 = ATgetArgument(z_3, 1);
          x_3 :
          if(match_cons(c_4, sym__2))
            {
              d_4 = ATgetArgument(c_4, 0);
              e_4 = ATgetArgument(c_4, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(d_4)), not_null(a_4)), (ATerm) ATinsert(CheckATermList(not_null(e_4)), not_null(b_4)));
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
  ATerm m_4 = NULL,n_4 = NULL,o_4 = NULL;
  m_4 = t;
  l_4 :
  if(((ATgetType(m_4) == AT_LIST) && !(ATisEmpty(m_4))))
    {
      n_4 = ATgetFirst((ATermList) m_4);
      o_4 = (ATerm) ATgetNext((ATermList) m_4);
      t = (ATerm) ATmakeAppl(sym__2, not_null(n_4), not_null(o_4));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm u_4 = NULL;
  u_4 = t;
  t_4 :
  if(((ATgetType(u_4) == AT_LIST) && ATisEmpty(u_4)))
    {
      t = term_j_8;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_0 (ATerm t)
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, _id);
  return(t);
}
ATerm get_stratego_imports_0 (ATerm t)
{
  ATerm b_5 = NULL,c_5 = NULL,d_5 = NULL,e_5 = NULL;
  b_5 = t;
  z_4 :
  if(match_cons(b_5, sym__2))
    {
      c_5 = ATgetArgument(b_5, 0);
      d_5 = ATgetArgument(b_5, 1);
      a_5 :
      if(match_cons(d_5, sym_Specification_1))
        {
          e_5 = ATgetArgument(d_5, 0);
          {
            t = not_null(e_5);
            {
              ATerm o_0 (ATerm t)
              {
                ATerm g_5 = NULL,h_5 = NULL;
                g_5 = t;
                y_4 :
                if(match_cons(g_5, sym_Imports_1))
                  {
                    h_5 = ATgetArgument(g_5, 0);
                    t = not_null(h_5);
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = filter_1(t, o_0);
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
  ATerm q_5 = NULL,r_5 = NULL;
  q_5 = t;
  p_5 :
  if(match_cons(q_5, sym_stdin_0))
    {
      ATerm s_5 = NULL;
      ATerm t_5 = NULL;
      t = term_o_8;
      {
        t = ReadFromFile_0(t);
        {
          t_5 = t;
          if(((s_5 != NULL) && (s_5 != t_5)))
            _fail(t_5);
          else
            s_5 = t_5;
        }
      }
      t = not_null(s_5);
    }
  else
    {
      if(match_cons(q_5, sym_FILE_1))
        {
          r_5 = ATgetArgument(q_5, 0);
          {
            ATerm v_5 = NULL;
            ATerm w_5 = NULL;
            t = not_null(r_5);
            {
              t = ReadFromFile_0(t);
              {
                w_5 = t;
                if(((v_5 != NULL) && (v_5 != w_5)))
                  _fail(w_5);
                else
                  v_5 = w_5;
              }
            }
            t = not_null(v_5);
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
  ATerm i_6 = NULL;
  ATerm k_6 = NULL,l_6 = NULL,m_6 = NULL;
  i_6 = t;
  {
    ATerm n_6 = NULL;
    ATerm p_6 = NULL,q_6 = NULL,r_6 = NULL,s_6 = NULL,t_6 = NULL,u_6 = NULL,v_6 = NULL;
    t = not_null(i_6);
    {
      n_6 = t;
      {
        t = SSL_explode_term(not_null(n_6));
        {
          p_6 = t;
          e_6 :
          if(match_cons(p_6, sym__2))
            {
              q_6 = ATgetArgument(p_6, 0);
              r_6 = ATgetArgument(p_6, 1);
              f_6 :
              if(match_string(q_6, ""))
                {
                  g_6 :
                  if(((ATgetType(r_6) == AT_LIST) && !(ATisEmpty(r_6))))
                    {
                      s_6 = ATgetFirst((ATermList) r_6);
                      t_6 = (ATerm) ATgetNext((ATermList) r_6);
                      h_6 :
                      if(((ATgetType(t_6) == AT_LIST) && !(ATisEmpty(t_6))))
                        {
                          u_6 = ATgetFirst((ATermList) t_6);
                          v_6 = (ATerm) ATgetNext((ATermList) t_6);
                          {
                            if(((k_6 != NULL) && (k_6 != s_6)))
                              _fail(s_6);
                            else
                              k_6 = s_6;
                            {
                              if(((m_6 != NULL) && (m_6 != u_6)))
                                _fail(u_6);
                              else
                                m_6 = u_6;
                              if(((l_6 != NULL) && (l_6 != v_6)))
                                _fail(v_6);
                              else
                                l_6 = v_6;
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
    t = not_null(m_6);
  }
  return(t);
}
ATerm pass_keep_0 (ATerm t)
{
  ATerm b_7 = NULL;
  ATerm c_7 = NULL,e_7 = NULL;
  ATerm d_7 = NULL;
  t = term_p_8;
  {
    ATerm q_8 = t;
    int r_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(r_8);
      }
    else
      {
        t = q_8;
        t = term_t_8;
      }
    {
      d_7 = t;
      if(((c_7 != NULL) && (c_7 != d_7)))
        _fail(d_7);
      else
        c_7 = d_7;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_7), term_t_8);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          e_7 = t;
          if(((b_7 != NULL) && (b_7 != e_7)))
            _fail(e_7);
          else
            b_7 = e_7;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_7)), term_p_8);
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm i_7 = NULL;
  i_7 = t;
  t = SSL_int_to_string(not_null(i_7));
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm n_7 = NULL,o_7 = NULL,p_7 = NULL;
  n_7 = t;
  m_7 :
  if(match_cons(n_7, sym__2))
    {
      o_7 = ATgetArgument(n_7, 0);
      p_7 = ATgetArgument(n_7, 1);
      {
        ATerm u_8 = t;
        int v_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(o_7), not_null(p_7));
            LocalPopChoice(v_8);
          }
        else
          {
            t = u_8;
            t = SSL_subtr(not_null(o_7), not_null(p_7));
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
  ATerm v_7 = NULL;
  ATerm w_7 = NULL,y_7 = NULL;
  ATerm x_7 = NULL;
  t = term_w_8;
  {
    ATerm x_8 = t;
    int z_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(z_8);
      }
    else
      {
        t = x_8;
        t = term_t_8;
      }
    {
      x_7 = t;
      if(((w_7 != NULL) && (w_7 != x_7)))
        _fail(x_7);
      else
        w_7 = x_7;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_7), term_t_8);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          y_7 = t;
          if(((v_7 != NULL) && (v_7 != y_7)))
            _fail(y_7);
          else
            v_7 = y_7;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_7)), term_w_8);
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm d_8 = NULL;
  ATerm f_8 = NULL;
  d_8 = t;
  {
    ATerm g_8 = NULL;
    t = xtc_new_file_0(t);
    {
      g_8 = t;
      {
        if(((f_8 != NULL) && (f_8 != g_8)))
          _fail(g_8);
        else
          f_8 = g_8;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_8), not_null(d_8));
          t = WriteToBinaryFile_0(t);
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_8));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm q_93 (ATerm), ATerm r_93 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, q_93, r_93);
    t = read_from_0(t);
  }
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm l_8 = NULL,m_8 = NULL,n_8 = NULL;
  l_8 = t;
  k_8 :
  if(match_cons(l_8, sym__2))
    {
      m_8 = ATgetArgument(l_8, 0);
      n_8 = ATgetArgument(l_8, 1);
      t = SSL_call(not_null(m_8), not_null(n_8));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm s_8 = NULL;
  s_8 = t;
  t = SSL_table_keys(not_null(s_8));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm y_8 = NULL;
  y_8 = t;
  {
    t = table_keys_0(t);
    {
      ATerm q_0 (ATerm t)
      {
        ATerm a_9 = NULL;
        ATerm c_9 = NULL;
        a_9 = t;
        {
          ATerm d_9 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_8), not_null(a_9));
          {
            t = table_get_0(t);
            {
              d_9 = t;
              if(((c_9 != NULL) && (c_9 != d_9)))
                _fail(d_9);
              else
                c_9 = d_9;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_9), not_null(c_9));
        }
        return(t);
      }
      t = map_1(t, q_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm x_86 (ATerm))
{
  ATerm b_9 = t;
  int e_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_9;
      f_9 = t;
      {
        ATerm i_9 = NULL;
        ATerm j_9 = NULL;
        t = term_w_8;
        {
          t = get_config_0(t);
          {
            j_9 = t;
            if(((i_9 != NULL) && (i_9 != j_9)))
              _fail(j_9);
            else
              i_9 = j_9;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_9), term_g_9);
          t = geq_0(t);
        }
      }
      t = f_9;
      t = x_86(t);
      LocalPopChoice(e_9);
    }
  else
    {
      t = b_9;
      {
      }
    }
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm p_9 = NULL;
  ATerm r_9 = NULL,s_9 = NULL;
  p_9 = t;
  {
    ATerm t_9 = NULL,u_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_h_9, (ATerm) ATmakeAppl(sym_Tool_1, not_null(p_9)));
    {
      t = table_get_0(t);
      {
        t_9 = t;
        n_9 :
        if(((ATgetType(t_9) == AT_LIST) && !(ATisEmpty(t_9))))
          {
            u_9 = ATgetFirst((ATermList) t_9);
            x_9 = (ATerm) ATgetNext((ATermList) t_9);
            o_9 :
            if(match_cons(u_9, sym__2))
              {
                v_9 = ATgetArgument(u_9, 0);
                w_9 = ATgetArgument(u_9, 1);
                {
                  if(((r_9 != NULL) && (r_9 != v_9)))
                    _fail(v_9);
                  else
                    r_9 = v_9;
                  if(((s_9 != NULL) && (s_9 != w_9)))
                    _fail(w_9);
                  else
                    s_9 = w_9;
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
    t = not_null(s_9);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm e_10 = NULL,f_10 = NULL,g_10 = NULL;
  e_10 = t;
  d_10 :
  if(match_cons(e_10, sym__2))
    {
      f_10 = ATgetArgument(e_10, 0);
      g_10 = ATgetArgument(e_10, 1);
      {
        ATerm j_10 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_h_9, (ATerm) ATmakeAppl(sym_Tool_1, not_null(f_10)));
        {
          t = table_get_0(t);
          {
            ATerm s_0 (ATerm t)
            {
              ATerm k_10 = NULL,l_10 = NULL,m_10 = NULL;
              k_10 = t;
              c_10 :
              if(match_cons(k_10, sym__2))
                {
                  l_10 = ATgetArgument(k_10, 0);
                  m_10 = ATgetArgument(k_10, 1);
                  {
                    if(((g_10 != NULL) && (g_10 != l_10)))
                      _fail(l_10);
                    else
                      g_10 = l_10;
                    if(((j_10 != NULL) && (j_10 != m_10)))
                      _fail(m_10);
                    else
                      j_10 = m_10;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, s_0);
          }
        }
        t = not_null(j_10);
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
  ATerm k_9 = t;
  int l_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_9;
      {
        t = table_get_0(t);
        {
          ATerm t_0 (ATerm t)
          {
            t = try_1(t, xtc_read_0);
            return(t);
          }
          t = map_1(t, t_0);
        }
      }
      LocalPopChoice(l_9);
    }
  else
    {
      t = k_9;
      {
      }
    }
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm w_86 (ATerm))
{
  ATerm y_9 = t;
  int z_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_10;
      a_10 = t;
      {
        ATerm q_10 = NULL;
        ATerm r_10 = NULL;
        t = term_w_8;
        {
          t = get_config_0(t);
          {
            r_10 = t;
            if(((q_10 != NULL) && (q_10 != r_10)))
              _fail(r_10);
            else
              q_10 = r_10;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_10), term_b_10);
          t = geq_0(t);
        }
      }
      t = a_10;
      t = w_86(t);
      LocalPopChoice(z_9);
    }
  else
    {
      t = y_9;
      {
      }
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm y_86 (ATerm))
{
  ATerm h_10 = t;
  int i_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_10;
      n_10 = t;
      {
        ATerm u_10 = NULL;
        ATerm v_10 = NULL;
        t = term_w_8;
        {
          t = get_config_0(t);
          {
            v_10 = t;
            if(((u_10 != NULL) && (u_10 != v_10)))
              _fail(v_10);
            else
              u_10 = v_10;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_10), term_o_10);
          t = geq_0(t);
        }
      }
      t = n_10;
      t = y_86(t);
      LocalPopChoice(i_10);
    }
  else
    {
      t = h_10;
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
ATerm union_1 (ATerm t, ATerm j_79 (ATerm))
{
  ATerm z_10 = NULL,a_11 = NULL,b_11 = NULL;
  z_10 = t;
  y_10 :
  if(match_cons(z_10, sym__2))
    {
      a_11 = ATgetArgument(z_10, 0);
      b_11 = ATgetArgument(z_10, 1);
      {
        t = not_null(a_11);
        {
          ATerm f_11 (ATerm t)
          {
            ATerm p_10 = t;
            int s_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(b_11);
                LocalPopChoice(s_10);
              }
            else
              {
                t = p_10;
                {
                  ATerm t_10 = t;
                  int w_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm u_0 (ATerm t)
                      {
                        t = not_null(b_11);
                        return(t);
                      }
                      t = HdMember_p__2(t, j_79, u_0);
                      t = f_11(t);
                      LocalPopChoice(w_10);
                    }
                  else
                    {
                      t = t_10;
                      t = Cons_2(t, _id, f_11);
                    }
                }
              }
            return(t);
          }
          t = f_11(t);
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
  ATerm k_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL;
  k_11 = t;
  j_11 :
  if(match_cons(k_11, sym__3))
    {
      l_11 = ATgetArgument(k_11, 0);
      m_11 = ATgetArgument(k_11, 1);
      n_11 = ATgetArgument(k_11, 2);
      {
        ATerm x_10;
        x_10 = t;
        {
          ATerm r_11 = NULL;
          ATerm s_11 = NULL,u_11 = NULL;
          ATerm t_11 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_11), not_null(m_11));
          {
            ATerm c_11 = t;
            int d_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(d_11);
              }
            else
              {
                t = c_11;
                t = (ATerm) ATempty;
              }
            {
              t_11 = t;
              if(((s_11 != NULL) && (s_11 != t_11)))
                _fail(t_11);
              else
                s_11 = t_11;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(s_11), not_null(n_11));
            {
              t = union_1(t, eq_0);
              {
                u_11 = t;
                if(((r_11 != NULL) && (r_11 != u_11)))
                  _fail(u_11);
                else
                  r_11 = u_11;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(l_11), not_null(m_11), not_null(r_11));
            t = table_put_0(t);
          }
        }
        t = x_10;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm g_90 (ATerm))
{
  ATerm c_12 = NULL,d_12 = NULL,e_12 = NULL;
  c_12 = t;
  b_12 :
  if(match_cons(c_12, sym__2))
    {
      d_12 = ATgetArgument(c_12, 0);
      e_12 = ATgetArgument(c_12, 1);
      {
        t = not_null(e_12);
        {
          ATerm v_0 (ATerm t)
          {
            ATerm h_12 = NULL,i_12 = NULL,j_12 = NULL;
            h_12 = t;
            a_12 :
            if(match_cons(h_12, sym__2))
              {
                i_12 = ATgetArgument(h_12, 0);
                j_12 = ATgetArgument(h_12, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(d_12), not_null(i_12), not_null(j_12));
                  t = g_90(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, v_0);
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
  ATerm p_12 = NULL;
  p_12 = t;
  t = SSL_ReadFromFile(not_null(p_12));
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm u_12 = NULL;
  ATerm w_12 = NULL;
  u_12 = t;
  {
    ATerm e_11 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_9, (ATerm) ATmakeAppl(sym_Imported_1, not_null(u_12)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_11;
      }
    {
      ATerm g_11;
      g_11 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_h_9, term_h_11, (ATerm) ATinsert(ATempty, not_null(u_12)));
        t = table_put_0(t);
      }
      t = g_11;
      {
        ATerm w_0 (ATerm t)
        {
          ATerm x_0 (ATerm t)
          {
            t = term_i_11;
            return(t);
          }
          t = debug_1(t, x_0);
          return(t);
        }
        t = if_verbose4_1(t, w_0);
        {
          ATerm o_11 = t;
          int p_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(p_11);
            }
          else
            {
              t = o_11;
              t = (ATerm) ATempty;
            }
          {
            ATerm y_0 (ATerm t)
            {
              ATerm z_0 (ATerm t)
              {
                t = term_q_11;
                return(t);
              }
              t = say_1(t, z_0);
              return(t);
            }
            t = if_verbose6_1(t, y_0);
            {
              ATerm x_12 = NULL;
              x_12 = t;
              if(((w_12 != NULL) && (w_12 != x_12)))
                _fail(x_12);
              else
                w_12 = x_12;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_h_9, not_null(w_12));
                {
                  t = table_putlist_1(t, table_append_0);
                  {
                    ATerm a_1 (ATerm t)
                    {
                      ATerm b_1 (ATerm t)
                      {
                        t = term_v_11;
                        return(t);
                      }
                      t = say_1(t, b_1);
                      return(t);
                    }
                    t = if_verbose6_1(t, a_1);
                    {
                      t = (ATerm) ATmakeAppl(sym__3, term_h_9, (ATerm)ATmakeAppl(sym_Imported_1, not_null(u_12)), (ATerm) ATempty);
                      {
                        t = table_put_0(t);
                        {
                          ATerm c_1 (ATerm t)
                          {
                            ATerm d_1 (ATerm t)
                            {
                              t = term_q_11;
                              return(t);
                            }
                            t = say_1(t, d_1);
                            return(t);
                          }
                          t = if_verbose4_1(t, c_1);
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
  ATerm b_13 = NULL;
  b_13 = t;
  t = SSL_getenv(not_null(b_13));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm w_11 = t;
  int x_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_11;
      t = get_config_0(t);
      LocalPopChoice(x_11);
    }
  else
    {
      t = w_11;
      {
        ATerm z_11 = t;
        int f_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_g_12;
            t = getenv_0(t);
            LocalPopChoice(f_12);
          }
        else
          {
            t = z_11;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm e_1 (ATerm t)
  {
    ATerm f_1 (ATerm t)
    {
      t = term_k_12;
      return(t);
    }
    t = debug_1(t, f_1);
    return(t);
  }
  t = if_verbose5_1(t, e_1);
  {
    ATerm l_12;
    l_12 = t;
    {
      ATerm m_12 = t;
      int n_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_o_12;
          t = table_get_0(t);
          LocalPopChoice(n_12);
        }
      else
        {
          t = m_12;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = l_12;
    {
      ATerm g_1 (ATerm t)
      {
        ATerm h_1 (ATerm t)
        {
          t = term_q_12;
          return(t);
        }
        t = debug_1(t, h_1);
        return(t);
      }
      t = if_verbose5_1(t, g_1);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm r_12 = t;
  int s_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_1 (ATerm t)
      {
        ATerm l_1 (ATerm t)
        {
          t = term_t_12;
          return(t);
        }
        t = debug_1(t, l_1);
        return(t);
      }
      t = if_verbose5_1(t, k_1);
      {
        t = xtc_load_0(t);
        {
          ATerm v_12 = t;
          int y_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(y_12);
            }
          else
            {
              t = v_12;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm m_1 (ATerm t)
            {
              ATerm n_1 (ATerm t)
              {
                t = term_t_12;
                return(t);
              }
              t = debug_1(t, n_1);
              return(t);
            }
            t = if_verbose5_1(t, m_1);
          }
        }
      }
      LocalPopChoice(s_12);
    }
  else
    {
      t = r_12;
      {
        ATerm f_13 = NULL;
        ATerm g_13 = NULL;
        g_13 = t;
        if(((f_13 != NULL) && (f_13 != g_13)))
          _fail(g_13);
        else
          f_13 = g_13;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_13), not_null(f_13)), term_z_12);
          {
            t = error_0(t);
            {
              ATerm o_1 (ATerm t)
              {
                t = term_h_9;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm p_1 (ATerm t)
                    {
                      t = term_c_13;
                      return(t);
                    }
                    t = debug_1(t, p_1);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, o_1);
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
ATerm xtc_command_1 (ATerm t, ATerm h_93 (ATerm))
{
  ATerm k_13 = NULL;
  ATerm d_13;
  d_13 = t;
  {
    ATerm l_13 = NULL;
    t = h_93(t);
    {
      t = xtc_find_0(t);
      {
        l_13 = t;
        if(((k_13 != NULL) && (k_13 != l_13)))
          _fail(l_13);
        else
          k_13 = l_13;
      }
    }
  }
  t = d_13;
  {
    ATerm e_13;
    e_13 = t;
    {
      ATerm m_13 = NULL;
      ATerm n_13 = NULL;
      n_13 = t;
      if(((m_13 != NULL) && (m_13 != n_13)))
        _fail(n_13);
      else
        m_13 = n_13;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_13), not_null(m_13));
        t = call_0(t);
      }
    }
    t = e_13;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm e_84 (ATerm))
{
  ATerm v_13 = NULL,w_13 = NULL,x_13 = NULL;
  v_13 = t;
  u_13 :
  if(match_cons(v_13, sym__2))
    {
      w_13 = ATgetArgument(v_13, 0);
      x_13 = ATgetArgument(v_13, 1);
      {
        ATerm a_14 = NULL,b_14 = NULL,c_14 = NULL;
        ATerm h_13;
        h_13 = t;
        {
          ATerm d_14 = NULL;
          ATerm e_14 = NULL,f_14 = NULL,g_14 = NULL;
          t = e_84(t);
          {
            d_14 = t;
            {
              if(((a_14 != NULL) && (a_14 != d_14)))
                _fail(d_14);
              else
                a_14 = d_14;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(a_14), not_null(w_13), not_null(x_13));
                {
                  t = table_push_0(t);
                  {
                    ATerm i_13 = t;
                    int j_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(a_14), term_o_13);
                        t = table_get_0(t);
                        LocalPopChoice(j_13);
                      }
                    else
                      {
                        t = i_13;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      e_14 = t;
                      t_13 :
                      if(((ATgetType(e_14) == AT_LIST) && !(ATisEmpty(e_14))))
                        {
                          f_14 = ATgetFirst((ATermList) e_14);
                          g_14 = (ATerm) ATgetNext((ATermList) e_14);
                          {
                            if(((b_14 != NULL) && (b_14 != f_14)))
                              _fail(f_14);
                            else
                              b_14 = f_14;
                            {
                              if(((c_14 != NULL) && (c_14 != g_14)))
                                _fail(g_14);
                              else
                                c_14 = g_14;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(a_14), term_o_13, (ATerm) ATinsert(CheckATermList(not_null(c_14)), (ATerm) ATinsert(CheckATermList(not_null(b_14)), not_null(w_13))));
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
        t = h_13;
      }
    }
  else
    {
      _fail(t);
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
  ATerm l_14 = NULL;
  ATerm m_14 = NULL;
  t = term_p_13;
  {
    t = new_0(t);
    {
      m_14 = t;
      if(((l_14 != NULL) && (l_14 != m_14)))
        _fail(m_14);
      else
        l_14 = m_14;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(l_14), term_q_13);
    {
      t = conc_strings_0(t);
      {
        ATerm r_13 = t;
        int s_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = file_exists_0(t);
            t = new_file_0(t);
            LocalPopChoice(s_13);
          }
        else
          {
            t = r_13;
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
  ATerm q_14 = NULL;
  t = new_file_0(t);
  {
    q_14 = t;
    {
      ATerm y_13;
      y_13 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_14), term_z_13);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(q_14), term_p_13);
            {
              ATerm q_1 (ATerm t)
              {
                t = term_h_14;
                return(t);
              }
              t = assert_1(t, q_1);
            }
          }
        }
      }
      t = y_13;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm a_15 = NULL,b_15 = NULL;
  a_15 = t;
  z_14 :
  if(match_cons(a_15, sym_stdin_0))
    {
      ATerm c_15 = NULL;
      ATerm d_15 = NULL;
      ATerm e_15 = NULL;
      t = xtc_new_file_0(t);
      {
        d_15 = t;
        {
          if(((c_15 != NULL) && (c_15 != d_15)))
            _fail(d_15);
          else
            c_15 = d_15;
          {
            ATerm f_15 = NULL;
            t = n_0(t);
            {
              f_15 = t;
              if(((e_15 != NULL) && (e_15 != f_15)))
                _fail(f_15);
              else
                e_15 = f_15;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(e_15), (ATerm) ATinsert(ATinsert(ATempty, not_null(c_15)), term_i_14));
              {
                ATerm j_14 = t;
                int k_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = conc_two_lists_0(t);
                    LocalPopChoice(k_14);
                  }
                else
                  {
                    t = j_14;
                    t = conc_more_lists_0(t);
                  }
                t = xtc_command_1(t, m_0);
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(c_15));
    }
  else
    {
      if(match_cons(a_15, sym_FILE_1))
        {
          b_15 = ATgetArgument(a_15, 0);
          {
            ATerm h_15 = NULL;
            ATerm i_15 = NULL;
            t = not_null(b_15);
            {
              ATerm j_15 = NULL;
              t = xtc_new_file_0(t);
              {
                i_15 = t;
                {
                  if(((h_15 != NULL) && (h_15 != i_15)))
                    _fail(i_15);
                  else
                    h_15 = i_15;
                  {
                    ATerm k_15 = NULL;
                    t = n_0(t);
                    {
                      k_15 = t;
                      if(((j_15 != NULL) && (j_15 != k_15)))
                        _fail(k_15);
                      else
                        j_15 = k_15;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(j_15), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(h_15)), term_i_14), not_null(b_15)), term_n_14));
                      {
                        ATerm o_14 = t;
                        int p_14 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = conc_two_lists_0(t);
                            LocalPopChoice(p_14);
                          }
                        else
                          {
                            t = o_14;
                            t = conc_more_lists_0(t);
                          }
                        t = xtc_command_1(t, m_0);
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(h_15));
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
  ATerm v_15 = NULL;
  v_15 = t;
  u_15 :
  if(match_cons(v_15, sym_stdin_0))
    {
      ATerm x_15 = NULL,z_15 = NULL;
      ATerm r_14;
      r_14 = t;
      {
        ATerm y_15 = NULL;
        t = SSLgetAnnotations(not_null(v_15));
        {
          y_15 = t;
          if(((x_15 != NULL) && (x_15 != y_15)))
            _fail(y_15);
          else
            x_15 = y_15;
        }
      }
      t = r_14;
      {
        ATerm a_16 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(x_15));
        {
          a_16 = t;
          if(((z_15 != NULL) && (z_15 != a_16)))
            _fail(a_16);
          else
            z_15 = a_16;
        }
        t = not_null(z_15);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm j_60 (ATerm))
{
  ATerm j_16 = NULL,k_16 = NULL;
  j_16 = t;
  i_16 :
  if(match_cons(j_16, sym_FILE_1))
    {
      k_16 = ATgetArgument(j_16, 0);
      {
        ATerm n_16 = NULL,p_16 = NULL;
        ATerm o_16 = NULL;
        t = SSLgetAnnotations(not_null(j_16));
        {
          o_16 = t;
          if(((n_16 != NULL) && (n_16 != o_16)))
            _fail(o_16);
          else
            n_16 = o_16;
        }
        {
          t = not_null(k_16);
          {
            ATerm r_16 = NULL;
            t = j_60(t);
            {
              p_16 = t;
              {
                ATerm s_16 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(p_16)), not_null(n_16));
                {
                  s_16 = t;
                  if(((r_16 != NULL) && (r_16 != s_16)))
                    _fail(s_16);
                  else
                    r_16 = s_16;
                }
                t = not_null(r_16);
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
ATerm xtc_transform_2 (ATerm t, ATerm j_93 (ATerm), ATerm k_93 (ATerm))
{
  ATerm s_14 = t;
  int t_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_14 = t;
      int v_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(v_14);
        }
      else
        {
          t = u_14;
          t = stdin_0(t);
        }
      LocalPopChoice(t_14);
      t = xtc_transform_file_2(t, j_93, k_93);
    }
  else
    {
      t = s_14;
      t = xtc_transform_term_2(t, j_93, k_93);
    }
  return(t);
}
ATerm parse_module_0 (ATerm t)
{
  ATerm w_14 = t;
  int x_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_17 = NULL;
      ATerm r_1 (ATerm t)
      {
        ATerm y_14 = t;
        if((PushChoice() == 0))
          {
            ATerm g_17 = NULL;
            g_17 = t;
            x_16 :
            if(!(match_string(g_17, "rtree")))
              {
                _fail(t);
              }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = y_14;
          }
        return(t);
      }
      ATerm s_1 (ATerm t)
      {
        ATerm h_17 = NULL;
        h_17 = t;
        if(((f_17 != NULL) && (f_17 != h_17)))
          _fail(h_17);
        else
          f_17 = h_17;
        return(t);
      }
      t = _2(t, r_1, s_1);
      {
        t = Snd_0(t);
        {
          ATerm g_15 = t;
          int l_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_1 (ATerm t)
              {
                t = term_m_15;
                return(t);
              }
              ATerm u_1 (ATerm t)
              {
                ATerm i_17 = NULL,k_17 = NULL,m_17 = NULL;
                ATerm n_15;
                n_15 = t;
                {
                  ATerm j_17 = NULL;
                  t = pass_verbose_0(t);
                  {
                    j_17 = t;
                    if(((i_17 != NULL) && (i_17 != j_17)))
                      _fail(j_17);
                    else
                      i_17 = j_17;
                  }
                }
                t = n_15;
                {
                  ATerm o_15;
                  o_15 = t;
                  {
                    ATerm l_17 = NULL;
                    t = pass_keep_0(t);
                    {
                      l_17 = t;
                      if(((k_17 != NULL) && (k_17 != l_17)))
                        _fail(l_17);
                      else
                        k_17 = l_17;
                    }
                  }
                  t = o_15;
                  {
                    ATerm n_17 = NULL;
                    t = term_p_15;
                    {
                      t = get_config_0(t);
                      {
                        n_17 = t;
                        if(((m_17 != NULL) && (m_17 != n_17)))
                          _fail(n_17);
                        else
                          m_17 = n_17;
                      }
                    }
                    {
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(m_17)), not_null(k_17)), not_null(i_17));
                      t = concat_0(t);
                    }
                  }
                }
                return(t);
              }
              t = xtc_transform_2(t, t_1, u_1);
              t = read_from_0(t);
              LocalPopChoice(l_15);
            }
          else
            {
              t = g_15;
              {
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_17)), term_q_15);
                t = fatal_error_0(t);
              }
            }
        }
      }
      LocalPopChoice(x_14);
    }
  else
    {
      t = w_14;
      {
        ATerm o_17 = NULL,p_17 = NULL,q_17 = NULL;
        o_17 = t;
        d_17 :
        if(match_cons(o_17, sym__2))
          {
            p_17 = ATgetArgument(o_17, 0);
            q_17 = ATgetArgument(o_17, 1);
            e_17 :
            if(match_string(p_17, "rtree"))
              {
                t = Snd_0(t);
                {
                  ATerm r_15 = t;
                  int s_15 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = read_from_0(t);
                      LocalPopChoice(s_15);
                    }
                  else
                    {
                      t = r_15;
                      {
                        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_17)), term_q_15);
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
ATerm if_verbose3_1 (ATerm t, ATerm v_86 (ATerm))
{
  ATerm t_15 = t;
  int w_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_16;
      b_16 = t;
      {
        ATerm y_17 = NULL;
        ATerm z_17 = NULL;
        t = term_w_8;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_17), term_c_16);
          t = geq_0(t);
        }
      }
      t = b_16;
      t = v_86(t);
      LocalPopChoice(w_15);
    }
  else
    {
      t = t_15;
      {
      }
    }
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm d_16;
  d_16 = t;
  {
    ATerm c_18 = NULL;
    ATerm d_18 = NULL;
    d_18 = t;
    if(((c_18 != NULL) && (c_18 != d_18)))
      _fail(d_18);
    else
      c_18 = d_18;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_e_16, not_null(c_18));
      t = printnl_0(t);
    }
  }
  t = d_16;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm f_16;
  f_16 = t;
  {
    t = error_0(t);
    {
      t = term_t_8;
      t = exit_0(t);
    }
  }
  t = f_16;
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm h_18 = NULL;
  ATerm j_18 = NULL;
  h_18 = t;
  {
    ATerm g_16;
    g_16 = t;
    {
      ATerm k_18 = NULL;
      t = term_h_16;
      {
        k_18 = t;
        if(((j_18 != NULL) && (j_18 != k_18)))
          _fail(k_18);
        else
          j_18 = k_18;
      }
    }
    t = g_16;
    {
      t = SSL_open_file(not_null(h_18), not_null(j_18));
      t = SSL_close_file(not_null(h_18));
    }
  }
  return(t);
}
ATerm find_in_path_0 (ATerm t)
{
  ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL;
  q_18 = t;
  p_18 :
  if(match_cons(q_18, sym__2))
    {
      r_18 = ATgetArgument(q_18, 0);
      s_18 = ATgetArgument(q_18, 1);
      {
        t = not_null(s_18);
        {
          ATerm v_1 (ATerm t)
          {
            ATerm v_18 = NULL;
            ATerm w_18 = NULL;
            w_18 = t;
            if(((v_18 != NULL) && (v_18 != w_18)))
              _fail(w_18);
            else
              v_18 = w_18;
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(r_18)), term_l_16), not_null(v_18));
              {
                t = concat_strings_0(t);
                t = file_exists_0(t);
              }
            }
            return(t);
          }
          t = fetch_elem_1(t, v_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm p_81 (ATerm), ATerm q_81 (ATerm))
{
  ATerm b_19 = NULL,d_19 = NULL;
  ATerm m_16;
  m_16 = t;
  {
    ATerm c_19 = NULL;
    t = p_81(t);
    {
      c_19 = t;
      if(((b_19 != NULL) && (b_19 != c_19)))
        _fail(c_19);
      else
        b_19 = c_19;
    }
  }
  t = m_16;
  {
    ATerm e_19 = NULL;
    t = q_81(t);
    {
      e_19 = t;
      if(((d_19 != NULL) && (d_19 != e_19)))
        _fail(e_19);
      else
        d_19 = e_19;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(b_19), not_null(d_19));
  }
  return(t);
}
ATerm guarantee_extension_1 (ATerm t, ATerm z_82 (ATerm))
{
  t = basename_1(t, _id);
  {
    ATerm w_1 (ATerm t)
    {
      t = term_p_13;
      t = z_82(t);
      return(t);
    }
    t = split_2(t, _id, w_1);
    t = add_extension_0(t);
  }
  return(t);
}
ATerm find_file_1 (ATerm t, ATerm i_85 (ATerm))
{
  ATerm x_1 (ATerm t)
  {
    t = guarantee_extension_1(t, i_85);
    return(t);
  }
  t = _2(t, x_1, _id);
  t = find_in_path_0(t);
  return(t);
}
ATerm fetch_elem_1 (ATerm t, ATerm z_73 (ATerm))
{
  ATerm i_19 = NULL;
  ATerm z_1 (ATerm t)
  {
    ATerm j_19 = NULL;
    t = z_73(t);
    {
      j_19 = t;
      if(((i_19 != NULL) && (i_19 != j_19)))
        _fail(j_19);
      else
        i_19 = j_19;
    }
    return(t);
  }
  t = fetch_1(t, z_1);
  t = not_null(i_19);
  return(t);
}
ATerm find_module_1 (ATerm t, ATerm v_65 (ATerm))
{
  ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL;
  q_19 = t;
  p_19 :
  if(match_cons(q_19, sym__2))
    {
      r_19 = ATgetArgument(q_19, 0);
      s_19 = ATgetArgument(q_19, 1);
      {
        t = not_null(s_19);
        {
          ATerm q_16 = t;
          int t_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_2 (ATerm t)
              {
                ATerm v_19 = NULL;
                ATerm x_19 = NULL;
                v_19 = t;
                {
                  ATerm y_19 = NULL,a_20 = NULL;
                  ATerm z_19 = NULL;
                  t = v_65(t);
                  {
                    z_19 = t;
                    if(((y_19 != NULL) && (y_19 != z_19)))
                      _fail(z_19);
                    else
                      y_19 = z_19;
                  }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(r_19), not_null(y_19));
                    {
                      ATerm b_2 (ATerm t)
                      {
                        t = not_null(v_19);
                        return(t);
                      }
                      t = find_file_1(t, b_2);
                      {
                        a_20 = t;
                        if(((x_19 != NULL) && (x_19 != a_20)))
                          _fail(a_20);
                        else
                          x_19 = a_20;
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__2, not_null(v_19), (ATerm) ATmakeAppl(sym_FILE_1, not_null(x_19)));
                }
                return(t);
              }
              t = fetch_elem_1(t, a_2);
              LocalPopChoice(t_16);
            }
          else
            {
              t = q_16;
              {
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_16), not_null(r_19)), term_u_16);
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
ATerm get_module_1 (ATerm t, ATerm u_65 (ATerm))
{
  ATerm k_20 = NULL;
  ATerm m_20 = NULL,n_20 = NULL,o_20 = NULL;
  k_20 = t;
  {
    ATerm p_20 = NULL,q_20 = NULL,r_20 = NULL,s_20 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_20), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_16), term_z_16), term_y_16), term_w_16));
    {
      t = find_module_1(t, u_65);
      {
        p_20 = t;
        i_20 :
        if(match_cons(p_20, sym__2))
          {
            q_20 = ATgetArgument(p_20, 0);
            r_20 = ATgetArgument(p_20, 1);
            j_20 :
            if(match_cons(r_20, sym_FILE_1))
              {
                s_20 = ATgetArgument(r_20, 0);
                {
                  ATerm t_20 = NULL;
                  if(((m_20 != NULL) && (m_20 != q_20)))
                    _fail(q_20);
                  else
                    m_20 = q_20;
                  {
                    if(((n_20 != NULL) && (n_20 != s_20)))
                      _fail(s_20);
                    else
                      n_20 = s_20;
                    {
                      ATerm c_2 (ATerm t)
                      {
                        ATerm a_17;
                        a_17 = t;
                        {
                          t = not_null(n_20);
                          {
                            ATerm d_2 (ATerm t)
                            {
                              t = term_b_17;
                              return(t);
                            }
                            t = debug_1(t, d_2);
                          }
                        }
                        t = a_17;
                        return(t);
                      }
                      t = if_verbose3_1(t, c_2);
                      {
                        t = parse_module_0(t);
                        {
                          t_20 = t;
                          if(((o_20 != NULL) && (o_20 != t_20)))
                            _fail(t_20);
                          else
                            o_20 = t_20;
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(n_20), not_null(o_20));
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm d_21 = NULL;
  ATerm f_21 = NULL,g_21 = NULL;
  d_21 = t;
  {
    ATerm h_21 = NULL;
    ATerm j_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL;
    t = not_null(d_21);
    {
      h_21 = t;
      {
        t = SSL_explode_term(not_null(h_21));
        {
          j_21 = t;
          a_21 :
          if(match_cons(j_21, sym__2))
            {
              k_21 = ATgetArgument(j_21, 0);
              l_21 = ATgetArgument(j_21, 1);
              b_21 :
              if(match_string(k_21, ""))
                {
                  c_21 :
                  if(((ATgetType(l_21) == AT_LIST) && !(ATisEmpty(l_21))))
                    {
                      m_21 = ATgetFirst((ATermList) l_21);
                      n_21 = (ATerm) ATgetNext((ATermList) l_21);
                      {
                        if(((g_21 != NULL) && (g_21 != m_21)))
                          _fail(m_21);
                        else
                          g_21 = m_21;
                        if(((f_21 != NULL) && (f_21 != n_21)))
                          _fail(n_21);
                        else
                          f_21 = n_21;
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
    t = not_null(g_21);
  }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm u_21 = NULL,h_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL,l_22 = NULL,m_22 = NULL,n_22 = NULL;
  u_21 = t;
  s_21 :
  if(match_cons(u_21, sym__5))
    {
      h_22 = ATgetArgument(u_21, 0);
      k_22 = ATgetArgument(u_21, 1);
      l_22 = ATgetArgument(u_21, 2);
      m_22 = ATgetArgument(u_21, 3);
      n_22 = ATgetArgument(u_21, 4);
      t_21 :
      if(((ATgetType(h_22) == AT_LIST) && !(ATisEmpty(h_22))))
        {
          i_22 = ATgetFirst((ATermList) h_22);
          j_22 = (ATerm) ATgetNext((ATermList) h_22);
          t = (ATerm) ATmakeAppl(sym__5, not_null(j_22), not_null(k_22), not_null(l_22), not_null(m_22), (ATerm) ATinsert(CheckATermList(not_null(n_22)), not_null(i_22)));
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
  ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL;
  x_22 = t;
  w_22 :
  if(match_cons(x_22, sym__2))
    {
      y_22 = ATgetArgument(x_22, 0);
      z_22 = ATgetArgument(x_22, 1);
      if(((y_22 != NULL) && (y_22 != z_22)))
        _fail(z_22);
      else
        y_22 = z_22;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm n_79 (ATerm), ATerm o_79 (ATerm))
{
  ATerm f_23 = NULL,g_23 = NULL,h_23 = NULL;
  f_23 = t;
  e_23 :
  if(((ATgetType(f_23) == AT_LIST) && !(ATisEmpty(f_23))))
    {
      g_23 = ATgetFirst((ATermList) f_23);
      h_23 = (ATerm) ATgetNext((ATermList) f_23);
      {
        t = o_79(t);
        {
          ATerm e_2 (ATerm t)
          {
            ATerm r_23 = NULL;
            r_23 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(g_23), not_null(r_23));
              t = n_79(t);
            }
            return(t);
          }
          t = fetch_1(t, e_2);
        }
        t = not_null(h_23);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm f_79 (ATerm))
{
  ATerm y_23 = NULL,z_23 = NULL,a_24 = NULL;
  y_23 = t;
  x_23 :
  if(match_cons(y_23, sym__2))
    {
      z_23 = ATgetArgument(y_23, 0);
      a_24 = ATgetArgument(y_23, 1);
      {
        t = not_null(z_23);
        {
          ATerm h_24 (ATerm t)
          {
            ATerm c_17 = t;
            int r_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(r_17);
              }
            else
              {
                t = c_17;
                {
                  ATerm s_17 = t;
                  int t_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm f_2 (ATerm t)
                      {
                        t = not_null(a_24);
                        return(t);
                      }
                      t = HdMember_p__2(t, f_79, f_2);
                      t = h_24(t);
                      LocalPopChoice(t_17);
                    }
                  else
                    {
                      t = s_17;
                      t = Cons_2(t, _id, h_24);
                    }
                }
              }
            return(t);
          }
          t = h_24(t);
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
  ATerm l_24 = NULL,m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL;
  l_24 = t;
  j_24 :
  if(match_cons(l_24, sym__2))
    {
      m_24 = ATgetArgument(l_24, 0);
      n_24 = ATgetArgument(l_24, 1);
      k_24 :
      if(((ATgetType(n_24) == AT_LIST) && !(ATisEmpty(n_24))))
        {
          o_24 = ATgetFirst((ATermList) n_24);
          p_24 = (ATerm) ATgetNext((ATermList) n_24);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(m_24)), not_null(o_24)), not_null(p_24));
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
  ATerm w_24 = NULL,x_24 = NULL,y_24 = NULL;
  w_24 = t;
  v_24 :
  if(match_cons(w_24, sym__2))
    {
      x_24 = ATgetArgument(w_24, 0);
      y_24 = ATgetArgument(w_24, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(y_24)), not_null(x_24));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL;
  g_25 = t;
  d_25 :
  if(match_cons(g_25, sym__2))
    {
      h_25 = ATgetArgument(g_25, 0);
      k_25 = ATgetArgument(g_25, 1);
      e_25 :
      if(((ATgetType(h_25) == AT_LIST) && !(ATisEmpty(h_25))))
        {
          i_25 = ATgetFirst((ATermList) h_25);
          j_25 = (ATerm) ATgetNext((ATermList) h_25);
          f_25 :
          if(((ATgetType(k_25) == AT_LIST) && !(ATisEmpty(k_25))))
            {
              l_25 = ATgetFirst((ATermList) k_25);
              m_25 = (ATerm) ATgetNext((ATermList) k_25);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(i_25), not_null(l_25)), (ATerm) ATmakeAppl(sym__2, not_null(j_25), not_null(m_25)));
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
  ATerm w_25 = NULL,x_25 = NULL,y_25 = NULL;
  w_25 = t;
  t_25 :
  if(match_cons(w_25, sym__2))
    {
      x_25 = ATgetArgument(w_25, 0);
      y_25 = ATgetArgument(w_25, 1);
      u_25 :
      if(((ATgetType(x_25) == AT_LIST) && ATisEmpty(x_25)))
        {
          v_25 :
          if(((ATgetType(y_25) == AT_LIST) && ATisEmpty(y_25)))
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
ATerm genzip_4 (ATerm t, ATerm n_75 (ATerm), ATerm o_75 (ATerm), ATerm p_75 (ATerm), ATerm q_75 (ATerm))
{
  ATerm a_26 (ATerm t)
  {
    ATerm u_17 = t;
    int v_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_75(t);
        LocalPopChoice(v_17);
      }
    else
      {
        t = u_17;
        {
          t = o_75(t);
          {
            t = _2(t, q_75, a_26);
            t = p_75(t);
          }
        }
      }
    return(t);
  }
  t = a_26(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm s_75 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, s_75);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm p_26 = NULL,q_26 = NULL,z_26 = NULL,a_27 = NULL,b_27 = NULL;
  p_26 = t;
  n_26 :
  if(((ATgetType(p_26) == AT_LIST) && !(ATisEmpty(p_26))))
    {
      q_26 = ATgetFirst((ATermList) p_26);
      b_27 = (ATerm) ATgetNext((ATermList) p_26);
      o_26 :
      if(match_cons(q_26, sym__2))
        {
          z_26 = ATgetArgument(q_26, 0);
          a_27 = ATgetArgument(q_26, 1);
          {
            ATerm f_27 = NULL,g_27 = NULL,m_27 = NULL,s_27 = NULL;
            ATerm w_17;
            w_17 = t;
            {
              ATerm h_27 = NULL;
              ATerm j_27 = NULL,k_27 = NULL,l_27 = NULL;
              t = not_null(a_27);
              {
                h_27 = t;
                {
                  t = SSL_explode_term(not_null(h_27));
                  {
                    j_27 = t;
                    e_26 :
                    if(match_cons(j_27, sym__2))
                      {
                        k_27 = ATgetArgument(j_27, 0);
                        l_27 = ATgetArgument(j_27, 1);
                        {
                          if(((f_27 != NULL) && (f_27 != k_27)))
                            _fail(k_27);
                          else
                            f_27 = k_27;
                          if(((g_27 != NULL) && (g_27 != l_27)))
                            _fail(l_27);
                          else
                            g_27 = l_27;
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
            t = w_17;
            {
              ATerm x_17;
              x_17 = t;
              {
                ATerm n_27 = NULL;
                ATerm p_27 = NULL,q_27 = NULL,r_27 = NULL;
                t = not_null(z_26);
                {
                  n_27 = t;
                  {
                    t = SSL_explode_term(not_null(n_27));
                    {
                      p_27 = t;
                      l_26 :
                      if(match_cons(p_27, sym__2))
                        {
                          q_27 = ATgetArgument(p_27, 0);
                          r_27 = ATgetArgument(p_27, 1);
                          {
                            if(((f_27 != NULL) && (f_27 != q_27)))
                              _fail(q_27);
                            else
                              f_27 = q_27;
                            if(((m_27 != NULL) && (m_27 != r_27)))
                              _fail(r_27);
                            else
                              m_27 = r_27;
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
              t = x_17;
              {
                ATerm t_27 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(m_27), not_null(g_27));
                {
                  t = zip_1(t, _id);
                  {
                    t_27 = t;
                    if(((s_27 != NULL) && (s_27 != t_27)))
                      _fail(t_27);
                    else
                      s_27 = t_27;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(s_27), not_null(b_27));
                  {
                    ATerm a_18 = t;
                    int b_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = conc_two_lists_0(t);
                        LocalPopChoice(b_18);
                      }
                    else
                      {
                        t = a_18;
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
  ATerm d_28 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL,h_28 = NULL;
  d_28 = t;
  b_28 :
  if(((ATgetType(d_28) == AT_LIST) && !(ATisEmpty(d_28))))
    {
      e_28 = ATgetFirst((ATermList) d_28);
      h_28 = (ATerm) ATgetNext((ATermList) d_28);
      c_28 :
      if(match_cons(e_28, sym__2))
        {
          f_28 = ATgetArgument(e_28, 0);
          g_28 = ATgetArgument(e_28, 1);
          {
            ATerm j_28 = NULL;
            if(((f_28 != NULL) && (f_28 != g_28)))
              _fail(g_28);
            else
              f_28 = g_28;
            {
              if(((j_28 != NULL) && (j_28 != h_28)))
                _fail(h_28);
              else
                j_28 = h_28;
              t = not_null(j_28);
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
  ATerm e_18 = t;
  int f_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_2 (ATerm t)
      {
        ATerm m_28 = NULL;
        m_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(m_28));
        return(t);
      }
      ATerm h_2 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm i_2 (ATerm t)
      {
        ATerm g_18 = t;
        int i_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_2 (ATerm t)
            {
              ATerm l_18 = t;
              int m_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  LocalPopChoice(m_18);
                }
              else
                {
                  t = l_18;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, j_2);
            LocalPopChoice(i_18);
          }
        else
          {
            t = g_18;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, g_2, h_2, i_2);
      LocalPopChoice(f_18);
    }
  else
    {
      t = e_18;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm GnNext_3 (ATerm t, ATerm l_94 (ATerm), ATerm m_94 (ATerm), ATerm n_94 (ATerm))
{
  ATerm d_29 = NULL,h_29 = NULL,i_29 = NULL,j_29 = NULL,k_29 = NULL,l_29 = NULL,m_29 = NULL,n_29 = NULL;
  d_29 = t;
  x_28 :
  if(match_cons(d_29, sym__5))
    {
      h_29 = ATgetArgument(d_29, 0);
      k_29 = ATgetArgument(d_29, 1);
      l_29 = ATgetArgument(d_29, 2);
      m_29 = ATgetArgument(d_29, 3);
      n_29 = ATgetArgument(d_29, 4);
      c_29 :
      if(((ATgetType(h_29) == AT_LIST) && !(ATisEmpty(h_29))))
        {
          i_29 = ATgetFirst((ATermList) h_29);
          j_29 = (ATerm) ATgetNext((ATermList) h_29);
          {
            ATerm w_29 = NULL,x_29 = NULL,y_29 = NULL,c_30 = NULL,e_30 = NULL,g_30 = NULL;
            ATerm n_18;
            n_18 = t;
            {
              ATerm z_29 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(i_29), not_null(l_29));
              {
                ATerm a_30 = NULL;
                t = l_94(t);
                {
                  z_29 = t;
                  {
                    if(((w_29 != NULL) && (w_29 != z_29)))
                      _fail(z_29);
                    else
                      w_29 = z_29;
                    {
                      t = not_null(w_29);
                      {
                        ATerm b_30 = NULL;
                        t = m_94(t);
                        {
                          a_30 = t;
                          {
                            if(((x_29 != NULL) && (x_29 != a_30)))
                              _fail(a_30);
                            else
                              x_29 = a_30;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, not_null(x_29), not_null(k_29));
                              {
                                t = diff_0(t);
                                {
                                  b_30 = t;
                                  if(((y_29 != NULL) && (y_29 != b_30)))
                                    _fail(b_30);
                                  else
                                    y_29 = b_30;
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
            t = n_18;
            {
              ATerm o_18;
              o_18 = t;
              {
                ATerm d_30 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(y_29), not_null(j_29));
                {
                  ATerm t_18 = t;
                  int u_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = conc_two_lists_0(t);
                      LocalPopChoice(u_18);
                    }
                  else
                    {
                      t = t_18;
                      t = conc_more_lists_0(t);
                    }
                  {
                    d_30 = t;
                    if(((c_30 != NULL) && (c_30 != d_30)))
                      _fail(d_30);
                    else
                      c_30 = d_30;
                  }
                }
              }
              t = o_18;
              {
                ATerm x_18;
                x_18 = t;
                {
                  ATerm f_30 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(y_29), not_null(k_29));
                  {
                    ATerm y_18 = t;
                    int z_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = conc_two_lists_0(t);
                        LocalPopChoice(z_18);
                      }
                    else
                      {
                        t = y_18;
                        t = conc_more_lists_0(t);
                      }
                    {
                      f_30 = t;
                      if(((e_30 != NULL) && (e_30 != f_30)))
                        _fail(f_30);
                      else
                        e_30 = f_30;
                    }
                  }
                }
                t = x_18;
                {
                  ATerm h_30 = NULL;
                  t = (ATerm) ATmakeAppl(sym__3, not_null(i_29), not_null(w_29), not_null(m_29));
                  {
                    t = n_94(t);
                    {
                      h_30 = t;
                      if(((g_30 != NULL) && (g_30 != h_30)))
                        _fail(h_30);
                      else
                        g_30 = h_30;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__5, not_null(c_30), not_null(e_30), not_null(l_29), not_null(g_30), not_null(n_29));
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
  ATerm s_30 = NULL,t_30 = NULL,u_30 = NULL,v_30 = NULL,w_30 = NULL,x_30 = NULL;
  s_30 = t;
  q_30 :
  if(match_cons(s_30, sym__5))
    {
      t_30 = ATgetArgument(s_30, 0);
      u_30 = ATgetArgument(s_30, 1);
      v_30 = ATgetArgument(s_30, 2);
      w_30 = ATgetArgument(s_30, 3);
      x_30 = ATgetArgument(s_30, 4);
      r_30 :
      if(((ATgetType(t_30) == AT_LIST) && ATisEmpty(t_30)))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_30), not_null(x_30));
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
  ATerm k_31 = NULL,l_31 = NULL,m_31 = NULL,n_31 = NULL;
  k_31 = t;
  e_31 :
  if(match_cons(k_31, sym__3))
    {
      l_31 = ATgetArgument(k_31, 0);
      m_31 = ATgetArgument(k_31, 1);
      n_31 = ATgetArgument(k_31, 2);
      t = (ATerm) ATmakeAppl(sym__5, not_null(l_31), not_null(l_31), not_null(m_31), not_null(n_31), (ATerm) ATempty);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm c_67 (ATerm), ATerm d_67 (ATerm))
{
  ATerm s_31 (ATerm t)
  {
    ATerm a_19 = t;
    int f_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_67(t);
        LocalPopChoice(f_19);
      }
    else
      {
        t = a_19;
        {
          t = d_67(t);
          t = s_31(t);
        }
      }
    return(t);
  }
  t = s_31(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm f_67 (ATerm), ATerm g_67 (ATerm), ATerm h_67 (ATerm))
{
  t = f_67(t);
  t = while_not_2(t, g_67, h_67);
  return(t);
}
ATerm graph_nodes_undef_roots_3 (ATerm t, ATerm t_93 (ATerm), ATerm u_93 (ATerm), ATerm v_93 (ATerm))
{
  ATerm k_2 (ATerm t)
  {
    ATerm g_19 = t;
    int h_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3(t, t_93, u_93, v_93);
        LocalPopChoice(h_19);
      }
    else
      {
        t = g_19;
        t = GnUndefined_0(t);
      }
    return(t);
  }
  t = for_3(t, GnInitRoots_0, GnExit_0, k_2);
  return(t);
}
ATerm graph_nodes_roots_3 (ATerm t, ATerm i_94 (ATerm), ATerm j_94 (ATerm), ATerm k_94 (ATerm))
{
  ATerm v_31 = NULL,w_31 = NULL,x_31 = NULL;
  t = graph_nodes_undef_roots_3(t, i_94, j_94, k_94);
  {
    v_31 = t;
    u_31 :
    if(match_cons(v_31, sym__2))
      {
        w_31 = ATgetArgument(v_31, 0);
        x_31 = ATgetArgument(v_31, 1);
        t = not_null(w_31);
      }
    else
      {
        _fail(t);
      }
  }
  return(t);
}
ATerm pack_stratego_modules_1 (ATerm t, ATerm t_65 (ATerm))
{
  ATerm f_32 = NULL;
  ATerm g_32 = NULL;
  g_32 = t;
  if(((f_32 != NULL) && (f_32 != g_32)))
    _fail(g_32);
  else
    f_32 = g_32;
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, not_null(f_32)), term_l_19), term_k_19), term_p_13, (ATerm) ATempty);
    {
      ATerm l_2 (ATerm t)
      {
        t = Fst_0(t);
        {
          ATerm n_2 (ATerm t)
          {
            ATerm h_32 = NULL;
            ATerm i_32 = NULL;
            t = term_p_13;
            {
              t = t_65(t);
              {
                i_32 = t;
                if(((h_32 != NULL) && (h_32 != i_32)))
                  _fail(i_32);
                else
                  h_32 = i_32;
              }
            }
            t = (ATerm) ATinsert(CheckATermList(not_null(h_32)), term_m_19);
            return(t);
          }
          t = get_module_1(t, n_2);
        }
        return(t);
      }
      ATerm m_2 (ATerm t)
      {
        ATerm j_32 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL;
        j_32 = t;
        e_32 :
        if(match_cons(j_32, sym__3))
          {
            k_32 = ATgetArgument(j_32, 0);
            l_32 = ATgetArgument(j_32, 1);
            m_32 = ATgetArgument(j_32, 2);
            t = (ATerm) ATinsert(CheckATermList(not_null(m_32)), not_null(l_32));
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = graph_nodes_roots_3(t, l_2, get_stratego_imports_0, m_2);
      {
        t = unzip_0(t);
        t = _2(t, _id, flatten_stratego_0);
      }
    }
  }
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm u_32 = NULL;
  u_32 = t;
  t = SSL_close_file(not_null(u_32));
  return(t);
}
ATerm Sep_1 (ATerm t, ATerm l_73 (ATerm))
{
  ATerm a_33 = NULL,b_33 = NULL,c_33 = NULL;
  a_33 = t;
  z_32 :
  if(((ATgetType(a_33) == AT_LIST) && !(ATisEmpty(a_33))))
    {
      b_33 = ATgetFirst((ATermList) a_33);
      c_33 = (ATerm) ATgetNext((ATermList) a_33);
      {
        ATerm f_33 = NULL;
        ATerm g_33 = NULL;
        t = term_p_13;
        {
          t = l_73(t);
          {
            g_33 = t;
            if(((f_33 != NULL) && (f_33 != g_33)))
              _fail(g_33);
            else
              f_33 = g_33;
          }
        }
        t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(c_33)), not_null(b_33)), not_null(f_33));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm separate_by_1 (ATerm t, ATerm j_73 (ATerm))
{
  ATerm n_19 = t;
  int o_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(o_19);
    }
  else
    {
      t = n_19;
      {
        ATerm o_2 (ATerm t)
        {
          ATerm t_19 = t;
          int u_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(u_19);
            }
          else
            {
              t = t_19;
              {
                t = Cons_2(t, _id, o_2);
                t = Sep_1(t, j_73);
              }
            }
          return(t);
        }
        t = Cons_2(t, _id, o_2);
      }
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm s_84 (ATerm))
{
  ATerm w_19;
  w_19 = t;
  {
    t = s_84(t);
    {
      ATerm p_2 (ATerm t)
      {
        t = term_b_20;
        return(t);
      }
      t = debug_1(t, p_2);
    }
  }
  t = w_19;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm o_33 = NULL,p_33 = NULL;
  ATerm c_20 = t;
  int d_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_33 = NULL,r_33 = NULL,s_33 = NULL;
      q_33 = t;
      l_33 :
      if(match_cons(q_33, sym__2))
        {
          r_33 = ATgetArgument(q_33, 0);
          s_33 = ATgetArgument(q_33, 1);
          {
            if(((p_33 != NULL) && (p_33 != r_33)))
              _fail(r_33);
            else
              p_33 = r_33;
            if(((o_33 != NULL) && (o_33 != s_33)))
              _fail(s_33);
            else
              o_33 = s_33;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(d_20);
      t = SSL_open_file(not_null(p_33), not_null(o_33));
    }
  else
    {
      t = c_20;
      {
        ATerm t_33 = NULL;
        ATerm u_33 = NULL;
        ATerm q_2 (ATerm t)
        {
          t = term_e_20;
          return(t);
        }
        t = obsolete_1(t, q_2);
        {
          t_33 = t;
          {
            if(((p_33 != NULL) && (p_33 != t_33)))
              _fail(t_33);
            else
              p_33 = t_33;
            {
              ATerm f_20;
              f_20 = t;
              {
                ATerm v_33 = NULL;
                t = term_z_13;
                {
                  v_33 = t;
                  if(((u_33 != NULL) && (u_33 != v_33)))
                    _fail(v_33);
                  else
                    u_33 = v_33;
                }
              }
              t = f_20;
              t = SSL_open_file(not_null(p_33), not_null(u_33));
            }
          }
        }
      }
    }
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
ATerm add_extension_0 (ATerm t)
{
  ATerm b_34 = NULL,c_34 = NULL,d_34 = NULL;
  b_34 = t;
  a_34 :
  if(match_cons(b_34, sym__2))
    {
      c_34 = ATgetArgument(b_34, 0);
      d_34 = ATgetArgument(b_34, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(d_34)), term_m_19), not_null(c_34));
        t = concat_strings_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm create_dep_file_1 (ATerm t, ATerm u_94 (ATerm))
{
  ATerm p_34 = NULL,q_34 = NULL,r_34 = NULL;
  p_34 = t;
  o_34 :
  if(match_cons(p_34, sym__2))
    {
      q_34 = ATgetArgument(p_34, 0);
      r_34 = ATgetArgument(p_34, 1);
      {
        ATerm u_34 = NULL,v_34 = NULL;
        ATerm w_34 = NULL;
        t = not_null(q_34);
        {
          ATerm x_34 = NULL,z_34 = NULL;
          t = u_94(t);
          {
            w_34 = t;
            {
              if(((u_34 != NULL) && (u_34 != w_34)))
                _fail(w_34);
              else
                u_34 = w_34;
              {
                ATerm y_34 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(u_34), term_g_20);
                {
                  t = add_extension_0(t);
                  {
                    y_34 = t;
                    if(((x_34 != NULL) && (x_34 != y_34)))
                      _fail(y_34);
                    else
                      x_34 = y_34;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(x_34), term_z_13);
                  {
                    ATerm a_35 = NULL;
                    t = open_file_0(t);
                    {
                      z_34 = t;
                      {
                        if(((v_34 != NULL) && (v_34 != z_34)))
                          _fail(z_34);
                        else
                          v_34 = z_34;
                        {
                          ATerm b_35 = NULL;
                          t = (ATerm) ATinsert(CheckATermList(not_null(r_34)), term_h_20);
                          {
                            ATerm r_2 (ATerm t)
                            {
                              t = term_l_20;
                              return(t);
                            }
                            t = separate_by_1(t, r_2);
                            {
                              b_35 = t;
                              if(((a_35 != NULL) && (a_35 != b_35)))
                                _fail(b_35);
                              else
                                a_35 = b_35;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(v_34), (ATerm) ATinsert(CheckATermList(not_null(a_35)), not_null(u_34)));
                            {
                              t = printnl_0(t);
                              {
                                t = not_null(v_34);
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_34), not_null(r_34));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm i_35 = NULL;
  i_35 = t;
  t = SSL_implode_string(not_null(i_35));
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm m_35 = NULL;
  m_35 = t;
  t = SSL_explode_string(not_null(m_35));
  return(t);
}
ATerm _2 (ATerm t, ATerm b_54 (ATerm), ATerm c_54 (ATerm))
{
  ATerm y_35 = NULL,z_35 = NULL,a_36 = NULL;
  y_35 = t;
  x_35 :
  if(match_cons(y_35, sym__2))
    {
      z_35 = ATgetArgument(y_35, 0);
      a_36 = ATgetArgument(y_35, 1);
      {
        ATerm e_36 = NULL,g_36 = NULL;
        ATerm f_36 = NULL;
        t = SSLgetAnnotations(not_null(y_35));
        {
          f_36 = t;
          if(((e_36 != NULL) && (e_36 != f_36)))
            _fail(f_36);
          else
            e_36 = f_36;
        }
        {
          t = not_null(z_35);
          {
            ATerm i_36 = NULL;
            t = b_54(t);
            {
              g_36 = t;
              {
                t = not_null(a_36);
                {
                  ATerm k_36 = NULL;
                  t = c_54(t);
                  {
                    i_36 = t;
                    {
                      ATerm l_36 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(g_36), not_null(i_36)), not_null(e_36));
                      {
                        l_36 = t;
                        if(((k_36 != NULL) && (k_36 != l_36)))
                          _fail(l_36);
                        else
                          k_36 = l_36;
                      }
                      t = not_null(k_36);
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
    ATerm u_20 = t;
    int v_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(v_20);
      }
    else
      {
        t = u_20;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm l_84 (ATerm))
{
  ATerm w_20;
  w_20 = t;
  {
    ATerm t_36 = NULL,v_36 = NULL;
    ATerm x_20;
    x_20 = t;
    {
      ATerm u_36 = NULL;
      t = l_84(t);
      {
        u_36 = t;
        if(((t_36 != NULL) && (t_36 != u_36)))
          _fail(u_36);
        else
          t_36 = u_36;
      }
    }
    t = x_20;
    {
      ATerm w_36 = NULL;
      w_36 = t;
      if(((v_36 != NULL) && (v_36 != w_36)))
        _fail(w_36);
      else
        v_36 = w_36;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_36)), not_null(t_36)));
        t = printnl_0(t);
      }
    }
  }
  t = w_20;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm a_37 = NULL;
  a_37 = t;
  t = SSL_is_string(not_null(a_37));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm y_20 = t;
  int z_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(z_20);
    }
  else
    {
      t = y_20;
      {
        ATerm e_21 = t;
        int i_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_2 (ATerm t)
            {
              ATerm o_21 = t;
              int p_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(p_21);
                }
              else
                {
                  t = o_21;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, s_2);
            LocalPopChoice(i_21);
          }
        else
          {
            t = e_21;
            {
              ATerm l_37 = NULL,o_37 = NULL,p_37 = NULL;
              l_37 = t;
              k_37 :
              if(match_cons(l_37, sym_Path_1))
                {
                  o_37 = ATgetArgument(l_37, 0);
                  t = not_null(o_37);
                }
              else
                {
                  if(match_cons(l_37, sym_Var_1))
                    {
                      o_37 = ATgetArgument(l_37, 0);
                      {
                        t = not_null(o_37);
                        {
                          ATerm q_21 = t;
                          int r_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(r_21);
                            }
                          else
                            {
                              t = q_21;
                              {
                                ATerm v_2 (ATerm t)
                                {
                                  t = term_v_21;
                                  return(t);
                                }
                                t = debug_1(t, v_2);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(l_37, sym_Prefix_2))
                        {
                          o_37 = ATgetArgument(l_37, 0);
                          p_37 = ATgetArgument(l_37, 1);
                          {
                            ATerm w_37 = NULL,y_37 = NULL;
                            ATerm w_21;
                            w_21 = t;
                            {
                              ATerm x_37 = NULL;
                              t = not_null(o_37);
                              {
                                t = eval_config_0(t);
                                {
                                  x_37 = t;
                                  if(((w_37 != NULL) && (w_37 != x_37)))
                                    _fail(x_37);
                                  else
                                    w_37 = x_37;
                                }
                              }
                            }
                            t = w_21;
                            {
                              ATerm z_37 = NULL;
                              t = not_null(p_37);
                              {
                                t = eval_config_0(t);
                                {
                                  z_37 = t;
                                  if(((y_37 != NULL) && (y_37 != z_37)))
                                    _fail(z_37);
                                  else
                                    y_37 = z_37;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(w_37), not_null(y_37));
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
  ATerm h_38 = NULL;
  h_38 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_x_21, not_null(h_38));
    {
      t = table_get_0(t);
      {
        ATerm y_21 = t;
        int z_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm a_22;
              a_22 = t;
              {
                ATerm j_38 = NULL;
                ATerm k_38 = NULL;
                k_38 = t;
                if(((j_38 != NULL) && (j_38 != k_38)))
                  _fail(k_38);
                else
                  j_38 = k_38;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_x_21, not_null(h_38), not_null(j_38));
                  t = table_put_0(t);
                }
              }
              t = a_22;
            }
            LocalPopChoice(z_21);
          }
        else
          {
            t = y_21;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm w_65 (ATerm))
{
  ATerm b_22 = t;
  int c_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_65(t);
      LocalPopChoice(c_22);
    }
  else
    {
      t = b_22;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm r_38 = NULL,t_38 = NULL,u_38 = NULL;
  r_38 = t;
  q_38 :
  if(match_cons(r_38, sym__2))
    {
      t_38 = ATgetArgument(r_38, 0);
      u_38 = ATgetArgument(r_38, 1);
      t = SSL_WriteToTextFile(not_null(t_38), not_null(u_38));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm f_39 = NULL,g_39 = NULL,h_39 = NULL;
  f_39 = t;
  e_39 :
  if(match_cons(f_39, sym__2))
    {
      g_39 = ATgetArgument(f_39, 0);
      h_39 = ATgetArgument(f_39, 1);
      t = SSL_WriteToBinaryFile(not_null(g_39), not_null(h_39));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm d_81 (ATerm))
{
  ATerm d_22 = t;
  int e_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(e_22);
    }
  else
    {
      t = d_22;
      {
        ATerm f_22 = t;
        int g_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_2 (ATerm t)
            {
              t = filter_1(t, d_81);
              return(t);
            }
            t = Cons_2(t, d_81, x_2);
            LocalPopChoice(g_22);
          }
        else
          {
            t = f_22;
            {
              ATerm n_39 = NULL,o_39 = NULL,p_39 = NULL;
              n_39 = t;
              m_39 :
              if(((ATgetType(n_39) == AT_LIST) && !(ATisEmpty(n_39))))
                {
                  o_39 = ATgetFirst((ATermList) n_39);
                  p_39 = (ATerm) ATgetNext((ATermList) n_39);
                  {
                    t = not_null(p_39);
                    t = filter_1(t, d_81);
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
ATerm string_to_int_0 (ATerm t)
{
  ATerm x_39 = NULL;
  x_39 = t;
  t = SSL_string_to_int(not_null(x_39));
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm o_22 = t;
  int p_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_2 (ATerm t)
      {
        ATerm x_40 = NULL;
        x_40 = t;
        c_40 :
        if(!(match_string(x_40, "-i")))
          {
            if(!(match_string(x_40, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm b_3 (ATerm t)
      {
        ATerm a_41 = NULL;
        ATerm q_22;
        q_22 = t;
        {
          ATerm y_40 = NULL;
          ATerm z_40 = NULL;
          z_40 = t;
          if(((y_40 != NULL) && (y_40 != z_40)))
            _fail(z_40);
          else
            y_40 = z_40;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_n_14, not_null(y_40));
            t = set_config_0(t);
          }
        }
        t = q_22;
        {
          ATerm b_41 = NULL;
          b_41 = t;
          if(((a_41 != NULL) && (a_41 != b_41)))
            _fail(b_41);
          else
            a_41 = b_41;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(a_41));
        }
        return(t);
      }
      ATerm d_3 (ATerm t)
      {
        t = term_r_22;
        return(t);
      }
      t = ArgOption_3(t, y_2, b_3, d_3);
      LocalPopChoice(p_22);
    }
  else
    {
      t = o_22;
      {
        ATerm s_22 = t;
        int t_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_3 (ATerm t)
            {
              ATerm c_41 = NULL;
              c_41 = t;
              l_40 :
              if(!(match_string(c_41, "-o")))
                {
                  if(!(match_string(c_41, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm h_3 (ATerm t)
            {
              ATerm f_41 = NULL;
              ATerm u_22;
              u_22 = t;
              {
                ATerm d_41 = NULL;
                ATerm e_41 = NULL;
                e_41 = t;
                if(((d_41 != NULL) && (d_41 != e_41)))
                  _fail(e_41);
                else
                  d_41 = e_41;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_i_14, not_null(d_41));
                  t = set_config_0(t);
                }
              }
              t = u_22;
              {
                ATerm g_41 = NULL;
                g_41 = t;
                if(((f_41 != NULL) && (f_41 != g_41)))
                  _fail(g_41);
                else
                  f_41 = g_41;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(f_41));
              }
              return(t);
            }
            ATerm i_3 (ATerm t)
            {
              t = term_v_22;
              return(t);
            }
            t = ArgOption_3(t, g_3, h_3, i_3);
            LocalPopChoice(t_22);
          }
        else
          {
            t = s_22;
            {
              ATerm a_23 = t;
              int b_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_3 (ATerm t)
                  {
                    ATerm h_41 = NULL;
                    h_41 = t;
                    o_40 :
                    if(!(match_string(h_41, "-S")))
                      {
                        if(!(match_string(h_41, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm k_3 (ATerm t)
                  {
                    t = term_d_23;
                    t = set_config_0(t);
                    t = term_i_23;
                    return(t);
                  }
                  ATerm m_3 (ATerm t)
                  {
                    t = term_j_23;
                    return(t);
                  }
                  t = Option_3(t, j_3, k_3, m_3);
                  LocalPopChoice(b_23);
                }
              else
                {
                  t = a_23;
                  {
                    ATerm k_23 = t;
                    int l_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm p_3 (ATerm t)
                        {
                          ATerm i_41 = NULL;
                          i_41 = t;
                          p_40 :
                          if(!(match_string(i_41, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm s_3 (ATerm t)
                        {
                          ATerm l_41 = NULL;
                          ATerm m_23;
                          m_23 = t;
                          {
                            ATerm j_41 = NULL;
                            ATerm k_41 = NULL;
                            t = string_to_int_0(t);
                            {
                              k_41 = t;
                              if(((j_41 != NULL) && (j_41 != k_41)))
                                _fail(k_41);
                              else
                                j_41 = k_41;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_w_8, not_null(j_41));
                              t = set_config_0(t);
                            }
                          }
                          t = m_23;
                          {
                            ATerm m_41 = NULL;
                            m_41 = t;
                            if(((l_41 != NULL) && (l_41 != m_41)))
                              _fail(m_41);
                            else
                              l_41 = m_41;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(l_41));
                          }
                          return(t);
                        }
                        ATerm t_3 (ATerm t)
                        {
                          t = term_n_23;
                          return(t);
                        }
                        t = ArgOption_3(t, p_3, s_3, t_3);
                        LocalPopChoice(l_23);
                      }
                    else
                      {
                        t = k_23;
                        {
                          ATerm o_23 = t;
                          int p_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm u_3 (ATerm t)
                              {
                                ATerm n_41 = NULL;
                                n_41 = t;
                                s_40 :
                                if(!(match_string(n_41, "-k")))
                                  {
                                    if(!(match_string(n_41, "--keep")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm f_4 (ATerm t)
                              {
                                ATerm q_23;
                                q_23 = t;
                                {
                                  ATerm o_41 = NULL;
                                  ATerm p_41 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    p_41 = t;
                                    if(((o_41 != NULL) && (o_41 != p_41)))
                                      _fail(p_41);
                                    else
                                      o_41 = p_41;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_p_8, not_null(o_41));
                                    t = set_config_0(t);
                                  }
                                }
                                t = q_23;
                                return(t);
                              }
                              ATerm g_4 (ATerm t)
                              {
                                t = term_s_23;
                                return(t);
                              }
                              t = ArgOption_3(t, u_3, f_4, g_4);
                              LocalPopChoice(p_23);
                            }
                          else
                            {
                              t = o_23;
                              {
                                ATerm t_23 = t;
                                int u_23 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm h_4 (ATerm t)
                                    {
                                      ATerm q_41 = NULL;
                                      q_41 = t;
                                      u_40 :
                                      if(!(match_string(q_41, "-v")))
                                        {
                                          if(!(match_string(q_41, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm i_4 (ATerm t)
                                    {
                                      t = term_w_23;
                                      t = set_config_0(t);
                                      t = term_b_24;
                                      return(t);
                                    }
                                    ATerm j_4 (ATerm t)
                                    {
                                      t = term_c_24;
                                      return(t);
                                    }
                                    t = Option_3(t, h_4, i_4, j_4);
                                    LocalPopChoice(u_23);
                                  }
                                else
                                  {
                                    t = t_23;
                                    {
                                      ATerm d_24 = t;
                                      int e_24 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm k_4 (ATerm t)
                                          {
                                            ATerm r_41 = NULL;
                                            r_41 = t;
                                            v_40 :
                                            if(!(match_string(r_41, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm p_4 (ATerm t)
                                          {
                                            t = term_g_24;
                                            t = set_config_0(t);
                                            t = term_i_24;
                                            return(t);
                                          }
                                          ATerm q_4 (ATerm t)
                                          {
                                            t = term_q_24;
                                            return(t);
                                          }
                                          t = Option_3(t, k_4, p_4, q_4);
                                          LocalPopChoice(e_24);
                                        }
                                      else
                                        {
                                          t = d_24;
                                          {
                                            ATerm r_4 (ATerm t)
                                            {
                                              ATerm s_41 = NULL;
                                              s_41 = t;
                                              w_40 :
                                              if(!(match_string(s_41, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm s_4 (ATerm t)
                                            {
                                              t = term_s_24;
                                              t = set_config_0(t);
                                              t = term_t_24;
                                              return(t);
                                            }
                                            ATerm v_4 (ATerm t)
                                            {
                                              t = term_u_24;
                                              return(t);
                                            }
                                            t = Option_3(t, r_4, s_4, v_4);
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
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm g_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL,k_42 = NULL;
  g_42 = t;
  d_42 :
  if(match_string(g_42, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(g_42) == AT_LIST) && !(ATisEmpty(g_42))))
        {
          h_42 = ATgetFirst((ATermList) g_42);
          i_42 = (ATerm) ATgetNext((ATermList) g_42);
          e_42 :
          if(((ATgetType(i_42) == AT_LIST) && !(ATisEmpty(i_42))))
            {
              j_42 = ATgetFirst((ATermList) i_42);
              k_42 = (ATerm) ATgetNext((ATermList) i_42);
              {
                ATerm p_42 = NULL;
                ATerm z_24;
                z_24 = t;
                {
                  t = not_null(h_42);
                  t = j_0(t);
                }
                t = z_24;
                {
                  ATerm q_42 = NULL;
                  t = not_null(j_42);
                  {
                    t = k_0(t);
                    {
                      q_42 = t;
                      if(((p_42 != NULL) && (p_42 != q_42)))
                        _fail(q_42);
                      else
                        p_42 = q_42;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(k_42)), not_null(p_42));
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
ATerm concat_0 (ATerm t)
{
  ATerm a_25 = t;
  int b_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(b_25);
    }
  else
    {
      t = a_25;
      {
        ATerm c_43 = NULL,d_43 = NULL,e_43 = NULL;
        c_43 = t;
        b_43 :
        if(((ATgetType(c_43) == AT_LIST) && !(ATisEmpty(c_43))))
          {
            d_43 = ATgetFirst((ATermList) c_43);
            e_43 = (ATerm) ATgetNext((ATermList) c_43);
            {
              t = not_null(d_43);
              {
                ATerm w_4 (ATerm t)
                {
                  t = not_null(e_43);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, w_4);
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
  ATerm s_43 = NULL;
  ATerm u_43 = NULL;
  s_43 = t;
  {
    ATerm v_43 = NULL;
    ATerm x_43 = NULL,y_43 = NULL,z_43 = NULL;
    t = not_null(s_43);
    {
      v_43 = t;
      {
        t = SSL_explode_term(not_null(v_43));
        {
          x_43 = t;
          q_43 :
          if(match_cons(x_43, sym__2))
            {
              y_43 = ATgetArgument(x_43, 0);
              z_43 = ATgetArgument(x_43, 1);
              r_43 :
              if(match_string(y_43, ""))
                {
                  if(((u_43 != NULL) && (u_43 != z_43)))
                    _fail(z_43);
                  else
                    u_43 = z_43;
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
      t = not_null(u_43);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm d_74 (ATerm))
{
  ATerm e_44 (ATerm t)
  {
    ATerm c_25 = t;
    int n_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, e_44);
        LocalPopChoice(n_25);
      }
    else
      {
        t = c_25;
        {
          t = Nil_0(t);
          t = d_74(t);
        }
      }
    return(t);
  }
  t = e_44(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm h_44 = NULL,i_44 = NULL,j_44 = NULL;
  h_44 = t;
  g_44 :
  if(match_cons(h_44, sym__2))
    {
      i_44 = ATgetArgument(h_44, 0);
      j_44 = ATgetArgument(h_44, 1);
      {
        t = not_null(i_44);
        {
          ATerm x_4 (ATerm t)
          {
            t = not_null(j_44);
            return(t);
          }
          t = at_end_1(t, x_4);
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
  ATerm o_25 = t;
  int p_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(p_25);
    }
  else
    {
      t = o_25;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm extend_config_0 (ATerm t)
{
  ATerm t_44 = NULL,u_44 = NULL,v_44 = NULL;
  t_44 = t;
  q_44 :
  if(match_cons(t_44, sym__2))
    {
      u_44 = ATgetArgument(t_44, 0);
      v_44 = ATgetArgument(t_44, 1);
      {
        ATerm b_45 = NULL;
        ATerm c_45 = NULL,e_45 = NULL;
        ATerm d_45 = NULL;
        t = not_null(u_44);
        {
          ATerm q_25 = t;
          int r_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(r_25);
            }
          else
            {
              t = q_25;
              t = (ATerm) ATempty;
            }
          {
            d_45 = t;
            if(((c_45 != NULL) && (c_45 != d_45)))
              _fail(d_45);
            else
              c_45 = d_45;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_44), not_null(c_45));
          {
            ATerm s_25 = t;
            int z_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(z_25);
              }
            else
              {
                t = s_25;
                t = conc_more_lists_0(t);
              }
            {
              e_45 = t;
              if(((b_45 != NULL) && (b_45 != e_45)))
                _fail(e_45);
              else
                b_45 = e_45;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_x_21, not_null(u_44), not_null(b_45));
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
ATerm pack_options_0 (ATerm t)
{
  ATerm b_26 = t;
  int c_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_5 (ATerm t)
      {
        ATerm n_45 = NULL;
        n_45 = t;
        i_45 :
        if(!(match_string(n_45, "-I")))
          {
            if(!(match_string(n_45, "--Include")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm i_5 (ATerm t)
      {
        ATerm o_45 = NULL;
        ATerm p_45 = NULL;
        p_45 = t;
        if(((o_45 != NULL) && (o_45 != p_45)))
          _fail(p_45);
        else
          o_45 = p_45;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_p_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_45)), term_p_15));
          t = extend_config_0(t);
        }
        t = term_p_13;
        return(t);
      }
      ATerm j_5 (ATerm t)
      {
        t = term_d_26;
        return(t);
      }
      t = ArgOption_3(t, f_5, i_5, j_5);
      LocalPopChoice(c_26);
    }
  else
    {
      t = b_26;
      {
        ATerm f_26 = t;
        int g_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_5 (ATerm t)
            {
              ATerm q_45 = NULL;
              q_45 = t;
              k_45 :
              if(!(match_string(q_45, "--nodep")))
                {
                  if(!(match_string(q_45, "-nodep")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm l_5 (ATerm t)
            {
              t = term_j_26;
              t = set_config_0(t);
              t = term_p_13;
              return(t);
            }
            ATerm m_5 (ATerm t)
            {
              t = term_k_26;
              return(t);
            }
            t = Option_3(t, k_5, l_5, m_5);
            LocalPopChoice(g_26);
          }
        else
          {
            t = f_26;
            {
              ATerm n_5 (ATerm t)
              {
                ATerm r_45 = NULL;
                r_45 = t;
                l_45 :
                if(!(match_string(r_45, "--dep")))
                  {
                    if(!(match_string(r_45, "-d")))
                      {
                        if(!(match_string(r_45, "-dep")))
                          {
                            _fail(t);
                          }
                      }
                  }
                return(t);
              }
              ATerm o_5 (ATerm t)
              {
                ATerm s_45 = NULL;
                ATerm y_45 = NULL;
                y_45 = t;
                if(((s_45 != NULL) && (s_45 != y_45)))
                  _fail(y_45);
                else
                  s_45 = y_45;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_m_26, not_null(s_45));
                  t = set_config_0(t);
                }
                t = term_p_13;
                return(t);
              }
              ATerm u_5 (ATerm t)
              {
                t = term_r_26;
                return(t);
              }
              t = ArgOption_3(t, n_5, o_5, u_5);
            }
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm h_46 = NULL;
  ATerm s_26;
  s_26 = t;
  {
    ATerm x_5 (ATerm t)
    {
      ATerm p_46 = NULL,q_46 = NULL;
      p_46 = t;
      g_46 :
      if(match_cons(p_46, sym_Program_1))
        {
          q_46 = ATgetArgument(p_46, 0);
          if(((h_46 != NULL) && (h_46 != q_46)))
            _fail(q_46);
          else
            h_46 = q_46;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, x_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_e_16, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_26), not_null(h_46)), term_t_26));
      {
        t = printnl_0(t);
        {
          t = term_t_8;
          t = exit_0(t);
        }
      }
    }
  }
  t = s_26;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_e_16, (ATerm) ATinsert(ATempty, term_v_26));
  {
    t = printnl_0(t);
    {
      t = term_t_8;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm u_46 = NULL;
  u_46 = t;
  t = SSL_TicksToSeconds(not_null(u_46));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm z_46 = NULL,a_47 = NULL,b_47 = NULL;
  z_46 = t;
  y_46 :
  if(match_cons(z_46, sym__2))
    {
      a_47 = ATgetArgument(z_46, 0);
      b_47 = ATgetArgument(z_46, 1);
      {
        ATerm w_26 = t;
        int x_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(a_47), not_null(b_47));
            LocalPopChoice(x_26);
          }
        else
          {
            t = w_26;
            t = SSL_addr(not_null(a_47), not_null(b_47));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm a_80 (ATerm), ATerm b_80 (ATerm))
{
  ATerm y_26 = t;
  int c_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = a_80(t);
      LocalPopChoice(c_27);
    }
  else
    {
      t = y_26;
      {
        ATerm i_47 = NULL,j_47 = NULL,k_47 = NULL;
        i_47 = t;
        h_47 :
        if(((ATgetType(i_47) == AT_LIST) && !(ATisEmpty(i_47))))
          {
            j_47 = ATgetFirst((ATermList) i_47);
            k_47 = (ATerm) ATgetNext((ATermList) i_47);
            {
              ATerm n_47 = NULL;
              ATerm o_47 = NULL;
              t = not_null(k_47);
              {
                t = foldr_2(t, a_80, b_80);
                {
                  o_47 = t;
                  if(((n_47 != NULL) && (n_47 != o_47)))
                    _fail(o_47);
                  else
                    n_47 = o_47;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(j_47), not_null(n_47));
                t = b_80(t);
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
ATerm crush_2 (ATerm t, ATerm y_78 (ATerm), ATerm z_78 (ATerm))
{
  ATerm v_47 = NULL;
  ATerm x_47 = NULL;
  v_47 = t;
  {
    ATerm y_47 = NULL;
    ATerm a_48 = NULL,b_48 = NULL,c_48 = NULL;
    t = not_null(v_47);
    {
      y_47 = t;
      {
        t = SSL_explode_term(not_null(y_47));
        {
          a_48 = t;
          u_47 :
          if(match_cons(a_48, sym__2))
            {
              b_48 = ATgetArgument(a_48, 0);
              c_48 = ATgetArgument(a_48, 1);
              if(((x_47 != NULL) && (x_47 != c_48)))
                _fail(c_48);
              else
                x_47 = c_48;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(x_47);
      t = foldr_2(t, y_78, z_78);
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
    ATerm y_5 (ATerm t)
    {
      t = term_c_23;
      return(t);
    }
    t = crush_2(t, y_5, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm i_48 = NULL,j_48 = NULL,k_48 = NULL;
  i_48 = t;
  h_48 :
  if(match_cons(i_48, sym__2))
    {
      j_48 = ATgetArgument(i_48, 0);
      k_48 = ATgetArgument(i_48, 1);
      {
        ATerm d_27;
        d_27 = t;
        {
          ATerm e_27 = t;
          int i_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(j_48), not_null(k_48));
              LocalPopChoice(i_27);
            }
          else
            {
              t = e_27;
              t = SSL_gtr(not_null(j_48), not_null(k_48));
            }
        }
        t = d_27;
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
  ATerm q_48 = NULL;
  ATerm o_27 = t;
  int u_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_48 = NULL,s_48 = NULL,t_48 = NULL;
      r_48 = t;
      p_48 :
      if(match_cons(r_48, sym__2))
        {
          s_48 = ATgetArgument(r_48, 0);
          t_48 = ATgetArgument(r_48, 1);
          {
            if(((q_48 != NULL) && (q_48 != s_48)))
              _fail(s_48);
            else
              q_48 = s_48;
            if(((q_48 != NULL) && (q_48 != t_48)))
              _fail(t_48);
            else
              q_48 = t_48;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(u_27);
    }
  else
    {
      t = o_27;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm t_86 (ATerm))
{
  ATerm v_27 = t;
  int w_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_27;
      x_27 = t;
      {
        ATerm w_48 = NULL;
        ATerm x_48 = NULL;
        t = term_w_8;
        {
          t = get_config_0(t);
          {
            x_48 = t;
            if(((w_48 != NULL) && (w_48 != x_48)))
              _fail(x_48);
            else
              w_48 = x_48;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_48), term_t_8);
          t = geq_0(t);
        }
      }
      t = x_27;
      t = t_86(t);
      LocalPopChoice(w_27);
    }
  else
    {
      t = v_27;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm z_5 (ATerm t)
  {
    ATerm l_49 = NULL,o_49 = NULL;
    ATerm y_27;
    y_27 = t;
    {
      ATerm m_49 = NULL;
      t = run_time_0(t);
      {
        m_49 = t;
        if(((l_49 != NULL) && (l_49 != m_49)))
          _fail(m_49);
        else
          l_49 = m_49;
      }
    }
    t = y_27;
    {
      ATerm p_49 = NULL;
      t = term_z_27;
      {
        t = get_config_0(t);
        {
          p_49 = t;
          if(((o_49 != NULL) && (o_49 != p_49)))
            _fail(p_49);
          else
            o_49 = p_49;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_28), not_null(l_49)), term_a_28), not_null(o_49)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, z_5);
  {
    t = term_c_23;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm b_50 = NULL;
  b_50 = t;
  a_50 :
  if(match_cons(b_50, sym_Version_0))
    {
      ATerm e_50 = NULL,h_50 = NULL;
      ATerm k_28;
      k_28 = t;
      {
        ATerm f_50 = NULL;
        t = SSLgetAnnotations(not_null(b_50));
        {
          f_50 = t;
          if(((e_50 != NULL) && (e_50 != f_50)))
            _fail(f_50);
          else
            e_50 = f_50;
        }
      }
      t = k_28;
      {
        ATerm i_50 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(e_50));
        {
          i_50 = t;
          if(((h_50 != NULL) && (h_50 != i_50)))
            _fail(i_50);
          else
            h_50 = i_50;
        }
        t = not_null(h_50);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm n_85 (ATerm))
{
  ATerm a_6 (ATerm t)
  {
    ATerm l_28 = t;
    int n_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
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
              t = Undefined_1(t, _id);
              LocalPopChoice(p_28);
            }
          else
            {
              t = o_28;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, a_6);
  t = n_85(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm w_50 = NULL;
  w_50 = t;
  t = SSL_table_create(not_null(w_50));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm c_51 = NULL;
  c_51 = t;
  {
    ATerm q_28;
    q_28 = t;
    {
      t = term_r_28;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_r_28, term_s_28, not_null(c_51));
          t = table_put_0(t);
        }
      }
    }
    t = q_28;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm s_51 = NULL;
  s_51 = t;
  t = SSL_table_destroy(not_null(s_51));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm w_51 = NULL;
  w_51 = t;
  t = SSL_exit(not_null(w_51));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm a_52 = NULL,v_52 = NULL,w_52 = NULL;
  a_52 = t;
  z_51 :
  if(((ATgetType(a_52) == AT_LIST) && ATisEmpty(a_52)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(a_52) == AT_LIST) && !(ATisEmpty(a_52))))
        {
          v_52 = ATgetFirst((ATermList) a_52);
          w_52 = (ATerm) ATgetNext((ATermList) a_52);
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
  ATerm t_28;
  t_28 = t;
  {
    ATerm b_53 = NULL;
    ATerm l_53 = NULL;
    ATerm u_28 = t;
    int v_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(v_28);
      }
    else
      {
        t = u_28;
        {
          ATerm e_53 = NULL;
          ATerm f_53 = NULL;
          f_53 = t;
          if(((e_53 != NULL) && (e_53 != f_53)))
            _fail(f_53);
          else
            e_53 = f_53;
          t = (ATerm) ATinsert(ATempty, not_null(e_53));
        }
      }
    {
      l_53 = t;
      if(((b_53 != NULL) && (b_53 != l_53)))
        _fail(l_53);
      else
        b_53 = l_53;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_28, not_null(b_53));
      t = printnl_0(t);
    }
  }
  t = t_28;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm x_88 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm o_73 (ATerm))
{
  ATerm o_53 (ATerm t)
  {
    ATerm y_28 = t;
    int z_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(z_28);
      }
    else
      {
        t = y_28;
        t = Cons_2(t, o_73, o_53);
      }
    return(t);
  }
  t = o_53(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm v_53 = NULL,x_53 = NULL,y_53 = NULL;
  y_53 = t;
  u_53 :
  if(((ATgetType(y_53) == AT_LIST) && !(ATisEmpty(y_53))))
    {
      v_53 = ATgetFirst((ATermList) y_53);
      x_53 = (ATerm) ATgetNext((ATermList) y_53);
      {
        ATerm d_54 = NULL;
        t = not_null(x_53);
        {
          ATerm a_29;
          a_29 = t;
          {
            ATerm e_54 = NULL,g_54 = NULL,i_54 = NULL;
            ATerm b_29;
            b_29 = t;
            {
              ATerm f_54 = NULL;
              t = i_0(t);
              {
                f_54 = t;
                if(((e_54 != NULL) && (e_54 != f_54)))
                  _fail(f_54);
                else
                  e_54 = f_54;
              }
            }
            t = b_29;
            {
              ATerm h_54 = NULL;
              t = not_null(v_53);
              {
                t = h_0(t);
                {
                  h_54 = t;
                  if(((g_54 != NULL) && (g_54 != h_54)))
                    _fail(h_54);
                  else
                    g_54 = h_54;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(e_54)), not_null(g_54));
                {
                  i_54 = t;
                  if(((d_54 != NULL) && (d_54 != i_54)))
                    _fail(i_54);
                  else
                    d_54 = i_54;
                }
              }
            }
          }
          t = a_29;
          {
            ATerm b_6 (ATerm t)
            {
              t = not_null(d_54);
              return(t);
            }
            t = reverse_acc_2(t, h_0, b_6);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(y_53) == AT_LIST) && ATisEmpty(y_53)))
        {
          {
            t = term_p_13;
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
  ATerm c_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, c_6);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm w_88 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm a_60 (ATerm))
{
  ATerm t_54 = NULL,u_54 = NULL;
  t_54 = t;
  s_54 :
  if(match_cons(t_54, sym_Program_1))
    {
      u_54 = ATgetArgument(t_54, 0);
      {
        ATerm x_54 = NULL,z_54 = NULL;
        ATerm y_54 = NULL;
        t = SSLgetAnnotations(not_null(t_54));
        {
          y_54 = t;
          if(((x_54 != NULL) && (x_54 != y_54)))
            _fail(y_54);
          else
            x_54 = y_54;
        }
        {
          t = not_null(u_54);
          {
            ATerm b_55 = NULL;
            t = a_60(t);
            {
              z_54 = t;
              {
                ATerm c_55 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(z_54)), not_null(x_54));
                {
                  c_55 = t;
                  if(((b_55 != NULL) && (b_55 != c_55)))
                    _fail(c_55);
                  else
                    b_55 = c_55;
                }
                t = not_null(b_55);
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
  ATerm m_55 = NULL;
  ATerm e_29 = t;
  int f_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_55 = NULL;
      t = term_z_27;
      {
        t = get_config_0(t);
        {
          n_55 = t;
          if(((m_55 != NULL) && (m_55 != n_55)))
            _fail(n_55);
          else
            m_55 = n_55;
        }
      }
      LocalPopChoice(f_29);
    }
  else
    {
      t = e_29;
      {
        ATerm d_6 (ATerm t)
        {
          ATerm j_6 (ATerm t)
          {
            ATerm o_55 = NULL;
            o_55 = t;
            if(((m_55 != NULL) && (m_55 != o_55)))
              _fail(o_55);
            else
              m_55 = o_55;
            return(t);
          }
          t = Program_1(t, j_6);
          return(t);
        }
        t = fetch_1(t, d_6);
      }
    }
  {
    t = term_g_29;
    {
      t = echo_0(t);
      {
        t = term_q_29;
        {
          t = table_get_0(t);
          {
            ATerm o_6 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, o_6);
            {
              ATerm w_6 (ATerm t)
              {
                ATerm p_55 = NULL;
                ATerm q_55 = NULL;
                q_55 = t;
                if(((p_55 != NULL) && (p_55 != q_55)))
                  _fail(q_55);
                else
                  p_55 = q_55;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_55)), term_r_29);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, w_6);
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
  ATerm w_55 = NULL,x_55 = NULL,y_55 = NULL;
  w_55 = t;
  v_55 :
  if(match_cons(w_55, sym__2))
    {
      x_55 = ATgetArgument(w_55, 0);
      y_55 = ATgetArgument(w_55, 1);
      {
        ATerm s_29;
        s_29 = t;
        t = SSL_printnl(not_null(x_55), not_null(y_55));
        t = s_29;
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
  ATerm t_29;
  t_29 = t;
  {
    ATerm d_56 = NULL;
    ATerm e_56 = NULL;
    e_56 = t;
    if(((d_56 != NULL) && (d_56 != e_56)))
      _fail(e_56);
    else
      d_56 = e_56;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_e_16, (ATerm) ATinsert(ATempty, not_null(d_56)));
      t = printnl_0(t);
    }
  }
  t = t_29;
  return(t);
}
ATerm say_1 (ATerm t, ATerm m_84 (ATerm))
{
  ATerm u_29;
  u_29 = t;
  {
    t = m_84(t);
    t = debug_0(t);
  }
  t = u_29;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm b_60 (ATerm))
{
  ATerm l_56 = NULL,m_56 = NULL;
  l_56 = t;
  k_56 :
  if(match_cons(l_56, sym_Undefined_1))
    {
      m_56 = ATgetArgument(l_56, 0);
      {
        ATerm p_56 = NULL,r_56 = NULL;
        ATerm q_56 = NULL;
        t = SSLgetAnnotations(not_null(l_56));
        {
          q_56 = t;
          if(((p_56 != NULL) && (p_56 != q_56)))
            _fail(q_56);
          else
            p_56 = q_56;
        }
        {
          t = not_null(m_56);
          {
            ATerm t_56 = NULL;
            t = b_60(t);
            {
              r_56 = t;
              {
                ATerm u_56 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(r_56)), not_null(p_56));
                {
                  u_56 = t;
                  if(((t_56 != NULL) && (t_56 != u_56)))
                    _fail(u_56);
                  else
                    t_56 = u_56;
                }
                t = not_null(t_56);
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
ATerm fetch_1 (ATerm t, ATerm x_73 (ATerm))
{
  ATerm z_56 (ATerm t)
  {
    ATerm v_29 = t;
    int i_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, x_73, _id);
        LocalPopChoice(i_30);
      }
    else
      {
        t = v_29;
        t = Cons_2(t, _id, z_56);
      }
    return(t);
  }
  t = z_56(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm w_87 (ATerm))
{
  t = fetch_1(t, w_87);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm e_57 = NULL;
  e_57 = t;
  d_57 :
  if(match_cons(e_57, sym_Help_0))
    {
      ATerm g_57 = NULL,i_57 = NULL;
      ATerm j_30;
      j_30 = t;
      {
        ATerm h_57 = NULL;
        t = SSLgetAnnotations(not_null(e_57));
        {
          h_57 = t;
          if(((g_57 != NULL) && (g_57 != h_57)))
            _fail(h_57);
          else
            g_57 = h_57;
        }
      }
      t = j_30;
      {
        ATerm j_57 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(g_57));
        {
          j_57 = t;
          if(((i_57 != NULL) && (i_57 != j_57)))
            _fail(j_57);
          else
            i_57 = j_57;
        }
        t = not_null(i_57);
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
  ATerm p_57 = NULL,q_57 = NULL,r_57 = NULL;
  p_57 = t;
  o_57 :
  if(match_cons(p_57, sym__2))
    {
      q_57 = ATgetArgument(p_57, 0);
      r_57 = ATgetArgument(p_57, 1);
      t = SSL_table_get(not_null(q_57), not_null(r_57));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm y_57 = NULL,z_57 = NULL,a_58 = NULL,b_58 = NULL;
  y_57 = t;
  x_57 :
  if(match_cons(y_57, sym__3))
    {
      z_57 = ATgetArgument(y_57, 0);
      a_58 = ATgetArgument(y_57, 1);
      b_58 = ATgetArgument(y_57, 2);
      {
        ATerm k_30;
        k_30 = t;
        {
          ATerm f_58 = NULL;
          ATerm g_58 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_57), not_null(a_58));
          {
            ATerm l_30 = t;
            int m_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(m_30);
              }
            else
              {
                t = l_30;
                t = (ATerm) ATempty;
              }
            {
              g_58 = t;
              if(((f_58 != NULL) && (f_58 != g_58)))
                _fail(g_58);
              else
                f_58 = g_58;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(z_57), not_null(a_58), (ATerm) ATinsert(CheckATermList(not_null(f_58)), not_null(b_58)));
            t = table_put_0(t);
          }
        }
        t = k_30;
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
  ATerm k_58 = NULL;
  ATerm l_58 = NULL;
  t = term_p_13;
  {
    t = b_89(t);
    {
      l_58 = t;
      if(((k_58 != NULL) && (k_58 != l_58)))
        _fail(l_58);
      else
        k_58 = l_58;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_o_29, term_p_29, not_null(k_58));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm r_58 = NULL,s_58 = NULL,t_58 = NULL;
  r_58 = t;
  q_58 :
  if(match_string(r_58, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(r_58) == AT_LIST) && !(ATisEmpty(r_58))))
        {
          s_58 = ATgetFirst((ATermList) r_58);
          t_58 = (ATerm) ATgetNext((ATermList) r_58);
          {
            ATerm w_58 = NULL;
            ATerm n_30;
            n_30 = t;
            {
              t = not_null(s_58);
              t = a_0(t);
            }
            t = n_30;
            {
              ATerm x_58 = NULL;
              t = term_p_13;
              {
                t = d_0(t);
                {
                  x_58 = t;
                  if(((w_58 != NULL) && (w_58 != x_58)))
                    _fail(x_58);
                  else
                    w_58 = x_58;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(t_58)), not_null(w_58));
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
  ATerm x_6 (ATerm t)
  {
    ATerm c_59 = NULL;
    c_59 = t;
    b_59 :
    if(!(match_string(c_59, "--help")))
      {
        if(!(match_string(c_59, "-h")))
          {
            if(!(match_string(c_59, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm y_6 (ATerm t)
  {
    t = term_p_30;
    {
      t = set_config_0(t);
      t = term_y_30;
    }
    return(t);
  }
  ATerm z_6 (ATerm t)
  {
    t = term_z_30;
    return(t);
  }
  t = Option_3(t, x_6, y_6, z_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm f_59 = NULL,g_59 = NULL,h_59 = NULL;
  f_59 = t;
  e_59 :
  if(((ATgetType(f_59) == AT_LIST) && !(ATisEmpty(f_59))))
    {
      g_59 = ATgetFirst((ATermList) f_59);
      h_59 = (ATerm) ATgetNext((ATermList) f_59);
      t = (ATerm) ATinsert(CheckATermList(not_null(h_59)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(g_59)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm k_55 (ATerm), ATerm l_55 (ATerm))
{
  ATerm r_59 = NULL,s_59 = NULL,t_59 = NULL;
  r_59 = t;
  q_59 :
  if(((ATgetType(r_59) == AT_LIST) && !(ATisEmpty(r_59))))
    {
      s_59 = ATgetFirst((ATermList) r_59);
      t_59 = (ATerm) ATgetNext((ATermList) r_59);
      {
        ATerm x_59 = NULL,z_59 = NULL;
        ATerm y_59 = NULL;
        t = SSLgetAnnotations(not_null(r_59));
        {
          y_59 = t;
          if(((x_59 != NULL) && (x_59 != y_59)))
            _fail(y_59);
          else
            x_59 = y_59;
        }
        {
          t = not_null(s_59);
          {
            ATerm d_60 = NULL;
            t = k_55(t);
            {
              z_59 = t;
              {
                t = not_null(t_59);
                {
                  ATerm f_60 = NULL;
                  t = l_55(t);
                  {
                    d_60 = t;
                    {
                      ATerm g_60 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(d_60)), not_null(z_59)), not_null(x_59));
                      {
                        g_60 = t;
                        if(((f_60 != NULL) && (f_60 != g_60)))
                          _fail(g_60);
                        else
                          f_60 = g_60;
                      }
                      t = not_null(f_60);
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
  ATerm s_60 = NULL;
  s_60 = t;
  r_60 :
  if(((ATgetType(s_60) == AT_LIST) && ATisEmpty(s_60)))
    {
      {
        ATerm u_60 = NULL,w_60 = NULL;
        ATerm a_31;
        a_31 = t;
        {
          ATerm v_60 = NULL;
          t = SSLgetAnnotations(not_null(s_60));
          {
            v_60 = t;
            if(((u_60 != NULL) && (u_60 != v_60)))
              _fail(v_60);
            else
              u_60 = v_60;
          }
        }
        t = a_31;
        {
          ATerm x_60 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(u_60));
          {
            x_60 = t;
            if(((w_60 != NULL) && (w_60 != x_60)))
              _fail(x_60);
            else
              w_60 = x_60;
          }
          t = not_null(w_60);
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
  ATerm d_61 = NULL,e_61 = NULL,f_61 = NULL;
  d_61 = t;
  c_61 :
  if(match_cons(d_61, sym__2))
    {
      e_61 = ATgetArgument(d_61, 0);
      f_61 = ATgetArgument(d_61, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_x_21, not_null(e_61), not_null(f_61));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm z_88 (ATerm))
{
  ATerm b_31;
  b_31 = t;
  {
    ATerm c_31 = t;
    int d_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_f_31;
        t = z_88(t);
        LocalPopChoice(d_31);
      }
    else
      {
        t = c_31;
        {
        }
      }
  }
  t = b_31;
  {
    ATerm a_7 (ATerm t)
    {
      ATerm n_61 = NULL;
      ATerm g_31;
      g_31 = t;
      {
        ATerm l_61 = NULL;
        ATerm m_61 = NULL;
        m_61 = t;
        if(((l_61 != NULL) && (l_61 != m_61)))
          _fail(m_61);
        else
          l_61 = m_61;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_z_27, not_null(l_61));
          t = set_config_0(t);
        }
      }
      t = g_31;
      {
        ATerm o_61 = NULL;
        o_61 = t;
        if(((n_61 != NULL) && (n_61 != o_61)))
          _fail(o_61);
        else
          n_61 = o_61;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(n_61));
      }
      return(t);
    }
    ATerm f_7 (ATerm t)
    {
      ATerm h_31 = t;
      int i_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_31 = t;
          int o_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(o_31);
            }
          else
            {
              t = j_31;
              {
                t = z_88(t);
                t = Cons_2(t, _id, f_7);
              }
            }
          LocalPopChoice(i_31);
        }
      else
        {
          t = h_31;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, a_7, f_7);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm u_61 = NULL,v_61 = NULL,w_61 = NULL;
  ATerm p_31;
  p_31 = t;
  {
    ATerm x_61 = NULL,y_61 = NULL,z_61 = NULL,a_62 = NULL;
    x_61 = t;
    t_61 :
    if(match_cons(x_61, sym__3))
      {
        y_61 = ATgetArgument(x_61, 0);
        z_61 = ATgetArgument(x_61, 1);
        a_62 = ATgetArgument(x_61, 2);
        {
          if(((u_61 != NULL) && (u_61 != y_61)))
            _fail(y_61);
          else
            u_61 = y_61;
          {
            if(((v_61 != NULL) && (v_61 != z_61)))
              _fail(z_61);
            else
              v_61 = z_61;
            {
              if(((w_61 != NULL) && (w_61 != a_62)))
                _fail(a_62);
              else
                w_61 = a_62;
              t = SSL_table_put(not_null(u_61), not_null(v_61), not_null(w_61));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = p_31;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm y_88 (ATerm))
{
  ATerm d_62 = NULL;
  ATerm q_31;
  q_31 = t;
  {
    t = term_r_31;
    t = table_put_0(t);
  }
  t = q_31;
  {
    ATerm g_7 (ATerm t)
    {
      ATerm t_31 = t;
      int y_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_88(t);
          LocalPopChoice(y_31);
        }
      else
        {
          t = t_31;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, g_7);
    {
      ATerm z_31 = t;
      int a_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_32;
          b_32 = t;
          {
            ATerm c_32 = t;
            int d_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_o_30;
                t = get_config_0(t);
                LocalPopChoice(d_32);
              }
            else
              {
                t = c_32;
                t = fetch_1(t, Help_0);
              }
          }
          t = b_32;
          {
            t = system_usage_0(t);
            {
              t = term_c_23;
              t = exit_0(t);
            }
          }
          LocalPopChoice(a_32);
        }
      else
        {
          t = z_31;
          {
            ATerm n_32 = t;
            int o_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_7 (ATerm t)
                {
                  ATerm j_7 (ATerm t)
                  {
                    ATerm e_62 = NULL;
                    e_62 = t;
                    if(((d_62 != NULL) && (d_62 != e_62)))
                      _fail(e_62);
                    else
                      d_62 = e_62;
                    return(t);
                  }
                  t = Undefined_1(t, j_7);
                  return(t);
                }
                t = fetch_1(t, h_7);
                {
                  ATerm k_7 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_62)), term_p_32);
                    return(t);
                  }
                  t = say_1(t, k_7);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_t_8;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(o_32);
              }
            else
              {
                t = n_32;
                {
                }
              }
          }
        }
      {
        ATerm q_32;
        q_32 = t;
        {
          t = term_o_29;
          t = table_destroy_0(t);
        }
        t = q_32;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm t_85 (ATerm), ATerm u_85 (ATerm), ATerm v_85 (ATerm), ATerm w_85 (ATerm))
{
  t = parse_options_1(t, t_85);
  {
    t = store_options_0(t);
    {
      t = v_85(t);
      {
        ATerm r_32 = t;
        int s_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, u_85);
            LocalPopChoice(s_32);
          }
        else
          {
            t = r_32;
            {
              ATerm t_32 = t;
              int v_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = w_85(t);
                  t = report_success_0(t);
                  LocalPopChoice(v_32);
                }
              else
                {
                  t = t_32;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm x_85 (ATerm), ATerm y_85 (ATerm))
{
  t = option_wrap_4(t, x_85, default_usage_0, _id, y_85);
  return(t);
}
ATerm pack_modules_2 (ATerm t, ATerm s_94 (ATerm, ATerm (ATerm)), ATerm t_94 (ATerm))
{
  ATerm n_62 = NULL,o_62 = NULL,p_62 = NULL,q_62 = NULL,r_62 = NULL,s_62 = NULL;
  ATerm l_7 (ATerm t)
  {
    ATerm w_32 = t;
    int x_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = pack_options_0(t);
        LocalPopChoice(x_32);
      }
    else
      {
        t = w_32;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm q_7 (ATerm t)
  {
    ATerm u_62 = NULL;
    ATerm v_62 = NULL;
    ATerm y_32 = t;
    int d_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_p_15;
        {
          t = get_config_0(t);
          {
            ATerm r_7 (ATerm t)
            {
              ATerm e_33 = t;
              if((PushChoice() == 0))
                {
                  ATerm t_62 = NULL;
                  t_62 = t;
                  g_62 :
                  if(!(match_string(t_62, "-I")))
                    {
                      _fail(t);
                    }
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = e_33;
                }
              return(t);
            }
            t = filter_1(t, r_7);
          }
        }
        LocalPopChoice(d_33);
      }
    else
      {
        t = y_32;
        t = (ATerm) ATempty;
      }
    {
      u_62 = t;
      {
        if(((o_62 != NULL) && (o_62 != u_62)))
          _fail(u_62);
        else
          o_62 = u_62;
        {
          ATerm w_62 = NULL;
          ATerm h_33 = t;
          int i_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_n_14;
              t = get_config_0(t);
              LocalPopChoice(i_33);
            }
          else
            {
              t = h_33;
              t = term_o_8;
            }
          {
            v_62 = t;
            {
              if(((n_62 != NULL) && (n_62 != v_62)))
                _fail(v_62);
              else
                n_62 = v_62;
              {
                ATerm x_62 = NULL,y_62 = NULL,z_62 = NULL;
                ATerm j_33 = t;
                int k_33 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_i_14;
                    t = get_config_0(t);
                    LocalPopChoice(k_33);
                  }
                else
                  {
                    t = j_33;
                    t = term_w_28;
                  }
                {
                  w_62 = t;
                  {
                    if(((q_62 != NULL) && (q_62 != w_62)))
                      _fail(w_62);
                    else
                      q_62 = w_62;
                    {
                      t = not_null(n_62);
                      {
                        ATerm s_7 (ATerm t)
                        {
                          t = not_null(o_62);
                          return(t);
                        }
                        t = s_94(t, s_7);
                        {
                          x_62 = t;
                          m_62 :
                          if(match_cons(x_62, sym__2))
                            {
                              y_62 = ATgetArgument(x_62, 0);
                              z_62 = ATgetArgument(x_62, 1);
                              {
                                if(((r_62 != NULL) && (r_62 != y_62)))
                                  _fail(y_62);
                                else
                                  r_62 = y_62;
                                {
                                  if(((p_62 != NULL) && (p_62 != z_62)))
                                    _fail(z_62);
                                  else
                                    p_62 = z_62;
                                  {
                                    ATerm m_33 = t;
                                    int n_33 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_f_24;
                                        {
                                          t = get_config_0(t);
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(q_62), not_null(p_62));
                                            t = WriteToBinaryFile_0(t);
                                          }
                                        }
                                        LocalPopChoice(n_33);
                                      }
                                    else
                                      {
                                        t = m_33;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(q_62), not_null(p_62));
                                          t = WriteToTextFile_0(t);
                                        }
                                      }
                                    {
                                      ATerm w_33 = t;
                                      int x_33 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm a_63 = NULL;
                                          ATerm y_33 = t;
                                          int z_33 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = term_m_26;
                                              t = get_config_0(t);
                                              LocalPopChoice(z_33);
                                            }
                                          else
                                            {
                                              t = y_33;
                                              {
                                                ATerm e_34 = t;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_h_26;
                                                    t = get_config_0(t);
                                                    PopChoice();
                                                    _fail(t);
                                                  }
                                                else
                                                  {
                                                    t = e_34;
                                                  }
                                                t = t_94(t);
                                              }
                                            }
                                          {
                                            a_63 = t;
                                            {
                                              if(((s_62 != NULL) && (s_62 != a_63)))
                                                _fail(a_63);
                                              else
                                                s_62 = a_63;
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(q_62), not_null(r_62));
                                                {
                                                  ATerm t_7 (ATerm t)
                                                  {
                                                    t = not_null(s_62);
                                                    return(t);
                                                  }
                                                  t = create_dep_file_1(t, t_7);
                                                }
                                              }
                                            }
                                          }
                                          LocalPopChoice(x_33);
                                        }
                                      else
                                        {
                                          t = w_33;
                                          {
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
              }
            }
          }
        }
      }
    }
    return(t);
  }
  t = option_wrap_2(t, l_7, q_7);
  return(t);
}
ATerm pack_stratego_0 (ATerm t)
{
  ATerm u_7 (ATerm t)
  {
    t = basename_1(t, _id);
    return(t);
  }
  t = pack_modules_2(t, pack_stratego_modules_1, u_7);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = pack_stratego_0(t);
  return(t);
}
