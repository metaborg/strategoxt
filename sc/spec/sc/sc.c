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
ATerm term_n_47;
ATerm term_l_47;
ATerm term_j_47;
ATerm term_h_47;
ATerm term_d_47;
ATerm term_b_47;
ATerm term_s_46;
ATerm term_m_46;
ATerm term_j_46;
ATerm term_i_46;
ATerm term_h_46;
ATerm term_g_46;
ATerm term_f_46;
ATerm term_b_46;
ATerm term_z_45;
ATerm term_y_45;
ATerm term_w_45;
ATerm term_r_45;
ATerm term_q_45;
ATerm term_j_45;
ATerm term_h_45;
ATerm term_f_45;
ATerm term_e_45;
ATerm term_d_45;
ATerm term_c_45;
ATerm term_g_44;
ATerm term_r_43;
ATerm term_d_43;
ATerm term_z_42;
ATerm term_y_42;
ATerm term_l_42;
ATerm term_i_42;
ATerm term_h_42;
ATerm term_g_42;
ATerm term_e_42;
ATerm term_z_41;
ATerm term_v_41;
ATerm term_u_41;
ATerm term_r_41;
ATerm term_p_41;
ATerm term_o_41;
ATerm term_n_41;
ATerm term_h_41;
ATerm term_g_41;
ATerm term_f_41;
ATerm term_e_41;
ATerm term_d_41;
ATerm term_c_41;
ATerm term_b_41;
ATerm term_a_41;
ATerm term_z_40;
ATerm term_y_40;
ATerm term_x_40;
ATerm term_w_40;
ATerm term_v_40;
ATerm term_o_40;
ATerm term_n_40;
ATerm term_l_40;
ATerm term_k_40;
ATerm term_j_40;
ATerm term_i_40;
ATerm term_b_40;
ATerm term_a_40;
ATerm term_z_39;
ATerm term_s_39;
ATerm term_r_39;
ATerm term_o_39;
ATerm term_l_39;
ATerm term_k_39;
ATerm term_h_39;
ATerm term_e_39;
ATerm term_d_39;
ATerm term_x_38;
ATerm term_v_38;
ATerm term_o_38;
ATerm term_l_38;
ATerm term_k_38;
ATerm term_g_38;
ATerm term_e_38;
ATerm term_y_37;
ATerm term_x_37;
ATerm term_u_37;
ATerm term_l_37;
ATerm term_d_37;
ATerm term_w_36;
ATerm term_r_36;
ATerm term_k_36;
ATerm term_f_36;
ATerm term_x_34;
ATerm term_v_34;
ATerm term_t_34;
ATerm term_q_34;
ATerm term_m_34;
ATerm term_l_34;
ATerm term_z_33;
ATerm term_y_33;
ATerm term_s_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_h_33;
ATerm term_g_33;
ATerm term_z_32;
ATerm term_p_32;
ATerm term_u_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_j_31;
ATerm term_h_31;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_o_29;
ATerm term_m_29;
ATerm term_v_28;
ATerm term_q_28;
ATerm term_d_27;
ATerm term_c_26;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_o_25;
ATerm term_l_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_u_23;
ATerm term_r_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_i_23;
ATerm term_z_22;
ATerm term_x_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_c_22;
ATerm term_z_21;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_y_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_c_20;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_o_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_w_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_f_18;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_a_17;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_p_16;
ATerm term_n_16;
ATerm term_i_16;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_q_14;
void init_constant_terms (void)
{
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling C code", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("C-pretty.pp", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end: ", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize2", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize1", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize: ", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to ", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("frontend", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol(".fro", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("main strategy is: ", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol(".with-main", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (before frontend) written to ", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to ", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("infile", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(sym__2, term_r_23, term_x_22);
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("SC ", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2002 Eelco Visser <visser@acm.org>\n", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("This program is free software; you can redistribute it and/or modify\n", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("it under the terms of the GNU General Public License as published by\n", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("the Free Software Foundation; either version 2, or (at your option)\n", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("any later version.\n", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(sym__2, term_j_31, term_p_31);
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(sym__2, term_j_31, term_g_33);
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-i file            Main module to compile (required)\n", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f | --output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d\n", 0, ATtrue));
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(sym__2, term_u_15, term_l_20);
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(sym__2, term_w_21, term_l_20);
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(sym__2, term_w_18, term_l_20);
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(sym__2, term_f_18, term_l_20);
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all", 0, ATtrue));
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(sym__2, term_d_39, term_l_20);
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all        Instrument all definitions to print tracing information", 0, ATtrue));
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-t f               Instrument definition of f to print tracing information\n", 0, ATtrue));
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i        Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeAppl(sym__2, term_w_14, term_q_14);
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-S | --silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(sym__2, term_z_39, term_l_20);
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(sym__2, term_i_40, term_l_20);
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(sym__2, term_l_40, term_l_20);
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M\n", 0, ATtrue));
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that sc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_n_41));
  term_n_41 = (ATerm) ATmakeAppl(ATmakeSymbol("SC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_o_41));
  term_o_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_r_41));
  term_r_41 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_42));
  term_g_42 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_i_42));
  term_i_42 = (ATerm) ATmakeAppl(sym__2, term_g_42, term_h_42);
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeAppl(sym__3, term_g_42, term_h_42, (ATerm) ATempty);
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_c_45));
  term_c_45 = (ATerm) ATmakeAppl(ATmakeSymbol("0.9beta8", 0, ATtrue));
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeAppl(sym__2, term_a_30, term_c_45);
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeAppl(sym__2, term_w_14, term_c_22);
  ATprotect(&(term_f_45));
  term_f_45 = (ATerm) ATmakeAppl(sym__2, term_o_19, term_q_14);
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeAppl(ATmakeSymbol("lib.rtree", 0, ATtrue));
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego.rtree", 0, ATtrue));
  ATprotect(&(term_q_45));
  term_q_45 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_r_45));
  term_r_45 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego.h>", 0, ATtrue));
  ATprotect(&(term_w_45));
  term_w_45 = (ATerm) ATmakeAppl(ATmakeSymbol("<ssl/stratego-lib.h>", 0, ATtrue));
  ATprotect(&(term_y_45));
  term_y_45 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS", 0, ATtrue));
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeAppl(ATmakeSymbol("/include", 0, ATtrue));
  ATprotect(&(term_b_46));
  term_b_46 = (ATerm) ATmakeAppl(ATmakeSymbol("ATERM", 0, ATtrue));
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib", 0, ATtrue));
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue));
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-lib.opt", 0, ATtrue));
  ATprotect(&(term_i_46));
  term_i_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego.opt", 0, ATtrue));
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-lATerm-gcc", 0, ATtrue));
  ATprotect(&(term_m_46));
  term_m_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-lm", 0, ATtrue));
  ATprotect(&(term_s_46));
  term_s_46 = (ATerm) ATmakeAppl(ATmakeSymbol("sc-manual.txt", 0, ATtrue));
  ATprotect(&(term_b_47));
  term_b_47 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_d_47));
  term_d_47 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_h_47));
  term_h_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_l_47));
  term_l_47 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue));
}
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm b_79 (ATerm), ATerm c_79 (ATerm));
ATerm crush_2 (ATerm, ATerm z_77 (ATerm), ATerm a_78 (ATerm));
ATerm run_time_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm i_86 (ATerm));
ATerm Snd_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm link_object_code_0 (ATerm);
ATerm c_to_object_code_0 (ATerm);
ATerm c_compile_0 (ATerm);
ATerm rename_file_0 (ATerm);
ATerm rename_to_1 (ATerm, ATerm r_0 (ATerm));
ATerm xtc_transform_1 (ATerm, ATerm b_93 (ATerm));
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
ATerm if_keep2_1 (ATerm, ATerm w_86 (ATerm));
ATerm frontend_0 (ATerm);
ATerm if_keep3_1 (ATerm, ATerm x_86 (ATerm));
ATerm AddMain_1 (ATerm, ATerm v_64 (ATerm));
ATerm xtc_io_transform_1 (ATerm, ATerm l_93 (ATerm));
ATerm add_main_0 (ATerm);
ATerm get_outfile_1 (ATerm, ATerm u_64 (ATerm));
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
ATerm xtc_transform_term_2 (ATerm, ATerm j_93 (ATerm), ATerm k_93 (ATerm));
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_and_wait_1 (ATerm, ATerm r_89 (ATerm));
ATerm call_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm a_93 (ATerm));
ATerm assert_1 (ATerm, ATerm e_83 (ATerm));
ATerm obsolete_1 (ATerm, ATerm s_83 (ATerm));
ATerm open_file_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm o_0 (ATerm), ATerm p_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm o_59 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm c_93 (ATerm), ATerm d_93 (ATerm));
ATerm if_verbose3_1 (ATerm, ATerm j_86 (ATerm));
ATerm basename_1 (ATerm, ATerm x_81 (ATerm));
ATerm basename_0 (ATerm);
ATerm get_infile_0 (ATerm);
ATerm parse_0 (ATerm);
ATerm front_end_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm b_83 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm g_65 (ATerm), ATerm h_65 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm a_83 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm q_92 (ATerm));
ATerm xtc_input_1 (ATerm, ATerm t_92 (ATerm));
ATerm compile_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm h_86 (ATerm));
ATerm ticks_to_seconds_0 (ATerm);
ATerm self_children_sys_time_0 (ATerm);
ATerm add_0 (ATerm);
ATerm self_children_user_time_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm diff_times_0 (ATerm);
ATerm times_0 (ATerm);
ATerm profile_p__2 (ATerm, ATerm d_84 (ATerm), ATerm e_84 (ATerm));
ATerm debug_1 (ATerm, ATerm l_83 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm sc_announce_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm sc_version_0 (ATerm);
ATerm try_1 (ATerm, ATerm w_64 (ATerm));
ATerm copy_file_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm l_86 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm k_86 (ATerm));
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose6_1 (ATerm, ATerm m_86 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm o_78 (ATerm), ATerm p_78 (ATerm));
ATerm union_1 (ATerm, ATerm k_78 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm v_89 (ATerm));
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
ATerm map_1 (ATerm, ATerm n_72 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm h_0 (ATerm));
ATerm Program_1 (ATerm, ATerm f_59 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm m_83 (ATerm));
ATerm Undefined_1 (ATerm, ATerm g_59 (ATerm));
ATerm fetch_1 (ATerm, ATerm w_72 (ATerm));
ATerm option_defined_1 (ATerm, ATerm k_87 (ATerm));
ATerm Help_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm p_88 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm n_88 (ATerm));
ATerm parse_options_1 (ATerm, ATerm m_88 (ATerm));
ATerm table_put_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm Nil_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm c_73 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm _2 (ATerm, ATerm c_53 (ATerm), ATerm d_53 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm l_54 (ATerm), ATerm m_54 (ATerm));
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
        ATerm i_14;
        i_14 = t;
        t = SSL_printnl(not_null(w_1), not_null(x_1));
        t = i_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm b_79 (ATerm), ATerm c_79 (ATerm))
{
  ATerm j_14 = t;
  int n_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = b_79(t);
      LocalPopChoice(n_14);
    }
  else
    {
      t = j_14;
      {
        ATerm d_3 = NULL,e_3 = NULL,g_3 = NULL;
        d_3 = t;
        b_3 :
        if(((ATgetType(d_3) == AT_LIST) && !(ATisEmpty(d_3))))
          {
            e_3 = ATgetFirst((ATermList) d_3);
            g_3 = (ATerm) ATgetNext((ATermList) d_3);
            {
              ATerm k_3 = NULL;
              ATerm m_3 = NULL;
              t = not_null(g_3);
              {
                t = foldr_2(t, b_79, c_79);
                {
                  m_3 = t;
                  if(((k_3 != NULL) && (k_3 != m_3)))
                    _fail(m_3);
                  else
                    k_3 = m_3;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(e_3), not_null(k_3));
                t = c_79(t);
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
ATerm crush_2 (ATerm t, ATerm z_77 (ATerm), ATerm a_78 (ATerm))
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
          t_3 :
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
      t = foldr_2(t, z_77, a_78);
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
      t = term_q_14;
      return(t);
    }
    t = crush_2(t, b_0, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm i_86 (ATerm))
{
  ATerm t_14 = t;
  int u_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_14;
      v_14 = t;
      {
        ATerm g_4 = NULL;
        ATerm h_4 = NULL;
        t = term_w_14;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_4), term_x_14);
          t = geq_0(t);
        }
      }
      t = v_14;
      t = i_86(t);
      LocalPopChoice(u_14);
    }
  else
    {
      t = t_14;
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
            t = term_a_15;
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
            t = term_b_15;
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
                t = term_c_15;
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
                  t = (ATerm) ATmakeAppl(sym__2, term_h_15, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(m_6)), not_null(k_6)), term_i_15), not_null(i_6)));
                  {
                    ATerm t_0 (ATerm t)
                    {
                      ATerm j_15;
                      j_15 = t;
                      {
                        ATerm o_6 = NULL,q_6 = NULL;
                        ATerm l_15;
                        l_15 = t;
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
                        t = l_15;
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
                            t = (ATerm) ATmakeAppl(sym__2, term_m_15, (ATerm) ATinsert(CheckATermList(not_null(q_6)), not_null(o_6)));
                            t = printnl_0(t);
                          }
                        }
                      }
                      t = j_15;
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
            t = term_n_15;
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
            t = term_o_15;
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
                t = term_t_15;
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
                  t = (ATerm) ATmakeAppl(sym__2, not_null(j_7), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(g_7)), term_i_15), not_null(e_7)), term_u_15));
                  {
                    ATerm v_15 = t;
                    int y_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = conc_two_lists_0(t);
                        LocalPopChoice(y_15);
                      }
                    else
                      {
                        t = v_15;
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
                  t = (ATerm) ATmakeAppl(sym__2, term_h_15, not_null(i_7));
                  {
                    ATerm x_0 (ATerm t)
                    {
                      ATerm z_15;
                      z_15 = t;
                      {
                        ATerm m_7 = NULL;
                        ATerm n_7 = NULL;
                        n_7 = t;
                        if(((m_7 != NULL) && (m_7 != n_7)))
                          _fail(n_7);
                        else
                          m_7 = n_7;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_m_15, not_null(m_7));
                          t = printnl_0(t);
                        }
                      }
                      t = z_15;
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
  ATerm a_16 = t;
  int b_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_16;
      c_16 = t;
      {
        t = term_u_15;
        t = get_config_0(t);
      }
      t = c_16;
      LocalPopChoice(b_16);
    }
  else
    {
      t = a_16;
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
              t = (ATerm) ATmakeAppl(sym__2, term_m_15, (ATerm) ATinsert(CheckATermList(not_null(u_7)), term_i_16));
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
  ATerm l_8 = NULL,m_8 = NULL;
  l_8 = t;
  k_8 :
  if(match_cons(l_8, sym_FILE_1))
    {
      m_8 = ATgetArgument(l_8, 0);
      {
        ATerm l_16 = t;
        int m_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_8 = NULL;
            t = r_0(t);
            {
              o_8 = t;
              i_8 :
              if(match_cons(o_8, sym_stdout_0))
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(m_8), term_n_16);
                  {
                    t = copy_file_0(t);
                    {
                      t = not_null(m_8);
                      t = remove_file_0(t);
                    }
                  }
                }
              else
                {
                  _fail(t);
                }
            }
            t = term_n_16;
            LocalPopChoice(m_16);
          }
        else
          {
            t = l_16;
            {
              ATerm q_8 = NULL;
              ATerm r_8 = NULL;
              t = r_0(t);
              {
                r_8 = t;
                {
                  if(((q_8 != NULL) && (q_8 != r_8)))
                    _fail(r_8);
                  else
                    q_8 = r_8;
                  {
                    ATerm o_16 = t;
                    if((PushChoice() == 0))
                      {
                        t = stdout_0(t);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = o_16;
                      }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(m_8), not_null(q_8));
                      t = rename_file_0(t);
                    }
                  }
                }
              }
              t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_8));
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
ATerm xtc_transform_1 (ATerm t, ATerm b_93 (ATerm))
{
  ATerm b_1 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, b_93, b_1);
  return(t);
}
ATerm abox2text_0 (ATerm t)
{
  ATerm d_1 (ATerm t)
  {
    t = term_p_16;
    return(t);
  }
  t = xtc_transform_1(t, d_1);
  return(t);
}
ATerm ac2abox_0 (ATerm t)
{
  ATerm e_1 (ATerm t)
  {
    t = term_u_16;
    return(t);
  }
  ATerm f_1 (ATerm t)
  {
    ATerm x_8 = NULL;
    ATerm y_8 = NULL;
    t = term_v_16;
    {
      t = xtc_find_0(t);
      {
        y_8 = t;
        if(((x_8 != NULL) && (x_8 != y_8)))
          _fail(y_8);
        else
          x_8 = y_8;
      }
    }
    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_8)), term_w_16);
    return(t);
  }
  t = xtc_transform_2(t, e_1, f_1);
  return(t);
}
ATerm s2c_0 (ATerm t)
{
  ATerm g_1 (ATerm t)
  {
    t = term_x_16;
    return(t);
  }
  ATerm h_1 (ATerm t)
  {
    ATerm d_9 = NULL,f_9 = NULL;
    ATerm y_16;
    y_16 = t;
    {
      ATerm e_9 = NULL;
      t = pass_verbose_0(t);
      {
        e_9 = t;
        if(((d_9 != NULL) && (d_9 != e_9)))
          _fail(e_9);
        else
          d_9 = e_9;
      }
    }
    t = y_16;
    {
      ATerm i_9 = NULL;
      t = term_a_17;
      {
        t = get_config_0(t);
        {
          ATerm i_1 (ATerm t)
          {
            ATerm g_9 = NULL;
            ATerm h_9 = NULL;
            h_9 = t;
            if(((g_9 != NULL) && (g_9 != h_9)))
              _fail(h_9);
            else
              g_9 = h_9;
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_9)), term_a_17);
            return(t);
          }
          t = map_1(t, i_1);
          {
            i_9 = t;
            if(((f_9 != NULL) && (f_9 != i_9)))
              _fail(i_9);
            else
              f_9 = i_9;
          }
        }
      }
      {
        t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(f_9)), (ATerm) ATinsert(ATempty, term_d_17)), not_null(d_9));
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
    t = term_e_17;
    return(t);
  }
  ATerm k_1 (ATerm t)
  {
    ATerm n_9 = NULL;
    ATerm o_9 = NULL;
    t = pass_verbose_0(t);
    {
      o_9 = t;
      if(((n_9 != NULL) && (n_9 != o_9)))
        _fail(o_9);
      else
        n_9 = o_9;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(n_9)), term_d_17);
    return(t);
  }
  t = xtc_transform_2(t, j_1, k_1);
  return(t);
}
ATerm canonicalize_0 (ATerm t)
{
  ATerm l_1 (ATerm t)
  {
    t = term_f_17;
    return(t);
  }
  ATerm m_1 (ATerm t)
  {
    ATerm r_9 = NULL;
    ATerm s_9 = NULL;
    t = pass_verbose_0(t);
    {
      s_9 = t;
      if(((r_9 != NULL) && (r_9 != s_9)))
        _fail(s_9);
      else
        r_9 = s_9;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(r_9)), term_d_17);
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
      t = term_h_17;
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
        ATerm v_9 = NULL;
        ATerm w_9 = NULL;
        w_9 = t;
        if(((v_9 != NULL) && (v_9 != w_9)))
          _fail(w_9);
        else
          v_9 = w_9;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_m_15, (ATerm) ATinsert(CheckATermList(not_null(v_9)), term_i_17));
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
                t = term_p_16;
                return(t);
              }
              t = xtc_transform_1(t, s_1);
              {
                ATerm t_1 (ATerm t)
                {
                  ATerm u_1 (ATerm t)
                  {
                    t = term_j_17;
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
    t = term_o_17;
    return(t);
  }
  ATerm z_1 (ATerm t)
  {
    ATerm z_9 = NULL;
    ATerm a_10 = NULL;
    t = pass_verbose_0(t);
    {
      a_10 = t;
      if(((z_9 != NULL) && (z_9 != a_10)))
        _fail(a_10);
      else
        z_9 = a_10;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(z_9)), term_d_17);
    return(t);
  }
  t = xtc_transform_2(t, y_1, z_1);
  return(t);
}
ATerm compile_match_0 (ATerm t)
{
  ATerm a_2 (ATerm t)
  {
    t = term_p_17;
    return(t);
  }
  ATerm b_2 (ATerm t)
  {
    ATerm d_10 = NULL;
    ATerm e_10 = NULL;
    t = pass_verbose_0(t);
    {
      e_10 = t;
      if(((d_10 != NULL) && (d_10 != e_10)))
        _fail(e_10);
      else
        d_10 = e_10;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(d_10)), term_d_17);
    return(t);
  }
  t = xtc_transform_2(t, a_2, b_2);
  return(t);
}
ATerm inline_0 (ATerm t)
{
  ATerm c_2 (ATerm t)
  {
    t = term_q_17;
    return(t);
  }
  ATerm d_2 (ATerm t)
  {
    ATerm h_10 = NULL;
    ATerm i_10 = NULL;
    t = pass_verbose_0(t);
    {
      i_10 = t;
      if(((h_10 != NULL) && (h_10 != i_10)))
        _fail(i_10);
      else
        h_10 = i_10;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(h_10)), term_d_17);
    return(t);
  }
  t = xtc_transform_2(t, c_2, d_2);
  return(t);
}
ATerm fusion_0 (ATerm t)
{
  ATerm e_2 (ATerm t)
  {
    t = term_r_17;
    return(t);
  }
  ATerm f_2 (ATerm t)
  {
    ATerm l_10 = NULL;
    ATerm m_10 = NULL;
    t = pass_verbose_0(t);
    {
      m_10 = t;
      if(((l_10 != NULL) && (l_10 != m_10)))
        _fail(m_10);
      else
        l_10 = m_10;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(l_10)), term_d_17);
    return(t);
  }
  t = xtc_transform_2(t, e_2, f_2);
  return(t);
}
ATerm optimize1_0 (ATerm t)
{
  ATerm g_2 (ATerm t)
  {
    t = term_t_17;
    return(t);
  }
  ATerm h_2 (ATerm t)
  {
    ATerm p_10 = NULL;
    ATerm q_10 = NULL;
    t = pass_verbose_0(t);
    {
      q_10 = t;
      if(((p_10 != NULL) && (p_10 != q_10)))
        _fail(q_10);
      else
        p_10 = q_10;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(p_10)), term_d_17);
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
      t = term_u_17;
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
        ATerm t_10 = NULL;
        ATerm u_10 = NULL;
        u_10 = t;
        if(((t_10 != NULL) && (t_10 != u_10)))
          _fail(u_10);
        else
          t_10 = u_10;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_m_15, (ATerm) ATinsert(CheckATermList(not_null(t_10)), term_v_17));
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
        ATerm w_17 = t;
        int x_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_17;
            z_17 = t;
            {
              ATerm d_18 = t;
              if((PushChoice() == 0))
                {
                  t = term_f_18;
                  t = get_config_0(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = d_18;
                }
            }
            t = z_17;
            t = fusion_0(t);
            LocalPopChoice(x_17);
          }
        else
          {
            t = w_17;
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
    t = term_l_18;
    return(t);
  }
  ATerm o_2 (ATerm t)
  {
    ATerm x_10 = NULL;
    ATerm y_10 = NULL;
    t = pass_verbose_0(t);
    {
      y_10 = t;
      if(((x_10 != NULL) && (x_10 != y_10)))
        _fail(y_10);
      else
        x_10 = y_10;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(x_10)), term_d_17);
    return(t);
  }
  t = xtc_transform_2(t, n_2, o_2);
  return(t);
}
ATerm stratego_nf_0 (ATerm t)
{
  ATerm p_2 (ATerm t)
  {
    t = term_m_18;
    return(t);
  }
  ATerm q_2 (ATerm t)
  {
    ATerm b_11 = NULL;
    ATerm c_11 = NULL;
    t = pass_verbose_0(t);
    {
      c_11 = t;
      if(((b_11 != NULL) && (b_11 != c_11)))
        _fail(c_11);
      else
        b_11 = c_11;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(b_11)), term_d_17);
    return(t);
  }
  t = xtc_transform_2(t, p_2, q_2);
  return(t);
}
ATerm extract_0 (ATerm t)
{
  ATerm r_2 (ATerm t)
  {
    t = term_n_18;
    return(t);
  }
  ATerm s_2 (ATerm t)
  {
    ATerm f_11 = NULL;
    ATerm g_11 = NULL;
    t = pass_verbose_0(t);
    {
      g_11 = t;
      if(((f_11 != NULL) && (f_11 != g_11)))
        _fail(g_11);
      else
        f_11 = g_11;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(f_11)), term_d_17);
    return(t);
  }
  t = xtc_transform_2(t, r_2, s_2);
  return(t);
}
ATerm extract_all_0 (ATerm t)
{
  ATerm t_2 (ATerm t)
  {
    t = term_o_18;
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    ATerm j_11 = NULL;
    ATerm k_11 = NULL;
    t = pass_verbose_0(t);
    {
      k_11 = t;
      if(((j_11 != NULL) && (j_11 != k_11)))
        _fail(k_11);
      else
        j_11 = k_11;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(j_11)), term_d_17);
    return(t);
  }
  t = xtc_transform_2(t, t_2, u_2);
  return(t);
}
ATerm output_frontend_0 (ATerm t)
{
  ATerm n_11 = NULL;
  ATerm p_18 = t;
  int u_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_18;
      v_18 = t;
      {
        t = term_w_18;
        t = get_config_0(t);
      }
      t = v_18;
      {
        ATerm x_18 = t;
        int y_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = extract_all_0(t);
            LocalPopChoice(y_18);
          }
        else
          {
            t = x_18;
            {
              t = (ATerm) ATinsert(ATempty, term_d_19);
              t = fatal_error_0(t);
            }
          }
        {
          ATerm v_2 (ATerm t)
          {
            ATerm o_11 = NULL;
            ATerm w_2 (ATerm t)
            {
              t = term_e_19;
              return(t);
            }
            t = get_outfile_1(t, w_2);
            {
              o_11 = t;
              if(((n_11 != NULL) && (n_11 != o_11)))
                _fail(o_11);
              else
                n_11 = o_11;
            }
            return(t);
          }
          t = copy_to_1(t, v_2);
          {
            ATerm x_2 (ATerm t)
            {
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_11)), term_f_19);
              return(t);
            }
            t = say_1(t, x_2);
          }
        }
      }
      LocalPopChoice(u_18);
    }
  else
    {
      t = p_18;
      {
      }
    }
  return(t);
}
ATerm if_keep2_1 (ATerm t, ATerm w_86 (ATerm))
{
  ATerm g_19 = t;
  int h_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_19;
      n_19 = t;
      {
        ATerm r_11 = NULL;
        ATerm s_11 = NULL;
        t = term_o_19;
        {
          t = get_config_0(t);
          {
            s_11 = t;
            if(((r_11 != NULL) && (r_11 != s_11)))
              _fail(s_11);
            else
              r_11 = s_11;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_11), term_x_14);
          t = geq_0(t);
        }
      }
      t = n_19;
      t = w_86(t);
      LocalPopChoice(h_19);
    }
  else
    {
      t = g_19;
      {
      }
    }
  return(t);
}
ATerm frontend_0 (ATerm t)
{
  ATerm y_11 = NULL;
  ATerm y_2 (ATerm t)
  {
    t = term_w_19;
    return(t);
  }
  ATerm z_2 (ATerm t)
  {
    ATerm w_11 = NULL;
    ATerm x_11 = NULL;
    t = pass_verbose_0(t);
    {
      x_11 = t;
      if(((w_11 != NULL) && (w_11 != x_11)))
        _fail(x_11);
      else
        w_11 = x_11;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(w_11)), term_d_17);
    return(t);
  }
  t = xtc_transform_2(t, y_2, z_2);
  {
    ATerm a_3 (ATerm t)
    {
      ATerm c_3 (ATerm t)
      {
        ATerm z_11 = NULL;
        ATerm f_3 (ATerm t)
        {
          t = term_x_19;
          return(t);
        }
        t = get_outfile_1(t, f_3);
        {
          z_11 = t;
          if(((y_11 != NULL) && (y_11 != z_11)))
            _fail(z_11);
          else
            y_11 = z_11;
        }
        return(t);
      }
      t = copy_to_1(t, c_3);
      {
        ATerm h_3 (ATerm t)
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_11)), term_f_19);
          return(t);
        }
        t = say_1(t, h_3);
      }
      return(t);
    }
    t = if_keep2_1(t, a_3);
  }
  return(t);
}
ATerm if_keep3_1 (ATerm t, ATerm x_86 (ATerm))
{
  ATerm y_19 = t;
  int z_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_20;
      b_20 = t;
      {
        ATerm d_12 = NULL;
        ATerm e_12 = NULL;
        t = term_o_19;
        {
          t = get_config_0(t);
          {
            e_12 = t;
            if(((d_12 != NULL) && (d_12 != e_12)))
              _fail(e_12);
            else
              d_12 = e_12;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_12), term_c_20);
          t = geq_0(t);
        }
      }
      t = b_20;
      t = x_86(t);
      LocalPopChoice(z_19);
    }
  else
    {
      t = y_19;
      {
      }
    }
  return(t);
}
ATerm AddMain_1 (ATerm t, ATerm v_64 (ATerm))
{
  ATerm j_12 = NULL,k_12 = NULL;
  j_12 = t;
  i_12 :
  if(match_cons(j_12, sym_Specification_1))
    {
      k_12 = ATgetArgument(j_12, 0);
      {
        ATerm m_12 = NULL;
        ATerm n_12 = NULL;
        t = term_l_20;
        {
          t = v_64(t);
          {
            n_12 = t;
            if(((m_12 != NULL) && (m_12 != n_12)))
              _fail(n_12);
            else
              m_12 = n_12;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(not_null(k_12)), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_m_20, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(m_12)), (ATerm) ATempty))))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm xtc_io_transform_1 (ATerm t, ATerm l_93 (ATerm))
{
  t = read_from_0(t);
  {
    t = l_93(t);
    t = write_to_0(t);
  }
  return(t);
}
ATerm add_main_0 (ATerm t)
{
  ATerm s_12 = NULL,u_12 = NULL;
  ATerm n_20 = t;
  int o_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_20;
      r_20 = t;
      {
        ATerm t_12 = NULL;
        t = term_s_20;
        {
          t = get_config_0(t);
          {
            t_12 = t;
            {
              if(((s_12 != NULL) && (s_12 != t_12)))
                _fail(t_12);
              else
                s_12 = t_12;
              {
                ATerm i_3 (ATerm t)
                {
                  ATerm j_3 (ATerm t)
                  {
                    t = term_t_20;
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
      t = r_20;
      {
        ATerm l_3 (ATerm t)
        {
          ATerm n_3 (ATerm t)
          {
            t = not_null(s_12);
            return(t);
          }
          t = AddMain_1(t, n_3);
          return(t);
        }
        t = xtc_io_transform_1(t, l_3);
      }
      LocalPopChoice(o_20);
    }
  else
    {
      t = n_20;
      {
      }
    }
  {
    ATerm o_3 (ATerm t)
    {
      ATerm p_3 (ATerm t)
      {
        ATerm v_12 = NULL;
        ATerm q_3 (ATerm t)
        {
          t = term_v_20;
          return(t);
        }
        t = get_outfile_1(t, q_3);
        {
          v_12 = t;
          if(((u_12 != NULL) && (u_12 != v_12)))
            _fail(v_12);
          else
            u_12 = v_12;
        }
        return(t);
      }
      t = copy_to_1(t, p_3);
      {
        ATerm r_3 (ATerm t)
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_12)), term_w_20);
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
ATerm get_outfile_1 (ATerm t, ATerm u_64 (ATerm))
{
  ATerm a_13 = NULL,c_13 = NULL;
  ATerm x_20;
  x_20 = t;
  {
    ATerm b_13 = NULL;
    t = u_64(t);
    {
      b_13 = t;
      if(((a_13 != NULL) && (a_13 != b_13)))
        _fail(b_13);
      else
        a_13 = b_13;
    }
  }
  t = x_20;
  {
    ATerm d_13 = NULL;
    t = term_y_20;
    {
      t = get_config_0(t);
      {
        d_13 = t;
        if(((c_13 != NULL) && (c_13 != d_13)))
          _fail(d_13);
        else
          c_13 = d_13;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(c_13), not_null(a_13));
      t = conc_strings_0(t);
    }
  }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm k_13 = NULL;
  k_13 = t;
  j_13 :
  if(match_cons(k_13, sym_stderr_0))
    {
      ATerm m_13 = NULL,o_13 = NULL;
      ATerm z_20;
      z_20 = t;
      {
        ATerm n_13 = NULL;
        t = SSLgetAnnotations(not_null(k_13));
        {
          n_13 = t;
          if(((m_13 != NULL) && (m_13 != n_13)))
            _fail(n_13);
          else
            m_13 = n_13;
        }
      }
      t = z_20;
      {
        ATerm p_13 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(m_13));
        {
          p_13 = t;
          if(((o_13 != NULL) && (o_13 != p_13)))
            _fail(p_13);
          else
            o_13 = p_13;
        }
        t = not_null(o_13);
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
  ATerm x_13 = NULL;
  x_13 = t;
  w_13 :
  if(match_cons(x_13, sym_stdout_0))
    {
      ATerm z_13 = NULL,b_14 = NULL;
      ATerm a_21;
      a_21 = t;
      {
        ATerm a_14 = NULL;
        t = SSLgetAnnotations(not_null(x_13));
        {
          a_14 = t;
          if(((z_13 != NULL) && (z_13 != a_14)))
            _fail(a_14);
          else
            z_13 = a_14;
        }
      }
      t = a_21;
      {
        ATerm c_14 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(z_13));
        {
          c_14 = t;
          if(((b_14 != NULL) && (b_14 != c_14)))
            _fail(c_14);
          else
            b_14 = c_14;
        }
        t = not_null(b_14);
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
  ATerm l_14 = NULL,m_14 = NULL;
  l_14 = t;
  k_14 :
  if(match_cons(l_14, sym_FILE_1))
    {
      m_14 = ATgetArgument(l_14, 0);
      {
        ATerm b_21 = t;
        int c_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_14 = NULL;
            ATerm p_14 = NULL;
            t = q_0(t);
            {
              p_14 = t;
              {
                if(((o_14 != NULL) && (o_14 != p_14)))
                  _fail(p_14);
                else
                  o_14 = p_14;
                {
                  ATerm k_21 = t;
                  int p_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(p_21);
                    }
                  else
                    {
                      t = k_21;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(m_14), not_null(o_14));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(m_14));
            LocalPopChoice(c_21);
          }
        else
          {
            t = b_21;
            {
              ATerm r_14 = NULL;
              ATerm s_14 = NULL;
              t = q_0(t);
              {
                s_14 = t;
                {
                  if(((r_14 != NULL) && (r_14 != s_14)))
                    _fail(s_14);
                  else
                    r_14 = s_14;
                  {
                    ATerm q_21 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm r_21 = t;
                        int s_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = stdout_0(t);
                            LocalPopChoice(s_21);
                          }
                        else
                          {
                            t = r_21;
                            t = stderr_0(t);
                          }
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = q_21;
                      }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(m_14), not_null(r_14));
                      t = copy_file_0(t);
                    }
                  }
                }
              }
              t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(m_14));
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
  ATerm y_14 = NULL;
  ATerm t_21 = t;
  int u_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_21;
      v_21 = t;
      {
        t = term_w_21;
        t = get_config_0(t);
      }
      t = v_21;
      {
        ATerm s_3 (ATerm t)
        {
          ATerm z_14 = NULL;
          ATerm v_3 (ATerm t)
          {
            t = term_x_21;
            return(t);
          }
          t = get_outfile_1(t, v_3);
          {
            z_14 = t;
            if(((y_14 != NULL) && (y_14 != z_14)))
              _fail(z_14);
            else
              y_14 = z_14;
          }
          return(t);
        }
        t = copy_to_1(t, s_3);
        {
          ATerm y_21;
          y_21 = t;
          {
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_14)), term_z_21);
            t = echo_0(t);
          }
          t = y_21;
        }
      }
      LocalPopChoice(u_21);
    }
  else
    {
      t = t_21;
      {
      }
    }
  return(t);
}
ATerm pass_keep_0 (ATerm t)
{
  ATerm d_15 = NULL;
  ATerm e_15 = NULL,g_15 = NULL;
  ATerm f_15 = NULL;
  t = term_o_19;
  {
    ATerm a_22 = t;
    int b_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(b_22);
      }
    else
      {
        t = a_22;
        t = term_c_22;
      }
    {
      f_15 = t;
      if(((e_15 != NULL) && (e_15 != f_15)))
        _fail(f_15);
      else
        e_15 = f_15;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_15), term_c_22);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          g_15 = t;
          if(((d_15 != NULL) && (d_15 != g_15)))
            _fail(g_15);
          else
            d_15 = g_15;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_15)), term_o_19);
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm k_15 = NULL;
  k_15 = t;
  t = SSL_int_to_string(not_null(k_15));
  return(t);
}
ATerm pass_verbose_0 (ATerm t)
{
  ATerm p_15 = NULL;
  ATerm q_15 = NULL,s_15 = NULL;
  ATerm r_15 = NULL;
  t = term_w_14;
  {
    ATerm d_22 = t;
    int e_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(e_22);
      }
    else
      {
        t = d_22;
        t = term_c_22;
      }
    {
      r_15 = t;
      if(((q_15 != NULL) && (q_15 != r_15)))
        _fail(r_15);
      else
        q_15 = r_15;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_15), term_c_22);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          s_15 = t;
          if(((p_15 != NULL) && (p_15 != s_15)))
            _fail(s_15);
          else
            p_15 = s_15;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_15)), term_w_14);
  return(t);
}
ATerm dep_name_0 (ATerm t)
{
  ATerm w_15 = NULL;
  ATerm x_15 = NULL;
  ATerm f_22 = t;
  int g_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_15;
      t = get_config_0(t);
      LocalPopChoice(g_22);
    }
  else
    {
      t = f_22;
      {
        t = term_h_22;
        t = get_config_0(t);
      }
    }
  {
    x_15 = t;
    if(((w_15 != NULL) && (w_15 != x_15)))
      _fail(x_15);
    else
      w_15 = x_15;
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_15)), term_i_22);
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm e_16 = NULL,f_16 = NULL;
  e_16 = t;
  d_16 :
  if(match_cons(e_16, sym_stdin_0))
    {
      ATerm g_16 = NULL;
      ATerm h_16 = NULL;
      t = term_j_22;
      {
        t = ReadFromFile_0(t);
        {
          h_16 = t;
          if(((g_16 != NULL) && (g_16 != h_16)))
            _fail(h_16);
          else
            g_16 = h_16;
        }
      }
      t = not_null(g_16);
    }
  else
    {
      if(match_cons(e_16, sym_FILE_1))
        {
          f_16 = ATgetArgument(e_16, 0);
          {
            ATerm j_16 = NULL;
            ATerm k_16 = NULL;
            t = not_null(f_16);
            {
              t = ReadFromFile_0(t);
              {
                k_16 = t;
                if(((j_16 != NULL) && (j_16 != k_16)))
                  _fail(k_16);
                else
                  j_16 = k_16;
              }
            }
            t = not_null(j_16);
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
  ATerm r_16 = NULL,s_16 = NULL,t_16 = NULL;
  r_16 = t;
  q_16 :
  if(match_cons(r_16, sym__2))
    {
      s_16 = ATgetArgument(r_16, 0);
      t_16 = ATgetArgument(r_16, 1);
      t = SSL_WriteToBinaryFile(not_null(s_16), not_null(t_16));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm z_16 = NULL;
  ATerm b_17 = NULL;
  z_16 = t;
  {
    ATerm c_17 = NULL;
    t = xtc_new_file_0(t);
    {
      c_17 = t;
      {
        if(((b_17 != NULL) && (b_17 != c_17)))
          _fail(c_17);
        else
          b_17 = c_17;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_17), not_null(z_16));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(b_17);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(b_17));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm j_93 (ATerm), ATerm k_93 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, j_93, k_93);
    t = read_from_0(t);
  }
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm g_17 = NULL;
  g_17 = t;
  t = SSL_close_file(not_null(g_17));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm l_17 = NULL,m_17 = NULL,n_17 = NULL;
  l_17 = t;
  k_17 :
  if(match_cons(l_17, sym__2))
    {
      m_17 = ATgetArgument(l_17, 0);
      n_17 = ATgetArgument(l_17, 1);
      t = SSL_execvp(not_null(m_17), not_null(n_17));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm s_17 = NULL;
  s_17 = t;
  t = SSL_waitpid(not_null(s_17));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm r_89 (ATerm))
{
  ATerm c_18 = NULL;
  ATerm e_18 = NULL;
  c_18 = t;
  {
    t = fork_0(t);
    {
      e_18 = t;
      {
        ATerm k_22 = t;
        int l_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_18 = NULL;
            g_18 = t;
            y_17 :
            if(match_int(g_18, 0))
              {
                t = not_null(c_18);
                t = r_89(t);
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(l_22);
          }
        else
          {
            t = k_22;
            {
              ATerm h_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL;
              t = not_null(e_18);
              {
                t = waitpid_0(t);
                {
                  h_18 = t;
                  a_18 :
                  if(match_cons(h_18, sym_WaitStatus_3))
                    {
                      i_18 = ATgetArgument(h_18, 0);
                      j_18 = ATgetArgument(h_18, 1);
                      k_18 = ATgetArgument(h_18, 2);
                      b_18 :
                      if(match_int(i_18, 0))
                        {
                          t = not_null(c_18);
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
  ATerm r_18 = NULL,s_18 = NULL,t_18 = NULL;
  r_18 = t;
  q_18 :
  if(match_cons(r_18, sym__2))
    {
      s_18 = ATgetArgument(r_18, 0);
      t_18 = ATgetArgument(r_18, 1);
      {
        ATerm y_3 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_18), not_null(t_18));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, y_3);
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
ATerm xtc_command_1 (ATerm t, ATerm a_93 (ATerm))
{
  ATerm z_18 = NULL;
  ATerm o_22;
  o_22 = t;
  {
    ATerm a_19 = NULL;
    t = a_93(t);
    {
      t = xtc_find_0(t);
      {
        a_19 = t;
        if(((z_18 != NULL) && (z_18 != a_19)))
          _fail(a_19);
        else
          z_18 = a_19;
      }
    }
  }
  t = o_22;
  {
    ATerm t_22;
    t_22 = t;
    {
      ATerm b_19 = NULL;
      ATerm c_19 = NULL;
      c_19 = t;
      if(((b_19 != NULL) && (b_19 != c_19)))
        _fail(c_19);
      else
        b_19 = c_19;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_18), not_null(b_19));
        t = call_0(t);
      }
    }
    t = t_22;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm e_83 (ATerm))
{
  ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL;
  k_19 = t;
  j_19 :
  if(match_cons(k_19, sym__2))
    {
      l_19 = ATgetArgument(k_19, 0);
      m_19 = ATgetArgument(k_19, 1);
      {
        ATerm p_19 = NULL,q_19 = NULL,r_19 = NULL;
        ATerm u_22;
        u_22 = t;
        {
          ATerm s_19 = NULL;
          ATerm t_19 = NULL,u_19 = NULL,v_19 = NULL;
          t = e_83(t);
          {
            s_19 = t;
            {
              if(((p_19 != NULL) && (p_19 != s_19)))
                _fail(s_19);
              else
                p_19 = s_19;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(p_19), not_null(l_19), not_null(m_19));
                {
                  t = table_push_0(t);
                  {
                    ATerm v_22 = t;
                    int w_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(p_19), term_x_22);
                        t = table_get_0(t);
                        LocalPopChoice(w_22);
                      }
                    else
                      {
                        t = v_22;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      t_19 = t;
                      i_19 :
                      if(((ATgetType(t_19) == AT_LIST) && !(ATisEmpty(t_19))))
                        {
                          u_19 = ATgetFirst((ATermList) t_19);
                          v_19 = (ATerm) ATgetNext((ATermList) t_19);
                          {
                            if(((q_19 != NULL) && (q_19 != u_19)))
                              _fail(u_19);
                            else
                              q_19 = u_19;
                            {
                              if(((r_19 != NULL) && (r_19 != v_19)))
                                _fail(v_19);
                              else
                                r_19 = v_19;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(p_19), term_x_22, (ATerm) ATinsert(CheckATermList(not_null(r_19)), (ATerm) ATinsert(CheckATermList(not_null(q_19)), not_null(l_19))));
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
        t = u_22;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm s_83 (ATerm))
{
  ATerm y_22;
  y_22 = t;
  {
    t = s_83(t);
    {
      ATerm c_4 (ATerm t)
      {
        t = term_z_22;
        return(t);
      }
      t = debug_1(t, c_4);
    }
  }
  t = y_22;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm d_20 = NULL,e_20 = NULL;
  ATerm d_23 = t;
  int e_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_20 = NULL,g_20 = NULL,h_20 = NULL;
      f_20 = t;
      a_20 :
      if(match_cons(f_20, sym__2))
        {
          g_20 = ATgetArgument(f_20, 0);
          h_20 = ATgetArgument(f_20, 1);
          {
            if(((e_20 != NULL) && (e_20 != g_20)))
              _fail(g_20);
            else
              e_20 = g_20;
            if(((d_20 != NULL) && (d_20 != h_20)))
              _fail(h_20);
            else
              d_20 = h_20;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(e_23);
      t = SSL_open_file(not_null(e_20), not_null(d_20));
    }
  else
    {
      t = d_23;
      {
        ATerm i_20 = NULL;
        ATerm j_20 = NULL;
        ATerm d_4 (ATerm t)
        {
          t = term_i_23;
          return(t);
        }
        t = obsolete_1(t, d_4);
        {
          i_20 = t;
          {
            if(((e_20 != NULL) && (e_20 != i_20)))
              _fail(i_20);
            else
              e_20 = i_20;
            {
              ATerm l_23;
              l_23 = t;
              {
                ATerm k_20 = NULL;
                t = term_m_23;
                {
                  k_20 = t;
                  if(((j_20 != NULL) && (j_20 != k_20)))
                    _fail(k_20);
                  else
                    j_20 = k_20;
                }
              }
              t = l_23;
              t = SSL_open_file(not_null(e_20), not_null(j_20));
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
  ATerm p_20 = NULL;
  ATerm q_20 = NULL;
  t = term_l_20;
  {
    t = new_0(t);
    {
      q_20 = t;
      if(((p_20 != NULL) && (p_20 != q_20)))
        _fail(q_20);
      else
        p_20 = q_20;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_20), term_n_23);
    {
      t = conc_strings_0(t);
      {
        ATerm o_23 = t;
        int p_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = file_exists_0(t);
            t = new_file_0(t);
            LocalPopChoice(p_23);
          }
        else
          {
            t = o_23;
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
  ATerm u_20 = NULL;
  t = new_file_0(t);
  {
    u_20 = t;
    {
      ATerm q_23;
      q_23 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_20), term_m_23);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(u_20), term_l_20);
            {
              ATerm e_4 (ATerm t)
              {
                t = term_r_23;
                return(t);
              }
              t = assert_1(t, e_4);
            }
          }
        }
      }
      t = q_23;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm o_0 (ATerm), ATerm p_0 (ATerm))
{
  ATerm e_21 = NULL,f_21 = NULL;
  e_21 = t;
  d_21 :
  if(match_cons(e_21, sym_stdin_0))
    {
      ATerm g_21 = NULL;
      ATerm h_21 = NULL;
      ATerm i_21 = NULL;
      t = xtc_new_file_0(t);
      {
        h_21 = t;
        {
          if(((g_21 != NULL) && (g_21 != h_21)))
            _fail(h_21);
          else
            g_21 = h_21;
          {
            ATerm j_21 = NULL;
            t = p_0(t);
            {
              j_21 = t;
              if(((i_21 != NULL) && (i_21 != j_21)))
                _fail(j_21);
              else
                i_21 = j_21;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(i_21), (ATerm) ATinsert(ATinsert(ATempty, not_null(g_21)), term_i_15));
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
                {
                  t = xtc_command_1(t, o_0);
                  {
                    t = not_null(g_21);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_21));
    }
  else
    {
      if(match_cons(e_21, sym_FILE_1))
        {
          f_21 = ATgetArgument(e_21, 0);
          {
            ATerm l_21 = NULL;
            ATerm m_21 = NULL;
            t = not_null(f_21);
            {
              ATerm n_21 = NULL;
              t = xtc_new_file_0(t);
              {
                m_21 = t;
                {
                  if(((l_21 != NULL) && (l_21 != m_21)))
                    _fail(m_21);
                  else
                    l_21 = m_21;
                  {
                    ATerm o_21 = NULL;
                    t = p_0(t);
                    {
                      o_21 = t;
                      if(((n_21 != NULL) && (n_21 != o_21)))
                        _fail(o_21);
                      else
                        n_21 = o_21;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(n_21), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(l_21)), term_i_15), not_null(f_21)), term_u_23));
                      {
                        ATerm x_23 = t;
                        int d_24 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = conc_two_lists_0(t);
                            LocalPopChoice(d_24);
                          }
                        else
                          {
                            t = x_23;
                            t = conc_more_lists_0(t);
                          }
                        {
                          t = xtc_command_1(t, o_0);
                          {
                            t = not_null(l_21);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(l_21));
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
  ATerm n_22 = NULL;
  n_22 = t;
  m_22 :
  if(match_cons(n_22, sym_stdin_0))
    {
      ATerm p_22 = NULL,r_22 = NULL;
      ATerm e_24;
      e_24 = t;
      {
        ATerm q_22 = NULL;
        t = SSLgetAnnotations(not_null(n_22));
        {
          q_22 = t;
          if(((p_22 != NULL) && (p_22 != q_22)))
            _fail(q_22);
          else
            p_22 = q_22;
        }
      }
      t = e_24;
      {
        ATerm s_22 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(p_22));
        {
          s_22 = t;
          if(((r_22 != NULL) && (r_22 != s_22)))
            _fail(s_22);
          else
            r_22 = s_22;
        }
        t = not_null(r_22);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm o_59 (ATerm))
{
  ATerm b_23 = NULL,c_23 = NULL;
  b_23 = t;
  a_23 :
  if(match_cons(b_23, sym_FILE_1))
    {
      c_23 = ATgetArgument(b_23, 0);
      {
        ATerm f_23 = NULL,h_23 = NULL;
        ATerm g_23 = NULL;
        t = SSLgetAnnotations(not_null(b_23));
        {
          g_23 = t;
          if(((f_23 != NULL) && (f_23 != g_23)))
            _fail(g_23);
          else
            f_23 = g_23;
        }
        {
          t = not_null(c_23);
          {
            ATerm j_23 = NULL;
            t = o_59(t);
            {
              h_23 = t;
              {
                ATerm k_23 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(h_23)), not_null(f_23));
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
ATerm xtc_transform_2 (ATerm t, ATerm c_93 (ATerm), ATerm d_93 (ATerm))
{
  ATerm f_24 = t;
  int g_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_24 = t;
      int i_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(i_24);
        }
      else
        {
          t = h_24;
          t = stdin_0(t);
        }
      LocalPopChoice(g_24);
      t = xtc_transform_file_2(t, c_93, d_93);
    }
  else
    {
      t = f_24;
      t = xtc_transform_term_2(t, c_93, d_93);
    }
  return(t);
}
ATerm if_verbose3_1 (ATerm t, ATerm j_86 (ATerm))
{
  ATerm j_24 = t;
  int n_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_24;
      s_24 = t;
      {
        ATerm v_23 = NULL;
        ATerm w_23 = NULL;
        t = term_w_14;
        {
          t = get_config_0(t);
          {
            w_23 = t;
            if(((v_23 != NULL) && (v_23 != w_23)))
              _fail(w_23);
            else
              v_23 = w_23;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_23), term_c_20);
          t = geq_0(t);
        }
      }
      t = s_24;
      t = j_86(t);
      LocalPopChoice(n_24);
    }
  else
    {
      t = j_24;
      {
      }
    }
  return(t);
}
ATerm basename_1 (ATerm t, ATerm x_81 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm t_24 = t;
    int u_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_24 (ATerm t)
        {
          ATerm v_24 = t;
          int w_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, c_24);
              LocalPopChoice(w_24);
            }
          else
            {
              t = v_24;
              {
                ATerm x_24 = t;
                int y_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm f_4 (ATerm t)
                    {
                      ATerm a_24 = NULL;
                      a_24 = t;
                      y_23 :
                      if(!(match_int(a_24, 47)))
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = Cons_2(t, f_4, _id);
                    LocalPopChoice(y_24);
                  }
                else
                  {
                    t = x_24;
                    {
                      ATerm i_4 (ATerm t)
                      {
                        ATerm b_24 = NULL;
                        b_24 = t;
                        z_23 :
                        if(!(match_int(b_24, 46)))
                          {
                            _fail(t);
                          }
                        return(t);
                      }
                      t = Cons_2(t, i_4, x_81);
                      t = (ATerm) ATempty;
                    }
                  }
              }
            }
          return(t);
        }
        t = c_24(t);
        LocalPopChoice(u_24);
      }
    else
      {
        t = t_24;
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
  ATerm l_24 = NULL,m_24 = NULL;
  l_24 = t;
  k_24 :
  if(match_cons(l_24, sym_FILE_1))
    {
      m_24 = ATgetArgument(l_24, 0);
      {
        ATerm o_24 = NULL,p_24 = NULL;
        ATerm q_24 = NULL;
        t = not_null(m_24);
        {
          ATerm r_24 = NULL;
          t = basename_1(t, _id);
          {
            q_24 = t;
            {
              if(((o_24 != NULL) && (o_24 != q_24)))
                _fail(q_24);
              else
                o_24 = q_24;
              {
                ATerm j_4 (ATerm t)
                {
                  ATerm k_4 (ATerm t)
                  {
                    t = term_h_25;
                    return(t);
                  }
                  t = debug_1(t, k_4);
                  return(t);
                }
                t = if_verbose3_1(t, j_4);
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_i_25, not_null(o_24));
                  {
                    t = set_config_0(t);
                    {
                      ATerm j_25 = t;
                      int k_25 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = term_i_15;
                          {
                            t = get_config_0(t);
                            t = basename_1(t, _id);
                          }
                          LocalPopChoice(k_25);
                        }
                      else
                        {
                          t = j_25;
                          t = not_null(o_24);
                        }
                      {
                        r_24 = t;
                        {
                          if(((p_24 != NULL) && (p_24 != r_24)))
                            _fail(r_24);
                          else
                            p_24 = r_24;
                          {
                            ATerm l_4 (ATerm t)
                            {
                              ATerm r_4 (ATerm t)
                              {
                                t = term_l_25;
                                return(t);
                              }
                              t = debug_1(t, r_4);
                              return(t);
                            }
                            t = if_verbose3_1(t, l_4);
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_y_20, not_null(p_24));
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
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(o_24));
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
    ATerm w_4 (ATerm t)
    {
      t = term_o_25;
      return(t);
    }
    ATerm e_5 (ATerm t)
    {
      ATerm z_24 = NULL,b_25 = NULL,d_25 = NULL,f_25 = NULL;
      ATerm p_25;
      p_25 = t;
      {
        ATerm a_25 = NULL;
        t = dep_name_0(t);
        {
          a_25 = t;
          if(((z_24 != NULL) && (z_24 != a_25)))
            _fail(a_25);
          else
            z_24 = a_25;
        }
      }
      t = p_25;
      {
        ATerm u_25;
        u_25 = t;
        {
          ATerm c_25 = NULL;
          t = pass_verbose_0(t);
          {
            c_25 = t;
            if(((b_25 != NULL) && (b_25 != c_25)))
              _fail(c_25);
            else
              b_25 = c_25;
          }
        }
        t = u_25;
        {
          ATerm v_25;
          v_25 = t;
          {
            ATerm e_25 = NULL;
            t = pass_keep_0(t);
            {
              e_25 = t;
              if(((d_25 != NULL) && (d_25 != e_25)))
                _fail(e_25);
              else
                d_25 = e_25;
            }
          }
          t = v_25;
          {
            ATerm g_25 = NULL;
            t = term_w_25;
            {
              t = get_config_0(t);
              {
                g_25 = t;
                if(((f_25 != NULL) && (f_25 != g_25)))
                  _fail(g_25);
                else
                  f_25 = g_25;
              }
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(d_25)), not_null(b_25)), not_null(f_25)), not_null(z_24));
              t = concat_0(t);
            }
          }
        }
      }
      return(t);
    }
    t = xtc_transform_2(t, w_4, e_5);
  }
  return(t);
}
ATerm front_end_0 (ATerm t)
{
  ATerm f_5 (ATerm t)
  {
    ATerm g_5 (ATerm t)
    {
      t = term_x_25;
      return(t);
    }
    t = debug_1(t, g_5);
    return(t);
  }
  t = if_verbose2_1(t, f_5);
  {
    ATerm h_5 (ATerm t)
    {
      ATerm j_5 (ATerm t)
      {
        ATerm m_25 = NULL;
        ATerm n_25 = NULL;
        n_25 = t;
        if(((m_25 != NULL) && (m_25 != n_25)))
          _fail(n_25);
        else
          m_25 = n_25;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_m_15, (ATerm) ATinsert(CheckATermList(not_null(m_25)), term_c_26));
          t = printnl_0(t);
        }
        return(t);
      }
      t = if_verbose1_1(t, j_5);
      return(t);
    }
    ATerm i_5 (ATerm t)
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
    t = profile_p__2(t, h_5, i_5);
  }
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm r_25 = NULL,s_25 = NULL,t_25 = NULL;
  r_25 = t;
  q_25 :
  if(((ATgetType(r_25) == AT_LIST) && !(ATisEmpty(r_25))))
    {
      s_25 = ATgetFirst((ATermList) r_25);
      t_25 = (ATerm) ATgetNext((ATermList) r_25);
      t = not_null(t_25);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm z_25 = NULL,a_26 = NULL,b_26 = NULL;
  z_25 = t;
  y_25 :
  if(match_cons(z_25, sym__2))
    {
      a_26 = ATgetArgument(z_25, 0);
      b_26 = ATgetArgument(z_25, 1);
      {
        ATerm d_26;
        d_26 = t;
        {
          ATerm e_26 = NULL;
          ATerm f_26 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_26), not_null(b_26));
          {
            ATerm g_26 = t;
            int h_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(h_26);
              }
            else
              {
                t = g_26;
                t = (ATerm) ATempty;
              }
            {
              f_26 = t;
              if(((e_26 != NULL) && (e_26 != f_26)))
                _fail(f_26);
              else
                e_26 = f_26;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(a_26), not_null(b_26), not_null(e_26));
            t = table_put_0(t);
          }
        }
        t = d_26;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm b_83 (ATerm))
{
  ATerm m_26 = NULL,n_26 = NULL,o_26 = NULL;
  ATerm i_26;
  i_26 = t;
  {
    ATerm p_26 = NULL;
    ATerm q_26 = NULL,r_26 = NULL,s_26 = NULL;
    t = b_83(t);
    {
      p_26 = t;
      {
        if(((o_26 != NULL) && (o_26 != p_26)))
          _fail(p_26);
        else
          o_26 = p_26;
        {
          ATerm j_26 = t;
          int k_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(o_26), term_x_22);
              t = table_get_0(t);
              LocalPopChoice(k_26);
            }
          else
            {
              t = j_26;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            q_26 = t;
            l_26 :
            if(((ATgetType(q_26) == AT_LIST) && !(ATisEmpty(q_26))))
              {
                r_26 = ATgetFirst((ATermList) q_26);
                s_26 = (ATerm) ATgetNext((ATermList) q_26);
                {
                  if(((n_26 != NULL) && (n_26 != r_26)))
                    _fail(r_26);
                  else
                    n_26 = r_26;
                  {
                    if(((m_26 != NULL) && (m_26 != s_26)))
                      _fail(s_26);
                    else
                      m_26 = s_26;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(o_26), term_x_22, not_null(m_26));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(n_26);
                          {
                            ATerm o_5 (ATerm t)
                            {
                              ATerm t_26 = NULL;
                              t_26 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(o_26), not_null(t_26));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, o_5);
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
  t = i_26;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm z_26 = NULL;
  z_26 = t;
  t = SSL_remove(not_null(z_26));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm g_65 (ATerm), ATerm h_65 (ATerm))
{
  ATerm u_26 = t;
  int v_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_65(t);
      t = h_65(t);
      LocalPopChoice(v_26);
    }
  else
    {
      t = u_26;
      {
        t = h_65(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm a_83 (ATerm))
{
  ATerm e_27 = NULL;
  ATerm w_26;
  w_26 = t;
  {
    ATerm f_27 = NULL;
    ATerm g_27 = NULL;
    t = a_83(t);
    {
      f_27 = t;
      {
        if(((e_27 != NULL) && (e_27 != f_27)))
          _fail(f_27);
        else
          e_27 = f_27;
        {
          ATerm h_27 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_27), term_x_22);
          {
            ATerm x_26 = t;
            int y_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(y_26);
              }
            else
              {
                t = x_26;
                t = (ATerm) ATempty;
              }
            {
              h_27 = t;
              if(((g_27 != NULL) && (g_27 != h_27)))
                _fail(h_27);
              else
                g_27 = h_27;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(e_27), term_x_22, (ATerm) ATinsert(CheckATermList(not_null(g_27)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = w_26;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm q_92 (ATerm))
{
  ATerm m_27 = NULL,n_27 = NULL;
  ATerm s_5 (ATerm t)
  {
    t = term_r_23;
    return(t);
  }
  t = begin_scope_1(t, s_5);
  {
    ATerm y_5 (ATerm t)
    {
      ATerm a_27;
      a_27 = t;
      {
        ATerm o_27 = NULL,p_27 = NULL,q_27 = NULL;
        ATerm b_27 = t;
        int c_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_d_27;
            t = table_get_0(t);
            LocalPopChoice(c_27);
          }
        else
          {
            t = b_27;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          o_27 = t;
          l_27 :
          if(((ATgetType(o_27) == AT_LIST) && !(ATisEmpty(o_27))))
            {
              p_27 = ATgetFirst((ATermList) o_27);
              q_27 = (ATerm) ATgetNext((ATermList) o_27);
              {
                if(((n_27 != NULL) && (n_27 != p_27)))
                  _fail(p_27);
                else
                  n_27 = p_27;
                {
                  if(((m_27 != NULL) && (m_27 != q_27)))
                    _fail(q_27);
                  else
                    m_27 = q_27;
                  {
                    t = not_null(n_27);
                    {
                      ATerm z_5 (ATerm t)
                      {
                        ATerm i_27 = t;
                        int j_27 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = remove_file_0(t);
                            LocalPopChoice(j_27);
                          }
                        else
                          {
                            t = i_27;
                            {
                            }
                          }
                        return(t);
                      }
                      t = map_1(t, z_5);
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
      t = a_27;
      {
        ATerm a_6 (ATerm t)
        {
          t = term_r_23;
          return(t);
        }
        t = end_scope_1(t, a_6);
      }
      return(t);
    }
    t = restore_always_2(t, q_92, y_5);
  }
  return(t);
}
ATerm xtc_input_1 (ATerm t, ATerm t_92 (ATerm))
{
  ATerm b_6 (ATerm t)
  {
    ATerm k_27 = t;
    int r_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_27 = NULL;
        ATerm u_27 = NULL;
        t = term_u_23;
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
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(t_27));
        LocalPopChoice(r_27);
      }
    else
      {
        t = k_27;
        t = term_j_22;
      }
    t = t_92(t);
    return(t);
  }
  t = xtc_temp_files_1(t, b_6);
  return(t);
}
ATerm compile_0 (ATerm t)
{
  ATerm c_6 (ATerm t)
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
  t = xtc_input_1(t, c_6);
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm h_86 (ATerm))
{
  ATerm s_27 = t;
  int v_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_27;
      w_27 = t;
      {
        ATerm x_27 = NULL;
        ATerm y_27 = NULL;
        t = term_w_14;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_27), term_c_22);
          t = geq_0(t);
        }
      }
      t = w_27;
      t = h_86(t);
      LocalPopChoice(v_27);
    }
  else
    {
      t = s_27;
      {
      }
    }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm b_28 = NULL;
  b_28 = t;
  t = SSL_TicksToSeconds(not_null(b_28));
  return(t);
}
ATerm self_children_sys_time_0 (ATerm t)
{
  ATerm g_28 = NULL,h_28 = NULL,i_28 = NULL,j_28 = NULL,k_28 = NULL;
  g_28 = t;
  f_28 :
  if(match_cons(g_28, sym__4))
    {
      h_28 = ATgetArgument(g_28, 0);
      i_28 = ATgetArgument(g_28, 1);
      j_28 = ATgetArgument(g_28, 2);
      k_28 = ATgetArgument(g_28, 3);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_28), not_null(k_28));
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
  ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL;
  s_28 = t;
  r_28 :
  if(match_cons(s_28, sym__2))
    {
      t_28 = ATgetArgument(s_28, 0);
      u_28 = ATgetArgument(s_28, 1);
      {
        ATerm z_27 = t;
        int a_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(t_28), not_null(u_28));
            LocalPopChoice(a_28);
          }
        else
          {
            t = z_27;
            t = SSL_addr(not_null(t_28), not_null(u_28));
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
  ATerm d_29 = NULL,e_29 = NULL,i_29 = NULL,j_29 = NULL,k_29 = NULL;
  d_29 = t;
  a_29 :
  if(match_cons(d_29, sym__4))
    {
      e_29 = ATgetArgument(d_29, 0);
      i_29 = ATgetArgument(d_29, 1);
      j_29 = ATgetArgument(d_29, 2);
      k_29 = ATgetArgument(d_29, 3);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_29), not_null(j_29));
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
  ATerm u_29 = NULL,v_29 = NULL,w_29 = NULL;
  u_29 = t;
  t_29 :
  if(match_cons(u_29, sym__2))
    {
      v_29 = ATgetArgument(u_29, 0);
      w_29 = ATgetArgument(u_29, 1);
      {
        ATerm c_28 = t;
        int d_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(v_29), not_null(w_29));
            LocalPopChoice(d_28);
          }
        else
          {
            t = c_28;
            t = SSL_subtr(not_null(v_29), not_null(w_29));
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
  ATerm i_30 = NULL,j_30 = NULL,k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL,o_30 = NULL,p_30 = NULL,q_30 = NULL,r_30 = NULL,s_30 = NULL;
  i_30 = t;
  f_30 :
  if(match_cons(i_30, sym__2))
    {
      j_30 = ATgetArgument(i_30, 0);
      o_30 = ATgetArgument(i_30, 1);
      g_30 :
      if(match_cons(j_30, sym__4))
        {
          k_30 = ATgetArgument(j_30, 0);
          l_30 = ATgetArgument(j_30, 1);
          m_30 = ATgetArgument(j_30, 2);
          n_30 = ATgetArgument(j_30, 3);
          h_30 :
          if(match_cons(o_30, sym__4))
            {
              p_30 = ATgetArgument(o_30, 0);
              q_30 = ATgetArgument(o_30, 1);
              r_30 = ATgetArgument(o_30, 2);
              s_30 = ATgetArgument(o_30, 3);
              {
                ATerm b_31 = NULL,d_31 = NULL,f_31 = NULL,m_31 = NULL;
                ATerm e_28;
                e_28 = t;
                {
                  ATerm c_31 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(k_30), not_null(p_30));
                  {
                    t = subt_0(t);
                    {
                      c_31 = t;
                      if(((b_31 != NULL) && (b_31 != c_31)))
                        _fail(c_31);
                      else
                        b_31 = c_31;
                    }
                  }
                }
                t = e_28;
                {
                  ATerm l_28;
                  l_28 = t;
                  {
                    ATerm e_31 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(l_30), not_null(q_30));
                    {
                      t = subt_0(t);
                      {
                        e_31 = t;
                        if(((d_31 != NULL) && (d_31 != e_31)))
                          _fail(e_31);
                        else
                          d_31 = e_31;
                      }
                    }
                  }
                  t = l_28;
                  {
                    ATerm m_28;
                    m_28 = t;
                    {
                      ATerm l_31 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(m_30), not_null(r_30));
                      {
                        t = subt_0(t);
                        {
                          l_31 = t;
                          if(((f_31 != NULL) && (f_31 != l_31)))
                            _fail(l_31);
                          else
                            f_31 = l_31;
                        }
                      }
                    }
                    t = m_28;
                    {
                      ATerm n_31 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(n_30), not_null(s_30));
                      {
                        t = subt_0(t);
                        {
                          n_31 = t;
                          if(((m_31 != NULL) && (m_31 != n_31)))
                            _fail(n_31);
                          else
                            m_31 = n_31;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym__4, not_null(b_31), not_null(d_31), not_null(f_31), not_null(m_31));
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
ATerm profile_p__2 (ATerm t, ATerm d_84 (ATerm), ATerm e_84 (ATerm))
{
  ATerm x_31 = NULL;
  ATerm n_28;
  n_28 = t;
  {
    ATerm y_31 = NULL;
    t = times_0(t);
    {
      y_31 = t;
      if(((x_31 != NULL) && (x_31 != y_31)))
        _fail(y_31);
      else
        x_31 = y_31;
    }
  }
  t = n_28;
  {
    t = e_84(t);
    {
      ATerm o_28;
      o_28 = t;
      {
        ATerm z_31 = NULL,b_32 = NULL,d_32 = NULL;
        ATerm a_32 = NULL;
        t = times_0(t);
        {
          a_32 = t;
          if(((z_31 != NULL) && (z_31 != a_32)))
            _fail(a_32);
          else
            z_31 = a_32;
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_31), not_null(x_31));
          {
            t = diff_times_0(t);
            {
              ATerm p_28;
              p_28 = t;
              {
                ATerm c_32 = NULL;
                t = self_children_user_time_0(t);
                {
                  t = ticks_to_seconds_0(t);
                  {
                    c_32 = t;
                    if(((b_32 != NULL) && (b_32 != c_32)))
                      _fail(c_32);
                    else
                      b_32 = c_32;
                  }
                }
              }
              t = p_28;
              {
                ATerm e_32 = NULL;
                t = self_children_sys_time_0(t);
                {
                  t = ticks_to_seconds_0(t);
                  {
                    e_32 = t;
                    if(((d_32 != NULL) && (d_32 != e_32)))
                      _fail(e_32);
                    else
                      d_32 = e_32;
                  }
                }
                {
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(d_32)), term_v_28), not_null(b_32)), term_q_28);
                  t = d_84(t);
                }
              }
            }
          }
        }
      }
      t = o_28;
    }
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm l_83 (ATerm))
{
  ATerm w_28;
  w_28 = t;
  {
    ATerm l_32 = NULL,n_32 = NULL;
    ATerm x_28;
    x_28 = t;
    {
      ATerm m_32 = NULL;
      t = l_83(t);
      {
        m_32 = t;
        if(((l_32 != NULL) && (l_32 != m_32)))
          _fail(m_32);
        else
          l_32 = m_32;
      }
    }
    t = x_28;
    {
      ATerm o_32 = NULL;
      o_32 = t;
      if(((n_32 != NULL) && (n_32 != o_32)))
        _fail(o_32);
      else
        n_32 = o_32;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_32)), not_null(l_32)));
        t = printnl_0(t);
      }
    }
  }
  t = w_28;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm s_32 = NULL;
  s_32 = t;
  t = SSL_is_string(not_null(s_32));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm y_28 = t;
  int z_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(z_28);
    }
  else
    {
      t = y_28;
      {
        ATerm b_29 = t;
        int c_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_6 (ATerm t)
            {
              ATerm f_29 = t;
              int g_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(g_29);
                }
              else
                {
                  t = f_29;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, d_6);
            LocalPopChoice(c_29);
          }
        else
          {
            t = b_29;
            {
              ATerm b_33 = NULL,c_33 = NULL,d_33 = NULL;
              b_33 = t;
              a_33 :
              if(match_cons(b_33, sym_Path_1))
                {
                  c_33 = ATgetArgument(b_33, 0);
                  t = not_null(c_33);
                }
              else
                {
                  if(match_cons(b_33, sym_Var_1))
                    {
                      c_33 = ATgetArgument(b_33, 0);
                      {
                        t = not_null(c_33);
                        {
                          ATerm h_29 = t;
                          int l_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(l_29);
                            }
                          else
                            {
                              t = h_29;
                              {
                                ATerm e_6 (ATerm t)
                                {
                                  t = term_m_29;
                                  return(t);
                                }
                                t = debug_1(t, e_6);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(b_33, sym_Prefix_2))
                        {
                          c_33 = ATgetArgument(b_33, 0);
                          d_33 = ATgetArgument(b_33, 1);
                          {
                            ATerm i_33 = NULL,k_33 = NULL;
                            ATerm n_29;
                            n_29 = t;
                            {
                              ATerm j_33 = NULL;
                              t = not_null(c_33);
                              {
                                t = eval_config_0(t);
                                {
                                  j_33 = t;
                                  if(((i_33 != NULL) && (i_33 != j_33)))
                                    _fail(j_33);
                                  else
                                    i_33 = j_33;
                                }
                              }
                            }
                            t = n_29;
                            {
                              ATerm l_33 = NULL;
                              t = not_null(d_33);
                              {
                                t = eval_config_0(t);
                                {
                                  l_33 = t;
                                  if(((k_33 != NULL) && (k_33 != l_33)))
                                    _fail(l_33);
                                  else
                                    k_33 = l_33;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(i_33), not_null(k_33));
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
  ATerm t_33 = NULL;
  t_33 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_o_29, not_null(t_33));
    {
      t = table_get_0(t);
      {
        ATerm p_29 = t;
        int q_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm r_29;
              r_29 = t;
              {
                ATerm v_33 = NULL;
                ATerm w_33 = NULL;
                w_33 = t;
                if(((v_33 != NULL) && (v_33 != w_33)))
                  _fail(w_33);
                else
                  v_33 = w_33;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_o_29, not_null(t_33), not_null(v_33));
                  t = table_put_0(t);
                }
              }
              t = r_29;
            }
            LocalPopChoice(q_29);
          }
        else
          {
            t = p_29;
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
  ATerm s_29;
  s_29 = t;
  {
    t = error_0(t);
    {
      t = term_c_22;
      t = exit_0(t);
    }
  }
  t = s_29;
  return(t);
}
ATerm sc_version_0 (ATerm t)
{
  ATerm x_29 = t;
  int y_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_29;
      z_29 = t;
      {
        ATerm b_34 = NULL;
        ATerm c_34 = NULL;
        t = term_a_30;
        {
          t = get_config_0(t);
          {
            c_34 = t;
            if(((b_34 != NULL) && (b_34 != c_34)))
              _fail(c_34);
            else
              b_34 = c_34;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_n_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_30), term_v_30), term_u_30), term_t_30), term_e_30), term_d_30), term_c_30), not_null(b_34)), term_b_30));
          t = printnl_0(t);
        }
      }
      t = z_29;
      LocalPopChoice(y_29);
    }
  else
    {
      t = x_29;
      {
        ATerm d_34 = NULL;
        d_34 = t;
        a_34 :
        if(!(match_string(d_34, "0.9beta8")))
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm w_64 (ATerm))
{
  ATerm x_30 = t;
  int y_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_64(t);
      LocalPopChoice(y_30);
    }
  else
    {
      t = x_30;
      {
      }
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm h_34 = NULL,i_34 = NULL,j_34 = NULL;
  h_34 = t;
  g_34 :
  if(match_cons(h_34, sym__2))
    {
      i_34 = ATgetArgument(h_34, 0);
      j_34 = ATgetArgument(h_34, 1);
      t = SSL_copy(not_null(i_34), not_null(j_34));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm o_34 = NULL;
  o_34 = t;
  t = SSL_table_keys(not_null(o_34));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm u_34 = NULL;
  u_34 = t;
  {
    t = table_keys_0(t);
    {
      ATerm f_6 (ATerm t)
      {
        ATerm w_34 = NULL;
        ATerm y_34 = NULL;
        w_34 = t;
        {
          ATerm z_34 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_34), not_null(w_34));
          {
            t = table_get_0(t);
            {
              z_34 = t;
              if(((y_34 != NULL) && (y_34 != z_34)))
                _fail(z_34);
              else
                y_34 = z_34;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_34), not_null(y_34));
        }
        return(t);
      }
      t = map_1(t, f_6);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm l_86 (ATerm))
{
  ATerm z_30 = t;
  int a_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_31;
      g_31 = t;
      {
        ATerm e_35 = NULL;
        ATerm f_35 = NULL;
        t = term_w_14;
        {
          t = get_config_0(t);
          {
            f_35 = t;
            if(((e_35 != NULL) && (e_35 != f_35)))
              _fail(f_35);
            else
              e_35 = f_35;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_35), term_h_31);
          t = geq_0(t);
        }
      }
      t = g_31;
      t = l_86(t);
      LocalPopChoice(a_31);
    }
  else
    {
      t = z_30;
      {
      }
    }
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm i_31;
  i_31 = t;
  {
    ATerm i_35 = NULL;
    ATerm j_35 = NULL;
    j_35 = t;
    if(((i_35 != NULL) && (i_35 != j_35)))
      _fail(j_35);
    else
      i_35 = j_35;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_m_15, not_null(i_35));
      t = printnl_0(t);
    }
  }
  t = i_31;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm p_35 = NULL;
  ATerm r_35 = NULL,s_35 = NULL;
  p_35 = t;
  {
    ATerm t_35 = NULL,u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_j_31, (ATerm) ATmakeAppl(sym_Tool_1, not_null(p_35)));
    {
      t = table_get_0(t);
      {
        t_35 = t;
        n_35 :
        if(((ATgetType(t_35) == AT_LIST) && !(ATisEmpty(t_35))))
          {
            u_35 = ATgetFirst((ATermList) t_35);
            x_35 = (ATerm) ATgetNext((ATermList) t_35);
            o_35 :
            if(match_cons(u_35, sym__2))
              {
                v_35 = ATgetArgument(u_35, 0);
                w_35 = ATgetArgument(u_35, 1);
                {
                  if(((r_35 != NULL) && (r_35 != v_35)))
                    _fail(v_35);
                  else
                    r_35 = v_35;
                  if(((s_35 != NULL) && (s_35 != w_35)))
                    _fail(w_35);
                  else
                    s_35 = w_35;
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
    t = not_null(s_35);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm e_36 = NULL,i_36 = NULL,j_36 = NULL;
  e_36 = t;
  d_36 :
  if(match_cons(e_36, sym__2))
    {
      i_36 = ATgetArgument(e_36, 0);
      j_36 = ATgetArgument(e_36, 1);
      {
        ATerm m_36 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_j_31, (ATerm) ATmakeAppl(sym_Tool_1, not_null(i_36)));
        {
          t = table_get_0(t);
          {
            ATerm j_6 (ATerm t)
            {
              ATerm n_36 = NULL,o_36 = NULL,p_36 = NULL;
              n_36 = t;
              c_36 :
              if(match_cons(n_36, sym__2))
                {
                  o_36 = ATgetArgument(n_36, 0);
                  p_36 = ATgetArgument(n_36, 1);
                  {
                    if(((j_36 != NULL) && (j_36 != o_36)))
                      _fail(o_36);
                    else
                      j_36 = o_36;
                    if(((m_36 != NULL) && (m_36 != p_36)))
                      _fail(p_36);
                    else
                      m_36 = p_36;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, j_6);
          }
        }
        t = not_null(m_36);
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
  ATerm k_31 = t;
  int o_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_31;
      {
        t = table_get_0(t);
        {
          ATerm s_6 (ATerm t)
          {
            t = try_1(t, xtc_read_0);
            return(t);
          }
          t = map_1(t, s_6);
        }
      }
      LocalPopChoice(o_31);
    }
  else
    {
      t = k_31;
      {
      }
    }
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm k_86 (ATerm))
{
  ATerm r_31 = t;
  int s_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_31;
      t_31 = t;
      {
        ATerm t_36 = NULL;
        ATerm u_36 = NULL;
        t = term_w_14;
        {
          t = get_config_0(t);
          {
            u_36 = t;
            if(((t_36 != NULL) && (t_36 != u_36)))
              _fail(u_36);
            else
              t_36 = u_36;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_36), term_u_31);
          t = geq_0(t);
        }
      }
      t = t_31;
      t = k_86(t);
      LocalPopChoice(s_31);
    }
  else
    {
      t = r_31;
      {
      }
    }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm y_36 = NULL,z_36 = NULL,a_37 = NULL;
  y_36 = t;
  x_36 :
  if(match_cons(y_36, sym__2))
    {
      z_36 = ATgetArgument(y_36, 0);
      a_37 = ATgetArgument(y_36, 1);
      {
        ATerm v_31;
        v_31 = t;
        {
          ATerm w_31 = t;
          int f_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(z_36), not_null(a_37));
              LocalPopChoice(f_32);
            }
          else
            {
              t = w_31;
              t = SSL_gtr(not_null(z_36), not_null(a_37));
            }
        }
        t = v_31;
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
  ATerm g_37 = NULL;
  ATerm g_32 = t;
  int h_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_37 = NULL,i_37 = NULL,j_37 = NULL;
      h_37 = t;
      f_37 :
      if(match_cons(h_37, sym__2))
        {
          i_37 = ATgetArgument(h_37, 0);
          j_37 = ATgetArgument(h_37, 1);
          {
            if(((g_37 != NULL) && (g_37 != i_37)))
              _fail(i_37);
            else
              g_37 = i_37;
            if(((g_37 != NULL) && (g_37 != j_37)))
              _fail(j_37);
            else
              g_37 = j_37;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(h_32);
    }
  else
    {
      t = g_32;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm m_86 (ATerm))
{
  ATerm i_32 = t;
  int j_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_32;
      k_32 = t;
      {
        ATerm m_37 = NULL;
        ATerm n_37 = NULL;
        t = term_w_14;
        {
          t = get_config_0(t);
          {
            n_37 = t;
            if(((m_37 != NULL) && (m_37 != n_37)))
              _fail(n_37);
            else
              m_37 = n_37;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_37), term_p_32);
          t = geq_0(t);
        }
      }
      t = k_32;
      t = m_86(t);
      LocalPopChoice(j_32);
    }
  else
    {
      t = i_32;
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
  ATerm r_37 = NULL,s_37 = NULL,t_37 = NULL;
  r_37 = t;
  q_37 :
  if(match_cons(r_37, sym__2))
    {
      s_37 = ATgetArgument(r_37, 0);
      t_37 = ATgetArgument(r_37, 1);
      if(((s_37 != NULL) && (s_37 != t_37)))
        _fail(t_37);
      else
        s_37 = t_37;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm o_78 (ATerm), ATerm p_78 (ATerm))
{
  ATerm b_38 = NULL,c_38 = NULL,f_38 = NULL;
  b_38 = t;
  a_38 :
  if(((ATgetType(b_38) == AT_LIST) && !(ATisEmpty(b_38))))
    {
      c_38 = ATgetFirst((ATermList) b_38);
      f_38 = (ATerm) ATgetNext((ATermList) b_38);
      {
        t = p_78(t);
        {
          ATerm t_6 (ATerm t)
          {
            ATerm i_38 = NULL;
            i_38 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(c_38), not_null(i_38));
              t = o_78(t);
            }
            return(t);
          }
          t = fetch_1(t, t_6);
        }
        t = not_null(f_38);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm k_78 (ATerm))
{
  ATerm q_38 = NULL,r_38 = NULL,s_38 = NULL;
  q_38 = t;
  p_38 :
  if(match_cons(q_38, sym__2))
    {
      r_38 = ATgetArgument(q_38, 0);
      s_38 = ATgetArgument(q_38, 1);
      {
        t = not_null(r_38);
        {
          ATerm w_38 (ATerm t)
          {
            ATerm q_32 = t;
            int r_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(s_38);
                LocalPopChoice(r_32);
              }
            else
              {
                t = q_32;
                {
                  ATerm t_32 = t;
                  int u_32 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm u_6 (ATerm t)
                      {
                        t = not_null(s_38);
                        return(t);
                      }
                      t = HdMember_p__2(t, k_78, u_6);
                      t = w_38(t);
                      LocalPopChoice(u_32);
                    }
                  else
                    {
                      t = t_32;
                      t = Cons_2(t, _id, w_38);
                    }
                }
              }
            return(t);
          }
          t = w_38(t);
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
  ATerm b_39 = NULL,c_39 = NULL,f_39 = NULL,g_39 = NULL;
  b_39 = t;
  a_39 :
  if(match_cons(b_39, sym__3))
    {
      c_39 = ATgetArgument(b_39, 0);
      f_39 = ATgetArgument(b_39, 1);
      g_39 = ATgetArgument(b_39, 2);
      {
        ATerm v_32;
        v_32 = t;
        {
          ATerm v_39 = NULL;
          ATerm w_39 = NULL,y_39 = NULL;
          ATerm x_39 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_39), not_null(f_39));
          {
            ATerm w_32 = t;
            int x_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(x_32);
              }
            else
              {
                t = w_32;
                t = (ATerm) ATempty;
              }
            {
              x_39 = t;
              if(((w_39 != NULL) && (w_39 != x_39)))
                _fail(x_39);
              else
                w_39 = x_39;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(w_39), not_null(g_39));
            {
              t = union_1(t, eq_0);
              {
                y_39 = t;
                if(((v_39 != NULL) && (v_39 != y_39)))
                  _fail(y_39);
                else
                  v_39 = y_39;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(c_39), not_null(f_39), not_null(v_39));
            t = table_put_0(t);
          }
        }
        t = v_32;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm v_89 (ATerm))
{
  ATerm g_40 = NULL,h_40 = NULL,m_40 = NULL;
  g_40 = t;
  f_40 :
  if(match_cons(g_40, sym__2))
    {
      h_40 = ATgetArgument(g_40, 0);
      m_40 = ATgetArgument(g_40, 1);
      {
        t = not_null(m_40);
        {
          ATerm v_6 (ATerm t)
          {
            ATerm r_40 = NULL,s_40 = NULL,t_40 = NULL;
            r_40 = t;
            e_40 :
            if(match_cons(r_40, sym__2))
              {
                s_40 = ATgetArgument(r_40, 0);
                t_40 = ATgetArgument(r_40, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(h_40), not_null(s_40), not_null(t_40));
                  t = v_89(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, v_6);
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
  ATerm l_41 = NULL;
  l_41 = t;
  t = SSL_ReadFromFile(not_null(l_41));
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm q_41 = NULL;
  ATerm s_41 = NULL;
  q_41 = t;
  {
    ATerm y_32;
    y_32 = t;
    {
      ATerm t_41 = NULL;
      t = term_z_32;
      {
        t_41 = t;
        if(((s_41 != NULL) && (s_41 != t_41)))
          _fail(t_41);
        else
          s_41 = t_41;
      }
    }
    t = y_32;
    {
      t = SSL_open_file(not_null(q_41), not_null(s_41));
      t = SSL_close_file(not_null(q_41));
    }
  }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm y_41 = NULL;
  ATerm a_42 = NULL;
  y_41 = t;
  {
    ATerm e_33 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_31, (ATerm) ATmakeAppl(sym_Imported_1, not_null(y_41)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_33;
      }
    {
      ATerm f_33;
      f_33 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_j_31, term_g_33, (ATerm) ATinsert(ATempty, not_null(y_41)));
        t = table_put_0(t);
      }
      t = f_33;
      {
        ATerm w_6 (ATerm t)
        {
          ATerm x_6 (ATerm t)
          {
            t = term_h_33;
            return(t);
          }
          t = debug_1(t, x_6);
          return(t);
        }
        t = if_verbose4_1(t, w_6);
        {
          ATerm m_33 = t;
          int n_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(n_33);
            }
          else
            {
              t = m_33;
              t = (ATerm) ATempty;
            }
          {
            ATerm y_6 (ATerm t)
            {
              ATerm z_6 (ATerm t)
              {
                t = term_o_33;
                return(t);
              }
              t = say_1(t, z_6);
              return(t);
            }
            t = if_verbose6_1(t, y_6);
            {
              ATerm b_42 = NULL;
              b_42 = t;
              if(((a_42 != NULL) && (a_42 != b_42)))
                _fail(b_42);
              else
                a_42 = b_42;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_j_31, not_null(a_42));
                {
                  t = table_putlist_1(t, table_append_0);
                  {
                    ATerm a_7 (ATerm t)
                    {
                      ATerm b_7 (ATerm t)
                      {
                        t = term_p_33;
                        return(t);
                      }
                      t = say_1(t, b_7);
                      return(t);
                    }
                    t = if_verbose6_1(t, a_7);
                    {
                      t = (ATerm) ATmakeAppl(sym__3, term_j_31, (ATerm)ATmakeAppl(sym_Imported_1, not_null(y_41)), (ATerm) ATempty);
                      {
                        t = table_put_0(t);
                        {
                          ATerm f_7 (ATerm t)
                          {
                            ATerm o_7 (ATerm t)
                            {
                              t = term_o_33;
                              return(t);
                            }
                            t = say_1(t, o_7);
                            return(t);
                          }
                          t = if_verbose4_1(t, f_7);
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
  ATerm f_42 = NULL;
  f_42 = t;
  t = SSL_getenv(not_null(f_42));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm q_33 = t;
  int r_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_33;
      t = get_config_0(t);
      LocalPopChoice(r_33);
    }
  else
    {
      t = q_33;
      {
        ATerm u_33 = t;
        int x_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_y_33;
            t = getenv_0(t);
            LocalPopChoice(x_33);
          }
        else
          {
            t = u_33;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm p_7 (ATerm t)
  {
    ATerm q_7 (ATerm t)
    {
      t = term_z_33;
      return(t);
    }
    t = debug_1(t, q_7);
    return(t);
  }
  t = if_verbose5_1(t, p_7);
  {
    ATerm e_34;
    e_34 = t;
    {
      ATerm f_34 = t;
      int k_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_l_34;
          t = table_get_0(t);
          LocalPopChoice(k_34);
        }
      else
        {
          t = f_34;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = e_34;
    {
      ATerm r_7 (ATerm t)
      {
        ATerm s_7 (ATerm t)
        {
          t = term_m_34;
          return(t);
        }
        t = debug_1(t, s_7);
        return(t);
      }
      t = if_verbose5_1(t, r_7);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm n_34 = t;
  int p_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_7 (ATerm t)
      {
        ATerm w_7 (ATerm t)
        {
          t = term_q_34;
          return(t);
        }
        t = debug_1(t, w_7);
        return(t);
      }
      t = if_verbose5_1(t, t_7);
      {
        t = xtc_load_0(t);
        {
          ATerm r_34 = t;
          int s_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(s_34);
            }
          else
            {
              t = r_34;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm x_7 (ATerm t)
            {
              ATerm c_8 (ATerm t)
              {
                t = term_q_34;
                return(t);
              }
              t = debug_1(t, c_8);
              return(t);
            }
            t = if_verbose5_1(t, x_7);
          }
        }
      }
      LocalPopChoice(p_34);
    }
  else
    {
      t = n_34;
      {
        ATerm j_42 = NULL;
        ATerm k_42 = NULL;
        k_42 = t;
        if(((j_42 != NULL) && (j_42 != k_42)))
          _fail(k_42);
        else
          j_42 = k_42;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_34), not_null(j_42)), term_t_34);
          {
            t = error_0(t);
            {
              ATerm d_8 (ATerm t)
              {
                t = term_j_31;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm e_8 (ATerm t)
                    {
                      t = term_x_34;
                      return(t);
                    }
                    t = debug_1(t, e_8);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, d_8);
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
  ATerm w_42 = NULL;
  w_42 = t;
  t = SSL_string_to_int(not_null(w_42));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm k_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL,o_43 = NULL;
  k_43 = t;
  i_43 :
  if(match_string(k_43, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(k_43) == AT_LIST) && !(ATisEmpty(k_43))))
        {
          l_43 = ATgetFirst((ATermList) k_43);
          m_43 = (ATerm) ATgetNext((ATermList) k_43);
          j_43 :
          if(((ATgetType(m_43) == AT_LIST) && !(ATisEmpty(m_43))))
            {
              n_43 = ATgetFirst((ATermList) m_43);
              o_43 = (ATerm) ATgetNext((ATermList) m_43);
              {
                ATerm s_43 = NULL;
                ATerm a_35;
                a_35 = t;
                {
                  t = not_null(l_43);
                  t = l_0(t);
                }
                t = a_35;
                {
                  ATerm t_43 = NULL;
                  t = not_null(n_43);
                  {
                    t = m_0(t);
                    {
                      t_43 = t;
                      if(((s_43 != NULL) && (s_43 != t_43)))
                        _fail(t_43);
                      else
                        s_43 = t_43;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(o_43)), not_null(s_43));
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
  ATerm b_44 = NULL,e_44 = NULL,v_44 = NULL;
  b_44 = t;
  a_44 :
  if(match_cons(b_44, sym__2))
    {
      e_44 = ATgetArgument(b_44, 0);
      v_44 = ATgetArgument(b_44, 1);
      {
        ATerm y_44 = NULL;
        ATerm z_44 = NULL,b_45 = NULL;
        ATerm a_45 = NULL;
        t = not_null(e_44);
        {
          ATerm b_35 = t;
          int c_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(c_35);
            }
          else
            {
              t = b_35;
              t = (ATerm) ATempty;
            }
          {
            a_45 = t;
            if(((z_44 != NULL) && (z_44 != a_45)))
              _fail(a_45);
            else
              z_44 = a_45;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_44), not_null(z_44));
          {
            ATerm d_35 = t;
            int g_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(g_35);
              }
            else
              {
                t = d_35;
                t = conc_more_lists_0(t);
              }
            {
              b_45 = t;
              if(((y_44 != NULL) && (y_44 != b_45)))
                _fail(b_45);
              else
                y_44 = b_45;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_o_29, not_null(e_44), not_null(y_44));
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
  ATerm l_45 = NULL,m_45 = NULL;
  ATerm h_35;
  h_35 = t;
  {
    ATerm n_45 = NULL,o_45 = NULL,p_45 = NULL;
    n_45 = t;
    k_45 :
    if(match_cons(n_45, sym__2))
      {
        o_45 = ATgetArgument(n_45, 0);
        p_45 = ATgetArgument(n_45, 1);
        {
          if(((l_45 != NULL) && (l_45 != o_45)))
            _fail(o_45);
          else
            l_45 = o_45;
          {
            if(((m_45 != NULL) && (m_45 != p_45)))
              _fail(p_45);
            else
              m_45 = p_45;
            t = SSL_table_remove(not_null(l_45), not_null(m_45));
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = h_35;
  return(t);
}
ATerm toggle_config_0 (ATerm t)
{
  ATerm t_45 = NULL,u_45 = NULL,v_45 = NULL;
  t_45 = t;
  s_45 :
  if(match_cons(t_45, sym__2))
    {
      u_45 = ATgetArgument(t_45, 0);
      v_45 = ATgetArgument(t_45, 1);
      {
        ATerm k_35 = t;
        int l_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = not_null(u_45);
            {
              t = get_config_0(t);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_o_29, not_null(u_45));
                t = table_remove_0(t);
              }
            }
            LocalPopChoice(l_35);
          }
        else
          {
            t = k_35;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(u_45), not_null(v_45));
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
  ATerm e_46 = NULL,k_46 = NULL,l_46 = NULL;
  e_46 = t;
  d_46 :
  if(match_cons(e_46, sym__2))
    {
      k_46 = ATgetArgument(e_46, 0);
      l_46 = ATgetArgument(e_46, 1);
      {
        ATerm o_46 = NULL;
        ATerm p_46 = NULL,t_46 = NULL;
        ATerm q_46 = NULL;
        t = not_null(k_46);
        {
          ATerm m_35 = t;
          int q_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(q_35);
            }
          else
            {
              t = m_35;
              t = (ATerm) ATempty;
            }
          {
            q_46 = t;
            if(((p_46 != NULL) && (p_46 != q_46)))
              _fail(q_46);
            else
              p_46 = q_46;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_46), not_null(l_46));
          {
            ATerm y_35 = t;
            int z_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(z_35);
              }
            else
              {
                t = y_35;
                t = conc_more_lists_0(t);
              }
            {
              t_46 = t;
              if(((o_46 != NULL) && (o_46 != t_46)))
                _fail(t_46);
              else
                o_46 = t_46;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_o_29, not_null(k_46), not_null(o_46));
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
  ATerm a_36 = t;
  int b_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_8 (ATerm t)
      {
        ATerm x_48 = NULL;
        x_48 = t;
        x_46 :
        if(!(match_string(x_48, "-i")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm g_8 (ATerm t)
      {
        ATerm y_48 = NULL;
        ATerm z_48 = NULL;
        z_48 = t;
        if(((y_48 != NULL) && (y_48 != z_48)))
          _fail(z_48);
        else
          y_48 = z_48;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_u_23, not_null(y_48));
          t = set_config_0(t);
        }
        t = term_l_20;
        return(t);
      }
      ATerm h_8 (ATerm t)
      {
        t = term_f_36;
        return(t);
      }
      t = ArgOption_3(t, f_8, g_8, h_8);
      LocalPopChoice(b_36);
    }
  else
    {
      t = a_36;
      {
        ATerm g_36 = t;
        int h_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_8 (ATerm t)
            {
              ATerm a_49 = NULL;
              a_49 = t;
              z_46 :
              if(!(match_string(a_49, "-o")))
                {
                  if(!(match_string(a_49, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm n_8 (ATerm t)
            {
              ATerm b_49 = NULL;
              ATerm c_49 = NULL;
              c_49 = t;
              if(((b_49 != NULL) && (b_49 != c_49)))
                _fail(c_49);
              else
                b_49 = c_49;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_i_15, not_null(b_49));
                t = set_config_0(t);
              }
              t = term_l_20;
              return(t);
            }
            ATerm p_8 (ATerm t)
            {
              t = term_k_36;
              return(t);
            }
            t = ArgOption_3(t, j_8, n_8, p_8);
            LocalPopChoice(h_36);
          }
        else
          {
            t = g_36;
            {
              ATerm l_36 = t;
              int q_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_8 (ATerm t)
                  {
                    ATerm d_49 = NULL;
                    d_49 = t;
                    g_47 :
                    if(!(match_string(d_49, "-I")))
                      {
                        if(!(match_string(d_49, "--Include")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm t_8 (ATerm t)
                  {
                    ATerm e_49 = NULL;
                    ATerm f_49 = NULL;
                    f_49 = t;
                    if(((e_49 != NULL) && (e_49 != f_49)))
                      _fail(f_49);
                    else
                      e_49 = f_49;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_w_25, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_49)), term_w_25));
                      t = extend_config_0(t);
                    }
                    t = term_l_20;
                    return(t);
                  }
                  ATerm u_8 (ATerm t)
                  {
                    t = term_r_36;
                    return(t);
                  }
                  t = ArgOption_3(t, s_8, t_8, u_8);
                  LocalPopChoice(q_36);
                }
              else
                {
                  t = l_36;
                  {
                    ATerm s_36 = t;
                    int v_36 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm v_8 (ATerm t)
                        {
                          ATerm g_49 = NULL;
                          g_49 = t;
                          i_47 :
                          if(!(match_string(g_49, "--main")))
                            {
                              if(!(match_string(g_49, "-m")))
                                {
                                  _fail(t);
                                }
                            }
                          return(t);
                        }
                        ATerm w_8 (ATerm t)
                        {
                          ATerm h_49 = NULL;
                          ATerm i_49 = NULL;
                          i_49 = t;
                          if(((h_49 != NULL) && (h_49 != i_49)))
                            _fail(i_49);
                          else
                            h_49 = i_49;
                          {
                            t = (ATerm) ATmakeAppl(sym__2, term_s_20, not_null(h_49));
                            t = set_config_0(t);
                          }
                          t = term_l_20;
                          return(t);
                        }
                        ATerm z_8 (ATerm t)
                        {
                          t = term_w_36;
                          return(t);
                        }
                        t = ArgOption_3(t, v_8, w_8, z_8);
                        LocalPopChoice(v_36);
                      }
                    else
                      {
                        t = s_36;
                        {
                          ATerm b_37 = t;
                          int c_37 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm a_9 (ATerm t)
                              {
                                ATerm j_49 = NULL;
                                j_49 = t;
                                k_47 :
                                if(!(match_string(j_49, "--C-include")))
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              ATerm b_9 (ATerm t)
                              {
                                ATerm k_49 = NULL;
                                ATerm l_49 = NULL;
                                l_49 = t;
                                if(((k_49 != NULL) && (k_49 != l_49)))
                                  _fail(l_49);
                                else
                                  k_49 = l_49;
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, term_a_17, (ATerm) ATinsert(ATempty, not_null(k_49)));
                                  t = post_extend_config_0(t);
                                }
                                t = term_l_20;
                                return(t);
                              }
                              ATerm c_9 (ATerm t)
                              {
                                t = term_d_37;
                                return(t);
                              }
                              t = ArgOption_3(t, a_9, b_9, c_9);
                              LocalPopChoice(c_37);
                            }
                          else
                            {
                              t = b_37;
                              {
                                ATerm e_37 = t;
                                int k_37 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm j_9 (ATerm t)
                                    {
                                      ATerm m_49 = NULL;
                                      m_49 = t;
                                      m_47 :
                                      if(!(match_string(m_49, "-CI")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm k_9 (ATerm t)
                                    {
                                      ATerm n_49 = NULL;
                                      ATerm o_49 = NULL;
                                      o_49 = t;
                                      if(((n_49 != NULL) && (n_49 != o_49)))
                                        _fail(o_49);
                                      else
                                        n_49 = o_49;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, term_t_15, (ATerm) ATinsert(ATempty, not_null(n_49)));
                                        t = extend_config_0(t);
                                      }
                                      t = term_l_20;
                                      return(t);
                                    }
                                    ATerm l_9 (ATerm t)
                                    {
                                      t = term_l_37;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, j_9, k_9, l_9);
                                    LocalPopChoice(k_37);
                                  }
                                else
                                  {
                                    t = e_37;
                                    {
                                      ATerm o_37 = t;
                                      int p_37 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm m_9 (ATerm t)
                                          {
                                            ATerm p_49 = NULL;
                                            p_49 = t;
                                            o_47 :
                                            if(!(match_string(p_49, "-CL")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm p_9 (ATerm t)
                                          {
                                            ATerm q_49 = NULL;
                                            ATerm r_49 = NULL;
                                            r_49 = t;
                                            if(((q_49 != NULL) && (q_49 != r_49)))
                                              _fail(r_49);
                                            else
                                              q_49 = r_49;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, term_c_15, (ATerm) ATinsert(ATempty, not_null(q_49)));
                                              t = extend_config_0(t);
                                            }
                                            t = term_l_20;
                                            return(t);
                                          }
                                          ATerm q_9 (ATerm t)
                                          {
                                            t = term_u_37;
                                            return(t);
                                          }
                                          t = ArgOption_3(t, m_9, p_9, q_9);
                                          LocalPopChoice(p_37);
                                        }
                                      else
                                        {
                                          t = o_37;
                                          {
                                            ATerm v_37 = t;
                                            int w_37 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm t_9 (ATerm t)
                                                {
                                                  ATerm s_49 = NULL;
                                                  s_49 = t;
                                                  q_47 :
                                                  if(!(match_string(s_49, "-c")))
                                                    {
                                                      _fail(t);
                                                    }
                                                  return(t);
                                                }
                                                ATerm u_9 (ATerm t)
                                                {
                                                  t = term_x_37;
                                                  t = set_config_0(t);
                                                  t = term_l_20;
                                                  return(t);
                                                }
                                                ATerm x_9 (ATerm t)
                                                {
                                                  t = term_y_37;
                                                  return(t);
                                                }
                                                t = Option_3(t, t_9, u_9, x_9);
                                                LocalPopChoice(w_37);
                                              }
                                            else
                                              {
                                                t = v_37;
                                                {
                                                  ATerm z_37 = t;
                                                  int d_38 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm y_9 (ATerm t)
                                                      {
                                                        ATerm t_49 = NULL;
                                                        t_49 = t;
                                                        r_47 :
                                                        if(!(match_string(t_49, "--ast")))
                                                          {
                                                            _fail(t);
                                                          }
                                                        return(t);
                                                      }
                                                      ATerm b_10 (ATerm t)
                                                      {
                                                        t = term_e_38;
                                                        t = set_config_0(t);
                                                        t = term_l_20;
                                                        return(t);
                                                      }
                                                      ATerm c_10 (ATerm t)
                                                      {
                                                        t = term_g_38;
                                                        return(t);
                                                      }
                                                      t = Option_3(t, y_9, b_10, c_10);
                                                      LocalPopChoice(d_38);
                                                    }
                                                  else
                                                    {
                                                      t = z_37;
                                                      {
                                                        ATerm h_38 = t;
                                                        int j_38 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm f_10 (ATerm t)
                                                            {
                                                              ATerm u_49 = NULL;
                                                              u_49 = t;
                                                              s_47 :
                                                              if(!(match_string(u_49, "-F")))
                                                                {
                                                                  _fail(t);
                                                                }
                                                              return(t);
                                                            }
                                                            ATerm g_10 (ATerm t)
                                                            {
                                                              t = term_k_38;
                                                              t = set_config_0(t);
                                                              t = term_l_20;
                                                              return(t);
                                                            }
                                                            ATerm j_10 (ATerm t)
                                                            {
                                                              t = term_l_38;
                                                              return(t);
                                                            }
                                                            t = Option_3(t, f_10, g_10, j_10);
                                                            LocalPopChoice(j_38);
                                                          }
                                                        else
                                                          {
                                                            t = h_38;
                                                            {
                                                              ATerm m_38 = t;
                                                              int n_38 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm k_10 (ATerm t)
                                                                  {
                                                                    ATerm v_49 = NULL;
                                                                    v_49 = t;
                                                                    t_47 :
                                                                    if(!(match_string(v_49, "--keep")))
                                                                      {
                                                                        _fail(t);
                                                                      }
                                                                    return(t);
                                                                  }
                                                                  ATerm n_10 (ATerm t)
                                                                  {
                                                                    ATerm w_49 = NULL;
                                                                    ATerm x_49 = NULL;
                                                                    t = string_to_int_0(t);
                                                                    {
                                                                      x_49 = t;
                                                                      if(((w_49 != NULL) && (w_49 != x_49)))
                                                                        _fail(x_49);
                                                                      else
                                                                        w_49 = x_49;
                                                                    }
                                                                    {
                                                                      t = (ATerm) ATmakeAppl(sym__2, term_o_19, not_null(w_49));
                                                                      t = set_config_0(t);
                                                                    }
                                                                    t = term_l_20;
                                                                    return(t);
                                                                  }
                                                                  ATerm o_10 (ATerm t)
                                                                  {
                                                                    t = term_o_38;
                                                                    return(t);
                                                                  }
                                                                  t = ArgOption_3(t, k_10, n_10, o_10);
                                                                  LocalPopChoice(n_38);
                                                                }
                                                              else
                                                                {
                                                                  t = m_38;
                                                                  {
                                                                    ATerm t_38 = t;
                                                                    int u_38 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm r_10 (ATerm t)
                                                                        {
                                                                          ATerm y_49 = NULL;
                                                                          y_49 = t;
                                                                          a_48 :
                                                                          if(!(match_string(y_49, "--fusion")))
                                                                            {
                                                                              _fail(t);
                                                                            }
                                                                          return(t);
                                                                        }
                                                                        ATerm s_10 (ATerm t)
                                                                        {
                                                                          t = term_v_38;
                                                                          t = toggle_config_0(t);
                                                                          t = term_l_20;
                                                                          return(t);
                                                                        }
                                                                        ATerm v_10 (ATerm t)
                                                                        {
                                                                          t = term_x_38;
                                                                          return(t);
                                                                        }
                                                                        t = Option_3(t, r_10, s_10, v_10);
                                                                        LocalPopChoice(u_38);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = t_38;
                                                                        {
                                                                          ATerm y_38 = t;
                                                                          int z_38 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              ATerm w_10 (ATerm t)
                                                                              {
                                                                                ATerm z_49 = NULL;
                                                                                z_49 = t;
                                                                                b_48 :
                                                                                if(!(match_string(z_49, "--trace-all")))
                                                                                  {
                                                                                    _fail(t);
                                                                                  }
                                                                                return(t);
                                                                              }
                                                                              ATerm z_10 (ATerm t)
                                                                              {
                                                                                t = term_e_39;
                                                                                t = set_config_0(t);
                                                                                t = term_l_20;
                                                                                return(t);
                                                                              }
                                                                              ATerm a_11 (ATerm t)
                                                                              {
                                                                                t = term_h_39;
                                                                                return(t);
                                                                              }
                                                                              t = Option_3(t, w_10, z_10, a_11);
                                                                              LocalPopChoice(z_38);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = y_38;
                                                                              {
                                                                                ATerm i_39 = t;
                                                                                int j_39 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm d_11 (ATerm t)
                                                                                    {
                                                                                      ATerm a_50 = NULL;
                                                                                      a_50 = t;
                                                                                      c_48 :
                                                                                      if(!(match_string(a_50, "-t")))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm e_11 (ATerm t)
                                                                                    {
                                                                                      ATerm b_50 = NULL;
                                                                                      ATerm c_50 = NULL;
                                                                                      c_50 = t;
                                                                                      if(((b_50 != NULL) && (b_50 != c_50)))
                                                                                        _fail(c_50);
                                                                                      else
                                                                                        b_50 = c_50;
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym__2, term_k_39, (ATerm) ATinsert(ATempty, not_null(b_50)));
                                                                                        t = extend_config_0(t);
                                                                                      }
                                                                                      t = term_l_20;
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm h_11 (ATerm t)
                                                                                    {
                                                                                      t = term_l_39;
                                                                                      return(t);
                                                                                    }
                                                                                    t = ArgOption_3(t, d_11, e_11, h_11);
                                                                                    LocalPopChoice(j_39);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = i_39;
                                                                                    {
                                                                                      ATerm m_39 = t;
                                                                                      int n_39 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm i_11 (ATerm t)
                                                                                          {
                                                                                            ATerm d_50 = NULL;
                                                                                            d_50 = t;
                                                                                            i_48 :
                                                                                            if(!(match_string(d_50, "--verbose")))
                                                                                              {
                                                                                                _fail(t);
                                                                                              }
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm l_11 (ATerm t)
                                                                                          {
                                                                                            ATerm e_50 = NULL;
                                                                                            ATerm f_50 = NULL;
                                                                                            t = string_to_int_0(t);
                                                                                            {
                                                                                              f_50 = t;
                                                                                              if(((e_50 != NULL) && (e_50 != f_50)))
                                                                                                _fail(f_50);
                                                                                              else
                                                                                                e_50 = f_50;
                                                                                            }
                                                                                            {
                                                                                              t = (ATerm) ATmakeAppl(sym__2, term_w_14, not_null(e_50));
                                                                                              t = set_config_0(t);
                                                                                            }
                                                                                            t = term_l_20;
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm m_11 (ATerm t)
                                                                                          {
                                                                                            t = term_o_39;
                                                                                            return(t);
                                                                                          }
                                                                                          t = ArgOption_3(t, i_11, l_11, m_11);
                                                                                          LocalPopChoice(n_39);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = m_39;
                                                                                          {
                                                                                            ATerm p_39 = t;
                                                                                            int q_39 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm p_11 (ATerm t)
                                                                                                {
                                                                                                  ATerm g_50 = NULL;
                                                                                                  g_50 = t;
                                                                                                  k_48 :
                                                                                                  if(!(match_string(g_50, "-S")))
                                                                                                    {
                                                                                                      if(!(match_string(g_50, "--silent")))
                                                                                                        {
                                                                                                          _fail(t);
                                                                                                        }
                                                                                                    }
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm q_11 (ATerm t)
                                                                                                {
                                                                                                  t = term_r_39;
                                                                                                  t = set_config_0(t);
                                                                                                  t = term_l_20;
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm t_11 (ATerm t)
                                                                                                {
                                                                                                  t = term_s_39;
                                                                                                  return(t);
                                                                                                }
                                                                                                t = Option_3(t, p_11, q_11, t_11);
                                                                                                LocalPopChoice(q_39);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = p_39;
                                                                                                {
                                                                                                  ATerm t_39 = t;
                                                                                                  int u_39 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      ATerm u_11 (ATerm t)
                                                                                                      {
                                                                                                        ATerm h_50 = NULL;
                                                                                                        h_50 = t;
                                                                                                        u_48 :
                                                                                                        if(!(match_string(h_50, "-h")))
                                                                                                          {
                                                                                                            if(!(match_string(h_50, "--help")))
                                                                                                              {
                                                                                                                _fail(t);
                                                                                                              }
                                                                                                          }
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm v_11 (ATerm t)
                                                                                                      {
                                                                                                        t = term_a_40;
                                                                                                        t = set_config_0(t);
                                                                                                        t = term_l_20;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm a_12 (ATerm t)
                                                                                                      {
                                                                                                        t = term_b_40;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      t = Option_3(t, u_11, v_11, a_12);
                                                                                                      LocalPopChoice(u_39);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = t_39;
                                                                                                      {
                                                                                                        ATerm c_40 = t;
                                                                                                        int d_40 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm b_12 (ATerm t)
                                                                                                            {
                                                                                                              ATerm i_50 = NULL;
                                                                                                              i_50 = t;
                                                                                                              v_48 :
                                                                                                              if(!(match_string(i_50, "--man")))
                                                                                                                {
                                                                                                                  _fail(t);
                                                                                                                }
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm c_12 (ATerm t)
                                                                                                            {
                                                                                                              t = term_j_40;
                                                                                                              t = set_config_0(t);
                                                                                                              t = term_l_20;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm f_12 (ATerm t)
                                                                                                            {
                                                                                                              t = term_k_40;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            t = Option_3(t, b_12, c_12, f_12);
                                                                                                            LocalPopChoice(d_40);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = c_40;
                                                                                                            {
                                                                                                              ATerm g_12 (ATerm t)
                                                                                                              {
                                                                                                                ATerm j_50 = NULL;
                                                                                                                j_50 = t;
                                                                                                                w_48 :
                                                                                                                if(!(match_string(j_50, "-v")))
                                                                                                                  {
                                                                                                                    if(!(match_string(j_50, "--version")))
                                                                                                                      {
                                                                                                                        _fail(t);
                                                                                                                      }
                                                                                                                  }
                                                                                                                return(t);
                                                                                                              }
                                                                                                              ATerm h_12 (ATerm t)
                                                                                                              {
                                                                                                                t = term_n_40;
                                                                                                                t = set_config_0(t);
                                                                                                                t = term_l_20;
                                                                                                                return(t);
                                                                                                              }
                                                                                                              ATerm l_12 (ATerm t)
                                                                                                              {
                                                                                                                t = term_o_40;
                                                                                                                return(t);
                                                                                                              }
                                                                                                              t = Option_3(t, g_12, h_12, l_12);
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
  ATerm v_50 = NULL;
  v_50 = t;
  t = SSL_table_destroy(not_null(v_50));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm z_50 = NULL,a_51 = NULL,b_51 = NULL;
  z_50 = t;
  y_50 :
  if(((ATgetType(z_50) == AT_LIST) && ATisEmpty(z_50)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(z_50) == AT_LIST) && !(ATisEmpty(z_50))))
        {
          a_51 = ATgetFirst((ATermList) z_50);
          b_51 = (ATerm) ATgetNext((ATermList) z_50);
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
  ATerm p_40;
  p_40 = t;
  {
    ATerm e_51 = NULL;
    ATerm h_51 = NULL;
    ATerm q_40 = t;
    int u_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(u_40);
      }
    else
      {
        t = q_40;
        {
          ATerm f_51 = NULL;
          ATerm g_51 = NULL;
          g_51 = t;
          if(((f_51 != NULL) && (f_51 != g_51)))
            _fail(g_51);
          else
            f_51 = g_51;
          t = (ATerm) ATinsert(ATempty, not_null(f_51));
        }
      }
    {
      h_51 = t;
      if(((e_51 != NULL) && (e_51 != h_51)))
        _fail(h_51);
      else
        e_51 = h_51;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_16, not_null(e_51));
      t = printnl_0(t);
    }
  }
  t = p_40;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_0 (ATerm))
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_41), term_e_30), term_g_41), term_f_41), term_e_41), term_e_30), term_d_41), term_c_41), term_b_41), term_a_41), term_z_40), term_y_40), term_x_40), term_w_40), term_v_40);
  return(t);
}
ATerm map_1 (ATerm t, ATerm n_72 (ATerm))
{
  ATerm k_51 (ATerm t)
  {
    ATerm i_41 = t;
    int j_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(j_41);
      }
    else
      {
        t = i_41;
        t = Cons_2(t, n_72, k_51);
      }
    return(t);
  }
  t = k_51(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm f_52 = NULL,j_52 = NULL,k_52 = NULL;
  k_52 = t;
  d_52 :
  if(((ATgetType(k_52) == AT_LIST) && !(ATisEmpty(k_52))))
    {
      f_52 = ATgetFirst((ATermList) k_52);
      j_52 = (ATerm) ATgetNext((ATermList) k_52);
      {
        ATerm w_52 = NULL;
        t = not_null(j_52);
        {
          ATerm k_41;
          k_41 = t;
          {
            ATerm x_52 = NULL,z_52 = NULL,b_53 = NULL;
            ATerm m_41;
            m_41 = t;
            {
              ATerm y_52 = NULL;
              t = j_0(t);
              {
                y_52 = t;
                if(((x_52 != NULL) && (x_52 != y_52)))
                  _fail(y_52);
                else
                  x_52 = y_52;
              }
            }
            t = m_41;
            {
              ATerm a_53 = NULL;
              t = not_null(f_52);
              {
                t = i_0(t);
                {
                  a_53 = t;
                  if(((z_52 != NULL) && (z_52 != a_53)))
                    _fail(a_53);
                  else
                    z_52 = a_53;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(x_52)), not_null(z_52));
                {
                  b_53 = t;
                  if(((w_52 != NULL) && (w_52 != b_53)))
                    _fail(b_53);
                  else
                    w_52 = b_53;
                }
              }
            }
          }
          t = k_41;
          {
            ATerm o_12 (ATerm t)
            {
              t = not_null(w_52);
              return(t);
            }
            t = reverse_acc_2(t, i_0, o_12);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(k_52) == AT_LIST) && ATisEmpty(k_52)))
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
  ATerm p_12 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, p_12);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm h_0 (ATerm))
{
  ATerm k_53 = NULL;
  ATerm l_53 = NULL;
  t = term_l_20;
  {
    t = h_0(t);
    {
      l_53 = t;
      if(((k_53 != NULL) && (k_53 != l_53)))
        _fail(l_53);
      else
        k_53 = l_53;
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_41), not_null(k_53)), term_u_41), term_e_30), term_r_41), term_e_30), term_p_41), term_o_41), term_e_30), term_n_41);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm f_59 (ATerm))
{
  ATerm s_53 = NULL,t_53 = NULL;
  s_53 = t;
  r_53 :
  if(match_cons(s_53, sym_Program_1))
    {
      t_53 = ATgetArgument(s_53, 0);
      {
        ATerm w_53 = NULL,y_53 = NULL;
        ATerm x_53 = NULL;
        t = SSLgetAnnotations(not_null(s_53));
        {
          x_53 = t;
          if(((w_53 != NULL) && (w_53 != x_53)))
            _fail(x_53);
          else
            w_53 = x_53;
        }
        {
          t = not_null(t_53);
          {
            ATerm a_54 = NULL;
            t = f_59(t);
            {
              y_53 = t;
              {
                ATerm b_54 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(y_53)), not_null(w_53));
                {
                  b_54 = t;
                  if(((a_54 != NULL) && (a_54 != b_54)))
                    _fail(b_54);
                  else
                    a_54 = b_54;
                }
                t = not_null(a_54);
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
  ATerm k_54 = NULL;
  ATerm w_41 = t;
  int x_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_54 = NULL;
      t = term_z_41;
      {
        t = get_config_0(t);
        {
          n_54 = t;
          if(((k_54 != NULL) && (k_54 != n_54)))
            _fail(n_54);
          else
            k_54 = n_54;
        }
      }
      LocalPopChoice(x_41);
    }
  else
    {
      t = w_41;
      {
        ATerm q_12 (ATerm t)
        {
          ATerm r_12 (ATerm t)
          {
            ATerm o_54 = NULL;
            o_54 = t;
            if(((k_54 != NULL) && (k_54 != o_54)))
              _fail(o_54);
            else
              k_54 = o_54;
            return(t);
          }
          t = Program_1(t, r_12);
          return(t);
        }
        t = fetch_1(t, q_12);
      }
    }
  {
    ATerm c_42 = t;
    int d_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_12 (ATerm t)
        {
          t = not_null(k_54);
          return(t);
        }
        t = short_description_1(t, w_12);
        t = echo_0(t);
        LocalPopChoice(d_42);
      }
    else
      {
        t = c_42;
        {
        }
      }
    {
      t = term_e_42;
      {
        t = echo_0(t);
        {
          t = term_i_42;
          {
            t = table_get_0(t);
            {
              ATerm x_12 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = reverse_acc_2(t, _id, x_12);
              {
                ATerm y_12 (ATerm t)
                {
                  ATerm p_54 = NULL;
                  ATerm q_54 = NULL;
                  q_54 = t;
                  if(((p_54 != NULL) && (p_54 != q_54)))
                    _fail(q_54);
                  else
                    p_54 = q_54;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_54)), term_l_42);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, y_12);
                {
                  ATerm m_42 = t;
                  int n_42 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm r_54 = NULL;
                      ATerm s_54 = NULL;
                      ATerm z_12 (ATerm t)
                      {
                        t = not_null(k_54);
                        return(t);
                      }
                      t = long_description_1(t, z_12);
                      {
                        s_54 = t;
                        if(((r_54 != NULL) && (r_54 != s_54)))
                          _fail(s_54);
                        else
                          r_54 = s_54;
                      }
                      {
                        t = (ATerm) ATinsert(CheckATermList(not_null(r_54)), term_e_30);
                        t = echo_0(t);
                      }
                      LocalPopChoice(n_42);
                    }
                  else
                    {
                      t = m_42;
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
  ATerm o_42;
  o_42 = t;
  {
    ATerm y_54 = NULL;
    ATerm z_54 = NULL;
    z_54 = t;
    if(((y_54 != NULL) && (y_54 != z_54)))
      _fail(z_54);
    else
      y_54 = z_54;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_m_15, (ATerm) ATinsert(ATempty, not_null(y_54)));
      t = printnl_0(t);
    }
  }
  t = o_42;
  return(t);
}
ATerm say_1 (ATerm t, ATerm m_83 (ATerm))
{
  ATerm p_42;
  p_42 = t;
  {
    t = m_83(t);
    t = debug_0(t);
  }
  t = p_42;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm g_59 (ATerm))
{
  ATerm g_55 = NULL,h_55 = NULL;
  g_55 = t;
  f_55 :
  if(match_cons(g_55, sym_Undefined_1))
    {
      h_55 = ATgetArgument(g_55, 0);
      {
        ATerm k_55 = NULL,m_55 = NULL;
        ATerm l_55 = NULL;
        t = SSLgetAnnotations(not_null(g_55));
        {
          l_55 = t;
          if(((k_55 != NULL) && (k_55 != l_55)))
            _fail(l_55);
          else
            k_55 = l_55;
        }
        {
          t = not_null(h_55);
          {
            ATerm o_55 = NULL;
            t = g_59(t);
            {
              m_55 = t;
              {
                ATerm p_55 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(m_55)), not_null(k_55));
                {
                  p_55 = t;
                  if(((o_55 != NULL) && (o_55 != p_55)))
                    _fail(p_55);
                  else
                    o_55 = p_55;
                }
                t = not_null(o_55);
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
ATerm fetch_1 (ATerm t, ATerm w_72 (ATerm))
{
  ATerm u_55 (ATerm t)
  {
    ATerm q_42 = t;
    int r_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, w_72, _id);
        LocalPopChoice(r_42);
      }
    else
      {
        t = q_42;
        t = Cons_2(t, _id, u_55);
      }
    return(t);
  }
  t = u_55(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm k_87 (ATerm))
{
  t = fetch_1(t, k_87);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm z_55 = NULL;
  z_55 = t;
  y_55 :
  if(match_cons(z_55, sym_Help_0))
    {
      ATerm b_56 = NULL,d_56 = NULL;
      ATerm s_42;
      s_42 = t;
      {
        ATerm c_56 = NULL;
        t = SSLgetAnnotations(not_null(z_55));
        {
          c_56 = t;
          if(((b_56 != NULL) && (b_56 != c_56)))
            _fail(c_56);
          else
            b_56 = c_56;
        }
      }
      t = s_42;
      {
        ATerm e_56 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(b_56));
        {
          e_56 = t;
          if(((d_56 != NULL) && (d_56 != e_56)))
            _fail(e_56);
          else
            d_56 = e_56;
        }
        t = not_null(d_56);
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
  ATerm k_56 = NULL,l_56 = NULL,m_56 = NULL;
  k_56 = t;
  j_56 :
  if(match_cons(k_56, sym__2))
    {
      l_56 = ATgetArgument(k_56, 0);
      m_56 = ATgetArgument(k_56, 1);
      t = SSL_table_get(not_null(l_56), not_null(m_56));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm t_56 = NULL,u_56 = NULL,v_56 = NULL,w_56 = NULL;
  t_56 = t;
  s_56 :
  if(match_cons(t_56, sym__3))
    {
      u_56 = ATgetArgument(t_56, 0);
      v_56 = ATgetArgument(t_56, 1);
      w_56 = ATgetArgument(t_56, 2);
      {
        ATerm t_42;
        t_42 = t;
        {
          ATerm a_57 = NULL;
          ATerm b_57 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_56), not_null(v_56));
          {
            ATerm u_42 = t;
            int v_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(v_42);
              }
            else
              {
                t = u_42;
                t = (ATerm) ATempty;
              }
            {
              b_57 = t;
              if(((a_57 != NULL) && (a_57 != b_57)))
                _fail(b_57);
              else
                a_57 = b_57;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(u_56), not_null(v_56), (ATerm) ATinsert(CheckATermList(not_null(a_57)), not_null(w_56)));
            t = table_put_0(t);
          }
        }
        t = t_42;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm p_88 (ATerm))
{
  ATerm f_57 = NULL;
  ATerm g_57 = NULL;
  t = term_l_20;
  {
    t = p_88(t);
    {
      g_57 = t;
      if(((f_57 != NULL) && (f_57 != g_57)))
        _fail(g_57);
      else
        f_57 = g_57;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_g_42, term_h_42, not_null(f_57));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm m_57 = NULL,n_57 = NULL,o_57 = NULL;
  m_57 = t;
  l_57 :
  if(match_string(m_57, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(m_57) == AT_LIST) && !(ATisEmpty(m_57))))
        {
          n_57 = ATgetFirst((ATermList) m_57);
          o_57 = (ATerm) ATgetNext((ATermList) m_57);
          {
            ATerm r_57 = NULL;
            ATerm x_42;
            x_42 = t;
            {
              t = not_null(n_57);
              t = a_0(t);
            }
            t = x_42;
            {
              ATerm s_57 = NULL;
              t = term_l_20;
              {
                t = d_0(t);
                {
                  s_57 = t;
                  if(((r_57 != NULL) && (r_57 != s_57)))
                    _fail(s_57);
                  else
                    r_57 = s_57;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(o_57)), not_null(r_57));
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
  ATerm e_13 (ATerm t)
  {
    ATerm x_57 = NULL;
    x_57 = t;
    w_57 :
    if(!(match_string(x_57, "--help")))
      {
        if(!(match_string(x_57, "-h")))
          {
            if(!(match_string(x_57, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm f_13 (ATerm t)
  {
    t = term_a_40;
    {
      t = set_config_0(t);
      t = term_y_42;
    }
    return(t);
  }
  ATerm g_13 (ATerm t)
  {
    t = term_z_42;
    return(t);
  }
  t = Option_3(t, e_13, f_13, g_13);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm a_58 = NULL,b_58 = NULL,c_58 = NULL;
  a_58 = t;
  z_57 :
  if(((ATgetType(a_58) == AT_LIST) && !(ATisEmpty(a_58))))
    {
      b_58 = ATgetFirst((ATermList) a_58);
      c_58 = (ATerm) ATgetNext((ATermList) a_58);
      t = (ATerm) ATinsert(CheckATermList(not_null(c_58)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(b_58)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm n_88 (ATerm))
{
  ATerm a_43;
  a_43 = t;
  {
    ATerm b_43 = t;
    int c_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_d_43;
        t = n_88(t);
        LocalPopChoice(c_43);
      }
    else
      {
        t = b_43;
        {
        }
      }
  }
  t = a_43;
  {
    ATerm h_13 (ATerm t)
    {
      ATerm k_58 = NULL;
      ATerm e_43;
      e_43 = t;
      {
        ATerm i_58 = NULL;
        ATerm j_58 = NULL;
        j_58 = t;
        if(((i_58 != NULL) && (i_58 != j_58)))
          _fail(j_58);
        else
          i_58 = j_58;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_z_41, not_null(i_58));
          t = set_config_0(t);
        }
      }
      t = e_43;
      {
        ATerm l_58 = NULL;
        l_58 = t;
        if(((k_58 != NULL) && (k_58 != l_58)))
          _fail(l_58);
        else
          k_58 = l_58;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(k_58));
      }
      return(t);
    }
    ATerm i_13 (ATerm t)
    {
      ATerm f_43 = t;
      int g_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_43 = t;
          int p_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(p_43);
            }
          else
            {
              t = h_43;
              {
                t = n_88(t);
                t = Cons_2(t, _id, i_13);
              }
            }
          LocalPopChoice(g_43);
        }
      else
        {
          t = f_43;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, h_13, i_13);
  }
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm m_88 (ATerm))
{
  ATerm q_58 = NULL;
  ATerm q_43;
  q_43 = t;
  {
    t = term_r_43;
    t = table_put_0(t);
  }
  t = q_43;
  {
    ATerm l_13 (ATerm t)
    {
      ATerm u_43 = t;
      int v_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_88(t);
          LocalPopChoice(v_43);
        }
      else
        {
          t = u_43;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, l_13);
    {
      ATerm w_43 = t;
      int x_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_43;
          y_43 = t;
          {
            ATerm z_43 = t;
            int c_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_z_39;
                t = get_config_0(t);
                LocalPopChoice(c_44);
              }
            else
              {
                t = z_43;
                t = fetch_1(t, Help_0);
              }
          }
          t = y_43;
          {
            t = system_usage_0(t);
            {
              t = term_q_14;
              t = exit_0(t);
            }
          }
          LocalPopChoice(x_43);
        }
      else
        {
          t = w_43;
          {
            ATerm d_44 = t;
            int f_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_13 (ATerm t)
                {
                  ATerm r_13 (ATerm t)
                  {
                    ATerm r_58 = NULL;
                    r_58 = t;
                    if(((q_58 != NULL) && (q_58 != r_58)))
                      _fail(r_58);
                    else
                      q_58 = r_58;
                    return(t);
                  }
                  t = Undefined_1(t, r_13);
                  return(t);
                }
                t = fetch_1(t, q_13);
                {
                  ATerm s_13 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_58)), term_g_44);
                    return(t);
                  }
                  t = say_1(t, s_13);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_c_22;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(f_44);
              }
            else
              {
                t = d_44;
                {
                }
              }
          }
        }
      {
        ATerm h_44;
        h_44 = t;
        {
          t = term_g_42;
          t = table_destroy_0(t);
        }
        t = h_44;
      }
    }
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm v_58 = NULL,w_58 = NULL,x_58 = NULL;
  ATerm i_44;
  i_44 = t;
  {
    ATerm y_58 = NULL,z_58 = NULL,a_59 = NULL,b_59 = NULL;
    y_58 = t;
    u_58 :
    if(match_cons(y_58, sym__3))
      {
        z_58 = ATgetArgument(y_58, 0);
        a_59 = ATgetArgument(y_58, 1);
        b_59 = ATgetArgument(y_58, 2);
        {
          if(((v_58 != NULL) && (v_58 != z_58)))
            _fail(z_58);
          else
            v_58 = z_58;
          {
            if(((w_58 != NULL) && (w_58 != a_59)))
              _fail(a_59);
            else
              w_58 = a_59;
            {
              if(((x_58 != NULL) && (x_58 != b_59)))
                _fail(b_59);
              else
                x_58 = b_59;
              t = SSL_table_put(not_null(v_58), not_null(w_58), not_null(x_58));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = i_44;
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm h_59 = NULL,i_59 = NULL,j_59 = NULL;
  h_59 = t;
  e_59 :
  if(match_cons(h_59, sym__2))
    {
      i_59 = ATgetArgument(h_59, 0);
      j_59 = ATgetArgument(h_59, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_o_29, not_null(i_59), not_null(j_59));
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
  ATerm j_44 = t;
  int k_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(k_44);
    }
  else
    {
      t = j_44;
      {
        ATerm q_59 = NULL,r_59 = NULL,s_59 = NULL;
        q_59 = t;
        p_59 :
        if(((ATgetType(q_59) == AT_LIST) && !(ATisEmpty(q_59))))
          {
            r_59 = ATgetFirst((ATermList) q_59);
            s_59 = (ATerm) ATgetNext((ATermList) q_59);
            {
              t = not_null(r_59);
              {
                ATerm t_13 (ATerm t)
                {
                  t = not_null(s_59);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, t_13);
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
  ATerm c_60 = NULL;
  ATerm e_60 = NULL;
  c_60 = t;
  {
    ATerm f_60 = NULL;
    ATerm h_60 = NULL,i_60 = NULL,j_60 = NULL;
    t = not_null(c_60);
    {
      f_60 = t;
      {
        t = SSL_explode_term(not_null(f_60));
        {
          h_60 = t;
          a_60 :
          if(match_cons(h_60, sym__2))
            {
              i_60 = ATgetArgument(h_60, 0);
              j_60 = ATgetArgument(h_60, 1);
              b_60 :
              if(match_string(i_60, ""))
                {
                  if(((e_60 != NULL) && (e_60 != j_60)))
                    _fail(j_60);
                  else
                    e_60 = j_60;
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
      t = not_null(e_60);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm r_60 = NULL;
  r_60 = t;
  q_60 :
  if(((ATgetType(r_60) == AT_LIST) && ATisEmpty(r_60)))
    {
      {
        ATerm t_60 = NULL,v_60 = NULL;
        ATerm l_44;
        l_44 = t;
        {
          ATerm u_60 = NULL;
          t = SSLgetAnnotations(not_null(r_60));
          {
            u_60 = t;
            if(((t_60 != NULL) && (t_60 != u_60)))
              _fail(u_60);
            else
              t_60 = u_60;
          }
        }
        t = l_44;
        {
          ATerm w_60 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(t_60));
          {
            w_60 = t;
            if(((v_60 != NULL) && (v_60 != w_60)))
              _fail(w_60);
            else
              v_60 = w_60;
          }
          t = not_null(v_60);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm c_73 (ATerm))
{
  ATerm a_61 (ATerm t)
  {
    ATerm m_44 = t;
    int n_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, a_61);
        LocalPopChoice(n_44);
      }
    else
      {
        t = m_44;
        {
          t = Nil_0(t);
          t = c_73(t);
        }
      }
    return(t);
  }
  t = a_61(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm d_61 = NULL,e_61 = NULL,f_61 = NULL;
  d_61 = t;
  c_61 :
  if(match_cons(d_61, sym__2))
    {
      e_61 = ATgetArgument(d_61, 0);
      f_61 = ATgetArgument(d_61, 1);
      {
        t = not_null(e_61);
        {
          ATerm u_13 (ATerm t)
          {
            t = not_null(f_61);
            return(t);
          }
          t = at_end_1(t, u_13);
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
  ATerm o_44 = t;
  int p_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(p_44);
    }
  else
    {
      t = o_44;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm c_53 (ATerm), ATerm d_53 (ATerm))
{
  ATerm p_61 = NULL,q_61 = NULL,r_61 = NULL;
  p_61 = t;
  o_61 :
  if(match_cons(p_61, sym__2))
    {
      q_61 = ATgetArgument(p_61, 0);
      r_61 = ATgetArgument(p_61, 1);
      {
        ATerm v_61 = NULL,x_61 = NULL;
        ATerm w_61 = NULL;
        t = SSLgetAnnotations(not_null(p_61));
        {
          w_61 = t;
          if(((v_61 != NULL) && (v_61 != w_61)))
            _fail(w_61);
          else
            v_61 = w_61;
        }
        {
          t = not_null(q_61);
          {
            ATerm z_61 = NULL;
            t = c_53(t);
            {
              x_61 = t;
              {
                t = not_null(r_61);
                {
                  ATerm b_62 = NULL;
                  t = d_53(t);
                  {
                    z_61 = t;
                    {
                      ATerm c_62 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(x_61), not_null(z_61)), not_null(v_61));
                      {
                        c_62 = t;
                        if(((b_62 != NULL) && (b_62 != c_62)))
                          _fail(c_62);
                        else
                          b_62 = c_62;
                      }
                      t = not_null(b_62);
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
    ATerm q_44 = t;
    int r_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(r_44);
      }
    else
      {
        t = q_44;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm j_62 = NULL;
  j_62 = t;
  t = SSL_implode_string(not_null(j_62));
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm l_54 (ATerm), ATerm m_54 (ATerm))
{
  ATerm s_62 = NULL,t_62 = NULL,u_62 = NULL;
  s_62 = t;
  r_62 :
  if(((ATgetType(s_62) == AT_LIST) && !(ATisEmpty(s_62))))
    {
      t_62 = ATgetFirst((ATermList) s_62);
      u_62 = (ATerm) ATgetNext((ATermList) s_62);
      {
        ATerm y_62 = NULL,a_63 = NULL;
        ATerm z_62 = NULL;
        t = SSLgetAnnotations(not_null(s_62));
        {
          z_62 = t;
          if(((y_62 != NULL) && (y_62 != z_62)))
            _fail(z_62);
          else
            y_62 = z_62;
        }
        {
          t = not_null(t_62);
          {
            ATerm c_63 = NULL;
            t = l_54(t);
            {
              a_63 = t;
              {
                t = not_null(u_62);
                {
                  ATerm e_63 = NULL;
                  t = m_54(t);
                  {
                    c_63 = t;
                    {
                      ATerm f_63 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(c_63)), not_null(a_63)), not_null(y_62));
                      {
                        f_63 = t;
                        if(((e_63 != NULL) && (e_63 != f_63)))
                          _fail(f_63);
                        else
                          e_63 = f_63;
                      }
                      t = not_null(e_63);
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
  ATerm m_63 = NULL;
  m_63 = t;
  t = SSL_explode_string(not_null(m_63));
  return(t);
}
ATerm get_path_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm s_44 = t;
    int t_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_63 (ATerm t)
        {
          ATerm u_44 = t;
          int w_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, r_63);
              LocalPopChoice(w_44);
            }
          else
            {
              t = u_44;
              {
                ATerm v_13 (ATerm t)
                {
                  ATerm q_63 = NULL;
                  q_63 = t;
                  p_63 :
                  if(!(match_int(q_63, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                ATerm y_13 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = Cons_2(t, v_13, y_13);
              }
            }
          return(t);
        }
        t = r_63(t);
        LocalPopChoice(t_44);
      }
    else
      {
        t = s_44;
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
  ATerm x_44;
  x_44 = t;
  {
    ATerm f_64 = NULL,h_64 = NULL,j_64 = NULL,l_64 = NULL,p_64 = NULL,t_64 = NULL,a_65 = NULL,e_65 = NULL;
    t = term_d_45;
    {
      t = set_config_0(t);
      {
        t = term_e_45;
        {
          t = set_config_0(t);
          {
            t = term_f_45;
            {
              t = set_config_0(t);
              {
                ATerm g_45;
                g_45 = t;
                {
                  ATerm g_64 = NULL;
                  t = term_h_45;
                  {
                    t = xtc_find_path_0(t);
                    {
                      g_64 = t;
                      if(((f_64 != NULL) && (f_64 != g_64)))
                        _fail(g_64);
                      else
                        f_64 = g_64;
                    }
                  }
                }
                t = g_45;
                {
                  ATerm i_45;
                  i_45 = t;
                  {
                    ATerm i_64 = NULL;
                    t = term_j_45;
                    {
                      t = xtc_find_path_0(t);
                      {
                        i_64 = t;
                        if(((h_64 != NULL) && (h_64 != i_64)))
                          _fail(i_64);
                        else
                          h_64 = i_64;
                      }
                    }
                  }
                  t = i_45;
                  {
                    ATerm k_64 = NULL;
                    t = term_q_45;
                    {
                      t = xtc_find_path_0(t);
                      {
                        k_64 = t;
                        if(((j_64 != NULL) && (j_64 != k_64)))
                          _fail(k_64);
                        else
                          j_64 = k_64;
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_w_25, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(j_64)), term_w_25), not_null(h_64)), term_w_25), not_null(f_64)), term_w_25));
                      {
                        t = set_config_0(t);
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_a_17, (ATerm) ATinsert(ATinsert(ATempty, term_w_45), term_r_45));
                          {
                            t = set_config_0(t);
                            {
                              ATerm x_45;
                              x_45 = t;
                              {
                                ATerm m_64 = NULL,o_64 = NULL;
                                ATerm n_64 = NULL;
                                t = term_y_45;
                                {
                                  t = xtc_find_path_0(t);
                                  {
                                    n_64 = t;
                                    if(((m_64 != NULL) && (m_64 != n_64)))
                                      _fail(n_64);
                                    else
                                      m_64 = n_64;
                                  }
                                }
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(m_64), term_z_45);
                                  {
                                    t = conc_strings_0(t);
                                    {
                                      o_64 = t;
                                      if(((l_64 != NULL) && (l_64 != o_64)))
                                        _fail(o_64);
                                      else
                                        l_64 = o_64;
                                    }
                                  }
                                }
                              }
                              t = x_45;
                              {
                                ATerm a_46;
                                a_46 = t;
                                {
                                  ATerm q_64 = NULL,s_64 = NULL;
                                  ATerm r_64 = NULL;
                                  t = term_y_45;
                                  {
                                    t = xtc_find_path_0(t);
                                    {
                                      r_64 = t;
                                      if(((q_64 != NULL) && (q_64 != r_64)))
                                        _fail(r_64);
                                      else
                                        q_64 = r_64;
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(q_64), term_z_45);
                                    {
                                      t = conc_strings_0(t);
                                      {
                                        s_64 = t;
                                        if(((p_64 != NULL) && (p_64 != s_64)))
                                          _fail(s_64);
                                        else
                                          p_64 = s_64;
                                      }
                                    }
                                  }
                                }
                                t = a_46;
                                {
                                  ATerm x_64 = NULL,z_64 = NULL;
                                  ATerm y_64 = NULL;
                                  t = term_b_46;
                                  {
                                    t = xtc_find_path_0(t);
                                    {
                                      y_64 = t;
                                      if(((x_64 != NULL) && (x_64 != y_64)))
                                        _fail(y_64);
                                      else
                                        x_64 = y_64;
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(x_64), term_z_45);
                                    {
                                      t = conc_strings_0(t);
                                      {
                                        z_64 = t;
                                        if(((t_64 != NULL) && (t_64 != z_64)))
                                          _fail(z_64);
                                        else
                                          t_64 = z_64;
                                      }
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_t_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(t_64)), term_w_25), not_null(p_64)), term_w_25), not_null(l_64)), term_w_25));
                                    {
                                      t = set_config_0(t);
                                      {
                                        ATerm c_46;
                                        c_46 = t;
                                        {
                                          ATerm b_65 = NULL,d_65 = NULL;
                                          ATerm c_65 = NULL;
                                          t = term_y_45;
                                          {
                                            t = xtc_find_path_0(t);
                                            {
                                              c_65 = t;
                                              if(((b_65 != NULL) && (b_65 != c_65)))
                                                _fail(c_65);
                                              else
                                                b_65 = c_65;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(b_65), term_f_46);
                                            {
                                              t = conc_strings_0(t);
                                              {
                                                d_65 = t;
                                                if(((a_65 != NULL) && (a_65 != d_65)))
                                                  _fail(d_65);
                                                else
                                                  a_65 = d_65;
                                              }
                                            }
                                          }
                                        }
                                        t = c_46;
                                        {
                                          ATerm f_65 = NULL,j_65 = NULL;
                                          ATerm i_65 = NULL;
                                          t = term_b_46;
                                          {
                                            t = xtc_find_path_0(t);
                                            {
                                              i_65 = t;
                                              if(((f_65 != NULL) && (f_65 != i_65)))
                                                _fail(i_65);
                                              else
                                                f_65 = i_65;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(f_65), term_f_46);
                                            {
                                              t = conc_strings_0(t);
                                              {
                                                j_65 = t;
                                                if(((e_65 != NULL) && (e_65 != j_65)))
                                                  _fail(j_65);
                                                else
                                                  e_65 = j_65;
                                              }
                                            }
                                          }
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, term_c_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_46), term_j_46), not_null(e_65)), term_g_46), term_i_46), term_h_46), not_null(a_65)), term_g_46));
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
  t = x_44;
  return(t);
}
ATerm command_line_options_0 (ATerm t)
{
  t = init_sc_config_0(t);
  {
    t = parse_options_1(t, sc_options_0);
    {
      ATerm n_46 = t;
      int r_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_65 = NULL;
          t = term_i_40;
          {
            t = get_config_0(t);
            {
              ATerm z_65 = NULL;
              t = term_s_46;
              {
                t = xtc_find_0(t);
                {
                  z_65 = t;
                  if(((y_65 != NULL) && (y_65 != z_65)))
                    _fail(z_65);
                  else
                    y_65 = z_65;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(y_65), term_n_16);
                {
                  t = copy_file_0(t);
                  {
                    t = term_q_14;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
          LocalPopChoice(r_46);
        }
      else
        {
          t = n_46;
          {
          }
        }
      {
        ATerm u_46 = t;
        int v_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_l_40;
            {
              t = get_config_0(t);
              {
                t = sc_version_0(t);
                {
                  t = term_q_14;
                  t = exit_0(t);
                }
              }
            }
            LocalPopChoice(v_46);
          }
        else
          {
            t = u_46;
            {
            }
          }
        {
          ATerm w_46 = t;
          int y_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_47;
              a_47 = t;
              {
                t = term_u_23;
                t = get_config_0(t);
              }
              t = a_47;
              LocalPopChoice(y_46);
            }
          else
            {
              t = w_46;
              {
                t = (ATerm) ATinsert(ATempty, term_b_47);
                t = fatal_error_0(t);
              }
            }
          {
            t = if_verbose2_1(t, sc_version_0);
            {
              ATerm d_14 (ATerm t)
              {
                ATerm c_47;
                c_47 = t;
                {
                  t = term_u_23;
                  {
                    t = get_config_0(t);
                    {
                      ATerm e_14 (ATerm t)
                      {
                        t = term_d_47;
                        return(t);
                      }
                      t = debug_1(t, e_14);
                    }
                  }
                }
                t = c_47;
                return(t);
              }
              t = if_verbose1_1(t, d_14);
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
  ATerm e_47 = t;
  int f_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = command_line_options_0(t);
      {
        ATerm f_14 (ATerm t)
        {
          ATerm g_14 (ATerm t)
          {
            ATerm e_66 = NULL;
            ATerm f_66 = NULL;
            f_66 = t;
            if(((e_66 != NULL) && (e_66 != f_66)))
              _fail(f_66);
            else
              e_66 = f_66;
            {
              t = (ATerm) ATmakeAppl(sym__2, term_m_15, (ATerm) ATinsert(CheckATermList(not_null(e_66)), term_h_47));
              t = printnl_0(t);
            }
            return(t);
          }
          t = if_verbose1_1(t, g_14);
          return(t);
        }
        t = profile_p__2(t, f_14, compile_0);
        {
          ATerm h_14 (ATerm t)
          {
            ATerm g_66 = NULL;
            ATerm h_66 = NULL;
            t = run_time_0(t);
            {
              h_66 = t;
              if(((g_66 != NULL) && (g_66 != h_66)))
                _fail(h_66);
              else
                g_66 = h_66;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, term_m_15, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_47), not_null(g_66)), term_j_47));
              t = printnl_0(t);
            }
            return(t);
          }
          t = if_verbose2_1(t, h_14);
          {
            t = term_q_14;
            t = exit_0(t);
          }
        }
      }
      LocalPopChoice(f_47);
    }
  else
    {
      t = e_47;
      {
        ATerm i_66 = NULL;
        ATerm j_66 = NULL;
        t = run_time_0(t);
        {
          j_66 = t;
          if(((i_66 != NULL) && (i_66 != j_66)))
            _fail(j_66);
          else
            i_66 = j_66;
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_m_15, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_47), not_null(i_66)), term_n_47));
          {
            t = printnl_0(t);
            {
              t = term_c_22;
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
