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
ATerm term_f_35;
ATerm term_o_34;
ATerm term_s_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_d_33;
ATerm term_y_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_c_30;
ATerm term_l_29;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_d_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_r_28;
ATerm term_m_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_f_28;
ATerm term_y_27;
ATerm term_t_27;
ATerm term_o_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_g_27;
ATerm term_c_27;
ATerm term_k_26;
ATerm term_y_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_d_24;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_m_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_k_20;
ATerm term_z_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_h_19;
ATerm term_n_18;
ATerm term_k_18;
ATerm term_y_17;
ATerm term_q_17;
ATerm term_i_17;
ATerm term_g_17;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_p_16;
ATerm term_i_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_f_15;
ATerm term_z_14;
ATerm term_x_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_a_14;
ATerm term_s_13;
ATerm term_n_13;
ATerm term_i_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_g_12;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_n_11;
ATerm term_e_11;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_d_9;
ATerm term_y_8;
ATerm term_v_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_p_8;
ATerm term_m_8;
void init_constant_terms (void)
{
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("dissuasive library strategy: ", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("separate-by/1; Use separate-by/0 and term wrap patterns: <separate-by> (a, <id>)", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("dep", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" :", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" \\\n	", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym__2, term_f_13, term_i_13);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym__2, term_f_13, term_t_14);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("parse error in ", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("*** module ", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("rtree", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("str", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("cr", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" reading ", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("list-cons", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("tuple-cons", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d   Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(sym__2, term_f_9, term_l_24);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep              Don't create dependency file", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep f | -d f       Write dependency to file f", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym__2, term_r_24, term_v_8);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports            Produce a list of imported modules only", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(sym__2, term_k_18, term_g_17);
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(sym__2, term_m_8, term_j_27);
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(sym_Verbose_1, term_j_27);
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(sym__2, term_f_28, term_v_8);
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(sym__2, term_r_28, term_v_8);
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(sym__2, term_v_28, term_v_8);
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(sym__2, term_z_31, term_a_32);
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(sym__2, term_y_32, term_v_8);
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(sym__3, term_z_31, term_a_32, (ATerm) ATempty);
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm close_file_0 (ATerm);
ATerm separate_by_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm x_86 (ATerm));
ATerm dissuader_1 (ATerm, ATerm w_84 (ATerm));
ATerm separate_by_1 (ATerm, ATerm l_73 (ATerm));
ATerm create_dep_file_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_to_text_0 (ATerm);
ATerm basename_1 (ATerm, ATerm a_83 (ATerm));
ATerm basename_0 (ATerm);
ATerm at_suffix_rev_1 (ATerm, ATerm m_74 (ATerm));
ATerm get_filename_0 (ATerm);
ATerm map_1 (ATerm, ATerm p_73 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm Imports_1 (ATerm, ATerm r_60 (ATerm));
ATerm flatten_stratego_0 (ATerm);
ATerm _2 (ATerm, ATerm d_54 (ATerm), ATerm e_54 (ATerm));
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
ATerm xtc_transform_term_2 (ATerm, ATerm t_93 (ATerm), ATerm u_93 (ATerm));
ATerm call_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm a_87 (ATerm));
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm z_86 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm b_87 (ATerm));
ATerm set_0 (ATerm);
ATerm union_1 (ATerm, ATerm m_79 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm j_90 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm k_93 (ATerm));
ATerm assert_1 (ATerm, ATerm h_84 (ATerm));
ATerm obsolete_1 (ATerm, ATerm v_84 (ATerm));
ATerm open_file_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm l_60 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm m_93 (ATerm), ATerm n_93 (ATerm));
ATerm parse_module_0 (ATerm);
ATerm debug_1 (ATerm, ATerm o_84 (ATerm));
ATerm if_verbose3_1 (ATerm, ATerm y_86 (ATerm));
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm find_in_path_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm add_extension_0 (ATerm);
ATerm split_2 (ATerm, ATerm s_81 (ATerm), ATerm t_81 (ATerm));
ATerm guarantee_extension_1 (ATerm, ATerm c_83 (ATerm));
ATerm find_file_1 (ATerm, ATerm l_85 (ATerm));
ATerm fetch_elem_1 (ATerm, ATerm a_74 (ATerm));
ATerm find_module_1 (ATerm, ATerm w_65 (ATerm));
ATerm get_module_1 (ATerm, ATerm v_65 (ATerm));
ATerm Fst_0 (ATerm);
ATerm GnUndefined_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm q_79 (ATerm), ATerm r_79 (ATerm));
ATerm diff_1 (ATerm, ATerm i_79 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm q_75 (ATerm), ATerm r_75 (ATerm), ATerm s_75 (ATerm), ATerm t_75 (ATerm));
ATerm zip_1 (ATerm, ATerm v_75 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNext_3 (ATerm, ATerm o_94 (ATerm), ATerm p_94 (ATerm), ATerm q_94 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm d_67 (ATerm), ATerm e_67 (ATerm));
ATerm for_3 (ATerm, ATerm g_67 (ATerm), ATerm h_67 (ATerm), ATerm i_67 (ATerm));
ATerm graph_nodes_undef_roots_3 (ATerm, ATerm w_93 (ATerm), ATerm x_93 (ATerm), ATerm y_93 (ATerm));
ATerm graph_nodes_roots_3 (ATerm, ATerm l_94 (ATerm), ATerm m_94 (ATerm), ATerm n_94 (ATerm));
ATerm filter_1 (ATerm, ATerm g_81 (ATerm));
ATerm pack_stratego_modules_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm e_74 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm extend_config_0 (ATerm);
ATerm pack_stratego_options_0 (ATerm);
ATerm rename_file_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_file_0 (ATerm);
ATerm rename_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm e_84 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm k_66 (ATerm), ATerm l_66 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm d_84 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm e_93 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm f_93 (ATerm));
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm d_80 (ATerm), ATerm e_80 (ATerm));
ATerm crush_2 (ATerm, ATerm b_79 (ATerm), ATerm c_79 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm w_86 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm q_85 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm a_89 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm z_88 (ATerm));
ATerm Program_1 (ATerm, ATerm c_60 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm p_84 (ATerm));
ATerm Undefined_1 (ATerm, ATerm d_60 (ATerm));
ATerm fetch_1 (ATerm, ATerm y_73 (ATerm));
ATerm option_defined_1 (ATerm, ATerm z_87 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm x_65 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm e_89 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm m_55 (ATerm), ATerm n_55 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm c_89 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm b_89 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm w_85 (ATerm), ATerm x_85 (ATerm), ATerm y_85 (ATerm), ATerm z_85 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm a_86 (ATerm), ATerm b_86 (ATerm));
ATerm xtc_iowrap_2 (ATerm, ATerm h_93 (ATerm), ATerm i_93 (ATerm));
ATerm pack_stratego_0 (ATerm);
ATerm main_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm k_1 = NULL,o_1 = NULL,q_1 = NULL;
  k_1 = t;
  j_1 :
  if(match_cons(k_1, sym__2))
    {
      o_1 = ATgetArgument(k_1, 0);
      q_1 = ATgetArgument(k_1, 1);
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
  ATerm a_3 = NULL;
  ATerm c_3 = NULL;
  a_3 = t;
  {
    ATerm e_3 = NULL;
    t = xtc_new_file_0(t);
    {
      e_3 = t;
      {
        if(((c_3 != NULL) && (c_3 != e_3)))
          _fail(e_3);
        else
          c_3 = e_3;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_3), not_null(a_3));
          t = WriteToBinaryFile_0(t);
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(c_3));
  }
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm i_3 = NULL;
  i_3 = t;
  t = SSL_close_file(not_null(i_3));
  return(t);
}
ATerm separate_by_0 (ATerm t)
{
  ATerm p_3 = NULL,q_3 = NULL,r_3 = NULL;
  p_3 = t;
  o_3 :
  if(match_cons(p_3, sym__2))
    {
      q_3 = ATgetArgument(p_3, 0);
      r_3 = ATgetArgument(p_3, 1);
      {
        t = not_null(r_3);
        {
          ATerm x_3 = t;
          int a_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(a_8);
            }
          else
            {
              t = x_3;
              {
                ATerm b_0 (ATerm t)
                {
                  ATerm b_8 = t;
                  int c_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Nil_0(t);
                      LocalPopChoice(c_8);
                    }
                  else
                    {
                      t = b_8;
                      {
                        ATerm u_3 = NULL;
                        t = Cons_2(t, _id, b_0);
                        {
                          ATerm v_3 = NULL;
                          v_3 = t;
                          if(((u_3 != NULL) && (u_3 != v_3)))
                            _fail(v_3);
                          else
                            u_3 = v_3;
                          t = (ATerm) ATinsert(CheckATermList(not_null(u_3)), not_null(q_3));
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
ATerm if_verbose2_1 (ATerm t, ATerm x_86 (ATerm))
{
  ATerm d_8 = t;
  int h_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_8;
      i_8 = t;
      {
        ATerm a_4 = NULL;
        ATerm b_4 = NULL;
        t = term_m_8;
        {
          t = get_config_0(t);
          {
            b_4 = t;
            if(((a_4 != NULL) && (a_4 != b_4)))
              _fail(b_4);
            else
              a_4 = b_4;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_4), term_p_8);
          t = geq_0(t);
        }
      }
      t = i_8;
      t = x_86(t);
      LocalPopChoice(h_8);
    }
  else
    {
      t = d_8;
      {
      }
    }
  return(t);
}
ATerm dissuader_1 (ATerm t, ATerm w_84 (ATerm))
{
  ATerm q_8;
  q_8 = t;
  {
    ATerm c_0 (ATerm t)
    {
      t = w_84(t);
      {
        ATerm e_0 (ATerm t)
        {
          t = term_r_8;
          return(t);
        }
        t = debug_1(t, e_0);
      }
      return(t);
    }
    t = if_verbose2_1(t, c_0);
  }
  t = q_8;
  return(t);
}
ATerm separate_by_1 (ATerm t, ATerm l_73 (ATerm))
{
  ATerm f_4 = NULL,h_4 = NULL;
  ATerm f_0 (ATerm t)
  {
    t = term_s_8;
    return(t);
  }
  t = dissuader_1(t, f_0);
  {
    ATerm t_8;
    t_8 = t;
    {
      ATerm g_4 = NULL;
      g_4 = t;
      if(((f_4 != NULL) && (f_4 != g_4)))
        _fail(g_4);
      else
        f_4 = g_4;
    }
    t = t_8;
    {
      ATerm i_4 = NULL;
      t = term_v_8;
      {
        t = l_73(t);
        {
          i_4 = t;
          if(((h_4 != NULL) && (h_4 != i_4)))
            _fail(i_4);
          else
            h_4 = i_4;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_4), not_null(f_4));
        t = separate_by_0(t);
      }
    }
  }
  return(t);
}
ATerm create_dep_file_0 (ATerm t)
{
  ATerm s_4 = NULL;
  ATerm u_4 = NULL,v_4 = NULL,w_4 = NULL,x_4 = NULL;
  s_4 = t;
  {
    ATerm y_4 = NULL;
    t = term_y_8;
    {
      ATerm z_4 = NULL;
      t = get_config_0(t);
      {
        y_4 = t;
        {
          if(((u_4 != NULL) && (u_4 != y_4)))
            _fail(y_4);
          else
            u_4 = y_4;
          {
            ATerm a_5 = NULL,c_5 = NULL;
            ATerm b_9 = t;
            int c_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_d_9;
                t = get_config_0(t);
                LocalPopChoice(c_9);
              }
            else
              {
                t = b_9;
                {
                  ATerm e_9 = t;
                  if((PushChoice() == 0))
                    {
                      t = term_f_9;
                      t = get_config_0(t);
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = e_9;
                    }
                }
              }
            {
              z_4 = t;
              {
                if(((w_4 != NULL) && (w_4 != z_4)))
                  _fail(z_4);
                else
                  w_4 = z_4;
                {
                  ATerm b_5 = NULL;
                  b_5 = t;
                  if(((a_5 != NULL) && (a_5 != b_5)))
                    _fail(b_5);
                  else
                    a_5 = b_5;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(a_5), term_g_9);
                    {
                      ATerm d_5 = NULL;
                      t = add_extension_0(t);
                      {
                        c_5 = t;
                        {
                          if(((v_4 != NULL) && (v_4 != c_5)))
                            _fail(c_5);
                          else
                            v_4 = c_5;
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(v_4), term_h_9);
                            {
                              ATerm e_5 = NULL;
                              t = open_file_0(t);
                              {
                                d_5 = t;
                                {
                                  if(((x_4 != NULL) && (x_4 != d_5)))
                                    _fail(d_5);
                                  else
                                    x_4 = d_5;
                                  {
                                    ATerm f_5 = NULL;
                                    t = (ATerm) ATinsert(CheckATermList(not_null(s_4)), term_m_9);
                                    {
                                      ATerm p_0 (ATerm t)
                                      {
                                        t = term_n_9;
                                        return(t);
                                      }
                                      t = separate_by_1(t, p_0);
                                      {
                                        f_5 = t;
                                        if(((e_5 != NULL) && (e_5 != f_5)))
                                          _fail(f_5);
                                        else
                                          e_5 = f_5;
                                      }
                                    }
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(x_4), (ATerm) ATinsert(CheckATermList(not_null(e_5)), not_null(w_4)));
                                      {
                                        t = printnl_0(t);
                                        {
                                          t = not_null(x_4);
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
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(v_4));
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm p_5 = NULL,q_5 = NULL,r_5 = NULL;
  p_5 = t;
  o_5 :
  if(match_cons(p_5, sym__2))
    {
      q_5 = ATgetArgument(p_5, 0);
      r_5 = ATgetArgument(p_5, 1);
      t = SSL_WriteToTextFile(not_null(q_5), not_null(r_5));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_text_0 (ATerm t)
{
  ATerm x_5 = NULL;
  ATerm z_5 = NULL;
  x_5 = t;
  {
    ATerm a_6 = NULL;
    t = xtc_new_file_0(t);
    {
      a_6 = t;
      {
        if(((z_5 != NULL) && (z_5 != a_6)))
          _fail(a_6);
        else
          z_5 = a_6;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_5), not_null(x_5));
          t = WriteToTextFile_0(t);
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(z_5));
  }
  return(t);
}
ATerm basename_1 (ATerm t, ATerm a_83 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm o_9 = t;
    int s_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_6 (ATerm t)
        {
          ATerm u_9 = t;
          int x_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, h_6);
              LocalPopChoice(x_9);
            }
          else
            {
              t = u_9;
              {
                ATerm y_9 = t;
                int z_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm q_0 (ATerm t)
                    {
                      ATerm f_6 = NULL;
                      f_6 = t;
                      d_6 :
                      if(!(match_int(f_6, 47)))
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = Cons_2(t, q_0, _id);
                    LocalPopChoice(z_9);
                  }
                else
                  {
                    t = y_9;
                    {
                      ATerm r_0 (ATerm t)
                      {
                        ATerm g_6 = NULL;
                        g_6 = t;
                        e_6 :
                        if(!(match_int(g_6, 46)))
                          {
                            _fail(t);
                          }
                        return(t);
                      }
                      t = Cons_2(t, r_0, a_83);
                      t = (ATerm) ATempty;
                    }
                  }
              }
            }
          return(t);
        }
        t = h_6(t);
        LocalPopChoice(s_9);
      }
    else
      {
        t = o_9;
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
ATerm at_suffix_rev_1 (ATerm t, ATerm m_74 (ATerm))
{
  ATerm i_6 (ATerm t)
  {
    ATerm a_10 = t;
    int b_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, i_6);
        LocalPopChoice(b_10);
      }
    else
      {
        t = a_10;
        t = m_74(t);
      }
    return(t);
  }
  t = i_6(t);
  return(t);
}
ATerm get_filename_0 (ATerm t)
{
  ATerm m_6 = NULL;
  t = explode_string_0(t);
  {
    ATerm c_10 = t;
    int n_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_0 (ATerm t)
        {
          ATerm n_6 = NULL,o_6 = NULL,p_6 = NULL;
          n_6 = t;
          k_6 :
          if(((ATgetType(n_6) == AT_LIST) && !(ATisEmpty(n_6))))
            {
              o_6 = ATgetFirst((ATermList) n_6);
              p_6 = (ATerm) ATgetNext((ATermList) n_6);
              l_6 :
              if(match_int(o_6, 47))
                {
                  if(((m_6 != NULL) && (m_6 != p_6)))
                    _fail(p_6);
                  else
                    m_6 = p_6;
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
        t = at_suffix_rev_1(t, s_0);
        t = not_null(m_6);
        LocalPopChoice(n_10);
      }
    else
      {
        t = c_10;
        {
        }
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm map_1 (ATerm t, ATerm p_73 (ATerm))
{
  ATerm r_6 (ATerm t)
  {
    ATerm o_10 = t;
    int p_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(p_10);
      }
    else
      {
        t = o_10;
        t = Cons_2(t, p_73, r_6);
      }
    return(t);
  }
  t = r_6(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm t_6 = NULL;
  t_6 = t;
  t = SSL_is_string(not_null(t_6));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm q_10 = t;
  int r_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(r_10);
    }
  else
    {
      t = q_10;
      {
        ATerm s_10 = t;
        int x_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_0 (ATerm t)
            {
              ATerm y_10 = t;
              int z_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(z_10);
                }
              else
                {
                  t = y_10;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, t_0);
            LocalPopChoice(x_10);
          }
        else
          {
            t = s_10;
            {
              ATerm c_7 = NULL,d_7 = NULL,e_7 = NULL;
              c_7 = t;
              b_7 :
              if(match_cons(c_7, sym_Path_1))
                {
                  d_7 = ATgetArgument(c_7, 0);
                  t = not_null(d_7);
                }
              else
                {
                  if(match_cons(c_7, sym_Var_1))
                    {
                      d_7 = ATgetArgument(c_7, 0);
                      {
                        t = not_null(d_7);
                        {
                          ATerm a_11 = t;
                          int d_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(d_11);
                            }
                          else
                            {
                              t = a_11;
                              {
                                ATerm u_0 (ATerm t)
                                {
                                  t = term_e_11;
                                  return(t);
                                }
                                t = debug_1(t, u_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(c_7, sym_Prefix_2))
                        {
                          d_7 = ATgetArgument(c_7, 0);
                          e_7 = ATgetArgument(c_7, 1);
                          {
                            ATerm j_7 = NULL,l_7 = NULL;
                            ATerm f_11;
                            f_11 = t;
                            {
                              ATerm k_7 = NULL;
                              t = not_null(d_7);
                              {
                                t = eval_config_0(t);
                                {
                                  k_7 = t;
                                  if(((j_7 != NULL) && (j_7 != k_7)))
                                    _fail(k_7);
                                  else
                                    j_7 = k_7;
                                }
                              }
                            }
                            t = f_11;
                            {
                              ATerm m_7 = NULL;
                              t = not_null(e_7);
                              {
                                t = eval_config_0(t);
                                {
                                  m_7 = t;
                                  if(((l_7 != NULL) && (l_7 != m_7)))
                                    _fail(m_7);
                                  else
                                    l_7 = m_7;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(j_7), not_null(l_7));
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
  ATerm u_7 = NULL;
  u_7 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_n_11, not_null(u_7));
    {
      t = table_get_0(t);
      {
        ATerm q_11 = t;
        int r_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm s_11;
              s_11 = t;
              {
                ATerm w_7 = NULL;
                ATerm x_7 = NULL;
                x_7 = t;
                if(((w_7 != NULL) && (w_7 != x_7)))
                  _fail(x_7);
                else
                  w_7 = x_7;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_n_11, not_null(u_7), not_null(w_7));
                  t = table_put_0(t);
                }
              }
              t = s_11;
            }
            LocalPopChoice(r_11);
          }
        else
          {
            t = q_11;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm Imports_1 (ATerm t, ATerm r_60 (ATerm))
{
  ATerm f_8 = NULL,g_8 = NULL;
  f_8 = t;
  e_8 :
  if(match_cons(f_8, sym_Imports_1))
    {
      g_8 = ATgetArgument(f_8, 0);
      {
        ATerm j_8 = NULL,l_8 = NULL;
        ATerm k_8 = NULL;
        t = SSLgetAnnotations(not_null(f_8));
        {
          k_8 = t;
          if(((j_8 != NULL) && (j_8 != k_8)))
            _fail(k_8);
          else
            j_8 = k_8;
        }
        {
          t = not_null(g_8);
          {
            ATerm n_8 = NULL;
            t = r_60(t);
            {
              l_8 = t;
              {
                ATerm o_8 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Imports_1, not_null(l_8)), not_null(j_8));
                {
                  o_8 = t;
                  if(((n_8 != NULL) && (n_8 != o_8)))
                    _fail(o_8);
                  else
                    n_8 = o_8;
                }
                t = not_null(n_8);
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
  ATerm z_8 = NULL;
  ATerm v_0 (ATerm t)
  {
    ATerm w_8 = NULL,x_8 = NULL;
    w_8 = t;
    u_8 :
    if(match_cons(w_8, sym_Specification_1))
      {
        x_8 = ATgetArgument(w_8, 0);
        {
          t = not_null(x_8);
          {
            ATerm w_0 (ATerm t)
            {
              ATerm t_11 = t;
              if((PushChoice() == 0))
                {
                  t = Imports_1(t, _id);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = t_11;
                }
              return(t);
            }
            t = filter_1(t, w_0);
          }
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = map_1(t, v_0);
  {
    t = concat_0(t);
    {
      ATerm a_9 = NULL;
      a_9 = t;
      if(((z_8 != NULL) && (z_8 != a_9)))
        _fail(a_9);
      else
        z_8 = a_9;
      t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(z_8));
    }
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm d_54 (ATerm), ATerm e_54 (ATerm))
{
  ATerm j_9 = NULL,k_9 = NULL,l_9 = NULL;
  j_9 = t;
  i_9 :
  if(match_cons(j_9, sym__2))
    {
      k_9 = ATgetArgument(j_9, 0);
      l_9 = ATgetArgument(j_9, 1);
      {
        ATerm p_9 = NULL,r_9 = NULL;
        ATerm q_9 = NULL;
        t = SSLgetAnnotations(not_null(j_9));
        {
          q_9 = t;
          if(((p_9 != NULL) && (p_9 != q_9)))
            _fail(q_9);
          else
            p_9 = q_9;
        }
        {
          t = not_null(k_9);
          {
            ATerm t_9 = NULL;
            t = d_54(t);
            {
              r_9 = t;
              {
                t = not_null(l_9);
                {
                  ATerm v_9 = NULL;
                  t = e_54(t);
                  {
                    t_9 = t;
                    {
                      ATerm w_9 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(r_9), not_null(t_9)), not_null(p_9));
                      {
                        w_9 = t;
                        if(((v_9 != NULL) && (v_9 != w_9)))
                          _fail(w_9);
                        else
                          v_9 = w_9;
                      }
                      t = not_null(v_9);
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
  ATerm g_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL;
  g_10 = t;
  d_10 :
  if(match_cons(g_10, sym__2))
    {
      h_10 = ATgetArgument(g_10, 0);
      k_10 = ATgetArgument(g_10, 1);
      e_10 :
      if(match_cons(h_10, sym__2))
        {
          i_10 = ATgetArgument(h_10, 0);
          j_10 = ATgetArgument(h_10, 1);
          f_10 :
          if(match_cons(k_10, sym__2))
            {
              l_10 = ATgetArgument(k_10, 0);
              m_10 = ATgetArgument(k_10, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(l_10)), not_null(i_10)), (ATerm) ATinsert(CheckATermList(not_null(m_10)), not_null(j_10)));
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
  ATerm u_10 = NULL,v_10 = NULL,w_10 = NULL;
  u_10 = t;
  t_10 :
  if(((ATgetType(u_10) == AT_LIST) && !(ATisEmpty(u_10))))
    {
      v_10 = ATgetFirst((ATermList) u_10);
      w_10 = (ATerm) ATgetNext((ATermList) u_10);
      t = (ATerm) ATmakeAppl(sym__2, not_null(v_10), not_null(w_10));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm c_11 = NULL;
  c_11 = t;
  b_11 :
  if(((ATgetType(c_11) == AT_LIST) && ATisEmpty(c_11)))
    {
      t = term_u_11;
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
  ATerm j_11 = NULL,k_11 = NULL,l_11 = NULL,m_11 = NULL;
  j_11 = t;
  h_11 :
  if(match_cons(j_11, sym__2))
    {
      k_11 = ATgetArgument(j_11, 0);
      l_11 = ATgetArgument(j_11, 1);
      i_11 :
      if(match_cons(l_11, sym_Specification_1))
        {
          m_11 = ATgetArgument(l_11, 0);
          {
            t = not_null(m_11);
            {
              ATerm x_0 (ATerm t)
              {
                ATerm o_11 = NULL,p_11 = NULL;
                o_11 = t;
                g_11 :
                if(match_cons(o_11, sym_Imports_1))
                  {
                    p_11 = ATgetArgument(o_11, 0);
                    t = not_null(p_11);
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = filter_1(t, x_0);
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
  ATerm y_11 = NULL,z_11 = NULL;
  y_11 = t;
  x_11 :
  if(match_cons(y_11, sym_stdin_0))
    {
      ATerm a_12 = NULL;
      ATerm b_12 = NULL;
      t = term_v_11;
      {
        t = ReadFromFile_0(t);
        {
          b_12 = t;
          if(((a_12 != NULL) && (a_12 != b_12)))
            _fail(b_12);
          else
            a_12 = b_12;
        }
      }
      t = not_null(a_12);
    }
  else
    {
      if(match_cons(y_11, sym_FILE_1))
        {
          z_11 = ATgetArgument(y_11, 0);
          {
            ATerm d_12 = NULL;
            ATerm e_12 = NULL;
            t = not_null(z_11);
            {
              t = ReadFromFile_0(t);
              {
                e_12 = t;
                if(((d_12 != NULL) && (d_12 != e_12)))
                  _fail(e_12);
                else
                  d_12 = e_12;
              }
            }
            t = not_null(d_12);
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
  ATerm q_12 = NULL;
  ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL;
  q_12 = t;
  {
    ATerm v_12 = NULL;
    ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL;
    t = not_null(q_12);
    {
      v_12 = t;
      {
        t = SSL_explode_term(not_null(v_12));
        {
          x_12 = t;
          m_12 :
          if(match_cons(x_12, sym__2))
            {
              y_12 = ATgetArgument(x_12, 0);
              z_12 = ATgetArgument(x_12, 1);
              n_12 :
              if(match_string(y_12, ""))
                {
                  o_12 :
                  if(((ATgetType(z_12) == AT_LIST) && !(ATisEmpty(z_12))))
                    {
                      a_13 = ATgetFirst((ATermList) z_12);
                      b_13 = (ATerm) ATgetNext((ATermList) z_12);
                      p_12 :
                      if(((ATgetType(b_13) == AT_LIST) && !(ATisEmpty(b_13))))
                        {
                          c_13 = ATgetFirst((ATermList) b_13);
                          d_13 = (ATerm) ATgetNext((ATermList) b_13);
                          {
                            if(((s_12 != NULL) && (s_12 != a_13)))
                              _fail(a_13);
                            else
                              s_12 = a_13;
                            {
                              if(((u_12 != NULL) && (u_12 != c_13)))
                                _fail(c_13);
                              else
                                u_12 = c_13;
                              if(((t_12 != NULL) && (t_12 != d_13)))
                                _fail(d_13);
                              else
                                t_12 = d_13;
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
    t = not_null(u_12);
  }
  return(t);
}
ATerm pass_keep_0 (ATerm t)
{
  ATerm j_13 = NULL;
  ATerm k_13 = NULL,m_13 = NULL;
  ATerm l_13 = NULL;
  t = term_w_11;
  {
    ATerm c_12 = t;
    int f_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(f_12);
      }
    else
      {
        t = c_12;
        t = term_g_12;
      }
    {
      l_13 = t;
      if(((k_13 != NULL) && (k_13 != l_13)))
        _fail(l_13);
      else
        k_13 = l_13;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_13), term_g_12);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          m_13 = t;
          if(((j_13 != NULL) && (j_13 != m_13)))
            _fail(m_13);
          else
            j_13 = m_13;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_13)), term_w_11);
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm q_13 = NULL;
  q_13 = t;
  t = SSL_int_to_string(not_null(q_13));
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm v_13 = NULL,w_13 = NULL,x_13 = NULL;
  v_13 = t;
  u_13 :
  if(match_cons(v_13, sym__2))
    {
      w_13 = ATgetArgument(v_13, 0);
      x_13 = ATgetArgument(v_13, 1);
      {
        ATerm h_12 = t;
        int i_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(w_13), not_null(x_13));
            LocalPopChoice(i_12);
          }
        else
          {
            t = h_12;
            t = SSL_subtr(not_null(w_13), not_null(x_13));
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
  ATerm d_14 = NULL;
  ATerm e_14 = NULL,g_14 = NULL;
  ATerm f_14 = NULL;
  t = term_m_8;
  {
    ATerm j_12 = t;
    int k_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(k_12);
      }
    else
      {
        t = j_12;
        t = term_g_12;
      }
    {
      f_14 = t;
      if(((e_14 != NULL) && (e_14 != f_14)))
        _fail(f_14);
      else
        e_14 = f_14;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_14), term_g_12);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          g_14 = t;
          if(((d_14 != NULL) && (d_14 != g_14)))
            _fail(g_14);
          else
            d_14 = g_14;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_14)), term_m_8);
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm t_93 (ATerm), ATerm u_93 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, t_93, u_93);
    t = read_from_0(t);
  }
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm l_14 = NULL,m_14 = NULL,n_14 = NULL;
  l_14 = t;
  k_14 :
  if(match_cons(l_14, sym__2))
    {
      m_14 = ATgetArgument(l_14, 0);
      n_14 = ATgetArgument(l_14, 1);
      t = SSL_call(not_null(m_14), not_null(n_14));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm s_14 = NULL;
  s_14 = t;
  t = SSL_table_keys(not_null(s_14));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm y_14 = NULL;
  y_14 = t;
  {
    t = table_keys_0(t);
    {
      ATerm y_0 (ATerm t)
      {
        ATerm a_15 = NULL;
        ATerm c_15 = NULL;
        a_15 = t;
        {
          ATerm d_15 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_14), not_null(a_15));
          {
            t = table_get_0(t);
            {
              d_15 = t;
              if(((c_15 != NULL) && (c_15 != d_15)))
                _fail(d_15);
              else
                c_15 = d_15;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_15), not_null(c_15));
        }
        return(t);
      }
      t = map_1(t, y_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm a_87 (ATerm))
{
  ATerm l_12 = t;
  int r_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_12;
      w_12 = t;
      {
        ATerm i_15 = NULL;
        ATerm j_15 = NULL;
        t = term_m_8;
        {
          t = get_config_0(t);
          {
            j_15 = t;
            if(((i_15 != NULL) && (i_15 != j_15)))
              _fail(j_15);
            else
              i_15 = j_15;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_15), term_e_13);
          t = geq_0(t);
        }
      }
      t = w_12;
      t = a_87(t);
      LocalPopChoice(r_12);
    }
  else
    {
      t = l_12;
      {
      }
    }
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm p_15 = NULL;
  ATerm r_15 = NULL,s_15 = NULL;
  p_15 = t;
  {
    ATerm t_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_f_13, (ATerm) ATmakeAppl(sym_Tool_1, not_null(p_15)));
    {
      t = table_get_0(t);
      {
        t_15 = t;
        n_15 :
        if(((ATgetType(t_15) == AT_LIST) && !(ATisEmpty(t_15))))
          {
            u_15 = ATgetFirst((ATermList) t_15);
            x_15 = (ATerm) ATgetNext((ATermList) t_15);
            o_15 :
            if(match_cons(u_15, sym__2))
              {
                v_15 = ATgetArgument(u_15, 0);
                w_15 = ATgetArgument(u_15, 1);
                {
                  if(((r_15 != NULL) && (r_15 != v_15)))
                    _fail(v_15);
                  else
                    r_15 = v_15;
                  if(((s_15 != NULL) && (s_15 != w_15)))
                    _fail(w_15);
                  else
                    s_15 = w_15;
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
    t = not_null(s_15);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL;
  e_16 = t;
  d_16 :
  if(match_cons(e_16, sym__2))
    {
      f_16 = ATgetArgument(e_16, 0);
      g_16 = ATgetArgument(e_16, 1);
      {
        ATerm j_16 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_f_13, (ATerm) ATmakeAppl(sym_Tool_1, not_null(f_16)));
        {
          t = table_get_0(t);
          {
            ATerm z_0 (ATerm t)
            {
              ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL;
              k_16 = t;
              c_16 :
              if(match_cons(k_16, sym__2))
                {
                  l_16 = ATgetArgument(k_16, 0);
                  m_16 = ATgetArgument(k_16, 1);
                  {
                    if(((g_16 != NULL) && (g_16 != l_16)))
                      _fail(l_16);
                    else
                      g_16 = l_16;
                    if(((j_16 != NULL) && (j_16 != m_16)))
                      _fail(m_16);
                    else
                      j_16 = m_16;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, z_0);
          }
        }
        t = not_null(j_16);
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
  ATerm g_13 = t;
  int h_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_13;
      {
        t = table_get_0(t);
        {
          ATerm a_1 (ATerm t)
          {
            t = try_1(t, xtc_read_0);
            return(t);
          }
          t = map_1(t, a_1);
        }
      }
      LocalPopChoice(h_13);
    }
  else
    {
      t = g_13;
      {
      }
    }
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm z_86 (ATerm))
{
  ATerm o_13 = t;
  int p_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_13;
      r_13 = t;
      {
        ATerm q_16 = NULL;
        ATerm r_16 = NULL;
        t = term_m_8;
        {
          t = get_config_0(t);
          {
            r_16 = t;
            if(((q_16 != NULL) && (q_16 != r_16)))
              _fail(r_16);
            else
              q_16 = r_16;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_16), term_s_13);
          t = geq_0(t);
        }
      }
      t = r_13;
      t = z_86(t);
      LocalPopChoice(p_13);
    }
  else
    {
      t = o_13;
      {
      }
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm b_87 (ATerm))
{
  ATerm t_13 = t;
  int y_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_13;
      z_13 = t;
      {
        ATerm u_16 = NULL;
        ATerm v_16 = NULL;
        t = term_m_8;
        {
          t = get_config_0(t);
          {
            v_16 = t;
            if(((u_16 != NULL) && (u_16 != v_16)))
              _fail(v_16);
            else
              u_16 = v_16;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_16), term_a_14);
          t = geq_0(t);
        }
      }
      t = z_13;
      t = b_87(t);
      LocalPopChoice(y_13);
    }
  else
    {
      t = t_13;
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
ATerm union_1 (ATerm t, ATerm m_79 (ATerm))
{
  ATerm z_16 = NULL,a_17 = NULL,b_17 = NULL;
  z_16 = t;
  y_16 :
  if(match_cons(z_16, sym__2))
    {
      a_17 = ATgetArgument(z_16, 0);
      b_17 = ATgetArgument(z_16, 1);
      {
        t = not_null(a_17);
        {
          ATerm f_17 (ATerm t)
          {
            ATerm b_14 = t;
            int c_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(b_17);
                LocalPopChoice(c_14);
              }
            else
              {
                t = b_14;
                {
                  ATerm h_14 = t;
                  int i_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm b_1 (ATerm t)
                      {
                        t = not_null(b_17);
                        return(t);
                      }
                      t = HdMember_p__2(t, m_79, b_1);
                      t = f_17(t);
                      LocalPopChoice(i_14);
                    }
                  else
                    {
                      t = h_14;
                      t = Cons_2(t, _id, f_17);
                    }
                }
              }
            return(t);
          }
          t = f_17(t);
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
  ATerm k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL;
  k_17 = t;
  j_17 :
  if(match_cons(k_17, sym__3))
    {
      l_17 = ATgetArgument(k_17, 0);
      m_17 = ATgetArgument(k_17, 1);
      n_17 = ATgetArgument(k_17, 2);
      {
        ATerm j_14;
        j_14 = t;
        {
          ATerm r_17 = NULL;
          ATerm s_17 = NULL,u_17 = NULL;
          ATerm t_17 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_17), not_null(m_17));
          {
            ATerm o_14 = t;
            int p_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(p_14);
              }
            else
              {
                t = o_14;
                t = (ATerm) ATempty;
              }
            {
              t_17 = t;
              if(((s_17 != NULL) && (s_17 != t_17)))
                _fail(t_17);
              else
                s_17 = t_17;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(s_17), not_null(n_17));
            {
              t = union_1(t, eq_0);
              {
                u_17 = t;
                if(((r_17 != NULL) && (r_17 != u_17)))
                  _fail(u_17);
                else
                  r_17 = u_17;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(l_17), not_null(m_17), not_null(r_17));
            t = table_put_0(t);
          }
        }
        t = j_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm j_90 (ATerm))
{
  ATerm c_18 = NULL,d_18 = NULL,e_18 = NULL;
  c_18 = t;
  b_18 :
  if(match_cons(c_18, sym__2))
    {
      d_18 = ATgetArgument(c_18, 0);
      e_18 = ATgetArgument(c_18, 1);
      {
        t = not_null(e_18);
        {
          ATerm c_1 (ATerm t)
          {
            ATerm h_18 = NULL,i_18 = NULL,j_18 = NULL;
            h_18 = t;
            a_18 :
            if(match_cons(h_18, sym__2))
              {
                i_18 = ATgetArgument(h_18, 0);
                j_18 = ATgetArgument(h_18, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(d_18), not_null(i_18), not_null(j_18));
                  t = j_90(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, c_1);
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
  ATerm p_18 = NULL;
  p_18 = t;
  t = SSL_ReadFromFile(not_null(p_18));
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm u_18 = NULL;
  ATerm w_18 = NULL;
  u_18 = t;
  {
    ATerm q_14 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_13, (ATerm) ATmakeAppl(sym_Imported_1, not_null(u_18)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_14;
      }
    {
      ATerm r_14;
      r_14 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_f_13, term_t_14, (ATerm) ATinsert(ATempty, not_null(u_18)));
        t = table_put_0(t);
      }
      t = r_14;
      {
        ATerm d_1 (ATerm t)
        {
          ATerm e_1 (ATerm t)
          {
            t = term_u_14;
            return(t);
          }
          t = debug_1(t, e_1);
          return(t);
        }
        t = if_verbose4_1(t, d_1);
        {
          ATerm v_14 = t;
          int w_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(w_14);
            }
          else
            {
              t = v_14;
              t = (ATerm) ATempty;
            }
          {
            ATerm f_1 (ATerm t)
            {
              ATerm g_1 (ATerm t)
              {
                t = term_x_14;
                return(t);
              }
              t = say_1(t, g_1);
              return(t);
            }
            t = if_verbose6_1(t, f_1);
            {
              ATerm x_18 = NULL;
              x_18 = t;
              if(((w_18 != NULL) && (w_18 != x_18)))
                _fail(x_18);
              else
                w_18 = x_18;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_f_13, not_null(w_18));
                {
                  t = table_putlist_1(t, table_append_0);
                  {
                    ATerm h_1 (ATerm t)
                    {
                      ATerm i_1 (ATerm t)
                      {
                        t = term_z_14;
                        return(t);
                      }
                      t = say_1(t, i_1);
                      return(t);
                    }
                    t = if_verbose6_1(t, h_1);
                    {
                      t = (ATerm) ATmakeAppl(sym__3, term_f_13, (ATerm)ATmakeAppl(sym_Imported_1, not_null(u_18)), (ATerm) ATempty);
                      {
                        t = table_put_0(t);
                        {
                          ATerm l_1 (ATerm t)
                          {
                            ATerm m_1 (ATerm t)
                            {
                              t = term_x_14;
                              return(t);
                            }
                            t = say_1(t, m_1);
                            return(t);
                          }
                          t = if_verbose4_1(t, l_1);
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
  ATerm b_19 = NULL;
  b_19 = t;
  t = SSL_getenv(not_null(b_19));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm b_15 = t;
  int e_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_15;
      t = get_config_0(t);
      LocalPopChoice(e_15);
    }
  else
    {
      t = b_15;
      {
        ATerm g_15 = t;
        int h_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_k_15;
            t = getenv_0(t);
            LocalPopChoice(h_15);
          }
        else
          {
            t = g_15;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm n_1 (ATerm t)
  {
    ATerm p_1 (ATerm t)
    {
      t = term_l_15;
      return(t);
    }
    t = debug_1(t, p_1);
    return(t);
  }
  t = if_verbose5_1(t, n_1);
  {
    ATerm m_15;
    m_15 = t;
    {
      ATerm q_15 = t;
      int y_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_z_15;
          t = table_get_0(t);
          LocalPopChoice(y_15);
        }
      else
        {
          t = q_15;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = m_15;
    {
      ATerm r_1 (ATerm t)
      {
        ATerm s_1 (ATerm t)
        {
          t = term_a_16;
          return(t);
        }
        t = debug_1(t, s_1);
        return(t);
      }
      t = if_verbose5_1(t, r_1);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm b_16 = t;
  int h_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_1 (ATerm t)
      {
        ATerm u_1 (ATerm t)
        {
          t = term_i_16;
          return(t);
        }
        t = debug_1(t, u_1);
        return(t);
      }
      t = if_verbose5_1(t, t_1);
      {
        t = xtc_load_0(t);
        {
          ATerm n_16 = t;
          int o_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(o_16);
            }
          else
            {
              t = n_16;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm v_1 (ATerm t)
            {
              ATerm w_1 (ATerm t)
              {
                t = term_i_16;
                return(t);
              }
              t = debug_1(t, w_1);
              return(t);
            }
            t = if_verbose5_1(t, v_1);
          }
        }
      }
      LocalPopChoice(h_16);
    }
  else
    {
      t = b_16;
      {
        ATerm f_19 = NULL;
        ATerm g_19 = NULL;
        g_19 = t;
        if(((f_19 != NULL) && (f_19 != g_19)))
          _fail(g_19);
        else
          f_19 = g_19;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_16), not_null(f_19)), term_p_16);
          {
            t = error_0(t);
            {
              ATerm x_1 (ATerm t)
              {
                t = term_f_13;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm y_1 (ATerm t)
                    {
                      t = term_t_16;
                      return(t);
                    }
                    t = debug_1(t, y_1);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, x_1);
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
ATerm xtc_command_1 (ATerm t, ATerm k_93 (ATerm))
{
  ATerm k_19 = NULL;
  ATerm w_16;
  w_16 = t;
  {
    ATerm l_19 = NULL;
    t = k_93(t);
    {
      t = xtc_find_0(t);
      {
        l_19 = t;
        if(((k_19 != NULL) && (k_19 != l_19)))
          _fail(l_19);
        else
          k_19 = l_19;
      }
    }
  }
  t = w_16;
  {
    ATerm x_16;
    x_16 = t;
    {
      ATerm m_19 = NULL;
      ATerm n_19 = NULL;
      n_19 = t;
      if(((m_19 != NULL) && (m_19 != n_19)))
        _fail(n_19);
      else
        m_19 = n_19;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_19), not_null(m_19));
        t = call_0(t);
      }
    }
    t = x_16;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm h_84 (ATerm))
{
  ATerm v_19 = NULL,w_19 = NULL,x_19 = NULL;
  v_19 = t;
  u_19 :
  if(match_cons(v_19, sym__2))
    {
      w_19 = ATgetArgument(v_19, 0);
      x_19 = ATgetArgument(v_19, 1);
      {
        ATerm a_20 = NULL,b_20 = NULL,c_20 = NULL;
        ATerm c_17;
        c_17 = t;
        {
          ATerm d_20 = NULL;
          ATerm e_20 = NULL,f_20 = NULL,g_20 = NULL;
          t = h_84(t);
          {
            d_20 = t;
            {
              if(((a_20 != NULL) && (a_20 != d_20)))
                _fail(d_20);
              else
                a_20 = d_20;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(a_20), not_null(w_19), not_null(x_19));
                {
                  t = table_push_0(t);
                  {
                    ATerm d_17 = t;
                    int e_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(a_20), term_g_17);
                        t = table_get_0(t);
                        LocalPopChoice(e_17);
                      }
                    else
                      {
                        t = d_17;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      e_20 = t;
                      t_19 :
                      if(((ATgetType(e_20) == AT_LIST) && !(ATisEmpty(e_20))))
                        {
                          f_20 = ATgetFirst((ATermList) e_20);
                          g_20 = (ATerm) ATgetNext((ATermList) e_20);
                          {
                            if(((b_20 != NULL) && (b_20 != f_20)))
                              _fail(f_20);
                            else
                              b_20 = f_20;
                            {
                              if(((c_20 != NULL) && (c_20 != g_20)))
                                _fail(g_20);
                              else
                                c_20 = g_20;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(a_20), term_g_17, (ATerm) ATinsert(CheckATermList(not_null(c_20)), (ATerm) ATinsert(CheckATermList(not_null(b_20)), not_null(w_19))));
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
        t = c_17;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm v_84 (ATerm))
{
  ATerm h_17;
  h_17 = t;
  {
    t = v_84(t);
    {
      ATerm z_1 (ATerm t)
      {
        t = term_i_17;
        return(t);
      }
      t = debug_1(t, z_1);
    }
  }
  t = h_17;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL;
  ATerm o_17 = t;
  int p_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL;
      q_20 = t;
      l_20 :
      if(match_cons(q_20, sym__2))
        {
          r_20 = ATgetArgument(q_20, 0);
          s_20 = ATgetArgument(q_20, 1);
          {
            if(((p_20 != NULL) && (p_20 != r_20)))
              _fail(r_20);
            else
              p_20 = r_20;
            if(((o_20 != NULL) && (o_20 != s_20)))
              _fail(s_20);
            else
              o_20 = s_20;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(p_17);
      t = SSL_open_file(not_null(p_20), not_null(o_20));
    }
  else
    {
      t = o_17;
      {
        ATerm t_20 = NULL;
        ATerm u_20 = NULL;
        ATerm a_2 (ATerm t)
        {
          t = term_q_17;
          return(t);
        }
        t = obsolete_1(t, a_2);
        {
          t_20 = t;
          {
            if(((p_20 != NULL) && (p_20 != t_20)))
              _fail(t_20);
            else
              p_20 = t_20;
            {
              ATerm v_17;
              v_17 = t;
              {
                ATerm v_20 = NULL;
                t = term_h_9;
                {
                  v_20 = t;
                  if(((u_20 != NULL) && (u_20 != v_20)))
                    _fail(v_20);
                  else
                    u_20 = v_20;
                }
              }
              t = v_17;
              t = SSL_open_file(not_null(p_20), not_null(u_20));
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
    ATerm w_17 = t;
    int x_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(x_17);
      }
    else
      {
        t = w_17;
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
  ATerm a_21 = NULL;
  ATerm b_21 = NULL;
  t = term_v_8;
  {
    t = new_0(t);
    {
      b_21 = t;
      if(((a_21 != NULL) && (a_21 != b_21)))
        _fail(b_21);
      else
        a_21 = b_21;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_21), term_y_17);
    {
      t = conc_strings_0(t);
      {
        ATerm z_17 = t;
        int f_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = file_exists_0(t);
            t = new_file_0(t);
            LocalPopChoice(f_18);
          }
        else
          {
            t = z_17;
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
  ATerm f_21 = NULL;
  t = new_file_0(t);
  {
    f_21 = t;
    {
      ATerm g_18;
      g_18 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_21), term_h_9);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(f_21), term_v_8);
            {
              ATerm b_2 (ATerm t)
              {
                t = term_k_18;
                return(t);
              }
              t = assert_1(t, b_2);
            }
          }
        }
      }
      t = g_18;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm p_21 = NULL,q_21 = NULL;
  p_21 = t;
  o_21 :
  if(match_cons(p_21, sym_stdin_0))
    {
      ATerm r_21 = NULL;
      ATerm s_21 = NULL;
      ATerm t_21 = NULL;
      t = xtc_new_file_0(t);
      {
        s_21 = t;
        {
          if(((r_21 != NULL) && (r_21 != s_21)))
            _fail(s_21);
          else
            r_21 = s_21;
          {
            ATerm u_21 = NULL;
            t = o_0(t);
            {
              u_21 = t;
              if(((t_21 != NULL) && (t_21 != u_21)))
                _fail(u_21);
              else
                t_21 = u_21;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(t_21), (ATerm) ATinsert(ATinsert(ATempty, not_null(r_21)), term_y_8));
              {
                ATerm l_18 = t;
                int m_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = conc_two_lists_0(t);
                    LocalPopChoice(m_18);
                  }
                else
                  {
                    t = l_18;
                    t = conc_more_lists_0(t);
                  }
                t = xtc_command_1(t, n_0);
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(r_21));
    }
  else
    {
      if(match_cons(p_21, sym_FILE_1))
        {
          q_21 = ATgetArgument(p_21, 0);
          {
            ATerm r_22 = NULL;
            ATerm s_22 = NULL;
            t = not_null(q_21);
            {
              ATerm t_22 = NULL;
              t = xtc_new_file_0(t);
              {
                s_22 = t;
                {
                  if(((r_22 != NULL) && (r_22 != s_22)))
                    _fail(s_22);
                  else
                    r_22 = s_22;
                  {
                    ATerm u_22 = NULL;
                    t = o_0(t);
                    {
                      u_22 = t;
                      if(((t_22 != NULL) && (t_22 != u_22)))
                        _fail(u_22);
                      else
                        t_22 = u_22;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(t_22), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(r_22)), term_y_8), not_null(q_21)), term_n_18));
                      {
                        ATerm o_18 = t;
                        int q_18 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = conc_two_lists_0(t);
                            LocalPopChoice(q_18);
                          }
                        else
                          {
                            t = o_18;
                            t = conc_more_lists_0(t);
                          }
                        t = xtc_command_1(t, n_0);
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(r_22));
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
  ATerm f_23 = NULL;
  f_23 = t;
  e_23 :
  if(match_cons(f_23, sym_stdin_0))
    {
      ATerm h_23 = NULL,j_23 = NULL;
      ATerm r_18;
      r_18 = t;
      {
        ATerm i_23 = NULL;
        t = SSLgetAnnotations(not_null(f_23));
        {
          i_23 = t;
          if(((h_23 != NULL) && (h_23 != i_23)))
            _fail(i_23);
          else
            h_23 = i_23;
        }
      }
      t = r_18;
      {
        ATerm k_23 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(h_23));
        {
          k_23 = t;
          if(((j_23 != NULL) && (j_23 != k_23)))
            _fail(k_23);
          else
            j_23 = k_23;
        }
        t = not_null(j_23);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm l_60 (ATerm))
{
  ATerm v_23 = NULL,b_24 = NULL;
  v_23 = t;
  u_23 :
  if(match_cons(v_23, sym_FILE_1))
    {
      b_24 = ATgetArgument(v_23, 0);
      {
        ATerm e_24 = NULL,g_24 = NULL;
        ATerm f_24 = NULL;
        t = SSLgetAnnotations(not_null(v_23));
        {
          f_24 = t;
          if(((e_24 != NULL) && (e_24 != f_24)))
            _fail(f_24);
          else
            e_24 = f_24;
        }
        {
          t = not_null(b_24);
          {
            ATerm j_24 = NULL;
            t = l_60(t);
            {
              g_24 = t;
              {
                ATerm k_24 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(g_24)), not_null(e_24));
                {
                  k_24 = t;
                  if(((j_24 != NULL) && (j_24 != k_24)))
                    _fail(k_24);
                  else
                    j_24 = k_24;
                }
                t = not_null(j_24);
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
ATerm xtc_transform_2 (ATerm t, ATerm m_93 (ATerm), ATerm n_93 (ATerm))
{
  ATerm s_18 = t;
  int t_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_18 = t;
      int y_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(y_18);
        }
      else
        {
          t = v_18;
          t = stdin_0(t);
        }
      LocalPopChoice(t_18);
      t = xtc_transform_file_2(t, m_93, n_93);
    }
  else
    {
      t = s_18;
      t = xtc_transform_term_2(t, m_93, n_93);
    }
  return(t);
}
ATerm parse_module_0 (ATerm t)
{
  ATerm z_18 = t;
  int a_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_25 = NULL;
      ATerm c_2 (ATerm t)
      {
        ATerm c_19 = t;
        if((PushChoice() == 0))
          {
            ATerm d_25 = NULL;
            d_25 = t;
            s_24 :
            if(!(match_string(d_25, "rtree")))
              {
                _fail(t);
              }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = c_19;
          }
        return(t);
      }
      ATerm d_2 (ATerm t)
      {
        ATerm e_25 = NULL;
        e_25 = t;
        if(((c_25 != NULL) && (c_25 != e_25)))
          _fail(e_25);
        else
          c_25 = e_25;
        return(t);
      }
      t = _2(t, c_2, d_2);
      {
        t = Snd_0(t);
        {
          ATerm d_19 = t;
          int e_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_2 (ATerm t)
              {
                t = term_h_19;
                return(t);
              }
              ATerm f_2 (ATerm t)
              {
                ATerm f_25 = NULL,h_25 = NULL,j_25 = NULL;
                ATerm i_19;
                i_19 = t;
                {
                  ATerm g_25 = NULL;
                  t = pass_verbose_0(t);
                  {
                    g_25 = t;
                    if(((f_25 != NULL) && (f_25 != g_25)))
                      _fail(g_25);
                    else
                      f_25 = g_25;
                  }
                }
                t = i_19;
                {
                  ATerm j_19;
                  j_19 = t;
                  {
                    ATerm i_25 = NULL;
                    t = pass_keep_0(t);
                    {
                      i_25 = t;
                      if(((h_25 != NULL) && (h_25 != i_25)))
                        _fail(i_25);
                      else
                        h_25 = i_25;
                    }
                  }
                  t = j_19;
                  {
                    ATerm k_25 = NULL;
                    t = term_o_19;
                    {
                      t = get_config_0(t);
                      {
                        k_25 = t;
                        if(((j_25 != NULL) && (j_25 != k_25)))
                          _fail(k_25);
                        else
                          j_25 = k_25;
                      }
                    }
                    {
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(j_25)), not_null(h_25)), not_null(f_25));
                      t = concat_0(t);
                    }
                  }
                }
                return(t);
              }
              t = xtc_transform_2(t, e_2, f_2);
              t = read_from_0(t);
              LocalPopChoice(e_19);
            }
          else
            {
              t = d_19;
              {
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_25)), term_p_19);
                t = fatal_error_0(t);
              }
            }
        }
      }
      LocalPopChoice(a_19);
    }
  else
    {
      t = z_18;
      {
        ATerm l_25 = NULL,m_25 = NULL,n_25 = NULL;
        l_25 = t;
        a_25 :
        if(match_cons(l_25, sym__2))
          {
            m_25 = ATgetArgument(l_25, 0);
            n_25 = ATgetArgument(l_25, 1);
            b_25 :
            if(match_string(m_25, "rtree"))
              {
                t = Snd_0(t);
                {
                  ATerm q_19 = t;
                  int r_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = read_from_0(t);
                      LocalPopChoice(r_19);
                    }
                  else
                    {
                      t = q_19;
                      {
                        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_25)), term_p_19);
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
ATerm debug_1 (ATerm t, ATerm o_84 (ATerm))
{
  ATerm s_19;
  s_19 = t;
  {
    ATerm w_25 = NULL,y_25 = NULL;
    ATerm y_19;
    y_19 = t;
    {
      ATerm x_25 = NULL;
      t = o_84(t);
      {
        x_25 = t;
        if(((w_25 != NULL) && (w_25 != x_25)))
          _fail(x_25);
        else
          w_25 = x_25;
      }
    }
    t = y_19;
    {
      ATerm z_25 = NULL;
      z_25 = t;
      if(((y_25 != NULL) && (y_25 != z_25)))
        _fail(z_25);
      else
        y_25 = z_25;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_25)), not_null(w_25)));
        t = printnl_0(t);
      }
    }
  }
  t = s_19;
  return(t);
}
ATerm if_verbose3_1 (ATerm t, ATerm y_86 (ATerm))
{
  ATerm h_20 = t;
  int i_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_20;
      j_20 = t;
      {
        ATerm d_26 = NULL;
        ATerm e_26 = NULL;
        t = term_m_8;
        {
          t = get_config_0(t);
          {
            e_26 = t;
            if(((d_26 != NULL) && (d_26 != e_26)))
              _fail(e_26);
            else
              d_26 = e_26;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_26), term_k_20);
          t = geq_0(t);
        }
      }
      t = j_20;
      t = y_86(t);
      LocalPopChoice(i_20);
    }
  else
    {
      t = h_20;
      {
      }
    }
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm m_20;
  m_20 = t;
  {
    ATerm h_26 = NULL;
    ATerm i_26 = NULL;
    i_26 = t;
    if(((h_26 != NULL) && (h_26 != i_26)))
      _fail(i_26);
    else
      h_26 = i_26;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_z_19, not_null(h_26));
      t = printnl_0(t);
    }
  }
  t = m_20;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm n_20;
  n_20 = t;
  {
    t = error_0(t);
    {
      t = term_g_12;
      t = exit_0(t);
    }
  }
  t = n_20;
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm m_26 = NULL;
  ATerm o_26 = NULL;
  m_26 = t;
  {
    ATerm w_20;
    w_20 = t;
    {
      ATerm p_26 = NULL;
      t = term_x_20;
      {
        p_26 = t;
        if(((o_26 != NULL) && (o_26 != p_26)))
          _fail(p_26);
        else
          o_26 = p_26;
      }
    }
    t = w_20;
    {
      t = SSL_open_file(not_null(m_26), not_null(o_26));
      t = SSL_close_file(not_null(m_26));
    }
  }
  return(t);
}
ATerm find_in_path_0 (ATerm t)
{
  ATerm z_26 = NULL,a_27 = NULL,b_27 = NULL;
  z_26 = t;
  y_26 :
  if(match_cons(z_26, sym__2))
    {
      a_27 = ATgetArgument(z_26, 0);
      b_27 = ATgetArgument(z_26, 1);
      {
        t = not_null(b_27);
        {
          ATerm g_2 (ATerm t)
          {
            ATerm m_27 = NULL;
            ATerm n_27 = NULL;
            n_27 = t;
            if(((m_27 != NULL) && (m_27 != n_27)))
              _fail(n_27);
            else
              m_27 = n_27;
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(a_27)), term_y_20), not_null(m_27));
              {
                t = concat_strings_0(t);
                t = file_exists_0(t);
              }
            }
            return(t);
          }
          t = fetch_elem_1(t, g_2);
        }
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
  ATerm r_27 = NULL;
  r_27 = t;
  t = SSL_implode_string(not_null(r_27));
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm v_27 = NULL;
  v_27 = t;
  t = SSL_explode_string(not_null(v_27));
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
  ATerm a_28 = NULL,b_28 = NULL,c_28 = NULL;
  a_28 = t;
  z_27 :
  if(match_cons(a_28, sym__2))
    {
      b_28 = ATgetArgument(a_28, 0);
      c_28 = ATgetArgument(a_28, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(c_28)), term_z_20), not_null(b_28));
        t = concat_strings_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm s_81 (ATerm), ATerm t_81 (ATerm))
{
  ATerm i_28 = NULL,k_28 = NULL;
  ATerm c_21;
  c_21 = t;
  {
    ATerm j_28 = NULL;
    t = s_81(t);
    {
      j_28 = t;
      if(((i_28 != NULL) && (i_28 != j_28)))
        _fail(j_28);
      else
        i_28 = j_28;
    }
  }
  t = c_21;
  {
    ATerm l_28 = NULL;
    t = t_81(t);
    {
      l_28 = t;
      if(((k_28 != NULL) && (k_28 != l_28)))
        _fail(l_28);
      else
        k_28 = l_28;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_28), not_null(k_28));
  }
  return(t);
}
ATerm guarantee_extension_1 (ATerm t, ATerm c_83 (ATerm))
{
  t = basename_1(t, _id);
  {
    ATerm h_2 (ATerm t)
    {
      t = term_v_8;
      t = c_83(t);
      return(t);
    }
    t = split_2(t, _id, h_2);
    t = add_extension_0(t);
  }
  return(t);
}
ATerm find_file_1 (ATerm t, ATerm l_85 (ATerm))
{
  ATerm i_2 (ATerm t)
  {
    t = guarantee_extension_1(t, l_85);
    return(t);
  }
  t = _2(t, i_2, _id);
  t = find_in_path_0(t);
  return(t);
}
ATerm fetch_elem_1 (ATerm t, ATerm a_74 (ATerm))
{
  ATerm p_28 = NULL;
  ATerm j_2 (ATerm t)
  {
    ATerm q_28 = NULL;
    t = a_74(t);
    {
      q_28 = t;
      if(((p_28 != NULL) && (p_28 != q_28)))
        _fail(q_28);
      else
        p_28 = q_28;
    }
    return(t);
  }
  t = fetch_1(t, j_2);
  t = not_null(p_28);
  return(t);
}
ATerm find_module_1 (ATerm t, ATerm w_65 (ATerm))
{
  ATerm x_28 = NULL,y_28 = NULL,z_28 = NULL;
  x_28 = t;
  w_28 :
  if(match_cons(x_28, sym__2))
    {
      y_28 = ATgetArgument(x_28, 0);
      z_28 = ATgetArgument(x_28, 1);
      {
        t = not_null(z_28);
        {
          ATerm d_21 = t;
          int e_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_2 (ATerm t)
              {
                ATerm c_29 = NULL;
                ATerm e_29 = NULL;
                c_29 = t;
                {
                  ATerm g_29 = NULL,i_29 = NULL;
                  ATerm h_29 = NULL;
                  t = w_65(t);
                  {
                    h_29 = t;
                    if(((g_29 != NULL) && (g_29 != h_29)))
                      _fail(h_29);
                    else
                      g_29 = h_29;
                  }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(y_28), not_null(g_29));
                    {
                      ATerm l_2 (ATerm t)
                      {
                        t = not_null(c_29);
                        return(t);
                      }
                      t = find_file_1(t, l_2);
                      {
                        i_29 = t;
                        if(((e_29 != NULL) && (e_29 != i_29)))
                          _fail(i_29);
                        else
                          e_29 = i_29;
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__2, not_null(c_29), (ATerm) ATmakeAppl(sym_FILE_1, not_null(e_29)));
                }
                return(t);
              }
              t = fetch_elem_1(t, k_2);
              LocalPopChoice(e_21);
            }
          else
            {
              t = d_21;
              {
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_21), not_null(y_28)), term_g_21);
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
ATerm get_module_1 (ATerm t, ATerm v_65 (ATerm))
{
  ATerm z_29 = NULL;
  ATerm d_30 = NULL,e_30 = NULL,f_30 = NULL;
  z_29 = t;
  {
    ATerm g_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(z_29), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_20), term_k_21), term_j_21), term_i_21));
    {
      t = find_module_1(t, v_65);
      {
        g_30 = t;
        x_29 :
        if(match_cons(g_30, sym__2))
          {
            h_30 = ATgetArgument(g_30, 0);
            i_30 = ATgetArgument(g_30, 1);
            y_29 :
            if(match_cons(i_30, sym_FILE_1))
              {
                j_30 = ATgetArgument(i_30, 0);
                {
                  ATerm k_30 = NULL;
                  if(((d_30 != NULL) && (d_30 != h_30)))
                    _fail(h_30);
                  else
                    d_30 = h_30;
                  {
                    if(((e_30 != NULL) && (e_30 != j_30)))
                      _fail(j_30);
                    else
                      e_30 = j_30;
                    {
                      ATerm m_2 (ATerm t)
                      {
                        ATerm l_21;
                        l_21 = t;
                        {
                          t = not_null(e_30);
                          {
                            ATerm n_2 (ATerm t)
                            {
                              t = term_m_21;
                              return(t);
                            }
                            t = debug_1(t, n_2);
                          }
                        }
                        t = l_21;
                        return(t);
                      }
                      t = if_verbose3_1(t, m_2);
                      {
                        t = parse_module_0(t);
                        {
                          k_30 = t;
                          if(((f_30 != NULL) && (f_30 != k_30)))
                            _fail(k_30);
                          else
                            f_30 = k_30;
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_30), not_null(f_30));
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm u_30 = NULL;
  ATerm w_30 = NULL,x_30 = NULL;
  u_30 = t;
  {
    ATerm y_30 = NULL;
    ATerm a_31 = NULL,b_31 = NULL,c_31 = NULL,d_31 = NULL,e_31 = NULL;
    t = not_null(u_30);
    {
      y_30 = t;
      {
        t = SSL_explode_term(not_null(y_30));
        {
          a_31 = t;
          r_30 :
          if(match_cons(a_31, sym__2))
            {
              b_31 = ATgetArgument(a_31, 0);
              c_31 = ATgetArgument(a_31, 1);
              s_30 :
              if(match_string(b_31, ""))
                {
                  t_30 :
                  if(((ATgetType(c_31) == AT_LIST) && !(ATisEmpty(c_31))))
                    {
                      d_31 = ATgetFirst((ATermList) c_31);
                      e_31 = (ATerm) ATgetNext((ATermList) c_31);
                      {
                        if(((x_30 != NULL) && (x_30 != d_31)))
                          _fail(d_31);
                        else
                          x_30 = d_31;
                        if(((w_30 != NULL) && (w_30 != e_31)))
                          _fail(e_31);
                        else
                          w_30 = e_31;
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
    t = not_null(x_30);
  }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm l_31 = NULL,m_31 = NULL,n_31 = NULL,o_31 = NULL,p_31 = NULL,v_31 = NULL,w_31 = NULL,x_31 = NULL;
  l_31 = t;
  j_31 :
  if(match_cons(l_31, sym__5))
    {
      m_31 = ATgetArgument(l_31, 0);
      p_31 = ATgetArgument(l_31, 1);
      v_31 = ATgetArgument(l_31, 2);
      w_31 = ATgetArgument(l_31, 3);
      x_31 = ATgetArgument(l_31, 4);
      k_31 :
      if(((ATgetType(m_31) == AT_LIST) && !(ATisEmpty(m_31))))
        {
          n_31 = ATgetFirst((ATermList) m_31);
          o_31 = (ATerm) ATgetNext((ATermList) m_31);
          t = (ATerm) ATmakeAppl(sym__5, not_null(o_31), not_null(p_31), not_null(v_31), not_null(w_31), (ATerm) ATinsert(CheckATermList(not_null(x_31)), not_null(n_31)));
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
  ATerm h_32 = NULL,i_32 = NULL,j_32 = NULL;
  h_32 = t;
  g_32 :
  if(match_cons(h_32, sym__2))
    {
      i_32 = ATgetArgument(h_32, 0);
      j_32 = ATgetArgument(h_32, 1);
      if(((i_32 != NULL) && (i_32 != j_32)))
        _fail(j_32);
      else
        i_32 = j_32;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm q_79 (ATerm), ATerm r_79 (ATerm))
{
  ATerm p_32 = NULL,q_32 = NULL,r_32 = NULL;
  p_32 = t;
  o_32 :
  if(((ATgetType(p_32) == AT_LIST) && !(ATisEmpty(p_32))))
    {
      q_32 = ATgetFirst((ATermList) p_32);
      r_32 = (ATerm) ATgetNext((ATermList) p_32);
      {
        t = r_79(t);
        {
          ATerm o_2 (ATerm t)
          {
            ATerm u_32 = NULL;
            u_32 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(q_32), not_null(u_32));
              t = q_79(t);
            }
            return(t);
          }
          t = fetch_1(t, o_2);
        }
        t = not_null(r_32);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm i_79 (ATerm))
{
  ATerm a_33 = NULL,b_33 = NULL,c_33 = NULL;
  a_33 = t;
  z_32 :
  if(match_cons(a_33, sym__2))
    {
      b_33 = ATgetArgument(a_33, 0);
      c_33 = ATgetArgument(a_33, 1);
      {
        t = not_null(b_33);
        {
          ATerm g_33 (ATerm t)
          {
            ATerm n_21 = t;
            int v_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(v_21);
              }
            else
              {
                t = n_21;
                {
                  ATerm w_21 = t;
                  int x_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm p_2 (ATerm t)
                      {
                        t = not_null(c_33);
                        return(t);
                      }
                      t = HdMember_p__2(t, i_79, p_2);
                      t = g_33(t);
                      LocalPopChoice(x_21);
                    }
                  else
                    {
                      t = w_21;
                      t = Cons_2(t, _id, g_33);
                    }
                }
              }
            return(t);
          }
          t = g_33(t);
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
  ATerm k_33 = NULL,l_33 = NULL,m_33 = NULL,n_33 = NULL,o_33 = NULL;
  k_33 = t;
  i_33 :
  if(match_cons(k_33, sym__2))
    {
      l_33 = ATgetArgument(k_33, 0);
      m_33 = ATgetArgument(k_33, 1);
      j_33 :
      if(((ATgetType(m_33) == AT_LIST) && !(ATisEmpty(m_33))))
        {
          n_33 = ATgetFirst((ATermList) m_33);
          o_33 = (ATerm) ATgetNext((ATermList) m_33);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(l_33)), not_null(n_33)), not_null(o_33));
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
  ATerm v_33 = NULL,w_33 = NULL,x_33 = NULL;
  v_33 = t;
  u_33 :
  if(match_cons(v_33, sym__2))
    {
      w_33 = ATgetArgument(v_33, 0);
      x_33 = ATgetArgument(v_33, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(x_33)), not_null(w_33));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm f_34 = NULL,g_34 = NULL,h_34 = NULL,i_34 = NULL,j_34 = NULL,k_34 = NULL,l_34 = NULL;
  f_34 = t;
  c_34 :
  if(match_cons(f_34, sym__2))
    {
      g_34 = ATgetArgument(f_34, 0);
      j_34 = ATgetArgument(f_34, 1);
      d_34 :
      if(((ATgetType(g_34) == AT_LIST) && !(ATisEmpty(g_34))))
        {
          h_34 = ATgetFirst((ATermList) g_34);
          i_34 = (ATerm) ATgetNext((ATermList) g_34);
          e_34 :
          if(((ATgetType(j_34) == AT_LIST) && !(ATisEmpty(j_34))))
            {
              k_34 = ATgetFirst((ATermList) j_34);
              l_34 = (ATerm) ATgetNext((ATermList) j_34);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(h_34), not_null(k_34)), (ATerm) ATmakeAppl(sym__2, not_null(i_34), not_null(l_34)));
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
  ATerm y_34 = NULL,z_34 = NULL,a_35 = NULL;
  y_34 = t;
  s_34 :
  if(match_cons(y_34, sym__2))
    {
      z_34 = ATgetArgument(y_34, 0);
      a_35 = ATgetArgument(y_34, 1);
      t_34 :
      if(((ATgetType(z_34) == AT_LIST) && ATisEmpty(z_34)))
        {
          u_34 :
          if(((ATgetType(a_35) == AT_LIST) && ATisEmpty(a_35)))
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
ATerm genzip_4 (ATerm t, ATerm q_75 (ATerm), ATerm r_75 (ATerm), ATerm s_75 (ATerm), ATerm t_75 (ATerm))
{
  ATerm c_35 (ATerm t)
  {
    ATerm y_21 = t;
    int z_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_75(t);
        LocalPopChoice(z_21);
      }
    else
      {
        t = y_21;
        {
          t = r_75(t);
          {
            t = _2(t, t_75, c_35);
            t = s_75(t);
          }
        }
      }
    return(t);
  }
  t = c_35(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm v_75 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, v_75);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm n_35 = NULL,o_35 = NULL,p_35 = NULL,q_35 = NULL,r_35 = NULL;
  n_35 = t;
  l_35 :
  if(((ATgetType(n_35) == AT_LIST) && !(ATisEmpty(n_35))))
    {
      o_35 = ATgetFirst((ATermList) n_35);
      r_35 = (ATerm) ATgetNext((ATermList) n_35);
      m_35 :
      if(match_cons(o_35, sym__2))
        {
          p_35 = ATgetArgument(o_35, 0);
          q_35 = ATgetArgument(o_35, 1);
          {
            ATerm v_35 = NULL,w_35 = NULL,f_36 = NULL,l_36 = NULL;
            ATerm a_22;
            a_22 = t;
            {
              ATerm x_35 = NULL;
              ATerm z_35 = NULL,d_36 = NULL,e_36 = NULL;
              t = not_null(q_35);
              {
                x_35 = t;
                {
                  t = SSL_explode_term(not_null(x_35));
                  {
                    z_35 = t;
                    g_35 :
                    if(match_cons(z_35, sym__2))
                      {
                        d_36 = ATgetArgument(z_35, 0);
                        e_36 = ATgetArgument(z_35, 1);
                        {
                          if(((v_35 != NULL) && (v_35 != d_36)))
                            _fail(d_36);
                          else
                            v_35 = d_36;
                          if(((w_35 != NULL) && (w_35 != e_36)))
                            _fail(e_36);
                          else
                            w_35 = e_36;
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
            t = a_22;
            {
              ATerm b_22;
              b_22 = t;
              {
                ATerm g_36 = NULL;
                ATerm i_36 = NULL,j_36 = NULL,k_36 = NULL;
                t = not_null(p_35);
                {
                  g_36 = t;
                  {
                    t = SSL_explode_term(not_null(g_36));
                    {
                      i_36 = t;
                      j_35 :
                      if(match_cons(i_36, sym__2))
                        {
                          j_36 = ATgetArgument(i_36, 0);
                          k_36 = ATgetArgument(i_36, 1);
                          {
                            if(((v_35 != NULL) && (v_35 != j_36)))
                              _fail(j_36);
                            else
                              v_35 = j_36;
                            if(((f_36 != NULL) && (f_36 != k_36)))
                              _fail(k_36);
                            else
                              f_36 = k_36;
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
              t = b_22;
              {
                ATerm m_36 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(f_36), not_null(w_35));
                {
                  t = zip_1(t, _id);
                  {
                    m_36 = t;
                    if(((l_36 != NULL) && (l_36 != m_36)))
                      _fail(m_36);
                    else
                      l_36 = m_36;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(l_36), not_null(r_35));
                  {
                    ATerm c_22 = t;
                    int d_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = conc_two_lists_0(t);
                        LocalPopChoice(d_22);
                      }
                    else
                      {
                        t = c_22;
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
  ATerm w_36 = NULL,x_36 = NULL,y_36 = NULL,z_36 = NULL,a_37 = NULL;
  w_36 = t;
  u_36 :
  if(((ATgetType(w_36) == AT_LIST) && !(ATisEmpty(w_36))))
    {
      x_36 = ATgetFirst((ATermList) w_36);
      a_37 = (ATerm) ATgetNext((ATermList) w_36);
      v_36 :
      if(match_cons(x_36, sym__2))
        {
          y_36 = ATgetArgument(x_36, 0);
          z_36 = ATgetArgument(x_36, 1);
          {
            ATerm c_37 = NULL;
            if(((y_36 != NULL) && (y_36 != z_36)))
              _fail(z_36);
            else
              y_36 = z_36;
            {
              if(((c_37 != NULL) && (c_37 != a_37)))
                _fail(a_37);
              else
                c_37 = a_37;
              t = not_null(c_37);
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
  ATerm e_22 = t;
  int f_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_2 (ATerm t)
      {
        ATerm f_37 = NULL;
        f_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(f_37));
        return(t);
      }
      ATerm r_2 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm s_2 (ATerm t)
      {
        ATerm g_22 = t;
        int h_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_2 (ATerm t)
            {
              ATerm i_22 = t;
              int j_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  LocalPopChoice(j_22);
                }
              else
                {
                  t = i_22;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, t_2);
            LocalPopChoice(h_22);
          }
        else
          {
            t = g_22;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, q_2, r_2, s_2);
      LocalPopChoice(f_22);
    }
  else
    {
      t = e_22;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm GnNext_3 (ATerm t, ATerm o_94 (ATerm), ATerm p_94 (ATerm), ATerm q_94 (ATerm))
{
  ATerm r_37 = NULL,u_37 = NULL,v_37 = NULL,w_37 = NULL,x_37 = NULL,a_38 = NULL,b_38 = NULL,c_38 = NULL;
  r_37 = t;
  p_37 :
  if(match_cons(r_37, sym__5))
    {
      u_37 = ATgetArgument(r_37, 0);
      x_37 = ATgetArgument(r_37, 1);
      a_38 = ATgetArgument(r_37, 2);
      b_38 = ATgetArgument(r_37, 3);
      c_38 = ATgetArgument(r_37, 4);
      q_37 :
      if(((ATgetType(u_37) == AT_LIST) && !(ATisEmpty(u_37))))
        {
          v_37 = ATgetFirst((ATermList) u_37);
          w_37 = (ATerm) ATgetNext((ATermList) u_37);
          {
            ATerm l_38 = NULL,m_38 = NULL,n_38 = NULL,r_38 = NULL,t_38 = NULL,v_38 = NULL;
            ATerm k_22;
            k_22 = t;
            {
              ATerm o_38 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(v_37), not_null(a_38));
              {
                ATerm p_38 = NULL;
                t = o_94(t);
                {
                  o_38 = t;
                  {
                    if(((l_38 != NULL) && (l_38 != o_38)))
                      _fail(o_38);
                    else
                      l_38 = o_38;
                    {
                      t = not_null(l_38);
                      {
                        ATerm q_38 = NULL;
                        t = p_94(t);
                        {
                          p_38 = t;
                          {
                            if(((m_38 != NULL) && (m_38 != p_38)))
                              _fail(p_38);
                            else
                              m_38 = p_38;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, not_null(m_38), not_null(x_37));
                              {
                                t = diff_0(t);
                                {
                                  q_38 = t;
                                  if(((n_38 != NULL) && (n_38 != q_38)))
                                    _fail(q_38);
                                  else
                                    n_38 = q_38;
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
            t = k_22;
            {
              ATerm l_22;
              l_22 = t;
              {
                ATerm s_38 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(n_38), not_null(w_37));
                {
                  ATerm m_22 = t;
                  int n_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = conc_two_lists_0(t);
                      LocalPopChoice(n_22);
                    }
                  else
                    {
                      t = m_22;
                      t = conc_more_lists_0(t);
                    }
                  {
                    s_38 = t;
                    if(((r_38 != NULL) && (r_38 != s_38)))
                      _fail(s_38);
                    else
                      r_38 = s_38;
                  }
                }
              }
              t = l_22;
              {
                ATerm o_22;
                o_22 = t;
                {
                  ATerm u_38 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(n_38), not_null(x_37));
                  {
                    ATerm p_22 = t;
                    int q_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = conc_two_lists_0(t);
                        LocalPopChoice(q_22);
                      }
                    else
                      {
                        t = p_22;
                        t = conc_more_lists_0(t);
                      }
                    {
                      u_38 = t;
                      if(((t_38 != NULL) && (t_38 != u_38)))
                        _fail(u_38);
                      else
                        t_38 = u_38;
                    }
                  }
                }
                t = o_22;
                {
                  ATerm w_38 = NULL;
                  t = (ATerm) ATmakeAppl(sym__3, not_null(v_37), not_null(l_38), not_null(b_38));
                  {
                    t = q_94(t);
                    {
                      w_38 = t;
                      if(((v_38 != NULL) && (v_38 != w_38)))
                        _fail(w_38);
                      else
                        v_38 = w_38;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__5, not_null(r_38), not_null(t_38), not_null(a_38), not_null(v_38), not_null(c_38));
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
  ATerm u_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL;
  u_39 = t;
  s_39 :
  if(match_cons(u_39, sym__5))
    {
      v_39 = ATgetArgument(u_39, 0);
      w_39 = ATgetArgument(u_39, 1);
      x_39 = ATgetArgument(u_39, 2);
      y_39 = ATgetArgument(u_39, 3);
      z_39 = ATgetArgument(u_39, 4);
      t_39 :
      if(((ATgetType(v_39) == AT_LIST) && ATisEmpty(v_39)))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_39), not_null(z_39));
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
  ATerm n_40 = NULL,o_40 = NULL,p_40 = NULL,v_40 = NULL;
  n_40 = t;
  m_40 :
  if(match_cons(n_40, sym__3))
    {
      o_40 = ATgetArgument(n_40, 0);
      p_40 = ATgetArgument(n_40, 1);
      v_40 = ATgetArgument(n_40, 2);
      t = (ATerm) ATmakeAppl(sym__5, not_null(o_40), not_null(o_40), not_null(p_40), not_null(v_40), (ATerm) ATempty);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm d_67 (ATerm), ATerm e_67 (ATerm))
{
  ATerm b_41 (ATerm t)
  {
    ATerm v_22 = t;
    int w_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_67(t);
        LocalPopChoice(w_22);
      }
    else
      {
        t = v_22;
        {
          t = e_67(t);
          t = b_41(t);
        }
      }
    return(t);
  }
  t = b_41(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm g_67 (ATerm), ATerm h_67 (ATerm), ATerm i_67 (ATerm))
{
  t = g_67(t);
  t = while_not_2(t, h_67, i_67);
  return(t);
}
ATerm graph_nodes_undef_roots_3 (ATerm t, ATerm w_93 (ATerm), ATerm x_93 (ATerm), ATerm y_93 (ATerm))
{
  ATerm u_2 (ATerm t)
  {
    ATerm x_22 = t;
    int y_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3(t, w_93, x_93, y_93);
        LocalPopChoice(y_22);
      }
    else
      {
        t = x_22;
        t = GnUndefined_0(t);
      }
    return(t);
  }
  t = for_3(t, GnInitRoots_0, GnExit_0, u_2);
  return(t);
}
ATerm graph_nodes_roots_3 (ATerm t, ATerm l_94 (ATerm), ATerm m_94 (ATerm), ATerm n_94 (ATerm))
{
  ATerm e_41 = NULL,f_41 = NULL,g_41 = NULL;
  t = graph_nodes_undef_roots_3(t, l_94, m_94, n_94);
  {
    e_41 = t;
    d_41 :
    if(match_cons(e_41, sym__2))
      {
        f_41 = ATgetArgument(e_41, 0);
        g_41 = ATgetArgument(e_41, 1);
        t = not_null(f_41);
      }
    else
      {
        _fail(t);
      }
  }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm g_81 (ATerm))
{
  ATerm z_22 = t;
  int a_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(a_23);
    }
  else
    {
      t = z_22;
      {
        ATerm b_23 = t;
        int c_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_2 (ATerm t)
            {
              t = filter_1(t, g_81);
              return(t);
            }
            t = Cons_2(t, g_81, v_2);
            LocalPopChoice(c_23);
          }
        else
          {
            t = b_23;
            {
              ATerm m_41 = NULL,n_41 = NULL,o_41 = NULL;
              m_41 = t;
              l_41 :
              if(((ATgetType(m_41) == AT_LIST) && !(ATisEmpty(m_41))))
                {
                  n_41 = ATgetFirst((ATermList) m_41);
                  o_41 = (ATerm) ATgetNext((ATermList) m_41);
                  {
                    t = not_null(o_41);
                    t = filter_1(t, g_81);
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
  ATerm x_41 = NULL,y_41 = NULL;
  x_41 = t;
  w_41 :
  if(match_cons(x_41, sym_FILE_1))
    {
      y_41 = ATgetArgument(x_41, 0);
      {
        ATerm a_42 = NULL;
        ATerm c_42 = NULL;
        ATerm d_23 = t;
        int g_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_o_19;
            {
              t = get_config_0(t);
              {
                ATerm w_2 (ATerm t)
                {
                  ATerm l_23 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm b_42 = NULL;
                      b_42 = t;
                      s_41 :
                      if(!(match_string(b_42, "-I")))
                        {
                          _fail(t);
                        }
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = l_23;
                    }
                  return(t);
                }
                t = filter_1(t, w_2);
              }
            }
            LocalPopChoice(g_23);
          }
        else
          {
            t = d_23;
            t = (ATerm) ATempty;
          }
        {
          c_42 = t;
          if(((a_42 != NULL) && (a_42 != c_42)))
            _fail(c_42);
          else
            a_42 = c_42;
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, not_null(y_41)), term_n_23), term_m_23), term_v_8, (ATerm) ATempty);
          {
            ATerm x_2 (ATerm t)
            {
              t = Fst_0(t);
              {
                ATerm z_2 (ATerm t)
                {
                  t = (ATerm) ATinsert(CheckATermList(not_null(a_42)), term_z_20);
                  return(t);
                }
                t = get_module_1(t, z_2);
              }
              return(t);
            }
            ATerm y_2 (ATerm t)
            {
              ATerm d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL;
              d_42 = t;
              v_41 :
              if(match_cons(d_42, sym__3))
                {
                  e_42 = ATgetArgument(d_42, 0);
                  f_42 = ATgetArgument(d_42, 1);
                  g_42 = ATgetArgument(d_42, 2);
                  t = (ATerm) ATinsert(CheckATermList(not_null(g_42)), not_null(f_42));
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = graph_nodes_roots_3(t, x_2, get_stratego_imports_0, y_2);
            {
              t = unzip_0(t);
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
  ATerm o_23 = t;
  int p_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(p_23);
    }
  else
    {
      t = o_23;
      {
        ATerm p_42 = NULL,q_42 = NULL,s_42 = NULL;
        p_42 = t;
        o_42 :
        if(((ATgetType(p_42) == AT_LIST) && !(ATisEmpty(p_42))))
          {
            q_42 = ATgetFirst((ATermList) p_42);
            s_42 = (ATerm) ATgetNext((ATermList) p_42);
            {
              t = not_null(q_42);
              {
                ATerm b_3 (ATerm t)
                {
                  t = not_null(s_42);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, b_3);
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
  ATerm e_43 = NULL;
  ATerm l_43 = NULL;
  e_43 = t;
  {
    ATerm m_43 = NULL;
    ATerm o_43 = NULL,p_43 = NULL,q_43 = NULL;
    t = not_null(e_43);
    {
      m_43 = t;
      {
        t = SSL_explode_term(not_null(m_43));
        {
          o_43 = t;
          b_43 :
          if(match_cons(o_43, sym__2))
            {
              p_43 = ATgetArgument(o_43, 0);
              q_43 = ATgetArgument(o_43, 1);
              c_43 :
              if(match_string(p_43, ""))
                {
                  if(((l_43 != NULL) && (l_43 != q_43)))
                    _fail(q_43);
                  else
                    l_43 = q_43;
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
      t = not_null(l_43);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm e_74 (ATerm))
{
  ATerm y_43 (ATerm t)
  {
    ATerm q_23 = t;
    int r_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, y_43);
        LocalPopChoice(r_23);
      }
    else
      {
        t = q_23;
        {
          t = Nil_0(t);
          t = e_74(t);
        }
      }
    return(t);
  }
  t = y_43(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm b_44 = NULL,c_44 = NULL,d_44 = NULL;
  b_44 = t;
  a_44 :
  if(match_cons(b_44, sym__2))
    {
      c_44 = ATgetArgument(b_44, 0);
      d_44 = ATgetArgument(b_44, 1);
      {
        t = not_null(c_44);
        {
          ATerm d_3 (ATerm t)
          {
            t = not_null(d_44);
            return(t);
          }
          t = at_end_1(t, d_3);
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
  ATerm s_23 = t;
  int t_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(t_23);
    }
  else
    {
      t = s_23;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm extend_config_0 (ATerm t)
{
  ATerm l_44 = NULL,m_44 = NULL,n_44 = NULL;
  l_44 = t;
  k_44 :
  if(match_cons(l_44, sym__2))
    {
      m_44 = ATgetArgument(l_44, 0);
      n_44 = ATgetArgument(l_44, 1);
      {
        ATerm r_44 = NULL;
        ATerm s_44 = NULL,u_44 = NULL;
        ATerm t_44 = NULL;
        t = not_null(m_44);
        {
          ATerm w_23 = t;
          int x_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(x_23);
            }
          else
            {
              t = w_23;
              t = (ATerm) ATempty;
            }
          {
            t_44 = t;
            if(((s_44 != NULL) && (s_44 != t_44)))
              _fail(t_44);
            else
              s_44 = t_44;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_44), not_null(s_44));
          {
            ATerm y_23 = t;
            int z_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(z_23);
              }
            else
              {
                t = y_23;
                t = conc_more_lists_0(t);
              }
            {
              u_44 = t;
              if(((r_44 != NULL) && (r_44 != u_44)))
                _fail(u_44);
              else
                r_44 = u_44;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_n_11, not_null(m_44), not_null(r_44));
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
  ATerm a_24 = t;
  int c_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_3 (ATerm t)
      {
        ATerm g_45 = NULL;
        g_45 = t;
        y_44 :
        if(!(match_string(g_45, "-I")))
          {
            if(!(match_string(g_45, "--Include")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm g_3 (ATerm t)
      {
        ATerm h_45 = NULL;
        ATerm i_45 = NULL;
        i_45 = t;
        if(((h_45 != NULL) && (h_45 != i_45)))
          _fail(i_45);
        else
          h_45 = i_45;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_o_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_45)), term_o_19));
          t = extend_config_0(t);
        }
        t = term_v_8;
        return(t);
      }
      ATerm h_3 (ATerm t)
      {
        t = term_d_24;
        return(t);
      }
      t = ArgOption_3(t, f_3, g_3, h_3);
      LocalPopChoice(c_24);
    }
  else
    {
      t = a_24;
      {
        ATerm h_24 = t;
        int i_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_3 (ATerm t)
            {
              ATerm j_45 = NULL;
              j_45 = t;
              a_45 :
              if(!(match_string(j_45, "--nodep")))
                {
                  if(!(match_string(j_45, "-nodep")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm k_3 (ATerm t)
            {
              t = term_m_24;
              t = set_config_0(t);
              t = term_v_8;
              return(t);
            }
            ATerm l_3 (ATerm t)
            {
              t = term_n_24;
              return(t);
            }
            t = Option_3(t, j_3, k_3, l_3);
            LocalPopChoice(i_24);
          }
        else
          {
            t = h_24;
            {
              ATerm o_24 = t;
              int p_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_3 (ATerm t)
                  {
                    ATerm p_45 = NULL;
                    p_45 = t;
                    b_45 :
                    if(!(match_string(p_45, "--dep")))
                      {
                        if(!(match_string(p_45, "-d")))
                          {
                            if(!(match_string(p_45, "-dep")))
                              {
                                _fail(t);
                              }
                          }
                      }
                    return(t);
                  }
                  ATerm n_3 (ATerm t)
                  {
                    ATerm q_45 = NULL;
                    ATerm r_45 = NULL;
                    r_45 = t;
                    if(((q_45 != NULL) && (q_45 != r_45)))
                      _fail(r_45);
                    else
                      q_45 = r_45;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_d_9, not_null(q_45));
                      t = set_config_0(t);
                    }
                    t = term_v_8;
                    return(t);
                  }
                  ATerm s_3 (ATerm t)
                  {
                    t = term_q_24;
                    return(t);
                  }
                  t = ArgOption_3(t, m_3, n_3, s_3);
                  LocalPopChoice(p_24);
                }
              else
                {
                  t = o_24;
                  {
                    ATerm t_3 (ATerm t)
                    {
                      ATerm s_45 = NULL;
                      s_45 = t;
                      f_45 :
                      if(!(match_string(s_45, "--imports")))
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    ATerm w_3 (ATerm t)
                    {
                      t = term_t_24;
                      t = set_config_0(t);
                      t = term_v_8;
                      return(t);
                    }
                    ATerm y_3 (ATerm t)
                    {
                      t = term_u_24;
                      return(t);
                    }
                    t = Option_3(t, t_3, w_3, y_3);
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm rename_file_0 (ATerm t)
{
  ATerm x_45 = NULL,y_45 = NULL,z_45 = NULL;
  x_45 = t;
  w_45 :
  if(match_cons(x_45, sym__2))
    {
      y_45 = ATgetArgument(x_45, 0);
      z_45 = ATgetArgument(x_45, 1);
      t = SSL_rename(not_null(y_45), not_null(z_45));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stdout_0 (ATerm t)
{
  ATerm m_46 = NULL;
  m_46 = t;
  l_46 :
  if(match_cons(m_46, sym_stdout_0))
    {
      ATerm s_46 = NULL,b_47 = NULL;
      ATerm v_24;
      v_24 = t;
      {
        ATerm t_46 = NULL;
        t = SSLgetAnnotations(not_null(m_46));
        {
          t_46 = t;
          if(((s_46 != NULL) && (s_46 != t_46)))
            _fail(t_46);
          else
            s_46 = t_46;
        }
      }
      t = v_24;
      {
        ATerm c_47 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(s_46));
        {
          c_47 = t;
          if(((b_47 != NULL) && (b_47 != c_47)))
            _fail(c_47);
          else
            b_47 = c_47;
        }
        t = not_null(b_47);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm j_47 = NULL,k_47 = NULL,l_47 = NULL;
  j_47 = t;
  i_47 :
  if(match_cons(j_47, sym__2))
    {
      k_47 = ATgetArgument(j_47, 0);
      l_47 = ATgetArgument(j_47, 1);
      t = SSL_copy(not_null(k_47), not_null(l_47));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rename_to_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm v_47 = NULL,w_47 = NULL;
  v_47 = t;
  u_47 :
  if(match_cons(v_47, sym_FILE_1))
    {
      w_47 = ATgetArgument(v_47, 0);
      {
        ATerm w_24 = t;
        int x_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_47 = NULL;
            t = m_0(t);
            {
              y_47 = t;
              s_47 :
              if(match_cons(y_47, sym_stdout_0))
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(w_47), term_y_24);
                  {
                    t = copy_file_0(t);
                    {
                      t = not_null(w_47);
                      t = remove_file_0(t);
                    }
                  }
                }
              else
                {
                  _fail(t);
                }
            }
            t = term_y_24;
            LocalPopChoice(x_24);
          }
        else
          {
            t = w_24;
            {
              ATerm a_48 = NULL;
              ATerm b_48 = NULL;
              t = m_0(t);
              {
                b_48 = t;
                {
                  if(((a_48 != NULL) && (a_48 != b_48)))
                    _fail(b_48);
                  else
                    a_48 = b_48;
                  {
                    ATerm z_24 = t;
                    if((PushChoice() == 0))
                      {
                        t = stdout_0(t);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = z_24;
                      }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(w_47), not_null(a_48));
                      t = rename_file_0(t);
                    }
                  }
                }
              }
              t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(a_48));
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
  ATerm i_48 = NULL,j_48 = NULL,k_48 = NULL;
  i_48 = t;
  h_48 :
  if(((ATgetType(i_48) == AT_LIST) && !(ATisEmpty(i_48))))
    {
      j_48 = ATgetFirst((ATermList) i_48);
      k_48 = (ATerm) ATgetNext((ATermList) i_48);
      t = not_null(k_48);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm r_48 = NULL,s_48 = NULL,t_48 = NULL;
  r_48 = t;
  q_48 :
  if(match_cons(r_48, sym__2))
    {
      s_48 = ATgetArgument(r_48, 0);
      t_48 = ATgetArgument(r_48, 1);
      {
        ATerm o_25;
        o_25 = t;
        {
          ATerm w_48 = NULL;
          ATerm x_48 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_48), not_null(t_48));
          {
            ATerm p_25 = t;
            int q_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(q_25);
              }
            else
              {
                t = p_25;
                t = (ATerm) ATempty;
              }
            {
              x_48 = t;
              if(((w_48 != NULL) && (w_48 != x_48)))
                _fail(x_48);
              else
                w_48 = x_48;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(s_48), not_null(t_48), not_null(w_48));
            t = table_put_0(t);
          }
        }
        t = o_25;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm e_84 (ATerm))
{
  ATerm e_49 = NULL,f_49 = NULL,g_49 = NULL;
  ATerm r_25;
  r_25 = t;
  {
    ATerm h_49 = NULL;
    ATerm i_49 = NULL,j_49 = NULL,k_49 = NULL;
    t = e_84(t);
    {
      h_49 = t;
      {
        if(((g_49 != NULL) && (g_49 != h_49)))
          _fail(h_49);
        else
          g_49 = h_49;
        {
          ATerm s_25 = t;
          int t_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(g_49), term_g_17);
              t = table_get_0(t);
              LocalPopChoice(t_25);
            }
          else
            {
              t = s_25;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            i_49 = t;
            d_49 :
            if(((ATgetType(i_49) == AT_LIST) && !(ATisEmpty(i_49))))
              {
                j_49 = ATgetFirst((ATermList) i_49);
                k_49 = (ATerm) ATgetNext((ATermList) i_49);
                {
                  if(((f_49 != NULL) && (f_49 != j_49)))
                    _fail(j_49);
                  else
                    f_49 = j_49;
                  {
                    if(((e_49 != NULL) && (e_49 != k_49)))
                      _fail(k_49);
                    else
                      e_49 = k_49;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(g_49), term_g_17, not_null(e_49));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(f_49);
                          {
                            ATerm z_3 (ATerm t)
                            {
                              ATerm v_49 = NULL;
                              v_49 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(g_49), not_null(v_49));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, z_3);
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
  t = r_25;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm f_50 = NULL;
  f_50 = t;
  t = SSL_remove(not_null(f_50));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm k_66 (ATerm), ATerm l_66 (ATerm))
{
  ATerm u_25 = t;
  int v_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_66(t);
      t = l_66(t);
      LocalPopChoice(v_25);
    }
  else
    {
      t = u_25;
      {
        t = l_66(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm d_84 (ATerm))
{
  ATerm v_50 = NULL;
  ATerm a_26;
  a_26 = t;
  {
    ATerm f_51 = NULL;
    ATerm g_51 = NULL;
    t = d_84(t);
    {
      f_51 = t;
      {
        if(((v_50 != NULL) && (v_50 != f_51)))
          _fail(f_51);
        else
          v_50 = f_51;
        {
          ATerm h_51 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_50), term_g_17);
          {
            ATerm b_26 = t;
            int c_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(c_26);
              }
            else
              {
                t = b_26;
                t = (ATerm) ATempty;
              }
            {
              h_51 = t;
              if(((g_51 != NULL) && (g_51 != h_51)))
                _fail(h_51);
              else
                g_51 = h_51;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(v_50), term_g_17, (ATerm) ATinsert(CheckATermList(not_null(g_51)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = a_26;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm e_93 (ATerm))
{
  ATerm o_51 = NULL,p_51 = NULL;
  ATerm c_4 (ATerm t)
  {
    t = term_k_18;
    return(t);
  }
  t = begin_scope_1(t, c_4);
  {
    ATerm d_4 (ATerm t)
    {
      ATerm f_26;
      f_26 = t;
      {
        ATerm q_51 = NULL,d_52 = NULL,e_52 = NULL;
        ATerm g_26 = t;
        int j_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_k_26;
            t = table_get_0(t);
            LocalPopChoice(j_26);
          }
        else
          {
            t = g_26;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          q_51 = t;
          l_51 :
          if(((ATgetType(q_51) == AT_LIST) && !(ATisEmpty(q_51))))
            {
              d_52 = ATgetFirst((ATermList) q_51);
              e_52 = (ATerm) ATgetNext((ATermList) q_51);
              {
                if(((p_51 != NULL) && (p_51 != d_52)))
                  _fail(d_52);
                else
                  p_51 = d_52;
                {
                  if(((o_51 != NULL) && (o_51 != e_52)))
                    _fail(e_52);
                  else
                    o_51 = e_52;
                  {
                    t = not_null(p_51);
                    {
                      ATerm e_4 (ATerm t)
                      {
                        ATerm l_26 = t;
                        int n_26 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = remove_file_0(t);
                            LocalPopChoice(n_26);
                          }
                        else
                          {
                            t = l_26;
                            {
                            }
                          }
                        return(t);
                      }
                      t = map_1(t, e_4);
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
      t = f_26;
      {
        ATerm j_4 (ATerm t)
        {
          t = term_k_18;
          return(t);
        }
        t = end_scope_1(t, j_4);
      }
      return(t);
    }
    t = restore_always_2(t, e_93, d_4);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm f_93 (ATerm))
{
  ATerm k_4 (ATerm t)
  {
    ATerm q_26 = t;
    int r_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_52 = NULL;
        ATerm i_52 = NULL;
        t = term_n_18;
        {
          t = get_config_0(t);
          {
            i_52 = t;
            if(((h_52 != NULL) && (h_52 != i_52)))
              _fail(i_52);
            else
              h_52 = i_52;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(h_52));
        LocalPopChoice(r_26);
      }
    else
      {
        t = q_26;
        t = term_v_11;
      }
    {
      t = f_93(t);
      {
        ATerm l_4 (ATerm t)
        {
          ATerm s_26 = t;
          int t_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_y_8;
              t = get_config_0(t);
              LocalPopChoice(t_26);
            }
          else
            {
              t = s_26;
              t = term_y_24;
            }
          return(t);
        }
        t = rename_to_1(t, l_4);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, k_4);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm l_52 = NULL;
  l_52 = t;
  t = SSL_string_to_int(not_null(l_52));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm h_53 = NULL,n_53 = NULL,o_53 = NULL,t_53 = NULL,u_53 = NULL;
  h_53 = t;
  d_53 :
  if(match_string(h_53, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(h_53) == AT_LIST) && !(ATisEmpty(h_53))))
        {
          n_53 = ATgetFirst((ATermList) h_53);
          o_53 = (ATerm) ATgetNext((ATermList) h_53);
          g_53 :
          if(((ATgetType(o_53) == AT_LIST) && !(ATisEmpty(o_53))))
            {
              t_53 = ATgetFirst((ATermList) o_53);
              u_53 = (ATerm) ATgetNext((ATermList) o_53);
              {
                ATerm a_54 = NULL;
                ATerm u_26;
                u_26 = t;
                {
                  t = not_null(n_53);
                  t = j_0(t);
                }
                t = u_26;
                {
                  ATerm b_54 = NULL;
                  t = not_null(t_53);
                  {
                    t = k_0(t);
                    {
                      b_54 = t;
                      if(((a_54 != NULL) && (a_54 != b_54)))
                        _fail(b_54);
                      else
                        a_54 = b_54;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(u_53)), not_null(a_54));
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
ATerm io_options_0 (ATerm t)
{
  ATerm v_26 = t;
  int w_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_4 (ATerm t)
      {
        ATerm w_54 = NULL;
        w_54 = t;
        h_54 :
        if(!(match_string(w_54, "-i")))
          {
            if(!(match_string(w_54, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm n_4 (ATerm t)
      {
        ATerm z_54 = NULL;
        ATerm x_26;
        x_26 = t;
        {
          ATerm x_54 = NULL;
          ATerm y_54 = NULL;
          y_54 = t;
          if(((x_54 != NULL) && (x_54 != y_54)))
            _fail(y_54);
          else
            x_54 = y_54;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_n_18, not_null(x_54));
            t = set_config_0(t);
          }
        }
        t = x_26;
        {
          ATerm a_55 = NULL;
          a_55 = t;
          if(((z_54 != NULL) && (z_54 != a_55)))
            _fail(a_55);
          else
            z_54 = a_55;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(z_54));
        }
        return(t);
      }
      ATerm o_4 (ATerm t)
      {
        t = term_c_27;
        return(t);
      }
      t = ArgOption_3(t, m_4, n_4, o_4);
      LocalPopChoice(w_26);
    }
  else
    {
      t = v_26;
      {
        ATerm d_27 = t;
        int e_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_4 (ATerm t)
            {
              ATerm b_55 = NULL;
              b_55 = t;
              k_54 :
              if(!(match_string(b_55, "-o")))
                {
                  if(!(match_string(b_55, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm q_4 (ATerm t)
            {
              ATerm e_55 = NULL;
              ATerm f_27;
              f_27 = t;
              {
                ATerm c_55 = NULL;
                ATerm d_55 = NULL;
                d_55 = t;
                if(((c_55 != NULL) && (c_55 != d_55)))
                  _fail(d_55);
                else
                  c_55 = d_55;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_y_8, not_null(c_55));
                  t = set_config_0(t);
                }
              }
              t = f_27;
              {
                ATerm f_55 = NULL;
                f_55 = t;
                if(((e_55 != NULL) && (e_55 != f_55)))
                  _fail(f_55);
                else
                  e_55 = f_55;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(e_55));
              }
              return(t);
            }
            ATerm r_4 (ATerm t)
            {
              t = term_g_27;
              return(t);
            }
            t = ArgOption_3(t, p_4, q_4, r_4);
            LocalPopChoice(e_27);
          }
        else
          {
            t = d_27;
            {
              ATerm h_27 = t;
              int i_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_4 (ATerm t)
                  {
                    ATerm g_55 = NULL;
                    g_55 = t;
                    n_54 :
                    if(!(match_string(g_55, "-S")))
                      {
                        if(!(match_string(g_55, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm g_5 (ATerm t)
                  {
                    t = term_k_27;
                    t = set_config_0(t);
                    t = term_l_27;
                    return(t);
                  }
                  ATerm h_5 (ATerm t)
                  {
                    t = term_o_27;
                    return(t);
                  }
                  t = Option_3(t, t_4, g_5, h_5);
                  LocalPopChoice(i_27);
                }
              else
                {
                  t = h_27;
                  {
                    ATerm p_27 = t;
                    int q_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm i_5 (ATerm t)
                        {
                          ATerm h_55 = NULL;
                          h_55 = t;
                          o_54 :
                          if(!(match_string(h_55, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm j_5 (ATerm t)
                        {
                          ATerm k_55 = NULL;
                          ATerm s_27;
                          s_27 = t;
                          {
                            ATerm i_55 = NULL;
                            ATerm j_55 = NULL;
                            t = string_to_int_0(t);
                            {
                              j_55 = t;
                              if(((i_55 != NULL) && (i_55 != j_55)))
                                _fail(j_55);
                              else
                                i_55 = j_55;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_m_8, not_null(i_55));
                              t = set_config_0(t);
                            }
                          }
                          t = s_27;
                          {
                            ATerm l_55 = NULL;
                            l_55 = t;
                            if(((k_55 != NULL) && (k_55 != l_55)))
                              _fail(l_55);
                            else
                              k_55 = l_55;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(k_55));
                          }
                          return(t);
                        }
                        ATerm k_5 (ATerm t)
                        {
                          t = term_t_27;
                          return(t);
                        }
                        t = ArgOption_3(t, i_5, j_5, k_5);
                        LocalPopChoice(q_27);
                      }
                    else
                      {
                        t = p_27;
                        {
                          ATerm u_27 = t;
                          int w_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm l_5 (ATerm t)
                              {
                                ATerm o_55 = NULL;
                                o_55 = t;
                                r_54 :
                                if(!(match_string(o_55, "-k")))
                                  {
                                    if(!(match_string(o_55, "--keep")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm m_5 (ATerm t)
                              {
                                ATerm x_27;
                                x_27 = t;
                                {
                                  ATerm p_55 = NULL;
                                  ATerm q_55 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    q_55 = t;
                                    if(((p_55 != NULL) && (p_55 != q_55)))
                                      _fail(q_55);
                                    else
                                      p_55 = q_55;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_w_11, not_null(p_55));
                                    t = set_config_0(t);
                                  }
                                }
                                t = x_27;
                                return(t);
                              }
                              ATerm n_5 (ATerm t)
                              {
                                t = term_y_27;
                                return(t);
                              }
                              t = ArgOption_3(t, l_5, m_5, n_5);
                              LocalPopChoice(w_27);
                            }
                          else
                            {
                              t = u_27;
                              {
                                ATerm d_28 = t;
                                int e_28 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm s_5 (ATerm t)
                                    {
                                      ATerm r_55 = NULL;
                                      r_55 = t;
                                      t_54 :
                                      if(!(match_string(r_55, "-v")))
                                        {
                                          if(!(match_string(r_55, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm t_5 (ATerm t)
                                    {
                                      t = term_g_28;
                                      t = set_config_0(t);
                                      t = term_h_28;
                                      return(t);
                                    }
                                    ATerm u_5 (ATerm t)
                                    {
                                      t = term_m_28;
                                      return(t);
                                    }
                                    t = Option_3(t, s_5, t_5, u_5);
                                    LocalPopChoice(e_28);
                                  }
                                else
                                  {
                                    t = d_28;
                                    {
                                      ATerm n_28 = t;
                                      int o_28 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm v_5 (ATerm t)
                                          {
                                            ATerm s_55 = NULL;
                                            s_55 = t;
                                            u_54 :
                                            if(!(match_string(s_55, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm w_5 (ATerm t)
                                          {
                                            t = term_s_28;
                                            t = set_config_0(t);
                                            t = term_t_28;
                                            return(t);
                                          }
                                          ATerm y_5 (ATerm t)
                                          {
                                            t = term_u_28;
                                            return(t);
                                          }
                                          t = Option_3(t, v_5, w_5, y_5);
                                          LocalPopChoice(o_28);
                                        }
                                      else
                                        {
                                          t = n_28;
                                          {
                                            ATerm b_6 (ATerm t)
                                            {
                                              ATerm t_55 = NULL;
                                              t_55 = t;
                                              v_54 :
                                              if(!(match_string(t_55, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm c_6 (ATerm t)
                                            {
                                              t = term_a_29;
                                              t = set_config_0(t);
                                              t = term_b_29;
                                              return(t);
                                            }
                                            ATerm j_6 (ATerm t)
                                            {
                                              t = term_d_29;
                                              return(t);
                                            }
                                            t = Option_3(t, b_6, c_6, j_6);
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
ATerm default_usage_0 (ATerm t)
{
  ATerm d_56 = NULL;
  ATerm f_29;
  f_29 = t;
  {
    ATerm q_6 (ATerm t)
    {
      ATerm e_56 = NULL,f_56 = NULL;
      e_56 = t;
      c_56 :
      if(match_cons(e_56, sym_Program_1))
        {
          f_56 = ATgetArgument(e_56, 0);
          if(((d_56 != NULL) && (d_56 != f_56)))
            _fail(f_56);
          else
            d_56 = f_56;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, q_6);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_z_19, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_29), not_null(d_56)), term_j_29));
      {
        t = printnl_0(t);
        {
          t = term_g_12;
          t = exit_0(t);
        }
      }
    }
  }
  t = f_29;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_z_19, (ATerm) ATinsert(ATempty, term_l_29));
  {
    t = printnl_0(t);
    {
      t = term_g_12;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm i_56 = NULL;
  i_56 = t;
  t = SSL_TicksToSeconds(not_null(i_56));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm n_56 = NULL,o_56 = NULL,p_56 = NULL;
  n_56 = t;
  m_56 :
  if(match_cons(n_56, sym__2))
    {
      o_56 = ATgetArgument(n_56, 0);
      p_56 = ATgetArgument(n_56, 1);
      {
        ATerm m_29 = t;
        int n_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(o_56), not_null(p_56));
            LocalPopChoice(n_29);
          }
        else
          {
            t = m_29;
            t = SSL_addr(not_null(o_56), not_null(p_56));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm d_80 (ATerm), ATerm e_80 (ATerm))
{
  ATerm o_29 = t;
  int p_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = d_80(t);
      LocalPopChoice(p_29);
    }
  else
    {
      t = o_29;
      {
        ATerm w_56 = NULL,x_56 = NULL,y_56 = NULL;
        w_56 = t;
        v_56 :
        if(((ATgetType(w_56) == AT_LIST) && !(ATisEmpty(w_56))))
          {
            x_56 = ATgetFirst((ATermList) w_56);
            y_56 = (ATerm) ATgetNext((ATermList) w_56);
            {
              ATerm b_57 = NULL;
              ATerm c_57 = NULL;
              t = not_null(y_56);
              {
                t = foldr_2(t, d_80, e_80);
                {
                  c_57 = t;
                  if(((b_57 != NULL) && (b_57 != c_57)))
                    _fail(c_57);
                  else
                    b_57 = c_57;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(x_56), not_null(b_57));
                t = e_80(t);
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
ATerm crush_2 (ATerm t, ATerm b_79 (ATerm), ATerm c_79 (ATerm))
{
  ATerm j_57 = NULL;
  ATerm l_57 = NULL;
  j_57 = t;
  {
    ATerm m_57 = NULL;
    ATerm o_57 = NULL,p_57 = NULL,q_57 = NULL;
    t = not_null(j_57);
    {
      m_57 = t;
      {
        t = SSL_explode_term(not_null(m_57));
        {
          o_57 = t;
          i_57 :
          if(match_cons(o_57, sym__2))
            {
              p_57 = ATgetArgument(o_57, 0);
              q_57 = ATgetArgument(o_57, 1);
              if(((l_57 != NULL) && (l_57 != q_57)))
                _fail(q_57);
              else
                l_57 = q_57;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(l_57);
      t = foldr_2(t, b_79, c_79);
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
    ATerm s_6 (ATerm t)
    {
      t = term_j_27;
      return(t);
    }
    t = crush_2(t, s_6, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm w_57 = NULL,x_57 = NULL,y_57 = NULL;
  w_57 = t;
  v_57 :
  if(match_cons(w_57, sym__2))
    {
      x_57 = ATgetArgument(w_57, 0);
      y_57 = ATgetArgument(w_57, 1);
      {
        ATerm q_29;
        q_29 = t;
        {
          ATerm r_29 = t;
          int s_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(x_57), not_null(y_57));
              LocalPopChoice(s_29);
            }
          else
            {
              t = r_29;
              t = SSL_gtr(not_null(x_57), not_null(y_57));
            }
        }
        t = q_29;
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
  ATerm e_58 = NULL;
  ATerm t_29 = t;
  int u_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_58 = NULL,g_58 = NULL,h_58 = NULL;
      f_58 = t;
      d_58 :
      if(match_cons(f_58, sym__2))
        {
          g_58 = ATgetArgument(f_58, 0);
          h_58 = ATgetArgument(f_58, 1);
          {
            if(((e_58 != NULL) && (e_58 != g_58)))
              _fail(g_58);
            else
              e_58 = g_58;
            if(((e_58 != NULL) && (e_58 != h_58)))
              _fail(h_58);
            else
              e_58 = h_58;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(u_29);
    }
  else
    {
      t = t_29;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm w_86 (ATerm))
{
  ATerm v_29 = t;
  int w_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_30;
      a_30 = t;
      {
        ATerm k_58 = NULL;
        ATerm l_58 = NULL;
        t = term_m_8;
        {
          t = get_config_0(t);
          {
            l_58 = t;
            if(((k_58 != NULL) && (k_58 != l_58)))
              _fail(l_58);
            else
              k_58 = l_58;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_58), term_g_12);
          t = geq_0(t);
        }
      }
      t = a_30;
      t = w_86(t);
      LocalPopChoice(w_29);
    }
  else
    {
      t = v_29;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm u_6 (ATerm t)
  {
    ATerm p_58 = NULL,r_58 = NULL;
    ATerm b_30;
    b_30 = t;
    {
      ATerm q_58 = NULL;
      t = run_time_0(t);
      {
        q_58 = t;
        if(((p_58 != NULL) && (p_58 != q_58)))
          _fail(q_58);
        else
          p_58 = q_58;
      }
    }
    t = b_30;
    {
      ATerm s_58 = NULL;
      t = term_c_30;
      {
        t = get_config_0(t);
        {
          s_58 = t;
          if(((r_58 != NULL) && (r_58 != s_58)))
            _fail(s_58);
          else
            r_58 = s_58;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_30), not_null(p_58)), term_l_30), not_null(r_58)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, u_6);
  {
    t = term_j_27;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm z_58 = NULL;
  z_58 = t;
  y_58 :
  if(match_cons(z_58, sym_Version_0))
    {
      ATerm b_59 = NULL,d_59 = NULL;
      ATerm n_30;
      n_30 = t;
      {
        ATerm c_59 = NULL;
        t = SSLgetAnnotations(not_null(z_58));
        {
          c_59 = t;
          if(((b_59 != NULL) && (b_59 != c_59)))
            _fail(c_59);
          else
            b_59 = c_59;
        }
      }
      t = n_30;
      {
        ATerm e_59 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(b_59));
        {
          e_59 = t;
          if(((d_59 != NULL) && (d_59 != e_59)))
            _fail(e_59);
          else
            d_59 = e_59;
        }
        t = not_null(d_59);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm q_85 (ATerm))
{
  ATerm v_6 (ATerm t)
  {
    ATerm o_30 = t;
    int p_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(p_30);
      }
    else
      {
        t = o_30;
        {
          ATerm q_30 = t;
          int v_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(v_30);
            }
          else
            {
              t = q_30;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, v_6);
  t = q_85(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm j_59 = NULL;
  j_59 = t;
  t = SSL_table_create(not_null(j_59));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm n_59 = NULL;
  n_59 = t;
  {
    ATerm z_30;
    z_30 = t;
    {
      t = term_f_31;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_f_31, term_g_31, not_null(n_59));
          t = table_put_0(t);
        }
      }
    }
    t = z_30;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm r_59 = NULL;
  r_59 = t;
  t = SSL_table_destroy(not_null(r_59));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm v_59 = NULL;
  v_59 = t;
  t = SSL_exit(not_null(v_59));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm z_59 = NULL,a_60 = NULL,b_60 = NULL;
  z_59 = t;
  y_59 :
  if(((ATgetType(z_59) == AT_LIST) && ATisEmpty(z_59)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(z_59) == AT_LIST) && !(ATisEmpty(z_59))))
        {
          a_60 = ATgetFirst((ATermList) z_59);
          b_60 = (ATerm) ATgetNext((ATermList) z_59);
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
  ATerm h_31;
  h_31 = t;
  {
    ATerm g_60 = NULL;
    ATerm j_60 = NULL;
    ATerm i_31 = t;
    int q_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(q_31);
      }
    else
      {
        t = i_31;
        {
          ATerm h_60 = NULL;
          ATerm i_60 = NULL;
          i_60 = t;
          if(((h_60 != NULL) && (h_60 != i_60)))
            _fail(i_60);
          else
            h_60 = i_60;
          t = (ATerm) ATinsert(ATempty, not_null(h_60));
        }
      }
    {
      j_60 = t;
      if(((g_60 != NULL) && (g_60 != j_60)))
        _fail(j_60);
      else
        g_60 = j_60;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_24, not_null(g_60));
      t = printnl_0(t);
    }
  }
  t = h_31;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm a_89 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm u_60 = NULL,v_60 = NULL,w_60 = NULL;
  w_60 = t;
  t_60 :
  if(((ATgetType(w_60) == AT_LIST) && !(ATisEmpty(w_60))))
    {
      u_60 = ATgetFirst((ATermList) w_60);
      v_60 = (ATerm) ATgetNext((ATermList) w_60);
      {
        ATerm z_60 = NULL;
        t = not_null(v_60);
        {
          ATerm r_31;
          r_31 = t;
          {
            ATerm a_61 = NULL,c_61 = NULL,e_61 = NULL;
            ATerm s_31;
            s_31 = t;
            {
              ATerm b_61 = NULL;
              t = i_0(t);
              {
                b_61 = t;
                if(((a_61 != NULL) && (a_61 != b_61)))
                  _fail(b_61);
                else
                  a_61 = b_61;
              }
            }
            t = s_31;
            {
              ATerm d_61 = NULL;
              t = not_null(u_60);
              {
                t = h_0(t);
                {
                  d_61 = t;
                  if(((c_61 != NULL) && (c_61 != d_61)))
                    _fail(d_61);
                  else
                    c_61 = d_61;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(a_61)), not_null(c_61));
                {
                  e_61 = t;
                  if(((z_60 != NULL) && (z_60 != e_61)))
                    _fail(e_61);
                  else
                    z_60 = e_61;
                }
              }
            }
          }
          t = r_31;
          {
            ATerm w_6 (ATerm t)
            {
              t = not_null(z_60);
              return(t);
            }
            t = reverse_acc_2(t, h_0, w_6);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(w_60) == AT_LIST) && ATisEmpty(w_60)))
        {
          {
            t = term_v_8;
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
  ATerm x_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, x_6);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm z_88 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm c_60 (ATerm))
{
  ATerm p_61 = NULL,q_61 = NULL;
  p_61 = t;
  o_61 :
  if(match_cons(p_61, sym_Program_1))
    {
      q_61 = ATgetArgument(p_61, 0);
      {
        ATerm t_61 = NULL,v_61 = NULL;
        ATerm u_61 = NULL;
        t = SSLgetAnnotations(not_null(p_61));
        {
          u_61 = t;
          if(((t_61 != NULL) && (t_61 != u_61)))
            _fail(u_61);
          else
            t_61 = u_61;
        }
        {
          t = not_null(q_61);
          {
            ATerm x_61 = NULL;
            t = c_60(t);
            {
              v_61 = t;
              {
                ATerm y_61 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(v_61)), not_null(t_61));
                {
                  y_61 = t;
                  if(((x_61 != NULL) && (x_61 != y_61)))
                    _fail(y_61);
                  else
                    x_61 = y_61;
                }
                t = not_null(x_61);
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
  ATerm g_62 = NULL;
  ATerm t_31 = t;
  int u_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_62 = NULL;
      t = term_c_30;
      {
        t = get_config_0(t);
        {
          h_62 = t;
          if(((g_62 != NULL) && (g_62 != h_62)))
            _fail(h_62);
          else
            g_62 = h_62;
        }
      }
      LocalPopChoice(u_31);
    }
  else
    {
      t = t_31;
      {
        ATerm y_6 (ATerm t)
        {
          ATerm z_6 (ATerm t)
          {
            ATerm i_62 = NULL;
            i_62 = t;
            if(((g_62 != NULL) && (g_62 != i_62)))
              _fail(i_62);
            else
              g_62 = i_62;
            return(t);
          }
          t = Program_1(t, z_6);
          return(t);
        }
        t = fetch_1(t, y_6);
      }
    }
  {
    t = term_y_31;
    {
      t = echo_0(t);
      {
        t = term_b_32;
        {
          t = table_get_0(t);
          {
            ATerm a_7 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, a_7);
            {
              ATerm f_7 (ATerm t)
              {
                ATerm j_62 = NULL;
                ATerm k_62 = NULL;
                k_62 = t;
                if(((j_62 != NULL) && (j_62 != k_62)))
                  _fail(k_62);
                else
                  j_62 = k_62;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_62)), term_c_32);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, f_7);
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
  ATerm q_62 = NULL,r_62 = NULL,s_62 = NULL;
  q_62 = t;
  p_62 :
  if(match_cons(q_62, sym__2))
    {
      r_62 = ATgetArgument(q_62, 0);
      s_62 = ATgetArgument(q_62, 1);
      {
        ATerm d_32;
        d_32 = t;
        t = SSL_printnl(not_null(r_62), not_null(s_62));
        t = d_32;
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
  ATerm e_32;
  e_32 = t;
  {
    ATerm x_62 = NULL;
    ATerm y_62 = NULL;
    y_62 = t;
    if(((x_62 != NULL) && (x_62 != y_62)))
      _fail(y_62);
    else
      x_62 = y_62;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_z_19, (ATerm) ATinsert(ATempty, not_null(x_62)));
      t = printnl_0(t);
    }
  }
  t = e_32;
  return(t);
}
ATerm say_1 (ATerm t, ATerm p_84 (ATerm))
{
  ATerm f_32;
  f_32 = t;
  {
    t = p_84(t);
    t = debug_0(t);
  }
  t = f_32;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm d_60 (ATerm))
{
  ATerm f_63 = NULL,g_63 = NULL;
  f_63 = t;
  e_63 :
  if(match_cons(f_63, sym_Undefined_1))
    {
      g_63 = ATgetArgument(f_63, 0);
      {
        ATerm j_63 = NULL,l_63 = NULL;
        ATerm k_63 = NULL;
        t = SSLgetAnnotations(not_null(f_63));
        {
          k_63 = t;
          if(((j_63 != NULL) && (j_63 != k_63)))
            _fail(k_63);
          else
            j_63 = k_63;
        }
        {
          t = not_null(g_63);
          {
            ATerm n_63 = NULL;
            t = d_60(t);
            {
              l_63 = t;
              {
                ATerm o_63 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(l_63)), not_null(j_63));
                {
                  o_63 = t;
                  if(((n_63 != NULL) && (n_63 != o_63)))
                    _fail(o_63);
                  else
                    n_63 = o_63;
                }
                t = not_null(n_63);
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
ATerm fetch_1 (ATerm t, ATerm y_73 (ATerm))
{
  ATerm t_63 (ATerm t)
  {
    ATerm k_32 = t;
    int l_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, y_73, _id);
        LocalPopChoice(l_32);
      }
    else
      {
        t = k_32;
        t = Cons_2(t, _id, t_63);
      }
    return(t);
  }
  t = t_63(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm z_87 (ATerm))
{
  t = fetch_1(t, z_87);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm y_63 = NULL;
  y_63 = t;
  x_63 :
  if(match_cons(y_63, sym_Help_0))
    {
      ATerm a_64 = NULL,c_64 = NULL;
      ATerm m_32;
      m_32 = t;
      {
        ATerm b_64 = NULL;
        t = SSLgetAnnotations(not_null(y_63));
        {
          b_64 = t;
          if(((a_64 != NULL) && (a_64 != b_64)))
            _fail(b_64);
          else
            a_64 = b_64;
        }
      }
      t = m_32;
      {
        ATerm d_64 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(a_64));
        {
          d_64 = t;
          if(((c_64 != NULL) && (c_64 != d_64)))
            _fail(d_64);
          else
            c_64 = d_64;
        }
        t = not_null(c_64);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm x_65 (ATerm))
{
  ATerm n_32 = t;
  int s_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_65(t);
      LocalPopChoice(s_32);
    }
  else
    {
      t = n_32;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm j_64 = NULL,k_64 = NULL,l_64 = NULL;
  j_64 = t;
  i_64 :
  if(match_cons(j_64, sym__2))
    {
      k_64 = ATgetArgument(j_64, 0);
      l_64 = ATgetArgument(j_64, 1);
      t = SSL_table_get(not_null(k_64), not_null(l_64));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm s_64 = NULL,t_64 = NULL,u_64 = NULL,v_64 = NULL;
  s_64 = t;
  r_64 :
  if(match_cons(s_64, sym__3))
    {
      t_64 = ATgetArgument(s_64, 0);
      u_64 = ATgetArgument(s_64, 1);
      v_64 = ATgetArgument(s_64, 2);
      {
        ATerm t_32;
        t_32 = t;
        {
          ATerm z_64 = NULL;
          ATerm a_65 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_64), not_null(u_64));
          {
            ATerm v_32 = t;
            int w_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(w_32);
              }
            else
              {
                t = v_32;
                t = (ATerm) ATempty;
              }
            {
              a_65 = t;
              if(((z_64 != NULL) && (z_64 != a_65)))
                _fail(a_65);
              else
                z_64 = a_65;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(t_64), not_null(u_64), (ATerm) ATinsert(CheckATermList(not_null(z_64)), not_null(v_64)));
            t = table_put_0(t);
          }
        }
        t = t_32;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm e_89 (ATerm))
{
  ATerm e_65 = NULL;
  ATerm f_65 = NULL;
  t = term_v_8;
  {
    t = e_89(t);
    {
      f_65 = t;
      if(((e_65 != NULL) && (e_65 != f_65)))
        _fail(f_65);
      else
        e_65 = f_65;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_z_31, term_a_32, not_null(e_65));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm l_65 = NULL,m_65 = NULL,n_65 = NULL;
  l_65 = t;
  k_65 :
  if(match_string(l_65, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(l_65) == AT_LIST) && !(ATisEmpty(l_65))))
        {
          m_65 = ATgetFirst((ATermList) l_65);
          n_65 = (ATerm) ATgetNext((ATermList) l_65);
          {
            ATerm q_65 = NULL;
            ATerm x_32;
            x_32 = t;
            {
              t = not_null(m_65);
              t = a_0(t);
            }
            t = x_32;
            {
              ATerm r_65 = NULL;
              t = term_v_8;
              {
                t = d_0(t);
                {
                  r_65 = t;
                  if(((q_65 != NULL) && (q_65 != r_65)))
                    _fail(r_65);
                  else
                    q_65 = r_65;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(n_65)), not_null(q_65));
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
  ATerm g_7 (ATerm t)
  {
    ATerm z_65 = NULL;
    z_65 = t;
    y_65 :
    if(!(match_string(z_65, "--help")))
      {
        if(!(match_string(z_65, "-h")))
          {
            if(!(match_string(z_65, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm h_7 (ATerm t)
  {
    t = term_d_33;
    {
      t = set_config_0(t);
      t = term_e_33;
    }
    return(t);
  }
  ATerm i_7 (ATerm t)
  {
    t = term_f_33;
    return(t);
  }
  t = Option_3(t, g_7, h_7, i_7);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm c_66 = NULL,d_66 = NULL,e_66 = NULL;
  c_66 = t;
  b_66 :
  if(((ATgetType(c_66) == AT_LIST) && !(ATisEmpty(c_66))))
    {
      d_66 = ATgetFirst((ATermList) c_66);
      e_66 = (ATerm) ATgetNext((ATermList) c_66);
      t = (ATerm) ATinsert(CheckATermList(not_null(e_66)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(d_66)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm m_55 (ATerm), ATerm n_55 (ATerm))
{
  ATerm q_66 = NULL,r_66 = NULL,s_66 = NULL;
  q_66 = t;
  p_66 :
  if(((ATgetType(q_66) == AT_LIST) && !(ATisEmpty(q_66))))
    {
      r_66 = ATgetFirst((ATermList) q_66);
      s_66 = (ATerm) ATgetNext((ATermList) q_66);
      {
        ATerm w_66 = NULL,y_66 = NULL;
        ATerm x_66 = NULL;
        t = SSLgetAnnotations(not_null(q_66));
        {
          x_66 = t;
          if(((w_66 != NULL) && (w_66 != x_66)))
            _fail(x_66);
          else
            w_66 = x_66;
        }
        {
          t = not_null(r_66);
          {
            ATerm a_67 = NULL;
            t = m_55(t);
            {
              y_66 = t;
              {
                t = not_null(s_66);
                {
                  ATerm c_67 = NULL;
                  t = n_55(t);
                  {
                    a_67 = t;
                    {
                      ATerm j_67 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(a_67)), not_null(y_66)), not_null(w_66));
                      {
                        j_67 = t;
                        if(((c_67 != NULL) && (c_67 != j_67)))
                          _fail(j_67);
                        else
                          c_67 = j_67;
                      }
                      t = not_null(c_67);
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
  ATerm t_67 = NULL;
  t_67 = t;
  s_67 :
  if(((ATgetType(t_67) == AT_LIST) && ATisEmpty(t_67)))
    {
      {
        ATerm v_67 = NULL,x_67 = NULL;
        ATerm h_33;
        h_33 = t;
        {
          ATerm w_67 = NULL;
          t = SSLgetAnnotations(not_null(t_67));
          {
            w_67 = t;
            if(((v_67 != NULL) && (v_67 != w_67)))
              _fail(w_67);
            else
              v_67 = w_67;
          }
        }
        t = h_33;
        {
          ATerm y_67 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(v_67));
          {
            y_67 = t;
            if(((x_67 != NULL) && (x_67 != y_67)))
              _fail(y_67);
            else
              x_67 = y_67;
          }
          t = not_null(x_67);
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
  ATerm e_68 = NULL,f_68 = NULL,g_68 = NULL;
  e_68 = t;
  d_68 :
  if(match_cons(e_68, sym__2))
    {
      f_68 = ATgetArgument(e_68, 0);
      g_68 = ATgetArgument(e_68, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_n_11, not_null(f_68), not_null(g_68));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm c_89 (ATerm))
{
  ATerm p_33;
  p_33 = t;
  {
    ATerm q_33 = t;
    int r_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_s_33;
        t = c_89(t);
        LocalPopChoice(r_33);
      }
    else
      {
        t = q_33;
        {
        }
      }
  }
  t = p_33;
  {
    ATerm n_7 (ATerm t)
    {
      ATerm o_68 = NULL;
      ATerm t_33;
      t_33 = t;
      {
        ATerm m_68 = NULL;
        ATerm n_68 = NULL;
        n_68 = t;
        if(((m_68 != NULL) && (m_68 != n_68)))
          _fail(n_68);
        else
          m_68 = n_68;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_c_30, not_null(m_68));
          t = set_config_0(t);
        }
      }
      t = t_33;
      {
        ATerm p_68 = NULL;
        p_68 = t;
        if(((o_68 != NULL) && (o_68 != p_68)))
          _fail(p_68);
        else
          o_68 = p_68;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(o_68));
      }
      return(t);
    }
    ATerm o_7 (ATerm t)
    {
      ATerm y_33 = t;
      int z_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_34 = t;
          int b_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(b_34);
            }
          else
            {
              t = a_34;
              {
                t = c_89(t);
                t = Cons_2(t, _id, o_7);
              }
            }
          LocalPopChoice(z_33);
        }
      else
        {
          t = y_33;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, n_7, o_7);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm v_68 = NULL,w_68 = NULL,x_68 = NULL;
  ATerm m_34;
  m_34 = t;
  {
    ATerm y_68 = NULL,z_68 = NULL,a_69 = NULL,b_69 = NULL;
    y_68 = t;
    u_68 :
    if(match_cons(y_68, sym__3))
      {
        z_68 = ATgetArgument(y_68, 0);
        a_69 = ATgetArgument(y_68, 1);
        b_69 = ATgetArgument(y_68, 2);
        {
          if(((v_68 != NULL) && (v_68 != z_68)))
            _fail(z_68);
          else
            v_68 = z_68;
          {
            if(((w_68 != NULL) && (w_68 != a_69)))
              _fail(a_69);
            else
              w_68 = a_69;
            {
              if(((x_68 != NULL) && (x_68 != b_69)))
                _fail(b_69);
              else
                x_68 = b_69;
              t = SSL_table_put(not_null(v_68), not_null(w_68), not_null(x_68));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = m_34;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm b_89 (ATerm))
{
  ATerm e_69 = NULL;
  ATerm n_34;
  n_34 = t;
  {
    t = term_o_34;
    t = table_put_0(t);
  }
  t = n_34;
  {
    ATerm p_7 (ATerm t)
    {
      ATerm p_34 = t;
      int q_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_89(t);
          LocalPopChoice(q_34);
        }
      else
        {
          t = p_34;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, p_7);
    {
      ATerm r_34 = t;
      int v_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_34;
          w_34 = t;
          {
            ATerm x_34 = t;
            int b_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_y_32;
                t = get_config_0(t);
                LocalPopChoice(b_35);
              }
            else
              {
                t = x_34;
                t = fetch_1(t, Help_0);
              }
          }
          t = w_34;
          {
            t = system_usage_0(t);
            {
              t = term_j_27;
              t = exit_0(t);
            }
          }
          LocalPopChoice(v_34);
        }
      else
        {
          t = r_34;
          {
            ATerm d_35 = t;
            int e_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_7 (ATerm t)
                {
                  ATerm r_7 (ATerm t)
                  {
                    ATerm f_69 = NULL;
                    f_69 = t;
                    if(((e_69 != NULL) && (e_69 != f_69)))
                      _fail(f_69);
                    else
                      e_69 = f_69;
                    return(t);
                  }
                  t = Undefined_1(t, r_7);
                  return(t);
                }
                t = fetch_1(t, q_7);
                {
                  ATerm s_7 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_69)), term_f_35);
                    return(t);
                  }
                  t = say_1(t, s_7);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_g_12;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(e_35);
              }
            else
              {
                t = d_35;
                {
                }
              }
          }
        }
      {
        ATerm h_35;
        h_35 = t;
        {
          t = term_z_31;
          t = table_destroy_0(t);
        }
        t = h_35;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm w_85 (ATerm), ATerm x_85 (ATerm), ATerm y_85 (ATerm), ATerm z_85 (ATerm))
{
  t = parse_options_1(t, w_85);
  {
    t = store_options_0(t);
    {
      t = y_85(t);
      {
        ATerm i_35 = t;
        int k_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, x_85);
            LocalPopChoice(k_35);
          }
        else
          {
            t = i_35;
            {
              ATerm s_35 = t;
              int t_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_85(t);
                  t = report_success_0(t);
                  LocalPopChoice(t_35);
                }
              else
                {
                  t = s_35;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm a_86 (ATerm), ATerm b_86 (ATerm))
{
  t = option_wrap_4(t, a_86, default_usage_0, _id, b_86);
  return(t);
}
ATerm xtc_iowrap_2 (ATerm t, ATerm h_93 (ATerm), ATerm i_93 (ATerm))
{
  ATerm t_7 (ATerm t)
  {
    ATerm u_35 = t;
    int y_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_93(t);
        LocalPopChoice(y_35);
      }
    else
      {
        t = u_35;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm v_7 (ATerm t)
  {
    t = xtc_io_1(t, i_93);
    return(t);
  }
  t = option_wrap_2(t, t_7, v_7);
  return(t);
}
ATerm pack_stratego_0 (ATerm t)
{
  ATerm j_69 = NULL,k_69 = NULL;
  ATerm y_7 (ATerm t)
  {
    ATerm l_69 = NULL,m_69 = NULL,n_69 = NULL;
    t = pack_stratego_modules_0(t);
    {
      l_69 = t;
      i_69 :
      if(match_cons(l_69, sym__2))
        {
          m_69 = ATgetArgument(l_69, 0);
          n_69 = ATgetArgument(l_69, 1);
          {
            if(((j_69 != NULL) && (j_69 != m_69)))
              _fail(m_69);
            else
              j_69 = m_69;
            {
              if(((k_69 != NULL) && (k_69 != n_69)))
                _fail(n_69);
              else
                k_69 = n_69;
              {
                ATerm a_36 = t;
                int b_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_r_24;
                    {
                      t = get_config_0(t);
                      {
                        t = not_null(j_69);
                        {
                          ATerm z_7 (ATerm t)
                          {
                            t = get_filename_0(t);
                            t = basename_1(t, _id);
                            return(t);
                          }
                          t = map_1(t, z_7);
                          t = write_to_text_0(t);
                        }
                      }
                    }
                    LocalPopChoice(b_36);
                  }
                else
                  {
                    t = a_36;
                    {
                      t = not_null(j_69);
                      {
                        t = create_dep_file_0(t);
                        {
                          t = not_null(k_69);
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
  t = xtc_iowrap_2(t, pack_stratego_options_0, y_7);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = pack_stratego_0(t);
  return(t);
}
