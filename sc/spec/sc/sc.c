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
ATerm term_n_39;
ATerm term_m_39;
ATerm term_i_39;
ATerm term_h_39;
ATerm term_a_39;
ATerm term_w_38;
ATerm term_r_38;
ATerm term_n_38;
ATerm term_m_38;
ATerm term_l_38;
ATerm term_k_38;
ATerm term_n_37;
ATerm term_t_36;
ATerm term_r_36;
ATerm term_p_36;
ATerm term_x_35;
ATerm term_k_35;
ATerm term_e_35;
ATerm term_x_34;
ATerm term_s_34;
ATerm term_m_34;
ATerm term_l_34;
ATerm term_i_34;
ATerm term_h_34;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_i_33;
ATerm term_h_33;
ATerm term_g_33;
ATerm term_e_33;
ATerm term_d_33;
ATerm term_c_33;
ATerm term_b_33;
ATerm term_a_33;
ATerm term_z_32;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_n_32;
ATerm term_m_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_v_31;
ATerm term_f_31;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_r_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_w_28;
ATerm term_r_28;
ATerm term_q_28;
ATerm term_o_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_g_28;
ATerm term_d_28;
ATerm term_w_27;
ATerm term_t_27;
ATerm term_q_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_e_27;
ATerm term_a_27;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_s_25;
ATerm term_h_25;
ATerm term_f_25;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_k_23;
ATerm term_i_23;
ATerm term_f_23;
ATerm term_c_23;
ATerm term_y_22;
ATerm term_j_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_c_22;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_v_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_f_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_t_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_y_17;
ATerm term_v_17;
ATerm term_n_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_v_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_t_14;
void init_constant_terms (void)
{
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("rm", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-f", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree1", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".s1", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".s2", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".s3", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".s4", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".s5", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".s6", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".s7", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".s8", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".s9", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".ac", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".c.abox", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling C code", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("C.pp", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize2", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize1", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol(".sdefs", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to ", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("frontend", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to ", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-dep", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--norm", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("The Stratego Compiler (version ", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i file            Main module to compile (required)\n", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f    Write output to f", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(sym_Ignore_0);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d|--Include d   Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d\n", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(sym__2, term_h_18, term_t_21);
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(sym_CC_0);
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(sym__2, term_f_22, term_t_21);
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(sym_AST_0);
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(sym__2, term_v_20, term_t_21);
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(sym_FRONTEND_0);
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(sym__2, term_k_23, term_t_21);
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(sym_NORM_0);
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--norm             Do not remove intermediate results", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(sym__2, term_o_20, term_t_21);
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(sym_FUSION_0);
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(sym__2, term_i_30, term_t_21);
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(sym_TraceAll_0);
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all        Instrument all definitions to print tracing information", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-t f               Instrument definition of f to print tracing information\n", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i       Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(sym__2, term_v_14, term_t_14);
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_14);
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-h", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(sym__2, term_m_32, term_t_21);
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(sym__2, term_s_32, term_t_21);
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(sym_Manual_0);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(sym__2, term_w_32, term_t_21);
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version       Display program's version", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   \n", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   The Stratego Compiler translates Stratego specifications to C code\n", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   Typical usage:\n", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("     ", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i mod\n", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   to compile module mod\n", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   paradigm of rewriting strategies. For documentation see\n", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("                 http://www.stratego-language.org", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   Copyright (C) 1998-2002 Eelco Visser <visser@acm.org>\n", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   This program is free software; you can redistribute it and/or modify\n", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   it under the terms of the GNU General Public License as published by\n", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   the Free Software Foundation; either version 2, or (at your option)\n", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   any later version.\n", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(sym__2, term_g_34, term_h_34);
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(sym__3, term_g_34, term_h_34, (ATerm) ATempty);
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(ATmakeSymbol("importing: ", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue));
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(ATmakeSymbol("sc.config", 0, ATtrue));
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(ATmakeSymbol("/sc-plugins", 0, ATtrue));
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(ATmakeSymbol(".plugin", 0, ATtrue));
  ATprotect(&(term_n_38));
  term_n_38 = (ATerm) ATmakeAppl(ATmakeSymbol("manual", 0, ATtrue));
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(ATmakeSymbol("cat", 0, ATtrue));
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue));
}
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm o_71 (ATerm), ATerm p_71 (ATerm));
ATerm crush_2 (ATerm, ATerm d_73 (ATerm), ATerm e_73 (ATerm));
ATerm run_time_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm g_60 (ATerm));
ATerm rm_files_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm RZip2_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm genzip_4 (ATerm, ATerm n_75 (ATerm), ATerm o_75 (ATerm), ATerm p_75 (ATerm), ATerm q_75 (ATerm));
ATerm rzip_1 (ATerm, ATerm b_76 (ATerm));
ATerm remove_intermediates_0 (ATerm);
ATerm link_object_code_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm if_verbose3_1 (ATerm, ATerm h_60 (ATerm));
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm b_68 (ATerm));
ATerm c_to_object_code_0 (ATerm);
ATerm c_compile_0 (ATerm);
ATerm pipe_2 (ATerm, ATerm m_64 (ATerm), ATerm n_64 (ATerm));
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
ATerm pipe_3 (ATerm, ATerm o_64 (ATerm), ATerm p_64 (ATerm), ATerm q_64 (ATerm));
ATerm frontend_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm apply_to_file_1 (ATerm, ATerm d_65 (ATerm));
ATerm transform_file_2 (ATerm, ATerm b_65 (ATerm), ATerm c_65 (ATerm));
ATerm AddMain_1 (ATerm, ATerm k_86 (ATerm));
ATerm add_main_0 (ATerm);
ATerm output_ast_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm parse_0 (ATerm);
ATerm front_0 (ATerm);
ATerm compile_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm f_60 (ATerm));
ATerm ticks_to_seconds_0 (ATerm);
ATerm self_children_sys_time_0 (ATerm);
ATerm add_0 (ATerm);
ATerm self_children_user_time_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm diff_times_0 (ATerm);
ATerm times_0 (ATerm);
ATerm profile_p__2 (ATerm, ATerm v_67 (ATerm), ATerm w_67 (ATerm));
ATerm debug_1 (ATerm, ATerm a_68 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm sc_announce_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm basename_1 (ATerm, ATerm j_69 (ATerm));
ATerm basename_0 (ATerm);
ATerm sc_version_0 (ATerm);
ATerm try_1 (ATerm, ATerm t_85 (ATerm));
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
ATerm Program_1 (ATerm, ATerm h_59 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm i_59 (ATerm));
ATerm option_defined_1 (ATerm, ATerm j_66 (ATerm));
ATerm Help_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm p_65 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm n_65 (ATerm));
ATerm parse_options_1 (ATerm, ATerm m_65 (ATerm));
ATerm conc_0 (ATerm);
ATerm _2 (ATerm, ATerm m_48 (ATerm), ATerm n_48 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm at_suffix_1 (ATerm, ATerm s_77 (ATerm));
ATerm has_extension_1 (ATerm, ATerm m_69 (ATerm));
ATerm filter_1 (ATerm, ATerm u_70 (ATerm));
ATerm readdir_0 (ATerm);
ATerm find_plugins_2 (ATerm, ATerm b_61 (ATerm), ATerm c_61 (ATerm));
ATerm import_config_files_1 (ATerm, ATerm e_61 (ATerm));
ATerm file_exists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm o_77 (ATerm));
ATerm concat_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm i_77 (ATerm));
ATerm fetch_elem_1 (ATerm, ATerm k_77 (ATerm));
ATerm find_config_file_2 (ATerm, ATerm t_60 (ATerm), ATerm u_60 (ATerm));
ATerm table_put_0 (ATerm);
ATerm Nil_0 (ATerm);
ATerm map_1 (ATerm, ATerm a_77 (ATerm));
ATerm table_putlist_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm import_config_file_1 (ATerm, ATerm d_61 (ATerm));
ATerm implode_string_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm get_path_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm z_59 (ATerm), ATerm a_60 (ATerm));
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
        ATerm q_14;
        q_14 = t;
        t = SSL_printnl(not_null(v_1), not_null(w_1));
        t = q_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm o_71 (ATerm), ATerm p_71 (ATerm))
{
  ATerm r_14 = t;
  int s_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = o_71(t);
      LocalPopChoice(s_14);
    }
  else
    {
      t = r_14;
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
                t = foldr_2(t, o_71, p_71);
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
                t = p_71(t);
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
ATerm crush_2 (ATerm t, ATerm d_73 (ATerm), ATerm e_73 (ATerm))
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
      t = foldr_2(t, d_73, e_73);
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
      t = term_t_14;
      return(t);
    }
    t = crush_2(t, c_0, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm g_60 (ATerm))
{
  ATerm d_0 (ATerm t)
  {
    ATerm u_14;
    u_14 = t;
    {
      ATerm c_3 = NULL;
      ATerm d_3 = NULL;
      t = term_v_14;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_3), term_w_14);
        t = geq_0(t);
      }
    }
    t = u_14;
    t = g_60(t);
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
    ATerm x_14;
    x_14 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_14, (ATerm) ATinsert(CheckATermList(not_null(g_3)), term_z_14));
      t = call_0(t);
    }
    t = x_14;
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
ATerm genzip_4 (ATerm t, ATerm n_75 (ATerm), ATerm o_75 (ATerm), ATerm p_75 (ATerm), ATerm q_75 (ATerm))
{
  ATerm k_4 (ATerm t)
  {
    ATerm a_15 = t;
    int f_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_75(t);
        LocalPopChoice(f_15);
      }
    else
      {
        t = a_15;
        {
          t = o_75(t);
          {
            t = _2(t, q_75, k_4);
            t = p_75(t);
          }
        }
      }
    return(t);
  }
  t = k_4(t);
  return(t);
}
ATerm rzip_1 (ATerm t, ATerm b_76 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, RZip2_0, Zip3_0, b_76);
  return(t);
}
ATerm remove_intermediates_0 (ATerm t)
{
  ATerm n_4 = NULL,o_4 = NULL,p_4 = NULL;
  n_4 = t;
  m_4 :
  if(match_cons(n_4, sym__2))
    {
      o_4 = ATgetArgument(n_4, 0);
      p_4 = ATgetArgument(n_4, 1);
      {
        ATerm g_15;
        g_15 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_4), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_16), term_p_16), term_m_16), term_l_16), term_k_16), term_j_16), term_i_16), term_h_16), term_g_16), term_f_16), term_e_16), term_d_16), term_c_16), term_b_16));
          {
            t = rzip_1(t, conc_strings_0);
            t = rm_files_0(t);
          }
        }
        t = g_15;
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
  ATerm x_4 = NULL,z_4 = NULL;
  ATerm g_0 (ATerm t)
  {
    ATerm h_0 (ATerm t)
    {
      t = term_v_16;
      return(t);
    }
    t = say_1(t, h_0);
    return(t);
  }
  t = if_verbose2_1(t, g_0);
  {
    ATerm w_16;
    w_16 = t;
    {
      ATerm y_4 = NULL;
      t = conc_strings_0(t);
      {
        y_4 = t;
        if(((x_4 != NULL) && (x_4 != y_4)))
          _fail(y_4);
        else
          x_4 = y_4;
      }
    }
    t = w_16;
    {
      ATerm o_0 (ATerm t)
      {
        ATerm q_0 (ATerm t)
        {
          t = term_x_16;
          t = get_config_0(t);
          return(t);
        }
        t = try_1(t, q_0);
        return(t);
      }
      ATerm p_0 (ATerm t)
      {
        t = term_y_16;
        return(t);
      }
      t = _2(t, o_0, p_0);
      {
        ATerm e_17;
        e_17 = t;
        {
          ATerm a_5 = NULL;
          t = conc_strings_0(t);
          {
            a_5 = t;
            if(((z_4 != NULL) && (z_4 != a_5)))
              _fail(a_5);
            else
              z_4 = a_5;
          }
        }
        t = e_17;
        {
          ATerm f_17;
          f_17 = t;
          {
            ATerm b_5 = NULL;
            ATerm c_5 = NULL;
            t = term_i_17;
            {
              t = get_config_0(t);
              {
                c_5 = t;
                if(((b_5 != NULL) && (b_5 != c_5)))
                  _fail(c_5);
                else
                  b_5 = c_5;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, term_j_17, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(b_5)), not_null(z_4)), term_x_16), not_null(x_4)));
              {
                ATerm r_0 (ATerm t)
                {
                  ATerm l_17;
                  l_17 = t;
                  {
                    ATerm d_5 = NULL,f_5 = NULL;
                    ATerm m_17;
                    m_17 = t;
                    {
                      ATerm e_5 = NULL;
                      t = Fst_0(t);
                      {
                        e_5 = t;
                        if(((d_5 != NULL) && (d_5 != e_5)))
                          _fail(e_5);
                        else
                          d_5 = e_5;
                      }
                    }
                    t = m_17;
                    {
                      ATerm g_5 = NULL;
                      t = Snd_0(t);
                      {
                        g_5 = t;
                        if(((f_5 != NULL) && (f_5 != g_5)))
                          _fail(g_5);
                        else
                          f_5 = g_5;
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym__2, term_n_17, (ATerm) ATinsert(CheckATermList(not_null(f_5)), not_null(d_5)));
                        t = printnl_0(t);
                      }
                    }
                  }
                  t = l_17;
                  return(t);
                }
                t = if_verbose3_1(t, r_0);
                t = call_0(t);
              }
            }
          }
          t = f_17;
        }
      }
    }
  }
  return(t);
}
ATerm Snd_0 (ATerm t)
{
  ATerm t_5 = NULL;
  ATerm v_5 = NULL,w_5 = NULL,x_5 = NULL;
  t_5 = t;
  {
    ATerm y_5 = NULL;
    ATerm a_6 = NULL,b_6 = NULL,c_6 = NULL,d_6 = NULL,e_6 = NULL,f_6 = NULL,g_6 = NULL;
    t = not_null(t_5);
    {
      y_5 = t;
      {
        t = SSL_explode_term(not_null(y_5));
        {
          a_6 = t;
          p_5 :
          if(match_cons(a_6, sym__2))
            {
              b_6 = ATgetArgument(a_6, 0);
              c_6 = ATgetArgument(a_6, 1);
              q_5 :
              if(match_string(b_6, ""))
                {
                  r_5 :
                  if(((ATgetType(c_6) == AT_LIST) && ((ATermList) c_6 != ATempty)))
                    {
                      d_6 = ATgetFirst((ATermList) c_6);
                      e_6 = (ATerm) ATgetNext((ATermList) c_6);
                      s_5 :
                      if(((ATgetType(e_6) == AT_LIST) && ((ATermList) e_6 != ATempty)))
                        {
                          f_6 = ATgetFirst((ATermList) e_6);
                          g_6 = (ATerm) ATgetNext((ATermList) e_6);
                          {
                            if(((v_5 != NULL) && (v_5 != d_6)))
                              _fail(d_6);
                            else
                              v_5 = d_6;
                            {
                              if(((x_5 != NULL) && (x_5 != f_6)))
                                _fail(f_6);
                              else
                                x_5 = f_6;
                              if(((w_5 != NULL) && (w_5 != g_6)))
                                _fail(g_6);
                              else
                                w_5 = g_6;
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
    t = not_null(x_5);
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm q_6 = NULL;
  ATerm s_6 = NULL,t_6 = NULL;
  q_6 = t;
  {
    ATerm u_6 = NULL;
    ATerm w_6 = NULL,x_6 = NULL,y_6 = NULL,z_6 = NULL,a_7 = NULL;
    t = not_null(q_6);
    {
      u_6 = t;
      {
        t = SSL_explode_term(not_null(u_6));
        {
          w_6 = t;
          n_6 :
          if(match_cons(w_6, sym__2))
            {
              x_6 = ATgetArgument(w_6, 0);
              y_6 = ATgetArgument(w_6, 1);
              o_6 :
              if(match_string(x_6, ""))
                {
                  p_6 :
                  if(((ATgetType(y_6) == AT_LIST) && ((ATermList) y_6 != ATempty)))
                    {
                      z_6 = ATgetFirst((ATermList) y_6);
                      a_7 = (ATerm) ATgetNext((ATermList) y_6);
                      {
                        if(((t_6 != NULL) && (t_6 != z_6)))
                          _fail(z_6);
                        else
                          t_6 = z_6;
                        if(((s_6 != NULL) && (s_6 != a_7)))
                          _fail(a_7);
                        else
                          s_6 = a_7;
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
    t = not_null(t_6);
  }
  return(t);
}
ATerm if_verbose3_1 (ATerm t, ATerm h_60 (ATerm))
{
  ATerm s_0 (ATerm t)
  {
    ATerm u_17;
    u_17 = t;
    {
      ATerm f_7 = NULL;
      ATerm g_7 = NULL;
      t = term_v_14;
      {
        t = get_config_0(t);
        {
          g_7 = t;
          if(((f_7 != NULL) && (f_7 != g_7)))
            _fail(g_7);
          else
            f_7 = g_7;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_7), term_v_17);
        t = geq_0(t);
      }
    }
    t = u_17;
    t = h_60(t);
    return(t);
  }
  t = try_1(t, s_0);
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm w_17;
  w_17 = t;
  {
    ATerm j_7 = NULL;
    ATerm k_7 = NULL;
    k_7 = t;
    if(((j_7 != NULL) && (j_7 != k_7)))
      _fail(k_7);
    else
      j_7 = k_7;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_17, (ATerm) ATinsert(ATempty, not_null(j_7)));
      t = printnl_0(t);
    }
  }
  t = w_17;
  return(t);
}
ATerm say_1 (ATerm t, ATerm b_68 (ATerm))
{
  ATerm x_17;
  x_17 = t;
  {
    t = b_68(t);
    t = debug_0(t);
  }
  t = x_17;
  return(t);
}
ATerm c_to_object_code_0 (ATerm t)
{
  ATerm s_7 = NULL,u_7 = NULL;
  ATerm t_0 (ATerm t)
  {
    ATerm u_0 (ATerm t)
    {
      t = term_y_17;
      return(t);
    }
    t = say_1(t, u_0);
    return(t);
  }
  t = if_verbose2_1(t, t_0);
  {
    ATerm z_17;
    z_17 = t;
    {
      ATerm t_7 = NULL;
      t = conc_strings_0(t);
      {
        t_7 = t;
        if(((s_7 != NULL) && (s_7 != t_7)))
          _fail(t_7);
        else
          s_7 = t_7;
      }
    }
    t = z_17;
    {
      ATerm w_0 (ATerm t)
      {
        t = term_q_16;
        return(t);
      }
      t = _2(t, _id, w_0);
      {
        ATerm e_18;
        e_18 = t;
        {
          ATerm v_7 = NULL;
          t = conc_strings_0(t);
          {
            v_7 = t;
            if(((u_7 != NULL) && (u_7 != v_7)))
              _fail(v_7);
            else
              u_7 = v_7;
          }
        }
        t = e_18;
        {
          ATerm f_18;
          f_18 = t;
          {
            ATerm w_7 = NULL;
            ATerm x_7 = NULL,z_7 = NULL;
            ATerm y_7 = NULL;
            t = term_g_18;
            {
              t = get_config_0(t);
              {
                y_7 = t;
                if(((x_7 != NULL) && (x_7 != y_7)))
                  _fail(y_7);
                else
                  x_7 = y_7;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(x_7), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(u_7)), term_x_16), not_null(s_7)), term_h_18));
              {
                t = conc_0(t);
                {
                  z_7 = t;
                  if(((w_7 != NULL) && (w_7 != z_7)))
                    _fail(z_7);
                  else
                    w_7 = z_7;
                }
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, term_j_17, not_null(w_7));
              {
                ATerm x_0 (ATerm t)
                {
                  ATerm o_18;
                  o_18 = t;
                  {
                    ATerm a_8 = NULL,c_8 = NULL;
                    ATerm p_18;
                    p_18 = t;
                    {
                      ATerm b_8 = NULL;
                      t = Fst_0(t);
                      {
                        b_8 = t;
                        if(((a_8 != NULL) && (a_8 != b_8)))
                          _fail(b_8);
                        else
                          a_8 = b_8;
                      }
                    }
                    t = p_18;
                    {
                      ATerm d_8 = NULL;
                      t = Snd_0(t);
                      {
                        d_8 = t;
                        if(((c_8 != NULL) && (c_8 != d_8)))
                          _fail(d_8);
                        else
                          c_8 = d_8;
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym__2, term_n_17, (ATerm) ATinsert(CheckATermList(not_null(c_8)), not_null(a_8)));
                        t = printnl_0(t);
                      }
                    }
                  }
                  t = o_18;
                  return(t);
                }
                t = if_verbose3_1(t, x_0);
                t = call_0(t);
              }
            }
          }
          t = f_18;
        }
      }
    }
  }
  return(t);
}
ATerm c_compile_0 (ATerm t)
{
  ATerm q_18 = t;
  int r_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_18;
      s_18 = t;
      {
        t = term_h_18;
        t = get_config_0(t);
      }
      t = s_18;
      LocalPopChoice(r_18);
    }
  else
    {
      t = q_18;
      {
        ATerm y_0 (ATerm t)
        {
          ATerm a_1 (ATerm t)
          {
            ATerm l_8 = NULL;
            ATerm m_8 = NULL;
            m_8 = t;
            if(((l_8 != NULL) && (l_8 != m_8)))
              _fail(m_8);
            else
              l_8 = m_8;
            {
              t = (ATerm) ATmakeAppl(sym__2, term_n_17, (ATerm) ATinsert(CheckATermList(not_null(l_8)), term_t_18));
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
ATerm pipe_2 (ATerm t, ATerm m_64 (ATerm), ATerm n_64 (ATerm))
{
  ATerm b_1 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = pipe_3(t, m_64, n_64, b_1);
  return(t);
}
ATerm abox2text_0 (ATerm t)
{
  ATerm c_1 (ATerm t)
  {
    t = term_y_18;
    t = get_config_0(t);
    return(t);
  }
  ATerm d_1 (ATerm t)
  {
    t = term_z_18;
    return(t);
  }
  t = pipe_2(t, c_1, d_1);
  return(t);
}
ATerm ac2abox_0 (ATerm t)
{
  ATerm e_1 (ATerm t)
  {
    t = term_a_19;
    t = get_config_0(t);
    return(t);
  }
  ATerm f_1 (ATerm t)
  {
    t = term_p_16;
    return(t);
  }
  ATerm g_1 (ATerm t)
  {
    ATerm p_8 = NULL;
    ATerm q_8 = NULL;
    t = term_b_19;
    {
      t = get_config_0(t);
      {
        q_8 = t;
        if(((p_8 != NULL) && (p_8 != q_8)))
          _fail(q_8);
        else
          p_8 = q_8;
      }
    }
    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_8)), term_c_19);
    return(t);
  }
  t = pipe_3(t, e_1, f_1, g_1);
  return(t);
}
ATerm s2c_0 (ATerm t)
{
  ATerm h_1 (ATerm t)
  {
    t = term_d_19;
    t = get_config_0(t);
    return(t);
  }
  ATerm i_1 (ATerm t)
  {
    t = term_m_16;
    return(t);
  }
  ATerm k_1 (ATerm t)
  {
    ATerm v_8 = NULL,x_8 = NULL;
    ATerm e_19;
    e_19 = t;
    {
      ATerm w_8 = NULL;
      t = pass_verbose_0(t);
      {
        w_8 = t;
        if(((v_8 != NULL) && (v_8 != w_8)))
          _fail(w_8);
        else
          v_8 = w_8;
      }
    }
    t = e_19;
    {
      ATerm a_9 = NULL;
      t = term_f_19;
      {
        t = get_config_0(t);
        {
          ATerm l_1 (ATerm t)
          {
            ATerm y_8 = NULL;
            ATerm z_8 = NULL;
            z_8 = t;
            if(((y_8 != NULL) && (y_8 != z_8)))
              _fail(z_8);
            else
              y_8 = z_8;
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_8)), term_f_19);
            return(t);
          }
          t = map_1(t, l_1);
          {
            t = concat_0(t);
            {
              a_9 = t;
              if(((x_8 != NULL) && (x_8 != a_9)))
                _fail(a_9);
              else
                x_8 = a_9;
            }
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_8), (ATerm) ATinsert(CheckATermList(not_null(x_8)), term_u_19));
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
    t = term_v_19;
    t = get_config_0(t);
    return(t);
  }
  ATerm n_1 (ATerm t)
  {
    ATerm f_9 = NULL;
    ATerm g_9 = NULL;
    t = pass_verbose_0(t);
    {
      g_9 = t;
      if(((f_9 != NULL) && (f_9 != g_9)))
        _fail(g_9);
      else
        f_9 = g_9;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(f_9)), term_u_19);
    return(t);
  }
  t = pipe_3(t, m_1, _id, n_1);
  return(t);
}
ATerm canonicalize_0 (ATerm t)
{
  ATerm o_1 (ATerm t)
  {
    t = term_w_19;
    t = get_config_0(t);
    return(t);
  }
  ATerm p_1 (ATerm t)
  {
    t = term_l_16;
    return(t);
  }
  ATerm q_1 (ATerm t)
  {
    ATerm j_9 = NULL;
    ATerm k_9 = NULL;
    t = pass_verbose_0(t);
    {
      k_9 = t;
      if(((j_9 != NULL) && (j_9 != k_9)))
        _fail(k_9);
      else
        j_9 = k_9;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(j_9)), term_u_19);
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
      ATerm n_9 = NULL;
      ATerm o_9 = NULL;
      o_9 = t;
      if(((n_9 != NULL) && (n_9 != o_9)))
        _fail(o_9);
      else
        n_9 = o_9;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_17, (ATerm) ATinsert(CheckATermList(not_null(n_9)), term_x_19));
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
    t = term_y_19;
    t = get_config_0(t);
    return(t);
  }
  ATerm y_1 (ATerm t)
  {
    t = term_k_16;
    return(t);
  }
  ATerm z_1 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(r_9)), term_u_19);
    return(t);
  }
  t = pipe_3(t, x_1, y_1, z_1);
  return(t);
}
ATerm compile_match_0 (ATerm t)
{
  ATerm a_2 (ATerm t)
  {
    t = term_z_19;
    t = get_config_0(t);
    return(t);
  }
  ATerm b_2 (ATerm t)
  {
    t = term_j_16;
    return(t);
  }
  ATerm g_2 (ATerm t)
  {
    ATerm v_9 = NULL;
    ATerm w_9 = NULL;
    t = pass_verbose_0(t);
    {
      w_9 = t;
      if(((v_9 != NULL) && (v_9 != w_9)))
        _fail(w_9);
      else
        v_9 = w_9;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(v_9)), term_u_19);
    return(t);
  }
  t = pipe_3(t, a_2, b_2, g_2);
  return(t);
}
ATerm inline_0 (ATerm t)
{
  ATerm h_2 (ATerm t)
  {
    t = term_a_20;
    t = get_config_0(t);
    return(t);
  }
  ATerm k_2 (ATerm t)
  {
    t = term_i_16;
    return(t);
  }
  ATerm l_2 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(z_9)), term_u_19);
    return(t);
  }
  t = pipe_3(t, h_2, k_2, l_2);
  return(t);
}
ATerm fusion_0 (ATerm t)
{
  ATerm m_2 (ATerm t)
  {
    t = term_b_20;
    t = get_config_0(t);
    return(t);
  }
  ATerm n_2 (ATerm t)
  {
    t = term_h_16;
    return(t);
  }
  ATerm o_2 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(d_10)), term_u_19);
    return(t);
  }
  t = pipe_3(t, m_2, n_2, o_2);
  return(t);
}
ATerm optimize1_0 (ATerm t)
{
  ATerm r_2 (ATerm t)
  {
    t = term_k_20;
    t = get_config_0(t);
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    t = term_g_16;
    return(t);
  }
  ATerm y_2 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(h_10)), term_u_19);
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
      ATerm l_10 = NULL;
      ATerm m_10 = NULL;
      m_10 = t;
      if(((l_10 != NULL) && (l_10 != m_10)))
        _fail(m_10);
      else
        l_10 = m_10;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_17, (ATerm) ATinsert(CheckATermList(not_null(l_10)), term_l_20));
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
        ATerm m_20;
        m_20 = t;
        {
          ATerm n_20 = t;
          if((PushChoice() == 0))
            {
              t = term_o_20;
              t = get_config_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = n_20;
            }
        }
        t = m_20;
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
    t = term_p_20;
    t = get_config_0(t);
    return(t);
  }
  ATerm h_3 (ATerm t)
  {
    t = term_f_16;
    return(t);
  }
  ATerm i_3 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(p_10)), term_u_19);
    return(t);
  }
  t = pipe_3(t, f_3, h_3, i_3);
  return(t);
}
ATerm stratego_nf_0 (ATerm t)
{
  ATerm j_3 (ATerm t)
  {
    t = term_q_20;
    t = get_config_0(t);
    return(t);
  }
  ATerm o_3 (ATerm t)
  {
    ATerm t_10 = NULL;
    ATerm u_10 = NULL;
    t = pass_verbose_0(t);
    {
      u_10 = t;
      if(((t_10 != NULL) && (t_10 != u_10)))
        _fail(u_10);
      else
        t_10 = u_10;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(t_10)), term_u_19);
    return(t);
  }
  t = pipe_3(t, j_3, _id, o_3);
  return(t);
}
ATerm extract_0 (ATerm t)
{
  ATerm p_3 (ATerm t)
  {
    t = term_r_20;
    t = get_config_0(t);
    return(t);
  }
  ATerm q_3 (ATerm t)
  {
    t = term_e_16;
    return(t);
  }
  ATerm r_3 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(x_10)), term_u_19);
    return(t);
  }
  t = pipe_3(t, p_3, q_3, r_3);
  return(t);
}
ATerm extract_all_0 (ATerm t)
{
  ATerm z_3 (ATerm t)
  {
    t = term_s_20;
    t = get_config_0(t);
    return(t);
  }
  ATerm a_4 (ATerm t)
  {
    t = term_t_20;
    return(t);
  }
  ATerm b_4 (ATerm t)
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
    t = (ATerm) ATinsert(CheckATermList(not_null(b_11)), term_u_19);
    return(t);
  }
  t = pipe_3(t, z_3, a_4, b_4);
  return(t);
}
ATerm output_frontend_0 (ATerm t)
{
  ATerm g_11 = NULL,h_11 = NULL;
  ATerm c_4 (ATerm t)
  {
    ATerm u_20;
    u_20 = t;
    {
      t = term_v_20;
      t = get_config_0(t);
    }
    t = u_20;
    {
      ATerm w_20 = t;
      int x_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = extract_all_0(t);
          LocalPopChoice(x_20);
        }
      else
        {
          t = w_20;
          {
            t = (ATerm) ATinsert(ATempty, term_y_20);
            t = fatal_error_0(t);
          }
        }
      {
        ATerm d_4 (ATerm t)
        {
          ATerm i_11 = NULL;
          i_11 = t;
          if(((g_11 != NULL) && (g_11 != i_11)))
            _fail(i_11);
          else
            g_11 = i_11;
          return(t);
        }
        ATerm j_4 (ATerm t)
        {
          ATerm j_11 = NULL;
          j_11 = t;
          if(((h_11 != NULL) && (h_11 != j_11)))
            _fail(j_11);
          else
            h_11 = j_11;
          return(t);
        }
        t = _2(t, d_4, j_4);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_n_17, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(h_11)), not_null(g_11)), term_z_20));
          {
            t = printnl_0(t);
            {
              t = term_t_14;
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
ATerm pipe_3 (ATerm t, ATerm o_64 (ATerm), ATerm p_64 (ATerm), ATerm q_64 (ATerm))
{
  ATerm q_11 = NULL,s_11 = NULL;
  ATerm a_21;
  a_21 = t;
  {
    ATerm r_11 = NULL;
    t = conc_strings_0(t);
    {
      r_11 = t;
      if(((q_11 != NULL) && (q_11 != r_11)))
        _fail(r_11);
      else
        q_11 = r_11;
    }
  }
  t = a_21;
  {
    t = _2(t, _id, p_64);
    {
      ATerm b_21;
      b_21 = t;
      {
        ATerm t_11 = NULL;
        t = conc_strings_0(t);
        {
          t_11 = t;
          if(((s_11 != NULL) && (s_11 != t_11)))
            _fail(t_11);
          else
            s_11 = t_11;
        }
      }
      t = b_21;
      {
        ATerm c_21;
        c_21 = t;
        {
          ATerm u_11 = NULL,w_11 = NULL;
          ATerm d_21;
          d_21 = t;
          {
            ATerm v_11 = NULL;
            t = o_64(t);
            {
              v_11 = t;
              if(((u_11 != NULL) && (u_11 != v_11)))
                _fail(v_11);
              else
                u_11 = v_11;
            }
          }
          t = d_21;
          {
            ATerm x_11 = NULL;
            t = q_64(t);
            {
              x_11 = t;
              if(((w_11 != NULL) && (w_11 != x_11)))
                _fail(x_11);
              else
                w_11 = x_11;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(u_11), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(w_11)), not_null(s_11)), term_x_16), not_null(q_11)), term_e_21));
              t = call_0(t);
            }
          }
        }
        t = c_21;
      }
    }
  }
  return(t);
}
ATerm frontend_0 (ATerm t)
{
  ATerm l_4 (ATerm t)
  {
    t = term_f_21;
    t = get_config_0(t);
    return(t);
  }
  ATerm q_4 (ATerm t)
  {
    t = term_d_16;
    return(t);
  }
  ATerm r_4 (ATerm t)
  {
    ATerm d_12 = NULL;
    ATerm e_12 = NULL;
    t = pass_verbose_0(t);
    {
      e_12 = t;
      if(((d_12 != NULL) && (d_12 != e_12)))
        _fail(e_12);
      else
        d_12 = e_12;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(d_12)), term_u_19);
    return(t);
  }
  t = pipe_3(t, l_4, q_4, r_4);
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm i_12 = NULL,j_12 = NULL,k_12 = NULL;
  i_12 = t;
  h_12 :
  if(match_cons(i_12, sym__2))
    {
      j_12 = ATgetArgument(i_12, 0);
      k_12 = ATgetArgument(i_12, 1);
      t = SSL_WriteToBinaryFile(not_null(j_12), not_null(k_12));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm apply_to_file_1 (ATerm t, ATerm d_65 (ATerm))
{
  ATerm r_12 = NULL,s_12 = NULL,t_12 = NULL;
  r_12 = t;
  q_12 :
  if(match_cons(r_12, sym__2))
    {
      s_12 = ATgetArgument(r_12, 0);
      t_12 = ATgetArgument(r_12, 1);
      {
        ATerm w_12 = NULL;
        ATerm g_21;
        g_21 = t;
        {
          ATerm x_12 = NULL;
          t = not_null(s_12);
          {
            t = ReadFromFile_0(t);
            {
              t = d_65(t);
              {
                x_12 = t;
                if(((w_12 != NULL) && (w_12 != x_12)))
                  _fail(x_12);
                else
                  w_12 = x_12;
              }
            }
          }
        }
        t = g_21;
        {
          ATerm h_21;
          h_21 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(t_12), not_null(w_12));
            t = WriteToBinaryFile_0(t);
          }
          t = h_21;
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm transform_file_2 (ATerm t, ATerm b_65 (ATerm), ATerm c_65 (ATerm))
{
  ATerm c_13 = NULL,e_13 = NULL;
  ATerm q_21;
  q_21 = t;
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
  t = q_21;
  {
    t = _2(t, _id, c_65);
    {
      ATerm r_21;
      r_21 = t;
      {
        ATerm f_13 = NULL;
        t = conc_strings_0(t);
        {
          f_13 = t;
          if(((e_13 != NULL) && (e_13 != f_13)))
            _fail(f_13);
          else
            e_13 = f_13;
        }
      }
      t = r_21;
      {
        ATerm s_21;
        s_21 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_13), not_null(e_13));
          t = apply_to_file_1(t, b_65);
        }
        t = s_21;
      }
    }
  }
  return(t);
}
ATerm AddMain_1 (ATerm t, ATerm k_86 (ATerm))
{
  ATerm l_13 = NULL,m_13 = NULL;
  l_13 = t;
  k_13 :
  if(match_cons(l_13, sym_Specification_1))
    {
      m_13 = ATgetArgument(l_13, 0);
      {
        ATerm o_13 = NULL;
        ATerm p_13 = NULL;
        t = term_t_21;
        {
          t = k_86(t);
          {
            p_13 = t;
            if(((o_13 != NULL) && (o_13 != p_13)))
              _fail(p_13);
            else
              o_13 = p_13;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(not_null(m_13)), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_u_21, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(o_13)), (ATerm) ATempty))))));
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
  ATerm t_13 = NULL;
  ATerm v_21 = t;
  int a_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_22;
      b_22 = t;
      {
        ATerm u_13 = NULL;
        t = term_c_22;
        {
          t = get_config_0(t);
          {
            u_13 = t;
            if(((t_13 != NULL) && (t_13 != u_13)))
              _fail(u_13);
            else
              t_13 = u_13;
          }
        }
      }
      t = b_22;
      {
        ATerm s_4 (ATerm t)
        {
          ATerm u_4 (ATerm t)
          {
            t = not_null(t_13);
            return(t);
          }
          t = AddMain_1(t, u_4);
          return(t);
        }
        ATerm t_4 (ATerm t)
        {
          t = term_c_16;
          return(t);
        }
        t = transform_file_2(t, s_4, t_4);
      }
      LocalPopChoice(a_22);
    }
  else
    {
      t = v_21;
      {
        ATerm v_4 (ATerm t)
        {
          t = term_c_16;
          return(t);
        }
        t = transform_file_2(t, _id, v_4);
      }
    }
  return(t);
}
ATerm output_ast_0 (ATerm t)
{
  ATerm y_13 = NULL,z_13 = NULL;
  ATerm w_4 (ATerm t)
  {
    ATerm e_22;
    e_22 = t;
    {
      t = term_f_22;
      t = get_config_0(t);
    }
    t = e_22;
    {
      ATerm h_5 (ATerm t)
      {
        ATerm a_14 = NULL;
        a_14 = t;
        if(((y_13 != NULL) && (y_13 != a_14)))
          _fail(a_14);
        else
          y_13 = a_14;
        return(t);
      }
      ATerm i_5 (ATerm t)
      {
        ATerm b_14 = NULL;
        b_14 = t;
        if(((z_13 != NULL) && (z_13 != b_14)))
          _fail(b_14);
        else
          z_13 = b_14;
        return(t);
      }
      t = _2(t, h_5, i_5);
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_17, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(z_13)), not_null(y_13)), term_g_22));
        {
          t = printnl_0(t);
          {
            t = term_t_14;
            t = exit_0(t);
          }
        }
      }
    }
    return(t);
  }
  t = try_1(t, w_4);
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm f_14 = NULL;
  f_14 = t;
  t = SSL_int_to_string(not_null(f_14));
  return(t);
}
ATerm pass_verbose_0 (ATerm t)
{
  ATerm k_14 = NULL;
  ATerm l_14 = NULL,n_14 = NULL;
  ATerm m_14 = NULL;
  t = term_v_14;
  {
    ATerm h_22 = t;
    int i_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(i_22);
      }
    else
      {
        t = h_22;
        t = term_j_22;
      }
    {
      m_14 = t;
      if(((l_14 != NULL) && (l_14 != m_14)))
        _fail(m_14);
      else
        l_14 = m_14;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(l_14), term_j_22);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          n_14 = t;
          if(((k_14 != NULL) && (k_14 != n_14)))
            _fail(n_14);
          else
            k_14 = n_14;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_14)), term_v_14);
  return(t);
}
ATerm parse_0 (ATerm t)
{
  ATerm c_15 = NULL,d_15 = NULL,e_15 = NULL;
  c_15 = t;
  b_15 :
  if(match_cons(c_15, sym__2))
    {
      d_15 = ATgetArgument(c_15, 0);
      e_15 = ATgetArgument(c_15, 1);
      {
        ATerm h_15 = NULL,j_15 = NULL,l_15 = NULL,n_15 = NULL,p_15 = NULL;
        ATerm k_22;
        k_22 = t;
        {
          ATerm i_15 = NULL;
          t = conc_strings_0(t);
          {
            i_15 = t;
            if(((h_15 != NULL) && (h_15 != i_15)))
              _fail(i_15);
            else
              h_15 = i_15;
          }
        }
        t = k_22;
        {
          ATerm p_22;
          p_22 = t;
          {
            ATerm k_15 = NULL;
            ATerm q_22 = t;
            int r_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_x_16;
                {
                  t = get_config_0(t);
                  t = basename_0(t);
                }
                LocalPopChoice(r_22);
              }
            else
              {
                t = q_22;
                t = not_null(d_15);
              }
            {
              k_15 = t;
              if(((j_15 != NULL) && (j_15 != k_15)))
                _fail(k_15);
              else
                j_15 = k_15;
            }
          }
          t = p_22;
          {
            ATerm s_22;
            s_22 = t;
            {
              ATerm m_15 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(j_15), term_b_16);
              {
                t = conc_strings_0(t);
                {
                  m_15 = t;
                  if(((l_15 != NULL) && (l_15 != m_15)))
                    _fail(m_15);
                  else
                    l_15 = m_15;
                }
              }
            }
            t = s_22;
            {
              ATerm x_22;
              x_22 = t;
              {
                ATerm o_15 = NULL;
                t = term_y_22;
                {
                  t = get_config_0(t);
                  {
                    o_15 = t;
                    if(((n_15 != NULL) && (n_15 != o_15)))
                      _fail(o_15);
                    else
                      n_15 = o_15;
                  }
                }
              }
              t = x_22;
              {
                ATerm q_15 = NULL,w_15 = NULL,y_15 = NULL,a_16 = NULL;
                ATerm z_22;
                z_22 = t;
                {
                  ATerm v_15 = NULL;
                  ATerm a_23 = t;
                  int b_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm r_15 = NULL;
                      ATerm s_15 = NULL;
                      t = term_x_16;
                      {
                        t = get_config_0(t);
                        {
                          s_15 = t;
                          if(((r_15 != NULL) && (r_15 != s_15)))
                            _fail(s_15);
                          else
                            r_15 = s_15;
                        }
                      }
                      t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_15)), term_c_23);
                      LocalPopChoice(b_23);
                    }
                  else
                    {
                      t = a_23;
                      {
                        ATerm t_15 = NULL;
                        ATerm u_15 = NULL;
                        t = term_e_21;
                        {
                          t = get_config_0(t);
                          {
                            u_15 = t;
                            if(((t_15 != NULL) && (t_15 != u_15)))
                              _fail(u_15);
                            else
                              t_15 = u_15;
                          }
                        }
                        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_15)), term_c_23);
                      }
                    }
                  {
                    v_15 = t;
                    if(((q_15 != NULL) && (q_15 != v_15)))
                      _fail(v_15);
                    else
                      q_15 = v_15;
                  }
                }
                t = z_22;
                {
                  ATerm d_23;
                  d_23 = t;
                  {
                    ATerm x_15 = NULL;
                    t = pass_verbose_0(t);
                    {
                      x_15 = t;
                      if(((w_15 != NULL) && (w_15 != x_15)))
                        _fail(x_15);
                      else
                        w_15 = x_15;
                    }
                  }
                  t = d_23;
                  {
                    ATerm z_15 = NULL;
                    t = term_f_23;
                    {
                      t = get_config_0(t);
                      {
                        z_15 = t;
                        if(((y_15 != NULL) && (y_15 != z_15)))
                          _fail(z_15);
                        else
                          y_15 = z_15;
                      }
                    }
                    {
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(l_15)), term_x_16), not_null(h_15)), term_e_21)), not_null(w_15)), not_null(y_15)), not_null(q_15));
                      {
                        t = concat_0(t);
                        {
                          a_16 = t;
                          if(((p_15 != NULL) && (p_15 != a_16)))
                            _fail(a_16);
                          else
                            p_15 = a_16;
                        }
                      }
                    }
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(n_15), not_null(p_15));
                  {
                    t = call_0(t);
                    t = (ATerm) ATmakeAppl(sym__2, not_null(j_15), term_b_16);
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
  ATerm j_5 (ATerm t)
  {
    ATerm l_5 (ATerm t)
    {
      ATerm n_16 = NULL;
      ATerm o_16 = NULL;
      o_16 = t;
      if(((n_16 != NULL) && (n_16 != o_16)))
        _fail(o_16);
      else
        n_16 = o_16;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_17, (ATerm) ATinsert(CheckATermList(not_null(n_16)), term_i_23));
        t = printnl_0(t);
      }
      return(t);
    }
    t = if_verbose1_1(t, l_5);
    return(t);
  }
  ATerm k_5 (ATerm t)
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
  t = profile_p__2(t, j_5, k_5);
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
          ATerm m_5 (ATerm t)
          {
            ATerm j_23 = t;
            if((PushChoice() == 0))
              {
                t = term_k_23;
                t = get_config_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = j_23;
              }
            t = remove_intermediates_0(t);
            return(t);
          }
          t = try_1(t, m_5);
        }
      }
    }
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL;
  s_16 = t;
  r_16 :
  if(match_cons(s_16, sym__2))
    {
      t_16 = ATgetArgument(s_16, 0);
      u_16 = ATgetArgument(s_16, 1);
      {
        ATerm n_23;
        n_23 = t;
        {
          ATerm s_23 = t;
          int t_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(t_16), not_null(u_16));
              LocalPopChoice(t_23);
            }
          else
            {
              t = s_23;
              t = SSL_gtr(not_null(t_16), not_null(u_16));
            }
        }
        t = n_23;
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
  ATerm a_17 = NULL;
  ATerm w_23 = t;
  int x_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_17 = NULL,c_17 = NULL,d_17 = NULL;
      b_17 = t;
      z_16 :
      if(match_cons(b_17, sym__2))
        {
          c_17 = ATgetArgument(b_17, 0);
          d_17 = ATgetArgument(b_17, 1);
          {
            if(((a_17 != NULL) && (a_17 != c_17)))
              _fail(c_17);
            else
              a_17 = c_17;
            if(((a_17 != NULL) && (a_17 != d_17)))
              _fail(d_17);
            else
              a_17 = d_17;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(x_23);
    }
  else
    {
      t = w_23;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm f_60 (ATerm))
{
  ATerm n_5 (ATerm t)
  {
    ATerm c_24;
    c_24 = t;
    {
      ATerm g_17 = NULL;
      ATerm h_17 = NULL;
      t = term_v_14;
      {
        t = get_config_0(t);
        {
          h_17 = t;
          if(((g_17 != NULL) && (g_17 != h_17)))
            _fail(h_17);
          else
            g_17 = h_17;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_17), term_j_22);
        t = geq_0(t);
      }
    }
    t = c_24;
    t = f_60(t);
    return(t);
  }
  t = try_1(t, n_5);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm k_17 = NULL;
  k_17 = t;
  t = SSL_TicksToSeconds(not_null(k_17));
  return(t);
}
ATerm self_children_sys_time_0 (ATerm t)
{
  ATerm p_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL;
  p_17 = t;
  o_17 :
  if(match_cons(p_17, sym__4))
    {
      q_17 = ATgetArgument(p_17, 0);
      r_17 = ATgetArgument(p_17, 1);
      s_17 = ATgetArgument(p_17, 2);
      t_17 = ATgetArgument(p_17, 3);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_17), not_null(t_17));
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
  ATerm b_18 = NULL,c_18 = NULL,d_18 = NULL;
  b_18 = t;
  a_18 :
  if(match_cons(b_18, sym__2))
    {
      c_18 = ATgetArgument(b_18, 0);
      d_18 = ATgetArgument(b_18, 1);
      {
        ATerm d_24 = t;
        int e_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(c_18), not_null(d_18));
            LocalPopChoice(e_24);
          }
        else
          {
            t = d_24;
            t = SSL_addr(not_null(c_18), not_null(d_18));
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
  ATerm j_18 = NULL,k_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL;
  j_18 = t;
  i_18 :
  if(match_cons(j_18, sym__4))
    {
      k_18 = ATgetArgument(j_18, 0);
      l_18 = ATgetArgument(j_18, 1);
      m_18 = ATgetArgument(j_18, 2);
      n_18 = ATgetArgument(j_18, 3);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_18), not_null(m_18));
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
  ATerm v_18 = NULL,w_18 = NULL,x_18 = NULL;
  v_18 = t;
  u_18 :
  if(match_cons(v_18, sym__2))
    {
      w_18 = ATgetArgument(v_18, 0);
      x_18 = ATgetArgument(v_18, 1);
      {
        ATerm f_24 = t;
        int h_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(w_18), not_null(x_18));
            LocalPopChoice(h_24);
          }
        else
          {
            t = f_24;
            t = SSL_subtr(not_null(w_18), not_null(x_18));
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
  ATerm j_19 = NULL,k_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL;
  j_19 = t;
  g_19 :
  if(match_cons(j_19, sym__2))
    {
      k_19 = ATgetArgument(j_19, 0);
      p_19 = ATgetArgument(j_19, 1);
      h_19 :
      if(match_cons(k_19, sym__4))
        {
          l_19 = ATgetArgument(k_19, 0);
          m_19 = ATgetArgument(k_19, 1);
          n_19 = ATgetArgument(k_19, 2);
          o_19 = ATgetArgument(k_19, 3);
          i_19 :
          if(match_cons(p_19, sym__4))
            {
              q_19 = ATgetArgument(p_19, 0);
              r_19 = ATgetArgument(p_19, 1);
              s_19 = ATgetArgument(p_19, 2);
              t_19 = ATgetArgument(p_19, 3);
              {
                ATerm c_20 = NULL,e_20 = NULL,g_20 = NULL,i_20 = NULL;
                ATerm i_24;
                i_24 = t;
                {
                  ATerm d_20 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(l_19), not_null(q_19));
                  {
                    t = subt_0(t);
                    {
                      d_20 = t;
                      if(((c_20 != NULL) && (c_20 != d_20)))
                        _fail(d_20);
                      else
                        c_20 = d_20;
                    }
                  }
                }
                t = i_24;
                {
                  ATerm j_24;
                  j_24 = t;
                  {
                    ATerm f_20 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(m_19), not_null(r_19));
                    {
                      t = subt_0(t);
                      {
                        f_20 = t;
                        if(((e_20 != NULL) && (e_20 != f_20)))
                          _fail(f_20);
                        else
                          e_20 = f_20;
                      }
                    }
                  }
                  t = j_24;
                  {
                    ATerm k_24;
                    k_24 = t;
                    {
                      ATerm h_20 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(n_19), not_null(s_19));
                      {
                        t = subt_0(t);
                        {
                          h_20 = t;
                          if(((g_20 != NULL) && (g_20 != h_20)))
                            _fail(h_20);
                          else
                            g_20 = h_20;
                        }
                      }
                    }
                    t = k_24;
                    {
                      ATerm j_20 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(o_19), not_null(t_19));
                      {
                        t = subt_0(t);
                        {
                          j_20 = t;
                          if(((i_20 != NULL) && (i_20 != j_20)))
                            _fail(j_20);
                          else
                            i_20 = j_20;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym__4, not_null(c_20), not_null(e_20), not_null(g_20), not_null(i_20));
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
ATerm profile_p__2 (ATerm t, ATerm v_67 (ATerm), ATerm w_67 (ATerm))
{
  ATerm i_21 = NULL;
  ATerm l_24;
  l_24 = t;
  {
    ATerm j_21 = NULL;
    t = times_0(t);
    {
      j_21 = t;
      if(((i_21 != NULL) && (i_21 != j_21)))
        _fail(j_21);
      else
        i_21 = j_21;
    }
  }
  t = l_24;
  {
    t = w_67(t);
    {
      ATerm p_24;
      p_24 = t;
      {
        ATerm k_21 = NULL,m_21 = NULL,o_21 = NULL;
        ATerm l_21 = NULL;
        t = times_0(t);
        {
          l_21 = t;
          if(((k_21 != NULL) && (k_21 != l_21)))
            _fail(l_21);
          else
            k_21 = l_21;
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_21), not_null(i_21));
          {
            t = diff_times_0(t);
            {
              ATerm q_24;
              q_24 = t;
              {
                ATerm n_21 = NULL;
                t = self_children_user_time_0(t);
                {
                  t = ticks_to_seconds_0(t);
                  {
                    n_21 = t;
                    if(((m_21 != NULL) && (m_21 != n_21)))
                      _fail(n_21);
                    else
                      m_21 = n_21;
                  }
                }
              }
              t = q_24;
              {
                ATerm p_21 = NULL;
                t = self_children_sys_time_0(t);
                {
                  t = ticks_to_seconds_0(t);
                  {
                    p_21 = t;
                    if(((o_21 != NULL) && (o_21 != p_21)))
                      _fail(p_21);
                    else
                      o_21 = p_21;
                  }
                }
                {
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(o_21)), term_s_24), not_null(m_21)), term_r_24);
                  t = v_67(t);
                }
              }
            }
          }
        }
      }
      t = p_24;
    }
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm a_68 (ATerm))
{
  ATerm t_24;
  t_24 = t;
  {
    ATerm w_21 = NULL,y_21 = NULL;
    ATerm u_24;
    u_24 = t;
    {
      ATerm x_21 = NULL;
      t = a_68(t);
      {
        x_21 = t;
        if(((w_21 != NULL) && (w_21 != x_21)))
          _fail(x_21);
        else
          w_21 = x_21;
      }
    }
    t = u_24;
    {
      ATerm z_21 = NULL;
      z_21 = t;
      if(((y_21 != NULL) && (y_21 != z_21)))
        _fail(z_21);
      else
        y_21 = z_21;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_21)), not_null(w_21)));
        t = printnl_0(t);
      }
    }
  }
  t = t_24;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm d_22 = NULL;
  d_22 = t;
  t = SSL_is_string(not_null(d_22));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm v_24 = t;
  int w_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(w_24);
    }
  else
    {
      t = v_24;
      {
        ATerm b_25 = t;
        int c_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_5 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, o_5);
            LocalPopChoice(c_25);
          }
        else
          {
            t = b_25;
            {
              ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL;
              m_22 = t;
              l_22 :
              if(match_cons(m_22, sym_Path_1))
                {
                  n_22 = ATgetArgument(m_22, 0);
                  t = not_null(n_22);
                }
              else
                {
                  if(match_cons(m_22, sym_Var_1))
                    {
                      n_22 = ATgetArgument(m_22, 0);
                      {
                        t = not_null(n_22);
                        {
                          ATerm d_25 = t;
                          int e_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(e_25);
                            }
                          else
                            {
                              t = d_25;
                              {
                                ATerm u_5 (ATerm t)
                                {
                                  t = term_f_25;
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
                      if(match_cons(m_22, sym_Prefix_2))
                        {
                          n_22 = ATgetArgument(m_22, 0);
                          o_22 = ATgetArgument(m_22, 1);
                          {
                            ATerm t_22 = NULL,v_22 = NULL;
                            ATerm g_25;
                            g_25 = t;
                            {
                              ATerm u_22 = NULL;
                              t = not_null(n_22);
                              {
                                t = eval_config_0(t);
                                {
                                  u_22 = t;
                                  if(((t_22 != NULL) && (t_22 != u_22)))
                                    _fail(u_22);
                                  else
                                    t_22 = u_22;
                                }
                              }
                            }
                            t = g_25;
                            {
                              ATerm w_22 = NULL;
                              t = not_null(o_22);
                              {
                                t = eval_config_0(t);
                                {
                                  w_22 = t;
                                  if(((v_22 != NULL) && (v_22 != w_22)))
                                    _fail(w_22);
                                  else
                                    v_22 = w_22;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(t_22), not_null(v_22));
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
  ATerm e_23 = NULL;
  e_23 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_h_25, not_null(e_23));
    {
      t = table_get_0(t);
      {
        ATerm z_5 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm i_25;
            i_25 = t;
            {
              ATerm g_23 = NULL;
              ATerm h_23 = NULL;
              h_23 = t;
              if(((g_23 != NULL) && (g_23 != h_23)))
                _fail(h_23);
              else
                g_23 = h_23;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_h_25, not_null(e_23), not_null(g_23));
                t = table_put_0(t);
              }
            }
            t = i_25;
          }
          return(t);
        }
        t = try_1(t, z_5);
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
  ATerm j_25;
  j_25 = t;
  {
    ATerm l_23 = NULL;
    ATerm m_23 = NULL;
    m_23 = t;
    if(((l_23 != NULL) && (l_23 != m_23)))
      _fail(m_23);
    else
      l_23 = m_23;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_17, not_null(l_23));
      t = printnl_0(t);
    }
  }
  t = j_25;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm k_25;
  k_25 = t;
  {
    t = error_0(t);
    {
      t = term_j_22;
      t = exit_0(t);
    }
  }
  t = k_25;
  return(t);
}
ATerm basename_1 (ATerm t, ATerm j_69 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm h_6 (ATerm t)
    {
      ATerm n_25 = t;
      int o_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Cons_2(t, _id, h_6);
          LocalPopChoice(o_25);
        }
      else
        {
          t = n_25;
          {
            ATerm p_25 = t;
            int q_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_6 (ATerm t)
                {
                  ATerm q_23 = NULL;
                  q_23 = t;
                  o_23 :
                  if(!(match_int(q_23, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = Cons_2(t, i_6, _id);
                LocalPopChoice(q_25);
              }
            else
              {
                t = p_25;
                {
                  ATerm j_6 (ATerm t)
                  {
                    ATerm r_23 = NULL;
                    r_23 = t;
                    p_23 :
                    if(!(match_int(r_23, 46)))
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = Cons_2(t, j_6, j_69);
                  t = (ATerm) ATempty;
                }
              }
          }
        }
      return(t);
    }
    t = try_1(t, h_6);
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
  ATerm r_25;
  r_25 = t;
  {
    ATerm u_23 = NULL;
    ATerm v_23 = NULL;
    t = term_s_25;
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
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_17, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_25), not_null(u_23)), term_x_25));
      t = printnl_0(t);
    }
  }
  t = r_25;
  return(t);
}
ATerm try_1 (ATerm t, ATerm t_85 (ATerm))
{
  ATerm d_26 = t;
  int e_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_85(t);
      LocalPopChoice(e_26);
    }
  else
    {
      t = d_26;
      {
      }
    }
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm z_23 = NULL,a_24 = NULL,b_24 = NULL;
  z_23 = t;
  y_23 :
  if(match_cons(z_23, sym__2))
    {
      a_24 = ATgetArgument(z_23, 0);
      b_24 = ATgetArgument(z_23, 1);
      t = SSL_call(not_null(a_24), not_null(b_24));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm g_24 = NULL;
  g_24 = t;
  t = SSL_string_to_int(not_null(g_24));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm o_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL;
  o_24 = t;
  m_24 :
  if(match_string(o_24, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(o_24) == AT_LIST) && ((ATermList) o_24 != ATempty)))
        {
          x_24 = ATgetFirst((ATermList) o_24);
          y_24 = (ATerm) ATgetNext((ATermList) o_24);
          n_24 :
          if(((ATgetType(y_24) == AT_LIST) && ((ATermList) y_24 != ATempty)))
            {
              z_24 = ATgetFirst((ATermList) y_24);
              a_25 = (ATerm) ATgetNext((ATermList) y_24);
              {
                ATerm l_25 = NULL;
                ATerm f_26;
                f_26 = t;
                {
                  t = not_null(x_24);
                  t = l_0(t);
                }
                t = f_26;
                {
                  ATerm m_25 = NULL;
                  t = not_null(z_24);
                  {
                    t = m_0(t);
                    {
                      m_25 = t;
                      if(((l_25 != NULL) && (l_25 != m_25)))
                        _fail(m_25);
                      else
                        l_25 = m_25;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(a_25)), not_null(l_25));
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
  ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL;
  u_25 = t;
  t_25 :
  if(match_cons(u_25, sym__2))
    {
      v_25 = ATgetArgument(u_25, 0);
      w_25 = ATgetArgument(u_25, 1);
      {
        ATerm z_25 = NULL;
        ATerm a_26 = NULL,c_26 = NULL;
        ATerm b_26 = NULL;
        t = not_null(v_25);
        {
          ATerm g_26 = t;
          int h_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(h_26);
            }
          else
            {
              t = g_26;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_25), not_null(a_26));
          {
            t = conc_0(t);
            {
              c_26 = t;
              if(((z_25 != NULL) && (z_25 != c_26)))
                _fail(c_26);
              else
                z_25 = c_26;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_h_25, not_null(v_25), not_null(z_25));
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
  ATerm j_26 = NULL,k_26 = NULL;
  ATerm o_26;
  o_26 = t;
  {
    ATerm l_26 = NULL,m_26 = NULL,n_26 = NULL;
    l_26 = t;
    i_26 :
    if(match_cons(l_26, sym__2))
      {
        m_26 = ATgetArgument(l_26, 0);
        n_26 = ATgetArgument(l_26, 1);
        {
          if(((j_26 != NULL) && (j_26 != m_26)))
            _fail(m_26);
          else
            j_26 = m_26;
          {
            if(((k_26 != NULL) && (k_26 != n_26)))
              _fail(n_26);
            else
              k_26 = n_26;
            t = SSL_table_remove(not_null(j_26), not_null(k_26));
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
  ATerm r_26 = NULL,u_26 = NULL,v_26 = NULL;
  r_26 = t;
  q_26 :
  if(match_cons(r_26, sym__2))
    {
      u_26 = ATgetArgument(r_26, 0);
      v_26 = ATgetArgument(r_26, 1);
      {
        ATerm p_26 = t;
        int s_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = not_null(u_26);
            {
              t = get_config_0(t);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_h_25, not_null(u_26));
                t = table_remove_0(t);
              }
            }
            LocalPopChoice(s_26);
          }
        else
          {
            t = p_26;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(u_26), not_null(v_26));
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
  ATerm l_27 = NULL,m_27 = NULL,n_27 = NULL;
  l_27 = t;
  k_27 :
  if(match_cons(l_27, sym__2))
    {
      m_27 = ATgetArgument(l_27, 0);
      n_27 = ATgetArgument(l_27, 1);
      {
        ATerm y_27 = NULL;
        ATerm z_27 = NULL,b_28 = NULL;
        ATerm a_28 = NULL;
        t = not_null(m_27);
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
            a_28 = t;
            if(((z_27 != NULL) && (z_27 != a_28)))
              _fail(a_28);
            else
              z_27 = a_28;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_27), not_null(n_27));
          {
            t = conc_0(t);
            {
              b_28 = t;
              if(((y_27 != NULL) && (y_27 != b_28)))
                _fail(b_28);
              else
                y_27 = b_28;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_h_25, not_null(m_27), not_null(y_27));
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
      ATerm k_6 (ATerm t)
      {
        ATerm x_29 = NULL;
        x_29 = t;
        h_28 :
        if(!(match_string(x_29, "-i")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm l_6 (ATerm t)
      {
        ATerm a_30 = NULL;
        ATerm z_26;
        z_26 = t;
        {
          ATerm y_29 = NULL;
          ATerm z_29 = NULL;
          z_29 = t;
          if(((y_29 != NULL) && (y_29 != z_29)))
            _fail(z_29);
          else
            y_29 = z_29;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_e_21, not_null(y_29));
            t = set_config_0(t);
          }
        }
        t = z_26;
        {
          ATerm b_30 = NULL;
          t = basename_0(t);
          {
            b_30 = t;
            if(((a_30 != NULL) && (a_30 != b_30)))
              _fail(b_30);
            else
              a_30 = b_30;
          }
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(a_30));
        }
        return(t);
      }
      ATerm m_6 (ATerm t)
      {
        t = term_a_27;
        return(t);
      }
      t = ArgOption_3(t, k_6, l_6, m_6);
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
            ATerm r_6 (ATerm t)
            {
              ATerm c_30 = NULL;
              c_30 = t;
              k_28 :
              if(!(match_string(c_30, "-o")))
                {
                  if(!(match_string(c_30, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm v_6 (ATerm t)
            {
              ATerm f_30 = NULL;
              ATerm d_27;
              d_27 = t;
              {
                ATerm d_30 = NULL;
                ATerm e_30 = NULL;
                e_30 = t;
                if(((d_30 != NULL) && (d_30 != e_30)))
                  _fail(e_30);
                else
                  d_30 = e_30;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_x_16, not_null(d_30));
                  t = set_config_0(t);
                }
              }
              t = d_27;
              {
                ATerm g_30 = NULL;
                g_30 = t;
                if(((f_30 != NULL) && (f_30 != g_30)))
                  _fail(g_30);
                else
                  f_30 = g_30;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(f_30));
              }
              return(t);
            }
            ATerm b_7 (ATerm t)
            {
              t = term_e_27;
              return(t);
            }
            t = ArgOption_3(t, r_6, v_6, b_7);
            LocalPopChoice(c_27);
          }
        else
          {
            t = b_27;
            {
              ATerm f_27 = t;
              int g_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_7 (ATerm t)
                  {
                    ATerm p_30 = NULL;
                    p_30 = t;
                    n_28 :
                    if(!(match_string(p_30, "-I")))
                      {
                        if(!(match_string(p_30, "--Include")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm d_7 (ATerm t)
                  {
                    ATerm s_30 = NULL;
                    ATerm t_30 = NULL;
                    t_30 = t;
                    if(((s_30 != NULL) && (s_30 != t_30)))
                      _fail(t_30);
                    else
                      s_30 = t_30;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_f_23, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_30)), term_f_23));
                      t = extend_config_0(t);
                    }
                    t = term_h_27;
                    return(t);
                  }
                  ATerm e_7 (ATerm t)
                  {
                    t = term_i_27;
                    return(t);
                  }
                  t = ArgOption_3(t, c_7, d_7, e_7);
                  LocalPopChoice(g_27);
                }
              else
                {
                  t = f_27;
                  {
                    ATerm j_27 = t;
                    int o_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm h_7 (ATerm t)
                        {
                          ATerm u_30 = NULL;
                          u_30 = t;
                          p_28 :
                          if(!(match_string(u_30, "--main")))
                            {
                              if(!(match_string(u_30, "-m")))
                                {
                                  _fail(t);
                                }
                            }
                          return(t);
                        }
                        ATerm i_7 (ATerm t)
                        {
                          ATerm x_30 = NULL;
                          ATerm p_27;
                          p_27 = t;
                          {
                            ATerm v_30 = NULL;
                            ATerm w_30 = NULL;
                            w_30 = t;
                            if(((v_30 != NULL) && (v_30 != w_30)))
                              _fail(w_30);
                            else
                              v_30 = w_30;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_c_22, not_null(v_30));
                              t = set_config_0(t);
                            }
                          }
                          t = p_27;
                          {
                            ATerm a_31 = NULL;
                            a_31 = t;
                            if(((x_30 != NULL) && (x_30 != a_31)))
                              _fail(a_31);
                            else
                              x_30 = a_31;
                            t = (ATerm) ATmakeAppl(sym_Main_1, not_null(x_30));
                          }
                          return(t);
                        }
                        ATerm l_7 (ATerm t)
                        {
                          t = term_q_27;
                          return(t);
                        }
                        t = ArgOption_3(t, h_7, i_7, l_7);
                        LocalPopChoice(o_27);
                      }
                    else
                      {
                        t = j_27;
                        {
                          ATerm r_27 = t;
                          int s_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm m_7 (ATerm t)
                              {
                                ATerm b_31 = NULL;
                                b_31 = t;
                                s_28 :
                                if(!(match_string(b_31, "--C-include")))
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              ATerm n_7 (ATerm t)
                              {
                                ATerm c_31 = NULL;
                                ATerm d_31 = NULL;
                                d_31 = t;
                                if(((c_31 != NULL) && (c_31 != d_31)))
                                  _fail(d_31);
                                else
                                  c_31 = d_31;
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, term_f_19, (ATerm) ATinsert(ATempty, not_null(c_31)));
                                  t = post_extend_config_0(t);
                                }
                                t = term_h_27;
                                return(t);
                              }
                              ATerm o_7 (ATerm t)
                              {
                                t = term_t_27;
                                return(t);
                              }
                              t = ArgOption_3(t, m_7, n_7, o_7);
                              LocalPopChoice(s_27);
                            }
                          else
                            {
                              t = r_27;
                              {
                                ATerm u_27 = t;
                                int v_27 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm p_7 (ATerm t)
                                    {
                                      ATerm h_31 = NULL;
                                      h_31 = t;
                                      u_28 :
                                      if(!(match_string(h_31, "-CI")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm q_7 (ATerm t)
                                    {
                                      ATerm i_31 = NULL;
                                      ATerm j_31 = NULL;
                                      j_31 = t;
                                      if(((i_31 != NULL) && (i_31 != j_31)))
                                        _fail(j_31);
                                      else
                                        i_31 = j_31;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, term_g_18, (ATerm) ATinsert(ATempty, not_null(i_31)));
                                        t = extend_config_0(t);
                                      }
                                      t = term_h_27;
                                      return(t);
                                    }
                                    ATerm r_7 (ATerm t)
                                    {
                                      t = term_w_27;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, p_7, q_7, r_7);
                                    LocalPopChoice(v_27);
                                  }
                                else
                                  {
                                    t = u_27;
                                    {
                                      ATerm x_27 = t;
                                      int c_28 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm e_8 (ATerm t)
                                          {
                                            ATerm k_31 = NULL;
                                            k_31 = t;
                                            f_29 :
                                            if(!(match_string(k_31, "-CL")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm f_8 (ATerm t)
                                          {
                                            ATerm l_31 = NULL;
                                            ATerm m_31 = NULL;
                                            m_31 = t;
                                            if(((l_31 != NULL) && (l_31 != m_31)))
                                              _fail(m_31);
                                            else
                                              l_31 = m_31;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, term_i_17, (ATerm) ATinsert(ATempty, not_null(l_31)));
                                              t = extend_config_0(t);
                                            }
                                            t = term_h_27;
                                            return(t);
                                          }
                                          ATerm g_8 (ATerm t)
                                          {
                                            t = term_d_28;
                                            return(t);
                                          }
                                          t = ArgOption_3(t, e_8, f_8, g_8);
                                          LocalPopChoice(c_28);
                                        }
                                      else
                                        {
                                          t = x_27;
                                          {
                                            ATerm e_28 = t;
                                            int f_28 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm h_8 (ATerm t)
                                                {
                                                  ATerm n_31 = NULL;
                                                  n_31 = t;
                                                  h_29 :
                                                  if(!(match_string(n_31, "-c")))
                                                    {
                                                      _fail(t);
                                                    }
                                                  return(t);
                                                }
                                                ATerm i_8 (ATerm t)
                                                {
                                                  t = term_g_28;
                                                  t = set_config_0(t);
                                                  t = term_i_28;
                                                  return(t);
                                                }
                                                ATerm j_8 (ATerm t)
                                                {
                                                  t = term_j_28;
                                                  return(t);
                                                }
                                                t = Option_3(t, h_8, i_8, j_8);
                                                LocalPopChoice(f_28);
                                              }
                                            else
                                              {
                                                t = e_28;
                                                {
                                                  ATerm l_28 = t;
                                                  int m_28 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm k_8 (ATerm t)
                                                      {
                                                        ATerm o_31 = NULL;
                                                        o_31 = t;
                                                        i_29 :
                                                        if(!(match_string(o_31, "--ast")))
                                                          {
                                                            _fail(t);
                                                          }
                                                        return(t);
                                                      }
                                                      ATerm n_8 (ATerm t)
                                                      {
                                                        t = term_o_28;
                                                        t = set_config_0(t);
                                                        t = term_q_28;
                                                        return(t);
                                                      }
                                                      ATerm o_8 (ATerm t)
                                                      {
                                                        t = term_r_28;
                                                        return(t);
                                                      }
                                                      t = Option_3(t, k_8, n_8, o_8);
                                                      LocalPopChoice(m_28);
                                                    }
                                                  else
                                                    {
                                                      t = l_28;
                                                      {
                                                        ATerm t_28 = t;
                                                        int v_28 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm r_8 (ATerm t)
                                                            {
                                                              ATerm p_31 = NULL;
                                                              p_31 = t;
                                                              j_29 :
                                                              if(!(match_string(p_31, "-F")))
                                                                {
                                                                  _fail(t);
                                                                }
                                                              return(t);
                                                            }
                                                            ATerm s_8 (ATerm t)
                                                            {
                                                              t = term_w_28;
                                                              t = set_config_0(t);
                                                              t = term_x_28;
                                                              return(t);
                                                            }
                                                            ATerm t_8 (ATerm t)
                                                            {
                                                              t = term_y_28;
                                                              return(t);
                                                            }
                                                            t = Option_3(t, r_8, s_8, t_8);
                                                            LocalPopChoice(v_28);
                                                          }
                                                        else
                                                          {
                                                            t = t_28;
                                                            {
                                                              ATerm z_28 = t;
                                                              int a_29 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm u_8 (ATerm t)
                                                                  {
                                                                    ATerm q_31 = NULL;
                                                                    q_31 = t;
                                                                    k_29 :
                                                                    if(!(match_string(q_31, "--norm")))
                                                                      {
                                                                        _fail(t);
                                                                      }
                                                                    return(t);
                                                                  }
                                                                  ATerm b_9 (ATerm t)
                                                                  {
                                                                    t = term_b_29;
                                                                    t = set_config_0(t);
                                                                    t = term_c_29;
                                                                    return(t);
                                                                  }
                                                                  ATerm c_9 (ATerm t)
                                                                  {
                                                                    t = term_d_29;
                                                                    return(t);
                                                                  }
                                                                  t = Option_3(t, u_8, b_9, c_9);
                                                                  LocalPopChoice(a_29);
                                                                }
                                                              else
                                                                {
                                                                  t = z_28;
                                                                  {
                                                                    ATerm e_29 = t;
                                                                    int g_29 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm d_9 (ATerm t)
                                                                        {
                                                                          ATerm r_31 = NULL;
                                                                          r_31 = t;
                                                                          l_29 :
                                                                          if(!(match_string(r_31, "--fusion")))
                                                                            {
                                                                              _fail(t);
                                                                            }
                                                                          return(t);
                                                                        }
                                                                        ATerm e_9 (ATerm t)
                                                                        {
                                                                          t = term_o_29;
                                                                          t = toggle_config_0(t);
                                                                          t = term_p_29;
                                                                          return(t);
                                                                        }
                                                                        ATerm h_9 (ATerm t)
                                                                        {
                                                                          t = term_r_29;
                                                                          return(t);
                                                                        }
                                                                        t = Option_3(t, d_9, e_9, h_9);
                                                                        LocalPopChoice(g_29);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = e_29;
                                                                        {
                                                                          ATerm s_29 = t;
                                                                          int h_30 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              ATerm i_9 (ATerm t)
                                                                              {
                                                                                ATerm s_31 = NULL;
                                                                                s_31 = t;
                                                                                m_29 :
                                                                                if(!(match_string(s_31, "--trace-all")))
                                                                                  {
                                                                                    _fail(t);
                                                                                  }
                                                                                return(t);
                                                                              }
                                                                              ATerm l_9 (ATerm t)
                                                                              {
                                                                                t = term_j_30;
                                                                                t = set_config_0(t);
                                                                                t = term_k_30;
                                                                                return(t);
                                                                              }
                                                                              ATerm m_9 (ATerm t)
                                                                              {
                                                                                t = term_l_30;
                                                                                return(t);
                                                                              }
                                                                              t = Option_3(t, i_9, l_9, m_9);
                                                                              LocalPopChoice(h_30);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = s_29;
                                                                              {
                                                                                ATerm m_30 = t;
                                                                                int n_30 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm p_9 (ATerm t)
                                                                                    {
                                                                                      ATerm t_31 = NULL;
                                                                                      t_31 = t;
                                                                                      n_29 :
                                                                                      if(!(match_string(t_31, "-t")))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm q_9 (ATerm t)
                                                                                    {
                                                                                      ATerm y_31 = NULL;
                                                                                      ATerm o_30;
                                                                                      o_30 = t;
                                                                                      {
                                                                                        ATerm w_31 = NULL;
                                                                                        ATerm x_31 = NULL;
                                                                                        x_31 = t;
                                                                                        if(((w_31 != NULL) && (w_31 != x_31)))
                                                                                          _fail(x_31);
                                                                                        else
                                                                                          w_31 = x_31;
                                                                                        {
                                                                                          t = (ATerm) ATmakeAppl(sym__2, term_q_30, (ATerm) ATinsert(ATempty, not_null(w_31)));
                                                                                          t = extend_config_0(t);
                                                                                        }
                                                                                      }
                                                                                      t = o_30;
                                                                                      {
                                                                                        y_31 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Trace_1, not_null(y_31));
                                                                                      }
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm t_9 (ATerm t)
                                                                                    {
                                                                                      t = term_r_30;
                                                                                      return(t);
                                                                                    }
                                                                                    t = ArgOption_3(t, p_9, q_9, t_9);
                                                                                    LocalPopChoice(n_30);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = m_30;
                                                                                    {
                                                                                      ATerm y_30 = t;
                                                                                      int z_30 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm u_9 (ATerm t)
                                                                                          {
                                                                                            ATerm c_32 = NULL;
                                                                                            c_32 = t;
                                                                                            q_29 :
                                                                                            if(!(match_string(c_32, "--verbose")))
                                                                                              {
                                                                                                _fail(t);
                                                                                              }
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm x_9 (ATerm t)
                                                                                          {
                                                                                            ATerm f_32 = NULL;
                                                                                            ATerm e_31;
                                                                                            e_31 = t;
                                                                                            {
                                                                                              ATerm d_32 = NULL;
                                                                                              ATerm e_32 = NULL;
                                                                                              t = string_to_int_0(t);
                                                                                              {
                                                                                                e_32 = t;
                                                                                                if(((d_32 != NULL) && (d_32 != e_32)))
                                                                                                  _fail(e_32);
                                                                                                else
                                                                                                  d_32 = e_32;
                                                                                              }
                                                                                              {
                                                                                                t = (ATerm) ATmakeAppl(sym__2, term_v_14, not_null(d_32));
                                                                                                t = set_config_0(t);
                                                                                              }
                                                                                            }
                                                                                            t = e_31;
                                                                                            {
                                                                                              ATerm g_32 = NULL;
                                                                                              g_32 = t;
                                                                                              if(((f_32 != NULL) && (f_32 != g_32)))
                                                                                                _fail(g_32);
                                                                                              else
                                                                                                f_32 = g_32;
                                                                                              t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(f_32));
                                                                                            }
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm y_9 (ATerm t)
                                                                                          {
                                                                                            t = term_f_31;
                                                                                            return(t);
                                                                                          }
                                                                                          t = ArgOption_3(t, u_9, x_9, y_9);
                                                                                          LocalPopChoice(z_30);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = y_30;
                                                                                          {
                                                                                            ATerm g_31 = t;
                                                                                            int u_31 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm b_10 (ATerm t)
                                                                                                {
                                                                                                  ATerm h_32 = NULL;
                                                                                                  h_32 = t;
                                                                                                  t_29 :
                                                                                                  if(!(match_string(h_32, "-S")))
                                                                                                    {
                                                                                                      if(!(match_string(h_32, "--silent")))
                                                                                                        {
                                                                                                          _fail(t);
                                                                                                        }
                                                                                                    }
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm c_10 (ATerm t)
                                                                                                {
                                                                                                  t = term_v_31;
                                                                                                  t = set_config_0(t);
                                                                                                  t = term_z_31;
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm f_10 (ATerm t)
                                                                                                {
                                                                                                  t = term_a_32;
                                                                                                  return(t);
                                                                                                }
                                                                                                t = Option_3(t, b_10, c_10, f_10);
                                                                                                LocalPopChoice(u_31);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = g_31;
                                                                                                {
                                                                                                  ATerm b_32 = t;
                                                                                                  int l_32 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      ATerm g_10 (ATerm t)
                                                                                                      {
                                                                                                        ATerm i_32 = NULL;
                                                                                                        i_32 = t;
                                                                                                        u_29 :
                                                                                                        if(!(match_string(i_32, "-h")))
                                                                                                          {
                                                                                                            if(!(match_string(i_32, "--help")))
                                                                                                              {
                                                                                                                _fail(t);
                                                                                                              }
                                                                                                          }
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm j_10 (ATerm t)
                                                                                                      {
                                                                                                        t = term_n_32;
                                                                                                        t = set_config_0(t);
                                                                                                        t = term_o_32;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm k_10 (ATerm t)
                                                                                                      {
                                                                                                        t = term_p_32;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      t = Option_3(t, g_10, j_10, k_10);
                                                                                                      LocalPopChoice(l_32);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = b_32;
                                                                                                      {
                                                                                                        ATerm q_32 = t;
                                                                                                        int r_32 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm n_10 (ATerm t)
                                                                                                            {
                                                                                                              ATerm j_32 = NULL;
                                                                                                              j_32 = t;
                                                                                                              v_29 :
                                                                                                              if(!(match_string(j_32, "--man")))
                                                                                                                {
                                                                                                                  _fail(t);
                                                                                                                }
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm o_10 (ATerm t)
                                                                                                            {
                                                                                                              t = term_t_32;
                                                                                                              t = set_config_0(t);
                                                                                                              t = term_u_32;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm r_10 (ATerm t)
                                                                                                            {
                                                                                                              t = term_v_32;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            t = Option_3(t, n_10, o_10, r_10);
                                                                                                            LocalPopChoice(r_32);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = q_32;
                                                                                                            {
                                                                                                              ATerm s_10 (ATerm t)
                                                                                                              {
                                                                                                                ATerm k_32 = NULL;
                                                                                                                k_32 = t;
                                                                                                                w_29 :
                                                                                                                if(!(match_string(k_32, "-v")))
                                                                                                                  {
                                                                                                                    if(!(match_string(k_32, "--version")))
                                                                                                                      {
                                                                                                                        _fail(t);
                                                                                                                      }
                                                                                                                  }
                                                                                                                return(t);
                                                                                                              }
                                                                                                              ATerm v_10 (ATerm t)
                                                                                                              {
                                                                                                                t = term_x_32;
                                                                                                                t = set_config_0(t);
                                                                                                                t = term_y_32;
                                                                                                                return(t);
                                                                                                              }
                                                                                                              ATerm w_10 (ATerm t)
                                                                                                              {
                                                                                                                t = term_z_32;
                                                                                                                return(t);
                                                                                                              }
                                                                                                              t = Option_3(t, s_10, v_10, w_10);
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm f_33 = NULL;
  f_33 = t;
  t = SSL_table_destroy(not_null(f_33));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_0 (ATerm))
{
  ATerm j_33 = NULL;
  ATerm k_33 = NULL;
  t = k_0(t);
  {
    k_33 = t;
    if(((j_33 != NULL) && (j_33 != k_33)))
      _fail(k_33);
    else
      j_33 = k_33;
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_33), term_p_33), term_o_33), term_n_33), term_a_33), term_m_33), term_a_33), term_a_33), term_l_33), term_a_33), term_i_33), term_h_33), term_a_33), term_g_33), term_e_33), not_null(j_33)), term_d_33), term_c_33), term_a_33), term_b_33), term_a_33);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm s_33 = NULL,t_33 = NULL,u_33 = NULL;
  u_33 = t;
  r_33 :
  if(((ATgetType(u_33) == AT_LIST) && ((ATermList) u_33 != ATempty)))
    {
      s_33 = ATgetFirst((ATermList) u_33);
      t_33 = (ATerm) ATgetNext((ATermList) u_33);
      {
        ATerm x_33 = NULL;
        t = not_null(t_33);
        {
          ATerm v_33;
          v_33 = t;
          {
            ATerm y_33 = NULL,a_34 = NULL,c_34 = NULL;
            ATerm w_33;
            w_33 = t;
            {
              ATerm z_33 = NULL;
              t = j_0(t);
              {
                z_33 = t;
                if(((y_33 != NULL) && (y_33 != z_33)))
                  _fail(z_33);
                else
                  y_33 = z_33;
              }
            }
            t = w_33;
            {
              ATerm b_34 = NULL;
              t = not_null(s_33);
              {
                t = i_0(t);
                {
                  b_34 = t;
                  if(((a_34 != NULL) && (a_34 != b_34)))
                    _fail(b_34);
                  else
                    a_34 = b_34;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(y_33)), not_null(a_34));
                {
                  c_34 = t;
                  if(((x_33 != NULL) && (x_33 != c_34)))
                    _fail(c_34);
                  else
                    x_33 = c_34;
                }
              }
            }
          }
          t = v_33;
          {
            ATerm z_10 (ATerm t)
            {
              t = not_null(x_33);
              return(t);
            }
            t = reverse_acc_2(t, i_0, z_10);
          }
        }
      }
    }
  else
    {
      if(((ATermList) u_33 == ATempty))
        {
          {
            t = term_t_21;
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
  ATerm a_11 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, a_11);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm f_0 (ATerm))
{
  ATerm j_34 = NULL;
  ATerm k_34 = NULL;
  t = term_t_21;
  {
    t = f_0(t);
    {
      k_34 = t;
      if(((j_34 != NULL) && (j_34 != k_34)))
        _fail(k_34);
      else
        j_34 = k_34;
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_34), not_null(j_34)), term_d_34);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm h_59 (ATerm))
{
  ATerm u_34 = NULL,v_34 = NULL;
  u_34 = t;
  t_34 :
  if(match_cons(u_34, sym_Program_1))
    {
      v_34 = ATgetArgument(u_34, 0);
      {
        ATerm y_34 = NULL,a_35 = NULL;
        ATerm z_34 = NULL;
        t = SSLgetAnnotations(not_null(u_34));
        {
          z_34 = t;
          if(((y_34 != NULL) && (y_34 != z_34)))
            _fail(z_34);
          else
            y_34 = z_34;
        }
        {
          t = not_null(v_34);
          {
            ATerm c_35 = NULL;
            t = h_59(t);
            {
              a_35 = t;
              {
                ATerm d_35 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(a_35)), not_null(y_34));
                {
                  d_35 = t;
                  if(((c_35 != NULL) && (c_35 != d_35)))
                    _fail(d_35);
                  else
                    c_35 = d_35;
                }
                t = not_null(c_35);
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
  ATerm m_35 = NULL;
  ATerm d_11 (ATerm t)
  {
    ATerm e_11 (ATerm t)
    {
      ATerm n_35 = NULL;
      n_35 = t;
      if(((m_35 != NULL) && (m_35 != n_35)))
        _fail(n_35);
      else
        m_35 = n_35;
      return(t);
    }
    t = Program_1(t, e_11);
    return(t);
  }
  t = option_defined_1(t, d_11);
  {
    ATerm f_11 (ATerm t)
    {
      ATerm o_35 = NULL;
      ATerm p_35 = NULL;
      t = term_t_21;
      {
        ATerm k_11 (ATerm t)
        {
          t = not_null(m_35);
          return(t);
        }
        t = short_description_1(t, k_11);
        {
          t = concat_strings_0(t);
          {
            p_35 = t;
            if(((o_35 != NULL) && (o_35 != p_35)))
              _fail(p_35);
            else
              o_35 = p_35;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_17, (ATerm) ATinsert(ATempty, not_null(o_35)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, f_11);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_17, (ATerm) ATinsert(ATempty, term_f_34));
      {
        t = printnl_0(t);
        {
          t = term_i_34;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm l_11 (ATerm t)
                {
                  ATerm q_35 = NULL;
                  q_35 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_n_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_35)), term_l_34));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, l_11);
                {
                  ATerm m_11 (ATerm t)
                  {
                    ATerm s_35 = NULL;
                    ATerm t_35 = NULL;
                    t = term_t_21;
                    {
                      ATerm n_11 (ATerm t)
                      {
                        t = not_null(m_35);
                        return(t);
                      }
                      t = long_description_1(t, n_11);
                      {
                        t = concat_strings_0(t);
                        {
                          t_35 = t;
                          if(((s_35 != NULL) && (s_35 != t_35)))
                            _fail(t_35);
                          else
                            s_35 = t_35;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_n_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_35)), term_m_34));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, m_11);
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
ATerm Undefined_1 (ATerm t, ATerm i_59 (ATerm))
{
  ATerm e_36 = NULL,f_36 = NULL;
  e_36 = t;
  d_36 :
  if(match_cons(e_36, sym_Undefined_1))
    {
      f_36 = ATgetArgument(e_36, 0);
      {
        ATerm i_36 = NULL,k_36 = NULL;
        ATerm j_36 = NULL;
        t = SSLgetAnnotations(not_null(e_36));
        {
          j_36 = t;
          if(((i_36 != NULL) && (i_36 != j_36)))
            _fail(j_36);
          else
            i_36 = j_36;
        }
        {
          t = not_null(f_36);
          {
            ATerm m_36 = NULL;
            t = i_59(t);
            {
              k_36 = t;
              {
                ATerm n_36 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(k_36)), not_null(i_36));
                {
                  n_36 = t;
                  if(((m_36 != NULL) && (m_36 != n_36)))
                    _fail(n_36);
                  else
                    m_36 = n_36;
                }
                t = not_null(m_36);
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
ATerm option_defined_1 (ATerm t, ATerm j_66 (ATerm))
{
  t = fetch_1(t, j_66);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm w_36 = NULL;
  w_36 = t;
  v_36 :
  if(match_cons(w_36, sym_Help_0))
    {
      ATerm y_36 = NULL,a_37 = NULL;
      ATerm n_34;
      n_34 = t;
      {
        ATerm z_36 = NULL;
        t = SSLgetAnnotations(not_null(w_36));
        {
          z_36 = t;
          if(((y_36 != NULL) && (y_36 != z_36)))
            _fail(z_36);
          else
            y_36 = z_36;
        }
      }
      t = n_34;
      {
        ATerm b_37 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(y_36));
        {
          b_37 = t;
          if(((a_37 != NULL) && (a_37 != b_37)))
            _fail(b_37);
          else
            a_37 = b_37;
        }
        t = not_null(a_37);
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
  ATerm h_37 = NULL,i_37 = NULL,j_37 = NULL;
  h_37 = t;
  g_37 :
  if(match_cons(h_37, sym__2))
    {
      i_37 = ATgetArgument(h_37, 0);
      j_37 = ATgetArgument(h_37, 1);
      t = SSL_table_get(not_null(i_37), not_null(j_37));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm q_37 = NULL,r_37 = NULL,s_37 = NULL,t_37 = NULL;
  q_37 = t;
  p_37 :
  if(match_cons(q_37, sym__3))
    {
      r_37 = ATgetArgument(q_37, 0);
      s_37 = ATgetArgument(q_37, 1);
      t_37 = ATgetArgument(q_37, 2);
      {
        ATerm o_34;
        o_34 = t;
        {
          ATerm x_37 = NULL;
          ATerm y_37 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_37), not_null(s_37));
          {
            ATerm p_34 = t;
            int q_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(q_34);
              }
            else
              {
                t = p_34;
                t = (ATerm) ATempty;
              }
            {
              y_37 = t;
              if(((x_37 != NULL) && (x_37 != y_37)))
                _fail(y_37);
              else
                x_37 = y_37;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(r_37), not_null(s_37), (ATerm) ATinsert(CheckATermList(not_null(x_37)), not_null(t_37)));
            t = table_put_0(t);
          }
        }
        t = o_34;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm p_65 (ATerm))
{
  ATerm c_38 = NULL;
  ATerm d_38 = NULL;
  t = term_t_21;
  {
    t = p_65(t);
    {
      d_38 = t;
      if(((c_38 != NULL) && (c_38 != d_38)))
        _fail(d_38);
      else
        c_38 = d_38;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_g_34, term_h_34, not_null(c_38));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm o_38 = NULL,p_38 = NULL,q_38 = NULL;
  o_38 = t;
  i_38 :
  if(match_string(o_38, "register-usage-info"))
    {
      t = register_usage_1(t, e_0);
    }
  else
    {
      if(((ATgetType(o_38) == AT_LIST) && ((ATermList) o_38 != ATempty)))
        {
          p_38 = ATgetFirst((ATermList) o_38);
          q_38 = (ATerm) ATgetNext((ATermList) o_38);
          {
            ATerm t_38 = NULL;
            ATerm r_34;
            r_34 = t;
            {
              t = not_null(p_38);
              t = a_0(t);
            }
            t = r_34;
            {
              ATerm u_38 = NULL;
              t = term_t_21;
              {
                t = b_0(t);
                {
                  u_38 = t;
                  if(((t_38 != NULL) && (t_38 != u_38)))
                    _fail(u_38);
                  else
                    t_38 = u_38;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(q_38)), not_null(t_38));
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
  ATerm o_11 (ATerm t)
  {
    ATerm z_38 = NULL;
    z_38 = t;
    y_38 :
    if(!(match_string(z_38, "--help")))
      {
        if(!(match_string(z_38, "-h")))
          {
            if(!(match_string(z_38, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm p_11 (ATerm t)
  {
    t = term_o_32;
    return(t);
  }
  ATerm y_11 (ATerm t)
  {
    t = term_s_34;
    return(t);
  }
  t = Option_3(t, o_11, p_11, y_11);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm c_39 = NULL,d_39 = NULL,e_39 = NULL;
  c_39 = t;
  b_39 :
  if(((ATgetType(c_39) == AT_LIST) && ((ATermList) c_39 != ATempty)))
    {
      d_39 = ATgetFirst((ATermList) c_39);
      e_39 = (ATerm) ATgetNext((ATermList) c_39);
      t = (ATerm) ATinsert(CheckATermList(not_null(e_39)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(d_39)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm k_39 = NULL,l_39 = NULL,o_39 = NULL;
  k_39 = t;
  j_39 :
  if(match_cons(k_39, sym__2))
    {
      l_39 = ATgetArgument(k_39, 0);
      o_39 = ATgetArgument(k_39, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_h_25, not_null(l_39), not_null(o_39));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm n_65 (ATerm))
{
  ATerm w_34;
  w_34 = t;
  {
    ATerm z_11 (ATerm t)
    {
      t = term_x_34;
      t = n_65(t);
      return(t);
    }
    t = try_1(t, z_11);
  }
  t = w_34;
  {
    ATerm a_12 (ATerm t)
    {
      ATerm w_39 = NULL;
      ATerm b_35;
      b_35 = t;
      {
        ATerm u_39 = NULL;
        ATerm v_39 = NULL;
        v_39 = t;
        if(((u_39 != NULL) && (u_39 != v_39)))
          _fail(v_39);
        else
          u_39 = v_39;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_e_35, not_null(u_39));
          t = set_config_0(t);
        }
      }
      t = b_35;
      {
        ATerm x_39 = NULL;
        x_39 = t;
        if(((w_39 != NULL) && (w_39 != x_39)))
          _fail(x_39);
        else
          w_39 = x_39;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(w_39));
      }
      return(t);
    }
    ATerm b_12 (ATerm t)
    {
      ATerm f_35 = t;
      int g_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_35 = t;
          int i_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(i_35);
            }
          else
            {
              t = h_35;
              {
                t = n_65(t);
                t = Cons_2(t, _id, b_12);
              }
            }
          LocalPopChoice(g_35);
        }
      else
        {
          t = f_35;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, a_12, b_12);
  }
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm m_65 (ATerm))
{
  ATerm c_40 = NULL;
  ATerm j_35;
  j_35 = t;
  {
    t = term_k_35;
    t = table_put_0(t);
  }
  t = j_35;
  {
    ATerm c_12 (ATerm t)
    {
      ATerm l_35 = t;
      int r_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_65(t);
          LocalPopChoice(r_35);
        }
      else
        {
          t = l_35;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, c_12);
    {
      ATerm f_12 (ATerm t)
      {
        ATerm u_35 = t;
        int v_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_t_14;
                t = exit_0(t);
              }
            }
            LocalPopChoice(v_35);
          }
        else
          {
            t = u_35;
            {
              ATerm g_12 (ATerm t)
              {
                ATerm l_12 (ATerm t)
                {
                  ATerm d_40 = NULL;
                  d_40 = t;
                  if(((c_40 != NULL) && (c_40 != d_40)))
                    _fail(d_40);
                  else
                    c_40 = d_40;
                  return(t);
                }
                t = Undefined_1(t, l_12);
                return(t);
              }
              t = option_defined_1(t, g_12);
              {
                ATerm w_35;
                w_35 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_n_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_40)), term_x_35));
                  t = printnl_0(t);
                }
                t = w_35;
                {
                  t = system_usage_0(t);
                  {
                    t = term_j_22;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, f_12);
      {
        ATerm y_35;
        y_35 = t;
        {
          t = term_g_34;
          t = table_destroy_0(t);
        }
        t = y_35;
      }
    }
  }
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm h_40 = NULL,i_40 = NULL,j_40 = NULL;
  h_40 = t;
  g_40 :
  if(match_cons(h_40, sym__2))
    {
      i_40 = ATgetArgument(h_40, 0);
      j_40 = ATgetArgument(h_40, 1);
      {
        t = not_null(i_40);
        {
          ATerm m_12 (ATerm t)
          {
            t = not_null(j_40);
            return(t);
          }
          t = at_end_1(t, m_12);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm m_48 (ATerm), ATerm n_48 (ATerm))
{
  ATerm t_40 = NULL,u_40 = NULL,v_40 = NULL;
  t_40 = t;
  s_40 :
  if(match_cons(t_40, sym__2))
    {
      u_40 = ATgetArgument(t_40, 0);
      v_40 = ATgetArgument(t_40, 1);
      {
        ATerm z_40 = NULL,b_41 = NULL;
        ATerm a_41 = NULL;
        t = SSLgetAnnotations(not_null(t_40));
        {
          a_41 = t;
          if(((z_40 != NULL) && (z_40 != a_41)))
            _fail(a_41);
          else
            z_40 = a_41;
        }
        {
          t = not_null(u_40);
          {
            ATerm d_41 = NULL;
            t = m_48(t);
            {
              b_41 = t;
              {
                t = not_null(v_40);
                {
                  ATerm f_41 = NULL;
                  t = n_48(t);
                  {
                    d_41 = t;
                    {
                      ATerm h_41 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(b_41), not_null(d_41)), not_null(z_40));
                      {
                        h_41 = t;
                        if(((f_41 != NULL) && (f_41 != h_41)))
                          _fail(h_41);
                        else
                          f_41 = h_41;
                      }
                      t = not_null(f_41);
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
ATerm at_suffix_1 (ATerm t, ATerm s_77 (ATerm))
{
  ATerm n_41 (ATerm t)
  {
    ATerm z_35 = t;
    int a_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_77(t);
        LocalPopChoice(a_36);
      }
    else
      {
        t = z_35;
        t = Cons_2(t, _id, n_41);
      }
    return(t);
  }
  t = n_41(t);
  return(t);
}
ATerm has_extension_1 (ATerm t, ATerm m_69 (ATerm))
{
  ATerm q_41 = NULL;
  ATerm b_36;
  b_36 = t;
  {
    ATerm r_41 = NULL;
    t = m_69(t);
    {
      t = explode_string_0(t);
      {
        r_41 = t;
        if(((q_41 != NULL) && (q_41 != r_41)))
          _fail(r_41);
        else
          q_41 = r_41;
      }
    }
  }
  t = b_36;
  {
    ATerm c_36;
    c_36 = t;
    {
      t = explode_string_0(t);
      {
        ATerm n_12 (ATerm t)
        {
          ATerm s_41 = NULL;
          s_41 = t;
          if(((q_41 != NULL) && (q_41 != s_41)))
            _fail(s_41);
          else
            q_41 = s_41;
          return(t);
        }
        t = at_suffix_1(t, n_12);
      }
    }
    t = c_36;
  }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm u_70 (ATerm))
{
  ATerm g_36 = t;
  int h_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(h_36);
    }
  else
    {
      t = g_36;
      {
        ATerm l_36 = t;
        int o_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_12 (ATerm t)
            {
              t = filter_1(t, u_70);
              return(t);
            }
            t = Cons_2(t, u_70, o_12);
            LocalPopChoice(o_36);
          }
        else
          {
            t = l_36;
            {
              ATerm x_41 = NULL,y_41 = NULL,z_41 = NULL;
              x_41 = t;
              w_41 :
              if(((ATgetType(x_41) == AT_LIST) && ((ATermList) x_41 != ATempty)))
                {
                  y_41 = ATgetFirst((ATermList) x_41);
                  z_41 = (ATerm) ATgetNext((ATermList) x_41);
                  {
                    t = not_null(z_41);
                    t = filter_1(t, u_70);
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
  ATerm d_42 = NULL;
  d_42 = t;
  t = SSL_readdir(not_null(d_42));
  return(t);
}
ATerm find_plugins_2 (ATerm t, ATerm b_61 (ATerm), ATerm c_61 (ATerm))
{
  t = b_61(t);
  {
    ATerm p_12 (ATerm t)
    {
      ATerm i_42 = NULL;
      i_42 = t;
      {
        t = readdir_0(t);
        {
          ATerm u_12 (ATerm t)
          {
            ATerm k_42 = NULL;
            t = has_extension_1(t, c_61);
            {
              ATerm l_42 = NULL;
              l_42 = t;
              if(((k_42 != NULL) && (k_42 != l_42)))
                _fail(l_42);
              else
                k_42 = l_42;
              {
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(k_42)), term_p_36), not_null(i_42));
                t = concat_strings_0(t);
              }
            }
            return(t);
          }
          t = filter_1(t, u_12);
        }
      }
      return(t);
    }
    t = filter_1(t, p_12);
    t = concat_0(t);
  }
  return(t);
}
ATerm import_config_files_1 (ATerm t, ATerm e_61 (ATerm))
{
  ATerm q_36;
  q_36 = t;
  {
    t = e_61(t);
    {
      ATerm v_12 (ATerm t)
      {
        ATerm p_42 = NULL;
        ATerm y_12 (ATerm t)
        {
          ATerm z_12 (ATerm t)
          {
            t = term_r_36;
            return(t);
          }
          t = debug_1(t, z_12);
          return(t);
        }
        t = if_verbose2_1(t, y_12);
        {
          t = ReadFromFile_0(t);
          {
            ATerm q_42 = NULL;
            q_42 = t;
            if(((p_42 != NULL) && (p_42 != q_42)))
              _fail(q_42);
            else
              p_42 = q_42;
            {
              t = (ATerm) ATmakeAppl(sym__2, term_h_25, not_null(p_42));
              t = table_putlist_0(t);
            }
          }
        }
        return(t);
      }
      t = map_1(t, v_12);
    }
  }
  t = q_36;
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm z_42 = NULL;
  ATerm b_43 = NULL;
  z_42 = t;
  {
    ATerm s_36;
    s_36 = t;
    {
      ATerm c_43 = NULL;
      t = term_t_36;
      {
        c_43 = t;
        if(((b_43 != NULL) && (b_43 != c_43)))
          _fail(c_43);
        else
          b_43 = c_43;
      }
    }
    t = s_36;
    {
      t = SSL_open_file(not_null(z_42), not_null(b_43));
      t = SSL_close_file(not_null(z_42));
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm o_77 (ATerm))
{
  ATerm f_43 (ATerm t)
  {
    ATerm u_36 = t;
    int x_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, f_43);
        LocalPopChoice(x_36);
      }
    else
      {
        t = u_36;
        {
          t = Nil_0(t);
          t = o_77(t);
        }
      }
    return(t);
  }
  t = f_43(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm c_37 = t;
  int d_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(d_37);
    }
  else
    {
      t = c_37;
      {
        ATerm i_43 = NULL,j_43 = NULL,k_43 = NULL;
        i_43 = t;
        h_43 :
        if(((ATgetType(i_43) == AT_LIST) && ((ATermList) i_43 != ATempty)))
          {
            j_43 = ATgetFirst((ATermList) i_43);
            k_43 = (ATerm) ATgetNext((ATermList) i_43);
            {
              t = not_null(j_43);
              {
                ATerm a_13 (ATerm t)
                {
                  t = not_null(k_43);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, a_13);
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
ATerm fetch_1 (ATerm t, ATerm i_77 (ATerm))
{
  ATerm p_43 (ATerm t)
  {
    ATerm e_37 = t;
    int f_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, i_77, _id);
        LocalPopChoice(f_37);
      }
    else
      {
        t = e_37;
        t = Cons_2(t, _id, p_43);
      }
    return(t);
  }
  t = p_43(t);
  return(t);
}
ATerm fetch_elem_1 (ATerm t, ATerm k_77 (ATerm))
{
  ATerm r_43 = NULL;
  ATerm b_13 (ATerm t)
  {
    ATerm s_43 = NULL;
    t = k_77(t);
    {
      s_43 = t;
      if(((r_43 != NULL) && (r_43 != s_43)))
        _fail(s_43);
      else
        r_43 = s_43;
    }
    return(t);
  }
  t = fetch_1(t, b_13);
  t = not_null(r_43);
  return(t);
}
ATerm find_config_file_2 (ATerm t, ATerm t_60 (ATerm), ATerm u_60 (ATerm))
{
  ATerm k_37 = t;
  int l_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_60(t);
      {
        ATerm g_13 (ATerm t)
        {
          ATerm w_43 = NULL,y_43 = NULL;
          ATerm m_37;
          m_37 = t;
          {
            ATerm x_43 = NULL;
            x_43 = t;
            if(((w_43 != NULL) && (w_43 != x_43)))
              _fail(x_43);
            else
              w_43 = x_43;
          }
          t = m_37;
          {
            ATerm z_43 = NULL;
            t = u_60(t);
            {
              z_43 = t;
              if(((y_43 != NULL) && (y_43 != z_43)))
                _fail(z_43);
              else
                y_43 = z_43;
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(y_43)), term_p_36), not_null(w_43));
              {
                t = concat_strings_0(t);
                t = file_exists_0(t);
              }
            }
          }
          return(t);
        }
        t = fetch_elem_1(t, g_13);
      }
      LocalPopChoice(l_37);
    }
  else
    {
      t = k_37;
      {
        t = term_n_37;
        {
          t = debug_1(t, u_60);
          _fail(t);
        }
      }
    }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm e_44 = NULL,f_44 = NULL,g_44 = NULL;
  ATerm o_37;
  o_37 = t;
  {
    ATerm h_44 = NULL,i_44 = NULL,j_44 = NULL,k_44 = NULL;
    h_44 = t;
    d_44 :
    if(match_cons(h_44, sym__3))
      {
        i_44 = ATgetArgument(h_44, 0);
        j_44 = ATgetArgument(h_44, 1);
        k_44 = ATgetArgument(h_44, 2);
        {
          if(((e_44 != NULL) && (e_44 != i_44)))
            _fail(i_44);
          else
            e_44 = i_44;
          {
            if(((f_44 != NULL) && (f_44 != j_44)))
              _fail(j_44);
            else
              f_44 = j_44;
            {
              if(((g_44 != NULL) && (g_44 != k_44)))
                _fail(k_44);
              else
                g_44 = k_44;
              t = SSL_table_put(not_null(e_44), not_null(f_44), not_null(g_44));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = o_37;
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm q_44 = NULL;
  q_44 = t;
  p_44 :
  if(((ATermList) q_44 == ATempty))
    {
      {
        ATerm s_44 = NULL,u_44 = NULL;
        ATerm u_37;
        u_37 = t;
        {
          ATerm t_44 = NULL;
          t = SSLgetAnnotations(not_null(q_44));
          {
            t_44 = t;
            if(((s_44 != NULL) && (s_44 != t_44)))
              _fail(t_44);
            else
              s_44 = t_44;
          }
        }
        t = u_37;
        {
          ATerm v_44 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(s_44));
          {
            v_44 = t;
            if(((u_44 != NULL) && (u_44 != v_44)))
              _fail(v_44);
            else
              u_44 = v_44;
          }
          t = not_null(u_44);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm map_1 (ATerm t, ATerm a_77 (ATerm))
{
  ATerm z_44 (ATerm t)
  {
    ATerm v_37 = t;
    int w_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(w_37);
      }
    else
      {
        t = v_37;
        t = Cons_2(t, a_77, z_44);
      }
    return(t);
  }
  t = z_44(t);
  return(t);
}
ATerm table_putlist_0 (ATerm t)
{
  ATerm e_45 = NULL,f_45 = NULL,g_45 = NULL;
  e_45 = t;
  d_45 :
  if(match_cons(e_45, sym__2))
    {
      f_45 = ATgetArgument(e_45, 0);
      g_45 = ATgetArgument(e_45, 1);
      {
        t = not_null(g_45);
        {
          ATerm h_13 (ATerm t)
          {
            ATerm j_45 = NULL,k_45 = NULL,l_45 = NULL;
            j_45 = t;
            c_45 :
            if(match_cons(j_45, sym__2))
              {
                k_45 = ATgetArgument(j_45, 0);
                l_45 = ATgetArgument(j_45, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(f_45), not_null(k_45), not_null(l_45));
                  t = table_put_0(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, h_13);
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
  ATerm s_45 = NULL;
  s_45 = t;
  t = SSL_ReadFromFile(not_null(s_45));
  return(t);
}
ATerm import_config_file_1 (ATerm t, ATerm d_61 (ATerm))
{
  ATerm z_37;
  z_37 = t;
  {
    ATerm w_45 = NULL;
    t = d_61(t);
    {
      ATerm i_13 (ATerm t)
      {
        ATerm j_13 (ATerm t)
        {
          t = term_r_36;
          return(t);
        }
        t = debug_1(t, j_13);
        return(t);
      }
      t = if_verbose2_1(t, i_13);
      {
        t = ReadFromFile_0(t);
        {
          ATerm x_45 = NULL;
          x_45 = t;
          if(((w_45 != NULL) && (w_45 != x_45)))
            _fail(x_45);
          else
            w_45 = x_45;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_h_25, not_null(w_45));
            t = table_putlist_0(t);
          }
        }
      }
    }
  }
  t = z_37;
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm d_46 = NULL;
  d_46 = t;
  t = SSL_implode_string(not_null(d_46));
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm l_46 = NULL;
  l_46 = t;
  t = SSL_explode_string(not_null(l_46));
  return(t);
}
ATerm get_path_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm a_38 = t;
    int b_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_46 (ATerm t)
        {
          ATerm e_38 = t;
          int f_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, q_46);
              LocalPopChoice(f_38);
            }
          else
            {
              t = e_38;
              {
                ATerm n_13 (ATerm t)
                {
                  ATerm p_46 = NULL;
                  p_46 = t;
                  o_46 :
                  if(!(match_int(p_46, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                ATerm q_13 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = Cons_2(t, n_13, q_13);
              }
            }
          return(t);
        }
        t = q_46(t);
        LocalPopChoice(b_38);
      }
    else
      {
        t = a_38;
        t = (ATerm) ATempty;
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm z_59 (ATerm), ATerm a_60 (ATerm))
{
  ATerm x_46 = NULL,y_46 = NULL,z_46 = NULL;
  x_46 = t;
  w_46 :
  if(((ATgetType(x_46) == AT_LIST) && ((ATermList) x_46 != ATempty)))
    {
      y_46 = ATgetFirst((ATermList) x_46);
      z_46 = (ATerm) ATgetNext((ATermList) x_46);
      {
        ATerm d_47 = NULL,f_47 = NULL;
        ATerm e_47 = NULL;
        t = SSLgetAnnotations(not_null(x_46));
        {
          e_47 = t;
          if(((d_47 != NULL) && (d_47 != e_47)))
            _fail(e_47);
          else
            d_47 = e_47;
        }
        {
          t = not_null(y_46);
          {
            ATerm h_47 = NULL;
            t = z_59(t);
            {
              f_47 = t;
              {
                t = not_null(z_46);
                {
                  ATerm j_47 = NULL;
                  t = a_60(t);
                  {
                    h_47 = t;
                    {
                      ATerm k_47 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(h_47)), not_null(f_47)), not_null(d_47));
                      {
                        k_47 = t;
                        if(((j_47 != NULL) && (j_47 != k_47)))
                          _fail(k_47);
                        else
                          j_47 = k_47;
                      }
                      t = not_null(j_47);
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
  ATerm s_48 = NULL,u_48 = NULL,w_48 = NULL;
  ATerm g_38;
  g_38 = t;
  {
    ATerm r_13 (ATerm t)
    {
      ATerm t_48 = NULL;
      t = get_path_0(t);
      {
        t_48 = t;
        if(((s_48 != NULL) && (s_48 != t_48)))
          _fail(t_48);
        else
          s_48 = t_48;
      }
      return(t);
    }
    t = Cons_2(t, r_13, _id);
  }
  t = g_38;
  {
    ATerm h_38;
    h_38 = t;
    {
      ATerm v_48 = NULL;
      t = get_conf_pkgdatadir();
      {
        v_48 = t;
        if(((u_48 != NULL) && (u_48 != v_48)))
          _fail(v_48);
        else
          u_48 = v_48;
      }
    }
    t = h_38;
    {
      ATerm j_38;
      j_38 = t;
      {
        ATerm x_48 = NULL;
        t = get_conf_datadir();
        {
          x_48 = t;
          if(((w_48 != NULL) && (w_48 != x_48)))
            _fail(x_48);
          else
            w_48 = x_48;
        }
      }
      t = j_38;
      {
        ATerm s_13 (ATerm t)
        {
          ATerm v_13 (ATerm t)
          {
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_48)), not_null(s_48));
            return(t);
          }
          ATerm w_13 (ATerm t)
          {
            t = term_k_38;
            return(t);
          }
          t = find_config_file_2(t, v_13, w_13);
          return(t);
        }
        t = import_config_file_1(t, s_13);
        {
          ATerm x_13 (ATerm t)
          {
            ATerm c_14 (ATerm t)
            {
              ATerm y_48 = NULL;
              ATerm z_48 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(w_48), term_l_38);
              {
                t = conc_strings_0(t);
                {
                  z_48 = t;
                  if(((y_48 != NULL) && (y_48 != z_48)))
                    _fail(z_48);
                  else
                    y_48 = z_48;
                }
              }
              t = (ATerm) ATinsert(ATempty, not_null(y_48));
              return(t);
            }
            ATerm d_14 (ATerm t)
            {
              t = term_m_38;
              return(t);
            }
            t = find_plugins_2(t, c_14, d_14);
            return(t);
          }
          t = import_config_files_1(t, x_13);
          {
            t = parse_options_1(t, sc_options_0);
            {
              ATerm e_14 (ATerm t)
              {
                ATerm a_49 = NULL;
                t = term_s_32;
                {
                  t = get_config_0(t);
                  {
                    ATerm b_49 = NULL;
                    t = term_n_38;
                    {
                      t = get_config_0(t);
                      {
                        b_49 = t;
                        if(((a_49 != NULL) && (a_49 != b_49)))
                          _fail(b_49);
                        else
                          a_49 = b_49;
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_r_38, (ATerm) ATinsert(ATempty, not_null(a_49)));
                      {
                        t = call_0(t);
                        {
                          t = term_t_14;
                          t = exit_0(t);
                        }
                      }
                    }
                  }
                }
                return(t);
              }
              t = try_1(t, e_14);
              {
                ATerm g_14 (ATerm t)
                {
                  t = term_w_32;
                  {
                    t = get_config_0(t);
                    {
                      t = sc_version_0(t);
                      {
                        t = term_t_14;
                        t = exit_0(t);
                      }
                    }
                  }
                  return(t);
                }
                t = try_1(t, g_14);
                {
                  ATerm s_38 = t;
                  int v_38 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm c_49 = NULL;
                      ATerm d_49 = NULL;
                      t = term_e_21;
                      {
                        t = get_config_0(t);
                        {
                          t = basename_0(t);
                          {
                            d_49 = t;
                            if(((c_49 != NULL) && (c_49 != d_49)))
                              _fail(d_49);
                            else
                              c_49 = d_49;
                          }
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym__2, not_null(c_49), term_y_16);
                      LocalPopChoice(v_38);
                    }
                  else
                    {
                      t = s_38;
                      {
                        t = (ATerm) ATinsert(ATempty, term_w_38);
                        t = fatal_error_0(t);
                      }
                    }
                  {
                    t = sc_announce_0(t);
                    {
                      ATerm h_14 (ATerm t)
                      {
                        ATerm x_38;
                        x_38 = t;
                        {
                          t = term_e_21;
                          {
                            t = get_config_0(t);
                            {
                              ATerm i_14 (ATerm t)
                              {
                                t = term_a_39;
                                return(t);
                              }
                              t = debug_1(t, i_14);
                            }
                          }
                        }
                        t = x_38;
                        return(t);
                      }
                      t = if_verbose1_1(t, h_14);
                    }
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
  ATerm f_39 = t;
  int g_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = command_line_options_0(t);
      {
        ATerm j_14 (ATerm t)
        {
          ATerm o_14 (ATerm t)
          {
            ATerm n_49 = NULL;
            ATerm o_49 = NULL;
            o_49 = t;
            if(((n_49 != NULL) && (n_49 != o_49)))
              _fail(o_49);
            else
              n_49 = o_49;
            {
              t = (ATerm) ATmakeAppl(sym__2, term_n_17, (ATerm) ATinsert(CheckATermList(not_null(n_49)), term_h_39));
              t = printnl_0(t);
            }
            return(t);
          }
          t = if_verbose1_1(t, o_14);
          return(t);
        }
        t = profile_p__2(t, j_14, compile_0);
        {
          ATerm p_14 (ATerm t)
          {
            ATerm p_49 = NULL;
            ATerm q_49 = NULL;
            t = run_time_0(t);
            {
              q_49 = t;
              if(((p_49 != NULL) && (p_49 != q_49)))
                _fail(q_49);
              else
                p_49 = q_49;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, term_n_17, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_39), not_null(p_49)), term_i_39));
              t = printnl_0(t);
            }
            return(t);
          }
          t = if_verbose2_1(t, p_14);
          {
            t = term_t_14;
            t = exit_0(t);
          }
        }
      }
      LocalPopChoice(g_39);
    }
  else
    {
      t = f_39;
      {
        ATerm r_49 = NULL;
        ATerm s_49 = NULL;
        t = run_time_0(t);
        {
          s_49 = t;
          if(((r_49 != NULL) && (r_49 != s_49)))
            _fail(s_49);
          else
            r_49 = s_49;
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_n_17, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_39), not_null(r_49)), term_n_39));
          {
            t = printnl_0(t);
            {
              t = term_j_22;
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
