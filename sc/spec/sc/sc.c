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
ATerm term_e_40;
ATerm term_d_40;
ATerm term_y_39;
ATerm term_x_39;
ATerm term_s_39;
ATerm term_q_39;
ATerm term_l_39;
ATerm term_k_39;
ATerm term_j_39;
ATerm term_d_39;
ATerm term_c_39;
ATerm term_h_38;
ATerm term_q_37;
ATerm term_l_37;
ATerm term_j_37;
ATerm term_s_36;
ATerm term_h_36;
ATerm term_y_35;
ATerm term_u_35;
ATerm term_s_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_y_34;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_t_34;
ATerm term_q_34;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_m_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_h_34;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_z_33;
ATerm term_p_33;
ATerm term_h_33;
ATerm term_g_33;
ATerm term_e_33;
ATerm term_z_32;
ATerm term_e_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_n_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_h_31;
ATerm term_c_31;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_b_30;
ATerm term_w_29;
ATerm term_r_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_i_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_d_29;
ATerm term_a_29;
ATerm term_x_28;
ATerm term_w_28;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_n_28;
ATerm term_g_28;
ATerm term_b_28;
ATerm term_w_27;
ATerm term_t_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_h_27;
ATerm term_b_27;
ATerm term_l_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_o_25;
ATerm term_k_25;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_m_23;
ATerm term_j_23;
ATerm term_e_23;
ATerm term_w_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_i_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_b_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_b_19;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_h_18;
ATerm term_z_17;
ATerm term_x_17;
ATerm term_q_17;
ATerm term_l_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_d_16;
ATerm term_b_16;
ATerm term_z_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_f_15;
void init_constant_terms (void)
{
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("rm", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-f", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree1", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol(".s1", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol(".s2", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol(".s3", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol(".s4", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".s5", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".s6", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".s7", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".s8", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".s9", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".ac", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".c.abox", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol(".mtree", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol(".atree", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling C code", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("C.pp", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize2", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize1", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol(".sdefs", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to ", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("frontend", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to ", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-dep", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("The Stratego Compiler (version ", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i file            Main module to compile (required)\n", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f    Write output to f", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(sym_Ignore_0);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d|--Include d   Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d\n", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(sym__2, term_p_18, term_d_22);
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(sym_CC_0);
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(sym__2, term_s_22, term_d_22);
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(sym_AST_0);
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(sym__2, term_b_21, term_d_22);
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(sym_FRONTEND_0);
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--norm", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(sym__2, term_i_29, term_d_22);
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(sym_NORM_0);
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--norm             Do not remove intermediate results", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(sym__2, term_t_20, term_d_22);
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(sym_FUSION_0);
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(sym__2, term_k_30, term_d_22);
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(sym_TraceAll_0);
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all        Instrument all definitions to print tracing information", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-t f               Instrument definition of f to print tracing information\n", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i       Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(sym__2, term_h_15, term_f_15);
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_15);
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-h", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(sym__2, term_n_31, term_d_22);
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(sym__2, term_z_32, term_d_22);
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(sym_Manual_0);
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(sym__2, term_p_33, term_d_22);
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version       Display program's version", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   \n", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   The Stratego Compiler translates Stratego specifications to C code\n", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   Typical usage:\n", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("     ", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i mod\n", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   to compile module mod\n", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   paradigm of rewriting strategies. For documentation see\n", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("                 http://www.stratego-language.org", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   Copyright (C) 1998-2002 Eelco Visser <visser@acm.org>\n", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   This program is free software; you can redistribute it and/or modify\n", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   it under the terms of the GNU General Public License as published by\n", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   the Free Software Foundation; either version 2, or (at your option)\n", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   any later version.\n", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(sym__2, term_y_34, term_z_34);
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(sym__3, term_y_34, term_z_34, (ATerm) ATempty);
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(ATmakeSymbol("importing: ", 0, ATtrue));
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue));
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(ATmakeSymbol("sc.config", 0, ATtrue));
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol("/sc-plugins", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".plugin", 0, ATtrue));
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(ATmakeSymbol("manual", 0, ATtrue));
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(ATmakeSymbol("cat", 0, ATtrue));
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue));
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
ATerm call_noisy_0 (ATerm);
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
ATerm short_description_1 (ATerm, ATerm h_0 (ATerm));
ATerm Program_1 (ATerm, ATerm m_59 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm n_59 (ATerm));
ATerm option_defined_1 (ATerm, ATerm u_66 (ATerm));
ATerm Help_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm u_65 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm g_0 (ATerm));
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
  int e_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = z_71(t);
      LocalPopChoice(e_15);
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
      t = term_f_15;
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
    ATerm g_15;
    g_15 = t;
    {
      ATerm c_3 = NULL;
      ATerm d_3 = NULL;
      t = term_h_15;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_3), term_i_15);
        t = geq_0(t);
      }
    }
    t = g_15;
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
    ATerm j_15;
    j_15 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_15, (ATerm) ATinsert(CheckATermList(not_null(g_3)), term_l_15));
      t = call_0(t);
    }
    t = j_15;
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
    ATerm m_15 = t;
    int n_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_76(t);
        LocalPopChoice(n_15);
      }
    else
      {
        t = m_15;
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
                  t = (ATerm) ATmakeAppl(sym__2, not_null(u_4), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_16), term_y_16), term_x_16), term_w_16), term_v_16), term_u_16), term_d_16), term_b_16), term_z_15), term_x_15), term_w_15), term_r_15), term_q_15), term_p_15));
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
                    ATerm a_17;
                    a_17 = t;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(u_4), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_17), term_b_17), term_z_16), term_y_16), term_x_16), term_w_16), term_v_16), term_u_16), term_d_16), term_b_16), term_z_15), term_x_15), term_w_15), term_r_15), term_q_15), term_p_15));
                      {
                        t = rzip_1(t, conc_strings_0);
                        t = rm_files_0(t);
                      }
                    }
                    t = a_17;
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
  ATerm e_0 (ATerm t)
  {
    ATerm f_0 (ATerm t)
    {
      t = term_d_17;
      return(t);
    }
    t = say_1(t, f_0);
    return(t);
  }
  t = if_verbose2_1(t, e_0);
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
        ATerm j_17;
        j_17 = t;
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
        t = j_17;
        {
          ATerm k_17;
          k_17 = t;
          {
            ATerm j_5 = NULL;
            ATerm k_5 = NULL;
            t = term_l_17;
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
              t = (ATerm) ATmakeAppl(sym__2, term_q_17, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(j_5)), not_null(h_5)), term_f_17), not_null(f_5)));
              {
                ATerm r_0 (ATerm t)
                {
                  ATerm r_17;
                  r_17 = t;
                  {
                    ATerm l_5 = NULL,n_5 = NULL;
                    ATerm s_17;
                    s_17 = t;
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
                    t = s_17;
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
                        t = (ATerm) ATmakeAppl(sym__2, term_x_17, (ATerm) ATinsert(CheckATermList(not_null(n_5)), not_null(l_5)));
                        t = printnl_0(t);
                      }
                    }
                  }
                  t = r_17;
                  return(t);
                }
                t = if_verbose3_1(t, r_0);
                t = call_0(t);
              }
            }
          }
          t = k_17;
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
    ATerm y_17;
    y_17 = t;
    {
      ATerm n_7 = NULL;
      ATerm o_7 = NULL;
      t = term_h_15;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_7), term_z_17);
        t = geq_0(t);
      }
    }
    t = y_17;
    t = m_60(t);
    return(t);
  }
  t = try_1(t, s_0);
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm a_18;
  a_18 = t;
  {
    ATerm r_7 = NULL;
    ATerm s_7 = NULL;
    s_7 = t;
    if(((r_7 != NULL) && (r_7 != s_7)))
      _fail(s_7);
    else
      r_7 = s_7;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_17, (ATerm) ATinsert(ATempty, not_null(r_7)));
      t = printnl_0(t);
    }
  }
  t = a_18;
  return(t);
}
ATerm say_1 (ATerm t, ATerm m_68 (ATerm))
{
  ATerm g_18;
  g_18 = t;
  {
    t = m_68(t);
    t = debug_0(t);
  }
  t = g_18;
  return(t);
}
ATerm c_to_object_code_0 (ATerm t)
{
  ATerm a_8 = NULL,c_8 = NULL;
  ATerm t_0 (ATerm t)
  {
    ATerm u_0 (ATerm t)
    {
      t = term_h_18;
      return(t);
    }
    t = say_1(t, u_0);
    return(t);
  }
  t = if_verbose2_1(t, t_0);
  {
    ATerm k_18;
    k_18 = t;
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
    t = k_18;
    {
      ATerm w_0 (ATerm t)
      {
        t = term_z_16;
        return(t);
      }
      t = _2(t, _id, w_0);
      {
        ATerm l_18;
        l_18 = t;
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
        t = l_18;
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
              t = (ATerm) ATmakeAppl(sym__2, term_q_17, not_null(e_8));
              {
                ATerm x_0 (ATerm t)
                {
                  ATerm w_18;
                  w_18 = t;
                  {
                    ATerm i_8 = NULL,k_8 = NULL;
                    ATerm x_18;
                    x_18 = t;
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
                    t = x_18;
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
                        t = (ATerm) ATmakeAppl(sym__2, term_x_17, (ATerm) ATinsert(CheckATermList(not_null(k_8)), not_null(i_8)));
                        t = printnl_0(t);
                      }
                    }
                  }
                  t = w_18;
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
  ATerm y_18 = t;
  int z_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_19;
      a_19 = t;
      {
        t = term_p_18;
        t = get_config_0(t);
      }
      t = a_19;
      LocalPopChoice(z_18);
    }
  else
    {
      t = y_18;
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
              t = (ATerm) ATmakeAppl(sym__2, term_x_17, (ATerm) ATinsert(CheckATermList(not_null(t_8)), term_b_19));
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
    t = term_y_16;
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
    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_8)), term_q_19);
    return(t);
  }
  t = pipe_3(t, e_1, f_1, g_1);
  return(t);
}
ATerm s2c_0 (ATerm t)
{
  ATerm h_1 (ATerm t)
  {
    t = term_r_19;
    t = get_config_0(t);
    return(t);
  }
  ATerm i_1 (ATerm t)
  {
    t = term_x_16;
    return(t);
  }
  ATerm k_1 (ATerm t)
  {
    ATerm d_9 = NULL,f_9 = NULL;
    ATerm s_19;
    s_19 = t;
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
    t = s_19;
    {
      ATerm i_9 = NULL;
      t = term_t_19;
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
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_9)), term_t_19);
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_9), (ATerm) ATinsert(CheckATermList(not_null(f_9)), term_u_19));
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
    t = (ATerm) ATinsert(CheckATermList(not_null(n_9)), term_u_19);
    return(t);
  }
  t = pipe_3(t, m_1, _id, n_1);
  return(t);
}
ATerm canonicalize_0 (ATerm t)
{
  ATerm o_1 (ATerm t)
  {
    t = term_a_20;
    t = get_config_0(t);
    return(t);
  }
  ATerm p_1 (ATerm t)
  {
    t = term_w_16;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(r_9)), term_u_19);
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
        t = (ATerm) ATmakeAppl(sym__2, term_x_17, (ATerm) ATinsert(CheckATermList(not_null(v_9)), term_b_20));
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
    t = term_c_20;
    t = get_config_0(t);
    return(t);
  }
  ATerm y_1 (ATerm t)
  {
    t = term_v_16;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(z_9)), term_u_19);
    return(t);
  }
  t = pipe_3(t, x_1, y_1, z_1);
  return(t);
}
ATerm compile_match_0 (ATerm t)
{
  ATerm a_2 (ATerm t)
  {
    t = term_d_20;
    t = get_config_0(t);
    return(t);
  }
  ATerm b_2 (ATerm t)
  {
    t = term_u_16;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(d_10)), term_u_19);
    return(t);
  }
  t = pipe_3(t, a_2, b_2, g_2);
  return(t);
}
ATerm inline_0 (ATerm t)
{
  ATerm h_2 (ATerm t)
  {
    t = term_e_20;
    t = get_config_0(t);
    return(t);
  }
  ATerm k_2 (ATerm t)
  {
    t = term_d_16;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(h_10)), term_u_19);
    return(t);
  }
  t = pipe_3(t, h_2, k_2, l_2);
  return(t);
}
ATerm fusion_0 (ATerm t)
{
  ATerm m_2 (ATerm t)
  {
    t = term_f_20;
    t = get_config_0(t);
    return(t);
  }
  ATerm n_2 (ATerm t)
  {
    t = term_b_16;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(l_10)), term_u_19);
    return(t);
  }
  t = pipe_3(t, m_2, n_2, o_2);
  return(t);
}
ATerm optimize1_0 (ATerm t)
{
  ATerm r_2 (ATerm t)
  {
    t = term_g_20;
    t = get_config_0(t);
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    t = term_z_15;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(p_10)), term_u_19);
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
        t = (ATerm) ATmakeAppl(sym__2, term_x_17, (ATerm) ATinsert(CheckATermList(not_null(t_10)), term_h_20));
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
        ATerm l_20;
        l_20 = t;
        {
          ATerm s_20 = t;
          if((PushChoice() == 0))
            {
              t = term_t_20;
              t = get_config_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = s_20;
            }
        }
        t = l_20;
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
    t = term_u_20;
    t = get_config_0(t);
    return(t);
  }
  ATerm h_3 (ATerm t)
  {
    t = term_x_15;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(x_10)), term_u_19);
    return(t);
  }
  t = pipe_3(t, f_3, h_3, i_3);
  return(t);
}
ATerm stratego_nf_0 (ATerm t)
{
  ATerm j_3 (ATerm t)
  {
    t = term_w_20;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(b_11)), term_u_19);
    return(t);
  }
  t = pipe_3(t, j_3, _id, o_3);
  return(t);
}
ATerm extract_0 (ATerm t)
{
  ATerm p_3 (ATerm t)
  {
    t = term_x_20;
    t = get_config_0(t);
    return(t);
  }
  ATerm q_3 (ATerm t)
  {
    t = term_w_15;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(f_11)), term_u_19);
    return(t);
  }
  t = pipe_3(t, p_3, q_3, r_3);
  return(t);
}
ATerm extract_all_0 (ATerm t)
{
  ATerm z_3 (ATerm t)
  {
    t = term_y_20;
    t = get_config_0(t);
    return(t);
  }
  ATerm a_4 (ATerm t)
  {
    t = term_z_20;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(j_11)), term_u_19);
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
    ATerm a_21;
    a_21 = t;
    {
      t = term_b_21;
      t = get_config_0(t);
    }
    t = a_21;
    {
      ATerm c_21 = t;
      int d_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = extract_all_0(t);
          LocalPopChoice(d_21);
        }
      else
        {
          t = c_21;
          {
            t = (ATerm) ATinsert(ATempty, term_e_21);
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
          t = (ATerm) ATmakeAppl(sym__2, term_x_17, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(p_11)), not_null(o_11)), term_f_21));
          {
            t = printnl_0(t);
            {
              t = term_f_15;
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
  ATerm g_21;
  g_21 = t;
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
  t = g_21;
  {
    t = _2(t, _id, u_64);
    {
      ATerm l_21;
      l_21 = t;
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
      t = l_21;
      {
        ATerm m_21;
        m_21 = t;
        {
          ATerm c_12 = NULL,e_12 = NULL;
          ATerm n_21;
          n_21 = t;
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
          t = n_21;
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
              t = (ATerm) ATmakeAppl(sym__2, not_null(c_12), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(e_12)), not_null(a_12)), term_f_17), not_null(y_11)), term_o_21));
              t = call_0(t);
            }
          }
        }
        t = m_21;
      }
    }
  }
  return(t);
}
ATerm frontend_0 (ATerm t)
{
  ATerm l_4 (ATerm t)
  {
    t = term_p_21;
    t = get_config_0(t);
    return(t);
  }
  ATerm m_4 (ATerm t)
  {
    t = term_r_15;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(l_12)), term_u_19);
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
        ATerm q_21;
        q_21 = t;
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
        t = q_21;
        {
          ATerm r_21;
          r_21 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(b_13), not_null(e_13));
            t = WriteToBinaryFile_0(t);
          }
          t = r_21;
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
  ATerm s_21;
  s_21 = t;
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
  t = s_21;
  {
    t = _2(t, _id, h_65);
    {
      ATerm b_22;
      b_22 = t;
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
      t = b_22;
      {
        ATerm c_22;
        c_22 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_13), not_null(m_13));
          t = apply_to_file_1(t, g_65);
        }
        t = c_22;
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
        t = term_d_22;
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
        t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(not_null(u_13)), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_e_22, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(w_13)), (ATerm) ATempty))))));
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
  ATerm f_22 = t;
  int g_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_22;
      h_22 = t;
      {
        ATerm c_14 = NULL;
        t = term_i_22;
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
      t = h_22;
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
          t = term_q_15;
          return(t);
        }
        t = transform_file_2(t, x_4, y_4);
      }
      LocalPopChoice(g_22);
    }
  else
    {
      t = f_22;
      {
        ATerm a_5 (ATerm t)
        {
          t = term_q_15;
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
    ATerm j_22;
    j_22 = t;
    {
      t = term_s_22;
      t = get_config_0(t);
    }
    t = j_22;
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
        t = (ATerm) ATmakeAppl(sym__2, term_x_17, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(h_14)), not_null(g_14)), term_t_22));
        {
          t = printnl_0(t);
          {
            t = term_f_15;
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
ATerm call_noisy_0 (ATerm t)
{
  ATerm o_14 = NULL,p_14 = NULL,q_14 = NULL;
  o_14 = t;
  n_14 :
  if(match_cons(o_14, sym__2))
    {
      p_14 = ATgetArgument(o_14, 0);
      q_14 = ATgetArgument(o_14, 1);
      t = SSL_call_noisy(not_null(p_14), not_null(q_14));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm v_14 = NULL;
  v_14 = t;
  t = SSL_int_to_string(not_null(v_14));
  return(t);
}
ATerm pass_verbose_0 (ATerm t)
{
  ATerm a_15 = NULL;
  ATerm b_15 = NULL,d_15 = NULL;
  ATerm c_15 = NULL;
  t = term_h_15;
  {
    ATerm u_22 = t;
    int v_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(v_22);
      }
    else
      {
        t = u_22;
        t = term_w_22;
      }
    {
      c_15 = t;
      if(((b_15 != NULL) && (b_15 != c_15)))
        _fail(c_15);
      else
        b_15 = c_15;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(b_15), term_w_22);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          d_15 = t;
          if(((a_15 != NULL) && (a_15 != d_15)))
            _fail(d_15);
          else
            a_15 = d_15;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_15)), term_h_15);
  return(t);
}
ATerm parse_0 (ATerm t)
{
  ATerm t_15 = NULL,u_15 = NULL,v_15 = NULL;
  t_15 = t;
  s_15 :
  if(match_cons(t_15, sym__2))
    {
      u_15 = ATgetArgument(t_15, 0);
      v_15 = ATgetArgument(t_15, 1);
      {
        ATerm y_15 = NULL;
        ATerm a_16 = NULL;
        ATerm x_22 = t;
        int c_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_f_17;
            {
              t = get_config_0(t);
              t = basename_0(t);
            }
            LocalPopChoice(c_23);
          }
        else
          {
            t = x_22;
            t = not_null(u_15);
          }
        {
          y_15 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(y_15), term_p_15);
            {
              ATerm c_16 = NULL;
              t = conc_strings_0(t);
              {
                a_16 = t;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_15)), not_null(u_15));
                  {
                    ATerm e_16 = NULL,g_16 = NULL;
                    t = concat_strings_0(t);
                    {
                      c_16 = t;
                      {
                        ATerm d_23;
                        d_23 = t;
                        {
                          ATerm f_16 = NULL;
                          t = term_e_23;
                          {
                            t = get_config_0(t);
                            {
                              f_16 = t;
                              if(((e_16 != NULL) && (e_16 != f_16)))
                                _fail(f_16);
                              else
                                e_16 = f_16;
                            }
                          }
                        }
                        t = d_23;
                        {
                          ATerm h_16 = NULL,n_16 = NULL,p_16 = NULL,r_16 = NULL,t_16 = NULL;
                          ATerm g_23;
                          g_23 = t;
                          {
                            ATerm m_16 = NULL;
                            ATerm h_23 = t;
                            int i_23 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm i_16 = NULL;
                                ATerm j_16 = NULL;
                                t = term_f_17;
                                {
                                  t = get_config_0(t);
                                  {
                                    j_16 = t;
                                    if(((i_16 != NULL) && (i_16 != j_16)))
                                      _fail(j_16);
                                    else
                                      i_16 = j_16;
                                  }
                                }
                                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_16)), term_j_23);
                                LocalPopChoice(i_23);
                              }
                            else
                              {
                                t = h_23;
                                {
                                  ATerm k_16 = NULL;
                                  ATerm l_16 = NULL;
                                  t = term_o_21;
                                  {
                                    t = get_config_0(t);
                                    {
                                      l_16 = t;
                                      if(((k_16 != NULL) && (k_16 != l_16)))
                                        _fail(l_16);
                                      else
                                        k_16 = l_16;
                                    }
                                  }
                                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_16)), term_j_23);
                                }
                              }
                            {
                              m_16 = t;
                              if(((h_16 != NULL) && (h_16 != m_16)))
                                _fail(m_16);
                              else
                                h_16 = m_16;
                            }
                          }
                          t = g_23;
                          {
                            ATerm k_23;
                            k_23 = t;
                            {
                              ATerm o_16 = NULL;
                              t = pass_verbose_0(t);
                              {
                                o_16 = t;
                                if(((n_16 != NULL) && (n_16 != o_16)))
                                  _fail(o_16);
                                else
                                  n_16 = o_16;
                              }
                            }
                            t = k_23;
                            {
                              ATerm l_23;
                              l_23 = t;
                              {
                                ATerm q_16 = NULL;
                                t = term_m_23;
                                {
                                  ATerm r_23 = t;
                                  int s_23 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = get_config_0(t);
                                      LocalPopChoice(s_23);
                                    }
                                  else
                                    {
                                      t = r_23;
                                      t = term_f_15;
                                    }
                                  {
                                    t = int_to_string_0(t);
                                    {
                                      q_16 = t;
                                      if(((p_16 != NULL) && (p_16 != q_16)))
                                        _fail(q_16);
                                      else
                                        p_16 = q_16;
                                    }
                                  }
                                }
                              }
                              t = l_23;
                              {
                                ATerm s_16 = NULL;
                                t = term_t_23;
                                {
                                  t = get_config_0(t);
                                  {
                                    s_16 = t;
                                    if(((r_16 != NULL) && (r_16 != s_16)))
                                      _fail(s_16);
                                    else
                                      r_16 = s_16;
                                  }
                                }
                                {
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(a_16)), term_f_17), not_null(c_16)), term_o_21)), not_null(n_16)), not_null(r_16)), (ATerm) ATinsert(ATinsert(ATempty, not_null(p_16)), term_m_23)), not_null(h_16));
                                  {
                                    t = concat_0(t);
                                    {
                                      t_16 = t;
                                      if(((g_16 != NULL) && (g_16 != t_16)))
                                        _fail(t_16);
                                      else
                                        g_16 = t_16;
                                    }
                                  }
                                }
                              }
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(e_16), not_null(g_16));
                            {
                              t = call_noisy_0(t);
                              t = (ATerm) ATmakeAppl(sym__2, not_null(y_15), term_p_15);
                            }
                          }
                        }
                      }
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
      ATerm h_17 = NULL;
      ATerm i_17 = NULL;
      i_17 = t;
      if(((h_17 != NULL) && (h_17 != i_17)))
        _fail(i_17);
      else
        h_17 = i_17;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_17, (ATerm) ATinsert(CheckATermList(not_null(h_17)), term_u_23));
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
            ATerm z_23;
            z_23 = t;
            {
              ATerm m_17 = NULL,o_17 = NULL;
              ATerm a_24;
              a_24 = t;
              {
                ATerm n_17 = NULL;
                n_17 = t;
                if(((m_17 != NULL) && (m_17 != n_17)))
                  _fail(n_17);
                else
                  m_17 = n_17;
              }
              t = a_24;
              {
                ATerm p_17 = NULL;
                t = term_m_23;
                {
                  t = get_config_0(t);
                  {
                    p_17 = t;
                    if(((o_17 != NULL) && (o_17 != p_17)))
                      _fail(p_17);
                    else
                      o_17 = p_17;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(o_17), not_null(m_17));
                  t = remove_intermediates_0(t);
                }
              }
            }
            t = z_23;
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
  ATerm u_17 = NULL,v_17 = NULL,w_17 = NULL;
  u_17 = t;
  t_17 :
  if(match_cons(u_17, sym__2))
    {
      v_17 = ATgetArgument(u_17, 0);
      w_17 = ATgetArgument(u_17, 1);
      {
        ATerm b_24;
        b_24 = t;
        {
          ATerm c_24 = t;
          int d_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(v_17), not_null(w_17));
              LocalPopChoice(d_24);
            }
          else
            {
              t = c_24;
              t = SSL_gtr(not_null(v_17), not_null(w_17));
            }
        }
        t = b_24;
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
  ATerm c_18 = NULL;
  ATerm e_24 = t;
  int f_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_18 = NULL,e_18 = NULL,f_18 = NULL;
      d_18 = t;
      b_18 :
      if(match_cons(d_18, sym__2))
        {
          e_18 = ATgetArgument(d_18, 0);
          f_18 = ATgetArgument(d_18, 1);
          {
            if(((c_18 != NULL) && (c_18 != e_18)))
              _fail(e_18);
            else
              c_18 = e_18;
            if(((c_18 != NULL) && (c_18 != f_18)))
              _fail(f_18);
            else
              c_18 = f_18;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(f_24);
    }
  else
    {
      t = e_24;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm k_60 (ATerm))
{
  ATerm s_5 (ATerm t)
  {
    ATerm h_24;
    h_24 = t;
    {
      ATerm i_18 = NULL;
      ATerm j_18 = NULL;
      t = term_h_15;
      {
        t = get_config_0(t);
        {
          j_18 = t;
          if(((i_18 != NULL) && (i_18 != j_18)))
            _fail(j_18);
          else
            i_18 = j_18;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_18), term_w_22);
        t = geq_0(t);
      }
    }
    t = h_24;
    t = k_60(t);
    return(t);
  }
  t = try_1(t, s_5);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm m_18 = NULL;
  m_18 = t;
  t = SSL_TicksToSeconds(not_null(m_18));
  return(t);
}
ATerm self_children_sys_time_0 (ATerm t)
{
  ATerm r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL,v_18 = NULL;
  r_18 = t;
  q_18 :
  if(match_cons(r_18, sym__4))
    {
      s_18 = ATgetArgument(r_18, 0);
      t_18 = ATgetArgument(r_18, 1);
      u_18 = ATgetArgument(r_18, 2);
      v_18 = ATgetArgument(r_18, 3);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_18), not_null(v_18));
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
  ATerm d_19 = NULL,e_19 = NULL,f_19 = NULL;
  d_19 = t;
  c_19 :
  if(match_cons(d_19, sym__2))
    {
      e_19 = ATgetArgument(d_19, 0);
      f_19 = ATgetArgument(d_19, 1);
      {
        ATerm k_24 = t;
        int l_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(e_19), not_null(f_19));
            LocalPopChoice(l_24);
          }
        else
          {
            t = k_24;
            t = SSL_addr(not_null(e_19), not_null(f_19));
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
  ATerm l_19 = NULL,m_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL;
  l_19 = t;
  k_19 :
  if(match_cons(l_19, sym__4))
    {
      m_19 = ATgetArgument(l_19, 0);
      n_19 = ATgetArgument(l_19, 1);
      o_19 = ATgetArgument(l_19, 2);
      p_19 = ATgetArgument(l_19, 3);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_19), not_null(o_19));
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
  ATerm x_19 = NULL,y_19 = NULL,z_19 = NULL;
  x_19 = t;
  w_19 :
  if(match_cons(x_19, sym__2))
    {
      y_19 = ATgetArgument(x_19, 0);
      z_19 = ATgetArgument(x_19, 1);
      {
        ATerm m_24 = t;
        int p_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(y_19), not_null(z_19));
            LocalPopChoice(p_24);
          }
        else
          {
            t = m_24;
            t = SSL_subtr(not_null(y_19), not_null(z_19));
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
  ATerm m_20 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL,q_20 = NULL,r_20 = NULL,v_20 = NULL,h_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL;
  m_20 = t;
  i_20 :
  if(match_cons(m_20, sym__2))
    {
      n_20 = ATgetArgument(m_20, 0);
      v_20 = ATgetArgument(m_20, 1);
      j_20 :
      if(match_cons(n_20, sym__4))
        {
          o_20 = ATgetArgument(n_20, 0);
          p_20 = ATgetArgument(n_20, 1);
          q_20 = ATgetArgument(n_20, 2);
          r_20 = ATgetArgument(n_20, 3);
          k_20 :
          if(match_cons(v_20, sym__4))
            {
              h_21 = ATgetArgument(v_20, 0);
              i_21 = ATgetArgument(v_20, 1);
              j_21 = ATgetArgument(v_20, 2);
              k_21 = ATgetArgument(v_20, 3);
              {
                ATerm t_21 = NULL,v_21 = NULL,x_21 = NULL,z_21 = NULL;
                ATerm q_24;
                q_24 = t;
                {
                  ATerm u_21 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(o_20), not_null(h_21));
                  {
                    t = subt_0(t);
                    {
                      u_21 = t;
                      if(((t_21 != NULL) && (t_21 != u_21)))
                        _fail(u_21);
                      else
                        t_21 = u_21;
                    }
                  }
                }
                t = q_24;
                {
                  ATerm r_24;
                  r_24 = t;
                  {
                    ATerm w_21 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(p_20), not_null(i_21));
                    {
                      t = subt_0(t);
                      {
                        w_21 = t;
                        if(((v_21 != NULL) && (v_21 != w_21)))
                          _fail(w_21);
                        else
                          v_21 = w_21;
                      }
                    }
                  }
                  t = r_24;
                  {
                    ATerm s_24;
                    s_24 = t;
                    {
                      ATerm y_21 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(q_20), not_null(j_21));
                      {
                        t = subt_0(t);
                        {
                          y_21 = t;
                          if(((x_21 != NULL) && (x_21 != y_21)))
                            _fail(y_21);
                          else
                            x_21 = y_21;
                        }
                      }
                    }
                    t = s_24;
                    {
                      ATerm a_22 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(r_20), not_null(k_21));
                      {
                        t = subt_0(t);
                        {
                          a_22 = t;
                          if(((z_21 != NULL) && (z_21 != a_22)))
                            _fail(a_22);
                          else
                            z_21 = a_22;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym__4, not_null(t_21), not_null(v_21), not_null(x_21), not_null(z_21));
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
  ATerm k_22 = NULL;
  ATerm t_24;
  t_24 = t;
  {
    ATerm l_22 = NULL;
    t = times_0(t);
    {
      l_22 = t;
      if(((k_22 != NULL) && (k_22 != l_22)))
        _fail(l_22);
      else
        k_22 = l_22;
    }
  }
  t = t_24;
  {
    t = h_68(t);
    {
      ATerm u_24;
      u_24 = t;
      {
        ATerm m_22 = NULL,o_22 = NULL,q_22 = NULL;
        ATerm n_22 = NULL;
        t = times_0(t);
        {
          n_22 = t;
          if(((m_22 != NULL) && (m_22 != n_22)))
            _fail(n_22);
          else
            m_22 = n_22;
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_22), not_null(k_22));
          {
            t = diff_times_0(t);
            {
              ATerm v_24;
              v_24 = t;
              {
                ATerm p_22 = NULL;
                t = self_children_user_time_0(t);
                {
                  t = ticks_to_seconds_0(t);
                  {
                    p_22 = t;
                    if(((o_22 != NULL) && (o_22 != p_22)))
                      _fail(p_22);
                    else
                      o_22 = p_22;
                  }
                }
              }
              t = v_24;
              {
                ATerm r_22 = NULL;
                t = self_children_sys_time_0(t);
                {
                  t = ticks_to_seconds_0(t);
                  {
                    r_22 = t;
                    if(((q_22 != NULL) && (q_22 != r_22)))
                      _fail(r_22);
                    else
                      q_22 = r_22;
                  }
                }
                {
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(q_22)), term_x_24), not_null(o_22)), term_w_24);
                  t = g_68(t);
                }
              }
            }
          }
        }
      }
      t = u_24;
    }
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm l_68 (ATerm))
{
  ATerm c_25;
  c_25 = t;
  {
    ATerm y_22 = NULL,a_23 = NULL;
    ATerm d_25;
    d_25 = t;
    {
      ATerm z_22 = NULL;
      t = l_68(t);
      {
        z_22 = t;
        if(((y_22 != NULL) && (y_22 != z_22)))
          _fail(z_22);
        else
          y_22 = z_22;
      }
    }
    t = d_25;
    {
      ATerm b_23 = NULL;
      b_23 = t;
      if(((a_23 != NULL) && (a_23 != b_23)))
        _fail(b_23);
      else
        a_23 = b_23;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_23)), not_null(y_22)));
        t = printnl_0(t);
      }
    }
  }
  t = c_25;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm f_23 = NULL;
  f_23 = t;
  t = SSL_is_string(not_null(f_23));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm e_25 = t;
  int f_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(f_25);
    }
  else
    {
      t = e_25;
      {
        ATerm g_25 = t;
        int h_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_5 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, t_5);
            LocalPopChoice(h_25);
          }
        else
          {
            t = g_25;
            {
              ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL;
              o_23 = t;
              n_23 :
              if(match_cons(o_23, sym_Path_1))
                {
                  p_23 = ATgetArgument(o_23, 0);
                  t = not_null(p_23);
                }
              else
                {
                  if(match_cons(o_23, sym_Var_1))
                    {
                      p_23 = ATgetArgument(o_23, 0);
                      {
                        t = not_null(p_23);
                        {
                          ATerm i_25 = t;
                          int j_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(j_25);
                            }
                          else
                            {
                              t = i_25;
                              {
                                ATerm u_5 (ATerm t)
                                {
                                  t = term_k_25;
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
                      if(match_cons(o_23, sym_Prefix_2))
                        {
                          p_23 = ATgetArgument(o_23, 0);
                          q_23 = ATgetArgument(o_23, 1);
                          {
                            ATerm v_23 = NULL,x_23 = NULL;
                            ATerm n_25;
                            n_25 = t;
                            {
                              ATerm w_23 = NULL;
                              t = not_null(p_23);
                              {
                                t = eval_config_0(t);
                                {
                                  w_23 = t;
                                  if(((v_23 != NULL) && (v_23 != w_23)))
                                    _fail(w_23);
                                  else
                                    v_23 = w_23;
                                }
                              }
                            }
                            t = n_25;
                            {
                              ATerm y_23 = NULL;
                              t = not_null(q_23);
                              {
                                t = eval_config_0(t);
                                {
                                  y_23 = t;
                                  if(((x_23 != NULL) && (x_23 != y_23)))
                                    _fail(y_23);
                                  else
                                    x_23 = y_23;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(v_23), not_null(x_23));
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
  ATerm g_24 = NULL;
  g_24 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_o_25, not_null(g_24));
    {
      t = table_get_0(t);
      {
        ATerm v_5 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm t_25;
            t_25 = t;
            {
              ATerm i_24 = NULL;
              ATerm j_24 = NULL;
              j_24 = t;
              if(((i_24 != NULL) && (i_24 != j_24)))
                _fail(j_24);
              else
                i_24 = j_24;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_o_25, not_null(g_24), not_null(i_24));
                t = table_put_0(t);
              }
            }
            t = t_25;
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
  ATerm u_25;
  u_25 = t;
  {
    ATerm n_24 = NULL;
    ATerm o_24 = NULL;
    o_24 = t;
    if(((n_24 != NULL) && (n_24 != o_24)))
      _fail(o_24);
    else
      n_24 = o_24;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_17, not_null(n_24));
      t = printnl_0(t);
    }
  }
  t = u_25;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm v_25;
  v_25 = t;
  {
    t = error_0(t);
    {
      t = term_w_22;
      t = exit_0(t);
    }
  }
  t = v_25;
  return(t);
}
ATerm basename_1 (ATerm t, ATerm u_69 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm w_5 (ATerm t)
    {
      ATerm w_25 = t;
      int y_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Cons_2(t, _id, w_5);
          LocalPopChoice(y_25);
        }
      else
        {
          t = w_25;
          {
            ATerm z_25 = t;
            int a_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_6 (ATerm t)
                {
                  ATerm a_25 = NULL;
                  a_25 = t;
                  y_24 :
                  if(!(match_int(a_25, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = Cons_2(t, c_6, _id);
                LocalPopChoice(a_26);
              }
            else
              {
                t = z_25;
                {
                  ATerm h_6 (ATerm t)
                  {
                    ATerm b_25 = NULL;
                    b_25 = t;
                    z_24 :
                    if(!(match_int(b_25, 46)))
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
  ATerm b_26;
  b_26 = t;
  {
    ATerm l_25 = NULL;
    ATerm m_25 = NULL;
    t = term_c_26;
    {
      t = get_config_0(t);
      {
        m_25 = t;
        if(((l_25 != NULL) && (l_25 != m_25)))
          _fail(m_25);
        else
          l_25 = m_25;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_17, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_26), not_null(l_25)), term_d_26));
      t = printnl_0(t);
    }
  }
  t = b_26;
  return(t);
}
ATerm try_1 (ATerm t, ATerm j_86 (ATerm))
{
  ATerm m_26 = t;
  int n_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_86(t);
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
ATerm call_0 (ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL;
  q_25 = t;
  p_25 :
  if(match_cons(q_25, sym__2))
    {
      r_25 = ATgetArgument(q_25, 0);
      s_25 = ATgetArgument(q_25, 1);
      t = SSL_call(not_null(r_25), not_null(s_25));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm x_25 = NULL;
  x_25 = t;
  t = SSL_string_to_int(not_null(x_25));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL;
  g_26 = t;
  e_26 :
  if(match_string(g_26, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(g_26) == AT_LIST) && ((ATermList) g_26 != ATempty)))
        {
          h_26 = ATgetFirst((ATermList) g_26);
          i_26 = (ATerm) ATgetNext((ATermList) g_26);
          f_26 :
          if(((ATgetType(i_26) == AT_LIST) && ((ATermList) i_26 != ATempty)))
            {
              j_26 = ATgetFirst((ATermList) i_26);
              k_26 = (ATerm) ATgetNext((ATermList) i_26);
              {
                ATerm o_26 = NULL;
                ATerm q_26;
                q_26 = t;
                {
                  t = not_null(h_26);
                  t = l_0(t);
                }
                t = q_26;
                {
                  ATerm p_26 = NULL;
                  t = not_null(j_26);
                  {
                    t = m_0(t);
                    {
                      p_26 = t;
                      if(((o_26 != NULL) && (o_26 != p_26)))
                        _fail(p_26);
                      else
                        o_26 = p_26;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(k_26)), not_null(o_26));
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
  ATerm e_27 = NULL,k_27 = NULL,l_27 = NULL;
  e_27 = t;
  d_27 :
  if(match_cons(e_27, sym__2))
    {
      k_27 = ATgetArgument(e_27, 0);
      l_27 = ATgetArgument(e_27, 1);
      {
        ATerm o_27 = NULL;
        ATerm p_27 = NULL,z_27 = NULL;
        ATerm y_27 = NULL;
        t = not_null(k_27);
        {
          ATerm r_26 = t;
          int s_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(s_26);
            }
          else
            {
              t = r_26;
              t = (ATerm) ATempty;
            }
          {
            y_27 = t;
            if(((p_27 != NULL) && (p_27 != y_27)))
              _fail(y_27);
            else
              p_27 = y_27;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_27), not_null(p_27));
          {
            t = conc_0(t);
            {
              z_27 = t;
              if(((o_27 != NULL) && (o_27 != z_27)))
                _fail(z_27);
              else
                o_27 = z_27;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_o_25, not_null(k_27), not_null(o_27));
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
  ATerm f_28 = NULL,i_28 = NULL;
  ATerm t_26;
  t_26 = t;
  {
    ATerm j_28 = NULL,k_28 = NULL,l_28 = NULL;
    j_28 = t;
    e_28 :
    if(match_cons(j_28, sym__2))
      {
        k_28 = ATgetArgument(j_28, 0);
        l_28 = ATgetArgument(j_28, 1);
        {
          if(((f_28 != NULL) && (f_28 != k_28)))
            _fail(k_28);
          else
            f_28 = k_28;
          {
            if(((i_28 != NULL) && (i_28 != l_28)))
              _fail(l_28);
            else
              i_28 = l_28;
            t = SSL_table_remove(not_null(f_28), not_null(i_28));
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = t_26;
  return(t);
}
ATerm toggle_config_0 (ATerm t)
{
  ATerm p_28 = NULL,q_28 = NULL,r_28 = NULL;
  p_28 = t;
  o_28 :
  if(match_cons(p_28, sym__2))
    {
      q_28 = ATgetArgument(p_28, 0);
      r_28 = ATgetArgument(p_28, 1);
      {
        ATerm u_26 = t;
        int v_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = not_null(q_28);
            {
              t = get_config_0(t);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_o_25, not_null(q_28));
                t = table_remove_0(t);
              }
            }
            LocalPopChoice(v_26);
          }
        else
          {
            t = u_26;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(q_28), not_null(r_28));
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
  ATerm z_28 = NULL,j_29 = NULL,k_29 = NULL;
  z_28 = t;
  y_28 :
  if(match_cons(z_28, sym__2))
    {
      j_29 = ATgetArgument(z_28, 0);
      k_29 = ATgetArgument(z_28, 1);
      {
        ATerm n_29 = NULL;
        ATerm o_29 = NULL,q_29 = NULL;
        ATerm p_29 = NULL;
        t = not_null(j_29);
        {
          ATerm w_26 = t;
          int x_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(x_26);
            }
          else
            {
              t = w_26;
              t = (ATerm) ATempty;
            }
          {
            p_29 = t;
            if(((o_29 != NULL) && (o_29 != p_29)))
              _fail(p_29);
            else
              o_29 = p_29;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_29), not_null(k_29));
          {
            t = conc_0(t);
            {
              q_29 = t;
              if(((n_29 != NULL) && (n_29 != q_29)))
                _fail(q_29);
              else
                n_29 = q_29;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_o_25, not_null(j_29), not_null(n_29));
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
  ATerm y_26 = t;
  int z_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_6 (ATerm t)
      {
        ATerm s_31 = NULL;
        s_31 = t;
        u_29 :
        if(!(match_string(s_31, "-i")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm q_6 (ATerm t)
      {
        ATerm v_31 = NULL;
        ATerm a_27;
        a_27 = t;
        {
          ATerm t_31 = NULL;
          ATerm u_31 = NULL;
          u_31 = t;
          if(((t_31 != NULL) && (t_31 != u_31)))
            _fail(u_31);
          else
            t_31 = u_31;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_o_21, not_null(t_31));
            t = set_config_0(t);
          }
        }
        t = a_27;
        {
          ATerm w_31 = NULL;
          t = basename_0(t);
          {
            w_31 = t;
            if(((v_31 != NULL) && (v_31 != w_31)))
              _fail(w_31);
            else
              v_31 = w_31;
          }
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(v_31));
        }
        return(t);
      }
      ATerm r_6 (ATerm t)
      {
        t = term_b_27;
        return(t);
      }
      t = ArgOption_3(t, p_6, q_6, r_6);
      LocalPopChoice(z_26);
    }
  else
    {
      t = y_26;
      {
        ATerm c_27 = t;
        int f_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_6 (ATerm t)
            {
              ATerm x_31 = NULL;
              x_31 = t;
              x_29 :
              if(!(match_string(x_31, "-o")))
                {
                  if(!(match_string(x_31, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm t_6 (ATerm t)
            {
              ATerm c_32 = NULL;
              ATerm g_27;
              g_27 = t;
              {
                ATerm a_32 = NULL;
                ATerm b_32 = NULL;
                b_32 = t;
                if(((a_32 != NULL) && (a_32 != b_32)))
                  _fail(b_32);
                else
                  a_32 = b_32;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_f_17, not_null(a_32));
                  t = set_config_0(t);
                }
              }
              t = g_27;
              {
                ATerm d_32 = NULL;
                d_32 = t;
                if(((c_32 != NULL) && (c_32 != d_32)))
                  _fail(d_32);
                else
                  c_32 = d_32;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(c_32));
              }
              return(t);
            }
            ATerm u_6 (ATerm t)
            {
              t = term_h_27;
              return(t);
            }
            t = ArgOption_3(t, s_6, t_6, u_6);
            LocalPopChoice(f_27);
          }
        else
          {
            t = c_27;
            {
              ATerm i_27 = t;
              int j_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_6 (ATerm t)
                  {
                    ATerm g_32 = NULL;
                    g_32 = t;
                    a_30 :
                    if(!(match_string(g_32, "-I")))
                      {
                        if(!(match_string(g_32, "--Include")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm d_7 (ATerm t)
                  {
                    ATerm h_32 = NULL;
                    ATerm i_32 = NULL;
                    i_32 = t;
                    if(((h_32 != NULL) && (h_32 != i_32)))
                      _fail(i_32);
                    else
                      h_32 = i_32;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_t_23, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_32)), term_t_23));
                      t = extend_config_0(t);
                    }
                    t = term_m_27;
                    return(t);
                  }
                  ATerm j_7 (ATerm t)
                  {
                    t = term_n_27;
                    return(t);
                  }
                  t = ArgOption_3(t, z_6, d_7, j_7);
                  LocalPopChoice(j_27);
                }
              else
                {
                  t = i_27;
                  {
                    ATerm q_27 = t;
                    int r_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm k_7 (ATerm t)
                        {
                          ATerm j_32 = NULL;
                          j_32 = t;
                          c_30 :
                          if(!(match_string(j_32, "--main")))
                            {
                              if(!(match_string(j_32, "-m")))
                                {
                                  _fail(t);
                                }
                            }
                          return(t);
                        }
                        ATerm l_7 (ATerm t)
                        {
                          ATerm m_32 = NULL;
                          ATerm s_27;
                          s_27 = t;
                          {
                            ATerm k_32 = NULL;
                            ATerm l_32 = NULL;
                            l_32 = t;
                            if(((k_32 != NULL) && (k_32 != l_32)))
                              _fail(l_32);
                            else
                              k_32 = l_32;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_i_22, not_null(k_32));
                              t = set_config_0(t);
                            }
                          }
                          t = s_27;
                          {
                            ATerm n_32 = NULL;
                            n_32 = t;
                            if(((m_32 != NULL) && (m_32 != n_32)))
                              _fail(n_32);
                            else
                              m_32 = n_32;
                            t = (ATerm) ATmakeAppl(sym_Main_1, not_null(m_32));
                          }
                          return(t);
                        }
                        ATerm m_7 (ATerm t)
                        {
                          t = term_t_27;
                          return(t);
                        }
                        t = ArgOption_3(t, k_7, l_7, m_7);
                        LocalPopChoice(r_27);
                      }
                    else
                      {
                        t = q_27;
                        {
                          ATerm u_27 = t;
                          int v_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm p_7 (ATerm t)
                              {
                                ATerm o_32 = NULL;
                                o_32 = t;
                                f_30 :
                                if(!(match_string(o_32, "--C-include")))
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              ATerm q_7 (ATerm t)
                              {
                                ATerm p_32 = NULL;
                                ATerm q_32 = NULL;
                                q_32 = t;
                                if(((p_32 != NULL) && (p_32 != q_32)))
                                  _fail(q_32);
                                else
                                  p_32 = q_32;
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, term_t_19, (ATerm) ATinsert(ATempty, not_null(p_32)));
                                  t = post_extend_config_0(t);
                                }
                                t = term_m_27;
                                return(t);
                              }
                              ATerm t_7 (ATerm t)
                              {
                                t = term_w_27;
                                return(t);
                              }
                              t = ArgOption_3(t, p_7, q_7, t_7);
                              LocalPopChoice(v_27);
                            }
                          else
                            {
                              t = u_27;
                              {
                                ATerm x_27 = t;
                                int a_28 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm u_7 (ATerm t)
                                    {
                                      ATerm r_32 = NULL;
                                      r_32 = t;
                                      h_30 :
                                      if(!(match_string(r_32, "-CI")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm v_7 (ATerm t)
                                    {
                                      ATerm s_32 = NULL;
                                      ATerm t_32 = NULL;
                                      t_32 = t;
                                      if(((s_32 != NULL) && (s_32 != t_32)))
                                        _fail(t_32);
                                      else
                                        s_32 = t_32;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, term_o_18, (ATerm) ATinsert(ATempty, not_null(s_32)));
                                        t = extend_config_0(t);
                                      }
                                      t = term_m_27;
                                      return(t);
                                    }
                                    ATerm w_7 (ATerm t)
                                    {
                                      t = term_b_28;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, u_7, v_7, w_7);
                                    LocalPopChoice(a_28);
                                  }
                                else
                                  {
                                    t = x_27;
                                    {
                                      ATerm c_28 = t;
                                      int d_28 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm x_7 (ATerm t)
                                          {
                                            ATerm u_32 = NULL;
                                            u_32 = t;
                                            j_30 :
                                            if(!(match_string(u_32, "-CL")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm y_7 (ATerm t)
                                          {
                                            ATerm v_32 = NULL;
                                            ATerm w_32 = NULL;
                                            w_32 = t;
                                            if(((v_32 != NULL) && (v_32 != w_32)))
                                              _fail(w_32);
                                            else
                                              v_32 = w_32;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, term_l_17, (ATerm) ATinsert(ATempty, not_null(v_32)));
                                              t = extend_config_0(t);
                                            }
                                            t = term_m_27;
                                            return(t);
                                          }
                                          ATerm z_7 (ATerm t)
                                          {
                                            t = term_g_28;
                                            return(t);
                                          }
                                          t = ArgOption_3(t, x_7, y_7, z_7);
                                          LocalPopChoice(d_28);
                                        }
                                      else
                                        {
                                          t = c_28;
                                          {
                                            ATerm h_28 = t;
                                            int m_28 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm m_8 (ATerm t)
                                                {
                                                  ATerm x_32 = NULL;
                                                  x_32 = t;
                                                  t_30 :
                                                  if(!(match_string(x_32, "-c")))
                                                    {
                                                      _fail(t);
                                                    }
                                                  return(t);
                                                }
                                                ATerm n_8 (ATerm t)
                                                {
                                                  t = term_n_28;
                                                  t = set_config_0(t);
                                                  t = term_s_28;
                                                  return(t);
                                                }
                                                ATerm o_8 (ATerm t)
                                                {
                                                  t = term_t_28;
                                                  return(t);
                                                }
                                                t = Option_3(t, m_8, n_8, o_8);
                                                LocalPopChoice(m_28);
                                              }
                                            else
                                              {
                                                t = h_28;
                                                {
                                                  ATerm u_28 = t;
                                                  int v_28 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm p_8 (ATerm t)
                                                      {
                                                        ATerm a_33 = NULL;
                                                        a_33 = t;
                                                        w_30 :
                                                        if(!(match_string(a_33, "--ast")))
                                                          {
                                                            _fail(t);
                                                          }
                                                        return(t);
                                                      }
                                                      ATerm q_8 (ATerm t)
                                                      {
                                                        t = term_w_28;
                                                        t = set_config_0(t);
                                                        t = term_x_28;
                                                        return(t);
                                                      }
                                                      ATerm r_8 (ATerm t)
                                                      {
                                                        t = term_a_29;
                                                        return(t);
                                                      }
                                                      t = Option_3(t, p_8, q_8, r_8);
                                                      LocalPopChoice(v_28);
                                                    }
                                                  else
                                                    {
                                                      t = u_28;
                                                      {
                                                        ATerm b_29 = t;
                                                        int c_29 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm s_8 (ATerm t)
                                                            {
                                                              ATerm b_33 = NULL;
                                                              b_33 = t;
                                                              x_30 :
                                                              if(!(match_string(b_33, "-F")))
                                                                {
                                                                  _fail(t);
                                                                }
                                                              return(t);
                                                            }
                                                            ATerm v_8 (ATerm t)
                                                            {
                                                              t = term_d_29;
                                                              t = set_config_0(t);
                                                              t = term_e_29;
                                                              return(t);
                                                            }
                                                            ATerm w_8 (ATerm t)
                                                            {
                                                              t = term_f_29;
                                                              return(t);
                                                            }
                                                            t = Option_3(t, s_8, v_8, w_8);
                                                            LocalPopChoice(c_29);
                                                          }
                                                        else
                                                          {
                                                            t = b_29;
                                                            {
                                                              ATerm g_29 = t;
                                                              int h_29 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm z_8 (ATerm t)
                                                                  {
                                                                    ATerm c_33 = NULL;
                                                                    c_33 = t;
                                                                    y_30 :
                                                                    if(!(match_string(c_33, "--norm")))
                                                                      {
                                                                        _fail(t);
                                                                      }
                                                                    return(t);
                                                                  }
                                                                  ATerm a_9 (ATerm t)
                                                                  {
                                                                    t = term_l_29;
                                                                    t = set_config_0(t);
                                                                    t = term_m_29;
                                                                    return(t);
                                                                  }
                                                                  ATerm b_9 (ATerm t)
                                                                  {
                                                                    t = term_r_29;
                                                                    return(t);
                                                                  }
                                                                  t = Option_3(t, z_8, a_9, b_9);
                                                                  LocalPopChoice(h_29);
                                                                }
                                                              else
                                                                {
                                                                  t = g_29;
                                                                  {
                                                                    ATerm s_29 = t;
                                                                    int t_29 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm c_9 (ATerm t)
                                                                        {
                                                                          ATerm d_33 = NULL;
                                                                          d_33 = t;
                                                                          z_30 :
                                                                          if(!(match_string(d_33, "--keep")))
                                                                            {
                                                                              _fail(t);
                                                                            }
                                                                          return(t);
                                                                        }
                                                                        ATerm j_9 (ATerm t)
                                                                        {
                                                                          ATerm v_29;
                                                                          v_29 = t;
                                                                          {
                                                                            ATerm f_33 = NULL;
                                                                            ATerm i_33 = NULL;
                                                                            t = string_to_int_0(t);
                                                                            {
                                                                              i_33 = t;
                                                                              if(((f_33 != NULL) && (f_33 != i_33)))
                                                                                _fail(i_33);
                                                                              else
                                                                                f_33 = i_33;
                                                                            }
                                                                            {
                                                                              t = (ATerm) ATmakeAppl(sym__2, term_m_23, not_null(f_33));
                                                                              t = set_config_0(t);
                                                                            }
                                                                          }
                                                                          t = v_29;
                                                                          return(t);
                                                                        }
                                                                        ATerm k_9 (ATerm t)
                                                                        {
                                                                          t = term_w_29;
                                                                          return(t);
                                                                        }
                                                                        t = ArgOption_3(t, c_9, j_9, k_9);
                                                                        LocalPopChoice(t_29);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = s_29;
                                                                        {
                                                                          ATerm y_29 = t;
                                                                          int z_29 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              ATerm l_9 (ATerm t)
                                                                              {
                                                                                ATerm j_33 = NULL;
                                                                                j_33 = t;
                                                                                b_31 :
                                                                                if(!(match_string(j_33, "--fusion")))
                                                                                  {
                                                                                    _fail(t);
                                                                                  }
                                                                                return(t);
                                                                              }
                                                                              ATerm m_9 (ATerm t)
                                                                              {
                                                                                t = term_b_30;
                                                                                t = toggle_config_0(t);
                                                                                t = term_d_30;
                                                                                return(t);
                                                                              }
                                                                              ATerm p_9 (ATerm t)
                                                                              {
                                                                                t = term_e_30;
                                                                                return(t);
                                                                              }
                                                                              t = Option_3(t, l_9, m_9, p_9);
                                                                              LocalPopChoice(z_29);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = y_29;
                                                                              {
                                                                                ATerm g_30 = t;
                                                                                int i_30 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm q_9 (ATerm t)
                                                                                    {
                                                                                      ATerm k_33 = NULL;
                                                                                      k_33 = t;
                                                                                      e_31 :
                                                                                      if(!(match_string(k_33, "--trace-all")))
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
                                                                                    LocalPopChoice(i_30);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = g_30;
                                                                                    {
                                                                                      ATerm o_30 = t;
                                                                                      int p_30 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm x_9 (ATerm t)
                                                                                          {
                                                                                            ATerm l_33 = NULL;
                                                                                            l_33 = t;
                                                                                            f_31 :
                                                                                            if(!(match_string(l_33, "-t")))
                                                                                              {
                                                                                                _fail(t);
                                                                                              }
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm y_9 (ATerm t)
                                                                                          {
                                                                                            ATerm o_33 = NULL;
                                                                                            ATerm q_30;
                                                                                            q_30 = t;
                                                                                            {
                                                                                              ATerm m_33 = NULL;
                                                                                              ATerm n_33 = NULL;
                                                                                              n_33 = t;
                                                                                              if(((m_33 != NULL) && (m_33 != n_33)))
                                                                                                _fail(n_33);
                                                                                              else
                                                                                                m_33 = n_33;
                                                                                              {
                                                                                                t = (ATerm) ATmakeAppl(sym__2, term_r_30, (ATerm) ATinsert(ATempty, not_null(m_33)));
                                                                                                t = extend_config_0(t);
                                                                                              }
                                                                                            }
                                                                                            t = q_30;
                                                                                            {
                                                                                              o_33 = t;
                                                                                              t = (ATerm) ATmakeAppl(sym_Trace_1, not_null(o_33));
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
                                                                                                  ATerm q_33 = NULL;
                                                                                                  q_33 = t;
                                                                                                  l_31 :
                                                                                                  if(!(match_string(q_33, "--verbose")))
                                                                                                    {
                                                                                                      _fail(t);
                                                                                                    }
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm f_10 (ATerm t)
                                                                                                {
                                                                                                  ATerm t_33 = NULL;
                                                                                                  ATerm a_31;
                                                                                                  a_31 = t;
                                                                                                  {
                                                                                                    ATerm r_33 = NULL;
                                                                                                    ATerm s_33 = NULL;
                                                                                                    t = string_to_int_0(t);
                                                                                                    {
                                                                                                      s_33 = t;
                                                                                                      if(((r_33 != NULL) && (r_33 != s_33)))
                                                                                                        _fail(s_33);
                                                                                                      else
                                                                                                        r_33 = s_33;
                                                                                                    }
                                                                                                    {
                                                                                                      t = (ATerm) ATmakeAppl(sym__2, term_h_15, not_null(r_33));
                                                                                                      t = set_config_0(t);
                                                                                                    }
                                                                                                  }
                                                                                                  t = a_31;
                                                                                                  {
                                                                                                    ATerm u_33 = NULL;
                                                                                                    u_33 = t;
                                                                                                    if(((t_33 != NULL) && (t_33 != u_33)))
                                                                                                      _fail(u_33);
                                                                                                    else
                                                                                                      t_33 = u_33;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(t_33));
                                                                                                  }
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm g_10 (ATerm t)
                                                                                                {
                                                                                                  t = term_c_31;
                                                                                                  return(t);
                                                                                                }
                                                                                                t = ArgOption_3(t, c_10, f_10, g_10);
                                                                                                LocalPopChoice(v_30);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = u_30;
                                                                                                {
                                                                                                  ATerm d_31 = t;
                                                                                                  int g_31 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      ATerm j_10 (ATerm t)
                                                                                                      {
                                                                                                        ATerm v_33 = NULL;
                                                                                                        v_33 = t;
                                                                                                        o_31 :
                                                                                                        if(!(match_string(v_33, "-S")))
                                                                                                          {
                                                                                                            if(!(match_string(v_33, "--silent")))
                                                                                                              {
                                                                                                                _fail(t);
                                                                                                              }
                                                                                                          }
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm k_10 (ATerm t)
                                                                                                      {
                                                                                                        t = term_h_31;
                                                                                                        t = set_config_0(t);
                                                                                                        t = term_i_31;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm n_10 (ATerm t)
                                                                                                      {
                                                                                                        t = term_j_31;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      t = Option_3(t, j_10, k_10, n_10);
                                                                                                      LocalPopChoice(g_31);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = d_31;
                                                                                                      {
                                                                                                        ATerm k_31 = t;
                                                                                                        int m_31 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm o_10 (ATerm t)
                                                                                                            {
                                                                                                              ATerm w_33 = NULL;
                                                                                                              w_33 = t;
                                                                                                              p_31 :
                                                                                                              if(!(match_string(w_33, "-h")))
                                                                                                                {
                                                                                                                  if(!(match_string(w_33, "--help")))
                                                                                                                    {
                                                                                                                      _fail(t);
                                                                                                                    }
                                                                                                                }
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm r_10 (ATerm t)
                                                                                                            {
                                                                                                              t = term_y_31;
                                                                                                              t = set_config_0(t);
                                                                                                              t = term_z_31;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm s_10 (ATerm t)
                                                                                                            {
                                                                                                              t = term_e_32;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            t = Option_3(t, o_10, r_10, s_10);
                                                                                                            LocalPopChoice(m_31);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = k_31;
                                                                                                            {
                                                                                                              ATerm f_32 = t;
                                                                                                              int y_32 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  ATerm v_10 (ATerm t)
                                                                                                                  {
                                                                                                                    ATerm x_33 = NULL;
                                                                                                                    x_33 = t;
                                                                                                                    q_31 :
                                                                                                                    if(!(match_string(x_33, "--man")))
                                                                                                                      {
                                                                                                                        _fail(t);
                                                                                                                      }
                                                                                                                    return(t);
                                                                                                                  }
                                                                                                                  ATerm w_10 (ATerm t)
                                                                                                                  {
                                                                                                                    t = term_e_33;
                                                                                                                    t = set_config_0(t);
                                                                                                                    t = term_g_33;
                                                                                                                    return(t);
                                                                                                                  }
                                                                                                                  ATerm z_10 (ATerm t)
                                                                                                                  {
                                                                                                                    t = term_h_33;
                                                                                                                    return(t);
                                                                                                                  }
                                                                                                                  t = Option_3(t, v_10, w_10, z_10);
                                                                                                                  LocalPopChoice(y_32);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = f_32;
                                                                                                                  {
                                                                                                                    ATerm a_11 (ATerm t)
                                                                                                                    {
                                                                                                                      ATerm y_33 = NULL;
                                                                                                                      y_33 = t;
                                                                                                                      r_31 :
                                                                                                                      if(!(match_string(y_33, "-v")))
                                                                                                                        {
                                                                                                                          if(!(match_string(y_33, "--version")))
                                                                                                                            {
                                                                                                                              _fail(t);
                                                                                                                            }
                                                                                                                        }
                                                                                                                      return(t);
                                                                                                                    }
                                                                                                                    ATerm d_11 (ATerm t)
                                                                                                                    {
                                                                                                                      t = term_z_33;
                                                                                                                      t = set_config_0(t);
                                                                                                                      t = term_a_34;
                                                                                                                      return(t);
                                                                                                                    }
                                                                                                                    ATerm e_11 (ATerm t)
                                                                                                                    {
                                                                                                                      t = term_b_34;
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
  ATerm p_34 = NULL;
  p_34 = t;
  t = SSL_table_destroy(not_null(p_34));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_0 (ATerm))
{
  ATerm w_34 = NULL;
  ATerm x_34 = NULL;
  t = k_0(t);
  {
    x_34 = t;
    if(((w_34 != NULL) && (w_34 != x_34)))
      _fail(x_34);
    else
      w_34 = x_34;
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_34), term_o_34), term_n_34), term_m_34), term_c_34), term_l_34), term_c_34), term_c_34), term_k_34), term_c_34), term_j_34), term_i_34), term_c_34), term_h_34), term_g_34), not_null(w_34)), term_f_34), term_e_34), term_c_34), term_d_34), term_c_34);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm f_35 = NULL,g_35 = NULL,h_35 = NULL;
  h_35 = t;
  e_35 :
  if(((ATgetType(h_35) == AT_LIST) && ((ATermList) h_35 != ATempty)))
    {
      f_35 = ATgetFirst((ATermList) h_35);
      g_35 = (ATerm) ATgetNext((ATermList) h_35);
      {
        ATerm k_35 = NULL;
        t = not_null(g_35);
        {
          ATerm r_34;
          r_34 = t;
          {
            ATerm l_35 = NULL,n_35 = NULL,p_35 = NULL;
            ATerm s_34;
            s_34 = t;
            {
              ATerm m_35 = NULL;
              t = j_0(t);
              {
                m_35 = t;
                if(((l_35 != NULL) && (l_35 != m_35)))
                  _fail(m_35);
                else
                  l_35 = m_35;
              }
            }
            t = s_34;
            {
              ATerm o_35 = NULL;
              t = not_null(f_35);
              {
                t = i_0(t);
                {
                  o_35 = t;
                  if(((n_35 != NULL) && (n_35 != o_35)))
                    _fail(o_35);
                  else
                    n_35 = o_35;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(l_35)), not_null(n_35));
                {
                  p_35 = t;
                  if(((k_35 != NULL) && (k_35 != p_35)))
                    _fail(p_35);
                  else
                    k_35 = p_35;
                }
              }
            }
          }
          t = r_34;
          {
            ATerm h_11 (ATerm t)
            {
              t = not_null(k_35);
              return(t);
            }
            t = reverse_acc_2(t, i_0, h_11);
          }
        }
      }
    }
  else
    {
      if(((ATermList) h_35 == ATempty))
        {
          {
            t = term_d_22;
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
ATerm short_description_1 (ATerm t, ATerm h_0 (ATerm))
{
  ATerm w_35 = NULL;
  ATerm x_35 = NULL;
  t = term_d_22;
  {
    t = h_0(t);
    {
      x_35 = t;
      if(((w_35 != NULL) && (w_35 != x_35)))
        _fail(x_35);
      else
        w_35 = x_35;
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_34), not_null(w_35)), term_t_34);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm m_59 (ATerm))
{
  ATerm f_36 = NULL,g_36 = NULL;
  f_36 = t;
  e_36 :
  if(match_cons(f_36, sym_Program_1))
    {
      g_36 = ATgetArgument(f_36, 0);
      {
        ATerm j_36 = NULL,l_36 = NULL;
        ATerm k_36 = NULL;
        t = SSLgetAnnotations(not_null(f_36));
        {
          k_36 = t;
          if(((j_36 != NULL) && (j_36 != k_36)))
            _fail(k_36);
          else
            j_36 = k_36;
        }
        {
          t = not_null(g_36);
          {
            ATerm n_36 = NULL;
            t = m_59(t);
            {
              l_36 = t;
              {
                ATerm o_36 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(l_36)), not_null(j_36));
                {
                  o_36 = t;
                  if(((n_36 != NULL) && (n_36 != o_36)))
                    _fail(o_36);
                  else
                    n_36 = o_36;
                }
                t = not_null(n_36);
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
  ATerm x_36 = NULL;
  ATerm l_11 (ATerm t)
  {
    ATerm m_11 (ATerm t)
    {
      ATerm y_36 = NULL;
      y_36 = t;
      if(((x_36 != NULL) && (x_36 != y_36)))
        _fail(y_36);
      else
        x_36 = y_36;
      return(t);
    }
    t = Program_1(t, m_11);
    return(t);
  }
  t = option_defined_1(t, l_11);
  {
    ATerm n_11 (ATerm t)
    {
      ATerm z_36 = NULL;
      ATerm a_37 = NULL;
      t = term_d_22;
      {
        ATerm s_11 (ATerm t)
        {
          t = not_null(x_36);
          return(t);
        }
        t = short_description_1(t, s_11);
        {
          t = concat_strings_0(t);
          {
            a_37 = t;
            if(((z_36 != NULL) && (z_36 != a_37)))
              _fail(a_37);
            else
              z_36 = a_37;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_17, (ATerm) ATinsert(ATempty, not_null(z_36)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, n_11);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_17, (ATerm) ATinsert(ATempty, term_v_34));
      {
        t = printnl_0(t);
        {
          t = term_a_35;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm t_11 (ATerm t)
                {
                  ATerm b_37 = NULL;
                  b_37 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_x_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_37)), term_b_35));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, t_11);
                {
                  ATerm u_11 (ATerm t)
                  {
                    ATerm d_37 = NULL;
                    ATerm e_37 = NULL;
                    t = term_d_22;
                    {
                      ATerm v_11 (ATerm t)
                      {
                        t = not_null(x_36);
                        return(t);
                      }
                      t = long_description_1(t, v_11);
                      {
                        t = concat_strings_0(t);
                        {
                          e_37 = t;
                          if(((d_37 != NULL) && (d_37 != e_37)))
                            _fail(e_37);
                          else
                            d_37 = e_37;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_x_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_37)), term_c_35));
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
  ATerm o_37 = NULL,p_37 = NULL;
  o_37 = t;
  n_37 :
  if(match_cons(o_37, sym_Undefined_1))
    {
      p_37 = ATgetArgument(o_37, 0);
      {
        ATerm s_37 = NULL,u_37 = NULL;
        ATerm t_37 = NULL;
        t = SSLgetAnnotations(not_null(o_37));
        {
          t_37 = t;
          if(((s_37 != NULL) && (s_37 != t_37)))
            _fail(t_37);
          else
            s_37 = t_37;
        }
        {
          t = not_null(p_37);
          {
            ATerm w_37 = NULL;
            t = n_59(t);
            {
              u_37 = t;
              {
                ATerm x_37 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(u_37)), not_null(s_37));
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
  ATerm g_38 = NULL;
  g_38 = t;
  f_38 :
  if(match_cons(g_38, sym_Help_0))
    {
      ATerm i_38 = NULL,k_38 = NULL;
      ATerm d_35;
      d_35 = t;
      {
        ATerm j_38 = NULL;
        t = SSLgetAnnotations(not_null(g_38));
        {
          j_38 = t;
          if(((i_38 != NULL) && (i_38 != j_38)))
            _fail(j_38);
          else
            i_38 = j_38;
        }
      }
      t = d_35;
      {
        ATerm q_38 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(i_38));
        {
          q_38 = t;
          if(((k_38 != NULL) && (k_38 != q_38)))
            _fail(q_38);
          else
            k_38 = q_38;
        }
        t = not_null(k_38);
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
  ATerm w_38 = NULL,x_38 = NULL,y_38 = NULL;
  w_38 = t;
  v_38 :
  if(match_cons(w_38, sym__2))
    {
      x_38 = ATgetArgument(w_38, 0);
      y_38 = ATgetArgument(w_38, 1);
      t = SSL_table_get(not_null(x_38), not_null(y_38));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm f_39 = NULL,g_39 = NULL,h_39 = NULL,i_39 = NULL;
  f_39 = t;
  e_39 :
  if(match_cons(f_39, sym__3))
    {
      g_39 = ATgetArgument(f_39, 0);
      h_39 = ATgetArgument(f_39, 1);
      i_39 = ATgetArgument(f_39, 2);
      {
        ATerm i_35;
        i_35 = t;
        {
          ATerm m_39 = NULL;
          ATerm n_39 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_39), not_null(h_39));
          {
            ATerm j_35 = t;
            int q_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(q_35);
              }
            else
              {
                t = j_35;
                t = (ATerm) ATempty;
              }
            {
              n_39 = t;
              if(((m_39 != NULL) && (m_39 != n_39)))
                _fail(n_39);
              else
                m_39 = n_39;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(g_39), not_null(h_39), (ATerm) ATinsert(CheckATermList(not_null(m_39)), not_null(i_39)));
            t = table_put_0(t);
          }
        }
        t = i_35;
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
  ATerm t_39 = NULL;
  ATerm u_39 = NULL;
  t = term_d_22;
  {
    t = u_65(t);
    {
      u_39 = t;
      if(((t_39 != NULL) && (t_39 != u_39)))
        _fail(u_39);
      else
        t_39 = u_39;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_y_34, term_z_34, not_null(t_39));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm a_40 = NULL,b_40 = NULL,c_40 = NULL;
  a_40 = t;
  z_39 :
  if(match_string(a_40, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(a_40) == AT_LIST) && ((ATermList) a_40 != ATempty)))
        {
          b_40 = ATgetFirst((ATermList) a_40);
          c_40 = (ATerm) ATgetNext((ATermList) a_40);
          {
            ATerm f_40 = NULL;
            ATerm r_35;
            r_35 = t;
            {
              t = not_null(b_40);
              t = a_0(t);
            }
            t = r_35;
            {
              ATerm g_40 = NULL;
              t = term_d_22;
              {
                t = b_0(t);
                {
                  g_40 = t;
                  if(((f_40 != NULL) && (f_40 != g_40)))
                    _fail(g_40);
                  else
                    f_40 = g_40;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(c_40)), not_null(f_40));
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
    ATerm l_40 = NULL;
    l_40 = t;
    k_40 :
    if(!(match_string(l_40, "--help")))
      {
        if(!(match_string(l_40, "-h")))
          {
            if(!(match_string(l_40, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm x_11 (ATerm t)
  {
    t = term_z_31;
    return(t);
  }
  ATerm g_12 (ATerm t)
  {
    t = term_s_35;
    return(t);
  }
  t = Option_3(t, w_11, x_11, g_12);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm o_40 = NULL,p_40 = NULL,q_40 = NULL;
  o_40 = t;
  n_40 :
  if(((ATgetType(o_40) == AT_LIST) && ((ATermList) o_40 != ATempty)))
    {
      p_40 = ATgetFirst((ATermList) o_40);
      q_40 = (ATerm) ATgetNext((ATermList) o_40);
      t = (ATerm) ATinsert(CheckATermList(not_null(q_40)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(p_40)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm w_40 = NULL,x_40 = NULL,y_40 = NULL;
  w_40 = t;
  v_40 :
  if(match_cons(w_40, sym__2))
    {
      x_40 = ATgetArgument(w_40, 0);
      y_40 = ATgetArgument(w_40, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_o_25, not_null(x_40), not_null(y_40));
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
  ATerm t_35;
  t_35 = t;
  {
    ATerm h_12 (ATerm t)
    {
      t = term_u_35;
      t = s_65(t);
      return(t);
    }
    t = try_1(t, h_12);
  }
  t = t_35;
  {
    ATerm i_12 (ATerm t)
    {
      ATerm h_41 = NULL;
      ATerm v_35;
      v_35 = t;
      {
        ATerm e_41 = NULL;
        ATerm f_41 = NULL;
        f_41 = t;
        if(((e_41 != NULL) && (e_41 != f_41)))
          _fail(f_41);
        else
          e_41 = f_41;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_y_35, not_null(e_41));
          t = set_config_0(t);
        }
      }
      t = v_35;
      {
        ATerm i_41 = NULL;
        i_41 = t;
        if(((h_41 != NULL) && (h_41 != i_41)))
          _fail(i_41);
        else
          h_41 = i_41;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(h_41));
      }
      return(t);
    }
    ATerm j_12 (ATerm t)
    {
      ATerm z_35 = t;
      int a_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_36 = t;
          int c_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(c_36);
            }
          else
            {
              t = b_36;
              {
                t = s_65(t);
                t = Cons_2(t, _id, j_12);
              }
            }
          LocalPopChoice(a_36);
        }
      else
        {
          t = z_35;
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
  ATerm n_41 = NULL;
  ATerm d_36;
  d_36 = t;
  {
    t = term_h_36;
    t = table_put_0(t);
  }
  t = d_36;
  {
    ATerm k_12 (ATerm t)
    {
      ATerm i_36 = t;
      int m_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_65(t);
          LocalPopChoice(m_36);
        }
      else
        {
          t = i_36;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, k_12);
    {
      ATerm n_12 (ATerm t)
      {
        ATerm p_36 = t;
        int q_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_f_15;
                t = exit_0(t);
              }
            }
            LocalPopChoice(q_36);
          }
        else
          {
            t = p_36;
            {
              ATerm o_12 (ATerm t)
              {
                ATerm t_12 (ATerm t)
                {
                  ATerm o_41 = NULL;
                  o_41 = t;
                  if(((n_41 != NULL) && (n_41 != o_41)))
                    _fail(o_41);
                  else
                    n_41 = o_41;
                  return(t);
                }
                t = Undefined_1(t, t_12);
                return(t);
              }
              t = option_defined_1(t, o_12);
              {
                ATerm r_36;
                r_36 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_x_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_41)), term_s_36));
                  t = printnl_0(t);
                }
                t = r_36;
                {
                  t = system_usage_0(t);
                  {
                    t = term_w_22;
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
        ATerm t_36;
        t_36 = t;
        {
          t = term_y_34;
          t = table_destroy_0(t);
        }
        t = t_36;
      }
    }
  }
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm s_41 = NULL,t_41 = NULL,u_41 = NULL;
  s_41 = t;
  r_41 :
  if(match_cons(s_41, sym__2))
    {
      t_41 = ATgetArgument(s_41, 0);
      u_41 = ATgetArgument(s_41, 1);
      {
        t = not_null(t_41);
        {
          ATerm u_12 (ATerm t)
          {
            t = not_null(u_41);
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
  ATerm e_42 = NULL,f_42 = NULL,g_42 = NULL;
  e_42 = t;
  d_42 :
  if(match_cons(e_42, sym__2))
    {
      f_42 = ATgetArgument(e_42, 0);
      g_42 = ATgetArgument(e_42, 1);
      {
        ATerm k_42 = NULL,m_42 = NULL;
        ATerm l_42 = NULL;
        t = SSLgetAnnotations(not_null(e_42));
        {
          l_42 = t;
          if(((k_42 != NULL) && (k_42 != l_42)))
            _fail(l_42);
          else
            k_42 = l_42;
        }
        {
          t = not_null(f_42);
          {
            ATerm o_42 = NULL;
            t = r_48(t);
            {
              m_42 = t;
              {
                t = not_null(g_42);
                {
                  ATerm q_42 = NULL;
                  t = s_48(t);
                  {
                    o_42 = t;
                    {
                      ATerm r_42 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(m_42), not_null(o_42)), not_null(k_42));
                      {
                        r_42 = t;
                        if(((q_42 != NULL) && (q_42 != r_42)))
                          _fail(r_42);
                        else
                          q_42 = r_42;
                      }
                      t = not_null(q_42);
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
  ATerm c_43 (ATerm t)
  {
    ATerm u_36 = t;
    int v_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_78(t);
        LocalPopChoice(v_36);
      }
    else
      {
        t = u_36;
        t = Cons_2(t, _id, c_43);
      }
    return(t);
  }
  t = c_43(t);
  return(t);
}
ATerm has_extension_1 (ATerm t, ATerm x_69 (ATerm))
{
  ATerm f_43 = NULL;
  ATerm w_36;
  w_36 = t;
  {
    ATerm g_43 = NULL;
    t = x_69(t);
    {
      t = explode_string_0(t);
      {
        g_43 = t;
        if(((f_43 != NULL) && (f_43 != g_43)))
          _fail(g_43);
        else
          f_43 = g_43;
      }
    }
  }
  t = w_36;
  {
    ATerm c_37;
    c_37 = t;
    {
      t = explode_string_0(t);
      {
        ATerm v_12 (ATerm t)
        {
          ATerm h_43 = NULL;
          h_43 = t;
          if(((f_43 != NULL) && (f_43 != h_43)))
            _fail(h_43);
          else
            f_43 = h_43;
          return(t);
        }
        t = at_suffix_1(t, v_12);
      }
    }
    t = c_37;
  }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm f_71 (ATerm))
{
  ATerm f_37 = t;
  int g_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(g_37);
    }
  else
    {
      t = f_37;
      {
        ATerm h_37 = t;
        int i_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_12 (ATerm t)
            {
              t = filter_1(t, f_71);
              return(t);
            }
            t = Cons_2(t, f_71, w_12);
            LocalPopChoice(i_37);
          }
        else
          {
            t = h_37;
            {
              ATerm m_43 = NULL,n_43 = NULL,o_43 = NULL;
              m_43 = t;
              l_43 :
              if(((ATgetType(m_43) == AT_LIST) && ((ATermList) m_43 != ATempty)))
                {
                  n_43 = ATgetFirst((ATermList) m_43);
                  o_43 = (ATerm) ATgetNext((ATermList) m_43);
                  {
                    t = not_null(o_43);
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
  ATerm s_43 = NULL;
  s_43 = t;
  t = SSL_readdir(not_null(s_43));
  return(t);
}
ATerm find_plugins_2 (ATerm t, ATerm g_61 (ATerm), ATerm h_61 (ATerm))
{
  t = g_61(t);
  {
    ATerm x_12 (ATerm t)
    {
      ATerm x_43 = NULL;
      x_43 = t;
      {
        t = readdir_0(t);
        {
          ATerm c_13 (ATerm t)
          {
            ATerm z_43 = NULL;
            t = has_extension_1(t, h_61);
            {
              ATerm a_44 = NULL;
              a_44 = t;
              if(((z_43 != NULL) && (z_43 != a_44)))
                _fail(a_44);
              else
                z_43 = a_44;
              {
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(z_43)), term_j_37), not_null(x_43));
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
  ATerm k_37;
  k_37 = t;
  {
    t = j_61(t);
    {
      ATerm d_13 (ATerm t)
      {
        ATerm e_44 = NULL;
        ATerm g_13 (ATerm t)
        {
          ATerm h_13 (ATerm t)
          {
            t = term_l_37;
            return(t);
          }
          t = debug_1(t, h_13);
          return(t);
        }
        t = if_verbose2_1(t, g_13);
        {
          t = ReadFromFile_0(t);
          {
            ATerm f_44 = NULL;
            f_44 = t;
            if(((e_44 != NULL) && (e_44 != f_44)))
              _fail(f_44);
            else
              e_44 = f_44;
            {
              t = (ATerm) ATmakeAppl(sym__2, term_o_25, not_null(e_44));
              t = table_putlist_0(t);
            }
          }
        }
        return(t);
      }
      t = map_1(t, d_13);
    }
  }
  t = k_37;
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm j_44 = NULL;
  ATerm l_44 = NULL;
  j_44 = t;
  {
    ATerm m_37;
    m_37 = t;
    {
      ATerm m_44 = NULL;
      t = term_q_37;
      {
        m_44 = t;
        if(((l_44 != NULL) && (l_44 != m_44)))
          _fail(m_44);
        else
          l_44 = m_44;
      }
    }
    t = m_37;
    {
      t = SSL_open_file(not_null(j_44), not_null(l_44));
      t = SSL_close_file(not_null(j_44));
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm e_78 (ATerm))
{
  ATerm p_44 (ATerm t)
  {
    ATerm r_37 = t;
    int v_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, p_44);
        LocalPopChoice(v_37);
      }
    else
      {
        t = r_37;
        {
          t = Nil_0(t);
          t = e_78(t);
        }
      }
    return(t);
  }
  t = p_44(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm y_37 = t;
  int z_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(z_37);
    }
  else
    {
      t = y_37;
      {
        ATerm s_44 = NULL,t_44 = NULL,u_44 = NULL;
        s_44 = t;
        r_44 :
        if(((ATgetType(s_44) == AT_LIST) && ((ATermList) s_44 != ATempty)))
          {
            t_44 = ATgetFirst((ATermList) s_44);
            u_44 = (ATerm) ATgetNext((ATermList) s_44);
            {
              t = not_null(t_44);
              {
                ATerm i_13 (ATerm t)
                {
                  t = not_null(u_44);
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
  ATerm z_44 (ATerm t)
  {
    ATerm a_38 = t;
    int b_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, y_77, _id);
        LocalPopChoice(b_38);
      }
    else
      {
        t = a_38;
        t = Cons_2(t, _id, z_44);
      }
    return(t);
  }
  t = z_44(t);
  return(t);
}
ATerm fetch_elem_1 (ATerm t, ATerm a_78 (ATerm))
{
  ATerm b_45 = NULL;
  ATerm j_13 (ATerm t)
  {
    ATerm c_45 = NULL;
    t = a_78(t);
    {
      c_45 = t;
      if(((b_45 != NULL) && (b_45 != c_45)))
        _fail(c_45);
      else
        b_45 = c_45;
    }
    return(t);
  }
  t = fetch_1(t, j_13);
  t = not_null(b_45);
  return(t);
}
ATerm find_config_file_2 (ATerm t, ATerm y_60 (ATerm), ATerm z_60 (ATerm))
{
  ATerm c_38 = t;
  int d_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = y_60(t);
      {
        ATerm o_13 (ATerm t)
        {
          ATerm g_45 = NULL,i_45 = NULL;
          ATerm e_38;
          e_38 = t;
          {
            ATerm h_45 = NULL;
            h_45 = t;
            if(((g_45 != NULL) && (g_45 != h_45)))
              _fail(h_45);
            else
              g_45 = h_45;
          }
          t = e_38;
          {
            ATerm j_45 = NULL;
            t = z_60(t);
            {
              j_45 = t;
              if(((i_45 != NULL) && (i_45 != j_45)))
                _fail(j_45);
              else
                i_45 = j_45;
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(i_45)), term_j_37), not_null(g_45));
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
      LocalPopChoice(d_38);
    }
  else
    {
      t = c_38;
      {
        t = term_h_38;
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
  ATerm o_45 = NULL,p_45 = NULL,q_45 = NULL;
  ATerm l_38;
  l_38 = t;
  {
    ATerm r_45 = NULL,s_45 = NULL,t_45 = NULL,u_45 = NULL;
    r_45 = t;
    n_45 :
    if(match_cons(r_45, sym__3))
      {
        s_45 = ATgetArgument(r_45, 0);
        t_45 = ATgetArgument(r_45, 1);
        u_45 = ATgetArgument(r_45, 2);
        {
          if(((o_45 != NULL) && (o_45 != s_45)))
            _fail(s_45);
          else
            o_45 = s_45;
          {
            if(((p_45 != NULL) && (p_45 != t_45)))
              _fail(t_45);
            else
              p_45 = t_45;
            {
              if(((q_45 != NULL) && (q_45 != u_45)))
                _fail(u_45);
              else
                q_45 = u_45;
              t = SSL_table_put(not_null(o_45), not_null(p_45), not_null(q_45));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = l_38;
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm b_46 = NULL;
  b_46 = t;
  a_46 :
  if(((ATermList) b_46 == ATempty))
    {
      {
        ATerm g_46 = NULL,i_46 = NULL;
        ATerm m_38;
        m_38 = t;
        {
          ATerm h_46 = NULL;
          t = SSLgetAnnotations(not_null(b_46));
          {
            h_46 = t;
            if(((g_46 != NULL) && (g_46 != h_46)))
              _fail(h_46);
            else
              g_46 = h_46;
          }
        }
        t = m_38;
        {
          ATerm j_46 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(g_46));
          {
            j_46 = t;
            if(((i_46 != NULL) && (i_46 != j_46)))
              _fail(j_46);
            else
              i_46 = j_46;
          }
          t = not_null(i_46);
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
  ATerm r_46 (ATerm t)
  {
    ATerm n_38 = t;
    int o_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(o_38);
      }
    else
      {
        t = n_38;
        t = Cons_2(t, p_77, r_46);
      }
    return(t);
  }
  t = r_46(t);
  return(t);
}
ATerm table_putlist_0 (ATerm t)
{
  ATerm w_46 = NULL,x_46 = NULL,y_46 = NULL;
  w_46 = t;
  v_46 :
  if(match_cons(w_46, sym__2))
    {
      x_46 = ATgetArgument(w_46, 0);
      y_46 = ATgetArgument(w_46, 1);
      {
        t = not_null(y_46);
        {
          ATerm p_13 (ATerm t)
          {
            ATerm b_47 = NULL,c_47 = NULL,d_47 = NULL;
            b_47 = t;
            u_46 :
            if(match_cons(b_47, sym__2))
              {
                c_47 = ATgetArgument(b_47, 0);
                d_47 = ATgetArgument(b_47, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(x_46), not_null(c_47), not_null(d_47));
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
  ATerm j_47 = NULL;
  j_47 = t;
  t = SSL_ReadFromFile(not_null(j_47));
  return(t);
}
ATerm import_config_file_1 (ATerm t, ATerm i_61 (ATerm))
{
  ATerm p_38;
  p_38 = t;
  {
    ATerm n_47 = NULL;
    t = i_61(t);
    {
      ATerm q_13 (ATerm t)
      {
        ATerm r_13 (ATerm t)
        {
          t = term_l_37;
          return(t);
        }
        t = debug_1(t, r_13);
        return(t);
      }
      t = if_verbose2_1(t, q_13);
      {
        t = ReadFromFile_0(t);
        {
          ATerm o_47 = NULL;
          o_47 = t;
          if(((n_47 != NULL) && (n_47 != o_47)))
            _fail(o_47);
          else
            n_47 = o_47;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_o_25, not_null(n_47));
            t = table_putlist_0(t);
          }
        }
      }
    }
  }
  t = p_38;
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm r_47 = NULL;
  r_47 = t;
  t = SSL_implode_string(not_null(r_47));
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm q_48 = NULL;
  q_48 = t;
  t = SSL_explode_string(not_null(q_48));
  return(t);
}
ATerm get_path_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm r_38 = t;
    int s_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_48 (ATerm t)
        {
          ATerm t_38 = t;
          int u_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, x_48);
              LocalPopChoice(u_38);
            }
          else
            {
              t = t_38;
              {
                ATerm v_13 (ATerm t)
                {
                  ATerm w_48 = NULL;
                  w_48 = t;
                  v_48 :
                  if(!(match_int(w_48, 47)))
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
        t = x_48(t);
        LocalPopChoice(s_38);
      }
    else
      {
        t = r_38;
        t = (ATerm) ATempty;
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm e_60 (ATerm), ATerm f_60 (ATerm))
{
  ATerm e_49 = NULL,f_49 = NULL,g_49 = NULL;
  e_49 = t;
  d_49 :
  if(((ATgetType(e_49) == AT_LIST) && ((ATermList) e_49 != ATempty)))
    {
      f_49 = ATgetFirst((ATermList) e_49);
      g_49 = (ATerm) ATgetNext((ATermList) e_49);
      {
        ATerm k_49 = NULL,m_49 = NULL;
        ATerm l_49 = NULL;
        t = SSLgetAnnotations(not_null(e_49));
        {
          l_49 = t;
          if(((k_49 != NULL) && (k_49 != l_49)))
            _fail(l_49);
          else
            k_49 = l_49;
        }
        {
          t = not_null(f_49);
          {
            ATerm o_49 = NULL;
            t = e_60(t);
            {
              m_49 = t;
              {
                t = not_null(g_49);
                {
                  ATerm q_49 = NULL;
                  t = f_60(t);
                  {
                    o_49 = t;
                    {
                      ATerm r_49 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(o_49)), not_null(m_49)), not_null(k_49));
                      {
                        r_49 = t;
                        if(((q_49 != NULL) && (q_49 != r_49)))
                          _fail(r_49);
                        else
                          q_49 = r_49;
                      }
                      t = not_null(q_49);
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
  ATerm d_50 = NULL,f_50 = NULL,h_50 = NULL;
  ATerm z_38;
  z_38 = t;
  {
    ATerm z_13 (ATerm t)
    {
      ATerm e_50 = NULL;
      t = get_path_0(t);
      {
        e_50 = t;
        if(((d_50 != NULL) && (d_50 != e_50)))
          _fail(e_50);
        else
          d_50 = e_50;
      }
      return(t);
    }
    t = Cons_2(t, z_13, _id);
  }
  t = z_38;
  {
    ATerm a_39;
    a_39 = t;
    {
      ATerm g_50 = NULL;
      t = get_conf_pkgdatadir();
      {
        g_50 = t;
        if(((f_50 != NULL) && (f_50 != g_50)))
          _fail(g_50);
        else
          f_50 = g_50;
      }
    }
    t = a_39;
    {
      ATerm b_39;
      b_39 = t;
      {
        ATerm i_50 = NULL;
        t = get_conf_datadir();
        {
          i_50 = t;
          if(((h_50 != NULL) && (h_50 != i_50)))
            _fail(i_50);
          else
            h_50 = i_50;
        }
      }
      t = b_39;
      {
        ATerm a_14 (ATerm t)
        {
          ATerm d_14 (ATerm t)
          {
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_50)), not_null(d_50));
            return(t);
          }
          ATerm e_14 (ATerm t)
          {
            t = term_c_39;
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
              ATerm j_50 = NULL;
              ATerm k_50 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(h_50), term_d_39);
              {
                t = conc_strings_0(t);
                {
                  k_50 = t;
                  if(((j_50 != NULL) && (j_50 != k_50)))
                    _fail(k_50);
                  else
                    j_50 = k_50;
                }
              }
              t = (ATerm) ATinsert(ATempty, not_null(j_50));
              return(t);
            }
            ATerm l_14 (ATerm t)
            {
              t = term_j_39;
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
                ATerm l_50 = NULL;
                t = term_z_32;
                {
                  t = get_config_0(t);
                  {
                    ATerm m_50 = NULL;
                    t = term_k_39;
                    {
                      t = get_config_0(t);
                      {
                        m_50 = t;
                        if(((l_50 != NULL) && (l_50 != m_50)))
                          _fail(m_50);
                        else
                          l_50 = m_50;
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_l_39, (ATerm) ATinsert(ATempty, not_null(l_50)));
                      {
                        t = call_0(t);
                        {
                          t = term_f_15;
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
                ATerm r_14 (ATerm t)
                {
                  t = term_p_33;
                  {
                    t = get_config_0(t);
                    {
                      t = sc_version_0(t);
                      {
                        t = term_f_15;
                        t = exit_0(t);
                      }
                    }
                  }
                  return(t);
                }
                t = try_1(t, r_14);
                {
                  ATerm o_39 = t;
                  int p_39 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm n_50 = NULL;
                      ATerm o_50 = NULL;
                      t = term_o_21;
                      {
                        t = get_config_0(t);
                        {
                          t = basename_0(t);
                          {
                            o_50 = t;
                            if(((n_50 != NULL) && (n_50 != o_50)))
                              _fail(o_50);
                            else
                              n_50 = o_50;
                          }
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym__2, not_null(n_50), term_g_17);
                      LocalPopChoice(p_39);
                    }
                  else
                    {
                      t = o_39;
                      {
                        t = (ATerm) ATinsert(ATempty, term_q_39);
                        t = fatal_error_0(t);
                      }
                    }
                  {
                    t = sc_announce_0(t);
                    {
                      ATerm s_14 (ATerm t)
                      {
                        ATerm r_39;
                        r_39 = t;
                        {
                          t = term_o_21;
                          {
                            t = get_config_0(t);
                            {
                              ATerm t_14 (ATerm t)
                              {
                                t = term_s_39;
                                return(t);
                              }
                              t = debug_1(t, t_14);
                            }
                          }
                        }
                        t = r_39;
                        return(t);
                      }
                      t = if_verbose1_1(t, s_14);
                    }
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
  ATerm v_39 = t;
  int w_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = command_line_options_0(t);
      {
        ATerm u_14 (ATerm t)
        {
          ATerm w_14 (ATerm t)
          {
            ATerm y_50 = NULL;
            ATerm z_50 = NULL;
            z_50 = t;
            if(((y_50 != NULL) && (y_50 != z_50)))
              _fail(z_50);
            else
              y_50 = z_50;
            {
              t = (ATerm) ATmakeAppl(sym__2, term_x_17, (ATerm) ATinsert(CheckATermList(not_null(y_50)), term_x_39));
              t = printnl_0(t);
            }
            return(t);
          }
          t = if_verbose1_1(t, w_14);
          return(t);
        }
        t = profile_p__2(t, u_14, compile_0);
        {
          ATerm x_14 (ATerm t)
          {
            ATerm a_51 = NULL;
            ATerm b_51 = NULL;
            t = run_time_0(t);
            {
              b_51 = t;
              if(((a_51 != NULL) && (a_51 != b_51)))
                _fail(b_51);
              else
                a_51 = b_51;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, term_x_17, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_40), not_null(a_51)), term_y_39));
              t = printnl_0(t);
            }
            return(t);
          }
          t = if_verbose2_1(t, x_14);
          {
            t = term_f_15;
            t = exit_0(t);
          }
        }
      }
      LocalPopChoice(w_39);
    }
  else
    {
      t = v_39;
      {
        ATerm c_51 = NULL;
        ATerm d_51 = NULL;
        t = run_time_0(t);
        {
          d_51 = t;
          if(((c_51 != NULL) && (c_51 != d_51)))
            _fail(d_51);
          else
            c_51 = d_51;
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_x_17, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_40), not_null(c_51)), term_e_40));
          {
            t = printnl_0(t);
            {
              t = term_w_22;
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
