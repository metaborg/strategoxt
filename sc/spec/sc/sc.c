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
Symbol sym_SRDef_3;
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
  sym_SRDef_3 = ATmakeSymbol("SRDef", 3, ATfalse);
  ATprotectSymbol(sym_SRDef_3);
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
ATerm term_c_41;
ATerm term_b_41;
ATerm term_a_41;
ATerm term_x_40;
ATerm term_t_40;
ATerm term_r_40;
ATerm term_f_40;
ATerm term_e_40;
ATerm term_d_40;
ATerm term_n_39;
ATerm term_a_39;
ATerm term_k_38;
ATerm term_g_38;
ATerm term_f_38;
ATerm term_k_37;
ATerm term_j_37;
ATerm term_i_37;
ATerm term_d_37;
ATerm term_c_37;
ATerm term_w_36;
ATerm term_t_36;
ATerm term_l_36;
ATerm term_h_36;
ATerm term_g_36;
ATerm term_f_36;
ATerm term_c_36;
ATerm term_y_35;
ATerm term_w_35;
ATerm term_v_35;
ATerm term_u_35;
ATerm term_t_35;
ATerm term_s_35;
ATerm term_p_35;
ATerm term_o_35;
ATerm term_n_35;
ATerm term_l_35;
ATerm term_j_35;
ATerm term_i_35;
ATerm term_h_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_t_34;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_m_34;
ATerm term_h_34;
ATerm term_g_34;
ATerm term_d_34;
ATerm term_a_34;
ATerm term_z_33;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_t_33;
ATerm term_q_33;
ATerm term_l_33;
ATerm term_i_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_y_32;
ATerm term_w_32;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_p_32;
ATerm term_m_32;
ATerm term_j_32;
ATerm term_g_32;
ATerm term_c_32;
ATerm term_z_31;
ATerm term_q_31;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_s_30;
ATerm term_o_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_c_30;
ATerm term_y_29;
ATerm term_u_29;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_n_29;
ATerm term_w_28;
ATerm term_p_28;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_j_28;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_x_26;
ATerm term_v_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_r_25;
ATerm term_t_24;
ATerm term_p_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_e_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_k_22;
ATerm term_h_22;
ATerm term_f_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_s_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_r_20;
ATerm term_p_20;
ATerm term_l_20;
ATerm term_j_20;
ATerm term_f_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_y_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_f_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_s_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_j_17;
ATerm term_e_17;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_i_16;
ATerm term_g_16;
void init_constant_terms (void)
{
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling C code", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("C-pretty.pp", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end: ", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize2", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize1", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize: ", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to ", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("frontend", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to ", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("infile", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-dep", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(sym__2, term_y_22, term_f_22);
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("SC ", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2002 Eelco Visser <visser@acm.org>\n", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("This program is free software; you can redistribute it and/or modify\n", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("it under the terms of the GNU General Public License as published by\n", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("the Free Software Foundation; either version 2, or (at your option)\n", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("any later version.\n", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(sym__2, term_l_28, term_m_28);
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(sym__2, term_l_28, term_q_29);
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i file            Main module to compile (required)\n", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f | --output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d\n", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(sym__2, term_j_17, term_j_20);
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(sym__2, term_i_21, term_j_20);
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(sym__2, term_y_19, term_j_20);
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(sym__2, term_m_19, term_j_20);
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(sym__2, term_t_33, term_j_20);
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all        Instrument all definitions to print tracing information", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-t f               Instrument definition of f to print tracing information\n", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i        Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(sym__2, term_i_16, term_g_16);
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-S | --silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(sym__2, term_m_34, term_j_20);
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(sym__2, term_t_34, term_j_20);
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(sym__2, term_a_35, term_j_20);
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M\n", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("  sc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that sc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol("SC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(sym__2, term_d_37, term_i_37);
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(sym__3, term_d_37, term_i_37, (ATerm) ATempty);
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(ATmakeSymbol("importing: ", 0, ATtrue));
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(ATmakeSymbol("sc.config", 0, ATtrue));
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(ATmakeSymbol("sc-manual.txt", 0, ATtrue));
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue));
}
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm g_76 (ATerm), ATerm h_76 (ATerm));
ATerm crush_2 (ATerm, ATerm y_77 (ATerm), ATerm z_77 (ATerm));
ATerm run_time_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm j_69 (ATerm));
ATerm Snd_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm link_object_code_0 (ATerm);
ATerm c_to_object_code_0 (ATerm);
ATerm c_compile_0 (ATerm);
ATerm xtc_transform_1 (ATerm, ATerm h_63 (ATerm));
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
ATerm AddMain_1 (ATerm, ATerm g_91 (ATerm));
ATerm xtc_io_transform_1 (ATerm, ATerm r_63 (ATerm));
ATerm add_main_0 (ATerm);
ATerm get_outfile_1 (ATerm, ATerm f_91 (ATerm));
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
ATerm xtc_transform_term_2 (ATerm, ATerm p_63 (ATerm), ATerm q_63 (ATerm));
ATerm call_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm g_63 (ATerm));
ATerm assert_1 (ATerm, ATerm b_73 (ATerm));
ATerm obsolete_1 (ATerm, ATerm m_72 (ATerm));
ATerm open_file_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm p_0 (ATerm), ATerm q_0 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm i_63 (ATerm), ATerm j_63 (ATerm));
ATerm if_verbose3_1 (ATerm, ATerm k_69 (ATerm));
ATerm basename_1 (ATerm, ATerm a_74 (ATerm));
ATerm basename_0 (ATerm);
ATerm get_infile_0 (ATerm);
ATerm parse_0 (ATerm);
ATerm front_end_0 (ATerm);
ATerm rename_file_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm rename_to_1 (ATerm, ATerm o_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm y_72 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm begin_scope_1 (ATerm, ATerm x_72 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm e_63 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm f_63 (ATerm));
ATerm compile_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm i_69 (ATerm));
ATerm ticks_to_seconds_0 (ATerm);
ATerm self_children_sys_time_0 (ATerm);
ATerm add_0 (ATerm);
ATerm self_children_user_time_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm diff_times_0 (ATerm);
ATerm times_0 (ATerm);
ATerm profile_p__2 (ATerm, ATerm a_72 (ATerm), ATerm b_72 (ATerm));
ATerm debug_1 (ATerm, ATerm f_72 (ATerm));
ATerm implode_string_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm g_51 (ATerm), ATerm h_51 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm sc_announce_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm sc_version_0 (ATerm);
ATerm try_1 (ATerm, ATerm q_90 (ATerm));
ATerm copy_file_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm m_69 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm l_69 (ATerm));
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose6_1 (ATerm, ATerm n_69 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm n_77 (ATerm), ATerm o_77 (ATerm));
ATerm union_1 (ATerm, ATerm p_77 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm i_66 (ATerm));
ATerm file_exists_0 (ATerm);
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm extend_config_0 (ATerm);
ATerm table_remove_0 (ATerm);
ATerm toggle_config_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm l_82 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm post_extend_config_0 (ATerm);
ATerm sc_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm i_0 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm h_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm f_0 (ATerm));
ATerm Program_1 (ATerm, ATerm y_57 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm g_72 (ATerm));
ATerm Undefined_1 (ATerm, ATerm z_57 (ATerm));
ATerm fetch_1 (ATerm, ATerm f_82 (ATerm));
ATerm option_defined_1 (ATerm, ATerm s_68 (ATerm));
ATerm Help_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm s_67 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm q_67 (ATerm));
ATerm parse_options_1 (ATerm, ATerm p_67 (ATerm));
ATerm table_put_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm s_62 (ATerm), ATerm t_62 (ATerm));
ATerm Nil_0 (ATerm);
ATerm map_1 (ATerm, ATerm w_81 (ATerm));
ATerm table_putlist_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm import_config_file_1 (ATerm, ATerm g_70 (ATerm));
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
        ATerm v_15;
        v_15 = t;
        t = SSL_printnl(not_null(s_1), not_null(t_1));
        t = v_15;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm g_76 (ATerm), ATerm h_76 (ATerm))
{
  ATerm w_15 = t;
  int f_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = g_76(t);
      LocalPopChoice(f_16);
    }
  else
    {
      t = w_15;
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
                t = foldr_2(t, g_76, h_76);
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
                t = h_76(t);
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
ATerm crush_2 (ATerm t, ATerm y_77 (ATerm), ATerm z_77 (ATerm))
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
      t = foldr_2(t, y_77, z_77);
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
      t = term_g_16;
      return(t);
    }
    t = crush_2(t, c_0, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm j_69 (ATerm))
{
  ATerm m_0 (ATerm t)
  {
    ATerm h_16;
    h_16 = t;
    {
      ATerm m_3 = NULL;
      ATerm n_3 = NULL;
      t = term_i_16;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_3), term_l_16);
        t = geq_0(t);
      }
    }
    t = h_16;
    t = j_69(t);
    return(t);
  }
  t = try_1(t, m_0);
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
        ATerm n_0 (ATerm t)
        {
          ATerm s_0 (ATerm t)
          {
            t = term_m_16;
            return(t);
          }
          t = say_1(t, s_0);
          return(t);
        }
        t = if_verbose2_1(t, n_0);
        {
          ATerm s_5 = NULL;
          ATerm t_0 (ATerm t)
          {
            t = term_n_16;
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
                t = term_p_16;
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
                  t = (ATerm) ATmakeAppl(sym__2, term_q_16, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(s_5)), not_null(q_5)), term_r_16), not_null(o_5)));
                  {
                    ATerm u_0 (ATerm t)
                    {
                      ATerm s_16;
                      s_16 = t;
                      {
                        ATerm u_5 = NULL,w_5 = NULL;
                        ATerm t_16;
                        t_16 = t;
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
                        t = t_16;
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
                            t = (ATerm) ATmakeAppl(sym__2, term_u_16, (ATerm) ATinsert(CheckATermList(not_null(w_5)), not_null(u_5)));
                            t = printnl_0(t);
                          }
                        }
                      }
                      t = s_16;
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
            t = term_v_16;
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
            t = term_w_16;
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
                t = term_e_17;
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
                  t = (ATerm) ATmakeAppl(sym__2, not_null(p_6), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(m_6)), term_r_16), not_null(k_6)), term_j_17));
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
                  t = (ATerm) ATmakeAppl(sym__2, term_q_16, not_null(o_6));
                  {
                    ATerm z_0 (ATerm t)
                    {
                      ATerm k_17;
                      k_17 = t;
                      {
                        ATerm s_6 = NULL;
                        ATerm t_6 = NULL;
                        t_6 = t;
                        if(((s_6 != NULL) && (s_6 != t_6)))
                          _fail(t_6);
                        else
                          s_6 = t_6;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_u_16, not_null(s_6));
                          t = printnl_0(t);
                        }
                      }
                      t = k_17;
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
  ATerm l_17 = t;
  int m_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_17;
      n_17 = t;
      {
        t = term_j_17;
        t = get_config_0(t);
      }
      t = n_17;
      LocalPopChoice(m_17);
    }
  else
    {
      t = l_17;
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
              t = (ATerm) ATmakeAppl(sym__2, term_u_16, (ATerm) ATinsert(CheckATermList(not_null(a_7)), term_o_17));
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
ATerm xtc_transform_1 (ATerm t, ATerm h_63 (ATerm))
{
  ATerm d_1 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, h_63, d_1);
  return(t);
}
ATerm abox2text_0 (ATerm t)
{
  ATerm e_1 (ATerm t)
  {
    t = term_p_17;
    return(t);
  }
  t = xtc_transform_1(t, e_1);
  {
    ATerm f_1 (ATerm t)
    {
      ATerm g_1 (ATerm t)
      {
        t = term_s_17;
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
    t = term_x_17;
    return(t);
  }
  ATerm i_1 (ATerm t)
  {
    ATerm e_7 = NULL;
    ATerm f_7 = NULL;
    t = term_y_17;
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
    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_7)), term_z_17);
    return(t);
  }
  t = xtc_transform_2(t, h_1, i_1);
  return(t);
}
ATerm s2c_0 (ATerm t)
{
  ATerm j_1 (ATerm t)
  {
    t = term_a_18;
    return(t);
  }
  ATerm k_1 (ATerm t)
  {
    ATerm k_7 = NULL,m_7 = NULL;
    ATerm e_18;
    e_18 = t;
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
    t = e_18;
    {
      ATerm p_7 = NULL;
      t = term_j_18;
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
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_7)), term_j_18);
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
        t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(m_7)), (ATerm) ATinsert(ATempty, term_k_18)), not_null(k_7));
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
    t = term_l_18;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(u_7)), term_k_18);
    return(t);
  }
  t = xtc_transform_2(t, m_1, n_1);
  return(t);
}
ATerm canonicalize_0 (ATerm t)
{
  ATerm o_1 (ATerm t)
  {
    t = term_m_18;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(y_7)), term_k_18);
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
      t = term_n_18;
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
          t = (ATerm) ATmakeAppl(sym__2, term_u_16, (ATerm) ATinsert(CheckATermList(not_null(c_8)), term_o_18));
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
    t = term_p_18;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(g_8)), term_k_18);
    return(t);
  }
  t = xtc_transform_2(t, y_1, z_1);
  return(t);
}
ATerm compile_match_0 (ATerm t)
{
  ATerm a_2 (ATerm t)
  {
    t = term_y_18;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(k_8)), term_k_18);
    return(t);
  }
  t = xtc_transform_2(t, a_2, b_2);
  return(t);
}
ATerm inline_0 (ATerm t)
{
  ATerm c_2 (ATerm t)
  {
    t = term_z_18;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(o_8)), term_k_18);
    return(t);
  }
  t = xtc_transform_2(t, c_2, d_2);
  return(t);
}
ATerm fusion_0 (ATerm t)
{
  ATerm e_2 (ATerm t)
  {
    t = term_a_19;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(s_8)), term_k_18);
    return(t);
  }
  t = xtc_transform_2(t, e_2, f_2);
  return(t);
}
ATerm optimize1_0 (ATerm t)
{
  ATerm g_2 (ATerm t)
  {
    t = term_b_19;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(w_8)), term_k_18);
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
      t = term_c_19;
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
          t = (ATerm) ATmakeAppl(sym__2, term_u_16, (ATerm) ATinsert(CheckATermList(not_null(a_9)), term_f_19));
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
          ATerm g_19;
          g_19 = t;
          {
            ATerm l_19 = t;
            if((PushChoice() == 0))
              {
                t = term_m_19;
                t = get_config_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = l_19;
              }
          }
          t = g_19;
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
    t = term_n_19;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(e_9)), term_k_18);
    return(t);
  }
  t = xtc_transform_2(t, u_2, v_2);
  return(t);
}
ATerm stratego_nf_0 (ATerm t)
{
  ATerm w_2 (ATerm t)
  {
    t = term_o_19;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(i_9)), term_k_18);
    return(t);
  }
  t = xtc_transform_2(t, w_2, x_2);
  return(t);
}
ATerm extract_0 (ATerm t)
{
  ATerm y_2 (ATerm t)
  {
    t = term_p_19;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(m_9)), term_k_18);
    return(t);
  }
  t = xtc_transform_2(t, y_2, b_3);
  return(t);
}
ATerm extract_all_0 (ATerm t)
{
  ATerm e_3 (ATerm t)
  {
    t = term_q_19;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(q_9)), term_k_18);
    return(t);
  }
  t = xtc_transform_2(t, e_3, i_3);
  return(t);
}
ATerm output_frontend_0 (ATerm t)
{
  ATerm u_9 = NULL;
  ATerm j_3 (ATerm t)
  {
    ATerm t_19;
    t_19 = t;
    {
      t = term_y_19;
      t = get_config_0(t);
    }
    t = t_19;
    {
      ATerm z_19 = t;
      int a_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = extract_all_0(t);
          LocalPopChoice(a_20);
        }
      else
        {
          t = z_19;
          {
            t = (ATerm) ATinsert(ATempty, term_b_20);
            t = fatal_error_0(t);
          }
        }
      {
        ATerm k_3 (ATerm t)
        {
          ATerm v_9 = NULL;
          ATerm l_3 (ATerm t)
          {
            t = term_c_20;
            return(t);
          }
          t = get_outfile_1(t, l_3);
          {
            v_9 = t;
            if(((u_9 != NULL) && (u_9 != v_9)))
              _fail(v_9);
            else
              u_9 = v_9;
          }
          return(t);
        }
        t = copy_to_1(t, k_3);
        {
          ATerm o_3 (ATerm t)
          {
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_9)), term_d_20);
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
    t = term_f_20;
    return(t);
  }
  ATerm q_3 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(y_9)), term_k_18);
    return(t);
  }
  t = xtc_transform_2(t, p_3, q_3);
  return(t);
}
ATerm AddMain_1 (ATerm t, ATerm g_91 (ATerm))
{
  ATerm e_10 = NULL,f_10 = NULL;
  e_10 = t;
  d_10 :
  if(match_cons(e_10, sym_Specification_1))
    {
      f_10 = ATgetArgument(e_10, 0);
      {
        ATerm h_10 = NULL;
        ATerm i_10 = NULL;
        t = term_j_20;
        {
          t = g_91(t);
          {
            i_10 = t;
            if(((h_10 != NULL) && (h_10 != i_10)))
              _fail(i_10);
            else
              h_10 = i_10;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(not_null(f_10)), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_l_20, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(h_10)), (ATerm) ATempty))))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm xtc_io_transform_1 (ATerm t, ATerm r_63 (ATerm))
{
  t = read_from_0(t);
  {
    t = r_63(t);
    t = write_to_0(t);
  }
  return(t);
}
ATerm add_main_0 (ATerm t)
{
  ATerm m_10 = NULL;
  ATerm r_3 (ATerm t)
  {
    ATerm o_20;
    o_20 = t;
    {
      ATerm n_10 = NULL;
      t = term_p_20;
      {
        t = get_config_0(t);
        {
          n_10 = t;
          if(((m_10 != NULL) && (m_10 != n_10)))
            _fail(n_10);
          else
            m_10 = n_10;
        }
      }
    }
    t = o_20;
    {
      ATerm x_3 (ATerm t)
      {
        ATerm c_4 (ATerm t)
        {
          t = not_null(m_10);
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
ATerm get_outfile_1 (ATerm t, ATerm f_91 (ATerm))
{
  ATerm r_10 = NULL,t_10 = NULL;
  ATerm q_20;
  q_20 = t;
  {
    ATerm s_10 = NULL;
    t = f_91(t);
    {
      s_10 = t;
      if(((r_10 != NULL) && (r_10 != s_10)))
        _fail(s_10);
      else
        r_10 = s_10;
    }
  }
  t = q_20;
  {
    ATerm u_10 = NULL;
    t = term_r_20;
    {
      t = get_config_0(t);
      {
        u_10 = t;
        if(((t_10 != NULL) && (t_10 != u_10)))
          _fail(u_10);
        else
          t_10 = u_10;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(t_10), not_null(r_10));
      t = conc_strings_0(t);
    }
  }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm b_11 = NULL;
  b_11 = t;
  a_11 :
  if(match_cons(b_11, sym_stderr_0))
    {
      ATerm d_11 = NULL,f_11 = NULL;
      ATerm s_20;
      s_20 = t;
      {
        ATerm e_11 = NULL;
        t = SSLgetAnnotations(not_null(b_11));
        {
          e_11 = t;
          if(((d_11 != NULL) && (d_11 != e_11)))
            _fail(e_11);
          else
            d_11 = e_11;
        }
      }
      t = s_20;
      {
        ATerm g_11 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(d_11));
        {
          g_11 = t;
          if(((f_11 != NULL) && (f_11 != g_11)))
            _fail(g_11);
          else
            f_11 = g_11;
        }
        t = not_null(f_11);
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
  ATerm p_11 = NULL,q_11 = NULL;
  p_11 = t;
  o_11 :
  if(match_cons(p_11, sym_FILE_1))
    {
      q_11 = ATgetArgument(p_11, 0);
      {
        ATerm x_20 = t;
        int y_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_11 = NULL;
            ATerm t_11 = NULL;
            t = r_0(t);
            {
              t_11 = t;
              {
                if(((s_11 != NULL) && (s_11 != t_11)))
                  _fail(t_11);
                else
                  s_11 = t_11;
                {
                  ATerm z_20 = t;
                  int a_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(a_21);
                    }
                  else
                    {
                      t = z_20;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(q_11), not_null(s_11));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_11));
            LocalPopChoice(y_20);
          }
        else
          {
            t = x_20;
            {
              ATerm v_11 = NULL;
              ATerm w_11 = NULL;
              t = r_0(t);
              {
                w_11 = t;
                {
                  if(((v_11 != NULL) && (v_11 != w_11)))
                    _fail(w_11);
                  else
                    v_11 = w_11;
                  {
                    ATerm b_21 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm f_21 = t;
                        int g_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = stdout_0(t);
                            LocalPopChoice(g_21);
                          }
                        else
                          {
                            t = f_21;
                            t = stderr_0(t);
                          }
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = b_21;
                      }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(q_11), not_null(v_11));
                      t = copy_file_0(t);
                    }
                  }
                }
              }
              t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_11));
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
  ATerm c_12 = NULL;
  ATerm k_4 (ATerm t)
  {
    ATerm h_21;
    h_21 = t;
    {
      t = term_i_21;
      t = get_config_0(t);
    }
    t = h_21;
    {
      ATerm l_4 (ATerm t)
      {
        ATerm d_12 = NULL;
        ATerm m_4 (ATerm t)
        {
          t = term_j_21;
          return(t);
        }
        t = get_outfile_1(t, m_4);
        {
          d_12 = t;
          if(((c_12 != NULL) && (c_12 != d_12)))
            _fail(d_12);
          else
            c_12 = d_12;
        }
        return(t);
      }
      t = copy_to_1(t, l_4);
      {
        ATerm k_21;
        k_21 = t;
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_12)), term_m_21);
          t = echo_0(t);
        }
        t = k_21;
      }
    }
    return(t);
  }
  t = try_1(t, k_4);
  return(t);
}
ATerm pass_keep_0 (ATerm t)
{
  ATerm h_12 = NULL;
  ATerm i_12 = NULL,k_12 = NULL;
  ATerm j_12 = NULL;
  t = term_n_21;
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
        t = term_s_21;
      }
    {
      j_12 = t;
      if(((i_12 != NULL) && (i_12 != j_12)))
        _fail(j_12);
      else
        i_12 = j_12;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_12), term_s_21);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          k_12 = t;
          if(((h_12 != NULL) && (h_12 != k_12)))
            _fail(k_12);
          else
            h_12 = k_12;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_12)), term_n_21);
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm o_12 = NULL;
  o_12 = t;
  t = SSL_int_to_string(not_null(o_12));
  return(t);
}
ATerm pass_verbose_0 (ATerm t)
{
  ATerm t_12 = NULL;
  ATerm u_12 = NULL,w_12 = NULL;
  ATerm v_12 = NULL;
  t = term_i_16;
  {
    ATerm t_21 = t;
    int u_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(u_21);
      }
    else
      {
        t = t_21;
        t = term_s_21;
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_12), term_s_21);
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
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_12)), term_i_16);
  return(t);
}
ATerm dep_name_0 (ATerm t)
{
  ATerm a_13 = NULL;
  ATerm b_13 = NULL;
  ATerm v_21 = t;
  int w_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_16;
      t = get_config_0(t);
      LocalPopChoice(w_21);
    }
  else
    {
      t = v_21;
      {
        t = term_x_21;
        t = get_config_0(t);
      }
    }
  {
    b_13 = t;
    if(((a_13 != NULL) && (a_13 != b_13)))
      _fail(b_13);
    else
      a_13 = b_13;
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_13)), term_y_21);
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm i_13 = NULL,j_13 = NULL;
  i_13 = t;
  h_13 :
  if(match_cons(i_13, sym_stdin_0))
    {
      ATerm k_13 = NULL;
      ATerm l_13 = NULL;
      t = term_z_21;
      {
        t = ReadFromFile_0(t);
        {
          l_13 = t;
          if(((k_13 != NULL) && (k_13 != l_13)))
            _fail(l_13);
          else
            k_13 = l_13;
        }
      }
      t = not_null(k_13);
    }
  else
    {
      if(match_cons(i_13, sym_FILE_1))
        {
          j_13 = ATgetArgument(i_13, 0);
          {
            ATerm n_13 = NULL;
            ATerm o_13 = NULL;
            t = not_null(j_13);
            {
              t = ReadFromFile_0(t);
              {
                o_13 = t;
                if(((n_13 != NULL) && (n_13 != o_13)))
                  _fail(o_13);
                else
                  n_13 = o_13;
              }
            }
            t = not_null(n_13);
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
  ATerm v_13 = NULL,w_13 = NULL,x_13 = NULL;
  v_13 = t;
  u_13 :
  if(match_cons(v_13, sym__2))
    {
      w_13 = ATgetArgument(v_13, 0);
      x_13 = ATgetArgument(v_13, 1);
      t = SSL_WriteToBinaryFile(not_null(w_13), not_null(x_13));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm d_14 = NULL;
  ATerm f_14 = NULL;
  d_14 = t;
  {
    ATerm g_14 = NULL;
    t = xtc_new_file_0(t);
    {
      g_14 = t;
      {
        if(((f_14 != NULL) && (f_14 != g_14)))
          _fail(g_14);
        else
          f_14 = g_14;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_14), not_null(d_14));
          t = WriteToBinaryFile_0(t);
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_14));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm p_63 (ATerm), ATerm q_63 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, p_63, q_63);
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
ATerm xtc_find_warning_0 (ATerm t)
{
  t = xtc_find_0(t);
  return(t);
}
ATerm xtc_command_1 (ATerm t, ATerm g_63 (ATerm))
{
  ATerm t_14 = NULL;
  ATerm a_22;
  a_22 = t;
  {
    ATerm u_14 = NULL;
    t = g_63(t);
    {
      t = xtc_find_warning_0(t);
      {
        u_14 = t;
        if(((t_14 != NULL) && (t_14 != u_14)))
          _fail(u_14);
        else
          t_14 = u_14;
      }
    }
  }
  t = a_22;
  {
    ATerm b_22;
    b_22 = t;
    {
      ATerm v_14 = NULL;
      ATerm w_14 = NULL;
      w_14 = t;
      if(((v_14 != NULL) && (v_14 != w_14)))
        _fail(w_14);
      else
        v_14 = w_14;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_14), not_null(v_14));
        t = call_0(t);
      }
    }
    t = b_22;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm b_73 (ATerm))
{
  ATerm e_15 = NULL,f_15 = NULL,g_15 = NULL;
  e_15 = t;
  d_15 :
  if(match_cons(e_15, sym__2))
    {
      f_15 = ATgetArgument(e_15, 0);
      g_15 = ATgetArgument(e_15, 1);
      {
        ATerm j_15 = NULL,k_15 = NULL,l_15 = NULL;
        ATerm c_22;
        c_22 = t;
        {
          ATerm m_15 = NULL;
          ATerm n_15 = NULL,o_15 = NULL,p_15 = NULL;
          t = b_73(t);
          {
            m_15 = t;
            {
              if(((j_15 != NULL) && (j_15 != m_15)))
                _fail(m_15);
              else
                j_15 = m_15;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(j_15), not_null(f_15), not_null(g_15));
                {
                  t = table_push_0(t);
                  {
                    ATerm d_22 = t;
                    int e_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(j_15), term_f_22);
                        t = table_get_0(t);
                        LocalPopChoice(e_22);
                      }
                    else
                      {
                        t = d_22;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      n_15 = t;
                      c_15 :
                      if(((ATgetType(n_15) == AT_LIST) && ((ATermList) n_15 != ATempty)))
                        {
                          o_15 = ATgetFirst((ATermList) n_15);
                          p_15 = (ATerm) ATgetNext((ATermList) n_15);
                          {
                            if(((k_15 != NULL) && (k_15 != o_15)))
                              _fail(o_15);
                            else
                              k_15 = o_15;
                            {
                              if(((l_15 != NULL) && (l_15 != p_15)))
                                _fail(p_15);
                              else
                                l_15 = p_15;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(j_15), term_f_22, (ATerm) ATinsert(CheckATermList(not_null(l_15)), (ATerm) ATinsert(CheckATermList(not_null(k_15)), not_null(f_15))));
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
        t = c_22;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm m_72 (ATerm))
{
  ATerm g_22;
  g_22 = t;
  {
    t = m_72(t);
    {
      ATerm n_4 (ATerm t)
      {
        t = term_h_22;
        return(t);
      }
      t = debug_1(t, n_4);
    }
  }
  t = g_22;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm x_15 = NULL,y_15 = NULL;
  ATerm i_22 = t;
  int j_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL;
      z_15 = t;
      u_15 :
      if(match_cons(z_15, sym__2))
        {
          a_16 = ATgetArgument(z_15, 0);
          b_16 = ATgetArgument(z_15, 1);
          {
            if(((y_15 != NULL) && (y_15 != a_16)))
              _fail(a_16);
            else
              y_15 = a_16;
            if(((x_15 != NULL) && (x_15 != b_16)))
              _fail(b_16);
            else
              x_15 = b_16;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(j_22);
      t = SSL_open_file(not_null(y_15), not_null(x_15));
    }
  else
    {
      t = i_22;
      {
        ATerm c_16 = NULL;
        ATerm d_16 = NULL;
        ATerm o_4 (ATerm t)
        {
          t = term_k_22;
          return(t);
        }
        t = obsolete_1(t, o_4);
        {
          c_16 = t;
          {
            if(((y_15 != NULL) && (y_15 != c_16)))
              _fail(c_16);
            else
              y_15 = c_16;
            {
              ATerm m_22;
              m_22 = t;
              {
                ATerm e_16 = NULL;
                t = term_n_22;
                {
                  e_16 = t;
                  if(((d_16 != NULL) && (d_16 != e_16)))
                    _fail(e_16);
                  else
                    d_16 = e_16;
                }
              }
              t = m_22;
              t = SSL_open_file(not_null(y_15), not_null(d_16));
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
  ATerm j_16 = NULL;
  ATerm k_16 = NULL;
  t = term_j_20;
  {
    t = new_0(t);
    {
      k_16 = t;
      if(((j_16 != NULL) && (j_16 != k_16)))
        _fail(k_16);
      else
        j_16 = k_16;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_16), term_o_22);
    {
      t = conc_strings_0(t);
      {
        ATerm p_4 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, p_4);
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm o_16 = NULL;
  t = new_file_0(t);
  {
    o_16 = t;
    {
      ATerm p_22;
      p_22 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_16), term_n_22);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(o_16), term_j_20);
            {
              ATerm u_4 (ATerm t)
              {
                t = term_y_22;
                return(t);
              }
              t = assert_1(t, u_4);
            }
          }
        }
      }
      t = p_22;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm p_0 (ATerm), ATerm q_0 (ATerm))
{
  ATerm y_16 = NULL,z_16 = NULL;
  y_16 = t;
  x_16 :
  if(match_cons(y_16, sym_stdin_0))
    {
      ATerm a_17 = NULL;
      ATerm b_17 = NULL;
      ATerm c_17 = NULL;
      t = xtc_new_file_0(t);
      {
        b_17 = t;
        {
          if(((a_17 != NULL) && (a_17 != b_17)))
            _fail(b_17);
          else
            a_17 = b_17;
          {
            ATerm d_17 = NULL;
            t = q_0(t);
            {
              d_17 = t;
              if(((c_17 != NULL) && (c_17 != d_17)))
                _fail(d_17);
              else
                c_17 = d_17;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(c_17), (ATerm) ATinsert(ATinsert(ATempty, not_null(a_17)), term_r_16));
              {
                t = conc_0(t);
                t = xtc_command_1(t, p_0);
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(a_17));
    }
  else
    {
      if(match_cons(y_16, sym_FILE_1))
        {
          z_16 = ATgetArgument(y_16, 0);
          {
            ATerm f_17 = NULL;
            ATerm g_17 = NULL;
            t = not_null(z_16);
            {
              ATerm h_17 = NULL;
              t = xtc_new_file_0(t);
              {
                g_17 = t;
                {
                  if(((f_17 != NULL) && (f_17 != g_17)))
                    _fail(g_17);
                  else
                    f_17 = g_17;
                  {
                    ATerm i_17 = NULL;
                    t = q_0(t);
                    {
                      i_17 = t;
                      if(((h_17 != NULL) && (h_17 != i_17)))
                        _fail(i_17);
                      else
                        h_17 = i_17;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(h_17), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(f_17)), term_r_16), not_null(z_16)), term_z_22));
                      {
                        t = conc_0(t);
                        t = xtc_command_1(t, p_0);
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_17));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm xtc_transform_2 (ATerm t, ATerm i_63 (ATerm), ATerm j_63 (ATerm))
{
  ATerm a_23 = t;
  int b_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_transform_file_2(t, i_63, j_63);
      LocalPopChoice(b_23);
    }
  else
    {
      t = a_23;
      t = xtc_transform_term_2(t, i_63, j_63);
    }
  return(t);
}
ATerm if_verbose3_1 (ATerm t, ATerm k_69 (ATerm))
{
  ATerm y_4 (ATerm t)
  {
    ATerm c_23;
    c_23 = t;
    {
      ATerm q_17 = NULL;
      ATerm r_17 = NULL;
      t = term_i_16;
      {
        t = get_config_0(t);
        {
          r_17 = t;
          if(((q_17 != NULL) && (q_17 != r_17)))
            _fail(r_17);
          else
            q_17 = r_17;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_17), term_e_23);
        t = geq_0(t);
      }
    }
    t = c_23;
    t = k_69(t);
    return(t);
  }
  t = try_1(t, y_4);
  return(t);
}
ATerm basename_1 (ATerm t, ATerm a_74 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm e_5 (ATerm t)
    {
      ATerm f_23 = t;
      int g_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Cons_2(t, _id, e_5);
          LocalPopChoice(g_23);
        }
      else
        {
          t = f_23;
          {
            ATerm h_23 = t;
            int m_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_5 (ATerm t)
                {
                  ATerm v_17 = NULL;
                  v_17 = t;
                  t_17 :
                  if(!(match_int(v_17, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = Cons_2(t, f_5, _id);
                LocalPopChoice(m_23);
              }
            else
              {
                t = h_23;
                {
                  ATerm g_5 (ATerm t)
                  {
                    ATerm w_17 = NULL;
                    w_17 = t;
                    u_17 :
                    if(!(match_int(w_17, 46)))
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = Cons_2(t, g_5, a_74);
                  t = (ATerm) ATempty;
                }
              }
          }
        }
      return(t);
    }
    t = try_1(t, e_5);
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
  ATerm c_18 = NULL,d_18 = NULL;
  c_18 = t;
  b_18 :
  if(match_cons(c_18, sym_FILE_1))
    {
      d_18 = ATgetArgument(c_18, 0);
      {
        ATerm f_18 = NULL,g_18 = NULL;
        ATerm h_18 = NULL;
        t = not_null(d_18);
        {
          ATerm i_18 = NULL;
          t = basename_0(t);
          {
            h_18 = t;
            {
              if(((f_18 != NULL) && (f_18 != h_18)))
                _fail(h_18);
              else
                f_18 = h_18;
              {
                ATerm h_5 (ATerm t)
                {
                  ATerm i_5 (ATerm t)
                  {
                    t = term_n_23;
                    return(t);
                  }
                  t = debug_1(t, i_5);
                  return(t);
                }
                t = if_verbose3_1(t, h_5);
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_o_23, not_null(f_18));
                  {
                    t = set_config_0(t);
                    {
                      ATerm v_23 = t;
                      int w_23 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = term_r_16;
                          {
                            t = get_config_0(t);
                            t = basename_0(t);
                          }
                          LocalPopChoice(w_23);
                        }
                      else
                        {
                          t = v_23;
                          t = not_null(f_18);
                        }
                      {
                        i_18 = t;
                        {
                          if(((g_18 != NULL) && (g_18 != i_18)))
                            _fail(i_18);
                          else
                            g_18 = i_18;
                          {
                            ATerm j_5 (ATerm t)
                            {
                              ATerm k_5 (ATerm t)
                              {
                                t = term_z_23;
                                return(t);
                              }
                              t = debug_1(t, k_5);
                              return(t);
                            }
                            t = if_verbose3_1(t, j_5);
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_r_20, not_null(g_18));
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
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_18));
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
    ATerm l_5 (ATerm t)
    {
      t = term_a_24;
      return(t);
    }
    ATerm p_5 (ATerm t)
    {
      ATerm q_18 = NULL,s_18 = NULL,u_18 = NULL,w_18 = NULL;
      ATerm d_24;
      d_24 = t;
      {
        ATerm r_18 = NULL;
        t = dep_name_0(t);
        {
          r_18 = t;
          if(((q_18 != NULL) && (q_18 != r_18)))
            _fail(r_18);
          else
            q_18 = r_18;
        }
      }
      t = d_24;
      {
        ATerm e_24;
        e_24 = t;
        {
          ATerm t_18 = NULL;
          t = pass_verbose_0(t);
          {
            t_18 = t;
            if(((s_18 != NULL) && (s_18 != t_18)))
              _fail(t_18);
            else
              s_18 = t_18;
          }
        }
        t = e_24;
        {
          ATerm g_24;
          g_24 = t;
          {
            ATerm v_18 = NULL;
            t = pass_keep_0(t);
            {
              v_18 = t;
              if(((u_18 != NULL) && (u_18 != v_18)))
                _fail(v_18);
              else
                u_18 = v_18;
            }
          }
          t = g_24;
          {
            ATerm x_18 = NULL;
            t = term_h_24;
            {
              t = get_config_0(t);
              {
                x_18 = t;
                if(((w_18 != NULL) && (w_18 != x_18)))
                  _fail(x_18);
                else
                  w_18 = x_18;
              }
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(u_18)), not_null(s_18)), not_null(w_18)), not_null(q_18));
              t = concat_0(t);
            }
          }
        }
      }
      return(t);
    }
    t = xtc_transform_2(t, l_5, p_5);
  }
  return(t);
}
ATerm front_end_0 (ATerm t)
{
  ATerm y_5 (ATerm t)
  {
    ATerm z_5 (ATerm t)
    {
      t = term_i_24;
      return(t);
    }
    t = debug_1(t, z_5);
    return(t);
  }
  t = if_verbose2_1(t, y_5);
  {
    ATerm a_6 (ATerm t)
    {
      ATerm c_6 (ATerm t)
      {
        ATerm d_19 = NULL;
        ATerm e_19 = NULL;
        e_19 = t;
        if(((d_19 != NULL) && (d_19 != e_19)))
          _fail(e_19);
        else
          d_19 = e_19;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_u_16, (ATerm) ATinsert(CheckATermList(not_null(d_19)), term_p_24));
          t = printnl_0(t);
        }
        return(t);
      }
      t = if_verbose1_1(t, c_6);
      return(t);
    }
    ATerm b_6 (ATerm t)
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
    t = profile_p__2(t, a_6, b_6);
  }
  return(t);
}
ATerm rename_file_0 (ATerm t)
{
  ATerm i_19 = NULL,j_19 = NULL,k_19 = NULL;
  i_19 = t;
  h_19 :
  if(match_cons(i_19, sym__2))
    {
      j_19 = ATgetArgument(i_19, 0);
      k_19 = ATgetArgument(i_19, 1);
      t = SSL_rename(not_null(j_19), not_null(k_19));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stdout_0 (ATerm t)
{
  ATerm s_19 = NULL;
  s_19 = t;
  r_19 :
  if(match_cons(s_19, sym_stdout_0))
    {
      ATerm u_19 = NULL,w_19 = NULL;
      ATerm q_24;
      q_24 = t;
      {
        ATerm v_19 = NULL;
        t = SSLgetAnnotations(not_null(s_19));
        {
          v_19 = t;
          if(((u_19 != NULL) && (u_19 != v_19)))
            _fail(v_19);
          else
            u_19 = v_19;
        }
      }
      t = q_24;
      {
        ATerm x_19 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(u_19));
        {
          x_19 = t;
          if(((w_19 != NULL) && (w_19 != x_19)))
            _fail(x_19);
          else
            w_19 = x_19;
        }
        t = not_null(w_19);
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
  ATerm h_20 = NULL,i_20 = NULL;
  h_20 = t;
  g_20 :
  if(match_cons(h_20, sym_FILE_1))
    {
      i_20 = ATgetArgument(h_20, 0);
      {
        ATerm r_24 = t;
        int s_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_20 = NULL;
            t = o_0(t);
            {
              k_20 = t;
              e_20 :
              if(match_cons(k_20, sym_stdout_0))
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(i_20), term_t_24);
                  {
                    t = copy_file_0(t);
                    {
                      t = not_null(i_20);
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
            LocalPopChoice(s_24);
          }
        else
          {
            t = r_24;
            {
              ATerm m_20 = NULL;
              ATerm n_20 = NULL;
              t = o_0(t);
              {
                n_20 = t;
                {
                  if(((m_20 != NULL) && (m_20 != n_20)))
                    _fail(n_20);
                  else
                    m_20 = n_20;
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
                      t = (ATerm) ATmakeAppl(sym__2, not_null(i_20), not_null(m_20));
                      t = rename_file_0(t);
                    }
                  }
                }
              }
              t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(m_20));
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
  ATerm u_20 = NULL,v_20 = NULL,w_20 = NULL;
  u_20 = t;
  t_20 :
  if(((ATgetType(u_20) == AT_LIST) && ((ATermList) u_20 != ATempty)))
    {
      v_20 = ATgetFirst((ATermList) u_20);
      w_20 = (ATerm) ATgetNext((ATermList) u_20);
      t = not_null(w_20);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm d_21 = NULL,e_21 = NULL,l_21 = NULL;
  d_21 = t;
  c_21 :
  if(match_cons(d_21, sym__2))
    {
      e_21 = ATgetArgument(d_21, 0);
      l_21 = ATgetArgument(d_21, 1);
      {
        ATerm z_24;
        z_24 = t;
        {
          ATerm o_21 = NULL;
          ATerm p_21 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_21), not_null(l_21));
          {
            ATerm a_25 = t;
            int b_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(b_25);
              }
            else
              {
                t = a_25;
                t = (ATerm) ATempty;
              }
            {
              p_21 = t;
              if(((o_21 != NULL) && (o_21 != p_21)))
                _fail(p_21);
              else
                o_21 = p_21;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(e_21), not_null(l_21), not_null(o_21));
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
ATerm end_scope_1 (ATerm t, ATerm y_72 (ATerm))
{
  ATerm q_22 = NULL,r_22 = NULL,s_22 = NULL;
  ATerm c_25;
  c_25 = t;
  {
    ATerm t_22 = NULL;
    ATerm u_22 = NULL,v_22 = NULL,w_22 = NULL;
    t = y_72(t);
    {
      t_22 = t;
      {
        if(((s_22 != NULL) && (s_22 != t_22)))
          _fail(t_22);
        else
          s_22 = t_22;
        {
          ATerm j_25 = t;
          int k_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(s_22), term_f_22);
              t = table_get_0(t);
              LocalPopChoice(k_25);
            }
          else
            {
              t = j_25;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            u_22 = t;
            l_22 :
            if(((ATgetType(u_22) == AT_LIST) && ((ATermList) u_22 != ATempty)))
              {
                v_22 = ATgetFirst((ATermList) u_22);
                w_22 = (ATerm) ATgetNext((ATermList) u_22);
                {
                  if(((r_22 != NULL) && (r_22 != v_22)))
                    _fail(v_22);
                  else
                    r_22 = v_22;
                  {
                    if(((q_22 != NULL) && (q_22 != w_22)))
                      _fail(w_22);
                    else
                      q_22 = w_22;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(s_22), term_f_22, not_null(q_22));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(r_22);
                          {
                            ATerm d_6 (ATerm t)
                            {
                              ATerm x_22 = NULL;
                              x_22 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(s_22), not_null(x_22));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, d_6);
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
  t = c_25;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm d_23 = NULL;
  d_23 = t;
  t = SSL_remove(not_null(d_23));
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm x_72 (ATerm))
{
  ATerm i_23 = NULL;
  ATerm l_25;
  l_25 = t;
  {
    ATerm j_23 = NULL;
    ATerm k_23 = NULL;
    t = x_72(t);
    {
      j_23 = t;
      {
        if(((i_23 != NULL) && (i_23 != j_23)))
          _fail(j_23);
        else
          i_23 = j_23;
        {
          ATerm l_23 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_23), term_f_22);
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
              l_23 = t;
              if(((k_23 != NULL) && (k_23 != l_23)))
                _fail(l_23);
              else
                k_23 = l_23;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(i_23), term_f_22, (ATerm) ATinsert(CheckATermList(not_null(k_23)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = l_25;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm e_63 (ATerm))
{
  ATerm q_23 = NULL,r_23 = NULL;
  ATerm e_6 (ATerm t)
  {
    t = term_y_22;
    return(t);
  }
  t = begin_scope_1(t, e_6);
  {
    t = e_63(t);
    {
      ATerm o_25;
      o_25 = t;
      {
        ATerm s_23 = NULL,t_23 = NULL,u_23 = NULL;
        ATerm p_25 = t;
        int q_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_r_25;
            t = table_get_0(t);
            LocalPopChoice(q_25);
          }
        else
          {
            t = p_25;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          s_23 = t;
          p_23 :
          if(((ATgetType(s_23) == AT_LIST) && ((ATermList) s_23 != ATempty)))
            {
              t_23 = ATgetFirst((ATermList) s_23);
              u_23 = (ATerm) ATgetNext((ATermList) s_23);
              {
                if(((r_23 != NULL) && (r_23 != t_23)))
                  _fail(t_23);
                else
                  r_23 = t_23;
                {
                  if(((q_23 != NULL) && (q_23 != u_23)))
                    _fail(u_23);
                  else
                    q_23 = u_23;
                  {
                    t = not_null(r_23);
                    {
                      ATerm f_6 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, f_6);
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
      t = o_25;
      {
        ATerm g_6 (ATerm t)
        {
          t = term_y_22;
          return(t);
        }
        t = end_scope_1(t, g_6);
      }
    }
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm f_63 (ATerm))
{
  ATerm h_6 (ATerm t)
  {
    ATerm s_25 = t;
    int t_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_23 = NULL;
        ATerm y_23 = NULL;
        t = term_z_22;
        {
          t = get_config_0(t);
          {
            y_23 = t;
            if(((x_23 != NULL) && (x_23 != y_23)))
              _fail(y_23);
            else
              x_23 = y_23;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(x_23));
        LocalPopChoice(t_25);
      }
    else
      {
        t = s_25;
        t = term_z_21;
      }
    {
      t = f_63(t);
      {
        ATerm l_6 (ATerm t)
        {
          ATerm u_25 = t;
          int v_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_r_16;
              t = get_config_0(t);
              LocalPopChoice(v_25);
            }
          else
            {
              t = u_25;
              t = term_t_24;
            }
          return(t);
        }
        t = rename_to_1(t, l_6);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, h_6);
  return(t);
}
ATerm compile_0 (ATerm t)
{
  ATerm u_6 (ATerm t)
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
  t = xtc_io_1(t, u_6);
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm i_69 (ATerm))
{
  ATerm v_6 (ATerm t)
  {
    ATerm w_25;
    w_25 = t;
    {
      ATerm b_24 = NULL;
      ATerm c_24 = NULL;
      t = term_i_16;
      {
        t = get_config_0(t);
        {
          c_24 = t;
          if(((b_24 != NULL) && (b_24 != c_24)))
            _fail(c_24);
          else
            b_24 = c_24;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_24), term_s_21);
        t = geq_0(t);
      }
    }
    t = w_25;
    t = i_69(t);
    return(t);
  }
  t = try_1(t, v_6);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm f_24 = NULL;
  f_24 = t;
  t = SSL_TicksToSeconds(not_null(f_24));
  return(t);
}
ATerm self_children_sys_time_0 (ATerm t)
{
  ATerm k_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL,o_24 = NULL;
  k_24 = t;
  j_24 :
  if(match_cons(k_24, sym__4))
    {
      l_24 = ATgetArgument(k_24, 0);
      m_24 = ATgetArgument(k_24, 1);
      n_24 = ATgetArgument(k_24, 2);
      o_24 = ATgetArgument(k_24, 3);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_24), not_null(o_24));
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
  ATerm w_24 = NULL,x_24 = NULL,y_24 = NULL;
  w_24 = t;
  v_24 :
  if(match_cons(w_24, sym__2))
    {
      x_24 = ATgetArgument(w_24, 0);
      y_24 = ATgetArgument(w_24, 1);
      {
        ATerm x_25 = t;
        int y_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(x_24), not_null(y_24));
            LocalPopChoice(y_25);
          }
        else
          {
            t = x_25;
            t = SSL_addr(not_null(x_24), not_null(y_24));
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
  ATerm e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL;
  e_25 = t;
  d_25 :
  if(match_cons(e_25, sym__4))
    {
      f_25 = ATgetArgument(e_25, 0);
      g_25 = ATgetArgument(e_25, 1);
      h_25 = ATgetArgument(e_25, 2);
      i_25 = ATgetArgument(e_25, 3);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_25), not_null(h_25));
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
  ATerm o_26 = NULL,p_26 = NULL,q_26 = NULL;
  o_26 = t;
  n_26 :
  if(match_cons(o_26, sym__2))
    {
      p_26 = ATgetArgument(o_26, 0);
      q_26 = ATgetArgument(o_26, 1);
      {
        ATerm z_25 = t;
        int a_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(p_26), not_null(q_26));
            LocalPopChoice(a_26);
          }
        else
          {
            t = z_25;
            t = SSL_subtr(not_null(p_26), not_null(q_26));
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
  ATerm g_27 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL,o_27 = NULL,p_27 = NULL,q_27 = NULL;
  g_27 = t;
  z_26 :
  if(match_cons(g_27, sym__2))
    {
      h_27 = ATgetArgument(g_27, 0);
      m_27 = ATgetArgument(g_27, 1);
      a_27 :
      if(match_cons(h_27, sym__4))
        {
          i_27 = ATgetArgument(h_27, 0);
          j_27 = ATgetArgument(h_27, 1);
          k_27 = ATgetArgument(h_27, 2);
          l_27 = ATgetArgument(h_27, 3);
          b_27 :
          if(match_cons(m_27, sym__4))
            {
              n_27 = ATgetArgument(m_27, 0);
              o_27 = ATgetArgument(m_27, 1);
              p_27 = ATgetArgument(m_27, 2);
              q_27 = ATgetArgument(m_27, 3);
              {
                ATerm b_28 = NULL,d_28 = NULL,f_28 = NULL,h_28 = NULL;
                ATerm b_26;
                b_26 = t;
                {
                  ATerm c_28 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(i_27), not_null(n_27));
                  {
                    t = subt_0(t);
                    {
                      c_28 = t;
                      if(((b_28 != NULL) && (b_28 != c_28)))
                        _fail(c_28);
                      else
                        b_28 = c_28;
                    }
                  }
                }
                t = b_26;
                {
                  ATerm c_26;
                  c_26 = t;
                  {
                    ATerm e_28 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(j_27), not_null(o_27));
                    {
                      t = subt_0(t);
                      {
                        e_28 = t;
                        if(((d_28 != NULL) && (d_28 != e_28)))
                          _fail(e_28);
                        else
                          d_28 = e_28;
                      }
                    }
                  }
                  t = c_26;
                  {
                    ATerm d_26;
                    d_26 = t;
                    {
                      ATerm g_28 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(k_27), not_null(p_27));
                      {
                        t = subt_0(t);
                        {
                          g_28 = t;
                          if(((f_28 != NULL) && (f_28 != g_28)))
                            _fail(g_28);
                          else
                            f_28 = g_28;
                        }
                      }
                    }
                    t = d_26;
                    {
                      ATerm i_28 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(l_27), not_null(q_27));
                      {
                        t = subt_0(t);
                        {
                          i_28 = t;
                          if(((h_28 != NULL) && (h_28 != i_28)))
                            _fail(i_28);
                          else
                            h_28 = i_28;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym__4, not_null(b_28), not_null(d_28), not_null(f_28), not_null(h_28));
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
ATerm profile_p__2 (ATerm t, ATerm a_72 (ATerm), ATerm b_72 (ATerm))
{
  ATerm z_28 = NULL;
  ATerm e_26;
  e_26 = t;
  {
    ATerm a_29 = NULL;
    t = times_0(t);
    {
      a_29 = t;
      if(((z_28 != NULL) && (z_28 != a_29)))
        _fail(a_29);
      else
        z_28 = a_29;
    }
  }
  t = e_26;
  {
    t = b_72(t);
    {
      ATerm f_26;
      f_26 = t;
      {
        ATerm b_29 = NULL,d_29 = NULL,f_29 = NULL;
        ATerm c_29 = NULL;
        t = times_0(t);
        {
          c_29 = t;
          if(((b_29 != NULL) && (b_29 != c_29)))
            _fail(c_29);
          else
            b_29 = c_29;
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_29), not_null(z_28));
          {
            t = diff_times_0(t);
            {
              ATerm g_26;
              g_26 = t;
              {
                ATerm e_29 = NULL;
                t = self_children_user_time_0(t);
                {
                  t = ticks_to_seconds_0(t);
                  {
                    e_29 = t;
                    if(((d_29 != NULL) && (d_29 != e_29)))
                      _fail(e_29);
                    else
                      d_29 = e_29;
                  }
                }
              }
              t = g_26;
              {
                ATerm g_29 = NULL;
                t = self_children_sys_time_0(t);
                {
                  t = ticks_to_seconds_0(t);
                  {
                    g_29 = t;
                    if(((f_29 != NULL) && (f_29 != g_29)))
                      _fail(g_29);
                    else
                      f_29 = g_29;
                  }
                }
                {
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(f_29)), term_i_26), not_null(d_29)), term_h_26);
                  t = a_72(t);
                }
              }
            }
          }
        }
      }
      t = f_26;
    }
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm f_72 (ATerm))
{
  ATerm j_26;
  j_26 = t;
  {
    ATerm v_29 = NULL,x_29 = NULL;
    ATerm k_26;
    k_26 = t;
    {
      ATerm w_29 = NULL;
      t = f_72(t);
      {
        w_29 = t;
        if(((v_29 != NULL) && (v_29 != w_29)))
          _fail(w_29);
        else
          v_29 = w_29;
      }
    }
    t = k_26;
    {
      ATerm a_30 = NULL;
      a_30 = t;
      if(((x_29 != NULL) && (x_29 != a_30)))
        _fail(a_30);
      else
        x_29 = a_30;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_29)), not_null(v_29)));
        t = printnl_0(t);
      }
    }
  }
  t = j_26;
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm p_30 = NULL;
  p_30 = t;
  t = SSL_implode_string(not_null(p_30));
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm t_30 = NULL;
  t_30 = t;
  t = SSL_explode_string(not_null(t_30));
  return(t);
}
ATerm _2 (ATerm t, ATerm g_51 (ATerm), ATerm h_51 (ATerm))
{
  ATerm l_31 = NULL,m_31 = NULL,n_31 = NULL;
  l_31 = t;
  k_31 :
  if(match_cons(l_31, sym__2))
    {
      m_31 = ATgetArgument(l_31, 0);
      n_31 = ATgetArgument(l_31, 1);
      {
        ATerm r_31 = NULL,t_31 = NULL;
        ATerm s_31 = NULL;
        t = SSLgetAnnotations(not_null(l_31));
        {
          s_31 = t;
          if(((r_31 != NULL) && (r_31 != s_31)))
            _fail(s_31);
          else
            r_31 = s_31;
        }
        {
          t = not_null(m_31);
          {
            ATerm v_31 = NULL;
            t = g_51(t);
            {
              t_31 = t;
              {
                t = not_null(n_31);
                {
                  ATerm x_31 = NULL;
                  t = h_51(t);
                  {
                    v_31 = t;
                    {
                      ATerm y_31 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(t_31), not_null(v_31)), not_null(r_31));
                      {
                        y_31 = t;
                        if(((x_31 != NULL) && (x_31 != y_31)))
                          _fail(y_31);
                        else
                          x_31 = y_31;
                      }
                      t = not_null(x_31);
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
  ATerm f_32 = NULL;
  f_32 = t;
  t = SSL_is_string(not_null(f_32));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm l_26 = t;
  int m_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(m_26);
    }
  else
    {
      t = l_26;
      {
        ATerm r_26 = t;
        int s_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_6 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, w_6);
            LocalPopChoice(s_26);
          }
        else
          {
            t = r_26;
            {
              ATerm a_33 = NULL,b_33 = NULL,c_33 = NULL;
              a_33 = t;
              x_32 :
              if(match_cons(a_33, sym_Path_1))
                {
                  b_33 = ATgetArgument(a_33, 0);
                  t = not_null(b_33);
                }
              else
                {
                  if(match_cons(a_33, sym_Var_1))
                    {
                      b_33 = ATgetArgument(a_33, 0);
                      {
                        t = not_null(b_33);
                        {
                          ATerm t_26 = t;
                          int u_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(u_26);
                            }
                          else
                            {
                              t = t_26;
                              {
                                ATerm x_6 (ATerm t)
                                {
                                  t = term_v_26;
                                  return(t);
                                }
                                t = debug_1(t, x_6);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(a_33, sym_Prefix_2))
                        {
                          b_33 = ATgetArgument(a_33, 0);
                          c_33 = ATgetArgument(a_33, 1);
                          {
                            ATerm m_33 = NULL,o_33 = NULL;
                            ATerm w_26;
                            w_26 = t;
                            {
                              ATerm n_33 = NULL;
                              t = not_null(b_33);
                              {
                                t = eval_config_0(t);
                                {
                                  n_33 = t;
                                  if(((m_33 != NULL) && (m_33 != n_33)))
                                    _fail(n_33);
                                  else
                                    m_33 = n_33;
                                }
                              }
                            }
                            t = w_26;
                            {
                              ATerm p_33 = NULL;
                              t = not_null(c_33);
                              {
                                t = eval_config_0(t);
                                {
                                  p_33 = t;
                                  if(((o_33 != NULL) && (o_33 != p_33)))
                                    _fail(p_33);
                                  else
                                    o_33 = p_33;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(m_33), not_null(o_33));
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
  ATerm x_33 = NULL;
  x_33 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_x_26, not_null(x_33));
    {
      t = table_get_0(t);
      {
        ATerm y_6 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm y_26;
            y_26 = t;
            {
              ATerm j_34 = NULL;
              ATerm k_34 = NULL;
              k_34 = t;
              if(((j_34 != NULL) && (j_34 != k_34)))
                _fail(k_34);
              else
                j_34 = k_34;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_x_26, not_null(x_33), not_null(j_34));
                t = table_put_0(t);
              }
            }
            t = y_26;
          }
          return(t);
        }
        t = try_1(t, y_6);
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
  ATerm c_27;
  c_27 = t;
  {
    t = error_0(t);
    {
      t = term_s_21;
      t = exit_0(t);
    }
  }
  t = c_27;
  return(t);
}
ATerm sc_version_0 (ATerm t)
{
  ATerm d_27;
  d_27 = t;
  {
    ATerm q_34 = NULL;
    ATerm r_34 = NULL;
    t = term_e_27;
    {
      t = get_config_0(t);
      {
        r_34 = t;
        if(((q_34 != NULL) && (q_34 != r_34)))
          _fail(r_34);
        else
          q_34 = r_34;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_24, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_27), term_w_27), term_v_27), term_u_27), term_t_27), term_s_27), term_r_27), not_null(q_34)), term_f_27));
      t = printnl_0(t);
    }
  }
  t = d_27;
  return(t);
}
ATerm try_1 (ATerm t, ATerm q_90 (ATerm))
{
  ATerm y_27 = t;
  int z_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_90(t);
      LocalPopChoice(z_27);
    }
  else
    {
      t = y_27;
      {
      }
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm x_34 = NULL,y_34 = NULL,z_34 = NULL;
  x_34 = t;
  w_34 :
  if(match_cons(x_34, sym__2))
    {
      y_34 = ATgetArgument(x_34, 0);
      z_34 = ATgetArgument(x_34, 1);
      t = SSL_copy(not_null(y_34), not_null(z_34));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm e_35 = NULL;
  e_35 = t;
  t = SSL_table_keys(not_null(e_35));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm k_35 = NULL;
  k_35 = t;
  {
    t = table_keys_0(t);
    {
      ATerm z_6 (ATerm t)
      {
        ATerm m_35 = NULL;
        ATerm q_35 = NULL;
        m_35 = t;
        {
          ATerm r_35 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_35), not_null(m_35));
          {
            t = table_get_0(t);
            {
              r_35 = t;
              if(((q_35 != NULL) && (q_35 != r_35)))
                _fail(r_35);
              else
                q_35 = r_35;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_35), not_null(q_35));
        }
        return(t);
      }
      t = map_1(t, z_6);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm m_69 (ATerm))
{
  ATerm c_7 (ATerm t)
  {
    ATerm a_28;
    a_28 = t;
    {
      ATerm x_35 = NULL;
      ATerm a_36 = NULL;
      t = term_i_16;
      {
        t = get_config_0(t);
        {
          a_36 = t;
          if(((x_35 != NULL) && (x_35 != a_36)))
            _fail(a_36);
          else
            x_35 = a_36;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_35), term_j_28);
        t = geq_0(t);
      }
    }
    t = a_28;
    t = m_69(t);
    return(t);
  }
  t = try_1(t, c_7);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm k_28;
  k_28 = t;
  {
    ATerm d_36 = NULL;
    ATerm e_36 = NULL;
    e_36 = t;
    if(((d_36 != NULL) && (d_36 != e_36)))
      _fail(e_36);
    else
      d_36 = e_36;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_16, not_null(d_36));
      t = printnl_0(t);
    }
  }
  t = k_28;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm k_36 = NULL;
  ATerm m_36 = NULL,n_36 = NULL;
  k_36 = t;
  {
    ATerm o_36 = NULL,p_36 = NULL,q_36 = NULL,r_36 = NULL,s_36 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_l_28, (ATerm) ATmakeAppl(sym_Tool_1, not_null(k_36)));
    {
      t = table_get_0(t);
      {
        o_36 = t;
        i_36 :
        if(((ATgetType(o_36) == AT_LIST) && ((ATermList) o_36 != ATempty)))
          {
            p_36 = ATgetFirst((ATermList) o_36);
            s_36 = (ATerm) ATgetNext((ATermList) o_36);
            j_36 :
            if(match_cons(p_36, sym__2))
              {
                q_36 = ATgetArgument(p_36, 0);
                r_36 = ATgetArgument(p_36, 1);
                {
                  if(((m_36 != NULL) && (m_36 != q_36)))
                    _fail(q_36);
                  else
                    m_36 = q_36;
                  if(((n_36 != NULL) && (n_36 != r_36)))
                    _fail(r_36);
                  else
                    n_36 = r_36;
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
    t = not_null(n_36);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm z_36 = NULL,a_37 = NULL,b_37 = NULL;
  z_36 = t;
  y_36 :
  if(match_cons(z_36, sym__2))
    {
      a_37 = ATgetArgument(z_36, 0);
      b_37 = ATgetArgument(z_36, 1);
      {
        ATerm e_37 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_l_28, (ATerm) ATmakeAppl(sym_Tool_1, not_null(a_37)));
        {
          t = table_get_0(t);
          {
            ATerm d_7 (ATerm t)
            {
              ATerm f_37 = NULL,g_37 = NULL,h_37 = NULL;
              f_37 = t;
              x_36 :
              if(match_cons(f_37, sym__2))
                {
                  g_37 = ATgetArgument(f_37, 0);
                  h_37 = ATgetArgument(f_37, 1);
                  {
                    if(((b_37 != NULL) && (b_37 != g_37)))
                      _fail(g_37);
                    else
                      b_37 = g_37;
                    if(((e_37 != NULL) && (e_37 != h_37)))
                      _fail(h_37);
                    else
                      e_37 = h_37;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, d_7);
          }
        }
        t = not_null(e_37);
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
  ATerm g_7 (ATerm t)
  {
    t = term_n_28;
    {
      t = table_get_0(t);
      {
        ATerm h_7 (ATerm t)
        {
          t = try_1(t, xtc_read_0);
          return(t);
        }
        t = map_1(t, h_7);
      }
    }
    return(t);
  }
  t = try_1(t, g_7);
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm l_69 (ATerm))
{
  ATerm i_7 (ATerm t)
  {
    ATerm o_28;
    o_28 = t;
    {
      ATerm l_37 = NULL;
      ATerm m_37 = NULL;
      t = term_i_16;
      {
        t = get_config_0(t);
        {
          m_37 = t;
          if(((l_37 != NULL) && (l_37 != m_37)))
            _fail(m_37);
          else
            l_37 = m_37;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_37), term_p_28);
        t = geq_0(t);
      }
    }
    t = o_28;
    t = l_69(t);
    return(t);
  }
  t = try_1(t, i_7);
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm t_37 = NULL,u_37 = NULL,v_37 = NULL;
  t_37 = t;
  s_37 :
  if(match_cons(t_37, sym__2))
    {
      u_37 = ATgetArgument(t_37, 0);
      v_37 = ATgetArgument(t_37, 1);
      {
        ATerm q_28;
        q_28 = t;
        {
          ATerm r_28 = t;
          int s_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(u_37), not_null(v_37));
              LocalPopChoice(s_28);
            }
          else
            {
              t = r_28;
              t = SSL_gtr(not_null(u_37), not_null(v_37));
            }
        }
        t = q_28;
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
  ATerm b_38 = NULL;
  ATerm t_28 = t;
  int u_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_38 = NULL,d_38 = NULL,e_38 = NULL;
      c_38 = t;
      a_38 :
      if(match_cons(c_38, sym__2))
        {
          d_38 = ATgetArgument(c_38, 0);
          e_38 = ATgetArgument(c_38, 1);
          {
            if(((b_38 != NULL) && (b_38 != d_38)))
              _fail(d_38);
            else
              b_38 = d_38;
            if(((b_38 != NULL) && (b_38 != e_38)))
              _fail(e_38);
            else
              b_38 = e_38;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(u_28);
    }
  else
    {
      t = t_28;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm n_69 (ATerm))
{
  ATerm j_7 (ATerm t)
  {
    ATerm v_28;
    v_28 = t;
    {
      ATerm h_38 = NULL;
      ATerm i_38 = NULL;
      t = term_i_16;
      {
        t = get_config_0(t);
        {
          i_38 = t;
          if(((h_38 != NULL) && (h_38 != i_38)))
            _fail(i_38);
          else
            h_38 = i_38;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_38), term_w_28);
        t = geq_0(t);
      }
    }
    t = v_28;
    t = n_69(t);
    return(t);
  }
  t = try_1(t, j_7);
  return(t);
}
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm m_38 = NULL,n_38 = NULL,o_38 = NULL;
  m_38 = t;
  l_38 :
  if(match_cons(m_38, sym__2))
    {
      n_38 = ATgetArgument(m_38, 0);
      o_38 = ATgetArgument(m_38, 1);
      if(((n_38 != NULL) && (n_38 != o_38)))
        _fail(o_38);
      else
        n_38 = o_38;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm n_77 (ATerm), ATerm o_77 (ATerm))
{
  ATerm u_38 = NULL,v_38 = NULL,w_38 = NULL;
  u_38 = t;
  t_38 :
  if(((ATgetType(u_38) == AT_LIST) && ((ATermList) u_38 != ATempty)))
    {
      v_38 = ATgetFirst((ATermList) u_38);
      w_38 = (ATerm) ATgetNext((ATermList) u_38);
      {
        t = o_77(t);
        {
          ATerm q_7 (ATerm t)
          {
            ATerm z_38 = NULL;
            z_38 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(v_38), not_null(z_38));
              t = n_77(t);
            }
            return(t);
          }
          t = fetch_1(t, q_7);
        }
        t = not_null(w_38);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm p_77 (ATerm))
{
  ATerm f_39 = NULL,g_39 = NULL,h_39 = NULL;
  f_39 = t;
  e_39 :
  if(match_cons(f_39, sym__2))
    {
      g_39 = ATgetArgument(f_39, 0);
      h_39 = ATgetArgument(f_39, 1);
      {
        t = not_null(g_39);
        {
          ATerm l_39 (ATerm t)
          {
            ATerm x_28 = t;
            int y_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(h_39);
                LocalPopChoice(y_28);
              }
            else
              {
                t = x_28;
                {
                  ATerm h_29 = t;
                  int i_29 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm r_7 (ATerm t)
                      {
                        t = not_null(h_39);
                        return(t);
                      }
                      t = HdMember_p__2(t, p_77, r_7);
                      t = l_39(t);
                      LocalPopChoice(i_29);
                    }
                  else
                    {
                      t = h_29;
                      t = Cons_2(t, _id, l_39);
                    }
                }
              }
            return(t);
          }
          t = l_39(t);
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
  ATerm q_39 = NULL,r_39 = NULL,s_39 = NULL,t_39 = NULL;
  q_39 = t;
  p_39 :
  if(match_cons(q_39, sym__3))
    {
      r_39 = ATgetArgument(q_39, 0);
      s_39 = ATgetArgument(q_39, 1);
      t_39 = ATgetArgument(q_39, 2);
      {
        ATerm j_29;
        j_29 = t;
        {
          ATerm x_39 = NULL;
          ATerm y_39 = NULL,a_40 = NULL;
          ATerm z_39 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_39), not_null(s_39));
          {
            ATerm k_29 = t;
            int l_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                LocalPopChoice(l_29);
              }
            else
              {
                t = k_29;
                t = (ATerm) ATempty;
              }
            {
              z_39 = t;
              if(((y_39 != NULL) && (y_39 != z_39)))
                _fail(z_39);
              else
                y_39 = z_39;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(y_39), not_null(t_39));
            {
              t = union_0(t);
              {
                a_40 = t;
                if(((x_39 != NULL) && (x_39 != a_40)))
                  _fail(a_40);
                else
                  x_39 = a_40;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(r_39), not_null(s_39), not_null(x_39));
            t = set_0(t);
          }
        }
        t = j_29;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm i_66 (ATerm))
{
  ATerm i_40 = NULL,j_40 = NULL,k_40 = NULL;
  i_40 = t;
  h_40 :
  if(match_cons(i_40, sym__2))
    {
      j_40 = ATgetArgument(i_40, 0);
      k_40 = ATgetArgument(i_40, 1);
      {
        t = not_null(k_40);
        {
          ATerm s_7 (ATerm t)
          {
            ATerm n_40 = NULL,o_40 = NULL,p_40 = NULL;
            n_40 = t;
            g_40 :
            if(match_cons(n_40, sym__2))
              {
                o_40 = ATgetArgument(n_40, 0);
                p_40 = ATgetArgument(n_40, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(j_40), not_null(o_40), not_null(p_40));
                  t = i_66(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, s_7);
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
  ATerm w_40 = NULL;
  ATerm y_40 = NULL;
  w_40 = t;
  {
    ATerm m_29;
    m_29 = t;
    {
      ATerm z_40 = NULL;
      t = term_n_29;
      {
        z_40 = t;
        if(((y_40 != NULL) && (y_40 != z_40)))
          _fail(z_40);
        else
          y_40 = z_40;
      }
    }
    t = m_29;
    {
      t = SSL_open_file(not_null(w_40), not_null(y_40));
      t = SSL_close_file(not_null(w_40));
    }
  }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm e_41 = NULL;
  ATerm g_41 = NULL;
  e_41 = t;
  {
    ATerm o_29 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_28, (ATerm) ATmakeAppl(sym_Imported_1, not_null(e_41)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_29;
      }
    {
      ATerm p_29;
      p_29 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_l_28, term_q_29, (ATerm) ATinsert(ATempty, not_null(e_41)));
        t = table_put_0(t);
      }
      t = p_29;
      {
        ATerm t_7 (ATerm t)
        {
          ATerm w_7 (ATerm t)
          {
            t = term_r_29;
            return(t);
          }
          t = debug_1(t, w_7);
          return(t);
        }
        t = if_verbose4_1(t, t_7);
        {
          ATerm s_29 = t;
          int t_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(t_29);
            }
          else
            {
              t = s_29;
              t = (ATerm) ATempty;
            }
          {
            ATerm x_7 (ATerm t)
            {
              ATerm a_8 (ATerm t)
              {
                t = term_u_29;
                return(t);
              }
              t = say_1(t, a_8);
              return(t);
            }
            t = if_verbose6_1(t, x_7);
            {
              ATerm h_41 = NULL;
              h_41 = t;
              if(((g_41 != NULL) && (g_41 != h_41)))
                _fail(h_41);
              else
                g_41 = h_41;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_l_28, not_null(g_41));
                {
                  t = table_putlist_1(t, table_append_0);
                  {
                    ATerm b_8 (ATerm t)
                    {
                      ATerm e_8 (ATerm t)
                      {
                        t = term_y_29;
                        return(t);
                      }
                      t = say_1(t, e_8);
                      return(t);
                    }
                    t = if_verbose6_1(t, b_8);
                    {
                      t = (ATerm) ATmakeAppl(sym__3, term_l_28, (ATerm)ATmakeAppl(sym_Imported_1, not_null(e_41)), (ATerm) ATempty);
                      {
                        t = table_put_0(t);
                        {
                          ATerm f_8 (ATerm t)
                          {
                            ATerm i_8 (ATerm t)
                            {
                              t = term_u_29;
                              return(t);
                            }
                            t = say_1(t, i_8);
                            return(t);
                          }
                          t = if_verbose4_1(t, f_8);
                        }
                      }
                    }
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
  ATerm q_41 = NULL;
  q_41 = t;
  t = SSL_getenv(not_null(q_41));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm z_29 = t;
  int b_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_30;
      t = get_config_0(t);
      LocalPopChoice(b_30);
    }
  else
    {
      t = z_29;
      {
        ATerm d_30 = t;
        int e_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_f_30;
            t = getenv_0(t);
            LocalPopChoice(e_30);
          }
        else
          {
            t = d_30;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm j_8 (ATerm t)
  {
    ATerm m_8 (ATerm t)
    {
      t = term_g_30;
      return(t);
    }
    t = debug_1(t, m_8);
    return(t);
  }
  t = if_verbose5_1(t, j_8);
  {
    ATerm h_30;
    h_30 = t;
    {
      ATerm i_30 = t;
      int j_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_k_30;
          t = table_get_0(t);
          LocalPopChoice(j_30);
        }
      else
        {
          t = i_30;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = h_30;
    {
      ATerm n_8 (ATerm t)
      {
        ATerm q_8 (ATerm t)
        {
          t = term_l_30;
          return(t);
        }
        t = debug_1(t, q_8);
        return(t);
      }
      t = if_verbose5_1(t, n_8);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm m_30 = t;
  int n_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_8 (ATerm t)
      {
        ATerm u_8 (ATerm t)
        {
          t = term_o_30;
          return(t);
        }
        t = debug_1(t, u_8);
        return(t);
      }
      t = if_verbose5_1(t, r_8);
      {
        t = xtc_load_0(t);
        {
          ATerm q_30 = t;
          int r_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(r_30);
            }
          else
            {
              t = q_30;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm v_8 (ATerm t)
            {
              ATerm y_8 (ATerm t)
              {
                t = term_o_30;
                return(t);
              }
              t = debug_1(t, y_8);
              return(t);
            }
            t = if_verbose5_1(t, v_8);
          }
        }
      }
      LocalPopChoice(n_30);
    }
  else
    {
      t = m_30;
      {
        ATerm u_41 = NULL;
        ATerm v_41 = NULL;
        v_41 = t;
        if(((u_41 != NULL) && (u_41 != v_41)))
          _fail(v_41);
        else
          u_41 = v_41;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_30), not_null(u_41)), term_s_30);
          {
            t = error_0(t);
            {
              ATerm z_8 (ATerm t)
              {
                t = term_l_28;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm c_9 (ATerm t)
                    {
                      t = term_v_30;
                      return(t);
                    }
                    t = debug_1(t, c_9);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, z_8);
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
  ATerm y_41 = NULL;
  y_41 = t;
  t = SSL_string_to_int(not_null(y_41));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm g_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL,k_42 = NULL;
  g_42 = t;
  e_42 :
  if(match_string(g_42, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(g_42) == AT_LIST) && ((ATermList) g_42 != ATempty)))
        {
          h_42 = ATgetFirst((ATermList) g_42);
          i_42 = (ATerm) ATgetNext((ATermList) g_42);
          f_42 :
          if(((ATgetType(i_42) == AT_LIST) && ((ATermList) i_42 != ATempty)))
            {
              j_42 = ATgetFirst((ATermList) i_42);
              k_42 = (ATerm) ATgetNext((ATermList) i_42);
              {
                ATerm q_42 = NULL;
                ATerm w_30;
                w_30 = t;
                {
                  t = not_null(h_42);
                  t = j_0(t);
                }
                t = w_30;
                {
                  ATerm r_42 = NULL;
                  t = not_null(j_42);
                  {
                    t = k_0(t);
                    {
                      r_42 = t;
                      if(((q_42 != NULL) && (q_42 != r_42)))
                        _fail(r_42);
                      else
                        q_42 = r_42;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(k_42)), not_null(q_42));
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
  ATerm z_42 = NULL,a_43 = NULL,b_43 = NULL;
  z_42 = t;
  y_42 :
  if(match_cons(z_42, sym__2))
    {
      a_43 = ATgetArgument(z_42, 0);
      b_43 = ATgetArgument(z_42, 1);
      {
        ATerm e_43 = NULL;
        ATerm f_43 = NULL,h_43 = NULL;
        ATerm g_43 = NULL;
        t = not_null(a_43);
        {
          ATerm x_30 = t;
          int y_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(y_30);
            }
          else
            {
              t = x_30;
              t = (ATerm) ATempty;
            }
          {
            g_43 = t;
            if(((f_43 != NULL) && (f_43 != g_43)))
              _fail(g_43);
            else
              f_43 = g_43;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_43), not_null(f_43));
          {
            t = conc_0(t);
            {
              h_43 = t;
              if(((e_43 != NULL) && (e_43 != h_43)))
                _fail(h_43);
              else
                e_43 = h_43;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_x_26, not_null(a_43), not_null(e_43));
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
  ATerm n_43 = NULL,o_43 = NULL;
  ATerm z_30;
  z_30 = t;
  {
    ATerm p_43 = NULL,q_43 = NULL,r_43 = NULL;
    p_43 = t;
    m_43 :
    if(match_cons(p_43, sym__2))
      {
        q_43 = ATgetArgument(p_43, 0);
        r_43 = ATgetArgument(p_43, 1);
        {
          if(((n_43 != NULL) && (n_43 != q_43)))
            _fail(q_43);
          else
            n_43 = q_43;
          {
            if(((o_43 != NULL) && (o_43 != r_43)))
              _fail(r_43);
            else
              o_43 = r_43;
            t = SSL_table_remove(not_null(n_43), not_null(o_43));
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = z_30;
  return(t);
}
ATerm toggle_config_0 (ATerm t)
{
  ATerm a_44 = NULL,b_44 = NULL,c_44 = NULL;
  a_44 = t;
  z_43 :
  if(match_cons(a_44, sym__2))
    {
      b_44 = ATgetArgument(a_44, 0);
      c_44 = ATgetArgument(a_44, 1);
      {
        ATerm a_31 = t;
        int b_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = not_null(b_44);
            {
              t = get_config_0(t);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_x_26, not_null(b_44));
                t = table_remove_0(t);
              }
            }
            LocalPopChoice(b_31);
          }
        else
          {
            t = a_31;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(b_44), not_null(c_44));
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
  ATerm c_31 = t;
  int d_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(d_31);
    }
  else
    {
      t = c_31;
      {
        ATerm j_44 = NULL,k_44 = NULL,l_44 = NULL;
        j_44 = t;
        i_44 :
        if(((ATgetType(j_44) == AT_LIST) && ((ATermList) j_44 != ATempty)))
          {
            k_44 = ATgetFirst((ATermList) j_44);
            l_44 = (ATerm) ATgetNext((ATermList) j_44);
            {
              t = not_null(k_44);
              {
                ATerm d_9 (ATerm t)
                {
                  t = not_null(l_44);
                  t = concat_0(t);
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
    ATerm a_45 = NULL,b_45 = NULL,c_45 = NULL;
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
              b_45 = ATgetArgument(a_45, 0);
              c_45 = ATgetArgument(a_45, 1);
              u_44 :
              if(match_string(b_45, ""))
                {
                  if(((x_44 != NULL) && (x_44 != c_45)))
                    _fail(c_45);
                  else
                    x_44 = c_45;
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
ATerm at_end_1 (ATerm t, ATerm l_82 (ATerm))
{
  ATerm g_45 (ATerm t)
  {
    ATerm e_31 = t;
    int f_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, g_45);
        LocalPopChoice(f_31);
      }
    else
      {
        t = e_31;
        {
          t = Nil_0(t);
          t = l_82(t);
        }
      }
    return(t);
  }
  t = g_45(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm j_45 = NULL,k_45 = NULL,l_45 = NULL;
  j_45 = t;
  i_45 :
  if(match_cons(j_45, sym__2))
    {
      k_45 = ATgetArgument(j_45, 0);
      l_45 = ATgetArgument(j_45, 1);
      {
        t = not_null(k_45);
        {
          ATerm g_9 (ATerm t)
          {
            t = not_null(l_45);
            return(t);
          }
          t = at_end_1(t, g_9);
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
  ATerm g_31 = t;
  int h_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(h_31);
    }
  else
    {
      t = g_31;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm post_extend_config_0 (ATerm t)
{
  ATerm t_45 = NULL,u_45 = NULL,v_45 = NULL;
  t_45 = t;
  s_45 :
  if(match_cons(t_45, sym__2))
    {
      u_45 = ATgetArgument(t_45, 0);
      v_45 = ATgetArgument(t_45, 1);
      {
        ATerm y_45 = NULL;
        ATerm z_45 = NULL,b_46 = NULL;
        ATerm a_46 = NULL;
        t = not_null(u_45);
        {
          ATerm i_31 = t;
          int j_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(j_31);
            }
          else
            {
              t = i_31;
              t = (ATerm) ATempty;
            }
          {
            a_46 = t;
            if(((z_45 != NULL) && (z_45 != a_46)))
              _fail(a_46);
            else
              z_45 = a_46;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_45), not_null(v_45));
          {
            t = conc_0(t);
            {
              b_46 = t;
              if(((y_45 != NULL) && (y_45 != b_46)))
                _fail(b_46);
              else
                y_45 = b_46;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_x_26, not_null(u_45), not_null(y_45));
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
  ATerm o_31 = t;
  int p_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_9 (ATerm t)
      {
        ATerm i_47 = NULL;
        i_47 = t;
        f_46 :
        if(!(match_string(i_47, "-i")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm k_9 (ATerm t)
      {
        ATerm j_47 = NULL;
        ATerm k_47 = NULL;
        k_47 = t;
        if(((j_47 != NULL) && (j_47 != k_47)))
          _fail(k_47);
        else
          j_47 = k_47;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_z_22, not_null(j_47));
          t = set_config_0(t);
        }
        t = term_j_20;
        return(t);
      }
      ATerm l_9 (ATerm t)
      {
        t = term_q_31;
        return(t);
      }
      t = ArgOption_3(t, h_9, k_9, l_9);
      LocalPopChoice(p_31);
    }
  else
    {
      t = o_31;
      {
        ATerm u_31 = t;
        int w_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_9 (ATerm t)
            {
              ATerm l_47 = NULL;
              l_47 = t;
              h_46 :
              if(!(match_string(l_47, "-o")))
                {
                  if(!(match_string(l_47, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm p_9 (ATerm t)
            {
              ATerm m_47 = NULL;
              ATerm n_47 = NULL;
              n_47 = t;
              if(((m_47 != NULL) && (m_47 != n_47)))
                _fail(n_47);
              else
                m_47 = n_47;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_r_16, not_null(m_47));
                t = set_config_0(t);
              }
              t = term_j_20;
              return(t);
            }
            ATerm s_9 (ATerm t)
            {
              t = term_z_31;
              return(t);
            }
            t = ArgOption_3(t, o_9, p_9, s_9);
            LocalPopChoice(w_31);
          }
        else
          {
            t = u_31;
            {
              ATerm a_32 = t;
              int b_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_9 (ATerm t)
                  {
                    ATerm o_47 = NULL;
                    o_47 = t;
                    j_46 :
                    if(!(match_string(o_47, "-I")))
                      {
                        if(!(match_string(o_47, "--Include")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm w_9 (ATerm t)
                  {
                    ATerm p_47 = NULL;
                    ATerm q_47 = NULL;
                    q_47 = t;
                    if(((p_47 != NULL) && (p_47 != q_47)))
                      _fail(q_47);
                    else
                      p_47 = q_47;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_h_24, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_47)), term_h_24));
                      t = extend_config_0(t);
                    }
                    t = term_j_20;
                    return(t);
                  }
                  ATerm x_9 (ATerm t)
                  {
                    t = term_c_32;
                    return(t);
                  }
                  t = ArgOption_3(t, t_9, w_9, x_9);
                  LocalPopChoice(b_32);
                }
              else
                {
                  t = a_32;
                  {
                    ATerm d_32 = t;
                    int e_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm a_10 (ATerm t)
                        {
                          ATerm r_47 = NULL;
                          r_47 = t;
                          l_46 :
                          if(!(match_string(r_47, "--main")))
                            {
                              if(!(match_string(r_47, "-m")))
                                {
                                  _fail(t);
                                }
                            }
                          return(t);
                        }
                        ATerm b_10 (ATerm t)
                        {
                          ATerm s_47 = NULL;
                          ATerm t_47 = NULL;
                          t_47 = t;
                          if(((s_47 != NULL) && (s_47 != t_47)))
                            _fail(t_47);
                          else
                            s_47 = t_47;
                          {
                            t = (ATerm) ATmakeAppl(sym__2, term_p_20, not_null(s_47));
                            t = set_config_0(t);
                          }
                          t = term_j_20;
                          return(t);
                        }
                        ATerm c_10 (ATerm t)
                        {
                          t = term_g_32;
                          return(t);
                        }
                        t = ArgOption_3(t, a_10, b_10, c_10);
                        LocalPopChoice(e_32);
                      }
                    else
                      {
                        t = d_32;
                        {
                          ATerm h_32 = t;
                          int i_32 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm g_10 (ATerm t)
                              {
                                ATerm u_47 = NULL;
                                u_47 = t;
                                n_46 :
                                if(!(match_string(u_47, "--C-include")))
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              ATerm j_10 (ATerm t)
                              {
                                ATerm v_47 = NULL;
                                ATerm w_47 = NULL;
                                w_47 = t;
                                if(((v_47 != NULL) && (v_47 != w_47)))
                                  _fail(w_47);
                                else
                                  v_47 = w_47;
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, term_j_18, (ATerm) ATinsert(ATempty, not_null(v_47)));
                                  t = post_extend_config_0(t);
                                }
                                t = term_j_20;
                                return(t);
                              }
                              ATerm k_10 (ATerm t)
                              {
                                t = term_j_32;
                                return(t);
                              }
                              t = ArgOption_3(t, g_10, j_10, k_10);
                              LocalPopChoice(i_32);
                            }
                          else
                            {
                              t = h_32;
                              {
                                ATerm k_32 = t;
                                int l_32 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm l_10 (ATerm t)
                                    {
                                      ATerm x_47 = NULL;
                                      x_47 = t;
                                      p_46 :
                                      if(!(match_string(x_47, "-CI")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm o_10 (ATerm t)
                                    {
                                      ATerm y_47 = NULL;
                                      ATerm z_47 = NULL;
                                      z_47 = t;
                                      if(((y_47 != NULL) && (y_47 != z_47)))
                                        _fail(z_47);
                                      else
                                        y_47 = z_47;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, term_e_17, (ATerm) ATinsert(ATempty, not_null(y_47)));
                                        t = extend_config_0(t);
                                      }
                                      t = term_j_20;
                                      return(t);
                                    }
                                    ATerm p_10 (ATerm t)
                                    {
                                      t = term_m_32;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, l_10, o_10, p_10);
                                    LocalPopChoice(l_32);
                                  }
                                else
                                  {
                                    t = k_32;
                                    {
                                      ATerm n_32 = t;
                                      int o_32 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm q_10 (ATerm t)
                                          {
                                            ATerm a_48 = NULL;
                                            a_48 = t;
                                            r_46 :
                                            if(!(match_string(a_48, "-CL")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm v_10 (ATerm t)
                                          {
                                            ATerm b_48 = NULL;
                                            ATerm c_48 = NULL;
                                            c_48 = t;
                                            if(((b_48 != NULL) && (b_48 != c_48)))
                                              _fail(c_48);
                                            else
                                              b_48 = c_48;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, term_p_16, (ATerm) ATinsert(ATempty, not_null(b_48)));
                                              t = extend_config_0(t);
                                            }
                                            t = term_j_20;
                                            return(t);
                                          }
                                          ATerm w_10 (ATerm t)
                                          {
                                            t = term_p_32;
                                            return(t);
                                          }
                                          t = ArgOption_3(t, q_10, v_10, w_10);
                                          LocalPopChoice(o_32);
                                        }
                                      else
                                        {
                                          t = n_32;
                                          {
                                            ATerm q_32 = t;
                                            int r_32 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm x_10 (ATerm t)
                                                {
                                                  ATerm d_48 = NULL;
                                                  d_48 = t;
                                                  t_46 :
                                                  if(!(match_string(d_48, "-c")))
                                                    {
                                                      _fail(t);
                                                    }
                                                  return(t);
                                                }
                                                ATerm y_10 (ATerm t)
                                                {
                                                  t = term_s_32;
                                                  t = set_config_0(t);
                                                  t = term_j_20;
                                                  return(t);
                                                }
                                                ATerm z_10 (ATerm t)
                                                {
                                                  t = term_t_32;
                                                  return(t);
                                                }
                                                t = Option_3(t, x_10, y_10, z_10);
                                                LocalPopChoice(r_32);
                                              }
                                            else
                                              {
                                                t = q_32;
                                                {
                                                  ATerm u_32 = t;
                                                  int v_32 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm c_11 (ATerm t)
                                                      {
                                                        ATerm e_48 = NULL;
                                                        e_48 = t;
                                                        u_46 :
                                                        if(!(match_string(e_48, "--ast")))
                                                          {
                                                            _fail(t);
                                                          }
                                                        return(t);
                                                      }
                                                      ATerm h_11 (ATerm t)
                                                      {
                                                        t = term_w_32;
                                                        t = set_config_0(t);
                                                        t = term_j_20;
                                                        return(t);
                                                      }
                                                      ATerm i_11 (ATerm t)
                                                      {
                                                        t = term_y_32;
                                                        return(t);
                                                      }
                                                      t = Option_3(t, c_11, h_11, i_11);
                                                      LocalPopChoice(v_32);
                                                    }
                                                  else
                                                    {
                                                      t = u_32;
                                                      {
                                                        ATerm z_32 = t;
                                                        int d_33 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm j_11 (ATerm t)
                                                            {
                                                              ATerm f_48 = NULL;
                                                              f_48 = t;
                                                              v_46 :
                                                              if(!(match_string(f_48, "-F")))
                                                                {
                                                                  _fail(t);
                                                                }
                                                              return(t);
                                                            }
                                                            ATerm k_11 (ATerm t)
                                                            {
                                                              t = term_e_33;
                                                              t = set_config_0(t);
                                                              t = term_j_20;
                                                              return(t);
                                                            }
                                                            ATerm l_11 (ATerm t)
                                                            {
                                                              t = term_f_33;
                                                              return(t);
                                                            }
                                                            t = Option_3(t, j_11, k_11, l_11);
                                                            LocalPopChoice(d_33);
                                                          }
                                                        else
                                                          {
                                                            t = z_32;
                                                            {
                                                              ATerm g_33 = t;
                                                              int h_33 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm m_11 (ATerm t)
                                                                  {
                                                                    ATerm g_48 = NULL;
                                                                    g_48 = t;
                                                                    w_46 :
                                                                    if(!(match_string(g_48, "--keep")))
                                                                      {
                                                                        _fail(t);
                                                                      }
                                                                    return(t);
                                                                  }
                                                                  ATerm n_11 (ATerm t)
                                                                  {
                                                                    ATerm h_48 = NULL;
                                                                    ATerm i_48 = NULL;
                                                                    t = string_to_int_0(t);
                                                                    {
                                                                      i_48 = t;
                                                                      if(((h_48 != NULL) && (h_48 != i_48)))
                                                                        _fail(i_48);
                                                                      else
                                                                        h_48 = i_48;
                                                                    }
                                                                    {
                                                                      t = (ATerm) ATmakeAppl(sym__2, term_n_21, not_null(h_48));
                                                                      t = set_config_0(t);
                                                                    }
                                                                    t = term_j_20;
                                                                    return(t);
                                                                  }
                                                                  ATerm r_11 (ATerm t)
                                                                  {
                                                                    t = term_i_33;
                                                                    return(t);
                                                                  }
                                                                  t = ArgOption_3(t, m_11, n_11, r_11);
                                                                  LocalPopChoice(h_33);
                                                                }
                                                              else
                                                                {
                                                                  t = g_33;
                                                                  {
                                                                    ATerm j_33 = t;
                                                                    int k_33 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm u_11 (ATerm t)
                                                                        {
                                                                          ATerm j_48 = NULL;
                                                                          j_48 = t;
                                                                          y_46 :
                                                                          if(!(match_string(j_48, "--fusion")))
                                                                            {
                                                                              _fail(t);
                                                                            }
                                                                          return(t);
                                                                        }
                                                                        ATerm x_11 (ATerm t)
                                                                        {
                                                                          t = term_l_33;
                                                                          t = toggle_config_0(t);
                                                                          t = term_j_20;
                                                                          return(t);
                                                                        }
                                                                        ATerm y_11 (ATerm t)
                                                                        {
                                                                          t = term_q_33;
                                                                          return(t);
                                                                        }
                                                                        t = Option_3(t, u_11, x_11, y_11);
                                                                        LocalPopChoice(k_33);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = j_33;
                                                                        {
                                                                          ATerm r_33 = t;
                                                                          int s_33 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              ATerm z_11 (ATerm t)
                                                                              {
                                                                                ATerm k_48 = NULL;
                                                                                k_48 = t;
                                                                                z_46 :
                                                                                if(!(match_string(k_48, "--trace-all")))
                                                                                  {
                                                                                    _fail(t);
                                                                                  }
                                                                                return(t);
                                                                              }
                                                                              ATerm a_12 (ATerm t)
                                                                              {
                                                                                t = term_u_33;
                                                                                t = set_config_0(t);
                                                                                t = term_j_20;
                                                                                return(t);
                                                                              }
                                                                              ATerm b_12 (ATerm t)
                                                                              {
                                                                                t = term_v_33;
                                                                                return(t);
                                                                              }
                                                                              t = Option_3(t, z_11, a_12, b_12);
                                                                              LocalPopChoice(s_33);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = r_33;
                                                                              {
                                                                                ATerm w_33 = t;
                                                                                int y_33 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm e_12 (ATerm t)
                                                                                    {
                                                                                      ATerm l_48 = NULL;
                                                                                      l_48 = t;
                                                                                      a_47 :
                                                                                      if(!(match_string(l_48, "-t")))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm f_12 (ATerm t)
                                                                                    {
                                                                                      ATerm m_48 = NULL;
                                                                                      ATerm p_48 = NULL;
                                                                                      p_48 = t;
                                                                                      if(((m_48 != NULL) && (m_48 != p_48)))
                                                                                        _fail(p_48);
                                                                                      else
                                                                                        m_48 = p_48;
                                                                                      {
                                                                                        t = (ATerm) ATmakeAppl(sym__2, term_z_33, (ATerm) ATinsert(ATempty, not_null(m_48)));
                                                                                        t = extend_config_0(t);
                                                                                      }
                                                                                      t = term_j_20;
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm g_12 (ATerm t)
                                                                                    {
                                                                                      t = term_a_34;
                                                                                      return(t);
                                                                                    }
                                                                                    t = ArgOption_3(t, e_12, f_12, g_12);
                                                                                    LocalPopChoice(y_33);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = w_33;
                                                                                    {
                                                                                      ATerm b_34 = t;
                                                                                      int c_34 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm l_12 (ATerm t)
                                                                                          {
                                                                                            ATerm q_48 = NULL;
                                                                                            q_48 = t;
                                                                                            c_47 :
                                                                                            if(!(match_string(q_48, "--verbose")))
                                                                                              {
                                                                                                _fail(t);
                                                                                              }
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm m_12 (ATerm t)
                                                                                          {
                                                                                            ATerm r_48 = NULL;
                                                                                            ATerm s_48 = NULL;
                                                                                            t = string_to_int_0(t);
                                                                                            {
                                                                                              s_48 = t;
                                                                                              if(((r_48 != NULL) && (r_48 != s_48)))
                                                                                                _fail(s_48);
                                                                                              else
                                                                                                r_48 = s_48;
                                                                                            }
                                                                                            {
                                                                                              t = (ATerm) ATmakeAppl(sym__2, term_i_16, not_null(r_48));
                                                                                              t = set_config_0(t);
                                                                                            }
                                                                                            t = term_j_20;
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm n_12 (ATerm t)
                                                                                          {
                                                                                            t = term_d_34;
                                                                                            return(t);
                                                                                          }
                                                                                          t = ArgOption_3(t, l_12, m_12, n_12);
                                                                                          LocalPopChoice(c_34);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = b_34;
                                                                                          {
                                                                                            ATerm e_34 = t;
                                                                                            int f_34 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm p_12 (ATerm t)
                                                                                                {
                                                                                                  ATerm t_48 = NULL;
                                                                                                  t_48 = t;
                                                                                                  e_47 :
                                                                                                  if(!(match_string(t_48, "-S")))
                                                                                                    {
                                                                                                      if(!(match_string(t_48, "--silent")))
                                                                                                        {
                                                                                                          _fail(t);
                                                                                                        }
                                                                                                    }
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm q_12 (ATerm t)
                                                                                                {
                                                                                                  t = term_g_34;
                                                                                                  t = set_config_0(t);
                                                                                                  t = term_j_20;
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm r_12 (ATerm t)
                                                                                                {
                                                                                                  t = term_h_34;
                                                                                                  return(t);
                                                                                                }
                                                                                                t = Option_3(t, p_12, q_12, r_12);
                                                                                                LocalPopChoice(f_34);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = e_34;
                                                                                                {
                                                                                                  ATerm i_34 = t;
                                                                                                  int l_34 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      ATerm s_12 (ATerm t)
                                                                                                      {
                                                                                                        ATerm u_48 = NULL;
                                                                                                        u_48 = t;
                                                                                                        f_47 :
                                                                                                        if(!(match_string(u_48, "-h")))
                                                                                                          {
                                                                                                            if(!(match_string(u_48, "--help")))
                                                                                                              {
                                                                                                                _fail(t);
                                                                                                              }
                                                                                                          }
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm x_12 (ATerm t)
                                                                                                      {
                                                                                                        t = term_n_34;
                                                                                                        t = set_config_0(t);
                                                                                                        t = term_j_20;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm y_12 (ATerm t)
                                                                                                      {
                                                                                                        t = term_o_34;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      t = Option_3(t, s_12, x_12, y_12);
                                                                                                      LocalPopChoice(l_34);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = i_34;
                                                                                                      {
                                                                                                        ATerm p_34 = t;
                                                                                                        int s_34 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm z_12 (ATerm t)
                                                                                                            {
                                                                                                              ATerm v_48 = NULL;
                                                                                                              v_48 = t;
                                                                                                              g_47 :
                                                                                                              if(!(match_string(v_48, "--man")))
                                                                                                                {
                                                                                                                  _fail(t);
                                                                                                                }
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm c_13 (ATerm t)
                                                                                                            {
                                                                                                              t = term_u_34;
                                                                                                              t = set_config_0(t);
                                                                                                              t = term_j_20;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm d_13 (ATerm t)
                                                                                                            {
                                                                                                              t = term_v_34;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            t = Option_3(t, z_12, c_13, d_13);
                                                                                                            LocalPopChoice(s_34);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = p_34;
                                                                                                            {
                                                                                                              ATerm e_13 (ATerm t)
                                                                                                              {
                                                                                                                ATerm w_48 = NULL;
                                                                                                                w_48 = t;
                                                                                                                h_47 :
                                                                                                                if(!(match_string(w_48, "-v")))
                                                                                                                  {
                                                                                                                    if(!(match_string(w_48, "--version")))
                                                                                                                      {
                                                                                                                        _fail(t);
                                                                                                                      }
                                                                                                                  }
                                                                                                                return(t);
                                                                                                              }
                                                                                                              ATerm f_13 (ATerm t)
                                                                                                              {
                                                                                                                t = term_b_35;
                                                                                                                t = set_config_0(t);
                                                                                                                t = term_j_20;
                                                                                                                return(t);
                                                                                                              }
                                                                                                              ATerm g_13 (ATerm t)
                                                                                                              {
                                                                                                                t = term_c_35;
                                                                                                                return(t);
                                                                                                              }
                                                                                                              t = Option_3(t, e_13, f_13, g_13);
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm q_49 = NULL;
  q_49 = t;
  t = SSL_table_destroy(not_null(q_49));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm u_49 = NULL,v_49 = NULL,w_49 = NULL;
  u_49 = t;
  t_49 :
  if(((ATermList) u_49 == ATempty))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(u_49) == AT_LIST) && ((ATermList) u_49 != ATempty)))
        {
          v_49 = ATgetFirst((ATermList) u_49);
          w_49 = (ATerm) ATgetNext((ATermList) u_49);
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
  ATerm d_35;
  d_35 = t;
  {
    ATerm z_49 = NULL;
    ATerm c_50 = NULL;
    ATerm f_35 = t;
    int g_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(g_35);
      }
    else
      {
        t = f_35;
        {
          ATerm a_50 = NULL;
          ATerm b_50 = NULL;
          b_50 = t;
          if(((a_50 != NULL) && (a_50 != b_50)))
            _fail(b_50);
          else
            a_50 = b_50;
          t = (ATerm) ATinsert(ATempty, not_null(a_50));
        }
      }
    {
      c_50 = t;
      if(((z_49 != NULL) && (z_49 != c_50)))
        _fail(c_50);
      else
        z_49 = c_50;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_24, not_null(z_49));
      t = printnl_0(t);
    }
  }
  t = d_35;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm i_0 (ATerm))
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_35), term_t_27), term_w_35), term_v_35), term_u_35), term_t_27), term_t_35), term_s_35), term_p_35), term_o_35), term_n_35), term_l_35), term_j_35), term_i_35), term_h_35);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm h_0 (ATerm))
{
  ATerm l_50 = NULL,m_50 = NULL,n_50 = NULL;
  n_50 = t;
  k_50 :
  if(((ATgetType(n_50) == AT_LIST) && ((ATermList) n_50 != ATempty)))
    {
      l_50 = ATgetFirst((ATermList) n_50);
      m_50 = (ATerm) ATgetNext((ATermList) n_50);
      {
        ATerm q_50 = NULL;
        t = not_null(m_50);
        {
          ATerm z_35;
          z_35 = t;
          {
            ATerm r_50 = NULL,f_51 = NULL,j_51 = NULL;
            ATerm b_36;
            b_36 = t;
            {
              ATerm a_51 = NULL;
              t = h_0(t);
              {
                a_51 = t;
                if(((r_50 != NULL) && (r_50 != a_51)))
                  _fail(a_51);
                else
                  r_50 = a_51;
              }
            }
            t = b_36;
            {
              ATerm i_51 = NULL;
              t = not_null(l_50);
              {
                t = g_0(t);
                {
                  i_51 = t;
                  if(((f_51 != NULL) && (f_51 != i_51)))
                    _fail(i_51);
                  else
                    f_51 = i_51;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(r_50)), not_null(f_51));
                {
                  j_51 = t;
                  if(((q_50 != NULL) && (q_50 != j_51)))
                    _fail(j_51);
                  else
                    q_50 = j_51;
                }
              }
            }
          }
          t = z_35;
          {
            ATerm m_13 (ATerm t)
            {
              t = not_null(q_50);
              return(t);
            }
            t = reverse_acc_2(t, g_0, m_13);
          }
        }
      }
    }
  else
    {
      if(((ATermList) n_50 == ATempty))
        {
          {
            t = term_j_20;
            t = h_0(t);
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
  ATerm p_13 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, p_13);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm f_0 (ATerm))
{
  ATerm q_51 = NULL;
  ATerm r_51 = NULL;
  t = term_j_20;
  {
    t = f_0(t);
    {
      r_51 = t;
      if(((q_51 != NULL) && (q_51 != r_51)))
        _fail(r_51);
      else
        q_51 = r_51;
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_36), not_null(q_51)), term_l_36), term_t_27), term_h_36), term_t_27), term_g_36), term_f_36), term_t_27), term_c_36);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm y_57 (ATerm))
{
  ATerm y_51 = NULL,z_51 = NULL;
  y_51 = t;
  x_51 :
  if(match_cons(y_51, sym_Program_1))
    {
      z_51 = ATgetArgument(y_51, 0);
      {
        ATerm c_52 = NULL,e_52 = NULL;
        ATerm d_52 = NULL;
        t = SSLgetAnnotations(not_null(y_51));
        {
          d_52 = t;
          if(((c_52 != NULL) && (c_52 != d_52)))
            _fail(d_52);
          else
            c_52 = d_52;
        }
        {
          t = not_null(z_51);
          {
            ATerm g_52 = NULL;
            t = y_57(t);
            {
              e_52 = t;
              {
                ATerm h_52 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(e_52)), not_null(c_52));
                {
                  h_52 = t;
                  if(((g_52 != NULL) && (g_52 != h_52)))
                    _fail(h_52);
                  else
                    g_52 = h_52;
                }
                t = not_null(g_52);
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
  ATerm q_52 = NULL;
  ATerm u_36 = t;
  int v_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_52 = NULL;
      t = term_w_36;
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
      LocalPopChoice(v_36);
    }
  else
    {
      t = u_36;
      {
        ATerm q_13 (ATerm t)
        {
          ATerm r_13 (ATerm t)
          {
            ATerm s_52 = NULL;
            s_52 = t;
            if(((q_52 != NULL) && (q_52 != s_52)))
              _fail(s_52);
            else
              q_52 = s_52;
            return(t);
          }
          t = Program_1(t, r_13);
          return(t);
        }
        t = option_defined_1(t, q_13);
      }
    }
  {
    ATerm s_13 (ATerm t)
    {
      ATerm t_13 (ATerm t)
      {
        t = not_null(q_52);
        return(t);
      }
      t = short_description_1(t, t_13);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, s_13);
    {
      t = term_c_37;
      {
        t = echo_0(t);
        {
          t = term_j_37;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm y_13 (ATerm t)
                {
                  ATerm t_52 = NULL;
                  ATerm u_52 = NULL;
                  u_52 = t;
                  if(((t_52 != NULL) && (t_52 != u_52)))
                    _fail(u_52);
                  else
                    t_52 = u_52;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_52)), term_k_37);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, y_13);
                {
                  ATerm z_13 (ATerm t)
                  {
                    ATerm v_52 = NULL;
                    ATerm w_52 = NULL;
                    ATerm a_14 (ATerm t)
                    {
                      t = not_null(q_52);
                      return(t);
                    }
                    t = long_description_1(t, a_14);
                    {
                      w_52 = t;
                      if(((v_52 != NULL) && (v_52 != w_52)))
                        _fail(w_52);
                      else
                        v_52 = w_52;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(v_52)), term_t_27);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, z_13);
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
  ATerm n_37;
  n_37 = t;
  {
    ATerm c_53 = NULL;
    ATerm d_53 = NULL;
    d_53 = t;
    if(((c_53 != NULL) && (c_53 != d_53)))
      _fail(d_53);
    else
      c_53 = d_53;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_16, (ATerm) ATinsert(ATempty, not_null(c_53)));
      t = printnl_0(t);
    }
  }
  t = n_37;
  return(t);
}
ATerm say_1 (ATerm t, ATerm g_72 (ATerm))
{
  ATerm o_37;
  o_37 = t;
  {
    t = g_72(t);
    t = debug_0(t);
  }
  t = o_37;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm z_57 (ATerm))
{
  ATerm k_53 = NULL,l_53 = NULL;
  k_53 = t;
  j_53 :
  if(match_cons(k_53, sym_Undefined_1))
    {
      l_53 = ATgetArgument(k_53, 0);
      {
        ATerm o_53 = NULL,q_53 = NULL;
        ATerm p_53 = NULL;
        t = SSLgetAnnotations(not_null(k_53));
        {
          p_53 = t;
          if(((o_53 != NULL) && (o_53 != p_53)))
            _fail(p_53);
          else
            o_53 = p_53;
        }
        {
          t = not_null(l_53);
          {
            ATerm s_53 = NULL;
            t = z_57(t);
            {
              q_53 = t;
              {
                ATerm t_53 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(q_53)), not_null(o_53));
                {
                  t_53 = t;
                  if(((s_53 != NULL) && (s_53 != t_53)))
                    _fail(t_53);
                  else
                    s_53 = t_53;
                }
                t = not_null(s_53);
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
ATerm fetch_1 (ATerm t, ATerm f_82 (ATerm))
{
  ATerm y_53 (ATerm t)
  {
    ATerm p_37 = t;
    int q_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, f_82, _id);
        LocalPopChoice(q_37);
      }
    else
      {
        t = p_37;
        t = Cons_2(t, _id, y_53);
      }
    return(t);
  }
  t = y_53(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm s_68 (ATerm))
{
  t = fetch_1(t, s_68);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm d_54 = NULL;
  d_54 = t;
  c_54 :
  if(match_cons(d_54, sym_Help_0))
    {
      ATerm f_54 = NULL,h_54 = NULL;
      ATerm r_37;
      r_37 = t;
      {
        ATerm g_54 = NULL;
        t = SSLgetAnnotations(not_null(d_54));
        {
          g_54 = t;
          if(((f_54 != NULL) && (f_54 != g_54)))
            _fail(g_54);
          else
            f_54 = g_54;
        }
      }
      t = r_37;
      {
        ATerm i_54 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(f_54));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm o_54 = NULL,p_54 = NULL,q_54 = NULL;
  o_54 = t;
  n_54 :
  if(match_cons(o_54, sym__2))
    {
      p_54 = ATgetArgument(o_54, 0);
      q_54 = ATgetArgument(o_54, 1);
      t = SSL_table_get(not_null(p_54), not_null(q_54));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm x_54 = NULL,y_54 = NULL,z_54 = NULL,a_55 = NULL;
  x_54 = t;
  w_54 :
  if(match_cons(x_54, sym__3))
    {
      y_54 = ATgetArgument(x_54, 0);
      z_54 = ATgetArgument(x_54, 1);
      a_55 = ATgetArgument(x_54, 2);
      {
        ATerm w_37;
        w_37 = t;
        {
          ATerm e_55 = NULL;
          ATerm f_55 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_54), not_null(z_54));
          {
            ATerm x_37 = t;
            int y_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(y_37);
              }
            else
              {
                t = x_37;
                t = (ATerm) ATempty;
              }
            {
              f_55 = t;
              if(((e_55 != NULL) && (e_55 != f_55)))
                _fail(f_55);
              else
                e_55 = f_55;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(y_54), not_null(z_54), (ATerm) ATinsert(CheckATermList(not_null(e_55)), not_null(a_55)));
            t = table_put_0(t);
          }
        }
        t = w_37;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm s_67 (ATerm))
{
  ATerm j_55 = NULL;
  ATerm k_55 = NULL;
  t = term_j_20;
  {
    t = s_67(t);
    {
      k_55 = t;
      if(((j_55 != NULL) && (j_55 != k_55)))
        _fail(k_55);
      else
        j_55 = k_55;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_d_37, term_i_37, not_null(j_55));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm q_55 = NULL,r_55 = NULL,s_55 = NULL;
  q_55 = t;
  p_55 :
  if(match_string(q_55, "register-usage-info"))
    {
      t = register_usage_1(t, e_0);
    }
  else
    {
      if(((ATgetType(q_55) == AT_LIST) && ((ATermList) q_55 != ATempty)))
        {
          r_55 = ATgetFirst((ATermList) q_55);
          s_55 = (ATerm) ATgetNext((ATermList) q_55);
          {
            ATerm v_55 = NULL;
            ATerm z_37;
            z_37 = t;
            {
              t = not_null(r_55);
              t = a_0(t);
            }
            t = z_37;
            {
              ATerm w_55 = NULL;
              t = term_j_20;
              {
                t = b_0(t);
                {
                  w_55 = t;
                  if(((v_55 != NULL) && (v_55 != w_55)))
                    _fail(w_55);
                  else
                    v_55 = w_55;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(s_55)), not_null(v_55));
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
  ATerm b_14 (ATerm t)
  {
    ATerm b_56 = NULL;
    b_56 = t;
    a_56 :
    if(!(match_string(b_56, "--help")))
      {
        if(!(match_string(b_56, "-h")))
          {
            if(!(match_string(b_56, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm c_14 (ATerm t)
  {
    t = term_n_34;
    {
      t = set_config_0(t);
      t = term_f_38;
    }
    return(t);
  }
  ATerm e_14 (ATerm t)
  {
    t = term_g_38;
    return(t);
  }
  t = Option_3(t, b_14, c_14, e_14);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm e_56 = NULL,f_56 = NULL,g_56 = NULL;
  e_56 = t;
  d_56 :
  if(((ATgetType(e_56) == AT_LIST) && ((ATermList) e_56 != ATempty)))
    {
      f_56 = ATgetFirst((ATermList) e_56);
      g_56 = (ATerm) ATgetNext((ATermList) e_56);
      t = (ATerm) ATinsert(CheckATermList(not_null(g_56)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(f_56)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm m_56 = NULL,n_56 = NULL,o_56 = NULL;
  m_56 = t;
  l_56 :
  if(match_cons(m_56, sym__2))
    {
      n_56 = ATgetArgument(m_56, 0);
      o_56 = ATgetArgument(m_56, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_x_26, not_null(n_56), not_null(o_56));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm q_67 (ATerm))
{
  ATerm j_38;
  j_38 = t;
  {
    ATerm h_14 (ATerm t)
    {
      t = term_k_38;
      t = q_67(t);
      return(t);
    }
    t = try_1(t, h_14);
  }
  t = j_38;
  {
    ATerm i_14 (ATerm t)
    {
      ATerm w_56 = NULL;
      ATerm p_38;
      p_38 = t;
      {
        ATerm u_56 = NULL;
        ATerm v_56 = NULL;
        v_56 = t;
        if(((u_56 != NULL) && (u_56 != v_56)))
          _fail(v_56);
        else
          u_56 = v_56;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_w_36, not_null(u_56));
          t = set_config_0(t);
        }
      }
      t = p_38;
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
    ATerm j_14 (ATerm t)
    {
      ATerm q_38 = t;
      int r_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_38 = t;
          int x_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(x_38);
            }
          else
            {
              t = s_38;
              {
                t = q_67(t);
                t = Cons_2(t, _id, j_14);
              }
            }
          LocalPopChoice(r_38);
        }
      else
        {
          t = q_38;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, i_14, j_14);
  }
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm p_67 (ATerm))
{
  ATerm c_57 = NULL;
  ATerm y_38;
  y_38 = t;
  {
    t = term_a_39;
    t = table_put_0(t);
  }
  t = y_38;
  {
    ATerm o_14 (ATerm t)
    {
      ATerm b_39 = t;
      int c_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_67(t);
          LocalPopChoice(c_39);
        }
      else
        {
          t = b_39;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, o_14);
    {
      ATerm p_14 (ATerm t)
      {
        ATerm d_39 = t;
        int i_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_39;
            j_39 = t;
            {
              ATerm k_39 = t;
              int m_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_m_34;
                  t = get_config_0(t);
                  LocalPopChoice(m_39);
                }
              else
                {
                  t = k_39;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = j_39;
            {
              t = system_usage_0(t);
              {
                t = term_g_16;
                t = exit_0(t);
              }
            }
            LocalPopChoice(i_39);
          }
        else
          {
            t = d_39;
            {
              ATerm q_14 (ATerm t)
              {
                ATerm r_14 (ATerm t)
                {
                  ATerm d_57 = NULL;
                  d_57 = t;
                  if(((c_57 != NULL) && (c_57 != d_57)))
                    _fail(d_57);
                  else
                    c_57 = d_57;
                  return(t);
                }
                t = Undefined_1(t, r_14);
                return(t);
              }
              t = option_defined_1(t, q_14);
              {
                ATerm s_14 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_57)), term_n_39);
                  return(t);
                }
                t = say_1(t, s_14);
                {
                  t = system_usage_0(t);
                  {
                    t = term_s_21;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, p_14);
      {
        ATerm o_39;
        o_39 = t;
        {
          t = term_d_37;
          t = table_destroy_0(t);
        }
        t = o_39;
      }
    }
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm h_57 = NULL,i_57 = NULL,j_57 = NULL;
  ATerm u_39;
  u_39 = t;
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
  t = u_39;
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm s_62 (ATerm), ATerm t_62 (ATerm))
{
  ATerm v_57 = NULL,w_57 = NULL,x_57 = NULL;
  v_57 = t;
  u_57 :
  if(((ATgetType(v_57) == AT_LIST) && ((ATermList) v_57 != ATempty)))
    {
      w_57 = ATgetFirst((ATermList) v_57);
      x_57 = (ATerm) ATgetNext((ATermList) v_57);
      {
        ATerm d_58 = NULL,f_58 = NULL;
        ATerm e_58 = NULL;
        t = SSLgetAnnotations(not_null(v_57));
        {
          e_58 = t;
          if(((d_58 != NULL) && (d_58 != e_58)))
            _fail(e_58);
          else
            d_58 = e_58;
        }
        {
          t = not_null(w_57);
          {
            ATerm h_58 = NULL;
            t = s_62(t);
            {
              f_58 = t;
              {
                t = not_null(x_57);
                {
                  ATerm j_58 = NULL;
                  t = t_62(t);
                  {
                    h_58 = t;
                    {
                      ATerm k_58 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(h_58)), not_null(f_58)), not_null(d_58));
                      {
                        k_58 = t;
                        if(((j_58 != NULL) && (j_58 != k_58)))
                          _fail(k_58);
                        else
                          j_58 = k_58;
                      }
                      t = not_null(j_58);
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
  ATerm u_58 = NULL;
  u_58 = t;
  t_58 :
  if(((ATermList) u_58 == ATempty))
    {
      {
        ATerm w_58 = NULL,y_58 = NULL;
        ATerm v_39;
        v_39 = t;
        {
          ATerm x_58 = NULL;
          t = SSLgetAnnotations(not_null(u_58));
          {
            x_58 = t;
            if(((w_58 != NULL) && (w_58 != x_58)))
              _fail(x_58);
            else
              w_58 = x_58;
          }
        }
        t = v_39;
        {
          ATerm z_58 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(w_58));
          {
            z_58 = t;
            if(((y_58 != NULL) && (y_58 != z_58)))
              _fail(z_58);
            else
              y_58 = z_58;
          }
          t = not_null(y_58);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm map_1 (ATerm t, ATerm w_81 (ATerm))
{
  ATerm d_59 (ATerm t)
  {
    ATerm w_39 = t;
    int b_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(b_40);
      }
    else
      {
        t = w_39;
        t = Cons_2(t, w_81, d_59);
      }
    return(t);
  }
  t = d_59(t);
  return(t);
}
ATerm table_putlist_0 (ATerm t)
{
  ATerm i_59 = NULL,j_59 = NULL,k_59 = NULL;
  i_59 = t;
  h_59 :
  if(match_cons(i_59, sym__2))
    {
      j_59 = ATgetArgument(i_59, 0);
      k_59 = ATgetArgument(i_59, 1);
      {
        t = not_null(k_59);
        {
          ATerm x_14 (ATerm t)
          {
            ATerm n_59 = NULL,o_59 = NULL,p_59 = NULL;
            n_59 = t;
            g_59 :
            if(match_cons(n_59, sym__2))
              {
                o_59 = ATgetArgument(n_59, 0);
                p_59 = ATgetArgument(n_59, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(j_59), not_null(o_59), not_null(p_59));
                  t = table_put_0(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, x_14);
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
  ATerm v_59 = NULL;
  v_59 = t;
  t = SSL_ReadFromFile(not_null(v_59));
  return(t);
}
ATerm import_config_file_1 (ATerm t, ATerm g_70 (ATerm))
{
  ATerm c_40;
  c_40 = t;
  {
    ATerm z_59 = NULL;
    t = g_70(t);
    {
      ATerm y_14 (ATerm t)
      {
        ATerm z_14 (ATerm t)
        {
          t = term_d_40;
          return(t);
        }
        t = debug_1(t, z_14);
        return(t);
      }
      t = if_verbose2_1(t, y_14);
      {
        t = ReadFromFile_0(t);
        {
          ATerm a_60 = NULL;
          a_60 = t;
          if(((z_59 != NULL) && (z_59 != a_60)))
            _fail(a_60);
          else
            z_59 = a_60;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_x_26, not_null(z_59));
            t = table_putlist_0(t);
          }
        }
      }
    }
  }
  t = c_40;
  return(t);
}
ATerm command_line_options_0 (ATerm t)
{
  ATerm a_15 (ATerm t)
  {
    t = term_e_40;
    t = xtc_find_0(t);
    return(t);
  }
  t = import_config_file_1(t, a_15);
  {
    t = parse_options_1(t, sc_options_0);
    {
      ATerm b_15 (ATerm t)
      {
        ATerm d_60 = NULL;
        t = term_t_34;
        {
          t = get_config_0(t);
          {
            ATerm e_60 = NULL;
            t = term_f_40;
            {
              t = xtc_find_0(t);
              {
                e_60 = t;
                if(((d_60 != NULL) && (d_60 != e_60)))
                  _fail(e_60);
                else
                  d_60 = e_60;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(d_60), term_t_24);
              {
                t = copy_file_0(t);
                {
                  t = term_g_16;
                  t = exit_0(t);
                }
              }
            }
          }
        }
        return(t);
      }
      t = try_1(t, b_15);
      {
        ATerm h_15 (ATerm t)
        {
          t = term_a_35;
          {
            t = get_config_0(t);
            {
              t = sc_version_0(t);
              {
                t = term_g_16;
                t = exit_0(t);
              }
            }
          }
          return(t);
        }
        t = try_1(t, h_15);
        {
          ATerm l_40 = t;
          int m_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_40;
              q_40 = t;
              {
                t = term_z_22;
                t = get_config_0(t);
              }
              t = q_40;
              LocalPopChoice(m_40);
            }
          else
            {
              t = l_40;
              {
                t = (ATerm) ATinsert(ATempty, term_r_40);
                t = fatal_error_0(t);
              }
            }
          {
            t = sc_announce_0(t);
            {
              ATerm i_15 (ATerm t)
              {
                ATerm s_40;
                s_40 = t;
                {
                  t = term_z_22;
                  {
                    t = get_config_0(t);
                    {
                      ATerm q_15 (ATerm t)
                      {
                        t = term_t_40;
                        return(t);
                      }
                      t = debug_1(t, q_15);
                    }
                  }
                }
                t = s_40;
                return(t);
              }
              t = if_verbose1_1(t, i_15);
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
  ATerm u_40 = t;
  int v_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = command_line_options_0(t);
      {
        ATerm r_15 (ATerm t)
        {
          ATerm s_15 (ATerm t)
          {
            ATerm j_60 = NULL;
            ATerm k_60 = NULL;
            k_60 = t;
            if(((j_60 != NULL) && (j_60 != k_60)))
              _fail(k_60);
            else
              j_60 = k_60;
            {
              t = (ATerm) ATmakeAppl(sym__2, term_u_16, (ATerm) ATinsert(CheckATermList(not_null(j_60)), term_x_40));
              t = printnl_0(t);
            }
            return(t);
          }
          t = if_verbose1_1(t, s_15);
          return(t);
        }
        t = profile_p__2(t, r_15, compile_0);
        {
          ATerm t_15 (ATerm t)
          {
            ATerm l_60 = NULL;
            ATerm m_60 = NULL;
            t = run_time_0(t);
            {
              m_60 = t;
              if(((l_60 != NULL) && (l_60 != m_60)))
                _fail(m_60);
              else
                l_60 = m_60;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, term_u_16, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_41), not_null(l_60)), term_a_41));
              t = printnl_0(t);
            }
            return(t);
          }
          t = if_verbose2_1(t, t_15);
          {
            t = term_g_16;
            t = exit_0(t);
          }
        }
      }
      LocalPopChoice(v_40);
    }
  else
    {
      t = u_40;
      {
        ATerm n_60 = NULL;
        ATerm o_60 = NULL;
        t = run_time_0(t);
        {
          o_60 = t;
          if(((n_60 != NULL) && (n_60 != o_60)))
            _fail(o_60);
          else
            n_60 = o_60;
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_u_16, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_41), not_null(n_60)), term_c_41));
          {
            t = printnl_0(t);
            {
              t = term_s_21;
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
