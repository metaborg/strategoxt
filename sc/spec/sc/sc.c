#include <srts/stratego.h>
#include <ssl/stratego-lib.h>
#include "conf.h"
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
ATerm term_h_44;
ATerm term_g_44;
ATerm term_e_44;
ATerm term_d_44;
ATerm term_x_43;
ATerm term_v_43;
ATerm term_o_43;
ATerm term_h_43;
ATerm term_g_43;
ATerm term_z_42;
ATerm term_p_42;
ATerm term_z_41;
ATerm term_v_41;
ATerm term_u_41;
ATerm term_f_41;
ATerm term_d_41;
ATerm term_c_41;
ATerm term_b_41;
ATerm term_y_40;
ATerm term_u_40;
ATerm term_o_40;
ATerm term_n_40;
ATerm term_m_40;
ATerm term_l_40;
ATerm term_k_40;
ATerm term_j_40;
ATerm term_g_40;
ATerm term_f_40;
ATerm term_e_40;
ATerm term_d_40;
ATerm term_c_40;
ATerm term_b_40;
ATerm term_a_40;
ATerm term_z_39;
ATerm term_y_39;
ATerm term_x_39;
ATerm term_t_39;
ATerm term_s_39;
ATerm term_r_39;
ATerm term_l_39;
ATerm term_h_39;
ATerm term_g_39;
ATerm term_f_39;
ATerm term_e_39;
ATerm term_d_39;
ATerm term_w_38;
ATerm term_v_38;
ATerm term_u_38;
ATerm term_r_38;
ATerm term_q_38;
ATerm term_n_38;
ATerm term_h_38;
ATerm term_g_38;
ATerm term_b_38;
ATerm term_z_37;
ATerm term_y_37;
ATerm term_r_37;
ATerm term_q_37;
ATerm term_m_37;
ATerm term_h_37;
ATerm term_g_37;
ATerm term_b_37;
ATerm term_a_37;
ATerm term_t_36;
ATerm term_s_36;
ATerm term_i_36;
ATerm term_f_36;
ATerm term_w_35;
ATerm term_p_35;
ATerm term_j_35;
ATerm term_e_35;
ATerm term_u_34;
ATerm term_j_33;
ATerm term_i_33;
ATerm term_f_33;
ATerm term_a_33;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_n_32;
ATerm term_m_32;
ATerm term_f_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_t_31;
ATerm term_b_31;
ATerm term_r_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_d_30;
ATerm term_b_30;
ATerm term_n_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_a_29;
ATerm term_r_28;
ATerm term_p_28;
ATerm term_o_27;
ATerm term_j_27;
ATerm term_y_25;
ATerm term_t_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_f_23;
ATerm term_m_22;
ATerm term_j_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_w_21;
ATerm term_t_21;
ATerm term_r_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_f_21;
ATerm term_y_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_h_19;
ATerm term_c_19;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_n_18;
ATerm term_k_18;
ATerm term_h_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_x_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_j_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_x_14;
ATerm term_v_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_x_13;
void init_constant_terms (void)
{
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling C code", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("C-pretty.pp", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end: ", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize2", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize1", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize: ", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to ", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("frontend", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to ", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("infile", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-dep", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(sym__2, term_j_22, term_r_21);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("SC ", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2002 Eelco Visser <visser@acm.org>\n", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("This program is free software; you can redistribute it and/or modify\n", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("it under the terms of the GNU General Public License as published by\n", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("the Free Software Foundation; either version 2, or (at your option)\n", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("any later version.\n", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(sym__2, term_d_30, term_k_30);
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(sym__2, term_d_30, term_w_31);
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-i file            Main module to compile (required)\n", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f | --output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d\n", 0, ATtrue));
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(sym__2, term_c_15, term_u_18);
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(sym__2, term_j_20, term_u_18);
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(sym__2, term_h_18, term_u_18);
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(sym__2, term_o_17, term_u_18);
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(sym__2, term_y_37, term_u_18);
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all        Instrument all definitions to print tracing information", 0, ATtrue));
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-t f               Instrument definition of f to print tracing information\n", 0, ATtrue));
  ATprotect(&(term_n_38));
  term_n_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i        Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(sym__2, term_i_14, term_x_13);
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-S | --silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(sym__2, term_u_38, term_u_18);
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(sym__2, term_d_39, term_u_18);
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(sym__2, term_g_39, term_u_18);
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M\n", 0, ATtrue));
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that sc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(ATmakeSymbol("SC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_u_40));
  term_u_40 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(sym__2, term_b_41, term_c_41);
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(sym__3, term_b_41, term_c_41, (ATerm) ATempty);
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_g_43));
  term_g_43 = (ATerm) ATmakeAppl(ATmakeSymbol("importing: ", 0, ATtrue));
  ATprotect(&(term_h_43));
  term_h_43 = (ATerm) ATmakeAppl(ATmakeSymbol("sc.config", 0, ATtrue));
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeAppl(ATmakeSymbol("sc-manual.txt", 0, ATtrue));
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_x_43));
  term_x_43 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue));
}
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm w_77 (ATerm), ATerm x_77 (ATerm));
ATerm crush_2 (ATerm, ATerm u_76 (ATerm), ATerm v_76 (ATerm));
ATerm run_time_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm e_85 (ATerm));
ATerm Snd_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm link_object_code_0 (ATerm);
ATerm c_to_object_code_0 (ATerm);
ATerm c_compile_0 (ATerm);
ATerm xtc_transform_1 (ATerm, ATerm s_91 (ATerm));
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
ATerm frontend_0 (ATerm);
ATerm AddMain_1 (ATerm, ATerm r_63 (ATerm));
ATerm xtc_io_transform_1 (ATerm, ATerm c_92 (ATerm));
ATerm add_main_0 (ATerm);
ATerm get_outfile_1 (ATerm, ATerm q_63 (ATerm));
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
ATerm xtc_transform_term_2 (ATerm, ATerm a_92 (ATerm), ATerm b_92 (ATerm));
ATerm call_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm r_91 (ATerm));
ATerm assert_1 (ATerm, ATerm a_82 (ATerm));
ATerm obsolete_1 (ATerm, ATerm o_82 (ATerm));
ATerm open_file_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm p_0 (ATerm), ATerm q_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm k_58 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm t_91 (ATerm), ATerm u_91 (ATerm));
ATerm if_verbose3_1 (ATerm, ATerm f_85 (ATerm));
ATerm basename_1 (ATerm, ATerm t_80 (ATerm));
ATerm basename_0 (ATerm);
ATerm get_infile_0 (ATerm);
ATerm parse_0 (ATerm);
ATerm front_end_0 (ATerm);
ATerm rename_file_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm rename_to_1 (ATerm, ATerm o_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm x_81 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm f_64 (ATerm), ATerm g_64 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm w_81 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm l_91 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm m_91 (ATerm));
ATerm compile_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm d_85 (ATerm));
ATerm ticks_to_seconds_0 (ATerm);
ATerm self_children_sys_time_0 (ATerm);
ATerm add_0 (ATerm);
ATerm self_children_user_time_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm diff_times_0 (ATerm);
ATerm times_0 (ATerm);
ATerm profile_p__2 (ATerm, ATerm z_82 (ATerm), ATerm a_83 (ATerm));
ATerm debug_1 (ATerm, ATerm h_82 (ATerm));
ATerm implode_string_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm y_51 (ATerm), ATerm z_51 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm sc_announce_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm sc_version_0 (ATerm);
ATerm try_1 (ATerm, ATerm s_63 (ATerm));
ATerm copy_file_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm h_85 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm g_85 (ATerm));
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose6_1 (ATerm, ATerm i_85 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm j_77 (ATerm), ATerm k_77 (ATerm));
ATerm union_1 (ATerm, ATerm f_77 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm q_88 (ATerm));
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
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm z_71 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm post_extend_config_0 (ATerm);
ATerm sc_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_0 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm g_0 (ATerm));
ATerm Program_1 (ATerm, ATerm b_58 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm i_82 (ATerm));
ATerm Undefined_1 (ATerm, ATerm c_58 (ATerm));
ATerm fetch_1 (ATerm, ATerm t_71 (ATerm));
ATerm option_defined_1 (ATerm, ATerm g_86 (ATerm));
ATerm Help_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm l_87 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm e_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm j_87 (ATerm));
ATerm parse_options_1 (ATerm, ATerm i_87 (ATerm));
ATerm table_put_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm h_53 (ATerm), ATerm i_53 (ATerm));
ATerm Nil_0 (ATerm);
ATerm map_1 (ATerm, ATerm k_71 (ATerm));
ATerm table_putlist_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm import_config_file_1 (ATerm, ATerm z_84 (ATerm));
ATerm command_line_options_0 (ATerm);
ATerm sc_0 (ATerm);
ATerm main_0 (ATerm);
ATerm exit_0 (ATerm t)
{
  ATerm f_0 = NULL;
  f_0 = t;
  t = SSL_exit(not_null(f_0));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm h_1 = NULL,d_2 = NULL,p_2 = NULL;
  h_1 = t;
  g_1 :
  if(match_cons(h_1, sym__2))
    {
      d_2 = ATgetArgument(h_1, 0);
      p_2 = ATgetArgument(h_1, 1);
      {
        ATerm s_13;
        s_13 = t;
        t = SSL_printnl(not_null(d_2), not_null(p_2));
        t = s_13;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm w_77 (ATerm), ATerm x_77 (ATerm))
{
  ATerm v_13 = t;
  int w_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = w_77(t);
      LocalPopChoice(w_13);
    }
  else
    {
      t = v_13;
      {
        ATerm d_3 = NULL,f_3 = NULL,g_3 = NULL;
        d_3 = t;
        b_3 :
        if(((ATgetType(d_3) == AT_LIST) && !(ATisEmpty(d_3))))
          {
            f_3 = ATgetFirst((ATermList) d_3);
            g_3 = (ATerm) ATgetNext((ATermList) d_3);
            {
              ATerm k_3 = NULL;
              ATerm l_3 = NULL;
              t = not_null(g_3);
              {
                t = foldr_2(t, w_77, x_77);
                {
                  l_3 = t;
                  if(((k_3 != NULL) && (k_3 != l_3)))
                    _fail(l_3);
                  else
                    k_3 = l_3;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(f_3), not_null(k_3));
                t = x_77(t);
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
ATerm crush_2 (ATerm t, ATerm u_76 (ATerm), ATerm v_76 (ATerm))
{
  ATerm t_3 = NULL;
  ATerm v_3 = NULL;
  t_3 = t;
  {
    ATerm w_3 = NULL;
    ATerm y_3 = NULL,z_3 = NULL,a_4 = NULL;
    t = not_null(t_3);
    {
      w_3 = t;
      {
        t = SSL_explode_term(not_null(w_3));
        {
          y_3 = t;
          s_3 :
          if(match_cons(y_3, sym__2))
            {
              z_3 = ATgetArgument(y_3, 0);
              a_4 = ATgetArgument(y_3, 1);
              if(((v_3 != NULL) && (v_3 != a_4)))
                _fail(a_4);
              else
                v_3 = a_4;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(v_3);
      t = foldr_2(t, u_76, v_76);
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
      t = term_x_13;
      return(t);
    }
    t = crush_2(t, b_0, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm e_85 (ATerm))
{
  ATerm y_13 = t;
  int z_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_14;
      f_14 = t;
      {
        ATerm f_4 = NULL;
        ATerm g_4 = NULL;
        t = term_i_14;
        {
          t = get_config_0(t);
          {
            g_4 = t;
            if(((f_4 != NULL) && (f_4 != g_4)))
              _fail(g_4);
            else
              f_4 = g_4;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_4), term_j_14);
          t = geq_0(t);
        }
      }
      t = f_14;
      t = e_85(t);
      LocalPopChoice(z_13);
    }
  else
    {
      t = y_13;
      {
      }
    }
  return(t);
}
ATerm Snd_0 (ATerm t)
{
  ATerm p_4 = NULL;
  ATerm r_4 = NULL,s_4 = NULL,t_4 = NULL;
  p_4 = t;
  {
    ATerm u_4 = NULL;
    ATerm w_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL,a_5 = NULL,b_5 = NULL,c_5 = NULL;
    t = not_null(p_4);
    {
      u_4 = t;
      {
        t = SSL_explode_term(not_null(u_4));
        {
          w_4 = t;
          l_4 :
          if(match_cons(w_4, sym__2))
            {
              x_4 = ATgetArgument(w_4, 0);
              y_4 = ATgetArgument(w_4, 1);
              m_4 :
              if(match_string(x_4, ""))
                {
                  n_4 :
                  if(((ATgetType(y_4) == AT_LIST) && !(ATisEmpty(y_4))))
                    {
                      z_4 = ATgetFirst((ATermList) y_4);
                      a_5 = (ATerm) ATgetNext((ATermList) y_4);
                      o_4 :
                      if(((ATgetType(a_5) == AT_LIST) && !(ATisEmpty(a_5))))
                        {
                          b_5 = ATgetFirst((ATermList) a_5);
                          c_5 = (ATerm) ATgetNext((ATermList) a_5);
                          {
                            if(((r_4 != NULL) && (r_4 != z_4)))
                              _fail(z_4);
                            else
                              r_4 = z_4;
                            {
                              if(((t_4 != NULL) && (t_4 != b_5)))
                                _fail(b_5);
                              else
                                t_4 = b_5;
                              if(((s_4 != NULL) && (s_4 != c_5)))
                                _fail(c_5);
                              else
                                s_4 = c_5;
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
    t = not_null(t_4);
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm m_5 = NULL;
  ATerm o_5 = NULL,p_5 = NULL;
  m_5 = t;
  {
    ATerm q_5 = NULL;
    ATerm s_5 = NULL,t_5 = NULL,u_5 = NULL,v_5 = NULL,w_5 = NULL;
    t = not_null(m_5);
    {
      q_5 = t;
      {
        t = SSL_explode_term(not_null(q_5));
        {
          s_5 = t;
          j_5 :
          if(match_cons(s_5, sym__2))
            {
              t_5 = ATgetArgument(s_5, 0);
              u_5 = ATgetArgument(s_5, 1);
              k_5 :
              if(match_string(t_5, ""))
                {
                  l_5 :
                  if(((ATgetType(u_5) == AT_LIST) && !(ATisEmpty(u_5))))
                    {
                      v_5 = ATgetFirst((ATermList) u_5);
                      w_5 = (ATerm) ATgetNext((ATermList) u_5);
                      {
                        if(((p_5 != NULL) && (p_5 != v_5)))
                          _fail(v_5);
                        else
                          p_5 = v_5;
                        if(((o_5 != NULL) && (o_5 != w_5)))
                          _fail(w_5);
                        else
                          o_5 = w_5;
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
    t = not_null(p_5);
  }
  return(t);
}
ATerm link_object_code_0 (ATerm t)
{
  ATerm g_6 = NULL,h_6 = NULL;
  g_6 = t;
  f_6 :
  if(match_cons(g_6, sym_FILE_1))
    {
      h_6 = ATgetArgument(g_6, 0);
      {
        ATerm j_6 = NULL;
        ATerm k_6 = NULL;
        ATerm d_0 (ATerm t)
        {
          ATerm h_0 (ATerm t)
          {
            t = term_k_14;
            return(t);
          }
          t = say_1(t, h_0);
          return(t);
        }
        t = if_verbose2_1(t, d_0);
        {
          ATerm l_6 = NULL;
          ATerm s_0 (ATerm t)
          {
            t = term_l_14;
            return(t);
          }
          t = get_outfile_1(t, s_0);
          {
            k_6 = t;
            {
              if(((j_6 != NULL) && (j_6 != k_6)))
                _fail(k_6);
              else
                j_6 = k_6;
              {
                ATerm m_6 = NULL;
                t = term_m_14;
                {
                  t = get_config_0(t);
                  {
                    m_6 = t;
                    if(((l_6 != NULL) && (l_6 != m_6)))
                      _fail(m_6);
                    else
                      l_6 = m_6;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_r_14, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(l_6)), not_null(j_6)), term_s_14), not_null(h_6)));
                  {
                    ATerm t_0 (ATerm t)
                    {
                      ATerm t_14;
                      t_14 = t;
                      {
                        ATerm n_6 = NULL,p_6 = NULL;
                        ATerm u_14;
                        u_14 = t;
                        {
                          ATerm o_6 = NULL;
                          t = Fst_0(t);
                          {
                            o_6 = t;
                            if(((n_6 != NULL) && (n_6 != o_6)))
                              _fail(o_6);
                            else
                              n_6 = o_6;
                          }
                        }
                        t = u_14;
                        {
                          ATerm q_6 = NULL;
                          t = Snd_0(t);
                          {
                            q_6 = t;
                            if(((p_6 != NULL) && (p_6 != q_6)))
                              _fail(q_6);
                            else
                              p_6 = q_6;
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym__2, term_v_14, (ATerm) ATinsert(CheckATermList(not_null(p_6)), not_null(n_6)));
                            t = printnl_0(t);
                          }
                        }
                      }
                      t = t_14;
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
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(j_6));
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
  ATerm c_7 = NULL,d_7 = NULL;
  c_7 = t;
  b_7 :
  if(match_cons(c_7, sym_FILE_1))
    {
      d_7 = ATgetArgument(c_7, 0);
      {
        ATerm f_7 = NULL;
        ATerm g_7 = NULL;
        ATerm u_0 (ATerm t)
        {
          ATerm v_0 (ATerm t)
          {
            t = term_x_14;
            return(t);
          }
          t = say_1(t, v_0);
          return(t);
        }
        t = if_verbose2_1(t, u_0);
        {
          ATerm h_7 = NULL;
          ATerm w_0 (ATerm t)
          {
            t = term_a_15;
            return(t);
          }
          t = get_outfile_1(t, w_0);
          {
            g_7 = t;
            {
              if(((f_7 != NULL) && (f_7 != g_7)))
                _fail(g_7);
              else
                f_7 = g_7;
              {
                ATerm i_7 = NULL,k_7 = NULL;
                ATerm j_7 = NULL;
                t = term_b_15;
                {
                  t = get_config_0(t);
                  {
                    j_7 = t;
                    if(((i_7 != NULL) && (i_7 != j_7)))
                      _fail(j_7);
                    else
                      i_7 = j_7;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(i_7), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(f_7)), term_s_14), not_null(d_7)), term_c_15));
                  {
                    ATerm h_15 = t;
                    int i_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = conc_two_lists_0(t);
                        LocalPopChoice(i_15);
                      }
                    else
                      {
                        t = h_15;
                        t = conc_more_lists_0(t);
                      }
                    {
                      k_7 = t;
                      if(((h_7 != NULL) && (h_7 != k_7)))
                        _fail(k_7);
                      else
                        h_7 = k_7;
                    }
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_r_14, not_null(h_7));
                  {
                    ATerm x_0 (ATerm t)
                    {
                      ATerm j_15;
                      j_15 = t;
                      {
                        ATerm l_7 = NULL;
                        ATerm m_7 = NULL;
                        m_7 = t;
                        if(((l_7 != NULL) && (l_7 != m_7)))
                          _fail(m_7);
                        else
                          l_7 = m_7;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_v_14, not_null(l_7));
                          t = printnl_0(t);
                        }
                      }
                      t = j_15;
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
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_7));
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
  ATerm k_15 = t;
  int l_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_15;
      q_15 = t;
      {
        t = term_c_15;
        t = get_config_0(t);
      }
      t = q_15;
      LocalPopChoice(l_15);
    }
  else
    {
      t = k_15;
      {
        ATerm y_0 (ATerm t)
        {
          ATerm a_1 (ATerm t)
          {
            ATerm t_7 = NULL;
            ATerm u_7 = NULL;
            u_7 = t;
            if(((t_7 != NULL) && (t_7 != u_7)))
              _fail(u_7);
            else
              t_7 = u_7;
            {
              t = (ATerm) ATmakeAppl(sym__2, term_v_14, (ATerm) ATinsert(CheckATermList(not_null(t_7)), term_r_15));
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
ATerm xtc_transform_1 (ATerm t, ATerm s_91 (ATerm))
{
  ATerm b_1 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, s_91, b_1);
  return(t);
}
ATerm abox2text_0 (ATerm t)
{
  ATerm c_1 (ATerm t)
  {
    t = term_s_15;
    return(t);
  }
  t = xtc_transform_1(t, c_1);
  {
    ATerm d_1 (ATerm t)
    {
      ATerm e_1 (ATerm t)
      {
        t = term_t_15;
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
    t = term_u_15;
    return(t);
  }
  ATerm i_1 (ATerm t)
  {
    ATerm x_7 = NULL;
    ATerm y_7 = NULL;
    t = term_a_16;
    {
      t = xtc_find_0(t);
      {
        y_7 = t;
        if(((x_7 != NULL) && (x_7 != y_7)))
          _fail(y_7);
        else
          x_7 = y_7;
      }
    }
    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_7)), term_b_16);
    return(t);
  }
  t = xtc_transform_2(t, f_1, i_1);
  return(t);
}
ATerm s2c_0 (ATerm t)
{
  ATerm j_1 (ATerm t)
  {
    t = term_j_16;
    return(t);
  }
  ATerm k_1 (ATerm t)
  {
    ATerm d_8 = NULL,f_8 = NULL;
    ATerm k_16;
    k_16 = t;
    {
      ATerm e_8 = NULL;
      t = pass_verbose_0(t);
      {
        e_8 = t;
        if(((d_8 != NULL) && (d_8 != e_8)))
          _fail(e_8);
        else
          d_8 = e_8;
      }
    }
    t = k_16;
    {
      ATerm i_8 = NULL;
      t = term_l_16;
      {
        t = get_config_0(t);
        {
          ATerm l_1 (ATerm t)
          {
            ATerm g_8 = NULL;
            ATerm h_8 = NULL;
            h_8 = t;
            if(((g_8 != NULL) && (g_8 != h_8)))
              _fail(h_8);
            else
              g_8 = h_8;
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_8)), term_l_16);
            return(t);
          }
          t = map_1(t, l_1);
          {
            i_8 = t;
            if(((f_8 != NULL) && (f_8 != i_8)))
              _fail(i_8);
            else
              f_8 = i_8;
          }
        }
      }
      {
        t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(f_8)), (ATerm) ATinsert(ATempty, term_m_16)), not_null(d_8));
        t = concat_0(t);
      }
    }
    return(t);
  }
  t = xtc_transform_2(t, j_1, k_1);
  return(t);
}
ATerm stratego_cf_0 (ATerm t)
{
  ATerm m_1 (ATerm t)
  {
    t = term_o_16;
    return(t);
  }
  ATerm n_1 (ATerm t)
  {
    ATerm n_8 = NULL;
    ATerm o_8 = NULL;
    t = pass_verbose_0(t);
    {
      o_8 = t;
      if(((n_8 != NULL) && (n_8 != o_8)))
        _fail(o_8);
      else
        n_8 = o_8;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(n_8)), term_m_16);
    return(t);
  }
  t = xtc_transform_2(t, m_1, n_1);
  return(t);
}
ATerm canonicalize_0 (ATerm t)
{
  ATerm o_1 (ATerm t)
  {
    t = term_p_16;
    return(t);
  }
  ATerm p_1 (ATerm t)
  {
    ATerm r_8 = NULL;
    ATerm s_8 = NULL;
    t = pass_verbose_0(t);
    {
      s_8 = t;
      if(((r_8 != NULL) && (r_8 != s_8)))
        _fail(s_8);
      else
        r_8 = s_8;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(r_8)), term_m_16);
    return(t);
  }
  t = xtc_transform_2(t, o_1, p_1);
  return(t);
}
ATerm back_end_0 (ATerm t)
{
  ATerm q_1 (ATerm t)
  {
    ATerm r_1 (ATerm t)
    {
      t = term_y_16;
      return(t);
    }
    t = debug_1(t, r_1);
    return(t);
  }
  t = if_verbose2_1(t, q_1);
  {
    ATerm s_1 (ATerm t)
    {
      ATerm u_1 (ATerm t)
      {
        ATerm v_8 = NULL;
        ATerm w_8 = NULL;
        w_8 = t;
        if(((v_8 != NULL) && (v_8 != w_8)))
          _fail(w_8);
        else
          v_8 = w_8;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_v_14, (ATerm) ATinsert(CheckATermList(not_null(v_8)), term_z_16));
          t = printnl_0(t);
        }
        return(t);
      }
      t = if_verbose1_1(t, u_1);
      return(t);
    }
    ATerm t_1 (ATerm t)
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
    t = profile_p__2(t, s_1, t_1);
  }
  return(t);
}
ATerm optimize2_0 (ATerm t)
{
  ATerm v_1 (ATerm t)
  {
    t = term_a_17;
    return(t);
  }
  ATerm w_1 (ATerm t)
  {
    ATerm z_8 = NULL;
    ATerm a_9 = NULL;
    t = pass_verbose_0(t);
    {
      a_9 = t;
      if(((z_8 != NULL) && (z_8 != a_9)))
        _fail(a_9);
      else
        z_8 = a_9;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(z_8)), term_m_16);
    return(t);
  }
  t = xtc_transform_2(t, v_1, w_1);
  return(t);
}
ATerm compile_match_0 (ATerm t)
{
  ATerm x_1 (ATerm t)
  {
    t = term_b_17;
    return(t);
  }
  ATerm y_1 (ATerm t)
  {
    ATerm d_9 = NULL;
    ATerm e_9 = NULL;
    t = pass_verbose_0(t);
    {
      e_9 = t;
      if(((d_9 != NULL) && (d_9 != e_9)))
        _fail(e_9);
      else
        d_9 = e_9;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(d_9)), term_m_16);
    return(t);
  }
  t = xtc_transform_2(t, x_1, y_1);
  return(t);
}
ATerm inline_0 (ATerm t)
{
  ATerm z_1 (ATerm t)
  {
    t = term_e_17;
    return(t);
  }
  ATerm a_2 (ATerm t)
  {
    ATerm h_9 = NULL;
    ATerm i_9 = NULL;
    t = pass_verbose_0(t);
    {
      i_9 = t;
      if(((h_9 != NULL) && (h_9 != i_9)))
        _fail(i_9);
      else
        h_9 = i_9;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(h_9)), term_m_16);
    return(t);
  }
  t = xtc_transform_2(t, z_1, a_2);
  return(t);
}
ATerm fusion_0 (ATerm t)
{
  ATerm b_2 (ATerm t)
  {
    t = term_f_17;
    return(t);
  }
  ATerm c_2 (ATerm t)
  {
    ATerm l_9 = NULL;
    ATerm m_9 = NULL;
    t = pass_verbose_0(t);
    {
      m_9 = t;
      if(((l_9 != NULL) && (l_9 != m_9)))
        _fail(m_9);
      else
        l_9 = m_9;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(l_9)), term_m_16);
    return(t);
  }
  t = xtc_transform_2(t, b_2, c_2);
  return(t);
}
ATerm optimize1_0 (ATerm t)
{
  ATerm e_2 (ATerm t)
  {
    t = term_g_17;
    return(t);
  }
  ATerm f_2 (ATerm t)
  {
    ATerm p_9 = NULL;
    ATerm q_9 = NULL;
    t = pass_verbose_0(t);
    {
      q_9 = t;
      if(((p_9 != NULL) && (p_9 != q_9)))
        _fail(q_9);
      else
        p_9 = q_9;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(p_9)), term_m_16);
    return(t);
  }
  t = xtc_transform_2(t, e_2, f_2);
  return(t);
}
ATerm optimize_0 (ATerm t)
{
  ATerm g_2 (ATerm t)
  {
    ATerm h_2 (ATerm t)
    {
      t = term_i_17;
      return(t);
    }
    t = debug_1(t, h_2);
    return(t);
  }
  t = if_verbose2_1(t, g_2);
  {
    ATerm i_2 (ATerm t)
    {
      ATerm k_2 (ATerm t)
      {
        ATerm t_9 = NULL;
        ATerm u_9 = NULL;
        u_9 = t;
        if(((t_9 != NULL) && (t_9 != u_9)))
          _fail(u_9);
        else
          t_9 = u_9;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_v_14, (ATerm) ATinsert(CheckATermList(not_null(t_9)), term_j_17));
          t = printnl_0(t);
        }
        return(t);
      }
      t = if_verbose1_1(t, k_2);
      return(t);
    }
    ATerm j_2 (ATerm t)
    {
      t = optimize1_0(t);
      {
        ATerm k_17 = t;
        int l_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_17;
            m_17 = t;
            {
              ATerm n_17 = t;
              if((PushChoice() == 0))
                {
                  t = term_o_17;
                  t = get_config_0(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = n_17;
                }
            }
            t = m_17;
            t = fusion_0(t);
            LocalPopChoice(l_17);
          }
        else
          {
            t = k_17;
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
    t = profile_p__2(t, i_2, j_2);
  }
  return(t);
}
ATerm rename_defs_0 (ATerm t)
{
  ATerm l_2 (ATerm t)
  {
    t = term_p_17;
    return(t);
  }
  ATerm m_2 (ATerm t)
  {
    ATerm x_9 = NULL;
    ATerm y_9 = NULL;
    t = pass_verbose_0(t);
    {
      y_9 = t;
      if(((x_9 != NULL) && (x_9 != y_9)))
        _fail(y_9);
      else
        x_9 = y_9;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(x_9)), term_m_16);
    return(t);
  }
  t = xtc_transform_2(t, l_2, m_2);
  return(t);
}
ATerm stratego_nf_0 (ATerm t)
{
  ATerm n_2 (ATerm t)
  {
    t = term_x_17;
    return(t);
  }
  ATerm o_2 (ATerm t)
  {
    ATerm b_10 = NULL;
    ATerm c_10 = NULL;
    t = pass_verbose_0(t);
    {
      c_10 = t;
      if(((b_10 != NULL) && (b_10 != c_10)))
        _fail(c_10);
      else
        b_10 = c_10;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(b_10)), term_m_16);
    return(t);
  }
  t = xtc_transform_2(t, n_2, o_2);
  return(t);
}
ATerm extract_0 (ATerm t)
{
  ATerm q_2 (ATerm t)
  {
    t = term_c_18;
    return(t);
  }
  ATerm r_2 (ATerm t)
  {
    ATerm f_10 = NULL;
    ATerm g_10 = NULL;
    t = pass_verbose_0(t);
    {
      g_10 = t;
      if(((f_10 != NULL) && (f_10 != g_10)))
        _fail(g_10);
      else
        f_10 = g_10;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(f_10)), term_m_16);
    return(t);
  }
  t = xtc_transform_2(t, q_2, r_2);
  return(t);
}
ATerm extract_all_0 (ATerm t)
{
  ATerm s_2 (ATerm t)
  {
    t = term_d_18;
    return(t);
  }
  ATerm t_2 (ATerm t)
  {
    ATerm j_10 = NULL;
    ATerm k_10 = NULL;
    t = pass_verbose_0(t);
    {
      k_10 = t;
      if(((j_10 != NULL) && (j_10 != k_10)))
        _fail(k_10);
      else
        j_10 = k_10;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(j_10)), term_m_16);
    return(t);
  }
  t = xtc_transform_2(t, s_2, t_2);
  return(t);
}
ATerm output_frontend_0 (ATerm t)
{
  ATerm n_10 = NULL;
  ATerm e_18 = t;
  int f_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_18;
      g_18 = t;
      {
        t = term_h_18;
        t = get_config_0(t);
      }
      t = g_18;
      {
        ATerm i_18 = t;
        int j_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = extract_all_0(t);
            LocalPopChoice(j_18);
          }
        else
          {
            t = i_18;
            {
              t = (ATerm) ATinsert(ATempty, term_k_18);
              t = fatal_error_0(t);
            }
          }
        {
          ATerm u_2 (ATerm t)
          {
            ATerm o_10 = NULL;
            ATerm v_2 (ATerm t)
            {
              t = term_n_18;
              return(t);
            }
            t = get_outfile_1(t, v_2);
            {
              o_10 = t;
              if(((n_10 != NULL) && (n_10 != o_10)))
                _fail(o_10);
              else
                n_10 = o_10;
            }
            return(t);
          }
          t = copy_to_1(t, u_2);
          {
            ATerm w_2 (ATerm t)
            {
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_10)), term_s_18);
              return(t);
            }
            t = say_1(t, w_2);
          }
        }
      }
      LocalPopChoice(f_18);
    }
  else
    {
      t = e_18;
      {
      }
    }
  return(t);
}
ATerm frontend_0 (ATerm t)
{
  ATerm x_2 (ATerm t)
  {
    t = term_t_18;
    return(t);
  }
  ATerm y_2 (ATerm t)
  {
    ATerm r_10 = NULL;
    ATerm s_10 = NULL;
    t = pass_verbose_0(t);
    {
      s_10 = t;
      if(((r_10 != NULL) && (r_10 != s_10)))
        _fail(s_10);
      else
        r_10 = s_10;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(r_10)), term_m_16);
    return(t);
  }
  t = xtc_transform_2(t, x_2, y_2);
  return(t);
}
ATerm AddMain_1 (ATerm t, ATerm r_63 (ATerm))
{
  ATerm x_10 = NULL,y_10 = NULL;
  x_10 = t;
  w_10 :
  if(match_cons(x_10, sym_Specification_1))
    {
      y_10 = ATgetArgument(x_10, 0);
      {
        ATerm a_11 = NULL;
        ATerm b_11 = NULL;
        t = term_u_18;
        {
          t = r_63(t);
          {
            b_11 = t;
            if(((a_11 != NULL) && (a_11 != b_11)))
              _fail(b_11);
            else
              a_11 = b_11;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(not_null(y_10)), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_v_18, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(a_11)), (ATerm) ATempty))))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm xtc_io_transform_1 (ATerm t, ATerm c_92 (ATerm))
{
  t = read_from_0(t);
  {
    t = c_92(t);
    t = write_to_0(t);
  }
  return(t);
}
ATerm add_main_0 (ATerm t)
{
  ATerm f_11 = NULL;
  ATerm w_18 = t;
  int x_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_18;
      y_18 = t;
      {
        ATerm g_11 = NULL;
        t = term_c_19;
        {
          t = get_config_0(t);
          {
            g_11 = t;
            if(((f_11 != NULL) && (f_11 != g_11)))
              _fail(g_11);
            else
              f_11 = g_11;
          }
        }
      }
      t = y_18;
      {
        ATerm z_2 (ATerm t)
        {
          ATerm a_3 (ATerm t)
          {
            t = not_null(f_11);
            return(t);
          }
          t = AddMain_1(t, a_3);
          return(t);
        }
        t = xtc_io_transform_1(t, z_2);
      }
      LocalPopChoice(x_18);
    }
  else
    {
      t = w_18;
      {
      }
    }
  return(t);
}
ATerm get_outfile_1 (ATerm t, ATerm q_63 (ATerm))
{
  ATerm k_11 = NULL,m_11 = NULL;
  ATerm d_19;
  d_19 = t;
  {
    ATerm l_11 = NULL;
    t = q_63(t);
    {
      l_11 = t;
      if(((k_11 != NULL) && (k_11 != l_11)))
        _fail(l_11);
      else
        k_11 = l_11;
    }
  }
  t = d_19;
  {
    ATerm n_11 = NULL;
    t = term_h_19;
    {
      t = get_config_0(t);
      {
        n_11 = t;
        if(((m_11 != NULL) && (m_11 != n_11)))
          _fail(n_11);
        else
          m_11 = n_11;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(m_11), not_null(k_11));
      t = conc_strings_0(t);
    }
  }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm u_11 = NULL;
  u_11 = t;
  t_11 :
  if(match_cons(u_11, sym_stderr_0))
    {
      ATerm w_11 = NULL,y_11 = NULL;
      ATerm k_19;
      k_19 = t;
      {
        ATerm x_11 = NULL;
        t = SSLgetAnnotations(not_null(u_11));
        {
          x_11 = t;
          if(((w_11 != NULL) && (w_11 != x_11)))
            _fail(x_11);
          else
            w_11 = x_11;
        }
      }
      t = k_19;
      {
        ATerm z_11 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(w_11));
        {
          z_11 = t;
          if(((y_11 != NULL) && (y_11 != z_11)))
            _fail(z_11);
          else
            y_11 = z_11;
        }
        t = not_null(y_11);
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
  ATerm i_12 = NULL,j_12 = NULL;
  i_12 = t;
  h_12 :
  if(match_cons(i_12, sym_FILE_1))
    {
      j_12 = ATgetArgument(i_12, 0);
      {
        ATerm l_19 = t;
        int m_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_12 = NULL;
            ATerm m_12 = NULL;
            t = r_0(t);
            {
              m_12 = t;
              {
                if(((l_12 != NULL) && (l_12 != m_12)))
                  _fail(m_12);
                else
                  l_12 = m_12;
                {
                  ATerm n_19 = t;
                  int o_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(o_19);
                    }
                  else
                    {
                      t = n_19;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(j_12), not_null(l_12));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(j_12));
            LocalPopChoice(m_19);
          }
        else
          {
            t = l_19;
            {
              ATerm o_12 = NULL;
              ATerm p_12 = NULL;
              t = r_0(t);
              {
                p_12 = t;
                {
                  if(((o_12 != NULL) && (o_12 != p_12)))
                    _fail(p_12);
                  else
                    o_12 = p_12;
                  {
                    ATerm r_19 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm x_19 = t;
                        int y_19 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = stdout_0(t);
                            LocalPopChoice(y_19);
                          }
                        else
                          {
                            t = x_19;
                            t = stderr_0(t);
                          }
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = r_19;
                      }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(j_12), not_null(o_12));
                      t = copy_file_0(t);
                    }
                  }
                }
              }
              t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(j_12));
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
  ATerm v_12 = NULL;
  ATerm z_19 = t;
  int d_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_20;
      i_20 = t;
      {
        t = term_j_20;
        t = get_config_0(t);
      }
      t = i_20;
      {
        ATerm c_3 (ATerm t)
        {
          ATerm w_12 = NULL;
          ATerm e_3 (ATerm t)
          {
            t = term_k_20;
            return(t);
          }
          t = get_outfile_1(t, e_3);
          {
            w_12 = t;
            if(((v_12 != NULL) && (v_12 != w_12)))
              _fail(w_12);
            else
              v_12 = w_12;
          }
          return(t);
        }
        t = copy_to_1(t, c_3);
        {
          ATerm l_20;
          l_20 = t;
          {
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_12)), term_m_20);
            t = echo_0(t);
          }
          t = l_20;
        }
      }
      LocalPopChoice(d_20);
    }
  else
    {
      t = z_19;
      {
      }
    }
  return(t);
}
ATerm pass_keep_0 (ATerm t)
{
  ATerm a_13 = NULL;
  ATerm b_13 = NULL,d_13 = NULL;
  ATerm c_13 = NULL;
  t = term_n_20;
  {
    ATerm o_20 = t;
    int x_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(x_20);
      }
    else
      {
        t = o_20;
        t = term_y_20;
      }
    {
      c_13 = t;
      if(((b_13 != NULL) && (b_13 != c_13)))
        _fail(c_13);
      else
        b_13 = c_13;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(b_13), term_y_20);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          d_13 = t;
          if(((a_13 != NULL) && (a_13 != d_13)))
            _fail(d_13);
          else
            a_13 = d_13;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_13)), term_n_20);
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm h_13 = NULL;
  h_13 = t;
  t = SSL_int_to_string(not_null(h_13));
  return(t);
}
ATerm pass_verbose_0 (ATerm t)
{
  ATerm m_13 = NULL;
  ATerm n_13 = NULL,p_13 = NULL;
  ATerm o_13 = NULL;
  t = term_i_14;
  {
    ATerm z_20 = t;
    int a_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(a_21);
      }
    else
      {
        t = z_20;
        t = term_y_20;
      }
    {
      o_13 = t;
      if(((n_13 != NULL) && (n_13 != o_13)))
        _fail(o_13);
      else
        n_13 = o_13;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(n_13), term_y_20);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          p_13 = t;
          if(((m_13 != NULL) && (m_13 != p_13)))
            _fail(p_13);
          else
            m_13 = p_13;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_13)), term_i_14);
  return(t);
}
ATerm dep_name_0 (ATerm t)
{
  ATerm t_13 = NULL;
  ATerm u_13 = NULL;
  ATerm b_21 = t;
  int e_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_14;
      t = get_config_0(t);
      LocalPopChoice(e_21);
    }
  else
    {
      t = b_21;
      {
        t = term_f_21;
        t = get_config_0(t);
      }
    }
  {
    u_13 = t;
    if(((t_13 != NULL) && (t_13 != u_13)))
      _fail(u_13);
    else
      t_13 = u_13;
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_13)), term_k_21);
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm b_14 = NULL,c_14 = NULL;
  b_14 = t;
  a_14 :
  if(match_cons(b_14, sym_stdin_0))
    {
      ATerm d_14 = NULL;
      ATerm e_14 = NULL;
      t = term_l_21;
      {
        t = ReadFromFile_0(t);
        {
          e_14 = t;
          if(((d_14 != NULL) && (d_14 != e_14)))
            _fail(e_14);
          else
            d_14 = e_14;
        }
      }
      t = not_null(d_14);
    }
  else
    {
      if(match_cons(b_14, sym_FILE_1))
        {
          c_14 = ATgetArgument(b_14, 0);
          {
            ATerm g_14 = NULL;
            ATerm h_14 = NULL;
            t = not_null(c_14);
            {
              t = ReadFromFile_0(t);
              {
                h_14 = t;
                if(((g_14 != NULL) && (g_14 != h_14)))
                  _fail(h_14);
                else
                  g_14 = h_14;
              }
            }
            t = not_null(g_14);
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
  ATerm o_14 = NULL,p_14 = NULL,q_14 = NULL;
  o_14 = t;
  n_14 :
  if(match_cons(o_14, sym__2))
    {
      p_14 = ATgetArgument(o_14, 0);
      q_14 = ATgetArgument(o_14, 1);
      t = SSL_WriteToBinaryFile(not_null(p_14), not_null(q_14));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm w_14 = NULL;
  ATerm y_14 = NULL;
  w_14 = t;
  {
    ATerm z_14 = NULL;
    t = xtc_new_file_0(t);
    {
      z_14 = t;
      {
        if(((y_14 != NULL) && (y_14 != z_14)))
          _fail(z_14);
        else
          y_14 = z_14;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_14), not_null(w_14));
          t = WriteToBinaryFile_0(t);
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(y_14));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm a_92 (ATerm), ATerm b_92 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, a_92, b_92);
    t = read_from_0(t);
  }
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm e_15 = NULL,f_15 = NULL,g_15 = NULL;
  e_15 = t;
  d_15 :
  if(match_cons(e_15, sym__2))
    {
      f_15 = ATgetArgument(e_15, 0);
      g_15 = ATgetArgument(e_15, 1);
      t = SSL_call(not_null(f_15), not_null(g_15));
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
ATerm xtc_command_1 (ATerm t, ATerm r_91 (ATerm))
{
  ATerm m_15 = NULL;
  ATerm m_21;
  m_21 = t;
  {
    ATerm n_15 = NULL;
    t = r_91(t);
    {
      t = xtc_find_0(t);
      {
        n_15 = t;
        if(((m_15 != NULL) && (m_15 != n_15)))
          _fail(n_15);
        else
          m_15 = n_15;
      }
    }
  }
  t = m_21;
  {
    ATerm n_21;
    n_21 = t;
    {
      ATerm o_15 = NULL;
      ATerm p_15 = NULL;
      p_15 = t;
      if(((o_15 != NULL) && (o_15 != p_15)))
        _fail(p_15);
      else
        o_15 = p_15;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_15), not_null(o_15));
        t = call_0(t);
      }
    }
    t = n_21;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm a_82 (ATerm))
{
  ATerm x_15 = NULL,y_15 = NULL,z_15 = NULL;
  x_15 = t;
  w_15 :
  if(match_cons(x_15, sym__2))
    {
      y_15 = ATgetArgument(x_15, 0);
      z_15 = ATgetArgument(x_15, 1);
      {
        ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL;
        ATerm o_21;
        o_21 = t;
        {
          ATerm f_16 = NULL;
          ATerm g_16 = NULL,h_16 = NULL,i_16 = NULL;
          t = a_82(t);
          {
            f_16 = t;
            {
              if(((c_16 != NULL) && (c_16 != f_16)))
                _fail(f_16);
              else
                c_16 = f_16;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(c_16), not_null(y_15), not_null(z_15));
                {
                  t = table_push_0(t);
                  {
                    ATerm p_21 = t;
                    int q_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(c_16), term_r_21);
                        t = table_get_0(t);
                        LocalPopChoice(q_21);
                      }
                    else
                      {
                        t = p_21;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      g_16 = t;
                      v_15 :
                      if(((ATgetType(g_16) == AT_LIST) && !(ATisEmpty(g_16))))
                        {
                          h_16 = ATgetFirst((ATermList) g_16);
                          i_16 = (ATerm) ATgetNext((ATermList) g_16);
                          {
                            if(((d_16 != NULL) && (d_16 != h_16)))
                              _fail(h_16);
                            else
                              d_16 = h_16;
                            {
                              if(((e_16 != NULL) && (e_16 != i_16)))
                                _fail(i_16);
                              else
                                e_16 = i_16;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(c_16), term_r_21, (ATerm) ATinsert(CheckATermList(not_null(e_16)), (ATerm) ATinsert(CheckATermList(not_null(d_16)), not_null(y_15))));
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
        t = o_21;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm o_82 (ATerm))
{
  ATerm s_21;
  s_21 = t;
  {
    t = o_82(t);
    {
      ATerm h_3 (ATerm t)
      {
        t = term_t_21;
        return(t);
      }
      t = debug_1(t, h_3);
    }
  }
  t = s_21;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm q_16 = NULL,r_16 = NULL;
  ATerm u_21 = t;
  int v_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL;
      s_16 = t;
      n_16 :
      if(match_cons(s_16, sym__2))
        {
          t_16 = ATgetArgument(s_16, 0);
          u_16 = ATgetArgument(s_16, 1);
          {
            if(((r_16 != NULL) && (r_16 != t_16)))
              _fail(t_16);
            else
              r_16 = t_16;
            if(((q_16 != NULL) && (q_16 != u_16)))
              _fail(u_16);
            else
              q_16 = u_16;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(v_21);
      t = SSL_open_file(not_null(r_16), not_null(q_16));
    }
  else
    {
      t = u_21;
      {
        ATerm v_16 = NULL;
        ATerm w_16 = NULL;
        ATerm i_3 (ATerm t)
        {
          t = term_w_21;
          return(t);
        }
        t = obsolete_1(t, i_3);
        {
          v_16 = t;
          {
            if(((r_16 != NULL) && (r_16 != v_16)))
              _fail(v_16);
            else
              r_16 = v_16;
            {
              ATerm x_21;
              x_21 = t;
              {
                ATerm x_16 = NULL;
                t = term_y_21;
                {
                  x_16 = t;
                  if(((w_16 != NULL) && (w_16 != x_16)))
                    _fail(x_16);
                  else
                    w_16 = x_16;
                }
              }
              t = x_21;
              t = SSL_open_file(not_null(r_16), not_null(w_16));
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
  ATerm c_17 = NULL;
  ATerm d_17 = NULL;
  t = term_u_18;
  {
    t = new_0(t);
    {
      d_17 = t;
      if(((c_17 != NULL) && (c_17 != d_17)))
        _fail(d_17);
      else
        c_17 = d_17;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_17), term_z_21);
    {
      t = conc_strings_0(t);
      {
        ATerm a_22 = t;
        int b_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = file_exists_0(t);
            t = new_file_0(t);
            LocalPopChoice(b_22);
          }
        else
          {
            t = a_22;
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
  ATerm h_17 = NULL;
  t = new_file_0(t);
  {
    h_17 = t;
    {
      ATerm e_22;
      e_22 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_17), term_y_21);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(h_17), term_u_18);
            {
              ATerm j_3 (ATerm t)
              {
                t = term_j_22;
                return(t);
              }
              t = assert_1(t, j_3);
            }
          }
        }
      }
      t = e_22;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm p_0 (ATerm), ATerm q_0 (ATerm))
{
  ATerm r_17 = NULL,s_17 = NULL;
  r_17 = t;
  q_17 :
  if(match_cons(r_17, sym_stdin_0))
    {
      ATerm t_17 = NULL;
      ATerm u_17 = NULL;
      ATerm v_17 = NULL;
      t = xtc_new_file_0(t);
      {
        u_17 = t;
        {
          if(((t_17 != NULL) && (t_17 != u_17)))
            _fail(u_17);
          else
            t_17 = u_17;
          {
            ATerm w_17 = NULL;
            t = q_0(t);
            {
              w_17 = t;
              if(((v_17 != NULL) && (v_17 != w_17)))
                _fail(w_17);
              else
                v_17 = w_17;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(v_17), (ATerm) ATinsert(ATinsert(ATempty, not_null(t_17)), term_s_14));
              {
                ATerm k_22 = t;
                int l_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = conc_two_lists_0(t);
                    LocalPopChoice(l_22);
                  }
                else
                  {
                    t = k_22;
                    t = conc_more_lists_0(t);
                  }
                t = xtc_command_1(t, p_0);
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(t_17));
    }
  else
    {
      if(match_cons(r_17, sym_FILE_1))
        {
          s_17 = ATgetArgument(r_17, 0);
          {
            ATerm y_17 = NULL;
            ATerm z_17 = NULL;
            t = not_null(s_17);
            {
              ATerm a_18 = NULL;
              t = xtc_new_file_0(t);
              {
                z_17 = t;
                {
                  if(((y_17 != NULL) && (y_17 != z_17)))
                    _fail(z_17);
                  else
                    y_17 = z_17;
                  {
                    ATerm b_18 = NULL;
                    t = q_0(t);
                    {
                      b_18 = t;
                      if(((a_18 != NULL) && (a_18 != b_18)))
                        _fail(b_18);
                      else
                        a_18 = b_18;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(a_18), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(y_17)), term_s_14), not_null(s_17)), term_m_22));
                      {
                        ATerm n_22 = t;
                        int o_22 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = conc_two_lists_0(t);
                            LocalPopChoice(o_22);
                          }
                        else
                          {
                            t = n_22;
                            t = conc_more_lists_0(t);
                          }
                        t = xtc_command_1(t, p_0);
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(y_17));
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
  ATerm m_18 = NULL;
  m_18 = t;
  l_18 :
  if(match_cons(m_18, sym_stdin_0))
    {
      ATerm o_18 = NULL,q_18 = NULL;
      ATerm q_22;
      q_22 = t;
      {
        ATerm p_18 = NULL;
        t = SSLgetAnnotations(not_null(m_18));
        {
          p_18 = t;
          if(((o_18 != NULL) && (o_18 != p_18)))
            _fail(p_18);
          else
            o_18 = p_18;
        }
      }
      t = q_22;
      {
        ATerm r_18 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(o_18));
        {
          r_18 = t;
          if(((q_18 != NULL) && (q_18 != r_18)))
            _fail(r_18);
          else
            q_18 = r_18;
        }
        t = not_null(q_18);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm k_58 (ATerm))
{
  ATerm a_19 = NULL,b_19 = NULL;
  a_19 = t;
  z_18 :
  if(match_cons(a_19, sym_FILE_1))
    {
      b_19 = ATgetArgument(a_19, 0);
      {
        ATerm e_19 = NULL,g_19 = NULL;
        ATerm f_19 = NULL;
        t = SSLgetAnnotations(not_null(a_19));
        {
          f_19 = t;
          if(((e_19 != NULL) && (e_19 != f_19)))
            _fail(f_19);
          else
            e_19 = f_19;
        }
        {
          t = not_null(b_19);
          {
            ATerm i_19 = NULL;
            t = k_58(t);
            {
              g_19 = t;
              {
                ATerm j_19 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(g_19)), not_null(e_19));
                {
                  j_19 = t;
                  if(((i_19 != NULL) && (i_19 != j_19)))
                    _fail(j_19);
                  else
                    i_19 = j_19;
                }
                t = not_null(i_19);
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
ATerm xtc_transform_2 (ATerm t, ATerm t_91 (ATerm), ATerm u_91 (ATerm))
{
  ATerm u_22 = t;
  int w_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_22 = t;
      int a_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          LocalPopChoice(a_23);
        }
      else
        {
          t = z_22;
          t = stdin_0(t);
        }
      LocalPopChoice(w_22);
      t = xtc_transform_file_2(t, t_91, u_91);
    }
  else
    {
      t = u_22;
      t = xtc_transform_term_2(t, t_91, u_91);
    }
  return(t);
}
ATerm if_verbose3_1 (ATerm t, ATerm f_85 (ATerm))
{
  ATerm b_23 = t;
  int c_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_23;
      d_23 = t;
      {
        ATerm p_19 = NULL;
        ATerm q_19 = NULL;
        t = term_i_14;
        {
          t = get_config_0(t);
          {
            q_19 = t;
            if(((p_19 != NULL) && (p_19 != q_19)))
              _fail(q_19);
            else
              p_19 = q_19;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_19), term_f_23);
          t = geq_0(t);
        }
      }
      t = d_23;
      t = f_85(t);
      LocalPopChoice(c_23);
    }
  else
    {
      t = b_23;
      {
      }
    }
  return(t);
}
ATerm basename_1 (ATerm t, ATerm t_80 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm g_23 = t;
    int h_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_19 (ATerm t)
        {
          ATerm i_23 = t;
          int j_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, w_19);
              LocalPopChoice(j_23);
            }
          else
            {
              t = i_23;
              {
                ATerm n_23 = t;
                int o_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm m_3 (ATerm t)
                    {
                      ATerm u_19 = NULL;
                      u_19 = t;
                      s_19 :
                      if(!(match_int(u_19, 47)))
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = Cons_2(t, m_3, _id);
                    LocalPopChoice(o_23);
                  }
                else
                  {
                    t = n_23;
                    {
                      ATerm n_3 (ATerm t)
                      {
                        ATerm v_19 = NULL;
                        v_19 = t;
                        t_19 :
                        if(!(match_int(v_19, 46)))
                          {
                            _fail(t);
                          }
                        return(t);
                      }
                      t = Cons_2(t, n_3, t_80);
                      t = (ATerm) ATempty;
                    }
                  }
              }
            }
          return(t);
        }
        t = w_19(t);
        LocalPopChoice(h_23);
      }
    else
      {
        t = g_23;
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
  ATerm b_20 = NULL,c_20 = NULL;
  b_20 = t;
  a_20 :
  if(match_cons(b_20, sym_FILE_1))
    {
      c_20 = ATgetArgument(b_20, 0);
      {
        ATerm e_20 = NULL,f_20 = NULL;
        ATerm g_20 = NULL;
        t = not_null(c_20);
        {
          ATerm h_20 = NULL;
          t = basename_1(t, _id);
          {
            g_20 = t;
            {
              if(((e_20 != NULL) && (e_20 != g_20)))
                _fail(g_20);
              else
                e_20 = g_20;
              {
                ATerm o_3 (ATerm t)
                {
                  ATerm p_3 (ATerm t)
                  {
                    t = term_p_23;
                    return(t);
                  }
                  t = debug_1(t, p_3);
                  return(t);
                }
                t = if_verbose3_1(t, o_3);
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_q_23, not_null(e_20));
                  {
                    t = set_config_0(t);
                    {
                      ATerm r_23 = t;
                      int w_23 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = term_s_14;
                          {
                            t = get_config_0(t);
                            t = basename_1(t, _id);
                          }
                          LocalPopChoice(w_23);
                        }
                      else
                        {
                          t = r_23;
                          t = not_null(e_20);
                        }
                      {
                        h_20 = t;
                        {
                          if(((f_20 != NULL) && (f_20 != h_20)))
                            _fail(h_20);
                          else
                            f_20 = h_20;
                          {
                            ATerm q_3 (ATerm t)
                            {
                              ATerm r_3 (ATerm t)
                              {
                                t = term_x_23;
                                return(t);
                              }
                              t = debug_1(t, r_3);
                              return(t);
                            }
                            t = if_verbose3_1(t, q_3);
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_h_19, not_null(f_20));
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
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(e_20));
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
    ATerm u_3 (ATerm t)
    {
      t = term_y_23;
      return(t);
    }
    ATerm x_3 (ATerm t)
    {
      ATerm p_20 = NULL,r_20 = NULL,t_20 = NULL,v_20 = NULL;
      ATerm z_23;
      z_23 = t;
      {
        ATerm q_20 = NULL;
        t = dep_name_0(t);
        {
          q_20 = t;
          if(((p_20 != NULL) && (p_20 != q_20)))
            _fail(q_20);
          else
            p_20 = q_20;
        }
      }
      t = z_23;
      {
        ATerm a_24;
        a_24 = t;
        {
          ATerm s_20 = NULL;
          t = pass_verbose_0(t);
          {
            s_20 = t;
            if(((r_20 != NULL) && (r_20 != s_20)))
              _fail(s_20);
            else
              r_20 = s_20;
          }
        }
        t = a_24;
        {
          ATerm d_24;
          d_24 = t;
          {
            ATerm u_20 = NULL;
            t = pass_keep_0(t);
            {
              u_20 = t;
              if(((t_20 != NULL) && (t_20 != u_20)))
                _fail(u_20);
              else
                t_20 = u_20;
            }
          }
          t = d_24;
          {
            ATerm w_20 = NULL;
            t = term_e_24;
            {
              t = get_config_0(t);
              {
                w_20 = t;
                if(((v_20 != NULL) && (v_20 != w_20)))
                  _fail(w_20);
                else
                  v_20 = w_20;
              }
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(t_20)), not_null(r_20)), not_null(v_20)), not_null(p_20));
              t = concat_0(t);
            }
          }
        }
      }
      return(t);
    }
    t = xtc_transform_2(t, u_3, x_3);
  }
  return(t);
}
ATerm front_end_0 (ATerm t)
{
  ATerm b_4 (ATerm t)
  {
    ATerm c_4 (ATerm t)
    {
      t = term_f_24;
      return(t);
    }
    t = debug_1(t, c_4);
    return(t);
  }
  t = if_verbose2_1(t, b_4);
  {
    ATerm d_4 (ATerm t)
    {
      ATerm h_4 (ATerm t)
      {
        ATerm c_21 = NULL;
        ATerm d_21 = NULL;
        d_21 = t;
        if(((c_21 != NULL) && (c_21 != d_21)))
          _fail(d_21);
        else
          c_21 = d_21;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_v_14, (ATerm) ATinsert(CheckATermList(not_null(c_21)), term_g_24));
          t = printnl_0(t);
        }
        return(t);
      }
      t = if_verbose1_1(t, h_4);
      return(t);
    }
    ATerm e_4 (ATerm t)
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
    t = profile_p__2(t, d_4, e_4);
  }
  return(t);
}
ATerm rename_file_0 (ATerm t)
{
  ATerm h_21 = NULL,i_21 = NULL,j_21 = NULL;
  h_21 = t;
  g_21 :
  if(match_cons(h_21, sym__2))
    {
      i_21 = ATgetArgument(h_21, 0);
      j_21 = ATgetArgument(h_21, 1);
      t = SSL_rename(not_null(i_21), not_null(j_21));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stdout_0 (ATerm t)
{
  ATerm d_22 = NULL;
  d_22 = t;
  c_22 :
  if(match_cons(d_22, sym_stdout_0))
    {
      ATerm f_22 = NULL,h_22 = NULL;
      ATerm h_24;
      h_24 = t;
      {
        ATerm g_22 = NULL;
        t = SSLgetAnnotations(not_null(d_22));
        {
          g_22 = t;
          if(((f_22 != NULL) && (f_22 != g_22)))
            _fail(g_22);
          else
            f_22 = g_22;
        }
      }
      t = h_24;
      {
        ATerm i_22 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(f_22));
        {
          i_22 = t;
          if(((h_22 != NULL) && (h_22 != i_22)))
            _fail(i_22);
          else
            h_22 = i_22;
        }
        t = not_null(h_22);
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
  ATerm s_22 = NULL,t_22 = NULL;
  s_22 = t;
  r_22 :
  if(match_cons(s_22, sym_FILE_1))
    {
      t_22 = ATgetArgument(s_22, 0);
      {
        ATerm i_24 = t;
        int j_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_22 = NULL;
            t = o_0(t);
            {
              v_22 = t;
              p_22 :
              if(match_cons(v_22, sym_stdout_0))
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(t_22), term_t_24);
                  {
                    t = copy_file_0(t);
                    {
                      t = not_null(t_22);
                      t = remove_file_0(t);
                    }
                  }
                }
              else
                {
                  _fail(t);
                }
            }
            t = term_t_24;
            LocalPopChoice(j_24);
          }
        else
          {
            t = i_24;
            {
              ATerm x_22 = NULL;
              ATerm y_22 = NULL;
              t = o_0(t);
              {
                y_22 = t;
                {
                  if(((x_22 != NULL) && (x_22 != y_22)))
                    _fail(y_22);
                  else
                    x_22 = y_22;
                  {
                    ATerm u_24 = t;
                    if((PushChoice() == 0))
                      {
                        t = stdout_0(t);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = u_24;
                      }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(t_22), not_null(x_22));
                      t = rename_file_0(t);
                    }
                  }
                }
              }
              t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(x_22));
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
  ATerm k_23 = NULL,l_23 = NULL,m_23 = NULL;
  k_23 = t;
  e_23 :
  if(((ATgetType(k_23) == AT_LIST) && !(ATisEmpty(k_23))))
    {
      l_23 = ATgetFirst((ATermList) k_23);
      m_23 = (ATerm) ATgetNext((ATermList) k_23);
      t = not_null(m_23);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm t_23 = NULL,u_23 = NULL,v_23 = NULL;
  t_23 = t;
  s_23 :
  if(match_cons(t_23, sym__2))
    {
      u_23 = ATgetArgument(t_23, 0);
      v_23 = ATgetArgument(t_23, 1);
      {
        ATerm v_24;
        v_24 = t;
        {
          ATerm b_24 = NULL;
          ATerm c_24 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_23), not_null(v_23));
          {
            ATerm w_24 = t;
            int x_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(x_24);
              }
            else
              {
                t = w_24;
                t = (ATerm) ATempty;
              }
            {
              c_24 = t;
              if(((b_24 != NULL) && (b_24 != c_24)))
                _fail(c_24);
              else
                b_24 = c_24;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(u_23), not_null(v_23), not_null(b_24));
            t = table_put_0(t);
          }
        }
        t = v_24;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm x_81 (ATerm))
{
  ATerm l_24 = NULL,m_24 = NULL,n_24 = NULL;
  ATerm z_24;
  z_24 = t;
  {
    ATerm o_24 = NULL;
    ATerm p_24 = NULL,q_24 = NULL,r_24 = NULL;
    t = x_81(t);
    {
      o_24 = t;
      {
        if(((n_24 != NULL) && (n_24 != o_24)))
          _fail(o_24);
        else
          n_24 = o_24;
        {
          ATerm a_25 = t;
          int b_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(n_24), term_r_21);
              t = table_get_0(t);
              LocalPopChoice(b_25);
            }
          else
            {
              t = a_25;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            p_24 = t;
            k_24 :
            if(((ATgetType(p_24) == AT_LIST) && !(ATisEmpty(p_24))))
              {
                q_24 = ATgetFirst((ATermList) p_24);
                r_24 = (ATerm) ATgetNext((ATermList) p_24);
                {
                  if(((m_24 != NULL) && (m_24 != q_24)))
                    _fail(q_24);
                  else
                    m_24 = q_24;
                  {
                    if(((l_24 != NULL) && (l_24 != r_24)))
                      _fail(r_24);
                    else
                      l_24 = r_24;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(n_24), term_r_21, not_null(l_24));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(m_24);
                          {
                            ATerm i_4 (ATerm t)
                            {
                              ATerm s_24 = NULL;
                              s_24 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(n_24), not_null(s_24));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, i_4);
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
  t = z_24;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm y_24 = NULL;
  y_24 = t;
  t = SSL_remove(not_null(y_24));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm f_64 (ATerm), ATerm g_64 (ATerm))
{
  ATerm c_25 = t;
  int h_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_64(t);
      t = g_64(t);
      LocalPopChoice(h_25);
    }
  else
    {
      t = c_25;
      {
        t = g_64(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm w_81 (ATerm))
{
  ATerm d_25 = NULL;
  ATerm i_25;
  i_25 = t;
  {
    ATerm e_25 = NULL;
    ATerm f_25 = NULL;
    t = w_81(t);
    {
      e_25 = t;
      {
        if(((d_25 != NULL) && (d_25 != e_25)))
          _fail(e_25);
        else
          d_25 = e_25;
        {
          ATerm g_25 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_25), term_r_21);
          {
            ATerm j_25 = t;
            int q_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(q_25);
              }
            else
              {
                t = j_25;
                t = (ATerm) ATempty;
              }
            {
              g_25 = t;
              if(((f_25 != NULL) && (f_25 != g_25)))
                _fail(g_25);
              else
                f_25 = g_25;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(d_25), term_r_21, (ATerm) ATinsert(CheckATermList(not_null(f_25)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = i_25;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm l_91 (ATerm))
{
  ATerm l_25 = NULL,m_25 = NULL;
  ATerm j_4 (ATerm t)
  {
    t = term_j_22;
    return(t);
  }
  t = begin_scope_1(t, j_4);
  {
    ATerm k_4 (ATerm t)
    {
      ATerm r_25;
      r_25 = t;
      {
        ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL;
        ATerm u_25 = t;
        int v_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_y_25;
            t = table_get_0(t);
            LocalPopChoice(v_25);
          }
        else
          {
            t = u_25;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          n_25 = t;
          k_25 :
          if(((ATgetType(n_25) == AT_LIST) && !(ATisEmpty(n_25))))
            {
              o_25 = ATgetFirst((ATermList) n_25);
              p_25 = (ATerm) ATgetNext((ATermList) n_25);
              {
                if(((m_25 != NULL) && (m_25 != o_25)))
                  _fail(o_25);
                else
                  m_25 = o_25;
                {
                  if(((l_25 != NULL) && (l_25 != p_25)))
                    _fail(p_25);
                  else
                    l_25 = p_25;
                  {
                    t = not_null(m_25);
                    {
                      ATerm q_4 (ATerm t)
                      {
                        ATerm z_25 = t;
                        int b_26 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = remove_file_0(t);
                            LocalPopChoice(b_26);
                          }
                        else
                          {
                            t = z_25;
                            {
                            }
                          }
                        return(t);
                      }
                      t = map_1(t, q_4);
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
        ATerm v_4 (ATerm t)
        {
          t = term_j_22;
          return(t);
        }
        t = end_scope_1(t, v_4);
      }
      return(t);
    }
    t = restore_always_2(t, l_91, k_4);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm m_91 (ATerm))
{
  ATerm d_5 (ATerm t)
  {
    ATerm c_26 = t;
    int d_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_25 = NULL;
        ATerm t_25 = NULL;
        t = term_m_22;
        {
          t = get_config_0(t);
          {
            t_25 = t;
            if(((s_25 != NULL) && (s_25 != t_25)))
              _fail(t_25);
            else
              s_25 = t_25;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(s_25));
        LocalPopChoice(d_26);
      }
    else
      {
        t = c_26;
        t = term_l_21;
      }
    {
      t = m_91(t);
      {
        ATerm e_5 (ATerm t)
        {
          ATerm k_26 = t;
          int l_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_s_14;
              t = get_config_0(t);
              LocalPopChoice(l_26);
            }
          else
            {
              t = k_26;
              t = term_t_24;
            }
          return(t);
        }
        t = rename_to_1(t, e_5);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, d_5);
  return(t);
}
ATerm compile_0 (ATerm t)
{
  ATerm f_5 (ATerm t)
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
  t = xtc_io_1(t, f_5);
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm d_85 (ATerm))
{
  ATerm m_26 = t;
  int n_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_26;
      o_26 = t;
      {
        ATerm w_25 = NULL;
        ATerm x_25 = NULL;
        t = term_i_14;
        {
          t = get_config_0(t);
          {
            x_25 = t;
            if(((w_25 != NULL) && (w_25 != x_25)))
              _fail(x_25);
            else
              w_25 = x_25;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_25), term_y_20);
          t = geq_0(t);
        }
      }
      t = o_26;
      t = d_85(t);
      LocalPopChoice(n_26);
    }
  else
    {
      t = m_26;
      {
      }
    }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm a_26 = NULL;
  a_26 = t;
  t = SSL_TicksToSeconds(not_null(a_26));
  return(t);
}
ATerm self_children_sys_time_0 (ATerm t)
{
  ATerm f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL;
  f_26 = t;
  e_26 :
  if(match_cons(f_26, sym__4))
    {
      g_26 = ATgetArgument(f_26, 0);
      h_26 = ATgetArgument(f_26, 1);
      i_26 = ATgetArgument(f_26, 2);
      j_26 = ATgetArgument(f_26, 3);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_26), not_null(j_26));
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
  ATerm r_26 = NULL,s_26 = NULL,t_26 = NULL;
  r_26 = t;
  q_26 :
  if(match_cons(r_26, sym__2))
    {
      s_26 = ATgetArgument(r_26, 0);
      t_26 = ATgetArgument(r_26, 1);
      {
        ATerm p_26 = t;
        int u_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(s_26), not_null(t_26));
            LocalPopChoice(u_26);
          }
        else
          {
            t = p_26;
            t = SSL_addr(not_null(s_26), not_null(t_26));
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
  ATerm z_26 = NULL,a_27 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL;
  z_26 = t;
  y_26 :
  if(match_cons(z_26, sym__4))
    {
      a_27 = ATgetArgument(z_26, 0);
      b_27 = ATgetArgument(z_26, 1);
      c_27 = ATgetArgument(z_26, 2);
      d_27 = ATgetArgument(z_26, 3);
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
ATerm subt_0 (ATerm t)
{
  ATerm l_27 = NULL,m_27 = NULL,n_27 = NULL;
  l_27 = t;
  k_27 :
  if(match_cons(l_27, sym__2))
    {
      m_27 = ATgetArgument(l_27, 0);
      n_27 = ATgetArgument(l_27, 1);
      {
        ATerm v_26 = t;
        int w_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(m_27), not_null(n_27));
            LocalPopChoice(w_26);
          }
        else
          {
            t = v_26;
            t = SSL_subtr(not_null(m_27), not_null(n_27));
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
  ATerm z_27 = NULL,a_28 = NULL,b_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL,h_28 = NULL,i_28 = NULL,j_28 = NULL;
  z_27 = t;
  w_27 :
  if(match_cons(z_27, sym__2))
    {
      a_28 = ATgetArgument(z_27, 0);
      f_28 = ATgetArgument(z_27, 1);
      x_27 :
      if(match_cons(a_28, sym__4))
        {
          b_28 = ATgetArgument(a_28, 0);
          c_28 = ATgetArgument(a_28, 1);
          d_28 = ATgetArgument(a_28, 2);
          e_28 = ATgetArgument(a_28, 3);
          y_27 :
          if(match_cons(f_28, sym__4))
            {
              g_28 = ATgetArgument(f_28, 0);
              h_28 = ATgetArgument(f_28, 1);
              i_28 = ATgetArgument(f_28, 2);
              j_28 = ATgetArgument(f_28, 3);
              {
                ATerm t_28 = NULL,x_28 = NULL,c_29 = NULL,e_29 = NULL;
                ATerm x_26;
                x_26 = t;
                {
                  ATerm w_28 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(b_28), not_null(g_28));
                  {
                    t = subt_0(t);
                    {
                      w_28 = t;
                      if(((t_28 != NULL) && (t_28 != w_28)))
                        _fail(w_28);
                      else
                        t_28 = w_28;
                    }
                  }
                }
                t = x_26;
                {
                  ATerm e_27;
                  e_27 = t;
                  {
                    ATerm b_29 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(c_28), not_null(h_28));
                    {
                      t = subt_0(t);
                      {
                        b_29 = t;
                        if(((x_28 != NULL) && (x_28 != b_29)))
                          _fail(b_29);
                        else
                          x_28 = b_29;
                      }
                    }
                  }
                  t = e_27;
                  {
                    ATerm f_27;
                    f_27 = t;
                    {
                      ATerm d_29 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(d_28), not_null(i_28));
                      {
                        t = subt_0(t);
                        {
                          d_29 = t;
                          if(((c_29 != NULL) && (c_29 != d_29)))
                            _fail(d_29);
                          else
                            c_29 = d_29;
                        }
                      }
                    }
                    t = f_27;
                    {
                      ATerm f_29 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(e_28), not_null(j_28));
                      {
                        t = subt_0(t);
                        {
                          f_29 = t;
                          if(((e_29 != NULL) && (e_29 != f_29)))
                            _fail(f_29);
                          else
                            e_29 = f_29;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym__4, not_null(t_28), not_null(x_28), not_null(c_29), not_null(e_29));
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
ATerm profile_p__2 (ATerm t, ATerm z_82 (ATerm), ATerm a_83 (ATerm))
{
  ATerm r_29 = NULL;
  ATerm g_27;
  g_27 = t;
  {
    ATerm s_29 = NULL;
    t = times_0(t);
    {
      s_29 = t;
      if(((r_29 != NULL) && (r_29 != s_29)))
        _fail(s_29);
      else
        r_29 = s_29;
    }
  }
  t = g_27;
  {
    t = a_83(t);
    {
      ATerm h_27;
      h_27 = t;
      {
        ATerm t_29 = NULL,v_29 = NULL,x_29 = NULL;
        ATerm u_29 = NULL;
        t = times_0(t);
        {
          u_29 = t;
          if(((t_29 != NULL) && (t_29 != u_29)))
            _fail(u_29);
          else
            t_29 = u_29;
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_29), not_null(r_29));
          {
            t = diff_times_0(t);
            {
              ATerm i_27;
              i_27 = t;
              {
                ATerm w_29 = NULL;
                t = self_children_user_time_0(t);
                {
                  t = ticks_to_seconds_0(t);
                  {
                    w_29 = t;
                    if(((v_29 != NULL) && (v_29 != w_29)))
                      _fail(w_29);
                    else
                      v_29 = w_29;
                  }
                }
              }
              t = i_27;
              {
                ATerm y_29 = NULL;
                t = self_children_sys_time_0(t);
                {
                  t = ticks_to_seconds_0(t);
                  {
                    y_29 = t;
                    if(((x_29 != NULL) && (x_29 != y_29)))
                      _fail(y_29);
                    else
                      x_29 = y_29;
                  }
                }
                {
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(x_29)), term_o_27), not_null(v_29)), term_j_27);
                  t = z_82(t);
                }
              }
            }
          }
        }
      }
      t = h_27;
    }
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm h_82 (ATerm))
{
  ATerm p_27;
  p_27 = t;
  {
    ATerm f_30 = NULL,h_30 = NULL;
    ATerm q_27;
    q_27 = t;
    {
      ATerm g_30 = NULL;
      t = h_82(t);
      {
        g_30 = t;
        if(((f_30 != NULL) && (f_30 != g_30)))
          _fail(g_30);
        else
          f_30 = g_30;
      }
    }
    t = q_27;
    {
      ATerm i_30 = NULL;
      i_30 = t;
      if(((h_30 != NULL) && (h_30 != i_30)))
        _fail(i_30);
      else
        h_30 = i_30;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_30)), not_null(f_30)));
        t = printnl_0(t);
      }
    }
  }
  t = p_27;
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm m_30 = NULL;
  m_30 = t;
  t = SSL_implode_string(not_null(m_30));
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm q_30 = NULL;
  q_30 = t;
  t = SSL_explode_string(not_null(q_30));
  return(t);
}
ATerm _2 (ATerm t, ATerm y_51 (ATerm), ATerm z_51 (ATerm))
{
  ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL;
  e_31 = t;
  y_30 :
  if(match_cons(e_31, sym__2))
    {
      f_31 = ATgetArgument(e_31, 0);
      g_31 = ATgetArgument(e_31, 1);
      {
        ATerm k_31 = NULL,m_31 = NULL;
        ATerm l_31 = NULL;
        t = SSLgetAnnotations(not_null(e_31));
        {
          l_31 = t;
          if(((k_31 != NULL) && (k_31 != l_31)))
            _fail(l_31);
          else
            k_31 = l_31;
        }
        {
          t = not_null(f_31);
          {
            ATerm o_31 = NULL;
            t = y_51(t);
            {
              m_31 = t;
              {
                t = not_null(g_31);
                {
                  ATerm q_31 = NULL;
                  t = z_51(t);
                  {
                    o_31 = t;
                    {
                      ATerm r_31 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(m_31), not_null(o_31)), not_null(k_31));
                      {
                        r_31 = t;
                        if(((q_31 != NULL) && (q_31 != r_31)))
                          _fail(r_31);
                        else
                          q_31 = r_31;
                      }
                      t = not_null(q_31);
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
    ATerm r_27 = t;
    int s_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(s_27);
      }
    else
      {
        t = r_27;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm y_31 = NULL;
  y_31 = t;
  t = SSL_is_string(not_null(y_31));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm t_27 = t;
  int u_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(u_27);
    }
  else
    {
      t = t_27;
      {
        ATerm v_27 = t;
        int k_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_5 (ATerm t)
            {
              ATerm l_28 = t;
              int m_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(m_28);
                }
              else
                {
                  t = l_28;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, g_5);
            LocalPopChoice(k_28);
          }
        else
          {
            t = v_27;
            {
              ATerm h_32 = NULL,i_32 = NULL,j_32 = NULL;
              h_32 = t;
              g_32 :
              if(match_cons(h_32, sym_Path_1))
                {
                  i_32 = ATgetArgument(h_32, 0);
                  t = not_null(i_32);
                }
              else
                {
                  if(match_cons(h_32, sym_Var_1))
                    {
                      i_32 = ATgetArgument(h_32, 0);
                      {
                        t = not_null(i_32);
                        {
                          ATerm n_28 = t;
                          int o_28 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(o_28);
                            }
                          else
                            {
                              t = n_28;
                              {
                                ATerm h_5 (ATerm t)
                                {
                                  t = term_p_28;
                                  return(t);
                                }
                                t = debug_1(t, h_5);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(h_32, sym_Prefix_2))
                        {
                          i_32 = ATgetArgument(h_32, 0);
                          j_32 = ATgetArgument(h_32, 1);
                          {
                            ATerm o_32 = NULL,q_32 = NULL;
                            ATerm q_28;
                            q_28 = t;
                            {
                              ATerm p_32 = NULL;
                              t = not_null(i_32);
                              {
                                t = eval_config_0(t);
                                {
                                  p_32 = t;
                                  if(((o_32 != NULL) && (o_32 != p_32)))
                                    _fail(p_32);
                                  else
                                    o_32 = p_32;
                                }
                              }
                            }
                            t = q_28;
                            {
                              ATerm r_32 = NULL;
                              t = not_null(j_32);
                              {
                                t = eval_config_0(t);
                                {
                                  r_32 = t;
                                  if(((q_32 != NULL) && (q_32 != r_32)))
                                    _fail(r_32);
                                  else
                                    q_32 = r_32;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(o_32), not_null(q_32));
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
  ATerm z_32 = NULL;
  z_32 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_r_28, not_null(z_32));
    {
      t = table_get_0(t);
      {
        ATerm s_28 = t;
        int u_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm v_28;
              v_28 = t;
              {
                ATerm b_33 = NULL;
                ATerm c_33 = NULL;
                c_33 = t;
                if(((b_33 != NULL) && (b_33 != c_33)))
                  _fail(c_33);
                else
                  b_33 = c_33;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_r_28, not_null(z_32), not_null(b_33));
                  t = table_put_0(t);
                }
              }
              t = v_28;
            }
            LocalPopChoice(u_28);
          }
        else
          {
            t = s_28;
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
  ATerm y_28;
  y_28 = t;
  {
    t = error_0(t);
    {
      t = term_y_20;
      t = exit_0(t);
    }
  }
  t = y_28;
  return(t);
}
ATerm sc_version_0 (ATerm t)
{
  ATerm z_28;
  z_28 = t;
  {
    ATerm g_33 = NULL;
    ATerm h_33 = NULL;
    t = term_a_29;
    {
      t = get_config_0(t);
      {
        h_33 = t;
        if(((g_33 != NULL) && (g_33 != h_33)))
          _fail(h_33);
        else
          g_33 = h_33;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_24, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_29), term_m_29), term_l_29), term_k_29), term_j_29), term_i_29), term_h_29), not_null(g_33)), term_g_29));
      t = printnl_0(t);
    }
  }
  t = z_28;
  return(t);
}
ATerm try_1 (ATerm t, ATerm s_63 (ATerm))
{
  ATerm o_29 = t;
  int p_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_63(t);
      LocalPopChoice(p_29);
    }
  else
    {
      t = o_29;
      {
      }
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm l_33 = NULL,m_33 = NULL,n_33 = NULL;
  l_33 = t;
  k_33 :
  if(match_cons(l_33, sym__2))
    {
      m_33 = ATgetArgument(l_33, 0);
      n_33 = ATgetArgument(l_33, 1);
      t = SSL_copy(not_null(m_33), not_null(n_33));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm s_33 = NULL;
  s_33 = t;
  t = SSL_table_keys(not_null(s_33));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm y_33 = NULL;
  y_33 = t;
  {
    t = table_keys_0(t);
    {
      ATerm i_5 (ATerm t)
      {
        ATerm a_34 = NULL;
        ATerm c_34 = NULL;
        a_34 = t;
        {
          ATerm d_34 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_33), not_null(a_34));
          {
            t = table_get_0(t);
            {
              d_34 = t;
              if(((c_34 != NULL) && (c_34 != d_34)))
                _fail(d_34);
              else
                c_34 = d_34;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_34), not_null(c_34));
        }
        return(t);
      }
      t = map_1(t, i_5);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm h_85 (ATerm))
{
  ATerm q_29 = t;
  int z_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_30;
      a_30 = t;
      {
        ATerm i_34 = NULL;
        ATerm j_34 = NULL;
        t = term_i_14;
        {
          t = get_config_0(t);
          {
            j_34 = t;
            if(((i_34 != NULL) && (i_34 != j_34)))
              _fail(j_34);
            else
              i_34 = j_34;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_34), term_b_30);
          t = geq_0(t);
        }
      }
      t = a_30;
      t = h_85(t);
      LocalPopChoice(z_29);
    }
  else
    {
      t = q_29;
      {
      }
    }
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm c_30;
  c_30 = t;
  {
    ATerm m_34 = NULL;
    ATerm n_34 = NULL;
    n_34 = t;
    if(((m_34 != NULL) && (m_34 != n_34)))
      _fail(n_34);
    else
      m_34 = n_34;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_14, not_null(m_34));
      t = printnl_0(t);
    }
  }
  t = c_30;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm t_34 = NULL;
  ATerm v_34 = NULL,w_34 = NULL;
  t_34 = t;
  {
    ATerm x_34 = NULL,y_34 = NULL,z_34 = NULL,a_35 = NULL,b_35 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_d_30, (ATerm) ATmakeAppl(sym_Tool_1, not_null(t_34)));
    {
      t = table_get_0(t);
      {
        x_34 = t;
        r_34 :
        if(((ATgetType(x_34) == AT_LIST) && !(ATisEmpty(x_34))))
          {
            y_34 = ATgetFirst((ATermList) x_34);
            b_35 = (ATerm) ATgetNext((ATermList) x_34);
            s_34 :
            if(match_cons(y_34, sym__2))
              {
                z_34 = ATgetArgument(y_34, 0);
                a_35 = ATgetArgument(y_34, 1);
                {
                  if(((v_34 != NULL) && (v_34 != z_34)))
                    _fail(z_34);
                  else
                    v_34 = z_34;
                  if(((w_34 != NULL) && (w_34 != a_35)))
                    _fail(a_35);
                  else
                    w_34 = a_35;
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
    t = not_null(w_34);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm l_35 = NULL,m_35 = NULL,n_35 = NULL;
  l_35 = t;
  h_35 :
  if(match_cons(l_35, sym__2))
    {
      m_35 = ATgetArgument(l_35, 0);
      n_35 = ATgetArgument(l_35, 1);
      {
        ATerm q_35 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_d_30, (ATerm) ATmakeAppl(sym_Tool_1, not_null(m_35)));
        {
          t = table_get_0(t);
          {
            ATerm n_5 (ATerm t)
            {
              ATerm r_35 = NULL,s_35 = NULL,t_35 = NULL;
              r_35 = t;
              g_35 :
              if(match_cons(r_35, sym__2))
                {
                  s_35 = ATgetArgument(r_35, 0);
                  t_35 = ATgetArgument(r_35, 1);
                  {
                    if(((n_35 != NULL) && (n_35 != s_35)))
                      _fail(s_35);
                    else
                      n_35 = s_35;
                    if(((q_35 != NULL) && (q_35 != t_35)))
                      _fail(t_35);
                    else
                      q_35 = t_35;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, n_5);
          }
        }
        t = not_null(q_35);
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
  ATerm e_30 = t;
  int j_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_30;
      {
        t = table_get_0(t);
        {
          ATerm r_5 (ATerm t)
          {
            t = try_1(t, xtc_read_0);
            return(t);
          }
          t = map_1(t, r_5);
        }
      }
      LocalPopChoice(j_30);
    }
  else
    {
      t = e_30;
      {
      }
    }
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm g_85 (ATerm))
{
  ATerm n_30 = t;
  int o_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_30;
      p_30 = t;
      {
        ATerm x_35 = NULL;
        ATerm y_35 = NULL;
        t = term_i_14;
        {
          t = get_config_0(t);
          {
            y_35 = t;
            if(((x_35 != NULL) && (x_35 != y_35)))
              _fail(y_35);
            else
              x_35 = y_35;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_35), term_r_30);
          t = geq_0(t);
        }
      }
      t = p_30;
      t = g_85(t);
      LocalPopChoice(o_30);
    }
  else
    {
      t = n_30;
      {
      }
    }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm c_36 = NULL,d_36 = NULL,e_36 = NULL;
  c_36 = t;
  b_36 :
  if(match_cons(c_36, sym__2))
    {
      d_36 = ATgetArgument(c_36, 0);
      e_36 = ATgetArgument(c_36, 1);
      {
        ATerm s_30;
        s_30 = t;
        {
          ATerm t_30 = t;
          int u_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(d_36), not_null(e_36));
              LocalPopChoice(u_30);
            }
          else
            {
              t = t_30;
              t = SSL_gtr(not_null(d_36), not_null(e_36));
            }
        }
        t = s_30;
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
  ATerm k_36 = NULL;
  ATerm v_30 = t;
  int w_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_36 = NULL,m_36 = NULL,n_36 = NULL;
      l_36 = t;
      j_36 :
      if(match_cons(l_36, sym__2))
        {
          m_36 = ATgetArgument(l_36, 0);
          n_36 = ATgetArgument(l_36, 1);
          {
            if(((k_36 != NULL) && (k_36 != m_36)))
              _fail(m_36);
            else
              k_36 = m_36;
            if(((k_36 != NULL) && (k_36 != n_36)))
              _fail(n_36);
            else
              k_36 = n_36;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(w_30);
    }
  else
    {
      t = v_30;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm i_85 (ATerm))
{
  ATerm x_30 = t;
  int z_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_31;
      a_31 = t;
      {
        ATerm q_36 = NULL;
        ATerm r_36 = NULL;
        t = term_i_14;
        {
          t = get_config_0(t);
          {
            r_36 = t;
            if(((q_36 != NULL) && (q_36 != r_36)))
              _fail(r_36);
            else
              q_36 = r_36;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_36), term_b_31);
          t = geq_0(t);
        }
      }
      t = a_31;
      t = i_85(t);
      LocalPopChoice(z_30);
    }
  else
    {
      t = x_30;
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
  ATerm v_36 = NULL,w_36 = NULL,x_36 = NULL;
  v_36 = t;
  u_36 :
  if(match_cons(v_36, sym__2))
    {
      w_36 = ATgetArgument(v_36, 0);
      x_36 = ATgetArgument(v_36, 1);
      if(((w_36 != NULL) && (w_36 != x_36)))
        _fail(x_36);
      else
        w_36 = x_36;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm j_77 (ATerm), ATerm k_77 (ATerm))
{
  ATerm f_37 = NULL,i_37 = NULL,j_37 = NULL;
  f_37 = t;
  e_37 :
  if(((ATgetType(f_37) == AT_LIST) && !(ATisEmpty(f_37))))
    {
      i_37 = ATgetFirst((ATermList) f_37);
      j_37 = (ATerm) ATgetNext((ATermList) f_37);
      {
        t = k_77(t);
        {
          ATerm x_5 (ATerm t)
          {
            ATerm o_37 = NULL;
            o_37 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(i_37), not_null(o_37));
              t = j_77(t);
            }
            return(t);
          }
          t = fetch_1(t, x_5);
        }
        t = not_null(j_37);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm f_77 (ATerm))
{
  ATerm u_37 = NULL,v_37 = NULL,w_37 = NULL;
  u_37 = t;
  t_37 :
  if(match_cons(u_37, sym__2))
    {
      v_37 = ATgetArgument(u_37, 0);
      w_37 = ATgetArgument(u_37, 1);
      {
        t = not_null(v_37);
        {
          ATerm a_38 (ATerm t)
          {
            ATerm c_31 = t;
            int d_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(w_37);
                LocalPopChoice(d_31);
              }
            else
              {
                t = c_31;
                {
                  ATerm h_31 = t;
                  int i_31 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm y_5 (ATerm t)
                      {
                        t = not_null(w_37);
                        return(t);
                      }
                      t = HdMember_p__2(t, f_77, y_5);
                      t = a_38(t);
                      LocalPopChoice(i_31);
                    }
                  else
                    {
                      t = h_31;
                      t = Cons_2(t, _id, a_38);
                    }
                }
              }
            return(t);
          }
          t = a_38(t);
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
  ATerm f_38 = NULL,i_38 = NULL,j_38 = NULL,k_38 = NULL;
  f_38 = t;
  e_38 :
  if(match_cons(f_38, sym__3))
    {
      i_38 = ATgetArgument(f_38, 0);
      j_38 = ATgetArgument(f_38, 1);
      k_38 = ATgetArgument(f_38, 2);
      {
        ATerm j_31;
        j_31 = t;
        {
          ATerm z_38 = NULL;
          ATerm a_39 = NULL,c_39 = NULL;
          ATerm b_39 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_38), not_null(j_38));
          {
            ATerm n_31 = t;
            int p_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(p_31);
              }
            else
              {
                t = n_31;
                t = (ATerm) ATempty;
              }
            {
              b_39 = t;
              if(((a_39 != NULL) && (a_39 != b_39)))
                _fail(b_39);
              else
                a_39 = b_39;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(a_39), not_null(k_38));
            {
              t = union_1(t, eq_0);
              {
                c_39 = t;
                if(((z_38 != NULL) && (z_38 != c_39)))
                  _fail(c_39);
                else
                  z_38 = c_39;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(i_38), not_null(j_38), not_null(z_38));
            t = table_put_0(t);
          }
        }
        t = j_31;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm q_88 (ATerm))
{
  ATerm k_39 = NULL,m_39 = NULL,p_39 = NULL;
  k_39 = t;
  j_39 :
  if(match_cons(k_39, sym__2))
    {
      m_39 = ATgetArgument(k_39, 0);
      p_39 = ATgetArgument(k_39, 1);
      {
        t = not_null(p_39);
        {
          ATerm z_5 (ATerm t)
          {
            ATerm u_39 = NULL,v_39 = NULL,w_39 = NULL;
            u_39 = t;
            i_39 :
            if(match_cons(u_39, sym__2))
              {
                v_39 = ATgetArgument(u_39, 0);
                w_39 = ATgetArgument(u_39, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(m_39), not_null(v_39), not_null(w_39));
                  t = q_88(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, z_5);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm p_40 = NULL;
  ATerm r_40 = NULL;
  p_40 = t;
  {
    ATerm s_31;
    s_31 = t;
    {
      ATerm s_40 = NULL;
      t = term_t_31;
      {
        s_40 = t;
        if(((r_40 != NULL) && (r_40 != s_40)))
          _fail(s_40);
        else
          r_40 = s_40;
      }
    }
    t = s_31;
    {
      t = SSL_open_file(not_null(p_40), not_null(r_40));
      t = SSL_close_file(not_null(p_40));
    }
  }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm x_40 = NULL;
  ATerm z_40 = NULL;
  x_40 = t;
  {
    ATerm u_31 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_30, (ATerm) ATmakeAppl(sym_Imported_1, not_null(x_40)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_31;
      }
    {
      ATerm v_31;
      v_31 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_d_30, term_w_31, (ATerm) ATinsert(ATempty, not_null(x_40)));
        t = table_put_0(t);
      }
      t = v_31;
      {
        ATerm a_6 (ATerm t)
        {
          ATerm b_6 (ATerm t)
          {
            t = term_x_31;
            return(t);
          }
          t = debug_1(t, b_6);
          return(t);
        }
        t = if_verbose4_1(t, a_6);
        {
          ATerm z_31 = t;
          int a_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(a_32);
            }
          else
            {
              t = z_31;
              t = (ATerm) ATempty;
            }
          {
            ATerm c_6 (ATerm t)
            {
              ATerm d_6 (ATerm t)
              {
                t = term_b_32;
                return(t);
              }
              t = say_1(t, d_6);
              return(t);
            }
            t = if_verbose6_1(t, c_6);
            {
              ATerm a_41 = NULL;
              a_41 = t;
              if(((z_40 != NULL) && (z_40 != a_41)))
                _fail(a_41);
              else
                z_40 = a_41;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_d_30, not_null(z_40));
                {
                  t = table_putlist_1(t, table_append_0);
                  {
                    ATerm e_6 (ATerm t)
                    {
                      ATerm i_6 (ATerm t)
                      {
                        t = term_c_32;
                        return(t);
                      }
                      t = say_1(t, i_6);
                      return(t);
                    }
                    t = if_verbose6_1(t, e_6);
                    {
                      t = (ATerm) ATmakeAppl(sym__3, term_d_30, (ATerm)ATmakeAppl(sym_Imported_1, not_null(x_40)), (ATerm) ATempty);
                      {
                        t = table_put_0(t);
                        {
                          ATerm r_6 (ATerm t)
                          {
                            ATerm s_6 (ATerm t)
                            {
                              t = term_b_32;
                              return(t);
                            }
                            t = say_1(t, s_6);
                            return(t);
                          }
                          t = if_verbose4_1(t, r_6);
                        }
                      }
                    }
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
  ATerm e_41 = NULL;
  e_41 = t;
  t = SSL_getenv(not_null(e_41));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm d_32 = t;
  int e_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_32;
      t = get_config_0(t);
      LocalPopChoice(e_32);
    }
  else
    {
      t = d_32;
      {
        ATerm k_32 = t;
        int l_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_m_32;
            t = getenv_0(t);
            LocalPopChoice(l_32);
          }
        else
          {
            t = k_32;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm t_6 (ATerm t)
  {
    ATerm u_6 (ATerm t)
    {
      t = term_n_32;
      return(t);
    }
    t = debug_1(t, u_6);
    return(t);
  }
  t = if_verbose5_1(t, t_6);
  {
    ATerm s_32;
    s_32 = t;
    {
      ATerm t_32 = t;
      int u_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_v_32;
          t = table_get_0(t);
          LocalPopChoice(u_32);
        }
      else
        {
          t = t_32;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = s_32;
    {
      ATerm v_6 (ATerm t)
      {
        ATerm w_6 (ATerm t)
        {
          t = term_w_32;
          return(t);
        }
        t = debug_1(t, w_6);
        return(t);
      }
      t = if_verbose5_1(t, v_6);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm x_32 = t;
  int y_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_6 (ATerm t)
      {
        ATerm y_6 (ATerm t)
        {
          t = term_a_33;
          return(t);
        }
        t = debug_1(t, y_6);
        return(t);
      }
      t = if_verbose5_1(t, x_6);
      {
        t = xtc_load_0(t);
        {
          ATerm d_33 = t;
          int e_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(e_33);
            }
          else
            {
              t = d_33;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm z_6 (ATerm t)
            {
              ATerm a_7 (ATerm t)
              {
                t = term_a_33;
                return(t);
              }
              t = debug_1(t, a_7);
              return(t);
            }
            t = if_verbose5_1(t, z_6);
          }
        }
      }
      LocalPopChoice(y_32);
    }
  else
    {
      t = x_32;
      {
        ATerm i_41 = NULL;
        ATerm j_41 = NULL;
        j_41 = t;
        if(((i_41 != NULL) && (i_41 != j_41)))
          _fail(j_41);
        else
          i_41 = j_41;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_33), not_null(i_41)), term_f_33);
          {
            t = error_0(t);
            {
              ATerm e_7 (ATerm t)
              {
                t = term_d_30;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm n_7 (ATerm t)
                    {
                      t = term_j_33;
                      return(t);
                    }
                    t = debug_1(t, n_7);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, e_7);
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
  ATerm m_41 = NULL;
  m_41 = t;
  t = SSL_string_to_int(not_null(m_41));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL;
  d_42 = t;
  b_42 :
  if(match_string(d_42, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(d_42) == AT_LIST) && !(ATisEmpty(d_42))))
        {
          e_42 = ATgetFirst((ATermList) d_42);
          f_42 = (ATerm) ATgetNext((ATermList) d_42);
          c_42 :
          if(((ATgetType(f_42) == AT_LIST) && !(ATisEmpty(f_42))))
            {
              g_42 = ATgetFirst((ATermList) f_42);
              h_42 = (ATerm) ATgetNext((ATermList) f_42);
              {
                ATerm l_42 = NULL;
                ATerm o_33;
                o_33 = t;
                {
                  t = not_null(e_42);
                  t = l_0(t);
                }
                t = o_33;
                {
                  ATerm m_42 = NULL;
                  t = not_null(g_42);
                  {
                    t = m_0(t);
                    {
                      m_42 = t;
                      if(((l_42 != NULL) && (l_42 != m_42)))
                        _fail(m_42);
                      else
                        l_42 = m_42;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(h_42)), not_null(l_42));
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
  ATerm l_43 = NULL,m_43 = NULL,n_43 = NULL;
  l_43 = t;
  k_43 :
  if(match_cons(l_43, sym__2))
    {
      m_43 = ATgetArgument(l_43, 0);
      n_43 = ATgetArgument(l_43, 1);
      {
        ATerm s_43 = NULL;
        ATerm y_43 = NULL,a_44 = NULL;
        ATerm z_43 = NULL;
        t = not_null(m_43);
        {
          ATerm p_33 = t;
          int q_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(q_33);
            }
          else
            {
              t = p_33;
              t = (ATerm) ATempty;
            }
          {
            z_43 = t;
            if(((y_43 != NULL) && (y_43 != z_43)))
              _fail(z_43);
            else
              y_43 = z_43;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_43), not_null(y_43));
          {
            ATerm r_33 = t;
            int t_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(t_33);
              }
            else
              {
                t = r_33;
                t = conc_more_lists_0(t);
              }
            {
              a_44 = t;
              if(((s_43 != NULL) && (s_43 != a_44)))
                _fail(a_44);
              else
                s_43 = a_44;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_r_28, not_null(m_43), not_null(s_43));
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
  ATerm k_44 = NULL,l_44 = NULL;
  ATerm u_33;
  u_33 = t;
  {
    ATerm m_44 = NULL,n_44 = NULL,o_44 = NULL;
    m_44 = t;
    f_44 :
    if(match_cons(m_44, sym__2))
      {
        n_44 = ATgetArgument(m_44, 0);
        o_44 = ATgetArgument(m_44, 1);
        {
          if(((k_44 != NULL) && (k_44 != n_44)))
            _fail(n_44);
          else
            k_44 = n_44;
          {
            if(((l_44 != NULL) && (l_44 != o_44)))
              _fail(o_44);
            else
              l_44 = o_44;
            t = SSL_table_remove(not_null(k_44), not_null(l_44));
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = u_33;
  return(t);
}
ATerm toggle_config_0 (ATerm t)
{
  ATerm s_44 = NULL,t_44 = NULL,u_44 = NULL;
  s_44 = t;
  r_44 :
  if(match_cons(s_44, sym__2))
    {
      t_44 = ATgetArgument(s_44, 0);
      u_44 = ATgetArgument(s_44, 1);
      {
        ATerm v_33 = t;
        int w_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = not_null(t_44);
            {
              t = get_config_0(t);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_r_28, not_null(t_44));
                t = table_remove_0(t);
              }
            }
            LocalPopChoice(w_33);
          }
        else
          {
            t = v_33;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(t_44), not_null(u_44));
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
ATerm concat_0 (ATerm t)
{
  ATerm x_33 = t;
  int z_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(z_33);
    }
  else
    {
      t = x_33;
      {
        ATerm a_45 = NULL,c_45 = NULL,d_45 = NULL;
        a_45 = t;
        z_44 :
        if(((ATgetType(a_45) == AT_LIST) && !(ATisEmpty(a_45))))
          {
            c_45 = ATgetFirst((ATermList) a_45);
            d_45 = (ATerm) ATgetNext((ATermList) a_45);
            {
              t = not_null(c_45);
              {
                ATerm o_7 (ATerm t)
                {
                  t = not_null(d_45);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, o_7);
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
  ATerm n_45 = NULL;
  ATerm p_45 = NULL;
  n_45 = t;
  {
    ATerm s_45 = NULL;
    ATerm u_45 = NULL,v_45 = NULL,w_45 = NULL;
    t = not_null(n_45);
    {
      s_45 = t;
      {
        t = SSL_explode_term(not_null(s_45));
        {
          u_45 = t;
          l_45 :
          if(match_cons(u_45, sym__2))
            {
              v_45 = ATgetArgument(u_45, 0);
              w_45 = ATgetArgument(u_45, 1);
              m_45 :
              if(match_string(v_45, ""))
                {
                  if(((p_45 != NULL) && (p_45 != w_45)))
                    _fail(w_45);
                  else
                    p_45 = w_45;
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
      t = not_null(p_45);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm z_71 (ATerm))
{
  ATerm f_46 (ATerm t)
  {
    ATerm b_34 = t;
    int e_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, f_46);
        LocalPopChoice(e_34);
      }
    else
      {
        t = b_34;
        {
          t = Nil_0(t);
          t = z_71(t);
        }
      }
    return(t);
  }
  t = f_46(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm i_46 = NULL,j_46 = NULL,k_46 = NULL;
  i_46 = t;
  h_46 :
  if(match_cons(i_46, sym__2))
    {
      j_46 = ATgetArgument(i_46, 0);
      k_46 = ATgetArgument(i_46, 1);
      {
        t = not_null(j_46);
        {
          ATerm p_7 (ATerm t)
          {
            t = not_null(k_46);
            return(t);
          }
          t = at_end_1(t, p_7);
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
  ATerm f_34 = t;
  int g_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(g_34);
    }
  else
    {
      t = f_34;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm post_extend_config_0 (ATerm t)
{
  ATerm f_47 = NULL,g_47 = NULL,h_47 = NULL;
  f_47 = t;
  r_46 :
  if(match_cons(f_47, sym__2))
    {
      g_47 = ATgetArgument(f_47, 0);
      h_47 = ATgetArgument(f_47, 1);
      {
        ATerm t_47 = NULL;
        ATerm u_47 = NULL,w_47 = NULL;
        ATerm v_47 = NULL;
        t = not_null(g_47);
        {
          ATerm h_34 = t;
          int k_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(k_34);
            }
          else
            {
              t = h_34;
              t = (ATerm) ATempty;
            }
          {
            v_47 = t;
            if(((u_47 != NULL) && (u_47 != v_47)))
              _fail(v_47);
            else
              u_47 = v_47;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_47), not_null(h_47));
          {
            ATerm l_34 = t;
            int o_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(o_34);
              }
            else
              {
                t = l_34;
                t = conc_more_lists_0(t);
              }
            {
              w_47 = t;
              if(((t_47 != NULL) && (t_47 != w_47)))
                _fail(w_47);
              else
                t_47 = w_47;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_r_28, not_null(g_47), not_null(t_47));
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
  ATerm p_34 = t;
  int q_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_7 (ATerm t)
      {
        ATerm d_49 = NULL;
        d_49 = t;
        a_48 :
        if(!(match_string(d_49, "-i")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm r_7 (ATerm t)
      {
        ATerm e_49 = NULL;
        ATerm f_49 = NULL;
        f_49 = t;
        if(((e_49 != NULL) && (e_49 != f_49)))
          _fail(f_49);
        else
          e_49 = f_49;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_m_22, not_null(e_49));
          t = set_config_0(t);
        }
        t = term_u_18;
        return(t);
      }
      ATerm s_7 (ATerm t)
      {
        t = term_u_34;
        return(t);
      }
      t = ArgOption_3(t, q_7, r_7, s_7);
      LocalPopChoice(q_34);
    }
  else
    {
      t = p_34;
      {
        ATerm c_35 = t;
        int d_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_7 (ATerm t)
            {
              ATerm g_49 = NULL;
              g_49 = t;
              c_48 :
              if(!(match_string(g_49, "-o")))
                {
                  if(!(match_string(g_49, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm w_7 (ATerm t)
            {
              ATerm h_49 = NULL;
              ATerm i_49 = NULL;
              i_49 = t;
              if(((h_49 != NULL) && (h_49 != i_49)))
                _fail(i_49);
              else
                h_49 = i_49;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_s_14, not_null(h_49));
                t = set_config_0(t);
              }
              t = term_u_18;
              return(t);
            }
            ATerm z_7 (ATerm t)
            {
              t = term_e_35;
              return(t);
            }
            t = ArgOption_3(t, v_7, w_7, z_7);
            LocalPopChoice(d_35);
          }
        else
          {
            t = c_35;
            {
              ATerm f_35 = t;
              int i_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_8 (ATerm t)
                  {
                    ATerm j_49 = NULL;
                    j_49 = t;
                    e_48 :
                    if(!(match_string(j_49, "-I")))
                      {
                        if(!(match_string(j_49, "--Include")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm b_8 (ATerm t)
                  {
                    ATerm k_49 = NULL;
                    ATerm l_49 = NULL;
                    l_49 = t;
                    if(((k_49 != NULL) && (k_49 != l_49)))
                      _fail(l_49);
                    else
                      k_49 = l_49;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_e_24, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_49)), term_e_24));
                      t = extend_config_0(t);
                    }
                    t = term_u_18;
                    return(t);
                  }
                  ATerm c_8 (ATerm t)
                  {
                    t = term_j_35;
                    return(t);
                  }
                  t = ArgOption_3(t, a_8, b_8, c_8);
                  LocalPopChoice(i_35);
                }
              else
                {
                  t = f_35;
                  {
                    ATerm k_35 = t;
                    int o_35 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm j_8 (ATerm t)
                        {
                          ATerm m_49 = NULL;
                          m_49 = t;
                          g_48 :
                          if(!(match_string(m_49, "--main")))
                            {
                              if(!(match_string(m_49, "-m")))
                                {
                                  _fail(t);
                                }
                            }
                          return(t);
                        }
                        ATerm k_8 (ATerm t)
                        {
                          ATerm n_49 = NULL;
                          ATerm o_49 = NULL;
                          o_49 = t;
                          if(((n_49 != NULL) && (n_49 != o_49)))
                            _fail(o_49);
                          else
                            n_49 = o_49;
                          {
                            t = (ATerm) ATmakeAppl(sym__2, term_c_19, not_null(n_49));
                            t = set_config_0(t);
                          }
                          t = term_u_18;
                          return(t);
                        }
                        ATerm l_8 (ATerm t)
                        {
                          t = term_p_35;
                          return(t);
                        }
                        t = ArgOption_3(t, j_8, k_8, l_8);
                        LocalPopChoice(o_35);
                      }
                    else
                      {
                        t = k_35;
                        {
                          ATerm u_35 = t;
                          int v_35 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm m_8 (ATerm t)
                              {
                                ATerm p_49 = NULL;
                                p_49 = t;
                                i_48 :
                                if(!(match_string(p_49, "--C-include")))
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              ATerm p_8 (ATerm t)
                              {
                                ATerm q_49 = NULL;
                                ATerm r_49 = NULL;
                                r_49 = t;
                                if(((q_49 != NULL) && (q_49 != r_49)))
                                  _fail(r_49);
                                else
                                  q_49 = r_49;
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, term_l_16, (ATerm) ATinsert(ATempty, not_null(q_49)));
                                  t = post_extend_config_0(t);
                                }
                                t = term_u_18;
                                return(t);
                              }
                              ATerm q_8 (ATerm t)
                              {
                                t = term_w_35;
                                return(t);
                              }
                              t = ArgOption_3(t, m_8, p_8, q_8);
                              LocalPopChoice(v_35);
                            }
                          else
                            {
                              t = u_35;
                              {
                                ATerm z_35 = t;
                                int a_36 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm t_8 (ATerm t)
                                    {
                                      ATerm s_49 = NULL;
                                      s_49 = t;
                                      k_48 :
                                      if(!(match_string(s_49, "-CI")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm u_8 (ATerm t)
                                    {
                                      ATerm t_49 = NULL;
                                      ATerm u_49 = NULL;
                                      u_49 = t;
                                      if(((t_49 != NULL) && (t_49 != u_49)))
                                        _fail(u_49);
                                      else
                                        t_49 = u_49;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, term_b_15, (ATerm) ATinsert(ATempty, not_null(t_49)));
                                        t = extend_config_0(t);
                                      }
                                      t = term_u_18;
                                      return(t);
                                    }
                                    ATerm x_8 (ATerm t)
                                    {
                                      t = term_f_36;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, t_8, u_8, x_8);
                                    LocalPopChoice(a_36);
                                  }
                                else
                                  {
                                    t = z_35;
                                    {
                                      ATerm g_36 = t;
                                      int h_36 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm y_8 (ATerm t)
                                          {
                                            ATerm v_49 = NULL;
                                            v_49 = t;
                                            m_48 :
                                            if(!(match_string(v_49, "-CL")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm b_9 (ATerm t)
                                          {
                                            ATerm w_49 = NULL;
                                            ATerm x_49 = NULL;
                                            x_49 = t;
                                            if(((w_49 != NULL) && (w_49 != x_49)))
                                              _fail(x_49);
                                            else
                                              w_49 = x_49;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, term_m_14, (ATerm) ATinsert(ATempty, not_null(w_49)));
                                              t = extend_config_0(t);
                                            }
                                            t = term_u_18;
                                            return(t);
                                          }
                                          ATerm c_9 (ATerm t)
                                          {
                                            t = term_i_36;
                                            return(t);
                                          }
                                          t = ArgOption_3(t, y_8, b_9, c_9);
                                          LocalPopChoice(h_36);
                                        }
                                      else
                                        {
                                          t = g_36;
                                          {
                                            ATerm o_36 = t;
                                            int p_36 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm f_9 (ATerm t)
                                                {
                                                  ATerm y_49 = NULL;
                                                  y_49 = t;
                                                  o_48 :
                                                  if(!(match_string(y_49, "-c")))
                                                    {
                                                      _fail(t);
                                                    }
                                                  return(t);
                                                }
                                                ATerm g_9 (ATerm t)
                                                {
                                                  t = term_s_36;
                                                  t = set_config_0(t);
                                                  t = term_u_18;
                                                  return(t);
                                                }
                                                ATerm j_9 (ATerm t)
                                                {
                                                  t = term_t_36;
                                                  return(t);
                                                }
                                                t = Option_3(t, f_9, g_9, j_9);
                                                LocalPopChoice(p_36);
                                              }
                                            else
                                              {
                                                t = o_36;
                                                {
                                                  ATerm y_36 = t;
                                                  int z_36 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm k_9 (ATerm t)
                                                      {
                                                        ATerm z_49 = NULL;
                                                        z_49 = t;
                                                        p_48 :
                                                        if(!(match_string(z_49, "--ast")))
                                                          {
                                                            _fail(t);
                                                          }
                                                        return(t);
                                                      }
                                                      ATerm n_9 (ATerm t)
                                                      {
                                                        t = term_a_37;
                                                        t = set_config_0(t);
                                                        t = term_u_18;
                                                        return(t);
                                                      }
                                                      ATerm o_9 (ATerm t)
                                                      {
                                                        t = term_b_37;
                                                        return(t);
                                                      }
                                                      t = Option_3(t, k_9, n_9, o_9);
                                                      LocalPopChoice(z_36);
                                                    }
                                                  else
                                                    {
                                                      t = y_36;
                                                      {
                                                        ATerm c_37 = t;
                                                        int d_37 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm r_9 (ATerm t)
                                                            {
                                                              ATerm a_50 = NULL;
                                                              a_50 = t;
                                                              q_48 :
                                                              if(!(match_string(a_50, "-F")))
                                                                {
                                                                  _fail(t);
                                                                }
                                                              return(t);
                                                            }
                                                            ATerm s_9 (ATerm t)
                                                            {
                                                              t = term_g_37;
                                                              t = set_config_0(t);
                                                              t = term_u_18;
                                                              return(t);
                                                            }
                                                            ATerm v_9 (ATerm t)
                                                            {
                                                              t = term_h_37;
                                                              return(t);
                                                            }
                                                            t = Option_3(t, r_9, s_9, v_9);
                                                            LocalPopChoice(d_37);
                                                          }
                                                        else
                                                          {
                                                            t = c_37;
                                                            {
                                                              ATerm k_37 = t;
                                                              int l_37 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm w_9 (ATerm t)
                                                                  {
                                                                    ATerm b_50 = NULL;
                                                                    b_50 = t;
                                                                    r_48 :
                                                                    if(!(match_string(b_50, "--keep")))
                                                                      {
                                                                        _fail(t);
                                                                      }
                                                                    return(t);
                                                                  }
                                                                  ATerm z_9 (ATerm t)
                                                                  {
                                                                    ATerm c_50 = NULL;
                                                                    ATerm d_50 = NULL;
                                                                    t = string_to_int_0(t);
                                                                    {
                                                                      d_50 = t;
                                                                      if(((c_50 != NULL) && (c_50 != d_50)))
                                                                        _fail(d_50);
                                                                      else
                                                                        c_50 = d_50;
                                                                    }
                                                                    {
                                                                      t = (ATerm) ATmakeAppl(sym__2, term_n_20, not_null(c_50));
                                                                      t = set_config_0(t);
                                                                    }
                                                                    t = term_u_18;
                                                                    return(t);
                                                                  }
                                                                  ATerm a_10 (ATerm t)
                                                                  {
                                                                    t = term_m_37;
                                                                    return(t);
                                                                  }
                                                                  t = ArgOption_3(t, w_9, z_9, a_10);
                                                                  LocalPopChoice(l_37);
                                                                }
                                                              else
                                                                {
                                                                  t = k_37;
                                                                  {
                                                                    ATerm n_37 = t;
                                                                    int p_37 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm d_10 (ATerm t)
                                                                        {
                                                                          ATerm e_50 = NULL;
                                                                          e_50 = t;
                                                                          t_48 :
                                                                          if(!(match_string(e_50, "--fusion")))
                                                                            {
                                                                              _fail(t);
                                                                            }
                                                                          return(t);
                                                                        }
                                                                        ATerm e_10 (ATerm t)
                                                                        {
                                                                          t = term_q_37;
                                                                          t = toggle_config_0(t);
                                                                          t = term_u_18;
                                                                          return(t);
                                                                        }
                                                                        ATerm h_10 (ATerm t)
                                                                        {
                                                                          t = term_r_37;
                                                                          return(t);
                                                                        }
                                                                        t = Option_3(t, d_10, e_10, h_10);
                                                                        LocalPopChoice(p_37);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = n_37;
                                                                        {
                                                                          ATerm s_37 = t;
                                                                          int x_37 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              ATerm i_10 (ATerm t)
                                                                              {
                                                                                ATerm f_50 = NULL;
                                                                                f_50 = t;
                                                                                u_48 :
                                                                                if(!(match_string(f_50, "--trace-all")))
                                                                                  {
                                                                                    _fail(t);
                                                                                  }
                                                                                return(t);
                                                                              }
                                                                              ATerm l_10 (ATerm t)
                                                                              {
                                                                                t = term_z_37;
                                                                                t = set_config_0(t);
                                                                                t = term_u_18;
                                                                                return(t);
                                                                              }
                                                                              ATerm m_10 (ATerm t)
                                                                              {
                                                                                t = term_b_38;
                                                                                return(t);
                                                                              }
                                                                              t = Option_3(t, i_10, l_10, m_10);
                                                                              LocalPopChoice(x_37);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = s_37;
                                                                              {
                                                                                ATerm c_38 = t;
                                                                                int d_38 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm p_10 (ATerm t)
                                                                                    {
                                                                                      ATerm g_50 = NULL;
                                                                                      g_50 = t;
                                                                                      v_48 :
                                                                                      if(!(match_string(g_50, "-t")))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm q_10 (ATerm t)
                                                                                    {
                                                                                      ATerm h_50 = NULL;
                                                                                      ATerm i_50 = NULL;
                                                                                      i_50 = t;
                                                                                      if(((h_50 != NULL) && (h_50 != i_50)))
                                                                                        _fail(i_50);
                                                                                      else
                                                                                        h_50 = i_50;
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym__2, term_g_38, (ATerm) ATinsert(ATempty, not_null(h_50)));
                                                                                        t = extend_config_0(t);
                                                                                      }
                                                                                      t = term_u_18;
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm t_10 (ATerm t)
                                                                                    {
                                                                                      t = term_h_38;
                                                                                      return(t);
                                                                                    }
                                                                                    t = ArgOption_3(t, p_10, q_10, t_10);
                                                                                    LocalPopChoice(d_38);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = c_38;
                                                                                    {
                                                                                      ATerm l_38 = t;
                                                                                      int m_38 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm u_10 (ATerm t)
                                                                                          {
                                                                                            ATerm j_50 = NULL;
                                                                                            j_50 = t;
                                                                                            x_48 :
                                                                                            if(!(match_string(j_50, "--verbose")))
                                                                                              {
                                                                                                _fail(t);
                                                                                              }
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm v_10 (ATerm t)
                                                                                          {
                                                                                            ATerm k_50 = NULL;
                                                                                            ATerm l_50 = NULL;
                                                                                            t = string_to_int_0(t);
                                                                                            {
                                                                                              l_50 = t;
                                                                                              if(((k_50 != NULL) && (k_50 != l_50)))
                                                                                                _fail(l_50);
                                                                                              else
                                                                                                k_50 = l_50;
                                                                                            }
                                                                                            {
                                                                                              t = (ATerm) ATmakeAppl(sym__2, term_i_14, not_null(k_50));
                                                                                              t = set_config_0(t);
                                                                                            }
                                                                                            t = term_u_18;
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm z_10 (ATerm t)
                                                                                          {
                                                                                            t = term_n_38;
                                                                                            return(t);
                                                                                          }
                                                                                          t = ArgOption_3(t, u_10, v_10, z_10);
                                                                                          LocalPopChoice(m_38);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = l_38;
                                                                                          {
                                                                                            ATerm o_38 = t;
                                                                                            int p_38 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm c_11 (ATerm t)
                                                                                                {
                                                                                                  ATerm z_50 = NULL;
                                                                                                  z_50 = t;
                                                                                                  z_48 :
                                                                                                  if(!(match_string(z_50, "-S")))
                                                                                                    {
                                                                                                      if(!(match_string(z_50, "--silent")))
                                                                                                        {
                                                                                                          _fail(t);
                                                                                                        }
                                                                                                    }
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm d_11 (ATerm t)
                                                                                                {
                                                                                                  t = term_q_38;
                                                                                                  t = set_config_0(t);
                                                                                                  t = term_u_18;
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm e_11 (ATerm t)
                                                                                                {
                                                                                                  t = term_r_38;
                                                                                                  return(t);
                                                                                                }
                                                                                                t = Option_3(t, c_11, d_11, e_11);
                                                                                                LocalPopChoice(p_38);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = o_38;
                                                                                                {
                                                                                                  ATerm s_38 = t;
                                                                                                  int t_38 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      ATerm h_11 (ATerm t)
                                                                                                      {
                                                                                                        ATerm a_51 = NULL;
                                                                                                        a_51 = t;
                                                                                                        a_49 :
                                                                                                        if(!(match_string(a_51, "-h")))
                                                                                                          {
                                                                                                            if(!(match_string(a_51, "--help")))
                                                                                                              {
                                                                                                                _fail(t);
                                                                                                              }
                                                                                                          }
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm i_11 (ATerm t)
                                                                                                      {
                                                                                                        t = term_v_38;
                                                                                                        t = set_config_0(t);
                                                                                                        t = term_u_18;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm j_11 (ATerm t)
                                                                                                      {
                                                                                                        t = term_w_38;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      t = Option_3(t, h_11, i_11, j_11);
                                                                                                      LocalPopChoice(t_38);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = s_38;
                                                                                                      {
                                                                                                        ATerm x_38 = t;
                                                                                                        int y_38 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm o_11 (ATerm t)
                                                                                                            {
                                                                                                              ATerm c_51 = NULL;
                                                                                                              c_51 = t;
                                                                                                              b_49 :
                                                                                                              if(!(match_string(c_51, "--man")))
                                                                                                                {
                                                                                                                  _fail(t);
                                                                                                                }
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm p_11 (ATerm t)
                                                                                                            {
                                                                                                              t = term_e_39;
                                                                                                              t = set_config_0(t);
                                                                                                              t = term_u_18;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm q_11 (ATerm t)
                                                                                                            {
                                                                                                              t = term_f_39;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            t = Option_3(t, o_11, p_11, q_11);
                                                                                                            LocalPopChoice(y_38);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = x_38;
                                                                                                            {
                                                                                                              ATerm r_11 (ATerm t)
                                                                                                              {
                                                                                                                ATerm g_51 = NULL;
                                                                                                                g_51 = t;
                                                                                                                c_49 :
                                                                                                                if(!(match_string(g_51, "-v")))
                                                                                                                  {
                                                                                                                    if(!(match_string(g_51, "--version")))
                                                                                                                      {
                                                                                                                        _fail(t);
                                                                                                                      }
                                                                                                                  }
                                                                                                                return(t);
                                                                                                              }
                                                                                                              ATerm s_11 (ATerm t)
                                                                                                              {
                                                                                                                t = term_h_39;
                                                                                                                t = set_config_0(t);
                                                                                                                t = term_u_18;
                                                                                                                return(t);
                                                                                                              }
                                                                                                              ATerm v_11 (ATerm t)
                                                                                                              {
                                                                                                                t = term_l_39;
                                                                                                                return(t);
                                                                                                              }
                                                                                                              t = Option_3(t, r_11, s_11, v_11);
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm d_52 = NULL;
  d_52 = t;
  t = SSL_table_destroy(not_null(d_52));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm h_52 = NULL,i_52 = NULL,j_52 = NULL;
  h_52 = t;
  g_52 :
  if(((ATgetType(h_52) == AT_LIST) && ATisEmpty(h_52)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(h_52) == AT_LIST) && !(ATisEmpty(h_52))))
        {
          i_52 = ATgetFirst((ATermList) h_52);
          j_52 = (ATerm) ATgetNext((ATermList) h_52);
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
  ATerm n_39;
  n_39 = t;
  {
    ATerm m_52 = NULL;
    ATerm p_52 = NULL;
    ATerm o_39 = t;
    int q_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(q_39);
      }
    else
      {
        t = o_39;
        {
          ATerm n_52 = NULL;
          ATerm o_52 = NULL;
          o_52 = t;
          if(((n_52 != NULL) && (n_52 != o_52)))
            _fail(o_52);
          else
            n_52 = o_52;
          t = (ATerm) ATinsert(ATempty, not_null(n_52));
        }
      }
    {
      p_52 = t;
      if(((m_52 != NULL) && (m_52 != p_52)))
        _fail(p_52);
      else
        m_52 = p_52;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_24, not_null(m_52));
      t = printnl_0(t);
    }
  }
  t = n_39;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_0 (ATerm))
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_40), term_j_29), term_f_40), term_e_40), term_d_40), term_j_29), term_c_40), term_b_40), term_a_40), term_z_39), term_y_39), term_x_39), term_t_39), term_s_39), term_r_39);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm y_52 = NULL,z_52 = NULL,a_53 = NULL;
  a_53 = t;
  x_52 :
  if(((ATgetType(a_53) == AT_LIST) && !(ATisEmpty(a_53))))
    {
      y_52 = ATgetFirst((ATermList) a_53);
      z_52 = (ATerm) ATgetNext((ATermList) a_53);
      {
        ATerm d_53 = NULL;
        t = not_null(z_52);
        {
          ATerm h_40;
          h_40 = t;
          {
            ATerm e_53 = NULL,g_53 = NULL,k_53 = NULL;
            ATerm i_40;
            i_40 = t;
            {
              ATerm f_53 = NULL;
              t = j_0(t);
              {
                f_53 = t;
                if(((e_53 != NULL) && (e_53 != f_53)))
                  _fail(f_53);
                else
                  e_53 = f_53;
              }
            }
            t = i_40;
            {
              ATerm j_53 = NULL;
              t = not_null(y_52);
              {
                t = i_0(t);
                {
                  j_53 = t;
                  if(((g_53 != NULL) && (g_53 != j_53)))
                    _fail(j_53);
                  else
                    g_53 = j_53;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(e_53)), not_null(g_53));
                {
                  k_53 = t;
                  if(((d_53 != NULL) && (d_53 != k_53)))
                    _fail(k_53);
                  else
                    d_53 = k_53;
                }
              }
            }
          }
          t = h_40;
          {
            ATerm a_12 (ATerm t)
            {
              t = not_null(d_53);
              return(t);
            }
            t = reverse_acc_2(t, i_0, a_12);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(a_53) == AT_LIST) && ATisEmpty(a_53)))
        {
          {
            t = term_u_18;
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
  ATerm b_12 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, b_12);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm g_0 (ATerm))
{
  ATerm r_53 = NULL;
  ATerm s_53 = NULL;
  t = term_u_18;
  {
    t = g_0(t);
    {
      s_53 = t;
      if(((r_53 != NULL) && (r_53 != s_53)))
        _fail(s_53);
      else
        r_53 = s_53;
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_40), not_null(r_53)), term_n_40), term_j_29), term_m_40), term_j_29), term_l_40), term_k_40), term_j_29), term_j_40);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm b_58 (ATerm))
{
  ATerm z_53 = NULL,a_54 = NULL;
  z_53 = t;
  y_53 :
  if(match_cons(z_53, sym_Program_1))
    {
      a_54 = ATgetArgument(z_53, 0);
      {
        ATerm d_54 = NULL,f_54 = NULL;
        ATerm e_54 = NULL;
        t = SSLgetAnnotations(not_null(z_53));
        {
          e_54 = t;
          if(((d_54 != NULL) && (d_54 != e_54)))
            _fail(e_54);
          else
            d_54 = e_54;
        }
        {
          t = not_null(a_54);
          {
            ATerm h_54 = NULL;
            t = b_58(t);
            {
              f_54 = t;
              {
                ATerm i_54 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(f_54)), not_null(d_54));
                {
                  i_54 = t;
                  if(((h_54 != NULL) && (h_54 != i_54)))
                    _fail(i_54);
                  else
                    h_54 = i_54;
                }
                t = not_null(h_54);
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
  ATerm r_54 = NULL;
  ATerm q_40 = t;
  int t_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_54 = NULL;
      t = term_u_40;
      {
        t = get_config_0(t);
        {
          s_54 = t;
          if(((r_54 != NULL) && (r_54 != s_54)))
            _fail(s_54);
          else
            r_54 = s_54;
        }
      }
      LocalPopChoice(t_40);
    }
  else
    {
      t = q_40;
      {
        ATerm c_12 (ATerm t)
        {
          ATerm d_12 (ATerm t)
          {
            ATerm t_54 = NULL;
            t_54 = t;
            if(((r_54 != NULL) && (r_54 != t_54)))
              _fail(t_54);
            else
              r_54 = t_54;
            return(t);
          }
          t = Program_1(t, d_12);
          return(t);
        }
        t = fetch_1(t, c_12);
      }
    }
  {
    ATerm v_40 = t;
    int w_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_12 (ATerm t)
        {
          t = not_null(r_54);
          return(t);
        }
        t = short_description_1(t, e_12);
        t = echo_0(t);
        LocalPopChoice(w_40);
      }
    else
      {
        t = v_40;
        {
        }
      }
    {
      t = term_y_40;
      {
        t = echo_0(t);
        {
          t = term_d_41;
          {
            t = table_get_0(t);
            {
              ATerm f_12 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = reverse_acc_2(t, _id, f_12);
              {
                ATerm g_12 (ATerm t)
                {
                  ATerm u_54 = NULL;
                  ATerm v_54 = NULL;
                  v_54 = t;
                  if(((u_54 != NULL) && (u_54 != v_54)))
                    _fail(v_54);
                  else
                    u_54 = v_54;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_54)), term_f_41);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, g_12);
                {
                  ATerm g_41 = t;
                  int h_41 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm w_54 = NULL;
                      ATerm x_54 = NULL;
                      ATerm k_12 (ATerm t)
                      {
                        t = not_null(r_54);
                        return(t);
                      }
                      t = long_description_1(t, k_12);
                      {
                        x_54 = t;
                        if(((w_54 != NULL) && (w_54 != x_54)))
                          _fail(x_54);
                        else
                          w_54 = x_54;
                      }
                      {
                        t = (ATerm) ATinsert(CheckATermList(not_null(w_54)), term_j_29);
                        t = echo_0(t);
                      }
                      LocalPopChoice(h_41);
                    }
                  else
                    {
                      t = g_41;
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
  ATerm k_41;
  k_41 = t;
  {
    ATerm d_55 = NULL;
    ATerm e_55 = NULL;
    e_55 = t;
    if(((d_55 != NULL) && (d_55 != e_55)))
      _fail(e_55);
    else
      d_55 = e_55;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_14, (ATerm) ATinsert(ATempty, not_null(d_55)));
      t = printnl_0(t);
    }
  }
  t = k_41;
  return(t);
}
ATerm say_1 (ATerm t, ATerm i_82 (ATerm))
{
  ATerm l_41;
  l_41 = t;
  {
    t = i_82(t);
    t = debug_0(t);
  }
  t = l_41;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm c_58 (ATerm))
{
  ATerm l_55 = NULL,m_55 = NULL;
  l_55 = t;
  k_55 :
  if(match_cons(l_55, sym_Undefined_1))
    {
      m_55 = ATgetArgument(l_55, 0);
      {
        ATerm p_55 = NULL,r_55 = NULL;
        ATerm q_55 = NULL;
        t = SSLgetAnnotations(not_null(l_55));
        {
          q_55 = t;
          if(((p_55 != NULL) && (p_55 != q_55)))
            _fail(q_55);
          else
            p_55 = q_55;
        }
        {
          t = not_null(m_55);
          {
            ATerm t_55 = NULL;
            t = c_58(t);
            {
              r_55 = t;
              {
                ATerm u_55 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(r_55)), not_null(p_55));
                {
                  u_55 = t;
                  if(((t_55 != NULL) && (t_55 != u_55)))
                    _fail(u_55);
                  else
                    t_55 = u_55;
                }
                t = not_null(t_55);
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
ATerm fetch_1 (ATerm t, ATerm t_71 (ATerm))
{
  ATerm z_55 (ATerm t)
  {
    ATerm n_41 = t;
    int o_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, t_71, _id);
        LocalPopChoice(o_41);
      }
    else
      {
        t = n_41;
        t = Cons_2(t, _id, z_55);
      }
    return(t);
  }
  t = z_55(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm g_86 (ATerm))
{
  t = fetch_1(t, g_86);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm e_56 = NULL;
  e_56 = t;
  d_56 :
  if(match_cons(e_56, sym_Help_0))
    {
      ATerm g_56 = NULL,i_56 = NULL;
      ATerm p_41;
      p_41 = t;
      {
        ATerm h_56 = NULL;
        t = SSLgetAnnotations(not_null(e_56));
        {
          h_56 = t;
          if(((g_56 != NULL) && (g_56 != h_56)))
            _fail(h_56);
          else
            g_56 = h_56;
        }
      }
      t = p_41;
      {
        ATerm j_56 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(g_56));
        {
          j_56 = t;
          if(((i_56 != NULL) && (i_56 != j_56)))
            _fail(j_56);
          else
            i_56 = j_56;
        }
        t = not_null(i_56);
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
  ATerm p_56 = NULL,q_56 = NULL,r_56 = NULL;
  p_56 = t;
  o_56 :
  if(match_cons(p_56, sym__2))
    {
      q_56 = ATgetArgument(p_56, 0);
      r_56 = ATgetArgument(p_56, 1);
      t = SSL_table_get(not_null(q_56), not_null(r_56));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm y_56 = NULL,z_56 = NULL,a_57 = NULL,b_57 = NULL;
  y_56 = t;
  x_56 :
  if(match_cons(y_56, sym__3))
    {
      z_56 = ATgetArgument(y_56, 0);
      a_57 = ATgetArgument(y_56, 1);
      b_57 = ATgetArgument(y_56, 2);
      {
        ATerm q_41;
        q_41 = t;
        {
          ATerm f_57 = NULL;
          ATerm g_57 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_56), not_null(a_57));
          {
            ATerm r_41 = t;
            int s_41 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(s_41);
              }
            else
              {
                t = r_41;
                t = (ATerm) ATempty;
              }
            {
              g_57 = t;
              if(((f_57 != NULL) && (f_57 != g_57)))
                _fail(g_57);
              else
                f_57 = g_57;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(z_56), not_null(a_57), (ATerm) ATinsert(CheckATermList(not_null(f_57)), not_null(b_57)));
            t = table_put_0(t);
          }
        }
        t = q_41;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm l_87 (ATerm))
{
  ATerm k_57 = NULL;
  ATerm l_57 = NULL;
  t = term_u_18;
  {
    t = l_87(t);
    {
      l_57 = t;
      if(((k_57 != NULL) && (k_57 != l_57)))
        _fail(l_57);
      else
        k_57 = l_57;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_b_41, term_c_41, not_null(k_57));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm r_57 = NULL,s_57 = NULL,t_57 = NULL;
  r_57 = t;
  q_57 :
  if(match_string(r_57, "register-usage-info"))
    {
      t = register_usage_1(t, e_0);
    }
  else
    {
      if(((ATgetType(r_57) == AT_LIST) && !(ATisEmpty(r_57))))
        {
          s_57 = ATgetFirst((ATermList) r_57);
          t_57 = (ATerm) ATgetNext((ATermList) r_57);
          {
            ATerm w_57 = NULL;
            ATerm t_41;
            t_41 = t;
            {
              t = not_null(s_57);
              t = a_0(t);
            }
            t = t_41;
            {
              ATerm x_57 = NULL;
              t = term_u_18;
              {
                t = c_0(t);
                {
                  x_57 = t;
                  if(((w_57 != NULL) && (w_57 != x_57)))
                    _fail(x_57);
                  else
                    w_57 = x_57;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(t_57)), not_null(w_57));
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
  ATerm n_12 (ATerm t)
  {
    ATerm e_58 = NULL;
    e_58 = t;
    d_58 :
    if(!(match_string(e_58, "--help")))
      {
        if(!(match_string(e_58, "-h")))
          {
            if(!(match_string(e_58, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm q_12 (ATerm t)
  {
    t = term_v_38;
    {
      t = set_config_0(t);
      t = term_u_41;
    }
    return(t);
  }
  ATerm r_12 (ATerm t)
  {
    t = term_v_41;
    return(t);
  }
  t = Option_3(t, n_12, q_12, r_12);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm h_58 = NULL,i_58 = NULL,j_58 = NULL;
  h_58 = t;
  g_58 :
  if(((ATgetType(h_58) == AT_LIST) && !(ATisEmpty(h_58))))
    {
      i_58 = ATgetFirst((ATermList) h_58);
      j_58 = (ATerm) ATgetNext((ATermList) h_58);
      t = (ATerm) ATinsert(CheckATermList(not_null(j_58)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(i_58)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm q_58 = NULL,r_58 = NULL,s_58 = NULL;
  q_58 = t;
  p_58 :
  if(match_cons(q_58, sym__2))
    {
      r_58 = ATgetArgument(q_58, 0);
      s_58 = ATgetArgument(q_58, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_r_28, not_null(r_58), not_null(s_58));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm j_87 (ATerm))
{
  ATerm w_41;
  w_41 = t;
  {
    ATerm x_41 = t;
    int y_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_41;
        t = j_87(t);
        LocalPopChoice(y_41);
      }
    else
      {
        t = x_41;
        {
        }
      }
  }
  t = w_41;
  {
    ATerm s_12 (ATerm t)
    {
      ATerm a_59 = NULL;
      ATerm a_42;
      a_42 = t;
      {
        ATerm y_58 = NULL;
        ATerm z_58 = NULL;
        z_58 = t;
        if(((y_58 != NULL) && (y_58 != z_58)))
          _fail(z_58);
        else
          y_58 = z_58;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_u_40, not_null(y_58));
          t = set_config_0(t);
        }
      }
      t = a_42;
      {
        ATerm b_59 = NULL;
        b_59 = t;
        if(((a_59 != NULL) && (a_59 != b_59)))
          _fail(b_59);
        else
          a_59 = b_59;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(a_59));
      }
      return(t);
    }
    ATerm t_12 (ATerm t)
    {
      ATerm i_42 = t;
      int j_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_42 = t;
          int n_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(n_42);
            }
          else
            {
              t = k_42;
              {
                t = j_87(t);
                t = Cons_2(t, _id, t_12);
              }
            }
          LocalPopChoice(j_42);
        }
      else
        {
          t = i_42;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, s_12, t_12);
  }
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm i_87 (ATerm))
{
  ATerm g_59 = NULL;
  ATerm o_42;
  o_42 = t;
  {
    t = term_p_42;
    t = table_put_0(t);
  }
  t = o_42;
  {
    ATerm u_12 (ATerm t)
    {
      ATerm q_42 = t;
      int r_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_87(t);
          LocalPopChoice(r_42);
        }
      else
        {
          t = q_42;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, u_12);
    {
      ATerm s_42 = t;
      int t_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_42;
          u_42 = t;
          {
            ATerm v_42 = t;
            int w_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_u_38;
                t = get_config_0(t);
                LocalPopChoice(w_42);
              }
            else
              {
                t = v_42;
                t = fetch_1(t, Help_0);
              }
          }
          t = u_42;
          {
            t = system_usage_0(t);
            {
              t = term_x_13;
              t = exit_0(t);
            }
          }
          LocalPopChoice(t_42);
        }
      else
        {
          t = s_42;
          {
            ATerm x_42 = t;
            int y_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_12 (ATerm t)
                {
                  ATerm y_12 (ATerm t)
                  {
                    ATerm h_59 = NULL;
                    h_59 = t;
                    if(((g_59 != NULL) && (g_59 != h_59)))
                      _fail(h_59);
                    else
                      g_59 = h_59;
                    return(t);
                  }
                  t = Undefined_1(t, y_12);
                  return(t);
                }
                t = fetch_1(t, x_12);
                {
                  ATerm z_12 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_59)), term_z_42);
                    return(t);
                  }
                  t = say_1(t, z_12);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_y_20;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(y_42);
              }
            else
              {
                t = x_42;
                {
                }
              }
          }
        }
      {
        ATerm a_43;
        a_43 = t;
        {
          t = term_b_41;
          t = table_destroy_0(t);
        }
        t = a_43;
      }
    }
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm l_59 = NULL,m_59 = NULL,n_59 = NULL;
  ATerm b_43;
  b_43 = t;
  {
    ATerm o_59 = NULL,p_59 = NULL,q_59 = NULL,r_59 = NULL;
    o_59 = t;
    k_59 :
    if(match_cons(o_59, sym__3))
      {
        p_59 = ATgetArgument(o_59, 0);
        q_59 = ATgetArgument(o_59, 1);
        r_59 = ATgetArgument(o_59, 2);
        {
          if(((l_59 != NULL) && (l_59 != p_59)))
            _fail(p_59);
          else
            l_59 = p_59;
          {
            if(((m_59 != NULL) && (m_59 != q_59)))
              _fail(q_59);
            else
              m_59 = q_59;
            {
              if(((n_59 != NULL) && (n_59 != r_59)))
                _fail(r_59);
              else
                n_59 = r_59;
              t = SSL_table_put(not_null(l_59), not_null(m_59), not_null(n_59));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = b_43;
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm h_53 (ATerm), ATerm i_53 (ATerm))
{
  ATerm z_59 = NULL,a_60 = NULL,b_60 = NULL;
  z_59 = t;
  y_59 :
  if(((ATgetType(z_59) == AT_LIST) && !(ATisEmpty(z_59))))
    {
      a_60 = ATgetFirst((ATermList) z_59);
      b_60 = (ATerm) ATgetNext((ATermList) z_59);
      {
        ATerm f_60 = NULL,h_60 = NULL;
        ATerm g_60 = NULL;
        t = SSLgetAnnotations(not_null(z_59));
        {
          g_60 = t;
          if(((f_60 != NULL) && (f_60 != g_60)))
            _fail(g_60);
          else
            f_60 = g_60;
        }
        {
          t = not_null(a_60);
          {
            ATerm j_60 = NULL;
            t = h_53(t);
            {
              h_60 = t;
              {
                t = not_null(b_60);
                {
                  ATerm l_60 = NULL;
                  t = i_53(t);
                  {
                    j_60 = t;
                    {
                      ATerm m_60 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(j_60)), not_null(h_60)), not_null(f_60));
                      {
                        m_60 = t;
                        if(((l_60 != NULL) && (l_60 != m_60)))
                          _fail(m_60);
                        else
                          l_60 = m_60;
                      }
                      t = not_null(l_60);
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
  ATerm w_60 = NULL;
  w_60 = t;
  v_60 :
  if(((ATgetType(w_60) == AT_LIST) && ATisEmpty(w_60)))
    {
      {
        ATerm y_60 = NULL,a_61 = NULL;
        ATerm c_43;
        c_43 = t;
        {
          ATerm z_60 = NULL;
          t = SSLgetAnnotations(not_null(w_60));
          {
            z_60 = t;
            if(((y_60 != NULL) && (y_60 != z_60)))
              _fail(z_60);
            else
              y_60 = z_60;
          }
        }
        t = c_43;
        {
          ATerm b_61 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(y_60));
          {
            b_61 = t;
            if(((a_61 != NULL) && (a_61 != b_61)))
              _fail(b_61);
            else
              a_61 = b_61;
          }
          t = not_null(a_61);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm map_1 (ATerm t, ATerm k_71 (ATerm))
{
  ATerm f_61 (ATerm t)
  {
    ATerm d_43 = t;
    int e_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(e_43);
      }
    else
      {
        t = d_43;
        t = Cons_2(t, k_71, f_61);
      }
    return(t);
  }
  t = f_61(t);
  return(t);
}
ATerm table_putlist_0 (ATerm t)
{
  ATerm k_61 = NULL,l_61 = NULL,m_61 = NULL;
  k_61 = t;
  j_61 :
  if(match_cons(k_61, sym__2))
    {
      l_61 = ATgetArgument(k_61, 0);
      m_61 = ATgetArgument(k_61, 1);
      {
        t = not_null(m_61);
        {
          ATerm e_13 (ATerm t)
          {
            ATerm p_61 = NULL,q_61 = NULL,r_61 = NULL;
            p_61 = t;
            i_61 :
            if(match_cons(p_61, sym__2))
              {
                q_61 = ATgetArgument(p_61, 0);
                r_61 = ATgetArgument(p_61, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(l_61), not_null(q_61), not_null(r_61));
                  t = table_put_0(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, e_13);
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
  ATerm x_61 = NULL;
  x_61 = t;
  t = SSL_ReadFromFile(not_null(x_61));
  return(t);
}
ATerm import_config_file_1 (ATerm t, ATerm z_84 (ATerm))
{
  ATerm f_43;
  f_43 = t;
  {
    ATerm b_62 = NULL;
    t = z_84(t);
    {
      ATerm f_13 (ATerm t)
      {
        ATerm g_13 (ATerm t)
        {
          t = term_g_43;
          return(t);
        }
        t = debug_1(t, g_13);
        return(t);
      }
      t = if_verbose2_1(t, f_13);
      {
        t = ReadFromFile_0(t);
        {
          ATerm c_62 = NULL;
          c_62 = t;
          if(((b_62 != NULL) && (b_62 != c_62)))
            _fail(c_62);
          else
            b_62 = c_62;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_r_28, not_null(b_62));
            t = table_putlist_0(t);
          }
        }
      }
    }
  }
  t = f_43;
  return(t);
}
ATerm command_line_options_0 (ATerm t)
{
  ATerm i_13 (ATerm t)
  {
    t = term_h_43;
    t = xtc_find_0(t);
    return(t);
  }
  t = import_config_file_1(t, i_13);
  {
    t = parse_options_1(t, sc_options_0);
    {
      ATerm i_43 = t;
      int j_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_62 = NULL;
          t = term_d_39;
          {
            t = get_config_0(t);
            {
              ATerm g_62 = NULL;
              t = term_o_43;
              {
                t = xtc_find_0(t);
                {
                  g_62 = t;
                  if(((f_62 != NULL) && (f_62 != g_62)))
                    _fail(g_62);
                  else
                    f_62 = g_62;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(f_62), term_t_24);
                {
                  t = copy_file_0(t);
                  {
                    t = term_x_13;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
          LocalPopChoice(j_43);
        }
      else
        {
          t = i_43;
          {
          }
        }
      {
        ATerm p_43 = t;
        int q_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_g_39;
            {
              t = get_config_0(t);
              {
                t = sc_version_0(t);
                {
                  t = term_x_13;
                  t = exit_0(t);
                }
              }
            }
            LocalPopChoice(q_43);
          }
        else
          {
            t = p_43;
            {
            }
          }
        {
          ATerm r_43 = t;
          int t_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_43;
              u_43 = t;
              {
                t = term_m_22;
                t = get_config_0(t);
              }
              t = u_43;
              LocalPopChoice(t_43);
            }
          else
            {
              t = r_43;
              {
                t = (ATerm) ATinsert(ATempty, term_v_43);
                t = fatal_error_0(t);
              }
            }
          {
            t = if_verbose2_1(t, sc_version_0);
            {
              ATerm j_13 (ATerm t)
              {
                ATerm w_43;
                w_43 = t;
                {
                  t = term_m_22;
                  {
                    t = get_config_0(t);
                    {
                      ATerm k_13 (ATerm t)
                      {
                        t = term_x_43;
                        return(t);
                      }
                      t = debug_1(t, k_13);
                    }
                  }
                }
                t = w_43;
                return(t);
              }
              t = if_verbose1_1(t, j_13);
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
  ATerm b_44 = t;
  int c_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = command_line_options_0(t);
      {
        ATerm l_13 (ATerm t)
        {
          ATerm q_13 (ATerm t)
          {
            ATerm l_62 = NULL;
            ATerm m_62 = NULL;
            m_62 = t;
            if(((l_62 != NULL) && (l_62 != m_62)))
              _fail(m_62);
            else
              l_62 = m_62;
            {
              t = (ATerm) ATmakeAppl(sym__2, term_v_14, (ATerm) ATinsert(CheckATermList(not_null(l_62)), term_d_44));
              t = printnl_0(t);
            }
            return(t);
          }
          t = if_verbose1_1(t, q_13);
          return(t);
        }
        t = profile_p__2(t, l_13, compile_0);
        {
          ATerm r_13 (ATerm t)
          {
            ATerm n_62 = NULL;
            ATerm o_62 = NULL;
            t = run_time_0(t);
            {
              o_62 = t;
              if(((n_62 != NULL) && (n_62 != o_62)))
                _fail(o_62);
              else
                n_62 = o_62;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, term_v_14, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_44), not_null(n_62)), term_e_44));
              t = printnl_0(t);
            }
            return(t);
          }
          t = if_verbose2_1(t, r_13);
          {
            t = term_x_13;
            t = exit_0(t);
          }
        }
      }
      LocalPopChoice(c_44);
    }
  else
    {
      t = b_44;
      {
        ATerm p_62 = NULL;
        ATerm q_62 = NULL;
        t = run_time_0(t);
        {
          q_62 = t;
          if(((p_62 != NULL) && (p_62 != q_62)))
            _fail(q_62);
          else
            p_62 = q_62;
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_v_14, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_44), not_null(p_62)), term_h_44));
          {
            t = printnl_0(t);
            {
              t = term_y_20;
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
