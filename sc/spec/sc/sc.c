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
ATerm term_w_48;
ATerm term_w_47;
ATerm term_v_47;
ATerm term_u_47;
ATerm term_r_47;
ATerm term_p_47;
ATerm term_c_47;
ATerm term_z_46;
ATerm term_y_46;
ATerm term_m_46;
ATerm term_k_46;
ATerm term_h_46;
ATerm term_g_46;
ATerm term_e_46;
ATerm term_b_46;
ATerm term_x_45;
ATerm term_u_45;
ATerm term_s_45;
ATerm term_q_45;
ATerm term_o_45;
ATerm term_k_45;
ATerm term_h_45;
ATerm term_f_45;
ATerm term_e_45;
ATerm term_d_45;
ATerm term_a_44;
ATerm term_k_43;
ATerm term_d_43;
ATerm term_z_42;
ATerm term_y_42;
ATerm term_e_42;
ATerm term_c_42;
ATerm term_b_42;
ATerm term_a_42;
ATerm term_z_41;
ATerm term_w_41;
ATerm term_s_41;
ATerm term_r_41;
ATerm term_j_41;
ATerm term_i_41;
ATerm term_h_41;
ATerm term_g_41;
ATerm term_y_40;
ATerm term_x_40;
ATerm term_v_40;
ATerm term_u_40;
ATerm term_t_40;
ATerm term_s_40;
ATerm term_r_40;
ATerm term_q_40;
ATerm term_p_40;
ATerm term_o_40;
ATerm term_n_40;
ATerm term_m_40;
ATerm term_l_40;
ATerm term_f_40;
ATerm term_e_40;
ATerm term_c_40;
ATerm term_b_40;
ATerm term_a_40;
ATerm term_z_39;
ATerm term_u_39;
ATerm term_t_39;
ATerm term_s_39;
ATerm term_o_39;
ATerm term_n_39;
ATerm term_j_39;
ATerm term_g_39;
ATerm term_c_39;
ATerm term_z_38;
ATerm term_y_38;
ATerm term_x_38;
ATerm term_u_38;
ATerm term_t_38;
ATerm term_q_38;
ATerm term_i_38;
ATerm term_h_38;
ATerm term_e_38;
ATerm term_z_37;
ATerm term_t_37;
ATerm term_s_37;
ATerm term_n_37;
ATerm term_j_37;
ATerm term_g_37;
ATerm term_z_36;
ATerm term_v_36;
ATerm term_o_36;
ATerm term_h_36;
ATerm term_f_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_r_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_p_33;
ATerm term_k_33;
ATerm term_j_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_x_32;
ATerm term_h_32;
ATerm term_q_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_h_31;
ATerm term_f_31;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_p_29;
ATerm term_n_29;
ATerm term_o_28;
ATerm term_n_28;
ATerm term_f_27;
ATerm term_u_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_u_24;
ATerm term_p_24;
ATerm term_o_23;
ATerm term_l_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_d_23;
ATerm term_u_22;
ATerm term_s_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_z_21;
ATerm term_w_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_z_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_i_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_y_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_e_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_x_18;
ATerm term_t_18;
ATerm term_o_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_z_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_o_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_i_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_w_14;
ATerm term_n_14;
void init_constant_terms (void)
{
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling C code", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("C-pretty.pp", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end: ", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize2", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize1", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize: ", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to ", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("frontend", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol(".fro", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("main strategy is: ", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol(".with-main", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (before frontend) written to ", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to ", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("infile", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym__2, term_l_23, term_s_22);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("SC ", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2002 Eelco Visser <visser@acm.org>\n", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("This program is free software; you can redistribute it and/or modify\n", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("it under the terms of the GNU General Public License as published by\n", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("the Free Software Foundation; either version 2, or (at your option)\n", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("any later version.\n", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(sym__2, term_h_31, term_l_31);
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(sym__2, term_h_31, term_e_33);
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-i file            Main module to compile (required)\n", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f | --output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d\n", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(sym__2, term_s_15, term_b_20);
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(sym__2, term_t_21, term_b_20);
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(sym__2, term_x_18, term_b_20);
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(sym__2, term_e_18, term_b_20);
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all", 0, ATtrue));
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(sym__2, term_x_38, term_b_20);
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all        Instrument all definitions to print tracing information", 0, ATtrue));
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-t f               Instrument definition of f to print tracing information\n", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i        Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(sym__2, term_w_14, term_n_14);
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-S | --silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(sym__2, term_s_39, term_b_20);
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(sym__2, term_z_39, term_b_20);
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(sym__2, term_c_40, term_b_20);
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M\n", 0, ATtrue));
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_p_40));
  term_p_40 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_u_40));
  term_u_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that sc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(ATmakeSymbol("SC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_r_41));
  term_r_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_s_41));
  term_s_41 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeAppl(sym__2, term_a_42, term_b_42);
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(sym__3, term_a_42, term_b_42, (ATerm) ATempty);
  ATprotect(&(term_a_44));
  term_a_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeAppl(ATmakeSymbol("0.9beta8", 0, ATtrue));
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeAppl(sym__2, term_f_30, term_d_45);
  ATprotect(&(term_f_45));
  term_f_45 = (ATerm) ATmakeAppl(sym__2, term_w_14, term_z_21);
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeAppl(sym__2, term_m_19, term_n_14);
  ATprotect(&(term_k_45));
  term_k_45 = (ATerm) ATmakeAppl(ATmakeSymbol("lib.rtree", 0, ATtrue));
  ATprotect(&(term_o_45));
  term_o_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego.rtree", 0, ATtrue));
  ATprotect(&(term_q_45));
  term_q_45 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_s_45));
  term_s_45 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego.h>", 0, ATtrue));
  ATprotect(&(term_u_45));
  term_u_45 = (ATerm) ATmakeAppl(ATmakeSymbol("<ssl/stratego-lib.h>", 0, ATtrue));
  ATprotect(&(term_x_45));
  term_x_45 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS", 0, ATtrue));
  ATprotect(&(term_b_46));
  term_b_46 = (ATerm) ATmakeAppl(ATmakeSymbol("/include", 0, ATtrue));
  ATprotect(&(term_e_46));
  term_e_46 = (ATerm) ATmakeAppl(ATmakeSymbol("ATERM", 0, ATtrue));
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib", 0, ATtrue));
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue));
  ATprotect(&(term_k_46));
  term_k_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-lib.opt", 0, ATtrue));
  ATprotect(&(term_m_46));
  term_m_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego.opt", 0, ATtrue));
  ATprotect(&(term_y_46));
  term_y_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-lATerm-gcc", 0, ATtrue));
  ATprotect(&(term_z_46));
  term_z_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-lm", 0, ATtrue));
  ATprotect(&(term_c_47));
  term_c_47 = (ATerm) ATmakeAppl(ATmakeSymbol("sc-manual.txt", 0, ATtrue));
  ATprotect(&(term_p_47));
  term_p_47 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_r_47));
  term_r_47 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_u_47));
  term_u_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_w_47));
  term_w_47 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_48));
  term_w_48 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue));
}
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm e_78 (ATerm), ATerm f_78 (ATerm));
ATerm crush_2 (ATerm, ATerm c_77 (ATerm), ATerm d_77 (ATerm));
ATerm run_time_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm m_85 (ATerm));
ATerm Snd_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm link_object_code_0 (ATerm);
ATerm c_to_object_code_0 (ATerm);
ATerm c_compile_0 (ATerm);
ATerm xtc_transform_1 (ATerm, ATerm a_92 (ATerm));
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
ATerm if_keep2_1 (ATerm, ATerm a_86 (ATerm));
ATerm frontend_0 (ATerm);
ATerm if_keep3_1 (ATerm, ATerm b_86 (ATerm));
ATerm AddMain_1 (ATerm, ATerm x_63 (ATerm));
ATerm xtc_io_transform_1 (ATerm, ATerm k_92 (ATerm));
ATerm add_main_0 (ATerm);
ATerm get_outfile_1 (ATerm, ATerm w_63 (ATerm));
ATerm stderr_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm r_0 (ATerm));
ATerm output_ast_0 (ATerm);
ATerm pass_keep_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm dep_name_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm i_92 (ATerm), ATerm j_92 (ATerm));
ATerm call_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm z_91 (ATerm));
ATerm assert_1 (ATerm, ATerm i_82 (ATerm));
ATerm obsolete_1 (ATerm, ATerm w_82 (ATerm));
ATerm open_file_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm p_0 (ATerm), ATerm q_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm q_58 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm b_92 (ATerm), ATerm c_92 (ATerm));
ATerm if_verbose3_1 (ATerm, ATerm n_85 (ATerm));
ATerm basename_1 (ATerm, ATerm b_81 (ATerm));
ATerm basename_0 (ATerm);
ATerm get_infile_0 (ATerm);
ATerm parse_0 (ATerm);
ATerm front_end_0 (ATerm);
ATerm rename_file_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm rename_to_1 (ATerm, ATerm o_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm f_82 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm l_64 (ATerm), ATerm m_64 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm e_82 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm t_91 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm u_91 (ATerm));
ATerm compile_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm l_85 (ATerm));
ATerm ticks_to_seconds_0 (ATerm);
ATerm self_children_sys_time_0 (ATerm);
ATerm add_0 (ATerm);
ATerm self_children_user_time_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm diff_times_0 (ATerm);
ATerm times_0 (ATerm);
ATerm profile_p__2 (ATerm, ATerm h_83 (ATerm), ATerm i_83 (ATerm));
ATerm debug_1 (ATerm, ATerm p_82 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm sc_announce_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm sc_version_0 (ATerm);
ATerm try_1 (ATerm, ATerm y_63 (ATerm));
ATerm copy_file_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm p_85 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm o_85 (ATerm));
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose6_1 (ATerm, ATerm q_85 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm r_77 (ATerm), ATerm s_77 (ATerm));
ATerm union_1 (ATerm, ATerm n_77 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm y_88 (ATerm));
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
ATerm map_1 (ATerm, ATerm q_71 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm h_0 (ATerm));
ATerm Program_1 (ATerm, ATerm h_58 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm q_82 (ATerm));
ATerm Undefined_1 (ATerm, ATerm i_58 (ATerm));
ATerm fetch_1 (ATerm, ATerm z_71 (ATerm));
ATerm option_defined_1 (ATerm, ATerm o_86 (ATerm));
ATerm Help_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm t_87 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm r_87 (ATerm));
ATerm parse_options_1 (ATerm, ATerm q_87 (ATerm));
ATerm table_put_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm Nil_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm f_72 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm _2 (ATerm, ATerm e_52 (ATerm), ATerm f_52 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm n_53 (ATerm), ATerm o_53 (ATerm));
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
  h_1 :
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
ATerm foldr_2 (ATerm t, ATerm e_78 (ATerm), ATerm f_78 (ATerm))
{
  ATerm j_14 = t;
  int m_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = e_78(t);
      LocalPopChoice(m_14);
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
                t = foldr_2(t, e_78, f_78);
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
                t = f_78(t);
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
ATerm crush_2 (ATerm t, ATerm c_77 (ATerm), ATerm d_77 (ATerm))
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
      t = foldr_2(t, c_77, d_77);
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
      t = term_n_14;
      return(t);
    }
    t = crush_2(t, b_0, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm m_85 (ATerm))
{
  ATerm o_14 = t;
  int p_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_14;
      q_14 = t;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_4), term_z_14);
          t = geq_0(t);
        }
      }
      t = q_14;
      t = m_85(t);
      LocalPopChoice(p_14);
    }
  else
    {
      t = o_14;
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
                  t = (ATerm) ATmakeAppl(sym__2, term_d_15, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(m_6)), not_null(k_6)), term_i_15), not_null(i_6)));
                  {
                    ATerm t_0 (ATerm t)
                    {
                      ATerm j_15;
                      j_15 = t;
                      {
                        ATerm o_6 = NULL,q_6 = NULL;
                        ATerm k_15;
                        k_15 = t;
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
                        t = k_15;
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
                            t = (ATerm) ATmakeAppl(sym__2, term_l_15, (ATerm) ATinsert(CheckATermList(not_null(q_6)), not_null(o_6)));
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
            t = term_m_15;
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
                t = term_r_15;
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
                  t = (ATerm) ATmakeAppl(sym__2, not_null(j_7), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(g_7)), term_i_15), not_null(e_7)), term_s_15));
                  {
                    ATerm t_15 = t;
                    int y_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = conc_two_lists_0(t);
                        LocalPopChoice(y_15);
                      }
                    else
                      {
                        t = t_15;
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
                  t = (ATerm) ATmakeAppl(sym__2, term_d_15, not_null(i_7));
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
                          t = (ATerm) ATmakeAppl(sym__2, term_l_15, not_null(m_7));
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
        t = term_s_15;
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
              t = (ATerm) ATmakeAppl(sym__2, term_l_15, (ATerm) ATinsert(CheckATermList(not_null(u_7)), term_h_16));
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
ATerm xtc_transform_1 (ATerm t, ATerm a_92 (ATerm))
{
  ATerm b_1 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, a_92, b_1);
  return(t);
}
ATerm abox2text_0 (ATerm t)
{
  ATerm c_1 (ATerm t)
  {
    t = term_i_16;
    return(t);
  }
  t = xtc_transform_1(t, c_1);
  {
    ATerm d_1 (ATerm t)
    {
      ATerm e_1 (ATerm t)
      {
        t = term_j_16;
        return(t);
      }
      t = get_outfile_1(t, e_1);
      return(t);
    }
    t = rename_to_1(t, d_1);
  }
  return(t);
}
ATerm ac2abox_0 (ATerm t)
{
  ATerm f_1 (ATerm t)
  {
    t = term_k_16;
    return(t);
  }
  ATerm g_1 (ATerm t)
  {
    ATerm y_7 = NULL;
    ATerm z_7 = NULL;
    t = term_l_16;
    {
      t = xtc_find_0(t);
      {
        z_7 = t;
        if(((y_7 != NULL) && (y_7 != z_7)))
          _fail(z_7);
        else
          y_7 = z_7;
      }
    }
    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_7)), term_r_16);
    return(t);
  }
  t = xtc_transform_2(t, f_1, g_1);
  return(t);
}
ATerm s2c_0 (ATerm t)
{
  ATerm i_1 (ATerm t)
  {
    t = term_s_16;
    return(t);
  }
  ATerm j_1 (ATerm t)
  {
    ATerm e_8 = NULL,g_8 = NULL;
    ATerm a_17;
    a_17 = t;
    {
      ATerm f_8 = NULL;
      t = pass_verbose_0(t);
      {
        f_8 = t;
        if(((e_8 != NULL) && (e_8 != f_8)))
          _fail(f_8);
        else
          e_8 = f_8;
      }
    }
    t = a_17;
    {
      ATerm j_8 = NULL;
      t = term_b_17;
      {
        t = get_config_0(t);
        {
          ATerm k_1 (ATerm t)
          {
            ATerm h_8 = NULL;
            ATerm i_8 = NULL;
            i_8 = t;
            if(((h_8 != NULL) && (h_8 != i_8)))
              _fail(i_8);
            else
              h_8 = i_8;
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_8)), term_b_17);
            return(t);
          }
          t = map_1(t, k_1);
          {
            j_8 = t;
            if(((g_8 != NULL) && (g_8 != j_8)))
              _fail(j_8);
            else
              g_8 = j_8;
          }
        }
      }
      {
        t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(g_8)), (ATerm) ATinsert(ATempty, term_c_17)), not_null(e_8));
        t = concat_0(t);
      }
    }
    return(t);
  }
  t = xtc_transform_2(t, i_1, j_1);
  return(t);
}
ATerm stratego_cf_0 (ATerm t)
{
  ATerm l_1 (ATerm t)
  {
    t = term_d_17;
    return(t);
  }
  ATerm m_1 (ATerm t)
  {
    ATerm o_8 = NULL;
    ATerm p_8 = NULL;
    t = pass_verbose_0(t);
    {
      p_8 = t;
      if(((o_8 != NULL) && (o_8 != p_8)))
        _fail(p_8);
      else
        o_8 = p_8;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(o_8)), term_c_17);
    return(t);
  }
  t = xtc_transform_2(t, l_1, m_1);
  return(t);
}
ATerm canonicalize_0 (ATerm t)
{
  ATerm n_1 (ATerm t)
  {
    t = term_f_17;
    return(t);
  }
  ATerm o_1 (ATerm t)
  {
    ATerm s_8 = NULL;
    ATerm t_8 = NULL;
    t = pass_verbose_0(t);
    {
      t_8 = t;
      if(((s_8 != NULL) && (s_8 != t_8)))
        _fail(t_8);
      else
        s_8 = t_8;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(s_8)), term_c_17);
    return(t);
  }
  t = xtc_transform_2(t, n_1, o_1);
  return(t);
}
ATerm back_end_0 (ATerm t)
{
  ATerm p_1 (ATerm t)
  {
    ATerm q_1 (ATerm t)
    {
      t = term_g_17;
      return(t);
    }
    t = debug_1(t, q_1);
    return(t);
  }
  t = if_verbose2_1(t, p_1);
  {
    ATerm r_1 (ATerm t)
    {
      ATerm t_1 (ATerm t)
      {
        ATerm w_8 = NULL;
        ATerm x_8 = NULL;
        x_8 = t;
        if(((w_8 != NULL) && (w_8 != x_8)))
          _fail(x_8);
        else
          w_8 = x_8;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_l_15, (ATerm) ATinsert(CheckATermList(not_null(w_8)), term_p_17));
          t = printnl_0(t);
        }
        return(t);
      }
      t = if_verbose1_1(t, t_1);
      return(t);
    }
    ATerm s_1 (ATerm t)
    {
      t = canonicalize_0(t);
      {
        t = stratego_cf_0(t);
        {
          t = s2c_0(t);
          {
            t = ac2abox_0(t);
            t = abox2text_0(t);
          }
        }
      }
      return(t);
    }
    t = profile_p__2(t, r_1, s_1);
  }
  return(t);
}
ATerm optimize2_0 (ATerm t)
{
  ATerm u_1 (ATerm t)
  {
    t = term_q_17;
    return(t);
  }
  ATerm y_1 (ATerm t)
  {
    ATerm a_9 = NULL;
    ATerm b_9 = NULL;
    t = pass_verbose_0(t);
    {
      b_9 = t;
      if(((a_9 != NULL) && (a_9 != b_9)))
        _fail(b_9);
      else
        a_9 = b_9;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(a_9)), term_c_17);
    return(t);
  }
  t = xtc_transform_2(t, u_1, y_1);
  return(t);
}
ATerm compile_match_0 (ATerm t)
{
  ATerm z_1 (ATerm t)
  {
    t = term_r_17;
    return(t);
  }
  ATerm a_2 (ATerm t)
  {
    ATerm e_9 = NULL;
    ATerm f_9 = NULL;
    t = pass_verbose_0(t);
    {
      f_9 = t;
      if(((e_9 != NULL) && (e_9 != f_9)))
        _fail(f_9);
      else
        e_9 = f_9;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(e_9)), term_c_17);
    return(t);
  }
  t = xtc_transform_2(t, z_1, a_2);
  return(t);
}
ATerm inline_0 (ATerm t)
{
  ATerm b_2 (ATerm t)
  {
    t = term_s_17;
    return(t);
  }
  ATerm c_2 (ATerm t)
  {
    ATerm i_9 = NULL;
    ATerm j_9 = NULL;
    t = pass_verbose_0(t);
    {
      j_9 = t;
      if(((i_9 != NULL) && (i_9 != j_9)))
        _fail(j_9);
      else
        i_9 = j_9;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(i_9)), term_c_17);
    return(t);
  }
  t = xtc_transform_2(t, b_2, c_2);
  return(t);
}
ATerm fusion_0 (ATerm t)
{
  ATerm d_2 (ATerm t)
  {
    t = term_v_17;
    return(t);
  }
  ATerm e_2 (ATerm t)
  {
    ATerm m_9 = NULL;
    ATerm n_9 = NULL;
    t = pass_verbose_0(t);
    {
      n_9 = t;
      if(((m_9 != NULL) && (m_9 != n_9)))
        _fail(n_9);
      else
        m_9 = n_9;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(m_9)), term_c_17);
    return(t);
  }
  t = xtc_transform_2(t, d_2, e_2);
  return(t);
}
ATerm optimize1_0 (ATerm t)
{
  ATerm f_2 (ATerm t)
  {
    t = term_w_17;
    return(t);
  }
  ATerm g_2 (ATerm t)
  {
    ATerm q_9 = NULL;
    ATerm r_9 = NULL;
    t = pass_verbose_0(t);
    {
      r_9 = t;
      if(((q_9 != NULL) && (q_9 != r_9)))
        _fail(r_9);
      else
        q_9 = r_9;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(q_9)), term_c_17);
    return(t);
  }
  t = xtc_transform_2(t, f_2, g_2);
  return(t);
}
ATerm optimize_0 (ATerm t)
{
  ATerm h_2 (ATerm t)
  {
    ATerm i_2 (ATerm t)
    {
      t = term_x_17;
      return(t);
    }
    t = debug_1(t, i_2);
    return(t);
  }
  t = if_verbose2_1(t, h_2);
  {
    ATerm j_2 (ATerm t)
    {
      ATerm l_2 (ATerm t)
      {
        ATerm u_9 = NULL;
        ATerm v_9 = NULL;
        v_9 = t;
        if(((u_9 != NULL) && (u_9 != v_9)))
          _fail(v_9);
        else
          u_9 = v_9;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_l_15, (ATerm) ATinsert(CheckATermList(not_null(u_9)), term_z_17));
          t = printnl_0(t);
        }
        return(t);
      }
      t = if_verbose1_1(t, l_2);
      return(t);
    }
    ATerm k_2 (ATerm t)
    {
      t = optimize1_0(t);
      {
        ATerm a_18 = t;
        int b_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_18;
            c_18 = t;
            {
              ATerm d_18 = t;
              if((PushChoice() == 0))
                {
                  t = term_e_18;
                  t = get_config_0(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = d_18;
                }
            }
            t = c_18;
            t = fusion_0(t);
            LocalPopChoice(b_18);
          }
        else
          {
            t = a_18;
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
    t = profile_p__2(t, j_2, k_2);
  }
  return(t);
}
ATerm rename_defs_0 (ATerm t)
{
  ATerm m_2 (ATerm t)
  {
    t = term_f_18;
    return(t);
  }
  ATerm n_2 (ATerm t)
  {
    ATerm y_9 = NULL;
    ATerm z_9 = NULL;
    t = pass_verbose_0(t);
    {
      z_9 = t;
      if(((y_9 != NULL) && (y_9 != z_9)))
        _fail(z_9);
      else
        y_9 = z_9;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(y_9)), term_c_17);
    return(t);
  }
  t = xtc_transform_2(t, m_2, n_2);
  return(t);
}
ATerm stratego_nf_0 (ATerm t)
{
  ATerm o_2 (ATerm t)
  {
    t = term_g_18;
    return(t);
  }
  ATerm p_2 (ATerm t)
  {
    ATerm c_10 = NULL;
    ATerm d_10 = NULL;
    t = pass_verbose_0(t);
    {
      d_10 = t;
      if(((c_10 != NULL) && (c_10 != d_10)))
        _fail(d_10);
      else
        c_10 = d_10;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(c_10)), term_c_17);
    return(t);
  }
  t = xtc_transform_2(t, o_2, p_2);
  return(t);
}
ATerm extract_0 (ATerm t)
{
  ATerm q_2 (ATerm t)
  {
    t = term_o_18;
    return(t);
  }
  ATerm r_2 (ATerm t)
  {
    ATerm g_10 = NULL;
    ATerm h_10 = NULL;
    t = pass_verbose_0(t);
    {
      h_10 = t;
      if(((g_10 != NULL) && (g_10 != h_10)))
        _fail(h_10);
      else
        g_10 = h_10;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(g_10)), term_c_17);
    return(t);
  }
  t = xtc_transform_2(t, q_2, r_2);
  return(t);
}
ATerm extract_all_0 (ATerm t)
{
  ATerm s_2 (ATerm t)
  {
    t = term_t_18;
    return(t);
  }
  ATerm t_2 (ATerm t)
  {
    ATerm k_10 = NULL;
    ATerm l_10 = NULL;
    t = pass_verbose_0(t);
    {
      l_10 = t;
      if(((k_10 != NULL) && (k_10 != l_10)))
        _fail(l_10);
      else
        k_10 = l_10;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(k_10)), term_c_17);
    return(t);
  }
  t = xtc_transform_2(t, s_2, t_2);
  return(t);
}
ATerm output_frontend_0 (ATerm t)
{
  ATerm o_10 = NULL;
  ATerm u_18 = t;
  int v_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_18;
      w_18 = t;
      {
        t = term_x_18;
        t = get_config_0(t);
      }
      t = w_18;
      {
        ATerm y_18 = t;
        int z_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = extract_all_0(t);
            LocalPopChoice(z_18);
          }
        else
          {
            t = y_18;
            {
              t = (ATerm) ATinsert(ATempty, term_a_19);
              t = fatal_error_0(t);
            }
          }
        {
          ATerm u_2 (ATerm t)
          {
            ATerm p_10 = NULL;
            ATerm v_2 (ATerm t)
            {
              t = term_b_19;
              return(t);
            }
            t = get_outfile_1(t, v_2);
            {
              p_10 = t;
              if(((o_10 != NULL) && (o_10 != p_10)))
                _fail(p_10);
              else
                o_10 = p_10;
            }
            return(t);
          }
          t = copy_to_1(t, u_2);
          {
            ATerm w_2 (ATerm t)
            {
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_10)), term_e_19);
              return(t);
            }
            t = say_1(t, w_2);
          }
        }
      }
      LocalPopChoice(v_18);
    }
  else
    {
      t = u_18;
      {
      }
    }
  return(t);
}
ATerm if_keep2_1 (ATerm t, ATerm a_86 (ATerm))
{
  ATerm j_19 = t;
  int k_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_19;
      l_19 = t;
      {
        ATerm s_10 = NULL;
        ATerm t_10 = NULL;
        t = term_m_19;
        {
          t = get_config_0(t);
          {
            t_10 = t;
            if(((s_10 != NULL) && (s_10 != t_10)))
              _fail(t_10);
            else
              s_10 = t_10;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_10), term_z_14);
          t = geq_0(t);
        }
      }
      t = l_19;
      t = a_86(t);
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
ATerm frontend_0 (ATerm t)
{
  ATerm z_10 = NULL;
  ATerm x_2 (ATerm t)
  {
    t = term_n_19;
    return(t);
  }
  ATerm y_2 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(x_10)), term_c_17);
    return(t);
  }
  t = xtc_transform_2(t, x_2, y_2);
  {
    ATerm z_2 (ATerm t)
    {
      ATerm a_3 (ATerm t)
      {
        ATerm a_11 = NULL;
        ATerm c_3 (ATerm t)
        {
          t = term_o_19;
          return(t);
        }
        t = get_outfile_1(t, c_3);
        {
          a_11 = t;
          if(((z_10 != NULL) && (z_10 != a_11)))
            _fail(a_11);
          else
            z_10 = a_11;
        }
        return(t);
      }
      t = copy_to_1(t, a_3);
      {
        ATerm f_3 (ATerm t)
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_10)), term_e_19);
          return(t);
        }
        t = say_1(t, f_3);
      }
      return(t);
    }
    t = if_keep2_1(t, z_2);
  }
  return(t);
}
ATerm if_keep3_1 (ATerm t, ATerm b_86 (ATerm))
{
  ATerm p_19 = t;
  int t_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_19;
      u_19 = t;
      {
        ATerm e_11 = NULL;
        ATerm f_11 = NULL;
        t = term_m_19;
        {
          t = get_config_0(t);
          {
            f_11 = t;
            if(((e_11 != NULL) && (e_11 != f_11)))
              _fail(f_11);
            else
              e_11 = f_11;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_11), term_y_19);
          t = geq_0(t);
        }
      }
      t = u_19;
      t = b_86(t);
      LocalPopChoice(t_19);
    }
  else
    {
      t = p_19;
      {
      }
    }
  return(t);
}
ATerm AddMain_1 (ATerm t, ATerm x_63 (ATerm))
{
  ATerm k_11 = NULL,l_11 = NULL;
  k_11 = t;
  j_11 :
  if(match_cons(k_11, sym_Specification_1))
    {
      l_11 = ATgetArgument(k_11, 0);
      {
        ATerm n_11 = NULL;
        ATerm o_11 = NULL;
        t = term_b_20;
        {
          t = x_63(t);
          {
            o_11 = t;
            if(((n_11 != NULL) && (n_11 != o_11)))
              _fail(o_11);
            else
              n_11 = o_11;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(not_null(l_11)), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_c_20, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(n_11)), (ATerm) ATempty))))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm xtc_io_transform_1 (ATerm t, ATerm k_92 (ATerm))
{
  t = read_from_0(t);
  {
    t = k_92(t);
    t = write_to_0(t);
  }
  return(t);
}
ATerm add_main_0 (ATerm t)
{
  ATerm t_11 = NULL,v_11 = NULL;
  ATerm d_20 = t;
  int e_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_20;
      f_20 = t;
      {
        ATerm u_11 = NULL;
        t = term_i_20;
        {
          t = get_config_0(t);
          {
            u_11 = t;
            {
              if(((t_11 != NULL) && (t_11 != u_11)))
                _fail(u_11);
              else
                t_11 = u_11;
              {
                ATerm h_3 (ATerm t)
                {
                  ATerm i_3 (ATerm t)
                  {
                    t = term_o_20;
                    return(t);
                  }
                  t = debug_1(t, i_3);
                  return(t);
                }
                t = if_verbose2_1(t, h_3);
              }
            }
          }
        }
      }
      t = f_20;
      {
        ATerm j_3 (ATerm t)
        {
          ATerm l_3 (ATerm t)
          {
            t = not_null(t_11);
            return(t);
          }
          t = AddMain_1(t, l_3);
          return(t);
        }
        t = xtc_io_transform_1(t, j_3);
      }
      LocalPopChoice(e_20);
    }
  else
    {
      t = d_20;
      {
      }
    }
  {
    ATerm n_3 (ATerm t)
    {
      ATerm o_3 (ATerm t)
      {
        ATerm w_11 = NULL;
        ATerm p_3 (ATerm t)
        {
          t = term_p_20;
          return(t);
        }
        t = get_outfile_1(t, p_3);
        {
          w_11 = t;
          if(((v_11 != NULL) && (v_11 != w_11)))
            _fail(w_11);
          else
            v_11 = w_11;
        }
        return(t);
      }
      t = copy_to_1(t, o_3);
      {
        ATerm q_3 (ATerm t)
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_11)), term_q_20);
          return(t);
        }
        t = say_1(t, q_3);
      }
      return(t);
    }
    t = if_keep3_1(t, n_3);
  }
  return(t);
}
ATerm get_outfile_1 (ATerm t, ATerm w_63 (ATerm))
{
  ATerm b_12 = NULL,d_12 = NULL;
  ATerm u_20;
  u_20 = t;
  {
    ATerm c_12 = NULL;
    t = w_63(t);
    {
      c_12 = t;
      if(((b_12 != NULL) && (b_12 != c_12)))
        _fail(c_12);
      else
        b_12 = c_12;
    }
  }
  t = u_20;
  {
    ATerm e_12 = NULL;
    t = term_z_20;
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
      t = (ATerm) ATmakeAppl(sym__2, not_null(d_12), not_null(b_12));
      t = conc_strings_0(t);
    }
  }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm l_12 = NULL;
  l_12 = t;
  k_12 :
  if(match_cons(l_12, sym_stderr_0))
    {
      ATerm n_12 = NULL,p_12 = NULL;
      ATerm a_21;
      a_21 = t;
      {
        ATerm o_12 = NULL;
        t = SSLgetAnnotations(not_null(l_12));
        {
          o_12 = t;
          if(((n_12 != NULL) && (n_12 != o_12)))
            _fail(o_12);
          else
            n_12 = o_12;
        }
      }
      t = a_21;
      {
        ATerm q_12 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(n_12));
        {
          q_12 = t;
          if(((p_12 != NULL) && (p_12 != q_12)))
            _fail(q_12);
          else
            p_12 = q_12;
        }
        t = not_null(p_12);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_to_1 (ATerm t, ATerm r_0 (ATerm))
{
  ATerm z_12 = NULL,a_13 = NULL;
  z_12 = t;
  y_12 :
  if(match_cons(z_12, sym_FILE_1))
    {
      a_13 = ATgetArgument(z_12, 0);
      {
        ATerm b_21 = t;
        int c_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_13 = NULL;
            ATerm d_13 = NULL;
            t = r_0(t);
            {
              d_13 = t;
              {
                if(((c_13 != NULL) && (c_13 != d_13)))
                  _fail(d_13);
                else
                  c_13 = d_13;
                {
                  ATerm d_21 = t;
                  int e_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(e_21);
                    }
                  else
                    {
                      t = d_21;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(a_13), not_null(c_13));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(a_13));
            LocalPopChoice(c_21);
          }
        else
          {
            t = b_21;
            {
              ATerm f_13 = NULL;
              ATerm g_13 = NULL;
              t = r_0(t);
              {
                g_13 = t;
                {
                  if(((f_13 != NULL) && (f_13 != g_13)))
                    _fail(g_13);
                  else
                    f_13 = g_13;
                  {
                    ATerm f_21 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm o_21 = t;
                        int p_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = stdout_0(t);
                            LocalPopChoice(p_21);
                          }
                        else
                          {
                            t = o_21;
                            t = stderr_0(t);
                          }
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = f_21;
                      }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(a_13), not_null(f_13));
                      t = copy_file_0(t);
                    }
                  }
                }
              }
              t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(a_13));
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
  ATerm m_13 = NULL;
  ATerm q_21 = t;
  int r_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_21;
      s_21 = t;
      {
        t = term_t_21;
        t = get_config_0(t);
      }
      t = s_21;
      {
        ATerm r_3 (ATerm t)
        {
          ATerm n_13 = NULL;
          ATerm s_3 (ATerm t)
          {
            t = term_u_21;
            return(t);
          }
          t = get_outfile_1(t, s_3);
          {
            n_13 = t;
            if(((m_13 != NULL) && (m_13 != n_13)))
              _fail(n_13);
            else
              m_13 = n_13;
          }
          return(t);
        }
        t = copy_to_1(t, r_3);
        {
          ATerm v_21;
          v_21 = t;
          {
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_13)), term_w_21);
            t = echo_0(t);
          }
          t = v_21;
        }
      }
      LocalPopChoice(r_21);
    }
  else
    {
      t = q_21;
      {
      }
    }
  return(t);
}
ATerm pass_keep_0 (ATerm t)
{
  ATerm r_13 = NULL;
  ATerm s_13 = NULL,u_13 = NULL;
  ATerm t_13 = NULL;
  t = term_m_19;
  {
    ATerm x_21 = t;
    int y_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(y_21);
      }
    else
      {
        t = x_21;
        t = term_z_21;
      }
    {
      t_13 = t;
      if(((s_13 != NULL) && (s_13 != t_13)))
        _fail(t_13);
      else
        s_13 = t_13;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_13), term_z_21);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          u_13 = t;
          if(((r_13 != NULL) && (r_13 != u_13)))
            _fail(u_13);
          else
            r_13 = u_13;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_13)), term_m_19);
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm y_13 = NULL;
  y_13 = t;
  t = SSL_int_to_string(not_null(y_13));
  return(t);
}
ATerm pass_verbose_0 (ATerm t)
{
  ATerm d_14 = NULL;
  ATerm e_14 = NULL,g_14 = NULL;
  ATerm f_14 = NULL;
  t = term_w_14;
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
        t = term_z_21;
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_14), term_z_21);
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
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_14)), term_w_14);
  return(t);
}
ATerm dep_name_0 (ATerm t)
{
  ATerm k_14 = NULL;
  ATerm l_14 = NULL;
  ATerm c_22 = t;
  int d_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_15;
      t = get_config_0(t);
      LocalPopChoice(d_22);
    }
  else
    {
      t = c_22;
      {
        t = term_e_22;
        t = get_config_0(t);
      }
    }
  {
    l_14 = t;
    if(((k_14 != NULL) && (k_14 != l_14)))
      _fail(l_14);
    else
      k_14 = l_14;
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_14)), term_f_22);
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm s_14 = NULL,t_14 = NULL;
  s_14 = t;
  r_14 :
  if(match_cons(s_14, sym_stdin_0))
    {
      ATerm u_14 = NULL;
      ATerm v_14 = NULL;
      t = term_g_22;
      {
        t = ReadFromFile_0(t);
        {
          v_14 = t;
          if(((u_14 != NULL) && (u_14 != v_14)))
            _fail(v_14);
          else
            u_14 = v_14;
        }
      }
      t = not_null(u_14);
    }
  else
    {
      if(match_cons(s_14, sym_FILE_1))
        {
          t_14 = ATgetArgument(s_14, 0);
          {
            ATerm x_14 = NULL;
            ATerm y_14 = NULL;
            t = not_null(t_14);
            {
              t = ReadFromFile_0(t);
              {
                y_14 = t;
                if(((x_14 != NULL) && (x_14 != y_14)))
                  _fail(y_14);
                else
                  x_14 = y_14;
              }
            }
            t = not_null(x_14);
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
  ATerm f_15 = NULL,g_15 = NULL,h_15 = NULL;
  f_15 = t;
  e_15 :
  if(match_cons(f_15, sym__2))
    {
      g_15 = ATgetArgument(f_15, 0);
      h_15 = ATgetArgument(f_15, 1);
      t = SSL_WriteToBinaryFile(not_null(g_15), not_null(h_15));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm n_15 = NULL;
  ATerm p_15 = NULL;
  n_15 = t;
  {
    ATerm q_15 = NULL;
    t = xtc_new_file_0(t);
    {
      q_15 = t;
      {
        if(((p_15 != NULL) && (p_15 != q_15)))
          _fail(q_15);
        else
          p_15 = q_15;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_15), not_null(n_15));
          t = WriteToBinaryFile_0(t);
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(p_15));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm i_92 (ATerm), ATerm j_92 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, i_92, j_92);
    t = read_from_0(t);
  }
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL;
  v_15 = t;
  u_15 :
  if(match_cons(v_15, sym__2))
    {
      w_15 = ATgetArgument(v_15, 0);
      x_15 = ATgetArgument(v_15, 1);
      t = SSL_call(not_null(w_15), not_null(x_15));
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
ATerm xtc_command_1 (ATerm t, ATerm z_91 (ATerm))
{
  ATerm d_16 = NULL;
  ATerm j_22;
  j_22 = t;
  {
    ATerm e_16 = NULL;
    t = z_91(t);
    {
      t = xtc_find_0(t);
      {
        e_16 = t;
        if(((d_16 != NULL) && (d_16 != e_16)))
          _fail(e_16);
        else
          d_16 = e_16;
      }
    }
  }
  t = j_22;
  {
    ATerm k_22;
    k_22 = t;
    {
      ATerm f_16 = NULL;
      ATerm g_16 = NULL;
      g_16 = t;
      if(((f_16 != NULL) && (f_16 != g_16)))
        _fail(g_16);
      else
        f_16 = g_16;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_16), not_null(f_16));
        t = call_0(t);
      }
    }
    t = k_22;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm i_82 (ATerm))
{
  ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL;
  o_16 = t;
  n_16 :
  if(match_cons(o_16, sym__2))
    {
      p_16 = ATgetArgument(o_16, 0);
      q_16 = ATgetArgument(o_16, 1);
      {
        ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL;
        ATerm p_22;
        p_22 = t;
        {
          ATerm w_16 = NULL;
          ATerm x_16 = NULL,y_16 = NULL,z_16 = NULL;
          t = i_82(t);
          {
            w_16 = t;
            {
              if(((t_16 != NULL) && (t_16 != w_16)))
                _fail(w_16);
              else
                t_16 = w_16;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(t_16), not_null(p_16), not_null(q_16));
                {
                  t = table_push_0(t);
                  {
                    ATerm q_22 = t;
                    int r_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(t_16), term_s_22);
                        t = table_get_0(t);
                        LocalPopChoice(r_22);
                      }
                    else
                      {
                        t = q_22;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      x_16 = t;
                      m_16 :
                      if(((ATgetType(x_16) == AT_LIST) && !(ATisEmpty(x_16))))
                        {
                          y_16 = ATgetFirst((ATermList) x_16);
                          z_16 = (ATerm) ATgetNext((ATermList) x_16);
                          {
                            if(((u_16 != NULL) && (u_16 != y_16)))
                              _fail(y_16);
                            else
                              u_16 = y_16;
                            {
                              if(((v_16 != NULL) && (v_16 != z_16)))
                                _fail(z_16);
                              else
                                v_16 = z_16;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(t_16), term_s_22, (ATerm) ATinsert(CheckATermList(not_null(v_16)), (ATerm) ATinsert(CheckATermList(not_null(u_16)), not_null(p_16))));
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
        t = p_22;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm w_82 (ATerm))
{
  ATerm t_22;
  t_22 = t;
  {
    t = w_82(t);
    {
      ATerm v_3 (ATerm t)
      {
        t = term_u_22;
        return(t);
      }
      t = debug_1(t, v_3);
    }
  }
  t = t_22;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm h_17 = NULL,i_17 = NULL;
  ATerm x_22 = t;
  int c_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL;
      j_17 = t;
      e_17 :
      if(match_cons(j_17, sym__2))
        {
          k_17 = ATgetArgument(j_17, 0);
          l_17 = ATgetArgument(j_17, 1);
          {
            if(((i_17 != NULL) && (i_17 != k_17)))
              _fail(k_17);
            else
              i_17 = k_17;
            if(((h_17 != NULL) && (h_17 != l_17)))
              _fail(l_17);
            else
              h_17 = l_17;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(c_23);
      t = SSL_open_file(not_null(i_17), not_null(h_17));
    }
  else
    {
      t = x_22;
      {
        ATerm m_17 = NULL;
        ATerm n_17 = NULL;
        ATerm y_3 (ATerm t)
        {
          t = term_d_23;
          return(t);
        }
        t = obsolete_1(t, y_3);
        {
          m_17 = t;
          {
            if(((i_17 != NULL) && (i_17 != m_17)))
              _fail(m_17);
            else
              i_17 = m_17;
            {
              ATerm e_23;
              e_23 = t;
              {
                ATerm o_17 = NULL;
                t = term_f_23;
                {
                  o_17 = t;
                  if(((n_17 != NULL) && (n_17 != o_17)))
                    _fail(o_17);
                  else
                    n_17 = o_17;
                }
              }
              t = e_23;
              t = SSL_open_file(not_null(i_17), not_null(n_17));
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
  ATerm t_17 = NULL;
  ATerm u_17 = NULL;
  t = term_b_20;
  {
    t = new_0(t);
    {
      u_17 = t;
      if(((t_17 != NULL) && (t_17 != u_17)))
        _fail(u_17);
      else
        t_17 = u_17;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(t_17), term_g_23);
    {
      t = conc_strings_0(t);
      {
        ATerm h_23 = t;
        int j_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = file_exists_0(t);
            t = new_file_0(t);
            LocalPopChoice(j_23);
          }
        else
          {
            t = h_23;
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
  ATerm y_17 = NULL;
  t = new_file_0(t);
  {
    y_17 = t;
    {
      ATerm k_23;
      k_23 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_17), term_f_23);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(y_17), term_b_20);
            {
              ATerm c_4 (ATerm t)
              {
                t = term_l_23;
                return(t);
              }
              t = assert_1(t, c_4);
            }
          }
        }
      }
      t = k_23;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm p_0 (ATerm), ATerm q_0 (ATerm))
{
  ATerm i_18 = NULL,j_18 = NULL;
  i_18 = t;
  h_18 :
  if(match_cons(i_18, sym_stdin_0))
    {
      ATerm k_18 = NULL;
      ATerm l_18 = NULL;
      ATerm m_18 = NULL;
      t = xtc_new_file_0(t);
      {
        l_18 = t;
        {
          if(((k_18 != NULL) && (k_18 != l_18)))
            _fail(l_18);
          else
            k_18 = l_18;
          {
            ATerm n_18 = NULL;
            t = q_0(t);
            {
              n_18 = t;
              if(((m_18 != NULL) && (m_18 != n_18)))
                _fail(n_18);
              else
                m_18 = n_18;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(m_18), (ATerm) ATinsert(ATinsert(ATempty, not_null(k_18)), term_i_15));
              {
                ATerm m_23 = t;
                int n_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = conc_two_lists_0(t);
                    LocalPopChoice(n_23);
                  }
                else
                  {
                    t = m_23;
                    t = conc_more_lists_0(t);
                  }
                t = xtc_command_1(t, p_0);
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(k_18));
    }
  else
    {
      if(match_cons(i_18, sym_FILE_1))
        {
          j_18 = ATgetArgument(i_18, 0);
          {
            ATerm p_18 = NULL;
            ATerm q_18 = NULL;
            t = not_null(j_18);
            {
              ATerm r_18 = NULL;
              t = xtc_new_file_0(t);
              {
                q_18 = t;
                {
                  if(((p_18 != NULL) && (p_18 != q_18)))
                    _fail(q_18);
                  else
                    p_18 = q_18;
                  {
                    ATerm s_18 = NULL;
                    t = q_0(t);
                    {
                      s_18 = t;
                      if(((r_18 != NULL) && (r_18 != s_18)))
                        _fail(s_18);
                      else
                        r_18 = s_18;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(r_18), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(p_18)), term_i_15), not_null(j_18)), term_o_23));
                      {
                        ATerm s_23 = t;
                        int u_23 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = conc_two_lists_0(t);
                            LocalPopChoice(u_23);
                          }
                        else
                          {
                            t = s_23;
                            t = conc_more_lists_0(t);
                          }
                        t = xtc_command_1(t, p_0);
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(p_18));
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
  ATerm d_19 = NULL;
  d_19 = t;
  c_19 :
  if(match_cons(d_19, sym_stdin_0))
    {
      ATerm f_19 = NULL,h_19 = NULL;
      ATerm x_23;
      x_23 = t;
      {
        ATerm g_19 = NULL;
        t = SSLgetAnnotations(not_null(d_19));
        {
          g_19 = t;
          if(((f_19 != NULL) && (f_19 != g_19)))
            _fail(g_19);
          else
            f_19 = g_19;
        }
      }
      t = x_23;
      {
        ATerm i_19 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(f_19));
        {
          i_19 = t;
          if(((h_19 != NULL) && (h_19 != i_19)))
            _fail(i_19);
          else
            h_19 = i_19;
        }
        t = not_null(h_19);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm q_58 (ATerm))
{
  ATerm r_19 = NULL,s_19 = NULL;
  r_19 = t;
  q_19 :
  if(match_cons(r_19, sym_FILE_1))
    {
      s_19 = ATgetArgument(r_19, 0);
      {
        ATerm v_19 = NULL,x_19 = NULL;
        ATerm w_19 = NULL;
        t = SSLgetAnnotations(not_null(r_19));
        {
          w_19 = t;
          if(((v_19 != NULL) && (v_19 != w_19)))
            _fail(w_19);
          else
            v_19 = w_19;
        }
        {
          t = not_null(s_19);
          {
            ATerm z_19 = NULL;
            t = q_58(t);
            {
              x_19 = t;
              {
                ATerm a_20 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(x_19)), not_null(v_19));
                {
                  a_20 = t;
                  if(((z_19 != NULL) && (z_19 != a_20)))
                    _fail(a_20);
                  else
                    z_19 = a_20;
                }
                t = not_null(z_19);
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
ATerm xtc_transform_2 (ATerm t, ATerm b_92 (ATerm), ATerm c_92 (ATerm))
{
  ATerm y_23 = t;
  int z_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_24 = t;
      int b_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(b_24);
        }
      else
        {
          t = a_24;
          t = stdin_0(t);
        }
      LocalPopChoice(z_23);
      t = xtc_transform_file_2(t, b_92, c_92);
    }
  else
    {
      t = y_23;
      t = xtc_transform_term_2(t, b_92, c_92);
    }
  return(t);
}
ATerm if_verbose3_1 (ATerm t, ATerm n_85 (ATerm))
{
  ATerm d_24 = t;
  int e_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_24;
      f_24 = t;
      {
        ATerm g_20 = NULL;
        ATerm h_20 = NULL;
        t = term_w_14;
        {
          t = get_config_0(t);
          {
            h_20 = t;
            if(((g_20 != NULL) && (g_20 != h_20)))
              _fail(h_20);
            else
              g_20 = h_20;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_20), term_y_19);
          t = geq_0(t);
        }
      }
      t = f_24;
      t = n_85(t);
      LocalPopChoice(e_24);
    }
  else
    {
      t = d_24;
      {
      }
    }
  return(t);
}
ATerm basename_1 (ATerm t, ATerm b_81 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm i_24 = t;
    int j_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_20 (ATerm t)
        {
          ATerm l_24 = t;
          int m_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, n_20);
              LocalPopChoice(m_24);
            }
          else
            {
              t = l_24;
              {
                ATerm n_24 = t;
                int o_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm d_4 (ATerm t)
                    {
                      ATerm l_20 = NULL;
                      l_20 = t;
                      j_20 :
                      if(!(match_int(l_20, 47)))
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = Cons_2(t, d_4, _id);
                    LocalPopChoice(o_24);
                  }
                else
                  {
                    t = n_24;
                    {
                      ATerm e_4 (ATerm t)
                      {
                        ATerm m_20 = NULL;
                        m_20 = t;
                        k_20 :
                        if(!(match_int(m_20, 46)))
                          {
                            _fail(t);
                          }
                        return(t);
                      }
                      t = Cons_2(t, e_4, b_81);
                      t = (ATerm) ATempty;
                    }
                  }
              }
            }
          return(t);
        }
        t = n_20(t);
        LocalPopChoice(j_24);
      }
    else
      {
        t = i_24;
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
  ATerm s_20 = NULL,t_20 = NULL;
  s_20 = t;
  r_20 :
  if(match_cons(s_20, sym_FILE_1))
    {
      t_20 = ATgetArgument(s_20, 0);
      {
        ATerm v_20 = NULL,w_20 = NULL;
        ATerm x_20 = NULL;
        t = not_null(t_20);
        {
          ATerm y_20 = NULL;
          t = basename_1(t, _id);
          {
            x_20 = t;
            {
              if(((v_20 != NULL) && (v_20 != x_20)))
                _fail(x_20);
              else
                v_20 = x_20;
              {
                ATerm f_4 (ATerm t)
                {
                  ATerm i_4 (ATerm t)
                  {
                    t = term_p_24;
                    return(t);
                  }
                  t = debug_1(t, i_4);
                  return(t);
                }
                t = if_verbose3_1(t, f_4);
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_u_24, not_null(v_20));
                  {
                    t = set_config_0(t);
                    {
                      ATerm v_24 = t;
                      int y_24 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = term_i_15;
                          {
                            t = get_config_0(t);
                            t = basename_1(t, _id);
                          }
                          LocalPopChoice(y_24);
                        }
                      else
                        {
                          t = v_24;
                          t = not_null(v_20);
                        }
                      {
                        y_20 = t;
                        {
                          if(((w_20 != NULL) && (w_20 != y_20)))
                            _fail(y_20);
                          else
                            w_20 = y_20;
                          {
                            ATerm j_4 (ATerm t)
                            {
                              ATerm k_4 (ATerm t)
                              {
                                t = term_z_24;
                                return(t);
                              }
                              t = debug_1(t, k_4);
                              return(t);
                            }
                            t = if_verbose3_1(t, j_4);
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_z_20, not_null(w_20));
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
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(v_20));
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
    ATerm l_4 (ATerm t)
    {
      t = term_a_25;
      return(t);
    }
    ATerm r_4 (ATerm t)
    {
      ATerm g_21 = NULL,i_21 = NULL,k_21 = NULL,m_21 = NULL;
      ATerm b_25;
      b_25 = t;
      {
        ATerm h_21 = NULL;
        t = dep_name_0(t);
        {
          h_21 = t;
          if(((g_21 != NULL) && (g_21 != h_21)))
            _fail(h_21);
          else
            g_21 = h_21;
        }
      }
      t = b_25;
      {
        ATerm c_25;
        c_25 = t;
        {
          ATerm j_21 = NULL;
          t = pass_verbose_0(t);
          {
            j_21 = t;
            if(((i_21 != NULL) && (i_21 != j_21)))
              _fail(j_21);
            else
              i_21 = j_21;
          }
        }
        t = c_25;
        {
          ATerm m_25;
          m_25 = t;
          {
            ATerm l_21 = NULL;
            t = pass_keep_0(t);
            {
              l_21 = t;
              if(((k_21 != NULL) && (k_21 != l_21)))
                _fail(l_21);
              else
                k_21 = l_21;
            }
          }
          t = m_25;
          {
            ATerm n_21 = NULL;
            t = term_n_25;
            {
              t = get_config_0(t);
              {
                n_21 = t;
                if(((m_21 != NULL) && (m_21 != n_21)))
                  _fail(n_21);
                else
                  m_21 = n_21;
              }
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(k_21)), not_null(i_21)), not_null(m_21)), not_null(g_21));
              t = concat_0(t);
            }
          }
        }
      }
      return(t);
    }
    t = xtc_transform_2(t, l_4, r_4);
  }
  return(t);
}
ATerm front_end_0 (ATerm t)
{
  ATerm w_4 (ATerm t)
  {
    ATerm e_5 (ATerm t)
    {
      t = term_o_25;
      return(t);
    }
    t = debug_1(t, e_5);
    return(t);
  }
  t = if_verbose2_1(t, w_4);
  {
    ATerm f_5 (ATerm t)
    {
      ATerm h_5 (ATerm t)
      {
        ATerm h_22 = NULL;
        ATerm i_22 = NULL;
        i_22 = t;
        if(((h_22 != NULL) && (h_22 != i_22)))
          _fail(i_22);
        else
          h_22 = i_22;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_l_15, (ATerm) ATinsert(CheckATermList(not_null(h_22)), term_p_25));
          t = printnl_0(t);
        }
        return(t);
      }
      t = if_verbose1_1(t, h_5);
      return(t);
    }
    ATerm g_5 (ATerm t)
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
    t = profile_p__2(t, f_5, g_5);
  }
  return(t);
}
ATerm rename_file_0 (ATerm t)
{
  ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL;
  m_22 = t;
  l_22 :
  if(match_cons(m_22, sym__2))
    {
      n_22 = ATgetArgument(m_22, 0);
      o_22 = ATgetArgument(m_22, 1);
      t = SSL_rename(not_null(n_22), not_null(o_22));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stdout_0 (ATerm t)
{
  ATerm w_22 = NULL;
  w_22 = t;
  v_22 :
  if(match_cons(w_22, sym_stdout_0))
    {
      ATerm y_22 = NULL,a_23 = NULL;
      ATerm q_25;
      q_25 = t;
      {
        ATerm z_22 = NULL;
        t = SSLgetAnnotations(not_null(w_22));
        {
          z_22 = t;
          if(((y_22 != NULL) && (y_22 != z_22)))
            _fail(z_22);
          else
            y_22 = z_22;
        }
      }
      t = q_25;
      {
        ATerm b_23 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(y_22));
        {
          b_23 = t;
          if(((a_23 != NULL) && (a_23 != b_23)))
            _fail(b_23);
          else
            a_23 = b_23;
        }
        t = not_null(a_23);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rename_to_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm q_23 = NULL,r_23 = NULL;
  q_23 = t;
  p_23 :
  if(match_cons(q_23, sym_FILE_1))
    {
      r_23 = ATgetArgument(q_23, 0);
      {
        ATerm s_25 = t;
        int t_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_23 = NULL;
            t = o_0(t);
            {
              t_23 = t;
              i_23 :
              if(match_cons(t_23, sym_stdout_0))
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(r_23), term_u_25);
                  {
                    t = copy_file_0(t);
                    {
                      t = not_null(r_23);
                      t = remove_file_0(t);
                    }
                  }
                }
              else
                {
                  _fail(t);
                }
            }
            t = term_u_25;
            LocalPopChoice(t_25);
          }
        else
          {
            t = s_25;
            {
              ATerm v_23 = NULL;
              ATerm w_23 = NULL;
              t = o_0(t);
              {
                w_23 = t;
                {
                  if(((v_23 != NULL) && (v_23 != w_23)))
                    _fail(w_23);
                  else
                    v_23 = w_23;
                  {
                    ATerm v_25 = t;
                    if((PushChoice() == 0))
                      {
                        t = stdout_0(t);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = v_25;
                      }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(r_23), not_null(v_23));
                      t = rename_file_0(t);
                    }
                  }
                }
              }
              t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(v_23));
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
  ATerm g_24 = NULL,h_24 = NULL,k_24 = NULL;
  g_24 = t;
  c_24 :
  if(((ATgetType(g_24) == AT_LIST) && !(ATisEmpty(g_24))))
    {
      h_24 = ATgetFirst((ATermList) g_24);
      k_24 = (ATerm) ATgetNext((ATermList) g_24);
      t = not_null(k_24);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm r_24 = NULL,s_24 = NULL,t_24 = NULL;
  r_24 = t;
  q_24 :
  if(match_cons(r_24, sym__2))
    {
      s_24 = ATgetArgument(r_24, 0);
      t_24 = ATgetArgument(r_24, 1);
      {
        ATerm a_26;
        a_26 = t;
        {
          ATerm w_24 = NULL;
          ATerm x_24 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_24), not_null(t_24));
          {
            ATerm b_26 = t;
            int c_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(c_26);
              }
            else
              {
                t = b_26;
                t = (ATerm) ATempty;
              }
            {
              x_24 = t;
              if(((w_24 != NULL) && (w_24 != x_24)))
                _fail(x_24);
              else
                w_24 = x_24;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(s_24), not_null(t_24), not_null(w_24));
            t = table_put_0(t);
          }
        }
        t = a_26;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm f_82 (ATerm))
{
  ATerm e_25 = NULL,f_25 = NULL,g_25 = NULL;
  ATerm j_26;
  j_26 = t;
  {
    ATerm h_25 = NULL;
    ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL;
    t = f_82(t);
    {
      h_25 = t;
      {
        if(((g_25 != NULL) && (g_25 != h_25)))
          _fail(h_25);
        else
          g_25 = h_25;
        {
          ATerm k_26 = t;
          int n_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(g_25), term_s_22);
              t = table_get_0(t);
              LocalPopChoice(n_26);
            }
          else
            {
              t = k_26;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            i_25 = t;
            d_25 :
            if(((ATgetType(i_25) == AT_LIST) && !(ATisEmpty(i_25))))
              {
                j_25 = ATgetFirst((ATermList) i_25);
                k_25 = (ATerm) ATgetNext((ATermList) i_25);
                {
                  if(((f_25 != NULL) && (f_25 != j_25)))
                    _fail(j_25);
                  else
                    f_25 = j_25;
                  {
                    if(((e_25 != NULL) && (e_25 != k_25)))
                      _fail(k_25);
                    else
                      e_25 = k_25;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(g_25), term_s_22, not_null(e_25));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(f_25);
                          {
                            ATerm i_5 (ATerm t)
                            {
                              ATerm l_25 = NULL;
                              l_25 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(g_25), not_null(l_25));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, i_5);
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
  t = j_26;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm r_25 = NULL;
  r_25 = t;
  t = SSL_remove(not_null(r_25));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm l_64 (ATerm), ATerm m_64 (ATerm))
{
  ATerm o_26 = t;
  int r_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_64(t);
      t = m_64(t);
      LocalPopChoice(r_26);
    }
  else
    {
      t = o_26;
      {
        t = m_64(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm e_82 (ATerm))
{
  ATerm w_25 = NULL;
  ATerm s_26;
  s_26 = t;
  {
    ATerm x_25 = NULL;
    ATerm y_25 = NULL;
    t = e_82(t);
    {
      x_25 = t;
      {
        if(((w_25 != NULL) && (w_25 != x_25)))
          _fail(x_25);
        else
          w_25 = x_25;
        {
          ATerm z_25 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_25), term_s_22);
          {
            ATerm u_26 = t;
            int v_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(v_26);
              }
            else
              {
                t = u_26;
                t = (ATerm) ATempty;
              }
            {
              z_25 = t;
              if(((y_25 != NULL) && (y_25 != z_25)))
                _fail(z_25);
              else
                y_25 = z_25;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(w_25), term_s_22, (ATerm) ATinsert(CheckATermList(not_null(y_25)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = s_26;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm t_91 (ATerm))
{
  ATerm e_26 = NULL,f_26 = NULL;
  ATerm j_5 (ATerm t)
  {
    t = term_l_23;
    return(t);
  }
  t = begin_scope_1(t, j_5);
  {
    ATerm o_5 (ATerm t)
    {
      ATerm w_26;
      w_26 = t;
      {
        ATerm g_26 = NULL,h_26 = NULL,i_26 = NULL;
        ATerm d_27 = t;
        int e_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_f_27;
            t = table_get_0(t);
            LocalPopChoice(e_27);
          }
        else
          {
            t = d_27;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          g_26 = t;
          d_26 :
          if(((ATgetType(g_26) == AT_LIST) && !(ATisEmpty(g_26))))
            {
              h_26 = ATgetFirst((ATermList) g_26);
              i_26 = (ATerm) ATgetNext((ATermList) g_26);
              {
                if(((f_26 != NULL) && (f_26 != h_26)))
                  _fail(h_26);
                else
                  f_26 = h_26;
                {
                  if(((e_26 != NULL) && (e_26 != i_26)))
                    _fail(i_26);
                  else
                    e_26 = i_26;
                  {
                    t = not_null(f_26);
                    {
                      ATerm s_5 (ATerm t)
                      {
                        ATerm g_27 = t;
                        int h_27 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = remove_file_0(t);
                            LocalPopChoice(h_27);
                          }
                        else
                          {
                            t = g_27;
                            {
                            }
                          }
                        return(t);
                      }
                      t = map_1(t, s_5);
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
      t = w_26;
      {
        ATerm y_5 (ATerm t)
        {
          t = term_l_23;
          return(t);
        }
        t = end_scope_1(t, y_5);
      }
      return(t);
    }
    t = restore_always_2(t, t_91, o_5);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm u_91 (ATerm))
{
  ATerm z_5 (ATerm t)
  {
    ATerm i_27 = t;
    int n_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_26 = NULL;
        ATerm m_26 = NULL;
        t = term_o_23;
        {
          t = get_config_0(t);
          {
            m_26 = t;
            if(((l_26 != NULL) && (l_26 != m_26)))
              _fail(m_26);
            else
              l_26 = m_26;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(l_26));
        LocalPopChoice(n_27);
      }
    else
      {
        t = i_27;
        t = term_g_22;
      }
    {
      t = u_91(t);
      {
        ATerm a_6 (ATerm t)
        {
          ATerm o_27 = t;
          int p_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_i_15;
              t = get_config_0(t);
              LocalPopChoice(p_27);
            }
          else
            {
              t = o_27;
              t = term_u_25;
            }
          return(t);
        }
        t = rename_to_1(t, a_6);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, z_5);
  return(t);
}
ATerm compile_0 (ATerm t)
{
  ATerm b_6 (ATerm t)
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
  t = xtc_io_1(t, b_6);
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm l_85 (ATerm))
{
  ATerm q_27 = t;
  int x_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_27;
      y_27 = t;
      {
        ATerm p_26 = NULL;
        ATerm q_26 = NULL;
        t = term_w_14;
        {
          t = get_config_0(t);
          {
            q_26 = t;
            if(((p_26 != NULL) && (p_26 != q_26)))
              _fail(q_26);
            else
              p_26 = q_26;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_26), term_z_21);
          t = geq_0(t);
        }
      }
      t = y_27;
      t = l_85(t);
      LocalPopChoice(x_27);
    }
  else
    {
      t = q_27;
      {
      }
    }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm t_26 = NULL;
  t_26 = t;
  t = SSL_TicksToSeconds(not_null(t_26));
  return(t);
}
ATerm self_children_sys_time_0 (ATerm t)
{
  ATerm y_26 = NULL,z_26 = NULL,a_27 = NULL,b_27 = NULL,c_27 = NULL;
  y_26 = t;
  x_26 :
  if(match_cons(y_26, sym__4))
    {
      z_26 = ATgetArgument(y_26, 0);
      a_27 = ATgetArgument(y_26, 1);
      b_27 = ATgetArgument(y_26, 2);
      c_27 = ATgetArgument(y_26, 3);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_27), not_null(c_27));
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
  ATerm k_27 = NULL,l_27 = NULL,m_27 = NULL;
  k_27 = t;
  j_27 :
  if(match_cons(k_27, sym__2))
    {
      l_27 = ATgetArgument(k_27, 0);
      m_27 = ATgetArgument(k_27, 1);
      {
        ATerm z_27 = t;
        int a_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(l_27), not_null(m_27));
            LocalPopChoice(a_28);
          }
        else
          {
            t = z_27;
            t = SSL_addr(not_null(l_27), not_null(m_27));
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
  ATerm s_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL;
  s_27 = t;
  r_27 :
  if(match_cons(s_27, sym__4))
    {
      t_27 = ATgetArgument(s_27, 0);
      u_27 = ATgetArgument(s_27, 1);
      v_27 = ATgetArgument(s_27, 2);
      w_27 = ATgetArgument(s_27, 3);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_27), not_null(v_27));
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
  ATerm e_28 = NULL,f_28 = NULL,g_28 = NULL;
  e_28 = t;
  d_28 :
  if(match_cons(e_28, sym__2))
    {
      f_28 = ATgetArgument(e_28, 0);
      g_28 = ATgetArgument(e_28, 1);
      {
        ATerm b_28 = t;
        int c_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(f_28), not_null(g_28));
            LocalPopChoice(c_28);
          }
        else
          {
            t = b_28;
            t = SSL_subtr(not_null(f_28), not_null(g_28));
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
  ATerm s_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL,y_28 = NULL,b_29 = NULL,c_29 = NULL,g_29 = NULL,h_29 = NULL,i_29 = NULL;
  s_28 = t;
  p_28 :
  if(match_cons(s_28, sym__2))
    {
      u_28 = ATgetArgument(s_28, 0);
      b_29 = ATgetArgument(s_28, 1);
      q_28 :
      if(match_cons(u_28, sym__4))
        {
          v_28 = ATgetArgument(u_28, 0);
          w_28 = ATgetArgument(u_28, 1);
          x_28 = ATgetArgument(u_28, 2);
          y_28 = ATgetArgument(u_28, 3);
          r_28 :
          if(match_cons(b_29, sym__4))
            {
              c_29 = ATgetArgument(b_29, 0);
              g_29 = ATgetArgument(b_29, 1);
              h_29 = ATgetArgument(b_29, 2);
              i_29 = ATgetArgument(b_29, 3);
              {
                ATerm t_29 = NULL,v_29 = NULL,x_29 = NULL,z_29 = NULL;
                ATerm h_28;
                h_28 = t;
                {
                  ATerm u_29 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(v_28), not_null(c_29));
                  {
                    t = subt_0(t);
                    {
                      u_29 = t;
                      if(((t_29 != NULL) && (t_29 != u_29)))
                        _fail(u_29);
                      else
                        t_29 = u_29;
                    }
                  }
                }
                t = h_28;
                {
                  ATerm i_28;
                  i_28 = t;
                  {
                    ATerm w_29 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(w_28), not_null(g_29));
                    {
                      t = subt_0(t);
                      {
                        w_29 = t;
                        if(((v_29 != NULL) && (v_29 != w_29)))
                          _fail(w_29);
                        else
                          v_29 = w_29;
                      }
                    }
                  }
                  t = i_28;
                  {
                    ATerm j_28;
                    j_28 = t;
                    {
                      ATerm y_29 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(x_28), not_null(h_29));
                      {
                        t = subt_0(t);
                        {
                          y_29 = t;
                          if(((x_29 != NULL) && (x_29 != y_29)))
                            _fail(y_29);
                          else
                            x_29 = y_29;
                        }
                      }
                    }
                    t = j_28;
                    {
                      ATerm a_30 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(y_28), not_null(i_29));
                      {
                        t = subt_0(t);
                        {
                          a_30 = t;
                          if(((z_29 != NULL) && (z_29 != a_30)))
                            _fail(a_30);
                          else
                            z_29 = a_30;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym__4, not_null(t_29), not_null(v_29), not_null(x_29), not_null(z_29));
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
ATerm profile_p__2 (ATerm t, ATerm h_83 (ATerm), ATerm i_83 (ATerm))
{
  ATerm k_30 = NULL;
  ATerm k_28;
  k_28 = t;
  {
    ATerm l_30 = NULL;
    t = times_0(t);
    {
      l_30 = t;
      if(((k_30 != NULL) && (k_30 != l_30)))
        _fail(l_30);
      else
        k_30 = l_30;
    }
  }
  t = k_28;
  {
    t = i_83(t);
    {
      ATerm l_28;
      l_28 = t;
      {
        ATerm m_30 = NULL,o_30 = NULL,q_30 = NULL;
        ATerm n_30 = NULL;
        t = times_0(t);
        {
          n_30 = t;
          if(((m_30 != NULL) && (m_30 != n_30)))
            _fail(n_30);
          else
            m_30 = n_30;
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_30), not_null(k_30));
          {
            t = diff_times_0(t);
            {
              ATerm m_28;
              m_28 = t;
              {
                ATerm p_30 = NULL;
                t = self_children_user_time_0(t);
                {
                  t = ticks_to_seconds_0(t);
                  {
                    p_30 = t;
                    if(((o_30 != NULL) && (o_30 != p_30)))
                      _fail(p_30);
                    else
                      o_30 = p_30;
                  }
                }
              }
              t = m_28;
              {
                ATerm r_30 = NULL;
                t = self_children_sys_time_0(t);
                {
                  t = ticks_to_seconds_0(t);
                  {
                    r_30 = t;
                    if(((q_30 != NULL) && (q_30 != r_30)))
                      _fail(r_30);
                    else
                      q_30 = r_30;
                  }
                }
                {
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(q_30)), term_o_28), not_null(o_30)), term_n_28);
                  t = h_83(t);
                }
              }
            }
          }
        }
      }
      t = l_28;
    }
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm p_82 (ATerm))
{
  ATerm t_28;
  t_28 = t;
  {
    ATerm y_30 = NULL,a_31 = NULL;
    ATerm z_28;
    z_28 = t;
    {
      ATerm z_30 = NULL;
      t = p_82(t);
      {
        z_30 = t;
        if(((y_30 != NULL) && (y_30 != z_30)))
          _fail(z_30);
        else
          y_30 = z_30;
      }
    }
    t = z_28;
    {
      ATerm b_31 = NULL;
      b_31 = t;
      if(((a_31 != NULL) && (a_31 != b_31)))
        _fail(b_31);
      else
        a_31 = b_31;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_31)), not_null(y_30)));
        t = printnl_0(t);
      }
    }
  }
  t = t_28;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm k_31 = NULL;
  k_31 = t;
  t = SSL_is_string(not_null(k_31));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm a_29 = t;
  int d_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(d_29);
    }
  else
    {
      t = a_29;
      {
        ATerm e_29 = t;
        int f_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_6 (ATerm t)
            {
              ATerm j_29 = t;
              int k_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(k_29);
                }
              else
                {
                  t = j_29;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, c_6);
            LocalPopChoice(f_29);
          }
        else
          {
            t = e_29;
            {
              ATerm t_31 = NULL,u_31 = NULL,v_31 = NULL;
              t_31 = t;
              s_31 :
              if(match_cons(t_31, sym_Path_1))
                {
                  u_31 = ATgetArgument(t_31, 0);
                  t = not_null(u_31);
                }
              else
                {
                  if(match_cons(t_31, sym_Var_1))
                    {
                      u_31 = ATgetArgument(t_31, 0);
                      {
                        t = not_null(u_31);
                        {
                          ATerm l_29 = t;
                          int m_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(m_29);
                            }
                          else
                            {
                              t = l_29;
                              {
                                ATerm d_6 (ATerm t)
                                {
                                  t = term_n_29;
                                  return(t);
                                }
                                t = debug_1(t, d_6);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t_31, sym_Prefix_2))
                        {
                          u_31 = ATgetArgument(t_31, 0);
                          v_31 = ATgetArgument(t_31, 1);
                          {
                            ATerm a_32 = NULL,c_32 = NULL;
                            ATerm o_29;
                            o_29 = t;
                            {
                              ATerm b_32 = NULL;
                              t = not_null(u_31);
                              {
                                t = eval_config_0(t);
                                {
                                  b_32 = t;
                                  if(((a_32 != NULL) && (a_32 != b_32)))
                                    _fail(b_32);
                                  else
                                    a_32 = b_32;
                                }
                              }
                            }
                            t = o_29;
                            {
                              ATerm d_32 = NULL;
                              t = not_null(v_31);
                              {
                                t = eval_config_0(t);
                                {
                                  d_32 = t;
                                  if(((c_32 != NULL) && (c_32 != d_32)))
                                    _fail(d_32);
                                  else
                                    c_32 = d_32;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(a_32), not_null(c_32));
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
  ATerm l_32 = NULL;
  l_32 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_p_29, not_null(l_32));
    {
      t = table_get_0(t);
      {
        ATerm q_29 = t;
        int r_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm s_29;
              s_29 = t;
              {
                ATerm n_32 = NULL;
                ATerm o_32 = NULL;
                o_32 = t;
                if(((n_32 != NULL) && (n_32 != o_32)))
                  _fail(o_32);
                else
                  n_32 = o_32;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_p_29, not_null(l_32), not_null(n_32));
                  t = table_put_0(t);
                }
              }
              t = s_29;
            }
            LocalPopChoice(r_29);
          }
        else
          {
            t = q_29;
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
  ATerm b_30;
  b_30 = t;
  {
    t = error_0(t);
    {
      t = term_z_21;
      t = exit_0(t);
    }
  }
  t = b_30;
  return(t);
}
ATerm sc_version_0 (ATerm t)
{
  ATerm c_30 = t;
  int d_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_30;
      e_30 = t;
      {
        ATerm t_32 = NULL;
        ATerm u_32 = NULL;
        t = term_f_30;
        {
          t = get_config_0(t);
          {
            u_32 = t;
            if(((t_32 != NULL) && (t_32 != u_32)))
              _fail(u_32);
            else
              t_32 = u_32;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_u_25, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_30), term_u_30), term_t_30), term_s_30), term_j_30), term_i_30), term_h_30), not_null(t_32)), term_g_30));
          t = printnl_0(t);
        }
      }
      t = e_30;
      LocalPopChoice(d_30);
    }
  else
    {
      t = c_30;
      {
        ATerm v_32 = NULL;
        v_32 = t;
        s_32 :
        if(!(match_string(v_32, "0.9beta8")))
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm y_63 (ATerm))
{
  ATerm w_30 = t;
  int x_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = y_63(t);
      LocalPopChoice(x_30);
    }
  else
    {
      t = w_30;
      {
      }
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm z_32 = NULL,a_33 = NULL,b_33 = NULL;
  z_32 = t;
  y_32 :
  if(match_cons(z_32, sym__2))
    {
      a_33 = ATgetArgument(z_32, 0);
      b_33 = ATgetArgument(z_32, 1);
      t = SSL_copy(not_null(a_33), not_null(b_33));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm g_33 = NULL;
  g_33 = t;
  t = SSL_table_keys(not_null(g_33));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm m_33 = NULL;
  m_33 = t;
  {
    t = table_keys_0(t);
    {
      ATerm e_6 (ATerm t)
      {
        ATerm o_33 = NULL;
        ATerm q_33 = NULL;
        o_33 = t;
        {
          ATerm r_33 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_33), not_null(o_33));
          {
            t = table_get_0(t);
            {
              r_33 = t;
              if(((q_33 != NULL) && (q_33 != r_33)))
                _fail(r_33);
              else
                q_33 = r_33;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_33), not_null(q_33));
        }
        return(t);
      }
      t = map_1(t, e_6);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm p_85 (ATerm))
{
  ATerm c_31 = t;
  int d_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_31;
      e_31 = t;
      {
        ATerm w_33 = NULL;
        ATerm x_33 = NULL;
        t = term_w_14;
        {
          t = get_config_0(t);
          {
            x_33 = t;
            if(((w_33 != NULL) && (w_33 != x_33)))
              _fail(x_33);
            else
              w_33 = x_33;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_33), term_f_31);
          t = geq_0(t);
        }
      }
      t = e_31;
      t = p_85(t);
      LocalPopChoice(d_31);
    }
  else
    {
      t = c_31;
      {
      }
    }
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm g_31;
  g_31 = t;
  {
    ATerm a_34 = NULL;
    ATerm b_34 = NULL;
    b_34 = t;
    if(((a_34 != NULL) && (a_34 != b_34)))
      _fail(b_34);
    else
      a_34 = b_34;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_l_15, not_null(a_34));
      t = printnl_0(t);
    }
  }
  t = g_31;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm h_34 = NULL;
  ATerm j_34 = NULL,k_34 = NULL;
  h_34 = t;
  {
    ATerm l_34 = NULL,m_34 = NULL,n_34 = NULL,o_34 = NULL,p_34 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_h_31, (ATerm) ATmakeAppl(sym_Tool_1, not_null(h_34)));
    {
      t = table_get_0(t);
      {
        l_34 = t;
        f_34 :
        if(((ATgetType(l_34) == AT_LIST) && !(ATisEmpty(l_34))))
          {
            m_34 = ATgetFirst((ATermList) l_34);
            p_34 = (ATerm) ATgetNext((ATermList) l_34);
            g_34 :
            if(match_cons(m_34, sym__2))
              {
                n_34 = ATgetArgument(m_34, 0);
                o_34 = ATgetArgument(m_34, 1);
                {
                  if(((j_34 != NULL) && (j_34 != n_34)))
                    _fail(n_34);
                  else
                    j_34 = n_34;
                  if(((k_34 != NULL) && (k_34 != o_34)))
                    _fail(o_34);
                  else
                    k_34 = o_34;
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
    t = not_null(k_34);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm w_34 = NULL,x_34 = NULL,y_34 = NULL;
  w_34 = t;
  v_34 :
  if(match_cons(w_34, sym__2))
    {
      x_34 = ATgetArgument(w_34, 0);
      y_34 = ATgetArgument(w_34, 1);
      {
        ATerm b_35 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_h_31, (ATerm) ATmakeAppl(sym_Tool_1, not_null(x_34)));
        {
          t = table_get_0(t);
          {
            ATerm f_6 (ATerm t)
            {
              ATerm c_35 = NULL,d_35 = NULL,e_35 = NULL;
              c_35 = t;
              u_34 :
              if(match_cons(c_35, sym__2))
                {
                  d_35 = ATgetArgument(c_35, 0);
                  e_35 = ATgetArgument(c_35, 1);
                  {
                    if(((y_34 != NULL) && (y_34 != d_35)))
                      _fail(d_35);
                    else
                      y_34 = d_35;
                    if(((b_35 != NULL) && (b_35 != e_35)))
                      _fail(e_35);
                    else
                      b_35 = e_35;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, f_6);
          }
        }
        t = not_null(b_35);
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
  ATerm i_31 = t;
  int j_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_31;
      {
        t = table_get_0(t);
        {
          ATerm j_6 (ATerm t)
          {
            t = try_1(t, xtc_read_0);
            return(t);
          }
          t = map_1(t, j_6);
        }
      }
      LocalPopChoice(j_31);
    }
  else
    {
      t = i_31;
      {
      }
    }
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm o_85 (ATerm))
{
  ATerm n_31 = t;
  int o_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_31;
      p_31 = t;
      {
        ATerm i_35 = NULL;
        ATerm j_35 = NULL;
        t = term_w_14;
        {
          t = get_config_0(t);
          {
            j_35 = t;
            if(((i_35 != NULL) && (i_35 != j_35)))
              _fail(j_35);
            else
              i_35 = j_35;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_35), term_q_31);
          t = geq_0(t);
        }
      }
      t = p_31;
      t = o_85(t);
      LocalPopChoice(o_31);
    }
  else
    {
      t = n_31;
      {
      }
    }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm n_35 = NULL,r_35 = NULL,s_35 = NULL;
  n_35 = t;
  m_35 :
  if(match_cons(n_35, sym__2))
    {
      r_35 = ATgetArgument(n_35, 0);
      s_35 = ATgetArgument(n_35, 1);
      {
        ATerm r_31;
        r_31 = t;
        {
          ATerm w_31 = t;
          int x_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(r_35), not_null(s_35));
              LocalPopChoice(x_31);
            }
          else
            {
              t = w_31;
              t = SSL_gtr(not_null(r_35), not_null(s_35));
            }
        }
        t = r_31;
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
  ATerm y_35 = NULL;
  ATerm y_31 = t;
  int z_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_35 = NULL,a_36 = NULL,b_36 = NULL;
      z_35 = t;
      x_35 :
      if(match_cons(z_35, sym__2))
        {
          a_36 = ATgetArgument(z_35, 0);
          b_36 = ATgetArgument(z_35, 1);
          {
            if(((y_35 != NULL) && (y_35 != a_36)))
              _fail(a_36);
            else
              y_35 = a_36;
            if(((y_35 != NULL) && (y_35 != b_36)))
              _fail(b_36);
            else
              y_35 = b_36;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(z_31);
    }
  else
    {
      t = y_31;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm q_85 (ATerm))
{
  ATerm e_32 = t;
  int f_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_32;
      g_32 = t;
      {
        ATerm e_36 = NULL;
        ATerm f_36 = NULL;
        t = term_w_14;
        {
          t = get_config_0(t);
          {
            f_36 = t;
            if(((e_36 != NULL) && (e_36 != f_36)))
              _fail(f_36);
            else
              e_36 = f_36;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_36), term_h_32);
          t = geq_0(t);
        }
      }
      t = g_32;
      t = q_85(t);
      LocalPopChoice(f_32);
    }
  else
    {
      t = e_32;
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
  ATerm j_36 = NULL,k_36 = NULL,l_36 = NULL;
  j_36 = t;
  i_36 :
  if(match_cons(j_36, sym__2))
    {
      k_36 = ATgetArgument(j_36, 0);
      l_36 = ATgetArgument(j_36, 1);
      if(((k_36 != NULL) && (k_36 != l_36)))
        _fail(l_36);
      else
        k_36 = l_36;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm r_77 (ATerm), ATerm s_77 (ATerm))
{
  ATerm r_36 = NULL,s_36 = NULL,t_36 = NULL;
  r_36 = t;
  q_36 :
  if(((ATgetType(r_36) == AT_LIST) && !(ATisEmpty(r_36))))
    {
      s_36 = ATgetFirst((ATermList) r_36);
      t_36 = (ATerm) ATgetNext((ATermList) r_36);
      {
        t = s_77(t);
        {
          ATerm s_6 (ATerm t)
          {
            ATerm w_36 = NULL;
            w_36 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(s_36), not_null(w_36));
              t = r_77(t);
            }
            return(t);
          }
          t = fetch_1(t, s_6);
        }
        t = not_null(t_36);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm n_77 (ATerm))
{
  ATerm c_37 = NULL,d_37 = NULL,e_37 = NULL;
  c_37 = t;
  b_37 :
  if(match_cons(c_37, sym__2))
    {
      d_37 = ATgetArgument(c_37, 0);
      e_37 = ATgetArgument(c_37, 1);
      {
        t = not_null(d_37);
        {
          ATerm k_37 (ATerm t)
          {
            ATerm i_32 = t;
            int j_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(e_37);
                LocalPopChoice(j_32);
              }
            else
              {
                t = i_32;
                {
                  ATerm k_32 = t;
                  int m_32 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm t_6 (ATerm t)
                      {
                        t = not_null(e_37);
                        return(t);
                      }
                      t = HdMember_p__2(t, n_77, t_6);
                      t = k_37(t);
                      LocalPopChoice(m_32);
                    }
                  else
                    {
                      t = k_32;
                      t = Cons_2(t, _id, k_37);
                    }
                }
              }
            return(t);
          }
          t = k_37(t);
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
  ATerm r_37 = NULL,u_37 = NULL,v_37 = NULL,w_37 = NULL;
  r_37 = t;
  q_37 :
  if(match_cons(r_37, sym__3))
    {
      u_37 = ATgetArgument(r_37, 0);
      v_37 = ATgetArgument(r_37, 1);
      w_37 = ATgetArgument(r_37, 2);
      {
        ATerm p_32;
        p_32 = t;
        {
          ATerm a_38 = NULL;
          ATerm b_38 = NULL,d_38 = NULL;
          ATerm c_38 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_37), not_null(v_37));
          {
            ATerm q_32 = t;
            int r_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(r_32);
              }
            else
              {
                t = q_32;
                t = (ATerm) ATempty;
              }
            {
              c_38 = t;
              if(((b_38 != NULL) && (b_38 != c_38)))
                _fail(c_38);
              else
                b_38 = c_38;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(b_38), not_null(w_37));
            {
              t = union_1(t, eq_0);
              {
                d_38 = t;
                if(((a_38 != NULL) && (a_38 != d_38)))
                  _fail(d_38);
                else
                  a_38 = d_38;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(u_37), not_null(v_37), not_null(a_38));
            t = table_put_0(t);
          }
        }
        t = p_32;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm y_88 (ATerm))
{
  ATerm l_38 = NULL,o_38 = NULL,p_38 = NULL;
  l_38 = t;
  k_38 :
  if(match_cons(l_38, sym__2))
    {
      o_38 = ATgetArgument(l_38, 0);
      p_38 = ATgetArgument(l_38, 1);
      {
        t = not_null(p_38);
        {
          ATerm u_6 (ATerm t)
          {
            ATerm d_39 = NULL,e_39 = NULL,f_39 = NULL;
            d_39 = t;
            j_38 :
            if(match_cons(d_39, sym__2))
              {
                e_39 = ATgetArgument(d_39, 0);
                f_39 = ATgetArgument(d_39, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(o_38), not_null(e_39), not_null(f_39));
                  t = y_88(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, u_6);
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
  ATerm l_39 = NULL;
  l_39 = t;
  t = SSL_ReadFromFile(not_null(l_39));
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm q_39 = NULL;
  ATerm v_39 = NULL;
  q_39 = t;
  {
    ATerm w_32;
    w_32 = t;
    {
      ATerm w_39 = NULL;
      t = term_x_32;
      {
        w_39 = t;
        if(((v_39 != NULL) && (v_39 != w_39)))
          _fail(w_39);
        else
          v_39 = w_39;
      }
    }
    t = w_32;
    {
      t = SSL_open_file(not_null(q_39), not_null(v_39));
      t = SSL_close_file(not_null(q_39));
    }
  }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm d_40 = NULL;
  ATerm i_40 = NULL;
  d_40 = t;
  {
    ATerm c_33 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_31, (ATerm) ATmakeAppl(sym_Imported_1, not_null(d_40)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_33;
      }
    {
      ATerm d_33;
      d_33 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_h_31, term_e_33, (ATerm) ATinsert(ATempty, not_null(d_40)));
        t = table_put_0(t);
      }
      t = d_33;
      {
        ATerm v_6 (ATerm t)
        {
          ATerm w_6 (ATerm t)
          {
            t = term_f_33;
            return(t);
          }
          t = debug_1(t, w_6);
          return(t);
        }
        t = if_verbose4_1(t, v_6);
        {
          ATerm h_33 = t;
          int i_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(i_33);
            }
          else
            {
              t = h_33;
              t = (ATerm) ATempty;
            }
          {
            ATerm x_6 (ATerm t)
            {
              ATerm y_6 (ATerm t)
              {
                t = term_j_33;
                return(t);
              }
              t = say_1(t, y_6);
              return(t);
            }
            t = if_verbose6_1(t, x_6);
            {
              ATerm j_40 = NULL;
              j_40 = t;
              if(((i_40 != NULL) && (i_40 != j_40)))
                _fail(j_40);
              else
                i_40 = j_40;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_h_31, not_null(i_40));
                {
                  t = table_putlist_1(t, table_append_0);
                  {
                    ATerm z_6 (ATerm t)
                    {
                      ATerm a_7 (ATerm t)
                      {
                        t = term_k_33;
                        return(t);
                      }
                      t = say_1(t, a_7);
                      return(t);
                    }
                    t = if_verbose6_1(t, z_6);
                    {
                      t = (ATerm) ATmakeAppl(sym__3, term_h_31, (ATerm)ATmakeAppl(sym_Imported_1, not_null(d_40)), (ATerm) ATempty);
                      {
                        t = table_put_0(t);
                        {
                          ATerm b_7 (ATerm t)
                          {
                            ATerm f_7 (ATerm t)
                            {
                              t = term_j_33;
                              return(t);
                            }
                            t = say_1(t, f_7);
                            return(t);
                          }
                          t = if_verbose4_1(t, b_7);
                        }
                      }
                    }
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
  ATerm w_40 = NULL;
  w_40 = t;
  t = SSL_getenv(not_null(w_40));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm l_33 = t;
  int n_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_33;
      t = get_config_0(t);
      LocalPopChoice(n_33);
    }
  else
    {
      t = l_33;
      {
        ATerm s_33 = t;
        int t_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_u_33;
            t = getenv_0(t);
            LocalPopChoice(t_33);
          }
        else
          {
            t = s_33;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm o_7 (ATerm t)
  {
    ATerm p_7 (ATerm t)
    {
      t = term_v_33;
      return(t);
    }
    t = debug_1(t, p_7);
    return(t);
  }
  t = if_verbose5_1(t, o_7);
  {
    ATerm y_33;
    y_33 = t;
    {
      ATerm z_33 = t;
      int c_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_d_34;
          t = table_get_0(t);
          LocalPopChoice(c_34);
        }
      else
        {
          t = z_33;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = y_33;
    {
      ATerm q_7 (ATerm t)
      {
        ATerm r_7 (ATerm t)
        {
          t = term_e_34;
          return(t);
        }
        t = debug_1(t, r_7);
        return(t);
      }
      t = if_verbose5_1(t, q_7);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm i_34 = t;
  int q_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_7 (ATerm t)
      {
        ATerm t_7 (ATerm t)
        {
          t = term_r_34;
          return(t);
        }
        t = debug_1(t, t_7);
        return(t);
      }
      t = if_verbose5_1(t, s_7);
      {
        t = xtc_load_0(t);
        {
          ATerm s_34 = t;
          int t_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(t_34);
            }
          else
            {
              t = s_34;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm w_7 (ATerm t)
            {
              ATerm x_7 (ATerm t)
              {
                t = term_r_34;
                return(t);
              }
              t = debug_1(t, x_7);
              return(t);
            }
            t = if_verbose5_1(t, w_7);
          }
        }
      }
      LocalPopChoice(q_34);
    }
  else
    {
      t = i_34;
      {
        ATerm a_41 = NULL;
        ATerm b_41 = NULL;
        b_41 = t;
        if(((a_41 != NULL) && (a_41 != b_41)))
          _fail(b_41);
        else
          a_41 = b_41;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_35), not_null(a_41)), term_z_34);
          {
            t = error_0(t);
            {
              ATerm a_8 (ATerm t)
              {
                t = term_h_31;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm b_8 (ATerm t)
                    {
                      t = term_f_35;
                      return(t);
                    }
                    t = debug_1(t, b_8);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, a_8);
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
  ATerm e_41 = NULL;
  e_41 = t;
  t = SSL_string_to_int(not_null(e_41));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm m_41 = NULL,n_41 = NULL,o_41 = NULL,p_41 = NULL,q_41 = NULL;
  m_41 = t;
  k_41 :
  if(match_string(m_41, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(m_41) == AT_LIST) && !(ATisEmpty(m_41))))
        {
          n_41 = ATgetFirst((ATermList) m_41);
          o_41 = (ATerm) ATgetNext((ATermList) m_41);
          l_41 :
          if(((ATgetType(o_41) == AT_LIST) && !(ATisEmpty(o_41))))
            {
              p_41 = ATgetFirst((ATermList) o_41);
              q_41 = (ATerm) ATgetNext((ATermList) o_41);
              {
                ATerm u_41 = NULL;
                ATerm g_35;
                g_35 = t;
                {
                  t = not_null(n_41);
                  t = l_0(t);
                }
                t = g_35;
                {
                  ATerm d_42 = NULL;
                  t = not_null(p_41);
                  {
                    t = m_0(t);
                    {
                      d_42 = t;
                      if(((u_41 != NULL) && (u_41 != d_42)))
                        _fail(d_42);
                      else
                        u_41 = d_42;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(q_41)), not_null(u_41));
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
  ATerm m_42 = NULL,n_42 = NULL,o_42 = NULL;
  m_42 = t;
  l_42 :
  if(match_cons(m_42, sym__2))
    {
      n_42 = ATgetArgument(m_42, 0);
      o_42 = ATgetArgument(m_42, 1);
      {
        ATerm r_42 = NULL;
        ATerm s_42 = NULL,u_42 = NULL;
        ATerm t_42 = NULL;
        t = not_null(n_42);
        {
          ATerm h_35 = t;
          int k_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(k_35);
            }
          else
            {
              t = h_35;
              t = (ATerm) ATempty;
            }
          {
            t_42 = t;
            if(((s_42 != NULL) && (s_42 != t_42)))
              _fail(t_42);
            else
              s_42 = t_42;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_42), not_null(s_42));
          {
            ATerm l_35 = t;
            int o_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(o_35);
              }
            else
              {
                t = l_35;
                t = conc_more_lists_0(t);
              }
            {
              u_42 = t;
              if(((r_42 != NULL) && (r_42 != u_42)))
                _fail(u_42);
              else
                r_42 = u_42;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_p_29, not_null(n_42), not_null(r_42));
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
  ATerm r_43 = NULL,s_43 = NULL;
  ATerm p_35;
  p_35 = t;
  {
    ATerm t_43 = NULL,w_43 = NULL,x_43 = NULL;
    t_43 = t;
    q_43 :
    if(match_cons(t_43, sym__2))
      {
        w_43 = ATgetArgument(t_43, 0);
        x_43 = ATgetArgument(t_43, 1);
        {
          if(((r_43 != NULL) && (r_43 != w_43)))
            _fail(w_43);
          else
            r_43 = w_43;
          {
            if(((s_43 != NULL) && (s_43 != x_43)))
              _fail(x_43);
            else
              s_43 = x_43;
            t = SSL_table_remove(not_null(r_43), not_null(s_43));
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = p_35;
  return(t);
}
ATerm toggle_config_0 (ATerm t)
{
  ATerm g_44 = NULL,h_44 = NULL,i_44 = NULL;
  g_44 = t;
  f_44 :
  if(match_cons(g_44, sym__2))
    {
      h_44 = ATgetArgument(g_44, 0);
      i_44 = ATgetArgument(g_44, 1);
      {
        ATerm q_35 = t;
        int t_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = not_null(h_44);
            {
              t = get_config_0(t);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_p_29, not_null(h_44));
                t = table_remove_0(t);
              }
            }
            LocalPopChoice(t_35);
          }
        else
          {
            t = q_35;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(h_44), not_null(i_44));
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
  ATerm u_44 = NULL,v_44 = NULL,w_44 = NULL;
  u_44 = t;
  t_44 :
  if(match_cons(u_44, sym__2))
    {
      v_44 = ATgetArgument(u_44, 0);
      w_44 = ATgetArgument(u_44, 1);
      {
        ATerm z_44 = NULL;
        ATerm a_45 = NULL,c_45 = NULL;
        ATerm b_45 = NULL;
        t = not_null(v_44);
        {
          ATerm u_35 = t;
          int v_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(v_35);
            }
          else
            {
              t = u_35;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_45), not_null(w_44));
          {
            ATerm w_35 = t;
            int c_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(c_36);
              }
            else
              {
                t = w_35;
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
          t = (ATerm) ATmakeAppl(sym__3, term_p_29, not_null(v_44), not_null(z_44));
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
  ATerm d_36 = t;
  int g_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_8 (ATerm t)
      {
        ATerm r_46 = NULL;
        r_46 = t;
        g_45 :
        if(!(match_string(r_46, "-i")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm d_8 (ATerm t)
      {
        ATerm s_46 = NULL;
        ATerm t_46 = NULL;
        t_46 = t;
        if(((s_46 != NULL) && (s_46 != t_46)))
          _fail(t_46);
        else
          s_46 = t_46;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_o_23, not_null(s_46));
          t = set_config_0(t);
        }
        t = term_b_20;
        return(t);
      }
      ATerm k_8 (ATerm t)
      {
        t = term_h_36;
        return(t);
      }
      t = ArgOption_3(t, c_8, d_8, k_8);
      LocalPopChoice(g_36);
    }
  else
    {
      t = d_36;
      {
        ATerm m_36 = t;
        int n_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_8 (ATerm t)
            {
              ATerm u_46 = NULL;
              u_46 = t;
              j_45 :
              if(!(match_string(u_46, "-o")))
                {
                  if(!(match_string(u_46, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm m_8 (ATerm t)
            {
              ATerm v_46 = NULL;
              ATerm w_46 = NULL;
              w_46 = t;
              if(((v_46 != NULL) && (v_46 != w_46)))
                _fail(w_46);
              else
                v_46 = w_46;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_i_15, not_null(v_46));
                t = set_config_0(t);
              }
              t = term_b_20;
              return(t);
            }
            ATerm n_8 (ATerm t)
            {
              t = term_o_36;
              return(t);
            }
            t = ArgOption_3(t, l_8, m_8, n_8);
            LocalPopChoice(n_36);
          }
        else
          {
            t = m_36;
            {
              ATerm p_36 = t;
              int u_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_8 (ATerm t)
                  {
                    ATerm x_46 = NULL;
                    x_46 = t;
                    l_45 :
                    if(!(match_string(x_46, "-I")))
                      {
                        if(!(match_string(x_46, "--Include")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm r_8 (ATerm t)
                  {
                    ATerm d_47 = NULL;
                    ATerm e_47 = NULL;
                    e_47 = t;
                    if(((d_47 != NULL) && (d_47 != e_47)))
                      _fail(e_47);
                    else
                      d_47 = e_47;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_n_25, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_47)), term_n_25));
                      t = extend_config_0(t);
                    }
                    t = term_b_20;
                    return(t);
                  }
                  ATerm u_8 (ATerm t)
                  {
                    t = term_v_36;
                    return(t);
                  }
                  t = ArgOption_3(t, q_8, r_8, u_8);
                  LocalPopChoice(u_36);
                }
              else
                {
                  t = p_36;
                  {
                    ATerm x_36 = t;
                    int y_36 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm v_8 (ATerm t)
                        {
                          ATerm f_47 = NULL;
                          f_47 = t;
                          n_45 :
                          if(!(match_string(f_47, "--main")))
                            {
                              if(!(match_string(f_47, "-m")))
                                {
                                  _fail(t);
                                }
                            }
                          return(t);
                        }
                        ATerm y_8 (ATerm t)
                        {
                          ATerm g_47 = NULL;
                          ATerm l_47 = NULL;
                          l_47 = t;
                          if(((g_47 != NULL) && (g_47 != l_47)))
                            _fail(l_47);
                          else
                            g_47 = l_47;
                          {
                            t = (ATerm) ATmakeAppl(sym__2, term_i_20, not_null(g_47));
                            t = set_config_0(t);
                          }
                          t = term_b_20;
                          return(t);
                        }
                        ATerm z_8 (ATerm t)
                        {
                          t = term_z_36;
                          return(t);
                        }
                        t = ArgOption_3(t, v_8, y_8, z_8);
                        LocalPopChoice(y_36);
                      }
                    else
                      {
                        t = x_36;
                        {
                          ATerm a_37 = t;
                          int f_37 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm c_9 (ATerm t)
                              {
                                ATerm m_47 = NULL;
                                m_47 = t;
                                p_45 :
                                if(!(match_string(m_47, "--C-include")))
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              ATerm d_9 (ATerm t)
                              {
                                ATerm n_47 = NULL;
                                ATerm x_47 = NULL;
                                x_47 = t;
                                if(((n_47 != NULL) && (n_47 != x_47)))
                                  _fail(x_47);
                                else
                                  n_47 = x_47;
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, term_b_17, (ATerm) ATinsert(ATempty, not_null(n_47)));
                                  t = post_extend_config_0(t);
                                }
                                t = term_b_20;
                                return(t);
                              }
                              ATerm g_9 (ATerm t)
                              {
                                t = term_g_37;
                                return(t);
                              }
                              t = ArgOption_3(t, c_9, d_9, g_9);
                              LocalPopChoice(f_37);
                            }
                          else
                            {
                              t = a_37;
                              {
                                ATerm h_37 = t;
                                int i_37 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm h_9 (ATerm t)
                                    {
                                      ATerm y_47 = NULL;
                                      y_47 = t;
                                      r_45 :
                                      if(!(match_string(y_47, "-CI")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm k_9 (ATerm t)
                                    {
                                      ATerm z_47 = NULL;
                                      ATerm a_48 = NULL;
                                      a_48 = t;
                                      if(((z_47 != NULL) && (z_47 != a_48)))
                                        _fail(a_48);
                                      else
                                        z_47 = a_48;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, term_r_15, (ATerm) ATinsert(ATempty, not_null(z_47)));
                                        t = extend_config_0(t);
                                      }
                                      t = term_b_20;
                                      return(t);
                                    }
                                    ATerm l_9 (ATerm t)
                                    {
                                      t = term_j_37;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, h_9, k_9, l_9);
                                    LocalPopChoice(i_37);
                                  }
                                else
                                  {
                                    t = h_37;
                                    {
                                      ATerm l_37 = t;
                                      int m_37 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm o_9 (ATerm t)
                                          {
                                            ATerm b_48 = NULL;
                                            b_48 = t;
                                            t_45 :
                                            if(!(match_string(b_48, "-CL")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm p_9 (ATerm t)
                                          {
                                            ATerm c_48 = NULL;
                                            ATerm d_48 = NULL;
                                            d_48 = t;
                                            if(((c_48 != NULL) && (c_48 != d_48)))
                                              _fail(d_48);
                                            else
                                              c_48 = d_48;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, term_c_15, (ATerm) ATinsert(ATempty, not_null(c_48)));
                                              t = extend_config_0(t);
                                            }
                                            t = term_b_20;
                                            return(t);
                                          }
                                          ATerm s_9 (ATerm t)
                                          {
                                            t = term_n_37;
                                            return(t);
                                          }
                                          t = ArgOption_3(t, o_9, p_9, s_9);
                                          LocalPopChoice(m_37);
                                        }
                                      else
                                        {
                                          t = l_37;
                                          {
                                            ATerm o_37 = t;
                                            int p_37 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm t_9 (ATerm t)
                                                {
                                                  ATerm e_48 = NULL;
                                                  e_48 = t;
                                                  v_45 :
                                                  if(!(match_string(e_48, "-c")))
                                                    {
                                                      _fail(t);
                                                    }
                                                  return(t);
                                                }
                                                ATerm w_9 (ATerm t)
                                                {
                                                  t = term_s_37;
                                                  t = set_config_0(t);
                                                  t = term_b_20;
                                                  return(t);
                                                }
                                                ATerm x_9 (ATerm t)
                                                {
                                                  t = term_t_37;
                                                  return(t);
                                                }
                                                t = Option_3(t, t_9, w_9, x_9);
                                                LocalPopChoice(p_37);
                                              }
                                            else
                                              {
                                                t = o_37;
                                                {
                                                  ATerm x_37 = t;
                                                  int y_37 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm a_10 (ATerm t)
                                                      {
                                                        ATerm f_48 = NULL;
                                                        f_48 = t;
                                                        y_45 :
                                                        if(!(match_string(f_48, "--ast")))
                                                          {
                                                            _fail(t);
                                                          }
                                                        return(t);
                                                      }
                                                      ATerm b_10 (ATerm t)
                                                      {
                                                        t = term_z_37;
                                                        t = set_config_0(t);
                                                        t = term_b_20;
                                                        return(t);
                                                      }
                                                      ATerm e_10 (ATerm t)
                                                      {
                                                        t = term_e_38;
                                                        return(t);
                                                      }
                                                      t = Option_3(t, a_10, b_10, e_10);
                                                      LocalPopChoice(y_37);
                                                    }
                                                  else
                                                    {
                                                      t = x_37;
                                                      {
                                                        ATerm f_38 = t;
                                                        int g_38 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm f_10 (ATerm t)
                                                            {
                                                              ATerm g_48 = NULL;
                                                              g_48 = t;
                                                              z_45 :
                                                              if(!(match_string(g_48, "-F")))
                                                                {
                                                                  _fail(t);
                                                                }
                                                              return(t);
                                                            }
                                                            ATerm i_10 (ATerm t)
                                                            {
                                                              t = term_h_38;
                                                              t = set_config_0(t);
                                                              t = term_b_20;
                                                              return(t);
                                                            }
                                                            ATerm j_10 (ATerm t)
                                                            {
                                                              t = term_i_38;
                                                              return(t);
                                                            }
                                                            t = Option_3(t, f_10, i_10, j_10);
                                                            LocalPopChoice(g_38);
                                                          }
                                                        else
                                                          {
                                                            t = f_38;
                                                            {
                                                              ATerm m_38 = t;
                                                              int n_38 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm m_10 (ATerm t)
                                                                  {
                                                                    ATerm h_48 = NULL;
                                                                    h_48 = t;
                                                                    a_46 :
                                                                    if(!(match_string(h_48, "--keep")))
                                                                      {
                                                                        _fail(t);
                                                                      }
                                                                    return(t);
                                                                  }
                                                                  ATerm n_10 (ATerm t)
                                                                  {
                                                                    ATerm i_48 = NULL;
                                                                    ATerm j_48 = NULL;
                                                                    t = string_to_int_0(t);
                                                                    {
                                                                      j_48 = t;
                                                                      if(((i_48 != NULL) && (i_48 != j_48)))
                                                                        _fail(j_48);
                                                                      else
                                                                        i_48 = j_48;
                                                                    }
                                                                    {
                                                                      t = (ATerm) ATmakeAppl(sym__2, term_m_19, not_null(i_48));
                                                                      t = set_config_0(t);
                                                                    }
                                                                    t = term_b_20;
                                                                    return(t);
                                                                  }
                                                                  ATerm q_10 (ATerm t)
                                                                  {
                                                                    t = term_q_38;
                                                                    return(t);
                                                                  }
                                                                  t = ArgOption_3(t, m_10, n_10, q_10);
                                                                  LocalPopChoice(n_38);
                                                                }
                                                              else
                                                                {
                                                                  t = m_38;
                                                                  {
                                                                    ATerm r_38 = t;
                                                                    int s_38 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm r_10 (ATerm t)
                                                                        {
                                                                          ATerm k_48 = NULL;
                                                                          k_48 = t;
                                                                          c_46 :
                                                                          if(!(match_string(k_48, "--fusion")))
                                                                            {
                                                                              _fail(t);
                                                                            }
                                                                          return(t);
                                                                        }
                                                                        ATerm u_10 (ATerm t)
                                                                        {
                                                                          t = term_t_38;
                                                                          t = toggle_config_0(t);
                                                                          t = term_b_20;
                                                                          return(t);
                                                                        }
                                                                        ATerm v_10 (ATerm t)
                                                                        {
                                                                          t = term_u_38;
                                                                          return(t);
                                                                        }
                                                                        t = Option_3(t, r_10, u_10, v_10);
                                                                        LocalPopChoice(s_38);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = r_38;
                                                                        {
                                                                          ATerm v_38 = t;
                                                                          int w_38 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              ATerm w_10 (ATerm t)
                                                                              {
                                                                                ATerm l_48 = NULL;
                                                                                l_48 = t;
                                                                                i_46 :
                                                                                if(!(match_string(l_48, "--trace-all")))
                                                                                  {
                                                                                    _fail(t);
                                                                                  }
                                                                                return(t);
                                                                              }
                                                                              ATerm b_11 (ATerm t)
                                                                              {
                                                                                t = term_y_38;
                                                                                t = set_config_0(t);
                                                                                t = term_b_20;
                                                                                return(t);
                                                                              }
                                                                              ATerm c_11 (ATerm t)
                                                                              {
                                                                                t = term_z_38;
                                                                                return(t);
                                                                              }
                                                                              t = Option_3(t, w_10, b_11, c_11);
                                                                              LocalPopChoice(w_38);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = v_38;
                                                                              {
                                                                                ATerm a_39 = t;
                                                                                int b_39 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm d_11 (ATerm t)
                                                                                    {
                                                                                      ATerm m_48 = NULL;
                                                                                      m_48 = t;
                                                                                      j_46 :
                                                                                      if(!(match_string(m_48, "-t")))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm g_11 (ATerm t)
                                                                                    {
                                                                                      ATerm n_48 = NULL;
                                                                                      ATerm o_48 = NULL;
                                                                                      o_48 = t;
                                                                                      if(((n_48 != NULL) && (n_48 != o_48)))
                                                                                        _fail(o_48);
                                                                                      else
                                                                                        n_48 = o_48;
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym__2, term_c_39, (ATerm) ATinsert(ATempty, not_null(n_48)));
                                                                                        t = extend_config_0(t);
                                                                                      }
                                                                                      t = term_b_20;
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm h_11 (ATerm t)
                                                                                    {
                                                                                      t = term_g_39;
                                                                                      return(t);
                                                                                    }
                                                                                    t = ArgOption_3(t, d_11, g_11, h_11);
                                                                                    LocalPopChoice(b_39);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = a_39;
                                                                                    {
                                                                                      ATerm h_39 = t;
                                                                                      int i_39 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm i_11 (ATerm t)
                                                                                          {
                                                                                            ATerm p_48 = NULL;
                                                                                            p_48 = t;
                                                                                            l_46 :
                                                                                            if(!(match_string(p_48, "--verbose")))
                                                                                              {
                                                                                                _fail(t);
                                                                                              }
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm m_11 (ATerm t)
                                                                                          {
                                                                                            ATerm q_48 = NULL;
                                                                                            ATerm r_48 = NULL;
                                                                                            t = string_to_int_0(t);
                                                                                            {
                                                                                              r_48 = t;
                                                                                              if(((q_48 != NULL) && (q_48 != r_48)))
                                                                                                _fail(r_48);
                                                                                              else
                                                                                                q_48 = r_48;
                                                                                            }
                                                                                            {
                                                                                              t = (ATerm) ATmakeAppl(sym__2, term_w_14, not_null(q_48));
                                                                                              t = set_config_0(t);
                                                                                            }
                                                                                            t = term_b_20;
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm p_11 (ATerm t)
                                                                                          {
                                                                                            t = term_j_39;
                                                                                            return(t);
                                                                                          }
                                                                                          t = ArgOption_3(t, i_11, m_11, p_11);
                                                                                          LocalPopChoice(i_39);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = h_39;
                                                                                          {
                                                                                            ATerm k_39 = t;
                                                                                            int m_39 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm q_11 (ATerm t)
                                                                                                {
                                                                                                  ATerm s_48 = NULL;
                                                                                                  s_48 = t;
                                                                                                  n_46 :
                                                                                                  if(!(match_string(s_48, "-S")))
                                                                                                    {
                                                                                                      if(!(match_string(s_48, "--silent")))
                                                                                                        {
                                                                                                          _fail(t);
                                                                                                        }
                                                                                                    }
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm r_11 (ATerm t)
                                                                                                {
                                                                                                  t = term_n_39;
                                                                                                  t = set_config_0(t);
                                                                                                  t = term_b_20;
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm s_11 (ATerm t)
                                                                                                {
                                                                                                  t = term_o_39;
                                                                                                  return(t);
                                                                                                }
                                                                                                t = Option_3(t, q_11, r_11, s_11);
                                                                                                LocalPopChoice(m_39);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = k_39;
                                                                                                {
                                                                                                  ATerm p_39 = t;
                                                                                                  int r_39 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      ATerm x_11 (ATerm t)
                                                                                                      {
                                                                                                        ATerm t_48 = NULL;
                                                                                                        t_48 = t;
                                                                                                        o_46 :
                                                                                                        if(!(match_string(t_48, "-h")))
                                                                                                          {
                                                                                                            if(!(match_string(t_48, "--help")))
                                                                                                              {
                                                                                                                _fail(t);
                                                                                                              }
                                                                                                          }
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm y_11 (ATerm t)
                                                                                                      {
                                                                                                        t = term_t_39;
                                                                                                        t = set_config_0(t);
                                                                                                        t = term_b_20;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm z_11 (ATerm t)
                                                                                                      {
                                                                                                        t = term_u_39;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      t = Option_3(t, x_11, y_11, z_11);
                                                                                                      LocalPopChoice(r_39);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = p_39;
                                                                                                      {
                                                                                                        ATerm x_39 = t;
                                                                                                        int y_39 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm a_12 (ATerm t)
                                                                                                            {
                                                                                                              ATerm u_48 = NULL;
                                                                                                              u_48 = t;
                                                                                                              p_46 :
                                                                                                              if(!(match_string(u_48, "--man")))
                                                                                                                {
                                                                                                                  _fail(t);
                                                                                                                }
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm f_12 (ATerm t)
                                                                                                            {
                                                                                                              t = term_a_40;
                                                                                                              t = set_config_0(t);
                                                                                                              t = term_b_20;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm g_12 (ATerm t)
                                                                                                            {
                                                                                                              t = term_b_40;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            t = Option_3(t, a_12, f_12, g_12);
                                                                                                            LocalPopChoice(y_39);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = x_39;
                                                                                                            {
                                                                                                              ATerm h_12 (ATerm t)
                                                                                                              {
                                                                                                                ATerm v_48 = NULL;
                                                                                                                v_48 = t;
                                                                                                                q_46 :
                                                                                                                if(!(match_string(v_48, "-v")))
                                                                                                                  {
                                                                                                                    if(!(match_string(v_48, "--version")))
                                                                                                                      {
                                                                                                                        _fail(t);
                                                                                                                      }
                                                                                                                  }
                                                                                                                return(t);
                                                                                                              }
                                                                                                              ATerm i_12 (ATerm t)
                                                                                                              {
                                                                                                                t = term_e_40;
                                                                                                                t = set_config_0(t);
                                                                                                                t = term_b_20;
                                                                                                                return(t);
                                                                                                              }
                                                                                                              ATerm j_12 (ATerm t)
                                                                                                              {
                                                                                                                t = term_f_40;
                                                                                                                return(t);
                                                                                                              }
                                                                                                              t = Option_3(t, h_12, i_12, j_12);
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm h_49 = NULL;
  h_49 = t;
  t = SSL_table_destroy(not_null(h_49));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm l_49 = NULL,m_49 = NULL,n_49 = NULL;
  l_49 = t;
  k_49 :
  if(((ATgetType(l_49) == AT_LIST) && ATisEmpty(l_49)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(l_49) == AT_LIST) && !(ATisEmpty(l_49))))
        {
          m_49 = ATgetFirst((ATermList) l_49);
          n_49 = (ATerm) ATgetNext((ATermList) l_49);
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
  ATerm g_40;
  g_40 = t;
  {
    ATerm q_49 = NULL;
    ATerm t_49 = NULL;
    ATerm h_40 = t;
    int k_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(k_40);
      }
    else
      {
        t = h_40;
        {
          ATerm r_49 = NULL;
          ATerm s_49 = NULL;
          s_49 = t;
          if(((r_49 != NULL) && (r_49 != s_49)))
            _fail(s_49);
          else
            r_49 = s_49;
          t = (ATerm) ATinsert(ATempty, not_null(r_49));
        }
      }
    {
      t_49 = t;
      if(((q_49 != NULL) && (q_49 != t_49)))
        _fail(t_49);
      else
        q_49 = t_49;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_25, not_null(q_49));
      t = printnl_0(t);
    }
  }
  t = g_40;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_0 (ATerm))
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_40), term_j_30), term_x_40), term_v_40), term_u_40), term_j_30), term_t_40), term_s_40), term_r_40), term_q_40), term_p_40), term_o_40), term_n_40), term_m_40), term_l_40);
  return(t);
}
ATerm map_1 (ATerm t, ATerm q_71 (ATerm))
{
  ATerm w_49 (ATerm t)
  {
    ATerm z_40 = t;
    int c_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(c_41);
      }
    else
      {
        t = z_40;
        t = Cons_2(t, q_71, w_49);
      }
    return(t);
  }
  t = w_49(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm d_50 = NULL,e_50 = NULL,f_50 = NULL;
  f_50 = t;
  c_50 :
  if(((ATgetType(f_50) == AT_LIST) && !(ATisEmpty(f_50))))
    {
      d_50 = ATgetFirst((ATermList) f_50);
      e_50 = (ATerm) ATgetNext((ATermList) f_50);
      {
        ATerm i_50 = NULL;
        t = not_null(e_50);
        {
          ATerm d_41;
          d_41 = t;
          {
            ATerm j_50 = NULL,l_50 = NULL,n_50 = NULL;
            ATerm f_41;
            f_41 = t;
            {
              ATerm k_50 = NULL;
              t = j_0(t);
              {
                k_50 = t;
                if(((j_50 != NULL) && (j_50 != k_50)))
                  _fail(k_50);
                else
                  j_50 = k_50;
              }
            }
            t = f_41;
            {
              ATerm m_50 = NULL;
              t = not_null(d_50);
              {
                t = i_0(t);
                {
                  m_50 = t;
                  if(((l_50 != NULL) && (l_50 != m_50)))
                    _fail(m_50);
                  else
                    l_50 = m_50;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(j_50)), not_null(l_50));
                {
                  n_50 = t;
                  if(((i_50 != NULL) && (i_50 != n_50)))
                    _fail(n_50);
                  else
                    i_50 = n_50;
                }
              }
            }
          }
          t = d_41;
          {
            ATerm m_12 (ATerm t)
            {
              t = not_null(i_50);
              return(t);
            }
            t = reverse_acc_2(t, i_0, m_12);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(f_50) == AT_LIST) && ATisEmpty(f_50)))
        {
          {
            t = term_b_20;
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
  ATerm r_12 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, r_12);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm h_0 (ATerm))
{
  ATerm i_51 = NULL;
  ATerm m_51 = NULL;
  t = term_b_20;
  {
    t = h_0(t);
    {
      m_51 = t;
      if(((i_51 != NULL) && (i_51 != m_51)))
        _fail(m_51);
      else
        i_51 = m_51;
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_41), not_null(i_51)), term_r_41), term_j_30), term_j_41), term_j_30), term_i_41), term_h_41), term_j_30), term_g_41);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm h_58 (ATerm))
{
  ATerm c_52 = NULL,d_52 = NULL;
  c_52 = t;
  b_52 :
  if(match_cons(c_52, sym_Program_1))
    {
      d_52 = ATgetArgument(c_52, 0);
      {
        ATerm i_52 = NULL,k_52 = NULL;
        ATerm j_52 = NULL;
        t = SSLgetAnnotations(not_null(c_52));
        {
          j_52 = t;
          if(((i_52 != NULL) && (i_52 != j_52)))
            _fail(j_52);
          else
            i_52 = j_52;
        }
        {
          t = not_null(d_52);
          {
            ATerm m_52 = NULL;
            t = h_58(t);
            {
              k_52 = t;
              {
                ATerm n_52 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(k_52)), not_null(i_52));
                {
                  n_52 = t;
                  if(((m_52 != NULL) && (m_52 != n_52)))
                    _fail(n_52);
                  else
                    m_52 = n_52;
                }
                t = not_null(m_52);
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
  ATerm w_52 = NULL;
  ATerm t_41 = t;
  int v_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_52 = NULL;
      t = term_w_41;
      {
        t = get_config_0(t);
        {
          x_52 = t;
          if(((w_52 != NULL) && (w_52 != x_52)))
            _fail(x_52);
          else
            w_52 = x_52;
        }
      }
      LocalPopChoice(v_41);
    }
  else
    {
      t = t_41;
      {
        ATerm s_12 (ATerm t)
        {
          ATerm t_12 (ATerm t)
          {
            ATerm y_52 = NULL;
            y_52 = t;
            if(((w_52 != NULL) && (w_52 != y_52)))
              _fail(y_52);
            else
              w_52 = y_52;
            return(t);
          }
          t = Program_1(t, t_12);
          return(t);
        }
        t = fetch_1(t, s_12);
      }
    }
  {
    ATerm x_41 = t;
    int y_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_12 (ATerm t)
        {
          t = not_null(w_52);
          return(t);
        }
        t = short_description_1(t, u_12);
        t = echo_0(t);
        LocalPopChoice(y_41);
      }
    else
      {
        t = x_41;
        {
        }
      }
    {
      t = term_z_41;
      {
        t = echo_0(t);
        {
          t = term_c_42;
          {
            t = table_get_0(t);
            {
              ATerm v_12 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = reverse_acc_2(t, _id, v_12);
              {
                ATerm w_12 (ATerm t)
                {
                  ATerm z_52 = NULL;
                  ATerm a_53 = NULL;
                  a_53 = t;
                  if(((z_52 != NULL) && (z_52 != a_53)))
                    _fail(a_53);
                  else
                    z_52 = a_53;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_52)), term_e_42);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, w_12);
                {
                  ATerm f_42 = t;
                  int g_42 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm b_53 = NULL;
                      ATerm c_53 = NULL;
                      ATerm x_12 (ATerm t)
                      {
                        t = not_null(w_52);
                        return(t);
                      }
                      t = long_description_1(t, x_12);
                      {
                        c_53 = t;
                        if(((b_53 != NULL) && (b_53 != c_53)))
                          _fail(c_53);
                        else
                          b_53 = c_53;
                      }
                      {
                        t = (ATerm) ATinsert(CheckATermList(not_null(b_53)), term_j_30);
                        t = echo_0(t);
                      }
                      LocalPopChoice(g_42);
                    }
                  else
                    {
                      t = f_42;
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
  ATerm h_42;
  h_42 = t;
  {
    ATerm i_53 = NULL;
    ATerm j_53 = NULL;
    j_53 = t;
    if(((i_53 != NULL) && (i_53 != j_53)))
      _fail(j_53);
    else
      i_53 = j_53;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_l_15, (ATerm) ATinsert(ATempty, not_null(i_53)));
      t = printnl_0(t);
    }
  }
  t = h_42;
  return(t);
}
ATerm say_1 (ATerm t, ATerm q_82 (ATerm))
{
  ATerm i_42;
  i_42 = t;
  {
    t = q_82(t);
    t = debug_0(t);
  }
  t = i_42;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm i_58 (ATerm))
{
  ATerm s_53 = NULL,t_53 = NULL;
  s_53 = t;
  r_53 :
  if(match_cons(s_53, sym_Undefined_1))
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
            t = i_58(t);
            {
              y_53 = t;
              {
                ATerm b_54 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(y_53)), not_null(w_53));
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
ATerm fetch_1 (ATerm t, ATerm z_71 (ATerm))
{
  ATerm g_54 (ATerm t)
  {
    ATerm j_42 = t;
    int k_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, z_71, _id);
        LocalPopChoice(k_42);
      }
    else
      {
        t = j_42;
        t = Cons_2(t, _id, g_54);
      }
    return(t);
  }
  t = g_54(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm o_86 (ATerm))
{
  t = fetch_1(t, o_86);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm l_54 = NULL;
  l_54 = t;
  k_54 :
  if(match_cons(l_54, sym_Help_0))
    {
      ATerm n_54 = NULL,p_54 = NULL;
      ATerm p_42;
      p_42 = t;
      {
        ATerm o_54 = NULL;
        t = SSLgetAnnotations(not_null(l_54));
        {
          o_54 = t;
          if(((n_54 != NULL) && (n_54 != o_54)))
            _fail(o_54);
          else
            n_54 = o_54;
        }
      }
      t = p_42;
      {
        ATerm q_54 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(n_54));
        {
          q_54 = t;
          if(((p_54 != NULL) && (p_54 != q_54)))
            _fail(q_54);
          else
            p_54 = q_54;
        }
        t = not_null(p_54);
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
  ATerm w_54 = NULL,x_54 = NULL,y_54 = NULL;
  w_54 = t;
  v_54 :
  if(match_cons(w_54, sym__2))
    {
      x_54 = ATgetArgument(w_54, 0);
      y_54 = ATgetArgument(w_54, 1);
      t = SSL_table_get(not_null(x_54), not_null(y_54));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm f_55 = NULL,g_55 = NULL,h_55 = NULL,i_55 = NULL;
  f_55 = t;
  e_55 :
  if(match_cons(f_55, sym__3))
    {
      g_55 = ATgetArgument(f_55, 0);
      h_55 = ATgetArgument(f_55, 1);
      i_55 = ATgetArgument(f_55, 2);
      {
        ATerm q_42;
        q_42 = t;
        {
          ATerm m_55 = NULL;
          ATerm n_55 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_55), not_null(h_55));
          {
            ATerm v_42 = t;
            int w_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(w_42);
              }
            else
              {
                t = v_42;
                t = (ATerm) ATempty;
              }
            {
              n_55 = t;
              if(((m_55 != NULL) && (m_55 != n_55)))
                _fail(n_55);
              else
                m_55 = n_55;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(g_55), not_null(h_55), (ATerm) ATinsert(CheckATermList(not_null(m_55)), not_null(i_55)));
            t = table_put_0(t);
          }
        }
        t = q_42;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm t_87 (ATerm))
{
  ATerm r_55 = NULL;
  ATerm s_55 = NULL;
  t = term_b_20;
  {
    t = t_87(t);
    {
      s_55 = t;
      if(((r_55 != NULL) && (r_55 != s_55)))
        _fail(s_55);
      else
        r_55 = s_55;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_a_42, term_b_42, not_null(r_55));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm y_55 = NULL,z_55 = NULL,a_56 = NULL;
  y_55 = t;
  x_55 :
  if(match_string(y_55, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(y_55) == AT_LIST) && !(ATisEmpty(y_55))))
        {
          z_55 = ATgetFirst((ATermList) y_55);
          a_56 = (ATerm) ATgetNext((ATermList) y_55);
          {
            ATerm d_56 = NULL;
            ATerm x_42;
            x_42 = t;
            {
              t = not_null(z_55);
              t = a_0(t);
            }
            t = x_42;
            {
              ATerm e_56 = NULL;
              t = term_b_20;
              {
                t = d_0(t);
                {
                  e_56 = t;
                  if(((d_56 != NULL) && (d_56 != e_56)))
                    _fail(e_56);
                  else
                    d_56 = e_56;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(a_56)), not_null(d_56));
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
  ATerm b_13 (ATerm t)
  {
    ATerm j_56 = NULL;
    j_56 = t;
    i_56 :
    if(!(match_string(j_56, "--help")))
      {
        if(!(match_string(j_56, "-h")))
          {
            if(!(match_string(j_56, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm e_13 (ATerm t)
  {
    t = term_t_39;
    {
      t = set_config_0(t);
      t = term_y_42;
    }
    return(t);
  }
  ATerm h_13 (ATerm t)
  {
    t = term_z_42;
    return(t);
  }
  t = Option_3(t, b_13, e_13, h_13);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm m_56 = NULL,n_56 = NULL,o_56 = NULL;
  m_56 = t;
  l_56 :
  if(((ATgetType(m_56) == AT_LIST) && !(ATisEmpty(m_56))))
    {
      n_56 = ATgetFirst((ATermList) m_56);
      o_56 = (ATerm) ATgetNext((ATermList) m_56);
      t = (ATerm) ATinsert(CheckATermList(not_null(o_56)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(n_56)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm r_87 (ATerm))
{
  ATerm a_43;
  a_43 = t;
  {
    ATerm b_43 = t;
    int c_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_d_43;
        t = r_87(t);
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
    ATerm i_13 (ATerm t)
    {
      ATerm w_56 = NULL;
      ATerm e_43;
      e_43 = t;
      {
        ATerm u_56 = NULL;
        ATerm v_56 = NULL;
        v_56 = t;
        if(((u_56 != NULL) && (u_56 != v_56)))
          _fail(v_56);
        else
          u_56 = v_56;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_w_41, not_null(u_56));
          t = set_config_0(t);
        }
      }
      t = e_43;
      {
        ATerm x_56 = NULL;
        x_56 = t;
        if(((w_56 != NULL) && (w_56 != x_56)))
          _fail(x_56);
        else
          w_56 = x_56;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(w_56));
      }
      return(t);
    }
    ATerm j_13 (ATerm t)
    {
      ATerm f_43 = t;
      int g_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_43 = t;
          int i_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(i_43);
            }
          else
            {
              t = h_43;
              {
                t = r_87(t);
                t = Cons_2(t, _id, j_13);
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
    t = Cons_2(t, i_13, j_13);
  }
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm q_87 (ATerm))
{
  ATerm c_57 = NULL;
  ATerm j_43;
  j_43 = t;
  {
    t = term_k_43;
    t = table_put_0(t);
  }
  t = j_43;
  {
    ATerm k_13 (ATerm t)
    {
      ATerm l_43 = t;
      int m_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = q_87(t);
          LocalPopChoice(m_43);
        }
      else
        {
          t = l_43;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, k_13);
    {
      ATerm n_43 = t;
      int o_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_43;
          p_43 = t;
          {
            ATerm u_43 = t;
            int v_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_s_39;
                t = get_config_0(t);
                LocalPopChoice(v_43);
              }
            else
              {
                t = u_43;
                t = fetch_1(t, Help_0);
              }
          }
          t = p_43;
          {
            t = system_usage_0(t);
            {
              t = term_n_14;
              t = exit_0(t);
            }
          }
          LocalPopChoice(o_43);
        }
      else
        {
          t = n_43;
          {
            ATerm y_43 = t;
            int z_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_13 (ATerm t)
                {
                  ATerm o_13 (ATerm t)
                  {
                    ATerm d_57 = NULL;
                    d_57 = t;
                    if(((c_57 != NULL) && (c_57 != d_57)))
                      _fail(d_57);
                    else
                      c_57 = d_57;
                    return(t);
                  }
                  t = Undefined_1(t, o_13);
                  return(t);
                }
                t = fetch_1(t, l_13);
                {
                  ATerm p_13 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_57)), term_a_44);
                    return(t);
                  }
                  t = say_1(t, p_13);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_z_21;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(z_43);
              }
            else
              {
                t = y_43;
                {
                }
              }
          }
        }
      {
        ATerm b_44;
        b_44 = t;
        {
          t = term_a_42;
          t = table_destroy_0(t);
        }
        t = b_44;
      }
    }
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm h_57 = NULL,i_57 = NULL,j_57 = NULL;
  ATerm c_44;
  c_44 = t;
  {
    ATerm k_57 = NULL,l_57 = NULL,m_57 = NULL,n_57 = NULL;
    k_57 = t;
    g_57 :
    if(match_cons(k_57, sym__3))
      {
        l_57 = ATgetArgument(k_57, 0);
        m_57 = ATgetArgument(k_57, 1);
        n_57 = ATgetArgument(k_57, 2);
        {
          if(((h_57 != NULL) && (h_57 != l_57)))
            _fail(l_57);
          else
            h_57 = l_57;
          {
            if(((i_57 != NULL) && (i_57 != m_57)))
              _fail(m_57);
            else
              i_57 = m_57;
            {
              if(((j_57 != NULL) && (j_57 != n_57)))
                _fail(n_57);
              else
                j_57 = n_57;
              t = SSL_table_put(not_null(h_57), not_null(i_57), not_null(j_57));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = c_44;
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm r_57 = NULL,s_57 = NULL,t_57 = NULL;
  r_57 = t;
  q_57 :
  if(match_cons(r_57, sym__2))
    {
      s_57 = ATgetArgument(r_57, 0);
      t_57 = ATgetArgument(r_57, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_p_29, not_null(s_57), not_null(t_57));
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
  ATerm d_44 = t;
  int e_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(e_44);
    }
  else
    {
      t = d_44;
      {
        ATerm z_57 = NULL,a_58 = NULL,b_58 = NULL;
        z_57 = t;
        y_57 :
        if(((ATgetType(z_57) == AT_LIST) && !(ATisEmpty(z_57))))
          {
            a_58 = ATgetFirst((ATermList) z_57);
            b_58 = (ATerm) ATgetNext((ATermList) z_57);
            {
              t = not_null(a_58);
              {
                ATerm q_13 (ATerm t)
                {
                  t = not_null(b_58);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, q_13);
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
  ATerm n_58 = NULL;
  ATerm p_58 = NULL;
  n_58 = t;
  {
    ATerm r_58 = NULL;
    ATerm t_58 = NULL,u_58 = NULL,v_58 = NULL;
    t = not_null(n_58);
    {
      r_58 = t;
      {
        t = SSL_explode_term(not_null(r_58));
        {
          t_58 = t;
          l_58 :
          if(match_cons(t_58, sym__2))
            {
              u_58 = ATgetArgument(t_58, 0);
              v_58 = ATgetArgument(t_58, 1);
              m_58 :
              if(match_string(u_58, ""))
                {
                  if(((p_58 != NULL) && (p_58 != v_58)))
                    _fail(v_58);
                  else
                    p_58 = v_58;
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
      t = not_null(p_58);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm d_59 = NULL;
  d_59 = t;
  c_59 :
  if(((ATgetType(d_59) == AT_LIST) && ATisEmpty(d_59)))
    {
      {
        ATerm f_59 = NULL,h_59 = NULL;
        ATerm j_44;
        j_44 = t;
        {
          ATerm g_59 = NULL;
          t = SSLgetAnnotations(not_null(d_59));
          {
            g_59 = t;
            if(((f_59 != NULL) && (f_59 != g_59)))
              _fail(g_59);
            else
              f_59 = g_59;
          }
        }
        t = j_44;
        {
          ATerm i_59 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(f_59));
          {
            i_59 = t;
            if(((h_59 != NULL) && (h_59 != i_59)))
              _fail(i_59);
            else
              h_59 = i_59;
          }
          t = not_null(h_59);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm f_72 (ATerm))
{
  ATerm m_59 (ATerm t)
  {
    ATerm k_44 = t;
    int l_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, m_59);
        LocalPopChoice(l_44);
      }
    else
      {
        t = k_44;
        {
          t = Nil_0(t);
          t = f_72(t);
        }
      }
    return(t);
  }
  t = m_59(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm p_59 = NULL,q_59 = NULL,r_59 = NULL;
  p_59 = t;
  o_59 :
  if(match_cons(p_59, sym__2))
    {
      q_59 = ATgetArgument(p_59, 0);
      r_59 = ATgetArgument(p_59, 1);
      {
        t = not_null(q_59);
        {
          ATerm v_13 (ATerm t)
          {
            t = not_null(r_59);
            return(t);
          }
          t = at_end_1(t, v_13);
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
  ATerm m_44 = t;
  int n_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(n_44);
    }
  else
    {
      t = m_44;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm e_52 (ATerm), ATerm f_52 (ATerm))
{
  ATerm b_60 = NULL,c_60 = NULL,d_60 = NULL;
  b_60 = t;
  a_60 :
  if(match_cons(b_60, sym__2))
    {
      c_60 = ATgetArgument(b_60, 0);
      d_60 = ATgetArgument(b_60, 1);
      {
        ATerm h_60 = NULL,j_60 = NULL;
        ATerm i_60 = NULL;
        t = SSLgetAnnotations(not_null(b_60));
        {
          i_60 = t;
          if(((h_60 != NULL) && (h_60 != i_60)))
            _fail(i_60);
          else
            h_60 = i_60;
        }
        {
          t = not_null(c_60);
          {
            ATerm l_60 = NULL;
            t = e_52(t);
            {
              j_60 = t;
              {
                t = not_null(d_60);
                {
                  ATerm n_60 = NULL;
                  t = f_52(t);
                  {
                    l_60 = t;
                    {
                      ATerm o_60 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(j_60), not_null(l_60)), not_null(h_60));
                      {
                        o_60 = t;
                        if(((n_60 != NULL) && (n_60 != o_60)))
                          _fail(o_60);
                        else
                          n_60 = o_60;
                      }
                      t = not_null(n_60);
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
    t = implode_string_0(t);
  }
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm v_60 = NULL;
  v_60 = t;
  t = SSL_implode_string(not_null(v_60));
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm n_53 (ATerm), ATerm o_53 (ATerm))
{
  ATerm e_61 = NULL,f_61 = NULL,g_61 = NULL;
  e_61 = t;
  d_61 :
  if(((ATgetType(e_61) == AT_LIST) && !(ATisEmpty(e_61))))
    {
      f_61 = ATgetFirst((ATermList) e_61);
      g_61 = (ATerm) ATgetNext((ATermList) e_61);
      {
        ATerm k_61 = NULL,m_61 = NULL;
        ATerm l_61 = NULL;
        t = SSLgetAnnotations(not_null(e_61));
        {
          l_61 = t;
          if(((k_61 != NULL) && (k_61 != l_61)))
            _fail(l_61);
          else
            k_61 = l_61;
        }
        {
          t = not_null(f_61);
          {
            ATerm o_61 = NULL;
            t = n_53(t);
            {
              m_61 = t;
              {
                t = not_null(g_61);
                {
                  ATerm q_61 = NULL;
                  t = o_53(t);
                  {
                    o_61 = t;
                    {
                      ATerm r_61 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(o_61)), not_null(m_61)), not_null(k_61));
                      {
                        r_61 = t;
                        if(((q_61 != NULL) && (q_61 != r_61)))
                          _fail(r_61);
                        else
                          q_61 = r_61;
                      }
                      t = not_null(q_61);
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
  ATerm y_61 = NULL;
  y_61 = t;
  t = SSL_explode_string(not_null(y_61));
  return(t);
}
ATerm get_path_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm q_44 = t;
    int r_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_62 (ATerm t)
        {
          ATerm s_44 = t;
          int x_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, d_62);
              LocalPopChoice(x_44);
            }
          else
            {
              t = s_44;
              {
                ATerm w_13 (ATerm t)
                {
                  ATerm c_62 = NULL;
                  c_62 = t;
                  b_62 :
                  if(!(match_int(c_62, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                ATerm x_13 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = Cons_2(t, w_13, x_13);
              }
            }
          return(t);
        }
        t = d_62(t);
        LocalPopChoice(r_44);
      }
    else
      {
        t = q_44;
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
  ATerm y_44;
  y_44 = t;
  {
    ATerm r_62 = NULL,t_62 = NULL,v_62 = NULL,x_62 = NULL,b_63 = NULL,f_63 = NULL,j_63 = NULL,n_63 = NULL;
    t = term_e_45;
    {
      t = set_config_0(t);
      {
        t = term_f_45;
        {
          t = set_config_0(t);
          {
            t = term_h_45;
            {
              t = set_config_0(t);
              {
                ATerm i_45;
                i_45 = t;
                {
                  ATerm s_62 = NULL;
                  t = term_k_45;
                  {
                    t = xtc_find_path_0(t);
                    {
                      s_62 = t;
                      if(((r_62 != NULL) && (r_62 != s_62)))
                        _fail(s_62);
                      else
                        r_62 = s_62;
                    }
                  }
                }
                t = i_45;
                {
                  ATerm m_45;
                  m_45 = t;
                  {
                    ATerm u_62 = NULL;
                    t = term_o_45;
                    {
                      t = xtc_find_path_0(t);
                      {
                        u_62 = t;
                        if(((t_62 != NULL) && (t_62 != u_62)))
                          _fail(u_62);
                        else
                          t_62 = u_62;
                      }
                    }
                  }
                  t = m_45;
                  {
                    ATerm w_62 = NULL;
                    t = term_q_45;
                    {
                      t = xtc_find_path_0(t);
                      {
                        w_62 = t;
                        if(((v_62 != NULL) && (v_62 != w_62)))
                          _fail(w_62);
                        else
                          v_62 = w_62;
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_n_25, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(v_62)), term_n_25), not_null(t_62)), term_n_25), not_null(r_62)), term_n_25));
                      {
                        t = set_config_0(t);
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_b_17, (ATerm) ATinsert(ATinsert(ATempty, term_u_45), term_s_45));
                          {
                            t = set_config_0(t);
                            {
                              ATerm w_45;
                              w_45 = t;
                              {
                                ATerm y_62 = NULL,a_63 = NULL;
                                ATerm z_62 = NULL;
                                t = term_x_45;
                                {
                                  t = xtc_find_path_0(t);
                                  {
                                    z_62 = t;
                                    if(((y_62 != NULL) && (y_62 != z_62)))
                                      _fail(z_62);
                                    else
                                      y_62 = z_62;
                                  }
                                }
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(y_62), term_b_46);
                                  {
                                    t = conc_strings_0(t);
                                    {
                                      a_63 = t;
                                      if(((x_62 != NULL) && (x_62 != a_63)))
                                        _fail(a_63);
                                      else
                                        x_62 = a_63;
                                    }
                                  }
                                }
                              }
                              t = w_45;
                              {
                                ATerm d_46;
                                d_46 = t;
                                {
                                  ATerm c_63 = NULL,e_63 = NULL;
                                  ATerm d_63 = NULL;
                                  t = term_x_45;
                                  {
                                    t = xtc_find_path_0(t);
                                    {
                                      d_63 = t;
                                      if(((c_63 != NULL) && (c_63 != d_63)))
                                        _fail(d_63);
                                      else
                                        c_63 = d_63;
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(c_63), term_b_46);
                                    {
                                      t = conc_strings_0(t);
                                      {
                                        e_63 = t;
                                        if(((b_63 != NULL) && (b_63 != e_63)))
                                          _fail(e_63);
                                        else
                                          b_63 = e_63;
                                      }
                                    }
                                  }
                                }
                                t = d_46;
                                {
                                  ATerm g_63 = NULL,i_63 = NULL;
                                  ATerm h_63 = NULL;
                                  t = term_e_46;
                                  {
                                    t = xtc_find_path_0(t);
                                    {
                                      h_63 = t;
                                      if(((g_63 != NULL) && (g_63 != h_63)))
                                        _fail(h_63);
                                      else
                                        g_63 = h_63;
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(g_63), term_b_46);
                                    {
                                      t = conc_strings_0(t);
                                      {
                                        i_63 = t;
                                        if(((f_63 != NULL) && (f_63 != i_63)))
                                          _fail(i_63);
                                        else
                                          f_63 = i_63;
                                      }
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_r_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(f_63)), term_n_25), not_null(b_63)), term_n_25), not_null(x_62)), term_n_25));
                                    {
                                      t = set_config_0(t);
                                      {
                                        ATerm f_46;
                                        f_46 = t;
                                        {
                                          ATerm k_63 = NULL,m_63 = NULL;
                                          ATerm l_63 = NULL;
                                          t = term_x_45;
                                          {
                                            t = xtc_find_path_0(t);
                                            {
                                              l_63 = t;
                                              if(((k_63 != NULL) && (k_63 != l_63)))
                                                _fail(l_63);
                                              else
                                                k_63 = l_63;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(k_63), term_g_46);
                                            {
                                              t = conc_strings_0(t);
                                              {
                                                m_63 = t;
                                                if(((j_63 != NULL) && (j_63 != m_63)))
                                                  _fail(m_63);
                                                else
                                                  j_63 = m_63;
                                              }
                                            }
                                          }
                                        }
                                        t = f_46;
                                        {
                                          ATerm o_63 = NULL,q_63 = NULL;
                                          ATerm p_63 = NULL;
                                          t = term_e_46;
                                          {
                                            t = xtc_find_path_0(t);
                                            {
                                              p_63 = t;
                                              if(((o_63 != NULL) && (o_63 != p_63)))
                                                _fail(p_63);
                                              else
                                                o_63 = p_63;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(o_63), term_g_46);
                                            {
                                              t = conc_strings_0(t);
                                              {
                                                q_63 = t;
                                                if(((n_63 != NULL) && (n_63 != q_63)))
                                                  _fail(q_63);
                                                else
                                                  n_63 = q_63;
                                              }
                                            }
                                          }
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, term_c_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_46), term_y_46), not_null(n_63)), term_h_46), term_m_46), term_k_46), not_null(j_63)), term_h_46));
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
  t = y_44;
  return(t);
}
ATerm command_line_options_0 (ATerm t)
{
  t = init_sc_config_0(t);
  {
    t = parse_options_1(t, sc_options_0);
    {
      ATerm a_47 = t;
      int b_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_64 = NULL;
          t = term_z_39;
          {
            t = get_config_0(t);
            {
              ATerm j_64 = NULL;
              t = term_c_47;
              {
                t = xtc_find_0(t);
                {
                  j_64 = t;
                  if(((i_64 != NULL) && (i_64 != j_64)))
                    _fail(j_64);
                  else
                    i_64 = j_64;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(i_64), term_u_25);
                {
                  t = copy_file_0(t);
                  {
                    t = term_n_14;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
          LocalPopChoice(b_47);
        }
      else
        {
          t = a_47;
          {
          }
        }
      {
        ATerm h_47 = t;
        int i_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_c_40;
            {
              t = get_config_0(t);
              {
                t = sc_version_0(t);
                {
                  t = term_n_14;
                  t = exit_0(t);
                }
              }
            }
            LocalPopChoice(i_47);
          }
        else
          {
            t = h_47;
            {
            }
          }
        {
          ATerm j_47 = t;
          int k_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_47;
              o_47 = t;
              {
                t = term_o_23;
                t = get_config_0(t);
              }
              t = o_47;
              LocalPopChoice(k_47);
            }
          else
            {
              t = j_47;
              {
                t = (ATerm) ATinsert(ATempty, term_p_47);
                t = fatal_error_0(t);
              }
            }
          {
            t = if_verbose2_1(t, sc_version_0);
            {
              ATerm z_13 (ATerm t)
              {
                ATerm q_47;
                q_47 = t;
                {
                  t = term_o_23;
                  {
                    t = get_config_0(t);
                    {
                      ATerm a_14 (ATerm t)
                      {
                        t = term_r_47;
                        return(t);
                      }
                      t = debug_1(t, a_14);
                    }
                  }
                }
                t = q_47;
                return(t);
              }
              t = if_verbose1_1(t, z_13);
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
  ATerm s_47 = t;
  int t_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = command_line_options_0(t);
      {
        ATerm b_14 (ATerm t)
        {
          ATerm c_14 (ATerm t)
          {
            ATerm q_64 = NULL;
            ATerm r_64 = NULL;
            r_64 = t;
            if(((q_64 != NULL) && (q_64 != r_64)))
              _fail(r_64);
            else
              q_64 = r_64;
            {
              t = (ATerm) ATmakeAppl(sym__2, term_l_15, (ATerm) ATinsert(CheckATermList(not_null(q_64)), term_u_47));
              t = printnl_0(t);
            }
            return(t);
          }
          t = if_verbose1_1(t, c_14);
          return(t);
        }
        t = profile_p__2(t, b_14, compile_0);
        {
          ATerm h_14 (ATerm t)
          {
            ATerm s_64 = NULL;
            ATerm t_64 = NULL;
            t = run_time_0(t);
            {
              t_64 = t;
              if(((s_64 != NULL) && (s_64 != t_64)))
                _fail(t_64);
              else
                s_64 = t_64;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, term_l_15, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_47), not_null(s_64)), term_v_47));
              t = printnl_0(t);
            }
            return(t);
          }
          t = if_verbose2_1(t, h_14);
          {
            t = term_n_14;
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
        ATerm u_64 = NULL;
        ATerm v_64 = NULL;
        t = run_time_0(t);
        {
          v_64 = t;
          if(((u_64 != NULL) && (u_64 != v_64)))
            _fail(v_64);
          else
            u_64 = v_64;
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_l_15, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_47), not_null(u_64)), term_w_48));
          {
            t = printnl_0(t);
            {
              t = term_z_21;
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
