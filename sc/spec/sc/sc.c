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
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_Sort_2;
Symbol sym_OpDecl_2;
Symbol sym_Sorts_1;
Symbol sym_Constructors_1;
Symbol sym_NoKind_0;
Symbol sym_Wld_0;
Symbol sym_Var_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_Str_1;
Symbol sym_Op_2;
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
Symbol sym_Path_2;
Symbol sym_Cong_2;
Symbol sym_One_1;
Symbol sym_Some_1;
Symbol sym_All_1;
Symbol sym_Thread_1;
Symbol sym_Assign_2;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_MatchVar_1;
Symbol sym_MatchFun_1;
Symbol sym_Scope_2;
Symbol sym_Where_1;
Symbol sym_Prim_2;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
Symbol sym_ScopeDefault_1;
Symbol sym_DynRuleScope_2;
Symbol sym_MA_2;
Symbol sym_AM_2;
Symbol sym_BA_2;
Symbol sym_BAM_3;
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
Symbol sym_Rule_3;
Symbol sym_StratRule_3;
Symbol sym_LRule_1;
Symbol sym_SRule_1;
Symbol sym_RDef_3;
Symbol sym_DynamicRules_1;
Symbol sym_OverrideDynamicRules_1;
Symbol sym_Mod_2;
Symbol sym_Overlay_3;
Symbol sym_Signature_1;
Symbol sym_Overlays_1;
Symbol sym_Rules_1;
Symbol sym_Strategies_1;
Symbol sym_Imports_1;
Symbol sym_Specification_1;
Symbol sym_FILE_1;
Symbol sym_DIR_1;
Symbol sym_TEMP_0;
Symbol sym_TempFiles_0;
Symbol sym_Tool_1;
Symbol sym_Repository_0;
Symbol sym_Import_0;
Symbol sym_Imported_1;
Symbol sym_XTC_0;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Scopes_0;
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
Symbol sym_Infinite_0;
Symbol sym_Anno_2;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_CUT_0;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
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
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
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
  sym_MA_2 = ATmakeSymbol("MA", 2, ATfalse);
  ATprotectSymbol(sym_MA_2);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_BAM_3 = ATmakeSymbol("BAM", 3, ATfalse);
  ATprotectSymbol(sym_BAM_3);
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
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_OverrideDynamicRules_1);
  sym_Mod_2 = ATmakeSymbol("Mod", 2, ATfalse);
  ATprotectSymbol(sym_Mod_2);
  sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
  ATprotectSymbol(sym_Overlay_3);
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
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_DIR_1 = ATmakeSymbol("DIR", 1, ATfalse);
  ATprotectSymbol(sym_DIR_1);
  sym_TEMP_0 = ATmakeSymbol("TEMP", 0, ATfalse);
  ATprotectSymbol(sym_TEMP_0);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
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
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
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
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
  ATprotectSymbol(sym_CUT_0);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_n_40;
