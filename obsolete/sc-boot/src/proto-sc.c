#include <srts/stratego.h>
#include <ssl/stratego-lib.h>
#include "conf.h"
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
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Silent_0;
Symbol sym_Verbose_0;
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
Symbol sym_Infinite_0;
Symbol sym_Anno_2;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_CUT_0;
Symbol sym_Dir_1;
Symbol sym_ExecDir_1;
Symbol sym_InclDir_1;
Symbol sym_CInclDir_1;
Symbol sym_CLibDir_1;
Symbol sym_Input_1;
Symbol sym_Main_1;
Symbol sym_AST_0;
Symbol sym_Ignore_0;
Symbol sym_CC_0;
Symbol sym_NORM_0;
Symbol sym_FUSION_0;
Symbol sym_FRONTEND_0;
Symbol sym_CSYNTAX_0;
Symbol sym_TraceAll_0;
Symbol sym_Trace_1;
Symbol sym_Manual_0;
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Silent_0 = ATmakeSymbol("Silent", 0, ATfalse);
  ATprotectSymbol(sym_Silent_0);
  sym_Verbose_0 = ATmakeSymbol("Verbose", 0, ATfalse);
  ATprotectSymbol(sym_Verbose_0);
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
  sym_Dir_1 = ATmakeSymbol("Dir", 1, ATfalse);
  ATprotectSymbol(sym_Dir_1);
  sym_ExecDir_1 = ATmakeSymbol("ExecDir", 1, ATfalse);
  ATprotectSymbol(sym_ExecDir_1);
  sym_InclDir_1 = ATmakeSymbol("InclDir", 1, ATfalse);
  ATprotectSymbol(sym_InclDir_1);
  sym_CInclDir_1 = ATmakeSymbol("CInclDir", 1, ATfalse);
  ATprotectSymbol(sym_CInclDir_1);
  sym_CLibDir_1 = ATmakeSymbol("CLibDir", 1, ATfalse);
  ATprotectSymbol(sym_CLibDir_1);
  sym_Input_1 = ATmakeSymbol("Input", 1, ATfalse);
  ATprotectSymbol(sym_Input_1);
  sym_Main_1 = ATmakeSymbol("Main", 1, ATfalse);
  ATprotectSymbol(sym_Main_1);
  sym_AST_0 = ATmakeSymbol("AST", 0, ATfalse);
  ATprotectSymbol(sym_AST_0);
  sym_Ignore_0 = ATmakeSymbol("Ignore", 0, ATfalse);
  ATprotectSymbol(sym_Ignore_0);
  sym_CC_0 = ATmakeSymbol("CC", 0, ATfalse);
  ATprotectSymbol(sym_CC_0);
  sym_NORM_0 = ATmakeSymbol("NORM", 0, ATfalse);
  ATprotectSymbol(sym_NORM_0);
  sym_FUSION_0 = ATmakeSymbol("FUSION", 0, ATfalse);
  ATprotectSymbol(sym_FUSION_0);
  sym_FRONTEND_0 = ATmakeSymbol("FRONTEND", 0, ATfalse);
  ATprotectSymbol(sym_FRONTEND_0);
  sym_CSYNTAX_0 = ATmakeSymbol("CSYNTAX", 0, ATfalse);
  ATprotectSymbol(sym_CSYNTAX_0);
  sym_TraceAll_0 = ATmakeSymbol("TraceAll", 0, ATfalse);
  ATprotectSymbol(sym_TraceAll_0);
  sym_Trace_1 = ATmakeSymbol("Trace", 1, ATfalse);
  ATprotectSymbol(sym_Trace_1);
  sym_Manual_0 = ATmakeSymbol("Manual", 0, ATfalse);
  ATprotectSymbol(sym_Manual_0);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_y_36;
