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
ATerm term_x_34;
ATerm term_d_34;
ATerm term_t_33;
ATerm term_s_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_n_30;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_r_29;
ATerm term_j_29;
ATerm term_e_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_w_28;
ATerm term_k_28;
ATerm term_h_28;
ATerm term_f_28;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_l_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_y_26;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_m_24;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_s_21;
ATerm term_q_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_j_20;
ATerm term_c_20;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_p_19;
ATerm term_n_18;
ATerm term_g_18;
ATerm term_y_17;
ATerm term_q_17;
ATerm term_i_17;
ATerm term_z_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_k_16;
ATerm term_f_16;
ATerm term_c_16;
ATerm term_a_16;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_o_15;
ATerm term_c_15;
ATerm term_a_15;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_g_14;
ATerm term_y_13;
ATerm term_q_13;
ATerm term_o_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_g_12;
ATerm term_b_12;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_p_11;
ATerm term_e_11;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_d_9;
ATerm term_a_9;
ATerm term_x_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_p_8;
ATerm term_o_8;
void init_constant_terms (void)
{
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("dissuasive library strategy: ", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("separate-by/1; Use separate-by/0 and term wrap patterns: <separate-by> (a, <id>)", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("dep", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" :", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" \\\n	", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym__2, term_h_13, term_o_13);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym__2, term_h_13, term_w_14);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("parse error in ", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("*** module ", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("rtree", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("str", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("cr", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" reading ", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("list-cons", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("tuple-cons", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d   Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym__2, term_f_9, term_p_24);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep              Don't create dependency file", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep f | -d f       Write dependency to file f", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(sym__2, term_v_24, term_x_8);
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--imports            Produce a list of imported modules only", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym__2, term_g_18, term_z_16);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(sym__2, term_g_27, term_x_8);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(sym__2, term_o_8, term_o_27);
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(sym_Verbose_1, term_o_27);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(sym__2, term_e_28, term_x_8);
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(sym__2, term_a_29, term_x_8);
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(sym__2, term_a_32, term_b_32);
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(sym__2, term_m_33, term_x_8);
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(sym__3, term_a_32, term_b_32, (ATerm) ATempty);
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm separate_by_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm v_87 (ATerm));
ATerm dissuader_1 (ATerm, ATerm u_85 (ATerm));
ATerm separate_by_1 (ATerm, ATerm k_74 (ATerm));
ATerm create_dep_file_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_to_text_0 (ATerm);
ATerm basename_1 (ATerm, ATerm y_83 (ATerm));
ATerm basename_0 (ATerm);
ATerm at_suffix_rev_1 (ATerm, ATerm l_75 (ATerm));
ATerm get_filename_0 (ATerm);
ATerm map_1 (ATerm, ATerm o_74 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm Imports_1 (ATerm, ATerm r_61 (ATerm));
ATerm flatten_stratego_0 (ATerm);
ATerm _2 (ATerm, ATerm d_55 (ATerm), ATerm e_55 (ATerm));
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm z_76 (ATerm));
ATerm unzip_0 (ATerm);
ATerm get_stratego_imports_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm pass_keep_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm w_94 (ATerm), ATerm x_94 (ATerm));
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_and_wait_1 (ATerm, ATerm e_91 (ATerm));
ATerm call_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm y_87 (ATerm));
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm x_87 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm z_87 (ATerm));
ATerm set_0 (ATerm);
ATerm union_1 (ATerm, ATerm l_80 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm i_91 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm n_94 (ATerm));
ATerm assert_1 (ATerm, ATerm f_85 (ATerm));
ATerm obsolete_1 (ATerm, ATerm t_85 (ATerm));
ATerm open_file_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm l_61 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm p_94 (ATerm), ATerm q_94 (ATerm));
ATerm parse_module_0 (ATerm);
ATerm debug_1 (ATerm, ATerm m_85 (ATerm));
ATerm if_verbose3_1 (ATerm, ATerm w_87 (ATerm));
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm find_in_path_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm add_extension_0 (ATerm);
ATerm split_2 (ATerm, ATerm r_82 (ATerm), ATerm s_82 (ATerm));
ATerm guarantee_extension_1 (ATerm, ATerm a_84 (ATerm));
ATerm find_file_1 (ATerm, ATerm j_86 (ATerm));
ATerm fetch_elem_1 (ATerm, ATerm z_74 (ATerm));
ATerm find_module_1 (ATerm, ATerm w_66 (ATerm));
ATerm get_module_1 (ATerm, ATerm v_66 (ATerm));
ATerm Fst_0 (ATerm);
ATerm GnUndefined_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm p_80 (ATerm), ATerm q_80 (ATerm));
ATerm diff_1 (ATerm, ATerm h_80 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm p_76 (ATerm), ATerm q_76 (ATerm), ATerm r_76 (ATerm), ATerm s_76 (ATerm));
ATerm zip_1 (ATerm, ATerm u_76 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNext_3 (ATerm, ATerm u_95 (ATerm), ATerm v_95 (ATerm), ATerm w_95 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm c_68 (ATerm), ATerm d_68 (ATerm));
ATerm for_3 (ATerm, ATerm f_68 (ATerm), ATerm g_68 (ATerm), ATerm h_68 (ATerm));
ATerm graph_nodes_undef_roots_3 (ATerm, ATerm c_95 (ATerm), ATerm d_95 (ATerm), ATerm e_95 (ATerm));
ATerm graph_nodes_roots_3 (ATerm, ATerm r_95 (ATerm), ATerm s_95 (ATerm), ATerm t_95 (ATerm));
ATerm filter_1 (ATerm, ATerm f_82 (ATerm));
ATerm pack_stratego_modules_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm d_75 (ATerm));
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
ATerm end_scope_1 (ATerm, ATerm c_85 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm h_67 (ATerm), ATerm i_67 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm b_85 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm d_94 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm e_94 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm c_81 (ATerm), ATerm d_81 (ATerm));
ATerm crush_2 (ATerm, ATerm a_80 (ATerm), ATerm b_80 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm u_87 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm o_86 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm y_89 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm x_89 (ATerm));
ATerm Program_1 (ATerm, ATerm c_61 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm n_85 (ATerm));
ATerm Undefined_1 (ATerm, ATerm d_61 (ATerm));
ATerm fetch_1 (ATerm, ATerm x_74 (ATerm));
ATerm option_defined_1 (ATerm, ATerm x_88 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm x_66 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm c_90 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm m_56 (ATerm), ATerm n_56 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm a_90 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm z_89 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm u_86 (ATerm), ATerm v_86 (ATerm), ATerm w_86 (ATerm), ATerm x_86 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm y_86 (ATerm), ATerm z_86 (ATerm));
ATerm xtc_io_wrap_2 (ATerm, ATerm i_94 (ATerm), ATerm j_94 (ATerm));
ATerm xtc_iowrap_2 (ATerm, ATerm l_94 (ATerm), ATerm m_94 (ATerm));
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
          int a_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(a_8);
            }
          else
            {
              t = w_3;
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
ATerm if_verbose2_1 (ATerm t, ATerm v_87 (ATerm))
{
  ATerm g_8 = t;
  int h_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_8;
      l_8 = t;
      {
        ATerm z_3 = NULL;
        ATerm a_4 = NULL;
        t = term_o_8;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_3), term_p_8);
          t = geq_0(t);
        }
      }
      t = l_8;
      t = v_87(t);
      LocalPopChoice(h_8);
    }
  else
    {
      t = g_8;
      {
      }
    }
  return(t);
}
ATerm dissuader_1 (ATerm t, ATerm u_85 (ATerm))
{
  ATerm q_8;
  q_8 = t;
  {
    ATerm c_0 (ATerm t)
    {
      t = u_85(t);
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
ATerm separate_by_1 (ATerm t, ATerm k_74 (ATerm))
{
  ATerm e_4 = NULL,g_4 = NULL;
  ATerm f_0 (ATerm t)
  {
    t = term_s_8;
    return(t);
  }
  t = dissuader_1(t, f_0);
  {
    ATerm u_8;
    u_8 = t;
    {
      ATerm f_4 = NULL;
      f_4 = t;
      if(((e_4 != NULL) && (e_4 != f_4)))
        _fail(f_4);
      else
        e_4 = f_4;
    }
    t = u_8;
    {
      ATerm h_4 = NULL;
      t = term_x_8;
      {
        t = k_74(t);
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
    t = term_a_9;
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
                    t = (ATerm) ATmakeAppl(sym__2, not_null(z_4), term_g_9);
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
                            t = (ATerm) ATmakeAppl(sym__2, not_null(u_4), term_l_9);
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
                                    t = (ATerm) ATinsert(CheckATermList(not_null(r_4)), term_m_9);
                                    {
                                      ATerm p_0 (ATerm t)
                                      {
                                        t = term_n_9;
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
ATerm basename_1 (ATerm t, ATerm y_83 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm r_9 = t;
    int t_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_6 (ATerm t)
        {
          ATerm w_9 = t;
          int x_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, g_6);
              LocalPopChoice(x_9);
            }
          else
            {
              t = w_9;
              {
                ATerm y_9 = t;
                int z_9 = stack_ptr;
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
                    LocalPopChoice(z_9);
                  }
                else
                  {
                    t = y_9;
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
                      t = Cons_2(t, r_0, y_83);
                      t = (ATerm) ATempty;
                    }
                  }
              }
            }
          return(t);
        }
        t = g_6(t);
        LocalPopChoice(t_9);
      }
    else
      {
        t = r_9;
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
ATerm at_suffix_rev_1 (ATerm t, ATerm l_75 (ATerm))
{
  ATerm h_6 (ATerm t)
  {
    ATerm a_10 = t;
    int b_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, h_6);
        LocalPopChoice(b_10);
      }
    else
      {
        t = a_10;
        t = l_75(t);
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
    ATerm m_10 = t;
    int n_10 = stack_ptr;
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
        LocalPopChoice(n_10);
      }
    else
      {
        t = m_10;
        {
        }
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm map_1 (ATerm t, ATerm o_74 (ATerm))
{
  ATerm q_6 (ATerm t)
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
        t = Cons_2(t, o_74, q_6);
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
        ATerm w_10 = t;
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
            t = w_10;
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
                          ATerm c_11 = t;
                          int d_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(d_11);
                            }
                          else
                            {
                              t = c_11;
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
                      if(match_cons(b_7, sym_Prefix_2))
                        {
                          c_7 = ATgetArgument(b_7, 0);
                          d_7 = ATgetArgument(b_7, 1);
                          {
                            ATerm i_7 = NULL,k_7 = NULL;
                            ATerm m_11;
                            m_11 = t;
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
                            t = m_11;
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
    t = (ATerm) ATmakeAppl(sym__2, term_p_11, not_null(t_7));
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
                ATerm v_7 = NULL;
                ATerm w_7 = NULL;
                w_7 = t;
                if(((v_7 != NULL) && (v_7 != w_7)))
                  _fail(w_7);
                else
                  v_7 = w_7;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_p_11, not_null(t_7), not_null(v_7));
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
ATerm Imports_1 (ATerm t, ATerm r_61 (ATerm))
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
            t = r_61(t);
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
ATerm _2 (ATerm t, ATerm d_55 (ATerm), ATerm e_55 (ATerm))
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
            t = d_55(t);
            {
              q_9 = t;
              {
                t = not_null(k_9);
                {
                  ATerm u_9 = NULL;
                  t = e_55(t);
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
      t = term_u_11;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm z_76 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, z_76);
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
      t = term_v_11;
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
  t = term_b_12;
  {
    ATerm e_12 = t;
    int f_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(f_12);
      }
    else
      {
        t = e_12;
        t = term_g_12;
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_13), term_g_12);
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
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_13)), term_b_12);
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
        ATerm h_12 = t;
        int i_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(v_13), not_null(w_13));
            LocalPopChoice(i_12);
          }
        else
          {
            t = h_12;
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
  t = term_o_8;
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
      e_14 = t;
      if(((d_14 != NULL) && (d_14 != e_14)))
        _fail(e_14);
      else
        d_14 = e_14;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_14), term_g_12);
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
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_14)), term_o_8);
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm w_94 (ATerm), ATerm x_94 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, w_94, x_94);
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
ATerm execvp_0 (ATerm t)
{
  ATerm o_14 = NULL,p_14 = NULL,q_14 = NULL;
  o_14 = t;
  n_14 :
  if(match_cons(o_14, sym__2))
    {
      p_14 = ATgetArgument(o_14, 0);
      q_14 = ATgetArgument(o_14, 1);
      t = SSL_execvp(not_null(p_14), not_null(q_14));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm v_14 = NULL;
  v_14 = t;
  t = SSL_waitpid(not_null(v_14));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm e_91 (ATerm))
{
  ATerm f_15 = NULL;
  ATerm h_15 = NULL;
  f_15 = t;
  {
    t = fork_0(t);
    {
      h_15 = t;
      {
        ATerm q_12 = t;
        int v_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_15 = NULL;
            j_15 = t;
            b_15 :
            if(match_int(j_15, 0))
              {
                t = not_null(f_15);
                t = e_91(t);
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(v_12);
          }
        else
          {
            t = q_12;
            {
              ATerm k_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL;
              t = not_null(h_15);
              {
                t = waitpid_0(t);
                {
                  k_15 = t;
                  d_15 :
                  if(match_cons(k_15, sym_WaitStatus_3))
                    {
                      l_15 = ATgetArgument(k_15, 0);
                      m_15 = ATgetArgument(k_15, 1);
                      n_15 = ATgetArgument(k_15, 2);
                      e_15 :
                      if(match_int(l_15, 0))
                        {
                          t = not_null(f_15);
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
  ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL;
  u_15 = t;
  t_15 :
  if(match_cons(u_15, sym__2))
    {
      v_15 = ATgetArgument(u_15, 0);
      w_15 = ATgetArgument(u_15, 1);
      {
        ATerm y_0 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_15), not_null(w_15));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, y_0);
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
  ATerm b_16 = NULL;
  b_16 = t;
  t = SSL_table_keys(not_null(b_16));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm h_16 = NULL;
  h_16 = t;
  {
    t = table_keys_0(t);
    {
      ATerm z_0 (ATerm t)
      {
        ATerm j_16 = NULL;
        ATerm l_16 = NULL;
        j_16 = t;
        {
          ATerm m_16 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_16), not_null(j_16));
          {
            t = table_get_0(t);
            {
              m_16 = t;
              if(((l_16 != NULL) && (l_16 != m_16)))
                _fail(m_16);
              else
                l_16 = m_16;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_16), not_null(l_16));
        }
        return(t);
      }
      t = map_1(t, z_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm y_87 (ATerm))
{
  ATerm d_13 = t;
  int e_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_13;
      f_13 = t;
      {
        ATerm r_16 = NULL;
        ATerm s_16 = NULL;
        t = term_o_8;
        {
          t = get_config_0(t);
          {
            s_16 = t;
            if(((r_16 != NULL) && (r_16 != s_16)))
              _fail(s_16);
            else
              r_16 = s_16;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_16), term_g_13);
          t = geq_0(t);
        }
      }
      t = f_13;
      t = y_87(t);
      LocalPopChoice(e_13);
    }
  else
    {
      t = d_13;
      {
      }
    }
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm y_16 = NULL;
  ATerm a_17 = NULL,b_17 = NULL;
  y_16 = t;
  {
    ATerm c_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_h_13, (ATerm) ATmakeAppl(sym_Tool_1, not_null(y_16)));
    {
      t = table_get_0(t);
      {
        c_17 = t;
        w_16 :
        if(((ATgetType(c_17) == AT_LIST) && !(ATisEmpty(c_17))))
          {
            d_17 = ATgetFirst((ATermList) c_17);
            g_17 = (ATerm) ATgetNext((ATermList) c_17);
            x_16 :
            if(match_cons(d_17, sym__2))
              {
                e_17 = ATgetArgument(d_17, 0);
                f_17 = ATgetArgument(d_17, 1);
                {
                  if(((a_17 != NULL) && (a_17 != e_17)))
                    _fail(e_17);
                  else
                    a_17 = e_17;
                  if(((b_17 != NULL) && (b_17 != f_17)))
                    _fail(f_17);
                  else
                    b_17 = f_17;
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
    t = not_null(b_17);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm n_17 = NULL,o_17 = NULL,p_17 = NULL;
  n_17 = t;
  m_17 :
  if(match_cons(n_17, sym__2))
    {
      o_17 = ATgetArgument(n_17, 0);
      p_17 = ATgetArgument(n_17, 1);
      {
        ATerm s_17 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_h_13, (ATerm) ATmakeAppl(sym_Tool_1, not_null(o_17)));
        {
          t = table_get_0(t);
          {
            ATerm a_1 (ATerm t)
            {
              ATerm t_17 = NULL,u_17 = NULL,v_17 = NULL;
              t_17 = t;
              l_17 :
              if(match_cons(t_17, sym__2))
                {
                  u_17 = ATgetArgument(t_17, 0);
                  v_17 = ATgetArgument(t_17, 1);
                  {
                    if(((p_17 != NULL) && (p_17 != u_17)))
                      _fail(u_17);
                    else
                      p_17 = u_17;
                    if(((s_17 != NULL) && (s_17 != v_17)))
                      _fail(v_17);
                    else
                      s_17 = v_17;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, a_1);
          }
        }
        t = not_null(s_17);
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
  ATerm m_13 = t;
  int n_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_13;
      {
        t = table_get_0(t);
        {
          ATerm b_1 (ATerm t)
          {
            t = try_1(t, xtc_read_0);
            return(t);
          }
          t = map_1(t, b_1);
        }
      }
      LocalPopChoice(n_13);
    }
  else
    {
      t = m_13;
      {
      }
    }
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm x_87 (ATerm))
{
  ATerm r_13 = t;
  int s_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_13;
      x_13 = t;
      {
        ATerm z_17 = NULL;
        ATerm a_18 = NULL;
        t = term_o_8;
        {
          t = get_config_0(t);
          {
            a_18 = t;
            if(((z_17 != NULL) && (z_17 != a_18)))
              _fail(a_18);
            else
              z_17 = a_18;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_17), term_y_13);
          t = geq_0(t);
        }
      }
      t = x_13;
      t = x_87(t);
      LocalPopChoice(s_13);
    }
  else
    {
      t = r_13;
      {
      }
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm z_87 (ATerm))
{
  ATerm z_13 = t;
  int a_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_14;
      b_14 = t;
      {
        ATerm d_18 = NULL;
        ATerm e_18 = NULL;
        t = term_o_8;
        {
          t = get_config_0(t);
          {
            e_18 = t;
            if(((d_18 != NULL) && (d_18 != e_18)))
              _fail(e_18);
            else
              d_18 = e_18;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_18), term_g_14);
          t = geq_0(t);
        }
      }
      t = b_14;
      t = z_87(t);
      LocalPopChoice(a_14);
    }
  else
    {
      t = z_13;
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
ATerm union_1 (ATerm t, ATerm l_80 (ATerm))
{
  ATerm i_18 = NULL,j_18 = NULL,k_18 = NULL;
  i_18 = t;
  h_18 :
  if(match_cons(i_18, sym__2))
    {
      j_18 = ATgetArgument(i_18, 0);
      k_18 = ATgetArgument(i_18, 1);
      {
        t = not_null(j_18);
        {
          ATerm o_18 (ATerm t)
          {
            ATerm h_14 = t;
            int i_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(k_18);
                LocalPopChoice(i_14);
              }
            else
              {
                t = h_14;
                {
                  ATerm k_14 = t;
                  int l_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm c_1 (ATerm t)
                      {
                        t = not_null(k_18);
                        return(t);
                      }
                      t = HdMember_p__2(t, l_80, c_1);
                      t = o_18(t);
                      LocalPopChoice(l_14);
                    }
                  else
                    {
                      t = k_14;
                      t = Cons_2(t, _id, o_18);
                    }
                }
              }
            return(t);
          }
          t = o_18(t);
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
  ATerm t_18 = NULL,u_18 = NULL,v_18 = NULL,w_18 = NULL;
  t_18 = t;
  s_18 :
  if(match_cons(t_18, sym__3))
    {
      u_18 = ATgetArgument(t_18, 0);
      v_18 = ATgetArgument(t_18, 1);
      w_18 = ATgetArgument(t_18, 2);
      {
        ATerm m_14;
        m_14 = t;
        {
          ATerm a_19 = NULL;
          ATerm b_19 = NULL,d_19 = NULL;
          ATerm c_19 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_18), not_null(v_18));
          {
            ATerm r_14 = t;
            int s_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(s_14);
              }
            else
              {
                t = r_14;
                t = (ATerm) ATempty;
              }
            {
              c_19 = t;
              if(((b_19 != NULL) && (b_19 != c_19)))
                _fail(c_19);
              else
                b_19 = c_19;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(b_19), not_null(w_18));
            {
              t = union_1(t, eq_0);
              {
                d_19 = t;
                if(((a_19 != NULL) && (a_19 != d_19)))
                  _fail(d_19);
                else
                  a_19 = d_19;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(u_18), not_null(v_18), not_null(a_19));
            t = table_put_0(t);
          }
        }
        t = m_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm i_91 (ATerm))
{
  ATerm l_19 = NULL,m_19 = NULL,n_19 = NULL;
  l_19 = t;
  k_19 :
  if(match_cons(l_19, sym__2))
    {
      m_19 = ATgetArgument(l_19, 0);
      n_19 = ATgetArgument(l_19, 1);
      {
        t = not_null(n_19);
        {
          ATerm d_1 (ATerm t)
          {
            ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL;
            q_19 = t;
            j_19 :
            if(match_cons(q_19, sym__2))
              {
                r_19 = ATgetArgument(q_19, 0);
                s_19 = ATgetArgument(q_19, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(m_19), not_null(r_19), not_null(s_19));
                  t = i_91(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, d_1);
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
  ATerm y_19 = NULL;
  y_19 = t;
  t = SSL_ReadFromFile(not_null(y_19));
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm d_20 = NULL;
  ATerm f_20 = NULL;
  d_20 = t;
  {
    ATerm t_14 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_13, (ATerm) ATmakeAppl(sym_Imported_1, not_null(d_20)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = t_14;
      }
    {
      ATerm u_14;
      u_14 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_h_13, term_w_14, (ATerm) ATinsert(ATempty, not_null(d_20)));
        t = table_put_0(t);
      }
      t = u_14;
      {
        ATerm e_1 (ATerm t)
        {
          ATerm f_1 (ATerm t)
          {
            t = term_x_14;
            return(t);
          }
          t = debug_1(t, f_1);
          return(t);
        }
        t = if_verbose4_1(t, e_1);
        {
          ATerm y_14 = t;
          int z_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(z_14);
            }
          else
            {
              t = y_14;
              t = (ATerm) ATempty;
            }
          {
            ATerm g_1 (ATerm t)
            {
              ATerm h_1 (ATerm t)
              {
                t = term_a_15;
                return(t);
              }
              t = say_1(t, h_1);
              return(t);
            }
            t = if_verbose6_1(t, g_1);
            {
              ATerm g_20 = NULL;
              g_20 = t;
              if(((f_20 != NULL) && (f_20 != g_20)))
                _fail(g_20);
              else
                f_20 = g_20;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_h_13, not_null(f_20));
                {
                  t = table_putlist_1(t, table_append_0);
                  {
                    ATerm i_1 (ATerm t)
                    {
                      ATerm l_1 (ATerm t)
                      {
                        t = term_c_15;
                        return(t);
                      }
                      t = say_1(t, l_1);
                      return(t);
                    }
                    t = if_verbose6_1(t, i_1);
                    {
                      t = (ATerm) ATmakeAppl(sym__3, term_h_13, (ATerm)ATmakeAppl(sym_Imported_1, not_null(d_20)), (ATerm) ATempty);
                      {
                        t = table_put_0(t);
                        {
                          ATerm m_1 (ATerm t)
                          {
                            ATerm n_1 (ATerm t)
                            {
                              t = term_a_15;
                              return(t);
                            }
                            t = say_1(t, n_1);
                            return(t);
                          }
                          t = if_verbose4_1(t, m_1);
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
  ATerm k_20 = NULL;
  k_20 = t;
  t = SSL_getenv(not_null(k_20));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm g_15 = t;
  int i_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_15;
      t = get_config_0(t);
      LocalPopChoice(i_15);
    }
  else
    {
      t = g_15;
      {
        ATerm p_15 = t;
        int q_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_r_15;
            t = getenv_0(t);
            LocalPopChoice(q_15);
          }
        else
          {
            t = p_15;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm p_1 (ATerm t)
  {
    ATerm r_1 (ATerm t)
    {
      t = term_s_15;
      return(t);
    }
    t = debug_1(t, r_1);
    return(t);
  }
  t = if_verbose5_1(t, p_1);
  {
    ATerm x_15;
    x_15 = t;
    {
      ATerm y_15 = t;
      int z_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_a_16;
          t = table_get_0(t);
          LocalPopChoice(z_15);
        }
      else
        {
          t = y_15;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = x_15;
    {
      ATerm s_1 (ATerm t)
      {
        ATerm t_1 (ATerm t)
        {
          t = term_c_16;
          return(t);
        }
        t = debug_1(t, t_1);
        return(t);
      }
      t = if_verbose5_1(t, s_1);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm d_16 = t;
  int e_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_1 (ATerm t)
      {
        ATerm v_1 (ATerm t)
        {
          t = term_f_16;
          return(t);
        }
        t = debug_1(t, v_1);
        return(t);
      }
      t = if_verbose5_1(t, u_1);
      {
        t = xtc_load_0(t);
        {
          ATerm g_16 = t;
          int i_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(i_16);
            }
          else
            {
              t = g_16;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm w_1 (ATerm t)
            {
              ATerm x_1 (ATerm t)
              {
                t = term_f_16;
                return(t);
              }
              t = debug_1(t, x_1);
              return(t);
            }
            t = if_verbose5_1(t, w_1);
          }
        }
      }
      LocalPopChoice(e_16);
    }
  else
    {
      t = d_16;
      {
        ATerm o_20 = NULL;
        ATerm p_20 = NULL;
        p_20 = t;
        if(((o_20 != NULL) && (o_20 != p_20)))
          _fail(p_20);
        else
          o_20 = p_20;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_16), not_null(o_20)), term_k_16);
          {
            t = error_0(t);
            {
              ATerm y_1 (ATerm t)
              {
                t = term_h_13;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm z_1 (ATerm t)
                    {
                      t = term_o_16;
                      return(t);
                    }
                    t = debug_1(t, z_1);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, y_1);
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
ATerm xtc_command_1 (ATerm t, ATerm n_94 (ATerm))
{
  ATerm t_20 = NULL;
  ATerm p_16;
  p_16 = t;
  {
    ATerm u_20 = NULL;
    t = n_94(t);
    {
      t = xtc_find_0(t);
      {
        u_20 = t;
        if(((t_20 != NULL) && (t_20 != u_20)))
          _fail(u_20);
        else
          t_20 = u_20;
      }
    }
  }
  t = p_16;
  {
    ATerm q_16;
    q_16 = t;
    {
      ATerm v_20 = NULL;
      ATerm w_20 = NULL;
      w_20 = t;
      if(((v_20 != NULL) && (v_20 != w_20)))
        _fail(w_20);
      else
        v_20 = w_20;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_20), not_null(v_20));
        t = call_0(t);
      }
    }
    t = q_16;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm f_85 (ATerm))
{
  ATerm e_21 = NULL,f_21 = NULL,g_21 = NULL;
  e_21 = t;
  d_21 :
  if(match_cons(e_21, sym__2))
    {
      f_21 = ATgetArgument(e_21, 0);
      g_21 = ATgetArgument(e_21, 1);
      {
        ATerm j_21 = NULL,k_21 = NULL,l_21 = NULL;
        ATerm t_16;
        t_16 = t;
        {
          ATerm m_21 = NULL;
          ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL;
          t = f_85(t);
          {
            m_21 = t;
            {
              if(((j_21 != NULL) && (j_21 != m_21)))
                _fail(m_21);
              else
                j_21 = m_21;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(j_21), not_null(f_21), not_null(g_21));
                {
                  t = table_push_0(t);
                  {
                    ATerm u_16 = t;
                    int v_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(j_21), term_z_16);
                        t = table_get_0(t);
                        LocalPopChoice(v_16);
                      }
                    else
                      {
                        t = u_16;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      n_21 = t;
                      c_21 :
                      if(((ATgetType(n_21) == AT_LIST) && !(ATisEmpty(n_21))))
                        {
                          o_21 = ATgetFirst((ATermList) n_21);
                          p_21 = (ATerm) ATgetNext((ATermList) n_21);
                          {
                            if(((k_21 != NULL) && (k_21 != o_21)))
                              _fail(o_21);
                            else
                              k_21 = o_21;
                            {
                              if(((l_21 != NULL) && (l_21 != p_21)))
                                _fail(p_21);
                              else
                                l_21 = p_21;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(j_21), term_z_16, (ATerm) ATinsert(CheckATermList(not_null(l_21)), (ATerm) ATinsert(CheckATermList(not_null(k_21)), not_null(f_21))));
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
        t = t_16;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm t_85 (ATerm))
{
  ATerm h_17;
  h_17 = t;
  {
    t = t_85(t);
    {
      ATerm a_2 (ATerm t)
      {
        t = term_i_17;
        return(t);
      }
      t = debug_1(t, a_2);
    }
  }
  t = h_17;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm x_21 = NULL,y_21 = NULL;
  ATerm j_17 = t;
  int k_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_22 = NULL,v_22 = NULL,w_22 = NULL;
      u_22 = t;
      u_21 :
      if(match_cons(u_22, sym__2))
        {
          v_22 = ATgetArgument(u_22, 0);
          w_22 = ATgetArgument(u_22, 1);
          {
            if(((y_21 != NULL) && (y_21 != v_22)))
              _fail(v_22);
            else
              y_21 = v_22;
            if(((x_21 != NULL) && (x_21 != w_22)))
              _fail(w_22);
            else
              x_21 = w_22;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(k_17);
      t = SSL_open_file(not_null(y_21), not_null(x_21));
    }
  else
    {
      t = j_17;
      {
        ATerm x_22 = NULL;
        ATerm y_22 = NULL;
        ATerm b_2 (ATerm t)
        {
          t = term_q_17;
          return(t);
        }
        t = obsolete_1(t, b_2);
        {
          x_22 = t;
          {
            if(((y_21 != NULL) && (y_21 != x_22)))
              _fail(x_22);
            else
              y_21 = x_22;
            {
              ATerm r_17;
              r_17 = t;
              {
                ATerm z_22 = NULL;
                t = term_l_9;
                {
                  z_22 = t;
                  if(((y_22 != NULL) && (y_22 != z_22)))
                    _fail(z_22);
                  else
                    y_22 = z_22;
                }
              }
              t = r_17;
              t = SSL_open_file(not_null(y_21), not_null(y_22));
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
  ATerm e_23 = NULL;
  ATerm f_23 = NULL;
  t = term_x_8;
  {
    t = new_0(t);
    {
      f_23 = t;
      if(((e_23 != NULL) && (e_23 != f_23)))
        _fail(f_23);
      else
        e_23 = f_23;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_23), term_y_17);
    {
      t = conc_strings_0(t);
      {
        ATerm b_18 = t;
        int c_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = file_exists_0(t);
            t = new_file_0(t);
            LocalPopChoice(c_18);
          }
        else
          {
            t = b_18;
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
  ATerm j_23 = NULL;
  t = new_file_0(t);
  {
    j_23 = t;
    {
      ATerm f_18;
      f_18 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_23), term_l_9);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(j_23), term_x_8);
            {
              ATerm c_2 (ATerm t)
              {
                t = term_g_18;
                return(t);
              }
              t = assert_1(t, c_2);
            }
          }
        }
      }
      t = f_18;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm t_23 = NULL,u_23 = NULL;
  t_23 = t;
  s_23 :
  if(match_cons(t_23, sym_stdin_0))
    {
      ATerm v_23 = NULL;
      ATerm y_23 = NULL;
      ATerm z_23 = NULL;
      t = xtc_new_file_0(t);
      {
        y_23 = t;
        {
          if(((v_23 != NULL) && (v_23 != y_23)))
            _fail(y_23);
          else
            v_23 = y_23;
          {
            ATerm f_24 = NULL;
            t = o_0(t);
            {
              f_24 = t;
              if(((z_23 != NULL) && (z_23 != f_24)))
                _fail(f_24);
              else
                z_23 = f_24;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_23), (ATerm) ATinsert(ATinsert(ATempty, not_null(v_23)), term_a_9));
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
                {
                  t = xtc_command_1(t, n_0);
                  {
                    t = not_null(v_23);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(v_23));
    }
  else
    {
      if(match_cons(t_23, sym_FILE_1))
        {
          u_23 = ATgetArgument(t_23, 0);
          {
            ATerm h_24 = NULL;
            ATerm i_24 = NULL;
            t = not_null(u_23);
            {
              ATerm j_24 = NULL;
              t = xtc_new_file_0(t);
              {
                i_24 = t;
                {
                  if(((h_24 != NULL) && (h_24 != i_24)))
                    _fail(i_24);
                  else
                    h_24 = i_24;
                  {
                    ATerm k_24 = NULL;
                    t = o_0(t);
                    {
                      k_24 = t;
                      if(((j_24 != NULL) && (j_24 != k_24)))
                        _fail(k_24);
                      else
                        j_24 = k_24;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(j_24), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(h_24)), term_a_9), not_null(u_23)), term_n_18));
                      {
                        ATerm p_18 = t;
                        int q_18 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = conc_two_lists_0(t);
                            LocalPopChoice(q_18);
                          }
                        else
                          {
                            t = p_18;
                            t = conc_more_lists_0(t);
                          }
                        {
                          t = xtc_command_1(t, n_0);
                          {
                            t = not_null(h_24);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(h_24));
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
  ATerm a_25 = NULL;
  a_25 = t;
  z_24 :
  if(match_cons(a_25, sym_stdin_0))
    {
      ATerm c_25 = NULL,e_25 = NULL;
      ATerm r_18;
      r_18 = t;
      {
        ATerm d_25 = NULL;
        t = SSLgetAnnotations(not_null(a_25));
        {
          d_25 = t;
          if(((c_25 != NULL) && (c_25 != d_25)))
            _fail(d_25);
          else
            c_25 = d_25;
        }
      }
      t = r_18;
      {
        ATerm f_25 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(c_25));
        {
          f_25 = t;
          if(((e_25 != NULL) && (e_25 != f_25)))
            _fail(f_25);
          else
            e_25 = f_25;
        }
        t = not_null(e_25);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm l_61 (ATerm))
{
  ATerm o_25 = NULL,p_25 = NULL;
  o_25 = t;
  n_25 :
  if(match_cons(o_25, sym_FILE_1))
    {
      p_25 = ATgetArgument(o_25, 0);
      {
        ATerm s_25 = NULL,u_25 = NULL;
        ATerm t_25 = NULL;
        t = SSLgetAnnotations(not_null(o_25));
        {
          t_25 = t;
          if(((s_25 != NULL) && (s_25 != t_25)))
            _fail(t_25);
          else
            s_25 = t_25;
        }
        {
          t = not_null(p_25);
          {
            ATerm w_25 = NULL;
            t = l_61(t);
            {
              u_25 = t;
              {
                ATerm x_25 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(u_25)), not_null(s_25));
                {
                  x_25 = t;
                  if(((w_25 != NULL) && (w_25 != x_25)))
                    _fail(x_25);
                  else
                    w_25 = x_25;
                }
                t = not_null(w_25);
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
ATerm xtc_transform_2 (ATerm t, ATerm p_94 (ATerm), ATerm q_94 (ATerm))
{
  ATerm x_18 = t;
  int y_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_18 = t;
      int e_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(e_19);
        }
      else
        {
          t = z_18;
          t = stdin_0(t);
        }
      LocalPopChoice(y_18);
      t = xtc_transform_file_2(t, p_94, q_94);
    }
  else
    {
      t = x_18;
      t = xtc_transform_term_2(t, p_94, q_94);
    }
  return(t);
}
ATerm parse_module_0 (ATerm t)
{
  ATerm f_19 = t;
  int g_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_26 = NULL;
      ATerm d_2 (ATerm t)
      {
        ATerm h_19 = t;
        if((PushChoice() == 0))
          {
            ATerm l_26 = NULL;
            l_26 = t;
            c_26 :
            if(!(match_string(l_26, "rtree")))
              {
                _fail(t);
              }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = h_19;
          }
        return(t);
      }
      ATerm e_2 (ATerm t)
      {
        ATerm m_26 = NULL;
        m_26 = t;
        if(((k_26 != NULL) && (k_26 != m_26)))
          _fail(m_26);
        else
          k_26 = m_26;
        return(t);
      }
      t = _2(t, d_2, e_2);
      {
        t = Snd_0(t);
        {
          ATerm i_19 = t;
          int o_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_2 (ATerm t)
              {
                t = term_p_19;
                return(t);
              }
              ATerm g_2 (ATerm t)
              {
                ATerm n_26 = NULL,p_26 = NULL,r_26 = NULL;
                ATerm t_19;
                t_19 = t;
                {
                  ATerm o_26 = NULL;
                  t = pass_verbose_0(t);
                  {
                    o_26 = t;
                    if(((n_26 != NULL) && (n_26 != o_26)))
                      _fail(o_26);
                    else
                      n_26 = o_26;
                  }
                }
                t = t_19;
                {
                  ATerm u_19;
                  u_19 = t;
                  {
                    ATerm q_26 = NULL;
                    t = pass_keep_0(t);
                    {
                      q_26 = t;
                      if(((p_26 != NULL) && (p_26 != q_26)))
                        _fail(q_26);
                      else
                        p_26 = q_26;
                    }
                  }
                  t = u_19;
                  {
                    ATerm s_26 = NULL;
                    t = term_v_19;
                    {
                      t = get_config_0(t);
                      {
                        s_26 = t;
                        if(((r_26 != NULL) && (r_26 != s_26)))
                          _fail(s_26);
                        else
                          r_26 = s_26;
                      }
                    }
                    {
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(r_26)), not_null(p_26)), not_null(n_26));
                      t = concat_0(t);
                    }
                  }
                }
                return(t);
              }
              t = xtc_transform_2(t, f_2, g_2);
              t = read_from_0(t);
              LocalPopChoice(o_19);
            }
          else
            {
              t = i_19;
              {
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_26)), term_w_19);
                t = fatal_error_0(t);
              }
            }
        }
      }
      LocalPopChoice(g_19);
    }
  else
    {
      t = f_19;
      {
        ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL;
        t_26 = t;
        i_26 :
        if(match_cons(t_26, sym__2))
          {
            u_26 = ATgetArgument(t_26, 0);
            v_26 = ATgetArgument(t_26, 1);
            j_26 :
            if(match_string(u_26, "rtree"))
              {
                t = Snd_0(t);
                {
                  ATerm x_19 = t;
                  int z_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = read_from_0(t);
                      LocalPopChoice(z_19);
                    }
                  else
                    {
                      t = x_19;
                      {
                        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_26)), term_w_19);
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
ATerm debug_1 (ATerm t, ATerm m_85 (ATerm))
{
  ATerm a_20;
  a_20 = t;
  {
    ATerm q_27 = NULL,s_27 = NULL;
    ATerm b_20;
    b_20 = t;
    {
      ATerm r_27 = NULL;
      t = m_85(t);
      {
        r_27 = t;
        if(((q_27 != NULL) && (q_27 != r_27)))
          _fail(r_27);
        else
          q_27 = r_27;
      }
    }
    t = b_20;
    {
      ATerm t_27 = NULL;
      t_27 = t;
      if(((s_27 != NULL) && (s_27 != t_27)))
        _fail(t_27);
      else
        s_27 = t_27;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_27)), not_null(q_27)));
        t = printnl_0(t);
      }
    }
  }
  t = a_20;
  return(t);
}
ATerm if_verbose3_1 (ATerm t, ATerm w_87 (ATerm))
{
  ATerm e_20 = t;
  int h_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_20;
      i_20 = t;
      {
        ATerm x_27 = NULL;
        ATerm y_27 = NULL;
        t = term_o_8;
        {
          t = get_config_0(t);
          {
            y_27 = t;
            if(((x_27 != NULL) && (x_27 != y_27)))
              _fail(y_27);
            else
              x_27 = y_27;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_27), term_j_20);
          t = geq_0(t);
        }
      }
      t = i_20;
      t = w_87(t);
      LocalPopChoice(h_20);
    }
  else
    {
      t = e_20;
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
    ATerm b_28 = NULL;
    ATerm c_28 = NULL;
    c_28 = t;
    if(((b_28 != NULL) && (b_28 != c_28)))
      _fail(c_28);
    else
      b_28 = c_28;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_20, not_null(b_28));
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
      t = term_g_12;
      t = exit_0(t);
    }
  }
  t = m_20;
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm g_28 = NULL;
  ATerm i_28 = NULL;
  g_28 = t;
  {
    ATerm n_20;
    n_20 = t;
    {
      ATerm j_28 = NULL;
      t = term_q_20;
      {
        j_28 = t;
        if(((i_28 != NULL) && (i_28 != j_28)))
          _fail(j_28);
        else
          i_28 = j_28;
      }
    }
    t = n_20;
    {
      t = SSL_open_file(not_null(g_28), not_null(i_28));
      t = SSL_close_file(not_null(g_28));
    }
  }
  return(t);
}
ATerm find_in_path_0 (ATerm t)
{
  ATerm p_28 = NULL,q_28 = NULL,r_28 = NULL;
  p_28 = t;
  o_28 :
  if(match_cons(p_28, sym__2))
    {
      q_28 = ATgetArgument(p_28, 0);
      r_28 = ATgetArgument(p_28, 1);
      {
        t = not_null(r_28);
        {
          ATerm h_2 (ATerm t)
          {
            ATerm u_28 = NULL;
            ATerm v_28 = NULL;
            v_28 = t;
            if(((u_28 != NULL) && (u_28 != v_28)))
              _fail(v_28);
            else
              u_28 = v_28;
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(q_28)), term_r_20), not_null(u_28));
              {
                t = concat_strings_0(t);
                t = file_exists_0(t);
              }
            }
            return(t);
          }
          t = fetch_elem_1(t, h_2);
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
  ATerm z_28 = NULL;
  z_28 = t;
  t = SSL_implode_string(not_null(z_28));
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm d_29 = NULL;
  d_29 = t;
  t = SSL_explode_string(not_null(d_29));
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
  ATerm i_29 = NULL,k_29 = NULL,l_29 = NULL;
  i_29 = t;
  h_29 :
  if(match_cons(i_29, sym__2))
    {
      k_29 = ATgetArgument(i_29, 0);
      l_29 = ATgetArgument(i_29, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(l_29)), term_s_20), not_null(k_29));
        t = concat_strings_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm r_82 (ATerm), ATerm s_82 (ATerm))
{
  ATerm y_29 = NULL,a_30 = NULL;
  ATerm x_20;
  x_20 = t;
  {
    ATerm z_29 = NULL;
    t = r_82(t);
    {
      z_29 = t;
      if(((y_29 != NULL) && (y_29 != z_29)))
        _fail(z_29);
      else
        y_29 = z_29;
    }
  }
  t = x_20;
  {
    ATerm b_30 = NULL;
    t = s_82(t);
    {
      b_30 = t;
      if(((a_30 != NULL) && (a_30 != b_30)))
        _fail(b_30);
      else
        a_30 = b_30;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_29), not_null(a_30));
  }
  return(t);
}
ATerm guarantee_extension_1 (ATerm t, ATerm a_84 (ATerm))
{
  t = basename_1(t, _id);
  {
    ATerm i_2 (ATerm t)
    {
      t = term_x_8;
      t = a_84(t);
      return(t);
    }
    t = split_2(t, _id, i_2);
    t = add_extension_0(t);
  }
  return(t);
}
ATerm find_file_1 (ATerm t, ATerm j_86 (ATerm))
{
  ATerm j_2 (ATerm t)
  {
    t = guarantee_extension_1(t, j_86);
    return(t);
  }
  t = _2(t, j_2, _id);
  t = find_in_path_0(t);
  return(t);
}
ATerm fetch_elem_1 (ATerm t, ATerm z_74 (ATerm))
{
  ATerm h_30 = NULL;
  ATerm k_2 (ATerm t)
  {
    ATerm i_30 = NULL;
    t = z_74(t);
    {
      i_30 = t;
      if(((h_30 != NULL) && (h_30 != i_30)))
        _fail(i_30);
      else
        h_30 = i_30;
    }
    return(t);
  }
  t = fetch_1(t, k_2);
  t = not_null(h_30);
  return(t);
}
ATerm find_module_1 (ATerm t, ATerm w_66 (ATerm))
{
  ATerm p_30 = NULL,q_30 = NULL,r_30 = NULL;
  p_30 = t;
  o_30 :
  if(match_cons(p_30, sym__2))
    {
      q_30 = ATgetArgument(p_30, 0);
      r_30 = ATgetArgument(p_30, 1);
      {
        t = not_null(r_30);
        {
          ATerm y_20 = t;
          int z_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_2 (ATerm t)
              {
                ATerm u_30 = NULL;
                ATerm w_30 = NULL;
                u_30 = t;
                {
                  ATerm x_30 = NULL,z_30 = NULL;
                  ATerm y_30 = NULL;
                  t = w_66(t);
                  {
                    y_30 = t;
                    if(((x_30 != NULL) && (x_30 != y_30)))
                      _fail(y_30);
                    else
                      x_30 = y_30;
                  }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(q_30), not_null(x_30));
                    {
                      ATerm m_2 (ATerm t)
                      {
                        t = not_null(u_30);
                        return(t);
                      }
                      t = find_file_1(t, m_2);
                      {
                        z_30 = t;
                        if(((w_30 != NULL) && (w_30 != z_30)))
                          _fail(z_30);
                        else
                          w_30 = z_30;
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__2, not_null(u_30), (ATerm) ATmakeAppl(sym_FILE_1, not_null(w_30)));
                }
                return(t);
              }
              t = fetch_elem_1(t, l_2);
              LocalPopChoice(z_20);
            }
          else
            {
              t = y_20;
              {
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_21), not_null(q_30)), term_a_21);
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
ATerm get_module_1 (ATerm t, ATerm v_66 (ATerm))
{
  ATerm j_31 = NULL;
  ATerm l_31 = NULL,m_31 = NULL,n_31 = NULL;
  j_31 = t;
  {
    ATerm o_31 = NULL,p_31 = NULL,q_31 = NULL,r_31 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_31), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_20), term_q_21), term_i_21), term_h_21));
    {
      t = find_module_1(t, v_66);
      {
        o_31 = t;
        h_31 :
        if(match_cons(o_31, sym__2))
          {
            p_31 = ATgetArgument(o_31, 0);
            q_31 = ATgetArgument(o_31, 1);
            i_31 :
            if(match_cons(q_31, sym_FILE_1))
              {
                r_31 = ATgetArgument(q_31, 0);
                {
                  ATerm s_31 = NULL;
                  if(((l_31 != NULL) && (l_31 != p_31)))
                    _fail(p_31);
                  else
                    l_31 = p_31;
                  {
                    if(((m_31 != NULL) && (m_31 != r_31)))
                      _fail(r_31);
                    else
                      m_31 = r_31;
                    {
                      ATerm n_2 (ATerm t)
                      {
                        ATerm r_21;
                        r_21 = t;
                        {
                          t = not_null(m_31);
                          {
                            ATerm o_2 (ATerm t)
                            {
                              t = term_s_21;
                              return(t);
                            }
                            t = debug_1(t, o_2);
                          }
                        }
                        t = r_21;
                        return(t);
                      }
                      t = if_verbose3_1(t, n_2);
                      {
                        t = parse_module_0(t);
                        {
                          s_31 = t;
                          if(((n_31 != NULL) && (n_31 != s_31)))
                            _fail(s_31);
                          else
                            n_31 = s_31;
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_31), not_null(n_31));
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm h_32 = NULL;
  ATerm j_32 = NULL,k_32 = NULL;
  h_32 = t;
  {
    ATerm l_32 = NULL;
    ATerm n_32 = NULL,o_32 = NULL,p_32 = NULL,q_32 = NULL,r_32 = NULL;
    t = not_null(h_32);
    {
      l_32 = t;
      {
        t = SSL_explode_term(not_null(l_32));
        {
          n_32 = t;
          e_32 :
          if(match_cons(n_32, sym__2))
            {
              o_32 = ATgetArgument(n_32, 0);
              p_32 = ATgetArgument(n_32, 1);
              f_32 :
              if(match_string(o_32, ""))
                {
                  g_32 :
                  if(((ATgetType(p_32) == AT_LIST) && !(ATisEmpty(p_32))))
                    {
                      q_32 = ATgetFirst((ATermList) p_32);
                      r_32 = (ATerm) ATgetNext((ATermList) p_32);
                      {
                        if(((k_32 != NULL) && (k_32 != q_32)))
                          _fail(q_32);
                        else
                          k_32 = q_32;
                        if(((j_32 != NULL) && (j_32 != r_32)))
                          _fail(r_32);
                        else
                          j_32 = r_32;
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
    t = not_null(k_32);
  }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm y_32 = NULL,z_32 = NULL,a_33 = NULL,b_33 = NULL,c_33 = NULL,d_33 = NULL,e_33 = NULL,f_33 = NULL;
  y_32 = t;
  w_32 :
  if(match_cons(y_32, sym__5))
    {
      z_32 = ATgetArgument(y_32, 0);
      c_33 = ATgetArgument(y_32, 1);
      d_33 = ATgetArgument(y_32, 2);
      e_33 = ATgetArgument(y_32, 3);
      f_33 = ATgetArgument(y_32, 4);
      x_32 :
      if(((ATgetType(z_32) == AT_LIST) && !(ATisEmpty(z_32))))
        {
          a_33 = ATgetFirst((ATermList) z_32);
          b_33 = (ATerm) ATgetNext((ATermList) z_32);
          t = (ATerm) ATmakeAppl(sym__5, not_null(b_33), not_null(c_33), not_null(d_33), not_null(e_33), (ATerm) ATinsert(CheckATermList(not_null(f_33)), not_null(a_33)));
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
  ATerm p_33 = NULL,q_33 = NULL,r_33 = NULL;
  p_33 = t;
  o_33 :
  if(match_cons(p_33, sym__2))
    {
      q_33 = ATgetArgument(p_33, 0);
      r_33 = ATgetArgument(p_33, 1);
      if(((q_33 != NULL) && (q_33 != r_33)))
        _fail(r_33);
      else
        q_33 = r_33;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm p_80 (ATerm), ATerm q_80 (ATerm))
{
  ATerm x_33 = NULL,y_33 = NULL,z_33 = NULL;
  x_33 = t;
  w_33 :
  if(((ATgetType(x_33) == AT_LIST) && !(ATisEmpty(x_33))))
    {
      y_33 = ATgetFirst((ATermList) x_33);
      z_33 = (ATerm) ATgetNext((ATermList) x_33);
      {
        t = q_80(t);
        {
          ATerm p_2 (ATerm t)
          {
            ATerm c_34 = NULL;
            c_34 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(y_33), not_null(c_34));
              t = p_80(t);
            }
            return(t);
          }
          t = fetch_1(t, p_2);
        }
        t = not_null(z_33);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm h_80 (ATerm))
{
  ATerm i_34 = NULL,j_34 = NULL,k_34 = NULL;
  i_34 = t;
  h_34 :
  if(match_cons(i_34, sym__2))
    {
      j_34 = ATgetArgument(i_34, 0);
      k_34 = ATgetArgument(i_34, 1);
      {
        t = not_null(j_34);
        {
          ATerm o_34 (ATerm t)
          {
            ATerm t_21 = t;
            int v_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(v_21);
              }
            else
              {
                t = t_21;
                {
                  ATerm w_21 = t;
                  int z_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm q_2 (ATerm t)
                      {
                        t = not_null(k_34);
                        return(t);
                      }
                      t = HdMember_p__2(t, h_80, q_2);
                      t = o_34(t);
                      LocalPopChoice(z_21);
                    }
                  else
                    {
                      t = w_21;
                      t = Cons_2(t, _id, o_34);
                    }
                }
              }
            return(t);
          }
          t = o_34(t);
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
  ATerm s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL;
  s_34 = t;
  q_34 :
  if(match_cons(s_34, sym__2))
    {
      t_34 = ATgetArgument(s_34, 0);
      u_34 = ATgetArgument(s_34, 1);
      r_34 :
      if(((ATgetType(u_34) == AT_LIST) && !(ATisEmpty(u_34))))
        {
          v_34 = ATgetFirst((ATermList) u_34);
          w_34 = (ATerm) ATgetNext((ATermList) u_34);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(t_34)), not_null(v_34)), not_null(w_34));
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
  ATerm d_35 = NULL,e_35 = NULL,f_35 = NULL;
  d_35 = t;
  c_35 :
  if(match_cons(d_35, sym__2))
    {
      e_35 = ATgetArgument(d_35, 0);
      f_35 = ATgetArgument(d_35, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(f_35)), not_null(e_35));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm n_35 = NULL,r_35 = NULL,s_35 = NULL,t_35 = NULL,u_35 = NULL,v_35 = NULL,w_35 = NULL;
  n_35 = t;
  k_35 :
  if(match_cons(n_35, sym__2))
    {
      r_35 = ATgetArgument(n_35, 0);
      u_35 = ATgetArgument(n_35, 1);
      l_35 :
      if(((ATgetType(r_35) == AT_LIST) && !(ATisEmpty(r_35))))
        {
          s_35 = ATgetFirst((ATermList) r_35);
          t_35 = (ATerm) ATgetNext((ATermList) r_35);
          m_35 :
          if(((ATgetType(u_35) == AT_LIST) && !(ATisEmpty(u_35))))
            {
              v_35 = ATgetFirst((ATermList) u_35);
              w_35 = (ATerm) ATgetNext((ATermList) u_35);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(s_35), not_null(v_35)), (ATerm) ATmakeAppl(sym__2, not_null(t_35), not_null(w_35)));
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
  ATerm g_36 = NULL,h_36 = NULL,i_36 = NULL;
  g_36 = t;
  d_36 :
  if(match_cons(g_36, sym__2))
    {
      h_36 = ATgetArgument(g_36, 0);
      i_36 = ATgetArgument(g_36, 1);
      e_36 :
      if(((ATgetType(h_36) == AT_LIST) && ATisEmpty(h_36)))
        {
          f_36 :
          if(((ATgetType(i_36) == AT_LIST) && ATisEmpty(i_36)))
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
ATerm genzip_4 (ATerm t, ATerm p_76 (ATerm), ATerm q_76 (ATerm), ATerm r_76 (ATerm), ATerm s_76 (ATerm))
{
  ATerm k_36 (ATerm t)
  {
    ATerm a_22 = t;
    int b_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_76(t);
        LocalPopChoice(b_22);
      }
    else
      {
        t = a_22;
        {
          t = q_76(t);
          {
            t = _2(t, s_76, k_36);
            t = r_76(t);
          }
        }
      }
    return(t);
  }
  t = k_36(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm u_76 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, u_76);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
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
            ATerm g_37 = NULL,h_37 = NULL,n_37 = NULL,t_37 = NULL;
            ATerm c_22;
            c_22 = t;
            {
              ATerm i_37 = NULL;
              ATerm k_37 = NULL,l_37 = NULL,m_37 = NULL;
              t = not_null(b_37);
              {
                i_37 = t;
                {
                  t = SSL_explode_term(not_null(i_37));
                  {
                    k_37 = t;
                    o_36 :
                    if(match_cons(k_37, sym__2))
                      {
                        l_37 = ATgetArgument(k_37, 0);
                        m_37 = ATgetArgument(k_37, 1);
                        {
                          if(((g_37 != NULL) && (g_37 != l_37)))
                            _fail(l_37);
                          else
                            g_37 = l_37;
                          if(((h_37 != NULL) && (h_37 != m_37)))
                            _fail(m_37);
                          else
                            h_37 = m_37;
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
            t = c_22;
            {
              ATerm d_22;
              d_22 = t;
              {
                ATerm o_37 = NULL;
                ATerm q_37 = NULL,r_37 = NULL,s_37 = NULL;
                t = not_null(a_37);
                {
                  o_37 = t;
                  {
                    t = SSL_explode_term(not_null(o_37));
                    {
                      q_37 = t;
                      r_36 :
                      if(match_cons(q_37, sym__2))
                        {
                          r_37 = ATgetArgument(q_37, 0);
                          s_37 = ATgetArgument(q_37, 1);
                          {
                            if(((g_37 != NULL) && (g_37 != r_37)))
                              _fail(r_37);
                            else
                              g_37 = r_37;
                            if(((n_37 != NULL) && (n_37 != s_37)))
                              _fail(s_37);
                            else
                              n_37 = s_37;
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
              t = d_22;
              {
                ATerm u_37 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(n_37), not_null(h_37));
                {
                  t = zip_1(t, _id);
                  {
                    u_37 = t;
                    if(((t_37 != NULL) && (t_37 != u_37)))
                      _fail(u_37);
                    else
                      t_37 = u_37;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(t_37), not_null(c_37));
                  {
                    ATerm e_22 = t;
                    int f_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = conc_two_lists_0(t);
                        LocalPopChoice(f_22);
                      }
                    else
                      {
                        t = e_22;
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
  ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL;
  e_38 = t;
  c_38 :
  if(((ATgetType(e_38) == AT_LIST) && !(ATisEmpty(e_38))))
    {
      f_38 = ATgetFirst((ATermList) e_38);
      i_38 = (ATerm) ATgetNext((ATermList) e_38);
      d_38 :
      if(match_cons(f_38, sym__2))
        {
          g_38 = ATgetArgument(f_38, 0);
          h_38 = ATgetArgument(f_38, 1);
          {
            ATerm k_38 = NULL;
            if(((g_38 != NULL) && (g_38 != h_38)))
              _fail(h_38);
            else
              g_38 = h_38;
            {
              if(((k_38 != NULL) && (k_38 != i_38)))
                _fail(i_38);
              else
                k_38 = i_38;
              t = not_null(k_38);
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
  ATerm g_22 = t;
  int h_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_2 (ATerm t)
      {
        ATerm p_38 = NULL;
        p_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(p_38));
        return(t);
      }
      ATerm s_2 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm t_2 (ATerm t)
      {
        ATerm i_22 = t;
        int j_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_2 (ATerm t)
            {
              ATerm k_22 = t;
              int l_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  LocalPopChoice(l_22);
                }
              else
                {
                  t = k_22;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, u_2);
            LocalPopChoice(j_22);
          }
        else
          {
            t = i_22;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, r_2, s_2, t_2);
      LocalPopChoice(h_22);
    }
  else
    {
      t = g_22;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm GnNext_3 (ATerm t, ATerm u_95 (ATerm), ATerm v_95 (ATerm), ATerm w_95 (ATerm))
{
  ATerm f_39 = NULL,g_39 = NULL,h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL,m_39 = NULL;
  f_39 = t;
  d_39 :
  if(match_cons(f_39, sym__5))
    {
      g_39 = ATgetArgument(f_39, 0);
      j_39 = ATgetArgument(f_39, 1);
      k_39 = ATgetArgument(f_39, 2);
      l_39 = ATgetArgument(f_39, 3);
      m_39 = ATgetArgument(f_39, 4);
      e_39 :
      if(((ATgetType(g_39) == AT_LIST) && !(ATisEmpty(g_39))))
        {
          h_39 = ATgetFirst((ATermList) g_39);
          i_39 = (ATerm) ATgetNext((ATermList) g_39);
          {
            ATerm v_39 = NULL,w_39 = NULL,i_40 = NULL,m_40 = NULL,o_40 = NULL,q_40 = NULL;
            ATerm m_22;
            m_22 = t;
            {
              ATerm j_40 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(h_39), not_null(k_39));
              {
                ATerm k_40 = NULL;
                t = u_95(t);
                {
                  j_40 = t;
                  {
                    if(((v_39 != NULL) && (v_39 != j_40)))
                      _fail(j_40);
                    else
                      v_39 = j_40;
                    {
                      t = not_null(v_39);
                      {
                        ATerm l_40 = NULL;
                        t = v_95(t);
                        {
                          k_40 = t;
                          {
                            if(((w_39 != NULL) && (w_39 != k_40)))
                              _fail(k_40);
                            else
                              w_39 = k_40;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, not_null(w_39), not_null(j_39));
                              {
                                t = diff_0(t);
                                {
                                  l_40 = t;
                                  if(((i_40 != NULL) && (i_40 != l_40)))
                                    _fail(l_40);
                                  else
                                    i_40 = l_40;
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
            t = m_22;
            {
              ATerm n_22;
              n_22 = t;
              {
                ATerm n_40 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(i_40), not_null(i_39));
                {
                  ATerm o_22 = t;
                  int p_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = conc_two_lists_0(t);
                      LocalPopChoice(p_22);
                    }
                  else
                    {
                      t = o_22;
                      t = conc_more_lists_0(t);
                    }
                  {
                    n_40 = t;
                    if(((m_40 != NULL) && (m_40 != n_40)))
                      _fail(n_40);
                    else
                      m_40 = n_40;
                  }
                }
              }
              t = n_22;
              {
                ATerm q_22;
                q_22 = t;
                {
                  ATerm p_40 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(i_40), not_null(j_39));
                  {
                    ATerm r_22 = t;
                    int s_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = conc_two_lists_0(t);
                        LocalPopChoice(s_22);
                      }
                    else
                      {
                        t = r_22;
                        t = conc_more_lists_0(t);
                      }
                    {
                      p_40 = t;
                      if(((o_40 != NULL) && (o_40 != p_40)))
                        _fail(p_40);
                      else
                        o_40 = p_40;
                    }
                  }
                }
                t = q_22;
                {
                  ATerm r_40 = NULL;
                  t = (ATerm) ATmakeAppl(sym__3, not_null(h_39), not_null(v_39), not_null(l_39));
                  {
                    t = w_95(t);
                    {
                      r_40 = t;
                      if(((q_40 != NULL) && (q_40 != r_40)))
                        _fail(r_40);
                      else
                        q_40 = r_40;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__5, not_null(m_40), not_null(o_40), not_null(k_39), not_null(q_40), not_null(m_39));
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
  ATerm i_41 = NULL,o_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL;
  i_41 = t;
  g_41 :
  if(match_cons(i_41, sym__5))
    {
      o_41 = ATgetArgument(i_41, 0);
      q_41 = ATgetArgument(i_41, 1);
      r_41 = ATgetArgument(i_41, 2);
      s_41 = ATgetArgument(i_41, 3);
      t_41 = ATgetArgument(i_41, 4);
      h_41 :
      if(((ATgetType(o_41) == AT_LIST) && ATisEmpty(o_41)))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_41), not_null(t_41));
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
  ATerm b_42 = NULL,c_42 = NULL,d_42 = NULL,e_42 = NULL;
  b_42 = t;
  a_42 :
  if(match_cons(b_42, sym__3))
    {
      c_42 = ATgetArgument(b_42, 0);
      d_42 = ATgetArgument(b_42, 1);
      e_42 = ATgetArgument(b_42, 2);
      t = (ATerm) ATmakeAppl(sym__5, not_null(c_42), not_null(c_42), not_null(d_42), not_null(e_42), (ATerm) ATempty);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm c_68 (ATerm), ATerm d_68 (ATerm))
{
  ATerm j_42 (ATerm t)
  {
    ATerm t_22 = t;
    int a_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_68(t);
        LocalPopChoice(a_23);
      }
    else
      {
        t = t_22;
        {
          t = d_68(t);
          t = j_42(t);
        }
      }
    return(t);
  }
  t = j_42(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm f_68 (ATerm), ATerm g_68 (ATerm), ATerm h_68 (ATerm))
{
  t = f_68(t);
  t = while_not_2(t, g_68, h_68);
  return(t);
}
ATerm graph_nodes_undef_roots_3 (ATerm t, ATerm c_95 (ATerm), ATerm d_95 (ATerm), ATerm e_95 (ATerm))
{
  ATerm v_2 (ATerm t)
  {
    ATerm b_23 = t;
    int c_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3(t, c_95, d_95, e_95);
        LocalPopChoice(c_23);
      }
    else
      {
        t = b_23;
        t = GnUndefined_0(t);
      }
    return(t);
  }
  t = for_3(t, GnInitRoots_0, GnExit_0, v_2);
  return(t);
}
ATerm graph_nodes_roots_3 (ATerm t, ATerm r_95 (ATerm), ATerm s_95 (ATerm), ATerm t_95 (ATerm))
{
  ATerm m_42 = NULL,n_42 = NULL,o_42 = NULL;
  t = graph_nodes_undef_roots_3(t, r_95, s_95, t_95);
  {
    m_42 = t;
    l_42 :
    if(match_cons(m_42, sym__2))
      {
        n_42 = ATgetArgument(m_42, 0);
        o_42 = ATgetArgument(m_42, 1);
        t = not_null(n_42);
      }
    else
      {
        _fail(t);
      }
  }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm f_82 (ATerm))
{
  ATerm d_23 = t;
  int g_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(g_23);
    }
  else
    {
      t = d_23;
      {
        ATerm h_23 = t;
        int i_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_2 (ATerm t)
            {
              t = filter_1(t, f_82);
              return(t);
            }
            t = Cons_2(t, f_82, w_2);
            LocalPopChoice(i_23);
          }
        else
          {
            t = h_23;
            {
              ATerm u_42 = NULL,v_42 = NULL,w_42 = NULL;
              u_42 = t;
              t_42 :
              if(((ATgetType(u_42) == AT_LIST) && !(ATisEmpty(u_42))))
                {
                  v_42 = ATgetFirst((ATermList) u_42);
                  w_42 = (ATerm) ATgetNext((ATermList) u_42);
                  {
                    t = not_null(w_42);
                    t = filter_1(t, f_82);
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
  ATerm f_43 = NULL,g_43 = NULL;
  f_43 = t;
  e_43 :
  if(match_cons(f_43, sym_FILE_1))
    {
      g_43 = ATgetArgument(f_43, 0);
      {
        ATerm i_43 = NULL;
        ATerm k_43 = NULL;
        ATerm k_23 = t;
        int l_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_v_19;
            {
              t = get_config_0(t);
              {
                ATerm x_2 (ATerm t)
                {
                  ATerm m_23 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm j_43 = NULL;
                      j_43 = t;
                      a_43 :
                      if(!(match_string(j_43, "-I")))
                        {
                          _fail(t);
                        }
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = m_23;
                    }
                  return(t);
                }
                t = filter_1(t, x_2);
              }
            }
            LocalPopChoice(l_23);
          }
        else
          {
            t = k_23;
            t = (ATerm) ATempty;
          }
        {
          k_43 = t;
          if(((i_43 != NULL) && (i_43 != k_43)))
            _fail(k_43);
          else
            i_43 = k_43;
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, not_null(g_43)), term_o_23), term_n_23), term_x_8, (ATerm) ATempty);
          {
            ATerm y_2 (ATerm t)
            {
              t = Fst_0(t);
              {
                ATerm a_3 (ATerm t)
                {
                  t = (ATerm) ATinsert(CheckATermList(not_null(i_43)), term_s_20);
                  return(t);
                }
                t = get_module_1(t, a_3);
              }
              return(t);
            }
            ATerm z_2 (ATerm t)
            {
              ATerm l_43 = NULL,m_43 = NULL,n_43 = NULL,q_43 = NULL;
              l_43 = t;
              d_43 :
              if(match_cons(l_43, sym__3))
                {
                  m_43 = ATgetArgument(l_43, 0);
                  n_43 = ATgetArgument(l_43, 1);
                  q_43 = ATgetArgument(l_43, 2);
                  t = (ATerm) ATinsert(CheckATermList(not_null(q_43)), not_null(n_43));
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = graph_nodes_roots_3(t, y_2, get_stratego_imports_0, z_2);
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
  ATerm p_23 = t;
  int q_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(q_23);
    }
  else
    {
      t = p_23;
      {
        ATerm c_44 = NULL,d_44 = NULL,e_44 = NULL;
        c_44 = t;
        b_44 :
        if(((ATgetType(c_44) == AT_LIST) && !(ATisEmpty(c_44))))
          {
            d_44 = ATgetFirst((ATermList) c_44);
            e_44 = (ATerm) ATgetNext((ATermList) c_44);
            {
              t = not_null(d_44);
              {
                ATerm b_3 (ATerm t)
                {
                  t = not_null(e_44);
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
  ATerm v_44 = NULL;
  ATerm x_44 = NULL;
  v_44 = t;
  {
    ATerm y_44 = NULL;
    ATerm a_45 = NULL,f_45 = NULL,g_45 = NULL;
    t = not_null(v_44);
    {
      y_44 = t;
      {
        t = SSL_explode_term(not_null(y_44));
        {
          a_45 = t;
          t_44 :
          if(match_cons(a_45, sym__2))
            {
              f_45 = ATgetArgument(a_45, 0);
              g_45 = ATgetArgument(a_45, 1);
              u_44 :
              if(match_string(f_45, ""))
                {
                  if(((x_44 != NULL) && (x_44 != g_45)))
                    _fail(g_45);
                  else
                    x_44 = g_45;
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
      t = not_null(x_44);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm d_75 (ATerm))
{
  ATerm k_45 (ATerm t)
  {
    ATerm r_23 = t;
    int w_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, k_45);
        LocalPopChoice(w_23);
      }
    else
      {
        t = r_23;
        {
          t = Nil_0(t);
          t = d_75(t);
        }
      }
    return(t);
  }
  t = k_45(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm n_45 = NULL,o_45 = NULL,p_45 = NULL;
  n_45 = t;
  m_45 :
  if(match_cons(n_45, sym__2))
    {
      o_45 = ATgetArgument(n_45, 0);
      p_45 = ATgetArgument(n_45, 1);
      {
        t = not_null(o_45);
        {
          ATerm c_3 (ATerm t)
          {
            t = not_null(p_45);
            return(t);
          }
          t = at_end_1(t, c_3);
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
  ATerm x_23 = t;
  int a_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(a_24);
    }
  else
    {
      t = x_23;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm extend_config_0 (ATerm t)
{
  ATerm x_45 = NULL,z_45 = NULL,a_46 = NULL;
  x_45 = t;
  w_45 :
  if(match_cons(x_45, sym__2))
    {
      z_45 = ATgetArgument(x_45, 0);
      a_46 = ATgetArgument(x_45, 1);
      {
        ATerm i_46 = NULL;
        ATerm j_46 = NULL,l_46 = NULL;
        ATerm k_46 = NULL;
        t = not_null(z_45);
        {
          ATerm b_24 = t;
          int c_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(c_24);
            }
          else
            {
              t = b_24;
              t = (ATerm) ATempty;
            }
          {
            k_46 = t;
            if(((j_46 != NULL) && (j_46 != k_46)))
              _fail(k_46);
            else
              j_46 = k_46;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_46), not_null(j_46));
          {
            ATerm d_24 = t;
            int e_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(e_24);
              }
            else
              {
                t = d_24;
                t = conc_more_lists_0(t);
              }
            {
              l_46 = t;
              if(((i_46 != NULL) && (i_46 != l_46)))
                _fail(l_46);
              else
                i_46 = l_46;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_p_11, not_null(z_45), not_null(i_46));
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
  ATerm g_24 = t;
  int l_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_3 (ATerm t)
      {
        ATerm x_46 = NULL;
        x_46 = t;
        r_46 :
        if(!(match_string(x_46, "-I")))
          {
            if(!(match_string(x_46, "--Include")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm g_3 (ATerm t)
      {
        ATerm d_47 = NULL;
        ATerm e_47 = NULL;
        e_47 = t;
        if(((d_47 != NULL) && (d_47 != e_47)))
          _fail(e_47);
        else
          d_47 = e_47;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_v_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_47)), term_v_19));
          t = extend_config_0(t);
        }
        t = term_x_8;
        return(t);
      }
      ATerm i_3 (ATerm t)
      {
        t = term_m_24;
        return(t);
      }
      t = ArgOption_3(t, e_3, g_3, i_3);
      LocalPopChoice(l_24);
    }
  else
    {
      t = g_24;
      {
        ATerm n_24 = t;
        int o_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_3 (ATerm t)
            {
              ATerm f_47 = NULL;
              f_47 = t;
              t_46 :
              if(!(match_string(f_47, "--nodep")))
                {
                  if(!(match_string(f_47, "-nodep")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm k_3 (ATerm t)
            {
              t = term_q_24;
              t = set_config_0(t);
              t = term_x_8;
              return(t);
            }
            ATerm l_3 (ATerm t)
            {
              t = term_r_24;
              return(t);
            }
            t = Option_3(t, j_3, k_3, l_3);
            LocalPopChoice(o_24);
          }
        else
          {
            t = n_24;
            {
              ATerm s_24 = t;
              int t_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_3 (ATerm t)
                  {
                    ATerm g_47 = NULL;
                    g_47 = t;
                    u_46 :
                    if(!(match_string(g_47, "--dep")))
                      {
                        if(!(match_string(g_47, "-d")))
                          {
                            if(!(match_string(g_47, "-dep")))
                              {
                                _fail(t);
                              }
                          }
                      }
                    return(t);
                  }
                  ATerm r_3 (ATerm t)
                  {
                    ATerm h_47 = NULL;
                    ATerm i_47 = NULL;
                    i_47 = t;
                    if(((h_47 != NULL) && (h_47 != i_47)))
                      _fail(i_47);
                    else
                      h_47 = i_47;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_d_9, not_null(h_47));
                      t = set_config_0(t);
                    }
                    t = term_x_8;
                    return(t);
                  }
                  ATerm s_3 (ATerm t)
                  {
                    t = term_u_24;
                    return(t);
                  }
                  t = ArgOption_3(t, m_3, r_3, s_3);
                  LocalPopChoice(t_24);
                }
              else
                {
                  t = s_24;
                  {
                    ATerm v_3 (ATerm t)
                    {
                      ATerm j_47 = NULL;
                      j_47 = t;
                      w_46 :
                      if(!(match_string(j_47, "--imports")))
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    ATerm x_3 (ATerm t)
                    {
                      t = term_w_24;
                      t = set_config_0(t);
                      t = term_x_8;
                      return(t);
                    }
                    ATerm y_3 (ATerm t)
                    {
                      t = term_x_24;
                      return(t);
                    }
                    t = Option_3(t, v_3, x_3, y_3);
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
  ATerm o_47 = NULL,p_47 = NULL,q_47 = NULL;
  o_47 = t;
  n_47 :
  if(match_cons(o_47, sym__2))
    {
      p_47 = ATgetArgument(o_47, 0);
      q_47 = ATgetArgument(o_47, 1);
      t = SSL_copy(not_null(p_47), not_null(q_47));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm h_48 = NULL;
  h_48 = t;
  g_48 :
  if(match_cons(h_48, sym_stderr_0))
    {
      ATerm q_48 = NULL,t_48 = NULL;
      ATerm y_24;
      y_24 = t;
      {
        ATerm s_48 = NULL;
        t = SSLgetAnnotations(not_null(h_48));
        {
          s_48 = t;
          if(((q_48 != NULL) && (q_48 != s_48)))
            _fail(s_48);
          else
            q_48 = s_48;
        }
      }
      t = y_24;
      {
        ATerm u_48 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(q_48));
        {
          u_48 = t;
          if(((t_48 != NULL) && (t_48 != u_48)))
            _fail(u_48);
          else
            t_48 = u_48;
        }
        t = not_null(t_48);
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
  ATerm c_49 = NULL;
  c_49 = t;
  b_49 :
  if(match_cons(c_49, sym_stdout_0))
    {
      ATerm e_49 = NULL,g_49 = NULL;
      ATerm b_25;
      b_25 = t;
      {
        ATerm f_49 = NULL;
        t = SSLgetAnnotations(not_null(c_49));
        {
          f_49 = t;
          if(((e_49 != NULL) && (e_49 != f_49)))
            _fail(f_49);
          else
            e_49 = f_49;
        }
      }
      t = b_25;
      {
        ATerm h_49 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(e_49));
        {
          h_49 = t;
          if(((g_49 != NULL) && (g_49 != h_49)))
            _fail(h_49);
          else
            g_49 = h_49;
        }
        t = not_null(g_49);
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
  ATerm q_49 = NULL,r_49 = NULL;
  q_49 = t;
  p_49 :
  if(match_cons(q_49, sym_FILE_1))
    {
      r_49 = ATgetArgument(q_49, 0);
      {
        ATerm g_25 = t;
        int h_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_49 = NULL;
            ATerm u_49 = NULL;
            t = m_0(t);
            {
              u_49 = t;
              {
                if(((t_49 != NULL) && (t_49 != u_49)))
                  _fail(u_49);
                else
                  t_49 = u_49;
                {
                  ATerm i_25 = t;
                  int j_25 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(j_25);
                    }
                  else
                    {
                      t = i_25;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(r_49), not_null(t_49));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(r_49));
            LocalPopChoice(h_25);
          }
        else
          {
            t = g_25;
            {
              ATerm w_49 = NULL;
              ATerm x_49 = NULL;
              t = m_0(t);
              {
                x_49 = t;
                {
                  if(((w_49 != NULL) && (w_49 != x_49)))
                    _fail(x_49);
                  else
                    w_49 = x_49;
                  {
                    ATerm k_25 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm l_25 = t;
                        int m_25 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = stdout_0(t);
                            LocalPopChoice(m_25);
                          }
                        else
                          {
                            t = l_25;
                            t = stderr_0(t);
                          }
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = k_25;
                      }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(r_49), not_null(w_49));
                      t = copy_file_0(t);
                    }
                  }
                }
              }
              t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(r_49));
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
  ATerm e_50 = NULL,f_50 = NULL,g_50 = NULL;
  e_50 = t;
  d_50 :
  if(((ATgetType(e_50) == AT_LIST) && !(ATisEmpty(e_50))))
    {
      f_50 = ATgetFirst((ATermList) e_50);
      g_50 = (ATerm) ATgetNext((ATermList) e_50);
      t = not_null(g_50);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm m_50 = NULL,n_50 = NULL,o_50 = NULL;
  m_50 = t;
  l_50 :
  if(match_cons(m_50, sym__2))
    {
      n_50 = ATgetArgument(m_50, 0);
      o_50 = ATgetArgument(m_50, 1);
      {
        ATerm q_25;
        q_25 = t;
        {
          ATerm r_50 = NULL;
          ATerm s_50 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_50), not_null(o_50));
          {
            ATerm r_25 = t;
            int v_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(v_25);
              }
            else
              {
                t = r_25;
                t = (ATerm) ATempty;
              }
            {
              s_50 = t;
              if(((r_50 != NULL) && (r_50 != s_50)))
                _fail(s_50);
              else
                r_50 = s_50;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(n_50), not_null(o_50), not_null(r_50));
            t = table_put_0(t);
          }
        }
        t = q_25;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm c_85 (ATerm))
{
  ATerm j_51 = NULL,k_51 = NULL,l_51 = NULL;
  ATerm y_25;
  y_25 = t;
  {
    ATerm m_51 = NULL;
    ATerm o_51 = NULL,p_51 = NULL,q_51 = NULL;
    t = c_85(t);
    {
      m_51 = t;
      {
        if(((l_51 != NULL) && (l_51 != m_51)))
          _fail(m_51);
        else
          l_51 = m_51;
        {
          ATerm z_25 = t;
          int a_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(l_51), term_z_16);
              t = table_get_0(t);
              LocalPopChoice(a_26);
            }
          else
            {
              t = z_25;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            o_51 = t;
            y_50 :
            if(((ATgetType(o_51) == AT_LIST) && !(ATisEmpty(o_51))))
              {
                p_51 = ATgetFirst((ATermList) o_51);
                q_51 = (ATerm) ATgetNext((ATermList) o_51);
                {
                  if(((k_51 != NULL) && (k_51 != p_51)))
                    _fail(p_51);
                  else
                    k_51 = p_51;
                  {
                    if(((j_51 != NULL) && (j_51 != q_51)))
                      _fail(q_51);
                    else
                      j_51 = q_51;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(l_51), term_z_16, not_null(j_51));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(k_51);
                          {
                            ATerm b_4 (ATerm t)
                            {
                              ATerm d_52 = NULL;
                              d_52 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(l_51), not_null(d_52));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, b_4);
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
  t = y_25;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm v_52 = NULL;
  v_52 = t;
  t = SSL_remove(not_null(v_52));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm h_67 (ATerm), ATerm i_67 (ATerm))
{
  ATerm b_26 = t;
  int d_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_67(t);
      t = i_67(t);
      LocalPopChoice(d_26);
    }
  else
    {
      t = b_26;
      {
        t = i_67(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm b_85 (ATerm))
{
  ATerm a_53 = NULL;
  ATerm e_26;
  e_26 = t;
  {
    ATerm d_53 = NULL;
    ATerm e_53 = NULL;
    t = b_85(t);
    {
      d_53 = t;
      {
        if(((a_53 != NULL) && (a_53 != d_53)))
          _fail(d_53);
        else
          a_53 = d_53;
        {
          ATerm f_53 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_53), term_z_16);
          {
            ATerm f_26 = t;
            int g_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(g_26);
              }
            else
              {
                t = f_26;
                t = (ATerm) ATempty;
              }
            {
              f_53 = t;
              if(((e_53 != NULL) && (e_53 != f_53)))
                _fail(f_53);
              else
                e_53 = f_53;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(a_53), term_z_16, (ATerm) ATinsert(CheckATermList(not_null(e_53)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = e_26;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm d_94 (ATerm))
{
  ATerm w_53 = NULL,x_53 = NULL;
  ATerm c_4 (ATerm t)
  {
    t = term_g_18;
    return(t);
  }
  t = begin_scope_1(t, c_4);
  {
    ATerm d_4 (ATerm t)
    {
      ATerm h_26;
      h_26 = t;
      {
        ATerm y_53 = NULL,z_53 = NULL,a_54 = NULL;
        ATerm w_26 = t;
        int x_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_y_26;
            t = table_get_0(t);
            LocalPopChoice(x_26);
          }
        else
          {
            t = w_26;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          y_53 = t;
          v_53 :
          if(((ATgetType(y_53) == AT_LIST) && !(ATisEmpty(y_53))))
            {
              z_53 = ATgetFirst((ATermList) y_53);
              a_54 = (ATerm) ATgetNext((ATermList) y_53);
              {
                if(((x_53 != NULL) && (x_53 != z_53)))
                  _fail(z_53);
                else
                  x_53 = z_53;
                {
                  if(((w_53 != NULL) && (w_53 != a_54)))
                    _fail(a_54);
                  else
                    w_53 = a_54;
                  {
                    t = not_null(x_53);
                    {
                      ATerm i_4 (ATerm t)
                      {
                        ATerm z_26 = t;
                        int a_27 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = remove_file_0(t);
                            LocalPopChoice(a_27);
                          }
                        else
                          {
                            t = z_26;
                            {
                            }
                          }
                        return(t);
                      }
                      t = map_1(t, i_4);
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
      t = h_26;
      {
        ATerm j_4 (ATerm t)
        {
          t = term_g_18;
          return(t);
        }
        t = end_scope_1(t, j_4);
      }
      return(t);
    }
    t = restore_always_2(t, d_94, d_4);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm e_94 (ATerm))
{
  ATerm k_4 (ATerm t)
  {
    ATerm b_27 = t;
    int c_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_54 = NULL;
        ATerm q_54 = NULL;
        t = term_n_18;
        {
          t = get_config_0(t);
          {
            q_54 = t;
            if(((n_54 != NULL) && (n_54 != q_54)))
              _fail(q_54);
            else
              n_54 = q_54;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(n_54));
        LocalPopChoice(c_27);
      }
    else
      {
        t = b_27;
        t = term_v_11;
      }
    {
      t = e_94(t);
      {
        ATerm l_4 (ATerm t)
        {
          ATerm d_27 = t;
          int e_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_a_9;
              t = get_config_0(t);
              LocalPopChoice(e_27);
            }
          else
            {
              t = d_27;
              t = term_f_27;
            }
          return(t);
        }
        t = copy_to_1(t, l_4);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, k_4);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm m_4 (ATerm t)
  {
    ATerm v_54 = NULL;
    v_54 = t;
    s_54 :
    if(!(match_string(v_54, "-v")))
      {
        if(!(match_string(v_54, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm n_4 (ATerm t)
  {
    t = term_h_27;
    t = set_config_0(t);
    t = term_i_27;
    return(t);
  }
  ATerm o_4 (ATerm t)
  {
    t = term_j_27;
    return(t);
  }
  t = Option_3(t, m_4, n_4, o_4);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm p_4 (ATerm t)
  {
    ATerm f_55 = NULL;
    f_55 = t;
    w_54 :
    if(!(match_string(f_55, "-k")))
      {
        if(!(match_string(f_55, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm q_4 (ATerm t)
  {
    ATerm k_27;
    k_27 = t;
    {
      ATerm g_55 = NULL;
      ATerm h_55 = NULL;
      t = string_to_int_0(t);
      {
        h_55 = t;
        if(((g_55 != NULL) && (g_55 != h_55)))
          _fail(h_55);
        else
          g_55 = h_55;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_12, not_null(g_55));
        t = set_config_0(t);
      }
    }
    t = k_27;
    return(t);
  }
  ATerm s_4 (ATerm t)
  {
    t = term_l_27;
    return(t);
  }
  t = ArgOption_3(t, p_4, q_4, s_4);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm k_55 = NULL;
  k_55 = t;
  t = SSL_string_to_int(not_null(k_55));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm m_27 = t;
  int n_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_5 (ATerm t)
      {
        ATerm s_55 = NULL;
        s_55 = t;
        n_55 :
        if(!(match_string(s_55, "-S")))
          {
            if(!(match_string(s_55, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm g_5 (ATerm t)
      {
        t = term_p_27;
        t = set_config_0(t);
        t = term_u_27;
        return(t);
      }
      ATerm h_5 (ATerm t)
      {
        t = term_v_27;
        return(t);
      }
      t = Option_3(t, f_5, g_5, h_5);
      LocalPopChoice(n_27);
    }
  else
    {
      t = m_27;
      {
        ATerm w_27 = t;
        int z_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_5 (ATerm t)
            {
              ATerm t_55 = NULL;
              t_55 = t;
              o_55 :
              if(!(match_string(t_55, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm j_5 (ATerm t)
            {
              ATerm w_55 = NULL;
              ATerm a_28;
              a_28 = t;
              {
                ATerm u_55 = NULL;
                ATerm v_55 = NULL;
                t = string_to_int_0(t);
                {
                  v_55 = t;
                  if(((u_55 != NULL) && (u_55 != v_55)))
                    _fail(v_55);
                  else
                    u_55 = v_55;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_o_8, not_null(u_55));
                  t = set_config_0(t);
                }
              }
              t = a_28;
              {
                ATerm x_55 = NULL;
                x_55 = t;
                if(((w_55 != NULL) && (w_55 != x_55)))
                  _fail(x_55);
                else
                  w_55 = x_55;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(w_55));
              }
              return(t);
            }
            ATerm k_5 (ATerm t)
            {
              t = term_d_28;
              return(t);
            }
            t = ArgOption_3(t, i_5, j_5, k_5);
            LocalPopChoice(z_27);
          }
        else
          {
            t = w_27;
            {
              ATerm l_5 (ATerm t)
              {
                ATerm y_55 = NULL;
                y_55 = t;
                r_55 :
                if(!(match_string(y_55, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm m_5 (ATerm t)
              {
                t = term_f_28;
                t = set_config_0(t);
                t = term_h_28;
                return(t);
              }
              ATerm r_5 (ATerm t)
              {
                t = term_k_28;
                return(t);
              }
              t = Option_3(t, l_5, m_5, r_5);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm l_28 = t;
  int m_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(m_28);
    }
  else
    {
      t = l_28;
      {
        ATerm n_28 = t;
        int s_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(s_28);
          }
        else
          {
            t = n_28;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm s_5 (ATerm t)
  {
    ATerm e_56 = NULL;
    e_56 = t;
    b_56 :
    if(!(match_string(e_56, "-o")))
      {
        if(!(match_string(e_56, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm t_5 (ATerm t)
  {
    ATerm h_56 = NULL;
    ATerm t_28;
    t_28 = t;
    {
      ATerm f_56 = NULL;
      ATerm g_56 = NULL;
      g_56 = t;
      if(((f_56 != NULL) && (f_56 != g_56)))
        _fail(g_56);
      else
        f_56 = g_56;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_9, not_null(f_56));
        t = set_config_0(t);
      }
    }
    t = t_28;
    {
      ATerm i_56 = NULL;
      i_56 = t;
      if(((h_56 != NULL) && (h_56 != i_56)))
        _fail(i_56);
      else
        h_56 = i_56;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(h_56));
    }
    return(t);
  }
  ATerm u_5 (ATerm t)
  {
    t = term_w_28;
    return(t);
  }
  t = ArgOption_3(t, s_5, t_5, u_5);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm x_28 = t;
  int y_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(y_28);
    }
  else
    {
      t = x_28;
      {
        ATerm v_5 (ATerm t)
        {
          ATerm o_56 = NULL;
          o_56 = t;
          l_56 :
          if(!(match_string(o_56, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm x_5 (ATerm t)
        {
          t = term_b_29;
          t = set_config_0(t);
          t = term_c_29;
          return(t);
        }
        ATerm a_6 (ATerm t)
        {
          t = term_e_29;
          return(t);
        }
        t = Option_3(t, v_5, x_5, a_6);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm u_56 = NULL,v_56 = NULL,w_56 = NULL,x_56 = NULL,y_56 = NULL;
  u_56 = t;
  s_56 :
  if(match_string(u_56, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(u_56) == AT_LIST) && !(ATisEmpty(u_56))))
        {
          v_56 = ATgetFirst((ATermList) u_56);
          w_56 = (ATerm) ATgetNext((ATermList) u_56);
          t_56 :
          if(((ATgetType(w_56) == AT_LIST) && !(ATisEmpty(w_56))))
            {
              x_56 = ATgetFirst((ATermList) w_56);
              y_56 = (ATerm) ATgetNext((ATermList) w_56);
              {
                ATerm c_57 = NULL;
                ATerm f_29;
                f_29 = t;
                {
                  t = not_null(v_56);
                  t = j_0(t);
                }
                t = f_29;
                {
                  ATerm d_57 = NULL;
                  t = not_null(x_56);
                  {
                    t = k_0(t);
                    {
                      d_57 = t;
                      if(((c_57 != NULL) && (c_57 != d_57)))
                        _fail(d_57);
                      else
                        c_57 = d_57;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(y_56)), not_null(c_57));
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
  ATerm b_6 (ATerm t)
  {
    ATerm k_57 = NULL;
    k_57 = t;
    h_57 :
    if(!(match_string(k_57, "-i")))
      {
        if(!(match_string(k_57, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm i_6 (ATerm t)
  {
    ATerm n_57 = NULL;
    ATerm g_29;
    g_29 = t;
    {
      ATerm l_57 = NULL;
      ATerm m_57 = NULL;
      m_57 = t;
      if(((l_57 != NULL) && (l_57 != m_57)))
        _fail(m_57);
      else
        l_57 = m_57;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_18, not_null(l_57));
        t = set_config_0(t);
      }
    }
    t = g_29;
    {
      ATerm o_57 = NULL;
      o_57 = t;
      if(((n_57 != NULL) && (n_57 != o_57)))
        _fail(o_57);
      else
        n_57 = o_57;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(n_57));
    }
    return(t);
  }
  ATerm p_6 (ATerm t)
  {
    t = term_j_29;
    return(t);
  }
  t = ArgOption_3(t, b_6, i_6, p_6);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm m_29 = t;
  int n_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
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
            t = aterm_output_option_0(t);
            LocalPopChoice(p_29);
          }
        else
          {
            t = o_29;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm t_57 = NULL;
  ATerm q_29;
  q_29 = t;
  {
    ATerm r_6 (ATerm t)
    {
      ATerm u_57 = NULL,v_57 = NULL;
      u_57 = t;
      s_57 :
      if(match_cons(u_57, sym_Program_1))
        {
          v_57 = ATgetArgument(u_57, 0);
          if(((t_57 != NULL) && (t_57 != v_57)))
            _fail(v_57);
          else
            t_57 = v_57;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, r_6);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_20, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_29), not_null(t_57)), term_r_29));
      {
        t = printnl_0(t);
        {
          t = term_g_12;
          t = exit_0(t);
        }
      }
    }
  }
  t = q_29;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_c_20, (ATerm) ATinsert(ATempty, term_t_29));
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
  ATerm y_57 = NULL;
  y_57 = t;
  t = SSL_TicksToSeconds(not_null(y_57));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm d_58 = NULL,e_58 = NULL,f_58 = NULL;
  d_58 = t;
  c_58 :
  if(match_cons(d_58, sym__2))
    {
      e_58 = ATgetArgument(d_58, 0);
      f_58 = ATgetArgument(d_58, 1);
      {
        ATerm u_29 = t;
        int v_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(e_58), not_null(f_58));
            LocalPopChoice(v_29);
          }
        else
          {
            t = u_29;
            t = SSL_addr(not_null(e_58), not_null(f_58));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm c_81 (ATerm), ATerm d_81 (ATerm))
{
  ATerm w_29 = t;
  int x_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = c_81(t);
      LocalPopChoice(x_29);
    }
  else
    {
      t = w_29;
      {
        ATerm m_58 = NULL,n_58 = NULL,o_58 = NULL;
        m_58 = t;
        l_58 :
        if(((ATgetType(m_58) == AT_LIST) && !(ATisEmpty(m_58))))
          {
            n_58 = ATgetFirst((ATermList) m_58);
            o_58 = (ATerm) ATgetNext((ATermList) m_58);
            {
              ATerm r_58 = NULL;
              ATerm s_58 = NULL;
              t = not_null(o_58);
              {
                t = foldr_2(t, c_81, d_81);
                {
                  s_58 = t;
                  if(((r_58 != NULL) && (r_58 != s_58)))
                    _fail(s_58);
                  else
                    r_58 = s_58;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(n_58), not_null(r_58));
                t = d_81(t);
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
ATerm crush_2 (ATerm t, ATerm a_80 (ATerm), ATerm b_80 (ATerm))
{
  ATerm z_58 = NULL;
  ATerm b_59 = NULL;
  z_58 = t;
  {
    ATerm c_59 = NULL;
    ATerm e_59 = NULL,f_59 = NULL,g_59 = NULL;
    t = not_null(z_58);
    {
      c_59 = t;
      {
        t = SSL_explode_term(not_null(c_59));
        {
          e_59 = t;
          y_58 :
          if(match_cons(e_59, sym__2))
            {
              f_59 = ATgetArgument(e_59, 0);
              g_59 = ATgetArgument(e_59, 1);
              if(((b_59 != NULL) && (b_59 != g_59)))
                _fail(g_59);
              else
                b_59 = g_59;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(b_59);
      t = foldr_2(t, a_80, b_80);
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
    ATerm t_6 (ATerm t)
    {
      t = term_o_27;
      return(t);
    }
    t = crush_2(t, t_6, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm m_59 = NULL,n_59 = NULL,o_59 = NULL;
  m_59 = t;
  l_59 :
  if(match_cons(m_59, sym__2))
    {
      n_59 = ATgetArgument(m_59, 0);
      o_59 = ATgetArgument(m_59, 1);
      {
        ATerm c_30;
        c_30 = t;
        {
          ATerm d_30 = t;
          int e_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(n_59), not_null(o_59));
              LocalPopChoice(e_30);
            }
          else
            {
              t = d_30;
              t = SSL_gtr(not_null(n_59), not_null(o_59));
            }
        }
        t = c_30;
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
  ATerm u_59 = NULL;
  ATerm f_30 = t;
  int g_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_59 = NULL,w_59 = NULL,x_59 = NULL;
      v_59 = t;
      t_59 :
      if(match_cons(v_59, sym__2))
        {
          w_59 = ATgetArgument(v_59, 0);
          x_59 = ATgetArgument(v_59, 1);
          {
            if(((u_59 != NULL) && (u_59 != w_59)))
              _fail(w_59);
            else
              u_59 = w_59;
            if(((u_59 != NULL) && (u_59 != x_59)))
              _fail(x_59);
            else
              u_59 = x_59;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(g_30);
    }
  else
    {
      t = f_30;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm u_87 (ATerm))
{
  ATerm j_30 = t;
  int k_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_30;
      l_30 = t;
      {
        ATerm a_60 = NULL;
        ATerm b_60 = NULL;
        t = term_o_8;
        {
          t = get_config_0(t);
          {
            b_60 = t;
            if(((a_60 != NULL) && (a_60 != b_60)))
              _fail(b_60);
            else
              a_60 = b_60;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_60), term_g_12);
          t = geq_0(t);
        }
      }
      t = l_30;
      t = u_87(t);
      LocalPopChoice(k_30);
    }
  else
    {
      t = j_30;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm u_6 (ATerm t)
  {
    ATerm f_60 = NULL,h_60 = NULL;
    ATerm m_30;
    m_30 = t;
    {
      ATerm g_60 = NULL;
      t = run_time_0(t);
      {
        g_60 = t;
        if(((f_60 != NULL) && (f_60 != g_60)))
          _fail(g_60);
        else
          f_60 = g_60;
      }
    }
    t = m_30;
    {
      ATerm i_60 = NULL;
      t = term_n_30;
      {
        t = get_config_0(t);
        {
          i_60 = t;
          if(((h_60 != NULL) && (h_60 != i_60)))
            _fail(i_60);
          else
            h_60 = i_60;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_20, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_30), not_null(f_60)), term_s_30), not_null(h_60)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, u_6);
  {
    t = term_o_27;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm p_60 = NULL;
  p_60 = t;
  o_60 :
  if(match_cons(p_60, sym_Version_0))
    {
      ATerm r_60 = NULL,t_60 = NULL;
      ATerm v_30;
      v_30 = t;
      {
        ATerm s_60 = NULL;
        t = SSLgetAnnotations(not_null(p_60));
        {
          s_60 = t;
          if(((r_60 != NULL) && (r_60 != s_60)))
            _fail(s_60);
          else
            r_60 = s_60;
        }
      }
      t = v_30;
      {
        ATerm u_60 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(r_60));
        {
          u_60 = t;
          if(((t_60 != NULL) && (t_60 != u_60)))
            _fail(u_60);
          else
            t_60 = u_60;
        }
        t = not_null(t_60);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm o_86 (ATerm))
{
  ATerm v_6 (ATerm t)
  {
    ATerm a_31 = t;
    int b_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(b_31);
      }
    else
      {
        t = a_31;
        {
          ATerm c_31 = t;
          int d_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(d_31);
            }
          else
            {
              t = c_31;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, v_6);
  t = o_86(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm z_60 = NULL;
  z_60 = t;
  t = SSL_table_create(not_null(z_60));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm f_61 = NULL;
  f_61 = t;
  {
    ATerm e_31;
    e_31 = t;
    {
      t = term_f_31;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_f_31, term_g_31, not_null(f_61));
          t = table_put_0(t);
        }
      }
    }
    t = e_31;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm j_61 = NULL;
  j_61 = t;
  t = SSL_table_destroy(not_null(j_61));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm o_61 = NULL;
  o_61 = t;
  t = SSL_exit(not_null(o_61));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm t_61 = NULL,u_61 = NULL,v_61 = NULL;
  t_61 = t;
  s_61 :
  if(((ATgetType(t_61) == AT_LIST) && ATisEmpty(t_61)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(t_61) == AT_LIST) && !(ATisEmpty(t_61))))
        {
          u_61 = ATgetFirst((ATermList) t_61);
          v_61 = (ATerm) ATgetNext((ATermList) t_61);
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
  ATerm k_31;
  k_31 = t;
  {
    ATerm y_61 = NULL;
    ATerm b_62 = NULL;
    ATerm t_31 = t;
    int u_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(u_31);
      }
    else
      {
        t = t_31;
        {
          ATerm z_61 = NULL;
          ATerm a_62 = NULL;
          a_62 = t;
          if(((z_61 != NULL) && (z_61 != a_62)))
            _fail(a_62);
          else
            z_61 = a_62;
          t = (ATerm) ATinsert(ATempty, not_null(z_61));
        }
      }
    {
      b_62 = t;
      if(((y_61 != NULL) && (y_61 != b_62)))
        _fail(b_62);
      else
        y_61 = b_62;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_27, not_null(y_61));
      t = printnl_0(t);
    }
  }
  t = k_31;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm y_89 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm k_62 = NULL,l_62 = NULL,m_62 = NULL;
  m_62 = t;
  j_62 :
  if(((ATgetType(m_62) == AT_LIST) && !(ATisEmpty(m_62))))
    {
      k_62 = ATgetFirst((ATermList) m_62);
      l_62 = (ATerm) ATgetNext((ATermList) m_62);
      {
        ATerm p_62 = NULL;
        t = not_null(l_62);
        {
          ATerm v_31;
          v_31 = t;
          {
            ATerm q_62 = NULL,s_62 = NULL,u_62 = NULL;
            ATerm w_31;
            w_31 = t;
            {
              ATerm r_62 = NULL;
              t = i_0(t);
              {
                r_62 = t;
                if(((q_62 != NULL) && (q_62 != r_62)))
                  _fail(r_62);
                else
                  q_62 = r_62;
              }
            }
            t = w_31;
            {
              ATerm t_62 = NULL;
              t = not_null(k_62);
              {
                t = h_0(t);
                {
                  t_62 = t;
                  if(((s_62 != NULL) && (s_62 != t_62)))
                    _fail(t_62);
                  else
                    s_62 = t_62;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(q_62)), not_null(s_62));
                {
                  u_62 = t;
                  if(((p_62 != NULL) && (p_62 != u_62)))
                    _fail(u_62);
                  else
                    p_62 = u_62;
                }
              }
            }
          }
          t = v_31;
          {
            ATerm w_6 (ATerm t)
            {
              t = not_null(p_62);
              return(t);
            }
            t = reverse_acc_2(t, h_0, w_6);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(m_62) == AT_LIST) && ATisEmpty(m_62)))
        {
          {
            t = term_x_8;
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
ATerm short_description_1 (ATerm t, ATerm x_89 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm c_61 (ATerm))
{
  ATerm f_63 = NULL,g_63 = NULL;
  f_63 = t;
  e_63 :
  if(match_cons(f_63, sym_Program_1))
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
            t = c_61(t);
            {
              l_63 = t;
              {
                ATerm o_63 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(l_63)), not_null(j_63));
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
ATerm system_usage_0 (ATerm t)
{
  ATerm w_63 = NULL;
  ATerm x_31 = t;
  int y_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_63 = NULL;
      t = term_n_30;
      {
        t = get_config_0(t);
        {
          x_63 = t;
          if(((w_63 != NULL) && (w_63 != x_63)))
            _fail(x_63);
          else
            w_63 = x_63;
        }
      }
      LocalPopChoice(y_31);
    }
  else
    {
      t = x_31;
      {
        ATerm y_6 (ATerm t)
        {
          ATerm z_6 (ATerm t)
          {
            ATerm y_63 = NULL;
            y_63 = t;
            if(((w_63 != NULL) && (w_63 != y_63)))
              _fail(y_63);
            else
              w_63 = y_63;
            return(t);
          }
          t = Program_1(t, z_6);
          return(t);
        }
        t = fetch_1(t, y_6);
      }
    }
  {
    t = term_z_31;
    {
      t = echo_0(t);
      {
        t = term_c_32;
        {
          t = table_get_0(t);
          {
            ATerm e_7 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, e_7);
            {
              ATerm f_7 (ATerm t)
              {
                ATerm z_63 = NULL;
                ATerm a_64 = NULL;
                a_64 = t;
                if(((z_63 != NULL) && (z_63 != a_64)))
                  _fail(a_64);
                else
                  z_63 = a_64;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_63)), term_d_32);
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
  ATerm g_64 = NULL,h_64 = NULL,i_64 = NULL;
  g_64 = t;
  f_64 :
  if(match_cons(g_64, sym__2))
    {
      h_64 = ATgetArgument(g_64, 0);
      i_64 = ATgetArgument(g_64, 1);
      {
        ATerm i_32;
        i_32 = t;
        t = SSL_printnl(not_null(h_64), not_null(i_64));
        t = i_32;
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
  ATerm m_32;
  m_32 = t;
  {
    ATerm n_64 = NULL;
    ATerm o_64 = NULL;
    o_64 = t;
    if(((n_64 != NULL) && (n_64 != o_64)))
      _fail(o_64);
    else
      n_64 = o_64;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_20, (ATerm) ATinsert(ATempty, not_null(n_64)));
      t = printnl_0(t);
    }
  }
  t = m_32;
  return(t);
}
ATerm say_1 (ATerm t, ATerm n_85 (ATerm))
{
  ATerm s_32;
  s_32 = t;
  {
    t = n_85(t);
    t = debug_0(t);
  }
  t = s_32;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm d_61 (ATerm))
{
  ATerm v_64 = NULL,w_64 = NULL;
  v_64 = t;
  u_64 :
  if(match_cons(v_64, sym_Undefined_1))
    {
      w_64 = ATgetArgument(v_64, 0);
      {
        ATerm z_64 = NULL,b_65 = NULL;
        ATerm a_65 = NULL;
        t = SSLgetAnnotations(not_null(v_64));
        {
          a_65 = t;
          if(((z_64 != NULL) && (z_64 != a_65)))
            _fail(a_65);
          else
            z_64 = a_65;
        }
        {
          t = not_null(w_64);
          {
            ATerm d_65 = NULL;
            t = d_61(t);
            {
              b_65 = t;
              {
                ATerm e_65 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(b_65)), not_null(z_64));
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
ATerm fetch_1 (ATerm t, ATerm x_74 (ATerm))
{
  ATerm j_65 (ATerm t)
  {
    ATerm t_32 = t;
    int u_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, x_74, _id);
        LocalPopChoice(u_32);
      }
    else
      {
        t = t_32;
        t = Cons_2(t, _id, j_65);
      }
    return(t);
  }
  t = j_65(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm x_88 (ATerm))
{
  t = fetch_1(t, x_88);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm o_65 = NULL;
  o_65 = t;
  n_65 :
  if(match_cons(o_65, sym_Help_0))
    {
      ATerm q_65 = NULL,s_65 = NULL;
      ATerm v_32;
      v_32 = t;
      {
        ATerm r_65 = NULL;
        t = SSLgetAnnotations(not_null(o_65));
        {
          r_65 = t;
          if(((q_65 != NULL) && (q_65 != r_65)))
            _fail(r_65);
          else
            q_65 = r_65;
        }
      }
      t = v_32;
      {
        ATerm t_65 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(q_65));
        {
          t_65 = t;
          if(((s_65 != NULL) && (s_65 != t_65)))
            _fail(t_65);
          else
            s_65 = t_65;
        }
        t = not_null(s_65);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm x_66 (ATerm))
{
  ATerm g_33 = t;
  int h_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_66(t);
      LocalPopChoice(h_33);
    }
  else
    {
      t = g_33;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm z_65 = NULL,a_66 = NULL,b_66 = NULL;
  z_65 = t;
  y_65 :
  if(match_cons(z_65, sym__2))
    {
      a_66 = ATgetArgument(z_65, 0);
      b_66 = ATgetArgument(z_65, 1);
      t = SSL_table_get(not_null(a_66), not_null(b_66));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm i_66 = NULL,j_66 = NULL,k_66 = NULL,l_66 = NULL;
  i_66 = t;
  h_66 :
  if(match_cons(i_66, sym__3))
    {
      j_66 = ATgetArgument(i_66, 0);
      k_66 = ATgetArgument(i_66, 1);
      l_66 = ATgetArgument(i_66, 2);
      {
        ATerm i_33;
        i_33 = t;
        {
          ATerm p_66 = NULL;
          ATerm q_66 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_66), not_null(k_66));
          {
            ATerm j_33 = t;
            int k_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(k_33);
              }
            else
              {
                t = j_33;
                t = (ATerm) ATempty;
              }
            {
              q_66 = t;
              if(((p_66 != NULL) && (p_66 != q_66)))
                _fail(q_66);
              else
                p_66 = q_66;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_66), not_null(k_66), (ATerm) ATinsert(CheckATermList(not_null(p_66)), not_null(l_66)));
            t = table_put_0(t);
          }
        }
        t = i_33;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm c_90 (ATerm))
{
  ATerm u_66 = NULL;
  ATerm y_66 = NULL;
  t = term_x_8;
  {
    t = c_90(t);
    {
      y_66 = t;
      if(((u_66 != NULL) && (u_66 != y_66)))
        _fail(y_66);
      else
        u_66 = y_66;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_a_32, term_b_32, not_null(u_66));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm e_67 = NULL,f_67 = NULL,g_67 = NULL;
  e_67 = t;
  d_67 :
  if(match_string(e_67, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(e_67) == AT_LIST) && !(ATisEmpty(e_67))))
        {
          f_67 = ATgetFirst((ATermList) e_67);
          g_67 = (ATerm) ATgetNext((ATermList) e_67);
          {
            ATerm l_67 = NULL;
            ATerm l_33;
            l_33 = t;
            {
              t = not_null(f_67);
              t = a_0(t);
            }
            t = l_33;
            {
              ATerm m_67 = NULL;
              t = term_x_8;
              {
                t = d_0(t);
                {
                  m_67 = t;
                  if(((l_67 != NULL) && (l_67 != m_67)))
                    _fail(m_67);
                  else
                    l_67 = m_67;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(g_67)), not_null(l_67));
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
    ATerm r_67 = NULL;
    r_67 = t;
    q_67 :
    if(!(match_string(r_67, "--help")))
      {
        if(!(match_string(r_67, "-h")))
          {
            if(!(match_string(r_67, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm h_7 (ATerm t)
  {
    t = term_n_33;
    {
      t = set_config_0(t);
      t = term_s_33;
    }
    return(t);
  }
  ATerm m_7 (ATerm t)
  {
    t = term_t_33;
    return(t);
  }
  t = Option_3(t, g_7, h_7, m_7);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm u_67 = NULL,v_67 = NULL,w_67 = NULL;
  u_67 = t;
  t_67 :
  if(((ATgetType(u_67) == AT_LIST) && !(ATisEmpty(u_67))))
    {
      v_67 = ATgetFirst((ATermList) u_67);
      w_67 = (ATerm) ATgetNext((ATermList) u_67);
      t = (ATerm) ATinsert(CheckATermList(not_null(w_67)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(v_67)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm m_56 (ATerm), ATerm n_56 (ATerm))
{
  ATerm m_68 = NULL,n_68 = NULL,o_68 = NULL;
  m_68 = t;
  l_68 :
  if(((ATgetType(m_68) == AT_LIST) && !(ATisEmpty(m_68))))
    {
      n_68 = ATgetFirst((ATermList) m_68);
      o_68 = (ATerm) ATgetNext((ATermList) m_68);
      {
        ATerm s_68 = NULL,u_68 = NULL;
        ATerm t_68 = NULL;
        t = SSLgetAnnotations(not_null(m_68));
        {
          t_68 = t;
          if(((s_68 != NULL) && (s_68 != t_68)))
            _fail(t_68);
          else
            s_68 = t_68;
        }
        {
          t = not_null(n_68);
          {
            ATerm w_68 = NULL;
            t = m_56(t);
            {
              u_68 = t;
              {
                t = not_null(o_68);
                {
                  ATerm y_68 = NULL;
                  t = n_56(t);
                  {
                    w_68 = t;
                    {
                      ATerm z_68 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(w_68)), not_null(u_68)), not_null(s_68));
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
  ATerm j_69 = NULL;
  j_69 = t;
  i_69 :
  if(((ATgetType(j_69) == AT_LIST) && ATisEmpty(j_69)))
    {
      {
        ATerm l_69 = NULL,n_69 = NULL;
        ATerm u_33;
        u_33 = t;
        {
          ATerm m_69 = NULL;
          t = SSLgetAnnotations(not_null(j_69));
          {
            m_69 = t;
            if(((l_69 != NULL) && (l_69 != m_69)))
              _fail(m_69);
            else
              l_69 = m_69;
          }
        }
        t = u_33;
        {
          ATerm o_69 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(l_69));
          {
            o_69 = t;
            if(((n_69 != NULL) && (n_69 != o_69)))
              _fail(o_69);
            else
              n_69 = o_69;
          }
          t = not_null(n_69);
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
  ATerm u_69 = NULL,v_69 = NULL,w_69 = NULL;
  u_69 = t;
  t_69 :
  if(match_cons(u_69, sym__2))
    {
      v_69 = ATgetArgument(u_69, 0);
      w_69 = ATgetArgument(u_69, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_p_11, not_null(v_69), not_null(w_69));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm a_90 (ATerm))
{
  ATerm v_33;
  v_33 = t;
  {
    ATerm a_34 = t;
    int b_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_d_34;
        t = a_90(t);
        LocalPopChoice(b_34);
      }
    else
      {
        t = a_34;
        {
        }
      }
  }
  t = v_33;
  {
    ATerm n_7 (ATerm t)
    {
      ATerm e_70 = NULL;
      ATerm e_34;
      e_34 = t;
      {
        ATerm c_70 = NULL;
        ATerm d_70 = NULL;
        d_70 = t;
        if(((c_70 != NULL) && (c_70 != d_70)))
          _fail(d_70);
        else
          c_70 = d_70;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_n_30, not_null(c_70));
          t = set_config_0(t);
        }
      }
      t = e_34;
      {
        ATerm f_70 = NULL;
        f_70 = t;
        if(((e_70 != NULL) && (e_70 != f_70)))
          _fail(f_70);
        else
          e_70 = f_70;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(e_70));
      }
      return(t);
    }
    ATerm o_7 (ATerm t)
    {
      ATerm f_34 = t;
      int g_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_34 = t;
          int m_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(m_34);
            }
          else
            {
              t = l_34;
              {
                t = a_90(t);
                t = Cons_2(t, _id, o_7);
              }
            }
          LocalPopChoice(g_34);
        }
      else
        {
          t = f_34;
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
  ATerm l_70 = NULL,m_70 = NULL,n_70 = NULL;
  ATerm n_34;
  n_34 = t;
  {
    ATerm o_70 = NULL,p_70 = NULL,q_70 = NULL,r_70 = NULL;
    o_70 = t;
    k_70 :
    if(match_cons(o_70, sym__3))
      {
        p_70 = ATgetArgument(o_70, 0);
        q_70 = ATgetArgument(o_70, 1);
        r_70 = ATgetArgument(o_70, 2);
        {
          if(((l_70 != NULL) && (l_70 != p_70)))
            _fail(p_70);
          else
            l_70 = p_70;
          {
            if(((m_70 != NULL) && (m_70 != q_70)))
              _fail(q_70);
            else
              m_70 = q_70;
            {
              if(((n_70 != NULL) && (n_70 != r_70)))
                _fail(r_70);
              else
                n_70 = r_70;
              t = SSL_table_put(not_null(l_70), not_null(m_70), not_null(n_70));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = n_34;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm z_89 (ATerm))
{
  ATerm u_70 = NULL;
  ATerm p_34;
  p_34 = t;
  {
    t = term_x_34;
    t = table_put_0(t);
  }
  t = p_34;
  {
    ATerm p_7 (ATerm t)
    {
      ATerm y_34 = t;
      int z_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_89(t);
          LocalPopChoice(z_34);
        }
      else
        {
          t = y_34;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, p_7);
    {
      ATerm a_35 = t;
      int b_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_35;
          g_35 = t;
          {
            ATerm h_35 = t;
            int i_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_m_33;
                t = get_config_0(t);
                LocalPopChoice(i_35);
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
              t = term_o_27;
              t = exit_0(t);
            }
          }
          LocalPopChoice(b_35);
        }
      else
        {
          t = a_35;
          {
            ATerm j_35 = t;
            int o_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_7 (ATerm t)
                {
                  ATerm r_7 (ATerm t)
                  {
                    ATerm v_70 = NULL;
                    v_70 = t;
                    if(((u_70 != NULL) && (u_70 != v_70)))
                      _fail(v_70);
                    else
                      u_70 = v_70;
                    return(t);
                  }
                  t = Undefined_1(t, r_7);
                  return(t);
                }
                t = fetch_1(t, q_7);
                {
                  ATerm s_7 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_70)), term_p_35);
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
                LocalPopChoice(o_35);
              }
            else
              {
                t = j_35;
                {
                }
              }
          }
        }
      {
        ATerm q_35;
        q_35 = t;
        {
          t = term_a_32;
          t = table_destroy_0(t);
        }
        t = q_35;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm u_86 (ATerm), ATerm v_86 (ATerm), ATerm w_86 (ATerm), ATerm x_86 (ATerm))
{
  t = parse_options_1(t, u_86);
  {
    t = store_options_0(t);
    {
      t = w_86(t);
      {
        ATerm x_35 = t;
        int y_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, v_86);
            LocalPopChoice(y_35);
          }
        else
          {
            t = x_35;
            {
              ATerm z_35 = t;
              int a_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = x_86(t);
                  t = report_success_0(t);
                  LocalPopChoice(a_36);
                }
              else
                {
                  t = z_35;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm y_86 (ATerm), ATerm z_86 (ATerm))
{
  t = option_wrap_4(t, y_86, default_usage_0, _id, z_86);
  return(t);
}
ATerm xtc_io_wrap_2 (ATerm t, ATerm i_94 (ATerm), ATerm j_94 (ATerm))
{
  ATerm u_7 (ATerm t)
  {
    ATerm b_36 = t;
    int c_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_94(t);
        LocalPopChoice(c_36);
      }
    else
      {
        t = b_36;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm x_7 (ATerm t)
  {
    t = xtc_io_1(t, j_94);
    return(t);
  }
  t = option_wrap_2(t, u_7, x_7);
  return(t);
}
ATerm xtc_iowrap_2 (ATerm t, ATerm l_94 (ATerm), ATerm m_94 (ATerm))
{
  t = xtc_io_wrap_2(t, l_94, m_94);
  return(t);
}
ATerm pack_stratego_0 (ATerm t)
{
  ATerm z_70 = NULL,a_71 = NULL;
  ATerm y_7 (ATerm t)
  {
    ATerm b_71 = NULL,c_71 = NULL,d_71 = NULL;
    t = pack_stratego_modules_0(t);
    {
      b_71 = t;
      y_70 :
      if(match_cons(b_71, sym__2))
        {
          c_71 = ATgetArgument(b_71, 0);
          d_71 = ATgetArgument(b_71, 1);
          {
            if(((z_70 != NULL) && (z_70 != c_71)))
              _fail(c_71);
            else
              z_70 = c_71;
            {
              if(((a_71 != NULL) && (a_71 != d_71)))
                _fail(d_71);
              else
                a_71 = d_71;
              {
                ATerm j_36 = t;
                int l_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_v_24;
                    {
                      t = get_config_0(t);
                      {
                        t = not_null(z_70);
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
                    LocalPopChoice(l_36);
                  }
                else
                  {
                    t = j_36;
                    {
                      t = not_null(z_70);
                      {
                        t = create_dep_file_0(t);
                        {
                          t = not_null(a_71);
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
