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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
ATerm term_n_29;
ATerm term_f_29;
ATerm term_s_28;
ATerm term_p_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_u_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_z_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_m_24;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_t_23;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_d_23;
ATerm term_y_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_o_22;
ATerm term_k_22;
ATerm term_t_21;
ATerm term_h_21;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_j_20;
ATerm term_g_20;
ATerm term_i_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_k_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_y_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_j_16;
ATerm term_f_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_v_15;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_s_13;
ATerm term_i_13;
ATerm term_c_13;
ATerm term_y_12;
ATerm term_t_12;
ATerm term_o_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_j_11;
ATerm term_h_11;
ATerm term_f_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_o_10;
ATerm term_h_10;
ATerm term_c_10;
ATerm term_z_9;
ATerm term_y_9;
void init_constant_terms (void)
{
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(sym__2, term_z_10, term_a_11);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym__2, term_z_10, term_c_12);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("parse error in ", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("*** module ", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("rtree", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("str", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("cr", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" reading ", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("list-cons", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("tuple-cons", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("dep", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" :", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" \\\n	", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym__2, term_o_10, term_r_22);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym_Verbose_1, term_r_22);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym__2, term_g_23, term_h_14);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(sym__2, term_m_23, term_h_14);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym__2, term_r_23, term_h_14);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d   Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-nodep", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym__2, term_p_24, term_q_24);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--nodep              Don't create dependency file", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-dep", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep f | -d f       Write dependency to file f", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(sym__2, term_l_27, term_n_27);
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(sym__2, term_h_28, term_h_14);
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(sym__3, term_l_27, term_n_27, (ATerm) ATempty);
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm basename_1 (ATerm, ATerm c_77 (ATerm));
ATerm basename_0 (ATerm);
ATerm Imports_1 (ATerm, ATerm t_59 (ATerm));
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
ATerm xtc_transform_term_2 (ATerm, ATerm f_67 (ATerm), ATerm g_67 (ATerm));
ATerm call_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm c_73 (ATerm));
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm b_73 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm d_73 (ATerm));
ATerm set_0 (ATerm);
ATerm union_1 (ATerm, ATerm r_80 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm y_69 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm w_66 (ATerm));
ATerm assert_1 (ATerm, ATerm d_76 (ATerm));
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm y_66 (ATerm), ATerm z_66 (ATerm));
ATerm parse_module_0 (ATerm);
ATerm if_verbose3_1 (ATerm, ATerm a_73 (ATerm));
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm find_in_path_0 (ATerm);
ATerm split_2 (ATerm, ATerm w_77 (ATerm), ATerm x_77 (ATerm));
ATerm guarantee_extension_1 (ATerm, ATerm e_77 (ATerm));
ATerm find_file_1 (ATerm, ATerm z_74 (ATerm));
ATerm fetch_elem_1 (ATerm, ATerm j_85 (ATerm));
ATerm find_module_1 (ATerm, ATerm j_94 (ATerm));
ATerm get_module_1 (ATerm, ATerm i_94 (ATerm));
ATerm Fst_0 (ATerm);
ATerm GnUndefined_0 (ATerm);
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm k_83 (ATerm), ATerm l_83 (ATerm), ATerm m_83 (ATerm), ATerm n_83 (ATerm));
ATerm zip_1 (ATerm, ATerm p_83 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm p_80 (ATerm), ATerm q_80 (ATerm));
ATerm diff_1 (ATerm, ATerm u_80 (ATerm));
ATerm diff_0 (ATerm);
ATerm GnNext_3 (ATerm, ATerm s_65 (ATerm), ATerm t_65 (ATerm), ATerm u_65 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm m_93 (ATerm), ATerm n_93 (ATerm));
ATerm for_3 (ATerm, ATerm p_93 (ATerm), ATerm q_93 (ATerm), ATerm r_93 (ATerm));
ATerm graph_nodes_undef_roots_3 (ATerm, ATerm y_65 (ATerm), ATerm z_65 (ATerm), ATerm a_66 (ATerm));
ATerm graph_nodes_roots_3 (ATerm, ATerm n_66 (ATerm), ATerm o_66 (ATerm), ATerm p_66 (ATerm));
ATerm pack_stratego_modules_1 (ATerm, ATerm h_94 (ATerm));
ATerm close_file_0 (ATerm);
ATerm Sep_1 (ATerm, ATerm r_86 (ATerm));
ATerm separate_by_1 (ATerm, ATerm s_86 (ATerm));
ATerm obsolete_1 (ATerm, ATerm o_75 (ATerm));
ATerm open_file_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm add_extension_0 (ATerm);
ATerm create_dep_file_1 (ATerm, ATerm r_65 (ATerm));
ATerm implode_string_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm i_53 (ATerm), ATerm j_53 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm h_75 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm s_93 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm filter_1 (ATerm, ATerm o_78 (ATerm));
ATerm string_to_int_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm n_85 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm extend_config_0 (ATerm);
ATerm pack_options_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm i_79 (ATerm), ATerm j_79 (ATerm));
ATerm crush_2 (ATerm, ATerm a_81 (ATerm), ATerm b_81 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm y_72 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm p_74 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm e_71 (ATerm));
ATerm map_1 (ATerm, ATerm y_84 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm f_0 (ATerm), ATerm g_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm d_71 (ATerm));
ATerm Program_1 (ATerm, ATerm e_60 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm i_75 (ATerm));
ATerm Undefined_1 (ATerm, ATerm f_60 (ATerm));
ATerm fetch_1 (ATerm, ATerm h_85 (ATerm));
ATerm option_defined_1 (ATerm, ATerm i_72 (ATerm));
ATerm Help_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm i_71 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm u_64 (ATerm), ATerm v_64 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm g_71 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm f_71 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm m_73 (ATerm), ATerm n_73 (ATerm), ATerm o_73 (ATerm), ATerm p_73 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm q_73 (ATerm), ATerm r_73 (ATerm));
ATerm pack_modules_2 (ATerm, ATerm p_65 (ATerm, ATerm (ATerm)), ATerm q_65 (ATerm));
ATerm pack_stratego_0 (ATerm);
ATerm main_0 (ATerm);
ATerm basename_1 (ATerm t, ATerm c_77 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm c_0 (ATerm t)
    {
      ATerm n_1 = t;
      int l_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Cons_2(t, _id, c_0);
          LocalPopChoice(l_9);
        }
      else
        {
          t = n_1;
          {
            ATerm r_9 = t;
            int s_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_0 (ATerm t)
                {
                  ATerm y_0 = NULL;
                  y_0 = t;
                  w_0 :
                  if(!(match_int(y_0, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = Cons_2(t, d_0, _id);
                LocalPopChoice(s_9);
              }
            else
              {
                t = r_9;
                {
                  ATerm m_0 (ATerm t)
                  {
                    ATerm m_1 = NULL;
                    m_1 = t;
                    x_0 :
                    if(!(match_int(m_1, 46)))
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = Cons_2(t, m_0, c_77);
                  t = (ATerm) ATempty;
                }
              }
          }
        }
      return(t);
    }
    t = try_1(t, c_0);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm basename_0 (ATerm t)
{
  t = basename_1(t, _id);
  return(t);
}
ATerm Imports_1 (ATerm t, ATerm t_59 (ATerm))
{
  ATerm g_2 = NULL,h_2 = NULL;
  g_2 = t;
  f_2 :
  if(match_cons(g_2, sym_Imports_1))
    {
      h_2 = ATgetArgument(g_2, 0);
      {
        ATerm k_2 = NULL,m_2 = NULL;
        ATerm l_2 = NULL;
        t = SSLgetAnnotations(not_null(g_2));
        {
          l_2 = t;
          if(((k_2 != NULL) && (k_2 != l_2)))
            _fail(l_2);
          else
            k_2 = l_2;
        }
        {
          t = not_null(h_2);
          {
            ATerm o_2 = NULL;
            t = t_59(t);
            {
              m_2 = t;
              {
                ATerm p_2 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Imports_1, not_null(m_2)), not_null(k_2));
                {
                  p_2 = t;
                  if(((o_2 != NULL) && (o_2 != p_2)))
                    _fail(p_2);
                  else
                    o_2 = p_2;
                }
                t = not_null(o_2);
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
  ATerm a_3 = NULL;
  ATerm n_0 (ATerm t)
  {
    ATerm x_2 = NULL,y_2 = NULL;
    x_2 = t;
    v_2 :
    if(match_cons(x_2, sym_Specification_1))
      {
        y_2 = ATgetArgument(x_2, 0);
        {
          t = not_null(y_2);
          {
            ATerm o_0 (ATerm t)
            {
              ATerm x_9 = t;
              if((PushChoice() == 0))
                {
                  t = Imports_1(t, _id);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = x_9;
                }
              return(t);
            }
            t = filter_1(t, o_0);
          }
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = map_1(t, n_0);
  {
    t = concat_0(t);
    {
      ATerm b_3 = NULL;
      b_3 = t;
      if(((a_3 != NULL) && (a_3 != b_3)))
        _fail(b_3);
      else
        a_3 = b_3;
      t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(a_3));
    }
  }
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm i_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL,n_3 = NULL,o_3 = NULL;
  i_3 = t;
  f_3 :
  if(match_cons(i_3, sym__2))
    {
      j_3 = ATgetArgument(i_3, 0);
      m_3 = ATgetArgument(i_3, 1);
      g_3 :
      if(match_cons(j_3, sym__2))
        {
          k_3 = ATgetArgument(j_3, 0);
          l_3 = ATgetArgument(j_3, 1);
          h_3 :
          if(match_cons(m_3, sym__2))
            {
              n_3 = ATgetArgument(m_3, 0);
              o_3 = ATgetArgument(m_3, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(n_3)), not_null(k_3)), (ATerm) ATinsert(CheckATermList(not_null(o_3)), not_null(l_3)));
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
  ATerm w_3 = NULL,x_3 = NULL,y_3 = NULL;
  w_3 = t;
  v_3 :
  if(((ATgetType(w_3) == AT_LIST) && ((ATermList) w_3 != ATempty)))
    {
      x_3 = ATgetFirst((ATermList) w_3);
      y_3 = (ATerm) ATgetNext((ATermList) w_3);
      t = (ATerm) ATmakeAppl(sym__2, not_null(x_3), not_null(y_3));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm e_4 = NULL;
  e_4 = t;
  d_4 :
  if(((ATermList) e_4 == ATempty))
    {
      t = term_y_9;
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
  ATerm l_4 = NULL,m_4 = NULL,n_4 = NULL,o_4 = NULL;
  l_4 = t;
  j_4 :
  if(match_cons(l_4, sym__2))
    {
      m_4 = ATgetArgument(l_4, 0);
      n_4 = ATgetArgument(l_4, 1);
      k_4 :
      if(match_cons(n_4, sym_Specification_1))
        {
          o_4 = ATgetArgument(n_4, 0);
          {
            t = not_null(o_4);
            {
              ATerm p_0 (ATerm t)
              {
                ATerm q_4 = NULL,r_4 = NULL;
                q_4 = t;
                i_4 :
                if(match_cons(q_4, sym_Imports_1))
                  {
                    r_4 = ATgetArgument(q_4, 0);
                    t = not_null(r_4);
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = filter_1(t, p_0);
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
  ATerm a_5 = NULL,b_5 = NULL;
  a_5 = t;
  z_4 :
  if(match_cons(a_5, sym_stdin_0))
    {
      ATerm c_5 = NULL;
      ATerm d_5 = NULL;
      t = term_z_9;
      {
        t = ReadFromFile_0(t);
        {
          d_5 = t;
          if(((c_5 != NULL) && (c_5 != d_5)))
            _fail(d_5);
          else
            c_5 = d_5;
        }
      }
      t = not_null(c_5);
    }
  else
    {
      if(match_cons(a_5, sym_FILE_1))
        {
          b_5 = ATgetArgument(a_5, 0);
          {
            ATerm f_5 = NULL;
            ATerm g_5 = NULL;
            t = not_null(b_5);
            {
              t = ReadFromFile_0(t);
              {
                g_5 = t;
                if(((f_5 != NULL) && (f_5 != g_5)))
                  _fail(g_5);
                else
                  f_5 = g_5;
              }
            }
            t = not_null(f_5);
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
  ATerm s_5 = NULL;
  ATerm u_5 = NULL,v_5 = NULL,w_5 = NULL;
  s_5 = t;
  {
    ATerm x_5 = NULL;
    ATerm z_5 = NULL,a_6 = NULL,b_6 = NULL,c_6 = NULL,d_6 = NULL,e_6 = NULL,f_6 = NULL;
    t = not_null(s_5);
    {
      x_5 = t;
      {
        t = SSL_explode_term(not_null(x_5));
        {
          z_5 = t;
          o_5 :
          if(match_cons(z_5, sym__2))
            {
              a_6 = ATgetArgument(z_5, 0);
              b_6 = ATgetArgument(z_5, 1);
              p_5 :
              if(match_string(a_6, ""))
                {
                  q_5 :
                  if(((ATgetType(b_6) == AT_LIST) && ((ATermList) b_6 != ATempty)))
                    {
                      c_6 = ATgetFirst((ATermList) b_6);
                      d_6 = (ATerm) ATgetNext((ATermList) b_6);
                      r_5 :
                      if(((ATgetType(d_6) == AT_LIST) && ((ATermList) d_6 != ATempty)))
                        {
                          e_6 = ATgetFirst((ATermList) d_6);
                          f_6 = (ATerm) ATgetNext((ATermList) d_6);
                          {
                            if(((u_5 != NULL) && (u_5 != c_6)))
                              _fail(c_6);
                            else
                              u_5 = c_6;
                            {
                              if(((w_5 != NULL) && (w_5 != e_6)))
                                _fail(e_6);
                              else
                                w_5 = e_6;
                              if(((v_5 != NULL) && (v_5 != f_6)))
                                _fail(f_6);
                              else
                                v_5 = f_6;
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
    t = not_null(w_5);
  }
  return(t);
}
ATerm pass_keep_0 (ATerm t)
{
  ATerm l_6 = NULL;
  ATerm m_6 = NULL,o_6 = NULL;
  ATerm n_6 = NULL;
  t = term_c_10;
  {
    ATerm d_10 = t;
    int g_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(g_10);
      }
    else
      {
        t = d_10;
        t = term_h_10;
      }
    {
      n_6 = t;
      if(((m_6 != NULL) && (m_6 != n_6)))
        _fail(n_6);
      else
        m_6 = n_6;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_6), term_h_10);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          o_6 = t;
          if(((l_6 != NULL) && (l_6 != o_6)))
            _fail(o_6);
          else
            l_6 = o_6;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_6)), term_c_10);
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm s_6 = NULL;
  s_6 = t;
  t = SSL_int_to_string(not_null(s_6));
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm x_6 = NULL,y_6 = NULL,z_6 = NULL;
  x_6 = t;
  w_6 :
  if(match_cons(x_6, sym__2))
    {
      y_6 = ATgetArgument(x_6, 0);
      z_6 = ATgetArgument(x_6, 1);
      {
        ATerm m_10 = t;
        int n_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(y_6), not_null(z_6));
            LocalPopChoice(n_10);
          }
        else
          {
            t = m_10;
            t = SSL_subtr(not_null(y_6), not_null(z_6));
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
  ATerm f_7 = NULL;
  ATerm g_7 = NULL,i_7 = NULL;
  ATerm h_7 = NULL;
  t = term_o_10;
  {
    ATerm q_10 = t;
    int r_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(r_10);
      }
    else
      {
        t = q_10;
        t = term_h_10;
      }
    {
      h_7 = t;
      if(((g_7 != NULL) && (g_7 != h_7)))
        _fail(h_7);
      else
        g_7 = h_7;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_7), term_h_10);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          i_7 = t;
          if(((f_7 != NULL) && (f_7 != i_7)))
            _fail(i_7);
          else
            f_7 = i_7;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_7)), term_o_10);
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm n_7 = NULL;
  ATerm p_7 = NULL;
  n_7 = t;
  {
    ATerm q_7 = NULL;
    t = xtc_new_file_0(t);
    {
      q_7 = t;
      {
        if(((p_7 != NULL) && (p_7 != q_7)))
          _fail(q_7);
        else
          p_7 = q_7;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_7), not_null(n_7));
          t = WriteToBinaryFile_0(t);
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(p_7));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm f_67 (ATerm), ATerm g_67 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, f_67, g_67);
    t = read_from_0(t);
  }
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm v_7 = NULL,w_7 = NULL,x_7 = NULL;
  v_7 = t;
  u_7 :
  if(match_cons(v_7, sym__2))
    {
      w_7 = ATgetArgument(v_7, 0);
      x_7 = ATgetArgument(v_7, 1);
      t = SSL_call(not_null(w_7), not_null(x_7));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm c_8 = NULL;
  c_8 = t;
  t = SSL_table_keys(not_null(c_8));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm i_8 = NULL;
  i_8 = t;
  {
    t = table_keys_0(t);
    {
      ATerm q_0 (ATerm t)
      {
        ATerm k_8 = NULL;
        ATerm m_8 = NULL;
        k_8 = t;
        {
          ATerm n_8 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_8), not_null(k_8));
          {
            t = table_get_0(t);
            {
              n_8 = t;
              if(((m_8 != NULL) && (m_8 != n_8)))
                _fail(n_8);
              else
                m_8 = n_8;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_8), not_null(m_8));
        }
        return(t);
      }
      t = map_1(t, q_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm c_73 (ATerm))
{
  ATerm r_0 (ATerm t)
  {
    ATerm s_10;
    s_10 = t;
    {
      ATerm s_8 = NULL;
      ATerm t_8 = NULL;
      t = term_o_10;
      {
        t = get_config_0(t);
        {
          t_8 = t;
          if(((s_8 != NULL) && (s_8 != t_8)))
            _fail(t_8);
          else
            s_8 = t_8;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_8), term_y_10);
        t = geq_0(t);
      }
    }
    t = s_10;
    t = c_73(t);
    return(t);
  }
  t = try_1(t, r_0);
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm z_8 = NULL;
  ATerm b_9 = NULL,c_9 = NULL;
  z_8 = t;
  {
    ATerm d_9 = NULL,e_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_z_10, (ATerm) ATmakeAppl(sym_Tool_1, not_null(z_8)));
    {
      t = table_get_0(t);
      {
        d_9 = t;
        x_8 :
        if(((ATgetType(d_9) == AT_LIST) && ((ATermList) d_9 != ATempty)))
          {
            e_9 = ATgetFirst((ATermList) d_9);
            h_9 = (ATerm) ATgetNext((ATermList) d_9);
            y_8 :
            if(match_cons(e_9, sym__2))
              {
                f_9 = ATgetArgument(e_9, 0);
                g_9 = ATgetArgument(e_9, 1);
                {
                  if(((b_9 != NULL) && (b_9 != f_9)))
                    _fail(f_9);
                  else
                    b_9 = f_9;
                  if(((c_9 != NULL) && (c_9 != g_9)))
                    _fail(g_9);
                  else
                    c_9 = g_9;
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
    t = not_null(c_9);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm o_9 = NULL,p_9 = NULL,q_9 = NULL;
  o_9 = t;
  n_9 :
  if(match_cons(o_9, sym__2))
    {
      p_9 = ATgetArgument(o_9, 0);
      q_9 = ATgetArgument(o_9, 1);
      {
        ATerm t_9 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_z_10, (ATerm) ATmakeAppl(sym_Tool_1, not_null(p_9)));
        {
          t = table_get_0(t);
          {
            ATerm s_0 (ATerm t)
            {
              ATerm u_9 = NULL,v_9 = NULL,w_9 = NULL;
              u_9 = t;
              m_9 :
              if(match_cons(u_9, sym__2))
                {
                  v_9 = ATgetArgument(u_9, 0);
                  w_9 = ATgetArgument(u_9, 1);
                  {
                    if(((q_9 != NULL) && (q_9 != v_9)))
                      _fail(v_9);
                    else
                      q_9 = v_9;
                    if(((t_9 != NULL) && (t_9 != w_9)))
                      _fail(w_9);
                    else
                      t_9 = w_9;
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
        t = not_null(t_9);
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
  ATerm t_0 (ATerm t)
  {
    t = term_f_11;
    {
      t = table_get_0(t);
      {
        ATerm u_0 (ATerm t)
        {
          t = try_1(t, xtc_read_0);
          return(t);
        }
        t = map_1(t, u_0);
      }
    }
    return(t);
  }
  t = try_1(t, t_0);
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm b_73 (ATerm))
{
  ATerm v_0 (ATerm t)
  {
    ATerm g_11;
    g_11 = t;
    {
      ATerm a_10 = NULL;
      ATerm b_10 = NULL;
      t = term_o_10;
      {
        t = get_config_0(t);
        {
          b_10 = t;
          if(((a_10 != NULL) && (a_10 != b_10)))
            _fail(b_10);
          else
            a_10 = b_10;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_10), term_h_11);
        t = geq_0(t);
      }
    }
    t = g_11;
    t = b_73(t);
    return(t);
  }
  t = try_1(t, v_0);
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm d_73 (ATerm))
{
  ATerm z_0 (ATerm t)
  {
    ATerm i_11;
    i_11 = t;
    {
      ATerm e_10 = NULL;
      ATerm f_10 = NULL;
      t = term_o_10;
      {
        t = get_config_0(t);
        {
          f_10 = t;
          if(((e_10 != NULL) && (e_10 != f_10)))
            _fail(f_10);
          else
            e_10 = f_10;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_10), term_j_11);
        t = geq_0(t);
      }
    }
    t = i_11;
    t = d_73(t);
    return(t);
  }
  t = try_1(t, z_0);
  return(t);
}
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm union_1 (ATerm t, ATerm r_80 (ATerm))
{
  ATerm j_10 = NULL,k_10 = NULL,l_10 = NULL;
  j_10 = t;
  i_10 :
  if(match_cons(j_10, sym__2))
    {
      k_10 = ATgetArgument(j_10, 0);
      l_10 = ATgetArgument(j_10, 1);
      {
        t = not_null(k_10);
        {
          ATerm p_10 (ATerm t)
          {
            ATerm p_11 = t;
            int q_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(l_10);
                LocalPopChoice(q_11);
              }
            else
              {
                t = p_11;
                {
                  ATerm u_11 = t;
                  int v_11 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm a_1 (ATerm t)
                      {
                        t = not_null(l_10);
                        return(t);
                      }
                      t = HdMember_p__2(t, r_80, a_1);
                      t = p_10(t);
                      LocalPopChoice(v_11);
                    }
                  else
                    {
                      t = u_11;
                      t = Cons_2(t, _id, p_10);
                    }
                }
              }
            return(t);
          }
          t = p_10(t);
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
  ATerm u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL;
  u_10 = t;
  t_10 :
  if(match_cons(u_10, sym__3))
    {
      v_10 = ATgetArgument(u_10, 0);
      w_10 = ATgetArgument(u_10, 1);
      x_10 = ATgetArgument(u_10, 2);
      {
        ATerm w_11;
        w_11 = t;
        {
          ATerm b_11 = NULL;
          ATerm c_11 = NULL,e_11 = NULL;
          ATerm d_11 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_10), not_null(w_10));
          {
            ATerm x_11 = t;
            int y_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                LocalPopChoice(y_11);
              }
            else
              {
                t = x_11;
                t = (ATerm) ATempty;
              }
            {
              d_11 = t;
              if(((c_11 != NULL) && (c_11 != d_11)))
                _fail(d_11);
              else
                c_11 = d_11;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(c_11), not_null(x_10));
            {
              t = union_0(t);
              {
                e_11 = t;
                if(((b_11 != NULL) && (b_11 != e_11)))
                  _fail(e_11);
                else
                  b_11 = e_11;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(v_10), not_null(w_10), not_null(b_11));
            t = set_0(t);
          }
        }
        t = w_11;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm y_69 (ATerm))
{
  ATerm m_11 = NULL,n_11 = NULL,o_11 = NULL;
  m_11 = t;
  l_11 :
  if(match_cons(m_11, sym__2))
    {
      n_11 = ATgetArgument(m_11, 0);
      o_11 = ATgetArgument(m_11, 1);
      {
        t = not_null(o_11);
        {
          ATerm b_1 (ATerm t)
          {
            ATerm r_11 = NULL,s_11 = NULL,t_11 = NULL;
            r_11 = t;
            k_11 :
            if(match_cons(r_11, sym__2))
              {
                s_11 = ATgetArgument(r_11, 0);
                t_11 = ATgetArgument(r_11, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(n_11), not_null(s_11), not_null(t_11));
                  t = y_69(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, b_1);
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
  ATerm z_11 = NULL;
  z_11 = t;
  t = SSL_ReadFromFile(not_null(z_11));
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm e_12 = NULL;
  ATerm g_12 = NULL;
  e_12 = t;
  {
    ATerm a_12 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_10, (ATerm) ATmakeAppl(sym_Imported_1, not_null(e_12)));
        t = table_get_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_12;
      }
    {
      ATerm b_12;
      b_12 = t;
      {
        t = (ATerm) ATmakeAppl(sym__3, term_z_10, term_c_12, (ATerm) ATinsert(ATempty, not_null(e_12)));
        t = table_put_0(t);
      }
      t = b_12;
      {
        ATerm c_1 (ATerm t)
        {
          ATerm d_1 (ATerm t)
          {
            t = term_d_12;
            return(t);
          }
          t = debug_1(t, d_1);
          return(t);
        }
        t = if_verbose4_1(t, c_1);
        {
          ATerm f_12 = t;
          int i_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = file_exists_0(t);
              t = ReadFromFile_0(t);
              LocalPopChoice(i_12);
            }
          else
            {
              t = f_12;
              t = (ATerm) ATempty;
            }
          {
            ATerm e_1 (ATerm t)
            {
              ATerm f_1 (ATerm t)
              {
                t = term_j_12;
                return(t);
              }
              t = say_1(t, f_1);
              return(t);
            }
            t = if_verbose6_1(t, e_1);
            {
              ATerm h_12 = NULL;
              h_12 = t;
              if(((g_12 != NULL) && (g_12 != h_12)))
                _fail(h_12);
              else
                g_12 = h_12;
              {
                t = (ATerm) ATmakeAppl(sym__2, term_z_10, not_null(g_12));
                {
                  t = table_putlist_1(t, table_append_0);
                  {
                    ATerm g_1 (ATerm t)
                    {
                      ATerm h_1 (ATerm t)
                      {
                        t = term_k_12;
                        return(t);
                      }
                      t = say_1(t, h_1);
                      return(t);
                    }
                    t = if_verbose6_1(t, g_1);
                    {
                      t = (ATerm) ATmakeAppl(sym__3, term_z_10, (ATerm)ATmakeAppl(sym_Imported_1, not_null(e_12)), (ATerm) ATempty);
                      {
                        t = table_put_0(t);
                        {
                          ATerm i_1 (ATerm t)
                          {
                            ATerm j_1 (ATerm t)
                            {
                              t = term_j_12;
                              return(t);
                            }
                            t = say_1(t, j_1);
                            return(t);
                          }
                          t = if_verbose4_1(t, i_1);
                        }
                      }
                    }
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
  ATerm l_12 = NULL;
  l_12 = t;
  t = SSL_getenv(not_null(l_12));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm m_12 = t;
  int n_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_12;
      t = get_config_0(t);
      LocalPopChoice(n_12);
    }
  else
    {
      t = m_12;
      {
        ATerm r_12 = t;
        int s_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_t_12;
            t = getenv_0(t);
            LocalPopChoice(s_12);
          }
        else
          {
            t = r_12;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm k_1 (ATerm t)
  {
    ATerm l_1 (ATerm t)
    {
      t = term_y_12;
      return(t);
    }
    t = debug_1(t, l_1);
    return(t);
  }
  t = if_verbose5_1(t, k_1);
  {
    ATerm z_12;
    z_12 = t;
    {
      ATerm a_13 = t;
      int b_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_c_13;
          t = table_get_0(t);
          LocalPopChoice(b_13);
        }
      else
        {
          t = a_13;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = z_12;
    {
      ATerm o_1 (ATerm t)
      {
        ATerm p_1 (ATerm t)
        {
          t = term_i_13;
          return(t);
        }
        t = debug_1(t, p_1);
        return(t);
      }
      t = if_verbose5_1(t, o_1);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm j_13 = t;
  int r_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_1 (ATerm t)
      {
        ATerm r_1 (ATerm t)
        {
          t = term_s_13;
          return(t);
        }
        t = debug_1(t, r_1);
        return(t);
      }
      t = if_verbose5_1(t, q_1);
      {
        t = xtc_load_0(t);
        {
          ATerm t_13 = t;
          int u_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              LocalPopChoice(u_13);
            }
          else
            {
              t = t_13;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm s_1 (ATerm t)
            {
              ATerm t_1 (ATerm t)
              {
                t = term_s_13;
                return(t);
              }
              t = debug_1(t, t_1);
              return(t);
            }
            t = if_verbose5_1(t, s_1);
          }
        }
      }
      LocalPopChoice(r_13);
    }
  else
    {
      t = j_13;
      {
        ATerm p_12 = NULL;
        ATerm q_12 = NULL;
        q_12 = t;
        if(((p_12 != NULL) && (p_12 != q_12)))
          _fail(q_12);
        else
          p_12 = q_12;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_13), not_null(p_12)), term_x_13);
          {
            t = error_0(t);
            {
              ATerm u_1 (ATerm t)
              {
                t = term_z_10;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm v_1 (ATerm t)
                    {
                      t = term_z_13;
                      return(t);
                    }
                    t = debug_1(t, v_1);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, u_1);
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
ATerm xtc_command_1 (ATerm t, ATerm w_66 (ATerm))
{
  ATerm u_12 = NULL;
  ATerm b_14;
  b_14 = t;
  {
    ATerm v_12 = NULL;
    t = w_66(t);
    {
      t = xtc_find_warning_0(t);
      {
        v_12 = t;
        if(((u_12 != NULL) && (u_12 != v_12)))
          _fail(v_12);
        else
          u_12 = v_12;
      }
    }
  }
  t = b_14;
  {
    ATerm c_14;
    c_14 = t;
    {
      ATerm w_12 = NULL;
      ATerm x_12 = NULL;
      x_12 = t;
      if(((w_12 != NULL) && (w_12 != x_12)))
        _fail(x_12);
      else
        w_12 = x_12;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_12), not_null(w_12));
        t = call_0(t);
      }
    }
    t = c_14;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm d_76 (ATerm))
{
  ATerm f_13 = NULL,g_13 = NULL,h_13 = NULL;
  f_13 = t;
  e_13 :
  if(match_cons(f_13, sym__2))
    {
      g_13 = ATgetArgument(f_13, 0);
      h_13 = ATgetArgument(f_13, 1);
      {
        ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL;
        ATerm d_14;
        d_14 = t;
        {
          ATerm n_13 = NULL;
          ATerm o_13 = NULL,p_13 = NULL,q_13 = NULL;
          t = d_76(t);
          {
            n_13 = t;
            {
              if(((k_13 != NULL) && (k_13 != n_13)))
                _fail(n_13);
              else
                k_13 = n_13;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(k_13), not_null(g_13), not_null(h_13));
                {
                  t = table_push_0(t);
                  {
                    ATerm e_14 = t;
                    int f_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(k_13), term_g_14);
                        t = table_get_0(t);
                        LocalPopChoice(f_14);
                      }
                    else
                      {
                        t = e_14;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      o_13 = t;
                      d_13 :
                      if(((ATgetType(o_13) == AT_LIST) && ((ATermList) o_13 != ATempty)))
                        {
                          p_13 = ATgetFirst((ATermList) o_13);
                          q_13 = (ATerm) ATgetNext((ATermList) o_13);
                          {
                            if(((l_13 != NULL) && (l_13 != p_13)))
                              _fail(p_13);
                            else
                              l_13 = p_13;
                            {
                              if(((m_13 != NULL) && (m_13 != q_13)))
                                _fail(q_13);
                              else
                                m_13 = q_13;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(k_13), term_g_14, (ATerm) ATinsert(CheckATermList(not_null(m_13)), (ATerm) ATinsert(CheckATermList(not_null(l_13)), not_null(g_13))));
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
        t = d_14;
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
  ATerm v_13 = NULL;
  ATerm w_13 = NULL;
  t = term_h_14;
  {
    t = new_0(t);
    {
      w_13 = t;
      if(((v_13 != NULL) && (v_13 != w_13)))
        _fail(w_13);
      else
        v_13 = w_13;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(v_13), term_i_14);
    {
      t = conc_strings_0(t);
      {
        ATerm w_1 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, w_1);
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm a_14 = NULL;
  t = new_file_0(t);
  {
    a_14 = t;
    {
      ATerm q_14;
      q_14 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_14), term_v_14);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(a_14), term_h_14);
            {
              ATerm x_1 (ATerm t)
              {
                t = term_w_14;
                return(t);
              }
              t = assert_1(t, x_1);
            }
          }
        }
      }
      t = q_14;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm k_14 = NULL,l_14 = NULL;
  k_14 = t;
  j_14 :
  if(match_cons(k_14, sym_stdin_0))
    {
      ATerm m_14 = NULL;
      ATerm n_14 = NULL;
      ATerm o_14 = NULL;
      t = xtc_new_file_0(t);
      {
        n_14 = t;
        {
          if(((m_14 != NULL) && (m_14 != n_14)))
            _fail(n_14);
          else
            m_14 = n_14;
          {
            ATerm p_14 = NULL;
            t = l_0(t);
            {
              p_14 = t;
              if(((o_14 != NULL) && (o_14 != p_14)))
                _fail(p_14);
              else
                o_14 = p_14;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(o_14), (ATerm) ATinsert(ATinsert(ATempty, not_null(m_14)), term_x_14));
              {
                t = conc_0(t);
                t = xtc_command_1(t, k_0);
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(m_14));
    }
  else
    {
      if(match_cons(k_14, sym_FILE_1))
        {
          l_14 = ATgetArgument(k_14, 0);
          {
            ATerm r_14 = NULL;
            ATerm s_14 = NULL;
            t = not_null(l_14);
            {
              ATerm t_14 = NULL;
              t = xtc_new_file_0(t);
              {
                s_14 = t;
                {
                  if(((r_14 != NULL) && (r_14 != s_14)))
                    _fail(s_14);
                  else
                    r_14 = s_14;
                  {
                    ATerm u_14 = NULL;
                    t = l_0(t);
                    {
                      u_14 = t;
                      if(((t_14 != NULL) && (t_14 != u_14)))
                        _fail(u_14);
                      else
                        t_14 = u_14;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(t_14), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(r_14)), term_x_14), not_null(l_14)), term_y_14));
                      {
                        t = conc_0(t);
                        t = xtc_command_1(t, k_0);
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(r_14));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm xtc_transform_2 (ATerm t, ATerm y_66 (ATerm), ATerm z_66 (ATerm))
{
  ATerm z_14 = t;
  int a_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = xtc_transform_file_2(t, y_66, z_66);
      LocalPopChoice(a_15);
    }
  else
    {
      t = z_14;
      t = xtc_transform_term_2(t, y_66, z_66);
    }
  return(t);
}
ATerm parse_module_0 (ATerm t)
{
  ATerm c_15 = t;
  int d_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_15 = NULL;
      ATerm y_1 (ATerm t)
      {
        ATerm e_15 = t;
        if((PushChoice() == 0))
          {
            ATerm k_15 = NULL;
            k_15 = t;
            b_15 :
            if(!(match_string(k_15, "rtree")))
              {
                _fail(t);
              }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = e_15;
          }
        return(t);
      }
      ATerm z_1 (ATerm t)
      {
        ATerm l_15 = NULL;
        l_15 = t;
        if(((j_15 != NULL) && (j_15 != l_15)))
          _fail(l_15);
        else
          j_15 = l_15;
        return(t);
      }
      t = _2(t, y_1, z_1);
      {
        t = Snd_0(t);
        {
          ATerm f_15 = t;
          int g_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_2 (ATerm t)
              {
                t = term_v_15;
                return(t);
              }
              ATerm b_2 (ATerm t)
              {
                ATerm m_15 = NULL,o_15 = NULL,q_15 = NULL;
                ATerm w_15;
                w_15 = t;
                {
                  ATerm n_15 = NULL;
                  t = pass_verbose_0(t);
                  {
                    n_15 = t;
                    if(((m_15 != NULL) && (m_15 != n_15)))
                      _fail(n_15);
                    else
                      m_15 = n_15;
                  }
                }
                t = w_15;
                {
                  ATerm x_15;
                  x_15 = t;
                  {
                    ATerm p_15 = NULL;
                    t = pass_keep_0(t);
                    {
                      p_15 = t;
                      if(((o_15 != NULL) && (o_15 != p_15)))
                        _fail(p_15);
                      else
                        o_15 = p_15;
                    }
                  }
                  t = x_15;
                  {
                    ATerm r_15 = NULL;
                    t = term_y_15;
                    {
                      t = get_config_0(t);
                      {
                        r_15 = t;
                        if(((q_15 != NULL) && (q_15 != r_15)))
                          _fail(r_15);
                        else
                          q_15 = r_15;
                      }
                    }
                    {
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(q_15)), not_null(o_15)), not_null(m_15));
                      t = concat_0(t);
                    }
                  }
                }
                return(t);
              }
              t = xtc_transform_2(t, a_2, b_2);
              t = read_from_0(t);
              LocalPopChoice(g_15);
            }
          else
            {
              t = f_15;
              {
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_15)), term_z_15);
                t = fatal_error_0(t);
              }
            }
        }
      }
      LocalPopChoice(d_15);
    }
  else
    {
      t = c_15;
      {
        ATerm s_15 = NULL,t_15 = NULL,u_15 = NULL;
        s_15 = t;
        h_15 :
        if(match_cons(s_15, sym__2))
          {
            t_15 = ATgetArgument(s_15, 0);
            u_15 = ATgetArgument(s_15, 1);
            i_15 :
            if(match_string(t_15, "rtree"))
              {
                t = Snd_0(t);
                {
                  ATerm a_16 = t;
                  int b_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = read_from_0(t);
                      LocalPopChoice(b_16);
                    }
                  else
                    {
                      t = a_16;
                      {
                        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_15)), term_z_15);
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
ATerm if_verbose3_1 (ATerm t, ATerm a_73 (ATerm))
{
  ATerm c_2 (ATerm t)
  {
    ATerm e_16;
    e_16 = t;
    {
      ATerm c_16 = NULL;
      ATerm d_16 = NULL;
      t = term_o_10;
      {
        t = get_config_0(t);
        {
          d_16 = t;
          if(((c_16 != NULL) && (c_16 != d_16)))
            _fail(d_16);
          else
            c_16 = d_16;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_16), term_f_16);
        t = geq_0(t);
      }
    }
    t = e_16;
    t = a_73(t);
    return(t);
  }
  t = try_1(t, c_2);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm i_16;
  i_16 = t;
  {
    ATerm g_16 = NULL;
    ATerm h_16 = NULL;
    h_16 = t;
    if(((g_16 != NULL) && (g_16 != h_16)))
      _fail(h_16);
    else
      g_16 = h_16;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_j_16, not_null(g_16));
      t = printnl_0(t);
    }
  }
  t = i_16;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm k_16;
  k_16 = t;
  {
    t = error_0(t);
    {
      t = term_h_10;
      t = exit_0(t);
    }
  }
  t = k_16;
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm l_16 = NULL;
  ATerm n_16 = NULL;
  l_16 = t;
  {
    ATerm m_16;
    m_16 = t;
    {
      ATerm o_16 = NULL;
      t = term_p_16;
      {
        o_16 = t;
        if(((n_16 != NULL) && (n_16 != o_16)))
          _fail(o_16);
        else
          n_16 = o_16;
      }
    }
    t = m_16;
    {
      t = SSL_open_file(not_null(l_16), not_null(n_16));
      t = SSL_close_file(not_null(l_16));
    }
  }
  return(t);
}
ATerm find_in_path_0 (ATerm t)
{
  ATerm u_16 = NULL,v_16 = NULL,w_16 = NULL;
  u_16 = t;
  t_16 :
  if(match_cons(u_16, sym__2))
    {
      v_16 = ATgetArgument(u_16, 0);
      w_16 = ATgetArgument(u_16, 1);
      {
        t = not_null(w_16);
        {
          ATerm d_2 (ATerm t)
          {
            ATerm z_16 = NULL;
            ATerm a_17 = NULL;
            a_17 = t;
            if(((z_16 != NULL) && (z_16 != a_17)))
              _fail(a_17);
            else
              z_16 = a_17;
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(v_16)), term_q_16), not_null(z_16));
              {
                t = concat_strings_0(t);
                t = file_exists_0(t);
              }
            }
            return(t);
          }
          t = fetch_elem_1(t, d_2);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm w_77 (ATerm), ATerm x_77 (ATerm))
{
  ATerm f_17 = NULL,h_17 = NULL;
  ATerm r_16;
  r_16 = t;
  {
    ATerm g_17 = NULL;
    t = w_77(t);
    {
      g_17 = t;
      if(((f_17 != NULL) && (f_17 != g_17)))
        _fail(g_17);
      else
        f_17 = g_17;
    }
  }
  t = r_16;
  {
    ATerm i_17 = NULL;
    t = x_77(t);
    {
      i_17 = t;
      if(((h_17 != NULL) && (h_17 != i_17)))
        _fail(i_17);
      else
        h_17 = i_17;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_17), not_null(h_17));
  }
  return(t);
}
ATerm guarantee_extension_1 (ATerm t, ATerm e_77 (ATerm))
{
  t = basename_0(t);
  {
    ATerm e_2 (ATerm t)
    {
      t = term_h_14;
      t = e_77(t);
      return(t);
    }
    t = split_2(t, _id, e_2);
    t = add_extension_0(t);
  }
  return(t);
}
ATerm find_file_1 (ATerm t, ATerm z_74 (ATerm))
{
  ATerm i_2 (ATerm t)
  {
    t = guarantee_extension_1(t, z_74);
    return(t);
  }
  t = _2(t, i_2, _id);
  t = find_in_path_0(t);
  return(t);
}
ATerm fetch_elem_1 (ATerm t, ATerm j_85 (ATerm))
{
  ATerm m_17 = NULL;
  ATerm j_2 (ATerm t)
  {
    ATerm n_17 = NULL;
    t = j_85(t);
    {
      n_17 = t;
      if(((m_17 != NULL) && (m_17 != n_17)))
        _fail(n_17);
      else
        m_17 = n_17;
    }
    return(t);
  }
  t = fetch_1(t, j_2);
  t = not_null(m_17);
  return(t);
}
ATerm find_module_1 (ATerm t, ATerm j_94 (ATerm))
{
  ATerm u_17 = NULL,v_17 = NULL,w_17 = NULL;
  u_17 = t;
  t_17 :
  if(match_cons(u_17, sym__2))
    {
      v_17 = ATgetArgument(u_17, 0);
      w_17 = ATgetArgument(u_17, 1);
      {
        t = not_null(w_17);
        {
          ATerm s_16 = t;
          int x_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_2 (ATerm t)
              {
                ATerm z_17 = NULL;
                ATerm b_18 = NULL;
                z_17 = t;
                {
                  ATerm c_18 = NULL,e_18 = NULL;
                  ATerm d_18 = NULL;
                  t = j_94(t);
                  {
                    d_18 = t;
                    if(((c_18 != NULL) && (c_18 != d_18)))
                      _fail(d_18);
                    else
                      c_18 = d_18;
                  }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(v_17), not_null(c_18));
                    {
                      ATerm q_2 (ATerm t)
                      {
                        t = not_null(z_17);
                        return(t);
                      }
                      t = find_file_1(t, q_2);
                      {
                        e_18 = t;
                        if(((b_18 != NULL) && (b_18 != e_18)))
                          _fail(e_18);
                        else
                          b_18 = e_18;
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__2, not_null(z_17), (ATerm) ATmakeAppl(sym_FILE_1, not_null(b_18)));
                }
                return(t);
              }
              t = fetch_elem_1(t, n_2);
              LocalPopChoice(x_16);
            }
          else
            {
              t = s_16;
              {
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_17), not_null(v_17)), term_y_16);
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
ATerm get_module_1 (ATerm t, ATerm i_94 (ATerm))
{
  ATerm o_18 = NULL;
  ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL;
  o_18 = t;
  {
    ATerm t_18 = NULL,u_18 = NULL,v_18 = NULL,w_18 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_18), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_16), term_e_17), term_d_17), term_c_17));
    {
      t = find_module_1(t, i_94);
      {
        t_18 = t;
        m_18 :
        if(match_cons(t_18, sym__2))
          {
            u_18 = ATgetArgument(t_18, 0);
            v_18 = ATgetArgument(t_18, 1);
            n_18 :
            if(match_cons(v_18, sym_FILE_1))
              {
                w_18 = ATgetArgument(v_18, 0);
                {
                  ATerm x_18 = NULL;
                  if(((q_18 != NULL) && (q_18 != u_18)))
                    _fail(u_18);
                  else
                    q_18 = u_18;
                  {
                    if(((r_18 != NULL) && (r_18 != w_18)))
                      _fail(w_18);
                    else
                      r_18 = w_18;
                    {
                      ATerm r_2 (ATerm t)
                      {
                        ATerm j_17;
                        j_17 = t;
                        {
                          t = not_null(r_18);
                          {
                            ATerm s_2 (ATerm t)
                            {
                              t = term_k_17;
                              return(t);
                            }
                            t = debug_1(t, s_2);
                          }
                        }
                        t = j_17;
                        return(t);
                      }
                      t = if_verbose3_1(t, r_2);
                      {
                        t = parse_module_0(t);
                        {
                          x_18 = t;
                          if(((s_18 != NULL) && (s_18 != x_18)))
                            _fail(x_18);
                          else
                            s_18 = x_18;
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(r_18), not_null(s_18));
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm h_19 = NULL;
  ATerm j_19 = NULL,k_19 = NULL;
  h_19 = t;
  {
    ATerm l_19 = NULL;
    ATerm n_19 = NULL,o_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL;
    t = not_null(h_19);
    {
      l_19 = t;
      {
        t = SSL_explode_term(not_null(l_19));
        {
          n_19 = t;
          e_19 :
          if(match_cons(n_19, sym__2))
            {
              o_19 = ATgetArgument(n_19, 0);
              p_19 = ATgetArgument(n_19, 1);
              f_19 :
              if(match_string(o_19, ""))
                {
                  g_19 :
                  if(((ATgetType(p_19) == AT_LIST) && ((ATermList) p_19 != ATempty)))
                    {
                      q_19 = ATgetFirst((ATermList) p_19);
                      r_19 = (ATerm) ATgetNext((ATermList) p_19);
                      {
                        if(((k_19 != NULL) && (k_19 != q_19)))
                          _fail(q_19);
                        else
                          k_19 = q_19;
                        if(((j_19 != NULL) && (j_19 != r_19)))
                          _fail(r_19);
                        else
                          j_19 = r_19;
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
    t = not_null(k_19);
  }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm y_19 = NULL,z_19 = NULL,a_20 = NULL,b_20 = NULL,c_20 = NULL,d_20 = NULL,e_20 = NULL,f_20 = NULL;
  y_19 = t;
  w_19 :
  if(match_cons(y_19, sym__5))
    {
      z_19 = ATgetArgument(y_19, 0);
      c_20 = ATgetArgument(y_19, 1);
      d_20 = ATgetArgument(y_19, 2);
      e_20 = ATgetArgument(y_19, 3);
      f_20 = ATgetArgument(y_19, 4);
      x_19 :
      if(((ATgetType(z_19) == AT_LIST) && ((ATermList) z_19 != ATempty)))
        {
          a_20 = ATgetFirst((ATermList) z_19);
          b_20 = (ATerm) ATgetNext((ATermList) z_19);
          t = (ATerm) ATmakeAppl(sym__5, not_null(b_20), not_null(c_20), not_null(d_20), not_null(e_20), (ATerm) ATinsert(CheckATermList(not_null(f_20)), not_null(a_20)));
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
ATerm UfShift_0 (ATerm t)
{
  ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL;
  q_20 = t;
  o_20 :
  if(match_cons(q_20, sym__2))
    {
      r_20 = ATgetArgument(q_20, 0);
      s_20 = ATgetArgument(q_20, 1);
      p_20 :
      if(((ATgetType(s_20) == AT_LIST) && ((ATermList) s_20 != ATempty)))
        {
          t_20 = ATgetFirst((ATermList) s_20);
          u_20 = (ATerm) ATgetNext((ATermList) s_20);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(r_20)), not_null(t_20)), not_null(u_20));
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
  ATerm b_21 = NULL,c_21 = NULL,d_21 = NULL;
  b_21 = t;
  a_21 :
  if(match_cons(b_21, sym__2))
    {
      c_21 = ATgetArgument(b_21, 0);
      d_21 = ATgetArgument(b_21, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(d_21)), not_null(c_21));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm l_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL;
  l_21 = t;
  i_21 :
  if(match_cons(l_21, sym__2))
    {
      m_21 = ATgetArgument(l_21, 0);
      p_21 = ATgetArgument(l_21, 1);
      j_21 :
      if(((ATgetType(m_21) == AT_LIST) && ((ATermList) m_21 != ATempty)))
        {
          n_21 = ATgetFirst((ATermList) m_21);
          o_21 = (ATerm) ATgetNext((ATermList) m_21);
          k_21 :
          if(((ATgetType(p_21) == AT_LIST) && ((ATermList) p_21 != ATempty)))
            {
              q_21 = ATgetFirst((ATermList) p_21);
              r_21 = (ATerm) ATgetNext((ATermList) p_21);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(n_21), not_null(q_21)), (ATerm) ATmakeAppl(sym__2, not_null(o_21), not_null(r_21)));
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
  ATerm e_22 = NULL,h_22 = NULL,i_22 = NULL;
  e_22 = t;
  z_21 :
  if(match_cons(e_22, sym__2))
    {
      h_22 = ATgetArgument(e_22, 0);
      i_22 = ATgetArgument(e_22, 1);
      c_22 :
      if(((ATermList) h_22 == ATempty))
        {
          d_22 :
          if(((ATermList) i_22 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm k_83 (ATerm), ATerm l_83 (ATerm), ATerm m_83 (ATerm), ATerm n_83 (ATerm))
{
  ATerm z_22 (ATerm t)
  {
    ATerm l_17 = t;
    int o_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_83(t);
        LocalPopChoice(o_17);
      }
    else
      {
        t = l_17;
        {
          t = l_83(t);
          {
            t = _2(t, n_83, z_22);
            t = m_83(t);
          }
        }
      }
    return(t);
  }
  t = z_22(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm p_83 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, p_83);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm w_23 = NULL,h_24 = NULL,i_24 = NULL,r_24 = NULL,s_24 = NULL;
  w_23 = t;
  u_23 :
  if(((ATgetType(w_23) == AT_LIST) && ((ATermList) w_23 != ATempty)))
    {
      h_24 = ATgetFirst((ATermList) w_23);
      s_24 = (ATerm) ATgetNext((ATermList) w_23);
      v_23 :
      if(match_cons(h_24, sym__2))
        {
          i_24 = ATgetArgument(h_24, 0);
          r_24 = ATgetArgument(h_24, 1);
          {
            ATerm w_24 = NULL,x_24 = NULL,i_25 = NULL,q_25 = NULL;
            ATerm p_17;
            p_17 = t;
            {
              ATerm y_24 = NULL;
              ATerm a_25 = NULL,b_25 = NULL,c_25 = NULL;
              t = not_null(r_24);
              {
                y_24 = t;
                {
                  t = SSL_explode_term(not_null(y_24));
                  {
                    a_25 = t;
                    p_23 :
                    if(match_cons(a_25, sym__2))
                      {
                        b_25 = ATgetArgument(a_25, 0);
                        c_25 = ATgetArgument(a_25, 1);
                        {
                          if(((w_24 != NULL) && (w_24 != b_25)))
                            _fail(b_25);
                          else
                            w_24 = b_25;
                          if(((x_24 != NULL) && (x_24 != c_25)))
                            _fail(c_25);
                          else
                            x_24 = c_25;
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
            t = p_17;
            {
              ATerm q_17;
              q_17 = t;
              {
                ATerm j_25 = NULL;
                ATerm m_25 = NULL,n_25 = NULL,p_25 = NULL;
                t = not_null(i_24);
                {
                  j_25 = t;
                  {
                    t = SSL_explode_term(not_null(j_25));
                    {
                      m_25 = t;
                      s_23 :
                      if(match_cons(m_25, sym__2))
                        {
                          n_25 = ATgetArgument(m_25, 0);
                          p_25 = ATgetArgument(m_25, 1);
                          {
                            if(((w_24 != NULL) && (w_24 != n_25)))
                              _fail(n_25);
                            else
                              w_24 = n_25;
                            if(((i_25 != NULL) && (i_25 != p_25)))
                              _fail(p_25);
                            else
                              i_25 = p_25;
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
              t = q_17;
              {
                ATerm r_25 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(i_25), not_null(x_24));
                {
                  t = zip_1(t, _id);
                  {
                    r_25 = t;
                    if(((q_25 != NULL) && (q_25 != r_25)))
                      _fail(r_25);
                    else
                      q_25 = r_25;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(q_25), not_null(s_24));
                  t = conc_0(t);
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
  ATerm p_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL;
  p_26 = t;
  n_26 :
  if(((ATgetType(p_26) == AT_LIST) && ((ATermList) p_26 != ATempty)))
    {
      q_26 = ATgetFirst((ATermList) p_26);
      t_26 = (ATerm) ATgetNext((ATermList) p_26);
      o_26 :
      if(match_cons(q_26, sym__2))
        {
          r_26 = ATgetArgument(q_26, 0);
          s_26 = ATgetArgument(q_26, 1);
          {
            ATerm v_26 = NULL;
            if(((r_26 != NULL) && (r_26 != s_26)))
              _fail(s_26);
            else
              r_26 = s_26;
            {
              if(((v_26 != NULL) && (v_26 != t_26)))
                _fail(t_26);
              else
                v_26 = t_26;
              t = not_null(v_26);
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
ATerm eq_0 (ATerm t)
{
  ATerm z_26 = NULL,a_27 = NULL,b_27 = NULL;
  z_26 = t;
  y_26 :
  if(match_cons(z_26, sym__2))
    {
      a_27 = ATgetArgument(z_26, 0);
      b_27 = ATgetArgument(z_26, 1);
      if(((a_27 != NULL) && (a_27 != b_27)))
        _fail(b_27);
      else
        a_27 = b_27;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm p_80 (ATerm), ATerm q_80 (ATerm))
{
  ATerm h_27 = NULL,i_27 = NULL,j_27 = NULL;
  h_27 = t;
  g_27 :
  if(((ATgetType(h_27) == AT_LIST) && ((ATermList) h_27 != ATempty)))
    {
      i_27 = ATgetFirst((ATermList) h_27);
      j_27 = (ATerm) ATgetNext((ATermList) h_27);
      {
        t = q_80(t);
        {
          ATerm t_2 (ATerm t)
          {
            ATerm m_27 = NULL;
            m_27 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(i_27), not_null(m_27));
              t = p_80(t);
            }
            return(t);
          }
          t = fetch_1(t, t_2);
        }
        t = not_null(j_27);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm u_80 (ATerm))
{
  ATerm s_27 = NULL,t_27 = NULL,u_27 = NULL;
  s_27 = t;
  r_27 :
  if(match_cons(s_27, sym__2))
    {
      t_27 = ATgetArgument(s_27, 0);
      u_27 = ATgetArgument(s_27, 1);
      {
        t = not_null(t_27);
        {
          ATerm y_27 (ATerm t)
          {
            ATerm r_17 = t;
            int s_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(s_17);
              }
            else
              {
                t = r_17;
                {
                  ATerm x_17 = t;
                  int y_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm u_2 (ATerm t)
                      {
                        t = not_null(u_27);
                        return(t);
                      }
                      t = HdMember_p__2(t, u_80, u_2);
                      t = y_27(t);
                      LocalPopChoice(y_17);
                    }
                  else
                    {
                      t = x_17;
                      t = Cons_2(t, _id, y_27);
                    }
                }
              }
            return(t);
          }
          t = y_27(t);
        }
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
  ATerm a_18 = t;
  int f_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = diff_1(t, eq_0);
      LocalPopChoice(f_18);
    }
  else
    {
      t = a_18;
      {
        ATerm w_2 (ATerm t)
        {
          ATerm a_28 = NULL;
          a_28 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(a_28));
          return(t);
        }
        ATerm z_2 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm c_3 (ATerm t)
        {
          ATerm g_18 = t;
          int h_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_3 (ATerm t)
              {
                ATerm i_18 = t;
                int j_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(j_18);
                  }
                else
                  {
                    t = i_18;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, d_3);
              LocalPopChoice(h_18);
            }
          else
            {
              t = g_18;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, w_2, z_2, c_3);
      }
    }
  return(t);
}
ATerm GnNext_3 (ATerm t, ATerm s_65 (ATerm), ATerm t_65 (ATerm), ATerm u_65 (ATerm))
{
  ATerm m_28 = NULL,n_28 = NULL,o_28 = NULL,w_28 = NULL,x_28 = NULL,z_28 = NULL,a_29 = NULL,d_29 = NULL;
  m_28 = t;
  k_28 :
  if(match_cons(m_28, sym__5))
    {
      n_28 = ATgetArgument(m_28, 0);
      x_28 = ATgetArgument(m_28, 1);
      z_28 = ATgetArgument(m_28, 2);
      a_29 = ATgetArgument(m_28, 3);
      d_29 = ATgetArgument(m_28, 4);
      l_28 :
      if(((ATgetType(n_28) == AT_LIST) && ((ATermList) n_28 != ATempty)))
        {
          o_28 = ATgetFirst((ATermList) n_28);
          w_28 = (ATerm) ATgetNext((ATermList) n_28);
          {
            ATerm r_29 = NULL,s_29 = NULL,t_29 = NULL,x_29 = NULL,z_29 = NULL,b_30 = NULL;
            ATerm k_18;
            k_18 = t;
            {
              ATerm u_29 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(o_28), not_null(z_28));
              {
                ATerm v_29 = NULL;
                t = s_65(t);
                {
                  u_29 = t;
                  {
                    if(((r_29 != NULL) && (r_29 != u_29)))
                      _fail(u_29);
                    else
                      r_29 = u_29;
                    {
                      t = not_null(r_29);
                      {
                        ATerm w_29 = NULL;
                        t = t_65(t);
                        {
                          v_29 = t;
                          {
                            if(((s_29 != NULL) && (s_29 != v_29)))
                              _fail(v_29);
                            else
                              s_29 = v_29;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, not_null(s_29), not_null(x_28));
                              {
                                t = diff_0(t);
                                {
                                  w_29 = t;
                                  if(((t_29 != NULL) && (t_29 != w_29)))
                                    _fail(w_29);
                                  else
                                    t_29 = w_29;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = k_18;
            {
              ATerm l_18;
              l_18 = t;
              {
                ATerm y_29 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(t_29), not_null(w_28));
                {
                  t = conc_0(t);
                  {
                    y_29 = t;
                    if(((x_29 != NULL) && (x_29 != y_29)))
                      _fail(y_29);
                    else
                      x_29 = y_29;
                  }
                }
              }
              t = l_18;
              {
                ATerm p_18;
                p_18 = t;
                {
                  ATerm a_30 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(t_29), not_null(x_28));
                  {
                    t = conc_0(t);
                    {
                      a_30 = t;
                      if(((z_29 != NULL) && (z_29 != a_30)))
                        _fail(a_30);
                      else
                        z_29 = a_30;
                    }
                  }
                }
                t = p_18;
                {
                  ATerm c_30 = NULL;
                  t = (ATerm) ATmakeAppl(sym__3, not_null(o_28), not_null(r_29), not_null(a_29));
                  {
                    t = u_65(t);
                    {
                      c_30 = t;
                      if(((b_30 != NULL) && (b_30 != c_30)))
                        _fail(c_30);
                      else
                        b_30 = c_30;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__5, not_null(x_29), not_null(z_29), not_null(z_28), not_null(b_30), not_null(d_29));
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
  ATerm r_30 = NULL,s_30 = NULL,t_30 = NULL,u_30 = NULL,v_30 = NULL,w_30 = NULL;
  r_30 = t;
  p_30 :
  if(match_cons(r_30, sym__5))
    {
      s_30 = ATgetArgument(r_30, 0);
      t_30 = ATgetArgument(r_30, 1);
      u_30 = ATgetArgument(r_30, 2);
      v_30 = ATgetArgument(r_30, 3);
      w_30 = ATgetArgument(r_30, 4);
      q_30 :
      if(((ATermList) s_30 == ATempty))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_30), not_null(w_30));
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
  ATerm g_31 = NULL,h_31 = NULL,i_31 = NULL,j_31 = NULL;
  g_31 = t;
  f_31 :
  if(match_cons(g_31, sym__3))
    {
      h_31 = ATgetArgument(g_31, 0);
      i_31 = ATgetArgument(g_31, 1);
      j_31 = ATgetArgument(g_31, 2);
      t = (ATerm) ATmakeAppl(sym__5, not_null(h_31), not_null(h_31), not_null(i_31), not_null(j_31), (ATerm) ATempty);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm m_93 (ATerm), ATerm n_93 (ATerm))
{
  ATerm o_31 (ATerm t)
  {
    ATerm y_18 = t;
    int z_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_93(t);
        LocalPopChoice(z_18);
      }
    else
      {
        t = y_18;
        {
          t = n_93(t);
          t = o_31(t);
        }
      }
    return(t);
  }
  t = o_31(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm p_93 (ATerm), ATerm q_93 (ATerm), ATerm r_93 (ATerm))
{
  t = p_93(t);
  t = while_not_2(t, q_93, r_93);
  return(t);
}
ATerm graph_nodes_undef_roots_3 (ATerm t, ATerm y_65 (ATerm), ATerm z_65 (ATerm), ATerm a_66 (ATerm))
{
  ATerm e_3 (ATerm t)
  {
    ATerm a_19 = t;
    int b_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3(t, y_65, z_65, a_66);
        LocalPopChoice(b_19);
      }
    else
      {
        t = a_19;
        t = GnUndefined_0(t);
      }
    return(t);
  }
  t = for_3(t, GnInitRoots_0, GnExit_0, e_3);
  return(t);
}
ATerm graph_nodes_roots_3 (ATerm t, ATerm n_66 (ATerm), ATerm o_66 (ATerm), ATerm p_66 (ATerm))
{
  ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL;
  t = graph_nodes_undef_roots_3(t, n_66, o_66, p_66);
  {
    r_31 = t;
    q_31 :
    if(match_cons(r_31, sym__2))
      {
        s_31 = ATgetArgument(r_31, 0);
        t_31 = ATgetArgument(r_31, 1);
        t = not_null(s_31);
      }
    else
      {
        _fail(t);
      }
  }
  return(t);
}
ATerm pack_stratego_modules_1 (ATerm t, ATerm h_94 (ATerm))
{
  ATerm i_32 = NULL;
  ATerm j_32 = NULL;
  j_32 = t;
  if(((i_32 != NULL) && (i_32 != j_32)))
    _fail(j_32);
  else
    i_32 = j_32;
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, not_null(i_32)), term_d_19), term_c_19), term_h_14, (ATerm) ATempty);
    {
      ATerm p_3 (ATerm t)
      {
        t = Fst_0(t);
        {
          ATerm r_3 (ATerm t)
          {
            ATerm k_32 = NULL;
            ATerm l_32 = NULL;
            t = term_h_14;
            {
              t = h_94(t);
              {
                l_32 = t;
                if(((k_32 != NULL) && (k_32 != l_32)))
                  _fail(l_32);
                else
                  k_32 = l_32;
              }
            }
            t = (ATerm) ATinsert(CheckATermList(not_null(k_32)), term_i_19);
            return(t);
          }
          t = get_module_1(t, r_3);
        }
        return(t);
      }
      ATerm q_3 (ATerm t)
      {
        ATerm m_32 = NULL,q_32 = NULL,r_32 = NULL,t_32 = NULL;
        m_32 = t;
        h_32 :
        if(match_cons(m_32, sym__3))
          {
            q_32 = ATgetArgument(m_32, 0);
            r_32 = ATgetArgument(m_32, 1);
            t_32 = ATgetArgument(m_32, 2);
            t = (ATerm) ATinsert(CheckATermList(not_null(t_32)), not_null(r_32));
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = graph_nodes_roots_3(t, p_3, get_stratego_imports_0, q_3);
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
  ATerm b_33 = NULL;
  b_33 = t;
  t = SSL_close_file(not_null(b_33));
  return(t);
}
ATerm Sep_1 (ATerm t, ATerm r_86 (ATerm))
{
  ATerm j_33 = NULL,k_33 = NULL,l_33 = NULL;
  j_33 = t;
  i_33 :
  if(((ATgetType(j_33) == AT_LIST) && ((ATermList) j_33 != ATempty)))
    {
      k_33 = ATgetFirst((ATermList) j_33);
      l_33 = (ATerm) ATgetNext((ATermList) j_33);
      {
        ATerm o_33 = NULL;
        ATerm p_33 = NULL;
        t = term_h_14;
        {
          t = r_86(t);
          {
            p_33 = t;
            if(((o_33 != NULL) && (o_33 != p_33)))
              _fail(p_33);
            else
              o_33 = p_33;
          }
        }
        t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(l_33)), not_null(k_33)), not_null(o_33));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm separate_by_1 (ATerm t, ATerm s_86 (ATerm))
{
  ATerm m_19 = t;
  int s_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(s_19);
    }
  else
    {
      t = m_19;
      {
        ATerm s_3 (ATerm t)
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
                t = Cons_2(t, _id, s_3);
                t = Sep_1(t, s_86);
              }
            }
          return(t);
        }
        t = Cons_2(t, _id, s_3);
      }
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm o_75 (ATerm))
{
  ATerm v_19;
  v_19 = t;
  {
    t = o_75(t);
    {
      ATerm t_3 (ATerm t)
      {
        t = term_g_20;
        return(t);
      }
      t = debug_1(t, t_3);
    }
  }
  t = v_19;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm x_33 = NULL,y_33 = NULL;
  ATerm h_20 = t;
  int i_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_33 = NULL,a_34 = NULL,b_34 = NULL;
      z_33 = t;
      u_33 :
      if(match_cons(z_33, sym__2))
        {
          a_34 = ATgetArgument(z_33, 0);
          b_34 = ATgetArgument(z_33, 1);
          {
            if(((y_33 != NULL) && (y_33 != a_34)))
              _fail(a_34);
            else
              y_33 = a_34;
            if(((x_33 != NULL) && (x_33 != b_34)))
              _fail(b_34);
            else
              x_33 = b_34;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(i_20);
      t = SSL_open_file(not_null(y_33), not_null(x_33));
    }
  else
    {
      t = h_20;
      {
        ATerm c_34 = NULL;
        ATerm d_34 = NULL;
        ATerm u_3 (ATerm t)
        {
          t = term_j_20;
          return(t);
        }
        t = obsolete_1(t, u_3);
        {
          c_34 = t;
          {
            if(((y_33 != NULL) && (y_33 != c_34)))
              _fail(c_34);
            else
              y_33 = c_34;
            {
              ATerm k_20;
              k_20 = t;
              {
                ATerm e_34 = NULL;
                t = term_v_14;
                {
                  e_34 = t;
                  if(((d_34 != NULL) && (d_34 != e_34)))
                    _fail(e_34);
                  else
                    d_34 = e_34;
                }
              }
              t = k_20;
              t = SSL_open_file(not_null(y_33), not_null(d_34));
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
  ATerm k_34 = NULL,l_34 = NULL,m_34 = NULL;
  k_34 = t;
  j_34 :
  if(match_cons(k_34, sym__2))
    {
      l_34 = ATgetArgument(k_34, 0);
      m_34 = ATgetArgument(k_34, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(m_34)), term_i_19), not_null(l_34));
        t = concat_strings_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm create_dep_file_1 (ATerm t, ATerm r_65 (ATerm))
{
  ATerm w_34 = NULL,x_34 = NULL,y_34 = NULL;
  w_34 = t;
  v_34 :
  if(match_cons(w_34, sym__2))
    {
      x_34 = ATgetArgument(w_34, 0);
      y_34 = ATgetArgument(w_34, 1);
      {
        ATerm f_35 = NULL,i_35 = NULL;
        ATerm j_35 = NULL;
        t = not_null(x_34);
        {
          ATerm k_35 = NULL,r_35 = NULL;
          t = r_65(t);
          {
            j_35 = t;
            {
              if(((f_35 != NULL) && (f_35 != j_35)))
                _fail(j_35);
              else
                f_35 = j_35;
              {
                ATerm l_35 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(f_35), term_l_20);
                {
                  t = add_extension_0(t);
                  {
                    l_35 = t;
                    if(((k_35 != NULL) && (k_35 != l_35)))
                      _fail(l_35);
                    else
                      k_35 = l_35;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(k_35), term_v_14);
                  {
                    ATerm s_35 = NULL;
                    t = open_file_0(t);
                    {
                      r_35 = t;
                      {
                        if(((i_35 != NULL) && (i_35 != r_35)))
                          _fail(r_35);
                        else
                          i_35 = r_35;
                        {
                          ATerm t_35 = NULL;
                          t = (ATerm) ATinsert(CheckATermList(not_null(y_34)), term_m_20);
                          {
                            ATerm z_3 (ATerm t)
                            {
                              t = term_n_20;
                              return(t);
                            }
                            t = separate_by_1(t, z_3);
                            {
                              t_35 = t;
                              if(((s_35 != NULL) && (s_35 != t_35)))
                                _fail(t_35);
                              else
                                s_35 = t_35;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(i_35), (ATerm) ATinsert(CheckATermList(not_null(s_35)), not_null(f_35)));
                            {
                              t = printnl_0(t);
                              {
                                t = not_null(i_35);
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_34), not_null(y_34));
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
  ATerm a_36 = NULL;
  a_36 = t;
  t = SSL_implode_string(not_null(a_36));
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm e_36 = NULL;
  e_36 = t;
  t = SSL_explode_string(not_null(e_36));
  return(t);
}
ATerm _2 (ATerm t, ATerm i_53 (ATerm), ATerm j_53 (ATerm))
{
  ATerm u_36 = NULL,v_36 = NULL,y_36 = NULL;
  u_36 = t;
  t_36 :
  if(match_cons(u_36, sym__2))
    {
      v_36 = ATgetArgument(u_36, 0);
      y_36 = ATgetArgument(u_36, 1);
      {
        ATerm c_37 = NULL,e_37 = NULL;
        ATerm d_37 = NULL;
        t = SSLgetAnnotations(not_null(u_36));
        {
          d_37 = t;
          if(((c_37 != NULL) && (c_37 != d_37)))
            _fail(d_37);
          else
            c_37 = d_37;
        }
        {
          t = not_null(v_36);
          {
            ATerm g_37 = NULL;
            t = i_53(t);
            {
              e_37 = t;
              {
                t = not_null(y_36);
                {
                  ATerm i_37 = NULL;
                  t = j_53(t);
                  {
                    g_37 = t;
                    {
                      ATerm j_37 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(e_37), not_null(g_37)), not_null(c_37));
                      {
                        j_37 = t;
                        if(((i_37 != NULL) && (i_37 != j_37)))
                          _fail(j_37);
                        else
                          i_37 = j_37;
                      }
                      t = not_null(i_37);
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
ATerm debug_1 (ATerm t, ATerm h_75 (ATerm))
{
  ATerm v_20;
  v_20 = t;
  {
    ATerm t_37 = NULL,v_37 = NULL;
    ATerm w_20;
    w_20 = t;
    {
      ATerm u_37 = NULL;
      t = h_75(t);
      {
        u_37 = t;
        if(((t_37 != NULL) && (t_37 != u_37)))
          _fail(u_37);
        else
          t_37 = u_37;
      }
    }
    t = w_20;
    {
      ATerm x_37 = NULL;
      x_37 = t;
      if(((v_37 != NULL) && (v_37 != x_37)))
        _fail(x_37);
      else
        v_37 = x_37;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_37)), not_null(t_37)));
        t = printnl_0(t);
      }
    }
  }
  t = v_20;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm d_38 = NULL;
  d_38 = t;
  t = SSL_is_string(not_null(d_38));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm x_20 = t;
  int y_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(y_20);
    }
  else
    {
      t = x_20;
      {
        ATerm z_20 = t;
        int e_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_4 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, a_4);
            LocalPopChoice(e_21);
          }
        else
          {
            t = z_20;
            {
              ATerm m_38 = NULL,n_38 = NULL,o_38 = NULL;
              m_38 = t;
              l_38 :
              if(match_cons(m_38, sym_Path_1))
                {
                  n_38 = ATgetArgument(m_38, 0);
                  t = not_null(n_38);
                }
              else
                {
                  if(match_cons(m_38, sym_Var_1))
                    {
                      n_38 = ATgetArgument(m_38, 0);
                      {
                        t = not_null(n_38);
                        {
                          ATerm f_21 = t;
                          int g_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(g_21);
                            }
                          else
                            {
                              t = f_21;
                              {
                                ATerm b_4 (ATerm t)
                                {
                                  t = term_h_21;
                                  return(t);
                                }
                                t = debug_1(t, b_4);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(m_38, sym_Prefix_2))
                        {
                          n_38 = ATgetArgument(m_38, 0);
                          o_38 = ATgetArgument(m_38, 1);
                          {
                            ATerm t_38 = NULL,v_38 = NULL;
                            ATerm s_21;
                            s_21 = t;
                            {
                              ATerm u_38 = NULL;
                              t = not_null(n_38);
                              {
                                t = eval_config_0(t);
                                {
                                  u_38 = t;
                                  if(((t_38 != NULL) && (t_38 != u_38)))
                                    _fail(u_38);
                                  else
                                    t_38 = u_38;
                                }
                              }
                            }
                            t = s_21;
                            {
                              ATerm w_38 = NULL;
                              t = not_null(o_38);
                              {
                                t = eval_config_0(t);
                                {
                                  w_38 = t;
                                  if(((v_38 != NULL) && (v_38 != w_38)))
                                    _fail(w_38);
                                  else
                                    v_38 = w_38;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(t_38), not_null(v_38));
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
  ATerm e_39 = NULL;
  e_39 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_t_21, not_null(e_39));
    {
      t = table_get_0(t);
      {
        ATerm c_4 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm u_21;
            u_21 = t;
            {
              ATerm g_39 = NULL;
              ATerm h_39 = NULL;
              h_39 = t;
              if(((g_39 != NULL) && (g_39 != h_39)))
                _fail(h_39);
              else
                g_39 = h_39;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_t_21, not_null(e_39), not_null(g_39));
                t = table_put_0(t);
              }
            }
            t = u_21;
          }
          return(t);
        }
        t = try_1(t, c_4);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm s_93 (ATerm))
{
  ATerm v_21 = t;
  int w_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_93(t);
      LocalPopChoice(w_21);
    }
  else
    {
      t = v_21;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm m_39 = NULL,n_39 = NULL,o_39 = NULL;
  m_39 = t;
  l_39 :
  if(match_cons(m_39, sym__2))
    {
      n_39 = ATgetArgument(m_39, 0);
      o_39 = ATgetArgument(m_39, 1);
      t = SSL_WriteToTextFile(not_null(n_39), not_null(o_39));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm x_39 = NULL,y_39 = NULL,z_39 = NULL;
  x_39 = t;
  w_39 :
  if(match_cons(x_39, sym__2))
    {
      y_39 = ATgetArgument(x_39, 0);
      z_39 = ATgetArgument(x_39, 1);
      t = SSL_WriteToBinaryFile(not_null(y_39), not_null(z_39));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm o_78 (ATerm))
{
  ATerm x_21 = t;
  int y_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(y_21);
    }
  else
    {
      t = x_21;
      {
        ATerm a_22 = t;
        int b_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_4 (ATerm t)
            {
              t = filter_1(t, o_78);
              return(t);
            }
            t = Cons_2(t, o_78, f_4);
            LocalPopChoice(b_22);
          }
        else
          {
            t = a_22;
            {
              ATerm f_40 = NULL,g_40 = NULL,h_40 = NULL;
              f_40 = t;
              e_40 :
              if(((ATgetType(f_40) == AT_LIST) && ((ATermList) f_40 != ATempty)))
                {
                  g_40 = ATgetFirst((ATermList) f_40);
                  h_40 = (ATerm) ATgetNext((ATermList) f_40);
                  {
                    t = not_null(h_40);
                    t = filter_1(t, o_78);
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
  ATerm l_40 = NULL;
  l_40 = t;
  t = SSL_string_to_int(not_null(l_40));
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm f_22 = t;
  int g_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_4 (ATerm t)
      {
        ATerm f_41 = NULL;
        f_41 = t;
        o_40 :
        if(!(match_string(f_41, "-i")))
          {
            if(!(match_string(f_41, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm h_4 (ATerm t)
      {
        ATerm i_41 = NULL;
        ATerm j_22;
        j_22 = t;
        {
          ATerm g_41 = NULL;
          ATerm h_41 = NULL;
          h_41 = t;
          if(((g_41 != NULL) && (g_41 != h_41)))
            _fail(h_41);
          else
            g_41 = h_41;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_y_14, not_null(g_41));
            t = set_config_0(t);
          }
        }
        t = j_22;
        {
          ATerm j_41 = NULL;
          j_41 = t;
          if(((i_41 != NULL) && (i_41 != j_41)))
            _fail(j_41);
          else
            i_41 = j_41;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(i_41));
        }
        return(t);
      }
      ATerm p_4 (ATerm t)
      {
        t = term_k_22;
        return(t);
      }
      t = ArgOption_3(t, g_4, h_4, p_4);
      LocalPopChoice(g_22);
    }
  else
    {
      t = f_22;
      {
        ATerm l_22 = t;
        int m_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_4 (ATerm t)
            {
              ATerm k_41 = NULL;
              k_41 = t;
              r_40 :
              if(!(match_string(k_41, "-o")))
                {
                  if(!(match_string(k_41, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm t_4 (ATerm t)
            {
              ATerm n_41 = NULL;
              ATerm n_22;
              n_22 = t;
              {
                ATerm l_41 = NULL;
                ATerm m_41 = NULL;
                m_41 = t;
                if(((l_41 != NULL) && (l_41 != m_41)))
                  _fail(m_41);
                else
                  l_41 = m_41;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_x_14, not_null(l_41));
                  t = set_config_0(t);
                }
              }
              t = n_22;
              {
                ATerm o_41 = NULL;
                o_41 = t;
                if(((n_41 != NULL) && (n_41 != o_41)))
                  _fail(o_41);
                else
                  n_41 = o_41;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(n_41));
              }
              return(t);
            }
            ATerm u_4 (ATerm t)
            {
              t = term_o_22;
              return(t);
            }
            t = ArgOption_3(t, s_4, t_4, u_4);
            LocalPopChoice(m_22);
          }
        else
          {
            t = l_22;
            {
              ATerm p_22 = t;
              int q_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_4 (ATerm t)
                  {
                    ATerm p_41 = NULL;
                    p_41 = t;
                    u_40 :
                    if(!(match_string(p_41, "-S")))
                      {
                        if(!(match_string(p_41, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm w_4 (ATerm t)
                  {
                    t = term_s_22;
                    t = set_config_0(t);
                    t = term_t_22;
                    return(t);
                  }
                  ATerm x_4 (ATerm t)
                  {
                    t = term_u_22;
                    return(t);
                  }
                  t = Option_3(t, v_4, w_4, x_4);
                  LocalPopChoice(q_22);
                }
              else
                {
                  t = p_22;
                  {
                    ATerm v_22 = t;
                    int w_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm y_4 (ATerm t)
                        {
                          ATerm q_41 = NULL;
                          q_41 = t;
                          v_40 :
                          if(!(match_string(q_41, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm e_5 (ATerm t)
                        {
                          ATerm t_41 = NULL;
                          ATerm x_22;
                          x_22 = t;
                          {
                            ATerm r_41 = NULL;
                            ATerm s_41 = NULL;
                            t = string_to_int_0(t);
                            {
                              s_41 = t;
                              if(((r_41 != NULL) && (r_41 != s_41)))
                                _fail(s_41);
                              else
                                r_41 = s_41;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_o_10, not_null(r_41));
                              t = set_config_0(t);
                            }
                          }
                          t = x_22;
                          {
                            ATerm u_41 = NULL;
                            u_41 = t;
                            if(((t_41 != NULL) && (t_41 != u_41)))
                              _fail(u_41);
                            else
                              t_41 = u_41;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(t_41));
                          }
                          return(t);
                        }
                        ATerm h_5 (ATerm t)
                        {
                          t = term_y_22;
                          return(t);
                        }
                        t = ArgOption_3(t, y_4, e_5, h_5);
                        LocalPopChoice(w_22);
                      }
                    else
                      {
                        t = v_22;
                        {
                          ATerm a_23 = t;
                          int b_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm i_5 (ATerm t)
                              {
                                ATerm v_41 = NULL;
                                v_41 = t;
                                a_41 :
                                if(!(match_string(v_41, "-k")))
                                  {
                                    if(!(match_string(v_41, "--keep")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm j_5 (ATerm t)
                              {
                                ATerm c_23;
                                c_23 = t;
                                {
                                  ATerm w_41 = NULL;
                                  ATerm x_41 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    x_41 = t;
                                    if(((w_41 != NULL) && (w_41 != x_41)))
                                      _fail(x_41);
                                    else
                                      w_41 = x_41;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_c_10, not_null(w_41));
                                    t = set_config_0(t);
                                  }
                                }
                                t = c_23;
                                return(t);
                              }
                              ATerm k_5 (ATerm t)
                              {
                                t = term_d_23;
                                return(t);
                              }
                              t = ArgOption_3(t, i_5, j_5, k_5);
                              LocalPopChoice(b_23);
                            }
                          else
                            {
                              t = a_23;
                              {
                                ATerm e_23 = t;
                                int f_23 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm l_5 (ATerm t)
                                    {
                                      ATerm y_41 = NULL;
                                      y_41 = t;
                                      c_41 :
                                      if(!(match_string(y_41, "-v")))
                                        {
                                          if(!(match_string(y_41, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm m_5 (ATerm t)
                                    {
                                      t = term_h_23;
                                      t = set_config_0(t);
                                      t = term_i_23;
                                      return(t);
                                    }
                                    ATerm n_5 (ATerm t)
                                    {
                                      t = term_j_23;
                                      return(t);
                                    }
                                    t = Option_3(t, l_5, m_5, n_5);
                                    LocalPopChoice(f_23);
                                  }
                                else
                                  {
                                    t = e_23;
                                    {
                                      ATerm k_23 = t;
                                      int l_23 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm t_5 (ATerm t)
                                          {
                                            ATerm z_41 = NULL;
                                            z_41 = t;
                                            d_41 :
                                            if(!(match_string(z_41, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm y_5 (ATerm t)
                                          {
                                            t = term_n_23;
                                            t = set_config_0(t);
                                            t = term_o_23;
                                            return(t);
                                          }
                                          ATerm g_6 (ATerm t)
                                          {
                                            t = term_q_23;
                                            return(t);
                                          }
                                          t = Option_3(t, t_5, y_5, g_6);
                                          LocalPopChoice(l_23);
                                        }
                                      else
                                        {
                                          t = k_23;
                                          {
                                            ATerm h_6 (ATerm t)
                                            {
                                              ATerm a_42 = NULL;
                                              a_42 = t;
                                              e_41 :
                                              if(!(match_string(a_42, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm i_6 (ATerm t)
                                            {
                                              t = term_t_23;
                                              t = set_config_0(t);
                                              t = term_x_23;
                                              return(t);
                                            }
                                            ATerm j_6 (ATerm t)
                                            {
                                              t = term_y_23;
                                              return(t);
                                            }
                                            t = Option_3(t, h_6, i_6, j_6);
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm ArgOption_3 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm n_42 = NULL,o_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL;
  n_42 = t;
  l_42 :
  if(match_string(n_42, "register-usage-info"))
    {
      t = register_usage_1(t, j_0);
    }
  else
    {
      if(((ATgetType(n_42) == AT_LIST) && ((ATermList) n_42 != ATempty)))
        {
          o_42 = ATgetFirst((ATermList) n_42);
          p_42 = (ATerm) ATgetNext((ATermList) n_42);
          m_42 :
          if(((ATgetType(p_42) == AT_LIST) && ((ATermList) p_42 != ATempty)))
            {
              q_42 = ATgetFirst((ATermList) p_42);
              r_42 = (ATerm) ATgetNext((ATermList) p_42);
              {
                ATerm v_42 = NULL;
                ATerm z_23;
                z_23 = t;
                {
                  t = not_null(o_42);
                  t = h_0(t);
                }
                t = z_23;
                {
                  ATerm w_42 = NULL;
                  t = not_null(q_42);
                  {
                    t = i_0(t);
                    {
                      w_42 = t;
                      if(((v_42 != NULL) && (v_42 != w_42)))
                        _fail(w_42);
                      else
                        v_42 = w_42;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(r_42)), not_null(v_42));
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
  ATerm a_24 = t;
  int b_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(b_24);
    }
  else
    {
      t = a_24;
      {
        ATerm c_43 = NULL,d_43 = NULL,e_43 = NULL;
        c_43 = t;
        b_43 :
        if(((ATgetType(c_43) == AT_LIST) && ((ATermList) c_43 != ATempty)))
          {
            d_43 = ATgetFirst((ATermList) c_43);
            e_43 = (ATerm) ATgetNext((ATermList) c_43);
            {
              t = not_null(d_43);
              {
                ATerm k_6 (ATerm t)
                {
                  t = not_null(e_43);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, k_6);
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
  ATerm t_43 = NULL;
  ATerm v_43 = NULL;
  t_43 = t;
  {
    ATerm w_43 = NULL;
    ATerm y_43 = NULL,z_43 = NULL,a_44 = NULL;
    t = not_null(t_43);
    {
      w_43 = t;
      {
        t = SSL_explode_term(not_null(w_43));
        {
          y_43 = t;
          r_43 :
          if(match_cons(y_43, sym__2))
            {
              z_43 = ATgetArgument(y_43, 0);
              a_44 = ATgetArgument(y_43, 1);
              s_43 :
              if(match_string(z_43, ""))
                {
                  if(((v_43 != NULL) && (v_43 != a_44)))
                    _fail(a_44);
                  else
                    v_43 = a_44;
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
      t = not_null(v_43);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm n_85 (ATerm))
{
  ATerm e_44 (ATerm t)
  {
    ATerm c_24 = t;
    int d_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, e_44);
        LocalPopChoice(d_24);
      }
    else
      {
        t = c_24;
        {
          t = Nil_0(t);
          t = n_85(t);
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
          ATerm p_6 (ATerm t)
          {
            t = not_null(j_44);
            return(t);
          }
          t = at_end_1(t, p_6);
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
  ATerm e_24 = t;
  int f_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(f_24);
    }
  else
    {
      t = e_24;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm extend_config_0 (ATerm t)
{
  ATerm t_44 = NULL,u_44 = NULL,v_44 = NULL;
  t_44 = t;
  s_44 :
  if(match_cons(t_44, sym__2))
    {
      u_44 = ATgetArgument(t_44, 0);
      v_44 = ATgetArgument(t_44, 1);
      {
        ATerm y_44 = NULL;
        ATerm z_44 = NULL,b_45 = NULL;
        ATerm a_45 = NULL;
        t = not_null(u_44);
        {
          ATerm g_24 = t;
          int j_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(j_24);
            }
          else
            {
              t = g_24;
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
            t = conc_0(t);
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
          t = (ATerm) ATmakeAppl(sym__3, term_t_21, not_null(u_44), not_null(y_44));
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
  ATerm k_24 = t;
  int l_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_6 (ATerm t)
      {
        ATerm k_45 = NULL;
        k_45 = t;
        f_45 :
        if(!(match_string(k_45, "-I")))
          {
            if(!(match_string(k_45, "--Include")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm r_6 (ATerm t)
      {
        ATerm l_45 = NULL;
        ATerm m_45 = NULL;
        m_45 = t;
        if(((l_45 != NULL) && (l_45 != m_45)))
          _fail(m_45);
        else
          l_45 = m_45;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_y_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_45)), term_y_15));
          t = extend_config_0(t);
        }
        t = term_h_14;
        return(t);
      }
      ATerm t_6 (ATerm t)
      {
        t = term_m_24;
        return(t);
      }
      t = ArgOption_3(t, q_6, r_6, t_6);
      LocalPopChoice(l_24);
    }
  else
    {
      t = k_24;
      {
        ATerm n_24 = t;
        int o_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_6 (ATerm t)
            {
              ATerm n_45 = NULL;
              n_45 = t;
              h_45 :
              if(!(match_string(n_45, "--nodep")))
                {
                  if(!(match_string(n_45, "-nodep")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm v_6 (ATerm t)
            {
              t = term_t_24;
              t = set_config_0(t);
              t = term_h_14;
              return(t);
            }
            ATerm a_7 (ATerm t)
            {
              t = term_u_24;
              return(t);
            }
            t = Option_3(t, u_6, v_6, a_7);
            LocalPopChoice(o_24);
          }
        else
          {
            t = n_24;
            {
              ATerm b_7 (ATerm t)
              {
                ATerm o_45 = NULL;
                o_45 = t;
                i_45 :
                if(!(match_string(o_45, "--dep")))
                  {
                    if(!(match_string(o_45, "-d")))
                      {
                        if(!(match_string(o_45, "-dep")))
                          {
                            _fail(t);
                          }
                      }
                  }
                return(t);
              }
              ATerm c_7 (ATerm t)
              {
                ATerm p_45 = NULL;
                ATerm q_45 = NULL;
                q_45 = t;
                if(((p_45 != NULL) && (p_45 != q_45)))
                  _fail(q_45);
                else
                  p_45 = q_45;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_v_24, not_null(p_45));
                  t = set_config_0(t);
                }
                t = term_h_14;
                return(t);
              }
              ATerm d_7 (ATerm t)
              {
                t = term_z_24;
                return(t);
              }
              t = ArgOption_3(t, b_7, c_7, d_7);
            }
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm v_45 = NULL;
  ATerm d_25;
  d_25 = t;
  {
    ATerm e_7 (ATerm t)
    {
      ATerm w_45 = NULL,e_46 = NULL;
      w_45 = t;
      u_45 :
      if(match_cons(w_45, sym_Program_1))
        {
          e_46 = ATgetArgument(w_45, 0);
          if(((v_45 != NULL) && (v_45 != e_46)))
            _fail(e_46);
          else
            v_45 = e_46;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, e_7);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_j_16, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_25), not_null(v_45)), term_e_25));
      {
        t = printnl_0(t);
        {
          t = term_h_10;
          t = exit_0(t);
        }
      }
    }
  }
  t = d_25;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_j_16, (ATerm) ATinsert(ATempty, term_g_25));
  {
    t = printnl_0(t);
    {
      t = term_h_10;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm i_46 = NULL;
  i_46 = t;
  t = SSL_TicksToSeconds(not_null(i_46));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm n_46 = NULL,o_46 = NULL,p_46 = NULL;
  n_46 = t;
  m_46 :
  if(match_cons(n_46, sym__2))
    {
      o_46 = ATgetArgument(n_46, 0);
      p_46 = ATgetArgument(n_46, 1);
      {
        ATerm h_25 = t;
        int k_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(o_46), not_null(p_46));
            LocalPopChoice(k_25);
          }
        else
          {
            t = h_25;
            t = SSL_addr(not_null(o_46), not_null(p_46));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm i_79 (ATerm), ATerm j_79 (ATerm))
{
  ATerm l_25 = t;
  int o_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = i_79(t);
      LocalPopChoice(o_25);
    }
  else
    {
      t = l_25;
      {
        ATerm w_46 = NULL,x_46 = NULL,y_46 = NULL;
        w_46 = t;
        v_46 :
        if(((ATgetType(w_46) == AT_LIST) && ((ATermList) w_46 != ATempty)))
          {
            x_46 = ATgetFirst((ATermList) w_46);
            y_46 = (ATerm) ATgetNext((ATermList) w_46);
            {
              ATerm b_47 = NULL;
              ATerm c_47 = NULL;
              t = not_null(y_46);
              {
                t = foldr_2(t, i_79, j_79);
                {
                  c_47 = t;
                  if(((b_47 != NULL) && (b_47 != c_47)))
                    _fail(c_47);
                  else
                    b_47 = c_47;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(x_46), not_null(b_47));
                t = j_79(t);
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
ATerm crush_2 (ATerm t, ATerm a_81 (ATerm), ATerm b_81 (ATerm))
{
  ATerm j_47 = NULL;
  ATerm l_47 = NULL;
  j_47 = t;
  {
    ATerm q_47 = NULL;
    ATerm s_47 = NULL,t_47 = NULL,u_47 = NULL;
    t = not_null(j_47);
    {
      q_47 = t;
      {
        t = SSL_explode_term(not_null(q_47));
        {
          s_47 = t;
          i_47 :
          if(match_cons(s_47, sym__2))
            {
              t_47 = ATgetArgument(s_47, 0);
              u_47 = ATgetArgument(s_47, 1);
              if(((l_47 != NULL) && (l_47 != u_47)))
                _fail(u_47);
              else
                l_47 = u_47;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(l_47);
      t = foldr_2(t, a_81, b_81);
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
    ATerm j_7 (ATerm t)
    {
      t = term_r_22;
      return(t);
    }
    t = crush_2(t, j_7, add_0);
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
        ATerm s_25;
        s_25 = t;
        {
          ATerm t_25 = t;
          int u_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(j_48), not_null(k_48));
              LocalPopChoice(u_25);
            }
          else
            {
              t = t_25;
              t = SSL_gtr(not_null(j_48), not_null(k_48));
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
ATerm geq_0 (ATerm t)
{
  ATerm q_48 = NULL;
  ATerm v_25 = t;
  int w_25 = stack_ptr;
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
      LocalPopChoice(w_25);
    }
  else
    {
      t = v_25;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm y_72 (ATerm))
{
  ATerm k_7 (ATerm t)
  {
    ATerm x_25;
    x_25 = t;
    {
      ATerm w_48 = NULL;
      ATerm x_48 = NULL;
      t = term_o_10;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_48), term_h_10);
        t = geq_0(t);
      }
    }
    t = x_25;
    t = y_72(t);
    return(t);
  }
  t = try_1(t, k_7);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm l_7 (ATerm t)
  {
    ATerm b_49 = NULL,d_49 = NULL;
    ATerm y_25;
    y_25 = t;
    {
      ATerm c_49 = NULL;
      t = run_time_0(t);
      {
        c_49 = t;
        if(((b_49 != NULL) && (b_49 != c_49)))
          _fail(c_49);
        else
          b_49 = c_49;
      }
    }
    t = y_25;
    {
      ATerm e_49 = NULL;
      t = term_z_25;
      {
        t = get_config_0(t);
        {
          e_49 = t;
          if(((d_49 != NULL) && (d_49 != e_49)))
            _fail(e_49);
          else
            d_49 = e_49;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_26), not_null(b_49)), term_a_26), not_null(d_49)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, l_7);
  {
    t = term_r_22;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm l_49 = NULL;
  l_49 = t;
  k_49 :
  if(match_cons(l_49, sym_Version_0))
    {
      ATerm n_49 = NULL,p_49 = NULL;
      ATerm c_26;
      c_26 = t;
      {
        ATerm o_49 = NULL;
        t = SSLgetAnnotations(not_null(l_49));
        {
          o_49 = t;
          if(((n_49 != NULL) && (n_49 != o_49)))
            _fail(o_49);
          else
            n_49 = o_49;
        }
      }
      t = c_26;
      {
        ATerm q_49 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(n_49));
        {
          q_49 = t;
          if(((p_49 != NULL) && (p_49 != q_49)))
            _fail(q_49);
          else
            p_49 = q_49;
        }
        t = not_null(p_49);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm p_74 (ATerm))
{
  ATerm m_7 (ATerm t)
  {
    ATerm d_26 = t;
    int e_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(e_26);
      }
    else
      {
        t = d_26;
        {
          ATerm f_26 = t;
          int g_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(g_26);
            }
          else
            {
              t = f_26;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, m_7);
  t = p_74(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm v_49 = NULL;
  v_49 = t;
  t = SSL_table_create(not_null(v_49));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm z_49 = NULL;
  z_49 = t;
  {
    ATerm h_26;
    h_26 = t;
    {
      t = term_i_26;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_i_26, term_j_26, not_null(z_49));
          t = table_put_0(t);
        }
      }
    }
    t = h_26;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm d_50 = NULL;
  d_50 = t;
  t = SSL_table_destroy(not_null(d_50));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm h_50 = NULL;
  h_50 = t;
  t = SSL_exit(not_null(h_50));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm l_50 = NULL,m_50 = NULL,n_50 = NULL;
  l_50 = t;
  k_50 :
  if(((ATermList) l_50 == ATempty))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(l_50) == AT_LIST) && ((ATermList) l_50 != ATempty)))
        {
          m_50 = ATgetFirst((ATermList) l_50);
          n_50 = (ATerm) ATgetNext((ATermList) l_50);
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
  ATerm k_26;
  k_26 = t;
  {
    ATerm q_50 = NULL;
    ATerm t_50 = NULL;
    ATerm l_26 = t;
    int m_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(m_26);
      }
    else
      {
        t = l_26;
        {
          ATerm r_50 = NULL;
          ATerm s_50 = NULL;
          s_50 = t;
          if(((r_50 != NULL) && (r_50 != s_50)))
            _fail(s_50);
          else
            r_50 = s_50;
          t = (ATerm) ATinsert(ATempty, not_null(r_50));
        }
      }
    {
      t_50 = t;
      if(((q_50 != NULL) && (q_50 != t_50)))
        _fail(t_50);
      else
        q_50 = t_50;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_26, not_null(q_50));
      t = printnl_0(t);
    }
  }
  t = k_26;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm e_71 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm y_84 (ATerm))
{
  ATerm x_50 (ATerm t)
  {
    ATerm w_26 = t;
    int x_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(x_26);
      }
    else
      {
        t = w_26;
        t = Cons_2(t, y_84, x_50);
      }
    return(t);
  }
  t = x_50(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm f_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm h_51 = NULL,i_51 = NULL,j_51 = NULL;
  j_51 = t;
  d_51 :
  if(((ATgetType(j_51) == AT_LIST) && ((ATermList) j_51 != ATempty)))
    {
      h_51 = ATgetFirst((ATermList) j_51);
      i_51 = (ATerm) ATgetNext((ATermList) j_51);
      {
        ATerm t_51 = NULL;
        t = not_null(i_51);
        {
          ATerm c_27;
          c_27 = t;
          {
            ATerm u_51 = NULL,w_51 = NULL,y_51 = NULL;
            ATerm d_27;
            d_27 = t;
            {
              ATerm v_51 = NULL;
              t = g_0(t);
              {
                v_51 = t;
                if(((u_51 != NULL) && (u_51 != v_51)))
                  _fail(v_51);
                else
                  u_51 = v_51;
              }
            }
            t = d_27;
            {
              ATerm x_51 = NULL;
              t = not_null(h_51);
              {
                t = f_0(t);
                {
                  x_51 = t;
                  if(((w_51 != NULL) && (w_51 != x_51)))
                    _fail(x_51);
                  else
                    w_51 = x_51;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(u_51)), not_null(w_51));
                {
                  y_51 = t;
                  if(((t_51 != NULL) && (t_51 != y_51)))
                    _fail(y_51);
                  else
                    t_51 = y_51;
                }
              }
            }
          }
          t = c_27;
          {
            ATerm o_7 (ATerm t)
            {
              t = not_null(t_51);
              return(t);
            }
            t = reverse_acc_2(t, f_0, o_7);
          }
        }
      }
    }
  else
    {
      if(((ATermList) j_51 == ATempty))
        {
          {
            t = term_h_14;
            t = g_0(t);
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
  ATerm r_7 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, r_7);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm d_71 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm e_60 (ATerm))
{
  ATerm j_52 = NULL,k_52 = NULL;
  j_52 = t;
  i_52 :
  if(match_cons(j_52, sym_Program_1))
    {
      k_52 = ATgetArgument(j_52, 0);
      {
        ATerm n_52 = NULL,p_52 = NULL;
        ATerm o_52 = NULL;
        t = SSLgetAnnotations(not_null(j_52));
        {
          o_52 = t;
          if(((n_52 != NULL) && (n_52 != o_52)))
            _fail(o_52);
          else
            n_52 = o_52;
        }
        {
          t = not_null(k_52);
          {
            ATerm r_52 = NULL;
            t = e_60(t);
            {
              p_52 = t;
              {
                ATerm s_52 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(p_52)), not_null(n_52));
                {
                  s_52 = t;
                  if(((r_52 != NULL) && (r_52 != s_52)))
                    _fail(s_52);
                  else
                    r_52 = s_52;
                }
                t = not_null(r_52);
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
  ATerm p_53 = NULL;
  ATerm e_27 = t;
  int f_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_53 = NULL;
      t = term_z_25;
      {
        t = get_config_0(t);
        {
          q_53 = t;
          if(((p_53 != NULL) && (p_53 != q_53)))
            _fail(q_53);
          else
            p_53 = q_53;
        }
      }
      LocalPopChoice(f_27);
    }
  else
    {
      t = e_27;
      {
        ATerm s_7 (ATerm t)
        {
          ATerm t_7 (ATerm t)
          {
            ATerm r_53 = NULL;
            r_53 = t;
            if(((p_53 != NULL) && (p_53 != r_53)))
              _fail(r_53);
            else
              p_53 = r_53;
            return(t);
          }
          t = Program_1(t, t_7);
          return(t);
        }
        t = option_defined_1(t, s_7);
      }
    }
  {
    ATerm y_7 (ATerm t)
    {
      ATerm z_7 (ATerm t)
      {
        t = not_null(p_53);
        return(t);
      }
      t = short_description_1(t, z_7);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, y_7);
    {
      t = term_k_27;
      {
        t = echo_0(t);
        {
          t = term_o_27;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm a_8 (ATerm t)
                {
                  ATerm s_53 = NULL;
                  ATerm t_53 = NULL;
                  t_53 = t;
                  if(((s_53 != NULL) && (s_53 != t_53)))
                    _fail(t_53);
                  else
                    s_53 = t_53;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_53)), term_p_27);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, a_8);
                {
                  ATerm b_8 (ATerm t)
                  {
                    ATerm u_53 = NULL;
                    ATerm v_53 = NULL;
                    ATerm d_8 (ATerm t)
                    {
                      t = not_null(p_53);
                      return(t);
                    }
                    t = long_description_1(t, d_8);
                    {
                      v_53 = t;
                      if(((u_53 != NULL) && (u_53 != v_53)))
                        _fail(v_53);
                      else
                        u_53 = v_53;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(u_53)), term_q_27);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, b_8);
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
ATerm printnl_0 (ATerm t)
{
  ATerm c_54 = NULL,d_54 = NULL,e_54 = NULL;
  c_54 = t;
  b_54 :
  if(match_cons(c_54, sym__2))
    {
      d_54 = ATgetArgument(c_54, 0);
      e_54 = ATgetArgument(c_54, 1);
      {
        ATerm v_27;
        v_27 = t;
        t = SSL_printnl(not_null(d_54), not_null(e_54));
        t = v_27;
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
  ATerm w_27;
  w_27 = t;
  {
    ATerm j_54 = NULL;
    ATerm k_54 = NULL;
    k_54 = t;
    if(((j_54 != NULL) && (j_54 != k_54)))
      _fail(k_54);
    else
      j_54 = k_54;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_j_16, (ATerm) ATinsert(ATempty, not_null(j_54)));
      t = printnl_0(t);
    }
  }
  t = w_27;
  return(t);
}
ATerm say_1 (ATerm t, ATerm i_75 (ATerm))
{
  ATerm x_27;
  x_27 = t;
  {
    t = i_75(t);
    t = debug_0(t);
  }
  t = x_27;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm f_60 (ATerm))
{
  ATerm r_54 = NULL,s_54 = NULL;
  r_54 = t;
  q_54 :
  if(match_cons(r_54, sym_Undefined_1))
    {
      s_54 = ATgetArgument(r_54, 0);
      {
        ATerm v_54 = NULL,x_54 = NULL;
        ATerm w_54 = NULL;
        t = SSLgetAnnotations(not_null(r_54));
        {
          w_54 = t;
          if(((v_54 != NULL) && (v_54 != w_54)))
            _fail(w_54);
          else
            v_54 = w_54;
        }
        {
          t = not_null(s_54);
          {
            ATerm z_54 = NULL;
            t = f_60(t);
            {
              x_54 = t;
              {
                ATerm a_55 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(x_54)), not_null(v_54));
                {
                  a_55 = t;
                  if(((z_54 != NULL) && (z_54 != a_55)))
                    _fail(a_55);
                  else
                    z_54 = a_55;
                }
                t = not_null(z_54);
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
ATerm fetch_1 (ATerm t, ATerm h_85 (ATerm))
{
  ATerm f_55 (ATerm t)
  {
    ATerm z_27 = t;
    int b_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, h_85, _id);
        LocalPopChoice(b_28);
      }
    else
      {
        t = z_27;
        t = Cons_2(t, _id, f_55);
      }
    return(t);
  }
  t = f_55(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm i_72 (ATerm))
{
  t = fetch_1(t, i_72);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm k_55 = NULL;
  k_55 = t;
  j_55 :
  if(match_cons(k_55, sym_Help_0))
    {
      ATerm m_55 = NULL,o_55 = NULL;
      ATerm c_28;
      c_28 = t;
      {
        ATerm n_55 = NULL;
        t = SSLgetAnnotations(not_null(k_55));
        {
          n_55 = t;
          if(((m_55 != NULL) && (m_55 != n_55)))
            _fail(n_55);
          else
            m_55 = n_55;
        }
      }
      t = c_28;
      {
        ATerm p_55 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(m_55));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm v_55 = NULL,w_55 = NULL,x_55 = NULL;
  v_55 = t;
  u_55 :
  if(match_cons(v_55, sym__2))
    {
      w_55 = ATgetArgument(v_55, 0);
      x_55 = ATgetArgument(v_55, 1);
      t = SSL_table_get(not_null(w_55), not_null(x_55));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm e_56 = NULL,f_56 = NULL,g_56 = NULL,h_56 = NULL;
  e_56 = t;
  d_56 :
  if(match_cons(e_56, sym__3))
    {
      f_56 = ATgetArgument(e_56, 0);
      g_56 = ATgetArgument(e_56, 1);
      h_56 = ATgetArgument(e_56, 2);
      {
        ATerm d_28;
        d_28 = t;
        {
          ATerm l_56 = NULL;
          ATerm m_56 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_56), not_null(g_56));
          {
            ATerm e_28 = t;
            int f_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(f_28);
              }
            else
              {
                t = e_28;
                t = (ATerm) ATempty;
              }
            {
              m_56 = t;
              if(((l_56 != NULL) && (l_56 != m_56)))
                _fail(m_56);
              else
                l_56 = m_56;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(f_56), not_null(g_56), (ATerm) ATinsert(CheckATermList(not_null(l_56)), not_null(h_56)));
            t = table_put_0(t);
          }
        }
        t = d_28;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm i_71 (ATerm))
{
  ATerm q_56 = NULL;
  ATerm r_56 = NULL;
  t = term_h_14;
  {
    t = i_71(t);
    {
      r_56 = t;
      if(((q_56 != NULL) && (q_56 != r_56)))
        _fail(r_56);
      else
        q_56 = r_56;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_l_27, term_n_27, not_null(q_56));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm x_56 = NULL,y_56 = NULL,z_56 = NULL;
  x_56 = t;
  w_56 :
  if(match_string(x_56, "register-usage-info"))
    {
      t = register_usage_1(t, e_0);
    }
  else
    {
      if(((ATgetType(x_56) == AT_LIST) && ((ATermList) x_56 != ATempty)))
        {
          y_56 = ATgetFirst((ATermList) x_56);
          z_56 = (ATerm) ATgetNext((ATermList) x_56);
          {
            ATerm c_57 = NULL;
            ATerm g_28;
            g_28 = t;
            {
              t = not_null(y_56);
              t = a_0(t);
            }
            t = g_28;
            {
              ATerm d_57 = NULL;
              t = term_h_14;
              {
                t = b_0(t);
                {
                  d_57 = t;
                  if(((c_57 != NULL) && (c_57 != d_57)))
                    _fail(d_57);
                  else
                    c_57 = d_57;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(z_56)), not_null(c_57));
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
  ATerm e_8 (ATerm t)
  {
    ATerm i_57 = NULL;
    i_57 = t;
    h_57 :
    if(!(match_string(i_57, "--help")))
      {
        if(!(match_string(i_57, "-h")))
          {
            if(!(match_string(i_57, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm f_8 (ATerm t)
  {
    t = term_i_28;
    {
      t = set_config_0(t);
      t = term_j_28;
    }
    return(t);
  }
  ATerm g_8 (ATerm t)
  {
    t = term_p_28;
    return(t);
  }
  t = Option_3(t, e_8, f_8, g_8);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm l_57 = NULL,m_57 = NULL,n_57 = NULL;
  l_57 = t;
  k_57 :
  if(((ATgetType(l_57) == AT_LIST) && ((ATermList) l_57 != ATempty)))
    {
      m_57 = ATgetFirst((ATermList) l_57);
      n_57 = (ATerm) ATgetNext((ATermList) l_57);
      t = (ATerm) ATinsert(CheckATermList(not_null(n_57)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(m_57)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm u_64 (ATerm), ATerm v_64 (ATerm))
{
  ATerm x_57 = NULL,y_57 = NULL,z_57 = NULL;
  x_57 = t;
  w_57 :
  if(((ATgetType(x_57) == AT_LIST) && ((ATermList) x_57 != ATempty)))
    {
      y_57 = ATgetFirst((ATermList) x_57);
      z_57 = (ATerm) ATgetNext((ATermList) x_57);
      {
        ATerm d_58 = NULL,f_58 = NULL;
        ATerm e_58 = NULL;
        t = SSLgetAnnotations(not_null(x_57));
        {
          e_58 = t;
          if(((d_58 != NULL) && (d_58 != e_58)))
            _fail(e_58);
          else
            d_58 = e_58;
        }
        {
          t = not_null(y_57);
          {
            ATerm h_58 = NULL;
            t = u_64(t);
            {
              f_58 = t;
              {
                t = not_null(z_57);
                {
                  ATerm j_58 = NULL;
                  t = v_64(t);
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
        ATerm q_28;
        q_28 = t;
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
        t = q_28;
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
ATerm set_config_0 (ATerm t)
{
  ATerm f_59 = NULL,g_59 = NULL,h_59 = NULL;
  f_59 = t;
  e_59 :
  if(match_cons(f_59, sym__2))
    {
      g_59 = ATgetArgument(f_59, 0);
      h_59 = ATgetArgument(f_59, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_t_21, not_null(g_59), not_null(h_59));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm g_71 (ATerm))
{
  ATerm r_28;
  r_28 = t;
  {
    ATerm h_8 (ATerm t)
    {
      t = term_s_28;
      t = g_71(t);
      return(t);
    }
    t = try_1(t, h_8);
  }
  t = r_28;
  {
    ATerm j_8 (ATerm t)
    {
      ATerm p_59 = NULL;
      ATerm t_28;
      t_28 = t;
      {
        ATerm n_59 = NULL;
        ATerm o_59 = NULL;
        o_59 = t;
        if(((n_59 != NULL) && (n_59 != o_59)))
          _fail(o_59);
        else
          n_59 = o_59;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_z_25, not_null(n_59));
          t = set_config_0(t);
        }
      }
      t = t_28;
      {
        ATerm q_59 = NULL;
        q_59 = t;
        if(((p_59 != NULL) && (p_59 != q_59)))
          _fail(q_59);
        else
          p_59 = q_59;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(p_59));
      }
      return(t);
    }
    ATerm l_8 (ATerm t)
    {
      ATerm u_28 = t;
      int v_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_28 = t;
          int b_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(b_29);
            }
          else
            {
              t = y_28;
              {
                t = g_71(t);
                t = Cons_2(t, _id, l_8);
              }
            }
          LocalPopChoice(v_28);
        }
      else
        {
          t = u_28;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, j_8, l_8);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm x_59 = NULL,y_59 = NULL,z_59 = NULL;
  ATerm c_29;
  c_29 = t;
  {
    ATerm a_60 = NULL,b_60 = NULL,c_60 = NULL,d_60 = NULL;
    a_60 = t;
    w_59 :
    if(match_cons(a_60, sym__3))
      {
        b_60 = ATgetArgument(a_60, 0);
        c_60 = ATgetArgument(a_60, 1);
        d_60 = ATgetArgument(a_60, 2);
        {
          if(((x_59 != NULL) && (x_59 != b_60)))
            _fail(b_60);
          else
            x_59 = b_60;
          {
            if(((y_59 != NULL) && (y_59 != c_60)))
              _fail(c_60);
            else
              y_59 = c_60;
            {
              if(((z_59 != NULL) && (z_59 != d_60)))
                _fail(d_60);
              else
                z_59 = d_60;
              t = SSL_table_put(not_null(x_59), not_null(y_59), not_null(z_59));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = c_29;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm f_71 (ATerm))
{
  ATerm i_60 = NULL;
  ATerm e_29;
  e_29 = t;
  {
    t = term_f_29;
    t = table_put_0(t);
  }
  t = e_29;
  {
    ATerm o_8 (ATerm t)
    {
      ATerm g_29 = t;
      int h_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_71(t);
          LocalPopChoice(h_29);
        }
      else
        {
          t = g_29;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, o_8);
    {
      ATerm p_8 (ATerm t)
      {
        ATerm i_29 = t;
        int j_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_29;
            k_29 = t;
            {
              ATerm l_29 = t;
              int m_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_h_28;
                  t = get_config_0(t);
                  LocalPopChoice(m_29);
                }
              else
                {
                  t = l_29;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = k_29;
            {
              t = system_usage_0(t);
              {
                t = term_r_22;
                t = exit_0(t);
              }
            }
            LocalPopChoice(j_29);
          }
        else
          {
            t = i_29;
            {
              ATerm q_8 (ATerm t)
              {
                ATerm r_8 (ATerm t)
                {
                  ATerm j_60 = NULL;
                  j_60 = t;
                  if(((i_60 != NULL) && (i_60 != j_60)))
                    _fail(j_60);
                  else
                    i_60 = j_60;
                  return(t);
                }
                t = Undefined_1(t, r_8);
                return(t);
              }
              t = option_defined_1(t, q_8);
              {
                ATerm u_8 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_60)), term_n_29);
                  return(t);
                }
                t = say_1(t, u_8);
                {
                  t = system_usage_0(t);
                  {
                    t = term_h_10;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, p_8);
      {
        ATerm o_29;
        o_29 = t;
        {
          t = term_l_27;
          t = table_destroy_0(t);
        }
        t = o_29;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm m_73 (ATerm), ATerm n_73 (ATerm), ATerm o_73 (ATerm), ATerm p_73 (ATerm))
{
  t = parse_options_1(t, m_73);
  {
    t = store_options_0(t);
    {
      t = o_73(t);
      {
        ATerm p_29 = t;
        int q_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, n_73);
            LocalPopChoice(q_29);
          }
        else
          {
            t = p_29;
            {
              ATerm d_30 = t;
              int e_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_73(t);
                  t = report_success_0(t);
                  LocalPopChoice(e_30);
                }
              else
                {
                  t = d_30;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm q_73 (ATerm), ATerm r_73 (ATerm))
{
  t = option_wrap_4(t, q_73, default_usage_0, _id, r_73);
  return(t);
}
ATerm pack_modules_2 (ATerm t, ATerm p_65 (ATerm, ATerm (ATerm)), ATerm q_65 (ATerm))
{
  ATerm s_60 = NULL,t_60 = NULL,u_60 = NULL,v_60 = NULL,w_60 = NULL,x_60 = NULL;
  ATerm v_8 (ATerm t)
  {
    ATerm f_30 = t;
    int g_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = pack_options_0(t);
        LocalPopChoice(g_30);
      }
    else
      {
        t = f_30;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm w_8 (ATerm t)
  {
    ATerm z_60 = NULL;
    ATerm a_61 = NULL;
    ATerm h_30 = t;
    int i_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_y_15;
        {
          t = get_config_0(t);
          {
            ATerm a_9 (ATerm t)
            {
              ATerm j_30 = t;
              if((PushChoice() == 0))
                {
                  ATerm y_60 = NULL;
                  y_60 = t;
                  l_60 :
                  if(!(match_string(y_60, "-I")))
                    {
                      _fail(t);
                    }
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = j_30;
                }
              return(t);
            }
            t = filter_1(t, a_9);
          }
        }
        LocalPopChoice(i_30);
      }
    else
      {
        t = h_30;
        t = (ATerm) ATempty;
      }
    {
      z_60 = t;
      {
        if(((t_60 != NULL) && (t_60 != z_60)))
          _fail(z_60);
        else
          t_60 = z_60;
        {
          ATerm b_61 = NULL;
          ATerm k_30 = t;
          int l_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_y_14;
              t = get_config_0(t);
              LocalPopChoice(l_30);
            }
          else
            {
              t = k_30;
              t = term_z_9;
            }
          {
            a_61 = t;
            {
              if(((s_60 != NULL) && (s_60 != a_61)))
                _fail(a_61);
              else
                s_60 = a_61;
              {
                ATerm c_61 = NULL,d_61 = NULL,e_61 = NULL;
                ATerm m_30 = t;
                int n_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_x_14;
                    t = get_config_0(t);
                    LocalPopChoice(n_30);
                  }
                else
                  {
                    t = m_30;
                    t = term_u_26;
                  }
                {
                  b_61 = t;
                  {
                    if(((v_60 != NULL) && (v_60 != b_61)))
                      _fail(b_61);
                    else
                      v_60 = b_61;
                    {
                      t = not_null(s_60);
                      {
                        ATerm i_9 (ATerm t)
                        {
                          t = not_null(t_60);
                          return(t);
                        }
                        t = p_65(t, i_9);
                        {
                          c_61 = t;
                          r_60 :
                          if(match_cons(c_61, sym__2))
                            {
                              d_61 = ATgetArgument(c_61, 0);
                              e_61 = ATgetArgument(c_61, 1);
                              {
                                if(((w_60 != NULL) && (w_60 != d_61)))
                                  _fail(d_61);
                                else
                                  w_60 = d_61;
                                {
                                  if(((u_60 != NULL) && (u_60 != e_61)))
                                    _fail(e_61);
                                  else
                                    u_60 = e_61;
                                  {
                                    ATerm o_30 = t;
                                    int x_30 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_m_23;
                                        {
                                          t = get_config_0(t);
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(v_60), not_null(u_60));
                                            t = WriteToBinaryFile_0(t);
                                          }
                                        }
                                        LocalPopChoice(x_30);
                                      }
                                    else
                                      {
                                        t = o_30;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(v_60), not_null(u_60));
                                          t = WriteToTextFile_0(t);
                                        }
                                      }
                                    {
                                      ATerm j_9 (ATerm t)
                                      {
                                        ATerm f_61 = NULL;
                                        ATerm y_30 = t;
                                        int z_30 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_v_24;
                                            t = get_config_0(t);
                                            LocalPopChoice(z_30);
                                          }
                                        else
                                          {
                                            t = y_30;
                                            {
                                              ATerm a_31 = t;
                                              if((PushChoice() == 0))
                                                {
                                                  t = term_p_24;
                                                  t = get_config_0(t);
                                                  PopChoice();
                                                  _fail(t);
                                                }
                                              else
                                                {
                                                  t = a_31;
                                                }
                                              t = q_65(t);
                                            }
                                          }
                                        {
                                          f_61 = t;
                                          {
                                            if(((x_60 != NULL) && (x_60 != f_61)))
                                              _fail(f_61);
                                            else
                                              x_60 = f_61;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(v_60), not_null(w_60));
                                              {
                                                ATerm k_9 (ATerm t)
                                                {
                                                  t = not_null(x_60);
                                                  return(t);
                                                }
                                                t = create_dep_file_1(t, k_9);
                                              }
                                            }
                                          }
                                        }
                                        return(t);
                                      }
                                      t = try_1(t, j_9);
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
  t = option_wrap_2(t, v_8, w_8);
  return(t);
}
ATerm pack_stratego_0 (ATerm t)
{
  t = pack_modules_2(t, pack_stratego_modules_1, basename_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = pack_stratego_0(t);
  return(t);
}