ATerm term_m_40;
ATerm term_l_40;
ATerm term_h_40;
ATerm term_z_39;
ATerm term_x_39;
ATerm term_p_39;
ATerm term_j_39;
ATerm term_i_39;
ATerm term_w_38;
ATerm term_f_38;
ATerm term_r_37;
ATerm term_l_37;
ATerm term_i_37;
ATerm term_p_36;
ATerm term_o_36;
ATerm term_g_36;
ATerm term_c_36;
ATerm term_b_36;
ATerm term_a_36;
ATerm term_t_35;
ATerm term_s_35;
ATerm term_r_35;
ATerm term_q_35;
ATerm term_p_35;
ATerm term_o_35;
ATerm term_i_35;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_e_35;
ATerm term_d_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_w_34;
ATerm term_v_34;
ATerm term_q_34;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_h_34;
ATerm term_g_34;
ATerm term_d_34;
ATerm term_z_33;
ATerm term_y_33;
ATerm term_x_33;
ATerm term_u_33;
ATerm term_t_33;
ATerm term_q_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_d_33;
ATerm term_a_33;
ATerm term_x_32;
ATerm term_s_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_d_32;
ATerm term_z_31;
ATerm term_w_31;
ATerm term_n_31;
ATerm term_g_31;
ATerm term_d_31;
ATerm term_a_31;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_y_29;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_m_29;
ATerm term_e_29;
ATerm term_d_29;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_t_28;
ATerm term_k_28;
ATerm term_v_27;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_l_27;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_h_26;
ATerm term_f_26;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_z_24;
ATerm term_a_24;
ATerm term_s_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_i_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_k_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_n_20;
ATerm term_l_20;
ATerm term_g_20;
ATerm term_c_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_q_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_b_18;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_p_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_b_17;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_c_16;
void init_constant_terms (void)
{
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling C code", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("C.pp", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end: ", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize2", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize1", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize: ", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to ", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("frontend", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to ", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("infile", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-dep", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(sym__2, term_c_22, term_y_21);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("SC ", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2002 Eelco Visser <visser@acm.org>\n", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("This program is free software; you can redistribute it and/or modify\n", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("it under the terms of the GNU General Public License as published by\n", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("the Free Software Foundation; either version 2, or (at your option)\n", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("any later version.\n", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(sym__2, term_r_27, term_s_27);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(sym__2, term_r_27, term_x_28);
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i file            Main module to compile (required)\n", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f | --output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d\n", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(sym__2, term_b_17, term_c_20);
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(sym__2, term_b_21, term_c_20);
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(sym__2, term_q_19, term_c_20);
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(sym__2, term_i_19, term_c_20);
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(sym__2, term_d_33, term_c_20);
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all        Instrument all definitions to print tracing information", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-t f               Instrument definition of f to print tracing information\n", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i        Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(sym__2, term_e_16, term_c_16);
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-S | --silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(sym__2, term_x_33, term_c_20);
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(sym__2, term_d_34, term_c_20);
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(sym__2, term_i_34, term_c_20);
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M\n", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that sc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("SC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(sym__2, term_c_36, term_g_36);
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(sym__3, term_c_36, term_g_36, (ATerm) ATempty);
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(ATmakeSymbol("importing: ", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(ATmakeSymbol("sc.config", 0, ATtrue));
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(ATmakeSymbol("sc-manual.txt", 0, ATtrue));
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue));
}
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm u_75 (ATerm), ATerm v_75 (ATerm));
ATerm crush_2 (ATerm, ATerm m_77 (ATerm), ATerm n_77 (ATerm));
ATerm run_time_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm j_68 (ATerm));
ATerm Snd_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm link_object_code_0 (ATerm);
ATerm c_to_object_code_0 (ATerm);
ATerm c_compile_0 (ATerm);
ATerm xtc_transform_1 (ATerm, ATerm v_62 (ATerm));
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
ATerm AddMain_1 (ATerm, ATerm u_90 (ATerm));
ATerm xtc_io_transform_1 (ATerm, ATerm f_63 (ATerm));
ATerm add_main_0 (ATerm);
ATerm get_outfile_1 (ATerm, ATerm t_90 (ATerm));
ATerm stderr_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm r_0 (ATerm));
ATerm output_ast_0 (ATerm);
ATerm pass_keep_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm dep_name_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm d_63 (ATerm), ATerm e_63 (ATerm));
ATerm call_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm u_62 (ATerm));
ATerm assert_1 (ATerm, ATerm p_72 (ATerm));
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm p_0 (ATerm), ATerm q_0 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm w_62 (ATerm), ATerm x_62 (ATerm));
ATerm if_verbose3_1 (ATerm, ATerm k_68 (ATerm));
ATerm basename_1 (ATerm, ATerm o_73 (ATerm));
ATerm basename_0 (ATerm);
ATerm get_infile_0 (ATerm);
ATerm parse_0 (ATerm);
ATerm front_end_0 (ATerm);
ATerm rename_file_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm rename_to_1 (ATerm, ATerm o_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm m_72 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm begin_scope_1 (ATerm, ATerm l_72 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm s_62 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm t_62 (ATerm));
ATerm compile_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm i_68 (ATerm));
ATerm ticks_to_seconds_0 (ATerm);
ATerm self_children_sys_time_0 (ATerm);
ATerm add_0 (ATerm);
ATerm self_children_user_time_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm diff_times_0 (ATerm);
ATerm times_0 (ATerm);
ATerm profile_p__2 (ATerm, ATerm o_71 (ATerm), ATerm p_71 (ATerm));
ATerm debug_1 (ATerm, ATerm t_71 (ATerm));
ATerm implode_string_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm x_50 (ATerm), ATerm y_50 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm sc_announce_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm sc_version_0 (ATerm);
ATerm try_1 (ATerm, ATerm e_90 (ATerm));
ATerm copy_file_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm m_68 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm l_68 (ATerm));
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose6_1 (ATerm, ATerm n_68 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm b_77 (ATerm), ATerm c_77 (ATerm));
ATerm union_1 (ATerm, ATerm d_77 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm w_65 (ATerm));
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
ATerm at_end_1 (ATerm, ATerm z_81 (ATerm));
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
ATerm short_description_1 (ATerm, ATerm f_0 (ATerm));
ATerm Program_1 (ATerm, ATerm m_57 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm u_71 (ATerm));
ATerm Undefined_1 (ATerm, ATerm n_57 (ATerm));
ATerm fetch_1 (ATerm, ATerm t_81 (ATerm));
ATerm option_defined_1 (ATerm, ATerm g_68 (ATerm));
ATerm Help_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm g_67 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm e_67 (ATerm));
ATerm parse_options_1 (ATerm, ATerm d_67 (ATerm));
ATerm table_put_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm g_62 (ATerm), ATerm h_62 (ATerm));
ATerm Nil_0 (ATerm);
ATerm map_1 (ATerm, ATerm k_81 (ATerm));
ATerm table_putlist_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm import_config_file_1 (ATerm, ATerm u_69 (ATerm));
ATerm command_line_options_0 (ATerm);
ATerm sc_0 (ATerm);
ATerm main_0 (ATerm);
ATerm exit_0 (ATerm t)
{
  ATerm d_0 = NULL;
  d_0 = t;
  t = SSL_exit(not_null(d_0));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm r_1 = NULL,s_1 = NULL,t_1 = NULL;
  r_1 = t;
  w_0 :
  if(match_cons(r_1, sym__2))
    {
      s_1 = ATgetArgument(r_1, 0);
      t_1 = ATgetArgument(r_1, 1);
      {
        ATerm n_15;
        n_15 = t;
        t = SSL_printnl(not_null(s_1), not_null(t_1));
        t = n_15;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm u_75 (ATerm), ATerm v_75 (ATerm))
{
  ATerm t_15 = t;
  int u_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = u_75(t);
      LocalPopChoice(u_15);
    }
  else
    {
      t = t_15;
      {
        ATerm n_2 = NULL,o_2 = NULL,p_2 = NULL;
        n_2 = t;
        m_2 :
        if(((ATgetType(n_2) == AT_LIST) && ((ATermList) n_2 != ATempty)))
          {
            o_2 = ATgetFirst((ATermList) n_2);
            p_2 = (ATerm) ATgetNext((ATermList) n_2);
            {
              ATerm s_2 = NULL;
              ATerm t_2 = NULL;
              t = not_null(p_2);
              {
                t = foldr_2(t, u_75, v_75);
                {
                  t_2 = t;
                  if(((s_2 != NULL) && (s_2 != t_2)))
                    _fail(t_2);
                  else
                    s_2 = t_2;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(o_2), not_null(s_2));
                t = v_75(t);
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
ATerm crush_2 (ATerm t, ATerm m_77 (ATerm), ATerm n_77 (ATerm))
{
  ATerm a_3 = NULL;
  ATerm c_3 = NULL;
  a_3 = t;
  {
    ATerm d_3 = NULL;
    ATerm f_3 = NULL,g_3 = NULL,h_3 = NULL;
    t = not_null(a_3);
    {
      d_3 = t;
      {
        t = SSL_explode_term(not_null(d_3));
        {
          f_3 = t;
          z_2 :
          if(match_cons(f_3, sym__2))
            {
              g_3 = ATgetArgument(f_3, 0);
              h_3 = ATgetArgument(f_3, 1);
              if(((c_3 != NULL) && (c_3 != h_3)))
                _fail(h_3);
              else
                c_3 = h_3;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(c_3);
      t = foldr_2(t, m_77, n_77);
    }
  }
  return(t);
}
ATerm run_time_0 (ATerm t)
{
  t = times_0(t);
  {
    ATerm c_0 (ATerm t)
    {
      t = term_c_16;
      return(t);
    }
    t = crush_2(t, c_0, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm j_68 (ATerm))
{
  ATerm g_0 (ATerm t)
  {
    ATerm d_16;
    d_16 = t;
    {
      ATerm m_3 = NULL;
      ATerm n_3 = NULL;
      t = term_e_16;
      {
        t = get_config_0(t);
        {
          n_3 = t;
          if(((m_3 != NULL) && (m_3 != n_3)))
            _fail(n_3);
          else
            m_3 = n_3;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_3), term_f_16);
        t = geq_0(t);
      }
    }
    t = d_16;
    t = j_68(t);
    return(t);
  }
  t = try_1(t, g_0);
  return(t);
}
ATerm Snd_0 (ATerm t)
{
  ATerm w_3 = NULL;
  ATerm y_3 = NULL,z_3 = NULL,a_4 = NULL;
  w_3 = t;
  {
    ATerm b_4 = NULL;
    ATerm d_4 = NULL,e_4 = NULL,f_4 = NULL,g_4 = NULL,h_4 = NULL,i_4 = NULL,j_4 = NULL;
    t = not_null(w_3);
    {
      b_4 = t;
      {
        t = SSL_explode_term(not_null(b_4));
        {
          d_4 = t;
          s_3 :
          if(match_cons(d_4, sym__2))
            {
              e_4 = ATgetArgument(d_4, 0);
              f_4 = ATgetArgument(d_4, 1);
              t_3 :
              if(match_string(e_4, ""))
                {
                  u_3 :
                  if(((ATgetType(f_4) == AT_LIST) && ((ATermList) f_4 != ATempty)))
                    {
                      g_4 = ATgetFirst((ATermList) f_4);
                      h_4 = (ATerm) ATgetNext((ATermList) f_4);
                      v_3 :
                      if(((ATgetType(h_4) == AT_LIST) && ((ATermList) h_4 != ATempty)))
                        {
                          i_4 = ATgetFirst((ATermList) h_4);
                          j_4 = (ATerm) ATgetNext((ATermList) h_4);
                          {
                            if(((y_3 != NULL) && (y_3 != g_4)))
                              _fail(g_4);
                            else
                              y_3 = g_4;
                            {
                              if(((a_4 != NULL) && (a_4 != i_4)))
                                _fail(i_4);
                              else
                                a_4 = i_4;
                              if(((z_3 != NULL) && (z_3 != j_4)))
                                _fail(j_4);
                              else
                                z_3 = j_4;
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
    t = not_null(a_4);
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm t_4 = NULL;
  ATerm v_4 = NULL,w_4 = NULL;
  t_4 = t;
  {
    ATerm x_4 = NULL;
    ATerm z_4 = NULL,a_5 = NULL,b_5 = NULL,c_5 = NULL,d_5 = NULL;
    t = not_null(t_4);
    {
      x_4 = t;
      {
        t = SSL_explode_term(not_null(x_4));
        {
          z_4 = t;
          q_4 :
          if(match_cons(z_4, sym__2))
            {
              a_5 = ATgetArgument(z_4, 0);
              b_5 = ATgetArgument(z_4, 1);
              r_4 :
              if(match_string(a_5, ""))
                {
                  s_4 :
                  if(((ATgetType(b_5) == AT_LIST) && ((ATermList) b_5 != ATempty)))
                    {
                      c_5 = ATgetFirst((ATermList) b_5);
                      d_5 = (ATerm) ATgetNext((ATermList) b_5);
                      {
                        if(((w_4 != NULL) && (w_4 != c_5)))
                          _fail(c_5);
                        else
                          w_4 = c_5;
                        if(((v_4 != NULL) && (v_4 != d_5)))
                          _fail(d_5);
                        else
                          v_4 = d_5;
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
    t = not_null(w_4);
  }
  return(t);
}
ATerm link_object_code_0 (ATerm t)
{
  ATerm n_5 = NULL,o_5 = NULL;
  n_5 = t;
  m_5 :
  if(match_cons(n_5, sym_FILE_1))
    {
      o_5 = ATgetArgument(n_5, 0);
      {
        ATerm q_5 = NULL;
        ATerm r_5 = NULL;
        ATerm h_0 (ATerm t)
        {
          ATerm s_0 (ATerm t)
          {
            t = term_i_16;
            return(t);
          }
          t = say_1(t, s_0);
          return(t);
        }
        t = if_verbose2_1(t, h_0);
        {
          ATerm s_5 = NULL;
          ATerm t_0 (ATerm t)
          {
            t = term_j_16;
            return(t);
          }
          t = get_outfile_1(t, t_0);
          {
            r_5 = t;
            {
              if(((q_5 != NULL) && (q_5 != r_5)))
                _fail(r_5);
              else
                q_5 = r_5;
              {
                ATerm t_5 = NULL;
                t = term_k_16;
                {
                  t = get_config_0(t);
                  {
                    t_5 = t;
                    if(((s_5 != NULL) && (s_5 != t_5)))
                      _fail(t_5);
                    else
                      s_5 = t_5;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_m_16, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(s_5)), not_null(q_5)), term_n_16), not_null(o_5)));
                  {
                    ATerm u_0 (ATerm t)
                    {
                      ATerm o_16;
                      o_16 = t;
                      {
                        ATerm u_5 = NULL,w_5 = NULL;
                        ATerm p_16;
                        p_16 = t;
                        {
                          ATerm v_5 = NULL;
                          t = Fst_0(t);
                          {
                            v_5 = t;
                            if(((u_5 != NULL) && (u_5 != v_5)))
                              _fail(v_5);
                            else
                              u_5 = v_5;
                          }
                        }
                        t = p_16;
                        {
                          ATerm x_5 = NULL;
                          t = Snd_0(t);
                          {
                            x_5 = t;
                            if(((w_5 != NULL) && (w_5 != x_5)))
                              _fail(x_5);
                            else
                              w_5 = x_5;
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym__2, term_q_16, (ATerm) ATinsert(CheckATermList(not_null(w_5)), not_null(u_5)));
                            t = printnl_0(t);
                          }
                        }
                      }
                      t = o_16;
                      return(t);
                    }
                    t = if_verbose3_1(t, u_0);
                    t = call_0(t);
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_5));
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
  ATerm j_6 = NULL,k_6 = NULL;
  j_6 = t;
  i_6 :
  if(match_cons(j_6, sym_FILE_1))
    {
      k_6 = ATgetArgument(j_6, 0);
      {
        ATerm m_6 = NULL;
        ATerm n_6 = NULL;
        ATerm v_0 (ATerm t)
        {
          ATerm x_0 (ATerm t)
          {
            t = term_r_16;
            return(t);
          }
          t = say_1(t, x_0);
          return(t);
        }
        t = if_verbose2_1(t, v_0);
        {
          ATerm o_6 = NULL;
          ATerm y_0 (ATerm t)
          {
            t = term_s_16;
            return(t);
          }
          t = get_outfile_1(t, y_0);
          {
            n_6 = t;
            {
              if(((m_6 != NULL) && (m_6 != n_6)))
                _fail(n_6);
              else
                m_6 = n_6;
              {
                ATerm p_6 = NULL,r_6 = NULL;
                ATerm q_6 = NULL;
                t = term_t_16;
                {
                  t = get_config_0(t);
                  {
                    q_6 = t;
                    if(((p_6 != NULL) && (p_6 != q_6)))
                      _fail(q_6);
                    else
                      p_6 = q_6;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(p_6), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(m_6)), term_n_16), not_null(k_6)), term_b_17));
                  {
                    t = conc_0(t);
                    {
                      r_6 = t;
                      if(((o_6 != NULL) && (o_6 != r_6)))
                        _fail(r_6);
                      else
                        o_6 = r_6;
                    }
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_m_16, not_null(o_6));
                  {
                    ATerm z_0 (ATerm t)
                    {
                      ATerm g_17;
                      g_17 = t;
                      {
                        ATerm s_6 = NULL;
                        ATerm t_6 = NULL;
                        t_6 = t;
                        if(((s_6 != NULL) && (s_6 != t_6)))
                          _fail(t_6);
                        else
                          s_6 = t_6;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_q_16, not_null(s_6));
                          t = printnl_0(t);
                        }
                      }
                      t = g_17;
                      return(t);
                    }
                    t = if_verbose3_1(t, z_0);
                    t = call_0(t);
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(m_6));
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
  ATerm h_17 = t;
  int i_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_17;
      j_17 = t;
      {
        t = term_b_17;
        t = get_config_0(t);
      }
      t = j_17;
      LocalPopChoice(i_17);
    }
  else
    {
      t = h_17;
      {
        ATerm a_1 (ATerm t)
        {
          ATerm c_1 (ATerm t)
          {
            ATerm a_7 = NULL;
            ATerm b_7 = NULL;
            b_7 = t;
            if(((a_7 != NULL) && (a_7 != b_7)))
              _fail(b_7);
            else
              a_7 = b_7;
            {
              t = (ATerm) ATmakeAppl(sym__2, term_q_16, (ATerm) ATinsert(CheckATermList(not_null(a_7)), term_k_17));
              t = printnl_0(t);
            }
            return(t);
          }
          t = if_verbose1_1(t, c_1);
          return(t);
        }
        ATerm b_1 (ATerm t)
        {
          t = c_to_object_code_0(t);
          t = link_object_code_0(t);
          return(t);
        }
        t = profile_p__2(t, a_1, b_1);
      }
    }
  return(t);
}
ATerm xtc_transform_1 (ATerm t, ATerm v_62 (ATerm))
{
  ATerm d_1 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, v_62, d_1);
  return(t);
}
ATerm abox2text_0 (ATerm t)
{
  ATerm e_1 (ATerm t)
  {
    t = term_l_17;
    return(t);
  }
  t = xtc_transform_1(t, e_1);
  {
    ATerm f_1 (ATerm t)
    {
      ATerm g_1 (ATerm t)
      {
        t = term_m_17;
        return(t);
      }
      t = get_outfile_1(t, g_1);
      return(t);
    }
    t = rename_to_1(t, f_1);
  }
  return(t);
}
ATerm ac2abox_0 (ATerm t)
{
  ATerm h_1 (ATerm t)
  {
    t = term_p_17;
    return(t);
  }
  ATerm i_1 (ATerm t)
  {
    ATerm e_7 = NULL;
    ATerm f_7 = NULL;
    t = term_u_17;
    {
      t = xtc_find_0(t);
      {
        f_7 = t;
        if(((e_7 != NULL) && (e_7 != f_7)))
          _fail(f_7);
        else
          e_7 = f_7;
      }
    }
    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_7)), term_v_17);
    return(t);
  }
  t = xtc_transform_2(t, h_1, i_1);
  return(t);
}
ATerm s2c_0 (ATerm t)
{
  ATerm j_1 (ATerm t)
  {
    t = term_w_17;
    return(t);
  }
  ATerm k_1 (ATerm t)
  {
    ATerm k_7 = NULL,m_7 = NULL;
    ATerm x_17;
    x_17 = t;
    {
      ATerm l_7 = NULL;
      t = pass_verbose_0(t);
      {
        l_7 = t;
        if(((k_7 != NULL) && (k_7 != l_7)))
          _fail(l_7);
        else
          k_7 = l_7;
      }
    }
    t = x_17;
    {
      ATerm p_7 = NULL;
      t = term_b_18;
      {
        t = get_config_0(t);
        {
          ATerm l_1 (ATerm t)
          {
            ATerm n_7 = NULL;
            ATerm o_7 = NULL;
            o_7 = t;
            if(((n_7 != NULL) && (n_7 != o_7)))
              _fail(o_7);
            else
              n_7 = o_7;
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_7)), term_b_18);
            return(t);
          }
          t = map_1(t, l_1);
          {
            p_7 = t;
            if(((m_7 != NULL) && (m_7 != p_7)))
              _fail(p_7);
            else
              m_7 = p_7;
          }
        }
      }
      {
        t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(m_7)), (ATerm) ATinsert(ATempty, term_g_18)), not_null(k_7));
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
    t = term_h_18;
    return(t);
  }
  ATerm n_1 (ATerm t)
  {
    ATerm u_7 = NULL;
    ATerm v_7 = NULL;
    t = pass_verbose_0(t);
    {
      v_7 = t;
      if(((u_7 != NULL) && (u_7 != v_7)))
        _fail(v_7);
      else
        u_7 = v_7;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(u_7)), term_g_18);
    return(t);
  }
  t = xtc_transform_2(t, m_1, n_1);
  return(t);
}
ATerm canonicalize_0 (ATerm t)
{
  ATerm o_1 (ATerm t)
  {
    t = term_i_18;
    return(t);
  }
  ATerm p_1 (ATerm t)
  {
    ATerm y_7 = NULL;
    ATerm z_7 = NULL;
    t = pass_verbose_0(t);
    {
      z_7 = t;
      if(((y_7 != NULL) && (y_7 != z_7)))
        _fail(z_7);
      else
        y_7 = z_7;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(y_7)), term_g_18);
    return(t);
  }
  t = xtc_transform_2(t, o_1, p_1);
  return(t);
}
ATerm back_end_0 (ATerm t)
{
  ATerm q_1 (ATerm t)
  {
    ATerm u_1 (ATerm t)
    {
      t = term_j_18;
      return(t);
    }
    t = debug_1(t, u_1);
    return(t);
  }
  t = if_verbose2_1(t, q_1);
  {
    ATerm v_1 (ATerm t)
    {
      ATerm x_1 (ATerm t)
      {
        ATerm c_8 = NULL;
        ATerm d_8 = NULL;
        d_8 = t;
        if(((c_8 != NULL) && (c_8 != d_8)))
          _fail(d_8);
        else
          c_8 = d_8;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_q_16, (ATerm) ATinsert(CheckATermList(not_null(c_8)), term_k_18));
          t = printnl_0(t);
        }
        return(t);
      }
      t = if_verbose1_1(t, x_1);
      return(t);
    }
    ATerm w_1 (ATerm t)
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
    t = profile_p__2(t, v_1, w_1);
  }
  return(t);
}
ATerm optimize2_0 (ATerm t)
{
  ATerm y_1 (ATerm t)
  {
    t = term_l_18;
    return(t);
  }
  ATerm z_1 (ATerm t)
  {
    ATerm g_8 = NULL;
    ATerm h_8 = NULL;
    t = pass_verbose_0(t);
    {
      h_8 = t;
      if(((g_8 != NULL) && (g_8 != h_8)))
        _fail(h_8);
      else
        g_8 = h_8;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(g_8)), term_g_18);
    return(t);
  }
  t = xtc_transform_2(t, y_1, z_1);
  return(t);
}
ATerm compile_match_0 (ATerm t)
{
  ATerm a_2 (ATerm t)
  {
    t = term_m_18;
    return(t);
  }
  ATerm b_2 (ATerm t)
  {
    ATerm k_8 = NULL;
    ATerm l_8 = NULL;
    t = pass_verbose_0(t);
    {
      l_8 = t;
      if(((k_8 != NULL) && (k_8 != l_8)))
        _fail(l_8);
      else
        k_8 = l_8;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(k_8)), term_g_18);
    return(t);
  }
  t = xtc_transform_2(t, a_2, b_2);
  return(t);
}
ATerm inline_0 (ATerm t)
{
  ATerm c_2 (ATerm t)
  {
    t = term_v_18;
    return(t);
  }
  ATerm d_2 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(o_8)), term_g_18);
    return(t);
  }
  t = xtc_transform_2(t, c_2, d_2);
  return(t);
}
ATerm fusion_0 (ATerm t)
{
  ATerm e_2 (ATerm t)
  {
    t = term_w_18;
    return(t);
  }
  ATerm f_2 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(s_8)), term_g_18);
    return(t);
  }
  t = xtc_transform_2(t, e_2, f_2);
  return(t);
}
ATerm optimize1_0 (ATerm t)
{
  ATerm g_2 (ATerm t)
  {
    t = term_x_18;
    return(t);
  }
  ATerm h_2 (ATerm t)
  {
    ATerm w_8 = NULL;
    ATerm x_8 = NULL;
    t = pass_verbose_0(t);
    {
      x_8 = t;
      if(((w_8 != NULL) && (w_8 != x_8)))
        _fail(x_8);
      else
        w_8 = x_8;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(w_8)), term_g_18);
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
      t = term_y_18;
      return(t);
    }
    t = debug_1(t, j_2);
    return(t);
  }
  t = if_verbose2_1(t, i_2);
  {
    ATerm k_2 (ATerm t)
    {
      ATerm q_2 (ATerm t)
      {
        ATerm a_9 = NULL;
        ATerm b_9 = NULL;
        b_9 = t;
        if(((a_9 != NULL) && (a_9 != b_9)))
          _fail(b_9);
        else
          a_9 = b_9;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_q_16, (ATerm) ATinsert(CheckATermList(not_null(a_9)), term_z_18));
          t = printnl_0(t);
        }
        return(t);
      }
      t = if_verbose1_1(t, q_2);
      return(t);
    }
    ATerm l_2 (ATerm t)
    {
      t = optimize1_0(t);
      {
        ATerm r_2 (ATerm t)
        {
          ATerm c_19;
          c_19 = t;
          {
            ATerm d_19 = t;
            if((PushChoice() == 0))
              {
                t = term_i_19;
                t = get_config_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = d_19;
              }
          }
          t = c_19;
          t = fusion_0(t);
          return(t);
        }
        t = try_1(t, r_2);
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
  ATerm u_2 (ATerm t)
  {
    t = term_j_19;
    return(t);
  }
  ATerm v_2 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(e_9)), term_g_18);
    return(t);
  }
  t = xtc_transform_2(t, u_2, v_2);
  return(t);
}
ATerm stratego_nf_0 (ATerm t)
{
  ATerm w_2 (ATerm t)
  {
    t = term_k_19;
    return(t);
  }
  ATerm x_2 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(i_9)), term_g_18);
    return(t);
  }
  t = xtc_transform_2(t, w_2, x_2);
  return(t);
}
ATerm extract_0 (ATerm t)
{
  ATerm y_2 (ATerm t)
  {
    t = term_l_19;
    return(t);
  }
  ATerm b_3 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(m_9)), term_g_18);
    return(t);
  }
  t = xtc_transform_2(t, y_2, b_3);
  return(t);
}
ATerm extract_all_0 (ATerm t)
{
  ATerm e_3 (ATerm t)
  {
    t = term_m_19;
    return(t);
  }
  ATerm i_3 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(q_9)), term_g_18);
    return(t);
  }
  t = xtc_transform_2(t, e_3, i_3);
  return(t);
}
ATerm output_frontend_0 (ATerm t)
{
  ATerm j_3 (ATerm t)
  {
    ATerm n_19;
    n_19 = t;
    {
      t = term_q_19;
      t = get_config_0(t);
    }
    t = n_19;
    {
      ATerm v_19 = t;
      int w_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = extract_all_0(t);
          LocalPopChoice(w_19);
        }
      else
        {
          t = v_19;
          {
            t = (ATerm) ATinsert(ATempty, term_x_19);
            t = fatal_error_0(t);
          }
        }
      {
        ATerm k_3 (ATerm t)
        {
          ATerm l_3 (ATerm t)
          {
            t = term_y_19;
            return(t);
          }
          t = get_outfile_1(t, l_3);
          return(t);
        }
        t = copy_to_1(t, k_3);
        {
          ATerm o_3 (ATerm t)
          {
            ATerm w_9 = NULL;
            ATerm x_9 = NULL,y_9 = NULL;
            x_9 = t;
            v_9 :
            if(match_cons(x_9, sym_FILE_1))
              {
                y_9 = ATgetArgument(x_9, 0);
                {
                  ATerm a_10 = NULL;
                  t = not_null(y_9);
                  {
                    a_10 = t;
                    if(((w_9 != NULL) && (w_9 != a_10)))
                      _fail(a_10);
                    else
                      w_9 = a_10;
                  }
                }
              }
            else
              {
                _fail(t);
              }
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_9)), term_z_19);
            return(t);
          }
          t = say_1(t, o_3);
        }
      }
    }
    return(t);
  }
  t = try_1(t, j_3);
  return(t);
}
ATerm frontend_0 (ATerm t)
{
  ATerm p_3 (ATerm t)
  {
    t = term_a_20;
    return(t);
  }
  ATerm q_3 (ATerm t)
  {
    ATerm e_10 = NULL;
    ATerm f_10 = NULL;
    t = pass_verbose_0(t);
    {
      f_10 = t;
      if(((e_10 != NULL) && (e_10 != f_10)))
        _fail(f_10);
      else
        e_10 = f_10;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(e_10)), term_g_18);
    return(t);
  }
  t = xtc_transform_2(t, p_3, q_3);
  return(t);
}
ATerm AddMain_1 (ATerm t, ATerm u_90 (ATerm))
{
  ATerm k_10 = NULL,l_10 = NULL;
  k_10 = t;
  j_10 :
  if(match_cons(k_10, sym_Specification_1))
    {
      l_10 = ATgetArgument(k_10, 0);
      {
        ATerm n_10 = NULL;
        ATerm o_10 = NULL;
        t = term_c_20;
        {
          t = u_90(t);
          {
            o_10 = t;
            if(((n_10 != NULL) && (n_10 != o_10)))
              _fail(o_10);
            else
              n_10 = o_10;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(not_null(l_10)), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_g_20, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(n_10)), (ATerm) ATempty))))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm xtc_io_transform_1 (ATerm t, ATerm f_63 (ATerm))
{
  t = read_from_0(t);
  {
    t = f_63(t);
    t = write_to_0(t);
  }
  return(t);
}
ATerm add_main_0 (ATerm t)
{
  ATerm s_10 = NULL;
  ATerm r_3 (ATerm t)
  {
    ATerm i_20;
    i_20 = t;
    {
      ATerm t_10 = NULL;
      t = term_l_20;
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
    }
    t = i_20;
    {
      ATerm x_3 (ATerm t)
      {
        ATerm c_4 (ATerm t)
        {
          t = not_null(s_10);
          return(t);
        }
        t = AddMain_1(t, c_4);
        return(t);
      }
      t = xtc_io_transform_1(t, x_3);
    }
    return(t);
  }
  t = try_1(t, r_3);
  return(t);
}
ATerm get_outfile_1 (ATerm t, ATerm t_90 (ATerm))
{
  ATerm x_10 = NULL,z_10 = NULL;
  ATerm m_20;
  m_20 = t;
  {
    ATerm y_10 = NULL;
    t = t_90(t);
    {
      y_10 = t;
      if(((x_10 != NULL) && (x_10 != y_10)))
        _fail(y_10);
      else
        x_10 = y_10;
    }
  }
  t = m_20;
  {
    ATerm a_11 = NULL;
    t = term_n_20;
    {
      t = get_config_0(t);
      {
        a_11 = t;
        if(((z_10 != NULL) && (z_10 != a_11)))
          _fail(a_11);
        else
          z_10 = a_11;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(z_10), not_null(x_10));
      t = conc_strings_0(t);
    }
  }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm h_11 = NULL;
  h_11 = t;
  g_11 :
  if(match_cons(h_11, sym_stderr_0))
    {
      ATerm j_11 = NULL,l_11 = NULL;
      ATerm o_20;
      o_20 = t;
      {
        ATerm k_11 = NULL;
        t = SSLgetAnnotations(not_null(h_11));
        {
          k_11 = t;
          if(((j_11 != NULL) && (j_11 != k_11)))
            _fail(k_11);
          else
            j_11 = k_11;
        }
      }
      t = o_20;
      {
        ATerm m_11 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(j_11));
        {
          m_11 = t;
          if(((l_11 != NULL) && (l_11 != m_11)))
            _fail(m_11);
          else
            l_11 = m_11;
        }
        t = not_null(l_11);
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
  ATerm v_11 = NULL,w_11 = NULL;
  v_11 = t;
  u_11 :
  if(match_cons(v_11, sym_FILE_1))
    {
      w_11 = ATgetArgument(v_11, 0);
      {
        ATerm p_20 = t;
        int u_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_11 = NULL;
            ATerm z_11 = NULL;
            t = r_0(t);
            {
              z_11 = t;
              {
                if(((y_11 != NULL) && (y_11 != z_11)))
                  _fail(z_11);
                else
                  y_11 = z_11;
                {
                  ATerm v_20 = t;
                  int w_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(w_20);
                    }
                  else
                    {
                      t = v_20;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(w_11), not_null(y_11));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(w_11));
            LocalPopChoice(u_20);
          }
        else
          {
            t = p_20;
            {
              ATerm b_12 = NULL;
              ATerm c_12 = NULL;
              t = r_0(t);
              {
                c_12 = t;
                {
                  if(((b_12 != NULL) && (b_12 != c_12)))
                    _fail(c_12);
                  else
                    b_12 = c_12;
                  {
                    ATerm x_20 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm y_20 = t;
                        int z_20 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = stdout_0(t);
                            LocalPopChoice(z_20);
                          }
                        else
                          {
                            t = y_20;
                            t = stderr_0(t);
                          }
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = x_20;
                      }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(w_11), not_null(b_12));
                      t = copy_file_0(t);
                    }
                  }
                }
              }
              t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(w_11));
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
  ATerm k_4 (ATerm t)
  {
    ATerm a_21;
    a_21 = t;
    {
      t = term_b_21;
      t = get_config_0(t);
    }
    t = a_21;
    {
      ATerm l_4 (ATerm t)
      {
        ATerm m_4 (ATerm t)
        {
          t = term_c_21;
          return(t);
        }
        t = get_outfile_1(t, m_4);
        return(t);
      }
      t = copy_to_1(t, l_4);
      {
        ATerm n_4 (ATerm t)
        {
          ATerm k_12 = NULL;
          ATerm l_12 = NULL,m_12 = NULL;
          l_12 = t;
          j_12 :
          if(match_cons(l_12, sym_FILE_1))
            {
              m_12 = ATgetArgument(l_12, 0);
              {
                ATerm o_12 = NULL;
                t = not_null(m_12);
                {
                  o_12 = t;
                  if(((k_12 != NULL) && (k_12 != o_12)))
                    _fail(o_12);
                  else
                    k_12 = o_12;
                }
              }
            }
          else
            {
              _fail(t);
            }
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_12)), term_d_21);
          return(t);
        }
        t = say_1(t, n_4);
      }
    }
    return(t);
  }
  t = try_1(t, k_4);
  return(t);
}
ATerm pass_keep_0 (ATerm t)
{
  ATerm t_12 = NULL;
  ATerm u_12 = NULL,w_12 = NULL;
  ATerm v_12 = NULL;
  t = term_e_21;
  {
    ATerm i_21 = t;
    int j_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(j_21);
      }
    else
      {
        t = i_21;
        t = term_k_21;
      }
    {
      v_12 = t;
      if(((u_12 != NULL) && (u_12 != v_12)))
        _fail(v_12);
      else
        u_12 = v_12;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_12), term_k_21);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          w_12 = t;
          if(((t_12 != NULL) && (t_12 != w_12)))
            _fail(w_12);
          else
            t_12 = w_12;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_12)), term_e_21);
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm a_13 = NULL;
  a_13 = t;
  t = SSL_int_to_string(not_null(a_13));
  return(t);
}
ATerm pass_verbose_0 (ATerm t)
{
  ATerm f_13 = NULL;
  ATerm g_13 = NULL,i_13 = NULL;
  ATerm h_13 = NULL;
  t = term_e_16;
  {
    ATerm l_21 = t;
    int m_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(m_21);
      }
    else
      {
        t = l_21;
        t = term_k_21;
      }
    {
      h_13 = t;
      if(((g_13 != NULL) && (g_13 != h_13)))
        _fail(h_13);
      else
        g_13 = h_13;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_13), term_k_21);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          i_13 = t;
          if(((f_13 != NULL) && (f_13 != i_13)))
            _fail(i_13);
          else
            f_13 = i_13;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_13)), term_e_16);
  return(t);
}
ATerm dep_name_0 (ATerm t)
{
  ATerm m_13 = NULL;
  ATerm n_13 = NULL;
  ATerm n_21 = t;
  int o_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_16;
      t = get_config_0(t);
      LocalPopChoice(o_21);
    }
  else
    {
      t = n_21;
      {
        t = term_p_21;
        t = get_config_0(t);
      }
    }
  {
    n_13 = t;
    if(((m_13 != NULL) && (m_13 != n_13)))
      _fail(n_13);
    else
      m_13 = n_13;
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_13)), term_q_21);
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm u_13 = NULL,v_13 = NULL;
  u_13 = t;
  t_13 :
  if(match_cons(u_13, sym_stdin_0))
    {
      ATerm w_13 = NULL;
      ATerm x_13 = NULL;
      t = term_r_21;
      {
        t = ReadFromFile_0(t);
        {
          x_13 = t;
          if(((w_13 != NULL) && (w_13 != x_13)))
            _fail(x_13);
          else
            w_13 = x_13;
        }
      }
      t = not_null(w_13);
    }
  else
    {
      if(match_cons(u_13, sym_FILE_1))
        {
          v_13 = ATgetArgument(u_13, 0);
          {
            ATerm z_13 = NULL;
            ATerm a_14 = NULL;
            t = not_null(v_13);
            {
              t = ReadFromFile_0(t);
              {
                a_14 = t;
                if(((z_13 != NULL) && (z_13 != a_14)))
                  _fail(a_14);
                else
                  z_13 = a_14;
              }
            }
            t = not_null(z_13);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL;
  h_14 = t;
  g_14 :
  if(match_cons(h_14, sym__2))
    {
      i_14 = ATgetArgument(h_14, 0);
      j_14 = ATgetArgument(h_14, 1);
      t = SSL_WriteToTextFile(not_null(i_14), not_null(j_14));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm p_14 = NULL;
  ATerm r_14 = NULL;
  p_14 = t;
  {
    ATerm s_14 = NULL;
    t = xtc_new_file_0(t);
    {
      s_14 = t;
      {
        if(((r_14 != NULL) && (r_14 != s_14)))
          _fail(s_14);
        else
          r_14 = s_14;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_14), not_null(p_14));
          t = WriteToTextFile_0(t);
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(r_14));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm d_63 (ATerm), ATerm e_63 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, d_63, e_63);
    t = read_from_0(t);
  }
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm x_14 = NULL,y_14 = NULL,z_14 = NULL;
  x_14 = t;
  w_14 :
  if(match_cons(x_14, sym__2))
    {
      y_14 = ATgetArgument(x_14, 0);
      z_14 = ATgetArgument(x_14, 1);
      t = SSL_call(not_null(y_14), not_null(z_14));
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
ATerm xtc_command_1 (ATerm t, ATerm u_62 (ATerm))
{
  ATerm f_15 = NULL;
  ATerm s_21;
  s_21 = t;
  {
    ATerm g_15 = NULL;
    t = u_62(t);
    {
      t = xtc_find_warning_0(t);
      {
        g_15 = t;
        if(((f_15 != NULL) && (f_15 != g_15)))
          _fail(g_15);
        else
          f_15 = g_15;
      }
    }
  }
  t = s_21;
  {
    ATerm t_21;
    t_21 = t;
    {
      ATerm h_15 = NULL;
      ATerm i_15 = NULL;
      i_15 = t;
      if(((h_15 != NULL) && (h_15 != i_15)))
        _fail(i_15);
      else
        h_15 = i_15;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_15), not_null(h_15));
        t = call_0(t);
      }
    }
    t = t_21;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm p_72 (ATerm))
{
  ATerm q_15 = NULL,r_15 = NULL,s_15 = NULL;
  q_15 = t;
  p_15 :
  if(match_cons(q_15, sym__2))
    {
      r_15 = ATgetArgument(q_15, 0);
      s_15 = ATgetArgument(q_15, 1);
      {
        ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL;
        ATerm u_21;
        u_21 = t;
        {
          ATerm y_15 = NULL;
          ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL;
          t = p_72(t);
          {
            y_15 = t;
            {
              if(((v_15 != NULL) && (v_15 != y_15)))
                _fail(y_15);
              else
                v_15 = y_15;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(v_15), not_null(r_15), not_null(s_15));
                {
                  t = table_push_0(t);
                  {
                    ATerm w_21 = t;
                    int x_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(v_15), term_y_21);
                        t = table_get_0(t);
                        LocalPopChoice(x_21);
                      }
                    else
                      {
                        t = w_21;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      z_15 = t;
                      o_15 :
                      if(((ATgetType(z_15) == AT_LIST) && ((ATermList) z_15 != ATempty)))
                        {
                          a_16 = ATgetFirst((ATermList) z_15);
                          b_16 = (ATerm) ATgetNext((ATermList) z_15);
                          {
                            if(((w_15 != NULL) && (w_15 != a_16)))
                              _fail(a_16);
                            else
                              w_15 = a_16;
                            {
                              if(((x_15 != NULL) && (x_15 != b_16)))
                                _fail(b_16);
                              else
                                x_15 = b_16;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(v_15), term_y_21, (ATerm) ATinsert(CheckATermList(not_null(x_15)), (ATerm) ATinsert(CheckATermList(not_null(w_15)), not_null(r_15))));
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
        t = u_21;
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
  ATerm g_16 = NULL;
  ATerm h_16 = NULL;
  t = term_c_20;
  {
    t = new_0(t);
    {
      h_16 = t;
      if(((g_16 != NULL) && (g_16 != h_16)))
        _fail(h_16);
      else
        g_16 = h_16;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_16), term_z_21);
    {
      t = conc_strings_0(t);
      {
        ATerm o_4 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, o_4);
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm l_16 = NULL;
  t = new_file_0(t);
  {
    l_16 = t;
    {
      ATerm a_22;
      a_22 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_16), term_c_20);
        {
          ATerm p_4 (ATerm t)
          {
            t = term_c_22;
            return(t);
          }
          t = assert_1(t, p_4);
        }
      }
      t = a_22;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm p_0 (ATerm), ATerm q_0 (ATerm))
{
  ATerm v_16 = NULL,w_16 = NULL;
  v_16 = t;
  u_16 :
  if(match_cons(v_16, sym_stdin_0))
    {
      ATerm x_16 = NULL;
      ATerm y_16 = NULL;
      ATerm z_16 = NULL;
      t = xtc_new_file_0(t);
      {
        y_16 = t;
        {
          if(((x_16 != NULL) && (x_16 != y_16)))
            _fail(y_16);
          else
            x_16 = y_16;
          {
            ATerm a_17 = NULL;
            t = q_0(t);
            {
              a_17 = t;
              if(((z_16 != NULL) && (z_16 != a_17)))
                _fail(a_17);
              else
                z_16 = a_17;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_16), (ATerm) ATinsert(ATinsert(ATempty, not_null(x_16)), term_n_16));
              {
                t = conc_0(t);
                t = xtc_command_1(t, p_0);
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(x_16));
    }
  else
    {
      if(match_cons(v_16, sym_FILE_1))
        {
          w_16 = ATgetArgument(v_16, 0);
          {
            ATerm c_17 = NULL;
            ATerm d_17 = NULL;
            t = not_null(w_16);
            {
              ATerm e_17 = NULL;
              t = xtc_new_file_0(t);
              {
                d_17 = t;
                {
                  if(((c_17 != NULL) && (c_17 != d_17)))
                    _fail(d_17);
                  else
                    c_17 = d_17;
                  {
                    ATerm f_17 = NULL;
                    t = q_0(t);
                    {
                      f_17 = t;
                      if(((e_17 != NULL) && (e_17 != f_17)))
                        _fail(f_17);
                      else
                        e_17 = f_17;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(e_17), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(c_17)), term_n_16), not_null(w_16)), term_d_22));
                      {
                        t = conc_0(t);
                        t = xtc_command_1(t, p_0);
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(c_17));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm xtc_transform_2 (ATerm t, ATerm w_62 (ATerm), ATerm x_62 (ATerm))
{
  ATerm e_22 = t;
  int f_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_transform_file_2(t, w_62, x_62);
      LocalPopChoice(f_22);
    }
  else
    {
      t = e_22;
      t = xtc_transform_term_2(t, w_62, x_62);
    }
  return(t);
}
ATerm if_verbose3_1 (ATerm t, ATerm k_68 (ATerm))
{
  ATerm u_4 (ATerm t)
  {
    ATerm h_22;
    h_22 = t;
    {
      ATerm n_17 = NULL;
      ATerm o_17 = NULL;
      t = term_e_16;
      {
        t = get_config_0(t);
        {
          o_17 = t;
          if(((n_17 != NULL) && (n_17 != o_17)))
            _fail(o_17);
          else
            n_17 = o_17;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_17), term_i_22);
        t = geq_0(t);
      }
    }
    t = h_22;
    t = k_68(t);
    return(t);
  }
  t = try_1(t, u_4);
  return(t);
}
ATerm basename_1 (ATerm t, ATerm o_73 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm y_4 (ATerm t)
    {
      ATerm j_22 = t;
      int k_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Cons_2(t, _id, y_4);
          LocalPopChoice(k_22);
        }
      else
        {
          t = j_22;
          {
            ATerm l_22 = t;
            int v_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_5 (ATerm t)
                {
                  ATerm s_17 = NULL;
                  s_17 = t;
                  q_17 :
                  if(!(match_int(s_17, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = Cons_2(t, e_5, _id);
                LocalPopChoice(v_22);
              }
            else
              {
                t = l_22;
                {
                  ATerm f_5 (ATerm t)
                  {
                    ATerm t_17 = NULL;
                    t_17 = t;
                    r_17 :
                    if(!(match_int(t_17, 46)))
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = Cons_2(t, f_5, o_73);
                  t = (ATerm) ATempty;
                }
              }
          }
        }
      return(t);
    }
    t = try_1(t, y_4);
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
  ATerm z_17 = NULL,a_18 = NULL;
  z_17 = t;
  y_17 :
  if(match_cons(z_17, sym_FILE_1))
    {
      a_18 = ATgetArgument(z_17, 0);
      {
        ATerm c_18 = NULL,d_18 = NULL;
        ATerm e_18 = NULL;
        t = not_null(a_18);
        {
          ATerm f_18 = NULL;
          t = basename_0(t);
          {
            e_18 = t;
            {
              if(((c_18 != NULL) && (c_18 != e_18)))
                _fail(e_18);
              else
                c_18 = e_18;
              {
                ATerm g_5 (ATerm t)
                {
                  ATerm h_5 (ATerm t)
                  {
                    t = term_w_22;
                    return(t);
                  }
                  t = debug_1(t, h_5);
                  return(t);
                }
                t = if_verbose3_1(t, g_5);
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_x_22, not_null(c_18));
                  {
                    t = set_config_0(t);
                    {
                      ATerm y_22 = t;
                      int z_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = term_n_16;
                          {
                            t = get_config_0(t);
                            t = basename_0(t);
                          }
                          LocalPopChoice(z_22);
                        }
                      else
                        {
                          t = y_22;
                          t = not_null(c_18);
                        }
                      {
                        f_18 = t;
                        {
                          if(((d_18 != NULL) && (d_18 != f_18)))
                            _fail(f_18);
                          else
                            d_18 = f_18;
                          {
                            ATerm i_5 (ATerm t)
                            {
                              ATerm j_5 (ATerm t)
                              {
                                t = term_b_23;
                                return(t);
                              }
                              t = debug_1(t, j_5);
                              return(t);
                            }
                            t = if_verbose3_1(t, i_5);
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_n_20, not_null(d_18));
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
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(c_18));
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
    ATerm k_5 (ATerm t)
    {
      t = term_c_23;
      return(t);
    }
    ATerm l_5 (ATerm t)
    {
      ATerm n_18 = NULL,p_18 = NULL,r_18 = NULL,t_18 = NULL;
      ATerm d_23;
      d_23 = t;
      {
        ATerm o_18 = NULL;
        t = dep_name_0(t);
        {
          o_18 = t;
          if(((n_18 != NULL) && (n_18 != o_18)))
            _fail(o_18);
          else
            n_18 = o_18;
        }
      }
      t = d_23;
      {
        ATerm e_23;
        e_23 = t;
        {
          ATerm q_18 = NULL;
          t = pass_verbose_0(t);
          {
            q_18 = t;
            if(((p_18 != NULL) && (p_18 != q_18)))
              _fail(q_18);
            else
              p_18 = q_18;
          }
        }
        t = e_23;
        {
          ATerm j_23;
          j_23 = t;
          {
            ATerm s_18 = NULL;
            t = pass_keep_0(t);
            {
              s_18 = t;
              if(((r_18 != NULL) && (r_18 != s_18)))
                _fail(s_18);
              else
                r_18 = s_18;
            }
          }
          t = j_23;
          {
            ATerm u_18 = NULL;
            t = term_k_23;
            {
              t = get_config_0(t);
              {
                u_18 = t;
                if(((t_18 != NULL) && (t_18 != u_18)))
                  _fail(u_18);
                else
                  t_18 = u_18;
              }
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(r_18)), not_null(p_18)), not_null(t_18)), not_null(n_18));
              t = concat_0(t);
            }
          }
        }
      }
      return(t);
    }
    t = xtc_transform_2(t, k_5, l_5);
  }
  return(t);
}
ATerm front_end_0 (ATerm t)
{
  ATerm p_5 (ATerm t)
  {
    ATerm y_5 (ATerm t)
    {
      t = term_l_23;
      return(t);
    }
    t = debug_1(t, y_5);
    return(t);
  }
  t = if_verbose2_1(t, p_5);
  {
    ATerm z_5 (ATerm t)
    {
      ATerm b_6 (ATerm t)
      {
        ATerm a_19 = NULL;
        ATerm b_19 = NULL;
        b_19 = t;
        if(((a_19 != NULL) && (a_19 != b_19)))
          _fail(b_19);
        else
          a_19 = b_19;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_q_16, (ATerm) ATinsert(CheckATermList(not_null(a_19)), term_s_23));
          t = printnl_0(t);
        }
        return(t);
      }
      t = if_verbose1_1(t, b_6);
      return(t);
    }
    ATerm a_6 (ATerm t)
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
    t = profile_p__2(t, z_5, a_6);
  }
  return(t);
}
ATerm rename_file_0 (ATerm t)
{
  ATerm f_19 = NULL,g_19 = NULL,h_19 = NULL;
  f_19 = t;
  e_19 :
  if(match_cons(f_19, sym__2))
    {
      g_19 = ATgetArgument(f_19, 0);
      h_19 = ATgetArgument(f_19, 1);
      t = SSL_rename(not_null(g_19), not_null(h_19));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stdout_0 (ATerm t)
{
  ATerm p_19 = NULL;
  p_19 = t;
  o_19 :
  if(match_cons(p_19, sym_stdout_0))
    {
      ATerm r_19 = NULL,t_19 = NULL;
      ATerm t_23;
      t_23 = t;
      {
        ATerm s_19 = NULL;
        t = SSLgetAnnotations(not_null(p_19));
        {
          s_19 = t;
          if(((r_19 != NULL) && (r_19 != s_19)))
            _fail(s_19);
          else
            r_19 = s_19;
        }
      }
      t = t_23;
      {
        ATerm u_19 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(r_19));
        {
          u_19 = t;
          if(((t_19 != NULL) && (t_19 != u_19)))
            _fail(u_19);
          else
            t_19 = u_19;
        }
        t = not_null(t_19);
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
  ATerm e_20 = NULL,f_20 = NULL;
  e_20 = t;
  d_20 :
  if(match_cons(e_20, sym_FILE_1))
    {
      f_20 = ATgetArgument(e_20, 0);
      {
        ATerm w_23 = t;
        int x_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_20 = NULL;
            t = o_0(t);
            {
              h_20 = t;
              b_20 :
              if(match_cons(h_20, sym_stdout_0))
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(f_20), term_a_24);
                  {
                    t = copy_file_0(t);
                    {
                      t = not_null(f_20);
                      t = remove_file_0(t);
                    }
                  }
                }
              else
                {
                  _fail(t);
                }
            }
            t = term_a_24;
            LocalPopChoice(x_23);
          }
        else
          {
            t = w_23;
            {
              ATerm j_20 = NULL;
              ATerm k_20 = NULL;
              t = o_0(t);
              {
                k_20 = t;
                {
                  if(((j_20 != NULL) && (j_20 != k_20)))
                    _fail(k_20);
                  else
                    j_20 = k_20;
                  {
                    ATerm b_24 = t;
                    if((PushChoice() == 0))
                      {
                        t = stdout_0(t);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = b_24;
                      }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(f_20), not_null(j_20));
                      t = rename_file_0(t);
                    }
                  }
                }
              }
              t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(j_20));
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
  ATerm r_20 = NULL,s_20 = NULL,t_20 = NULL;
  r_20 = t;
  q_20 :
  if(((ATgetType(r_20) == AT_LIST) && ((ATermList) r_20 != ATempty)))
    {
      s_20 = ATgetFirst((ATermList) r_20);
      t_20 = (ATerm) ATgetNext((ATermList) r_20);
      t = not_null(t_20);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm g_21 = NULL,h_21 = NULL,v_21 = NULL;
  g_21 = t;
  f_21 :
  if(match_cons(g_21, sym__2))
    {
      h_21 = ATgetArgument(g_21, 0);
      v_21 = ATgetArgument(g_21, 1);
      {
        ATerm d_24;
        d_24 = t;
        {
          ATerm b_22 = NULL;
          ATerm g_22 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_21), not_null(v_21));
          {
            ATerm e_24 = t;
            int f_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(f_24);
              }
            else
              {
                t = e_24;
                t = (ATerm) ATempty;
              }
            {
              g_22 = t;
              if(((b_22 != NULL) && (b_22 != g_22)))
                _fail(g_22);
              else
                b_22 = g_22;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(h_21), not_null(v_21), not_null(b_22));
            t = table_put_0(t);
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
ATerm end_scope_1 (ATerm t, ATerm m_72 (ATerm))
{
  ATerm n_22 = NULL,o_22 = NULL,p_22 = NULL;
  ATerm m_24;
  m_24 = t;
  {
    ATerm q_22 = NULL;
    ATerm r_22 = NULL,s_22 = NULL,t_22 = NULL;
    t = m_72(t);
    {
      q_22 = t;
      {
        if(((o_22 != NULL) && (o_22 != q_22)))
          _fail(q_22);
        else
          o_22 = q_22;
        {
          ATerm n_24 = t;
          int o_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(o_22), term_y_21);
              t = table_get_0(t);
              LocalPopChoice(o_24);
            }
          else
            {
              t = n_24;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            r_22 = t;
            m_22 :
            if(((ATgetType(r_22) == AT_LIST) && ((ATermList) r_22 != ATempty)))
              {
                s_22 = ATgetFirst((ATermList) r_22);
                t_22 = (ATerm) ATgetNext((ATermList) r_22);
                {
                  if(((p_22 != NULL) && (p_22 != s_22)))
                    _fail(s_22);
                  else
                    p_22 = s_22;
                  {
                    if(((n_22 != NULL) && (n_22 != t_22)))
                      _fail(t_22);
                    else
                      n_22 = t_22;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(o_22), term_y_21, not_null(n_22));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(p_22);
                          {
                            ATerm c_6 (ATerm t)
                            {
                              ATerm u_22 = NULL;
                              u_22 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(o_22), not_null(u_22));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, c_6);
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
  t = m_24;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm a_23 = NULL;
  a_23 = t;
  t = SSL_remove(not_null(a_23));
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm l_72 (ATerm))
{
  ATerm f_23 = NULL;
  ATerm p_24;
  p_24 = t;
  {
    ATerm g_23 = NULL;
    ATerm h_23 = NULL;
    t = l_72(t);
    {
      g_23 = t;
      {
        if(((f_23 != NULL) && (f_23 != g_23)))
          _fail(g_23);
        else
          f_23 = g_23;
        {
          ATerm i_23 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_23), term_y_21);
          {
            ATerm q_24 = t;
            int r_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(r_24);
              }
            else
              {
                t = q_24;
                t = (ATerm) ATempty;
              }
            {
              i_23 = t;
              if(((h_23 != NULL) && (h_23 != i_23)))
                _fail(i_23);
              else
                h_23 = i_23;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(f_23), term_y_21, (ATerm) ATinsert(CheckATermList(not_null(h_23)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = p_24;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm s_62 (ATerm))
{
  ATerm n_23 = NULL,o_23 = NULL;
  ATerm d_6 (ATerm t)
  {
    t = term_c_22;
    return(t);
  }
  t = begin_scope_1(t, d_6);
  {
    t = s_62(t);
    {
      ATerm w_24;
      w_24 = t;
      {
        ATerm p_23 = NULL,q_23 = NULL,r_23 = NULL;
        ATerm x_24 = t;
        int y_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_z_24;
            t = table_get_0(t);
            LocalPopChoice(y_24);
          }
        else
          {
            t = x_24;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          p_23 = t;
          m_23 :
          if(((ATgetType(p_23) == AT_LIST) && ((ATermList) p_23 != ATempty)))
            {
              q_23 = ATgetFirst((ATermList) p_23);
              r_23 = (ATerm) ATgetNext((ATermList) p_23);
              {
                if(((o_23 != NULL) && (o_23 != q_23)))
                  _fail(q_23);
                else
                  o_23 = q_23;
                {
                  if(((n_23 != NULL) && (n_23 != r_23)))
                    _fail(r_23);
                  else
                    n_23 = r_23;
                  {
                    t = not_null(o_23);
                    {
                      ATerm e_6 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, e_6);
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
      t = w_24;
      {
        ATerm f_6 (ATerm t)
        {
          t = term_c_22;
          return(t);
        }
        t = end_scope_1(t, f_6);
      }
    }
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm t_62 (ATerm))
{
  ATerm g_6 (ATerm t)
  {
    ATerm a_25 = t;
    int b_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_23 = NULL;
        ATerm v_23 = NULL;
        t = term_d_22;
        {
          t = get_config_0(t);
          {
            v_23 = t;
            if(((u_23 != NULL) && (u_23 != v_23)))
              _fail(v_23);
            else
              u_23 = v_23;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(u_23));
        LocalPopChoice(b_25);
      }
    else
      {
        t = a_25;
        t = term_r_21;
      }
    {
      t = t_62(t);
      {
        ATerm h_6 (ATerm t)
        {
          ATerm c_25 = t;
          int d_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_n_16;
              t = get_config_0(t);
              LocalPopChoice(d_25);
            }
          else
            {
              t = c_25;
              t = term_a_24;
            }
          return(t);
        }
        t = rename_to_1(t, h_6);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, g_6);
  return(t);
}
ATerm compile_0 (ATerm t)
{
  ATerm l_6 (ATerm t)
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
  t = xtc_io_1(t, l_6);
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm i_68 (ATerm))
{
  ATerm u_6 (ATerm t)
  {
    ATerm e_25;
    e_25 = t;
    {
      ATerm y_23 = NULL;
      ATerm z_23 = NULL;
      t = term_e_16;
      {
        t = get_config_0(t);
        {
          z_23 = t;
          if(((y_23 != NULL) && (y_23 != z_23)))
            _fail(z_23);
          else
            y_23 = z_23;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_23), term_k_21);
        t = geq_0(t);
      }
    }
    t = e_25;
    t = i_68(t);
    return(t);
  }
  t = try_1(t, u_6);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm c_24 = NULL;
  c_24 = t;
  t = SSL_TicksToSeconds(not_null(c_24));
  return(t);
}
ATerm self_children_sys_time_0 (ATerm t)
{
  ATerm h_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL;
  h_24 = t;
  g_24 :
  if(match_cons(h_24, sym__4))
    {
      i_24 = ATgetArgument(h_24, 0);
      j_24 = ATgetArgument(h_24, 1);
      k_24 = ATgetArgument(h_24, 2);
      l_24 = ATgetArgument(h_24, 3);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_24), not_null(l_24));
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
  ATerm t_24 = NULL,u_24 = NULL,v_24 = NULL;
  t_24 = t;
  s_24 :
  if(match_cons(t_24, sym__2))
    {
      u_24 = ATgetArgument(t_24, 0);
      v_24 = ATgetArgument(t_24, 1);
      {
        ATerm f_25 = t;
        int g_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(u_24), not_null(v_24));
            LocalPopChoice(g_25);
          }
        else
          {
            t = f_25;
            t = SSL_addr(not_null(u_24), not_null(v_24));
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
  ATerm k_25 = NULL,v_25 = NULL,w_25 = NULL,c_26 = NULL,d_26 = NULL;
  k_25 = t;
  j_25 :
  if(match_cons(k_25, sym__4))
    {
      v_25 = ATgetArgument(k_25, 0);
      w_25 = ATgetArgument(k_25, 1);
      c_26 = ATgetArgument(k_25, 2);
      d_26 = ATgetArgument(k_25, 3);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_25), not_null(c_26));
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
  ATerm l_26 = NULL,m_26 = NULL,n_26 = NULL;
  l_26 = t;
  k_26 :
  if(match_cons(l_26, sym__2))
    {
      m_26 = ATgetArgument(l_26, 0);
      n_26 = ATgetArgument(l_26, 1);
      {
        ATerm h_25 = t;
        int i_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(m_26), not_null(n_26));
            LocalPopChoice(i_25);
          }
        else
          {
            t = h_25;
            t = SSL_subtr(not_null(m_26), not_null(n_26));
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
  ATerm d_27 = NULL,e_27 = NULL,f_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL,m_27 = NULL,n_27 = NULL,o_27 = NULL,p_27 = NULL;
  d_27 = t;
  a_27 :
  if(match_cons(d_27, sym__2))
    {
      e_27 = ATgetArgument(d_27, 0);
      j_27 = ATgetArgument(d_27, 1);
      b_27 :
      if(match_cons(e_27, sym__4))
        {
          f_27 = ATgetArgument(e_27, 0);
          g_27 = ATgetArgument(e_27, 1);
          h_27 = ATgetArgument(e_27, 2);
          i_27 = ATgetArgument(e_27, 3);
          c_27 :
          if(match_cons(j_27, sym__4))
            {
              m_27 = ATgetArgument(j_27, 0);
              n_27 = ATgetArgument(j_27, 1);
              o_27 = ATgetArgument(j_27, 2);
              p_27 = ATgetArgument(j_27, 3);
              {
                ATerm y_27 = NULL,a_28 = NULL,c_28 = NULL,e_28 = NULL;
                ATerm l_25;
                l_25 = t;
                {
                  ATerm z_27 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(f_27), not_null(m_27));
                  {
                    t = subt_0(t);
                    {
                      z_27 = t;
                      if(((y_27 != NULL) && (y_27 != z_27)))
                        _fail(z_27);
                      else
                        y_27 = z_27;
                    }
                  }
                }
                t = l_25;
                {
                  ATerm m_25;
                  m_25 = t;
                  {
                    ATerm b_28 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(g_27), not_null(n_27));
                    {
                      t = subt_0(t);
                      {
                        b_28 = t;
                        if(((a_28 != NULL) && (a_28 != b_28)))
                          _fail(b_28);
                        else
                          a_28 = b_28;
                      }
                    }
                  }
                  t = m_25;
                  {
                    ATerm n_25;
                    n_25 = t;
                    {
                      ATerm d_28 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(h_27), not_null(o_27));
                      {
                        t = subt_0(t);
                        {
                          d_28 = t;
                          if(((c_28 != NULL) && (c_28 != d_28)))
                            _fail(d_28);
                          else
                            c_28 = d_28;
                        }
                      }
                    }
                    t = n_25;
                    {
                      ATerm f_28 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(i_27), not_null(p_27));
                      {
                        t = subt_0(t);
                        {
                          f_28 = t;
                          if(((e_28 != NULL) && (e_28 != f_28)))
                            _fail(f_28);
                          else
                            e_28 = f_28;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym__4, not_null(y_27), not_null(a_28), not_null(c_28), not_null(e_28));
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
ATerm profile_p__2 (ATerm t, ATerm o_71 (ATerm), ATerm p_71 (ATerm))
{
  ATerm w_28 = NULL;
  ATerm o_25;
  o_25 = t;
  {
    ATerm z_28 = NULL;
    t = times_0(t);
    {
      z_28 = t;
      if(((w_28 != NULL) && (w_28 != z_28)))
        _fail(z_28);
      else
        w_28 = z_28;
    }
  }
  t = o_25;
  {
    t = p_71(t);
    {
      ATerm p_25;
      p_25 = t;
      {
        ATerm a_29 = NULL,g_29 = NULL,k_29 = NULL;
        ATerm f_29 = NULL;
        t = times_0(t);
        {
          f_29 = t;
          if(((a_29 != NULL) && (a_29 != f_29)))
            _fail(f_29);
          else
            a_29 = f_29;
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_29), not_null(w_28));
          {
            t = diff_times_0(t);
            {
              ATerm q_25;
              q_25 = t;
              {
                ATerm j_29 = NULL;
                t = self_children_user_time_0(t);
                {
                  t = ticks_to_seconds_0(t);
                  {
                    j_29 = t;
                    if(((g_29 != NULL) && (g_29 != j_29)))
                      _fail(j_29);
                    else
                      g_29 = j_29;
                  }
                }
              }
              t = q_25;
              {
                ATerm l_29 = NULL;
                t = self_children_sys_time_0(t);
                {
                  t = ticks_to_seconds_0(t);
                  {
                    l_29 = t;
                    if(((k_29 != NULL) && (k_29 != l_29)))
                      _fail(l_29);
                    else
                      k_29 = l_29;
                  }
                }
                {
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(k_29)), term_s_25), not_null(g_29)), term_r_25);
                  t = o_71(t);
                }
              }
            }
          }
        }
      }
      t = p_25;
    }
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm t_71 (ATerm))
{
  ATerm t_25;
  t_25 = t;
  {
    ATerm f_30 = NULL,h_30 = NULL;
    ATerm u_25;
    u_25 = t;
    {
      ATerm g_30 = NULL;
      t = t_71(t);
      {
        g_30 = t;
        if(((f_30 != NULL) && (f_30 != g_30)))
          _fail(g_30);
        else
          f_30 = g_30;
      }
    }
    t = u_25;
    {
      ATerm i_30 = NULL;
      i_30 = t;
      if(((h_30 != NULL) && (h_30 != i_30)))
        _fail(i_30);
      else
        h_30 = i_30;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_30)), not_null(f_30)));
        t = printnl_0(t);
      }
    }
  }
  t = t_25;
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
ATerm _2 (ATerm t, ATerm x_50 (ATerm), ATerm y_50 (ATerm))
{
  ATerm i_31 = NULL,j_31 = NULL,k_31 = NULL;
  i_31 = t;
  h_31 :
  if(match_cons(i_31, sym__2))
    {
      j_31 = ATgetArgument(i_31, 0);
      k_31 = ATgetArgument(i_31, 1);
      {
        ATerm o_31 = NULL,q_31 = NULL;
        ATerm p_31 = NULL;
        t = SSLgetAnnotations(not_null(i_31));
        {
          p_31 = t;
          if(((o_31 != NULL) && (o_31 != p_31)))
            _fail(p_31);
          else
            o_31 = p_31;
        }
        {
          t = not_null(j_31);
          {
            ATerm s_31 = NULL;
            t = x_50(t);
            {
              q_31 = t;
              {
                t = not_null(k_31);
                {
                  ATerm u_31 = NULL;
                  t = y_50(t);
                  {
                    s_31 = t;
                    {
                      ATerm v_31 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(q_31), not_null(s_31)), not_null(o_31));
                      {
                        v_31 = t;
                        if(((u_31 != NULL) && (u_31 != v_31)))
                          _fail(v_31);
                        else
                          u_31 = v_31;
                      }
                      t = not_null(u_31);
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
    t = conc_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm c_32 = NULL;
  c_32 = t;
  t = SSL_is_string(not_null(c_32));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm x_25 = t;
  int y_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(y_25);
    }
  else
    {
      t = x_25;
      {
        ATerm z_25 = t;
        int a_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_6 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, v_6);
            LocalPopChoice(a_26);
          }
        else
          {
            t = z_25;
            {
              ATerm v_32 = NULL,y_32 = NULL,z_32 = NULL;
              v_32 = t;
              u_32 :
              if(match_cons(v_32, sym_Path_1))
                {
                  y_32 = ATgetArgument(v_32, 0);
                  t = not_null(y_32);
                }
              else
                {
                  if(match_cons(v_32, sym_Var_1))
                    {
                      y_32 = ATgetArgument(v_32, 0);
                      {
                        t = not_null(y_32);
                        {
                          ATerm b_26 = t;
                          int e_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(e_26);
                            }
                          else
                            {
                              t = b_26;
                              {
                                ATerm w_6 (ATerm t)
                                {
                                  t = term_f_26;
                                  return(t);
                                }
                                t = debug_1(t, w_6);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(v_32, sym_Prefix_2))
                        {
                          y_32 = ATgetArgument(v_32, 0);
                          z_32 = ATgetArgument(v_32, 1);
                          {
                            ATerm h_33 = NULL,j_33 = NULL;
                            ATerm g_26;
                            g_26 = t;
                            {
                              ATerm i_33 = NULL;
                              t = not_null(y_32);
                              {
                                t = eval_config_0(t);
                                {
                                  i_33 = t;
                                  if(((h_33 != NULL) && (h_33 != i_33)))
                                    _fail(i_33);
                                  else
                                    h_33 = i_33;
                                }
                              }
                            }
                            t = g_26;
                            {
                              ATerm k_33 = NULL;
                              t = not_null(z_32);
                              {
                                t = eval_config_0(t);
                                {
                                  k_33 = t;
                                  if(((j_33 != NULL) && (j_33 != k_33)))
                                    _fail(k_33);
                                  else
                                    j_33 = k_33;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(h_33), not_null(j_33));
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
  ATerm c_34 = NULL;
  c_34 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_h_26, not_null(c_34));
    {
      t = table_get_0(t);
      {
        ATerm x_6 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm i_26;
            i_26 = t;
            {
              ATerm e_34 = NULL;
              ATerm f_34 = NULL;
              f_34 = t;
              if(((e_34 != NULL) && (e_34 != f_34)))
                _fail(f_34);
              else
                e_34 = f_34;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_h_26, not_null(c_34), not_null(e_34));
                t = table_put_0(t);
              }
            }
            t = i_26;
          }
          return(t);
        }
        t = try_1(t, x_6);
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
  ATerm j_26;
  j_26 = t;
  {
    t = error_0(t);
    {
      t = term_k_21;
      t = exit_0(t);
    }
  }
  t = j_26;
  return(t);
}
ATerm sc_version_0 (ATerm t)
{
  ATerm o_26;
  o_26 = t;
  {
    ATerm l_34 = NULL;
    ATerm o_34 = NULL;
    t = term_p_26;
    {
      t = get_config_0(t);
      {
        o_34 = t;
        if(((l_34 != NULL) && (l_34 != o_34)))
          _fail(o_34);
        else
          l_34 = o_34;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_24, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_26), term_w_26), term_v_26), term_u_26), term_t_26), term_s_26), term_r_26), not_null(l_34)), term_q_26));
      t = printnl_0(t);
    }
  }
  t = o_26;
  return(t);
}
ATerm try_1 (ATerm t, ATerm e_90 (ATerm))
{
  ATerm y_26 = t;
  int z_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_90(t);
      LocalPopChoice(z_26);
    }
  else
    {
      t = y_26;
      {
      }
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm s_34 = NULL,t_34 = NULL,u_34 = NULL;
  s_34 = t;
  r_34 :
  if(match_cons(s_34, sym__2))
    {
      t_34 = ATgetArgument(s_34, 0);
      u_34 = ATgetArgument(s_34, 1);
      t = SSL_copy(not_null(t_34), not_null(u_34));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm z_34 = NULL;
  z_34 = t;
  t = SSL_table_keys(not_null(z_34));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm f_35 = NULL;
  f_35 = t;
  {
    t = table_keys_0(t);
    {
      ATerm y_6 (ATerm t)
      {
        ATerm j_35 = NULL;
        ATerm l_35 = NULL;
        j_35 = t;
        {
          ATerm n_35 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_35), not_null(j_35));
          {
            t = table_get_0(t);
            {
              n_35 = t;
              if(((l_35 != NULL) && (l_35 != n_35)))
                _fail(n_35);
              else
                l_35 = n_35;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_35), not_null(l_35));
        }
        return(t);
      }
      t = map_1(t, y_6);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm m_68 (ATerm))
{
  ATerm z_6 (ATerm t)
  {
    ATerm k_27;
    k_27 = t;
    {
      ATerm u_35 = NULL;
      ATerm v_35 = NULL;
      t = term_e_16;
      {
        t = get_config_0(t);
        {
          v_35 = t;
          if(((u_35 != NULL) && (u_35 != v_35)))
            _fail(v_35);
          else
            u_35 = v_35;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_35), term_l_27);
        t = geq_0(t);
      }
    }
    t = k_27;
    t = m_68(t);
    return(t);
  }
  t = try_1(t, z_6);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm q_27;
  q_27 = t;
  {
    ATerm y_35 = NULL;
    ATerm z_35 = NULL;
    z_35 = t;
    if(((y_35 != NULL) && (y_35 != z_35)))
      _fail(z_35);
    else
      y_35 = z_35;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_16, not_null(y_35));
      t = printnl_0(t);
    }
  }
  t = q_27;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm f_36 = NULL;
  ATerm h_36 = NULL,i_36 = NULL;
  f_36 = t;
  {
    ATerm j_36 = NULL,k_36 = NULL,l_36 = NULL,m_36 = NULL,n_36 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_r_27, (ATerm) ATmakeAppl(sym_Tool_1, not_null(f_36)));
    {
      t = table_get_0(t);
      {
        j_36 = t;
        d_36 :
        if(((ATgetType(j_36) == AT_LIST) && ((ATermList) j_36 != ATempty)))
          {
            k_36 = ATgetFirst((ATermList) j_36);
            n_36 = (ATerm) ATgetNext((ATermList) j_36);
            e_36 :
            if(match_cons(k_36, sym__2))
              {
                l_36 = ATgetArgument(k_36, 0);
                m_36 = ATgetArgument(k_36, 1);
                {
                  if(((h_36 != NULL) && (h_36 != l_36)))
                    _fail(l_36);
                  else
                    h_36 = l_36;
                  if(((i_36 != NULL) && (i_36 != m_36)))
                    _fail(m_36);
                  else
                    i_36 = m_36;
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
    t = not_null(i_36);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm u_36 = NULL,v_36 = NULL,w_36 = NULL;
  u_36 = t;
  t_36 :
  if(match_cons(u_36, sym__2))
    {
      v_36 = ATgetArgument(u_36, 0);
      w_36 = ATgetArgument(u_36, 1);
      {
        ATerm z_36 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_r_27, (ATerm) ATmakeAppl(sym_Tool_1, not_null(v_36)));
        {
          t = table_get_0(t);
          {
            ATerm c_7 (ATerm t)
            {
              ATerm a_37 = NULL,b_37 = NULL,c_37 = NULL;
              a_37 = t;
              s_36 :
              if(match_cons(a_37, sym__2))
                {
                  b_37 = ATgetArgument(a_37, 0);
                  c_37 = ATgetArgument(a_37, 1);
                  {
                    if(((w_36 != NULL) && (w_36 != b_37)))
                      _fail(b_37);
                    else
                      w_36 = b_37;
                    if(((z_36 != NULL) && (z_36 != c_37)))
                      _fail(c_37);
                    else
                      z_36 = c_37;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, c_7);
          }
        }
        t = not_null(z_36);
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
  ATerm d_7 (ATerm t)
  {
    t = term_t_27;
    {
      t = table_get_0(t);
      {
        ATerm g_7 (ATerm t)
        {
          t = try_1(t, xtc_read_0);
          return(t);
        }
        t = map_1(t, g_7);
      }
    }
    return(t);
  }
  t = try_1(t, d_7);
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm l_68 (ATerm))
{
  ATerm h_7 (ATerm t)
  {
    ATerm u_27;
    u_27 = t;
    {
      ATerm j_37 = NULL;
      ATerm k_37 = NULL;
      t = term_e_16;
      {
        t = get_config_0(t);
        {
          k_37 = t;
          if(((j_37 != NULL) && (j_37 != k_37)))
            _fail(k_37);
          else
            j_37 = k_37;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_37), term_v_27);
        t = geq_0(t);
      }
    }
    t = u_27;
    t = l_68(t);
    return(t);
  }
  t = try_1(t, h_7);
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm o_37 = NULL,p_37 = NULL,q_37 = NULL;
  o_37 = t;
  n_37 :
  if(match_cons(o_37, sym__2))
    {
      p_37 = ATgetArgument(o_37, 0);
      q_37 = ATgetArgument(o_37, 1);
      {
        ATerm w_27;
        w_27 = t;
        {
          ATerm x_27 = t;
          int g_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(p_37), not_null(q_37));
              LocalPopChoice(g_28);
            }
          else
            {
              t = x_27;
              t = SSL_gtr(not_null(p_37), not_null(q_37));
            }
        }
        t = w_27;
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
  ATerm w_37 = NULL;
  ATerm h_28 = t;
  int i_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_37 = NULL,y_37 = NULL,z_37 = NULL;
      x_37 = t;
      v_37 :
      if(match_cons(x_37, sym__2))
        {
          y_37 = ATgetArgument(x_37, 0);
          z_37 = ATgetArgument(x_37, 1);
          {
            if(((w_37 != NULL) && (w_37 != y_37)))
              _fail(y_37);
            else
              w_37 = y_37;
            if(((w_37 != NULL) && (w_37 != z_37)))
              _fail(z_37);
            else
              w_37 = z_37;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(i_28);
    }
  else
    {
      t = h_28;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm n_68 (ATerm))
{
  ATerm i_7 (ATerm t)
  {
    ATerm j_28;
    j_28 = t;
    {
      ATerm c_38 = NULL;
      ATerm d_38 = NULL;
      t = term_e_16;
      {
        t = get_config_0(t);
        {
          d_38 = t;
          if(((c_38 != NULL) && (c_38 != d_38)))
            _fail(d_38);
          else
            c_38 = d_38;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_38), term_k_28);
        t = geq_0(t);
      }
    }
    t = j_28;
    t = n_68(t);
    return(t);
  }
  t = try_1(t, i_7);
  return(t);
}
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm h_38 = NULL,i_38 = NULL,j_38 = NULL;
  h_38 = t;
  g_38 :
  if(match_cons(h_38, sym__2))
    {
      i_38 = ATgetArgument(h_38, 0);
      j_38 = ATgetArgument(h_38, 1);
      if(((i_38 != NULL) && (i_38 != j_38)))
        _fail(j_38);
      else
        i_38 = j_38;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm b_77 (ATerm), ATerm c_77 (ATerm))
{
  ATerm p_38 = NULL,q_38 = NULL,r_38 = NULL;
  p_38 = t;
  o_38 :
  if(((ATgetType(p_38) == AT_LIST) && ((ATermList) p_38 != ATempty)))
    {
      q_38 = ATgetFirst((ATermList) p_38);
      r_38 = (ATerm) ATgetNext((ATermList) p_38);
      {
        t = c_77(t);
        {
          ATerm j_7 (ATerm t)
          {
            ATerm u_38 = NULL;
            u_38 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(q_38), not_null(u_38));
              t = b_77(t);
            }
            return(t);
          }
          t = fetch_1(t, j_7);
        }
        t = not_null(r_38);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm d_77 (ATerm))
{
  ATerm a_39 = NULL,b_39 = NULL,c_39 = NULL;
  a_39 = t;
  z_38 :
  if(match_cons(a_39, sym__2))
    {
      b_39 = ATgetArgument(a_39, 0);
      c_39 = ATgetArgument(a_39, 1);
      {
        t = not_null(b_39);
        {
          ATerm g_39 (ATerm t)
          {
            ATerm l_28 = t;
            int m_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(c_39);
                LocalPopChoice(m_28);
              }
            else
              {
                t = l_28;
                {
                  ATerm n_28 = t;
                  int o_28 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm q_7 (ATerm t)
                      {
                        t = not_null(c_39);
                        return(t);
                      }
                      t = HdMember_p__2(t, d_77, q_7);
                      t = g_39(t);
                      LocalPopChoice(o_28);
                    }
                  else
                    {
                      t = n_28;
                      t = Cons_2(t, _id, g_39);
                    }
                }
              }
            return(t);
          }
          t = g_39(t);
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
  ATerm l_39 = NULL,m_39 = NULL,n_39 = NULL,o_39 = NULL;
  l_39 = t;
  k_39 :
  if(match_cons(l_39, sym__3))
    {
      m_39 = ATgetArgument(l_39, 0);
      n_39 = ATgetArgument(l_39, 1);
      o_39 = ATgetArgument(l_39, 2);
      {
        ATerm p_28;
        p_28 = t;
        {
          ATerm s_39 = NULL;
          ATerm t_39 = NULL,v_39 = NULL;
          ATerm u_39 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_39), not_null(n_39));
          {
            ATerm q_28 = t;
            int r_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                LocalPopChoice(r_28);
              }
            else
              {
                t = q_28;
                t = (ATerm) ATempty;
              }
            {
              u_39 = t;
              if(((t_39 != NULL) && (t_39 != u_39)))
                _fail(u_39);
              else
                t_39 = u_39;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(t_39), not_null(o_39));
            {
              t = union_0(t);
              {
                v_39 = t;
                if(((s_39 != NULL) && (s_39 != v_39)))
                  _fail(v_39);
                else
                  s_39 = v_39;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(m_39), not_null(n_39), not_null(s_39));
            t = set_0(t);
          }
        }
        t = p_28;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm w_65 (ATerm))
{
  ATerm d_40 = NULL,e_40 = NULL,f_40 = NULL;
  d_40 = t;
  c_40 :
  if(match_cons(d_40, sym__2))
    {
      e_40 = ATgetArgument(d_40, 0);
      f_40 = ATgetArgument(d_40, 1);
      {
        t = not_null(f_40);
        {
          ATerm r_7 (ATerm t)
          {
            ATerm i_40 = NULL,j_40 = NULL,k_40 = NULL;
            i_40 = t;
            b_40 :
            if(match_cons(i_40, sym__2))
              {
                j_40 = ATgetArgument(i_40, 0);
                k_40 = ATgetArgument(i_40, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(e_40), not_null(j_40), not_null(k_40));
                  t = w_65(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, r_7);
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
  ATerm r_40 = NULL;
  ATerm t_40 = NULL;
  r_40 = t;
  {
    ATerm s_28;
    s_28 = t;
    {
      ATerm u_40 = NULL;
      t = term_t_28;
      {
        u_40 = t;
        if(((t_40 != NULL) && (t_40 != u_40)))
          _fail(u_40);
        else
          t_40 = u_40;
      }
    }
    t = s_28;
    {
      t = SSL_open_file(not_null(r_40), not_null(t_40));
      t = SSL_close_file(not_null(r_40));
    }
  }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm z_40 = NULL;
  ATerm g_41 = NULL;
  z_40 = t;
  {
    ATerm u_28 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_27, (ATerm) ATmakeAppl(sym_Imported_1, not_null(z_40)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_28;
      }
    {
      ATerm v_28;
      v_28 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_r_27, term_x_28, (ATerm) ATinsert(ATempty, not_null(z_40)));
        t = table_put_0(t);
      }
      t = v_28;
      {
        ATerm s_7 (ATerm t)
        {
          ATerm t_7 (ATerm t)
          {
            t = term_y_28;
            return(t);
          }
          t = debug_1(t, t_7);
          return(t);
        }
        t = if_verbose4_1(t, s_7);
        {
          ATerm b_29 = t;
          int c_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(c_29);
            }
          else
            {
              t = b_29;
              t = (ATerm) ATempty;
            }
          {
            ATerm w_7 (ATerm t)
            {
              ATerm x_7 (ATerm t)
              {
                t = term_d_29;
                return(t);
              }
              t = say_1(t, x_7);
              return(t);
            }
            t = if_verbose6_1(t, w_7);
            {
              ATerm h_41 = NULL;
              h_41 = t;
              if(((g_41 != NULL) && (g_41 != h_41)))
                _fail(h_41);
              else
                g_41 = h_41;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_r_27, not_null(g_41));
                {
                  t = table_putlist_1(t, table_append_0);
                  {
                    ATerm a_8 (ATerm t)
                    {
                      ATerm b_8 (ATerm t)
                      {
                        t = term_e_29;
                        return(t);
                      }
                      t = say_1(t, b_8);
                      return(t);
                    }
                    t = if_verbose6_1(t, a_8);
                    {
                      t = (ATerm) ATmakeAppl(sym__3, term_r_27, (ATerm)ATmakeAppl(sym_Imported_1, not_null(z_40)), (ATerm) ATempty);
                      {
                        t = table_put_0(t);
                        {
                          ATerm e_8 (ATerm t)
                          {
                            ATerm f_8 (ATerm t)
                            {
                              t = term_d_29;
                              return(t);
                            }
                            t = say_1(t, f_8);
                            return(t);
                          }
                          t = if_verbose4_1(t, e_8);
                        }
                      }
                    }
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
  ATerm l_41 = NULL;
  l_41 = t;
  t = SSL_getenv(not_null(l_41));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm h_29 = t;
  int i_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_29;
      t = get_config_0(t);
      LocalPopChoice(i_29);
    }
  else
    {
      t = h_29;
      {
        ATerm n_29 = t;
        int o_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_p_29;
            t = getenv_0(t);
            LocalPopChoice(o_29);
          }
        else
          {
            t = n_29;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm i_8 (ATerm t)
  {
    ATerm j_8 (ATerm t)
    {
      t = term_q_29;
      return(t);
    }
    t = debug_1(t, j_8);
    return(t);
  }
  t = if_verbose5_1(t, i_8);
  {
    ATerm r_29;
    r_29 = t;
    {
      ATerm s_29 = t;
      int t_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_u_29;
          t = table_get_0(t);
          LocalPopChoice(t_29);
        }
      else
        {
          t = s_29;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = r_29;
    {
      ATerm m_8 (ATerm t)
      {
        ATerm n_8 (ATerm t)
        {
          t = term_v_29;
          return(t);
        }
        t = debug_1(t, n_8);
        return(t);
      }
      t = if_verbose5_1(t, m_8);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm w_29 = t;
  int x_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_8 (ATerm t)
      {
        ATerm r_8 (ATerm t)
        {
          t = term_y_29;
          return(t);
        }
        t = debug_1(t, r_8);
        return(t);
      }
      t = if_verbose5_1(t, q_8);
      {
        t = xtc_load_0(t);
        {
          ATerm z_29 = t;
          int a_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(a_30);
            }
          else
            {
              t = z_29;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm u_8 (ATerm t)
            {
              ATerm v_8 (ATerm t)
              {
                t = term_y_29;
                return(t);
              }
              t = debug_1(t, v_8);
              return(t);
            }
            t = if_verbose5_1(t, u_8);
          }
        }
      }
      LocalPopChoice(x_29);
    }
  else
    {
      t = w_29;
      {
        ATerm p_41 = NULL;
        ATerm q_41 = NULL;
        q_41 = t;
        if(((p_41 != NULL) && (p_41 != q_41)))
          _fail(q_41);
        else
          p_41 = q_41;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_30), not_null(p_41)), term_b_30);
          {
            t = error_0(t);
            {
              ATerm y_8 (ATerm t)
              {
                t = term_r_27;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm z_8 (ATerm t)
                    {
                      t = term_d_30;
                      return(t);
                    }
                    t = debug_1(t, z_8);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, y_8);
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
  ATerm t_41 = NULL;
  t_41 = t;
  t = SSL_string_to_int(not_null(t_41));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm b_42 = NULL,c_42 = NULL,d_42 = NULL,g_42 = NULL,h_42 = NULL;
  b_42 = t;
  z_41 :
  if(match_string(b_42, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(b_42) == AT_LIST) && ((ATermList) b_42 != ATempty)))
        {
          c_42 = ATgetFirst((ATermList) b_42);
          d_42 = (ATerm) ATgetNext((ATermList) b_42);
          a_42 :
          if(((ATgetType(d_42) == AT_LIST) && ((ATermList) d_42 != ATempty)))
            {
              g_42 = ATgetFirst((ATermList) d_42);
              h_42 = (ATerm) ATgetNext((ATermList) d_42);
              {
                ATerm l_42 = NULL;
                ATerm e_30;
                e_30 = t;
                {
                  t = not_null(c_42);
                  t = l_0(t);
                }
                t = e_30;
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
  ATerm u_42 = NULL,v_42 = NULL,w_42 = NULL;
  u_42 = t;
  t_42 :
  if(match_cons(u_42, sym__2))
    {
      v_42 = ATgetArgument(u_42, 0);
      w_42 = ATgetArgument(u_42, 1);
      {
        ATerm z_42 = NULL;
        ATerm a_43 = NULL,c_43 = NULL;
        ATerm b_43 = NULL;
        t = not_null(v_42);
        {
          ATerm j_30 = t;
          int k_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(k_30);
            }
          else
            {
              t = j_30;
              t = (ATerm) ATempty;
            }
          {
            b_43 = t;
            if(((a_43 != NULL) && (a_43 != b_43)))
              _fail(b_43);
            else
              a_43 = b_43;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_42), not_null(a_43));
          {
            t = conc_0(t);
            {
              c_43 = t;
              if(((z_42 != NULL) && (z_42 != c_43)))
                _fail(c_43);
              else
                z_42 = c_43;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_h_26, not_null(v_42), not_null(z_42));
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
  ATerm i_43 = NULL,j_43 = NULL;
  ATerm l_30;
  l_30 = t;
  {
    ATerm k_43 = NULL,l_43 = NULL,m_43 = NULL;
    k_43 = t;
    h_43 :
    if(match_cons(k_43, sym__2))
      {
        l_43 = ATgetArgument(k_43, 0);
        m_43 = ATgetArgument(k_43, 1);
        {
          if(((i_43 != NULL) && (i_43 != l_43)))
            _fail(l_43);
          else
            i_43 = l_43;
          {
            if(((j_43 != NULL) && (j_43 != m_43)))
              _fail(m_43);
            else
              j_43 = m_43;
            t = SSL_table_remove(not_null(i_43), not_null(j_43));
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = l_30;
  return(t);
}
ATerm toggle_config_0 (ATerm t)
{
  ATerm v_43 = NULL,x_43 = NULL,y_43 = NULL;
  v_43 = t;
  u_43 :
  if(match_cons(v_43, sym__2))
    {
      x_43 = ATgetArgument(v_43, 0);
      y_43 = ATgetArgument(v_43, 1);
      {
        ATerm n_30 = t;
        int o_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = not_null(x_43);
            {
              t = get_config_0(t);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_h_26, not_null(x_43));
                t = table_remove_0(t);
              }
            }
            LocalPopChoice(o_30);
          }
        else
          {
            t = n_30;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(x_43), not_null(y_43));
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
  ATerm p_30 = t;
  int r_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(r_30);
    }
  else
    {
      t = p_30;
      {
        ATerm e_44 = NULL,f_44 = NULL,g_44 = NULL;
        e_44 = t;
        d_44 :
        if(((ATgetType(e_44) == AT_LIST) && ((ATermList) e_44 != ATempty)))
          {
            f_44 = ATgetFirst((ATermList) e_44);
            g_44 = (ATerm) ATgetNext((ATermList) e_44);
            {
              t = not_null(f_44);
              {
                ATerm c_9 (ATerm t)
                {
                  t = not_null(g_44);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, c_9);
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
  ATerm q_44 = NULL;
  ATerm s_44 = NULL;
  q_44 = t;
  {
    ATerm t_44 = NULL;
    ATerm v_44 = NULL,w_44 = NULL,x_44 = NULL;
    t = not_null(q_44);
    {
      t_44 = t;
      {
        t = SSL_explode_term(not_null(t_44));
        {
          v_44 = t;
          o_44 :
          if(match_cons(v_44, sym__2))
            {
              w_44 = ATgetArgument(v_44, 0);
              x_44 = ATgetArgument(v_44, 1);
              p_44 :
              if(match_string(w_44, ""))
                {
                  if(((s_44 != NULL) && (s_44 != x_44)))
                    _fail(x_44);
                  else
                    s_44 = x_44;
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
      t = not_null(s_44);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm z_81 (ATerm))
{
  ATerm b_45 (ATerm t)
  {
    ATerm s_30 = t;
    int t_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, b_45);
        LocalPopChoice(t_30);
      }
    else
      {
        t = s_30;
        {
          t = Nil_0(t);
          t = z_81(t);
        }
      }
    return(t);
  }
  t = b_45(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm e_45 = NULL,f_45 = NULL,g_45 = NULL;
  e_45 = t;
  d_45 :
  if(match_cons(e_45, sym__2))
    {
      f_45 = ATgetArgument(e_45, 0);
      g_45 = ATgetArgument(e_45, 1);
      {
        t = not_null(f_45);
        {
          ATerm d_9 (ATerm t)
          {
            t = not_null(g_45);
            return(t);
          }
          t = at_end_1(t, d_9);
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
  ATerm u_30 = t;
  int v_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(v_30);
    }
  else
    {
      t = u_30;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm post_extend_config_0 (ATerm t)
{
  ATerm o_45 = NULL,p_45 = NULL,q_45 = NULL;
  o_45 = t;
  n_45 :
  if(match_cons(o_45, sym__2))
    {
      p_45 = ATgetArgument(o_45, 0);
      q_45 = ATgetArgument(o_45, 1);
      {
        ATerm t_45 = NULL;
        ATerm u_45 = NULL,w_45 = NULL;
        ATerm v_45 = NULL;
        t = not_null(p_45);
        {
          ATerm w_30 = t;
          int x_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(x_30);
            }
          else
            {
              t = w_30;
              t = (ATerm) ATempty;
            }
          {
            v_45 = t;
            if(((u_45 != NULL) && (u_45 != v_45)))
              _fail(v_45);
            else
              u_45 = v_45;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_45), not_null(q_45));
          {
            t = conc_0(t);
            {
              w_45 = t;
              if(((t_45 != NULL) && (t_45 != w_45)))
                _fail(w_45);
              else
                t_45 = w_45;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_h_26, not_null(p_45), not_null(t_45));
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
  ATerm y_30 = t;
  int z_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_9 (ATerm t)
      {
        ATerm d_47 = NULL;
        d_47 = t;
        a_46 :
        if(!(match_string(d_47, "-i")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm h_9 (ATerm t)
      {
        ATerm e_47 = NULL;
        ATerm f_47 = NULL;
        f_47 = t;
        if(((e_47 != NULL) && (e_47 != f_47)))
          _fail(f_47);
        else
          e_47 = f_47;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_d_22, not_null(e_47));
          t = set_config_0(t);
        }
        t = term_c_20;
        return(t);
      }
      ATerm k_9 (ATerm t)
      {
        t = term_a_31;
        return(t);
      }
      t = ArgOption_3(t, g_9, h_9, k_9);
      LocalPopChoice(z_30);
    }
  else
    {
      t = y_30;
      {
        ATerm b_31 = t;
        int c_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_9 (ATerm t)
            {
              ATerm g_47 = NULL;
              g_47 = t;
              c_46 :
              if(!(match_string(g_47, "-o")))
                {
                  if(!(match_string(g_47, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm o_9 (ATerm t)
            {
              ATerm h_47 = NULL;
              ATerm i_47 = NULL;
              i_47 = t;
              if(((h_47 != NULL) && (h_47 != i_47)))
                _fail(i_47);
              else
                h_47 = i_47;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_n_16, not_null(h_47));
                t = set_config_0(t);
              }
              t = term_c_20;
              return(t);
            }
            ATerm p_9 (ATerm t)
            {
              t = term_d_31;
              return(t);
            }
            t = ArgOption_3(t, l_9, o_9, p_9);
            LocalPopChoice(c_31);
          }
        else
          {
            t = b_31;
            {
              ATerm e_31 = t;
              int f_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_9 (ATerm t)
                  {
                    ATerm j_47 = NULL;
                    j_47 = t;
                    e_46 :
                    if(!(match_string(j_47, "-I")))
                      {
                        if(!(match_string(j_47, "--Include")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm t_9 (ATerm t)
                  {
                    ATerm k_47 = NULL;
                    ATerm l_47 = NULL;
                    l_47 = t;
                    if(((k_47 != NULL) && (k_47 != l_47)))
                      _fail(l_47);
                    else
                      k_47 = l_47;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_k_23, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_47)), term_k_23));
                      t = extend_config_0(t);
                    }
                    t = term_c_20;
                    return(t);
                  }
                  ATerm u_9 (ATerm t)
                  {
                    t = term_g_31;
                    return(t);
                  }
                  t = ArgOption_3(t, s_9, t_9, u_9);
                  LocalPopChoice(f_31);
                }
              else
                {
                  t = e_31;
                  {
                    ATerm l_31 = t;
                    int m_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm z_9 (ATerm t)
                        {
                          ATerm m_47 = NULL;
                          m_47 = t;
                          g_46 :
                          if(!(match_string(m_47, "--main")))
                            {
                              if(!(match_string(m_47, "-m")))
                                {
                                  _fail(t);
                                }
                            }
                          return(t);
                        }
                        ATerm b_10 (ATerm t)
                        {
                          ATerm n_47 = NULL;
                          ATerm o_47 = NULL;
                          o_47 = t;
                          if(((n_47 != NULL) && (n_47 != o_47)))
                            _fail(o_47);
                          else
                            n_47 = o_47;
                          {
                            t = (ATerm) ATmakeAppl(sym__2, term_l_20, not_null(n_47));
                            t = set_config_0(t);
                          }
                          t = term_c_20;
                          return(t);
                        }
                        ATerm c_10 (ATerm t)
                        {
                          t = term_n_31;
                          return(t);
                        }
                        t = ArgOption_3(t, z_9, b_10, c_10);
                        LocalPopChoice(m_31);
                      }
                    else
                      {
                        t = l_31;
                        {
                          ATerm r_31 = t;
                          int t_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm d_10 (ATerm t)
                              {
                                ATerm p_47 = NULL;
                                p_47 = t;
                                i_46 :
                                if(!(match_string(p_47, "--C-include")))
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              ATerm g_10 (ATerm t)
                              {
                                ATerm q_47 = NULL;
                                ATerm r_47 = NULL;
                                r_47 = t;
                                if(((q_47 != NULL) && (q_47 != r_47)))
                                  _fail(r_47);
                                else
                                  q_47 = r_47;
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, term_b_18, (ATerm) ATinsert(ATempty, not_null(q_47)));
                                  t = post_extend_config_0(t);
                                }
                                t = term_c_20;
                                return(t);
                              }
                              ATerm h_10 (ATerm t)
                              {
                                t = term_w_31;
                                return(t);
                              }
                              t = ArgOption_3(t, d_10, g_10, h_10);
                              LocalPopChoice(t_31);
                            }
                          else
                            {
                              t = r_31;
                              {
                                ATerm x_31 = t;
                                int y_31 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm i_10 (ATerm t)
                                    {
                                      ATerm s_47 = NULL;
                                      s_47 = t;
                                      k_46 :
                                      if(!(match_string(s_47, "-CI")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm m_10 (ATerm t)
                                    {
                                      ATerm t_47 = NULL;
                                      ATerm u_47 = NULL;
                                      u_47 = t;
                                      if(((t_47 != NULL) && (t_47 != u_47)))
                                        _fail(u_47);
                                      else
                                        t_47 = u_47;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, term_t_16, (ATerm) ATinsert(ATempty, not_null(t_47)));
                                        t = extend_config_0(t);
                                      }
                                      t = term_c_20;
                                      return(t);
                                    }
                                    ATerm p_10 (ATerm t)
                                    {
                                      t = term_z_31;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, i_10, m_10, p_10);
                                    LocalPopChoice(y_31);
                                  }
                                else
                                  {
                                    t = x_31;
                                    {
                                      ATerm a_32 = t;
                                      int b_32 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm q_10 (ATerm t)
                                          {
                                            ATerm v_47 = NULL;
                                            v_47 = t;
                                            m_46 :
                                            if(!(match_string(v_47, "-CL")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm r_10 (ATerm t)
                                          {
                                            ATerm w_47 = NULL;
                                            ATerm x_47 = NULL;
                                            x_47 = t;
                                            if(((w_47 != NULL) && (w_47 != x_47)))
                                              _fail(x_47);
                                            else
                                              w_47 = x_47;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, term_k_16, (ATerm) ATinsert(ATempty, not_null(w_47)));
                                              t = extend_config_0(t);
                                            }
                                            t = term_c_20;
                                            return(t);
                                          }
                                          ATerm u_10 (ATerm t)
                                          {
                                            t = term_d_32;
                                            return(t);
                                          }
                                          t = ArgOption_3(t, q_10, r_10, u_10);
                                          LocalPopChoice(b_32);
                                        }
                                      else
                                        {
                                          t = a_32;
                                          {
                                            ATerm e_32 = t;
                                            int f_32 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm v_10 (ATerm t)
                                                {
                                                  ATerm y_47 = NULL;
                                                  y_47 = t;
                                                  o_46 :
                                                  if(!(match_string(y_47, "-c")))
                                                    {
                                                      _fail(t);
                                                    }
                                                  return(t);
                                                }
                                                ATerm w_10 (ATerm t)
                                                {
                                                  t = term_g_32;
                                                  t = set_config_0(t);
                                                  t = term_c_20;
                                                  return(t);
                                                }
                                                ATerm b_11 (ATerm t)
                                                {
                                                  t = term_h_32;
                                                  return(t);
                                                }
                                                t = Option_3(t, v_10, w_10, b_11);
                                                LocalPopChoice(f_32);
                                              }
                                            else
                                              {
                                                t = e_32;
                                                {
                                                  ATerm i_32 = t;
                                                  int j_32 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm c_11 (ATerm t)
                                                      {
                                                        ATerm z_47 = NULL;
                                                        z_47 = t;
                                                        p_46 :
                                                        if(!(match_string(z_47, "--ast")))
                                                          {
                                                            _fail(t);
                                                          }
                                                        return(t);
                                                      }
                                                      ATerm d_11 (ATerm t)
                                                      {
                                                        t = term_k_32;
                                                        t = set_config_0(t);
                                                        t = term_c_20;
                                                        return(t);
                                                      }
                                                      ATerm e_11 (ATerm t)
                                                      {
                                                        t = term_l_32;
                                                        return(t);
                                                      }
                                                      t = Option_3(t, c_11, d_11, e_11);
                                                      LocalPopChoice(j_32);
                                                    }
                                                  else
                                                    {
                                                      t = i_32;
                                                      {
                                                        ATerm m_32 = t;
                                                        int n_32 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm f_11 (ATerm t)
                                                            {
                                                              ATerm a_48 = NULL;
                                                              a_48 = t;
                                                              q_46 :
                                                              if(!(match_string(a_48, "-F")))
                                                                {
                                                                  _fail(t);
                                                                }
                                                              return(t);
                                                            }
                                                            ATerm i_11 (ATerm t)
                                                            {
                                                              t = term_o_32;
                                                              t = set_config_0(t);
                                                              t = term_c_20;
                                                              return(t);
                                                            }
                                                            ATerm n_11 (ATerm t)
                                                            {
                                                              t = term_p_32;
                                                              return(t);
                                                            }
                                                            t = Option_3(t, f_11, i_11, n_11);
                                                            LocalPopChoice(n_32);
                                                          }
                                                        else
                                                          {
                                                            t = m_32;
                                                            {
                                                              ATerm q_32 = t;
                                                              int r_32 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm o_11 (ATerm t)
                                                                  {
                                                                    ATerm b_48 = NULL;
                                                                    b_48 = t;
                                                                    r_46 :
                                                                    if(!(match_string(b_48, "--keep")))
                                                                      {
                                                                        _fail(t);
                                                                      }
                                                                    return(t);
                                                                  }
                                                                  ATerm p_11 (ATerm t)
                                                                  {
                                                                    ATerm c_48 = NULL;
                                                                    ATerm d_48 = NULL;
                                                                    t = string_to_int_0(t);
                                                                    {
                                                                      d_48 = t;
                                                                      if(((c_48 != NULL) && (c_48 != d_48)))
                                                                        _fail(d_48);
                                                                      else
                                                                        c_48 = d_48;
                                                                    }
                                                                    {
                                                                      t = (ATerm) ATmakeAppl(sym__2, term_e_21, not_null(c_48));
                                                                      t = set_config_0(t);
                                                                    }
                                                                    t = term_c_20;
                                                                    return(t);
                                                                  }
                                                                  ATerm q_11 (ATerm t)
                                                                  {
                                                                    t = term_s_32;
                                                                    return(t);
                                                                  }
                                                                  t = ArgOption_3(t, o_11, p_11, q_11);
                                                                  LocalPopChoice(r_32);
                                                                }
                                                              else
                                                                {
                                                                  t = q_32;
                                                                  {
                                                                    ATerm t_32 = t;
                                                                    int w_32 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm r_11 (ATerm t)
                                                                        {
                                                                          ATerm e_48 = NULL;
                                                                          e_48 = t;
                                                                          t_46 :
                                                                          if(!(match_string(e_48, "--fusion")))
                                                                            {
                                                                              _fail(t);
                                                                            }
                                                                          return(t);
                                                                        }
                                                                        ATerm s_11 (ATerm t)
                                                                        {
                                                                          t = term_x_32;
                                                                          t = toggle_config_0(t);
                                                                          t = term_c_20;
                                                                          return(t);
                                                                        }
                                                                        ATerm t_11 (ATerm t)
                                                                        {
                                                                          t = term_a_33;
                                                                          return(t);
                                                                        }
                                                                        t = Option_3(t, r_11, s_11, t_11);
                                                                        LocalPopChoice(w_32);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = t_32;
                                                                        {
                                                                          ATerm b_33 = t;
                                                                          int c_33 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              ATerm x_11 (ATerm t)
                                                                              {
                                                                                ATerm f_48 = NULL;
                                                                                f_48 = t;
                                                                                u_46 :
                                                                                if(!(match_string(f_48, "--trace-all")))
                                                                                  {
                                                                                    _fail(t);
                                                                                  }
                                                                                return(t);
                                                                              }
                                                                              ATerm a_12 (ATerm t)
                                                                              {
                                                                                t = term_e_33;
                                                                                t = set_config_0(t);
                                                                                t = term_c_20;
                                                                                return(t);
                                                                              }
                                                                              ATerm d_12 (ATerm t)
                                                                              {
                                                                                t = term_f_33;
                                                                                return(t);
                                                                              }
                                                                              t = Option_3(t, x_11, a_12, d_12);
                                                                              LocalPopChoice(c_33);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = b_33;
                                                                              {
                                                                                ATerm g_33 = t;
                                                                                int l_33 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm e_12 (ATerm t)
                                                                                    {
                                                                                      ATerm i_48 = NULL;
                                                                                      i_48 = t;
                                                                                      v_46 :
                                                                                      if(!(match_string(i_48, "-t")))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm f_12 (ATerm t)
                                                                                    {
                                                                                      ATerm j_48 = NULL;
                                                                                      ATerm k_48 = NULL;
                                                                                      k_48 = t;
                                                                                      if(((j_48 != NULL) && (j_48 != k_48)))
                                                                                        _fail(k_48);
                                                                                      else
                                                                                        j_48 = k_48;
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym__2, term_m_33, (ATerm) ATinsert(ATempty, not_null(j_48)));
                                                                                        t = extend_config_0(t);
                                                                                      }
                                                                                      t = term_c_20;
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm g_12 (ATerm t)
                                                                                    {
                                                                                      t = term_n_33;
                                                                                      return(t);
                                                                                    }
                                                                                    t = ArgOption_3(t, e_12, f_12, g_12);
                                                                                    LocalPopChoice(l_33);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = g_33;
                                                                                    {
                                                                                      ATerm o_33 = t;
                                                                                      int p_33 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm h_12 (ATerm t)
                                                                                          {
                                                                                            ATerm l_48 = NULL;
                                                                                            l_48 = t;
                                                                                            x_46 :
                                                                                            if(!(match_string(l_48, "--verbose")))
                                                                                              {
                                                                                                _fail(t);
                                                                                              }
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm i_12 (ATerm t)
                                                                                          {
                                                                                            ATerm m_48 = NULL;
                                                                                            ATerm n_48 = NULL;
                                                                                            t = string_to_int_0(t);
                                                                                            {
                                                                                              n_48 = t;
                                                                                              if(((m_48 != NULL) && (m_48 != n_48)))
                                                                                                _fail(n_48);
                                                                                              else
                                                                                                m_48 = n_48;
                                                                                            }
                                                                                            {
                                                                                              t = (ATerm) ATmakeAppl(sym__2, term_e_16, not_null(m_48));
                                                                                              t = set_config_0(t);
                                                                                            }
                                                                                            t = term_c_20;
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm n_12 (ATerm t)
                                                                                          {
                                                                                            t = term_q_33;
                                                                                            return(t);
                                                                                          }
                                                                                          t = ArgOption_3(t, h_12, i_12, n_12);
                                                                                          LocalPopChoice(p_33);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = o_33;
                                                                                          {
                                                                                            ATerm r_33 = t;
                                                                                            int s_33 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm p_12 (ATerm t)
                                                                                                {
                                                                                                  ATerm o_48 = NULL;
                                                                                                  o_48 = t;
                                                                                                  z_46 :
                                                                                                  if(!(match_string(o_48, "-S")))
                                                                                                    {
                                                                                                      if(!(match_string(o_48, "--silent")))
                                                                                                        {
                                                                                                          _fail(t);
                                                                                                        }
                                                                                                    }
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm q_12 (ATerm t)
                                                                                                {
                                                                                                  t = term_t_33;
                                                                                                  t = set_config_0(t);
                                                                                                  t = term_c_20;
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm r_12 (ATerm t)
                                                                                                {
                                                                                                  t = term_u_33;
                                                                                                  return(t);
                                                                                                }
                                                                                                t = Option_3(t, p_12, q_12, r_12);
                                                                                                LocalPopChoice(s_33);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = r_33;
                                                                                                {
                                                                                                  ATerm v_33 = t;
                                                                                                  int w_33 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      ATerm s_12 (ATerm t)
                                                                                                      {
                                                                                                        ATerm p_48 = NULL;
                                                                                                        p_48 = t;
                                                                                                        a_47 :
                                                                                                        if(!(match_string(p_48, "-h")))
                                                                                                          {
                                                                                                            if(!(match_string(p_48, "--help")))
                                                                                                              {
                                                                                                                _fail(t);
                                                                                                              }
                                                                                                          }
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm x_12 (ATerm t)
                                                                                                      {
                                                                                                        t = term_y_33;
                                                                                                        t = set_config_0(t);
                                                                                                        t = term_c_20;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm y_12 (ATerm t)
                                                                                                      {
                                                                                                        t = term_z_33;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      t = Option_3(t, s_12, x_12, y_12);
                                                                                                      LocalPopChoice(w_33);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = v_33;
                                                                                                      {
                                                                                                        ATerm a_34 = t;
                                                                                                        int b_34 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm z_12 (ATerm t)
                                                                                                            {
                                                                                                              ATerm q_48 = NULL;
                                                                                                              q_48 = t;
                                                                                                              b_47 :
                                                                                                              if(!(match_string(q_48, "--man")))
                                                                                                                {
                                                                                                                  _fail(t);
                                                                                                                }
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm b_13 (ATerm t)
                                                                                                            {
                                                                                                              t = term_g_34;
                                                                                                              t = set_config_0(t);
                                                                                                              t = term_c_20;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm c_13 (ATerm t)
                                                                                                            {
                                                                                                              t = term_h_34;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            t = Option_3(t, z_12, b_13, c_13);
                                                                                                            LocalPopChoice(b_34);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = a_34;
                                                                                                            {
                                                                                                              ATerm d_13 (ATerm t)
                                                                                                              {
                                                                                                                ATerm r_48 = NULL;
                                                                                                                r_48 = t;
                                                                                                                c_47 :
                                                                                                                if(!(match_string(r_48, "-v")))
                                                                                                                  {
                                                                                                                    if(!(match_string(r_48, "--version")))
                                                                                                                      {
                                                                                                                        _fail(t);
                                                                                                                      }
                                                                                                                  }
                                                                                                                return(t);
                                                                                                              }
                                                                                                              ATerm e_13 (ATerm t)
                                                                                                              {
                                                                                                                t = term_j_34;
                                                                                                                t = set_config_0(t);
                                                                                                                t = term_c_20;
                                                                                                                return(t);
                                                                                                              }
                                                                                                              ATerm j_13 (ATerm t)
                                                                                                              {
                                                                                                                t = term_k_34;
                                                                                                                return(t);
                                                                                                              }
                                                                                                              t = Option_3(t, d_13, e_13, j_13);
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm l_49 = NULL;
  l_49 = t;
  t = SSL_table_destroy(not_null(l_49));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm p_49 = NULL,q_49 = NULL,r_49 = NULL;
  p_49 = t;
  o_49 :
  if(((ATermList) p_49 == ATempty))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(p_49) == AT_LIST) && ((ATermList) p_49 != ATempty)))
        {
          q_49 = ATgetFirst((ATermList) p_49);
          r_49 = (ATerm) ATgetNext((ATermList) p_49);
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
  ATerm m_34;
  m_34 = t;
  {
    ATerm u_49 = NULL;
    ATerm x_49 = NULL;
    ATerm n_34 = t;
    int p_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(p_34);
      }
    else
      {
        t = n_34;
        {
          ATerm v_49 = NULL;
          ATerm w_49 = NULL;
          w_49 = t;
          if(((v_49 != NULL) && (v_49 != w_49)))
            _fail(w_49);
          else
            v_49 = w_49;
          t = (ATerm) ATinsert(ATempty, not_null(v_49));
        }
      }
    {
      x_49 = t;
      if(((u_49 != NULL) && (u_49 != x_49)))
        _fail(x_49);
      else
        u_49 = x_49;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_24, not_null(u_49));
      t = printnl_0(t);
    }
  }
  t = m_34;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_0 (ATerm))
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_35), term_t_26), term_h_35), term_g_35), term_e_35), term_t_26), term_d_35), term_c_35), term_b_35), term_a_35), term_y_34), term_x_34), term_w_34), term_v_34), term_q_34);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm g_50 = NULL,h_50 = NULL,i_50 = NULL;
  i_50 = t;
  f_50 :
  if(((ATgetType(i_50) == AT_LIST) && ((ATermList) i_50 != ATempty)))
    {
      g_50 = ATgetFirst((ATermList) i_50);
      h_50 = (ATerm) ATgetNext((ATermList) i_50);
      {
        ATerm r_50 = NULL;
        t = not_null(h_50);
        {
          ATerm k_35;
          k_35 = t;
          {
            ATerm w_50 = NULL,a_51 = NULL,c_51 = NULL;
            ATerm m_35;
            m_35 = t;
            {
              ATerm z_50 = NULL;
              t = j_0(t);
              {
                z_50 = t;
                if(((w_50 != NULL) && (w_50 != z_50)))
                  _fail(z_50);
                else
                  w_50 = z_50;
              }
            }
            t = m_35;
            {
              ATerm b_51 = NULL;
              t = not_null(g_50);
              {
                t = i_0(t);
                {
                  b_51 = t;
                  if(((a_51 != NULL) && (a_51 != b_51)))
                    _fail(b_51);
                  else
                    a_51 = b_51;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(w_50)), not_null(a_51));
                {
                  c_51 = t;
                  if(((r_50 != NULL) && (r_50 != c_51)))
                    _fail(c_51);
                  else
                    r_50 = c_51;
                }
              }
            }
          }
          t = k_35;
          {
            ATerm k_13 (ATerm t)
            {
              t = not_null(r_50);
              return(t);
            }
            t = reverse_acc_2(t, i_0, k_13);
          }
        }
      }
    }
  else
    {
      if(((ATermList) i_50 == ATempty))
        {
          {
            t = term_c_20;
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
  ATerm l_13 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, l_13);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm f_0 (ATerm))
{
  ATerm j_51 = NULL;
  ATerm k_51 = NULL;
  t = term_c_20;
  {
    t = f_0(t);
    {
      k_51 = t;
      if(((j_51 != NULL) && (j_51 != k_51)))
        _fail(k_51);
      else
        j_51 = k_51;
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_35), not_null(j_51)), term_s_35), term_t_26), term_r_35), term_t_26), term_q_35), term_p_35), term_t_26), term_o_35);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm m_57 (ATerm))
{
  ATerm r_51 = NULL,s_51 = NULL;
  r_51 = t;
  q_51 :
  if(match_cons(r_51, sym_Program_1))
    {
      s_51 = ATgetArgument(r_51, 0);
      {
        ATerm v_51 = NULL,x_51 = NULL;
        ATerm w_51 = NULL;
        t = SSLgetAnnotations(not_null(r_51));
        {
          w_51 = t;
          if(((v_51 != NULL) && (v_51 != w_51)))
            _fail(w_51);
          else
            v_51 = w_51;
        }
        {
          t = not_null(s_51);
          {
            ATerm z_51 = NULL;
            t = m_57(t);
            {
              x_51 = t;
              {
                ATerm a_52 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(x_51)), not_null(v_51));
                {
                  a_52 = t;
                  if(((z_51 != NULL) && (z_51 != a_52)))
                    _fail(a_52);
                  else
                    z_51 = a_52;
                }
                t = not_null(z_51);
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
  ATerm j_52 = NULL;
  ATerm w_35 = t;
  int x_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_52 = NULL;
      t = term_a_36;
      {
        t = get_config_0(t);
        {
          k_52 = t;
          if(((j_52 != NULL) && (j_52 != k_52)))
            _fail(k_52);
          else
            j_52 = k_52;
        }
      }
      LocalPopChoice(x_35);
    }
  else
    {
      t = w_35;
      {
        ATerm o_13 (ATerm t)
        {
          ATerm p_13 (ATerm t)
          {
            ATerm l_52 = NULL;
            l_52 = t;
            if(((j_52 != NULL) && (j_52 != l_52)))
              _fail(l_52);
            else
              j_52 = l_52;
            return(t);
          }
          t = Program_1(t, p_13);
          return(t);
        }
        t = option_defined_1(t, o_13);
      }
    }
  {
    ATerm q_13 (ATerm t)
    {
      ATerm r_13 (ATerm t)
      {
        t = not_null(j_52);
        return(t);
      }
      t = short_description_1(t, r_13);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, q_13);
    {
      t = term_b_36;
      {
        t = echo_0(t);
        {
          t = term_o_36;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm s_13 (ATerm t)
                {
                  ATerm m_52 = NULL;
                  ATerm n_52 = NULL;
                  n_52 = t;
                  if(((m_52 != NULL) && (m_52 != n_52)))
                    _fail(n_52);
                  else
                    m_52 = n_52;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_52)), term_p_36);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, s_13);
                {
                  ATerm y_13 (ATerm t)
                  {
                    ATerm o_52 = NULL;
                    ATerm p_52 = NULL;
                    ATerm b_14 (ATerm t)
                    {
                      t = not_null(j_52);
                      return(t);
                    }
                    t = long_description_1(t, b_14);
                    {
                      p_52 = t;
                      if(((o_52 != NULL) && (o_52 != p_52)))
                        _fail(p_52);
                      else
                        o_52 = p_52;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(o_52)), term_t_26);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, y_13);
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
  ATerm q_36;
  q_36 = t;
  {
    ATerm v_52 = NULL;
    ATerm w_52 = NULL;
    w_52 = t;
    if(((v_52 != NULL) && (v_52 != w_52)))
      _fail(w_52);
    else
      v_52 = w_52;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_16, (ATerm) ATinsert(ATempty, not_null(v_52)));
      t = printnl_0(t);
    }
  }
  t = q_36;
  return(t);
}
ATerm say_1 (ATerm t, ATerm u_71 (ATerm))
{
  ATerm r_36;
  r_36 = t;
  {
    t = u_71(t);
    t = debug_0(t);
  }
  t = r_36;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm n_57 (ATerm))
{
  ATerm d_53 = NULL,e_53 = NULL;
  d_53 = t;
  c_53 :
  if(match_cons(d_53, sym_Undefined_1))
    {
      e_53 = ATgetArgument(d_53, 0);
      {
        ATerm h_53 = NULL,j_53 = NULL;
        ATerm i_53 = NULL;
        t = SSLgetAnnotations(not_null(d_53));
        {
          i_53 = t;
          if(((h_53 != NULL) && (h_53 != i_53)))
            _fail(i_53);
          else
            h_53 = i_53;
        }
        {
          t = not_null(e_53);
          {
            ATerm l_53 = NULL;
            t = n_57(t);
            {
              j_53 = t;
              {
                ATerm m_53 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(j_53)), not_null(h_53));
                {
                  m_53 = t;
                  if(((l_53 != NULL) && (l_53 != m_53)))
                    _fail(m_53);
                  else
                    l_53 = m_53;
                }
                t = not_null(l_53);
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
ATerm fetch_1 (ATerm t, ATerm t_81 (ATerm))
{
  ATerm r_53 (ATerm t)
  {
    ATerm x_36 = t;
    int y_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, t_81, _id);
        LocalPopChoice(y_36);
      }
    else
      {
        t = x_36;
        t = Cons_2(t, _id, r_53);
      }
    return(t);
  }
  t = r_53(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm g_68 (ATerm))
{
  t = fetch_1(t, g_68);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm w_53 = NULL;
  w_53 = t;
  v_53 :
  if(match_cons(w_53, sym_Help_0))
    {
      ATerm y_53 = NULL,a_54 = NULL;
      ATerm d_37;
      d_37 = t;
      {
        ATerm z_53 = NULL;
        t = SSLgetAnnotations(not_null(w_53));
        {
          z_53 = t;
          if(((y_53 != NULL) && (y_53 != z_53)))
            _fail(z_53);
          else
            y_53 = z_53;
        }
      }
      t = d_37;
      {
        ATerm b_54 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(y_53));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm h_54 = NULL,i_54 = NULL,j_54 = NULL;
  h_54 = t;
  g_54 :
  if(match_cons(h_54, sym__2))
    {
      i_54 = ATgetArgument(h_54, 0);
      j_54 = ATgetArgument(h_54, 1);
      t = SSL_table_get(not_null(i_54), not_null(j_54));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm q_54 = NULL,r_54 = NULL,s_54 = NULL,t_54 = NULL;
  q_54 = t;
  p_54 :
  if(match_cons(q_54, sym__3))
    {
      r_54 = ATgetArgument(q_54, 0);
      s_54 = ATgetArgument(q_54, 1);
      t_54 = ATgetArgument(q_54, 2);
      {
        ATerm e_37;
        e_37 = t;
        {
          ATerm x_54 = NULL;
          ATerm y_54 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_54), not_null(s_54));
          {
            ATerm f_37 = t;
            int g_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(g_37);
              }
            else
              {
                t = f_37;
                t = (ATerm) ATempty;
              }
            {
              y_54 = t;
              if(((x_54 != NULL) && (x_54 != y_54)))
                _fail(y_54);
              else
                x_54 = y_54;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(r_54), not_null(s_54), (ATerm) ATinsert(CheckATermList(not_null(x_54)), not_null(t_54)));
            t = table_put_0(t);
          }
        }
        t = e_37;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm g_67 (ATerm))
{
  ATerm c_55 = NULL;
  ATerm d_55 = NULL;
  t = term_c_20;
  {
    t = g_67(t);
    {
      d_55 = t;
      if(((c_55 != NULL) && (c_55 != d_55)))
        _fail(d_55);
      else
        c_55 = d_55;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_c_36, term_g_36, not_null(c_55));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm j_55 = NULL,k_55 = NULL,l_55 = NULL;
  j_55 = t;
  i_55 :
  if(match_string(j_55, "register-usage-info"))
    {
      t = register_usage_1(t, e_0);
    }
  else
    {
      if(((ATgetType(j_55) == AT_LIST) && ((ATermList) j_55 != ATempty)))
        {
          k_55 = ATgetFirst((ATermList) j_55);
          l_55 = (ATerm) ATgetNext((ATermList) j_55);
          {
            ATerm o_55 = NULL;
            ATerm h_37;
            h_37 = t;
            {
              t = not_null(k_55);
              t = a_0(t);
            }
            t = h_37;
            {
              ATerm p_55 = NULL;
              t = term_c_20;
              {
                t = b_0(t);
                {
                  p_55 = t;
                  if(((o_55 != NULL) && (o_55 != p_55)))
                    _fail(p_55);
                  else
                    o_55 = p_55;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(l_55)), not_null(o_55));
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
  ATerm c_14 (ATerm t)
  {
    ATerm u_55 = NULL;
    u_55 = t;
    t_55 :
    if(!(match_string(u_55, "--help")))
      {
        if(!(match_string(u_55, "-h")))
          {
            if(!(match_string(u_55, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm d_14 (ATerm t)
  {
    t = term_y_33;
    {
      t = set_config_0(t);
      t = term_i_37;
    }
    return(t);
  }
  ATerm e_14 (ATerm t)
  {
    t = term_l_37;
    return(t);
  }
  t = Option_3(t, c_14, d_14, e_14);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm x_55 = NULL,y_55 = NULL,z_55 = NULL;
  x_55 = t;
  w_55 :
  if(((ATgetType(x_55) == AT_LIST) && ((ATermList) x_55 != ATempty)))
    {
      y_55 = ATgetFirst((ATermList) x_55);
      z_55 = (ATerm) ATgetNext((ATermList) x_55);
      t = (ATerm) ATinsert(CheckATermList(not_null(z_55)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(y_55)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm f_56 = NULL,g_56 = NULL,h_56 = NULL;
  f_56 = t;
  e_56 :
  if(match_cons(f_56, sym__2))
    {
      g_56 = ATgetArgument(f_56, 0);
      h_56 = ATgetArgument(f_56, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_h_26, not_null(g_56), not_null(h_56));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm e_67 (ATerm))
{
  ATerm m_37;
  m_37 = t;
  {
    ATerm f_14 (ATerm t)
    {
      t = term_r_37;
      t = e_67(t);
      return(t);
    }
    t = try_1(t, f_14);
  }
  t = m_37;
  {
    ATerm k_14 (ATerm t)
    {
      ATerm p_56 = NULL;
      ATerm s_37;
      s_37 = t;
      {
        ATerm n_56 = NULL;
        ATerm o_56 = NULL;
        o_56 = t;
        if(((n_56 != NULL) && (n_56 != o_56)))
          _fail(o_56);
        else
          n_56 = o_56;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_a_36, not_null(n_56));
          t = set_config_0(t);
        }
      }
      t = s_37;
      {
        ATerm q_56 = NULL;
        q_56 = t;
        if(((p_56 != NULL) && (p_56 != q_56)))
          _fail(q_56);
        else
          p_56 = q_56;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(p_56));
      }
      return(t);
    }
    ATerm l_14 (ATerm t)
    {
      ATerm t_37 = t;
      int u_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_38 = t;
          int b_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(b_38);
            }
          else
            {
              t = a_38;
              {
                t = e_67(t);
                t = Cons_2(t, _id, l_14);
              }
            }
          LocalPopChoice(u_37);
        }
      else
        {
          t = t_37;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, k_14, l_14);
  }
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm d_67 (ATerm))
{
  ATerm v_56 = NULL;
  ATerm e_38;
  e_38 = t;
  {
    t = term_f_38;
    t = table_put_0(t);
  }
  t = e_38;
  {
    ATerm m_14 (ATerm t)
    {
      ATerm k_38 = t;
      int l_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_67(t);
          LocalPopChoice(l_38);
        }
      else
        {
          t = k_38;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, m_14);
    {
      ATerm n_14 (ATerm t)
      {
        ATerm m_38 = t;
        int n_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_38;
            s_38 = t;
            {
              ATerm t_38 = t;
              int v_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_x_33;
                  t = get_config_0(t);
                  LocalPopChoice(v_38);
                }
              else
                {
                  t = t_38;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = s_38;
            {
              t = system_usage_0(t);
              {
                t = term_c_16;
                t = exit_0(t);
              }
            }
            LocalPopChoice(n_38);
          }
        else
          {
            t = m_38;
            {
              ATerm o_14 (ATerm t)
              {
                ATerm q_14 (ATerm t)
                {
                  ATerm w_56 = NULL;
                  w_56 = t;
                  if(((v_56 != NULL) && (v_56 != w_56)))
                    _fail(w_56);
                  else
                    v_56 = w_56;
                  return(t);
                }
                t = Undefined_1(t, q_14);
                return(t);
              }
              t = option_defined_1(t, o_14);
              {
                ATerm t_14 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_56)), term_w_38);
                  return(t);
                }
                t = say_1(t, t_14);
                {
                  t = system_usage_0(t);
                  {
                    t = term_k_21;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, n_14);
      {
        ATerm x_38;
        x_38 = t;
        {
          t = term_c_36;
          t = table_destroy_0(t);
        }
        t = x_38;
      }
    }
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm a_57 = NULL,b_57 = NULL,c_57 = NULL;
  ATerm y_38;
  y_38 = t;
  {
    ATerm d_57 = NULL,e_57 = NULL,f_57 = NULL,g_57 = NULL;
    d_57 = t;
    z_56 :
    if(match_cons(d_57, sym__3))
      {
        e_57 = ATgetArgument(d_57, 0);
        f_57 = ATgetArgument(d_57, 1);
        g_57 = ATgetArgument(d_57, 2);
        {
          if(((a_57 != NULL) && (a_57 != e_57)))
            _fail(e_57);
          else
            a_57 = e_57;
          {
            if(((b_57 != NULL) && (b_57 != f_57)))
              _fail(f_57);
            else
              b_57 = f_57;
            {
              if(((c_57 != NULL) && (c_57 != g_57)))
                _fail(g_57);
              else
                c_57 = g_57;
              t = SSL_table_put(not_null(a_57), not_null(b_57), not_null(c_57));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = y_38;
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm g_62 (ATerm), ATerm h_62 (ATerm))
{
  ATerm q_57 = NULL,r_57 = NULL,s_57 = NULL;
  q_57 = t;
  p_57 :
  if(((ATgetType(q_57) == AT_LIST) && ((ATermList) q_57 != ATempty)))
    {
      r_57 = ATgetFirst((ATermList) q_57);
      s_57 = (ATerm) ATgetNext((ATermList) q_57);
      {
        ATerm w_57 = NULL,y_57 = NULL;
        ATerm x_57 = NULL;
        t = SSLgetAnnotations(not_null(q_57));
        {
          x_57 = t;
          if(((w_57 != NULL) && (w_57 != x_57)))
            _fail(x_57);
          else
            w_57 = x_57;
        }
        {
          t = not_null(r_57);
          {
            ATerm a_58 = NULL;
            t = g_62(t);
            {
              y_57 = t;
              {
                t = not_null(s_57);
                {
                  ATerm c_58 = NULL;
                  t = h_62(t);
                  {
                    a_58 = t;
                    {
                      ATerm d_58 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(a_58)), not_null(y_57)), not_null(w_57));
                      {
                        d_58 = t;
                        if(((c_58 != NULL) && (c_58 != d_58)))
                          _fail(d_58);
                        else
                          c_58 = d_58;
                      }
                      t = not_null(c_58);
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
  ATerm n_58 = NULL;
  n_58 = t;
  m_58 :
  if(((ATermList) n_58 == ATempty))
    {
      {
        ATerm p_58 = NULL,r_58 = NULL;
        ATerm d_39;
        d_39 = t;
        {
          ATerm q_58 = NULL;
          t = SSLgetAnnotations(not_null(n_58));
          {
            q_58 = t;
            if(((p_58 != NULL) && (p_58 != q_58)))
              _fail(q_58);
            else
              p_58 = q_58;
          }
        }
        t = d_39;
        {
          ATerm s_58 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(p_58));
          {
            s_58 = t;
            if(((r_58 != NULL) && (r_58 != s_58)))
              _fail(s_58);
            else
              r_58 = s_58;
          }
          t = not_null(r_58);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm map_1 (ATerm t, ATerm k_81 (ATerm))
{
  ATerm w_58 (ATerm t)
  {
    ATerm e_39 = t;
    int f_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(f_39);
      }
    else
      {
        t = e_39;
        t = Cons_2(t, k_81, w_58);
      }
    return(t);
  }
  t = w_58(t);
  return(t);
}
ATerm table_putlist_0 (ATerm t)
{
  ATerm b_59 = NULL,c_59 = NULL,d_59 = NULL;
  b_59 = t;
  a_59 :
  if(match_cons(b_59, sym__2))
    {
      c_59 = ATgetArgument(b_59, 0);
      d_59 = ATgetArgument(b_59, 1);
      {
        t = not_null(d_59);
        {
          ATerm u_14 (ATerm t)
          {
            ATerm g_59 = NULL,h_59 = NULL,i_59 = NULL;
            g_59 = t;
            z_58 :
            if(match_cons(g_59, sym__2))
              {
                h_59 = ATgetArgument(g_59, 0);
                i_59 = ATgetArgument(g_59, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(c_59), not_null(h_59), not_null(i_59));
                  t = table_put_0(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, u_14);
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
  ATerm o_59 = NULL;
  o_59 = t;
  t = SSL_ReadFromFile(not_null(o_59));
  return(t);
}
ATerm import_config_file_1 (ATerm t, ATerm u_69 (ATerm))
{
  ATerm h_39;
  h_39 = t;
  {
    ATerm s_59 = NULL;
    t = u_69(t);
    {
      ATerm v_14 (ATerm t)
      {
        ATerm a_15 (ATerm t)
        {
          t = term_i_39;
          return(t);
        }
        t = debug_1(t, a_15);
        return(t);
      }
      t = if_verbose2_1(t, v_14);
      {
        t = ReadFromFile_0(t);
        {
          ATerm t_59 = NULL;
          t_59 = t;
          if(((s_59 != NULL) && (s_59 != t_59)))
            _fail(t_59);
          else
            s_59 = t_59;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_h_26, not_null(s_59));
            t = table_putlist_0(t);
          }
        }
      }
    }
  }
  t = h_39;
  return(t);
}
ATerm command_line_options_0 (ATerm t)
{
  ATerm b_15 (ATerm t)
  {
    t = term_j_39;
    t = xtc_find_0(t);
    return(t);
  }
  t = import_config_file_1(t, b_15);
  {
    t = parse_options_1(t, sc_options_0);
    {
      ATerm c_15 (ATerm t)
      {
        ATerm w_59 = NULL;
        t = term_d_34;
        {
          t = get_config_0(t);
          {
            ATerm x_59 = NULL;
            t = term_p_39;
            {
              t = xtc_find_0(t);
              {
                x_59 = t;
                if(((w_59 != NULL) && (w_59 != x_59)))
                  _fail(x_59);
                else
                  w_59 = x_59;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(w_59), term_a_24);
              {
                t = copy_file_0(t);
                {
                  t = term_c_16;
                  t = exit_0(t);
                }
              }
            }
          }
        }
        return(t);
      }
      t = try_1(t, c_15);
      {
        ATerm d_15 (ATerm t)
        {
          t = term_i_34;
          {
            t = get_config_0(t);
            {
              t = sc_version_0(t);
              {
                t = term_c_16;
                t = exit_0(t);
              }
            }
          }
          return(t);
        }
        t = try_1(t, d_15);
        {
          ATerm q_39 = t;
          int r_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_39;
              w_39 = t;
              {
                t = term_d_22;
                t = get_config_0(t);
              }
              t = w_39;
              LocalPopChoice(r_39);
            }
          else
            {
              t = q_39;
              {
                t = (ATerm) ATinsert(ATempty, term_x_39);
                t = fatal_error_0(t);
              }
            }
          {
            t = sc_announce_0(t);
            {
              ATerm e_15 (ATerm t)
              {
                ATerm y_39;
                y_39 = t;
                {
                  t = term_d_22;
                  {
                    t = get_config_0(t);
                    {
                      ATerm j_15 (ATerm t)
                      {
                        t = term_z_39;
                        return(t);
                      }
                      t = debug_1(t, j_15);
                    }
                  }
                }
                t = y_39;
                return(t);
              }
              t = if_verbose1_1(t, e_15);
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
  ATerm a_40 = t;
  int g_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = command_line_options_0(t);
      {
        ATerm k_15 (ATerm t)
        {
          ATerm l_15 (ATerm t)
          {
            ATerm c_60 = NULL;
            ATerm d_60 = NULL;
            d_60 = t;
            if(((c_60 != NULL) && (c_60 != d_60)))
              _fail(d_60);
            else
              c_60 = d_60;
            {
              t = (ATerm) ATmakeAppl(sym__2, term_q_16, (ATerm) ATinsert(CheckATermList(not_null(c_60)), term_h_40));
              t = printnl_0(t);
            }
            return(t);
          }
          t = if_verbose1_1(t, l_15);
          return(t);
        }
        t = profile_p__2(t, k_15, compile_0);
        {
          ATerm m_15 (ATerm t)
          {
            ATerm e_60 = NULL;
            ATerm f_60 = NULL;
            t = run_time_0(t);
            {
              f_60 = t;
              if(((e_60 != NULL) && (e_60 != f_60)))
                _fail(f_60);
              else
                e_60 = f_60;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, term_q_16, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_40), not_null(e_60)), term_l_40));
              t = printnl_0(t);
            }
            return(t);
          }
          t = if_verbose2_1(t, m_15);
          {
            t = term_c_16;
            t = exit_0(t);
          }
        }
      }
      LocalPopChoice(g_40);
    }
  else
    {
      t = a_40;
      {
        ATerm g_60 = NULL;
        ATerm h_60 = NULL;
        t = run_time_0(t);
        {
          h_60 = t;
          if(((g_60 != NULL) && (g_60 != h_60)))
            _fail(h_60);
          else
            g_60 = h_60;
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_q_16, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_40), not_null(g_60)), term_n_40));
          {
            t = printnl_0(t);
            {
              t = term_k_21;
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