ATerm term_x_36;
ATerm term_w_36;
ATerm term_u_36;
ATerm term_q_36;
ATerm term_i_36;
ATerm term_g_36;
ATerm term_f_36;
ATerm term_e_36;
ATerm term_v_35;
ATerm term_u_35;
ATerm term_t_35;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_d_34;
ATerm term_o_33;
ATerm term_l_33;
ATerm term_j_33;
ATerm term_r_32;
ATerm term_b_32;
ATerm term_v_31;
ATerm term_p_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_x_29;
ATerm term_w_29;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_n_29;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_c_29;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_s_28;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_f_28;
ATerm term_e_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_x_27;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_k_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_c_27;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_h_26;
ATerm term_e_26;
ATerm term_z_25;
ATerm term_u_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_k_25;
ATerm term_b_25;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_e_24;
ATerm term_z_23;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_v_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_k_22;
ATerm term_e_22;
ATerm term_v_20;
ATerm term_s_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_f_20;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_p_19;
ATerm term_n_19;
ATerm term_l_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_g_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_l_17;
ATerm term_b_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_a_16;
ATerm term_u_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_q_13;
void init_constant_terms (void)
{
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("rm", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-f", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree1", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol(".s1", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol(".s2", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol(".s3", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol(".s4", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol(".s5", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol(".s6", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol(".s7", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol(".s8", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol(".ac", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol(".c.abox", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-S", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling C code", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("C.pp", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol(".s9", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize2", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize1", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol(".sdefs", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to ", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("frontend", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to ", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-dep", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--silent", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("The Stratego Compiler (version ", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i file            Main module to compile (required)\n", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f    Write output to f", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(sym_Ignore_0);
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d|--Include d   Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d\n", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-CC", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(sym__2, term_l_26, term_q_22);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(sym_CC_0);
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-CC                Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(sym__2, term_y_22, term_q_22);
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(sym_AST_0);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(sym__2, term_s_20, term_q_22);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym_FRONTEND_0);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--norm", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym__2, term_c_27, term_q_22);
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(sym_NORM_0);
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--norm             Do not remove intermediate results", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(sym__2, term_p_27, term_q_22);
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(sym_FUSION_0);
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(sym__2, term_x_27, term_q_22);
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(sym_TraceAll_0);
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all        Instrument all definitions to print tracing information", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-t f               Instrument definition of f to print tracing information\n", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(sym__2, term_z_23, term_q_22);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose          Verbose execution", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(sym__2, term_j_16, term_q_22);
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-S | --silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(sym__2, term_h_29, term_q_22);
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(sym__2, term_n_29, term_q_22);
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(sym_Manual_0);
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(sym__2, term_r_29, term_q_22);
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version       Display program's version", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("   \n", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("   The Stratego Compiler translates Stratego specifications to C code\n", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("   Typical usage:\n", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("     ", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i mod\n", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("   to compile module mod\n", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("   Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("   paradigm of rewriting strategies. For documentation see\n", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("                 http://www.stratego-language.org", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("   Copyright (C) 1998-2002 Eelco Visser <visser@acm.org>\n", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("   This program is free software; you can redistribute it and/or modify\n", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("   it under the terms of the GNU General Public License as published by\n", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("   the Free Software Foundation; either version 2, or (at your option)\n", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("   any later version.\n", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(sym__2, term_b_31, term_d_31);
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(sym__3, term_b_31, term_d_31, (ATerm) ATempty);
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("importing: ", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol("sc.config", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("/sc-plugins", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol(".plugin", 0, ATtrue));
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("manual", 0, ATtrue));
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(ATmakeSymbol("cat", 0, ATtrue));
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol("compile time: ", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end time: ", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization time: ", 0, ATtrue));
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end time: ", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("C compile time: ", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue));
}
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm r_68 (ATerm), ATerm s_68 (ATerm));
ATerm crush_2 (ATerm, ATerm f_70 (ATerm), ATerm g_70 (ATerm));
ATerm run_time_0 (ATerm);
ATerm rm_files_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm RZip2_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm genzip_4 (ATerm, ATerm m_72 (ATerm), ATerm n_72 (ATerm), ATerm o_72 (ATerm), ATerm p_72 (ATerm));
ATerm rzip_1 (ATerm, ATerm a_73 (ATerm));
ATerm remove_intermediates_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm f_81 (ATerm));
ATerm cc2_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm e_65 (ATerm));
ATerm if_2 (ATerm, ATerm g_81 (ATerm), ATerm h_81 (ATerm));
ATerm cc1_0 (ATerm);
ATerm print_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm self_children_sys_time_0 (ATerm);
ATerm add_0 (ATerm);
ATerm self_children_user_time_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm diff_times_0 (ATerm);
ATerm times_0 (ATerm);
ATerm profile_2 (ATerm, ATerm y_64 (ATerm), ATerm z_64 (ATerm));
ATerm pipe_2 (ATerm, ATerm v_61 (ATerm), ATerm w_61 (ATerm));
ATerm abox2text_0 (ATerm);
ATerm ac2abox_0 (ATerm);
ATerm s2c_0 (ATerm);
ATerm stratego_cf_0 (ATerm);
ATerm canonicalize_0 (ATerm);
ATerm optimize2_0 (ATerm);
ATerm compile_match_0 (ATerm);
ATerm inline_0 (ATerm);
ATerm fusion_0 (ATerm);
ATerm optimize1_0 (ATerm);
ATerm rename_defs_0 (ATerm);
ATerm stratego_nf_0 (ATerm);
ATerm extract_0 (ATerm);
ATerm extract_all_0 (ATerm);
ATerm output_frontend_0 (ATerm);
ATerm frontend_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm apply_to_file_1 (ATerm, ATerm m_62 (ATerm));
ATerm transform_file_2 (ATerm, ATerm k_62 (ATerm), ATerm l_62 (ATerm));
ATerm AddMain_1 (ATerm, ATerm w_81 (ATerm));
ATerm add_main_0 (ATerm);
ATerm output_ast_0 (ATerm);
ATerm pipe_3 (ATerm, ATerm x_61 (ATerm), ATerm y_61 (ATerm), ATerm z_61 (ATerm));
ATerm parse_0 (ATerm);
ATerm sc_announce_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm basename_1 (ATerm, ATerm m_66 (ATerm));
ATerm basename_0 (ATerm);
ATerm sc_version_0 (ATerm);
ATerm call_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm extend_config_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm table_remove_0 (ATerm);
ATerm toggle_config_0 (ATerm);
ATerm post_extend_config_0 (ATerm);
ATerm sc_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_0 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm f_0 (ATerm));
ATerm Program_1 (ATerm, ATerm l_57 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm m_57 (ATerm));
ATerm option_defined_1 (ATerm, ATerm s_63 (ATerm));
ATerm Help_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm y_62 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm w_62 (ATerm));
ATerm parse_options_1 (ATerm, ATerm v_62 (ATerm));
ATerm conc_0 (ATerm);
ATerm _2 (ATerm, ATerm v_46 (ATerm), ATerm w_46 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm at_suffix_1 (ATerm, ATerm r_74 (ATerm));
ATerm has_extension_1 (ATerm, ATerm p_66 (ATerm));
ATerm filter_1 (ATerm, ATerm x_67 (ATerm));
ATerm readdir_0 (ATerm);
ATerm find_plugins_2 (ATerm, ATerm q_58 (ATerm), ATerm r_58 (ATerm));
ATerm import_config_files_1 (ATerm, ATerm t_58 (ATerm));
ATerm file_exists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm n_74 (ATerm));
ATerm concat_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm h_74 (ATerm));
ATerm fetch_elem_1 (ATerm, ATerm j_74 (ATerm));
ATerm find_config_file_2 (ATerm, ATerm i_58 (ATerm), ATerm j_58 (ATerm));
ATerm table_put_0 (ATerm);
ATerm Nil_0 (ATerm);
ATerm map_1 (ATerm, ATerm z_73 (ATerm));
ATerm table_putlist_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm debug_1 (ATerm, ATerm d_65 (ATerm));
ATerm import_config_file_1 (ATerm, ATerm s_58 (ATerm));
ATerm implode_string_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm get_path_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm c_58 (ATerm), ATerm d_58 (ATerm));
ATerm proto_sc_0 (ATerm);
ATerm main_0 (ATerm);
ATerm exit_0 (ATerm t)
{
  ATerm v_0 = NULL;
  v_0 = t;
  t = SSL_exit(not_null(v_0));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm u_1 = NULL,v_1 = NULL,w_1 = NULL;
  u_1 = t;
  j_1 :
  if(match_cons(u_1, sym__2))
    {
      v_1 = ATgetArgument(u_1, 0);
      w_1 = ATgetArgument(u_1, 1);
      {
        ATerm l_13;
        l_13 = t;
        t = SSL_printnl(not_null(v_1), not_null(w_1));
        t = l_13;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm r_68 (ATerm), ATerm s_68 (ATerm))
{
  ATerm o_13 = t;
  int p_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = r_68(t);
      LocalPopChoice(p_13);
    }
  else
    {
      t = o_13;
      {
        ATerm d_2 = NULL,e_2 = NULL,f_2 = NULL;
        d_2 = t;
        c_2 :
        if(((ATgetType(d_2) == AT_LIST) && ((ATermList) d_2 != ATempty)))
          {
            e_2 = ATgetFirst((ATermList) d_2);
            f_2 = (ATerm) ATgetNext((ATermList) d_2);
            {
              ATerm i_2 = NULL;
              ATerm j_2 = NULL;
              t = not_null(f_2);
              {
                t = foldr_2(t, r_68, s_68);
                {
                  j_2 = t;
                  if(((i_2 != NULL) && (i_2 != j_2)))
                    _fail(j_2);
                  else
                    i_2 = j_2;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(e_2), not_null(i_2));
                t = s_68(t);
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
ATerm crush_2 (ATerm t, ATerm f_70 (ATerm), ATerm g_70 (ATerm))
{
  ATerm q_2 = NULL;
  ATerm s_2 = NULL;
  q_2 = t;
  {
    ATerm t_2 = NULL;
    ATerm v_2 = NULL,w_2 = NULL,x_2 = NULL;
    t = not_null(q_2);
    {
      t_2 = t;
      {
        t = SSL_explode_term(not_null(t_2));
        {
          v_2 = t;
          p_2 :
          if(match_cons(v_2, sym__2))
            {
              w_2 = ATgetArgument(v_2, 0);
              x_2 = ATgetArgument(v_2, 1);
              if(((s_2 != NULL) && (s_2 != x_2)))
                _fail(x_2);
              else
                s_2 = x_2;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(s_2);
      t = foldr_2(t, f_70, g_70);
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
      t = term_q_13;
      return(t);
    }
    t = crush_2(t, c_0, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm rm_files_0 (ATerm t)
{
  ATerm c_3 = NULL;
  c_3 = t;
  {
    ATerm t_13;
    t_13 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_13, (ATerm) ATinsert(CheckATermList(not_null(c_3)), term_v_13));
      t = call_0(t);
    }
    t = t_13;
  }
  return(t);
}
ATerm Zip3_0 (ATerm t)
{
  ATerm h_3 = NULL,i_3 = NULL,j_3 = NULL;
  h_3 = t;
  g_3 :
  if(match_cons(h_3, sym__2))
    {
      i_3 = ATgetArgument(h_3, 0);
      j_3 = ATgetArgument(h_3, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(j_3)), not_null(i_3));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RZip2_0 (ATerm t)
{
  ATerm q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL;
  q_3 = t;
  o_3 :
  if(match_cons(q_3, sym__2))
    {
      r_3 = ATgetArgument(q_3, 0);
      s_3 = ATgetArgument(q_3, 1);
      p_3 :
      if(((ATgetType(s_3) == AT_LIST) && ((ATermList) s_3 != ATempty)))
        {
          t_3 = ATgetFirst((ATermList) s_3);
          u_3 = (ATerm) ATgetNext((ATermList) s_3);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(r_3), not_null(t_3)), (ATerm) ATmakeAppl(sym__2, not_null(r_3), not_null(u_3)));
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
ATerm Zip1b_p__0 (ATerm t)
{
  ATerm c_4 = NULL,d_4 = NULL,e_4 = NULL;
  c_4 = t;
  a_4 :
  if(match_cons(c_4, sym__2))
    {
      d_4 = ATgetArgument(c_4, 0);
      e_4 = ATgetArgument(c_4, 1);
      b_4 :
      if(((ATermList) e_4 == ATempty))
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
  return(t);
}
ATerm genzip_4 (ATerm t, ATerm m_72 (ATerm), ATerm n_72 (ATerm), ATerm o_72 (ATerm), ATerm p_72 (ATerm))
{
  ATerm g_4 (ATerm t)
  {
    ATerm a_14 = t;
    int b_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_72(t);
        LocalPopChoice(b_14);
      }
    else
      {
        t = a_14;
        {
          t = n_72(t);
          {
            t = _2(t, p_72, g_4);
            t = o_72(t);
          }
        }
      }
    return(t);
  }
  t = g_4(t);
  return(t);
}
ATerm rzip_1 (ATerm t, ATerm a_73 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, RZip2_0, Zip3_0, a_73);
  return(t);
}
ATerm remove_intermediates_0 (ATerm t)
{
  ATerm j_4 = NULL,k_4 = NULL,l_4 = NULL;
  j_4 = t;
  i_4 :
  if(match_cons(j_4, sym__2))
    {
      k_4 = ATgetArgument(j_4, 0);
      l_4 = ATgetArgument(j_4, 1);
      {
        ATerm c_14;
        c_14 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_4), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_15), term_e_15), term_v_14), term_u_14), term_t_14), term_s_14), term_r_14), term_q_14), term_p_14), term_o_14), term_f_14), term_e_14), term_d_14));
          {
            t = rzip_1(t, conc_strings_0);
            t = rm_files_0(t);
          }
        }
        t = c_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm p_4 = NULL;
  p_4 = t;
  t = SSL_is_string(not_null(p_4));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm g_15 = t;
  int h_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(h_15);
    }
  else
    {
      t = g_15;
      {
        ATerm i_15 = t;
        int l_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, d_0);
            LocalPopChoice(l_15);
          }
        else
          {
            t = i_15;
            {
              ATerm y_4 = NULL,z_4 = NULL,a_5 = NULL;
              y_4 = t;
              x_4 :
              if(match_cons(y_4, sym_Path_1))
                {
                  z_4 = ATgetArgument(y_4, 0);
                  t = not_null(z_4);
                }
              else
                {
                  if(match_cons(y_4, sym_Var_1))
                    {
                      z_4 = ATgetArgument(y_4, 0);
                      {
                        t = not_null(z_4);
                        {
                          ATerm q_15 = t;
                          int r_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(r_15);
                            }
                          else
                            {
                              t = q_15;
                              {
                                ATerm g_0 (ATerm t)
                                {
                                  t = term_u_15;
                                  return(t);
                                }
                                t = debug_1(t, g_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(y_4, sym_Prefix_2))
                        {
                          z_4 = ATgetArgument(y_4, 0);
                          a_5 = ATgetArgument(y_4, 1);
                          {
                            ATerm f_5 = NULL,h_5 = NULL;
                            ATerm v_15;
                            v_15 = t;
                            {
                              ATerm g_5 = NULL;
                              t = not_null(z_4);
                              {
                                t = eval_config_0(t);
                                {
                                  g_5 = t;
                                  if(((f_5 != NULL) && (f_5 != g_5)))
                                    _fail(g_5);
                                  else
                                    f_5 = g_5;
                                }
                              }
                            }
                            t = v_15;
                            {
                              ATerm i_5 = NULL;
                              t = not_null(a_5);
                              {
                                t = eval_config_0(t);
                                {
                                  i_5 = t;
                                  if(((h_5 != NULL) && (h_5 != i_5)))
                                    _fail(i_5);
                                  else
                                    h_5 = i_5;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(f_5), not_null(h_5));
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
  ATerm q_5 = NULL;
  q_5 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_a_16, not_null(q_5));
    {
      t = table_get_0(t);
      {
        ATerm h_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm b_16;
            b_16 = t;
            {
              ATerm s_5 = NULL;
              ATerm t_5 = NULL;
              t_5 = t;
              if(((s_5 != NULL) && (s_5 != t_5)))
                _fail(t_5);
              else
                s_5 = t_5;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_a_16, not_null(q_5), not_null(s_5));
                t = table_put_0(t);
              }
            }
            t = b_16;
          }
          return(t);
        }
        t = try_1(t, h_0);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm f_81 (ATerm))
{
  ATerm c_16 = t;
  int d_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_81(t);
      LocalPopChoice(d_16);
    }
  else
    {
      t = c_16;
      {
      }
    }
  return(t);
}
ATerm cc2_0 (ATerm t)
{
  ATerm z_5 = NULL,b_6 = NULL;
  ATerm o_0 (ATerm t)
  {
    ATerm i_16 = t;
    if((PushChoice() == 0))
      {
        t = term_j_16;
        t = get_config_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = i_16;
      }
    return(t);
  }
  ATerm p_0 (ATerm t)
  {
    ATerm q_0 (ATerm t)
    {
      t = term_k_16;
      return(t);
    }
    t = say_1(t, q_0);
    return(t);
  }
  t = if_2(t, o_0, p_0);
  {
    ATerm l_16;
    l_16 = t;
    {
      ATerm a_6 = NULL;
      t = conc_strings_0(t);
      {
        a_6 = t;
        if(((z_5 != NULL) && (z_5 != a_6)))
          _fail(a_6);
        else
          z_5 = a_6;
      }
    }
    t = l_16;
    {
      ATerm r_0 (ATerm t)
      {
        ATerm t_0 (ATerm t)
        {
          t = term_m_16;
          t = get_config_0(t);
          return(t);
        }
        t = try_1(t, t_0);
        return(t);
      }
      ATerm s_0 (ATerm t)
      {
        t = term_n_16;
        return(t);
      }
      t = _2(t, r_0, s_0);
      {
        ATerm s_16;
        s_16 = t;
        {
          ATerm c_6 = NULL;
          t = conc_strings_0(t);
          {
            c_6 = t;
            if(((b_6 != NULL) && (b_6 != c_6)))
              _fail(c_6);
            else
              b_6 = c_6;
          }
        }
        t = s_16;
        {
          ATerm t_16;
          t_16 = t;
          {
            ATerm d_6 = NULL;
            ATerm e_6 = NULL;
            t = term_y_16;
            {
              t = get_config_0(t);
              {
                e_6 = t;
                if(((d_6 != NULL) && (d_6 != e_6)))
                  _fail(e_6);
                else
                  d_6 = e_6;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, term_z_16, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(d_6)), not_null(b_6)), term_m_16), not_null(z_5)));
              t = call_0(t);
            }
          }
          t = t_16;
        }
      }
    }
  }
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm a_17;
  a_17 = t;
  {
    ATerm j_6 = NULL;
    ATerm k_6 = NULL;
    k_6 = t;
    if(((j_6 != NULL) && (j_6 != k_6)))
      _fail(k_6);
    else
      j_6 = k_6;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_17, (ATerm) ATinsert(ATempty, not_null(j_6)));
      t = printnl_0(t);
    }
  }
  t = a_17;
  return(t);
}
ATerm say_1 (ATerm t, ATerm e_65 (ATerm))
{
  ATerm c_17;
  c_17 = t;
  {
    t = e_65(t);
    t = debug_0(t);
  }
  t = c_17;
  return(t);
}
ATerm if_2 (ATerm t, ATerm g_81 (ATerm), ATerm h_81 (ATerm))
{
  ATerm u_0 (ATerm t)
  {
    t = g_81(t);
    t = h_81(t);
    return(t);
  }
  t = try_1(t, u_0);
  return(t);
}
ATerm cc1_0 (ATerm t)
{
  ATerm q_6 = NULL,s_6 = NULL;
  ATerm w_0 (ATerm t)
  {
    ATerm d_17 = t;
    if((PushChoice() == 0))
      {
        t = term_j_16;
        t = get_config_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_17;
      }
    return(t);
  }
  ATerm x_0 (ATerm t)
  {
    ATerm y_0 (ATerm t)
    {
      t = term_l_17;
      return(t);
    }
    t = say_1(t, y_0);
    return(t);
  }
  t = if_2(t, w_0, x_0);
  {
    ATerm m_17;
    m_17 = t;
    {
      ATerm r_6 = NULL;
      t = conc_strings_0(t);
      {
        r_6 = t;
        if(((q_6 != NULL) && (q_6 != r_6)))
          _fail(r_6);
        else
          q_6 = r_6;
      }
    }
    t = m_17;
    {
      ATerm z_0 (ATerm t)
      {
        t = term_f_15;
        return(t);
      }
      t = _2(t, _id, z_0);
      {
        ATerm n_17;
        n_17 = t;
        {
          ATerm t_6 = NULL;
          t = conc_strings_0(t);
          {
            t_6 = t;
            if(((s_6 != NULL) && (s_6 != t_6)))
              _fail(t_6);
            else
              s_6 = t_6;
          }
        }
        t = n_17;
        {
          ATerm q_17;
          q_17 = t;
          {
            ATerm u_6 = NULL;
            ATerm v_6 = NULL,x_6 = NULL;
            ATerm w_6 = NULL;
            t = term_r_17;
            {
              t = get_config_0(t);
              {
                w_6 = t;
                if(((v_6 != NULL) && (v_6 != w_6)))
                  _fail(w_6);
                else
                  v_6 = w_6;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(v_6), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(s_6)), term_m_16), not_null(q_6)), term_s_17));
              {
                t = conc_0(t);
                {
                  x_6 = t;
                  if(((u_6 != NULL) && (u_6 != x_6)))
                    _fail(x_6);
                  else
                    u_6 = x_6;
                }
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, term_z_16, not_null(u_6));
              t = call_0(t);
            }
          }
          t = q_17;
        }
      }
    }
  }
  return(t);
}
ATerm print_0 (ATerm t)
{
  ATerm e_7 = NULL,f_7 = NULL,g_7 = NULL;
  e_7 = t;
  d_7 :
  if(match_cons(e_7, sym__2))
    {
      f_7 = ATgetArgument(e_7, 0);
      g_7 = ATgetArgument(e_7, 1);
      {
        ATerm t_17;
        t_17 = t;
        t = SSL_print(not_null(f_7), not_null(g_7));
        t = t_17;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm l_7 = NULL;
  l_7 = t;
  t = SSL_TicksToSeconds(not_null(l_7));
  return(t);
}
ATerm self_children_sys_time_0 (ATerm t)
{
  ATerm q_7 = NULL,r_7 = NULL,s_7 = NULL,t_7 = NULL,u_7 = NULL;
  q_7 = t;
  p_7 :
  if(match_cons(q_7, sym__4))
    {
      r_7 = ATgetArgument(q_7, 0);
      s_7 = ATgetArgument(q_7, 1);
      t_7 = ATgetArgument(q_7, 2);
      u_7 = ATgetArgument(q_7, 3);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_7), not_null(u_7));
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
  ATerm c_8 = NULL,d_8 = NULL,e_8 = NULL;
  c_8 = t;
  b_8 :
  if(match_cons(c_8, sym__2))
    {
      d_8 = ATgetArgument(c_8, 0);
      e_8 = ATgetArgument(c_8, 1);
      {
        ATerm a_18 = t;
        int b_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(d_8), not_null(e_8));
            LocalPopChoice(b_18);
          }
        else
          {
            t = a_18;
            t = SSL_addr(not_null(d_8), not_null(e_8));
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
  ATerm k_8 = NULL,l_8 = NULL,m_8 = NULL,n_8 = NULL,o_8 = NULL;
  k_8 = t;
  j_8 :
  if(match_cons(k_8, sym__4))
    {
      l_8 = ATgetArgument(k_8, 0);
      m_8 = ATgetArgument(k_8, 1);
      n_8 = ATgetArgument(k_8, 2);
      o_8 = ATgetArgument(k_8, 3);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_8), not_null(n_8));
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
  ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL;
  w_8 = t;
  v_8 :
  if(match_cons(w_8, sym__2))
    {
      x_8 = ATgetArgument(w_8, 0);
      y_8 = ATgetArgument(w_8, 1);
      {
        ATerm g_18 = t;
        int h_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(x_8), not_null(y_8));
            LocalPopChoice(h_18);
          }
        else
          {
            t = g_18;
            t = SSL_subtr(not_null(x_8), not_null(y_8));
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
  ATerm k_9 = NULL,l_9 = NULL,m_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL;
  k_9 = t;
  h_9 :
  if(match_cons(k_9, sym__2))
    {
      l_9 = ATgetArgument(k_9, 0);
      q_9 = ATgetArgument(k_9, 1);
      i_9 :
      if(match_cons(l_9, sym__4))
        {
          m_9 = ATgetArgument(l_9, 0);
          n_9 = ATgetArgument(l_9, 1);
          o_9 = ATgetArgument(l_9, 2);
          p_9 = ATgetArgument(l_9, 3);
          j_9 :
          if(match_cons(q_9, sym__4))
            {
              r_9 = ATgetArgument(q_9, 0);
              s_9 = ATgetArgument(q_9, 1);
              t_9 = ATgetArgument(q_9, 2);
              u_9 = ATgetArgument(q_9, 3);
              {
                ATerm d_10 = NULL,f_10 = NULL,h_10 = NULL,j_10 = NULL;
                ATerm i_18;
                i_18 = t;
                {
                  ATerm e_10 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(m_9), not_null(r_9));
                  {
                    t = subt_0(t);
                    {
                      e_10 = t;
                      if(((d_10 != NULL) && (d_10 != e_10)))
                        _fail(e_10);
                      else
                        d_10 = e_10;
                    }
                  }
                }
                t = i_18;
                {
                  ATerm j_18;
                  j_18 = t;
                  {
                    ATerm g_10 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(n_9), not_null(s_9));
                    {
                      t = subt_0(t);
                      {
                        g_10 = t;
                        if(((f_10 != NULL) && (f_10 != g_10)))
                          _fail(g_10);
                        else
                          f_10 = g_10;
                      }
                    }
                  }
                  t = j_18;
                  {
                    ATerm k_18;
                    k_18 = t;
                    {
                      ATerm i_10 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(o_9), not_null(t_9));
                      {
                        t = subt_0(t);
                        {
                          i_10 = t;
                          if(((h_10 != NULL) && (h_10 != i_10)))
                            _fail(i_10);
                          else
                            h_10 = i_10;
                        }
                      }
                    }
                    t = k_18;
                    {
                      ATerm k_10 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(p_9), not_null(u_9));
                      {
                        t = subt_0(t);
                        {
                          k_10 = t;
                          if(((j_10 != NULL) && (j_10 != k_10)))
                            _fail(k_10);
                          else
                            j_10 = k_10;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym__4, not_null(d_10), not_null(f_10), not_null(h_10), not_null(j_10));
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
ATerm profile_2 (ATerm t, ATerm y_64 (ATerm), ATerm z_64 (ATerm))
{
  ATerm v_10 = NULL;
  ATerm l_18;
  l_18 = t;
  {
    ATerm w_10 = NULL;
    t = times_0(t);
    {
      w_10 = t;
      if(((v_10 != NULL) && (v_10 != w_10)))
        _fail(w_10);
      else
        v_10 = w_10;
    }
  }
  t = l_18;
  {
    t = z_64(t);
    {
      ATerm q_18;
      q_18 = t;
      {
        ATerm x_10 = NULL,z_10 = NULL,b_11 = NULL,d_11 = NULL;
        ATerm y_10 = NULL;
        t = times_0(t);
        {
          y_10 = t;
          if(((x_10 != NULL) && (x_10 != y_10)))
            _fail(y_10);
          else
            x_10 = y_10;
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_10), not_null(v_10));
          {
            t = diff_times_0(t);
            {
              ATerm r_18;
              r_18 = t;
              {
                ATerm a_11 = NULL;
                t = y_64(t);
                {
                  a_11 = t;
                  if(((z_10 != NULL) && (z_10 != a_11)))
                    _fail(a_11);
                  else
                    z_10 = a_11;
                }
              }
              t = r_18;
              {
                ATerm w_18;
                w_18 = t;
                {
                  ATerm c_11 = NULL;
                  t = self_children_user_time_0(t);
                  {
                    t = ticks_to_seconds_0(t);
                    {
                      c_11 = t;
                      if(((b_11 != NULL) && (b_11 != c_11)))
                        _fail(c_11);
                      else
                        b_11 = c_11;
                    }
                  }
                }
                t = w_18;
                {
                  ATerm e_11 = NULL;
                  t = self_children_sys_time_0(t);
                  {
                    t = ticks_to_seconds_0(t);
                    {
                      e_11 = t;
                      if(((d_11 != NULL) && (d_11 != e_11)))
                        _fail(e_11);
                      else
                        d_11 = e_11;
                    }
                  }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_b_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_19), not_null(d_11)), term_y_18), not_null(b_11)), term_x_18), not_null(z_10)));
                    t = print_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = q_18;
    }
  }
  return(t);
}
ATerm pipe_2 (ATerm t, ATerm v_61 (ATerm), ATerm w_61 (ATerm))
{
  ATerm a_1 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = pipe_3(t, v_61, w_61, a_1);
  return(t);
}
ATerm abox2text_0 (ATerm t)
{
  ATerm b_1 (ATerm t)
  {
    t = term_b_19;
    t = get_config_0(t);
    return(t);
  }
  ATerm c_1 (ATerm t)
  {
    t = term_d_19;
    return(t);
  }
  t = pipe_2(t, b_1, c_1);
  return(t);
}
ATerm ac2abox_0 (ATerm t)
{
  ATerm d_1 (ATerm t)
  {
    t = term_e_19;
    t = get_config_0(t);
    return(t);
  }
  ATerm e_1 (ATerm t)
  {
    t = term_e_15;
    return(t);
  }
  ATerm f_1 (ATerm t)
  {
    ATerm l_11 = NULL;
    ATerm m_11 = NULL;
    t = term_g_19;
    {
      t = get_config_0(t);
      {
        m_11 = t;
        if(((l_11 != NULL) && (l_11 != m_11)))
          _fail(m_11);
        else
          l_11 = m_11;
      }
    }
    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_11)), term_i_19);
    return(t);
  }
  t = pipe_3(t, d_1, e_1, f_1);
  return(t);
}
ATerm s2c_0 (ATerm t)
{
  ATerm g_1 (ATerm t)
  {
    t = term_j_19;
    t = get_config_0(t);
    return(t);
  }
  ATerm h_1 (ATerm t)
  {
    t = term_v_14;
    return(t);
  }
  ATerm i_1 (ATerm t)
  {
    ATerm q_11 = NULL;
    ATerm t_11 = NULL;
    t = term_l_19;
    {
      t = get_config_0(t);
      {
        ATerm k_1 (ATerm t)
        {
          ATerm r_11 = NULL;
          ATerm s_11 = NULL;
          s_11 = t;
          if(((r_11 != NULL) && (r_11 != s_11)))
            _fail(s_11);
          else
            r_11 = s_11;
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_11)), term_l_19);
          return(t);
        }
        t = map_1(t, k_1);
        {
          t = concat_0(t);
          {
            t_11 = t;
            if(((q_11 != NULL) && (q_11 != t_11)))
              _fail(t_11);
            else
              q_11 = t_11;
          }
        }
      }
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(q_11)), term_n_19);
    return(t);
  }
  t = pipe_3(t, g_1, h_1, i_1);
  return(t);
}
ATerm stratego_cf_0 (ATerm t)
{
  ATerm l_1 (ATerm t)
  {
    t = term_p_19;
    t = get_config_0(t);
    return(t);
  }
  ATerm m_1 (ATerm t)
  {
    t = (ATerm) ATinsert(ATempty, term_n_19);
    return(t);
  }
  t = pipe_3(t, l_1, _id, m_1);
  return(t);
}
ATerm canonicalize_0 (ATerm t)
{
  ATerm n_1 (ATerm t)
  {
    t = term_x_19;
    t = get_config_0(t);
    return(t);
  }
  ATerm o_1 (ATerm t)
  {
    t = term_y_19;
    return(t);
  }
  ATerm p_1 (ATerm t)
  {
    t = (ATerm) ATinsert(ATempty, term_n_19);
    return(t);
  }
  t = pipe_3(t, n_1, o_1, p_1);
  return(t);
}
ATerm optimize2_0 (ATerm t)
{
  ATerm q_1 (ATerm t)
  {
    t = term_f_20;
    t = get_config_0(t);
    return(t);
  }
  ATerm r_1 (ATerm t)
  {
    t = term_u_14;
    return(t);
  }
  ATerm s_1 (ATerm t)
  {
    t = (ATerm) ATinsert(ATempty, term_n_19);
    return(t);
  }
  t = pipe_3(t, q_1, r_1, s_1);
  return(t);
}
ATerm compile_match_0 (ATerm t)
{
  ATerm t_1 (ATerm t)
  {
    t = term_h_20;
    t = get_config_0(t);
    return(t);
  }
  ATerm x_1 (ATerm t)
  {
    t = term_t_14;
    return(t);
  }
  ATerm y_1 (ATerm t)
  {
    t = (ATerm) ATinsert(ATempty, term_n_19);
    return(t);
  }
  t = pipe_3(t, t_1, x_1, y_1);
  return(t);
}
ATerm inline_0 (ATerm t)
{
  ATerm z_1 (ATerm t)
  {
    t = term_i_20;
    t = get_config_0(t);
    return(t);
  }
  ATerm a_2 (ATerm t)
  {
    t = term_s_14;
    return(t);
  }
  ATerm b_2 (ATerm t)
  {
    t = (ATerm) ATinsert(ATempty, term_n_19);
    return(t);
  }
  t = pipe_3(t, z_1, a_2, b_2);
  return(t);
}
ATerm fusion_0 (ATerm t)
{
  ATerm g_2 (ATerm t)
  {
    t = term_j_20;
    t = get_config_0(t);
    return(t);
  }
  ATerm h_2 (ATerm t)
  {
    t = term_r_14;
    return(t);
  }
  ATerm k_2 (ATerm t)
  {
    t = (ATerm) ATinsert(ATempty, term_n_19);
    return(t);
  }
  t = pipe_3(t, g_2, h_2, k_2);
  return(t);
}
ATerm optimize1_0 (ATerm t)
{
  ATerm l_2 (ATerm t)
  {
    t = term_l_20;
    t = get_config_0(t);
    return(t);
  }
  ATerm m_2 (ATerm t)
  {
    t = term_q_14;
    return(t);
  }
  ATerm n_2 (ATerm t)
  {
    t = (ATerm) ATinsert(ATempty, term_n_19);
    return(t);
  }
  t = pipe_3(t, l_2, m_2, n_2);
  return(t);
}
ATerm rename_defs_0 (ATerm t)
{
  ATerm o_2 (ATerm t)
  {
    t = term_m_20;
    t = get_config_0(t);
    return(t);
  }
  ATerm r_2 (ATerm t)
  {
    t = term_p_14;
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    t = (ATerm) ATinsert(ATempty, term_n_19);
    return(t);
  }
  t = pipe_3(t, o_2, r_2, u_2);
  return(t);
}
ATerm stratego_nf_0 (ATerm t)
{
  ATerm y_2 (ATerm t)
  {
    t = term_n_20;
    t = get_config_0(t);
    return(t);
  }
  ATerm z_2 (ATerm t)
  {
    t = (ATerm) ATinsert(ATempty, term_n_19);
    return(t);
  }
  t = pipe_3(t, y_2, _id, z_2);
  return(t);
}
ATerm extract_0 (ATerm t)
{
  ATerm a_3 (ATerm t)
  {
    t = term_o_20;
    t = get_config_0(t);
    return(t);
  }
  ATerm b_3 (ATerm t)
  {
    t = term_o_14;
    return(t);
  }
  ATerm d_3 (ATerm t)
  {
    t = (ATerm) ATinsert(ATempty, term_n_19);
    return(t);
  }
  t = pipe_3(t, a_3, b_3, d_3);
  return(t);
}
ATerm extract_all_0 (ATerm t)
{
  ATerm e_3 (ATerm t)
  {
    t = term_p_20;
    t = get_config_0(t);
    return(t);
  }
  ATerm f_3 (ATerm t)
  {
    t = term_q_20;
    return(t);
  }
  ATerm k_3 (ATerm t)
  {
    t = (ATerm) ATinsert(ATempty, term_n_19);
    return(t);
  }
  t = pipe_3(t, e_3, f_3, k_3);
  return(t);
}
ATerm output_frontend_0 (ATerm t)
{
  ATerm y_11 = NULL,z_11 = NULL;
  ATerm l_3 (ATerm t)
  {
    ATerm r_20;
    r_20 = t;
    {
      t = term_s_20;
      t = get_config_0(t);
    }
    t = r_20;
    {
      ATerm t_20 = t;
      int u_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = extract_all_0(t);
          LocalPopChoice(u_20);
        }
      else
        {
          t = t_20;
          {
            t = (ATerm) ATinsert(ATempty, term_v_20);
            t = fatal_error_0(t);
          }
        }
      {
        ATerm m_3 (ATerm t)
        {
          ATerm a_12 = NULL;
          a_12 = t;
          if(((y_11 != NULL) && (y_11 != a_12)))
            _fail(a_12);
          else
            y_11 = a_12;
          return(t);
        }
        ATerm n_3 (ATerm t)
        {
          ATerm b_12 = NULL;
          b_12 = t;
          if(((z_11 != NULL) && (z_11 != b_12)))
            _fail(b_12);
          else
            z_11 = b_12;
          return(t);
        }
        t = _2(t, m_3, n_3);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_b_17, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(z_11)), not_null(y_11)), term_e_22));
          {
            t = printnl_0(t);
            {
              t = term_q_13;
              t = exit_0(t);
            }
          }
        }
      }
    }
    return(t);
  }
  t = try_1(t, l_3);
  return(t);
}
ATerm frontend_0 (ATerm t)
{
  ATerm v_3 (ATerm t)
  {
    t = term_k_22;
    t = get_config_0(t);
    return(t);
  }
  ATerm w_3 (ATerm t)
  {
    t = term_f_14;
    return(t);
  }
  ATerm x_3 (ATerm t)
  {
    t = (ATerm) ATinsert(ATempty, term_n_19);
    return(t);
  }
  t = pipe_3(t, v_3, w_3, x_3);
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm g_12 = NULL,h_12 = NULL,i_12 = NULL;
  g_12 = t;
  f_12 :
  if(match_cons(g_12, sym__2))
    {
      h_12 = ATgetArgument(g_12, 0);
      i_12 = ATgetArgument(g_12, 1);
      t = SSL_WriteToBinaryFile(not_null(h_12), not_null(i_12));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm apply_to_file_1 (ATerm t, ATerm m_62 (ATerm))
{
  ATerm p_12 = NULL,q_12 = NULL,r_12 = NULL;
  p_12 = t;
  o_12 :
  if(match_cons(p_12, sym__2))
    {
      q_12 = ATgetArgument(p_12, 0);
      r_12 = ATgetArgument(p_12, 1);
      {
        ATerm u_12 = NULL;
        ATerm l_22;
        l_22 = t;
        {
          ATerm v_12 = NULL;
          t = not_null(q_12);
          {
            t = ReadFromFile_0(t);
            {
              t = m_62(t);
              {
                v_12 = t;
                if(((u_12 != NULL) && (u_12 != v_12)))
                  _fail(v_12);
                else
                  u_12 = v_12;
              }
            }
          }
        }
        t = l_22;
        {
          ATerm m_22;
          m_22 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(r_12), not_null(u_12));
            t = WriteToBinaryFile_0(t);
          }
          t = m_22;
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm transform_file_2 (ATerm t, ATerm k_62 (ATerm), ATerm l_62 (ATerm))
{
  ATerm a_13 = NULL,c_13 = NULL;
  ATerm n_22;
  n_22 = t;
  {
    ATerm b_13 = NULL;
    t = conc_strings_0(t);
    {
      b_13 = t;
      if(((a_13 != NULL) && (a_13 != b_13)))
        _fail(b_13);
      else
        a_13 = b_13;
    }
  }
  t = n_22;
  {
    t = _2(t, _id, l_62);
    {
      ATerm o_22;
      o_22 = t;
      {
        ATerm d_13 = NULL;
        t = conc_strings_0(t);
        {
          d_13 = t;
          if(((c_13 != NULL) && (c_13 != d_13)))
            _fail(d_13);
          else
            c_13 = d_13;
        }
      }
      t = o_22;
      {
        ATerm p_22;
        p_22 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_13), not_null(c_13));
          t = apply_to_file_1(t, k_62);
        }
        t = p_22;
      }
    }
  }
  return(t);
}
ATerm AddMain_1 (ATerm t, ATerm w_81 (ATerm))
{
  ATerm j_13 = NULL,k_13 = NULL;
  j_13 = t;
  i_13 :
  if(match_cons(j_13, sym_Specification_1))
    {
      k_13 = ATgetArgument(j_13, 0);
      {
        ATerm m_13 = NULL;
        ATerm n_13 = NULL;
        t = term_q_22;
        {
          t = w_81(t);
          {
            n_13 = t;
            if(((m_13 != NULL) && (m_13 != n_13)))
              _fail(n_13);
            else
              m_13 = n_13;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(not_null(k_13)), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_r_22, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(m_13)), (ATerm) ATempty))))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm add_main_0 (ATerm t)
{
  ATerm r_13 = NULL;
  ATerm s_22 = t;
  int t_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_22;
      u_22 = t;
      {
        ATerm s_13 = NULL;
        t = term_v_22;
        {
          t = get_config_0(t);
          {
            s_13 = t;
            if(((r_13 != NULL) && (r_13 != s_13)))
              _fail(s_13);
            else
              r_13 = s_13;
          }
        }
      }
      t = u_22;
      {
        ATerm y_3 (ATerm t)
        {
          ATerm f_4 (ATerm t)
          {
            t = not_null(r_13);
            return(t);
          }
          t = AddMain_1(t, f_4);
          return(t);
        }
        ATerm z_3 (ATerm t)
        {
          t = term_e_14;
          return(t);
        }
        t = transform_file_2(t, y_3, z_3);
      }
      LocalPopChoice(t_22);
    }
  else
    {
      t = s_22;
      {
        ATerm h_4 (ATerm t)
        {
          t = term_e_14;
          return(t);
        }
        t = transform_file_2(t, _id, h_4);
      }
    }
  return(t);
}
ATerm output_ast_0 (ATerm t)
{
  ATerm w_13 = NULL,x_13 = NULL;
  ATerm m_4 (ATerm t)
  {
    ATerm w_22;
    w_22 = t;
    {
      t = term_y_22;
      t = get_config_0(t);
    }
    t = w_22;
    {
      ATerm n_4 (ATerm t)
      {
        ATerm y_13 = NULL;
        y_13 = t;
        if(((w_13 != NULL) && (w_13 != y_13)))
          _fail(y_13);
        else
          w_13 = y_13;
        return(t);
      }
      ATerm o_4 (ATerm t)
      {
        ATerm z_13 = NULL;
        z_13 = t;
        if(((x_13 != NULL) && (x_13 != z_13)))
          _fail(z_13);
        else
          x_13 = z_13;
        return(t);
      }
      t = _2(t, n_4, o_4);
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_17, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(x_13)), not_null(w_13)), term_z_22));
        {
          t = printnl_0(t);
          {
            t = term_q_13;
            t = exit_0(t);
          }
        }
      }
    }
    return(t);
  }
  t = try_1(t, m_4);
  return(t);
}
ATerm pipe_3 (ATerm t, ATerm x_61 (ATerm), ATerm y_61 (ATerm), ATerm z_61 (ATerm))
{
  ATerm g_14 = NULL,i_14 = NULL;
  ATerm a_23;
  a_23 = t;
  {
    ATerm h_14 = NULL;
    t = conc_strings_0(t);
    {
      h_14 = t;
      if(((g_14 != NULL) && (g_14 != h_14)))
        _fail(h_14);
      else
        g_14 = h_14;
    }
  }
  t = a_23;
  {
    t = _2(t, _id, y_61);
    {
      ATerm d_23;
      d_23 = t;
      {
        ATerm j_14 = NULL;
        t = conc_strings_0(t);
        {
          j_14 = t;
          if(((i_14 != NULL) && (i_14 != j_14)))
            _fail(j_14);
          else
            i_14 = j_14;
        }
      }
      t = d_23;
      {
        ATerm e_23;
        e_23 = t;
        {
          ATerm k_14 = NULL,m_14 = NULL;
          ATerm f_23;
          f_23 = t;
          {
            ATerm l_14 = NULL;
            t = x_61(t);
            {
              l_14 = t;
              if(((k_14 != NULL) && (k_14 != l_14)))
                _fail(l_14);
              else
                k_14 = l_14;
            }
          }
          t = f_23;
          {
            ATerm n_14 = NULL;
            t = z_61(t);
            {
              n_14 = t;
              if(((m_14 != NULL) && (m_14 != n_14)))
                _fail(n_14);
              else
                m_14 = n_14;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(k_14), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(m_14)), not_null(i_14)), term_m_16), not_null(g_14)), term_g_23));
              t = call_0(t);
            }
          }
        }
        t = e_23;
      }
    }
  }
  return(t);
}
ATerm parse_0 (ATerm t)
{
  ATerm q_4 (ATerm t)
  {
    t = term_h_23;
    t = get_config_0(t);
    return(t);
  }
  ATerm r_4 (ATerm t)
  {
    t = term_d_14;
    return(t);
  }
  ATerm s_4 (ATerm t)
  {
    ATerm w_14 = NULL,c_15 = NULL;
    ATerm i_23;
    i_23 = t;
    {
      ATerm b_15 = NULL;
      ATerm n_23 = t;
      int o_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_14 = NULL;
          ATerm y_14 = NULL;
          t = term_m_16;
          {
            t = get_config_0(t);
            {
              y_14 = t;
              if(((x_14 != NULL) && (x_14 != y_14)))
                _fail(y_14);
              else
                x_14 = y_14;
            }
          }
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_14)), term_v_23);
          LocalPopChoice(o_23);
        }
      else
        {
          t = n_23;
          {
            ATerm z_14 = NULL;
            ATerm a_15 = NULL;
            t = term_g_23;
            {
              t = get_config_0(t);
              {
                a_15 = t;
                if(((z_14 != NULL) && (z_14 != a_15)))
                  _fail(a_15);
                else
                  z_14 = a_15;
              }
            }
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_14)), term_v_23);
          }
        }
      {
        b_15 = t;
        if(((w_14 != NULL) && (w_14 != b_15)))
          _fail(b_15);
        else
          w_14 = b_15;
      }
    }
    t = i_23;
    {
      ATerm d_15 = NULL;
      t = term_w_23;
      {
        t = get_config_0(t);
        {
          d_15 = t;
          if(((c_15 != NULL) && (c_15 != d_15)))
            _fail(d_15);
          else
            c_15 = d_15;
        }
      }
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(c_15)), (ATerm) ATinsert(ATempty, term_x_23)), not_null(w_14));
        t = concat_0(t);
      }
    }
    return(t);
  }
  t = pipe_3(t, q_4, r_4, s_4);
  return(t);
}
ATerm sc_announce_0 (ATerm t)
{
  ATerm t_4 (ATerm t)
  {
    ATerm y_23;
    y_23 = t;
    {
      t = term_z_23;
      {
        t = get_config_0(t);
        t = sc_version_0(t);
      }
    }
    t = y_23;
    return(t);
  }
  t = try_1(t, t_4);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm a_24;
  a_24 = t;
  {
    ATerm j_15 = NULL;
    ATerm k_15 = NULL;
    k_15 = t;
    if(((j_15 != NULL) && (j_15 != k_15)))
      _fail(k_15);
    else
      j_15 = k_15;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_17, not_null(j_15));
      t = printnl_0(t);
    }
  }
  t = a_24;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm d_24;
  d_24 = t;
  {
    t = error_0(t);
    {
      t = term_e_24;
      t = exit_0(t);
    }
  }
  t = d_24;
  return(t);
}
ATerm basename_1 (ATerm t, ATerm m_66 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm u_4 (ATerm t)
    {
      ATerm f_24 = t;
      int g_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Cons_2(t, _id, u_4);
          LocalPopChoice(g_24);
        }
      else
        {
          t = f_24;
          {
            ATerm h_24 = t;
            int i_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_4 (ATerm t)
                {
                  ATerm o_15 = NULL;
                  o_15 = t;
                  m_15 :
                  if(!(match_int(o_15, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = Cons_2(t, v_4, _id);
                LocalPopChoice(i_24);
              }
            else
              {
                t = h_24;
                {
                  ATerm w_4 (ATerm t)
                  {
                    ATerm p_15 = NULL;
                    p_15 = t;
                    n_15 :
                    if(!(match_int(p_15, 46)))
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = Cons_2(t, w_4, m_66);
                  t = (ATerm) ATempty;
                }
              }
          }
        }
      return(t);
    }
    t = try_1(t, u_4);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm basename_0 (ATerm t)
{
  t = basename_1(t, _id);
  return(t);
}
ATerm sc_version_0 (ATerm t)
{
  ATerm j_24;
  j_24 = t;
  {
    ATerm s_15 = NULL;
    ATerm t_15 = NULL;
    t = term_k_24;
    {
      t = get_config_0(t);
      {
        t_15 = t;
        if(((s_15 != NULL) && (s_15 != t_15)))
          _fail(t_15);
        else
          s_15 = t_15;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_17, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_24), not_null(s_15)), term_l_24));
      t = printnl_0(t);
    }
  }
  t = j_24;
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm x_15 = NULL,y_15 = NULL,z_15 = NULL;
  x_15 = t;
  w_15 :
  if(match_cons(x_15, sym__2))
    {
      y_15 = ATgetArgument(x_15, 0);
      z_15 = ATgetArgument(x_15, 1);
      t = SSL_call(not_null(y_15), not_null(z_15));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm f_16 = NULL,g_16 = NULL,h_16 = NULL;
  f_16 = t;
  e_16 :
  if(match_cons(f_16, sym__2))
    {
      g_16 = ATgetArgument(f_16, 0);
      h_16 = ATgetArgument(f_16, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_a_16, not_null(g_16), not_null(h_16));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm extend_config_0 (ATerm t)
{
  ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL;
  p_16 = t;
  o_16 :
  if(match_cons(p_16, sym__2))
    {
      q_16 = ATgetArgument(p_16, 0);
      r_16 = ATgetArgument(p_16, 1);
      {
        ATerm u_16 = NULL;
        ATerm v_16 = NULL,x_16 = NULL;
        ATerm w_16 = NULL;
        t = not_null(q_16);
        {
          ATerm n_24 = t;
          int o_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(o_24);
            }
          else
            {
              t = n_24;
              t = (ATerm) ATempty;
            }
          {
            w_16 = t;
            if(((v_16 != NULL) && (v_16 != w_16)))
              _fail(w_16);
            else
              v_16 = w_16;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_16), not_null(v_16));
          {
            t = conc_0(t);
            {
              x_16 = t;
              if(((u_16 != NULL) && (u_16 != x_16)))
                _fail(x_16);
              else
                u_16 = x_16;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_a_16, not_null(q_16), not_null(u_16));
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
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL;
  g_17 = t;
  e_17 :
  if(match_string(g_17, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(g_17) == AT_LIST) && ((ATermList) g_17 != ATempty)))
        {
          h_17 = ATgetFirst((ATermList) g_17);
          i_17 = (ATerm) ATgetNext((ATermList) g_17);
          f_17 :
          if(((ATgetType(i_17) == AT_LIST) && ((ATermList) i_17 != ATempty)))
            {
              j_17 = ATgetFirst((ATermList) i_17);
              k_17 = (ATerm) ATgetNext((ATermList) i_17);
              {
                ATerm o_17 = NULL;
                ATerm p_24;
                p_24 = t;
                {
                  t = not_null(h_17);
                  t = l_0(t);
                }
                t = p_24;
                {
                  ATerm p_17 = NULL;
                  t = not_null(j_17);
                  {
                    t = m_0(t);
                    {
                      p_17 = t;
                      if(((o_17 != NULL) && (o_17 != p_17)))
                        _fail(p_17);
                      else
                        o_17 = p_17;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(k_17)), not_null(o_17));
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
ATerm table_remove_0 (ATerm t)
{
  ATerm v_17 = NULL,w_17 = NULL;
  ATerm r_24;
  r_24 = t;
  {
    ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL;
    x_17 = t;
    u_17 :
    if(match_cons(x_17, sym__2))
      {
        y_17 = ATgetArgument(x_17, 0);
        z_17 = ATgetArgument(x_17, 1);
        {
          if(((v_17 != NULL) && (v_17 != y_17)))
            _fail(y_17);
          else
            v_17 = y_17;
          {
            if(((w_17 != NULL) && (w_17 != z_17)))
              _fail(z_17);
            else
              w_17 = z_17;
            t = SSL_table_remove(not_null(v_17), not_null(w_17));
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = r_24;
  return(t);
}
ATerm toggle_config_0 (ATerm t)
{
  ATerm d_18 = NULL,e_18 = NULL,f_18 = NULL;
  d_18 = t;
  c_18 :
  if(match_cons(d_18, sym__2))
    {
      e_18 = ATgetArgument(d_18, 0);
      f_18 = ATgetArgument(d_18, 1);
      {
        ATerm s_24 = t;
        int t_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = not_null(e_18);
            {
              t = get_config_0(t);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_a_16, not_null(e_18));
                t = table_remove_0(t);
              }
            }
            LocalPopChoice(t_24);
          }
        else
          {
            t = s_24;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(e_18), not_null(f_18));
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
  ATerm n_18 = NULL,o_18 = NULL,p_18 = NULL;
  n_18 = t;
  m_18 :
  if(match_cons(n_18, sym__2))
    {
      o_18 = ATgetArgument(n_18, 0);
      p_18 = ATgetArgument(n_18, 1);
      {
        ATerm s_18 = NULL;
        ATerm t_18 = NULL,v_18 = NULL;
        ATerm u_18 = NULL;
        t = not_null(o_18);
        {
          ATerm u_24 = t;
          int x_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(x_24);
            }
          else
            {
              t = u_24;
              t = (ATerm) ATempty;
            }
          {
            u_18 = t;
            if(((t_18 != NULL) && (t_18 != u_18)))
              _fail(u_18);
            else
              t_18 = u_18;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_18), not_null(p_18));
          {
            t = conc_0(t);
            {
              v_18 = t;
              if(((s_18 != NULL) && (s_18 != v_18)))
                _fail(v_18);
              else
                s_18 = v_18;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_a_16, not_null(o_18), not_null(s_18));
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
  ATerm y_24 = t;
  int z_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_5 (ATerm t)
      {
        ATerm e_20 = NULL;
        e_20 = t;
        z_18 :
        if(!(match_string(e_20, "-i")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm c_5 (ATerm t)
      {
        ATerm w_20 = NULL;
        ATerm a_25;
        a_25 = t;
        {
          ATerm g_20 = NULL;
          ATerm k_20 = NULL;
          k_20 = t;
          if(((g_20 != NULL) && (g_20 != k_20)))
            _fail(k_20);
          else
            g_20 = k_20;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_g_23, not_null(g_20));
            t = set_config_0(t);
          }
        }
        t = a_25;
        {
          ATerm x_20 = NULL;
          t = basename_0(t);
          {
            x_20 = t;
            if(((w_20 != NULL) && (w_20 != x_20)))
              _fail(x_20);
            else
              w_20 = x_20;
          }
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(w_20));
        }
        return(t);
      }
      ATerm d_5 (ATerm t)
      {
        t = term_b_25;
        return(t);
      }
      t = ArgOption_3(t, b_5, c_5, d_5);
      LocalPopChoice(z_24);
    }
  else
    {
      t = y_24;
      {
        ATerm f_25 = t;
        int i_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_5 (ATerm t)
            {
              ATerm y_20 = NULL;
              y_20 = t;
              c_19 :
              if(!(match_string(y_20, "-o")))
                {
                  if(!(match_string(y_20, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm j_5 (ATerm t)
            {
              ATerm b_21 = NULL;
              ATerm j_25;
              j_25 = t;
              {
                ATerm z_20 = NULL;
                ATerm a_21 = NULL;
                a_21 = t;
                if(((z_20 != NULL) && (z_20 != a_21)))
                  _fail(a_21);
                else
                  z_20 = a_21;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_m_16, not_null(z_20));
                  t = set_config_0(t);
                }
              }
              t = j_25;
              {
                ATerm c_21 = NULL;
                c_21 = t;
                if(((b_21 != NULL) && (b_21 != c_21)))
                  _fail(c_21);
                else
                  b_21 = c_21;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(b_21));
              }
              return(t);
            }
            ATerm k_5 (ATerm t)
            {
              t = term_k_25;
              return(t);
            }
            t = ArgOption_3(t, e_5, j_5, k_5);
            LocalPopChoice(i_25);
          }
        else
          {
            t = f_25;
            {
              ATerm l_25 = t;
              int m_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_5 (ATerm t)
                  {
                    ATerm d_21 = NULL;
                    d_21 = t;
                    f_19 :
                    if(!(match_string(d_21, "-I")))
                      {
                        if(!(match_string(d_21, "--Include")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm m_5 (ATerm t)
                  {
                    ATerm e_21 = NULL;
                    ATerm f_21 = NULL;
                    f_21 = t;
                    if(((e_21 != NULL) && (e_21 != f_21)))
                      _fail(f_21);
                    else
                      e_21 = f_21;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_w_23, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_21)), term_w_23));
                      t = extend_config_0(t);
                    }
                    t = term_n_25;
                    return(t);
                  }
                  ATerm n_5 (ATerm t)
                  {
                    t = term_o_25;
                    return(t);
                  }
                  t = ArgOption_3(t, l_5, m_5, n_5);
                  LocalPopChoice(m_25);
                }
              else
                {
                  t = l_25;
                  {
                    ATerm p_25 = t;
                    int s_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm o_5 (ATerm t)
                        {
                          ATerm g_21 = NULL;
                          g_21 = t;
                          h_19 :
                          if(!(match_string(g_21, "--main")))
                            {
                              if(!(match_string(g_21, "-m")))
                                {
                                  _fail(t);
                                }
                            }
                          return(t);
                        }
                        ATerm p_5 (ATerm t)
                        {
                          ATerm j_21 = NULL;
                          ATerm t_25;
                          t_25 = t;
                          {
                            ATerm h_21 = NULL;
                            ATerm i_21 = NULL;
                            i_21 = t;
                            if(((h_21 != NULL) && (h_21 != i_21)))
                              _fail(i_21);
                            else
                              h_21 = i_21;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_v_22, not_null(h_21));
                              t = set_config_0(t);
                            }
                          }
                          t = t_25;
                          {
                            ATerm k_21 = NULL;
                            k_21 = t;
                            if(((j_21 != NULL) && (j_21 != k_21)))
                              _fail(k_21);
                            else
                              j_21 = k_21;
                            t = (ATerm) ATmakeAppl(sym_Main_1, not_null(j_21));
                          }
                          return(t);
                        }
                        ATerm r_5 (ATerm t)
                        {
                          t = term_u_25;
                          return(t);
                        }
                        t = ArgOption_3(t, o_5, p_5, r_5);
                        LocalPopChoice(s_25);
                      }
                    else
                      {
                        t = p_25;
                        {
                          ATerm x_25 = t;
                          int y_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm u_5 (ATerm t)
                              {
                                ATerm l_21 = NULL;
                                l_21 = t;
                                k_19 :
                                if(!(match_string(l_21, "--C-include")))
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              ATerm v_5 (ATerm t)
                              {
                                ATerm m_21 = NULL;
                                ATerm n_21 = NULL;
                                n_21 = t;
                                if(((m_21 != NULL) && (m_21 != n_21)))
                                  _fail(n_21);
                                else
                                  m_21 = n_21;
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, term_l_19, (ATerm) ATinsert(ATempty, not_null(m_21)));
                                  t = post_extend_config_0(t);
                                }
                                t = term_n_25;
                                return(t);
                              }
                              ATerm w_5 (ATerm t)
                              {
                                t = term_z_25;
                                return(t);
                              }
                              t = ArgOption_3(t, u_5, v_5, w_5);
                              LocalPopChoice(y_25);
                            }
                          else
                            {
                              t = x_25;
                              {
                                ATerm b_26 = t;
                                int d_26 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm x_5 (ATerm t)
                                    {
                                      ATerm o_21 = NULL;
                                      o_21 = t;
                                      m_19 :
                                      if(!(match_string(o_21, "-CI")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm y_5 (ATerm t)
                                    {
                                      ATerm p_21 = NULL;
                                      ATerm q_21 = NULL;
                                      q_21 = t;
                                      if(((p_21 != NULL) && (p_21 != q_21)))
                                        _fail(q_21);
                                      else
                                        p_21 = q_21;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, term_r_17, (ATerm) ATinsert(ATempty, not_null(p_21)));
                                        t = extend_config_0(t);
                                      }
                                      t = term_n_25;
                                      return(t);
                                    }
                                    ATerm f_6 (ATerm t)
                                    {
                                      t = term_e_26;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, x_5, y_5, f_6);
                                    LocalPopChoice(d_26);
                                  }
                                else
                                  {
                                    t = b_26;
                                    {
                                      ATerm f_26 = t;
                                      int g_26 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm g_6 (ATerm t)
                                          {
                                            ATerm r_21 = NULL;
                                            r_21 = t;
                                            o_19 :
                                            if(!(match_string(r_21, "-CL")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm h_6 (ATerm t)
                                          {
                                            ATerm s_21 = NULL;
                                            ATerm t_21 = NULL;
                                            t_21 = t;
                                            if(((s_21 != NULL) && (s_21 != t_21)))
                                              _fail(t_21);
                                            else
                                              s_21 = t_21;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, term_y_16, (ATerm) ATinsert(ATempty, not_null(s_21)));
                                              t = extend_config_0(t);
                                            }
                                            t = term_n_25;
                                            return(t);
                                          }
                                          ATerm i_6 (ATerm t)
                                          {
                                            t = term_h_26;
                                            return(t);
                                          }
                                          t = ArgOption_3(t, g_6, h_6, i_6);
                                          LocalPopChoice(g_26);
                                        }
                                      else
                                        {
                                          t = f_26;
                                          {
                                            ATerm j_26 = t;
                                            int k_26 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm l_6 (ATerm t)
                                                {
                                                  ATerm u_21 = NULL;
                                                  u_21 = t;
                                                  q_19 :
                                                  if(!(match_string(u_21, "-CC")))
                                                    {
                                                      _fail(t);
                                                    }
                                                  return(t);
                                                }
                                                ATerm m_6 (ATerm t)
                                                {
                                                  t = term_m_26;
                                                  t = set_config_0(t);
                                                  t = term_n_26;
                                                  return(t);
                                                }
                                                ATerm n_6 (ATerm t)
                                                {
                                                  t = term_o_26;
                                                  return(t);
                                                }
                                                t = Option_3(t, l_6, m_6, n_6);
                                                LocalPopChoice(k_26);
                                              }
                                            else
                                              {
                                                t = j_26;
                                                {
                                                  ATerm p_26 = t;
                                                  int q_26 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm o_6 (ATerm t)
                                                      {
                                                        ATerm v_21 = NULL;
                                                        v_21 = t;
                                                        r_19 :
                                                        if(!(match_string(v_21, "--ast")))
                                                          {
                                                            _fail(t);
                                                          }
                                                        return(t);
                                                      }
                                                      ATerm p_6 (ATerm t)
                                                      {
                                                        t = term_r_26;
                                                        t = set_config_0(t);
                                                        t = term_s_26;
                                                        return(t);
                                                      }
                                                      ATerm y_6 (ATerm t)
                                                      {
                                                        t = term_t_26;
                                                        return(t);
                                                      }
                                                      t = Option_3(t, o_6, p_6, y_6);
                                                      LocalPopChoice(q_26);
                                                    }
                                                  else
                                                    {
                                                      t = p_26;
                                                      {
                                                        ATerm u_26 = t;
                                                        int v_26 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm z_6 (ATerm t)
                                                            {
                                                              ATerm w_21 = NULL;
                                                              w_21 = t;
                                                              s_19 :
                                                              if(!(match_string(w_21, "-F")))
                                                                {
                                                                  _fail(t);
                                                                }
                                                              return(t);
                                                            }
                                                            ATerm a_7 (ATerm t)
                                                            {
                                                              t = term_w_26;
                                                              t = set_config_0(t);
                                                              t = term_x_26;
                                                              return(t);
                                                            }
                                                            ATerm b_7 (ATerm t)
                                                            {
                                                              t = term_y_26;
                                                              return(t);
                                                            }
                                                            t = Option_3(t, z_6, a_7, b_7);
                                                            LocalPopChoice(v_26);
                                                          }
                                                        else
                                                          {
                                                            t = u_26;
                                                            {
                                                              ATerm z_26 = t;
                                                              int b_27 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm c_7 (ATerm t)
                                                                  {
                                                                    ATerm x_21 = NULL;
                                                                    x_21 = t;
                                                                    t_19 :
                                                                    if(!(match_string(x_21, "--norm")))
                                                                      {
                                                                        _fail(t);
                                                                      }
                                                                    return(t);
                                                                  }
                                                                  ATerm h_7 (ATerm t)
                                                                  {
                                                                    t = term_f_27;
                                                                    t = set_config_0(t);
                                                                    t = term_g_27;
                                                                    return(t);
                                                                  }
                                                                  ATerm i_7 (ATerm t)
                                                                  {
                                                                    t = term_k_27;
                                                                    return(t);
                                                                  }
                                                                  t = Option_3(t, c_7, h_7, i_7);
                                                                  LocalPopChoice(b_27);
                                                                }
                                                              else
                                                                {
                                                                  t = z_26;
                                                                  {
                                                                    ATerm n_27 = t;
                                                                    int o_27 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm j_7 (ATerm t)
                                                                        {
                                                                          ATerm y_21 = NULL;
                                                                          y_21 = t;
                                                                          u_19 :
                                                                          if(!(match_string(y_21, "--fusion")))
                                                                            {
                                                                              _fail(t);
                                                                            }
                                                                          return(t);
                                                                        }
                                                                        ATerm k_7 (ATerm t)
                                                                        {
                                                                          t = term_q_27;
                                                                          t = toggle_config_0(t);
                                                                          t = term_r_27;
                                                                          return(t);
                                                                        }
                                                                        ATerm m_7 (ATerm t)
                                                                        {
                                                                          t = term_s_27;
                                                                          return(t);
                                                                        }
                                                                        t = Option_3(t, j_7, k_7, m_7);
                                                                        LocalPopChoice(o_27);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = n_27;
                                                                        {
                                                                          ATerm t_27 = t;
                                                                          int w_27 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              ATerm n_7 (ATerm t)
                                                                              {
                                                                                ATerm z_21 = NULL;
                                                                                z_21 = t;
                                                                                v_19 :
                                                                                if(!(match_string(z_21, "--trace-all")))
                                                                                  {
                                                                                    _fail(t);
                                                                                  }
                                                                                return(t);
                                                                              }
                                                                              ATerm o_7 (ATerm t)
                                                                              {
                                                                                t = term_y_27;
                                                                                t = set_config_0(t);
                                                                                t = term_z_27;
                                                                                return(t);
                                                                              }
                                                                              ATerm v_7 (ATerm t)
                                                                              {
                                                                                t = term_a_28;
                                                                                return(t);
                                                                              }
                                                                              t = Option_3(t, n_7, o_7, v_7);
                                                                              LocalPopChoice(w_27);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = t_27;
                                                                              {
                                                                                ATerm b_28 = t;
                                                                                int c_28 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm w_7 (ATerm t)
                                                                                    {
                                                                                      ATerm a_22 = NULL;
                                                                                      a_22 = t;
                                                                                      w_19 :
                                                                                      if(!(match_string(a_22, "-t")))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm x_7 (ATerm t)
                                                                                    {
                                                                                      ATerm d_22 = NULL;
                                                                                      ATerm d_28;
                                                                                      d_28 = t;
                                                                                      {
                                                                                        ATerm b_22 = NULL;
                                                                                        ATerm c_22 = NULL;
                                                                                        c_22 = t;
                                                                                        if(((b_22 != NULL) && (b_22 != c_22)))
                                                                                          _fail(c_22);
                                                                                        else
                                                                                          b_22 = c_22;
                                                                                        {
                                                                                          t = (ATerm) ATmakeAppl(sym__2, term_e_28, (ATerm) ATinsert(ATempty, not_null(b_22)));
                                                                                          t = extend_config_0(t);
                                                                                        }
                                                                                      }
                                                                                      t = d_28;
                                                                                      {
                                                                                        d_22 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Trace_1, not_null(d_22));
                                                                                      }
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm y_7 (ATerm t)
                                                                                    {
                                                                                      t = term_f_28;
                                                                                      return(t);
                                                                                    }
                                                                                    t = ArgOption_3(t, w_7, x_7, y_7);
                                                                                    LocalPopChoice(c_28);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = b_28;
                                                                                    {
                                                                                      ATerm k_28 = t;
                                                                                      int l_28 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm z_7 (ATerm t)
                                                                                          {
                                                                                            ATerm f_22 = NULL;
                                                                                            f_22 = t;
                                                                                            z_19 :
                                                                                            if(!(match_string(f_22, "--verbose")))
                                                                                              {
                                                                                                _fail(t);
                                                                                              }
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm a_8 (ATerm t)
                                                                                          {
                                                                                            t = term_m_28;
                                                                                            t = set_config_0(t);
                                                                                            t = term_n_28;
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm f_8 (ATerm t)
                                                                                          {
                                                                                            t = term_s_28;
                                                                                            return(t);
                                                                                          }
                                                                                          t = Option_3(t, z_7, a_8, f_8);
                                                                                          LocalPopChoice(l_28);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = k_28;
                                                                                          {
                                                                                            ATerm t_28 = t;
                                                                                            int u_28 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm g_8 (ATerm t)
                                                                                                {
                                                                                                  ATerm g_22 = NULL;
                                                                                                  g_22 = t;
                                                                                                  a_20 :
                                                                                                  if(!(match_string(g_22, "-S")))
                                                                                                    {
                                                                                                      if(!(match_string(g_22, "--silent")))
                                                                                                        {
                                                                                                          _fail(t);
                                                                                                        }
                                                                                                    }
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm h_8 (ATerm t)
                                                                                                {
                                                                                                  t = term_v_28;
                                                                                                  t = set_config_0(t);
                                                                                                  t = term_w_28;
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm i_8 (ATerm t)
                                                                                                {
                                                                                                  t = term_c_29;
                                                                                                  return(t);
                                                                                                }
                                                                                                t = Option_3(t, g_8, h_8, i_8);
                                                                                                LocalPopChoice(u_28);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = t_28;
                                                                                                {
                                                                                                  ATerm d_29 = t;
                                                                                                  int e_29 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      ATerm p_8 (ATerm t)
                                                                                                      {
                                                                                                        ATerm h_22 = NULL;
                                                                                                        h_22 = t;
                                                                                                        b_20 :
                                                                                                        if(!(match_string(h_22, "-h")))
                                                                                                          {
                                                                                                            if(!(match_string(h_22, "--help")))
                                                                                                              {
                                                                                                                _fail(t);
                                                                                                              }
                                                                                                          }
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm q_8 (ATerm t)
                                                                                                      {
                                                                                                        t = term_i_29;
                                                                                                        t = set_config_0(t);
                                                                                                        t = term_j_29;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm r_8 (ATerm t)
                                                                                                      {
                                                                                                        t = term_k_29;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      t = Option_3(t, p_8, q_8, r_8);
                                                                                                      LocalPopChoice(e_29);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = d_29;
                                                                                                      {
                                                                                                        ATerm l_29 = t;
                                                                                                        int m_29 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm s_8 (ATerm t)
                                                                                                            {
                                                                                                              ATerm i_22 = NULL;
                                                                                                              i_22 = t;
                                                                                                              c_20 :
                                                                                                              if(!(match_string(i_22, "--man")))
                                                                                                                {
                                                                                                                  _fail(t);
                                                                                                                }
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm t_8 (ATerm t)
                                                                                                            {
                                                                                                              t = term_o_29;
                                                                                                              t = set_config_0(t);
                                                                                                              t = term_p_29;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm u_8 (ATerm t)
                                                                                                            {
                                                                                                              t = term_q_29;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            t = Option_3(t, s_8, t_8, u_8);
                                                                                                            LocalPopChoice(m_29);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = l_29;
                                                                                                            {
                                                                                                              ATerm z_8 (ATerm t)
                                                                                                              {
                                                                                                                ATerm j_22 = NULL;
                                                                                                                j_22 = t;
                                                                                                                d_20 :
                                                                                                                if(!(match_string(j_22, "-v")))
                                                                                                                  {
                                                                                                                    if(!(match_string(j_22, "--version")))
                                                                                                                      {
                                                                                                                        _fail(t);
                                                                                                                      }
                                                                                                                  }
                                                                                                                return(t);
                                                                                                              }
                                                                                                              ATerm a_9 (ATerm t)
                                                                                                              {
                                                                                                                t = term_s_29;
                                                                                                                t = set_config_0(t);
                                                                                                                t = term_t_29;
                                                                                                                return(t);
                                                                                                              }
                                                                                                              ATerm b_9 (ATerm t)
                                                                                                              {
                                                                                                                t = term_w_29;
                                                                                                                return(t);
                                                                                                              }
                                                                                                              t = Option_3(t, z_8, a_9, b_9);
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm x_22 = NULL;
  x_22 = t;
  t = SSL_table_destroy(not_null(x_22));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_0 (ATerm))
{
  ATerm b_23 = NULL;
  ATerm c_23 = NULL;
  t = k_0(t);
  {
    c_23 = t;
    if(((b_23 != NULL) && (b_23 != c_23)))
      _fail(c_23);
    else
      b_23 = c_23;
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_30), term_p_30), term_m_30), term_l_30), term_x_29), term_g_30), term_x_29), term_x_29), term_f_30), term_x_29), term_e_30), term_d_30), term_x_29), term_c_30), term_b_30), not_null(b_23)), term_a_30), term_z_29), term_x_29), term_y_29), term_x_29);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm k_23 = NULL,l_23 = NULL,m_23 = NULL;
  m_23 = t;
  j_23 :
  if(((ATgetType(m_23) == AT_LIST) && ((ATermList) m_23 != ATempty)))
    {
      k_23 = ATgetFirst((ATermList) m_23);
      l_23 = (ATerm) ATgetNext((ATermList) m_23);
      {
        ATerm p_23 = NULL;
        t = not_null(l_23);
        {
          ATerm r_30;
          r_30 = t;
          {
            ATerm q_23 = NULL,s_23 = NULL,u_23 = NULL;
            ATerm u_30;
            u_30 = t;
            {
              ATerm r_23 = NULL;
              t = j_0(t);
              {
                r_23 = t;
                if(((q_23 != NULL) && (q_23 != r_23)))
                  _fail(r_23);
                else
                  q_23 = r_23;
              }
            }
            t = u_30;
            {
              ATerm t_23 = NULL;
              t = not_null(k_23);
              {
                t = i_0(t);
                {
                  t_23 = t;
                  if(((s_23 != NULL) && (s_23 != t_23)))
                    _fail(t_23);
                  else
                    s_23 = t_23;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(q_23)), not_null(s_23));
                {
                  u_23 = t;
                  if(((p_23 != NULL) && (p_23 != u_23)))
                    _fail(u_23);
                  else
                    p_23 = u_23;
                }
              }
            }
          }
          t = r_30;
          {
            ATerm c_9 (ATerm t)
            {
              t = not_null(p_23);
              return(t);
            }
            t = reverse_acc_2(t, i_0, c_9);
          }
        }
      }
    }
  else
    {
      if(((ATermList) m_23 == ATempty))
        {
          {
            t = term_q_22;
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
  ATerm d_9 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, d_9);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm f_0 (ATerm))
{
  ATerm b_24 = NULL;
  ATerm c_24 = NULL;
  t = term_q_22;
  {
    t = f_0(t);
    {
      c_24 = t;
      if(((b_24 != NULL) && (b_24 != c_24)))
        _fail(c_24);
      else
        b_24 = c_24;
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_30), not_null(b_24)), term_v_30);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm l_57 (ATerm))
{
  ATerm v_24 = NULL,w_24 = NULL;
  v_24 = t;
  q_24 :
  if(match_cons(v_24, sym_Program_1))
    {
      w_24 = ATgetArgument(v_24, 0);
      {
        ATerm c_25 = NULL,e_25 = NULL;
        ATerm d_25 = NULL;
        t = SSLgetAnnotations(not_null(v_24));
        {
          d_25 = t;
          if(((c_25 != NULL) && (c_25 != d_25)))
            _fail(d_25);
          else
            c_25 = d_25;
        }
        {
          t = not_null(w_24);
          {
            ATerm g_25 = NULL;
            t = l_57(t);
            {
              e_25 = t;
              {
                ATerm h_25 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(e_25)), not_null(c_25));
                {
                  h_25 = t;
                  if(((g_25 != NULL) && (g_25 != h_25)))
                    _fail(h_25);
                  else
                    g_25 = h_25;
                }
                t = not_null(g_25);
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
  ATerm q_25 = NULL;
  ATerm e_9 (ATerm t)
  {
    ATerm f_9 (ATerm t)
    {
      ATerm r_25 = NULL;
      r_25 = t;
      if(((q_25 != NULL) && (q_25 != r_25)))
        _fail(r_25);
      else
        q_25 = r_25;
      return(t);
    }
    t = Program_1(t, f_9);
    return(t);
  }
  t = option_defined_1(t, e_9);
  {
    ATerm g_9 (ATerm t)
    {
      ATerm v_25 = NULL;
      ATerm w_25 = NULL;
      t = term_q_22;
      {
        ATerm v_9 (ATerm t)
        {
          t = not_null(q_25);
          return(t);
        }
        t = short_description_1(t, v_9);
        {
          t = concat_strings_0(t);
          {
            w_25 = t;
            if(((v_25 != NULL) && (v_25 != w_25)))
              _fail(w_25);
            else
              v_25 = w_25;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_17, (ATerm) ATinsert(ATempty, not_null(v_25)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, g_9);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_17, (ATerm) ATinsert(ATempty, term_a_31));
      {
        t = printnl_0(t);
        {
          t = term_e_31;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm w_9 (ATerm t)
                {
                  ATerm a_26 = NULL;
                  a_26 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_b_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_26)), term_f_31));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, w_9);
                {
                  ATerm x_9 (ATerm t)
                  {
                    ATerm c_26 = NULL;
                    ATerm i_26 = NULL;
                    t = term_q_22;
                    {
                      ATerm y_9 (ATerm t)
                      {
                        t = not_null(q_25);
                        return(t);
                      }
                      t = long_description_1(t, y_9);
                      {
                        t = concat_strings_0(t);
                        {
                          i_26 = t;
                          if(((c_26 != NULL) && (c_26 != i_26)))
                            _fail(i_26);
                          else
                            c_26 = i_26;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_b_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_26)), term_g_31));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, x_9);
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
ATerm Undefined_1 (ATerm t, ATerm m_57 (ATerm))
{
  ATerm d_27 = NULL,e_27 = NULL;
  d_27 = t;
  a_27 :
  if(match_cons(d_27, sym_Undefined_1))
    {
      e_27 = ATgetArgument(d_27, 0);
      {
        ATerm h_27 = NULL,j_27 = NULL;
        ATerm i_27 = NULL;
        t = SSLgetAnnotations(not_null(d_27));
        {
          i_27 = t;
          if(((h_27 != NULL) && (h_27 != i_27)))
            _fail(i_27);
          else
            h_27 = i_27;
        }
        {
          t = not_null(e_27);
          {
            ATerm l_27 = NULL;
            t = m_57(t);
            {
              j_27 = t;
              {
                ATerm m_27 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(j_27)), not_null(h_27));
                {
                  m_27 = t;
                  if(((l_27 != NULL) && (l_27 != m_27)))
                    _fail(m_27);
                  else
                    l_27 = m_27;
                }
                t = not_null(l_27);
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
ATerm option_defined_1 (ATerm t, ATerm s_63 (ATerm))
{
  t = fetch_1(t, s_63);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm v_27 = NULL;
  v_27 = t;
  u_27 :
  if(match_cons(v_27, sym_Help_0))
    {
      ATerm g_28 = NULL,i_28 = NULL;
      ATerm i_31;
      i_31 = t;
      {
        ATerm h_28 = NULL;
        t = SSLgetAnnotations(not_null(v_27));
        {
          h_28 = t;
          if(((g_28 != NULL) && (g_28 != h_28)))
            _fail(h_28);
          else
            g_28 = h_28;
        }
      }
      t = i_31;
      {
        ATerm j_28 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(g_28));
        {
          j_28 = t;
          if(((i_28 != NULL) && (i_28 != j_28)))
            _fail(j_28);
          else
            i_28 = j_28;
        }
        t = not_null(i_28);
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
  ATerm p_28 = NULL,q_28 = NULL,r_28 = NULL;
  p_28 = t;
  o_28 :
  if(match_cons(p_28, sym__2))
    {
      q_28 = ATgetArgument(p_28, 0);
      r_28 = ATgetArgument(p_28, 1);
      t = SSL_table_get(not_null(q_28), not_null(r_28));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm y_28 = NULL,z_28 = NULL,a_29 = NULL,b_29 = NULL;
  y_28 = t;
  x_28 :
  if(match_cons(y_28, sym__3))
    {
      z_28 = ATgetArgument(y_28, 0);
      a_29 = ATgetArgument(y_28, 1);
      b_29 = ATgetArgument(y_28, 2);
      {
        ATerm j_31;
        j_31 = t;
        {
          ATerm f_29 = NULL;
          ATerm g_29 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_28), not_null(a_29));
          {
            ATerm k_31 = t;
            int l_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(l_31);
              }
            else
              {
                t = k_31;
                t = (ATerm) ATempty;
              }
            {
              g_29 = t;
              if(((f_29 != NULL) && (f_29 != g_29)))
                _fail(g_29);
              else
                f_29 = g_29;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(z_28), not_null(a_29), (ATerm) ATinsert(CheckATermList(not_null(f_29)), not_null(b_29)));
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
ATerm register_usage_1 (ATerm t, ATerm y_62 (ATerm))
{
  ATerm u_29 = NULL;
  ATerm v_29 = NULL;
  t = term_q_22;
  {
    t = y_62(t);
    {
      v_29 = t;
      if(((u_29 != NULL) && (u_29 != v_29)))
        _fail(v_29);
      else
        u_29 = v_29;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_b_31, term_d_31, not_null(u_29));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm i_30 = NULL,j_30 = NULL,k_30 = NULL;
  i_30 = t;
  h_30 :
  if(match_string(i_30, "register-usage-info"))
    {
      t = register_usage_1(t, e_0);
    }
  else
    {
      if(((ATgetType(i_30) == AT_LIST) && ((ATermList) i_30 != ATempty)))
        {
          j_30 = ATgetFirst((ATermList) i_30);
          k_30 = (ATerm) ATgetNext((ATermList) i_30);
          {
            ATerm n_30 = NULL;
            ATerm o_31;
            o_31 = t;
            {
              t = not_null(j_30);
              t = a_0(t);
            }
            t = o_31;
            {
              ATerm o_30 = NULL;
              t = term_q_22;
              {
                t = b_0(t);
                {
                  o_30 = t;
                  if(((n_30 != NULL) && (n_30 != o_30)))
                    _fail(o_30);
                  else
                    n_30 = o_30;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(k_30)), not_null(n_30));
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
  ATerm z_9 (ATerm t)
  {
    ATerm t_30 = NULL;
    t_30 = t;
    s_30 :
    if(!(match_string(t_30, "--help")))
      {
        if(!(match_string(t_30, "-h")))
          {
            if(!(match_string(t_30, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm a_10 (ATerm t)
  {
    t = term_j_29;
    return(t);
  }
  ATerm b_10 (ATerm t)
  {
    t = term_p_31;
    return(t);
  }
  t = Option_3(t, z_9, a_10, b_10);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm y_30 = NULL,z_30 = NULL,c_31 = NULL;
  y_30 = t;
  x_30 :
  if(((ATgetType(y_30) == AT_LIST) && ((ATermList) y_30 != ATempty)))
    {
      z_30 = ATgetFirst((ATermList) y_30);
      c_31 = (ATerm) ATgetNext((ATermList) y_30);
      t = (ATerm) ATinsert(CheckATermList(not_null(c_31)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(z_30)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm w_62 (ATerm))
{
  ATerm u_31;
  u_31 = t;
  {
    ATerm c_10 (ATerm t)
    {
      t = term_v_31;
      t = w_62(t);
      return(t);
    }
    t = try_1(t, c_10);
  }
  t = u_31;
  {
    ATerm l_10 (ATerm t)
    {
      ATerm h_31 = NULL;
      h_31 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(h_31));
      return(t);
    }
    ATerm m_10 (ATerm t)
    {
      ATerm w_31 = t;
      int x_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_31 = t;
          int z_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(z_31);
            }
          else
            {
              t = y_31;
              {
                t = w_62(t);
                t = Cons_2(t, _id, m_10);
              }
            }
          LocalPopChoice(x_31);
        }
      else
        {
          t = w_31;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, l_10, m_10);
  }
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm v_62 (ATerm))
{
  ATerm m_31 = NULL;
  ATerm a_32;
  a_32 = t;
  {
    t = term_b_32;
    t = table_put_0(t);
  }
  t = a_32;
  {
    ATerm n_10 (ATerm t)
    {
      ATerm g_32 = t;
      int h_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_62(t);
          LocalPopChoice(h_32);
        }
      else
        {
          t = g_32;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, n_10);
    {
      ATerm o_10 (ATerm t)
      {
        ATerm i_32 = t;
        int m_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_q_13;
                t = exit_0(t);
              }
            }
            LocalPopChoice(m_32);
          }
        else
          {
            t = i_32;
            {
              ATerm p_10 (ATerm t)
              {
                ATerm q_10 (ATerm t)
                {
                  ATerm n_31 = NULL;
                  n_31 = t;
                  if(((m_31 != NULL) && (m_31 != n_31)))
                    _fail(n_31);
                  else
                    m_31 = n_31;
                  return(t);
                }
                t = Undefined_1(t, q_10);
                return(t);
              }
              t = option_defined_1(t, p_10);
              {
                ATerm o_32;
                o_32 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_b_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_31)), term_r_32));
                  t = printnl_0(t);
                }
                t = o_32;
                {
                  t = system_usage_0(t);
                  {
                    t = term_e_24;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, o_10);
      {
        ATerm s_32;
        s_32 = t;
        {
          t = term_b_31;
          t = table_destroy_0(t);
        }
        t = s_32;
      }
    }
  }
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL;
  r_31 = t;
  q_31 :
  if(match_cons(r_31, sym__2))
    {
      s_31 = ATgetArgument(r_31, 0);
      t_31 = ATgetArgument(r_31, 1);
      {
        t = not_null(s_31);
        {
          ATerm r_10 (ATerm t)
          {
            t = not_null(t_31);
            return(t);
          }
          t = at_end_1(t, r_10);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm v_46 (ATerm), ATerm w_46 (ATerm))
{
  ATerm d_32 = NULL,e_32 = NULL,f_32 = NULL;
  d_32 = t;
  c_32 :
  if(match_cons(d_32, sym__2))
    {
      e_32 = ATgetArgument(d_32, 0);
      f_32 = ATgetArgument(d_32, 1);
      {
        ATerm j_32 = NULL,l_32 = NULL;
        ATerm k_32 = NULL;
        t = SSLgetAnnotations(not_null(d_32));
        {
          k_32 = t;
          if(((j_32 != NULL) && (j_32 != k_32)))
            _fail(k_32);
          else
            j_32 = k_32;
        }
        {
          t = not_null(e_32);
          {
            ATerm n_32 = NULL;
            t = v_46(t);
            {
              l_32 = t;
              {
                t = not_null(f_32);
                {
                  ATerm p_32 = NULL;
                  t = w_46(t);
                  {
                    n_32 = t;
                    {
                      ATerm q_32 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(l_32), not_null(n_32)), not_null(j_32));
                      {
                        q_32 = t;
                        if(((p_32 != NULL) && (p_32 != q_32)))
                          _fail(q_32);
                        else
                          p_32 = q_32;
                      }
                      t = not_null(p_32);
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
ATerm at_suffix_1 (ATerm t, ATerm r_74 (ATerm))
{
  ATerm w_32 (ATerm t)
  {
    ATerm t_32 = t;
    int u_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_74(t);
        LocalPopChoice(u_32);
      }
    else
      {
        t = t_32;
        t = Cons_2(t, _id, w_32);
      }
    return(t);
  }
  t = w_32(t);
  return(t);
}
ATerm has_extension_1 (ATerm t, ATerm p_66 (ATerm))
{
  ATerm z_32 = NULL;
  ATerm v_32;
  v_32 = t;
  {
    ATerm a_33 = NULL;
    t = p_66(t);
    {
      t = explode_string_0(t);
      {
        a_33 = t;
        if(((z_32 != NULL) && (z_32 != a_33)))
          _fail(a_33);
        else
          z_32 = a_33;
      }
    }
  }
  t = v_32;
  {
    ATerm x_32;
    x_32 = t;
    {
      t = explode_string_0(t);
      {
        ATerm s_10 (ATerm t)
        {
          ATerm b_33 = NULL;
          b_33 = t;
          if(((z_32 != NULL) && (z_32 != b_33)))
            _fail(b_33);
          else
            z_32 = b_33;
          return(t);
        }
        t = at_suffix_1(t, s_10);
      }
    }
    t = x_32;
  }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm x_67 (ATerm))
{
  ATerm y_32 = t;
  int c_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(c_33);
    }
  else
    {
      t = y_32;
      {
        ATerm d_33 = t;
        int e_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_10 (ATerm t)
            {
              t = filter_1(t, x_67);
              return(t);
            }
            t = Cons_2(t, x_67, t_10);
            LocalPopChoice(e_33);
          }
        else
          {
            t = d_33;
            {
              ATerm g_33 = NULL,h_33 = NULL,i_33 = NULL;
              g_33 = t;
              f_33 :
              if(((ATgetType(g_33) == AT_LIST) && ((ATermList) g_33 != ATempty)))
                {
                  h_33 = ATgetFirst((ATermList) g_33);
                  i_33 = (ATerm) ATgetNext((ATermList) g_33);
                  {
                    t = not_null(i_33);
                    t = filter_1(t, x_67);
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
ATerm readdir_0 (ATerm t)
{
  ATerm m_33 = NULL;
  m_33 = t;
  t = SSL_ReadDir(not_null(m_33));
  return(t);
}
ATerm find_plugins_2 (ATerm t, ATerm q_58 (ATerm), ATerm r_58 (ATerm))
{
  t = q_58(t);
  {
    ATerm u_10 (ATerm t)
    {
      ATerm u_33 = NULL;
      u_33 = t;
      {
        t = readdir_0(t);
        {
          ATerm f_11 (ATerm t)
          {
            ATerm w_33 = NULL;
            t = has_extension_1(t, r_58);
            {
              ATerm x_33 = NULL;
              x_33 = t;
              if(((w_33 != NULL) && (w_33 != x_33)))
                _fail(x_33);
              else
                w_33 = x_33;
              {
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(w_33)), term_j_33), not_null(u_33));
                t = concat_strings_0(t);
              }
            }
            return(t);
          }
          t = filter_1(t, f_11);
        }
      }
      return(t);
    }
    t = filter_1(t, u_10);
    t = concat_0(t);
  }
  return(t);
}
ATerm import_config_files_1 (ATerm t, ATerm t_58 (ATerm))
{
  ATerm k_33;
  k_33 = t;
  {
    t = t_58(t);
    {
      ATerm g_11 (ATerm t)
      {
        ATerm b_34 = NULL;
        ATerm h_11 (ATerm t)
        {
          t = term_l_33;
          return(t);
        }
        t = debug_1(t, h_11);
        {
          t = ReadFromFile_0(t);
          {
            ATerm c_34 = NULL;
            c_34 = t;
            if(((b_34 != NULL) && (b_34 != c_34)))
              _fail(c_34);
            else
              b_34 = c_34;
            {
              t = (ATerm) ATmakeAppl(sym__2, term_a_16, not_null(b_34));
              t = table_putlist_0(t);
            }
          }
        }
        return(t);
      }
      t = map_1(t, g_11);
    }
  }
  t = k_33;
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm g_34 = NULL;
  ATerm i_34 = NULL;
  g_34 = t;
  {
    ATerm n_33;
    n_33 = t;
    {
      ATerm j_34 = NULL;
      t = term_o_33;
      {
        j_34 = t;
        if(((i_34 != NULL) && (i_34 != j_34)))
          _fail(j_34);
        else
          i_34 = j_34;
      }
    }
    t = n_33;
    {
      t = SSL_open_file(not_null(g_34), not_null(i_34));
      t = SSL_close_file(not_null(g_34));
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm n_74 (ATerm))
{
  ATerm m_34 (ATerm t)
  {
    ATerm p_33 = t;
    int q_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, m_34);
        LocalPopChoice(q_33);
      }
    else
      {
        t = p_33;
        {
          t = Nil_0(t);
          t = n_74(t);
        }
      }
    return(t);
  }
  t = m_34(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm r_33 = t;
  int s_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(s_33);
    }
  else
    {
      t = r_33;
      {
        ATerm p_34 = NULL,q_34 = NULL,r_34 = NULL;
        p_34 = t;
        o_34 :
        if(((ATgetType(p_34) == AT_LIST) && ((ATermList) p_34 != ATempty)))
          {
            q_34 = ATgetFirst((ATermList) p_34);
            r_34 = (ATerm) ATgetNext((ATermList) p_34);
            {
              t = not_null(q_34);
              {
                ATerm i_11 (ATerm t)
                {
                  t = not_null(r_34);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, i_11);
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
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  {
    t = concat_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm h_74 (ATerm))
{
  ATerm w_34 (ATerm t)
  {
    ATerm t_33 = t;
    int v_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, h_74, _id);
        LocalPopChoice(v_33);
      }
    else
      {
        t = t_33;
        t = Cons_2(t, _id, w_34);
      }
    return(t);
  }
  t = w_34(t);
  return(t);
}
ATerm fetch_elem_1 (ATerm t, ATerm j_74 (ATerm))
{
  ATerm y_34 = NULL;
  ATerm j_11 (ATerm t)
  {
    ATerm z_34 = NULL;
    t = j_74(t);
    {
      z_34 = t;
      if(((y_34 != NULL) && (y_34 != z_34)))
        _fail(z_34);
      else
        y_34 = z_34;
    }
    return(t);
  }
  t = fetch_1(t, j_11);
  t = not_null(y_34);
  return(t);
}
ATerm find_config_file_2 (ATerm t, ATerm i_58 (ATerm), ATerm j_58 (ATerm))
{
  ATerm y_33 = t;
  int z_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_58(t);
      {
        ATerm k_11 (ATerm t)
        {
          ATerm e_35 = NULL,g_35 = NULL;
          ATerm a_34;
          a_34 = t;
          {
            ATerm f_35 = NULL;
            f_35 = t;
            if(((e_35 != NULL) && (e_35 != f_35)))
              _fail(f_35);
            else
              e_35 = f_35;
          }
          t = a_34;
          {
            ATerm h_35 = NULL;
            t = j_58(t);
            {
              h_35 = t;
              if(((g_35 != NULL) && (g_35 != h_35)))
                _fail(h_35);
              else
                g_35 = h_35;
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(g_35)), term_j_33), not_null(e_35));
              {
                t = concat_strings_0(t);
                t = file_exists_0(t);
              }
            }
          }
          return(t);
        }
        t = fetch_elem_1(t, k_11);
      }
      LocalPopChoice(z_33);
    }
  else
    {
      t = y_33;
      {
        t = term_d_34;
        {
          t = debug_1(t, j_58);
          _fail(t);
        }
      }
    }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm m_35 = NULL,n_35 = NULL,o_35 = NULL;
  ATerm e_34;
  e_34 = t;
  {
    ATerm p_35 = NULL,q_35 = NULL,r_35 = NULL,s_35 = NULL;
    p_35 = t;
    l_35 :
    if(match_cons(p_35, sym__3))
      {
        q_35 = ATgetArgument(p_35, 0);
        r_35 = ATgetArgument(p_35, 1);
        s_35 = ATgetArgument(p_35, 2);
        {
          if(((m_35 != NULL) && (m_35 != q_35)))
            _fail(q_35);
          else
            m_35 = q_35;
          {
            if(((n_35 != NULL) && (n_35 != r_35)))
              _fail(r_35);
            else
              n_35 = r_35;
            {
              if(((o_35 != NULL) && (o_35 != s_35)))
                _fail(s_35);
              else
                o_35 = s_35;
              t = SSL_table_put(not_null(m_35), not_null(n_35), not_null(o_35));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = e_34;
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm y_35 = NULL;
  y_35 = t;
  x_35 :
  if(((ATermList) y_35 == ATempty))
    {
      {
        ATerm a_36 = NULL,c_36 = NULL;
        ATerm f_34;
        f_34 = t;
        {
          ATerm b_36 = NULL;
          t = SSLgetAnnotations(not_null(y_35));
          {
            b_36 = t;
            if(((a_36 != NULL) && (a_36 != b_36)))
              _fail(b_36);
            else
              a_36 = b_36;
          }
        }
        t = f_34;
        {
          ATerm d_36 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(a_36));
          {
            d_36 = t;
            if(((c_36 != NULL) && (c_36 != d_36)))
              _fail(d_36);
            else
              c_36 = d_36;
          }
          t = not_null(c_36);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm map_1 (ATerm t, ATerm z_73 (ATerm))
{
  ATerm h_36 (ATerm t)
  {
    ATerm h_34 = t;
    int k_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(k_34);
      }
    else
      {
        t = h_34;
        t = Cons_2(t, z_73, h_36);
      }
    return(t);
  }
  t = h_36(t);
  return(t);
}
ATerm table_putlist_0 (ATerm t)
{
  ATerm m_36 = NULL,n_36 = NULL,o_36 = NULL;
  m_36 = t;
  l_36 :
  if(match_cons(m_36, sym__2))
    {
      n_36 = ATgetArgument(m_36, 0);
      o_36 = ATgetArgument(m_36, 1);
      {
        t = not_null(o_36);
        {
          ATerm n_11 (ATerm t)
          {
            ATerm r_36 = NULL,s_36 = NULL,t_36 = NULL;
            r_36 = t;
            k_36 :
            if(match_cons(r_36, sym__2))
              {
                s_36 = ATgetArgument(r_36, 0);
                t_36 = ATgetArgument(r_36, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(n_36), not_null(s_36), not_null(t_36));
                  t = table_put_0(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, n_11);
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
  ATerm z_36 = NULL;
  z_36 = t;
  t = SSL_ReadFromFile(not_null(z_36));
  return(t);
}
ATerm debug_1 (ATerm t, ATerm d_65 (ATerm))
{
  ATerm l_34;
  l_34 = t;
  {
    ATerm e_37 = NULL,g_37 = NULL;
    ATerm n_34;
    n_34 = t;
    {
      ATerm f_37 = NULL;
      t = d_65(t);
      {
        f_37 = t;
        if(((e_37 != NULL) && (e_37 != f_37)))
          _fail(f_37);
        else
          e_37 = f_37;
      }
    }
    t = n_34;
    {
      ATerm h_37 = NULL;
      h_37 = t;
      if(((g_37 != NULL) && (g_37 != h_37)))
        _fail(h_37);
      else
        g_37 = h_37;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_37)), not_null(e_37)));
        t = printnl_0(t);
      }
    }
  }
  t = l_34;
  return(t);
}
ATerm import_config_file_1 (ATerm t, ATerm s_58 (ATerm))
{
  ATerm s_34;
  s_34 = t;
  {
    ATerm l_37 = NULL;
    t = s_58(t);
    {
      ATerm o_11 (ATerm t)
      {
        t = term_l_33;
        return(t);
      }
      t = debug_1(t, o_11);
      {
        t = ReadFromFile_0(t);
        {
          ATerm m_37 = NULL;
          m_37 = t;
          if(((l_37 != NULL) && (l_37 != m_37)))
            _fail(m_37);
          else
            l_37 = m_37;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_a_16, not_null(l_37));
            t = table_putlist_0(t);
          }
        }
      }
    }
  }
  t = s_34;
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm p_37 = NULL;
  p_37 = t;
  t = SSL_implode_string(not_null(p_37));
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm t_37 = NULL;
  t_37 = t;
  t = SSL_explode_string(not_null(t_37));
  return(t);
}
ATerm get_path_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm t_34 = t;
    int u_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_37 (ATerm t)
        {
          ATerm v_34 = t;
          int x_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, y_37);
              LocalPopChoice(x_34);
            }
          else
            {
              t = v_34;
              {
                ATerm p_11 (ATerm t)
                {
                  ATerm x_37 = NULL;
                  x_37 = t;
                  w_37 :
                  if(!(match_int(x_37, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                ATerm u_11 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = Cons_2(t, p_11, u_11);
              }
            }
          return(t);
        }
        t = y_37(t);
        LocalPopChoice(u_34);
      }
    else
      {
        t = t_34;
        t = (ATerm) ATempty;
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm c_58 (ATerm), ATerm d_58 (ATerm))
{
  ATerm f_38 = NULL,g_38 = NULL,h_38 = NULL;
  f_38 = t;
  e_38 :
  if(((ATgetType(f_38) == AT_LIST) && ((ATermList) f_38 != ATempty)))
    {
      g_38 = ATgetFirst((ATermList) f_38);
      h_38 = (ATerm) ATgetNext((ATermList) f_38);
      {
        ATerm l_38 = NULL,p_38 = NULL;
        ATerm o_38 = NULL;
        t = SSLgetAnnotations(not_null(f_38));
        {
          o_38 = t;
          if(((l_38 != NULL) && (l_38 != o_38)))
            _fail(o_38);
          else
            l_38 = o_38;
        }
        {
          t = not_null(g_38);
          {
            ATerm r_38 = NULL;
            t = c_58(t);
            {
              p_38 = t;
              {
                t = not_null(h_38);
                {
                  ATerm t_38 = NULL;
                  t = d_58(t);
                  {
                    r_38 = t;
                    {
                      ATerm u_38 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(r_38)), not_null(p_38)), not_null(l_38));
                      {
                        u_38 = t;
                        if(((t_38 != NULL) && (t_38 != u_38)))
                          _fail(u_38);
                        else
                          t_38 = u_38;
                      }
                      t = not_null(t_38);
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
ATerm proto_sc_0 (ATerm t)
{
  ATerm i_39 = NULL,j_39 = NULL,k_39 = NULL;
  ATerm a_35 = t;
  int b_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_39 = NULL;
      ATerm c_35;
      c_35 = t;
      {
        ATerm v_11 (ATerm t)
        {
          ATerm l_39 = NULL;
          t = get_path_0(t);
          {
            l_39 = t;
            if(((i_39 != NULL) && (i_39 != l_39)))
              _fail(l_39);
            else
              i_39 = l_39;
          }
          return(t);
        }
        t = Cons_2(t, v_11, _id);
      }
      t = c_35;
      {
        ATerm d_35;
        d_35 = t;
        {
          ATerm m_39 = NULL;
          t = get_conf_pkgdatadir();
          {
            m_39 = t;
            if(((j_39 != NULL) && (j_39 != m_39)))
              _fail(m_39);
            else
              j_39 = m_39;
          }
        }
        t = d_35;
        {
          ATerm i_35;
          i_35 = t;
          {
            ATerm n_39 = NULL;
            t = get_conf_datadir();
            {
              n_39 = t;
              if(((k_39 != NULL) && (k_39 != n_39)))
                _fail(n_39);
              else
                k_39 = n_39;
            }
          }
          t = i_35;
          {
            ATerm w_11 (ATerm t)
            {
              ATerm x_11 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_39)), not_null(i_39));
                return(t);
              }
              ATerm c_12 (ATerm t)
              {
                t = term_j_35;
                return(t);
              }
              t = find_config_file_2(t, x_11, c_12);
              return(t);
            }
            t = import_config_file_1(t, w_11);
            {
              ATerm d_12 (ATerm t)
              {
                ATerm e_12 (ATerm t)
                {
                  ATerm o_39 = NULL;
                  ATerm p_39 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(k_39), term_k_35);
                  {
                    t = conc_strings_0(t);
                    {
                      p_39 = t;
                      if(((o_39 != NULL) && (o_39 != p_39)))
                        _fail(p_39);
                      else
                        o_39 = p_39;
                    }
                  }
                  t = (ATerm) ATinsert(ATempty, not_null(o_39));
                  return(t);
                }
                ATerm j_12 (ATerm t)
                {
                  t = term_t_35;
                  return(t);
                }
                t = find_plugins_2(t, e_12, j_12);
                return(t);
              }
              t = import_config_files_1(t, d_12);
              {
                t = parse_options_1(t, sc_options_0);
                {
                  ATerm k_12 (ATerm t)
                  {
                    ATerm q_39 = NULL;
                    t = term_n_29;
                    {
                      t = get_config_0(t);
                      {
                        ATerm r_39 = NULL;
                        t = term_u_35;
                        {
                          t = get_config_0(t);
                          {
                            r_39 = t;
                            if(((q_39 != NULL) && (q_39 != r_39)))
                              _fail(r_39);
                            else
                              q_39 = r_39;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_v_35, (ATerm) ATinsert(ATempty, not_null(q_39)));
                          {
                            t = call_0(t);
                            {
                              t = term_q_13;
                              t = exit_0(t);
                            }
                          }
                        }
                      }
                    }
                    return(t);
                  }
                  t = try_1(t, k_12);
                  {
                    ATerm l_12 (ATerm t)
                    {
                      t = term_r_29;
                      {
                        t = get_config_0(t);
                        {
                          t = sc_version_0(t);
                          {
                            t = term_q_13;
                            t = exit_0(t);
                          }
                        }
                      }
                      return(t);
                    }
                    t = try_1(t, l_12);
                    {
                      ATerm w_35 = t;
                      int z_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm s_39 = NULL;
                          ATerm t_39 = NULL;
                          t = term_g_23;
                          {
                            t = get_config_0(t);
                            {
                              t = basename_0(t);
                              {
                                t_39 = t;
                                if(((s_39 != NULL) && (s_39 != t_39)))
                                  _fail(t_39);
                                else
                                  s_39 = t_39;
                              }
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym__2, not_null(s_39), term_n_16);
                          LocalPopChoice(z_35);
                        }
                      else
                        {
                          t = w_35;
                          {
                            t = (ATerm) ATinsert(ATempty, term_e_36);
                            t = fatal_error_0(t);
                          }
                        }
                      {
                        t = sc_announce_0(t);
                        {
                          ATerm m_12 (ATerm t)
                          {
                            t = term_f_36;
                            return(t);
                          }
                          ATerm n_12 (ATerm t)
                          {
                            ATerm s_12 (ATerm t)
                            {
                              t = term_g_36;
                              return(t);
                            }
                            ATerm t_12 (ATerm t)
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
                            t = profile_2(t, s_12, t_12);
                            {
                              ATerm w_12 (ATerm t)
                              {
                                t = term_i_36;
                                return(t);
                              }
                              ATerm x_12 (ATerm t)
                              {
                                t = optimize1_0(t);
                                {
                                  ATerm y_12 (ATerm t)
                                  {
                                    ATerm j_36;
                                    j_36 = t;
                                    {
                                      ATerm p_36 = t;
                                      if((PushChoice() == 0))
                                        {
                                          t = term_p_27;
                                          t = get_config_0(t);
                                          PopChoice();
                                          _fail(t);
                                        }
                                      else
                                        {
                                          t = p_36;
                                        }
                                    }
                                    t = j_36;
                                    t = fusion_0(t);
                                    return(t);
                                  }
                                  t = try_1(t, y_12);
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
                              t = profile_2(t, w_12, x_12);
                              {
                                ATerm z_12 (ATerm t)
                                {
                                  t = term_q_36;
                                  return(t);
                                }
                                ATerm e_13 (ATerm t)
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
                                t = profile_2(t, z_12, e_13);
                                {
                                  ATerm f_13 (ATerm t)
                                  {
                                    t = term_u_36;
                                    return(t);
                                  }
                                  ATerm g_13 (ATerm t)
                                  {
                                    t = cc1_0(t);
                                    t = cc2_0(t);
                                    return(t);
                                  }
                                  t = profile_2(t, f_13, g_13);
                                }
                              }
                            }
                            return(t);
                          }
                          t = profile_2(t, m_12, n_12);
                          {
                            ATerm h_13 (ATerm t)
                            {
                              ATerm v_36 = t;
                              if((PushChoice() == 0))
                                {
                                  t = term_c_27;
                                  t = get_config_0(t);
                                  PopChoice();
                                  _fail(t);
                                }
                              else
                                {
                                  t = v_36;
                                }
                              t = remove_intermediates_0(t);
                              return(t);
                            }
                            t = try_1(t, h_13);
                            {
                              ATerm v_39 = NULL;
                              t = run_time_0(t);
                              {
                                v_39 = t;
                                if(((u_39 != NULL) && (u_39 != v_39)))
                                  _fail(v_39);
                                else
                                  u_39 = v_39;
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, term_b_17, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_36), not_null(u_39)), term_w_36));
                                {
                                  t = printnl_0(t);
                                  {
                                    t = term_q_13;
                                    t = exit_0(t);
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      LocalPopChoice(b_35);
    }
  else
    {
      t = a_35;
      {
        ATerm w_39 = NULL;
        ATerm x_39 = NULL;
        t = run_time_0(t);
        {
          x_39 = t;
          if(((w_39 != NULL) && (w_39 != x_39)))
            _fail(x_39);
          else
            w_39 = x_39;
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_b_17, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_36), not_null(w_39)), term_y_36));
          {
            t = printnl_0(t);
            {
              t = term_e_24;
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
  t = proto_sc_0(t);
  return(t);
}
