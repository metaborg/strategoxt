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
ATerm term_d_40;
ATerm term_y_39;
ATerm term_v_39;
ATerm term_u_39;
ATerm term_p_39;
ATerm term_n_39;
ATerm term_g_39;
ATerm term_f_39;
ATerm term_c_39;
ATerm term_b_39;
ATerm term_a_39;
ATerm term_g_38;
ATerm term_m_37;
ATerm term_k_37;
ATerm term_d_37;
ATerm term_o_36;
ATerm term_d_36;
ATerm term_s_35;
ATerm term_n_35;
ATerm term_l_35;
ATerm term_d_35;
ATerm term_c_35;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_t_34;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_m_34;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_h_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_a_34;
ATerm term_z_33;
ATerm term_y_33;
ATerm term_x_33;
ATerm term_w_33;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_t_33;
ATerm term_s_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_e_33;
ATerm term_z_32;
ATerm term_y_32;
ATerm term_w_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_k_31;
ATerm term_d_31;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_g_30;
ATerm term_c_30;
ATerm term_w_29;
ATerm term_q_29;
ATerm term_k_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_y_28;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_o_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_f_28;
ATerm term_c_28;
ATerm term_v_27;
ATerm term_s_27;
ATerm term_o_27;
ATerm term_j_27;
ATerm term_g_27;
ATerm term_a_27;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_a_26;
ATerm term_j_25;
ATerm term_h_25;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_r_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_h_23;
ATerm term_z_22;
ATerm term_v_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_k_22;
ATerm term_g_22;
ATerm term_x_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_z_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_k_18;
ATerm term_b_18;
ATerm term_y_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_u_15;
ATerm term_s_15;
ATerm term_q_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_b_15;
void init_constant_terms (void)
{
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("rm", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-f", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree1", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol(".s1", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".s2", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".s3", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".s4", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".s5", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".s6", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".s7", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".s8", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".s9", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".ac", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".c.abox", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".mtree", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".atree", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling C code", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("C.pp", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize2", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize1", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol(".sdefs", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to ", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("frontend", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to ", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-dep", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("The Stratego Compiler (version ", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i file            Main module to compile (required)\n", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f    Write output to f", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(sym_Ignore_0);
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d|--Include d   Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d\n", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(sym__2, term_p_18, term_x_21);
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(sym_CC_0);
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(sym__2, term_q_22, term_x_21);
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(sym_AST_0);
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(sym__2, term_z_20, term_x_21);
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(sym_FRONTEND_0);
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--norm", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(sym__2, term_g_29, term_x_21);
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(sym_NORM_0);
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--norm             Do not remove intermediate results", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(sym__2, term_s_20, term_x_21);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(sym_FUSION_0);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(sym__2, term_k_30, term_x_21);
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(sym_TraceAll_0);
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all        Instrument all definitions to print tracing information", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-t f               Instrument definition of f to print tracing information\n", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i       Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(sym__2, term_d_15, term_b_15);
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_15);
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-h", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(sym__2, term_w_32, term_x_21);
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(sym__2, term_l_33, term_x_21);
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(sym_Manual_0);
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(sym__2, term_p_33, term_x_21);
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version       Display program's version", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   \n", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   The Stratego Compiler translates Stratego specifications to C code\n", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   Typical usage:\n", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("     ", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i mod\n", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   to compile module mod\n", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   paradigm of rewriting strategies. For documentation see\n", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("                 http://www.stratego-language.org", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   Copyright (C) 1998-2002 Eelco Visser <visser@acm.org>\n", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   This program is free software; you can redistribute it and/or modify\n", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   it under the terms of the GNU General Public License as published by\n", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   the Free Software Foundation; either version 2, or (at your option)\n", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   any later version.\n", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(sym__2, term_t_34, term_u_34);
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(sym__3, term_t_34, term_u_34, (ATerm) ATempty);
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(ATmakeSymbol("importing: ", 0, ATtrue));
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("sc.config", 0, ATtrue));
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(ATmakeSymbol("/sc-plugins", 0, ATtrue));
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".plugin", 0, ATtrue));
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(ATmakeSymbol("manual", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(ATmakeSymbol("cat", 0, ATtrue));
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue));
}
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm z_71 (ATerm), ATerm a_72 (ATerm));
ATerm crush_2 (ATerm, ATerm r_73 (ATerm), ATerm s_73 (ATerm));
ATerm run_time_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm l_60 (ATerm));
ATerm rm_files_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm RZip2_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm genzip_4 (ATerm, ATerm b_76 (ATerm), ATerm c_76 (ATerm), ATerm d_76 (ATerm), ATerm e_76 (ATerm));
ATerm rzip_1 (ATerm, ATerm p_76 (ATerm));
ATerm remove_intermediates_0 (ATerm);
ATerm link_object_code_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm if_verbose3_1 (ATerm, ATerm m_60 (ATerm));
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm m_68 (ATerm));
ATerm c_to_object_code_0 (ATerm);
ATerm c_compile_0 (ATerm);
ATerm pipe_2 (ATerm, ATerm r_64 (ATerm), ATerm s_64 (ATerm));
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
ATerm pipe_3 (ATerm, ATerm t_64 (ATerm), ATerm u_64 (ATerm), ATerm v_64 (ATerm));
ATerm frontend_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm apply_to_file_1 (ATerm, ATerm i_65 (ATerm));
ATerm transform_file_2 (ATerm, ATerm g_65 (ATerm), ATerm h_65 (ATerm));
ATerm AddMain_1 (ATerm, ATerm a_87 (ATerm));
ATerm add_main_0 (ATerm);
ATerm output_ast_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm parse_0 (ATerm);
ATerm front_0 (ATerm);
ATerm compile_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm k_60 (ATerm));
ATerm ticks_to_seconds_0 (ATerm);
ATerm self_children_sys_time_0 (ATerm);
ATerm add_0 (ATerm);
ATerm self_children_user_time_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm diff_times_0 (ATerm);
ATerm times_0 (ATerm);
ATerm profile_p__2 (ATerm, ATerm g_68 (ATerm), ATerm h_68 (ATerm));
ATerm debug_1 (ATerm, ATerm l_68 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm sc_announce_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm basename_1 (ATerm, ATerm u_69 (ATerm));
ATerm basename_0 (ATerm);
ATerm sc_version_0 (ATerm);
ATerm try_1 (ATerm, ATerm j_86 (ATerm));
ATerm call_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm extend_config_0 (ATerm);
ATerm table_remove_0 (ATerm);
ATerm toggle_config_0 (ATerm);
ATerm post_extend_config_0 (ATerm);
ATerm sc_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_0 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm f_0 (ATerm));
ATerm Program_1 (ATerm, ATerm m_59 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm n_59 (ATerm));
ATerm option_defined_1 (ATerm, ATerm u_66 (ATerm));
ATerm Help_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm u_65 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm s_65 (ATerm));
ATerm parse_options_1 (ATerm, ATerm r_65 (ATerm));
ATerm conc_0 (ATerm);
ATerm _2 (ATerm, ATerm r_48 (ATerm), ATerm s_48 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm at_suffix_1 (ATerm, ATerm i_78 (ATerm));
ATerm has_extension_1 (ATerm, ATerm x_69 (ATerm));
ATerm filter_1 (ATerm, ATerm f_71 (ATerm));
ATerm readdir_0 (ATerm);
ATerm find_plugins_2 (ATerm, ATerm g_61 (ATerm), ATerm h_61 (ATerm));
ATerm import_config_files_1 (ATerm, ATerm j_61 (ATerm));
ATerm file_exists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm e_78 (ATerm));
ATerm concat_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm y_77 (ATerm));
ATerm fetch_elem_1 (ATerm, ATerm a_78 (ATerm));
ATerm find_config_file_2 (ATerm, ATerm y_60 (ATerm), ATerm z_60 (ATerm));
ATerm table_put_0 (ATerm);
ATerm Nil_0 (ATerm);
ATerm map_1 (ATerm, ATerm p_77 (ATerm));
ATerm table_putlist_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm import_config_file_1 (ATerm, ATerm i_61 (ATerm));
ATerm implode_string_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm get_path_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm e_60 (ATerm), ATerm f_60 (ATerm));
ATerm command_line_options_0 (ATerm);
ATerm sc_0 (ATerm);
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
        ATerm y_14;
        y_14 = t;
        t = SSL_printnl(not_null(v_1), not_null(w_1));
        t = y_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm z_71 (ATerm), ATerm a_72 (ATerm))
{
  ATerm z_14 = t;
  int a_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = z_71(t);
      LocalPopChoice(a_15);
    }
  else
    {
      t = z_14;
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
                t = foldr_2(t, z_71, a_72);
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
                t = a_72(t);
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
ATerm crush_2 (ATerm t, ATerm r_73 (ATerm), ATerm s_73 (ATerm))
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
      t = foldr_2(t, r_73, s_73);
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
      t = term_b_15;
      return(t);
    }
    t = crush_2(t, c_0, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm l_60 (ATerm))
{
  ATerm d_0 (ATerm t)
  {
    ATerm c_15;
    c_15 = t;
    {
      ATerm c_3 = NULL;
      ATerm d_3 = NULL;
      t = term_d_15;
      {
        t = get_config_0(t);
        {
          d_3 = t;
          if(((c_3 != NULL) && (c_3 != d_3)))
            _fail(d_3);
          else
            c_3 = d_3;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_3), term_e_15);
        t = geq_0(t);
      }
    }
    t = c_15;
    t = l_60(t);
    return(t);
  }
  t = try_1(t, d_0);
  return(t);
}
ATerm rm_files_0 (ATerm t)
{
  ATerm g_3 = NULL;
  g_3 = t;
  {
    ATerm f_15;
    f_15 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_15, (ATerm) ATinsert(CheckATermList(not_null(g_3)), term_h_15));
      t = call_0(t);
    }
    t = f_15;
  }
  return(t);
}
ATerm Zip3_0 (ATerm t)
{
  ATerm l_3 = NULL,m_3 = NULL,n_3 = NULL;
  l_3 = t;
  k_3 :
  if(match_cons(l_3, sym__2))
    {
      m_3 = ATgetArgument(l_3, 0);
      n_3 = ATgetArgument(l_3, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(n_3)), not_null(m_3));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm RZip2_0 (ATerm t)
{
  ATerm u_3 = NULL,v_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL;
  u_3 = t;
  s_3 :
  if(match_cons(u_3, sym__2))
    {
      v_3 = ATgetArgument(u_3, 0);
      w_3 = ATgetArgument(u_3, 1);
      t_3 :
      if(((ATgetType(w_3) == AT_LIST) && ((ATermList) w_3 != ATempty)))
        {
          x_3 = ATgetFirst((ATermList) w_3);
          y_3 = (ATerm) ATgetNext((ATermList) w_3);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(v_3), not_null(x_3)), (ATerm) ATmakeAppl(sym__2, not_null(v_3), not_null(y_3)));
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
  ATerm g_4 = NULL,h_4 = NULL,i_4 = NULL;
  g_4 = t;
  e_4 :
  if(match_cons(g_4, sym__2))
    {
      h_4 = ATgetArgument(g_4, 0);
      i_4 = ATgetArgument(g_4, 1);
      f_4 :
      if(((ATermList) i_4 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm b_76 (ATerm), ATerm c_76 (ATerm), ATerm d_76 (ATerm), ATerm e_76 (ATerm))
{
  ATerm k_4 (ATerm t)
  {
    ATerm i_15 = t;
    int n_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_76(t);
        LocalPopChoice(n_15);
      }
    else
      {
        t = i_15;
        {
          t = c_76(t);
          {
            t = _2(t, e_76, k_4);
            t = d_76(t);
          }
        }
      }
    return(t);
  }
  t = k_4(t);
  return(t);
}
ATerm rzip_1 (ATerm t, ATerm p_76 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, RZip2_0, Zip3_0, p_76);
  return(t);
}
ATerm remove_intermediates_0 (ATerm t)
{
  ATerm r_4 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL;
  r_4 = t;
  n_4 :
  if(match_cons(r_4, sym__2))
    {
      s_4 = ATgetArgument(r_4, 0);
      t_4 = ATgetArgument(r_4, 1);
      o_4 :
      if(match_int(s_4, 1))
        {
          p_4 :
          if(match_cons(t_4, sym__2))
            {
              u_4 = ATgetArgument(t_4, 0);
              v_4 = ATgetArgument(t_4, 1);
              {
                ATerm o_15;
                o_15 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(u_4), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_16), term_s_16), term_r_16), term_q_16), term_p_16), term_o_16), term_n_16), term_m_16), term_l_16), term_k_16), term_j_16), term_u_15), term_s_15), term_q_15));
                  {
                    t = rzip_1(t, conc_strings_0);
                    t = rm_files_0(t);
                  }
                }
                t = o_15;
              }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_int(s_4, 0))
            {
              q_4 :
              if(match_cons(t_4, sym__2))
                {
                  u_4 = ATgetArgument(t_4, 0);
                  v_4 = ATgetArgument(t_4, 1);
                  {
                    ATerm u_16;
                    u_16 = t;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(u_4), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_16), term_x_16), term_t_16), term_s_16), term_r_16), term_q_16), term_p_16), term_o_16), term_n_16), term_m_16), term_l_16), term_k_16), term_j_16), term_u_15), term_s_15), term_q_15));
                      {
                        t = rzip_1(t, conc_strings_0);
                        t = rm_files_0(t);
                      }
                    }
                    t = u_16;
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm link_object_code_0 (ATerm t)
{
  ATerm f_5 = NULL,h_5 = NULL;
  ATerm g_0 (ATerm t)
  {
    ATerm h_0 (ATerm t)
    {
      t = term_z_16;
      return(t);
    }
    t = say_1(t, h_0);
    return(t);
  }
  t = if_verbose2_1(t, g_0);
  {
    ATerm e_17;
    e_17 = t;
    {
      ATerm g_5 = NULL;
      t = conc_strings_0(t);
      {
        g_5 = t;
        if(((f_5 != NULL) && (f_5 != g_5)))
          _fail(g_5);
        else
          f_5 = g_5;
      }
    }
    t = e_17;
    {
      ATerm o_0 (ATerm t)
      {
        ATerm q_0 (ATerm t)
        {
          t = term_f_17;
          t = get_config_0(t);
          return(t);
        }
        t = try_1(t, q_0);
        return(t);
      }
      ATerm p_0 (ATerm t)
      {
        t = term_g_17;
        return(t);
      }
      t = _2(t, o_0, p_0);
      {
        ATerm l_17;
        l_17 = t;
        {
          ATerm i_5 = NULL;
          t = conc_strings_0(t);
          {
            i_5 = t;
            if(((h_5 != NULL) && (h_5 != i_5)))
              _fail(i_5);
            else
              h_5 = i_5;
          }
        }
        t = l_17;
        {
          ATerm m_17;
          m_17 = t;
          {
            ATerm j_5 = NULL;
            ATerm k_5 = NULL;
            t = term_n_17;
            {
              t = get_config_0(t);
              {
                k_5 = t;
                if(((j_5 != NULL) && (j_5 != k_5)))
                  _fail(k_5);
                else
                  j_5 = k_5;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, term_o_17, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(j_5)), not_null(h_5)), term_f_17), not_null(f_5)));
              {
                ATerm r_0 (ATerm t)
                {
                  ATerm u_17;
                  u_17 = t;
                  {
                    ATerm l_5 = NULL,n_5 = NULL;
                    ATerm v_17;
                    v_17 = t;
                    {
                      ATerm m_5 = NULL;
                      t = Fst_0(t);
                      {
                        m_5 = t;
                        if(((l_5 != NULL) && (l_5 != m_5)))
                          _fail(m_5);
                        else
                          l_5 = m_5;
                      }
                    }
                    t = v_17;
                    {
                      ATerm o_5 = NULL;
                      t = Snd_0(t);
                      {
                        o_5 = t;
                        if(((n_5 != NULL) && (n_5 != o_5)))
                          _fail(o_5);
                        else
                          n_5 = o_5;
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym__2, term_y_17, (ATerm) ATinsert(CheckATermList(not_null(n_5)), not_null(l_5)));
                        t = printnl_0(t);
                      }
                    }
                  }
                  t = u_17;
                  return(t);
                }
                t = if_verbose3_1(t, r_0);
                t = call_0(t);
              }
            }
          }
          t = m_17;
        }
      }
    }
  }
  return(t);
}
ATerm Snd_0 (ATerm t)
{
  ATerm b_6 = NULL;
  ATerm d_6 = NULL,e_6 = NULL,f_6 = NULL;
  b_6 = t;
  {
    ATerm g_6 = NULL;
    ATerm i_6 = NULL,j_6 = NULL,k_6 = NULL,l_6 = NULL,m_6 = NULL,n_6 = NULL,o_6 = NULL;
    t = not_null(b_6);
    {
      g_6 = t;
      {
        t = SSL_explode_term(not_null(g_6));
        {
          i_6 = t;
          x_5 :
          if(match_cons(i_6, sym__2))
            {
              j_6 = ATgetArgument(i_6, 0);
              k_6 = ATgetArgument(i_6, 1);
              y_5 :
              if(match_string(j_6, ""))
                {
                  z_5 :
                  if(((ATgetType(k_6) == AT_LIST) && ((ATermList) k_6 != ATempty)))
                    {
                      l_6 = ATgetFirst((ATermList) k_6);
                      m_6 = (ATerm) ATgetNext((ATermList) k_6);
                      a_6 :
                      if(((ATgetType(m_6) == AT_LIST) && ((ATermList) m_6 != ATempty)))
                        {
                          n_6 = ATgetFirst((ATermList) m_6);
                          o_6 = (ATerm) ATgetNext((ATermList) m_6);
                          {
                            if(((d_6 != NULL) && (d_6 != l_6)))
                              _fail(l_6);
                            else
                              d_6 = l_6;
                            {
                              if(((f_6 != NULL) && (f_6 != n_6)))
                                _fail(n_6);
                              else
                                f_6 = n_6;
                              if(((e_6 != NULL) && (e_6 != o_6)))
                                _fail(o_6);
                              else
                                e_6 = o_6;
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
    t = not_null(f_6);
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm y_6 = NULL;
  ATerm a_7 = NULL,b_7 = NULL;
  y_6 = t;
  {
    ATerm c_7 = NULL;
    ATerm e_7 = NULL,f_7 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL;
    t = not_null(y_6);
    {
      c_7 = t;
      {
        t = SSL_explode_term(not_null(c_7));
        {
          e_7 = t;
          v_6 :
          if(match_cons(e_7, sym__2))
            {
              f_7 = ATgetArgument(e_7, 0);
              g_7 = ATgetArgument(e_7, 1);
              w_6 :
              if(match_string(f_7, ""))
                {
                  x_6 :
                  if(((ATgetType(g_7) == AT_LIST) && ((ATermList) g_7 != ATempty)))
                    {
                      h_7 = ATgetFirst((ATermList) g_7);
                      i_7 = (ATerm) ATgetNext((ATermList) g_7);
                      {
                        if(((b_7 != NULL) && (b_7 != h_7)))
                          _fail(h_7);
                        else
                          b_7 = h_7;
                        if(((a_7 != NULL) && (a_7 != i_7)))
                          _fail(i_7);
                        else
                          a_7 = i_7;
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
    t = not_null(b_7);
  }
  return(t);
}
ATerm if_verbose3_1 (ATerm t, ATerm m_60 (ATerm))
{
  ATerm s_0 (ATerm t)
  {
    ATerm z_17;
    z_17 = t;
    {
      ATerm n_7 = NULL;
      ATerm o_7 = NULL;
      t = term_d_15;
      {
        t = get_config_0(t);
        {
          o_7 = t;
          if(((n_7 != NULL) && (n_7 != o_7)))
            _fail(o_7);
          else
            n_7 = o_7;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_7), term_b_18);
        t = geq_0(t);
      }
    }
    t = z_17;
    t = m_60(t);
    return(t);
  }
  t = try_1(t, s_0);
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm c_18;
  c_18 = t;
  {
    ATerm r_7 = NULL;
    ATerm s_7 = NULL;
    s_7 = t;
    if(((r_7 != NULL) && (r_7 != s_7)))
      _fail(s_7);
    else
      r_7 = s_7;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_17, (ATerm) ATinsert(ATempty, not_null(r_7)));
      t = printnl_0(t);
    }
  }
  t = c_18;
  return(t);
}
ATerm say_1 (ATerm t, ATerm m_68 (ATerm))
{
  ATerm d_18;
  d_18 = t;
  {
    t = m_68(t);
    t = debug_0(t);
  }
  t = d_18;
  return(t);
}
ATerm c_to_object_code_0 (ATerm t)
{
  ATerm a_8 = NULL,c_8 = NULL;
  ATerm t_0 (ATerm t)
  {
    ATerm u_0 (ATerm t)
    {
      t = term_k_18;
      return(t);
    }
    t = say_1(t, u_0);
    return(t);
  }
  t = if_verbose2_1(t, t_0);
  {
    ATerm l_18;
    l_18 = t;
    {
      ATerm b_8 = NULL;
      t = conc_strings_0(t);
      {
        b_8 = t;
        if(((a_8 != NULL) && (a_8 != b_8)))
          _fail(b_8);
        else
          a_8 = b_8;
      }
    }
    t = l_18;
    {
      ATerm w_0 (ATerm t)
      {
        t = term_t_16;
        return(t);
      }
      t = _2(t, _id, w_0);
      {
        ATerm m_18;
        m_18 = t;
        {
          ATerm d_8 = NULL;
          t = conc_strings_0(t);
          {
            d_8 = t;
            if(((c_8 != NULL) && (c_8 != d_8)))
              _fail(d_8);
            else
              c_8 = d_8;
          }
        }
        t = m_18;
        {
          ATerm n_18;
          n_18 = t;
          {
            ATerm e_8 = NULL;
            ATerm f_8 = NULL,h_8 = NULL;
            ATerm g_8 = NULL;
            t = term_o_18;
            {
              t = get_config_0(t);
              {
                g_8 = t;
                if(((f_8 != NULL) && (f_8 != g_8)))
                  _fail(g_8);
                else
                  f_8 = g_8;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(f_8), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(c_8)), term_f_17), not_null(a_8)), term_p_18));
              {
                t = conc_0(t);
                {
                  h_8 = t;
                  if(((e_8 != NULL) && (e_8 != h_8)))
                    _fail(h_8);
                  else
                    e_8 = h_8;
                }
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, term_o_17, not_null(e_8));
              {
                ATerm x_0 (ATerm t)
                {
                  ATerm u_18;
                  u_18 = t;
                  {
                    ATerm i_8 = NULL,k_8 = NULL;
                    ATerm v_18;
                    v_18 = t;
                    {
                      ATerm j_8 = NULL;
                      t = Fst_0(t);
                      {
                        j_8 = t;
                        if(((i_8 != NULL) && (i_8 != j_8)))
                          _fail(j_8);
                        else
                          i_8 = j_8;
                      }
                    }
                    t = v_18;
                    {
                      ATerm l_8 = NULL;
                      t = Snd_0(t);
                      {
                        l_8 = t;
                        if(((k_8 != NULL) && (k_8 != l_8)))
                          _fail(l_8);
                        else
                          k_8 = l_8;
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym__2, term_y_17, (ATerm) ATinsert(CheckATermList(not_null(k_8)), not_null(i_8)));
                        t = printnl_0(t);
                      }
                    }
                  }
                  t = u_18;
                  return(t);
                }
                t = if_verbose3_1(t, x_0);
                t = call_0(t);
              }
            }
          }
          t = n_18;
        }
      }
    }
  }
  return(t);
}
ATerm c_compile_0 (ATerm t)
{
  ATerm w_18 = t;
  int x_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_19;
      e_19 = t;
      {
        t = term_p_18;
        t = get_config_0(t);
      }
      t = e_19;
      LocalPopChoice(x_18);
    }
  else
    {
      t = w_18;
      {
        ATerm y_0 (ATerm t)
        {
          ATerm a_1 (ATerm t)
          {
            ATerm t_8 = NULL;
            ATerm u_8 = NULL;
            u_8 = t;
            if(((t_8 != NULL) && (t_8 != u_8)))
              _fail(u_8);
            else
              t_8 = u_8;
            {
              t = (ATerm) ATmakeAppl(sym__2, term_y_17, (ATerm) ATinsert(CheckATermList(not_null(t_8)), term_f_19));
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
ATerm pipe_2 (ATerm t, ATerm r_64 (ATerm), ATerm s_64 (ATerm))
{
  ATerm b_1 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = pipe_3(t, r_64, s_64, b_1);
  return(t);
}
ATerm abox2text_0 (ATerm t)
{
  ATerm c_1 (ATerm t)
  {
    t = term_g_19;
    t = get_config_0(t);
    return(t);
  }
  ATerm d_1 (ATerm t)
  {
    t = term_h_19;
    return(t);
  }
  t = pipe_2(t, c_1, d_1);
  return(t);
}
ATerm ac2abox_0 (ATerm t)
{
  ATerm e_1 (ATerm t)
  {
    t = term_i_19;
    t = get_config_0(t);
    return(t);
  }
  ATerm f_1 (ATerm t)
  {
    t = term_s_16;
    return(t);
  }
  ATerm g_1 (ATerm t)
  {
    ATerm x_8 = NULL;
    ATerm y_8 = NULL;
    t = term_j_19;
    {
      t = get_config_0(t);
      {
        y_8 = t;
        if(((x_8 != NULL) && (x_8 != y_8)))
          _fail(y_8);
        else
          x_8 = y_8;
      }
    }
    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_8)), term_o_19);
    return(t);
  }
  t = pipe_3(t, e_1, f_1, g_1);
  return(t);
}
ATerm s2c_0 (ATerm t)
{
  ATerm h_1 (ATerm t)
  {
    t = term_p_19;
    t = get_config_0(t);
    return(t);
  }
  ATerm i_1 (ATerm t)
  {
    t = term_r_16;
    return(t);
  }
  ATerm k_1 (ATerm t)
  {
    ATerm d_9 = NULL,f_9 = NULL;
    ATerm q_19;
    q_19 = t;
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
    t = q_19;
    {
      ATerm i_9 = NULL;
      t = term_r_19;
      {
        t = get_config_0(t);
        {
          ATerm l_1 (ATerm t)
          {
            ATerm g_9 = NULL;
            ATerm h_9 = NULL;
            h_9 = t;
            if(((g_9 != NULL) && (g_9 != h_9)))
              _fail(h_9);
            else
              g_9 = h_9;
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_9)), term_r_19);
            return(t);
          }
          t = map_1(t, l_1);
          {
            t = concat_0(t);
            {
              i_9 = t;
              if(((f_9 != NULL) && (f_9 != i_9)))
                _fail(i_9);
              else
                f_9 = i_9;
            }
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_9), (ATerm) ATinsert(CheckATermList(not_null(f_9)), term_s_19));
        t = conc_0(t);
      }
    }
    return(t);
  }
  t = pipe_3(t, h_1, i_1, k_1);
  return(t);
}
ATerm stratego_cf_0 (ATerm t)
{
  ATerm m_1 (ATerm t)
  {
    t = term_t_19;
    t = get_config_0(t);
    return(t);
  }
  ATerm n_1 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(n_9)), term_s_19);
    return(t);
  }
  t = pipe_3(t, m_1, _id, n_1);
  return(t);
}
ATerm canonicalize_0 (ATerm t)
{
  ATerm o_1 (ATerm t)
  {
    t = term_u_19;
    t = get_config_0(t);
    return(t);
  }
  ATerm p_1 (ATerm t)
  {
    t = term_q_16;
    return(t);
  }
  ATerm q_1 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(r_9)), term_s_19);
    return(t);
  }
  t = pipe_3(t, o_1, p_1, q_1);
  return(t);
}
ATerm back_end_0 (ATerm t)
{
  ATerm r_1 (ATerm t)
  {
    ATerm t_1 (ATerm t)
    {
      ATerm v_9 = NULL;
      ATerm w_9 = NULL;
      w_9 = t;
      if(((v_9 != NULL) && (v_9 != w_9)))
        _fail(w_9);
      else
        v_9 = w_9;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_17, (ATerm) ATinsert(CheckATermList(not_null(v_9)), term_v_19));
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
  return(t);
}
ATerm optimize2_0 (ATerm t)
{
  ATerm x_1 (ATerm t)
  {
    t = term_k_20;
    t = get_config_0(t);
    return(t);
  }
  ATerm y_1 (ATerm t)
  {
    t = term_p_16;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(z_9)), term_s_19);
    return(t);
  }
  t = pipe_3(t, x_1, y_1, z_1);
  return(t);
}
ATerm compile_match_0 (ATerm t)
{
  ATerm a_2 (ATerm t)
  {
    t = term_l_20;
    t = get_config_0(t);
    return(t);
  }
  ATerm b_2 (ATerm t)
  {
    t = term_o_16;
    return(t);
  }
  ATerm g_2 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(d_10)), term_s_19);
    return(t);
  }
  t = pipe_3(t, a_2, b_2, g_2);
  return(t);
}
ATerm inline_0 (ATerm t)
{
  ATerm h_2 (ATerm t)
  {
    t = term_m_20;
    t = get_config_0(t);
    return(t);
  }
  ATerm k_2 (ATerm t)
  {
    t = term_n_16;
    return(t);
  }
  ATerm l_2 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(h_10)), term_s_19);
    return(t);
  }
  t = pipe_3(t, h_2, k_2, l_2);
  return(t);
}
ATerm fusion_0 (ATerm t)
{
  ATerm m_2 (ATerm t)
  {
    t = term_n_20;
    t = get_config_0(t);
    return(t);
  }
  ATerm n_2 (ATerm t)
  {
    t = term_m_16;
    return(t);
  }
  ATerm o_2 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(l_10)), term_s_19);
    return(t);
  }
  t = pipe_3(t, m_2, n_2, o_2);
  return(t);
}
ATerm optimize1_0 (ATerm t)
{
  ATerm r_2 (ATerm t)
  {
    t = term_o_20;
    t = get_config_0(t);
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    t = term_l_16;
    return(t);
  }
  ATerm y_2 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(p_10)), term_s_19);
    return(t);
  }
  t = pipe_3(t, r_2, u_2, y_2);
  return(t);
}
ATerm optimize_0 (ATerm t)
{
  ATerm z_2 (ATerm t)
  {
    ATerm b_3 (ATerm t)
    {
      ATerm t_10 = NULL;
      ATerm u_10 = NULL;
      u_10 = t;
      if(((t_10 != NULL) && (t_10 != u_10)))
        _fail(u_10);
      else
        t_10 = u_10;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_17, (ATerm) ATinsert(CheckATermList(not_null(t_10)), term_p_20));
        t = printnl_0(t);
      }
      return(t);
    }
    t = if_verbose1_1(t, b_3);
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    t = optimize1_0(t);
    {
      ATerm e_3 (ATerm t)
      {
        ATerm q_20;
        q_20 = t;
        {
          ATerm r_20 = t;
          if((PushChoice() == 0))
            {
              t = term_s_20;
              t = get_config_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = r_20;
            }
        }
        t = q_20;
        t = fusion_0(t);
        return(t);
      }
      t = try_1(t, e_3);
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
  t = profile_p__2(t, z_2, a_3);
  return(t);
}
ATerm rename_defs_0 (ATerm t)
{
  ATerm f_3 (ATerm t)
  {
    t = term_t_20;
    t = get_config_0(t);
    return(t);
  }
  ATerm h_3 (ATerm t)
  {
    t = term_k_16;
    return(t);
  }
  ATerm i_3 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(x_10)), term_s_19);
    return(t);
  }
  t = pipe_3(t, f_3, h_3, i_3);
  return(t);
}
ATerm stratego_nf_0 (ATerm t)
{
  ATerm j_3 (ATerm t)
  {
    t = term_u_20;
    t = get_config_0(t);
    return(t);
  }
  ATerm o_3 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(b_11)), term_s_19);
    return(t);
  }
  t = pipe_3(t, j_3, _id, o_3);
  return(t);
}
ATerm extract_0 (ATerm t)
{
  ATerm p_3 (ATerm t)
  {
    t = term_v_20;
    t = get_config_0(t);
    return(t);
  }
  ATerm q_3 (ATerm t)
  {
    t = term_j_16;
    return(t);
  }
  ATerm r_3 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(f_11)), term_s_19);
    return(t);
  }
  t = pipe_3(t, p_3, q_3, r_3);
  return(t);
}
ATerm extract_all_0 (ATerm t)
{
  ATerm z_3 (ATerm t)
  {
    t = term_w_20;
    t = get_config_0(t);
    return(t);
  }
  ATerm a_4 (ATerm t)
  {
    t = term_x_20;
    return(t);
  }
  ATerm b_4 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(j_11)), term_s_19);
    return(t);
  }
  t = pipe_3(t, z_3, a_4, b_4);
  return(t);
}
ATerm output_frontend_0 (ATerm t)
{
  ATerm o_11 = NULL,p_11 = NULL;
  ATerm c_4 (ATerm t)
  {
    ATerm y_20;
    y_20 = t;
    {
      t = term_z_20;
      t = get_config_0(t);
    }
    t = y_20;
    {
      ATerm a_21 = t;
      int b_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = extract_all_0(t);
          LocalPopChoice(b_21);
        }
      else
        {
          t = a_21;
          {
            t = (ATerm) ATinsert(ATempty, term_c_21);
            t = fatal_error_0(t);
          }
        }
      {
        ATerm d_4 (ATerm t)
        {
          ATerm q_11 = NULL;
          q_11 = t;
          if(((o_11 != NULL) && (o_11 != q_11)))
            _fail(q_11);
          else
            o_11 = q_11;
          return(t);
        }
        ATerm j_4 (ATerm t)
        {
          ATerm r_11 = NULL;
          r_11 = t;
          if(((p_11 != NULL) && (p_11 != r_11)))
            _fail(r_11);
          else
            p_11 = r_11;
          return(t);
        }
        t = _2(t, d_4, j_4);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_y_17, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(p_11)), not_null(o_11)), term_d_21));
          {
            t = printnl_0(t);
            {
              t = term_b_15;
              t = exit_0(t);
            }
          }
        }
      }
    }
    return(t);
  }
  t = try_1(t, c_4);
  return(t);
}
ATerm pipe_3 (ATerm t, ATerm t_64 (ATerm), ATerm u_64 (ATerm), ATerm v_64 (ATerm))
{
  ATerm y_11 = NULL,a_12 = NULL;
  ATerm e_21;
  e_21 = t;
  {
    ATerm z_11 = NULL;
    t = conc_strings_0(t);
    {
      z_11 = t;
      if(((y_11 != NULL) && (y_11 != z_11)))
        _fail(z_11);
      else
        y_11 = z_11;
    }
  }
  t = e_21;
  {
    t = _2(t, _id, u_64);
    {
      ATerm f_21;
      f_21 = t;
      {
        ATerm b_12 = NULL;
        t = conc_strings_0(t);
        {
          b_12 = t;
          if(((a_12 != NULL) && (a_12 != b_12)))
            _fail(b_12);
          else
            a_12 = b_12;
        }
      }
      t = f_21;
      {
        ATerm g_21;
        g_21 = t;
        {
          ATerm c_12 = NULL,e_12 = NULL;
          ATerm p_21;
          p_21 = t;
          {
            ATerm d_12 = NULL;
            t = t_64(t);
            {
              d_12 = t;
              if(((c_12 != NULL) && (c_12 != d_12)))
                _fail(d_12);
              else
                c_12 = d_12;
            }
          }
          t = p_21;
          {
            ATerm f_12 = NULL;
            t = v_64(t);
            {
              f_12 = t;
              if(((e_12 != NULL) && (e_12 != f_12)))
                _fail(f_12);
              else
                e_12 = f_12;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(c_12), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(e_12)), not_null(a_12)), term_f_17), not_null(y_11)), term_q_21));
              t = call_0(t);
            }
          }
        }
        t = g_21;
      }
    }
  }
  return(t);
}
ATerm frontend_0 (ATerm t)
{
  ATerm l_4 (ATerm t)
  {
    t = term_r_21;
    t = get_config_0(t);
    return(t);
  }
  ATerm m_4 (ATerm t)
  {
    t = term_u_15;
    return(t);
  }
  ATerm w_4 (ATerm t)
  {
    ATerm l_12 = NULL;
    ATerm m_12 = NULL;
    t = pass_verbose_0(t);
    {
      m_12 = t;
      if(((l_12 != NULL) && (l_12 != m_12)))
        _fail(m_12);
      else
        l_12 = m_12;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(l_12)), term_s_19);
    return(t);
  }
  t = pipe_3(t, l_4, m_4, w_4);
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm q_12 = NULL,r_12 = NULL,s_12 = NULL;
  q_12 = t;
  p_12 :
  if(match_cons(q_12, sym__2))
    {
      r_12 = ATgetArgument(q_12, 0);
      s_12 = ATgetArgument(q_12, 1);
      t = SSL_WriteToBinaryFile(not_null(r_12), not_null(s_12));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm apply_to_file_1 (ATerm t, ATerm i_65 (ATerm))
{
  ATerm z_12 = NULL,a_13 = NULL,b_13 = NULL;
  z_12 = t;
  y_12 :
  if(match_cons(z_12, sym__2))
    {
      a_13 = ATgetArgument(z_12, 0);
      b_13 = ATgetArgument(z_12, 1);
      {
        ATerm e_13 = NULL;
        ATerm s_21;
        s_21 = t;
        {
          ATerm f_13 = NULL;
          t = not_null(a_13);
          {
            t = ReadFromFile_0(t);
            {
              t = i_65(t);
              {
                f_13 = t;
                if(((e_13 != NULL) && (e_13 != f_13)))
                  _fail(f_13);
                else
                  e_13 = f_13;
              }
            }
          }
        }
        t = s_21;
        {
          ATerm t_21;
          t_21 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(b_13), not_null(e_13));
            t = WriteToBinaryFile_0(t);
          }
          t = t_21;
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm transform_file_2 (ATerm t, ATerm g_65 (ATerm), ATerm h_65 (ATerm))
{
  ATerm k_13 = NULL,m_13 = NULL;
  ATerm u_21;
  u_21 = t;
  {
    ATerm l_13 = NULL;
    t = conc_strings_0(t);
    {
      l_13 = t;
      if(((k_13 != NULL) && (k_13 != l_13)))
        _fail(l_13);
      else
        k_13 = l_13;
    }
  }
  t = u_21;
  {
    t = _2(t, _id, h_65);
    {
      ATerm v_21;
      v_21 = t;
      {
        ATerm n_13 = NULL;
        t = conc_strings_0(t);
        {
          n_13 = t;
          if(((m_13 != NULL) && (m_13 != n_13)))
            _fail(n_13);
          else
            m_13 = n_13;
        }
      }
      t = v_21;
      {
        ATerm w_21;
        w_21 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_13), not_null(m_13));
          t = apply_to_file_1(t, g_65);
        }
        t = w_21;
      }
    }
  }
  return(t);
}
ATerm AddMain_1 (ATerm t, ATerm a_87 (ATerm))
{
  ATerm t_13 = NULL,u_13 = NULL;
  t_13 = t;
  s_13 :
  if(match_cons(t_13, sym_Specification_1))
    {
      u_13 = ATgetArgument(t_13, 0);
      {
        ATerm w_13 = NULL;
        ATerm x_13 = NULL;
        t = term_x_21;
        {
          t = a_87(t);
          {
            x_13 = t;
            if(((w_13 != NULL) && (w_13 != x_13)))
              _fail(x_13);
            else
              w_13 = x_13;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(not_null(u_13)), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_g_22, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(w_13)), (ATerm) ATempty))))));
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
  ATerm b_14 = NULL;
  ATerm h_22 = t;
  int i_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_22;
      j_22 = t;
      {
        ATerm c_14 = NULL;
        t = term_k_22;
        {
          t = get_config_0(t);
          {
            c_14 = t;
            if(((b_14 != NULL) && (b_14 != c_14)))
              _fail(c_14);
            else
              b_14 = c_14;
          }
        }
      }
      t = j_22;
      {
        ATerm x_4 (ATerm t)
        {
          ATerm z_4 (ATerm t)
          {
            t = not_null(b_14);
            return(t);
          }
          t = AddMain_1(t, z_4);
          return(t);
        }
        ATerm y_4 (ATerm t)
        {
          t = term_s_15;
          return(t);
        }
        t = transform_file_2(t, x_4, y_4);
      }
      LocalPopChoice(i_22);
    }
  else
    {
      t = h_22;
      {
        ATerm a_5 (ATerm t)
        {
          t = term_s_15;
          return(t);
        }
        t = transform_file_2(t, _id, a_5);
      }
    }
  return(t);
}
ATerm output_ast_0 (ATerm t)
{
  ATerm g_14 = NULL,h_14 = NULL;
  ATerm b_5 (ATerm t)
  {
    ATerm l_22;
    l_22 = t;
    {
      t = term_q_22;
      t = get_config_0(t);
    }
    t = l_22;
    {
      ATerm c_5 (ATerm t)
      {
        ATerm i_14 = NULL;
        i_14 = t;
        if(((g_14 != NULL) && (g_14 != i_14)))
          _fail(i_14);
        else
          g_14 = i_14;
        return(t);
      }
      ATerm d_5 (ATerm t)
      {
        ATerm j_14 = NULL;
        j_14 = t;
        if(((h_14 != NULL) && (h_14 != j_14)))
          _fail(j_14);
        else
          h_14 = j_14;
        return(t);
      }
      t = _2(t, c_5, d_5);
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_17, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(h_14)), not_null(g_14)), term_r_22));
        {
          t = printnl_0(t);
          {
            t = term_b_15;
            t = exit_0(t);
          }
        }
      }
    }
    return(t);
  }
  t = try_1(t, b_5);
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm n_14 = NULL;
  n_14 = t;
  t = SSL_int_to_string(not_null(n_14));
  return(t);
}
ATerm pass_verbose_0 (ATerm t)
{
  ATerm s_14 = NULL;
  ATerm t_14 = NULL,v_14 = NULL;
  ATerm u_14 = NULL;
  t = term_d_15;
  {
    ATerm s_22 = t;
    int u_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(u_22);
      }
    else
      {
        t = s_22;
        t = term_v_22;
      }
    {
      u_14 = t;
      if(((t_14 != NULL) && (t_14 != u_14)))
        _fail(u_14);
      else
        t_14 = u_14;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(t_14), term_v_22);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          v_14 = t;
          if(((s_14 != NULL) && (s_14 != v_14)))
            _fail(v_14);
          else
            s_14 = v_14;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_14)), term_d_15);
  return(t);
}
ATerm parse_0 (ATerm t)
{
  ATerm k_15 = NULL,l_15 = NULL,m_15 = NULL;
  k_15 = t;
  j_15 :
  if(match_cons(k_15, sym__2))
    {
      l_15 = ATgetArgument(k_15, 0);
      m_15 = ATgetArgument(k_15, 1);
      {
        ATerm p_15 = NULL;
        ATerm r_15 = NULL;
        ATerm w_22 = t;
        int x_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_f_17;
            {
              t = get_config_0(t);
              t = basename_0(t);
            }
            LocalPopChoice(x_22);
          }
        else
          {
            t = w_22;
            t = not_null(l_15);
          }
        {
          p_15 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(p_15), term_q_15);
            {
              ATerm t_15 = NULL;
              t = conc_strings_0(t);
              {
                r_15 = t;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_15)), not_null(l_15));
                  {
                    ATerm v_15 = NULL,x_15 = NULL;
                    t = concat_strings_0(t);
                    {
                      t_15 = t;
                      {
                        ATerm y_22;
                        y_22 = t;
                        {
                          ATerm w_15 = NULL;
                          t = term_z_22;
                          {
                            t = get_config_0(t);
                            {
                              w_15 = t;
                              if(((v_15 != NULL) && (v_15 != w_15)))
                                _fail(w_15);
                              else
                                v_15 = w_15;
                            }
                          }
                        }
                        t = y_22;
                        {
                          ATerm y_15 = NULL,e_16 = NULL,g_16 = NULL,i_16 = NULL;
                          ATerm a_23;
                          a_23 = t;
                          {
                            ATerm d_16 = NULL;
                            ATerm f_23 = t;
                            int g_23 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm z_15 = NULL;
                                ATerm a_16 = NULL;
                                t = term_f_17;
                                {
                                  t = get_config_0(t);
                                  {
                                    a_16 = t;
                                    if(((z_15 != NULL) && (z_15 != a_16)))
                                      _fail(a_16);
                                    else
                                      z_15 = a_16;
                                  }
                                }
                                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_15)), term_h_23);
                                LocalPopChoice(g_23);
                              }
                            else
                              {
                                t = f_23;
                                {
                                  ATerm b_16 = NULL;
                                  ATerm c_16 = NULL;
                                  t = term_q_21;
                                  {
                                    t = get_config_0(t);
                                    {
                                      c_16 = t;
                                      if(((b_16 != NULL) && (b_16 != c_16)))
                                        _fail(c_16);
                                      else
                                        b_16 = c_16;
                                    }
                                  }
                                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_16)), term_h_23);
                                }
                              }
                            {
                              d_16 = t;
                              if(((y_15 != NULL) && (y_15 != d_16)))
                                _fail(d_16);
                              else
                                y_15 = d_16;
                            }
                          }
                          t = a_23;
                          {
                            ATerm i_23;
                            i_23 = t;
                            {
                              ATerm f_16 = NULL;
                              t = pass_verbose_0(t);
                              {
                                f_16 = t;
                                if(((e_16 != NULL) && (e_16 != f_16)))
                                  _fail(f_16);
                                else
                                  e_16 = f_16;
                              }
                            }
                            t = i_23;
                            {
                              ATerm h_16 = NULL;
                              t = term_n_23;
                              {
                                t = get_config_0(t);
                                {
                                  h_16 = t;
                                  if(((g_16 != NULL) && (g_16 != h_16)))
                                    _fail(h_16);
                                  else
                                    g_16 = h_16;
                                }
                              }
                              {
                                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(r_15)), term_f_17), not_null(t_15)), term_q_21)), not_null(e_16)), not_null(g_16)), not_null(y_15));
                                {
                                  t = concat_0(t);
                                  {
                                    i_16 = t;
                                    if(((x_15 != NULL) && (x_15 != i_16)))
                                      _fail(i_16);
                                    else
                                      x_15 = i_16;
                                  }
                                }
                              }
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(v_15), not_null(x_15));
                            {
                              t = call_0(t);
                              t = (ATerm) ATmakeAppl(sym__2, not_null(p_15), term_q_15);
                            }
                          }
                        }
                      }
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
ATerm front_0 (ATerm t)
{
  ATerm e_5 (ATerm t)
  {
    ATerm q_5 (ATerm t)
    {
      ATerm v_16 = NULL;
      ATerm w_16 = NULL;
      w_16 = t;
      if(((v_16 != NULL) && (v_16 != w_16)))
        _fail(w_16);
      else
        v_16 = w_16;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_17, (ATerm) ATinsert(CheckATermList(not_null(v_16)), term_o_23));
        t = printnl_0(t);
      }
      return(t);
    }
    t = if_verbose1_1(t, q_5);
    return(t);
  }
  ATerm p_5 (ATerm t)
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
  t = profile_p__2(t, e_5, p_5);
  return(t);
}
ATerm compile_0 (ATerm t)
{
  t = front_0(t);
  {
    t = optimize_0(t);
    {
      t = back_end_0(t);
      {
        t = c_compile_0(t);
        {
          ATerm r_5 (ATerm t)
          {
            ATerm p_23;
            p_23 = t;
            {
              ATerm a_17 = NULL,c_17 = NULL;
              ATerm q_23;
              q_23 = t;
              {
                ATerm b_17 = NULL;
                b_17 = t;
                if(((a_17 != NULL) && (a_17 != b_17)))
                  _fail(b_17);
                else
                  a_17 = b_17;
              }
              t = q_23;
              {
                ATerm d_17 = NULL;
                t = term_r_23;
                {
                  t = get_config_0(t);
                  {
                    d_17 = t;
                    if(((c_17 != NULL) && (c_17 != d_17)))
                      _fail(d_17);
                    else
                      c_17 = d_17;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(c_17), not_null(a_17));
                  t = remove_intermediates_0(t);
                }
              }
            }
            t = p_23;
            return(t);
          }
          t = try_1(t, r_5);
        }
      }
    }
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL;
  i_17 = t;
  h_17 :
  if(match_cons(i_17, sym__2))
    {
      j_17 = ATgetArgument(i_17, 0);
      k_17 = ATgetArgument(i_17, 1);
      {
        ATerm s_23;
        s_23 = t;
        {
          ATerm t_23 = t;
          int v_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(j_17), not_null(k_17));
              LocalPopChoice(v_23);
            }
          else
            {
              t = t_23;
              t = SSL_gtr(not_null(j_17), not_null(k_17));
            }
        }
        t = s_23;
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
  ATerm q_17 = NULL;
  ATerm y_23 = t;
  int z_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_17 = NULL,s_17 = NULL,t_17 = NULL;
      r_17 = t;
      p_17 :
      if(match_cons(r_17, sym__2))
        {
          s_17 = ATgetArgument(r_17, 0);
          t_17 = ATgetArgument(r_17, 1);
          {
            if(((q_17 != NULL) && (q_17 != s_17)))
              _fail(s_17);
            else
              q_17 = s_17;
            if(((q_17 != NULL) && (q_17 != t_17)))
              _fail(t_17);
            else
              q_17 = t_17;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(z_23);
    }
  else
    {
      t = y_23;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm k_60 (ATerm))
{
  ATerm s_5 (ATerm t)
  {
    ATerm a_24;
    a_24 = t;
    {
      ATerm w_17 = NULL;
      ATerm x_17 = NULL;
      t = term_d_15;
      {
        t = get_config_0(t);
        {
          x_17 = t;
          if(((w_17 != NULL) && (w_17 != x_17)))
            _fail(x_17);
          else
            w_17 = x_17;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_17), term_v_22);
        t = geq_0(t);
      }
    }
    t = a_24;
    t = k_60(t);
    return(t);
  }
  t = try_1(t, s_5);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm a_18 = NULL;
  a_18 = t;
  t = SSL_TicksToSeconds(not_null(a_18));
  return(t);
}
ATerm self_children_sys_time_0 (ATerm t)
{
  ATerm f_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL,j_18 = NULL;
  f_18 = t;
  e_18 :
  if(match_cons(f_18, sym__4))
    {
      g_18 = ATgetArgument(f_18, 0);
      h_18 = ATgetArgument(f_18, 1);
      i_18 = ATgetArgument(f_18, 2);
      j_18 = ATgetArgument(f_18, 3);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_18), not_null(j_18));
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
  ATerm r_18 = NULL,s_18 = NULL,t_18 = NULL;
  r_18 = t;
  q_18 :
  if(match_cons(r_18, sym__2))
    {
      s_18 = ATgetArgument(r_18, 0);
      t_18 = ATgetArgument(r_18, 1);
      {
        ATerm d_24 = t;
        int i_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(s_18), not_null(t_18));
            LocalPopChoice(i_24);
          }
        else
          {
            t = d_24;
            t = SSL_addr(not_null(s_18), not_null(t_18));
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
  ATerm z_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL,d_19 = NULL;
  z_18 = t;
  y_18 :
  if(match_cons(z_18, sym__4))
    {
      a_19 = ATgetArgument(z_18, 0);
      b_19 = ATgetArgument(z_18, 1);
      c_19 = ATgetArgument(z_18, 2);
      d_19 = ATgetArgument(z_18, 3);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_19), not_null(c_19));
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
  ATerm l_19 = NULL,m_19 = NULL,n_19 = NULL;
  l_19 = t;
  k_19 :
  if(match_cons(l_19, sym__2))
    {
      m_19 = ATgetArgument(l_19, 0);
      n_19 = ATgetArgument(l_19, 1);
      {
        ATerm j_24 = t;
        int m_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(m_19), not_null(n_19));
            LocalPopChoice(m_24);
          }
        else
          {
            t = j_24;
            t = SSL_subtr(not_null(m_19), not_null(n_19));
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
  ATerm z_19 = NULL,a_20 = NULL,b_20 = NULL,c_20 = NULL,d_20 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL;
  z_19 = t;
  w_19 :
  if(match_cons(z_19, sym__2))
    {
      a_20 = ATgetArgument(z_19, 0);
      f_20 = ATgetArgument(z_19, 1);
      x_19 :
      if(match_cons(a_20, sym__4))
        {
          b_20 = ATgetArgument(a_20, 0);
          c_20 = ATgetArgument(a_20, 1);
          d_20 = ATgetArgument(a_20, 2);
          e_20 = ATgetArgument(a_20, 3);
          y_19 :
          if(match_cons(f_20, sym__4))
            {
              g_20 = ATgetArgument(f_20, 0);
              h_20 = ATgetArgument(f_20, 1);
              i_20 = ATgetArgument(f_20, 2);
              j_20 = ATgetArgument(f_20, 3);
              {
                ATerm h_21 = NULL,j_21 = NULL,l_21 = NULL,n_21 = NULL;
                ATerm n_24;
                n_24 = t;
                {
                  ATerm i_21 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(b_20), not_null(g_20));
                  {
                    t = subt_0(t);
                    {
                      i_21 = t;
                      if(((h_21 != NULL) && (h_21 != i_21)))
                        _fail(i_21);
                      else
                        h_21 = i_21;
                    }
                  }
                }
                t = n_24;
                {
                  ATerm p_24;
                  p_24 = t;
                  {
                    ATerm k_21 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(c_20), not_null(h_20));
                    {
                      t = subt_0(t);
                      {
                        k_21 = t;
                        if(((j_21 != NULL) && (j_21 != k_21)))
                          _fail(k_21);
                        else
                          j_21 = k_21;
                      }
                    }
                  }
                  t = p_24;
                  {
                    ATerm q_24;
                    q_24 = t;
                    {
                      ATerm m_21 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(d_20), not_null(i_20));
                      {
                        t = subt_0(t);
                        {
                          m_21 = t;
                          if(((l_21 != NULL) && (l_21 != m_21)))
                            _fail(m_21);
                          else
                            l_21 = m_21;
                        }
                      }
                    }
                    t = q_24;
                    {
                      ATerm o_21 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(e_20), not_null(j_20));
                      {
                        t = subt_0(t);
                        {
                          o_21 = t;
                          if(((n_21 != NULL) && (n_21 != o_21)))
                            _fail(o_21);
                          else
                            n_21 = o_21;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym__4, not_null(h_21), not_null(j_21), not_null(l_21), not_null(n_21));
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
ATerm profile_p__2 (ATerm t, ATerm g_68 (ATerm), ATerm h_68 (ATerm))
{
  ATerm y_21 = NULL;
  ATerm r_24;
  r_24 = t;
  {
    ATerm z_21 = NULL;
    t = times_0(t);
    {
      z_21 = t;
      if(((y_21 != NULL) && (y_21 != z_21)))
        _fail(z_21);
      else
        y_21 = z_21;
    }
  }
  t = r_24;
  {
    t = h_68(t);
    {
      ATerm s_24;
      s_24 = t;
      {
        ATerm a_22 = NULL,c_22 = NULL,e_22 = NULL;
        ATerm b_22 = NULL;
        t = times_0(t);
        {
          b_22 = t;
          if(((a_22 != NULL) && (a_22 != b_22)))
            _fail(b_22);
          else
            a_22 = b_22;
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_22), not_null(y_21));
          {
            t = diff_times_0(t);
            {
              ATerm t_24;
              t_24 = t;
              {
                ATerm d_22 = NULL;
                t = self_children_user_time_0(t);
                {
                  t = ticks_to_seconds_0(t);
                  {
                    d_22 = t;
                    if(((c_22 != NULL) && (c_22 != d_22)))
                      _fail(d_22);
                    else
                      c_22 = d_22;
                  }
                }
              }
              t = t_24;
              {
                ATerm f_22 = NULL;
                t = self_children_sys_time_0(t);
                {
                  t = ticks_to_seconds_0(t);
                  {
                    f_22 = t;
                    if(((e_22 != NULL) && (e_22 != f_22)))
                      _fail(f_22);
                    else
                      e_22 = f_22;
                  }
                }
                {
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(e_22)), term_v_24), not_null(c_22)), term_u_24);
                  t = g_68(t);
                }
              }
            }
          }
        }
      }
      t = s_24;
    }
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm l_68 (ATerm))
{
  ATerm w_24;
  w_24 = t;
  {
    ATerm m_22 = NULL,o_22 = NULL;
    ATerm a_25;
    a_25 = t;
    {
      ATerm n_22 = NULL;
      t = l_68(t);
      {
        n_22 = t;
        if(((m_22 != NULL) && (m_22 != n_22)))
          _fail(n_22);
        else
          m_22 = n_22;
      }
    }
    t = a_25;
    {
      ATerm p_22 = NULL;
      p_22 = t;
      if(((o_22 != NULL) && (o_22 != p_22)))
        _fail(p_22);
      else
        o_22 = p_22;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_22)), not_null(m_22)));
        t = printnl_0(t);
      }
    }
  }
  t = w_24;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm t_22 = NULL;
  t_22 = t;
  t = SSL_is_string(not_null(t_22));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm b_25 = t;
  int c_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(c_25);
    }
  else
    {
      t = b_25;
      {
        ATerm d_25 = t;
        int e_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_5 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, t_5);
            LocalPopChoice(e_25);
          }
        else
          {
            t = d_25;
            {
              ATerm c_23 = NULL,d_23 = NULL,e_23 = NULL;
              c_23 = t;
              b_23 :
              if(match_cons(c_23, sym_Path_1))
                {
                  d_23 = ATgetArgument(c_23, 0);
                  t = not_null(d_23);
                }
              else
                {
                  if(match_cons(c_23, sym_Var_1))
                    {
                      d_23 = ATgetArgument(c_23, 0);
                      {
                        t = not_null(d_23);
                        {
                          ATerm f_25 = t;
                          int g_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(g_25);
                            }
                          else
                            {
                              t = f_25;
                              {
                                ATerm u_5 (ATerm t)
                                {
                                  t = term_h_25;
                                  return(t);
                                }
                                t = debug_1(t, u_5);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(c_23, sym_Prefix_2))
                        {
                          d_23 = ATgetArgument(c_23, 0);
                          e_23 = ATgetArgument(c_23, 1);
                          {
                            ATerm j_23 = NULL,l_23 = NULL;
                            ATerm i_25;
                            i_25 = t;
                            {
                              ATerm k_23 = NULL;
                              t = not_null(d_23);
                              {
                                t = eval_config_0(t);
                                {
                                  k_23 = t;
                                  if(((j_23 != NULL) && (j_23 != k_23)))
                                    _fail(k_23);
                                  else
                                    j_23 = k_23;
                                }
                              }
                            }
                            t = i_25;
                            {
                              ATerm m_23 = NULL;
                              t = not_null(e_23);
                              {
                                t = eval_config_0(t);
                                {
                                  m_23 = t;
                                  if(((l_23 != NULL) && (l_23 != m_23)))
                                    _fail(m_23);
                                  else
                                    l_23 = m_23;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(j_23), not_null(l_23));
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
  ATerm u_23 = NULL;
  u_23 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_j_25, not_null(u_23));
    {
      t = table_get_0(t);
      {
        ATerm v_5 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm k_25;
            k_25 = t;
            {
              ATerm w_23 = NULL;
              ATerm x_23 = NULL;
              x_23 = t;
              if(((w_23 != NULL) && (w_23 != x_23)))
                _fail(x_23);
              else
                w_23 = x_23;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_j_25, not_null(u_23), not_null(w_23));
                t = table_put_0(t);
              }
            }
            t = k_25;
          }
          return(t);
        }
        t = try_1(t, v_5);
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
ATerm error_0 (ATerm t)
{
  ATerm m_25;
  m_25 = t;
  {
    ATerm b_24 = NULL;
    ATerm c_24 = NULL;
    c_24 = t;
    if(((b_24 != NULL) && (b_24 != c_24)))
      _fail(c_24);
    else
      b_24 = c_24;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_17, not_null(b_24));
      t = printnl_0(t);
    }
  }
  t = m_25;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm n_25;
  n_25 = t;
  {
    t = error_0(t);
    {
      t = term_v_22;
      t = exit_0(t);
    }
  }
  t = n_25;
  return(t);
}
ATerm basename_1 (ATerm t, ATerm u_69 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm w_5 (ATerm t)
    {
      ATerm o_25 = t;
      int p_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Cons_2(t, _id, w_5);
          LocalPopChoice(p_25);
        }
      else
        {
          t = o_25;
          {
            ATerm q_25 = t;
            int y_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_6 (ATerm t)
                {
                  ATerm g_24 = NULL;
                  g_24 = t;
                  e_24 :
                  if(!(match_int(g_24, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = Cons_2(t, c_6, _id);
                LocalPopChoice(y_25);
              }
            else
              {
                t = q_25;
                {
                  ATerm h_6 (ATerm t)
                  {
                    ATerm h_24 = NULL;
                    h_24 = t;
                    f_24 :
                    if(!(match_int(h_24, 46)))
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = Cons_2(t, h_6, u_69);
                  t = (ATerm) ATempty;
                }
              }
          }
        }
      return(t);
    }
    t = try_1(t, w_5);
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
  ATerm z_25;
  z_25 = t;
  {
    ATerm k_24 = NULL;
    ATerm l_24 = NULL;
    t = term_a_26;
    {
      t = get_config_0(t);
      {
        l_24 = t;
        if(((k_24 != NULL) && (k_24 != l_24)))
          _fail(l_24);
        else
          k_24 = l_24;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_17, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_26), not_null(k_24)), term_d_26));
      t = printnl_0(t);
    }
  }
  t = z_25;
  return(t);
}
ATerm try_1 (ATerm t, ATerm j_86 (ATerm))
{
  ATerm f_26 = t;
  int g_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_86(t);
      LocalPopChoice(g_26);
    }
  else
    {
      t = f_26;
      {
      }
    }
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm x_24 = NULL,y_24 = NULL,z_24 = NULL;
  x_24 = t;
  o_24 :
  if(match_cons(x_24, sym__2))
    {
      y_24 = ATgetArgument(x_24, 0);
      z_24 = ATgetArgument(x_24, 1);
      t = SSL_call(not_null(y_24), not_null(z_24));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm l_25 = NULL;
  l_25 = t;
  t = SSL_string_to_int(not_null(l_25));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL,w_25 = NULL,x_25 = NULL;
  t_25 = t;
  r_25 :
  if(match_string(t_25, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(t_25) == AT_LIST) && ((ATermList) t_25 != ATempty)))
        {
          u_25 = ATgetFirst((ATermList) t_25);
          v_25 = (ATerm) ATgetNext((ATermList) t_25);
          s_25 :
          if(((ATgetType(v_25) == AT_LIST) && ((ATermList) v_25 != ATempty)))
            {
              w_25 = ATgetFirst((ATermList) v_25);
              x_25 = (ATerm) ATgetNext((ATermList) v_25);
              {
                ATerm b_26 = NULL;
                ATerm h_26;
                h_26 = t;
                {
                  t = not_null(u_25);
                  t = l_0(t);
                }
                t = h_26;
                {
                  ATerm c_26 = NULL;
                  t = not_null(w_25);
                  {
                    t = m_0(t);
                    {
                      c_26 = t;
                      if(((b_26 != NULL) && (b_26 != c_26)))
                        _fail(c_26);
                      else
                        b_26 = c_26;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(x_25)), not_null(b_26));
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
  ATerm l_26 = NULL,m_26 = NULL,n_26 = NULL;
  l_26 = t;
  k_26 :
  if(match_cons(l_26, sym__2))
    {
      m_26 = ATgetArgument(l_26, 0);
      n_26 = ATgetArgument(l_26, 1);
      {
        ATerm q_26 = NULL;
        ATerm r_26 = NULL,v_26 = NULL;
        ATerm u_26 = NULL;
        t = not_null(m_26);
        {
          ATerm i_26 = t;
          int j_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(j_26);
            }
          else
            {
              t = i_26;
              t = (ATerm) ATempty;
            }
          {
            u_26 = t;
            if(((r_26 != NULL) && (r_26 != u_26)))
              _fail(u_26);
            else
              r_26 = u_26;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_26), not_null(r_26));
          {
            t = conc_0(t);
            {
              v_26 = t;
              if(((q_26 != NULL) && (q_26 != v_26)))
                _fail(v_26);
              else
                q_26 = v_26;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_j_25, not_null(m_26), not_null(q_26));
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
  ATerm e_27 = NULL,k_27 = NULL;
  ATerm o_26;
  o_26 = t;
  {
    ATerm l_27 = NULL,m_27 = NULL,n_27 = NULL;
    l_27 = t;
    d_27 :
    if(match_cons(l_27, sym__2))
      {
        m_27 = ATgetArgument(l_27, 0);
        n_27 = ATgetArgument(l_27, 1);
        {
          if(((e_27 != NULL) && (e_27 != m_27)))
            _fail(m_27);
          else
            e_27 = m_27;
          {
            if(((k_27 != NULL) && (k_27 != n_27)))
              _fail(n_27);
            else
              k_27 = n_27;
            t = SSL_table_remove(not_null(e_27), not_null(k_27));
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = o_26;
  return(t);
}
ATerm toggle_config_0 (ATerm t)
{
  ATerm z_27 = NULL,a_28 = NULL,b_28 = NULL;
  z_27 = t;
  y_27 :
  if(match_cons(z_27, sym__2))
    {
      a_28 = ATgetArgument(z_27, 0);
      b_28 = ATgetArgument(z_27, 1);
      {
        ATerm p_26 = t;
        int s_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = not_null(a_28);
            {
              t = get_config_0(t);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_j_25, not_null(a_28));
                t = table_remove_0(t);
              }
            }
            LocalPopChoice(s_26);
          }
        else
          {
            t = p_26;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(a_28), not_null(b_28));
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
  ATerm l_28 = NULL,m_28 = NULL,n_28 = NULL;
  l_28 = t;
  k_28 :
  if(match_cons(l_28, sym__2))
    {
      m_28 = ATgetArgument(l_28, 0);
      n_28 = ATgetArgument(l_28, 1);
      {
        ATerm q_28 = NULL;
        ATerm r_28 = NULL,t_28 = NULL;
        ATerm s_28 = NULL;
        t = not_null(m_28);
        {
          ATerm t_26 = t;
          int w_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(w_26);
            }
          else
            {
              t = t_26;
              t = (ATerm) ATempty;
            }
          {
            s_28 = t;
            if(((r_28 != NULL) && (r_28 != s_28)))
              _fail(s_28);
            else
              r_28 = s_28;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_28), not_null(n_28));
          {
            t = conc_0(t);
            {
              t_28 = t;
              if(((q_28 != NULL) && (q_28 != t_28)))
                _fail(t_28);
              else
                q_28 = t_28;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_j_25, not_null(m_28), not_null(q_28));
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
  ATerm x_26 = t;
  int y_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_6 (ATerm t)
      {
        ATerm z_30 = NULL;
        z_30 = t;
        x_28 :
        if(!(match_string(z_30, "-i")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm q_6 (ATerm t)
      {
        ATerm e_31 = NULL;
        ATerm z_26;
        z_26 = t;
        {
          ATerm a_31 = NULL;
          ATerm b_31 = NULL;
          b_31 = t;
          if(((a_31 != NULL) && (a_31 != b_31)))
            _fail(b_31);
          else
            a_31 = b_31;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_q_21, not_null(a_31));
            t = set_config_0(t);
          }
        }
        t = z_26;
        {
          ATerm f_31 = NULL;
          t = basename_0(t);
          {
            f_31 = t;
            if(((e_31 != NULL) && (e_31 != f_31)))
              _fail(f_31);
            else
              e_31 = f_31;
          }
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(e_31));
        }
        return(t);
      }
      ATerm r_6 (ATerm t)
      {
        t = term_a_27;
        return(t);
      }
      t = ArgOption_3(t, p_6, q_6, r_6);
      LocalPopChoice(y_26);
    }
  else
    {
      t = x_26;
      {
        ATerm b_27 = t;
        int c_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_6 (ATerm t)
            {
              ATerm g_31 = NULL;
              g_31 = t;
              j_29 :
              if(!(match_string(g_31, "-o")))
                {
                  if(!(match_string(g_31, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm t_6 (ATerm t)
            {
              ATerm m_31 = NULL;
              ATerm f_27;
              f_27 = t;
              {
                ATerm h_31 = NULL;
                ATerm l_31 = NULL;
                l_31 = t;
                if(((h_31 != NULL) && (h_31 != l_31)))
                  _fail(l_31);
                else
                  h_31 = l_31;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_f_17, not_null(h_31));
                  t = set_config_0(t);
                }
              }
              t = f_27;
              {
                ATerm n_31 = NULL;
                n_31 = t;
                if(((m_31 != NULL) && (m_31 != n_31)))
                  _fail(n_31);
                else
                  m_31 = n_31;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(m_31));
              }
              return(t);
            }
            ATerm u_6 (ATerm t)
            {
              t = term_g_27;
              return(t);
            }
            t = ArgOption_3(t, s_6, t_6, u_6);
            LocalPopChoice(c_27);
          }
        else
          {
            t = b_27;
            {
              ATerm h_27 = t;
              int i_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_6 (ATerm t)
                  {
                    ATerm o_31 = NULL;
                    o_31 = t;
                    m_29 :
                    if(!(match_string(o_31, "-I")))
                      {
                        if(!(match_string(o_31, "--Include")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm d_7 (ATerm t)
                  {
                    ATerm p_31 = NULL;
                    ATerm q_31 = NULL;
                    q_31 = t;
                    if(((p_31 != NULL) && (p_31 != q_31)))
                      _fail(q_31);
                    else
                      p_31 = q_31;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_n_23, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_31)), term_n_23));
                      t = extend_config_0(t);
                    }
                    t = term_j_27;
                    return(t);
                  }
                  ATerm j_7 (ATerm t)
                  {
                    t = term_o_27;
                    return(t);
                  }
                  t = ArgOption_3(t, z_6, d_7, j_7);
                  LocalPopChoice(i_27);
                }
              else
                {
                  t = h_27;
                  {
                    ATerm p_27 = t;
                    int q_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm k_7 (ATerm t)
                        {
                          ATerm r_31 = NULL;
                          r_31 = t;
                          o_29 :
                          if(!(match_string(r_31, "--main")))
                            {
                              if(!(match_string(r_31, "-m")))
                                {
                                  _fail(t);
                                }
                            }
                          return(t);
                        }
                        ATerm l_7 (ATerm t)
                        {
                          ATerm u_31 = NULL;
                          ATerm r_27;
                          r_27 = t;
                          {
                            ATerm s_31 = NULL;
                            ATerm t_31 = NULL;
                            t_31 = t;
                            if(((s_31 != NULL) && (s_31 != t_31)))
                              _fail(t_31);
                            else
                              s_31 = t_31;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_k_22, not_null(s_31));
                              t = set_config_0(t);
                            }
                          }
                          t = r_27;
                          {
                            ATerm v_31 = NULL;
                            v_31 = t;
                            if(((u_31 != NULL) && (u_31 != v_31)))
                              _fail(v_31);
                            else
                              u_31 = v_31;
                            t = (ATerm) ATmakeAppl(sym_Main_1, not_null(u_31));
                          }
                          return(t);
                        }
                        ATerm m_7 (ATerm t)
                        {
                          t = term_s_27;
                          return(t);
                        }
                        t = ArgOption_3(t, k_7, l_7, m_7);
                        LocalPopChoice(q_27);
                      }
                    else
                      {
                        t = p_27;
                        {
                          ATerm t_27 = t;
                          int u_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm p_7 (ATerm t)
                              {
                                ATerm w_31 = NULL;
                                w_31 = t;
                                r_29 :
                                if(!(match_string(w_31, "--C-include")))
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              ATerm q_7 (ATerm t)
                              {
                                ATerm x_31 = NULL;
                                ATerm a_32 = NULL;
                                a_32 = t;
                                if(((x_31 != NULL) && (x_31 != a_32)))
                                  _fail(a_32);
                                else
                                  x_31 = a_32;
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, term_r_19, (ATerm) ATinsert(ATempty, not_null(x_31)));
                                  t = post_extend_config_0(t);
                                }
                                t = term_j_27;
                                return(t);
                              }
                              ATerm t_7 (ATerm t)
                              {
                                t = term_v_27;
                                return(t);
                              }
                              t = ArgOption_3(t, p_7, q_7, t_7);
                              LocalPopChoice(u_27);
                            }
                          else
                            {
                              t = t_27;
                              {
                                ATerm w_27 = t;
                                int x_27 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm u_7 (ATerm t)
                                    {
                                      ATerm b_32 = NULL;
                                      b_32 = t;
                                      t_29 :
                                      if(!(match_string(b_32, "-CI")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm v_7 (ATerm t)
                                    {
                                      ATerm c_32 = NULL;
                                      ATerm d_32 = NULL;
                                      d_32 = t;
                                      if(((c_32 != NULL) && (c_32 != d_32)))
                                        _fail(d_32);
                                      else
                                        c_32 = d_32;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, term_o_18, (ATerm) ATinsert(ATempty, not_null(c_32)));
                                        t = extend_config_0(t);
                                      }
                                      t = term_j_27;
                                      return(t);
                                    }
                                    ATerm w_7 (ATerm t)
                                    {
                                      t = term_c_28;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, u_7, v_7, w_7);
                                    LocalPopChoice(x_27);
                                  }
                                else
                                  {
                                    t = w_27;
                                    {
                                      ATerm d_28 = t;
                                      int e_28 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm x_7 (ATerm t)
                                          {
                                            ATerm g_32 = NULL;
                                            g_32 = t;
                                            v_29 :
                                            if(!(match_string(g_32, "-CL")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm y_7 (ATerm t)
                                          {
                                            ATerm h_32 = NULL;
                                            ATerm i_32 = NULL;
                                            i_32 = t;
                                            if(((h_32 != NULL) && (h_32 != i_32)))
                                              _fail(i_32);
                                            else
                                              h_32 = i_32;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, term_n_17, (ATerm) ATinsert(ATempty, not_null(h_32)));
                                              t = extend_config_0(t);
                                            }
                                            t = term_j_27;
                                            return(t);
                                          }
                                          ATerm z_7 (ATerm t)
                                          {
                                            t = term_f_28;
                                            return(t);
                                          }
                                          t = ArgOption_3(t, x_7, y_7, z_7);
                                          LocalPopChoice(e_28);
                                        }
                                      else
                                        {
                                          t = d_28;
                                          {
                                            ATerm g_28 = t;
                                            int h_28 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm m_8 (ATerm t)
                                                {
                                                  ATerm j_32 = NULL;
                                                  j_32 = t;
                                                  x_29 :
                                                  if(!(match_string(j_32, "-c")))
                                                    {
                                                      _fail(t);
                                                    }
                                                  return(t);
                                                }
                                                ATerm n_8 (ATerm t)
                                                {
                                                  t = term_i_28;
                                                  t = set_config_0(t);
                                                  t = term_j_28;
                                                  return(t);
                                                }
                                                ATerm o_8 (ATerm t)
                                                {
                                                  t = term_o_28;
                                                  return(t);
                                                }
                                                t = Option_3(t, m_8, n_8, o_8);
                                                LocalPopChoice(h_28);
                                              }
                                            else
                                              {
                                                t = g_28;
                                                {
                                                  ATerm p_28 = t;
                                                  int u_28 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm p_8 (ATerm t)
                                                      {
                                                        ATerm k_32 = NULL;
                                                        k_32 = t;
                                                        y_29 :
                                                        if(!(match_string(k_32, "--ast")))
                                                          {
                                                            _fail(t);
                                                          }
                                                        return(t);
                                                      }
                                                      ATerm q_8 (ATerm t)
                                                      {
                                                        t = term_v_28;
                                                        t = set_config_0(t);
                                                        t = term_w_28;
                                                        return(t);
                                                      }
                                                      ATerm r_8 (ATerm t)
                                                      {
                                                        t = term_y_28;
                                                        return(t);
                                                      }
                                                      t = Option_3(t, p_8, q_8, r_8);
                                                      LocalPopChoice(u_28);
                                                    }
                                                  else
                                                    {
                                                      t = p_28;
                                                      {
                                                        ATerm z_28 = t;
                                                        int a_29 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm s_8 (ATerm t)
                                                            {
                                                              ATerm l_32 = NULL;
                                                              l_32 = t;
                                                              z_29 :
                                                              if(!(match_string(l_32, "-F")))
                                                                {
                                                                  _fail(t);
                                                                }
                                                              return(t);
                                                            }
                                                            ATerm v_8 (ATerm t)
                                                            {
                                                              t = term_b_29;
                                                              t = set_config_0(t);
                                                              t = term_c_29;
                                                              return(t);
                                                            }
                                                            ATerm w_8 (ATerm t)
                                                            {
                                                              t = term_d_29;
                                                              return(t);
                                                            }
                                                            t = Option_3(t, s_8, v_8, w_8);
                                                            LocalPopChoice(a_29);
                                                          }
                                                        else
                                                          {
                                                            t = z_28;
                                                            {
                                                              ATerm e_29 = t;
                                                              int f_29 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm z_8 (ATerm t)
                                                                  {
                                                                    ATerm m_32 = NULL;
                                                                    m_32 = t;
                                                                    a_30 :
                                                                    if(!(match_string(m_32, "--norm")))
                                                                      {
                                                                        _fail(t);
                                                                      }
                                                                    return(t);
                                                                  }
                                                                  ATerm a_9 (ATerm t)
                                                                  {
                                                                    t = term_h_29;
                                                                    t = set_config_0(t);
                                                                    t = term_i_29;
                                                                    return(t);
                                                                  }
                                                                  ATerm b_9 (ATerm t)
                                                                  {
                                                                    t = term_k_29;
                                                                    return(t);
                                                                  }
                                                                  t = Option_3(t, z_8, a_9, b_9);
                                                                  LocalPopChoice(f_29);
                                                                }
                                                              else
                                                                {
                                                                  t = e_29;
                                                                  {
                                                                    ATerm l_29 = t;
                                                                    int n_29 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm c_9 (ATerm t)
                                                                        {
                                                                          ATerm n_32 = NULL;
                                                                          n_32 = t;
                                                                          b_30 :
                                                                          if(!(match_string(n_32, "--keep")))
                                                                            {
                                                                              _fail(t);
                                                                            }
                                                                          return(t);
                                                                        }
                                                                        ATerm j_9 (ATerm t)
                                                                        {
                                                                          ATerm p_29;
                                                                          p_29 = t;
                                                                          {
                                                                            ATerm o_32 = NULL;
                                                                            ATerm p_32 = NULL;
                                                                            t = string_to_int_0(t);
                                                                            {
                                                                              p_32 = t;
                                                                              if(((o_32 != NULL) && (o_32 != p_32)))
                                                                                _fail(p_32);
                                                                              else
                                                                                o_32 = p_32;
                                                                            }
                                                                            {
                                                                              t = (ATerm) ATmakeAppl(sym__2, term_r_23, not_null(o_32));
                                                                              t = set_config_0(t);
                                                                            }
                                                                          }
                                                                          t = p_29;
                                                                          return(t);
                                                                        }
                                                                        ATerm k_9 (ATerm t)
                                                                        {
                                                                          t = term_q_29;
                                                                          return(t);
                                                                        }
                                                                        t = ArgOption_3(t, c_9, j_9, k_9);
                                                                        LocalPopChoice(n_29);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = l_29;
                                                                        {
                                                                          ATerm s_29 = t;
                                                                          int u_29 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              ATerm l_9 (ATerm t)
                                                                              {
                                                                                ATerm q_32 = NULL;
                                                                                q_32 = t;
                                                                                d_30 :
                                                                                if(!(match_string(q_32, "--fusion")))
                                                                                  {
                                                                                    _fail(t);
                                                                                  }
                                                                                return(t);
                                                                              }
                                                                              ATerm m_9 (ATerm t)
                                                                              {
                                                                                t = term_w_29;
                                                                                t = toggle_config_0(t);
                                                                                t = term_c_30;
                                                                                return(t);
                                                                              }
                                                                              ATerm p_9 (ATerm t)
                                                                              {
                                                                                t = term_g_30;
                                                                                return(t);
                                                                              }
                                                                              t = Option_3(t, l_9, m_9, p_9);
                                                                              LocalPopChoice(u_29);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = s_29;
                                                                              {
                                                                                ATerm h_30 = t;
                                                                                int j_30 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm q_9 (ATerm t)
                                                                                    {
                                                                                      ATerm r_32 = NULL;
                                                                                      r_32 = t;
                                                                                      e_30 :
                                                                                      if(!(match_string(r_32, "--trace-all")))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm t_9 (ATerm t)
                                                                                    {
                                                                                      t = term_l_30;
                                                                                      t = set_config_0(t);
                                                                                      t = term_m_30;
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm u_9 (ATerm t)
                                                                                    {
                                                                                      t = term_n_30;
                                                                                      return(t);
                                                                                    }
                                                                                    t = Option_3(t, q_9, t_9, u_9);
                                                                                    LocalPopChoice(j_30);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = h_30;
                                                                                    {
                                                                                      ATerm o_30 = t;
                                                                                      int p_30 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm x_9 (ATerm t)
                                                                                          {
                                                                                            ATerm s_32 = NULL;
                                                                                            s_32 = t;
                                                                                            f_30 :
                                                                                            if(!(match_string(s_32, "-t")))
                                                                                              {
                                                                                                _fail(t);
                                                                                              }
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm y_9 (ATerm t)
                                                                                          {
                                                                                            ATerm v_32 = NULL;
                                                                                            ATerm q_30;
                                                                                            q_30 = t;
                                                                                            {
                                                                                              ATerm t_32 = NULL;
                                                                                              ATerm u_32 = NULL;
                                                                                              u_32 = t;
                                                                                              if(((t_32 != NULL) && (t_32 != u_32)))
                                                                                                _fail(u_32);
                                                                                              else
                                                                                                t_32 = u_32;
                                                                                              {
                                                                                                t = (ATerm) ATmakeAppl(sym__2, term_r_30, (ATerm) ATinsert(ATempty, not_null(t_32)));
                                                                                                t = extend_config_0(t);
                                                                                              }
                                                                                            }
                                                                                            t = q_30;
                                                                                            {
                                                                                              v_32 = t;
                                                                                              t = (ATerm) ATmakeAppl(sym_Trace_1, not_null(v_32));
                                                                                            }
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm b_10 (ATerm t)
                                                                                          {
                                                                                            t = term_s_30;
                                                                                            return(t);
                                                                                          }
                                                                                          t = ArgOption_3(t, x_9, y_9, b_10);
                                                                                          LocalPopChoice(p_30);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = o_30;
                                                                                          {
                                                                                            ATerm u_30 = t;
                                                                                            int v_30 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm c_10 (ATerm t)
                                                                                                {
                                                                                                  ATerm x_32 = NULL;
                                                                                                  x_32 = t;
                                                                                                  i_30 :
                                                                                                  if(!(match_string(x_32, "--verbose")))
                                                                                                    {
                                                                                                      _fail(t);
                                                                                                    }
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm f_10 (ATerm t)
                                                                                                {
                                                                                                  ATerm c_33 = NULL;
                                                                                                  ATerm c_31;
                                                                                                  c_31 = t;
                                                                                                  {
                                                                                                    ATerm a_33 = NULL;
                                                                                                    ATerm b_33 = NULL;
                                                                                                    t = string_to_int_0(t);
                                                                                                    {
                                                                                                      b_33 = t;
                                                                                                      if(((a_33 != NULL) && (a_33 != b_33)))
                                                                                                        _fail(b_33);
                                                                                                      else
                                                                                                        a_33 = b_33;
                                                                                                    }
                                                                                                    {
                                                                                                      t = (ATerm) ATmakeAppl(sym__2, term_d_15, not_null(a_33));
                                                                                                      t = set_config_0(t);
                                                                                                    }
                                                                                                  }
                                                                                                  t = c_31;
                                                                                                  {
                                                                                                    ATerm d_33 = NULL;
                                                                                                    d_33 = t;
                                                                                                    if(((c_33 != NULL) && (c_33 != d_33)))
                                                                                                      _fail(d_33);
                                                                                                    else
                                                                                                      c_33 = d_33;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(c_33));
                                                                                                  }
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm g_10 (ATerm t)
                                                                                                {
                                                                                                  t = term_d_31;
                                                                                                  return(t);
                                                                                                }
                                                                                                t = ArgOption_3(t, c_10, f_10, g_10);
                                                                                                LocalPopChoice(v_30);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = u_30;
                                                                                                {
                                                                                                  ATerm i_31 = t;
                                                                                                  int j_31 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      ATerm j_10 (ATerm t)
                                                                                                      {
                                                                                                        ATerm f_33 = NULL;
                                                                                                        f_33 = t;
                                                                                                        t_30 :
                                                                                                        if(!(match_string(f_33, "-S")))
                                                                                                          {
                                                                                                            if(!(match_string(f_33, "--silent")))
                                                                                                              {
                                                                                                                _fail(t);
                                                                                                              }
                                                                                                          }
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm k_10 (ATerm t)
                                                                                                      {
                                                                                                        t = term_k_31;
                                                                                                        t = set_config_0(t);
                                                                                                        t = term_y_31;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm n_10 (ATerm t)
                                                                                                      {
                                                                                                        t = term_z_31;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      t = Option_3(t, j_10, k_10, n_10);
                                                                                                      LocalPopChoice(j_31);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = i_31;
                                                                                                      {
                                                                                                        ATerm e_32 = t;
                                                                                                        int f_32 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm o_10 (ATerm t)
                                                                                                            {
                                                                                                              ATerm i_33 = NULL;
                                                                                                              i_33 = t;
                                                                                                              w_30 :
                                                                                                              if(!(match_string(i_33, "-h")))
                                                                                                                {
                                                                                                                  if(!(match_string(i_33, "--help")))
                                                                                                                    {
                                                                                                                      _fail(t);
                                                                                                                    }
                                                                                                                }
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm r_10 (ATerm t)
                                                                                                            {
                                                                                                              t = term_y_32;
                                                                                                              t = set_config_0(t);
                                                                                                              t = term_z_32;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm s_10 (ATerm t)
                                                                                                            {
                                                                                                              t = term_e_33;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            t = Option_3(t, o_10, r_10, s_10);
                                                                                                            LocalPopChoice(f_32);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = e_32;
                                                                                                            {
                                                                                                              ATerm g_33 = t;
                                                                                                              int h_33 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  ATerm v_10 (ATerm t)
                                                                                                                  {
                                                                                                                    ATerm j_33 = NULL;
                                                                                                                    j_33 = t;
                                                                                                                    x_30 :
                                                                                                                    if(!(match_string(j_33, "--man")))
                                                                                                                      {
                                                                                                                        _fail(t);
                                                                                                                      }
                                                                                                                    return(t);
                                                                                                                  }
                                                                                                                  ATerm w_10 (ATerm t)
                                                                                                                  {
                                                                                                                    t = term_m_33;
                                                                                                                    t = set_config_0(t);
                                                                                                                    t = term_n_33;
                                                                                                                    return(t);
                                                                                                                  }
                                                                                                                  ATerm z_10 (ATerm t)
                                                                                                                  {
                                                                                                                    t = term_o_33;
                                                                                                                    return(t);
                                                                                                                  }
                                                                                                                  t = Option_3(t, v_10, w_10, z_10);
                                                                                                                  LocalPopChoice(h_33);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = g_33;
                                                                                                                  {
                                                                                                                    ATerm a_11 (ATerm t)
                                                                                                                    {
                                                                                                                      ATerm k_33 = NULL;
                                                                                                                      k_33 = t;
                                                                                                                      y_30 :
                                                                                                                      if(!(match_string(k_33, "-v")))
                                                                                                                        {
                                                                                                                          if(!(match_string(k_33, "--version")))
                                                                                                                            {
                                                                                                                              _fail(t);
                                                                                                                            }
                                                                                                                        }
                                                                                                                      return(t);
                                                                                                                    }
                                                                                                                    ATerm d_11 (ATerm t)
                                                                                                                    {
                                                                                                                      t = term_q_33;
                                                                                                                      t = set_config_0(t);
                                                                                                                      t = term_r_33;
                                                                                                                      return(t);
                                                                                                                    }
                                                                                                                    ATerm e_11 (ATerm t)
                                                                                                                    {
                                                                                                                      t = term_s_33;
                                                                                                                      return(t);
                                                                                                                    }
                                                                                                                    t = Option_3(t, a_11, d_11, e_11);
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm b_34 = NULL;
  b_34 = t;
  t = SSL_table_destroy(not_null(b_34));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_0 (ATerm))
{
  ATerm f_34 = NULL;
  ATerm g_34 = NULL;
  t = k_0(t);
  {
    g_34 = t;
    if(((f_34 != NULL) && (f_34 != g_34)))
      _fail(g_34);
    else
      f_34 = g_34;
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_34), term_i_34), term_h_34), term_e_34), term_t_33), term_d_34), term_t_33), term_t_33), term_c_34), term_t_33), term_a_34), term_z_33), term_t_33), term_y_33), term_x_33), not_null(f_34)), term_w_33), term_v_33), term_t_33), term_u_33), term_t_33);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm o_34 = NULL,p_34 = NULL,q_34 = NULL;
  q_34 = t;
  n_34 :
  if(((ATgetType(q_34) == AT_LIST) && ((ATermList) q_34 != ATempty)))
    {
      o_34 = ATgetFirst((ATermList) q_34);
      p_34 = (ATerm) ATgetNext((ATermList) q_34);
      {
        ATerm w_34 = NULL;
        t = not_null(p_34);
        {
          ATerm k_34;
          k_34 = t;
          {
            ATerm x_34 = NULL,z_34 = NULL,b_35 = NULL;
            ATerm l_34;
            l_34 = t;
            {
              ATerm y_34 = NULL;
              t = j_0(t);
              {
                y_34 = t;
                if(((x_34 != NULL) && (x_34 != y_34)))
                  _fail(y_34);
                else
                  x_34 = y_34;
              }
            }
            t = l_34;
            {
              ATerm a_35 = NULL;
              t = not_null(o_34);
              {
                t = i_0(t);
                {
                  a_35 = t;
                  if(((z_34 != NULL) && (z_34 != a_35)))
                    _fail(a_35);
                  else
                    z_34 = a_35;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(x_34)), not_null(z_34));
                {
                  b_35 = t;
                  if(((w_34 != NULL) && (w_34 != b_35)))
                    _fail(b_35);
                  else
                    w_34 = b_35;
                }
              }
            }
          }
          t = k_34;
          {
            ATerm h_11 (ATerm t)
            {
              t = not_null(w_34);
              return(t);
            }
            t = reverse_acc_2(t, i_0, h_11);
          }
        }
      }
    }
  else
    {
      if(((ATermList) q_34 == ATempty))
        {
          {
            t = term_x_21;
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
  ATerm i_11 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, i_11);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm f_0 (ATerm))
{
  ATerm i_35 = NULL;
  ATerm j_35 = NULL;
  t = term_x_21;
  {
    t = f_0(t);
    {
      j_35 = t;
      if(((i_35 != NULL) && (i_35 != j_35)))
        _fail(j_35);
      else
        i_35 = j_35;
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_34), not_null(i_35)), term_m_34);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm m_59 (ATerm))
{
  ATerm q_35 = NULL,r_35 = NULL;
  q_35 = t;
  p_35 :
  if(match_cons(q_35, sym_Program_1))
    {
      r_35 = ATgetArgument(q_35, 0);
      {
        ATerm u_35 = NULL,w_35 = NULL;
        ATerm v_35 = NULL;
        t = SSLgetAnnotations(not_null(q_35));
        {
          v_35 = t;
          if(((u_35 != NULL) && (u_35 != v_35)))
            _fail(v_35);
          else
            u_35 = v_35;
        }
        {
          t = not_null(r_35);
          {
            ATerm y_35 = NULL;
            t = m_59(t);
            {
              w_35 = t;
              {
                ATerm z_35 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(w_35)), not_null(u_35));
                {
                  z_35 = t;
                  if(((y_35 != NULL) && (y_35 != z_35)))
                    _fail(z_35);
                  else
                    y_35 = z_35;
                }
                t = not_null(y_35);
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
  ATerm j_36 = NULL;
  ATerm l_11 (ATerm t)
  {
    ATerm m_11 (ATerm t)
    {
      ATerm k_36 = NULL;
      k_36 = t;
      if(((j_36 != NULL) && (j_36 != k_36)))
        _fail(k_36);
      else
        j_36 = k_36;
      return(t);
    }
    t = Program_1(t, m_11);
    return(t);
  }
  t = option_defined_1(t, l_11);
  {
    ATerm n_11 (ATerm t)
    {
      ATerm l_36 = NULL;
      ATerm m_36 = NULL;
      t = term_x_21;
      {
        ATerm s_11 (ATerm t)
        {
          t = not_null(j_36);
          return(t);
        }
        t = short_description_1(t, s_11);
        {
          t = concat_strings_0(t);
          {
            m_36 = t;
            if(((l_36 != NULL) && (l_36 != m_36)))
              _fail(m_36);
            else
              l_36 = m_36;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_17, (ATerm) ATinsert(ATempty, not_null(l_36)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, n_11);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_17, (ATerm) ATinsert(ATempty, term_s_34));
      {
        t = printnl_0(t);
        {
          t = term_v_34;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm t_11 (ATerm t)
                {
                  ATerm n_36 = NULL;
                  n_36 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_y_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_36)), term_c_35));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, t_11);
                {
                  ATerm u_11 (ATerm t)
                  {
                    ATerm p_36 = NULL;
                    ATerm q_36 = NULL;
                    t = term_x_21;
                    {
                      ATerm v_11 (ATerm t)
                      {
                        t = not_null(j_36);
                        return(t);
                      }
                      t = long_description_1(t, v_11);
                      {
                        t = concat_strings_0(t);
                        {
                          q_36 = t;
                          if(((p_36 != NULL) && (p_36 != q_36)))
                            _fail(q_36);
                          else
                            p_36 = q_36;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_y_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_36)), term_d_35));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, u_11);
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
ATerm Undefined_1 (ATerm t, ATerm n_59 (ATerm))
{
  ATerm a_37 = NULL,b_37 = NULL;
  a_37 = t;
  z_36 :
  if(match_cons(a_37, sym_Undefined_1))
    {
      b_37 = ATgetArgument(a_37, 0);
      {
        ATerm e_37 = NULL,g_37 = NULL;
        ATerm f_37 = NULL;
        t = SSLgetAnnotations(not_null(a_37));
        {
          f_37 = t;
          if(((e_37 != NULL) && (e_37 != f_37)))
            _fail(f_37);
          else
            e_37 = f_37;
        }
        {
          t = not_null(b_37);
          {
            ATerm i_37 = NULL;
            t = n_59(t);
            {
              g_37 = t;
              {
                ATerm j_37 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(g_37)), not_null(e_37));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm u_66 (ATerm))
{
  t = fetch_1(t, u_66);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm s_37 = NULL;
  s_37 = t;
  r_37 :
  if(match_cons(s_37, sym_Help_0))
    {
      ATerm u_37 = NULL,w_37 = NULL;
      ATerm e_35;
      e_35 = t;
      {
        ATerm v_37 = NULL;
        t = SSLgetAnnotations(not_null(s_37));
        {
          v_37 = t;
          if(((u_37 != NULL) && (u_37 != v_37)))
            _fail(v_37);
          else
            u_37 = v_37;
        }
      }
      t = e_35;
      {
        ATerm x_37 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(u_37));
        {
          x_37 = t;
          if(((w_37 != NULL) && (w_37 != x_37)))
            _fail(x_37);
          else
            w_37 = x_37;
        }
        t = not_null(w_37);
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
  ATerm d_38 = NULL,e_38 = NULL,f_38 = NULL;
  d_38 = t;
  c_38 :
  if(match_cons(d_38, sym__2))
    {
      e_38 = ATgetArgument(d_38, 0);
      f_38 = ATgetArgument(d_38, 1);
      t = SSL_table_get(not_null(e_38), not_null(f_38));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm r_38 = NULL,s_38 = NULL,t_38 = NULL,u_38 = NULL;
  r_38 = t;
  q_38 :
  if(match_cons(r_38, sym__3))
    {
      s_38 = ATgetArgument(r_38, 0);
      t_38 = ATgetArgument(r_38, 1);
      u_38 = ATgetArgument(r_38, 2);
      {
        ATerm f_35;
        f_35 = t;
        {
          ATerm y_38 = NULL;
          ATerm z_38 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_38), not_null(t_38));
          {
            ATerm g_35 = t;
            int h_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(h_35);
              }
            else
              {
                t = g_35;
                t = (ATerm) ATempty;
              }
            {
              z_38 = t;
              if(((y_38 != NULL) && (y_38 != z_38)))
                _fail(z_38);
              else
                y_38 = z_38;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(s_38), not_null(t_38), (ATerm) ATinsert(CheckATermList(not_null(y_38)), not_null(u_38)));
            t = table_put_0(t);
          }
        }
        t = f_35;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm u_65 (ATerm))
{
  ATerm d_39 = NULL;
  ATerm e_39 = NULL;
  t = term_x_21;
  {
    t = u_65(t);
    {
      e_39 = t;
      if(((d_39 != NULL) && (d_39 != e_39)))
        _fail(e_39);
      else
        d_39 = e_39;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_t_34, term_u_34, not_null(d_39));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm k_39 = NULL,l_39 = NULL,m_39 = NULL;
  k_39 = t;
  j_39 :
  if(match_string(k_39, "register-usage-info"))
    {
      t = register_usage_1(t, e_0);
    }
  else
    {
      if(((ATgetType(k_39) == AT_LIST) && ((ATermList) k_39 != ATempty)))
        {
          l_39 = ATgetFirst((ATermList) k_39);
          m_39 = (ATerm) ATgetNext((ATermList) k_39);
          {
            ATerm r_39 = NULL;
            ATerm k_35;
            k_35 = t;
            {
              t = not_null(l_39);
              t = a_0(t);
            }
            t = k_35;
            {
              ATerm s_39 = NULL;
              t = term_x_21;
              {
                t = b_0(t);
                {
                  s_39 = t;
                  if(((r_39 != NULL) && (r_39 != s_39)))
                    _fail(s_39);
                  else
                    r_39 = s_39;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(m_39)), not_null(r_39));
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
  ATerm w_11 (ATerm t)
  {
    ATerm x_39 = NULL;
    x_39 = t;
    w_39 :
    if(!(match_string(x_39, "--help")))
      {
        if(!(match_string(x_39, "-h")))
          {
            if(!(match_string(x_39, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm x_11 (ATerm t)
  {
    t = term_z_32;
    return(t);
  }
  ATerm g_12 (ATerm t)
  {
    t = term_l_35;
    return(t);
  }
  t = Option_3(t, w_11, x_11, g_12);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm a_40 = NULL,b_40 = NULL,c_40 = NULL;
  a_40 = t;
  z_39 :
  if(((ATgetType(a_40) == AT_LIST) && ((ATermList) a_40 != ATempty)))
    {
      b_40 = ATgetFirst((ATermList) a_40);
      c_40 = (ATerm) ATgetNext((ATermList) a_40);
      t = (ATerm) ATinsert(CheckATermList(not_null(c_40)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(b_40)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm i_40 = NULL,j_40 = NULL,k_40 = NULL;
  i_40 = t;
  h_40 :
  if(match_cons(i_40, sym__2))
    {
      j_40 = ATgetArgument(i_40, 0);
      k_40 = ATgetArgument(i_40, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_j_25, not_null(j_40), not_null(k_40));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm s_65 (ATerm))
{
  ATerm m_35;
  m_35 = t;
  {
    ATerm h_12 (ATerm t)
    {
      t = term_n_35;
      t = s_65(t);
      return(t);
    }
    t = try_1(t, h_12);
  }
  t = m_35;
  {
    ATerm i_12 (ATerm t)
    {
      ATerm s_40 = NULL;
      ATerm o_35;
      o_35 = t;
      {
        ATerm q_40 = NULL;
        ATerm r_40 = NULL;
        r_40 = t;
        if(((q_40 != NULL) && (q_40 != r_40)))
          _fail(r_40);
        else
          q_40 = r_40;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_s_35, not_null(q_40));
          t = set_config_0(t);
        }
      }
      t = o_35;
      {
        ATerm t_40 = NULL;
        t_40 = t;
        if(((s_40 != NULL) && (s_40 != t_40)))
          _fail(t_40);
        else
          s_40 = t_40;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(s_40));
      }
      return(t);
    }
    ATerm j_12 (ATerm t)
    {
      ATerm t_35 = t;
      int x_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_36 = t;
          int b_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(b_36);
            }
          else
            {
              t = a_36;
              {
                t = s_65(t);
                t = Cons_2(t, _id, j_12);
              }
            }
          LocalPopChoice(x_35);
        }
      else
        {
          t = t_35;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, i_12, j_12);
  }
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm r_65 (ATerm))
{
  ATerm y_40 = NULL;
  ATerm c_36;
  c_36 = t;
  {
    t = term_d_36;
    t = table_put_0(t);
  }
  t = c_36;
  {
    ATerm k_12 (ATerm t)
    {
      ATerm e_36 = t;
      int f_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_65(t);
          LocalPopChoice(f_36);
        }
      else
        {
          t = e_36;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, k_12);
    {
      ATerm n_12 (ATerm t)
      {
        ATerm g_36 = t;
        int h_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_b_15;
                t = exit_0(t);
              }
            }
            LocalPopChoice(h_36);
          }
        else
          {
            t = g_36;
            {
              ATerm o_12 (ATerm t)
              {
                ATerm t_12 (ATerm t)
                {
                  ATerm z_40 = NULL;
                  z_40 = t;
                  if(((y_40 != NULL) && (y_40 != z_40)))
                    _fail(z_40);
                  else
                    y_40 = z_40;
                  return(t);
                }
                t = Undefined_1(t, t_12);
                return(t);
              }
              t = option_defined_1(t, o_12);
              {
                ATerm i_36;
                i_36 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_y_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_40)), term_o_36));
                  t = printnl_0(t);
                }
                t = i_36;
                {
                  t = system_usage_0(t);
                  {
                    t = term_v_22;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, n_12);
      {
        ATerm r_36;
        r_36 = t;
        {
          t = term_t_34;
          t = table_destroy_0(t);
        }
        t = r_36;
      }
    }
  }
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm d_41 = NULL,e_41 = NULL,f_41 = NULL;
  d_41 = t;
  c_41 :
  if(match_cons(d_41, sym__2))
    {
      e_41 = ATgetArgument(d_41, 0);
      f_41 = ATgetArgument(d_41, 1);
      {
        t = not_null(e_41);
        {
          ATerm u_12 (ATerm t)
          {
            t = not_null(f_41);
            return(t);
          }
          t = at_end_1(t, u_12);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm r_48 (ATerm), ATerm s_48 (ATerm))
{
  ATerm q_41 = NULL,r_41 = NULL,s_41 = NULL;
  q_41 = t;
  p_41 :
  if(match_cons(q_41, sym__2))
    {
      r_41 = ATgetArgument(q_41, 0);
      s_41 = ATgetArgument(q_41, 1);
      {
        ATerm w_41 = NULL,y_41 = NULL;
        ATerm x_41 = NULL;
        t = SSLgetAnnotations(not_null(q_41));
        {
          x_41 = t;
          if(((w_41 != NULL) && (w_41 != x_41)))
            _fail(x_41);
          else
            w_41 = x_41;
        }
        {
          t = not_null(r_41);
          {
            ATerm a_42 = NULL;
            t = r_48(t);
            {
              y_41 = t;
              {
                t = not_null(s_41);
                {
                  ATerm c_42 = NULL;
                  t = s_48(t);
                  {
                    a_42 = t;
                    {
                      ATerm d_42 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(y_41), not_null(a_42)), not_null(w_41));
                      {
                        d_42 = t;
                        if(((c_42 != NULL) && (c_42 != d_42)))
                          _fail(d_42);
                        else
                          c_42 = d_42;
                      }
                      t = not_null(c_42);
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
ATerm at_suffix_1 (ATerm t, ATerm i_78 (ATerm))
{
  ATerm j_42 (ATerm t)
  {
    ATerm s_36 = t;
    int t_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_78(t);
        LocalPopChoice(t_36);
      }
    else
      {
        t = s_36;
        t = Cons_2(t, _id, j_42);
      }
    return(t);
  }
  t = j_42(t);
  return(t);
}
ATerm has_extension_1 (ATerm t, ATerm x_69 (ATerm))
{
  ATerm m_42 = NULL;
  ATerm u_36;
  u_36 = t;
  {
    ATerm n_42 = NULL;
    t = x_69(t);
    {
      t = explode_string_0(t);
      {
        n_42 = t;
        if(((m_42 != NULL) && (m_42 != n_42)))
          _fail(n_42);
        else
          m_42 = n_42;
      }
    }
  }
  t = u_36;
  {
    ATerm v_36;
    v_36 = t;
    {
      t = explode_string_0(t);
      {
        ATerm v_12 (ATerm t)
        {
          ATerm o_42 = NULL;
          o_42 = t;
          if(((m_42 != NULL) && (m_42 != o_42)))
            _fail(o_42);
          else
            m_42 = o_42;
          return(t);
        }
        t = at_suffix_1(t, v_12);
      }
    }
    t = v_36;
  }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm f_71 (ATerm))
{
  ATerm w_36 = t;
  int x_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(x_36);
    }
  else
    {
      t = w_36;
      {
        ATerm y_36 = t;
        int c_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_12 (ATerm t)
            {
              t = filter_1(t, f_71);
              return(t);
            }
            t = Cons_2(t, f_71, w_12);
            LocalPopChoice(c_37);
          }
        else
          {
            t = y_36;
            {
              ATerm y_42 = NULL,z_42 = NULL,a_43 = NULL;
              y_42 = t;
              x_42 :
              if(((ATgetType(y_42) == AT_LIST) && ((ATermList) y_42 != ATempty)))
                {
                  z_42 = ATgetFirst((ATermList) y_42);
                  a_43 = (ATerm) ATgetNext((ATermList) y_42);
                  {
                    t = not_null(a_43);
                    t = filter_1(t, f_71);
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
  ATerm e_43 = NULL;
  e_43 = t;
  t = SSL_readdir(not_null(e_43));
  return(t);
}
ATerm find_plugins_2 (ATerm t, ATerm g_61 (ATerm), ATerm h_61 (ATerm))
{
  t = g_61(t);
  {
    ATerm x_12 (ATerm t)
    {
      ATerm j_43 = NULL;
      j_43 = t;
      {
        t = readdir_0(t);
        {
          ATerm c_13 (ATerm t)
          {
            ATerm l_43 = NULL;
            t = has_extension_1(t, h_61);
            {
              ATerm m_43 = NULL;
              m_43 = t;
              if(((l_43 != NULL) && (l_43 != m_43)))
                _fail(m_43);
              else
                l_43 = m_43;
              {
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(l_43)), term_d_37), not_null(j_43));
                t = concat_strings_0(t);
              }
            }
            return(t);
          }
          t = filter_1(t, c_13);
        }
      }
      return(t);
    }
    t = filter_1(t, x_12);
    t = concat_0(t);
  }
  return(t);
}
ATerm import_config_files_1 (ATerm t, ATerm j_61 (ATerm))
{
  ATerm h_37;
  h_37 = t;
  {
    t = j_61(t);
    {
      ATerm d_13 (ATerm t)
      {
        ATerm q_43 = NULL;
        ATerm g_13 (ATerm t)
        {
          ATerm h_13 (ATerm t)
          {
            t = term_k_37;
            return(t);
          }
          t = debug_1(t, h_13);
          return(t);
        }
        t = if_verbose2_1(t, g_13);
        {
          t = ReadFromFile_0(t);
          {
            ATerm r_43 = NULL;
            r_43 = t;
            if(((q_43 != NULL) && (q_43 != r_43)))
              _fail(r_43);
            else
              q_43 = r_43;
            {
              t = (ATerm) ATmakeAppl(sym__2, term_j_25, not_null(q_43));
              t = table_putlist_0(t);
            }
          }
        }
        return(t);
      }
      t = map_1(t, d_13);
    }
  }
  t = h_37;
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm v_43 = NULL;
  ATerm x_43 = NULL;
  v_43 = t;
  {
    ATerm l_37;
    l_37 = t;
    {
      ATerm y_43 = NULL;
      t = term_m_37;
      {
        y_43 = t;
        if(((x_43 != NULL) && (x_43 != y_43)))
          _fail(y_43);
        else
          x_43 = y_43;
      }
    }
    t = l_37;
    {
      t = SSL_open_file(not_null(v_43), not_null(x_43));
      t = SSL_close_file(not_null(v_43));
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm e_78 (ATerm))
{
  ATerm b_44 (ATerm t)
  {
    ATerm n_37 = t;
    int o_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, b_44);
        LocalPopChoice(o_37);
      }
    else
      {
        t = n_37;
        {
          t = Nil_0(t);
          t = e_78(t);
        }
      }
    return(t);
  }
  t = b_44(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm p_37 = t;
  int q_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(q_37);
    }
  else
    {
      t = p_37;
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
                ATerm i_13 (ATerm t)
                {
                  t = not_null(g_44);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, i_13);
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
ATerm fetch_1 (ATerm t, ATerm y_77 (ATerm))
{
  ATerm l_44 (ATerm t)
  {
    ATerm t_37 = t;
    int y_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, y_77, _id);
        LocalPopChoice(y_37);
      }
    else
      {
        t = t_37;
        t = Cons_2(t, _id, l_44);
      }
    return(t);
  }
  t = l_44(t);
  return(t);
}
ATerm fetch_elem_1 (ATerm t, ATerm a_78 (ATerm))
{
  ATerm n_44 = NULL;
  ATerm j_13 (ATerm t)
  {
    ATerm o_44 = NULL;
    t = a_78(t);
    {
      o_44 = t;
      if(((n_44 != NULL) && (n_44 != o_44)))
        _fail(o_44);
      else
        n_44 = o_44;
    }
    return(t);
  }
  t = fetch_1(t, j_13);
  t = not_null(n_44);
  return(t);
}
ATerm find_config_file_2 (ATerm t, ATerm y_60 (ATerm), ATerm z_60 (ATerm))
{
  ATerm z_37 = t;
  int a_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = y_60(t);
      {
        ATerm o_13 (ATerm t)
        {
          ATerm s_44 = NULL,u_44 = NULL;
          ATerm b_38;
          b_38 = t;
          {
            ATerm t_44 = NULL;
            t_44 = t;
            if(((s_44 != NULL) && (s_44 != t_44)))
              _fail(t_44);
            else
              s_44 = t_44;
          }
          t = b_38;
          {
            ATerm v_44 = NULL;
            t = z_60(t);
            {
              v_44 = t;
              if(((u_44 != NULL) && (u_44 != v_44)))
                _fail(v_44);
              else
                u_44 = v_44;
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(u_44)), term_d_37), not_null(s_44));
              {
                t = concat_strings_0(t);
                t = file_exists_0(t);
              }
            }
          }
          return(t);
        }
        t = fetch_elem_1(t, o_13);
      }
      LocalPopChoice(a_38);
    }
  else
    {
      t = z_37;
      {
        t = term_g_38;
        {
          t = debug_1(t, z_60);
          _fail(t);
        }
      }
    }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm a_45 = NULL,b_45 = NULL,c_45 = NULL;
  ATerm h_38;
  h_38 = t;
  {
    ATerm d_45 = NULL,e_45 = NULL,f_45 = NULL,g_45 = NULL;
    d_45 = t;
    z_44 :
    if(match_cons(d_45, sym__3))
      {
        e_45 = ATgetArgument(d_45, 0);
        f_45 = ATgetArgument(d_45, 1);
        g_45 = ATgetArgument(d_45, 2);
        {
          if(((a_45 != NULL) && (a_45 != e_45)))
            _fail(e_45);
          else
            a_45 = e_45;
          {
            if(((b_45 != NULL) && (b_45 != f_45)))
              _fail(f_45);
            else
              b_45 = f_45;
            {
              if(((c_45 != NULL) && (c_45 != g_45)))
                _fail(g_45);
              else
                c_45 = g_45;
              t = SSL_table_put(not_null(a_45), not_null(b_45), not_null(c_45));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = h_38;
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm m_45 = NULL;
  m_45 = t;
  l_45 :
  if(((ATermList) m_45 == ATempty))
    {
      {
        ATerm o_45 = NULL,q_45 = NULL;
        ATerm i_38;
        i_38 = t;
        {
          ATerm p_45 = NULL;
          t = SSLgetAnnotations(not_null(m_45));
          {
            p_45 = t;
            if(((o_45 != NULL) && (o_45 != p_45)))
              _fail(p_45);
            else
              o_45 = p_45;
          }
        }
        t = i_38;
        {
          ATerm r_45 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(o_45));
          {
            r_45 = t;
            if(((q_45 != NULL) && (q_45 != r_45)))
              _fail(r_45);
            else
              q_45 = r_45;
          }
          t = not_null(q_45);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm map_1 (ATerm t, ATerm p_77 (ATerm))
{
  ATerm w_45 (ATerm t)
  {
    ATerm j_38 = t;
    int k_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(k_38);
      }
    else
      {
        t = j_38;
        t = Cons_2(t, p_77, w_45);
      }
    return(t);
  }
  t = w_45(t);
  return(t);
}
ATerm table_putlist_0 (ATerm t)
{
  ATerm b_46 = NULL,c_46 = NULL,g_46 = NULL;
  b_46 = t;
  a_46 :
  if(match_cons(b_46, sym__2))
    {
      c_46 = ATgetArgument(b_46, 0);
      g_46 = ATgetArgument(b_46, 1);
      {
        t = not_null(g_46);
        {
          ATerm p_13 (ATerm t)
          {
            ATerm j_46 = NULL,k_46 = NULL,p_46 = NULL;
            j_46 = t;
            z_45 :
            if(match_cons(j_46, sym__2))
              {
                k_46 = ATgetArgument(j_46, 0);
                p_46 = ATgetArgument(j_46, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(c_46), not_null(k_46), not_null(p_46));
                  t = table_put_0(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, p_13);
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
  ATerm v_46 = NULL;
  v_46 = t;
  t = SSL_ReadFromFile(not_null(v_46));
  return(t);
}
ATerm import_config_file_1 (ATerm t, ATerm i_61 (ATerm))
{
  ATerm l_38;
  l_38 = t;
  {
    ATerm z_46 = NULL;
    t = i_61(t);
    {
      ATerm q_13 (ATerm t)
      {
        ATerm r_13 (ATerm t)
        {
          t = term_k_37;
          return(t);
        }
        t = debug_1(t, r_13);
        return(t);
      }
      t = if_verbose2_1(t, q_13);
      {
        t = ReadFromFile_0(t);
        {
          ATerm a_47 = NULL;
          a_47 = t;
          if(((z_46 != NULL) && (z_46 != a_47)))
            _fail(a_47);
          else
            z_46 = a_47;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_j_25, not_null(z_46));
            t = table_putlist_0(t);
          }
        }
      }
    }
  }
  t = l_38;
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm d_47 = NULL;
  d_47 = t;
  t = SSL_implode_string(not_null(d_47));
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm h_47 = NULL;
  h_47 = t;
  t = SSL_explode_string(not_null(h_47));
  return(t);
}
ATerm get_path_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm m_38 = t;
    int n_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_47 (ATerm t)
        {
          ATerm o_38 = t;
          int p_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, m_47);
              LocalPopChoice(p_38);
            }
          else
            {
              t = o_38;
              {
                ATerm v_13 (ATerm t)
                {
                  ATerm l_47 = NULL;
                  l_47 = t;
                  k_47 :
                  if(!(match_int(l_47, 47)))
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
        t = m_47(t);
        LocalPopChoice(n_38);
      }
    else
      {
        t = m_38;
        t = (ATerm) ATempty;
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm e_60 (ATerm), ATerm f_60 (ATerm))
{
  ATerm t_47 = NULL,j_48 = NULL,q_48 = NULL;
  t_47 = t;
  s_47 :
  if(((ATgetType(t_47) == AT_LIST) && ((ATermList) t_47 != ATempty)))
    {
      j_48 = ATgetFirst((ATermList) t_47);
      q_48 = (ATerm) ATgetNext((ATermList) t_47);
      {
        ATerm w_48 = NULL,y_48 = NULL;
        ATerm x_48 = NULL;
        t = SSLgetAnnotations(not_null(t_47));
        {
          x_48 = t;
          if(((w_48 != NULL) && (w_48 != x_48)))
            _fail(x_48);
          else
            w_48 = x_48;
        }
        {
          t = not_null(j_48);
          {
            ATerm a_49 = NULL;
            t = e_60(t);
            {
              y_48 = t;
              {
                t = not_null(q_48);
                {
                  ATerm c_49 = NULL;
                  t = f_60(t);
                  {
                    a_49 = t;
                    {
                      ATerm d_49 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(a_49)), not_null(y_48)), not_null(w_48));
                      {
                        d_49 = t;
                        if(((c_49 != NULL) && (c_49 != d_49)))
                          _fail(d_49);
                        else
                          c_49 = d_49;
                      }
                      t = not_null(c_49);
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
ATerm command_line_options_0 (ATerm t)
{
  ATerm p_49 = NULL,r_49 = NULL,t_49 = NULL;
  ATerm v_38;
  v_38 = t;
  {
    ATerm z_13 (ATerm t)
    {
      ATerm q_49 = NULL;
      t = get_path_0(t);
      {
        q_49 = t;
        if(((p_49 != NULL) && (p_49 != q_49)))
          _fail(q_49);
        else
          p_49 = q_49;
      }
      return(t);
    }
    t = Cons_2(t, z_13, _id);
  }
  t = v_38;
  {
    ATerm w_38;
    w_38 = t;
    {
      ATerm s_49 = NULL;
      t = get_conf_pkgdatadir();
      {
        s_49 = t;
        if(((r_49 != NULL) && (r_49 != s_49)))
          _fail(s_49);
        else
          r_49 = s_49;
      }
    }
    t = w_38;
    {
      ATerm x_38;
      x_38 = t;
      {
        ATerm u_49 = NULL;
        t = get_conf_datadir();
        {
          u_49 = t;
          if(((t_49 != NULL) && (t_49 != u_49)))
            _fail(u_49);
          else
            t_49 = u_49;
        }
      }
      t = x_38;
      {
        ATerm a_14 (ATerm t)
        {
          ATerm d_14 (ATerm t)
          {
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_49)), not_null(p_49));
            return(t);
          }
          ATerm e_14 (ATerm t)
          {
            t = term_a_39;
            return(t);
          }
          t = find_config_file_2(t, d_14, e_14);
          return(t);
        }
        t = import_config_file_1(t, a_14);
        {
          ATerm f_14 (ATerm t)
          {
            ATerm k_14 (ATerm t)
            {
              ATerm v_49 = NULL;
              ATerm w_49 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(t_49), term_b_39);
              {
                t = conc_strings_0(t);
                {
                  w_49 = t;
                  if(((v_49 != NULL) && (v_49 != w_49)))
                    _fail(w_49);
                  else
                    v_49 = w_49;
                }
              }
              t = (ATerm) ATinsert(ATempty, not_null(v_49));
              return(t);
            }
            ATerm l_14 (ATerm t)
            {
              t = term_c_39;
              return(t);
            }
            t = find_plugins_2(t, k_14, l_14);
            return(t);
          }
          t = import_config_files_1(t, f_14);
          {
            t = parse_options_1(t, sc_options_0);
            {
              ATerm m_14 (ATerm t)
              {
                ATerm x_49 = NULL;
                t = term_l_33;
                {
                  t = get_config_0(t);
                  {
                    ATerm y_49 = NULL;
                    t = term_f_39;
                    {
                      t = get_config_0(t);
                      {
                        y_49 = t;
                        if(((x_49 != NULL) && (x_49 != y_49)))
                          _fail(y_49);
                        else
                          x_49 = y_49;
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_g_39, (ATerm) ATinsert(ATempty, not_null(x_49)));
                      {
                        t = call_0(t);
                        {
                          t = term_b_15;
                          t = exit_0(t);
                        }
                      }
                    }
                  }
                }
                return(t);
              }
              t = try_1(t, m_14);
              {
                ATerm o_14 (ATerm t)
                {
                  t = term_p_33;
                  {
                    t = get_config_0(t);
                    {
                      t = sc_version_0(t);
                      {
                        t = term_b_15;
                        t = exit_0(t);
                      }
                    }
                  }
                  return(t);
                }
                t = try_1(t, o_14);
                {
                  ATerm h_39 = t;
                  int i_39 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm z_49 = NULL;
                      ATerm a_50 = NULL;
                      t = term_q_21;
                      {
                        t = get_config_0(t);
                        {
                          t = basename_0(t);
                          {
                            a_50 = t;
                            if(((z_49 != NULL) && (z_49 != a_50)))
                              _fail(a_50);
                            else
                              z_49 = a_50;
                          }
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym__2, not_null(z_49), term_g_17);
                      LocalPopChoice(i_39);
                    }
                  else
                    {
                      t = h_39;
                      {
                        t = (ATerm) ATinsert(ATempty, term_n_39);
                        t = fatal_error_0(t);
                      }
                    }
                  {
                    t = sc_announce_0(t);
                    {
                      ATerm p_14 (ATerm t)
                      {
                        ATerm o_39;
                        o_39 = t;
                        {
                          t = term_q_21;
                          {
                            t = get_config_0(t);
                            {
                              ATerm q_14 (ATerm t)
                              {
                                t = term_p_39;
                                return(t);
                              }
                              t = debug_1(t, q_14);
                            }
                          }
                        }
                        t = o_39;
                        return(t);
                      }
                      t = if_verbose1_1(t, p_14);
                    }
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
ATerm sc_0 (ATerm t)
{
  ATerm q_39 = t;
  int t_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = command_line_options_0(t);
      {
        ATerm r_14 (ATerm t)
        {
          ATerm w_14 (ATerm t)
          {
            ATerm k_50 = NULL;
            ATerm l_50 = NULL;
            l_50 = t;
            if(((k_50 != NULL) && (k_50 != l_50)))
              _fail(l_50);
            else
              k_50 = l_50;
            {
              t = (ATerm) ATmakeAppl(sym__2, term_y_17, (ATerm) ATinsert(CheckATermList(not_null(k_50)), term_u_39));
              t = printnl_0(t);
            }
            return(t);
          }
          t = if_verbose1_1(t, w_14);
          return(t);
        }
        t = profile_p__2(t, r_14, compile_0);
        {
          ATerm x_14 (ATerm t)
          {
            ATerm m_50 = NULL;
            ATerm n_50 = NULL;
            t = run_time_0(t);
            {
              n_50 = t;
              if(((m_50 != NULL) && (m_50 != n_50)))
                _fail(n_50);
              else
                m_50 = n_50;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, term_y_17, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_39), not_null(m_50)), term_v_39));
              t = printnl_0(t);
            }
            return(t);
          }
          t = if_verbose2_1(t, x_14);
          {
            t = term_b_15;
            t = exit_0(t);
          }
        }
      }
      LocalPopChoice(t_39);
    }
  else
    {
      t = q_39;
      {
        ATerm o_50 = NULL;
        ATerm p_50 = NULL;
        t = run_time_0(t);
        {
          p_50 = t;
          if(((o_50 != NULL) && (o_50 != p_50)))
            _fail(p_50);
          else
            o_50 = p_50;
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_y_17, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_39), not_null(o_50)), term_d_40));
          {
            t = printnl_0(t);
            {
              t = term_v_22;
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
