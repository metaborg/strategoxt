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
ATerm term_l_48;
ATerm term_k_48;
ATerm term_j_48;
ATerm term_i_48;
ATerm term_c_48;
ATerm term_a_48;
ATerm term_q_47;
ATerm term_x_46;
ATerm term_w_46;
ATerm term_v_46;
ATerm term_p_46;
ATerm term_o_46;
ATerm term_i_46;
ATerm term_c_46;
ATerm term_w_45;
ATerm term_u_45;
ATerm term_q_45;
ATerm term_o_45;
ATerm term_m_45;
ATerm term_k_45;
ATerm term_h_45;
ATerm term_f_45;
ATerm term_e_45;
ATerm term_d_45;
ATerm term_c_45;
ATerm term_h_44;
ATerm term_p_43;
ATerm term_c_43;
ATerm term_y_42;
ATerm term_w_42;
ATerm term_d_42;
ATerm term_c_42;
ATerm term_b_42;
ATerm term_a_42;
ATerm term_z_41;
ATerm term_u_41;
ATerm term_k_41;
ATerm term_j_41;
ATerm term_i_41;
ATerm term_h_41;
ATerm term_g_41;
ATerm term_f_41;
ATerm term_a_41;
ATerm term_z_40;
ATerm term_y_40;
ATerm term_x_40;
ATerm term_w_40;
ATerm term_u_40;
ATerm term_t_40;
ATerm term_r_40;
ATerm term_q_40;
ATerm term_o_40;
ATerm term_n_40;
ATerm term_m_40;
ATerm term_l_40;
ATerm term_g_40;
ATerm term_f_40;
ATerm term_e_40;
ATerm term_b_40;
ATerm term_z_39;
ATerm term_y_39;
ATerm term_u_39;
ATerm term_t_39;
ATerm term_s_39;
ATerm term_p_39;
ATerm term_o_39;
ATerm term_l_39;
ATerm term_g_39;
ATerm term_f_39;
ATerm term_c_39;
ATerm term_b_39;
ATerm term_z_38;
ATerm term_w_38;
ATerm term_v_38;
ATerm term_l_38;
ATerm term_h_38;
ATerm term_g_38;
ATerm term_d_38;
ATerm term_c_38;
ATerm term_v_37;
ATerm term_u_37;
ATerm term_m_37;
ATerm term_i_37;
ATerm term_b_37;
ATerm term_x_36;
ATerm term_q_36;
ATerm term_j_36;
ATerm term_g_36;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_t_34;
ATerm term_g_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_u_33;
ATerm term_r_33;
ATerm term_m_33;
ATerm term_j_33;
ATerm term_h_33;
ATerm term_e_33;
ATerm term_z_32;
ATerm term_s_32;
ATerm term_g_32;
ATerm term_p_31;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_g_31;
ATerm term_e_31;
ATerm term_u_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_o_29;
ATerm term_m_29;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_g_27;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_y_23;
ATerm term_q_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_g_23;
ATerm term_d_23;
ATerm term_u_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_a_22;
ATerm term_x_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_z_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_e_20;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_i_19;
ATerm term_f_19;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_x_17;
ATerm term_s_17;
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
ATerm term_y_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_m_16;
ATerm term_c_16;
ATerm term_t_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_h_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_n_14;
void init_constant_terms (void)
{
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling C code", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("C-pretty.pp", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end: ", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize2", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize1", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize: ", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to ", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("frontend", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol(".fro", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("main strategy is: ", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol(".with-main", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (before frontend) written to ", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to ", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("infile", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(sym__2, term_q_23, term_u_22);
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("SC ", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2002 Eelco Visser <visser@acm.org>\n", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("This program is free software; you can redistribute it and/or modify\n", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("it under the terms of the GNU General Public License as published by\n", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("the Free Software Foundation; either version 2, or (at your option)\n", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("any later version.\n", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(sym__2, term_g_31, term_j_31);
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(sym__2, term_g_31, term_z_32);
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-i file            Main module to compile (required)\n", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f | --output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d\n", 0, ATtrue));
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(sym__2, term_t_15, term_j_20);
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(sym__2, term_u_21, term_j_20);
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeAppl(sym__2, term_f_19, term_j_20);
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(sym__2, term_h_18, term_j_20);
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all", 0, ATtrue));
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(sym__2, term_z_38, term_j_20);
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all        Instrument all definitions to print tracing information", 0, ATtrue));
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-t f               Instrument definition of f to print tracing information\n", 0, ATtrue));
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i        Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(sym__2, term_v_14, term_n_14);
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-S | --silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(sym__2, term_s_39, term_j_20);
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(sym__2, term_y_39, term_j_20);
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(sym__2, term_e_40, term_j_20);
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M\n", 0, ATtrue));
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_u_40));
  term_u_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that sc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(ATmakeSymbol("SC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeAppl(sym__2, term_a_42, term_b_42);
  ATprotect(&(term_d_42));
  term_d_42 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(sym__3, term_a_42, term_b_42, (ATerm) ATempty);
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_c_45));
  term_c_45 = (ATerm) ATmakeAppl(ATmakeSymbol("0.9beta8", 0, ATtrue));
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeAppl(sym__2, term_e_30, term_c_45);
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeAppl(sym__2, term_v_14, term_a_22);
  ATprotect(&(term_f_45));
  term_f_45 = (ATerm) ATmakeAppl(sym__2, term_r_19, term_n_14);
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeAppl(ATmakeSymbol("lib.rtree", 0, ATtrue));
  ATprotect(&(term_k_45));
  term_k_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego.rtree", 0, ATtrue));
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_o_45));
  term_o_45 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego.h>", 0, ATtrue));
  ATprotect(&(term_q_45));
  term_q_45 = (ATerm) ATmakeAppl(ATmakeSymbol("<ssl/stratego-lib.h>", 0, ATtrue));
  ATprotect(&(term_u_45));
  term_u_45 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS", 0, ATtrue));
  ATprotect(&(term_w_45));
  term_w_45 = (ATerm) ATmakeAppl(ATmakeSymbol("/include", 0, ATtrue));
  ATprotect(&(term_c_46));
  term_c_46 = (ATerm) ATmakeAppl(ATmakeSymbol("ATERM", 0, ATtrue));
  ATprotect(&(term_i_46));
  term_i_46 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib", 0, ATtrue));
  ATprotect(&(term_o_46));
  term_o_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue));
  ATprotect(&(term_p_46));
  term_p_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-lib.opt", 0, ATtrue));
  ATprotect(&(term_v_46));
  term_v_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego.opt", 0, ATtrue));
  ATprotect(&(term_w_46));
  term_w_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-lATerm-gcc", 0, ATtrue));
  ATprotect(&(term_x_46));
  term_x_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-lm", 0, ATtrue));
  ATprotect(&(term_q_47));
  term_q_47 = (ATerm) ATmakeAppl(ATmakeSymbol("sc-manual.txt", 0, ATtrue));
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_i_48));
  term_i_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_j_48));
  term_j_48 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_k_48));
  term_k_48 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_48));
  term_l_48 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue));
}
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm w_78 (ATerm), ATerm x_78 (ATerm));
ATerm crush_2 (ATerm, ATerm u_77 (ATerm), ATerm v_77 (ATerm));
ATerm run_time_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm d_86 (ATerm));
ATerm Snd_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm link_object_code_0 (ATerm);
ATerm c_to_object_code_0 (ATerm);
ATerm c_compile_0 (ATerm);
ATerm rename_file_0 (ATerm);
ATerm rename_to_1 (ATerm, ATerm r_0 (ATerm));
ATerm xtc_transform_1 (ATerm, ATerm v_92 (ATerm));
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
ATerm if_keep2_1 (ATerm, ATerm r_86 (ATerm));
ATerm frontend_0 (ATerm);
ATerm if_keep3_1 (ATerm, ATerm s_86 (ATerm));
ATerm AddMain_1 (ATerm, ATerm q_64 (ATerm));
ATerm xtc_io_transform_1 (ATerm, ATerm f_93 (ATerm));
ATerm add_main_0 (ATerm);
ATerm get_outfile_1 (ATerm, ATerm p_64 (ATerm));
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
ATerm xtc_transform_term_2 (ATerm, ATerm d_93 (ATerm), ATerm e_93 (ATerm));
ATerm close_file_0 (ATerm);
ATerm call_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm u_92 (ATerm));
ATerm assert_1 (ATerm, ATerm z_82 (ATerm));
ATerm obsolete_1 (ATerm, ATerm n_83 (ATerm));
ATerm open_file_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm o_0 (ATerm), ATerm p_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm j_59 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm w_92 (ATerm), ATerm x_92 (ATerm));
ATerm if_verbose3_1 (ATerm, ATerm e_86 (ATerm));
ATerm basename_1 (ATerm, ATerm s_81 (ATerm));
ATerm basename_0 (ATerm);
ATerm get_infile_0 (ATerm);
ATerm parse_0 (ATerm);
ATerm front_end_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm w_82 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm b_65 (ATerm), ATerm c_65 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm v_82 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm k_92 (ATerm));
ATerm xtc_input_1 (ATerm, ATerm n_92 (ATerm));
ATerm compile_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm c_86 (ATerm));
ATerm ticks_to_seconds_0 (ATerm);
ATerm self_children_sys_time_0 (ATerm);
ATerm add_0 (ATerm);
ATerm self_children_user_time_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm diff_times_0 (ATerm);
ATerm times_0 (ATerm);
ATerm profile_p__2 (ATerm, ATerm y_83 (ATerm), ATerm z_83 (ATerm));
ATerm debug_1 (ATerm, ATerm g_83 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm sc_announce_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm sc_version_0 (ATerm);
ATerm try_1 (ATerm, ATerm r_64 (ATerm));
ATerm copy_file_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm g_86 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm f_86 (ATerm));
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose6_1 (ATerm, ATerm h_86 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm j_78 (ATerm), ATerm k_78 (ATerm));
ATerm union_1 (ATerm, ATerm f_78 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm p_89 (ATerm));
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
ATerm map_1 (ATerm, ATerm i_72 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm h_0 (ATerm));
ATerm Program_1 (ATerm, ATerm a_59 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm h_83 (ATerm));
ATerm Undefined_1 (ATerm, ATerm b_59 (ATerm));
ATerm fetch_1 (ATerm, ATerm r_72 (ATerm));
ATerm option_defined_1 (ATerm, ATerm f_87 (ATerm));
ATerm Help_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm k_88 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm i_88 (ATerm));
ATerm parse_options_1 (ATerm, ATerm h_88 (ATerm));
ATerm table_put_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm Nil_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm x_72 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm _2 (ATerm, ATerm x_52 (ATerm), ATerm y_52 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm g_54 (ATerm), ATerm h_54 (ATerm));
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
        ATerm h_14;
        h_14 = t;
        t = SSL_printnl(not_null(w_1), not_null(x_1));
        t = h_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm w_78 (ATerm), ATerm x_78 (ATerm))
{
  ATerm i_14 = t;
  int j_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = w_78(t);
      LocalPopChoice(j_14);
    }
  else
    {
      t = i_14;
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
                t = foldr_2(t, w_78, x_78);
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
                t = x_78(t);
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
ATerm crush_2 (ATerm t, ATerm u_77 (ATerm), ATerm v_77 (ATerm))
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
      t = foldr_2(t, u_77, v_77);
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
ATerm if_verbose2_1 (ATerm t, ATerm d_86 (ATerm))
{
  ATerm q_14 = t;
  int t_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_14;
      u_14 = t;
      {
        ATerm g_4 = NULL;
        ATerm h_4 = NULL;
        t = term_v_14;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_4), term_w_14);
          t = geq_0(t);
        }
      }
      t = u_14;
      t = d_86(t);
      LocalPopChoice(t_14);
    }
  else
    {
      t = q_14;
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
            t = term_x_14;
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
            t = term_a_15;
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
                t = term_b_15;
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
                  t = (ATerm) ATmakeAppl(sym__2, term_c_15, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(m_6)), not_null(k_6)), term_h_15), not_null(i_6)));
                  {
                    ATerm t_0 (ATerm t)
                    {
                      ATerm i_15;
                      i_15 = t;
                      {
                        ATerm o_6 = NULL,q_6 = NULL;
                        ATerm j_15;
                        j_15 = t;
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
                        t = j_15;
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
                      t = i_15;
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
            t = term_n_15;
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
                t = term_o_15;
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
                  t = (ATerm) ATmakeAppl(sym__2, not_null(j_7), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(g_7)), term_h_15), not_null(e_7)), term_t_15));
                  {
                    ATerm u_15 = t;
                    int v_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = conc_two_lists_0(t);
                        LocalPopChoice(v_15);
                      }
                    else
                      {
                        t = u_15;
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
                  t = (ATerm) ATmakeAppl(sym__2, term_c_15, not_null(i_7));
                  {
                    ATerm x_0 (ATerm t)
                    {
                      ATerm y_15;
                      y_15 = t;
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
                      t = y_15;
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
  ATerm z_15 = t;
  int a_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_16;
      b_16 = t;
      {
        t = term_t_15;
        t = get_config_0(t);
      }
      t = b_16;
      LocalPopChoice(a_16);
    }
  else
    {
      t = z_15;
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
              t = (ATerm) ATmakeAppl(sym__2, term_l_15, (ATerm) ATinsert(CheckATermList(not_null(u_7)), term_c_16));
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
        ATerm i_16 = t;
        int l_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_8 = NULL;
            t = r_0(t);
            {
              o_8 = t;
              i_8 :
              if(match_cons(o_8, sym_stdout_0))
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(m_8), term_m_16);
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
            t = term_m_16;
            LocalPopChoice(l_16);
          }
        else
          {
            t = i_16;
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
                    ATerm n_16 = t;
                    if((PushChoice() == 0))
                      {
                        t = stdout_0(t);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = n_16;
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
ATerm xtc_transform_1 (ATerm t, ATerm v_92 (ATerm))
{
  ATerm b_1 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, v_92, b_1);
  return(t);
}
ATerm abox2text_0 (ATerm t)
{
  ATerm d_1 (ATerm t)
  {
    t = term_o_16;
    return(t);
  }
  t = xtc_transform_1(t, d_1);
  return(t);
}
ATerm ac2abox_0 (ATerm t)
{
  ATerm e_1 (ATerm t)
  {
    t = term_p_16;
    return(t);
  }
  ATerm f_1 (ATerm t)
  {
    ATerm x_8 = NULL;
    ATerm y_8 = NULL;
    t = term_u_16;
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
    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_8)), term_v_16);
    return(t);
  }
  t = xtc_transform_2(t, e_1, f_1);
  return(t);
}
ATerm s2c_0 (ATerm t)
{
  ATerm g_1 (ATerm t)
  {
    t = term_w_16;
    return(t);
  }
  ATerm h_1 (ATerm t)
  {
    ATerm d_9 = NULL,f_9 = NULL;
    ATerm x_16;
    x_16 = t;
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
    t = x_16;
    {
      ATerm i_9 = NULL;
      t = term_y_16;
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
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_9)), term_y_16);
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
        t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(f_9)), (ATerm) ATinsert(ATempty, term_a_17)), not_null(d_9));
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
    t = term_d_17;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(n_9)), term_a_17);
    return(t);
  }
  t = xtc_transform_2(t, j_1, k_1);
  return(t);
}
ATerm canonicalize_0 (ATerm t)
{
  ATerm l_1 (ATerm t)
  {
    t = term_e_17;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(r_9)), term_a_17);
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
      t = term_f_17;
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
          t = (ATerm) ATmakeAppl(sym__2, term_l_15, (ATerm) ATinsert(CheckATermList(not_null(v_9)), term_h_17));
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
                t = term_o_16;
                return(t);
              }
              t = xtc_transform_1(t, s_1);
              {
                ATerm t_1 (ATerm t)
                {
                  ATerm u_1 (ATerm t)
                  {
                    t = term_i_17;
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
    t = term_j_17;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(z_9)), term_a_17);
    return(t);
  }
  t = xtc_transform_2(t, y_1, z_1);
  return(t);
}
ATerm compile_match_0 (ATerm t)
{
  ATerm a_2 (ATerm t)
  {
    t = term_o_17;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(d_10)), term_a_17);
    return(t);
  }
  t = xtc_transform_2(t, a_2, b_2);
  return(t);
}
ATerm inline_0 (ATerm t)
{
  ATerm c_2 (ATerm t)
  {
    t = term_p_17;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(h_10)), term_a_17);
    return(t);
  }
  t = xtc_transform_2(t, c_2, d_2);
  return(t);
}
ATerm fusion_0 (ATerm t)
{
  ATerm e_2 (ATerm t)
  {
    t = term_q_17;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(l_10)), term_a_17);
    return(t);
  }
  t = xtc_transform_2(t, e_2, f_2);
  return(t);
}
ATerm optimize1_0 (ATerm t)
{
  ATerm g_2 (ATerm t)
  {
    t = term_r_17;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(p_10)), term_a_17);
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
      t = term_s_17;
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
          t = (ATerm) ATmakeAppl(sym__2, term_l_15, (ATerm) ATinsert(CheckATermList(not_null(t_10)), term_x_17));
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
        ATerm y_17 = t;
        int z_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_18;
            a_18 = t;
            {
              ATerm b_18 = t;
              if((PushChoice() == 0))
                {
                  t = term_h_18;
                  t = get_config_0(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = b_18;
                }
            }
            t = a_18;
            t = fusion_0(t);
            LocalPopChoice(z_17);
          }
        else
          {
            t = y_17;
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
    t = term_i_18;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(x_10)), term_a_17);
    return(t);
  }
  t = xtc_transform_2(t, n_2, o_2);
  return(t);
}
ATerm stratego_nf_0 (ATerm t)
{
  ATerm p_2 (ATerm t)
  {
    t = term_q_18;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(b_11)), term_a_17);
    return(t);
  }
  t = xtc_transform_2(t, p_2, q_2);
  return(t);
}
ATerm extract_0 (ATerm t)
{
  ATerm r_2 (ATerm t)
  {
    t = term_r_18;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(f_11)), term_a_17);
    return(t);
  }
  t = xtc_transform_2(t, r_2, s_2);
  return(t);
}
ATerm extract_all_0 (ATerm t)
{
  ATerm t_2 (ATerm t)
  {
    t = term_s_18;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(j_11)), term_a_17);
    return(t);
  }
  t = xtc_transform_2(t, t_2, u_2);
  return(t);
}
ATerm output_frontend_0 (ATerm t)
{
  ATerm n_11 = NULL;
  ATerm t_18 = t;
  int v_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_18;
      w_18 = t;
      {
        t = term_f_19;
        t = get_config_0(t);
      }
      t = w_18;
      {
        ATerm g_19 = t;
        int h_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = extract_all_0(t);
            LocalPopChoice(h_19);
          }
        else
          {
            t = g_19;
            {
              t = (ATerm) ATinsert(ATempty, term_i_19);
              t = fatal_error_0(t);
            }
          }
        {
          ATerm v_2 (ATerm t)
          {
            ATerm o_11 = NULL;
            ATerm w_2 (ATerm t)
            {
              t = term_l_19;
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
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_11)), term_m_19);
              return(t);
            }
            t = say_1(t, x_2);
          }
        }
      }
      LocalPopChoice(v_18);
    }
  else
    {
      t = t_18;
      {
      }
    }
  return(t);
}
ATerm if_keep2_1 (ATerm t, ATerm r_86 (ATerm))
{
  ATerm n_19 = t;
  int p_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_19;
      q_19 = t;
      {
        ATerm r_11 = NULL;
        ATerm s_11 = NULL;
        t = term_r_19;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_11), term_w_14);
          t = geq_0(t);
        }
      }
      t = q_19;
      t = r_86(t);
      LocalPopChoice(p_19);
    }
  else
    {
      t = n_19;
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
    t = term_s_19;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(w_11)), term_a_17);
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
          t = term_t_19;
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
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_11)), term_m_19);
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
ATerm if_keep3_1 (ATerm t, ATerm s_86 (ATerm))
{
  ATerm u_19 = t;
  int v_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_19;
      w_19 = t;
      {
        ATerm d_12 = NULL;
        ATerm e_12 = NULL;
        t = term_r_19;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_12), term_e_20);
          t = geq_0(t);
        }
      }
      t = w_19;
      t = s_86(t);
      LocalPopChoice(v_19);
    }
  else
    {
      t = u_19;
      {
      }
    }
  return(t);
}
ATerm AddMain_1 (ATerm t, ATerm q_64 (ATerm))
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
        t = term_j_20;
        {
          t = q_64(t);
          {
            n_12 = t;
            if(((m_12 != NULL) && (m_12 != n_12)))
              _fail(n_12);
            else
              m_12 = n_12;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(not_null(k_12)), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_k_20, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(m_12)), (ATerm) ATempty))))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm xtc_io_transform_1 (ATerm t, ATerm f_93 (ATerm))
{
  t = read_from_0(t);
  {
    t = f_93(t);
    t = write_to_0(t);
  }
  return(t);
}
ATerm add_main_0 (ATerm t)
{
  ATerm s_12 = NULL,u_12 = NULL;
  ATerm l_20 = t;
  int m_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_20;
      n_20 = t;
      {
        ATerm t_12 = NULL;
        t = term_o_20;
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
                    t = term_p_20;
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
      t = n_20;
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
      LocalPopChoice(m_20);
    }
  else
    {
      t = l_20;
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
          t = term_q_20;
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
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_12)), term_r_20);
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
ATerm get_outfile_1 (ATerm t, ATerm p_64 (ATerm))
{
  ATerm a_13 = NULL,c_13 = NULL;
  ATerm u_20;
  u_20 = t;
  {
    ATerm b_13 = NULL;
    t = p_64(t);
    {
      b_13 = t;
      if(((a_13 != NULL) && (a_13 != b_13)))
        _fail(b_13);
      else
        a_13 = b_13;
    }
  }
  t = u_20;
  {
    ATerm d_13 = NULL;
    t = term_z_20;
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
      ATerm a_21;
      a_21 = t;
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
      t = a_21;
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
      ATerm b_21;
      b_21 = t;
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
      t = b_21;
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
        ATerm c_21 = t;
        int d_21 = stack_ptr;
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
                  ATerm e_21 = t;
                  int f_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(f_21);
                    }
                  else
                    {
                      t = e_21;
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
            LocalPopChoice(d_21);
          }
        else
          {
            t = c_21;
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
                    ATerm j_21 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm k_21 = t;
                        int o_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = stdout_0(t);
                            LocalPopChoice(o_21);
                          }
                        else
                          {
                            t = k_21;
                            t = stderr_0(t);
                          }
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = j_21;
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
  ATerm r_21 = t;
  int s_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_21;
      t_21 = t;
      {
        t = term_u_21;
        t = get_config_0(t);
      }
      t = t_21;
      {
        ATerm s_3 (ATerm t)
        {
          ATerm z_14 = NULL;
          ATerm v_3 (ATerm t)
          {
            t = term_v_21;
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
          ATerm w_21;
          w_21 = t;
          {
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_14)), term_x_21);
            t = echo_0(t);
          }
          t = w_21;
        }
      }
      LocalPopChoice(s_21);
    }
  else
    {
      t = r_21;
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
  t = term_r_19;
  {
    ATerm y_21 = t;
    int z_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(z_21);
      }
    else
      {
        t = y_21;
        t = term_a_22;
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_15), term_a_22);
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
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_15)), term_r_19);
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
  t = term_v_14;
  {
    ATerm b_22 = t;
    int c_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(c_22);
      }
    else
      {
        t = b_22;
        t = term_a_22;
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_15), term_a_22);
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
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_15)), term_v_14);
  return(t);
}
ATerm dep_name_0 (ATerm t)
{
  ATerm w_15 = NULL;
  ATerm x_15 = NULL;
  ATerm d_22 = t;
  int e_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_15;
      t = get_config_0(t);
      LocalPopChoice(e_22);
    }
  else
    {
      t = d_22;
      {
        t = term_f_22;
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
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_15)), term_g_22);
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
      t = term_h_22;
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
ATerm xtc_transform_term_2 (ATerm t, ATerm d_93 (ATerm), ATerm e_93 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, d_93, e_93);
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
ATerm call_0 (ATerm t)
{
  ATerm l_17 = NULL,m_17 = NULL,n_17 = NULL;
  l_17 = t;
  k_17 :
  if(match_cons(l_17, sym__2))
    {
      m_17 = ATgetArgument(l_17, 0);
      n_17 = ATgetArgument(l_17, 1);
      t = SSL_call(not_null(m_17), not_null(n_17));
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
ATerm xtc_command_1 (ATerm t, ATerm u_92 (ATerm))
{
  ATerm t_17 = NULL;
  ATerm i_22;
  i_22 = t;
  {
    ATerm u_17 = NULL;
    t = u_92(t);
    {
      t = xtc_find_0(t);
      {
        u_17 = t;
        if(((t_17 != NULL) && (t_17 != u_17)))
          _fail(u_17);
        else
          t_17 = u_17;
      }
    }
  }
  t = i_22;
  {
    ATerm j_22;
    j_22 = t;
    {
      ATerm v_17 = NULL;
      ATerm w_17 = NULL;
      w_17 = t;
      if(((v_17 != NULL) && (v_17 != w_17)))
        _fail(w_17);
      else
        v_17 = w_17;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_17), not_null(v_17));
        t = call_0(t);
      }
    }
    t = j_22;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm z_82 (ATerm))
{
  ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL;
  e_18 = t;
  d_18 :
  if(match_cons(e_18, sym__2))
    {
      f_18 = ATgetArgument(e_18, 0);
      g_18 = ATgetArgument(e_18, 1);
      {
        ATerm j_18 = NULL,k_18 = NULL,l_18 = NULL;
        ATerm m_22;
        m_22 = t;
        {
          ATerm m_18 = NULL;
          ATerm n_18 = NULL,o_18 = NULL,p_18 = NULL;
          t = z_82(t);
          {
            m_18 = t;
            {
              if(((j_18 != NULL) && (j_18 != m_18)))
                _fail(m_18);
              else
                j_18 = m_18;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(j_18), not_null(f_18), not_null(g_18));
                {
                  t = table_push_0(t);
                  {
                    ATerm s_22 = t;
                    int t_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(j_18), term_u_22);
                        t = table_get_0(t);
                        LocalPopChoice(t_22);
                      }
                    else
                      {
                        t = s_22;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      n_18 = t;
                      c_18 :
                      if(((ATgetType(n_18) == AT_LIST) && !(ATisEmpty(n_18))))
                        {
                          o_18 = ATgetFirst((ATermList) n_18);
                          p_18 = (ATerm) ATgetNext((ATermList) n_18);
                          {
                            if(((k_18 != NULL) && (k_18 != o_18)))
                              _fail(o_18);
                            else
                              k_18 = o_18;
                            {
                              if(((l_18 != NULL) && (l_18 != p_18)))
                                _fail(p_18);
                              else
                                l_18 = p_18;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(j_18), term_u_22, (ATerm) ATinsert(CheckATermList(not_null(l_18)), (ATerm) ATinsert(CheckATermList(not_null(k_18)), not_null(f_18))));
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
        t = m_22;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm n_83 (ATerm))
{
  ATerm y_22;
  y_22 = t;
  {
    t = n_83(t);
    {
      ATerm y_3 (ATerm t)
      {
        t = term_d_23;
        return(t);
      }
      t = debug_1(t, y_3);
    }
  }
  t = y_22;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm x_18 = NULL,y_18 = NULL;
  ATerm e_23 = t;
  int f_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_18 = NULL,a_19 = NULL,b_19 = NULL;
      z_18 = t;
      u_18 :
      if(match_cons(z_18, sym__2))
        {
          a_19 = ATgetArgument(z_18, 0);
          b_19 = ATgetArgument(z_18, 1);
          {
            if(((y_18 != NULL) && (y_18 != a_19)))
              _fail(a_19);
            else
              y_18 = a_19;
            if(((x_18 != NULL) && (x_18 != b_19)))
              _fail(b_19);
            else
              x_18 = b_19;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(f_23);
      t = SSL_open_file(not_null(y_18), not_null(x_18));
    }
  else
    {
      t = e_23;
      {
        ATerm c_19 = NULL;
        ATerm d_19 = NULL;
        ATerm c_4 (ATerm t)
        {
          t = term_g_23;
          return(t);
        }
        t = obsolete_1(t, c_4);
        {
          c_19 = t;
          {
            if(((y_18 != NULL) && (y_18 != c_19)))
              _fail(c_19);
            else
              y_18 = c_19;
            {
              ATerm h_23;
              h_23 = t;
              {
                ATerm e_19 = NULL;
                t = term_i_23;
                {
                  e_19 = t;
                  if(((d_19 != NULL) && (d_19 != e_19)))
                    _fail(e_19);
                  else
                    d_19 = e_19;
                }
              }
              t = h_23;
              t = SSL_open_file(not_null(y_18), not_null(d_19));
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
  ATerm j_19 = NULL;
  ATerm k_19 = NULL;
  t = term_j_20;
  {
    t = new_0(t);
    {
      k_19 = t;
      if(((j_19 != NULL) && (j_19 != k_19)))
        _fail(k_19);
      else
        j_19 = k_19;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_19), term_j_23);
    {
      t = conc_strings_0(t);
      {
        ATerm n_23 = t;
        int o_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = file_exists_0(t);
            t = new_file_0(t);
            LocalPopChoice(o_23);
          }
        else
          {
            t = n_23;
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
  ATerm o_19 = NULL;
  t = new_file_0(t);
  {
    o_19 = t;
    {
      ATerm p_23;
      p_23 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_19), term_i_23);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(o_19), term_j_20);
            {
              ATerm d_4 (ATerm t)
              {
                t = term_q_23;
                return(t);
              }
              t = assert_1(t, d_4);
            }
          }
        }
      }
      t = p_23;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm o_0 (ATerm), ATerm p_0 (ATerm))
{
  ATerm y_19 = NULL,z_19 = NULL;
  y_19 = t;
  x_19 :
  if(match_cons(y_19, sym_stdin_0))
    {
      ATerm a_20 = NULL;
      ATerm b_20 = NULL;
      ATerm c_20 = NULL;
      t = xtc_new_file_0(t);
      {
        b_20 = t;
        {
          if(((a_20 != NULL) && (a_20 != b_20)))
            _fail(b_20);
          else
            a_20 = b_20;
          {
            ATerm d_20 = NULL;
            t = p_0(t);
            {
              d_20 = t;
              if(((c_20 != NULL) && (c_20 != d_20)))
                _fail(d_20);
              else
                c_20 = d_20;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(c_20), (ATerm) ATinsert(ATinsert(ATempty, not_null(a_20)), term_h_15));
              {
                ATerm r_23 = t;
                int x_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = conc_two_lists_0(t);
                    LocalPopChoice(x_23);
                  }
                else
                  {
                    t = r_23;
                    t = conc_more_lists_0(t);
                  }
                {
                  t = xtc_command_1(t, o_0);
                  {
                    t = not_null(a_20);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(a_20));
    }
  else
    {
      if(match_cons(y_19, sym_FILE_1))
        {
          z_19 = ATgetArgument(y_19, 0);
          {
            ATerm f_20 = NULL;
            ATerm g_20 = NULL;
            t = not_null(z_19);
            {
              ATerm h_20 = NULL;
              t = xtc_new_file_0(t);
              {
                g_20 = t;
                {
                  if(((f_20 != NULL) && (f_20 != g_20)))
                    _fail(g_20);
                  else
                    f_20 = g_20;
                  {
                    ATerm i_20 = NULL;
                    t = p_0(t);
                    {
                      i_20 = t;
                      if(((h_20 != NULL) && (h_20 != i_20)))
                        _fail(i_20);
                      else
                        h_20 = i_20;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(h_20), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(f_20)), term_h_15), not_null(z_19)), term_y_23));
                      {
                        ATerm z_23 = t;
                        int a_24 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = conc_two_lists_0(t);
                            LocalPopChoice(a_24);
                          }
                        else
                          {
                            t = z_23;
                            t = conc_more_lists_0(t);
                          }
                        {
                          t = xtc_command_1(t, o_0);
                          {
                            t = not_null(f_20);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_20));
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
  ATerm t_20 = NULL;
  t_20 = t;
  s_20 :
  if(match_cons(t_20, sym_stdin_0))
    {
      ATerm v_20 = NULL,x_20 = NULL;
      ATerm b_24;
      b_24 = t;
      {
        ATerm w_20 = NULL;
        t = SSLgetAnnotations(not_null(t_20));
        {
          w_20 = t;
          if(((v_20 != NULL) && (v_20 != w_20)))
            _fail(w_20);
          else
            v_20 = w_20;
        }
      }
      t = b_24;
      {
        ATerm y_20 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(v_20));
        {
          y_20 = t;
          if(((x_20 != NULL) && (x_20 != y_20)))
            _fail(y_20);
          else
            x_20 = y_20;
        }
        t = not_null(x_20);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm j_59 (ATerm))
{
  ATerm h_21 = NULL,i_21 = NULL;
  h_21 = t;
  g_21 :
  if(match_cons(h_21, sym_FILE_1))
    {
      i_21 = ATgetArgument(h_21, 0);
      {
        ATerm l_21 = NULL,n_21 = NULL;
        ATerm m_21 = NULL;
        t = SSLgetAnnotations(not_null(h_21));
        {
          m_21 = t;
          if(((l_21 != NULL) && (l_21 != m_21)))
            _fail(m_21);
          else
            l_21 = m_21;
        }
        {
          t = not_null(i_21);
          {
            ATerm p_21 = NULL;
            t = j_59(t);
            {
              n_21 = t;
              {
                ATerm q_21 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(n_21)), not_null(l_21));
                {
                  q_21 = t;
                  if(((p_21 != NULL) && (p_21 != q_21)))
                    _fail(q_21);
                  else
                    p_21 = q_21;
                }
                t = not_null(p_21);
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
ATerm xtc_transform_2 (ATerm t, ATerm w_92 (ATerm), ATerm x_92 (ATerm))
{
  ATerm e_24 = t;
  int f_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_24 = t;
      int h_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(h_24);
        }
      else
        {
          t = g_24;
          t = stdin_0(t);
        }
      LocalPopChoice(f_24);
      t = xtc_transform_file_2(t, w_92, x_92);
    }
  else
    {
      t = e_24;
      t = xtc_transform_term_2(t, w_92, x_92);
    }
  return(t);
}
ATerm if_verbose3_1 (ATerm t, ATerm e_86 (ATerm))
{
  ATerm i_24 = t;
  int k_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_24;
      o_24 = t;
      {
        ATerm k_22 = NULL;
        ATerm l_22 = NULL;
        t = term_v_14;
        {
          t = get_config_0(t);
          {
            l_22 = t;
            if(((k_22 != NULL) && (k_22 != l_22)))
              _fail(l_22);
            else
              k_22 = l_22;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_22), term_e_20);
          t = geq_0(t);
        }
      }
      t = o_24;
      t = e_86(t);
      LocalPopChoice(k_24);
    }
  else
    {
      t = i_24;
      {
      }
    }
  return(t);
}
ATerm basename_1 (ATerm t, ATerm s_81 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm p_24 = t;
    int q_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_22 (ATerm t)
        {
          ATerm r_24 = t;
          int w_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, r_22);
              LocalPopChoice(w_24);
            }
          else
            {
              t = r_24;
              {
                ATerm x_24 = t;
                int a_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm e_4 (ATerm t)
                    {
                      ATerm p_22 = NULL;
                      p_22 = t;
                      n_22 :
                      if(!(match_int(p_22, 47)))
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = Cons_2(t, e_4, _id);
                    LocalPopChoice(a_25);
                  }
                else
                  {
                    t = x_24;
                    {
                      ATerm f_4 (ATerm t)
                      {
                        ATerm q_22 = NULL;
                        q_22 = t;
                        o_22 :
                        if(!(match_int(q_22, 46)))
                          {
                            _fail(t);
                          }
                        return(t);
                      }
                      t = Cons_2(t, f_4, s_81);
                      t = (ATerm) ATempty;
                    }
                  }
              }
            }
          return(t);
        }
        t = r_22(t);
        LocalPopChoice(q_24);
      }
    else
      {
        t = p_24;
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
  ATerm w_22 = NULL,x_22 = NULL;
  w_22 = t;
  v_22 :
  if(match_cons(w_22, sym_FILE_1))
    {
      x_22 = ATgetArgument(w_22, 0);
      {
        ATerm z_22 = NULL,a_23 = NULL;
        ATerm b_23 = NULL;
        t = not_null(x_22);
        {
          ATerm c_23 = NULL;
          t = basename_1(t, _id);
          {
            b_23 = t;
            {
              if(((z_22 != NULL) && (z_22 != b_23)))
                _fail(b_23);
              else
                z_22 = b_23;
              {
                ATerm i_4 (ATerm t)
                {
                  ATerm j_4 (ATerm t)
                  {
                    t = term_b_25;
                    return(t);
                  }
                  t = debug_1(t, j_4);
                  return(t);
                }
                t = if_verbose3_1(t, i_4);
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_c_25, not_null(z_22));
                  {
                    t = set_config_0(t);
                    {
                      ATerm d_25 = t;
                      int e_25 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = term_h_15;
                          {
                            t = get_config_0(t);
                            t = basename_1(t, _id);
                          }
                          LocalPopChoice(e_25);
                        }
                      else
                        {
                          t = d_25;
                          t = not_null(z_22);
                        }
                      {
                        c_23 = t;
                        {
                          if(((a_23 != NULL) && (a_23 != c_23)))
                            _fail(c_23);
                          else
                            a_23 = c_23;
                          {
                            ATerm k_4 (ATerm t)
                            {
                              ATerm l_4 (ATerm t)
                              {
                                t = term_o_25;
                                return(t);
                              }
                              t = debug_1(t, l_4);
                              return(t);
                            }
                            t = if_verbose3_1(t, k_4);
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_z_20, not_null(a_23));
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
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(z_22));
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
    ATerm r_4 (ATerm t)
    {
      t = term_p_25;
      return(t);
    }
    ATerm w_4 (ATerm t)
    {
      ATerm k_23 = NULL,m_23 = NULL,t_23 = NULL,v_23 = NULL;
      ATerm q_25;
      q_25 = t;
      {
        ATerm l_23 = NULL;
        t = dep_name_0(t);
        {
          l_23 = t;
          if(((k_23 != NULL) && (k_23 != l_23)))
            _fail(l_23);
          else
            k_23 = l_23;
        }
      }
      t = q_25;
      {
        ATerm r_25;
        r_25 = t;
        {
          ATerm s_23 = NULL;
          t = pass_verbose_0(t);
          {
            s_23 = t;
            if(((m_23 != NULL) && (m_23 != s_23)))
              _fail(s_23);
            else
              m_23 = s_23;
          }
        }
        t = r_25;
        {
          ATerm s_25;
          s_25 = t;
          {
            ATerm u_23 = NULL;
            t = pass_keep_0(t);
            {
              u_23 = t;
              if(((t_23 != NULL) && (t_23 != u_23)))
                _fail(u_23);
              else
                t_23 = u_23;
            }
          }
          t = s_25;
          {
            ATerm w_23 = NULL;
            t = term_u_25;
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
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(t_23)), not_null(m_23)), not_null(v_23)), not_null(k_23));
              t = concat_0(t);
            }
          }
        }
      }
      return(t);
    }
    t = xtc_transform_2(t, r_4, w_4);
  }
  return(t);
}
ATerm front_end_0 (ATerm t)
{
  ATerm e_5 (ATerm t)
  {
    ATerm f_5 (ATerm t)
    {
      t = term_v_25;
      return(t);
    }
    t = debug_1(t, f_5);
    return(t);
  }
  t = if_verbose2_1(t, e_5);
  {
    ATerm g_5 (ATerm t)
    {
      ATerm i_5 (ATerm t)
      {
        ATerm c_24 = NULL;
        ATerm d_24 = NULL;
        d_24 = t;
        if(((c_24 != NULL) && (c_24 != d_24)))
          _fail(d_24);
        else
          c_24 = d_24;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_l_15, (ATerm) ATinsert(CheckATermList(not_null(c_24)), term_w_25));
          t = printnl_0(t);
        }
        return(t);
      }
      t = if_verbose1_1(t, i_5);
      return(t);
    }
    ATerm h_5 (ATerm t)
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
    t = profile_p__2(t, g_5, h_5);
  }
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm l_24 = NULL,m_24 = NULL,n_24 = NULL;
  l_24 = t;
  j_24 :
  if(((ATgetType(l_24) == AT_LIST) && !(ATisEmpty(l_24))))
    {
      m_24 = ATgetFirst((ATermList) l_24);
      n_24 = (ATerm) ATgetNext((ATermList) l_24);
      t = not_null(n_24);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm t_24 = NULL,u_24 = NULL,v_24 = NULL;
  t_24 = t;
  s_24 :
  if(match_cons(t_24, sym__2))
    {
      u_24 = ATgetArgument(t_24, 0);
      v_24 = ATgetArgument(t_24, 1);
      {
        ATerm x_25;
        x_25 = t;
        {
          ATerm y_24 = NULL;
          ATerm z_24 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_24), not_null(v_24));
          {
            ATerm c_26 = t;
            int d_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(d_26);
              }
            else
              {
                t = c_26;
                t = (ATerm) ATempty;
              }
            {
              z_24 = t;
              if(((y_24 != NULL) && (y_24 != z_24)))
                _fail(z_24);
              else
                y_24 = z_24;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(u_24), not_null(v_24), not_null(y_24));
            t = table_put_0(t);
          }
        }
        t = x_25;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm w_82 (ATerm))
{
  ATerm g_25 = NULL,h_25 = NULL,i_25 = NULL;
  ATerm e_26;
  e_26 = t;
  {
    ATerm j_25 = NULL;
    ATerm k_25 = NULL,l_25 = NULL,m_25 = NULL;
    t = w_82(t);
    {
      j_25 = t;
      {
        if(((i_25 != NULL) && (i_25 != j_25)))
          _fail(j_25);
        else
          i_25 = j_25;
        {
          ATerm l_26 = t;
          int m_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(i_25), term_u_22);
              t = table_get_0(t);
              LocalPopChoice(m_26);
            }
          else
            {
              t = l_26;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            k_25 = t;
            f_25 :
            if(((ATgetType(k_25) == AT_LIST) && !(ATisEmpty(k_25))))
              {
                l_25 = ATgetFirst((ATermList) k_25);
                m_25 = (ATerm) ATgetNext((ATermList) k_25);
                {
                  if(((h_25 != NULL) && (h_25 != l_25)))
                    _fail(l_25);
                  else
                    h_25 = l_25;
                  {
                    if(((g_25 != NULL) && (g_25 != m_25)))
                      _fail(m_25);
                    else
                      g_25 = m_25;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(i_25), term_u_22, not_null(g_25));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(h_25);
                          {
                            ATerm j_5 (ATerm t)
                            {
                              ATerm n_25 = NULL;
                              n_25 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(i_25), not_null(n_25));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, j_5);
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
  t = e_26;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm t_25 = NULL;
  t_25 = t;
  t = SSL_remove(not_null(t_25));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm b_65 (ATerm), ATerm c_65 (ATerm))
{
  ATerm p_26 = t;
  int q_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = b_65(t);
      t = c_65(t);
      LocalPopChoice(q_26);
    }
  else
    {
      t = p_26;
      {
        t = c_65(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm v_82 (ATerm))
{
  ATerm y_25 = NULL;
  ATerm t_26;
  t_26 = t;
  {
    ATerm z_25 = NULL;
    ATerm a_26 = NULL;
    t = v_82(t);
    {
      z_25 = t;
      {
        if(((y_25 != NULL) && (y_25 != z_25)))
          _fail(z_25);
        else
          y_25 = z_25;
        {
          ATerm b_26 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_25), term_u_22);
          {
            ATerm u_26 = t;
            int w_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(w_26);
              }
            else
              {
                t = u_26;
                t = (ATerm) ATempty;
              }
            {
              b_26 = t;
              if(((a_26 != NULL) && (a_26 != b_26)))
                _fail(b_26);
              else
                a_26 = b_26;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(y_25), term_u_22, (ATerm) ATinsert(CheckATermList(not_null(a_26)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = t_26;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm k_92 (ATerm))
{
  ATerm g_26 = NULL,h_26 = NULL;
  ATerm o_5 (ATerm t)
  {
    t = term_q_23;
    return(t);
  }
  t = begin_scope_1(t, o_5);
  {
    ATerm s_5 (ATerm t)
    {
      ATerm x_26;
      x_26 = t;
      {
        ATerm i_26 = NULL,j_26 = NULL,k_26 = NULL;
        ATerm y_26 = t;
        int f_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_g_27;
            t = table_get_0(t);
            LocalPopChoice(f_27);
          }
        else
          {
            t = y_26;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          i_26 = t;
          f_26 :
          if(((ATgetType(i_26) == AT_LIST) && !(ATisEmpty(i_26))))
            {
              j_26 = ATgetFirst((ATermList) i_26);
              k_26 = (ATerm) ATgetNext((ATermList) i_26);
              {
                if(((h_26 != NULL) && (h_26 != j_26)))
                  _fail(j_26);
                else
                  h_26 = j_26;
                {
                  if(((g_26 != NULL) && (g_26 != k_26)))
                    _fail(k_26);
                  else
                    g_26 = k_26;
                  {
                    t = not_null(h_26);
                    {
                      ATerm y_5 (ATerm t)
                      {
                        ATerm h_27 = t;
                        int i_27 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = remove_file_0(t);
                            LocalPopChoice(i_27);
                          }
                        else
                          {
                            t = h_27;
                            {
                            }
                          }
                        return(t);
                      }
                      t = map_1(t, y_5);
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
      t = x_26;
      {
        ATerm z_5 (ATerm t)
        {
          t = term_q_23;
          return(t);
        }
        t = end_scope_1(t, z_5);
      }
      return(t);
    }
    t = restore_always_2(t, k_92, s_5);
  }
  return(t);
}
ATerm xtc_input_1 (ATerm t, ATerm n_92 (ATerm))
{
  ATerm a_6 (ATerm t)
  {
    ATerm j_27 = t;
    int k_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_26 = NULL;
        ATerm o_26 = NULL;
        t = term_y_23;
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
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(n_26));
        LocalPopChoice(k_27);
      }
    else
      {
        t = j_27;
        t = term_h_22;
      }
    t = n_92(t);
    return(t);
  }
  t = xtc_temp_files_1(t, a_6);
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
  t = xtc_input_1(t, b_6);
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm c_86 (ATerm))
{
  ATerm p_27 = t;
  int q_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_27;
      r_27 = t;
      {
        ATerm r_26 = NULL;
        ATerm s_26 = NULL;
        t = term_v_14;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_26), term_a_22);
          t = geq_0(t);
        }
      }
      t = r_27;
      t = c_86(t);
      LocalPopChoice(q_27);
    }
  else
    {
      t = p_27;
      {
      }
    }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm v_26 = NULL;
  v_26 = t;
  t = SSL_TicksToSeconds(not_null(v_26));
  return(t);
}
ATerm self_children_sys_time_0 (ATerm t)
{
  ATerm a_27 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL;
  a_27 = t;
  z_26 :
  if(match_cons(a_27, sym__4))
    {
      b_27 = ATgetArgument(a_27, 0);
      c_27 = ATgetArgument(a_27, 1);
      d_27 = ATgetArgument(a_27, 2);
      e_27 = ATgetArgument(a_27, 3);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_27), not_null(e_27));
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
  ATerm m_27 = NULL,n_27 = NULL,o_27 = NULL;
  m_27 = t;
  l_27 :
  if(match_cons(m_27, sym__2))
    {
      n_27 = ATgetArgument(m_27, 0);
      o_27 = ATgetArgument(m_27, 1);
      {
        ATerm s_27 = t;
        int z_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(n_27), not_null(o_27));
            LocalPopChoice(z_27);
          }
        else
          {
            t = s_27;
            t = SSL_addr(not_null(n_27), not_null(o_27));
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
  ATerm u_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL;
  u_27 = t;
  t_27 :
  if(match_cons(u_27, sym__4))
    {
      v_27 = ATgetArgument(u_27, 0);
      w_27 = ATgetArgument(u_27, 1);
      x_27 = ATgetArgument(u_27, 2);
      y_27 = ATgetArgument(u_27, 3);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_27), not_null(x_27));
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
  ATerm g_28 = NULL,h_28 = NULL,i_28 = NULL;
  g_28 = t;
  f_28 :
  if(match_cons(g_28, sym__2))
    {
      h_28 = ATgetArgument(g_28, 0);
      i_28 = ATgetArgument(g_28, 1);
      {
        ATerm a_28 = t;
        int b_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(h_28), not_null(i_28));
            LocalPopChoice(b_28);
          }
        else
          {
            t = a_28;
            t = SSL_subtr(not_null(h_28), not_null(i_28));
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
  ATerm u_28 = NULL,v_28 = NULL,x_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL,b_29 = NULL,e_29 = NULL,f_29 = NULL,j_29 = NULL,k_29 = NULL;
  u_28 = t;
  r_28 :
  if(match_cons(u_28, sym__2))
    {
      v_28 = ATgetArgument(u_28, 0);
      b_29 = ATgetArgument(u_28, 1);
      s_28 :
      if(match_cons(v_28, sym__4))
        {
          x_28 = ATgetArgument(v_28, 0);
          y_28 = ATgetArgument(v_28, 1);
          z_28 = ATgetArgument(v_28, 2);
          a_29 = ATgetArgument(v_28, 3);
          t_28 :
          if(match_cons(b_29, sym__4))
            {
              e_29 = ATgetArgument(b_29, 0);
              f_29 = ATgetArgument(b_29, 1);
              j_29 = ATgetArgument(b_29, 2);
              k_29 = ATgetArgument(b_29, 3);
              {
                ATerm v_29 = NULL,x_29 = NULL,z_29 = NULL,b_30 = NULL;
                ATerm c_28;
                c_28 = t;
                {
                  ATerm w_29 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(x_28), not_null(e_29));
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
                t = c_28;
                {
                  ATerm d_28;
                  d_28 = t;
                  {
                    ATerm y_29 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(y_28), not_null(f_29));
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
                  t = d_28;
                  {
                    ATerm e_28;
                    e_28 = t;
                    {
                      ATerm a_30 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(z_28), not_null(j_29));
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
                    }
                    t = e_28;
                    {
                      ATerm c_30 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(a_29), not_null(k_29));
                      {
                        t = subt_0(t);
                        {
                          c_30 = t;
                          if(((b_30 != NULL) && (b_30 != c_30)))
                            _fail(c_30);
                          else
                            b_30 = c_30;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym__4, not_null(v_29), not_null(x_29), not_null(z_29), not_null(b_30));
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
ATerm profile_p__2 (ATerm t, ATerm y_83 (ATerm), ATerm z_83 (ATerm))
{
  ATerm m_30 = NULL;
  ATerm j_28;
  j_28 = t;
  {
    ATerm n_30 = NULL;
    t = times_0(t);
    {
      n_30 = t;
      if(((m_30 != NULL) && (m_30 != n_30)))
        _fail(n_30);
      else
        m_30 = n_30;
    }
  }
  t = j_28;
  {
    t = z_83(t);
    {
      ATerm k_28;
      k_28 = t;
      {
        ATerm o_30 = NULL,q_30 = NULL,s_30 = NULL;
        ATerm p_30 = NULL;
        t = times_0(t);
        {
          p_30 = t;
          if(((o_30 != NULL) && (o_30 != p_30)))
            _fail(p_30);
          else
            o_30 = p_30;
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_30), not_null(m_30));
          {
            t = diff_times_0(t);
            {
              ATerm l_28;
              l_28 = t;
              {
                ATerm r_30 = NULL;
                t = self_children_user_time_0(t);
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
              }
              t = l_28;
              {
                ATerm t_30 = NULL;
                t = self_children_sys_time_0(t);
                {
                  t = ticks_to_seconds_0(t);
                  {
                    t_30 = t;
                    if(((s_30 != NULL) && (s_30 != t_30)))
                      _fail(t_30);
                    else
                      s_30 = t_30;
                  }
                }
                {
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(s_30)), term_n_28), not_null(q_30)), term_m_28);
                  t = y_83(t);
                }
              }
            }
          }
        }
      }
      t = k_28;
    }
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm g_83 (ATerm))
{
  ATerm o_28;
  o_28 = t;
  {
    ATerm a_31 = NULL,c_31 = NULL;
    ATerm p_28;
    p_28 = t;
    {
      ATerm b_31 = NULL;
      t = g_83(t);
      {
        b_31 = t;
        if(((a_31 != NULL) && (a_31 != b_31)))
          _fail(b_31);
        else
          a_31 = b_31;
      }
    }
    t = p_28;
    {
      ATerm d_31 = NULL;
      d_31 = t;
      if(((c_31 != NULL) && (c_31 != d_31)))
        _fail(d_31);
      else
        c_31 = d_31;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_31)), not_null(a_31)));
        t = printnl_0(t);
      }
    }
  }
  t = o_28;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm m_31 = NULL;
  m_31 = t;
  t = SSL_is_string(not_null(m_31));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm q_28 = t;
  int w_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(w_28);
    }
  else
    {
      t = q_28;
      {
        ATerm c_29 = t;
        int d_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_6 (ATerm t)
            {
              ATerm g_29 = t;
              int h_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(h_29);
                }
              else
                {
                  t = g_29;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, c_6);
            LocalPopChoice(d_29);
          }
        else
          {
            t = c_29;
            {
              ATerm v_31 = NULL,w_31 = NULL,x_31 = NULL;
              v_31 = t;
              u_31 :
              if(match_cons(v_31, sym_Path_1))
                {
                  w_31 = ATgetArgument(v_31, 0);
                  t = not_null(w_31);
                }
              else
                {
                  if(match_cons(v_31, sym_Var_1))
                    {
                      w_31 = ATgetArgument(v_31, 0);
                      {
                        t = not_null(w_31);
                        {
                          ATerm i_29 = t;
                          int l_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(l_29);
                            }
                          else
                            {
                              t = i_29;
                              {
                                ATerm d_6 (ATerm t)
                                {
                                  t = term_m_29;
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
                      if(match_cons(v_31, sym_Prefix_2))
                        {
                          w_31 = ATgetArgument(v_31, 0);
                          x_31 = ATgetArgument(v_31, 1);
                          {
                            ATerm c_32 = NULL,e_32 = NULL;
                            ATerm n_29;
                            n_29 = t;
                            {
                              ATerm d_32 = NULL;
                              t = not_null(w_31);
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
                            }
                            t = n_29;
                            {
                              ATerm f_32 = NULL;
                              t = not_null(x_31);
                              {
                                t = eval_config_0(t);
                                {
                                  f_32 = t;
                                  if(((e_32 != NULL) && (e_32 != f_32)))
                                    _fail(f_32);
                                  else
                                    e_32 = f_32;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(c_32), not_null(e_32));
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
  ATerm n_32 = NULL;
  n_32 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_o_29, not_null(n_32));
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
                ATerm p_32 = NULL;
                ATerm q_32 = NULL;
                q_32 = t;
                if(((p_32 != NULL) && (p_32 != q_32)))
                  _fail(q_32);
                else
                  p_32 = q_32;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_o_29, not_null(n_32), not_null(p_32));
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
      t = term_a_22;
      t = exit_0(t);
    }
  }
  t = s_29;
  return(t);
}
ATerm sc_version_0 (ATerm t)
{
  ATerm t_29 = t;
  int u_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_30;
      d_30 = t;
      {
        ATerm v_32 = NULL;
        ATerm w_32 = NULL;
        t = term_e_30;
        {
          t = get_config_0(t);
          {
            w_32 = t;
            if(((v_32 != NULL) && (v_32 != w_32)))
              _fail(w_32);
            else
              v_32 = w_32;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_m_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_30), term_l_30), term_k_30), term_j_30), term_i_30), term_h_30), term_g_30), not_null(v_32)), term_f_30));
          t = printnl_0(t);
        }
      }
      t = d_30;
      LocalPopChoice(u_29);
    }
  else
    {
      t = t_29;
      {
        ATerm x_32 = NULL;
        x_32 = t;
        u_32 :
        if(!(match_string(x_32, "0.9beta8")))
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm r_64 (ATerm))
{
  ATerm v_30 = t;
  int w_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_64(t);
      LocalPopChoice(w_30);
    }
  else
    {
      t = v_30;
      {
      }
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm b_33 = NULL,c_33 = NULL,d_33 = NULL;
  b_33 = t;
  a_33 :
  if(match_cons(b_33, sym__2))
    {
      c_33 = ATgetArgument(b_33, 0);
      d_33 = ATgetArgument(b_33, 1);
      t = SSL_copy(not_null(c_33), not_null(d_33));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm i_33 = NULL;
  i_33 = t;
  t = SSL_table_keys(not_null(i_33));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm o_33 = NULL;
  o_33 = t;
  {
    t = table_keys_0(t);
    {
      ATerm e_6 (ATerm t)
      {
        ATerm q_33 = NULL;
        ATerm s_33 = NULL;
        q_33 = t;
        {
          ATerm t_33 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_33), not_null(q_33));
          {
            t = table_get_0(t);
            {
              t_33 = t;
              if(((s_33 != NULL) && (s_33 != t_33)))
                _fail(t_33);
              else
                s_33 = t_33;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_33), not_null(s_33));
        }
        return(t);
      }
      t = map_1(t, e_6);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm g_86 (ATerm))
{
  ATerm x_30 = t;
  int y_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_30;
      z_30 = t;
      {
        ATerm y_33 = NULL;
        ATerm z_33 = NULL;
        t = term_v_14;
        {
          t = get_config_0(t);
          {
            z_33 = t;
            if(((y_33 != NULL) && (y_33 != z_33)))
              _fail(z_33);
            else
              y_33 = z_33;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_33), term_e_31);
          t = geq_0(t);
        }
      }
      t = z_30;
      t = g_86(t);
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
ATerm error_0 (ATerm t)
{
  ATerm f_31;
  f_31 = t;
  {
    ATerm c_34 = NULL;
    ATerm d_34 = NULL;
    d_34 = t;
    if(((c_34 != NULL) && (c_34 != d_34)))
      _fail(d_34);
    else
      c_34 = d_34;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_l_15, not_null(c_34));
      t = printnl_0(t);
    }
  }
  t = f_31;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm j_34 = NULL;
  ATerm l_34 = NULL,m_34 = NULL;
  j_34 = t;
  {
    ATerm n_34 = NULL,o_34 = NULL,p_34 = NULL,q_34 = NULL,r_34 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_g_31, (ATerm) ATmakeAppl(sym_Tool_1, not_null(j_34)));
    {
      t = table_get_0(t);
      {
        n_34 = t;
        h_34 :
        if(((ATgetType(n_34) == AT_LIST) && !(ATisEmpty(n_34))))
          {
            o_34 = ATgetFirst((ATermList) n_34);
            r_34 = (ATerm) ATgetNext((ATermList) n_34);
            i_34 :
            if(match_cons(o_34, sym__2))
              {
                p_34 = ATgetArgument(o_34, 0);
                q_34 = ATgetArgument(o_34, 1);
                {
                  if(((l_34 != NULL) && (l_34 != p_34)))
                    _fail(p_34);
                  else
                    l_34 = p_34;
                  if(((m_34 != NULL) && (m_34 != q_34)))
                    _fail(q_34);
                  else
                    m_34 = q_34;
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
    t = not_null(m_34);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm y_34 = NULL,z_34 = NULL,a_35 = NULL;
  y_34 = t;
  x_34 :
  if(match_cons(y_34, sym__2))
    {
      z_34 = ATgetArgument(y_34, 0);
      a_35 = ATgetArgument(y_34, 1);
      {
        ATerm d_35 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_g_31, (ATerm) ATmakeAppl(sym_Tool_1, not_null(z_34)));
        {
          t = table_get_0(t);
          {
            ATerm f_6 (ATerm t)
            {
              ATerm e_35 = NULL,f_35 = NULL,g_35 = NULL;
              e_35 = t;
              w_34 :
              if(match_cons(e_35, sym__2))
                {
                  f_35 = ATgetArgument(e_35, 0);
                  g_35 = ATgetArgument(e_35, 1);
                  {
                    if(((a_35 != NULL) && (a_35 != f_35)))
                      _fail(f_35);
                    else
                      a_35 = f_35;
                    if(((d_35 != NULL) && (d_35 != g_35)))
                      _fail(g_35);
                    else
                      d_35 = g_35;
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
        t = not_null(d_35);
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
  ATerm h_31 = t;
  int i_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_31;
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
      LocalPopChoice(i_31);
    }
  else
    {
      t = h_31;
      {
      }
    }
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm f_86 (ATerm))
{
  ATerm l_31 = t;
  int n_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_31;
      o_31 = t;
      {
        ATerm k_35 = NULL;
        ATerm l_35 = NULL;
        t = term_v_14;
        {
          t = get_config_0(t);
          {
            l_35 = t;
            if(((k_35 != NULL) && (k_35 != l_35)))
              _fail(l_35);
            else
              k_35 = l_35;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_35), term_p_31);
          t = geq_0(t);
        }
      }
      t = o_31;
      t = f_86(t);
      LocalPopChoice(n_31);
    }
  else
    {
      t = l_31;
      {
      }
    }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm p_35 = NULL,q_35 = NULL,r_35 = NULL;
  p_35 = t;
  o_35 :
  if(match_cons(p_35, sym__2))
    {
      q_35 = ATgetArgument(p_35, 0);
      r_35 = ATgetArgument(p_35, 1);
      {
        ATerm q_31;
        q_31 = t;
        {
          ATerm r_31 = t;
          int s_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(q_35), not_null(r_35));
              LocalPopChoice(s_31);
            }
          else
            {
              t = r_31;
              t = SSL_gtr(not_null(q_35), not_null(r_35));
            }
        }
        t = q_31;
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
  ATerm x_35 = NULL;
  ATerm t_31 = t;
  int y_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_35 = NULL,z_35 = NULL,a_36 = NULL;
      y_35 = t;
      w_35 :
      if(match_cons(y_35, sym__2))
        {
          z_35 = ATgetArgument(y_35, 0);
          a_36 = ATgetArgument(y_35, 1);
          {
            if(((x_35 != NULL) && (x_35 != z_35)))
              _fail(z_35);
            else
              x_35 = z_35;
            if(((x_35 != NULL) && (x_35 != a_36)))
              _fail(a_36);
            else
              x_35 = a_36;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(y_31);
    }
  else
    {
      t = t_31;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm h_86 (ATerm))
{
  ATerm z_31 = t;
  int a_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_32;
      b_32 = t;
      {
        ATerm d_36 = NULL;
        ATerm e_36 = NULL;
        t = term_v_14;
        {
          t = get_config_0(t);
          {
            e_36 = t;
            if(((d_36 != NULL) && (d_36 != e_36)))
              _fail(e_36);
            else
              d_36 = e_36;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_36), term_g_32);
          t = geq_0(t);
        }
      }
      t = b_32;
      t = h_86(t);
      LocalPopChoice(a_32);
    }
  else
    {
      t = z_31;
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
  ATerm l_36 = NULL,m_36 = NULL,n_36 = NULL;
  l_36 = t;
  k_36 :
  if(match_cons(l_36, sym__2))
    {
      m_36 = ATgetArgument(l_36, 0);
      n_36 = ATgetArgument(l_36, 1);
      if(((m_36 != NULL) && (m_36 != n_36)))
        _fail(n_36);
      else
        m_36 = n_36;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm j_78 (ATerm), ATerm k_78 (ATerm))
{
  ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL;
  t_36 = t;
  s_36 :
  if(((ATgetType(t_36) == AT_LIST) && !(ATisEmpty(t_36))))
    {
      u_36 = ATgetFirst((ATermList) t_36);
      v_36 = (ATerm) ATgetNext((ATermList) t_36);
      {
        t = k_78(t);
        {
          ATerm s_6 (ATerm t)
          {
            ATerm y_36 = NULL;
            y_36 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(u_36), not_null(y_36));
              t = j_78(t);
            }
            return(t);
          }
          t = fetch_1(t, s_6);
        }
        t = not_null(v_36);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm f_78 (ATerm))
{
  ATerm e_37 = NULL,f_37 = NULL,g_37 = NULL;
  e_37 = t;
  d_37 :
  if(match_cons(e_37, sym__2))
    {
      f_37 = ATgetArgument(e_37, 0);
      g_37 = ATgetArgument(e_37, 1);
      {
        t = not_null(f_37);
        {
          ATerm k_37 (ATerm t)
          {
            ATerm h_32 = t;
            int i_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(g_37);
                LocalPopChoice(i_32);
              }
            else
              {
                t = h_32;
                {
                  ATerm j_32 = t;
                  int k_32 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm t_6 (ATerm t)
                      {
                        t = not_null(g_37);
                        return(t);
                      }
                      t = HdMember_p__2(t, f_78, t_6);
                      t = k_37(t);
                      LocalPopChoice(k_32);
                    }
                  else
                    {
                      t = j_32;
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
  ATerm p_37 = NULL,q_37 = NULL,r_37 = NULL,s_37 = NULL;
  p_37 = t;
  o_37 :
  if(match_cons(p_37, sym__3))
    {
      q_37 = ATgetArgument(p_37, 0);
      r_37 = ATgetArgument(p_37, 1);
      s_37 = ATgetArgument(p_37, 2);
      {
        ATerm l_32;
        l_32 = t;
        {
          ATerm w_37 = NULL;
          ATerm x_37 = NULL,b_38 = NULL;
          ATerm a_38 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_37), not_null(r_37));
          {
            ATerm m_32 = t;
            int o_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(o_32);
              }
            else
              {
                t = m_32;
                t = (ATerm) ATempty;
              }
            {
              a_38 = t;
              if(((x_37 != NULL) && (x_37 != a_38)))
                _fail(a_38);
              else
                x_37 = a_38;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(x_37), not_null(s_37));
            {
              t = union_1(t, eq_0);
              {
                b_38 = t;
                if(((w_37 != NULL) && (w_37 != b_38)))
                  _fail(b_38);
                else
                  w_37 = b_38;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(q_37), not_null(r_37), not_null(w_37));
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
ATerm table_putlist_1 (ATerm t, ATerm p_89 (ATerm))
{
  ATerm n_38 = NULL,o_38 = NULL,p_38 = NULL;
  n_38 = t;
  m_38 :
  if(match_cons(n_38, sym__2))
    {
      o_38 = ATgetArgument(n_38, 0);
      p_38 = ATgetArgument(n_38, 1);
      {
        t = not_null(p_38);
        {
          ATerm u_6 (ATerm t)
          {
            ATerm s_38 = NULL,t_38 = NULL,u_38 = NULL;
            s_38 = t;
            j_38 :
            if(match_cons(s_38, sym__2))
              {
                t_38 = ATgetArgument(s_38, 0);
                u_38 = ATgetArgument(s_38, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(o_38), not_null(t_38), not_null(u_38));
                  t = p_89(t);
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
  ATerm a_39 = NULL;
  a_39 = t;
  t = SSL_ReadFromFile(not_null(a_39));
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm h_39 = NULL;
  ATerm j_39 = NULL;
  h_39 = t;
  {
    ATerm r_32;
    r_32 = t;
    {
      ATerm v_39 = NULL;
      t = term_s_32;
      {
        v_39 = t;
        if(((j_39 != NULL) && (j_39 != v_39)))
          _fail(v_39);
        else
          j_39 = v_39;
      }
    }
    t = r_32;
    {
      t = SSL_open_file(not_null(h_39), not_null(j_39));
      t = SSL_close_file(not_null(h_39));
    }
  }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm a_40 = NULL;
  ATerm c_40 = NULL;
  a_40 = t;
  {
    ATerm t_32 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_31, (ATerm) ATmakeAppl(sym_Imported_1, not_null(a_40)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = t_32;
      }
    {
      ATerm y_32;
      y_32 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_g_31, term_z_32, (ATerm) ATinsert(ATempty, not_null(a_40)));
        t = table_put_0(t);
      }
      t = y_32;
      {
        ATerm v_6 (ATerm t)
        {
          ATerm w_6 (ATerm t)
          {
            t = term_e_33;
            return(t);
          }
          t = debug_1(t, w_6);
          return(t);
        }
        t = if_verbose4_1(t, v_6);
        {
          ATerm f_33 = t;
          int g_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(g_33);
            }
          else
            {
              t = f_33;
              t = (ATerm) ATempty;
            }
          {
            ATerm x_6 (ATerm t)
            {
              ATerm y_6 (ATerm t)
              {
                t = term_h_33;
                return(t);
              }
              t = say_1(t, y_6);
              return(t);
            }
            t = if_verbose6_1(t, x_6);
            {
              ATerm d_40 = NULL;
              d_40 = t;
              if(((c_40 != NULL) && (c_40 != d_40)))
                _fail(d_40);
              else
                c_40 = d_40;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_g_31, not_null(c_40));
                {
                  t = table_putlist_1(t, table_append_0);
                  {
                    ATerm z_6 (ATerm t)
                    {
                      ATerm a_7 (ATerm t)
                      {
                        t = term_j_33;
                        return(t);
                      }
                      t = say_1(t, a_7);
                      return(t);
                    }
                    t = if_verbose6_1(t, z_6);
                    {
                      t = (ATerm) ATmakeAppl(sym__3, term_g_31, (ATerm)ATmakeAppl(sym_Imported_1, not_null(a_40)), (ATerm) ATempty);
                      {
                        t = table_put_0(t);
                        {
                          ATerm b_7 (ATerm t)
                          {
                            ATerm f_7 (ATerm t)
                            {
                              t = term_h_33;
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
  ATerm h_40 = NULL;
  h_40 = t;
  t = SSL_getenv(not_null(h_40));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm k_33 = t;
  int l_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_33;
      t = get_config_0(t);
      LocalPopChoice(l_33);
    }
  else
    {
      t = k_33;
      {
        ATerm n_33 = t;
        int p_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_r_33;
            t = getenv_0(t);
            LocalPopChoice(p_33);
          }
        else
          {
            t = n_33;
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
      t = term_u_33;
      return(t);
    }
    t = debug_1(t, p_7);
    return(t);
  }
  t = if_verbose5_1(t, o_7);
  {
    ATerm v_33;
    v_33 = t;
    {
      ATerm w_33 = t;
      int x_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_a_34;
          t = table_get_0(t);
          LocalPopChoice(x_33);
        }
      else
        {
          t = w_33;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = v_33;
    {
      ATerm q_7 (ATerm t)
      {
        ATerm r_7 (ATerm t)
        {
          t = term_b_34;
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
  ATerm e_34 = t;
  int f_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_7 (ATerm t)
      {
        ATerm t_7 (ATerm t)
        {
          t = term_g_34;
          return(t);
        }
        t = debug_1(t, t_7);
        return(t);
      }
      t = if_verbose5_1(t, s_7);
      {
        t = xtc_load_0(t);
        {
          ATerm k_34 = t;
          int s_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(s_34);
            }
          else
            {
              t = k_34;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm w_7 (ATerm t)
            {
              ATerm x_7 (ATerm t)
              {
                t = term_g_34;
                return(t);
              }
              t = debug_1(t, x_7);
              return(t);
            }
            t = if_verbose5_1(t, w_7);
          }
        }
      }
      LocalPopChoice(f_34);
    }
  else
    {
      t = e_34;
      {
        ATerm p_40 = NULL;
        ATerm s_40 = NULL;
        s_40 = t;
        if(((p_40 != NULL) && (p_40 != s_40)))
          _fail(s_40);
        else
          p_40 = s_40;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_34), not_null(p_40)), term_t_34);
          {
            t = error_0(t);
            {
              ATerm c_8 (ATerm t)
              {
                t = term_g_31;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm d_8 (ATerm t)
                    {
                      t = term_v_34;
                      return(t);
                    }
                    t = debug_1(t, d_8);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, c_8);
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
  ATerm v_40 = NULL;
  v_40 = t;
  t = SSL_string_to_int(not_null(v_40));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL;
  p_41 = t;
  n_41 :
  if(match_string(p_41, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(p_41) == AT_LIST) && !(ATisEmpty(p_41))))
        {
          q_41 = ATgetFirst((ATermList) p_41);
          r_41 = (ATerm) ATgetNext((ATermList) p_41);
          o_41 :
          if(((ATgetType(r_41) == AT_LIST) && !(ATisEmpty(r_41))))
            {
              s_41 = ATgetFirst((ATermList) r_41);
              t_41 = (ATerm) ATgetNext((ATermList) r_41);
              {
                ATerm x_41 = NULL;
                ATerm b_35;
                b_35 = t;
                {
                  t = not_null(q_41);
                  t = l_0(t);
                }
                t = b_35;
                {
                  ATerm y_41 = NULL;
                  t = not_null(s_41);
                  {
                    t = m_0(t);
                    {
                      y_41 = t;
                      if(((x_41 != NULL) && (x_41 != y_41)))
                        _fail(y_41);
                      else
                        x_41 = y_41;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(t_41)), not_null(x_41));
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
  ATerm g_42 = NULL,h_42 = NULL,i_42 = NULL;
  g_42 = t;
  f_42 :
  if(match_cons(g_42, sym__2))
    {
      h_42 = ATgetArgument(g_42, 0);
      i_42 = ATgetArgument(g_42, 1);
      {
        ATerm l_42 = NULL;
        ATerm m_42 = NULL,x_42 = NULL;
        ATerm v_42 = NULL;
        t = not_null(h_42);
        {
          ATerm c_35 = t;
          int h_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(h_35);
            }
          else
            {
              t = c_35;
              t = (ATerm) ATempty;
            }
          {
            v_42 = t;
            if(((m_42 != NULL) && (m_42 != v_42)))
              _fail(v_42);
            else
              m_42 = v_42;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_42), not_null(m_42));
          {
            ATerm i_35 = t;
            int j_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(j_35);
              }
            else
              {
                t = i_35;
                t = conc_more_lists_0(t);
              }
            {
              x_42 = t;
              if(((l_42 != NULL) && (l_42 != x_42)))
                _fail(x_42);
              else
                l_42 = x_42;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_o_29, not_null(h_42), not_null(l_42));
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
  ATerm j_43 = NULL,k_43 = NULL;
  ATerm m_35;
  m_35 = t;
  {
    ATerm l_43 = NULL,m_43 = NULL,n_43 = NULL;
    l_43 = t;
    g_43 :
    if(match_cons(l_43, sym__2))
      {
        m_43 = ATgetArgument(l_43, 0);
        n_43 = ATgetArgument(l_43, 1);
        {
          if(((j_43 != NULL) && (j_43 != m_43)))
            _fail(m_43);
          else
            j_43 = m_43;
          {
            if(((k_43 != NULL) && (k_43 != n_43)))
              _fail(n_43);
            else
              k_43 = n_43;
            t = SSL_table_remove(not_null(j_43), not_null(k_43));
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = m_35;
  return(t);
}
ATerm toggle_config_0 (ATerm t)
{
  ATerm r_43 = NULL,s_43 = NULL,t_43 = NULL;
  r_43 = t;
  q_43 :
  if(match_cons(r_43, sym__2))
    {
      s_43 = ATgetArgument(r_43, 0);
      t_43 = ATgetArgument(r_43, 1);
      {
        ATerm n_35 = t;
        int s_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = not_null(s_43);
            {
              t = get_config_0(t);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_o_29, not_null(s_43));
                t = table_remove_0(t);
              }
            }
            LocalPopChoice(s_35);
          }
        else
          {
            t = n_35;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(s_43), not_null(t_43));
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
  ATerm b_44 = NULL,c_44 = NULL,f_44 = NULL;
  b_44 = t;
  a_44 :
  if(match_cons(b_44, sym__2))
    {
      c_44 = ATgetArgument(b_44, 0);
      f_44 = ATgetArgument(b_44, 1);
      {
        ATerm y_44 = NULL;
        ATerm z_44 = NULL,b_45 = NULL;
        ATerm a_45 = NULL;
        t = not_null(c_44);
        {
          ATerm t_35 = t;
          int u_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(u_35);
            }
          else
            {
              t = t_35;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_44), not_null(f_44));
          {
            ATerm v_35 = t;
            int b_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(b_36);
              }
            else
              {
                t = v_35;
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
          t = (ATerm) ATmakeAppl(sym__3, term_o_29, not_null(c_44), not_null(y_44));
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
  ATerm c_36 = t;
  int f_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_8 (ATerm t)
      {
        ATerm n_46 = NULL;
        n_46 = t;
        j_45 :
        if(!(match_string(n_46, "-i")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm f_8 (ATerm t)
      {
        ATerm q_46 = NULL;
        ATerm r_46 = NULL;
        r_46 = t;
        if(((q_46 != NULL) && (q_46 != r_46)))
          _fail(r_46);
        else
          q_46 = r_46;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_y_23, not_null(q_46));
          t = set_config_0(t);
        }
        t = term_j_20;
        return(t);
      }
      ATerm g_8 (ATerm t)
      {
        t = term_g_36;
        return(t);
      }
      t = ArgOption_3(t, e_8, f_8, g_8);
      LocalPopChoice(f_36);
    }
  else
    {
      t = c_36;
      {
        ATerm h_36 = t;
        int i_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_8 (ATerm t)
            {
              ATerm s_46 = NULL;
              s_46 = t;
              l_45 :
              if(!(match_string(s_46, "-o")))
                {
                  if(!(match_string(s_46, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm j_8 (ATerm t)
            {
              ATerm t_46 = NULL;
              ATerm u_46 = NULL;
              u_46 = t;
              if(((t_46 != NULL) && (t_46 != u_46)))
                _fail(u_46);
              else
                t_46 = u_46;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_h_15, not_null(t_46));
                t = set_config_0(t);
              }
              t = term_j_20;
              return(t);
            }
            ATerm n_8 (ATerm t)
            {
              t = term_j_36;
              return(t);
            }
            t = ArgOption_3(t, h_8, j_8, n_8);
            LocalPopChoice(i_36);
          }
        else
          {
            t = h_36;
            {
              ATerm o_36 = t;
              int p_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_8 (ATerm t)
                  {
                    ATerm a_47 = NULL;
                    a_47 = t;
                    n_45 :
                    if(!(match_string(a_47, "-I")))
                      {
                        if(!(match_string(a_47, "--Include")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm s_8 (ATerm t)
                  {
                    ATerm b_47 = NULL;
                    ATerm c_47 = NULL;
                    c_47 = t;
                    if(((b_47 != NULL) && (b_47 != c_47)))
                      _fail(c_47);
                    else
                      b_47 = c_47;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_u_25, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_47)), term_u_25));
                      t = extend_config_0(t);
                    }
                    t = term_j_20;
                    return(t);
                  }
                  ATerm t_8 (ATerm t)
                  {
                    t = term_q_36;
                    return(t);
                  }
                  t = ArgOption_3(t, p_8, s_8, t_8);
                  LocalPopChoice(p_36);
                }
              else
                {
                  t = o_36;
                  {
                    ATerm r_36 = t;
                    int w_36 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm u_8 (ATerm t)
                        {
                          ATerm d_47 = NULL;
                          d_47 = t;
                          p_45 :
                          if(!(match_string(d_47, "--main")))
                            {
                              if(!(match_string(d_47, "-m")))
                                {
                                  _fail(t);
                                }
                            }
                          return(t);
                        }
                        ATerm v_8 (ATerm t)
                        {
                          ATerm e_47 = NULL;
                          ATerm f_47 = NULL;
                          f_47 = t;
                          if(((e_47 != NULL) && (e_47 != f_47)))
                            _fail(f_47);
                          else
                            e_47 = f_47;
                          {
                            t = (ATerm) ATmakeAppl(sym__2, term_o_20, not_null(e_47));
                            t = set_config_0(t);
                          }
                          t = term_j_20;
                          return(t);
                        }
                        ATerm w_8 (ATerm t)
                        {
                          t = term_x_36;
                          return(t);
                        }
                        t = ArgOption_3(t, u_8, v_8, w_8);
                        LocalPopChoice(w_36);
                      }
                    else
                      {
                        t = r_36;
                        {
                          ATerm z_36 = t;
                          int a_37 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm z_8 (ATerm t)
                              {
                                ATerm g_47 = NULL;
                                g_47 = t;
                                r_45 :
                                if(!(match_string(g_47, "--C-include")))
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              ATerm a_9 (ATerm t)
                              {
                                ATerm h_47 = NULL;
                                ATerm i_47 = NULL;
                                i_47 = t;
                                if(((h_47 != NULL) && (h_47 != i_47)))
                                  _fail(i_47);
                                else
                                  h_47 = i_47;
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, term_y_16, (ATerm) ATinsert(ATempty, not_null(h_47)));
                                  t = post_extend_config_0(t);
                                }
                                t = term_j_20;
                                return(t);
                              }
                              ATerm b_9 (ATerm t)
                              {
                                t = term_b_37;
                                return(t);
                              }
                              t = ArgOption_3(t, z_8, a_9, b_9);
                              LocalPopChoice(a_37);
                            }
                          else
                            {
                              t = z_36;
                              {
                                ATerm c_37 = t;
                                int h_37 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm c_9 (ATerm t)
                                    {
                                      ATerm j_47 = NULL;
                                      j_47 = t;
                                      t_45 :
                                      if(!(match_string(j_47, "-CI")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm j_9 (ATerm t)
                                    {
                                      ATerm k_47 = NULL;
                                      ATerm l_47 = NULL;
                                      l_47 = t;
                                      if(((k_47 != NULL) && (k_47 != l_47)))
                                        _fail(l_47);
                                      else
                                        k_47 = l_47;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, term_o_15, (ATerm) ATinsert(ATempty, not_null(k_47)));
                                        t = extend_config_0(t);
                                      }
                                      t = term_j_20;
                                      return(t);
                                    }
                                    ATerm k_9 (ATerm t)
                                    {
                                      t = term_i_37;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, c_9, j_9, k_9);
                                    LocalPopChoice(h_37);
                                  }
                                else
                                  {
                                    t = c_37;
                                    {
                                      ATerm j_37 = t;
                                      int l_37 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm l_9 (ATerm t)
                                          {
                                            ATerm m_47 = NULL;
                                            m_47 = t;
                                            v_45 :
                                            if(!(match_string(m_47, "-CL")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm m_9 (ATerm t)
                                          {
                                            ATerm n_47 = NULL;
                                            ATerm o_47 = NULL;
                                            o_47 = t;
                                            if(((n_47 != NULL) && (n_47 != o_47)))
                                              _fail(o_47);
                                            else
                                              n_47 = o_47;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, term_b_15, (ATerm) ATinsert(ATempty, not_null(n_47)));
                                              t = extend_config_0(t);
                                            }
                                            t = term_j_20;
                                            return(t);
                                          }
                                          ATerm p_9 (ATerm t)
                                          {
                                            t = term_m_37;
                                            return(t);
                                          }
                                          t = ArgOption_3(t, l_9, m_9, p_9);
                                          LocalPopChoice(l_37);
                                        }
                                      else
                                        {
                                          t = j_37;
                                          {
                                            ATerm n_37 = t;
                                            int t_37 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm q_9 (ATerm t)
                                                {
                                                  ATerm p_47 = NULL;
                                                  p_47 = t;
                                                  x_45 :
                                                  if(!(match_string(p_47, "-c")))
                                                    {
                                                      _fail(t);
                                                    }
                                                  return(t);
                                                }
                                                ATerm t_9 (ATerm t)
                                                {
                                                  t = term_u_37;
                                                  t = set_config_0(t);
                                                  t = term_j_20;
                                                  return(t);
                                                }
                                                ATerm u_9 (ATerm t)
                                                {
                                                  t = term_v_37;
                                                  return(t);
                                                }
                                                t = Option_3(t, q_9, t_9, u_9);
                                                LocalPopChoice(t_37);
                                              }
                                            else
                                              {
                                                t = n_37;
                                                {
                                                  ATerm y_37 = t;
                                                  int z_37 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm x_9 (ATerm t)
                                                      {
                                                        ATerm v_47 = NULL;
                                                        v_47 = t;
                                                        y_45 :
                                                        if(!(match_string(v_47, "--ast")))
                                                          {
                                                            _fail(t);
                                                          }
                                                        return(t);
                                                      }
                                                      ATerm y_9 (ATerm t)
                                                      {
                                                        t = term_c_38;
                                                        t = set_config_0(t);
                                                        t = term_j_20;
                                                        return(t);
                                                      }
                                                      ATerm b_10 (ATerm t)
                                                      {
                                                        t = term_d_38;
                                                        return(t);
                                                      }
                                                      t = Option_3(t, x_9, y_9, b_10);
                                                      LocalPopChoice(z_37);
                                                    }
                                                  else
                                                    {
                                                      t = y_37;
                                                      {
                                                        ATerm e_38 = t;
                                                        int f_38 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm c_10 (ATerm t)
                                                            {
                                                              ATerm w_47 = NULL;
                                                              w_47 = t;
                                                              a_46 :
                                                              if(!(match_string(w_47, "-F")))
                                                                {
                                                                  _fail(t);
                                                                }
                                                              return(t);
                                                            }
                                                            ATerm f_10 (ATerm t)
                                                            {
                                                              t = term_g_38;
                                                              t = set_config_0(t);
                                                              t = term_j_20;
                                                              return(t);
                                                            }
                                                            ATerm g_10 (ATerm t)
                                                            {
                                                              t = term_h_38;
                                                              return(t);
                                                            }
                                                            t = Option_3(t, c_10, f_10, g_10);
                                                            LocalPopChoice(f_38);
                                                          }
                                                        else
                                                          {
                                                            t = e_38;
                                                            {
                                                              ATerm i_38 = t;
                                                              int k_38 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm j_10 (ATerm t)
                                                                  {
                                                                    ATerm x_47 = NULL;
                                                                    x_47 = t;
                                                                    b_46 :
                                                                    if(!(match_string(x_47, "--keep")))
                                                                      {
                                                                        _fail(t);
                                                                      }
                                                                    return(t);
                                                                  }
                                                                  ATerm k_10 (ATerm t)
                                                                  {
                                                                    ATerm y_47 = NULL;
                                                                    ATerm d_48 = NULL;
                                                                    t = string_to_int_0(t);
                                                                    {
                                                                      d_48 = t;
                                                                      if(((y_47 != NULL) && (y_47 != d_48)))
                                                                        _fail(d_48);
                                                                      else
                                                                        y_47 = d_48;
                                                                    }
                                                                    {
                                                                      t = (ATerm) ATmakeAppl(sym__2, term_r_19, not_null(y_47));
                                                                      t = set_config_0(t);
                                                                    }
                                                                    t = term_j_20;
                                                                    return(t);
                                                                  }
                                                                  ATerm n_10 (ATerm t)
                                                                  {
                                                                    t = term_l_38;
                                                                    return(t);
                                                                  }
                                                                  t = ArgOption_3(t, j_10, k_10, n_10);
                                                                  LocalPopChoice(k_38);
                                                                }
                                                              else
                                                                {
                                                                  t = i_38;
                                                                  {
                                                                    ATerm q_38 = t;
                                                                    int r_38 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm o_10 (ATerm t)
                                                                        {
                                                                          ATerm e_48 = NULL;
                                                                          e_48 = t;
                                                                          d_46 :
                                                                          if(!(match_string(e_48, "--fusion")))
                                                                            {
                                                                              _fail(t);
                                                                            }
                                                                          return(t);
                                                                        }
                                                                        ATerm r_10 (ATerm t)
                                                                        {
                                                                          t = term_v_38;
                                                                          t = toggle_config_0(t);
                                                                          t = term_j_20;
                                                                          return(t);
                                                                        }
                                                                        ATerm s_10 (ATerm t)
                                                                        {
                                                                          t = term_w_38;
                                                                          return(t);
                                                                        }
                                                                        t = Option_3(t, o_10, r_10, s_10);
                                                                        LocalPopChoice(r_38);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = q_38;
                                                                        {
                                                                          ATerm x_38 = t;
                                                                          int y_38 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              ATerm v_10 (ATerm t)
                                                                              {
                                                                                ATerm f_48 = NULL;
                                                                                f_48 = t;
                                                                                e_46 :
                                                                                if(!(match_string(f_48, "--trace-all")))
                                                                                  {
                                                                                    _fail(t);
                                                                                  }
                                                                                return(t);
                                                                              }
                                                                              ATerm w_10 (ATerm t)
                                                                              {
                                                                                t = term_b_39;
                                                                                t = set_config_0(t);
                                                                                t = term_j_20;
                                                                                return(t);
                                                                              }
                                                                              ATerm z_10 (ATerm t)
                                                                              {
                                                                                t = term_c_39;
                                                                                return(t);
                                                                              }
                                                                              t = Option_3(t, v_10, w_10, z_10);
                                                                              LocalPopChoice(y_38);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = x_38;
                                                                              {
                                                                                ATerm d_39 = t;
                                                                                int e_39 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm a_11 (ATerm t)
                                                                                    {
                                                                                      ATerm p_48 = NULL;
                                                                                      p_48 = t;
                                                                                      f_46 :
                                                                                      if(!(match_string(p_48, "-t")))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm d_11 (ATerm t)
                                                                                    {
                                                                                      ATerm q_48 = NULL;
                                                                                      ATerm r_48 = NULL;
                                                                                      r_48 = t;
                                                                                      if(((q_48 != NULL) && (q_48 != r_48)))
                                                                                        _fail(r_48);
                                                                                      else
                                                                                        q_48 = r_48;
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym__2, term_f_39, (ATerm) ATinsert(ATempty, not_null(q_48)));
                                                                                        t = extend_config_0(t);
                                                                                      }
                                                                                      t = term_j_20;
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm e_11 (ATerm t)
                                                                                    {
                                                                                      t = term_g_39;
                                                                                      return(t);
                                                                                    }
                                                                                    t = ArgOption_3(t, a_11, d_11, e_11);
                                                                                    LocalPopChoice(e_39);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = d_39;
                                                                                    {
                                                                                      ATerm i_39 = t;
                                                                                      int k_39 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm h_11 (ATerm t)
                                                                                          {
                                                                                            ATerm s_48 = NULL;
                                                                                            s_48 = t;
                                                                                            h_46 :
                                                                                            if(!(match_string(s_48, "--verbose")))
                                                                                              {
                                                                                                _fail(t);
                                                                                              }
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm i_11 (ATerm t)
                                                                                          {
                                                                                            ATerm t_48 = NULL;
                                                                                            ATerm u_48 = NULL;
                                                                                            t = string_to_int_0(t);
                                                                                            {
                                                                                              u_48 = t;
                                                                                              if(((t_48 != NULL) && (t_48 != u_48)))
                                                                                                _fail(u_48);
                                                                                              else
                                                                                                t_48 = u_48;
                                                                                            }
                                                                                            {
                                                                                              t = (ATerm) ATmakeAppl(sym__2, term_v_14, not_null(t_48));
                                                                                              t = set_config_0(t);
                                                                                            }
                                                                                            t = term_j_20;
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm l_11 (ATerm t)
                                                                                          {
                                                                                            t = term_l_39;
                                                                                            return(t);
                                                                                          }
                                                                                          t = ArgOption_3(t, h_11, i_11, l_11);
                                                                                          LocalPopChoice(k_39);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = i_39;
                                                                                          {
                                                                                            ATerm m_39 = t;
                                                                                            int n_39 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm m_11 (ATerm t)
                                                                                                {
                                                                                                  ATerm v_48 = NULL;
                                                                                                  v_48 = t;
                                                                                                  j_46 :
                                                                                                  if(!(match_string(v_48, "-S")))
                                                                                                    {
                                                                                                      if(!(match_string(v_48, "--silent")))
                                                                                                        {
                                                                                                          _fail(t);
                                                                                                        }
                                                                                                    }
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm p_11 (ATerm t)
                                                                                                {
                                                                                                  t = term_o_39;
                                                                                                  t = set_config_0(t);
                                                                                                  t = term_j_20;
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm q_11 (ATerm t)
                                                                                                {
                                                                                                  t = term_p_39;
                                                                                                  return(t);
                                                                                                }
                                                                                                t = Option_3(t, m_11, p_11, q_11);
                                                                                                LocalPopChoice(n_39);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = m_39;
                                                                                                {
                                                                                                  ATerm q_39 = t;
                                                                                                  int r_39 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      ATerm t_11 (ATerm t)
                                                                                                      {
                                                                                                        ATerm w_48 = NULL;
                                                                                                        w_48 = t;
                                                                                                        k_46 :
                                                                                                        if(!(match_string(w_48, "-h")))
                                                                                                          {
                                                                                                            if(!(match_string(w_48, "--help")))
                                                                                                              {
                                                                                                                _fail(t);
                                                                                                              }
                                                                                                          }
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm u_11 (ATerm t)
                                                                                                      {
                                                                                                        t = term_t_39;
                                                                                                        t = set_config_0(t);
                                                                                                        t = term_j_20;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm v_11 (ATerm t)
                                                                                                      {
                                                                                                        t = term_u_39;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      t = Option_3(t, t_11, u_11, v_11);
                                                                                                      LocalPopChoice(r_39);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = q_39;
                                                                                                      {
                                                                                                        ATerm w_39 = t;
                                                                                                        int x_39 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm a_12 (ATerm t)
                                                                                                            {
                                                                                                              ATerm x_48 = NULL;
                                                                                                              x_48 = t;
                                                                                                              l_46 :
                                                                                                              if(!(match_string(x_48, "--man")))
                                                                                                                {
                                                                                                                  _fail(t);
                                                                                                                }
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm b_12 (ATerm t)
                                                                                                            {
                                                                                                              t = term_z_39;
                                                                                                              t = set_config_0(t);
                                                                                                              t = term_j_20;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm c_12 (ATerm t)
                                                                                                            {
                                                                                                              t = term_b_40;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            t = Option_3(t, a_12, b_12, c_12);
                                                                                                            LocalPopChoice(x_39);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = w_39;
                                                                                                            {
                                                                                                              ATerm f_12 (ATerm t)
                                                                                                              {
                                                                                                                ATerm y_48 = NULL;
                                                                                                                y_48 = t;
                                                                                                                m_46 :
                                                                                                                if(!(match_string(y_48, "-v")))
                                                                                                                  {
                                                                                                                    if(!(match_string(y_48, "--version")))
                                                                                                                      {
                                                                                                                        _fail(t);
                                                                                                                      }
                                                                                                                  }
                                                                                                                return(t);
                                                                                                              }
                                                                                                              ATerm g_12 (ATerm t)
                                                                                                              {
                                                                                                                t = term_f_40;
                                                                                                                t = set_config_0(t);
                                                                                                                t = term_j_20;
                                                                                                                return(t);
                                                                                                              }
                                                                                                              ATerm h_12 (ATerm t)
                                                                                                              {
                                                                                                                t = term_g_40;
                                                                                                                return(t);
                                                                                                              }
                                                                                                              t = Option_3(t, f_12, g_12, h_12);
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm k_49 = NULL;
  k_49 = t;
  t = SSL_table_destroy(not_null(k_49));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm o_49 = NULL,p_49 = NULL,q_49 = NULL;
  o_49 = t;
  n_49 :
  if(((ATgetType(o_49) == AT_LIST) && ATisEmpty(o_49)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(o_49) == AT_LIST) && !(ATisEmpty(o_49))))
        {
          p_49 = ATgetFirst((ATermList) o_49);
          q_49 = (ATerm) ATgetNext((ATermList) o_49);
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
  ATerm i_40;
  i_40 = t;
  {
    ATerm t_49 = NULL;
    ATerm w_49 = NULL;
    ATerm j_40 = t;
    int k_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(k_40);
      }
    else
      {
        t = j_40;
        {
          ATerm u_49 = NULL;
          ATerm v_49 = NULL;
          v_49 = t;
          if(((u_49 != NULL) && (u_49 != v_49)))
            _fail(v_49);
          else
            u_49 = v_49;
          t = (ATerm) ATinsert(ATempty, not_null(u_49));
        }
      }
    {
      w_49 = t;
      if(((t_49 != NULL) && (t_49 != w_49)))
        _fail(w_49);
      else
        t_49 = w_49;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_m_16, not_null(t_49));
      t = printnl_0(t);
    }
  }
  t = i_40;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_0 (ATerm))
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_41), term_i_30), term_z_40), term_y_40), term_x_40), term_i_30), term_w_40), term_u_40), term_t_40), term_r_40), term_q_40), term_o_40), term_n_40), term_m_40), term_l_40);
  return(t);
}
ATerm map_1 (ATerm t, ATerm i_72 (ATerm))
{
  ATerm z_49 (ATerm t)
  {
    ATerm b_41 = t;
    int c_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(c_41);
      }
    else
      {
        t = b_41;
        t = Cons_2(t, i_72, z_49);
      }
    return(t);
  }
  t = z_49(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm g_50 = NULL,h_50 = NULL,i_50 = NULL;
  i_50 = t;
  f_50 :
  if(((ATgetType(i_50) == AT_LIST) && !(ATisEmpty(i_50))))
    {
      g_50 = ATgetFirst((ATermList) i_50);
      h_50 = (ATerm) ATgetNext((ATermList) i_50);
      {
        ATerm l_50 = NULL;
        t = not_null(h_50);
        {
          ATerm d_41;
          d_41 = t;
          {
            ATerm m_50 = NULL,o_50 = NULL,q_50 = NULL;
            ATerm e_41;
            e_41 = t;
            {
              ATerm n_50 = NULL;
              t = j_0(t);
              {
                n_50 = t;
                if(((m_50 != NULL) && (m_50 != n_50)))
                  _fail(n_50);
                else
                  m_50 = n_50;
              }
            }
            t = e_41;
            {
              ATerm p_50 = NULL;
              t = not_null(g_50);
              {
                t = i_0(t);
                {
                  p_50 = t;
                  if(((o_50 != NULL) && (o_50 != p_50)))
                    _fail(p_50);
                  else
                    o_50 = p_50;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(m_50)), not_null(o_50));
                {
                  q_50 = t;
                  if(((l_50 != NULL) && (l_50 != q_50)))
                    _fail(q_50);
                  else
                    l_50 = q_50;
                }
              }
            }
          }
          t = d_41;
          {
            ATerm l_12 (ATerm t)
            {
              t = not_null(l_50);
              return(t);
            }
            t = reverse_acc_2(t, i_0, l_12);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(i_50) == AT_LIST) && ATisEmpty(i_50)))
        {
          {
            t = term_j_20;
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
  ATerm o_12 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, o_12);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm h_0 (ATerm))
{
  ATerm x_50 = NULL;
  ATerm y_50 = NULL;
  t = term_j_20;
  {
    t = h_0(t);
    {
      y_50 = t;
      if(((x_50 != NULL) && (x_50 != y_50)))
        _fail(y_50);
      else
        x_50 = y_50;
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_41), not_null(x_50)), term_j_41), term_i_30), term_i_41), term_i_30), term_h_41), term_g_41), term_i_30), term_f_41);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm a_59 (ATerm))
{
  ATerm f_51 = NULL,g_51 = NULL;
  f_51 = t;
  e_51 :
  if(match_cons(f_51, sym_Program_1))
    {
      g_51 = ATgetArgument(f_51, 0);
      {
        ATerm j_51 = NULL,y_51 = NULL;
        ATerm x_51 = NULL;
        t = SSLgetAnnotations(not_null(f_51));
        {
          x_51 = t;
          if(((j_51 != NULL) && (j_51 != x_51)))
            _fail(x_51);
          else
            j_51 = x_51;
        }
        {
          t = not_null(g_51);
          {
            ATerm e_52 = NULL;
            t = a_59(t);
            {
              y_51 = t;
              {
                ATerm f_52 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(y_51)), not_null(j_51));
                {
                  f_52 = t;
                  if(((e_52 != NULL) && (e_52 != f_52)))
                    _fail(f_52);
                  else
                    e_52 = f_52;
                }
                t = not_null(e_52);
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
  ATerm z_52 = NULL;
  ATerm l_41 = t;
  int m_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_53 = NULL;
      t = term_u_41;
      {
        t = get_config_0(t);
        {
          a_53 = t;
          if(((z_52 != NULL) && (z_52 != a_53)))
            _fail(a_53);
          else
            z_52 = a_53;
        }
      }
      LocalPopChoice(m_41);
    }
  else
    {
      t = l_41;
      {
        ATerm p_12 (ATerm t)
        {
          ATerm q_12 (ATerm t)
          {
            ATerm b_53 = NULL;
            b_53 = t;
            if(((z_52 != NULL) && (z_52 != b_53)))
              _fail(b_53);
            else
              z_52 = b_53;
            return(t);
          }
          t = Program_1(t, q_12);
          return(t);
        }
        t = fetch_1(t, p_12);
      }
    }
  {
    ATerm v_41 = t;
    int w_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_12 (ATerm t)
        {
          t = not_null(z_52);
          return(t);
        }
        t = short_description_1(t, r_12);
        t = echo_0(t);
        LocalPopChoice(w_41);
      }
    else
      {
        t = v_41;
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
              ATerm w_12 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = reverse_acc_2(t, _id, w_12);
              {
                ATerm x_12 (ATerm t)
                {
                  ATerm c_53 = NULL;
                  ATerm d_53 = NULL;
                  d_53 = t;
                  if(((c_53 != NULL) && (c_53 != d_53)))
                    _fail(d_53);
                  else
                    c_53 = d_53;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_53)), term_d_42);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, x_12);
                {
                  ATerm e_42 = t;
                  int j_42 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm e_53 = NULL;
                      ATerm f_53 = NULL;
                      ATerm y_12 (ATerm t)
                      {
                        t = not_null(z_52);
                        return(t);
                      }
                      t = long_description_1(t, y_12);
                      {
                        f_53 = t;
                        if(((e_53 != NULL) && (e_53 != f_53)))
                          _fail(f_53);
                        else
                          e_53 = f_53;
                      }
                      {
                        t = (ATerm) ATinsert(CheckATermList(not_null(e_53)), term_i_30);
                        t = echo_0(t);
                      }
                      LocalPopChoice(j_42);
                    }
                  else
                    {
                      t = e_42;
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
  ATerm k_42;
  k_42 = t;
  {
    ATerm l_53 = NULL;
    ATerm m_53 = NULL;
    m_53 = t;
    if(((l_53 != NULL) && (l_53 != m_53)))
      _fail(m_53);
    else
      l_53 = m_53;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_l_15, (ATerm) ATinsert(ATempty, not_null(l_53)));
      t = printnl_0(t);
    }
  }
  t = k_42;
  return(t);
}
ATerm say_1 (ATerm t, ATerm h_83 (ATerm))
{
  ATerm n_42;
  n_42 = t;
  {
    t = h_83(t);
    t = debug_0(t);
  }
  t = n_42;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm b_59 (ATerm))
{
  ATerm t_53 = NULL,u_53 = NULL;
  t_53 = t;
  s_53 :
  if(match_cons(t_53, sym_Undefined_1))
    {
      u_53 = ATgetArgument(t_53, 0);
      {
        ATerm x_53 = NULL,z_53 = NULL;
        ATerm y_53 = NULL;
        t = SSLgetAnnotations(not_null(t_53));
        {
          y_53 = t;
          if(((x_53 != NULL) && (x_53 != y_53)))
            _fail(y_53);
          else
            x_53 = y_53;
        }
        {
          t = not_null(u_53);
          {
            ATerm b_54 = NULL;
            t = b_59(t);
            {
              z_53 = t;
              {
                ATerm c_54 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(z_53)), not_null(x_53));
                {
                  c_54 = t;
                  if(((b_54 != NULL) && (b_54 != c_54)))
                    _fail(c_54);
                  else
                    b_54 = c_54;
                }
                t = not_null(b_54);
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
ATerm fetch_1 (ATerm t, ATerm r_72 (ATerm))
{
  ATerm j_54 (ATerm t)
  {
    ATerm o_42 = t;
    int p_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, r_72, _id);
        LocalPopChoice(p_42);
      }
    else
      {
        t = o_42;
        t = Cons_2(t, _id, j_54);
      }
    return(t);
  }
  t = j_54(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm f_87 (ATerm))
{
  t = fetch_1(t, f_87);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm o_54 = NULL;
  o_54 = t;
  n_54 :
  if(match_cons(o_54, sym_Help_0))
    {
      ATerm q_54 = NULL,s_54 = NULL;
      ATerm q_42;
      q_42 = t;
      {
        ATerm r_54 = NULL;
        t = SSLgetAnnotations(not_null(o_54));
        {
          r_54 = t;
          if(((q_54 != NULL) && (q_54 != r_54)))
            _fail(r_54);
          else
            q_54 = r_54;
        }
      }
      t = q_42;
      {
        ATerm t_54 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(q_54));
        {
          t_54 = t;
          if(((s_54 != NULL) && (s_54 != t_54)))
            _fail(t_54);
          else
            s_54 = t_54;
        }
        t = not_null(s_54);
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
  ATerm z_54 = NULL,a_55 = NULL,b_55 = NULL;
  z_54 = t;
  y_54 :
  if(match_cons(z_54, sym__2))
    {
      a_55 = ATgetArgument(z_54, 0);
      b_55 = ATgetArgument(z_54, 1);
      t = SSL_table_get(not_null(a_55), not_null(b_55));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm i_55 = NULL,j_55 = NULL,k_55 = NULL,l_55 = NULL;
  i_55 = t;
  h_55 :
  if(match_cons(i_55, sym__3))
    {
      j_55 = ATgetArgument(i_55, 0);
      k_55 = ATgetArgument(i_55, 1);
      l_55 = ATgetArgument(i_55, 2);
      {
        ATerm r_42;
        r_42 = t;
        {
          ATerm p_55 = NULL;
          ATerm q_55 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_55), not_null(k_55));
          {
            ATerm s_42 = t;
            int t_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(t_42);
              }
            else
              {
                t = s_42;
                t = (ATerm) ATempty;
              }
            {
              q_55 = t;
              if(((p_55 != NULL) && (p_55 != q_55)))
                _fail(q_55);
              else
                p_55 = q_55;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_55), not_null(k_55), (ATerm) ATinsert(CheckATermList(not_null(p_55)), not_null(l_55)));
            t = table_put_0(t);
          }
        }
        t = r_42;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm k_88 (ATerm))
{
  ATerm u_55 = NULL;
  ATerm v_55 = NULL;
  t = term_j_20;
  {
    t = k_88(t);
    {
      v_55 = t;
      if(((u_55 != NULL) && (u_55 != v_55)))
        _fail(v_55);
      else
        u_55 = v_55;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_a_42, term_b_42, not_null(u_55));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm b_56 = NULL,c_56 = NULL,d_56 = NULL;
  b_56 = t;
  a_56 :
  if(match_string(b_56, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(b_56) == AT_LIST) && !(ATisEmpty(b_56))))
        {
          c_56 = ATgetFirst((ATermList) b_56);
          d_56 = (ATerm) ATgetNext((ATermList) b_56);
          {
            ATerm g_56 = NULL;
            ATerm u_42;
            u_42 = t;
            {
              t = not_null(c_56);
              t = a_0(t);
            }
            t = u_42;
            {
              ATerm h_56 = NULL;
              t = term_j_20;
              {
                t = d_0(t);
                {
                  h_56 = t;
                  if(((g_56 != NULL) && (g_56 != h_56)))
                    _fail(h_56);
                  else
                    g_56 = h_56;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(d_56)), not_null(g_56));
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
  ATerm z_12 (ATerm t)
  {
    ATerm m_56 = NULL;
    m_56 = t;
    l_56 :
    if(!(match_string(m_56, "--help")))
      {
        if(!(match_string(m_56, "-h")))
          {
            if(!(match_string(m_56, "-?")))
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
      t = term_w_42;
    }
    return(t);
  }
  ATerm f_13 (ATerm t)
  {
    t = term_y_42;
    return(t);
  }
  t = Option_3(t, z_12, e_13, f_13);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm p_56 = NULL,q_56 = NULL,r_56 = NULL;
  p_56 = t;
  o_56 :
  if(((ATgetType(p_56) == AT_LIST) && !(ATisEmpty(p_56))))
    {
      q_56 = ATgetFirst((ATermList) p_56);
      r_56 = (ATerm) ATgetNext((ATermList) p_56);
      t = (ATerm) ATinsert(CheckATermList(not_null(r_56)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(q_56)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm i_88 (ATerm))
{
  ATerm z_42;
  z_42 = t;
  {
    ATerm a_43 = t;
    int b_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_c_43;
        t = i_88(t);
        LocalPopChoice(b_43);
      }
    else
      {
        t = a_43;
        {
        }
      }
  }
  t = z_42;
  {
    ATerm g_13 (ATerm t)
    {
      ATerm z_56 = NULL;
      ATerm d_43;
      d_43 = t;
      {
        ATerm x_56 = NULL;
        ATerm y_56 = NULL;
        y_56 = t;
        if(((x_56 != NULL) && (x_56 != y_56)))
          _fail(y_56);
        else
          x_56 = y_56;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_u_41, not_null(x_56));
          t = set_config_0(t);
        }
      }
      t = d_43;
      {
        ATerm a_57 = NULL;
        a_57 = t;
        if(((z_56 != NULL) && (z_56 != a_57)))
          _fail(a_57);
        else
          z_56 = a_57;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(z_56));
      }
      return(t);
    }
    ATerm h_13 (ATerm t)
    {
      ATerm e_43 = t;
      int f_43 = stack_ptr;
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
                t = i_88(t);
                t = Cons_2(t, _id, h_13);
              }
            }
          LocalPopChoice(f_43);
        }
      else
        {
          t = e_43;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, g_13, h_13);
  }
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm h_88 (ATerm))
{
  ATerm f_57 = NULL;
  ATerm o_43;
  o_43 = t;
  {
    t = term_p_43;
    t = table_put_0(t);
  }
  t = o_43;
  {
    ATerm i_13 (ATerm t)
    {
      ATerm u_43 = t;
      int v_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_88(t);
          LocalPopChoice(v_43);
        }
      else
        {
          t = u_43;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, i_13);
    {
      ATerm w_43 = t;
      int x_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_43;
          y_43 = t;
          {
            ATerm z_43 = t;
            int d_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_s_39;
                t = get_config_0(t);
                LocalPopChoice(d_44);
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
              t = term_n_14;
              t = exit_0(t);
            }
          }
          LocalPopChoice(x_43);
        }
      else
        {
          t = w_43;
          {
            ATerm e_44 = t;
            int g_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_13 (ATerm t)
                {
                  ATerm q_13 (ATerm t)
                  {
                    ATerm g_57 = NULL;
                    g_57 = t;
                    if(((f_57 != NULL) && (f_57 != g_57)))
                      _fail(g_57);
                    else
                      f_57 = g_57;
                    return(t);
                  }
                  t = Undefined_1(t, q_13);
                  return(t);
                }
                t = fetch_1(t, l_13);
                {
                  ATerm r_13 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_57)), term_h_44);
                    return(t);
                  }
                  t = say_1(t, r_13);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_a_22;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(g_44);
              }
            else
              {
                t = e_44;
                {
                }
              }
          }
        }
      {
        ATerm i_44;
        i_44 = t;
        {
          t = term_a_42;
          t = table_destroy_0(t);
        }
        t = i_44;
      }
    }
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm k_57 = NULL,l_57 = NULL,m_57 = NULL;
  ATerm j_44;
  j_44 = t;
  {
    ATerm n_57 = NULL,o_57 = NULL,p_57 = NULL,q_57 = NULL;
    n_57 = t;
    j_57 :
    if(match_cons(n_57, sym__3))
      {
        o_57 = ATgetArgument(n_57, 0);
        p_57 = ATgetArgument(n_57, 1);
        q_57 = ATgetArgument(n_57, 2);
        {
          if(((k_57 != NULL) && (k_57 != o_57)))
            _fail(o_57);
          else
            k_57 = o_57;
          {
            if(((l_57 != NULL) && (l_57 != p_57)))
              _fail(p_57);
            else
              l_57 = p_57;
            {
              if(((m_57 != NULL) && (m_57 != q_57)))
                _fail(q_57);
              else
                m_57 = q_57;
              t = SSL_table_put(not_null(k_57), not_null(l_57), not_null(m_57));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = j_44;
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm u_57 = NULL,v_57 = NULL,w_57 = NULL;
  u_57 = t;
  t_57 :
  if(match_cons(u_57, sym__2))
    {
      v_57 = ATgetArgument(u_57, 0);
      w_57 = ATgetArgument(u_57, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_o_29, not_null(v_57), not_null(w_57));
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
  ATerm k_44 = t;
  int l_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(l_44);
    }
  else
    {
      t = k_44;
      {
        ATerm c_58 = NULL,d_58 = NULL,e_58 = NULL;
        c_58 = t;
        b_58 :
        if(((ATgetType(c_58) == AT_LIST) && !(ATisEmpty(c_58))))
          {
            d_58 = ATgetFirst((ATermList) c_58);
            e_58 = (ATerm) ATgetNext((ATermList) c_58);
            {
              t = not_null(d_58);
              {
                ATerm s_13 (ATerm t)
                {
                  t = not_null(e_58);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, s_13);
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
  ATerm o_58 = NULL;
  ATerm q_58 = NULL;
  o_58 = t;
  {
    ATerm r_58 = NULL;
    ATerm t_58 = NULL,u_58 = NULL,v_58 = NULL;
    t = not_null(o_58);
    {
      r_58 = t;
      {
        t = SSL_explode_term(not_null(r_58));
        {
          t_58 = t;
          m_58 :
          if(match_cons(t_58, sym__2))
            {
              u_58 = ATgetArgument(t_58, 0);
              v_58 = ATgetArgument(t_58, 1);
              n_58 :
              if(match_string(u_58, ""))
                {
                  if(((q_58 != NULL) && (q_58 != v_58)))
                    _fail(v_58);
                  else
                    q_58 = v_58;
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
      t = not_null(q_58);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm f_59 = NULL;
  f_59 = t;
  e_59 :
  if(((ATgetType(f_59) == AT_LIST) && ATisEmpty(f_59)))
    {
      {
        ATerm h_59 = NULL,k_59 = NULL;
        ATerm m_44;
        m_44 = t;
        {
          ATerm i_59 = NULL;
          t = SSLgetAnnotations(not_null(f_59));
          {
            i_59 = t;
            if(((h_59 != NULL) && (h_59 != i_59)))
              _fail(i_59);
            else
              h_59 = i_59;
          }
        }
        t = m_44;
        {
          ATerm l_59 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(h_59));
          {
            l_59 = t;
            if(((k_59 != NULL) && (k_59 != l_59)))
              _fail(l_59);
            else
              k_59 = l_59;
          }
          t = not_null(k_59);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm x_72 (ATerm))
{
  ATerm p_59 (ATerm t)
  {
    ATerm n_44 = t;
    int o_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, p_59);
        LocalPopChoice(o_44);
      }
    else
      {
        t = n_44;
        {
          t = Nil_0(t);
          t = x_72(t);
        }
      }
    return(t);
  }
  t = p_59(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm s_59 = NULL,t_59 = NULL,u_59 = NULL;
  s_59 = t;
  r_59 :
  if(match_cons(s_59, sym__2))
    {
      t_59 = ATgetArgument(s_59, 0);
      u_59 = ATgetArgument(s_59, 1);
      {
        t = not_null(t_59);
        {
          ATerm t_13 (ATerm t)
          {
            t = not_null(u_59);
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
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm p_44 = t;
  int q_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(q_44);
    }
  else
    {
      t = p_44;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm x_52 (ATerm), ATerm y_52 (ATerm))
{
  ATerm e_60 = NULL,f_60 = NULL,g_60 = NULL;
  e_60 = t;
  d_60 :
  if(match_cons(e_60, sym__2))
    {
      f_60 = ATgetArgument(e_60, 0);
      g_60 = ATgetArgument(e_60, 1);
      {
        ATerm k_60 = NULL,m_60 = NULL;
        ATerm l_60 = NULL;
        t = SSLgetAnnotations(not_null(e_60));
        {
          l_60 = t;
          if(((k_60 != NULL) && (k_60 != l_60)))
            _fail(l_60);
          else
            k_60 = l_60;
        }
        {
          t = not_null(f_60);
          {
            ATerm o_60 = NULL;
            t = x_52(t);
            {
              m_60 = t;
              {
                t = not_null(g_60);
                {
                  ATerm q_60 = NULL;
                  t = y_52(t);
                  {
                    o_60 = t;
                    {
                      ATerm r_60 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(m_60), not_null(o_60)), not_null(k_60));
                      {
                        r_60 = t;
                        if(((q_60 != NULL) && (q_60 != r_60)))
                          _fail(r_60);
                        else
                          q_60 = r_60;
                      }
                      t = not_null(q_60);
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
    ATerm r_44 = t;
    int s_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(s_44);
      }
    else
      {
        t = r_44;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm y_60 = NULL;
  y_60 = t;
  t = SSL_implode_string(not_null(y_60));
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm g_54 (ATerm), ATerm h_54 (ATerm))
{
  ATerm h_61 = NULL,i_61 = NULL,j_61 = NULL;
  h_61 = t;
  g_61 :
  if(((ATgetType(h_61) == AT_LIST) && !(ATisEmpty(h_61))))
    {
      i_61 = ATgetFirst((ATermList) h_61);
      j_61 = (ATerm) ATgetNext((ATermList) h_61);
      {
        ATerm n_61 = NULL,p_61 = NULL;
        ATerm o_61 = NULL;
        t = SSLgetAnnotations(not_null(h_61));
        {
          o_61 = t;
          if(((n_61 != NULL) && (n_61 != o_61)))
            _fail(o_61);
          else
            n_61 = o_61;
        }
        {
          t = not_null(i_61);
          {
            ATerm r_61 = NULL;
            t = g_54(t);
            {
              p_61 = t;
              {
                t = not_null(j_61);
                {
                  ATerm t_61 = NULL;
                  t = h_54(t);
                  {
                    r_61 = t;
                    {
                      ATerm u_61 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(r_61)), not_null(p_61)), not_null(n_61));
                      {
                        u_61 = t;
                        if(((t_61 != NULL) && (t_61 != u_61)))
                          _fail(u_61);
                        else
                          t_61 = u_61;
                      }
                      t = not_null(t_61);
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
  ATerm b_62 = NULL;
  b_62 = t;
  t = SSL_explode_string(not_null(b_62));
  return(t);
}
ATerm get_path_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm t_44 = t;
    int u_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_62 (ATerm t)
        {
          ATerm v_44 = t;
          int w_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, g_62);
              LocalPopChoice(w_44);
            }
          else
            {
              t = v_44;
              {
                ATerm u_13 (ATerm t)
                {
                  ATerm f_62 = NULL;
                  f_62 = t;
                  e_62 :
                  if(!(match_int(f_62, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                ATerm v_13 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = Cons_2(t, u_13, v_13);
              }
            }
          return(t);
        }
        t = g_62(t);
        LocalPopChoice(u_44);
      }
    else
      {
        t = t_44;
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
    ATerm u_62 = NULL,w_62 = NULL,y_62 = NULL,a_63 = NULL,e_63 = NULL,i_63 = NULL,m_63 = NULL,q_63 = NULL;
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
                  ATerm v_62 = NULL;
                  t = term_h_45;
                  {
                    t = xtc_find_path_0(t);
                    {
                      v_62 = t;
                      if(((u_62 != NULL) && (u_62 != v_62)))
                        _fail(v_62);
                      else
                        u_62 = v_62;
                    }
                  }
                }
                t = g_45;
                {
                  ATerm i_45;
                  i_45 = t;
                  {
                    ATerm x_62 = NULL;
                    t = term_k_45;
                    {
                      t = xtc_find_path_0(t);
                      {
                        x_62 = t;
                        if(((w_62 != NULL) && (w_62 != x_62)))
                          _fail(x_62);
                        else
                          w_62 = x_62;
                      }
                    }
                  }
                  t = i_45;
                  {
                    ATerm z_62 = NULL;
                    t = term_m_45;
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
                      t = (ATerm) ATmakeAppl(sym__2, term_u_25, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(y_62)), term_u_25), not_null(w_62)), term_u_25), not_null(u_62)), term_u_25));
                      {
                        t = set_config_0(t);
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_y_16, (ATerm) ATinsert(ATinsert(ATempty, term_q_45), term_o_45));
                          {
                            t = set_config_0(t);
                            {
                              ATerm s_45;
                              s_45 = t;
                              {
                                ATerm b_63 = NULL,d_63 = NULL;
                                ATerm c_63 = NULL;
                                t = term_u_45;
                                {
                                  t = xtc_find_path_0(t);
                                  {
                                    c_63 = t;
                                    if(((b_63 != NULL) && (b_63 != c_63)))
                                      _fail(c_63);
                                    else
                                      b_63 = c_63;
                                  }
                                }
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(b_63), term_w_45);
                                  {
                                    t = conc_strings_0(t);
                                    {
                                      d_63 = t;
                                      if(((a_63 != NULL) && (a_63 != d_63)))
                                        _fail(d_63);
                                      else
                                        a_63 = d_63;
                                    }
                                  }
                                }
                              }
                              t = s_45;
                              {
                                ATerm z_45;
                                z_45 = t;
                                {
                                  ATerm f_63 = NULL,h_63 = NULL;
                                  ATerm g_63 = NULL;
                                  t = term_u_45;
                                  {
                                    t = xtc_find_path_0(t);
                                    {
                                      g_63 = t;
                                      if(((f_63 != NULL) && (f_63 != g_63)))
                                        _fail(g_63);
                                      else
                                        f_63 = g_63;
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(f_63), term_w_45);
                                    {
                                      t = conc_strings_0(t);
                                      {
                                        h_63 = t;
                                        if(((e_63 != NULL) && (e_63 != h_63)))
                                          _fail(h_63);
                                        else
                                          e_63 = h_63;
                                      }
                                    }
                                  }
                                }
                                t = z_45;
                                {
                                  ATerm j_63 = NULL,l_63 = NULL;
                                  ATerm k_63 = NULL;
                                  t = term_c_46;
                                  {
                                    t = xtc_find_path_0(t);
                                    {
                                      k_63 = t;
                                      if(((j_63 != NULL) && (j_63 != k_63)))
                                        _fail(k_63);
                                      else
                                        j_63 = k_63;
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(j_63), term_w_45);
                                    {
                                      t = conc_strings_0(t);
                                      {
                                        l_63 = t;
                                        if(((i_63 != NULL) && (i_63 != l_63)))
                                          _fail(l_63);
                                        else
                                          i_63 = l_63;
                                      }
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_o_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(i_63)), term_u_25), not_null(e_63)), term_u_25), not_null(a_63)), term_u_25));
                                    {
                                      t = set_config_0(t);
                                      {
                                        ATerm g_46;
                                        g_46 = t;
                                        {
                                          ATerm n_63 = NULL,p_63 = NULL;
                                          ATerm o_63 = NULL;
                                          t = term_u_45;
                                          {
                                            t = xtc_find_path_0(t);
                                            {
                                              o_63 = t;
                                              if(((n_63 != NULL) && (n_63 != o_63)))
                                                _fail(o_63);
                                              else
                                                n_63 = o_63;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(n_63), term_i_46);
                                            {
                                              t = conc_strings_0(t);
                                              {
                                                p_63 = t;
                                                if(((m_63 != NULL) && (m_63 != p_63)))
                                                  _fail(p_63);
                                                else
                                                  m_63 = p_63;
                                              }
                                            }
                                          }
                                        }
                                        t = g_46;
                                        {
                                          ATerm r_63 = NULL,t_63 = NULL;
                                          ATerm s_63 = NULL;
                                          t = term_c_46;
                                          {
                                            t = xtc_find_path_0(t);
                                            {
                                              s_63 = t;
                                              if(((r_63 != NULL) && (r_63 != s_63)))
                                                _fail(s_63);
                                              else
                                                r_63 = s_63;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(r_63), term_i_46);
                                            {
                                              t = conc_strings_0(t);
                                              {
                                                t_63 = t;
                                                if(((q_63 != NULL) && (q_63 != t_63)))
                                                  _fail(t_63);
                                                else
                                                  q_63 = t_63;
                                              }
                                            }
                                          }
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, term_b_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_46), term_w_46), not_null(q_63)), term_o_46), term_v_46), term_p_46), not_null(m_63)), term_o_46));
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
      ATerm y_46 = t;
      int z_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_64 = NULL;
          t = term_y_39;
          {
            t = get_config_0(t);
            {
              ATerm j_64 = NULL;
              t = term_q_47;
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
                t = (ATerm) ATmakeAppl(sym__2, not_null(i_64), term_m_16);
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
          LocalPopChoice(z_46);
        }
      else
        {
          t = y_46;
          {
          }
        }
      {
        ATerm r_47 = t;
        int s_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_e_40;
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
            LocalPopChoice(s_47);
          }
        else
          {
            t = r_47;
            {
            }
          }
        {
          ATerm t_47 = t;
          int u_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_47;
              z_47 = t;
              {
                t = term_y_23;
                t = get_config_0(t);
              }
              t = z_47;
              LocalPopChoice(u_47);
            }
          else
            {
              t = t_47;
              {
                t = (ATerm) ATinsert(ATempty, term_a_48);
                t = fatal_error_0(t);
              }
            }
          {
            t = if_verbose2_1(t, sc_version_0);
            {
              ATerm y_13 (ATerm t)
              {
                ATerm b_48;
                b_48 = t;
                {
                  t = term_y_23;
                  {
                    t = get_config_0(t);
                    {
                      ATerm d_14 (ATerm t)
                      {
                        t = term_c_48;
                        return(t);
                      }
                      t = debug_1(t, d_14);
                    }
                  }
                }
                t = b_48;
                return(t);
              }
              t = if_verbose1_1(t, y_13);
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
  ATerm g_48 = t;
  int h_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = command_line_options_0(t);
      {
        ATerm e_14 (ATerm t)
        {
          ATerm f_14 (ATerm t)
          {
            ATerm o_64 = NULL;
            ATerm s_64 = NULL;
            s_64 = t;
            if(((o_64 != NULL) && (o_64 != s_64)))
              _fail(s_64);
            else
              o_64 = s_64;
            {
              t = (ATerm) ATmakeAppl(sym__2, term_l_15, (ATerm) ATinsert(CheckATermList(not_null(o_64)), term_i_48));
              t = printnl_0(t);
            }
            return(t);
          }
          t = if_verbose1_1(t, f_14);
          return(t);
        }
        t = profile_p__2(t, e_14, compile_0);
        {
          ATerm g_14 (ATerm t)
          {
            ATerm t_64 = NULL;
            ATerm u_64 = NULL;
            t = run_time_0(t);
            {
              u_64 = t;
              if(((t_64 != NULL) && (t_64 != u_64)))
                _fail(u_64);
              else
                t_64 = u_64;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, term_l_15, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_48), not_null(t_64)), term_j_48));
              t = printnl_0(t);
            }
            return(t);
          }
          t = if_verbose2_1(t, g_14);
          {
            t = term_n_14;
            t = exit_0(t);
          }
        }
      }
      LocalPopChoice(h_48);
    }
  else
    {
      t = g_48;
      {
        ATerm v_64 = NULL;
        ATerm w_64 = NULL;
        t = run_time_0(t);
        {
          w_64 = t;
          if(((v_64 != NULL) && (v_64 != w_64)))
            _fail(w_64);
          else
            v_64 = w_64;
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_l_15, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_48), not_null(v_64)), term_l_48));
          {
            t = printnl_0(t);
            {
              t = term_a_22;
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
