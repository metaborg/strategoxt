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
ATerm term_p_35;
ATerm term_t_34;
ATerm term_b_34;
ATerm term_s_33;
ATerm term_r_33;
ATerm term_j_33;
ATerm term_h_33;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_t_31;
ATerm term_k_31;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_d_29;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_o_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_q_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_i_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_p_26;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_g_24;
ATerm term_c_24;
ATerm term_j_23;
ATerm term_g_23;
ATerm term_m_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_z_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_k_20;
ATerm term_u_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_f_19;
ATerm term_n_18;
ATerm term_c_18;
ATerm term_y_17;
ATerm term_l_17;
ATerm term_h_17;
ATerm term_f_17;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_l_16;
ATerm term_d_16;
ATerm term_t_15;
ATerm term_p_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_c_15;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_z_13;
ATerm term_r_13;
ATerm term_m_13;
ATerm term_h_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_f_12;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_m_11;
ATerm term_d_11;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_c_9;
ATerm term_x_8;
ATerm term_u_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_o_8;
ATerm term_l_8;
void init_constant_terms (void)
{
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("dissuasive library strategy: ", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("separate-by/1; Use separate-by/0 and term wrap patterns: <separate-by> (a, <id>)", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("dep", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" :", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" \\\n	", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym__2, term_e_13, term_h_13);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym__2, term_e_13, term_s_14);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("parse error in ", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("*** module ", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("rtree", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("str", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("cr", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" reading ", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("list-cons", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("tuple-cons", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d   Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(sym__2, term_e_9, term_g_24);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep              Don't create dependency file", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep f | -d f       Write dependency to file f", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym__2, term_r_24, term_u_8);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports            Produce a list of imported modules only", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(sym__2, term_c_18, term_f_17);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(sym__2, term_z_26, term_u_8);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(sym__2, term_l_8, term_l_27);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(sym_Verbose_1, term_l_27);
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(sym__2, term_w_27, term_u_8);
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(sym__2, term_t_28, term_u_8);
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(sym__2, term_e_32, term_f_32);
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(sym__2, term_h_33, term_u_8);
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(sym__3, term_e_32, term_f_32, (ATerm) ATempty);
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm separate_by_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm o_87 (ATerm));
ATerm dissuader_1 (ATerm, ATerm n_85 (ATerm));
ATerm separate_by_1 (ATerm, ATerm d_74 (ATerm));
ATerm create_dep_file_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_to_text_0 (ATerm);
ATerm basename_1 (ATerm, ATerm r_83 (ATerm));
ATerm basename_0 (ATerm);
ATerm at_suffix_rev_1 (ATerm, ATerm e_75 (ATerm));
ATerm get_filename_0 (ATerm);
ATerm map_1 (ATerm, ATerm h_74 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm Imports_1 (ATerm, ATerm k_61 (ATerm));
ATerm flatten_stratego_0 (ATerm);
ATerm _2 (ATerm, ATerm w_54 (ATerm), ATerm x_54 (ATerm));
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm s_76 (ATerm));
ATerm unzip_0 (ATerm);
ATerm get_stratego_imports_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm pass_keep_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm o_94 (ATerm), ATerm p_94 (ATerm));
ATerm close_file_0 (ATerm);
ATerm call_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm r_87 (ATerm));
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm q_87 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm s_87 (ATerm));
ATerm set_0 (ATerm);
ATerm union_1 (ATerm, ATerm e_80 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm a_91 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm f_94 (ATerm));
ATerm assert_1 (ATerm, ATerm y_84 (ATerm));
ATerm obsolete_1 (ATerm, ATerm m_85 (ATerm));
ATerm open_file_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm e_61 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm h_94 (ATerm), ATerm i_94 (ATerm));
ATerm parse_module_0 (ATerm);
ATerm debug_1 (ATerm, ATerm f_85 (ATerm));
ATerm if_verbose3_1 (ATerm, ATerm p_87 (ATerm));
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm find_in_path_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm add_extension_0 (ATerm);
ATerm split_2 (ATerm, ATerm k_82 (ATerm), ATerm l_82 (ATerm));
ATerm guarantee_extension_1 (ATerm, ATerm t_83 (ATerm));
ATerm find_file_1 (ATerm, ATerm c_86 (ATerm));
ATerm fetch_elem_1 (ATerm, ATerm s_74 (ATerm));
ATerm find_module_1 (ATerm, ATerm p_66 (ATerm));
ATerm get_module_1 (ATerm, ATerm o_66 (ATerm));
ATerm Fst_0 (ATerm);
ATerm GnUndefined_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm i_80 (ATerm), ATerm j_80 (ATerm));
ATerm diff_1 (ATerm, ATerm a_80 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm i_76 (ATerm), ATerm j_76 (ATerm), ATerm k_76 (ATerm), ATerm l_76 (ATerm));
ATerm zip_1 (ATerm, ATerm n_76 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNext_3 (ATerm, ATerm m_95 (ATerm), ATerm n_95 (ATerm), ATerm o_95 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm v_67 (ATerm), ATerm w_67 (ATerm));
ATerm for_3 (ATerm, ATerm y_67 (ATerm), ATerm z_67 (ATerm), ATerm a_68 (ATerm));
ATerm graph_nodes_undef_roots_3 (ATerm, ATerm u_94 (ATerm), ATerm v_94 (ATerm), ATerm w_94 (ATerm));
ATerm graph_nodes_roots_3 (ATerm, ATerm j_95 (ATerm), ATerm k_95 (ATerm), ATerm l_95 (ATerm));
ATerm filter_1 (ATerm, ATerm y_81 (ATerm));
ATerm pack_stratego_modules_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm w_74 (ATerm));
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
ATerm end_scope_1 (ATerm, ATerm v_84 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm a_67 (ATerm), ATerm b_67 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm u_84 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm v_93 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm w_93 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm v_80 (ATerm), ATerm w_80 (ATerm));
ATerm crush_2 (ATerm, ATerm t_79 (ATerm), ATerm u_79 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm n_87 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm h_86 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm r_89 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm q_89 (ATerm));
ATerm Program_1 (ATerm, ATerm v_60 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm g_85 (ATerm));
ATerm Undefined_1 (ATerm, ATerm w_60 (ATerm));
ATerm fetch_1 (ATerm, ATerm q_74 (ATerm));
ATerm option_defined_1 (ATerm, ATerm q_88 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm q_66 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm v_89 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm f_56 (ATerm), ATerm g_56 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm t_89 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm s_89 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm n_86 (ATerm), ATerm o_86 (ATerm), ATerm p_86 (ATerm), ATerm q_86 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm r_86 (ATerm), ATerm s_86 (ATerm));
ATerm xtc_io_wrap_2 (ATerm, ATerm a_94 (ATerm), ATerm b_94 (ATerm));
ATerm xtc_iowrap_2 (ATerm, ATerm d_94 (ATerm), ATerm e_94 (ATerm));
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
  ATerm d_3 = NULL;
  ATerm f_3 = NULL;
  d_3 = t;
  {
    ATerm h_3 = NULL;
    t = xtc_new_file_0(t);
    {
      h_3 = t;
      {
        if(((f_3 != NULL) && (f_3 != h_3)))
          _fail(h_3);
        else
          f_3 = h_3;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_3), not_null(d_3));
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
  ATerm o_3 = NULL,p_3 = NULL,q_3 = NULL;
  o_3 = t;
  n_3 :
  if(match_cons(o_3, sym__2))
    {
      p_3 = ATgetArgument(o_3, 0);
      q_3 = ATgetArgument(o_3, 1);
      {
        t = not_null(q_3);
        {
          ATerm w_3 = t;
          int z_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(z_7);
            }
          else
            {
              t = w_3;
              {
                ATerm b_0 (ATerm t)
                {
                  ATerm a_8 = t;
                  int b_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Nil_0(t);
                      LocalPopChoice(b_8);
                    }
                  else
                    {
                      t = a_8;
                      {
                        ATerm t_3 = NULL;
                        t = Cons_2(t, _id, b_0);
                        {
                          ATerm u_3 = NULL;
                          u_3 = t;
                          if(((t_3 != NULL) && (t_3 != u_3)))
                            _fail(u_3);
                          else
                            t_3 = u_3;
                          t = (ATerm) ATinsert(CheckATermList(not_null(t_3)), not_null(p_3));
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
ATerm if_verbose2_1 (ATerm t, ATerm o_87 (ATerm))
{
  ATerm c_8 = t;
  int g_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_8;
      h_8 = t;
      {
        ATerm z_3 = NULL;
        ATerm a_4 = NULL;
        t = term_l_8;
        {
          t = get_config_0(t);
          {
            a_4 = t;
            if(((z_3 != NULL) && (z_3 != a_4)))
              _fail(a_4);
            else
              z_3 = a_4;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_3), term_o_8);
          t = geq_0(t);
        }
      }
      t = h_8;
      t = o_87(t);
      LocalPopChoice(g_8);
    }
  else
    {
      t = c_8;
      {
      }
    }
  return(t);
}
ATerm dissuader_1 (ATerm t, ATerm n_85 (ATerm))
{
  ATerm p_8;
  p_8 = t;
  {
    ATerm c_0 (ATerm t)
    {
      t = n_85(t);
      {
        ATerm e_0 (ATerm t)
        {
          t = term_q_8;
          return(t);
        }
        t = debug_1(t, e_0);
      }
      return(t);
    }
    t = if_verbose2_1(t, c_0);
  }
  t = p_8;
  return(t);
}
ATerm separate_by_1 (ATerm t, ATerm d_74 (ATerm))
{
  ATerm e_4 = NULL,g_4 = NULL;
  ATerm f_0 (ATerm t)
  {
    t = term_r_8;
    return(t);
  }
  t = dissuader_1(t, f_0);
  {
    ATerm s_8;
    s_8 = t;
    {
      ATerm f_4 = NULL;
      f_4 = t;
      if(((e_4 != NULL) && (e_4 != f_4)))
        _fail(f_4);
      else
        e_4 = f_4;
    }
    t = s_8;
    {
      ATerm h_4 = NULL;
      t = term_u_8;
      {
        t = d_74(t);
        {
          h_4 = t;
          if(((g_4 != NULL) && (g_4 != h_4)))
            _fail(h_4);
          else
            g_4 = h_4;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_4), not_null(e_4));
        t = separate_by_0(t);
      }
    }
  }
  return(t);
}
ATerm create_dep_file_0 (ATerm t)
{
  ATerm r_4 = NULL;
  ATerm t_4 = NULL,u_4 = NULL,v_4 = NULL,w_4 = NULL;
  r_4 = t;
  {
    ATerm x_4 = NULL;
    t = term_x_8;
    {
      ATerm y_4 = NULL;
      t = get_config_0(t);
      {
        x_4 = t;
        {
          if(((t_4 != NULL) && (t_4 != x_4)))
            _fail(x_4);
          else
            t_4 = x_4;
          {
            ATerm z_4 = NULL,b_5 = NULL;
            ATerm a_9 = t;
            int b_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_c_9;
                t = get_config_0(t);
                LocalPopChoice(b_9);
              }
            else
              {
                t = a_9;
                {
                  ATerm d_9 = t;
                  if((PushChoice() == 0))
                    {
                      t = term_e_9;
                      t = get_config_0(t);
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = d_9;
                    }
                }
              }
            {
              y_4 = t;
              {
                if(((v_4 != NULL) && (v_4 != y_4)))
                  _fail(y_4);
                else
                  v_4 = y_4;
                {
                  ATerm a_5 = NULL;
                  a_5 = t;
                  if(((z_4 != NULL) && (z_4 != a_5)))
                    _fail(a_5);
                  else
                    z_4 = a_5;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(z_4), term_f_9);
                    {
                      ATerm c_5 = NULL;
                      t = add_extension_0(t);
                      {
                        b_5 = t;
                        {
                          if(((u_4 != NULL) && (u_4 != b_5)))
                            _fail(b_5);
                          else
                            u_4 = b_5;
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(u_4), term_g_9);
                            {
                              ATerm d_5 = NULL;
                              t = open_file_0(t);
                              {
                                c_5 = t;
                                {
                                  if(((w_4 != NULL) && (w_4 != c_5)))
                                    _fail(c_5);
                                  else
                                    w_4 = c_5;
                                  {
                                    ATerm e_5 = NULL;
                                    t = (ATerm) ATinsert(CheckATermList(not_null(r_4)), term_l_9);
                                    {
                                      ATerm p_0 (ATerm t)
                                      {
                                        t = term_m_9;
                                        return(t);
                                      }
                                      t = separate_by_1(t, p_0);
                                      {
                                        e_5 = t;
                                        if(((d_5 != NULL) && (d_5 != e_5)))
                                          _fail(e_5);
                                        else
                                          d_5 = e_5;
                                      }
                                    }
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(w_4), (ATerm) ATinsert(CheckATermList(not_null(d_5)), not_null(v_4)));
                                      {
                                        t = printnl_0(t);
                                        {
                                          t = not_null(w_4);
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
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(u_4));
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm o_5 = NULL,p_5 = NULL,q_5 = NULL;
  o_5 = t;
  n_5 :
  if(match_cons(o_5, sym__2))
    {
      p_5 = ATgetArgument(o_5, 0);
      q_5 = ATgetArgument(o_5, 1);
      t = SSL_WriteToTextFile(not_null(p_5), not_null(q_5));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_text_0 (ATerm t)
{
  ATerm w_5 = NULL;
  ATerm y_5 = NULL;
  w_5 = t;
  {
    ATerm z_5 = NULL;
    t = xtc_new_file_0(t);
    {
      z_5 = t;
      {
        if(((y_5 != NULL) && (y_5 != z_5)))
          _fail(z_5);
        else
          y_5 = z_5;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_5), not_null(w_5));
          {
            t = WriteToTextFile_0(t);
            {
              t = not_null(y_5);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(y_5));
  }
  return(t);
}
ATerm basename_1 (ATerm t, ATerm r_83 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm n_9 = t;
    int r_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_6 (ATerm t)
        {
          ATerm t_9 = t;
          int w_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, g_6);
              LocalPopChoice(w_9);
            }
          else
            {
              t = t_9;
              {
                ATerm x_9 = t;
                int y_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm q_0 (ATerm t)
                    {
                      ATerm e_6 = NULL;
                      e_6 = t;
                      c_6 :
                      if(!(match_int(e_6, 47)))
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = Cons_2(t, q_0, _id);
                    LocalPopChoice(y_9);
                  }
                else
                  {
                    t = x_9;
                    {
                      ATerm r_0 (ATerm t)
                      {
                        ATerm f_6 = NULL;
                        f_6 = t;
                        d_6 :
                        if(!(match_int(f_6, 46)))
                          {
                            _fail(t);
                          }
                        return(t);
                      }
                      t = Cons_2(t, r_0, r_83);
                      t = (ATerm) ATempty;
                    }
                  }
              }
            }
          return(t);
        }
        t = g_6(t);
        LocalPopChoice(r_9);
      }
    else
      {
        t = n_9;
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
ATerm at_suffix_rev_1 (ATerm t, ATerm e_75 (ATerm))
{
  ATerm h_6 (ATerm t)
  {
    ATerm z_9 = t;
    int a_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, h_6);
        LocalPopChoice(a_10);
      }
    else
      {
        t = z_9;
        t = e_75(t);
      }
    return(t);
  }
  t = h_6(t);
  return(t);
}
ATerm get_filename_0 (ATerm t)
{
  ATerm l_6 = NULL;
  t = explode_string_0(t);
  {
    ATerm b_10 = t;
    int m_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_0 (ATerm t)
        {
          ATerm m_6 = NULL,n_6 = NULL,o_6 = NULL;
          m_6 = t;
          j_6 :
          if(((ATgetType(m_6) == AT_LIST) && !(ATisEmpty(m_6))))
            {
              n_6 = ATgetFirst((ATermList) m_6);
              o_6 = (ATerm) ATgetNext((ATermList) m_6);
              k_6 :
              if(match_int(n_6, 47))
                {
                  if(((l_6 != NULL) && (l_6 != o_6)))
                    _fail(o_6);
                  else
                    l_6 = o_6;
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
        t = not_null(l_6);
        LocalPopChoice(m_10);
      }
    else
      {
        t = b_10;
        {
        }
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm map_1 (ATerm t, ATerm h_74 (ATerm))
{
  ATerm q_6 (ATerm t)
  {
    ATerm n_10 = t;
    int o_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(o_10);
      }
    else
      {
        t = n_10;
        t = Cons_2(t, h_74, q_6);
      }
    return(t);
  }
  t = q_6(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm s_6 = NULL;
  s_6 = t;
  t = SSL_is_string(not_null(s_6));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm p_10 = t;
  int q_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(q_10);
    }
  else
    {
      t = p_10;
      {
        ATerm r_10 = t;
        int w_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_0 (ATerm t)
            {
              ATerm x_10 = t;
              int y_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(y_10);
                }
              else
                {
                  t = x_10;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, t_0);
            LocalPopChoice(w_10);
          }
        else
          {
            t = r_10;
            {
              ATerm b_7 = NULL,c_7 = NULL,d_7 = NULL;
              b_7 = t;
              a_7 :
              if(match_cons(b_7, sym_Path_1))
                {
                  c_7 = ATgetArgument(b_7, 0);
                  t = not_null(c_7);
                }
              else
                {
                  if(match_cons(b_7, sym_Var_1))
                    {
                      c_7 = ATgetArgument(b_7, 0);
                      {
                        t = not_null(c_7);
                        {
                          ATerm z_10 = t;
                          int c_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(c_11);
                            }
                          else
                            {
                              t = z_10;
                              {
                                ATerm u_0 (ATerm t)
                                {
                                  t = term_d_11;
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
                      if(match_cons(b_7, sym_Prefix_2))
                        {
                          c_7 = ATgetArgument(b_7, 0);
                          d_7 = ATgetArgument(b_7, 1);
                          {
                            ATerm i_7 = NULL,k_7 = NULL;
                            ATerm e_11;
                            e_11 = t;
                            {
                              ATerm j_7 = NULL;
                              t = not_null(c_7);
                              {
                                t = eval_config_0(t);
                                {
                                  j_7 = t;
                                  if(((i_7 != NULL) && (i_7 != j_7)))
                                    _fail(j_7);
                                  else
                                    i_7 = j_7;
                                }
                              }
                            }
                            t = e_11;
                            {
                              ATerm l_7 = NULL;
                              t = not_null(d_7);
                              {
                                t = eval_config_0(t);
                                {
                                  l_7 = t;
                                  if(((k_7 != NULL) && (k_7 != l_7)))
                                    _fail(l_7);
                                  else
                                    k_7 = l_7;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(i_7), not_null(k_7));
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
  ATerm t_7 = NULL;
  t_7 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_m_11, not_null(t_7));
    {
      t = table_get_0(t);
      {
        ATerm p_11 = t;
        int q_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm r_11;
              r_11 = t;
              {
                ATerm v_7 = NULL;
                ATerm w_7 = NULL;
                w_7 = t;
                if(((v_7 != NULL) && (v_7 != w_7)))
                  _fail(w_7);
                else
                  v_7 = w_7;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_m_11, not_null(t_7), not_null(v_7));
                  t = table_put_0(t);
                }
              }
              t = r_11;
            }
            LocalPopChoice(q_11);
          }
        else
          {
            t = p_11;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm Imports_1 (ATerm t, ATerm k_61 (ATerm))
{
  ATerm e_8 = NULL,f_8 = NULL;
  e_8 = t;
  d_8 :
  if(match_cons(e_8, sym_Imports_1))
    {
      f_8 = ATgetArgument(e_8, 0);
      {
        ATerm i_8 = NULL,k_8 = NULL;
        ATerm j_8 = NULL;
        t = SSLgetAnnotations(not_null(e_8));
        {
          j_8 = t;
          if(((i_8 != NULL) && (i_8 != j_8)))
            _fail(j_8);
          else
            i_8 = j_8;
        }
        {
          t = not_null(f_8);
          {
            ATerm m_8 = NULL;
            t = k_61(t);
            {
              k_8 = t;
              {
                ATerm n_8 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Imports_1, not_null(k_8)), not_null(i_8));
                {
                  n_8 = t;
                  if(((m_8 != NULL) && (m_8 != n_8)))
                    _fail(n_8);
                  else
                    m_8 = n_8;
                }
                t = not_null(m_8);
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
  ATerm y_8 = NULL;
  ATerm v_0 (ATerm t)
  {
    ATerm v_8 = NULL,w_8 = NULL;
    v_8 = t;
    t_8 :
    if(match_cons(v_8, sym_Specification_1))
      {
        w_8 = ATgetArgument(v_8, 0);
        {
          t = not_null(w_8);
          {
            ATerm w_0 (ATerm t)
            {
              ATerm s_11 = t;
              if((PushChoice() == 0))
                {
                  t = Imports_1(t, _id);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = s_11;
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
      ATerm z_8 = NULL;
      z_8 = t;
      if(((y_8 != NULL) && (y_8 != z_8)))
        _fail(z_8);
      else
        y_8 = z_8;
      t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(y_8));
    }
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm w_54 (ATerm), ATerm x_54 (ATerm))
{
  ATerm i_9 = NULL,j_9 = NULL,k_9 = NULL;
  i_9 = t;
  h_9 :
  if(match_cons(i_9, sym__2))
    {
      j_9 = ATgetArgument(i_9, 0);
      k_9 = ATgetArgument(i_9, 1);
      {
        ATerm o_9 = NULL,q_9 = NULL;
        ATerm p_9 = NULL;
        t = SSLgetAnnotations(not_null(i_9));
        {
          p_9 = t;
          if(((o_9 != NULL) && (o_9 != p_9)))
            _fail(p_9);
          else
            o_9 = p_9;
        }
        {
          t = not_null(j_9);
          {
            ATerm s_9 = NULL;
            t = w_54(t);
            {
              q_9 = t;
              {
                t = not_null(k_9);
                {
                  ATerm u_9 = NULL;
                  t = x_54(t);
                  {
                    s_9 = t;
                    {
                      ATerm v_9 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(q_9), not_null(s_9)), not_null(o_9));
                      {
                        v_9 = t;
                        if(((u_9 != NULL) && (u_9 != v_9)))
                          _fail(v_9);
                        else
                          u_9 = v_9;
                      }
                      t = not_null(u_9);
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
  ATerm f_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL;
  f_10 = t;
  c_10 :
  if(match_cons(f_10, sym__2))
    {
      g_10 = ATgetArgument(f_10, 0);
      j_10 = ATgetArgument(f_10, 1);
      d_10 :
      if(match_cons(g_10, sym__2))
        {
          h_10 = ATgetArgument(g_10, 0);
          i_10 = ATgetArgument(g_10, 1);
          e_10 :
          if(match_cons(j_10, sym__2))
            {
              k_10 = ATgetArgument(j_10, 0);
              l_10 = ATgetArgument(j_10, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(k_10)), not_null(h_10)), (ATerm) ATinsert(CheckATermList(not_null(l_10)), not_null(i_10)));
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
  ATerm t_10 = NULL,u_10 = NULL,v_10 = NULL;
  t_10 = t;
  s_10 :
  if(((ATgetType(t_10) == AT_LIST) && !(ATisEmpty(t_10))))
    {
      u_10 = ATgetFirst((ATermList) t_10);
      v_10 = (ATerm) ATgetNext((ATermList) t_10);
      t = (ATerm) ATmakeAppl(sym__2, not_null(u_10), not_null(v_10));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm b_11 = NULL;
  b_11 = t;
  a_11 :
  if(((ATgetType(b_11) == AT_LIST) && ATisEmpty(b_11)))
    {
      t = term_t_11;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm s_76 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, s_76);
  return(t);
}
ATerm unzip_0 (ATerm t)
{
  t = unzip_1(t, _id);
  return(t);
}
ATerm get_stratego_imports_0 (ATerm t)
{
  ATerm i_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL;
  i_11 = t;
  g_11 :
  if(match_cons(i_11, sym__2))
    {
      j_11 = ATgetArgument(i_11, 0);
      k_11 = ATgetArgument(i_11, 1);
      h_11 :
      if(match_cons(k_11, sym_Specification_1))
        {
          l_11 = ATgetArgument(k_11, 0);
          {
            t = not_null(l_11);
            {
              ATerm x_0 (ATerm t)
              {
                ATerm n_11 = NULL,o_11 = NULL;
                n_11 = t;
                f_11 :
                if(match_cons(n_11, sym_Imports_1))
                  {
                    o_11 = ATgetArgument(n_11, 0);
                    t = not_null(o_11);
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
  ATerm x_11 = NULL,y_11 = NULL;
  x_11 = t;
  w_11 :
  if(match_cons(x_11, sym_stdin_0))
    {
      ATerm z_11 = NULL;
      ATerm a_12 = NULL;
      t = term_u_11;
      {
        t = ReadFromFile_0(t);
        {
          a_12 = t;
          if(((z_11 != NULL) && (z_11 != a_12)))
            _fail(a_12);
          else
            z_11 = a_12;
        }
      }
      t = not_null(z_11);
    }
  else
    {
      if(match_cons(x_11, sym_FILE_1))
        {
          y_11 = ATgetArgument(x_11, 0);
          {
            ATerm c_12 = NULL;
            ATerm d_12 = NULL;
            t = not_null(y_11);
            {
              t = ReadFromFile_0(t);
              {
                d_12 = t;
                if(((c_12 != NULL) && (c_12 != d_12)))
                  _fail(d_12);
                else
                  c_12 = d_12;
              }
            }
            t = not_null(c_12);
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
  ATerm p_12 = NULL;
  ATerm r_12 = NULL,s_12 = NULL,t_12 = NULL;
  p_12 = t;
  {
    ATerm u_12 = NULL;
    ATerm w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL;
    t = not_null(p_12);
    {
      u_12 = t;
      {
        t = SSL_explode_term(not_null(u_12));
        {
          w_12 = t;
          l_12 :
          if(match_cons(w_12, sym__2))
            {
              x_12 = ATgetArgument(w_12, 0);
              y_12 = ATgetArgument(w_12, 1);
              m_12 :
              if(match_string(x_12, ""))
                {
                  n_12 :
                  if(((ATgetType(y_12) == AT_LIST) && !(ATisEmpty(y_12))))
                    {
                      z_12 = ATgetFirst((ATermList) y_12);
                      a_13 = (ATerm) ATgetNext((ATermList) y_12);
                      o_12 :
                      if(((ATgetType(a_13) == AT_LIST) && !(ATisEmpty(a_13))))
                        {
                          b_13 = ATgetFirst((ATermList) a_13);
                          c_13 = (ATerm) ATgetNext((ATermList) a_13);
                          {
                            if(((r_12 != NULL) && (r_12 != z_12)))
                              _fail(z_12);
                            else
                              r_12 = z_12;
                            {
                              if(((t_12 != NULL) && (t_12 != b_13)))
                                _fail(b_13);
                              else
                                t_12 = b_13;
                              if(((s_12 != NULL) && (s_12 != c_13)))
                                _fail(c_13);
                              else
                                s_12 = c_13;
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
    t = not_null(t_12);
  }
  return(t);
}
ATerm pass_keep_0 (ATerm t)
{
  ATerm i_13 = NULL;
  ATerm j_13 = NULL,l_13 = NULL;
  ATerm k_13 = NULL;
  t = term_v_11;
  {
    ATerm b_12 = t;
    int e_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(e_12);
      }
    else
      {
        t = b_12;
        t = term_f_12;
      }
    {
      k_13 = t;
      if(((j_13 != NULL) && (j_13 != k_13)))
        _fail(k_13);
      else
        j_13 = k_13;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_13), term_f_12);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          l_13 = t;
          if(((i_13 != NULL) && (i_13 != l_13)))
            _fail(l_13);
          else
            i_13 = l_13;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_13)), term_v_11);
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm p_13 = NULL;
  p_13 = t;
  t = SSL_int_to_string(not_null(p_13));
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm u_13 = NULL,v_13 = NULL,w_13 = NULL;
  u_13 = t;
  t_13 :
  if(match_cons(u_13, sym__2))
    {
      v_13 = ATgetArgument(u_13, 0);
      w_13 = ATgetArgument(u_13, 1);
      {
        ATerm g_12 = t;
        int h_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(v_13), not_null(w_13));
            LocalPopChoice(h_12);
          }
        else
          {
            t = g_12;
            t = SSL_subtr(not_null(v_13), not_null(w_13));
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
  ATerm c_14 = NULL;
  ATerm d_14 = NULL,f_14 = NULL;
  ATerm e_14 = NULL;
  t = term_l_8;
  {
    ATerm i_12 = t;
    int j_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(j_12);
      }
    else
      {
        t = i_12;
        t = term_f_12;
      }
    {
      e_14 = t;
      if(((d_14 != NULL) && (d_14 != e_14)))
        _fail(e_14);
      else
        d_14 = e_14;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_14), term_f_12);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          f_14 = t;
          if(((c_14 != NULL) && (c_14 != f_14)))
            _fail(f_14);
          else
            c_14 = f_14;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_14)), term_l_8);
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm o_94 (ATerm), ATerm p_94 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, o_94, p_94);
    t = read_from_0(t);
  }
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm j_14 = NULL;
  j_14 = t;
  t = SSL_close_file(not_null(j_14));
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm o_14 = NULL,p_14 = NULL,q_14 = NULL;
  o_14 = t;
  n_14 :
  if(match_cons(o_14, sym__2))
    {
      p_14 = ATgetArgument(o_14, 0);
      q_14 = ATgetArgument(o_14, 1);
      t = SSL_call(not_null(p_14), not_null(q_14));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm v_14 = NULL;
  v_14 = t;
  t = SSL_table_keys(not_null(v_14));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm b_15 = NULL;
  b_15 = t;
  {
    t = table_keys_0(t);
    {
      ATerm y_0 (ATerm t)
      {
        ATerm d_15 = NULL;
        ATerm f_15 = NULL;
        d_15 = t;
        {
          ATerm g_15 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_15), not_null(d_15));
          {
            t = table_get_0(t);
            {
              g_15 = t;
              if(((f_15 != NULL) && (f_15 != g_15)))
                _fail(g_15);
              else
                f_15 = g_15;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_15), not_null(f_15));
        }
        return(t);
      }
      t = map_1(t, y_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm r_87 (ATerm))
{
  ATerm k_12 = t;
  int q_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_12;
      v_12 = t;
      {
        ATerm l_15 = NULL;
        ATerm m_15 = NULL;
        t = term_l_8;
        {
          t = get_config_0(t);
          {
            m_15 = t;
            if(((l_15 != NULL) && (l_15 != m_15)))
              _fail(m_15);
            else
              l_15 = m_15;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_15), term_d_13);
          t = geq_0(t);
        }
      }
      t = v_12;
      t = r_87(t);
      LocalPopChoice(q_12);
    }
  else
    {
      t = k_12;
      {
      }
    }
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm s_15 = NULL;
  ATerm u_15 = NULL,v_15 = NULL;
  s_15 = t;
  {
    ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL,a_16 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_e_13, (ATerm) ATmakeAppl(sym_Tool_1, not_null(s_15)));
    {
      t = table_get_0(t);
      {
        w_15 = t;
        q_15 :
        if(((ATgetType(w_15) == AT_LIST) && !(ATisEmpty(w_15))))
          {
            x_15 = ATgetFirst((ATermList) w_15);
            a_16 = (ATerm) ATgetNext((ATermList) w_15);
            r_15 :
            if(match_cons(x_15, sym__2))
              {
                y_15 = ATgetArgument(x_15, 0);
                z_15 = ATgetArgument(x_15, 1);
                {
                  if(((u_15 != NULL) && (u_15 != y_15)))
                    _fail(y_15);
                  else
                    u_15 = y_15;
                  if(((v_15 != NULL) && (v_15 != z_15)))
                    _fail(z_15);
                  else
                    v_15 = z_15;
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
    t = not_null(v_15);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm h_16 = NULL,i_16 = NULL,j_16 = NULL;
  h_16 = t;
  g_16 :
  if(match_cons(h_16, sym__2))
    {
      i_16 = ATgetArgument(h_16, 0);
      j_16 = ATgetArgument(h_16, 1);
      {
        ATerm m_16 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_e_13, (ATerm) ATmakeAppl(sym_Tool_1, not_null(i_16)));
        {
          t = table_get_0(t);
          {
            ATerm z_0 (ATerm t)
            {
              ATerm n_16 = NULL,o_16 = NULL,p_16 = NULL;
              n_16 = t;
              f_16 :
              if(match_cons(n_16, sym__2))
                {
                  o_16 = ATgetArgument(n_16, 0);
                  p_16 = ATgetArgument(n_16, 1);
                  {
                    if(((j_16 != NULL) && (j_16 != o_16)))
                      _fail(o_16);
                    else
                      j_16 = o_16;
                    if(((m_16 != NULL) && (m_16 != p_16)))
                      _fail(p_16);
                    else
                      m_16 = p_16;
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
        t = not_null(m_16);
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
  ATerm f_13 = t;
  int g_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_13;
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
      LocalPopChoice(g_13);
    }
  else
    {
      t = f_13;
      {
      }
    }
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm q_87 (ATerm))
{
  ATerm n_13 = t;
  int o_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_13;
      q_13 = t;
      {
        ATerm t_16 = NULL;
        ATerm u_16 = NULL;
        t = term_l_8;
        {
          t = get_config_0(t);
          {
            u_16 = t;
            if(((t_16 != NULL) && (t_16 != u_16)))
              _fail(u_16);
            else
              t_16 = u_16;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_16), term_r_13);
          t = geq_0(t);
        }
      }
      t = q_13;
      t = q_87(t);
      LocalPopChoice(o_13);
    }
  else
    {
      t = n_13;
      {
      }
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm s_87 (ATerm))
{
  ATerm s_13 = t;
  int x_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_13;
      y_13 = t;
      {
        ATerm x_16 = NULL;
        ATerm y_16 = NULL;
        t = term_l_8;
        {
          t = get_config_0(t);
          {
            y_16 = t;
            if(((x_16 != NULL) && (x_16 != y_16)))
              _fail(y_16);
            else
              x_16 = y_16;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_16), term_z_13);
          t = geq_0(t);
        }
      }
      t = y_13;
      t = s_87(t);
      LocalPopChoice(x_13);
    }
  else
    {
      t = s_13;
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
ATerm union_1 (ATerm t, ATerm e_80 (ATerm))
{
  ATerm c_17 = NULL,d_17 = NULL,e_17 = NULL;
  c_17 = t;
  b_17 :
  if(match_cons(c_17, sym__2))
    {
      d_17 = ATgetArgument(c_17, 0);
      e_17 = ATgetArgument(c_17, 1);
      {
        t = not_null(d_17);
        {
          ATerm i_17 (ATerm t)
          {
            ATerm a_14 = t;
            int b_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(e_17);
                LocalPopChoice(b_14);
              }
            else
              {
                t = a_14;
                {
                  ATerm g_14 = t;
                  int h_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm b_1 (ATerm t)
                      {
                        t = not_null(e_17);
                        return(t);
                      }
                      t = HdMember_p__2(t, e_80, b_1);
                      t = i_17(t);
                      LocalPopChoice(h_14);
                    }
                  else
                    {
                      t = g_14;
                      t = Cons_2(t, _id, i_17);
                    }
                }
              }
            return(t);
          }
          t = i_17(t);
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
  ATerm n_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL;
  n_17 = t;
  m_17 :
  if(match_cons(n_17, sym__3))
    {
      o_17 = ATgetArgument(n_17, 0);
      p_17 = ATgetArgument(n_17, 1);
      q_17 = ATgetArgument(n_17, 2);
      {
        ATerm i_14;
        i_14 = t;
        {
          ATerm u_17 = NULL;
          ATerm v_17 = NULL,x_17 = NULL;
          ATerm w_17 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_17), not_null(p_17));
          {
            ATerm k_14 = t;
            int l_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(l_14);
              }
            else
              {
                t = k_14;
                t = (ATerm) ATempty;
              }
            {
              w_17 = t;
              if(((v_17 != NULL) && (v_17 != w_17)))
                _fail(w_17);
              else
                v_17 = w_17;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(v_17), not_null(q_17));
            {
              t = union_1(t, eq_0);
              {
                x_17 = t;
                if(((u_17 != NULL) && (u_17 != x_17)))
                  _fail(x_17);
                else
                  u_17 = x_17;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(o_17), not_null(p_17), not_null(u_17));
            t = table_put_0(t);
          }
        }
        t = i_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm a_91 (ATerm))
{
  ATerm f_18 = NULL,g_18 = NULL,h_18 = NULL;
  f_18 = t;
  e_18 :
  if(match_cons(f_18, sym__2))
    {
      g_18 = ATgetArgument(f_18, 0);
      h_18 = ATgetArgument(f_18, 1);
      {
        t = not_null(h_18);
        {
          ATerm c_1 (ATerm t)
          {
            ATerm k_18 = NULL,l_18 = NULL,m_18 = NULL;
            k_18 = t;
            d_18 :
            if(match_cons(k_18, sym__2))
              {
                l_18 = ATgetArgument(k_18, 0);
                m_18 = ATgetArgument(k_18, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(g_18), not_null(l_18), not_null(m_18));
                  t = a_91(t);
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
  ATerm s_18 = NULL;
  s_18 = t;
  t = SSL_ReadFromFile(not_null(s_18));
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm x_18 = NULL;
  ATerm z_18 = NULL;
  x_18 = t;
  {
    ATerm m_14 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_13, (ATerm) ATmakeAppl(sym_Imported_1, not_null(x_18)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_14;
      }
    {
      ATerm r_14;
      r_14 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_e_13, term_s_14, (ATerm) ATinsert(ATempty, not_null(x_18)));
        t = table_put_0(t);
      }
      t = r_14;
      {
        ATerm d_1 (ATerm t)
        {
          ATerm e_1 (ATerm t)
          {
            t = term_t_14;
            return(t);
          }
          t = debug_1(t, e_1);
          return(t);
        }
        t = if_verbose4_1(t, d_1);
        {
          ATerm u_14 = t;
          int w_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(w_14);
            }
          else
            {
              t = u_14;
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
              ATerm a_19 = NULL;
              a_19 = t;
              if(((z_18 != NULL) && (z_18 != a_19)))
                _fail(a_19);
              else
                z_18 = a_19;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_e_13, not_null(z_18));
                {
                  t = table_putlist_1(t, table_append_0);
                  {
                    ATerm h_1 (ATerm t)
                    {
                      ATerm i_1 (ATerm t)
                      {
                        t = term_y_14;
                        return(t);
                      }
                      t = say_1(t, i_1);
                      return(t);
                    }
                    t = if_verbose6_1(t, h_1);
                    {
                      t = (ATerm) ATmakeAppl(sym__3, term_e_13, (ATerm)ATmakeAppl(sym_Imported_1, not_null(x_18)), (ATerm) ATempty);
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
  ATerm e_19 = NULL;
  e_19 = t;
  t = SSL_getenv(not_null(e_19));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm z_14 = t;
  int a_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_15;
      t = get_config_0(t);
      LocalPopChoice(a_15);
    }
  else
    {
      t = z_14;
      {
        ATerm e_15 = t;
        int h_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_i_15;
            t = getenv_0(t);
            LocalPopChoice(h_15);
          }
        else
          {
            t = e_15;
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
      t = term_j_15;
      return(t);
    }
    t = debug_1(t, p_1);
    return(t);
  }
  t = if_verbose5_1(t, n_1);
  {
    ATerm k_15;
    k_15 = t;
    {
      ATerm n_15 = t;
      int o_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_p_15;
          t = table_get_0(t);
          LocalPopChoice(o_15);
        }
      else
        {
          t = n_15;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = k_15;
    {
      ATerm r_1 (ATerm t)
      {
        ATerm s_1 (ATerm t)
        {
          t = term_t_15;
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
  int c_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_1 (ATerm t)
      {
        ATerm u_1 (ATerm t)
        {
          t = term_d_16;
          return(t);
        }
        t = debug_1(t, u_1);
        return(t);
      }
      t = if_verbose5_1(t, t_1);
      {
        t = xtc_load_0(t);
        {
          ATerm e_16 = t;
          int k_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(k_16);
            }
          else
            {
              t = e_16;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm v_1 (ATerm t)
            {
              ATerm w_1 (ATerm t)
              {
                t = term_d_16;
                return(t);
              }
              t = debug_1(t, w_1);
              return(t);
            }
            t = if_verbose5_1(t, v_1);
          }
        }
      }
      LocalPopChoice(c_16);
    }
  else
    {
      t = b_16;
      {
        ATerm i_19 = NULL;
        ATerm j_19 = NULL;
        j_19 = t;
        if(((i_19 != NULL) && (i_19 != j_19)))
          _fail(j_19);
        else
          i_19 = j_19;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_16), not_null(i_19)), term_l_16);
          {
            t = error_0(t);
            {
              ATerm x_1 (ATerm t)
              {
                t = term_e_13;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm y_1 (ATerm t)
                    {
                      t = term_r_16;
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
ATerm xtc_command_1 (ATerm t, ATerm f_94 (ATerm))
{
  ATerm n_19 = NULL;
  ATerm s_16;
  s_16 = t;
  {
    ATerm o_19 = NULL;
    t = f_94(t);
    {
      t = xtc_find_0(t);
      {
        o_19 = t;
        if(((n_19 != NULL) && (n_19 != o_19)))
          _fail(o_19);
        else
          n_19 = o_19;
      }
    }
  }
  t = s_16;
  {
    ATerm v_16;
    v_16 = t;
    {
      ATerm p_19 = NULL;
      ATerm q_19 = NULL;
      q_19 = t;
      if(((p_19 != NULL) && (p_19 != q_19)))
        _fail(q_19);
      else
        p_19 = q_19;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_19), not_null(p_19));
        t = call_0(t);
      }
    }
    t = v_16;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm y_84 (ATerm))
{
  ATerm y_19 = NULL,z_19 = NULL,a_20 = NULL;
  y_19 = t;
  x_19 :
  if(match_cons(y_19, sym__2))
    {
      z_19 = ATgetArgument(y_19, 0);
      a_20 = ATgetArgument(y_19, 1);
      {
        ATerm d_20 = NULL,e_20 = NULL,f_20 = NULL;
        ATerm w_16;
        w_16 = t;
        {
          ATerm g_20 = NULL;
          ATerm h_20 = NULL,i_20 = NULL,j_20 = NULL;
          t = y_84(t);
          {
            g_20 = t;
            {
              if(((d_20 != NULL) && (d_20 != g_20)))
                _fail(g_20);
              else
                d_20 = g_20;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(d_20), not_null(z_19), not_null(a_20));
                {
                  t = table_push_0(t);
                  {
                    ATerm z_16 = t;
                    int a_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(d_20), term_f_17);
                        t = table_get_0(t);
                        LocalPopChoice(a_17);
                      }
                    else
                      {
                        t = z_16;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      h_20 = t;
                      w_19 :
                      if(((ATgetType(h_20) == AT_LIST) && !(ATisEmpty(h_20))))
                        {
                          i_20 = ATgetFirst((ATermList) h_20);
                          j_20 = (ATerm) ATgetNext((ATermList) h_20);
                          {
                            if(((e_20 != NULL) && (e_20 != i_20)))
                              _fail(i_20);
                            else
                              e_20 = i_20;
                            {
                              if(((f_20 != NULL) && (f_20 != j_20)))
                                _fail(j_20);
                              else
                                f_20 = j_20;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(d_20), term_f_17, (ATerm) ATinsert(CheckATermList(not_null(f_20)), (ATerm) ATinsert(CheckATermList(not_null(e_20)), not_null(z_19))));
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
        t = w_16;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm m_85 (ATerm))
{
  ATerm g_17;
  g_17 = t;
  {
    t = m_85(t);
    {
      ATerm z_1 (ATerm t)
      {
        t = term_h_17;
        return(t);
      }
      t = debug_1(t, z_1);
    }
  }
  t = g_17;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm r_20 = NULL,s_20 = NULL;
  ATerm j_17 = t;
  int k_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL;
      t_20 = t;
      o_20 :
      if(match_cons(t_20, sym__2))
        {
          u_20 = ATgetArgument(t_20, 0);
          v_20 = ATgetArgument(t_20, 1);
          {
            if(((s_20 != NULL) && (s_20 != u_20)))
              _fail(u_20);
            else
              s_20 = u_20;
            if(((r_20 != NULL) && (r_20 != v_20)))
              _fail(v_20);
            else
              r_20 = v_20;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(k_17);
      t = SSL_open_file(not_null(s_20), not_null(r_20));
    }
  else
    {
      t = j_17;
      {
        ATerm w_20 = NULL;
        ATerm x_20 = NULL;
        ATerm a_2 (ATerm t)
        {
          t = term_l_17;
          return(t);
        }
        t = obsolete_1(t, a_2);
        {
          w_20 = t;
          {
            if(((s_20 != NULL) && (s_20 != w_20)))
              _fail(w_20);
            else
              s_20 = w_20;
            {
              ATerm r_17;
              r_17 = t;
              {
                ATerm y_20 = NULL;
                t = term_g_9;
                {
                  y_20 = t;
                  if(((x_20 != NULL) && (x_20 != y_20)))
                    _fail(y_20);
                  else
                    x_20 = y_20;
                }
              }
              t = r_17;
              t = SSL_open_file(not_null(s_20), not_null(x_20));
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
    ATerm s_17 = t;
    int t_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(t_17);
      }
    else
      {
        t = s_17;
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
  ATerm d_21 = NULL;
  ATerm e_21 = NULL;
  t = term_u_8;
  {
    t = new_0(t);
    {
      e_21 = t;
      if(((d_21 != NULL) && (d_21 != e_21)))
        _fail(e_21);
      else
        d_21 = e_21;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_21), term_y_17);
    {
      t = conc_strings_0(t);
      {
        ATerm z_17 = t;
        int a_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = file_exists_0(t);
            t = new_file_0(t);
            LocalPopChoice(a_18);
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
  ATerm i_21 = NULL;
  t = new_file_0(t);
  {
    i_21 = t;
    {
      ATerm b_18;
      b_18 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_21), term_g_9);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(i_21), term_u_8);
            {
              ATerm b_2 (ATerm t)
              {
                t = term_c_18;
                return(t);
              }
              t = assert_1(t, b_2);
            }
          }
        }
      }
      t = b_18;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm s_21 = NULL,t_21 = NULL;
  s_21 = t;
  r_21 :
  if(match_cons(s_21, sym_stdin_0))
    {
      ATerm u_21 = NULL;
      ATerm v_21 = NULL;
      ATerm w_21 = NULL;
      t = xtc_new_file_0(t);
      {
        v_21 = t;
        {
          if(((u_21 != NULL) && (u_21 != v_21)))
            _fail(v_21);
          else
            u_21 = v_21;
          {
            ATerm x_21 = NULL;
            t = o_0(t);
            {
              x_21 = t;
              if(((w_21 != NULL) && (w_21 != x_21)))
                _fail(x_21);
              else
                w_21 = x_21;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(w_21), (ATerm) ATinsert(ATinsert(ATempty, not_null(u_21)), term_x_8));
              {
                ATerm i_18 = t;
                int j_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = conc_two_lists_0(t);
                    LocalPopChoice(j_18);
                  }
                else
                  {
                    t = i_18;
                    t = conc_more_lists_0(t);
                  }
                {
                  t = xtc_command_1(t, n_0);
                  {
                    t = not_null(u_21);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(u_21));
    }
  else
    {
      if(match_cons(s_21, sym_FILE_1))
        {
          t_21 = ATgetArgument(s_21, 0);
          {
            ATerm u_22 = NULL;
            ATerm v_22 = NULL;
            t = not_null(t_21);
            {
              ATerm w_22 = NULL;
              t = xtc_new_file_0(t);
              {
                v_22 = t;
                {
                  if(((u_22 != NULL) && (u_22 != v_22)))
                    _fail(v_22);
                  else
                    u_22 = v_22;
                  {
                    ATerm x_22 = NULL;
                    t = o_0(t);
                    {
                      x_22 = t;
                      if(((w_22 != NULL) && (w_22 != x_22)))
                        _fail(x_22);
                      else
                        w_22 = x_22;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(w_22), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(u_22)), term_x_8), not_null(t_21)), term_n_18));
                      {
                        ATerm o_18 = t;
                        int p_18 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = conc_two_lists_0(t);
                            LocalPopChoice(p_18);
                          }
                        else
                          {
                            t = o_18;
                            t = conc_more_lists_0(t);
                          }
                        {
                          t = xtc_command_1(t, n_0);
                          {
                            t = not_null(u_22);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(u_22));
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
  ATerm i_23 = NULL;
  i_23 = t;
  h_23 :
  if(match_cons(i_23, sym_stdin_0))
    {
      ATerm k_23 = NULL,m_23 = NULL;
      ATerm q_18;
      q_18 = t;
      {
        ATerm l_23 = NULL;
        t = SSLgetAnnotations(not_null(i_23));
        {
          l_23 = t;
          if(((k_23 != NULL) && (k_23 != l_23)))
            _fail(l_23);
          else
            k_23 = l_23;
        }
      }
      t = q_18;
      {
        ATerm n_23 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(k_23));
        {
          n_23 = t;
          if(((m_23 != NULL) && (m_23 != n_23)))
            _fail(n_23);
          else
            m_23 = n_23;
        }
        t = not_null(m_23);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm e_61 (ATerm))
{
  ATerm y_23 = NULL,e_24 = NULL;
  y_23 = t;
  x_23 :
  if(match_cons(y_23, sym_FILE_1))
    {
      e_24 = ATgetArgument(y_23, 0);
      {
        ATerm h_24 = NULL,j_24 = NULL;
        ATerm i_24 = NULL;
        t = SSLgetAnnotations(not_null(y_23));
        {
          i_24 = t;
          if(((h_24 != NULL) && (h_24 != i_24)))
            _fail(i_24);
          else
            h_24 = i_24;
        }
        {
          t = not_null(e_24);
          {
            ATerm m_24 = NULL;
            t = e_61(t);
            {
              j_24 = t;
              {
                ATerm n_24 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(j_24)), not_null(h_24));
                {
                  n_24 = t;
                  if(((m_24 != NULL) && (m_24 != n_24)))
                    _fail(n_24);
                  else
                    m_24 = n_24;
                }
                t = not_null(m_24);
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
ATerm xtc_transform_2 (ATerm t, ATerm h_94 (ATerm), ATerm i_94 (ATerm))
{
  ATerm r_18 = t;
  int t_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_18 = t;
      int v_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(v_18);
        }
      else
        {
          t = u_18;
          t = stdin_0(t);
        }
      LocalPopChoice(t_18);
      t = xtc_transform_file_2(t, h_94, i_94);
    }
  else
    {
      t = r_18;
      t = xtc_transform_term_2(t, h_94, i_94);
    }
  return(t);
}
ATerm parse_module_0 (ATerm t)
{
  ATerm w_18 = t;
  int y_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_25 = NULL;
      ATerm c_2 (ATerm t)
      {
        ATerm b_19 = t;
        if((PushChoice() == 0))
          {
            ATerm f_25 = NULL;
            f_25 = t;
            v_24 :
            if(!(match_string(f_25, "rtree")))
              {
                _fail(t);
              }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = b_19;
          }
        return(t);
      }
      ATerm d_2 (ATerm t)
      {
        ATerm g_25 = NULL;
        g_25 = t;
        if(((e_25 != NULL) && (e_25 != g_25)))
          _fail(g_25);
        else
          e_25 = g_25;
        return(t);
      }
      t = _2(t, c_2, d_2);
      {
        t = Snd_0(t);
        {
          ATerm c_19 = t;
          int d_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_2 (ATerm t)
              {
                t = term_f_19;
                return(t);
              }
              ATerm f_2 (ATerm t)
              {
                ATerm h_25 = NULL,j_25 = NULL,l_25 = NULL;
                ATerm g_19;
                g_19 = t;
                {
                  ATerm i_25 = NULL;
                  t = pass_verbose_0(t);
                  {
                    i_25 = t;
                    if(((h_25 != NULL) && (h_25 != i_25)))
                      _fail(i_25);
                    else
                      h_25 = i_25;
                  }
                }
                t = g_19;
                {
                  ATerm h_19;
                  h_19 = t;
                  {
                    ATerm k_25 = NULL;
                    t = pass_keep_0(t);
                    {
                      k_25 = t;
                      if(((j_25 != NULL) && (j_25 != k_25)))
                        _fail(k_25);
                      else
                        j_25 = k_25;
                    }
                  }
                  t = h_19;
                  {
                    ATerm m_25 = NULL;
                    t = term_k_19;
                    {
                      t = get_config_0(t);
                      {
                        m_25 = t;
                        if(((l_25 != NULL) && (l_25 != m_25)))
                          _fail(m_25);
                        else
                          l_25 = m_25;
                      }
                    }
                    {
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(l_25)), not_null(j_25)), not_null(h_25));
                      t = concat_0(t);
                    }
                  }
                }
                return(t);
              }
              t = xtc_transform_2(t, e_2, f_2);
              t = read_from_0(t);
              LocalPopChoice(d_19);
            }
          else
            {
              t = c_19;
              {
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_25)), term_l_19);
                t = fatal_error_0(t);
              }
            }
        }
      }
      LocalPopChoice(y_18);
    }
  else
    {
      t = w_18;
      {
        ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL;
        n_25 = t;
        c_25 :
        if(match_cons(n_25, sym__2))
          {
            o_25 = ATgetArgument(n_25, 0);
            p_25 = ATgetArgument(n_25, 1);
            d_25 :
            if(match_string(o_25, "rtree"))
              {
                t = Snd_0(t);
                {
                  ATerm m_19 = t;
                  int r_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = read_from_0(t);
                      LocalPopChoice(r_19);
                    }
                  else
                    {
                      t = m_19;
                      {
                        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_25)), term_l_19);
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
ATerm debug_1 (ATerm t, ATerm f_85 (ATerm))
{
  ATerm s_19;
  s_19 = t;
  {
    ATerm y_25 = NULL,a_26 = NULL;
    ATerm t_19;
    t_19 = t;
    {
      ATerm z_25 = NULL;
      t = f_85(t);
      {
        z_25 = t;
        if(((y_25 != NULL) && (y_25 != z_25)))
          _fail(z_25);
        else
          y_25 = z_25;
      }
    }
    t = t_19;
    {
      ATerm b_26 = NULL;
      b_26 = t;
      if(((a_26 != NULL) && (a_26 != b_26)))
        _fail(b_26);
      else
        a_26 = b_26;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_26)), not_null(y_25)));
        t = printnl_0(t);
      }
    }
  }
  t = s_19;
  return(t);
}
ATerm if_verbose3_1 (ATerm t, ATerm p_87 (ATerm))
{
  ATerm v_19 = t;
  int b_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_20;
      c_20 = t;
      {
        ATerm f_26 = NULL;
        ATerm g_26 = NULL;
        t = term_l_8;
        {
          t = get_config_0(t);
          {
            g_26 = t;
            if(((f_26 != NULL) && (f_26 != g_26)))
              _fail(g_26);
            else
              f_26 = g_26;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_26), term_k_20);
          t = geq_0(t);
        }
      }
      t = c_20;
      t = p_87(t);
      LocalPopChoice(b_20);
    }
  else
    {
      t = v_19;
      {
      }
    }
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm l_20;
  l_20 = t;
  {
    ATerm j_26 = NULL;
    ATerm k_26 = NULL;
    k_26 = t;
    if(((j_26 != NULL) && (j_26 != k_26)))
      _fail(k_26);
    else
      j_26 = k_26;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_19, not_null(j_26));
      t = printnl_0(t);
    }
  }
  t = l_20;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm m_20;
  m_20 = t;
  {
    t = error_0(t);
    {
      t = term_f_12;
      t = exit_0(t);
    }
  }
  t = m_20;
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm o_26 = NULL;
  ATerm q_26 = NULL;
  o_26 = t;
  {
    ATerm n_20;
    n_20 = t;
    {
      ATerm r_26 = NULL;
      t = term_p_20;
      {
        r_26 = t;
        if(((q_26 != NULL) && (q_26 != r_26)))
          _fail(r_26);
        else
          q_26 = r_26;
      }
    }
    t = n_20;
    {
      t = SSL_open_file(not_null(o_26), not_null(q_26));
      t = SSL_close_file(not_null(o_26));
    }
  }
  return(t);
}
ATerm find_in_path_0 (ATerm t)
{
  ATerm b_27 = NULL,c_27 = NULL,d_27 = NULL;
  b_27 = t;
  a_27 :
  if(match_cons(b_27, sym__2))
    {
      c_27 = ATgetArgument(b_27, 0);
      d_27 = ATgetArgument(b_27, 1);
      {
        t = not_null(d_27);
        {
          ATerm g_2 (ATerm t)
          {
            ATerm o_27 = NULL;
            ATerm p_27 = NULL;
            p_27 = t;
            if(((o_27 != NULL) && (o_27 != p_27)))
              _fail(p_27);
            else
              o_27 = p_27;
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(c_27)), term_q_20), not_null(o_27));
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
  ATerm t_27 = NULL;
  t_27 = t;
  t = SSL_implode_string(not_null(t_27));
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm x_27 = NULL;
  x_27 = t;
  t = SSL_explode_string(not_null(x_27));
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
  ATerm c_28 = NULL,d_28 = NULL,e_28 = NULL;
  c_28 = t;
  b_28 :
  if(match_cons(c_28, sym__2))
    {
      d_28 = ATgetArgument(c_28, 0);
      e_28 = ATgetArgument(c_28, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(e_28)), term_z_20), not_null(d_28));
        t = concat_strings_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm k_82 (ATerm), ATerm l_82 (ATerm))
{
  ATerm k_28 = NULL,m_28 = NULL;
  ATerm a_21;
  a_21 = t;
  {
    ATerm l_28 = NULL;
    t = k_82(t);
    {
      l_28 = t;
      if(((k_28 != NULL) && (k_28 != l_28)))
        _fail(l_28);
      else
        k_28 = l_28;
    }
  }
  t = a_21;
  {
    ATerm n_28 = NULL;
    t = l_82(t);
    {
      n_28 = t;
      if(((m_28 != NULL) && (m_28 != n_28)))
        _fail(n_28);
      else
        m_28 = n_28;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_28), not_null(m_28));
  }
  return(t);
}
ATerm guarantee_extension_1 (ATerm t, ATerm t_83 (ATerm))
{
  t = basename_1(t, _id);
  {
    ATerm h_2 (ATerm t)
    {
      t = term_u_8;
      t = t_83(t);
      return(t);
    }
    t = split_2(t, _id, h_2);
    t = add_extension_0(t);
  }
  return(t);
}
ATerm find_file_1 (ATerm t, ATerm c_86 (ATerm))
{
  ATerm i_2 (ATerm t)
  {
    t = guarantee_extension_1(t, c_86);
    return(t);
  }
  t = _2(t, i_2, _id);
  t = find_in_path_0(t);
  return(t);
}
ATerm fetch_elem_1 (ATerm t, ATerm s_74 (ATerm))
{
  ATerm r_28 = NULL;
  ATerm j_2 (ATerm t)
  {
    ATerm s_28 = NULL;
    t = s_74(t);
    {
      s_28 = t;
      if(((r_28 != NULL) && (r_28 != s_28)))
        _fail(s_28);
      else
        r_28 = s_28;
    }
    return(t);
  }
  t = fetch_1(t, j_2);
  t = not_null(r_28);
  return(t);
}
ATerm find_module_1 (ATerm t, ATerm p_66 (ATerm))
{
  ATerm z_28 = NULL,a_29 = NULL,b_29 = NULL;
  z_28 = t;
  y_28 :
  if(match_cons(z_28, sym__2))
    {
      a_29 = ATgetArgument(z_28, 0);
      b_29 = ATgetArgument(z_28, 1);
      {
        t = not_null(b_29);
        {
          ATerm b_21 = t;
          int c_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_2 (ATerm t)
              {
                ATerm e_29 = NULL;
                ATerm g_29 = NULL;
                e_29 = t;
                {
                  ATerm h_29 = NULL,k_29 = NULL;
                  ATerm j_29 = NULL;
                  t = p_66(t);
                  {
                    j_29 = t;
                    if(((h_29 != NULL) && (h_29 != j_29)))
                      _fail(j_29);
                    else
                      h_29 = j_29;
                  }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(a_29), not_null(h_29));
                    {
                      ATerm l_2 (ATerm t)
                      {
                        t = not_null(e_29);
                        return(t);
                      }
                      t = find_file_1(t, l_2);
                      {
                        k_29 = t;
                        if(((g_29 != NULL) && (g_29 != k_29)))
                          _fail(k_29);
                        else
                          g_29 = k_29;
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__2, not_null(e_29), (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_29)));
                }
                return(t);
              }
              t = fetch_elem_1(t, k_2);
              LocalPopChoice(c_21);
            }
          else
            {
              t = b_21;
              {
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_21), not_null(a_29)), term_f_21);
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
ATerm get_module_1 (ATerm t, ATerm o_66 (ATerm))
{
  ATerm b_30 = NULL;
  ATerm d_30 = NULL,g_30 = NULL,h_30 = NULL;
  b_30 = t;
  {
    ATerm i_30 = NULL,j_30 = NULL,k_30 = NULL,l_30 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(b_30), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_20), term_k_21), term_j_21), term_h_21));
    {
      t = find_module_1(t, o_66);
      {
        i_30 = t;
        z_29 :
        if(match_cons(i_30, sym__2))
          {
            j_30 = ATgetArgument(i_30, 0);
            k_30 = ATgetArgument(i_30, 1);
            a_30 :
            if(match_cons(k_30, sym_FILE_1))
              {
                l_30 = ATgetArgument(k_30, 0);
                {
                  ATerm m_30 = NULL;
                  if(((d_30 != NULL) && (d_30 != j_30)))
                    _fail(j_30);
                  else
                    d_30 = j_30;
                  {
                    if(((g_30 != NULL) && (g_30 != l_30)))
                      _fail(l_30);
                    else
                      g_30 = l_30;
                    {
                      ATerm m_2 (ATerm t)
                      {
                        ATerm l_21;
                        l_21 = t;
                        {
                          t = not_null(g_30);
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
                          m_30 = t;
                          if(((h_30 != NULL) && (h_30 != m_30)))
                            _fail(m_30);
                          else
                            h_30 = m_30;
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_30), not_null(h_30));
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm w_30 = NULL;
  ATerm y_30 = NULL,z_30 = NULL;
  w_30 = t;
  {
    ATerm a_31 = NULL;
    ATerm c_31 = NULL,d_31 = NULL,e_31 = NULL,f_31 = NULL,g_31 = NULL;
    t = not_null(w_30);
    {
      a_31 = t;
      {
        t = SSL_explode_term(not_null(a_31));
        {
          c_31 = t;
          t_30 :
          if(match_cons(c_31, sym__2))
            {
              d_31 = ATgetArgument(c_31, 0);
              e_31 = ATgetArgument(c_31, 1);
              u_30 :
              if(match_string(d_31, ""))
                {
                  v_30 :
                  if(((ATgetType(e_31) == AT_LIST) && !(ATisEmpty(e_31))))
                    {
                      f_31 = ATgetFirst((ATermList) e_31);
                      g_31 = (ATerm) ATgetNext((ATermList) e_31);
                      {
                        if(((z_30 != NULL) && (z_30 != f_31)))
                          _fail(f_31);
                        else
                          z_30 = f_31;
                        if(((y_30 != NULL) && (y_30 != g_31)))
                          _fail(g_31);
                        else
                          y_30 = g_31;
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
    t = not_null(z_30);
  }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm n_31 = NULL,o_31 = NULL,p_31 = NULL,q_31 = NULL,r_31 = NULL,s_31 = NULL,y_31 = NULL,z_31 = NULL;
  n_31 = t;
  l_31 :
  if(match_cons(n_31, sym__5))
    {
      o_31 = ATgetArgument(n_31, 0);
      r_31 = ATgetArgument(n_31, 1);
      s_31 = ATgetArgument(n_31, 2);
      y_31 = ATgetArgument(n_31, 3);
      z_31 = ATgetArgument(n_31, 4);
      m_31 :
      if(((ATgetType(o_31) == AT_LIST) && !(ATisEmpty(o_31))))
        {
          p_31 = ATgetFirst((ATermList) o_31);
          q_31 = (ATerm) ATgetNext((ATermList) o_31);
          t = (ATerm) ATmakeAppl(sym__5, not_null(q_31), not_null(r_31), not_null(s_31), not_null(y_31), (ATerm) ATinsert(CheckATermList(not_null(z_31)), not_null(p_31)));
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
  ATerm j_32 = NULL,k_32 = NULL,l_32 = NULL;
  j_32 = t;
  i_32 :
  if(match_cons(j_32, sym__2))
    {
      k_32 = ATgetArgument(j_32, 0);
      l_32 = ATgetArgument(j_32, 1);
      if(((k_32 != NULL) && (k_32 != l_32)))
        _fail(l_32);
      else
        k_32 = l_32;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm i_80 (ATerm), ATerm j_80 (ATerm))
{
  ATerm r_32 = NULL,s_32 = NULL,t_32 = NULL;
  r_32 = t;
  q_32 :
  if(((ATgetType(r_32) == AT_LIST) && !(ATisEmpty(r_32))))
    {
      s_32 = ATgetFirst((ATermList) r_32);
      t_32 = (ATerm) ATgetNext((ATermList) r_32);
      {
        t = j_80(t);
        {
          ATerm o_2 (ATerm t)
          {
            ATerm w_32 = NULL;
            w_32 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(s_32), not_null(w_32));
              t = i_80(t);
            }
            return(t);
          }
          t = fetch_1(t, o_2);
        }
        t = not_null(t_32);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm a_80 (ATerm))
{
  ATerm c_33 = NULL,d_33 = NULL,e_33 = NULL;
  c_33 = t;
  b_33 :
  if(match_cons(c_33, sym__2))
    {
      d_33 = ATgetArgument(c_33, 0);
      e_33 = ATgetArgument(c_33, 1);
      {
        t = not_null(d_33);
        {
          ATerm i_33 (ATerm t)
          {
            ATerm n_21 = t;
            int o_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(o_21);
              }
            else
              {
                t = n_21;
                {
                  ATerm p_21 = t;
                  int q_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm p_2 (ATerm t)
                      {
                        t = not_null(e_33);
                        return(t);
                      }
                      t = HdMember_p__2(t, a_80, p_2);
                      t = i_33(t);
                      LocalPopChoice(q_21);
                    }
                  else
                    {
                      t = p_21;
                      t = Cons_2(t, _id, i_33);
                    }
                }
              }
            return(t);
          }
          t = i_33(t);
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
  ATerm m_33 = NULL,n_33 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL;
  m_33 = t;
  k_33 :
  if(match_cons(m_33, sym__2))
    {
      n_33 = ATgetArgument(m_33, 0);
      o_33 = ATgetArgument(m_33, 1);
      l_33 :
      if(((ATgetType(o_33) == AT_LIST) && !(ATisEmpty(o_33))))
        {
          p_33 = ATgetFirst((ATermList) o_33);
          q_33 = (ATerm) ATgetNext((ATermList) o_33);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(n_33)), not_null(p_33)), not_null(q_33));
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
  ATerm x_33 = NULL,y_33 = NULL,z_33 = NULL;
  x_33 = t;
  w_33 :
  if(match_cons(x_33, sym__2))
    {
      y_33 = ATgetArgument(x_33, 0);
      z_33 = ATgetArgument(x_33, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(z_33)), not_null(y_33));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm h_34 = NULL,i_34 = NULL,j_34 = NULL,k_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL;
  h_34 = t;
  e_34 :
  if(match_cons(h_34, sym__2))
    {
      i_34 = ATgetArgument(h_34, 0);
      l_34 = ATgetArgument(h_34, 1);
      f_34 :
      if(((ATgetType(i_34) == AT_LIST) && !(ATisEmpty(i_34))))
        {
          j_34 = ATgetFirst((ATermList) i_34);
          k_34 = (ATerm) ATgetNext((ATermList) i_34);
          g_34 :
          if(((ATgetType(l_34) == AT_LIST) && !(ATisEmpty(l_34))))
            {
              m_34 = ATgetFirst((ATermList) l_34);
              n_34 = (ATerm) ATgetNext((ATermList) l_34);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(j_34), not_null(m_34)), (ATerm) ATmakeAppl(sym__2, not_null(k_34), not_null(n_34)));
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
  ATerm x_34 = NULL,y_34 = NULL,z_34 = NULL;
  x_34 = t;
  u_34 :
  if(match_cons(x_34, sym__2))
    {
      y_34 = ATgetArgument(x_34, 0);
      z_34 = ATgetArgument(x_34, 1);
      v_34 :
      if(((ATgetType(y_34) == AT_LIST) && ATisEmpty(y_34)))
        {
          w_34 :
          if(((ATgetType(z_34) == AT_LIST) && ATisEmpty(z_34)))
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
ATerm genzip_4 (ATerm t, ATerm i_76 (ATerm), ATerm j_76 (ATerm), ATerm k_76 (ATerm), ATerm l_76 (ATerm))
{
  ATerm b_35 (ATerm t)
  {
    ATerm y_21 = t;
    int z_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_76(t);
        LocalPopChoice(z_21);
      }
    else
      {
        t = y_21;
        {
          t = j_76(t);
          {
            t = _2(t, l_76, b_35);
            t = k_76(t);
          }
        }
      }
    return(t);
  }
  t = b_35(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm n_76 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, n_76);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm m_35 = NULL,q_35 = NULL,r_35 = NULL,s_35 = NULL,t_35 = NULL;
  m_35 = t;
  k_35 :
  if(((ATgetType(m_35) == AT_LIST) && !(ATisEmpty(m_35))))
    {
      q_35 = ATgetFirst((ATermList) m_35);
      t_35 = (ATerm) ATgetNext((ATermList) m_35);
      l_35 :
      if(match_cons(q_35, sym__2))
        {
          r_35 = ATgetArgument(q_35, 0);
          s_35 = ATgetArgument(q_35, 1);
          {
            ATerm x_35 = NULL,y_35 = NULL,e_36 = NULL,k_36 = NULL;
            ATerm a_22;
            a_22 = t;
            {
              ATerm z_35 = NULL;
              ATerm b_36 = NULL,c_36 = NULL,d_36 = NULL;
              t = not_null(s_35);
              {
                z_35 = t;
                {
                  t = SSL_explode_term(not_null(z_35));
                  {
                    b_36 = t;
                    f_35 :
                    if(match_cons(b_36, sym__2))
                      {
                        c_36 = ATgetArgument(b_36, 0);
                        d_36 = ATgetArgument(b_36, 1);
                        {
                          if(((x_35 != NULL) && (x_35 != c_36)))
                            _fail(c_36);
                          else
                            x_35 = c_36;
                          if(((y_35 != NULL) && (y_35 != d_36)))
                            _fail(d_36);
                          else
                            y_35 = d_36;
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
                ATerm f_36 = NULL;
                ATerm h_36 = NULL,i_36 = NULL,j_36 = NULL;
                t = not_null(r_35);
                {
                  f_36 = t;
                  {
                    t = SSL_explode_term(not_null(f_36));
                    {
                      h_36 = t;
                      i_35 :
                      if(match_cons(h_36, sym__2))
                        {
                          i_36 = ATgetArgument(h_36, 0);
                          j_36 = ATgetArgument(h_36, 1);
                          {
                            if(((x_35 != NULL) && (x_35 != i_36)))
                              _fail(i_36);
                            else
                              x_35 = i_36;
                            if(((e_36 != NULL) && (e_36 != j_36)))
                              _fail(j_36);
                            else
                              e_36 = j_36;
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
                ATerm l_36 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(e_36), not_null(y_35));
                {
                  t = zip_1(t, _id);
                  {
                    l_36 = t;
                    if(((k_36 != NULL) && (k_36 != l_36)))
                      _fail(l_36);
                    else
                      k_36 = l_36;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(k_36), not_null(t_35));
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
  ATerm y_36 = NULL,z_36 = NULL,a_37 = NULL,b_37 = NULL,c_37 = NULL;
  y_36 = t;
  w_36 :
  if(((ATgetType(y_36) == AT_LIST) && !(ATisEmpty(y_36))))
    {
      z_36 = ATgetFirst((ATermList) y_36);
      c_37 = (ATerm) ATgetNext((ATermList) y_36);
      x_36 :
      if(match_cons(z_36, sym__2))
        {
          a_37 = ATgetArgument(z_36, 0);
          b_37 = ATgetArgument(z_36, 1);
          {
            ATerm e_37 = NULL;
            if(((a_37 != NULL) && (a_37 != b_37)))
              _fail(b_37);
            else
              a_37 = b_37;
            {
              if(((e_37 != NULL) && (e_37 != c_37)))
                _fail(c_37);
              else
                e_37 = c_37;
              t = not_null(e_37);
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
        ATerm h_37 = NULL;
        h_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(h_37));
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
ATerm GnNext_3 (ATerm t, ATerm m_95 (ATerm), ATerm n_95 (ATerm), ATerm o_95 (ATerm))
{
  ATerm t_37 = NULL,u_37 = NULL,v_37 = NULL,w_37 = NULL,x_37 = NULL,y_37 = NULL,z_37 = NULL,a_38 = NULL;
  t_37 = t;
  r_37 :
  if(match_cons(t_37, sym__5))
    {
      u_37 = ATgetArgument(t_37, 0);
      x_37 = ATgetArgument(t_37, 1);
      y_37 = ATgetArgument(t_37, 2);
      z_37 = ATgetArgument(t_37, 3);
      a_38 = ATgetArgument(t_37, 4);
      s_37 :
      if(((ATgetType(u_37) == AT_LIST) && !(ATisEmpty(u_37))))
        {
          v_37 = ATgetFirst((ATermList) u_37);
          w_37 = (ATerm) ATgetNext((ATermList) u_37);
          {
            ATerm h_38 = NULL,i_38 = NULL,j_38 = NULL,p_38 = NULL,t_38 = NULL,v_38 = NULL;
            ATerm k_22;
            k_22 = t;
            {
              ATerm m_38 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(v_37), not_null(y_37));
              {
                ATerm n_38 = NULL;
                t = m_95(t);
                {
                  m_38 = t;
                  {
                    if(((h_38 != NULL) && (h_38 != m_38)))
                      _fail(m_38);
                    else
                      h_38 = m_38;
                    {
                      t = not_null(h_38);
                      {
                        ATerm o_38 = NULL;
                        t = n_95(t);
                        {
                          n_38 = t;
                          {
                            if(((i_38 != NULL) && (i_38 != n_38)))
                              _fail(n_38);
                            else
                              i_38 = n_38;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, not_null(i_38), not_null(x_37));
                              {
                                t = diff_0(t);
                                {
                                  o_38 = t;
                                  if(((j_38 != NULL) && (j_38 != o_38)))
                                    _fail(o_38);
                                  else
                                    j_38 = o_38;
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
                t = (ATerm) ATmakeAppl(sym__2, not_null(j_38), not_null(w_37));
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
                    if(((p_38 != NULL) && (p_38 != s_38)))
                      _fail(s_38);
                    else
                      p_38 = s_38;
                  }
                }
              }
              t = l_22;
              {
                ATerm o_22;
                o_22 = t;
                {
                  ATerm u_38 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(j_38), not_null(x_37));
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
                  ATerm y_38 = NULL;
                  t = (ATerm) ATmakeAppl(sym__3, not_null(v_37), not_null(h_38), not_null(z_37));
                  {
                    t = o_95(t);
                    {
                      y_38 = t;
                      if(((v_38 != NULL) && (v_38 != y_38)))
                        _fail(y_38);
                      else
                        v_38 = y_38;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__5, not_null(p_38), not_null(t_38), not_null(y_37), not_null(v_38), not_null(a_38));
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
  ATerm j_39 = NULL,k_39 = NULL,l_39 = NULL,m_39 = NULL,n_39 = NULL,o_39 = NULL;
  j_39 = t;
  h_39 :
  if(match_cons(j_39, sym__5))
    {
      k_39 = ATgetArgument(j_39, 0);
      l_39 = ATgetArgument(j_39, 1);
      m_39 = ATgetArgument(j_39, 2);
      n_39 = ATgetArgument(j_39, 3);
      o_39 = ATgetArgument(j_39, 4);
      i_39 :
      if(((ATgetType(k_39) == AT_LIST) && ATisEmpty(k_39)))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_39), not_null(o_39));
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
  ATerm j_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL;
  j_40 = t;
  i_40 :
  if(match_cons(j_40, sym__3))
    {
      k_40 = ATgetArgument(j_40, 0);
      l_40 = ATgetArgument(j_40, 1);
      m_40 = ATgetArgument(j_40, 2);
      t = (ATerm) ATmakeAppl(sym__5, not_null(k_40), not_null(k_40), not_null(l_40), not_null(m_40), (ATerm) ATempty);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm v_67 (ATerm), ATerm w_67 (ATerm))
{
  ATerm r_40 (ATerm t)
  {
    ATerm r_22 = t;
    int s_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_67(t);
        LocalPopChoice(s_22);
      }
    else
      {
        t = r_22;
        {
          t = w_67(t);
          t = r_40(t);
        }
      }
    return(t);
  }
  t = r_40(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm y_67 (ATerm), ATerm z_67 (ATerm), ATerm a_68 (ATerm))
{
  t = y_67(t);
  t = while_not_2(t, z_67, a_68);
  return(t);
}
ATerm graph_nodes_undef_roots_3 (ATerm t, ATerm u_94 (ATerm), ATerm v_94 (ATerm), ATerm w_94 (ATerm))
{
  ATerm u_2 (ATerm t)
  {
    ATerm t_22 = t;
    int y_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3(t, u_94, v_94, w_94);
        LocalPopChoice(y_22);
      }
    else
      {
        t = t_22;
        t = GnUndefined_0(t);
      }
    return(t);
  }
  t = for_3(t, GnInitRoots_0, GnExit_0, u_2);
  return(t);
}
ATerm graph_nodes_roots_3 (ATerm t, ATerm j_95 (ATerm), ATerm k_95 (ATerm), ATerm l_95 (ATerm))
{
  ATerm u_40 = NULL,z_40 = NULL,a_41 = NULL;
  t = graph_nodes_undef_roots_3(t, j_95, k_95, l_95);
  {
    u_40 = t;
    t_40 :
    if(match_cons(u_40, sym__2))
      {
        z_40 = ATgetArgument(u_40, 0);
        a_41 = ATgetArgument(u_40, 1);
        t = not_null(z_40);
      }
    else
      {
        _fail(t);
      }
  }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm y_81 (ATerm))
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
              t = filter_1(t, y_81);
              return(t);
            }
            t = Cons_2(t, y_81, v_2);
            LocalPopChoice(c_23);
          }
        else
          {
            t = b_23;
            {
              ATerm n_41 = NULL,p_41 = NULL,q_41 = NULL;
              n_41 = t;
              h_41 :
              if(((ATgetType(n_41) == AT_LIST) && !(ATisEmpty(n_41))))
                {
                  p_41 = ATgetFirst((ATermList) n_41);
                  q_41 = (ATerm) ATgetNext((ATermList) n_41);
                  {
                    t = not_null(q_41);
                    t = filter_1(t, y_81);
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
  ATerm z_41 = NULL,a_42 = NULL;
  z_41 = t;
  y_41 :
  if(match_cons(z_41, sym_FILE_1))
    {
      a_42 = ATgetArgument(z_41, 0);
      {
        ATerm c_42 = NULL;
        ATerm e_42 = NULL;
        ATerm d_23 = t;
        int e_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_k_19;
            {
              t = get_config_0(t);
              {
                ATerm w_2 (ATerm t)
                {
                  ATerm f_23 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm d_42 = NULL;
                      d_42 = t;
                      u_41 :
                      if(!(match_string(d_42, "-I")))
                        {
                          _fail(t);
                        }
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = f_23;
                    }
                  return(t);
                }
                t = filter_1(t, w_2);
              }
            }
            LocalPopChoice(e_23);
          }
        else
          {
            t = d_23;
            t = (ATerm) ATempty;
          }
        {
          e_42 = t;
          if(((c_42 != NULL) && (c_42 != e_42)))
            _fail(e_42);
          else
            c_42 = e_42;
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, not_null(a_42)), term_j_23), term_g_23), term_u_8, (ATerm) ATempty);
          {
            ATerm x_2 (ATerm t)
            {
              t = Fst_0(t);
              {
                ATerm z_2 (ATerm t)
                {
                  t = (ATerm) ATinsert(CheckATermList(not_null(c_42)), term_z_20);
                  return(t);
                }
                t = get_module_1(t, z_2);
              }
              return(t);
            }
            ATerm y_2 (ATerm t)
            {
              ATerm f_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL;
              f_42 = t;
              x_41 :
              if(match_cons(f_42, sym__3))
                {
                  g_42 = ATgetArgument(f_42, 0);
                  h_42 = ATgetArgument(f_42, 1);
                  i_42 = ATgetArgument(f_42, 2);
                  t = (ATerm) ATinsert(CheckATermList(not_null(i_42)), not_null(h_42));
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = graph_nodes_roots_3(t, x_2, get_stratego_imports_0, y_2);
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
        ATerm r_42 = NULL,s_42 = NULL,t_42 = NULL;
        r_42 = t;
        q_42 :
        if(((ATgetType(r_42) == AT_LIST) && !(ATisEmpty(r_42))))
          {
            s_42 = ATgetFirst((ATermList) r_42);
            t_42 = (ATerm) ATgetNext((ATermList) r_42);
            {
              t = not_null(s_42);
              {
                ATerm a_3 (ATerm t)
                {
                  t = not_null(t_42);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, a_3);
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
  ATerm d_43 = NULL;
  ATerm f_43 = NULL;
  d_43 = t;
  {
    ATerm g_43 = NULL;
    ATerm i_43 = NULL,j_43 = NULL,k_43 = NULL;
    t = not_null(d_43);
    {
      g_43 = t;
      {
        t = SSL_explode_term(not_null(g_43));
        {
          i_43 = t;
          b_43 :
          if(match_cons(i_43, sym__2))
            {
              j_43 = ATgetArgument(i_43, 0);
              k_43 = ATgetArgument(i_43, 1);
              c_43 :
              if(match_string(j_43, ""))
                {
                  if(((f_43 != NULL) && (f_43 != k_43)))
                    _fail(k_43);
                  else
                    f_43 = k_43;
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
      t = not_null(f_43);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm w_74 (ATerm))
{
  ATerm q_43 (ATerm t)
  {
    ATerm q_23 = t;
    int r_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, q_43);
        LocalPopChoice(r_23);
      }
    else
      {
        t = q_23;
        {
          t = Nil_0(t);
          t = w_74(t);
        }
      }
    return(t);
  }
  t = q_43(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm v_43 = NULL,w_43 = NULL,x_43 = NULL;
  v_43 = t;
  s_43 :
  if(match_cons(v_43, sym__2))
    {
      w_43 = ATgetArgument(v_43, 0);
      x_43 = ATgetArgument(v_43, 1);
      {
        t = not_null(w_43);
        {
          ATerm b_3 (ATerm t)
          {
            t = not_null(x_43);
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
  ATerm h_44 = NULL,i_44 = NULL,j_44 = NULL;
  h_44 = t;
  g_44 :
  if(match_cons(h_44, sym__2))
    {
      i_44 = ATgetArgument(h_44, 0);
      j_44 = ATgetArgument(h_44, 1);
      {
        ATerm s_44 = NULL;
        ATerm t_44 = NULL,v_44 = NULL;
        ATerm u_44 = NULL;
        t = not_null(i_44);
        {
          ATerm u_23 = t;
          int v_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(v_23);
            }
          else
            {
              t = u_23;
              t = (ATerm) ATempty;
            }
          {
            u_44 = t;
            if(((t_44 != NULL) && (t_44 != u_44)))
              _fail(u_44);
            else
              t_44 = u_44;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_44), not_null(t_44));
          {
            ATerm w_23 = t;
            int z_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(z_23);
              }
            else
              {
                t = w_23;
                t = conc_more_lists_0(t);
              }
            {
              v_44 = t;
              if(((s_44 != NULL) && (s_44 != v_44)))
                _fail(v_44);
              else
                s_44 = v_44;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_m_11, not_null(i_44), not_null(s_44));
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
  int b_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_3 (ATerm t)
      {
        ATerm j_45 = NULL;
        j_45 = t;
        z_44 :
        if(!(match_string(j_45, "-I")))
          {
            if(!(match_string(j_45, "--Include")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm e_3 (ATerm t)
      {
        ATerm k_45 = NULL;
        ATerm l_45 = NULL;
        l_45 = t;
        if(((k_45 != NULL) && (k_45 != l_45)))
          _fail(l_45);
        else
          k_45 = l_45;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_k_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_45)), term_k_19));
          t = extend_config_0(t);
        }
        t = term_u_8;
        return(t);
      }
      ATerm g_3 (ATerm t)
      {
        t = term_c_24;
        return(t);
      }
      t = ArgOption_3(t, c_3, e_3, g_3);
      LocalPopChoice(b_24);
    }
  else
    {
      t = a_24;
      {
        ATerm d_24 = t;
        int f_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_3 (ATerm t)
            {
              ATerm m_45 = NULL;
              m_45 = t;
              f_45 :
              if(!(match_string(m_45, "--nodep")))
                {
                  if(!(match_string(m_45, "-nodep")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm j_3 (ATerm t)
            {
              t = term_k_24;
              t = set_config_0(t);
              t = term_u_8;
              return(t);
            }
            ATerm k_3 (ATerm t)
            {
              t = term_l_24;
              return(t);
            }
            t = Option_3(t, i_3, j_3, k_3);
            LocalPopChoice(f_24);
          }
        else
          {
            t = d_24;
            {
              ATerm o_24 = t;
              int p_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_3 (ATerm t)
                  {
                    ATerm n_45 = NULL;
                    n_45 = t;
                    g_45 :
                    if(!(match_string(n_45, "--dep")))
                      {
                        if(!(match_string(n_45, "-d")))
                          {
                            if(!(match_string(n_45, "-dep")))
                              {
                                _fail(t);
                              }
                          }
                      }
                    return(t);
                  }
                  ATerm m_3 (ATerm t)
                  {
                    ATerm o_45 = NULL;
                    ATerm p_45 = NULL;
                    p_45 = t;
                    if(((o_45 != NULL) && (o_45 != p_45)))
                      _fail(p_45);
                    else
                      o_45 = p_45;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_c_9, not_null(o_45));
                      t = set_config_0(t);
                    }
                    t = term_u_8;
                    return(t);
                  }
                  ATerm r_3 (ATerm t)
                  {
                    t = term_q_24;
                    return(t);
                  }
                  t = ArgOption_3(t, l_3, m_3, r_3);
                  LocalPopChoice(p_24);
                }
              else
                {
                  t = o_24;
                  {
                    ATerm s_3 (ATerm t)
                    {
                      ATerm q_45 = NULL;
                      q_45 = t;
                      i_45 :
                      if(!(match_string(q_45, "--imports")))
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    ATerm v_3 (ATerm t)
                    {
                      t = term_s_24;
                      t = set_config_0(t);
                      t = term_u_8;
                      return(t);
                    }
                    ATerm x_3 (ATerm t)
                    {
                      t = term_t_24;
                      return(t);
                    }
                    t = Option_3(t, s_3, v_3, x_3);
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
  ATerm w_45 = NULL,x_45 = NULL,y_45 = NULL;
  w_45 = t;
  u_45 :
  if(match_cons(w_45, sym__2))
    {
      x_45 = ATgetArgument(w_45, 0);
      y_45 = ATgetArgument(w_45, 1);
      t = SSL_copy(not_null(x_45), not_null(y_45));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm g_46 = NULL;
  g_46 = t;
  f_46 :
  if(match_cons(g_46, sym_stderr_0))
    {
      ATerm i_46 = NULL,m_46 = NULL;
      ATerm u_24;
      u_24 = t;
      {
        ATerm j_46 = NULL;
        t = SSLgetAnnotations(not_null(g_46));
        {
          j_46 = t;
          if(((i_46 != NULL) && (i_46 != j_46)))
            _fail(j_46);
          else
            i_46 = j_46;
        }
      }
      t = u_24;
      {
        ATerm n_46 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(i_46));
        {
          n_46 = t;
          if(((m_46 != NULL) && (m_46 != n_46)))
            _fail(n_46);
          else
            m_46 = n_46;
        }
        t = not_null(m_46);
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
  ATerm a_47 = NULL;
  a_47 = t;
  z_46 :
  if(match_cons(a_47, sym_stdout_0))
    {
      ATerm c_47 = NULL,e_47 = NULL;
      ATerm w_24;
      w_24 = t;
      {
        ATerm d_47 = NULL;
        t = SSLgetAnnotations(not_null(a_47));
        {
          d_47 = t;
          if(((c_47 != NULL) && (c_47 != d_47)))
            _fail(d_47);
          else
            c_47 = d_47;
        }
      }
      t = w_24;
      {
        ATerm f_47 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(c_47));
        {
          f_47 = t;
          if(((e_47 != NULL) && (e_47 != f_47)))
            _fail(f_47);
          else
            e_47 = f_47;
        }
        t = not_null(e_47);
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
  ATerm t_47 = NULL,u_47 = NULL;
  t_47 = t;
  s_47 :
  if(match_cons(t_47, sym_FILE_1))
    {
      u_47 = ATgetArgument(t_47, 0);
      {
        ATerm x_24 = t;
        int y_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_48 = NULL;
            ATerm i_48 = NULL;
            t = m_0(t);
            {
              i_48 = t;
              {
                if(((a_48 != NULL) && (a_48 != i_48)))
                  _fail(i_48);
                else
                  a_48 = i_48;
                {
                  ATerm z_24 = t;
                  int a_25 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(a_25);
                    }
                  else
                    {
                      t = z_24;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(u_47), not_null(a_48));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(u_47));
            LocalPopChoice(y_24);
          }
        else
          {
            t = x_24;
            {
              ATerm l_48 = NULL;
              ATerm m_48 = NULL;
              t = m_0(t);
              {
                m_48 = t;
                {
                  if(((l_48 != NULL) && (l_48 != m_48)))
                    _fail(m_48);
                  else
                    l_48 = m_48;
                  {
                    ATerm b_25 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm q_25 = t;
                        int r_25 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = stdout_0(t);
                            LocalPopChoice(r_25);
                          }
                        else
                          {
                            t = q_25;
                            t = stderr_0(t);
                          }
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = b_25;
                      }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(u_47), not_null(l_48));
                      t = copy_file_0(t);
                    }
                  }
                }
              }
              t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(u_47));
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
  ATerm t_48 = NULL,u_48 = NULL,v_48 = NULL;
  t_48 = t;
  s_48 :
  if(((ATgetType(t_48) == AT_LIST) && !(ATisEmpty(t_48))))
    {
      u_48 = ATgetFirst((ATermList) t_48);
      v_48 = (ATerm) ATgetNext((ATermList) t_48);
      t = not_null(v_48);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm b_49 = NULL,c_49 = NULL,d_49 = NULL;
  b_49 = t;
  a_49 :
  if(match_cons(b_49, sym__2))
    {
      c_49 = ATgetArgument(b_49, 0);
      d_49 = ATgetArgument(b_49, 1);
      {
        ATerm s_25;
        s_25 = t;
        {
          ATerm g_49 = NULL;
          ATerm h_49 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_49), not_null(d_49));
          {
            ATerm t_25 = t;
            int u_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(u_25);
              }
            else
              {
                t = t_25;
                t = (ATerm) ATempty;
              }
            {
              h_49 = t;
              if(((g_49 != NULL) && (g_49 != h_49)))
                _fail(h_49);
              else
                g_49 = h_49;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(c_49), not_null(d_49), not_null(g_49));
            t = table_put_0(t);
          }
        }
        t = s_25;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm v_84 (ATerm))
{
  ATerm o_49 = NULL,p_49 = NULL,q_49 = NULL;
  ATerm v_25;
  v_25 = t;
  {
    ATerm r_49 = NULL;
    ATerm s_49 = NULL,t_49 = NULL,u_49 = NULL;
    t = v_84(t);
    {
      r_49 = t;
      {
        if(((q_49 != NULL) && (q_49 != r_49)))
          _fail(r_49);
        else
          q_49 = r_49;
        {
          ATerm w_25 = t;
          int x_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(q_49), term_f_17);
              t = table_get_0(t);
              LocalPopChoice(x_25);
            }
          else
            {
              t = w_25;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            s_49 = t;
            n_49 :
            if(((ATgetType(s_49) == AT_LIST) && !(ATisEmpty(s_49))))
              {
                t_49 = ATgetFirst((ATermList) s_49);
                u_49 = (ATerm) ATgetNext((ATermList) s_49);
                {
                  if(((p_49 != NULL) && (p_49 != t_49)))
                    _fail(t_49);
                  else
                    p_49 = t_49;
                  {
                    if(((o_49 != NULL) && (o_49 != u_49)))
                      _fail(u_49);
                    else
                      o_49 = u_49;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(q_49), term_f_17, not_null(o_49));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(p_49);
                          {
                            ATerm y_3 (ATerm t)
                            {
                              ATerm v_49 = NULL;
                              v_49 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(q_49), not_null(v_49));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, y_3);
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
  t = v_25;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm b_50 = NULL;
  b_50 = t;
  t = SSL_remove(not_null(b_50));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm a_67 (ATerm), ATerm b_67 (ATerm))
{
  ATerm c_26 = t;
  int d_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_67(t);
      t = b_67(t);
      LocalPopChoice(d_26);
    }
  else
    {
      t = c_26;
      {
        t = b_67(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm u_84 (ATerm))
{
  ATerm g_50 = NULL;
  ATerm e_26;
  e_26 = t;
  {
    ATerm h_50 = NULL;
    ATerm i_50 = NULL;
    t = u_84(t);
    {
      h_50 = t;
      {
        if(((g_50 != NULL) && (g_50 != h_50)))
          _fail(h_50);
        else
          g_50 = h_50;
        {
          ATerm j_50 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_50), term_f_17);
          {
            ATerm h_26 = t;
            int i_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(i_26);
              }
            else
              {
                t = h_26;
                t = (ATerm) ATempty;
              }
            {
              j_50 = t;
              if(((i_50 != NULL) && (i_50 != j_50)))
                _fail(j_50);
              else
                i_50 = j_50;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(g_50), term_f_17, (ATerm) ATinsert(CheckATermList(not_null(i_50)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = e_26;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm v_93 (ATerm))
{
  ATerm o_50 = NULL,p_50 = NULL;
  ATerm b_4 (ATerm t)
  {
    t = term_c_18;
    return(t);
  }
  t = begin_scope_1(t, b_4);
  {
    ATerm c_4 (ATerm t)
    {
      ATerm l_26;
      l_26 = t;
      {
        ATerm q_50 = NULL,r_50 = NULL,c_51 = NULL;
        ATerm m_26 = t;
        int n_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_p_26;
            t = table_get_0(t);
            LocalPopChoice(n_26);
          }
        else
          {
            t = m_26;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          q_50 = t;
          n_50 :
          if(((ATgetType(q_50) == AT_LIST) && !(ATisEmpty(q_50))))
            {
              r_50 = ATgetFirst((ATermList) q_50);
              c_51 = (ATerm) ATgetNext((ATermList) q_50);
              {
                if(((p_50 != NULL) && (p_50 != r_50)))
                  _fail(r_50);
                else
                  p_50 = r_50;
                {
                  if(((o_50 != NULL) && (o_50 != c_51)))
                    _fail(c_51);
                  else
                    o_50 = c_51;
                  {
                    t = not_null(p_50);
                    {
                      ATerm d_4 (ATerm t)
                      {
                        ATerm s_26 = t;
                        int t_26 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = remove_file_0(t);
                            LocalPopChoice(t_26);
                          }
                        else
                          {
                            t = s_26;
                            {
                            }
                          }
                        return(t);
                      }
                      t = map_1(t, d_4);
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
      t = l_26;
      {
        ATerm i_4 (ATerm t)
        {
          t = term_c_18;
          return(t);
        }
        t = end_scope_1(t, i_4);
      }
      return(t);
    }
    t = restore_always_2(t, v_93, c_4);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm w_93 (ATerm))
{
  ATerm j_4 (ATerm t)
  {
    ATerm u_26 = t;
    int v_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_51 = NULL;
        ATerm h_51 = NULL;
        t = term_n_18;
        {
          t = get_config_0(t);
          {
            h_51 = t;
            if(((f_51 != NULL) && (f_51 != h_51)))
              _fail(h_51);
            else
              f_51 = h_51;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_51));
        LocalPopChoice(v_26);
      }
    else
      {
        t = u_26;
        t = term_u_11;
      }
    {
      t = w_93(t);
      {
        ATerm k_4 (ATerm t)
        {
          ATerm w_26 = t;
          int x_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_x_8;
              t = get_config_0(t);
              LocalPopChoice(x_26);
            }
          else
            {
              t = w_26;
              t = term_y_26;
            }
          return(t);
        }
        t = copy_to_1(t, k_4);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, j_4);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm l_4 (ATerm t)
  {
    ATerm w_51 = NULL;
    w_51 = t;
    j_51 :
    if(!(match_string(w_51, "-v")))
      {
        if(!(match_string(w_51, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm m_4 (ATerm t)
  {
    t = term_e_27;
    t = set_config_0(t);
    t = term_f_27;
    return(t);
  }
  ATerm n_4 (ATerm t)
  {
    t = term_g_27;
    return(t);
  }
  t = Option_3(t, l_4, m_4, n_4);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm o_4 (ATerm t)
  {
    ATerm c_52 = NULL;
    c_52 = t;
    a_52 :
    if(!(match_string(c_52, "-k")))
      {
        if(!(match_string(c_52, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm p_4 (ATerm t)
  {
    ATerm h_27;
    h_27 = t;
    {
      ATerm g_52 = NULL;
      ATerm n_52 = NULL;
      t = string_to_int_0(t);
      {
        n_52 = t;
        if(((g_52 != NULL) && (g_52 != n_52)))
          _fail(n_52);
        else
          g_52 = n_52;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_11, not_null(g_52));
        t = set_config_0(t);
      }
    }
    t = h_27;
    return(t);
  }
  ATerm q_4 (ATerm t)
  {
    t = term_i_27;
    return(t);
  }
  t = ArgOption_3(t, o_4, p_4, q_4);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm q_52 = NULL;
  q_52 = t;
  t = SSL_string_to_int(not_null(q_52));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm j_27 = t;
  int k_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_4 (ATerm t)
      {
        ATerm m_53 = NULL;
        m_53 = t;
        t_52 :
        if(!(match_string(m_53, "-S")))
          {
            if(!(match_string(m_53, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm f_5 (ATerm t)
      {
        t = term_m_27;
        t = set_config_0(t);
        t = term_n_27;
        return(t);
      }
      ATerm g_5 (ATerm t)
      {
        t = term_q_27;
        return(t);
      }
      t = Option_3(t, s_4, f_5, g_5);
      LocalPopChoice(k_27);
    }
  else
    {
      t = j_27;
      {
        ATerm r_27 = t;
        int s_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_5 (ATerm t)
            {
              ATerm n_53 = NULL;
              n_53 = t;
              w_52 :
              if(!(match_string(n_53, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm i_5 (ATerm t)
            {
              ATerm q_53 = NULL;
              ATerm u_27;
              u_27 = t;
              {
                ATerm o_53 = NULL;
                ATerm p_53 = NULL;
                t = string_to_int_0(t);
                {
                  p_53 = t;
                  if(((o_53 != NULL) && (o_53 != p_53)))
                    _fail(p_53);
                  else
                    o_53 = p_53;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_l_8, not_null(o_53));
                  t = set_config_0(t);
                }
              }
              t = u_27;
              {
                ATerm r_53 = NULL;
                r_53 = t;
                if(((q_53 != NULL) && (q_53 != r_53)))
                  _fail(r_53);
                else
                  q_53 = r_53;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(q_53));
              }
              return(t);
            }
            ATerm j_5 (ATerm t)
            {
              t = term_v_27;
              return(t);
            }
            t = ArgOption_3(t, h_5, i_5, j_5);
            LocalPopChoice(s_27);
          }
        else
          {
            t = r_27;
            {
              ATerm k_5 (ATerm t)
              {
                ATerm s_53 = NULL;
                s_53 = t;
                l_53 :
                if(!(match_string(s_53, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm l_5 (ATerm t)
              {
                t = term_y_27;
                t = set_config_0(t);
                t = term_z_27;
                return(t);
              }
              ATerm m_5 (ATerm t)
              {
                t = term_a_28;
                return(t);
              }
              t = Option_3(t, k_5, l_5, m_5);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm f_28 = t;
  int g_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(g_28);
    }
  else
    {
      t = f_28;
      {
        ATerm h_28 = t;
        int i_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(i_28);
          }
        else
          {
            t = h_28;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm r_5 (ATerm t)
  {
    ATerm k_54 = NULL;
    k_54 = t;
    f_54 :
    if(!(match_string(k_54, "-o")))
      {
        if(!(match_string(k_54, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm s_5 (ATerm t)
  {
    ATerm p_54 = NULL;
    ATerm j_28;
    j_28 = t;
    {
      ATerm l_54 = NULL;
      ATerm o_54 = NULL;
      o_54 = t;
      if(((l_54 != NULL) && (l_54 != o_54)))
        _fail(o_54);
      else
        l_54 = o_54;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_8, not_null(l_54));
        t = set_config_0(t);
      }
    }
    t = j_28;
    {
      ATerm v_54 = NULL;
      v_54 = t;
      if(((p_54 != NULL) && (p_54 != v_54)))
        _fail(v_54);
      else
        p_54 = v_54;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(p_54));
    }
    return(t);
  }
  ATerm t_5 (ATerm t)
  {
    t = term_o_28;
    return(t);
  }
  t = ArgOption_3(t, r_5, s_5, t_5);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm p_28 = t;
  int q_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(q_28);
    }
  else
    {
      t = p_28;
      {
        ATerm u_5 (ATerm t)
        {
          ATerm b_55 = NULL;
          b_55 = t;
          a_55 :
          if(!(match_string(b_55, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm v_5 (ATerm t)
        {
          t = term_u_28;
          t = set_config_0(t);
          t = term_v_28;
          return(t);
        }
        ATerm x_5 (ATerm t)
        {
          t = term_w_28;
          return(t);
        }
        t = Option_3(t, u_5, v_5, x_5);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm h_55 = NULL,i_55 = NULL,j_55 = NULL,k_55 = NULL,l_55 = NULL;
  h_55 = t;
  f_55 :
  if(match_string(h_55, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(h_55) == AT_LIST) && !(ATisEmpty(h_55))))
        {
          i_55 = ATgetFirst((ATermList) h_55);
          j_55 = (ATerm) ATgetNext((ATermList) h_55);
          g_55 :
          if(((ATgetType(j_55) == AT_LIST) && !(ATisEmpty(j_55))))
            {
              k_55 = ATgetFirst((ATermList) j_55);
              l_55 = (ATerm) ATgetNext((ATermList) j_55);
              {
                ATerm p_55 = NULL;
                ATerm x_28;
                x_28 = t;
                {
                  t = not_null(i_55);
                  t = j_0(t);
                }
                t = x_28;
                {
                  ATerm q_55 = NULL;
                  t = not_null(k_55);
                  {
                    t = k_0(t);
                    {
                      q_55 = t;
                      if(((p_55 != NULL) && (p_55 != q_55)))
                        _fail(q_55);
                      else
                        p_55 = q_55;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(l_55)), not_null(p_55));
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
  ATerm a_6 (ATerm t)
  {
    ATerm x_55 = NULL;
    x_55 = t;
    u_55 :
    if(!(match_string(x_55, "-i")))
      {
        if(!(match_string(x_55, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm b_6 (ATerm t)
  {
    ATerm a_56 = NULL;
    ATerm c_29;
    c_29 = t;
    {
      ATerm y_55 = NULL;
      ATerm z_55 = NULL;
      z_55 = t;
      if(((y_55 != NULL) && (y_55 != z_55)))
        _fail(z_55);
      else
        y_55 = z_55;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_18, not_null(y_55));
        t = set_config_0(t);
      }
    }
    t = c_29;
    {
      ATerm b_56 = NULL;
      b_56 = t;
      if(((a_56 != NULL) && (a_56 != b_56)))
        _fail(b_56);
      else
        a_56 = b_56;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(a_56));
    }
    return(t);
  }
  ATerm i_6 (ATerm t)
  {
    t = term_d_29;
    return(t);
  }
  t = ArgOption_3(t, a_6, b_6, i_6);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm f_29 = t;
  int i_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(i_29);
    }
  else
    {
      t = f_29;
      {
        ATerm l_29 = t;
        int m_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(m_29);
          }
        else
          {
            t = l_29;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm i_56 = NULL;
  ATerm n_29;
  n_29 = t;
  {
    ATerm p_6 (ATerm t)
    {
      ATerm j_56 = NULL,k_56 = NULL;
      j_56 = t;
      h_56 :
      if(match_cons(j_56, sym_Program_1))
        {
          k_56 = ATgetArgument(j_56, 0);
          if(((i_56 != NULL) && (i_56 != k_56)))
            _fail(k_56);
          else
            i_56 = k_56;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, p_6);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_19, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_29), not_null(i_56)), term_o_29));
      {
        t = printnl_0(t);
        {
          t = term_f_12;
          t = exit_0(t);
        }
      }
    }
  }
  t = n_29;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_u_19, (ATerm) ATinsert(ATempty, term_q_29));
  {
    t = printnl_0(t);
    {
      t = term_f_12;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm n_56 = NULL;
  n_56 = t;
  t = SSL_TicksToSeconds(not_null(n_56));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm s_56 = NULL,t_56 = NULL,u_56 = NULL;
  s_56 = t;
  r_56 :
  if(match_cons(s_56, sym__2))
    {
      t_56 = ATgetArgument(s_56, 0);
      u_56 = ATgetArgument(s_56, 1);
      {
        ATerm r_29 = t;
        int s_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(t_56), not_null(u_56));
            LocalPopChoice(s_29);
          }
        else
          {
            t = r_29;
            t = SSL_addr(not_null(t_56), not_null(u_56));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm v_80 (ATerm), ATerm w_80 (ATerm))
{
  ATerm t_29 = t;
  int u_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = v_80(t);
      LocalPopChoice(u_29);
    }
  else
    {
      t = t_29;
      {
        ATerm b_57 = NULL,c_57 = NULL,d_57 = NULL;
        b_57 = t;
        a_57 :
        if(((ATgetType(b_57) == AT_LIST) && !(ATisEmpty(b_57))))
          {
            c_57 = ATgetFirst((ATermList) b_57);
            d_57 = (ATerm) ATgetNext((ATermList) b_57);
            {
              ATerm g_57 = NULL;
              ATerm h_57 = NULL;
              t = not_null(d_57);
              {
                t = foldr_2(t, v_80, w_80);
                {
                  h_57 = t;
                  if(((g_57 != NULL) && (g_57 != h_57)))
                    _fail(h_57);
                  else
                    g_57 = h_57;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(c_57), not_null(g_57));
                t = w_80(t);
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
ATerm crush_2 (ATerm t, ATerm t_79 (ATerm), ATerm u_79 (ATerm))
{
  ATerm o_57 = NULL;
  ATerm q_57 = NULL;
  o_57 = t;
  {
    ATerm r_57 = NULL;
    ATerm t_57 = NULL,u_57 = NULL,v_57 = NULL;
    t = not_null(o_57);
    {
      r_57 = t;
      {
        t = SSL_explode_term(not_null(r_57));
        {
          t_57 = t;
          n_57 :
          if(match_cons(t_57, sym__2))
            {
              u_57 = ATgetArgument(t_57, 0);
              v_57 = ATgetArgument(t_57, 1);
              if(((q_57 != NULL) && (q_57 != v_57)))
                _fail(v_57);
              else
                q_57 = v_57;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(q_57);
      t = foldr_2(t, t_79, u_79);
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
    ATerm r_6 (ATerm t)
    {
      t = term_l_27;
      return(t);
    }
    t = crush_2(t, r_6, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm b_58 = NULL,c_58 = NULL,d_58 = NULL;
  b_58 = t;
  a_58 :
  if(match_cons(b_58, sym__2))
    {
      c_58 = ATgetArgument(b_58, 0);
      d_58 = ATgetArgument(b_58, 1);
      {
        ATerm v_29;
        v_29 = t;
        {
          ATerm w_29 = t;
          int x_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(c_58), not_null(d_58));
              LocalPopChoice(x_29);
            }
          else
            {
              t = w_29;
              t = SSL_gtr(not_null(c_58), not_null(d_58));
            }
        }
        t = v_29;
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
  ATerm j_58 = NULL;
  ATerm y_29 = t;
  int c_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_58 = NULL,l_58 = NULL,m_58 = NULL;
      k_58 = t;
      i_58 :
      if(match_cons(k_58, sym__2))
        {
          l_58 = ATgetArgument(k_58, 0);
          m_58 = ATgetArgument(k_58, 1);
          {
            if(((j_58 != NULL) && (j_58 != l_58)))
              _fail(l_58);
            else
              j_58 = l_58;
            if(((j_58 != NULL) && (j_58 != m_58)))
              _fail(m_58);
            else
              j_58 = m_58;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(c_30);
    }
  else
    {
      t = y_29;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm n_87 (ATerm))
{
  ATerm e_30 = t;
  int f_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_30;
      n_30 = t;
      {
        ATerm p_58 = NULL;
        ATerm q_58 = NULL;
        t = term_l_8;
        {
          t = get_config_0(t);
          {
            q_58 = t;
            if(((p_58 != NULL) && (p_58 != q_58)))
              _fail(q_58);
            else
              p_58 = q_58;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_58), term_f_12);
          t = geq_0(t);
        }
      }
      t = n_30;
      t = n_87(t);
      LocalPopChoice(f_30);
    }
  else
    {
      t = e_30;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm t_6 (ATerm t)
  {
    ATerm u_58 = NULL,w_58 = NULL;
    ATerm o_30;
    o_30 = t;
    {
      ATerm v_58 = NULL;
      t = run_time_0(t);
      {
        v_58 = t;
        if(((u_58 != NULL) && (u_58 != v_58)))
          _fail(v_58);
        else
          u_58 = v_58;
      }
    }
    t = o_30;
    {
      ATerm x_58 = NULL;
      t = term_p_30;
      {
        t = get_config_0(t);
        {
          x_58 = t;
          if(((w_58 != NULL) && (w_58 != x_58)))
            _fail(x_58);
          else
            w_58 = x_58;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_30), not_null(u_58)), term_q_30), not_null(w_58)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, t_6);
  {
    t = term_l_27;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm e_59 = NULL;
  e_59 = t;
  d_59 :
  if(match_cons(e_59, sym_Version_0))
    {
      ATerm g_59 = NULL,i_59 = NULL;
      ATerm s_30;
      s_30 = t;
      {
        ATerm h_59 = NULL;
        t = SSLgetAnnotations(not_null(e_59));
        {
          h_59 = t;
          if(((g_59 != NULL) && (g_59 != h_59)))
            _fail(h_59);
          else
            g_59 = h_59;
        }
      }
      t = s_30;
      {
        ATerm j_59 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(g_59));
        {
          j_59 = t;
          if(((i_59 != NULL) && (i_59 != j_59)))
            _fail(j_59);
          else
            i_59 = j_59;
        }
        t = not_null(i_59);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm h_86 (ATerm))
{
  ATerm u_6 (ATerm t)
  {
    ATerm x_30 = t;
    int b_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(b_31);
      }
    else
      {
        t = x_30;
        {
          ATerm h_31 = t;
          int i_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(i_31);
            }
          else
            {
              t = h_31;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, u_6);
  t = h_86(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm o_59 = NULL;
  o_59 = t;
  t = SSL_table_create(not_null(o_59));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm s_59 = NULL;
  s_59 = t;
  {
    ATerm j_31;
    j_31 = t;
    {
      t = term_k_31;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_k_31, term_t_31, not_null(s_59));
          t = table_put_0(t);
        }
      }
    }
    t = j_31;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm w_59 = NULL;
  w_59 = t;
  t = SSL_table_destroy(not_null(w_59));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm a_60 = NULL;
  a_60 = t;
  t = SSL_exit(not_null(a_60));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm e_60 = NULL,f_60 = NULL,g_60 = NULL;
  e_60 = t;
  d_60 :
  if(((ATgetType(e_60) == AT_LIST) && ATisEmpty(e_60)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(e_60) == AT_LIST) && !(ATisEmpty(e_60))))
        {
          f_60 = ATgetFirst((ATermList) e_60);
          g_60 = (ATerm) ATgetNext((ATermList) e_60);
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
  ATerm u_31;
  u_31 = t;
  {
    ATerm j_60 = NULL;
    ATerm m_60 = NULL;
    ATerm v_31 = t;
    int w_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(w_31);
      }
    else
      {
        t = v_31;
        {
          ATerm k_60 = NULL;
          ATerm l_60 = NULL;
          l_60 = t;
          if(((k_60 != NULL) && (k_60 != l_60)))
            _fail(l_60);
          else
            k_60 = l_60;
          t = (ATerm) ATinsert(ATempty, not_null(k_60));
        }
      }
    {
      m_60 = t;
      if(((j_60 != NULL) && (j_60 != m_60)))
        _fail(m_60);
      else
        j_60 = m_60;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_26, not_null(j_60));
      t = printnl_0(t);
    }
  }
  t = u_31;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm r_89 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm x_60 = NULL,y_60 = NULL,z_60 = NULL;
  z_60 = t;
  u_60 :
  if(((ATgetType(z_60) == AT_LIST) && !(ATisEmpty(z_60))))
    {
      x_60 = ATgetFirst((ATermList) z_60);
      y_60 = (ATerm) ATgetNext((ATermList) z_60);
      {
        ATerm c_61 = NULL;
        t = not_null(y_60);
        {
          ATerm x_31;
          x_31 = t;
          {
            ATerm d_61 = NULL,g_61 = NULL,i_61 = NULL;
            ATerm a_32;
            a_32 = t;
            {
              ATerm f_61 = NULL;
              t = i_0(t);
              {
                f_61 = t;
                if(((d_61 != NULL) && (d_61 != f_61)))
                  _fail(f_61);
                else
                  d_61 = f_61;
              }
            }
            t = a_32;
            {
              ATerm h_61 = NULL;
              t = not_null(x_60);
              {
                t = h_0(t);
                {
                  h_61 = t;
                  if(((g_61 != NULL) && (g_61 != h_61)))
                    _fail(h_61);
                  else
                    g_61 = h_61;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(d_61)), not_null(g_61));
                {
                  i_61 = t;
                  if(((c_61 != NULL) && (c_61 != i_61)))
                    _fail(i_61);
                  else
                    c_61 = i_61;
                }
              }
            }
          }
          t = x_31;
          {
            ATerm v_6 (ATerm t)
            {
              t = not_null(c_61);
              return(t);
            }
            t = reverse_acc_2(t, h_0, v_6);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(z_60) == AT_LIST) && ATisEmpty(z_60)))
        {
          {
            t = term_u_8;
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
  ATerm w_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, w_6);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm q_89 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm v_60 (ATerm))
{
  ATerm u_61 = NULL,v_61 = NULL;
  u_61 = t;
  t_61 :
  if(match_cons(u_61, sym_Program_1))
    {
      v_61 = ATgetArgument(u_61, 0);
      {
        ATerm y_61 = NULL,a_62 = NULL;
        ATerm z_61 = NULL;
        t = SSLgetAnnotations(not_null(u_61));
        {
          z_61 = t;
          if(((y_61 != NULL) && (y_61 != z_61)))
            _fail(z_61);
          else
            y_61 = z_61;
        }
        {
          t = not_null(v_61);
          {
            ATerm c_62 = NULL;
            t = v_60(t);
            {
              a_62 = t;
              {
                ATerm d_62 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(a_62)), not_null(y_61));
                {
                  d_62 = t;
                  if(((c_62 != NULL) && (c_62 != d_62)))
                    _fail(d_62);
                  else
                    c_62 = d_62;
                }
                t = not_null(c_62);
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
  ATerm l_62 = NULL;
  ATerm b_32 = t;
  int c_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_62 = NULL;
      t = term_p_30;
      {
        t = get_config_0(t);
        {
          m_62 = t;
          if(((l_62 != NULL) && (l_62 != m_62)))
            _fail(m_62);
          else
            l_62 = m_62;
        }
      }
      LocalPopChoice(c_32);
    }
  else
    {
      t = b_32;
      {
        ATerm x_6 (ATerm t)
        {
          ATerm y_6 (ATerm t)
          {
            ATerm n_62 = NULL;
            n_62 = t;
            if(((l_62 != NULL) && (l_62 != n_62)))
              _fail(n_62);
            else
              l_62 = n_62;
            return(t);
          }
          t = Program_1(t, y_6);
          return(t);
        }
        t = fetch_1(t, x_6);
      }
    }
  {
    t = term_d_32;
    {
      t = echo_0(t);
      {
        t = term_g_32;
        {
          t = table_get_0(t);
          {
            ATerm z_6 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, z_6);
            {
              ATerm e_7 (ATerm t)
              {
                ATerm o_62 = NULL;
                ATerm p_62 = NULL;
                p_62 = t;
                if(((o_62 != NULL) && (o_62 != p_62)))
                  _fail(p_62);
                else
                  o_62 = p_62;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_62)), term_h_32);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, e_7);
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
  ATerm v_62 = NULL,w_62 = NULL,x_62 = NULL;
  v_62 = t;
  u_62 :
  if(match_cons(v_62, sym__2))
    {
      w_62 = ATgetArgument(v_62, 0);
      x_62 = ATgetArgument(v_62, 1);
      {
        ATerm m_32;
        m_32 = t;
        t = SSL_printnl(not_null(w_62), not_null(x_62));
        t = m_32;
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
  ATerm n_32;
  n_32 = t;
  {
    ATerm c_63 = NULL;
    ATerm d_63 = NULL;
    d_63 = t;
    if(((c_63 != NULL) && (c_63 != d_63)))
      _fail(d_63);
    else
      c_63 = d_63;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_19, (ATerm) ATinsert(ATempty, not_null(c_63)));
      t = printnl_0(t);
    }
  }
  t = n_32;
  return(t);
}
ATerm say_1 (ATerm t, ATerm g_85 (ATerm))
{
  ATerm o_32;
  o_32 = t;
  {
    t = g_85(t);
    t = debug_0(t);
  }
  t = o_32;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm w_60 (ATerm))
{
  ATerm k_63 = NULL,l_63 = NULL;
  k_63 = t;
  j_63 :
  if(match_cons(k_63, sym_Undefined_1))
    {
      l_63 = ATgetArgument(k_63, 0);
      {
        ATerm o_63 = NULL,q_63 = NULL;
        ATerm p_63 = NULL;
        t = SSLgetAnnotations(not_null(k_63));
        {
          p_63 = t;
          if(((o_63 != NULL) && (o_63 != p_63)))
            _fail(p_63);
          else
            o_63 = p_63;
        }
        {
          t = not_null(l_63);
          {
            ATerm s_63 = NULL;
            t = w_60(t);
            {
              q_63 = t;
              {
                ATerm t_63 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(q_63)), not_null(o_63));
                {
                  t_63 = t;
                  if(((s_63 != NULL) && (s_63 != t_63)))
                    _fail(t_63);
                  else
                    s_63 = t_63;
                }
                t = not_null(s_63);
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
ATerm fetch_1 (ATerm t, ATerm q_74 (ATerm))
{
  ATerm y_63 (ATerm t)
  {
    ATerm p_32 = t;
    int u_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, q_74, _id);
        LocalPopChoice(u_32);
      }
    else
      {
        t = p_32;
        t = Cons_2(t, _id, y_63);
      }
    return(t);
  }
  t = y_63(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm q_88 (ATerm))
{
  t = fetch_1(t, q_88);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm d_64 = NULL;
  d_64 = t;
  c_64 :
  if(match_cons(d_64, sym_Help_0))
    {
      ATerm f_64 = NULL,h_64 = NULL;
      ATerm v_32;
      v_32 = t;
      {
        ATerm g_64 = NULL;
        t = SSLgetAnnotations(not_null(d_64));
        {
          g_64 = t;
          if(((f_64 != NULL) && (f_64 != g_64)))
            _fail(g_64);
          else
            f_64 = g_64;
        }
      }
      t = v_32;
      {
        ATerm i_64 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(f_64));
        {
          i_64 = t;
          if(((h_64 != NULL) && (h_64 != i_64)))
            _fail(i_64);
          else
            h_64 = i_64;
        }
        t = not_null(h_64);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm q_66 (ATerm))
{
  ATerm x_32 = t;
  int y_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_66(t);
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
ATerm table_get_0 (ATerm t)
{
  ATerm o_64 = NULL,p_64 = NULL,q_64 = NULL;
  o_64 = t;
  n_64 :
  if(match_cons(o_64, sym__2))
    {
      p_64 = ATgetArgument(o_64, 0);
      q_64 = ATgetArgument(o_64, 1);
      t = SSL_table_get(not_null(p_64), not_null(q_64));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm x_64 = NULL,y_64 = NULL,z_64 = NULL,a_65 = NULL;
  x_64 = t;
  w_64 :
  if(match_cons(x_64, sym__3))
    {
      y_64 = ATgetArgument(x_64, 0);
      z_64 = ATgetArgument(x_64, 1);
      a_65 = ATgetArgument(x_64, 2);
      {
        ATerm z_32;
        z_32 = t;
        {
          ATerm e_65 = NULL;
          ATerm f_65 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_64), not_null(z_64));
          {
            ATerm a_33 = t;
            int f_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(f_33);
              }
            else
              {
                t = a_33;
                t = (ATerm) ATempty;
              }
            {
              f_65 = t;
              if(((e_65 != NULL) && (e_65 != f_65)))
                _fail(f_65);
              else
                e_65 = f_65;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(y_64), not_null(z_64), (ATerm) ATinsert(CheckATermList(not_null(e_65)), not_null(a_65)));
            t = table_put_0(t);
          }
        }
        t = z_32;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm v_89 (ATerm))
{
  ATerm j_65 = NULL;
  ATerm k_65 = NULL;
  t = term_u_8;
  {
    t = v_89(t);
    {
      k_65 = t;
      if(((j_65 != NULL) && (j_65 != k_65)))
        _fail(k_65);
      else
        j_65 = k_65;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_e_32, term_f_32, not_null(j_65));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm q_65 = NULL,r_65 = NULL,s_65 = NULL;
  q_65 = t;
  p_65 :
  if(match_string(q_65, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(q_65) == AT_LIST) && !(ATisEmpty(q_65))))
        {
          r_65 = ATgetFirst((ATermList) q_65);
          s_65 = (ATerm) ATgetNext((ATermList) q_65);
          {
            ATerm v_65 = NULL;
            ATerm g_33;
            g_33 = t;
            {
              t = not_null(r_65);
              t = a_0(t);
            }
            t = g_33;
            {
              ATerm w_65 = NULL;
              t = term_u_8;
              {
                t = d_0(t);
                {
                  w_65 = t;
                  if(((v_65 != NULL) && (v_65 != w_65)))
                    _fail(w_65);
                  else
                    v_65 = w_65;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(s_65)), not_null(v_65));
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
  ATerm f_7 (ATerm t)
  {
    ATerm b_66 = NULL;
    b_66 = t;
    a_66 :
    if(!(match_string(b_66, "--help")))
      {
        if(!(match_string(b_66, "-h")))
          {
            if(!(match_string(b_66, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm g_7 (ATerm t)
  {
    t = term_j_33;
    {
      t = set_config_0(t);
      t = term_r_33;
    }
    return(t);
  }
  ATerm h_7 (ATerm t)
  {
    t = term_s_33;
    return(t);
  }
  t = Option_3(t, f_7, g_7, h_7);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm e_66 = NULL,f_66 = NULL,g_66 = NULL;
  e_66 = t;
  d_66 :
  if(((ATgetType(e_66) == AT_LIST) && !(ATisEmpty(e_66))))
    {
      f_66 = ATgetFirst((ATermList) e_66);
      g_66 = (ATerm) ATgetNext((ATermList) e_66);
      t = (ATerm) ATinsert(CheckATermList(not_null(g_66)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(f_66)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm f_56 (ATerm), ATerm g_56 (ATerm))
{
  ATerm t_66 = NULL,u_66 = NULL,v_66 = NULL;
  t_66 = t;
  s_66 :
  if(((ATgetType(t_66) == AT_LIST) && !(ATisEmpty(t_66))))
    {
      u_66 = ATgetFirst((ATermList) t_66);
      v_66 = (ATerm) ATgetNext((ATermList) t_66);
      {
        ATerm z_66 = NULL,d_67 = NULL;
        ATerm c_67 = NULL;
        t = SSLgetAnnotations(not_null(t_66));
        {
          c_67 = t;
          if(((z_66 != NULL) && (z_66 != c_67)))
            _fail(c_67);
          else
            z_66 = c_67;
        }
        {
          t = not_null(u_66);
          {
            ATerm f_67 = NULL;
            t = f_56(t);
            {
              d_67 = t;
              {
                t = not_null(v_66);
                {
                  ATerm h_67 = NULL;
                  t = g_56(t);
                  {
                    f_67 = t;
                    {
                      ATerm i_67 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(f_67)), not_null(d_67)), not_null(z_66));
                      {
                        i_67 = t;
                        if(((h_67 != NULL) && (h_67 != i_67)))
                          _fail(i_67);
                        else
                          h_67 = i_67;
                      }
                      t = not_null(h_67);
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
  ATerm s_67 = NULL;
  s_67 = t;
  r_67 :
  if(((ATgetType(s_67) == AT_LIST) && ATisEmpty(s_67)))
    {
      {
        ATerm u_67 = NULL,c_68 = NULL;
        ATerm t_33;
        t_33 = t;
        {
          ATerm b_68 = NULL;
          t = SSLgetAnnotations(not_null(s_67));
          {
            b_68 = t;
            if(((u_67 != NULL) && (u_67 != b_68)))
              _fail(b_68);
            else
              u_67 = b_68;
          }
        }
        t = t_33;
        {
          ATerm d_68 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(u_67));
          {
            d_68 = t;
            if(((c_68 != NULL) && (c_68 != d_68)))
              _fail(d_68);
            else
              c_68 = d_68;
          }
          t = not_null(c_68);
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
  ATerm j_68 = NULL,k_68 = NULL,l_68 = NULL;
  j_68 = t;
  i_68 :
  if(match_cons(j_68, sym__2))
    {
      k_68 = ATgetArgument(j_68, 0);
      l_68 = ATgetArgument(j_68, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_m_11, not_null(k_68), not_null(l_68));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm t_89 (ATerm))
{
  ATerm u_33;
  u_33 = t;
  {
    ATerm v_33 = t;
    int a_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_34;
        t = t_89(t);
        LocalPopChoice(a_34);
      }
    else
      {
        t = v_33;
        {
        }
      }
  }
  t = u_33;
  {
    ATerm m_7 (ATerm t)
    {
      ATerm t_68 = NULL;
      ATerm c_34;
      c_34 = t;
      {
        ATerm r_68 = NULL;
        ATerm s_68 = NULL;
        s_68 = t;
        if(((r_68 != NULL) && (r_68 != s_68)))
          _fail(s_68);
        else
          r_68 = s_68;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_p_30, not_null(r_68));
          t = set_config_0(t);
        }
      }
      t = c_34;
      {
        ATerm u_68 = NULL;
        u_68 = t;
        if(((t_68 != NULL) && (t_68 != u_68)))
          _fail(u_68);
        else
          t_68 = u_68;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(t_68));
      }
      return(t);
    }
    ATerm n_7 (ATerm t)
    {
      ATerm d_34 = t;
      int o_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_34 = t;
          int q_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(q_34);
            }
          else
            {
              t = p_34;
              {
                t = t_89(t);
                t = Cons_2(t, _id, n_7);
              }
            }
          LocalPopChoice(o_34);
        }
      else
        {
          t = d_34;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, m_7, n_7);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm a_69 = NULL,b_69 = NULL,c_69 = NULL;
  ATerm r_34;
  r_34 = t;
  {
    ATerm d_69 = NULL,e_69 = NULL,f_69 = NULL,g_69 = NULL;
    d_69 = t;
    z_68 :
    if(match_cons(d_69, sym__3))
      {
        e_69 = ATgetArgument(d_69, 0);
        f_69 = ATgetArgument(d_69, 1);
        g_69 = ATgetArgument(d_69, 2);
        {
          if(((a_69 != NULL) && (a_69 != e_69)))
            _fail(e_69);
          else
            a_69 = e_69;
          {
            if(((b_69 != NULL) && (b_69 != f_69)))
              _fail(f_69);
            else
              b_69 = f_69;
            {
              if(((c_69 != NULL) && (c_69 != g_69)))
                _fail(g_69);
              else
                c_69 = g_69;
              t = SSL_table_put(not_null(a_69), not_null(b_69), not_null(c_69));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = r_34;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm s_89 (ATerm))
{
  ATerm j_69 = NULL;
  ATerm s_34;
  s_34 = t;
  {
    t = term_t_34;
    t = table_put_0(t);
  }
  t = s_34;
  {
    ATerm o_7 (ATerm t)
    {
      ATerm a_35 = t;
      int c_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_89(t);
          LocalPopChoice(c_35);
        }
      else
        {
          t = a_35;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, o_7);
    {
      ATerm d_35 = t;
      int e_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_35;
          g_35 = t;
          {
            ATerm h_35 = t;
            int j_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_h_33;
                t = get_config_0(t);
                LocalPopChoice(j_35);
              }
            else
              {
                t = h_35;
                t = fetch_1(t, Help_0);
              }
          }
          t = g_35;
          {
            t = system_usage_0(t);
            {
              t = term_l_27;
              t = exit_0(t);
            }
          }
          LocalPopChoice(e_35);
        }
      else
        {
          t = d_35;
          {
            ATerm n_35 = t;
            int o_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_7 (ATerm t)
                {
                  ATerm q_7 (ATerm t)
                  {
                    ATerm k_69 = NULL;
                    k_69 = t;
                    if(((j_69 != NULL) && (j_69 != k_69)))
                      _fail(k_69);
                    else
                      j_69 = k_69;
                    return(t);
                  }
                  t = Undefined_1(t, q_7);
                  return(t);
                }
                t = fetch_1(t, p_7);
                {
                  ATerm r_7 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_69)), term_p_35);
                    return(t);
                  }
                  t = say_1(t, r_7);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_f_12;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(o_35);
              }
            else
              {
                t = n_35;
                {
                }
              }
          }
        }
      {
        ATerm u_35;
        u_35 = t;
        {
          t = term_e_32;
          t = table_destroy_0(t);
        }
        t = u_35;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm n_86 (ATerm), ATerm o_86 (ATerm), ATerm p_86 (ATerm), ATerm q_86 (ATerm))
{
  t = parse_options_1(t, n_86);
  {
    t = store_options_0(t);
    {
      t = p_86(t);
      {
        ATerm v_35 = t;
        int w_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, o_86);
            LocalPopChoice(w_35);
          }
        else
          {
            t = v_35;
            {
              ATerm a_36 = t;
              int g_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = q_86(t);
                  t = report_success_0(t);
                  LocalPopChoice(g_36);
                }
              else
                {
                  t = a_36;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm r_86 (ATerm), ATerm s_86 (ATerm))
{
  t = option_wrap_4(t, r_86, default_usage_0, _id, s_86);
  return(t);
}
ATerm xtc_io_wrap_2 (ATerm t, ATerm a_94 (ATerm), ATerm b_94 (ATerm))
{
  ATerm s_7 (ATerm t)
  {
    ATerm m_36 = t;
    int n_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_94(t);
        LocalPopChoice(n_36);
      }
    else
      {
        t = m_36;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm u_7 (ATerm t)
  {
    t = xtc_io_1(t, b_94);
    return(t);
  }
  t = option_wrap_2(t, s_7, u_7);
  return(t);
}
ATerm xtc_iowrap_2 (ATerm t, ATerm d_94 (ATerm), ATerm e_94 (ATerm))
{
  t = xtc_io_wrap_2(t, d_94, e_94);
  return(t);
}
ATerm pack_stratego_0 (ATerm t)
{
  ATerm o_69 = NULL,p_69 = NULL;
  ATerm x_7 (ATerm t)
  {
    ATerm q_69 = NULL,r_69 = NULL,s_69 = NULL;
    t = pack_stratego_modules_0(t);
    {
      q_69 = t;
      n_69 :
      if(match_cons(q_69, sym__2))
        {
          r_69 = ATgetArgument(q_69, 0);
          s_69 = ATgetArgument(q_69, 1);
          {
            if(((o_69 != NULL) && (o_69 != r_69)))
              _fail(r_69);
            else
              o_69 = r_69;
            {
              if(((p_69 != NULL) && (p_69 != s_69)))
                _fail(s_69);
              else
                p_69 = s_69;
              {
                ATerm o_36 = t;
                int p_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_r_24;
                    {
                      t = get_config_0(t);
                      {
                        t = not_null(o_69);
                        {
                          ATerm y_7 (ATerm t)
                          {
                            t = get_filename_0(t);
                            t = basename_1(t, _id);
                            return(t);
                          }
                          t = map_1(t, y_7);
                          t = write_to_text_0(t);
                        }
                      }
                    }
                    LocalPopChoice(p_36);
                  }
                else
                  {
                    t = o_36;
                    {
                      t = not_null(o_69);
                      {
                        t = create_dep_file_0(t);
                        {
                          t = not_null(p_69);
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
  t = xtc_iowrap_2(t, pack_stratego_options_0, x_7);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = pack_stratego_0(t);
  return(t);
}
