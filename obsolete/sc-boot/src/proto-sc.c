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
ATerm term_z_38;
ATerm term_y_38;
ATerm term_x_38;
ATerm term_w_38;
ATerm term_p_38;
ATerm term_n_38;
ATerm term_g_38;
ATerm term_f_38;
ATerm term_e_38;
ATerm term_d_38;
ATerm term_y_37;
ATerm term_d_37;
ATerm term_k_36;
ATerm term_i_36;
ATerm term_c_36;
ATerm term_m_35;
ATerm term_y_34;
ATerm term_s_34;
ATerm term_j_34;
ATerm term_h_34;
ATerm term_z_33;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_j_33;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_d_33;
ATerm term_c_33;
ATerm term_b_33;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_o_32;
ATerm term_n_32;
ATerm term_m_32;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_l_31;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_x_29;
ATerm term_w_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_k_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_e_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_r_27;
ATerm term_m_27;
ATerm term_h_27;
ATerm term_d_27;
ATerm term_a_27;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_o_26;
ATerm term_g_26;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_m_25;
ATerm term_u_24;
ATerm term_s_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_c_23;
ATerm term_a_23;
ATerm term_v_22;
ATerm term_r_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_y_21;
ATerm term_v_21;
ATerm term_q_21;
ATerm term_o_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_y_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_r_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_j_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_b_18;
ATerm term_y_17;
ATerm term_w_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_c_17;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_w_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_g_15;
void init_constant_terms (void)
{
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("rm", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-f", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree1", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".s1", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".s2", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".s3", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".s4", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".s5", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".s6", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".s7", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".s8", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".s9", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".ac", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".c.abox", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling C code", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("C.pp", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize2", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("optimize1", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol(".sdefs", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to ", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("frontend", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to ", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-dep", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--norm", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("The Stratego Compiler (version ", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i file            Main module to compile (required)\n", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f    Write output to f", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(sym_Ignore_0);
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d|--Include d   Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d\n", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-CC", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(sym__2, term_r_27, term_f_21);
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(sym_CC_0);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-CC                Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(sym__2, term_q_21, term_f_21);
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(sym_AST_0);
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(sym__2, term_r_20, term_f_21);
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(sym_FRONTEND_0);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(sym__2, term_c_23, term_f_21);
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(sym_NORM_0);
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--norm             Do not remove intermediate results", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(sym__2, term_j_20, term_f_21);
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(sym_FUSION_0);
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(sym__2, term_w_29, term_f_21);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(sym_TraceAll_0);
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--trace-all        Instrument all definitions to print tracing information", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-t", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-t f               Instrument definition of f to print tracing information\n", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i       Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(sym__2, term_i_15, term_g_15);
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(sym_Verbose_1, term_g_15);
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-h", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(sym__2, term_t_31, term_f_21);
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(sym__2, term_z_31, term_f_21);
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(sym_Manual_0);
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(sym__2, term_e_32, term_f_21);
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version       Display program's version", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("   \n", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("   The Stratego Compiler translates Stratego specifications to C code\n", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("   Typical usage:\n", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("     ", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i mod\n", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("   to compile module mod\n", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("   Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   paradigm of rewriting strategies. For documentation see\n", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("                 http://www.stratego-language.org", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   Copyright (C) 1998-2002 Eelco Visser <visser@acm.org>\n", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   This program is free software; you can redistribute it and/or modify\n", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   it under the terms of the GNU General Public License as published by\n", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   the Free Software Foundation; either version 2, or (at your option)\n", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   any later version.\n", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(sym__2, term_p_33, term_q_33);
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(sym__3, term_p_33, term_q_33, (ATerm) ATempty);
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(ATmakeSymbol("importing: ", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("sc.config", 0, ATtrue));
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(ATmakeSymbol("/sc-plugins", 0, ATtrue));
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(ATmakeSymbol(".plugin", 0, ATtrue));
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(ATmakeSymbol("manual", 0, ATtrue));
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeAppl(ATmakeSymbol("cat", 0, ATtrue));
  ATprotect(&(term_n_38));
  term_n_38 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue));
}
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm k_69 (ATerm), ATerm l_69 (ATerm));
ATerm crush_2 (ATerm, ATerm y_70 (ATerm), ATerm z_70 (ATerm));
ATerm run_time_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm i_58 (ATerm));
ATerm rm_files_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm RZip2_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm genzip_4 (ATerm, ATerm f_73 (ATerm), ATerm g_73 (ATerm), ATerm h_73 (ATerm), ATerm i_73 (ATerm));
ATerm rzip_1 (ATerm, ATerm t_73 (ATerm));
ATerm remove_intermediates_0 (ATerm);
ATerm link_object_code_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm if_verbose3_1 (ATerm, ATerm j_58 (ATerm));
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm x_65 (ATerm));
ATerm c_to_object_code_0 (ATerm);
ATerm c_compile_0 (ATerm);
ATerm pipe_2 (ATerm, ATerm i_62 (ATerm), ATerm j_62 (ATerm));
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
ATerm WriteToBinaryFile_0 (ATerm);
ATerm apply_to_file_1 (ATerm, ATerm z_62 (ATerm));
ATerm transform_file_2 (ATerm, ATerm x_62 (ATerm), ATerm y_62 (ATerm));
ATerm AddMain_1 (ATerm, ATerm p_82 (ATerm));
ATerm add_main_0 (ATerm);
ATerm output_ast_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm pipe_3 (ATerm, ATerm k_62 (ATerm), ATerm l_62 (ATerm), ATerm m_62 (ATerm));
ATerm parse_0 (ATerm);
ATerm front_0 (ATerm);
ATerm compile_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm h_58 (ATerm));
ATerm ticks_to_seconds_0 (ATerm);
ATerm self_children_sys_time_0 (ATerm);
ATerm add_0 (ATerm);
ATerm self_children_user_time_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm diff_times_0 (ATerm);
ATerm times_0 (ATerm);
ATerm profile_p__2 (ATerm, ATerm r_65 (ATerm), ATerm s_65 (ATerm));
ATerm debug_1 (ATerm, ATerm w_65 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm sc_announce_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm basename_1 (ATerm, ATerm f_67 (ATerm));
ATerm basename_0 (ATerm);
ATerm sc_version_0 (ATerm);
ATerm try_1 (ATerm, ATerm y_81 (ATerm));
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
ATerm Program_1 (ATerm, ATerm j_57 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm k_57 (ATerm));
ATerm option_defined_1 (ATerm, ATerm f_64 (ATerm));
ATerm Help_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm l_63 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm j_63 (ATerm));
ATerm parse_options_1 (ATerm, ATerm i_63 (ATerm));
ATerm conc_0 (ATerm);
ATerm _2 (ATerm, ATerm t_46 (ATerm), ATerm u_46 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm at_suffix_1 (ATerm, ATerm k_75 (ATerm));
ATerm has_extension_1 (ATerm, ATerm i_67 (ATerm));
ATerm filter_1 (ATerm, ATerm q_68 (ATerm));
ATerm readdir_0 (ATerm);
ATerm find_plugins_2 (ATerm, ATerm d_59 (ATerm), ATerm e_59 (ATerm));
ATerm import_config_files_1 (ATerm, ATerm g_59 (ATerm));
ATerm file_exists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm g_75 (ATerm));
ATerm concat_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm a_75 (ATerm));
ATerm fetch_elem_1 (ATerm, ATerm c_75 (ATerm));
ATerm find_config_file_2 (ATerm, ATerm v_58 (ATerm), ATerm w_58 (ATerm));
ATerm table_put_0 (ATerm);
ATerm Nil_0 (ATerm);
ATerm map_1 (ATerm, ATerm s_74 (ATerm));
ATerm table_putlist_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm import_config_file_1 (ATerm, ATerm f_59 (ATerm));
ATerm implode_string_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm get_path_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm b_58 (ATerm), ATerm c_58 (ATerm));
ATerm command_line_options_0 (ATerm);
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
        ATerm t_14;
        t_14 = t;
        t = SSL_printnl(not_null(v_1), not_null(w_1));
        t = t_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm k_69 (ATerm), ATerm l_69 (ATerm))
{
  ATerm u_14 = t;
  int f_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = k_69(t);
      LocalPopChoice(f_15);
    }
  else
    {
      t = u_14;
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
                t = foldr_2(t, k_69, l_69);
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
                t = l_69(t);
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
ATerm crush_2 (ATerm t, ATerm y_70 (ATerm), ATerm z_70 (ATerm))
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
      t = foldr_2(t, y_70, z_70);
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
      t = term_g_15;
      return(t);
    }
    t = crush_2(t, c_0, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm i_58 (ATerm))
{
  ATerm d_0 (ATerm t)
  {
    ATerm h_15;
    h_15 = t;
    {
      ATerm c_3 = NULL;
      ATerm d_3 = NULL;
      t = term_i_15;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_3), term_j_15);
        t = geq_0(t);
      }
    }
    t = h_15;
    t = i_58(t);
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
    ATerm k_15;
    k_15 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_n_15, (ATerm) ATinsert(CheckATermList(not_null(g_3)), term_o_15));
      t = call_0(t);
    }
    t = k_15;
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
ATerm genzip_4 (ATerm t, ATerm f_73 (ATerm), ATerm g_73 (ATerm), ATerm h_73 (ATerm), ATerm i_73 (ATerm))
{
  ATerm k_4 (ATerm t)
  {
    ATerm t_15 = t;
    int u_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_73(t);
        LocalPopChoice(u_15);
      }
    else
      {
        t = t_15;
        {
          t = g_73(t);
          {
            t = _2(t, i_73, k_4);
            t = h_73(t);
          }
        }
      }
    return(t);
  }
  t = k_4(t);
  return(t);
}
ATerm rzip_1 (ATerm t, ATerm t_73 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, RZip2_0, Zip3_0, t_73);
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
        ATerm v_15;
        v_15 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_4), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_16), term_w_16), term_v_16), term_u_16), term_t_16), term_s_16), term_l_16), term_k_16), term_j_16), term_h_16), term_g_16), term_d_16), term_c_16), term_w_15));
          {
            t = rzip_1(t, conc_strings_0);
            t = rm_files_0(t);
          }
        }
        t = v_15;
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
      t = term_c_17;
      return(t);
    }
    t = say_1(t, h_0);
    return(t);
  }
  t = if_verbose2_1(t, g_0);
  {
    ATerm d_17;
    d_17 = t;
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
    t = d_17;
    {
      ATerm o_0 (ATerm t)
      {
        ATerm q_0 (ATerm t)
        {
          t = term_e_17;
          t = get_config_0(t);
          return(t);
        }
        t = try_1(t, q_0);
        return(t);
      }
      ATerm p_0 (ATerm t)
      {
        t = term_f_17;
        return(t);
      }
      t = _2(t, o_0, p_0);
      {
        ATerm m_17;
        m_17 = t;
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
        t = m_17;
        {
          ATerm n_17;
          n_17 = t;
          {
            ATerm b_5 = NULL;
            ATerm c_5 = NULL;
            t = term_o_17;
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
              t = (ATerm) ATmakeAppl(sym__2, term_p_17, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(b_5)), not_null(z_4)), term_e_17), not_null(x_4)));
              {
                ATerm r_0 (ATerm t)
                {
                  ATerm q_17;
                  q_17 = t;
                  {
                    ATerm d_5 = NULL,f_5 = NULL;
                    ATerm r_17;
                    r_17 = t;
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
                    t = r_17;
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
                        t = (ATerm) ATmakeAppl(sym__2, term_w_17, (ATerm) ATinsert(CheckATermList(not_null(f_5)), not_null(d_5)));
                        t = printnl_0(t);
                      }
                    }
                  }
                  t = q_17;
                  return(t);
                }
                t = if_verbose3_1(t, r_0);
                t = call_0(t);
              }
            }
          }
          t = n_17;
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
ATerm if_verbose3_1 (ATerm t, ATerm j_58 (ATerm))
{
  ATerm s_0 (ATerm t)
  {
    ATerm x_17;
    x_17 = t;
    {
      ATerm f_7 = NULL;
      ATerm g_7 = NULL;
      t = term_i_15;
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_7), term_y_17);
        t = geq_0(t);
      }
    }
    t = x_17;
    t = j_58(t);
    return(t);
  }
  t = try_1(t, s_0);
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm z_17;
  z_17 = t;
  {
    ATerm j_7 = NULL;
    ATerm k_7 = NULL;
    k_7 = t;
    if(((j_7 != NULL) && (j_7 != k_7)))
      _fail(k_7);
    else
      j_7 = k_7;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_17, (ATerm) ATinsert(ATempty, not_null(j_7)));
      t = printnl_0(t);
    }
  }
  t = z_17;
  return(t);
}
ATerm say_1 (ATerm t, ATerm x_65 (ATerm))
{
  ATerm a_18;
  a_18 = t;
  {
    t = x_65(t);
    t = debug_0(t);
  }
  t = a_18;
  return(t);
}
ATerm c_to_object_code_0 (ATerm t)
{
  ATerm s_7 = NULL,u_7 = NULL;
  ATerm t_0 (ATerm t)
  {
    ATerm u_0 (ATerm t)
    {
      t = term_b_18;
      return(t);
    }
    t = say_1(t, u_0);
    return(t);
  }
  t = if_verbose2_1(t, t_0);
  {
    ATerm c_18;
    c_18 = t;
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
    t = c_18;
    {
      ATerm w_0 (ATerm t)
      {
        t = term_x_16;
        return(t);
      }
      t = _2(t, _id, w_0);
      {
        ATerm d_18;
        d_18 = t;
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
        t = d_18;
        {
          ATerm s_18;
          s_18 = t;
          {
            ATerm w_7 = NULL;
            ATerm x_7 = NULL,z_7 = NULL;
            ATerm y_7 = NULL;
            t = term_t_18;
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
              t = (ATerm) ATmakeAppl(sym__2, not_null(x_7), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(u_7)), term_e_17), not_null(s_7)), term_u_18));
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
              t = (ATerm) ATmakeAppl(sym__2, term_p_17, not_null(w_7));
              {
                ATerm x_0 (ATerm t)
                {
                  ATerm v_18;
                  v_18 = t;
                  {
                    ATerm a_8 = NULL,c_8 = NULL;
                    ATerm w_18;
                    w_18 = t;
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
                    t = w_18;
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
                        t = (ATerm) ATmakeAppl(sym__2, term_w_17, (ATerm) ATinsert(CheckATermList(not_null(c_8)), not_null(a_8)));
                        t = printnl_0(t);
                      }
                    }
                  }
                  t = v_18;
                  return(t);
                }
                t = if_verbose3_1(t, x_0);
                t = call_0(t);
              }
            }
          }
          t = s_18;
        }
      }
    }
  }
  return(t);
}
ATerm c_compile_0 (ATerm t)
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
        t = (ATerm) ATmakeAppl(sym__2, term_w_17, (ATerm) ATinsert(CheckATermList(not_null(l_8)), term_x_18));
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
  return(t);
}
ATerm pipe_2 (ATerm t, ATerm i_62 (ATerm), ATerm j_62 (ATerm))
{
  ATerm b_1 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = pipe_3(t, i_62, j_62, b_1);
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
    t = term_i_19;
    t = get_config_0(t);
    return(t);
  }
  ATerm f_1 (ATerm t)
  {
    t = term_w_16;
    return(t);
  }
  ATerm g_1 (ATerm t)
  {
    ATerm p_8 = NULL;
    ATerm q_8 = NULL;
    t = term_j_19;
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
    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_8)), term_k_19);
    return(t);
  }
  t = pipe_3(t, e_1, f_1, g_1);
  return(t);
}
ATerm s2c_0 (ATerm t)
{
  ATerm h_1 (ATerm t)
  {
    t = term_l_19;
    t = get_config_0(t);
    return(t);
  }
  ATerm i_1 (ATerm t)
  {
    t = term_v_16;
    return(t);
  }
  ATerm k_1 (ATerm t)
  {
    ATerm v_8 = NULL,x_8 = NULL;
    ATerm m_19;
    m_19 = t;
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
    t = m_19;
    {
      ATerm a_9 = NULL;
      t = term_n_19;
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
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_8)), term_n_19);
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_8), (ATerm) ATinsert(CheckATermList(not_null(x_8)), term_o_19));
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
    t = term_p_19;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(f_9)), term_o_19);
    return(t);
  }
  t = pipe_3(t, m_1, _id, n_1);
  return(t);
}
ATerm canonicalize_0 (ATerm t)
{
  ATerm o_1 (ATerm t)
  {
    t = term_q_19;
    t = get_config_0(t);
    return(t);
  }
  ATerm p_1 (ATerm t)
  {
    t = term_u_16;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(j_9)), term_o_19);
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
        t = (ATerm) ATmakeAppl(sym__2, term_w_17, (ATerm) ATinsert(CheckATermList(not_null(n_9)), term_z_19));
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
    t = term_a_20;
    t = get_config_0(t);
    return(t);
  }
  ATerm y_1 (ATerm t)
  {
    t = term_t_16;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(r_9)), term_o_19);
    return(t);
  }
  t = pipe_3(t, x_1, y_1, z_1);
  return(t);
}
ATerm compile_match_0 (ATerm t)
{
  ATerm a_2 (ATerm t)
  {
    t = term_b_20;
    t = get_config_0(t);
    return(t);
  }
  ATerm b_2 (ATerm t)
  {
    t = term_s_16;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(v_9)), term_o_19);
    return(t);
  }
  t = pipe_3(t, a_2, b_2, g_2);
  return(t);
}
ATerm inline_0 (ATerm t)
{
  ATerm h_2 (ATerm t)
  {
    t = term_c_20;
    t = get_config_0(t);
    return(t);
  }
  ATerm k_2 (ATerm t)
  {
    t = term_l_16;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(z_9)), term_o_19);
    return(t);
  }
  t = pipe_3(t, h_2, k_2, l_2);
  return(t);
}
ATerm fusion_0 (ATerm t)
{
  ATerm m_2 (ATerm t)
  {
    t = term_d_20;
    t = get_config_0(t);
    return(t);
  }
  ATerm n_2 (ATerm t)
  {
    t = term_k_16;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(d_10)), term_o_19);
    return(t);
  }
  t = pipe_3(t, m_2, n_2, o_2);
  return(t);
}
ATerm optimize1_0 (ATerm t)
{
  ATerm r_2 (ATerm t)
  {
    t = term_e_20;
    t = get_config_0(t);
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    t = term_j_16;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(h_10)), term_o_19);
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
        t = (ATerm) ATmakeAppl(sym__2, term_w_17, (ATerm) ATinsert(CheckATermList(not_null(l_10)), term_f_20));
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
        ATerm h_20;
        h_20 = t;
        {
          ATerm i_20 = t;
          if((PushChoice() == 0))
            {
              t = term_j_20;
              t = get_config_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = i_20;
            }
        }
        t = h_20;
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
    t = term_l_20;
    t = get_config_0(t);
    return(t);
  }
  ATerm h_3 (ATerm t)
  {
    t = term_h_16;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(p_10)), term_o_19);
    return(t);
  }
  t = pipe_3(t, f_3, h_3, i_3);
  return(t);
}
ATerm stratego_nf_0 (ATerm t)
{
  ATerm j_3 (ATerm t)
  {
    t = term_m_20;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(t_10)), term_o_19);
    return(t);
  }
  t = pipe_3(t, j_3, _id, o_3);
  return(t);
}
ATerm extract_0 (ATerm t)
{
  ATerm p_3 (ATerm t)
  {
    t = term_n_20;
    t = get_config_0(t);
    return(t);
  }
  ATerm q_3 (ATerm t)
  {
    t = term_g_16;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(x_10)), term_o_19);
    return(t);
  }
  t = pipe_3(t, p_3, q_3, r_3);
  return(t);
}
ATerm extract_all_0 (ATerm t)
{
  ATerm z_3 (ATerm t)
  {
    t = term_o_20;
    t = get_config_0(t);
    return(t);
  }
  ATerm a_4 (ATerm t)
  {
    t = term_p_20;
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
    t = (ATerm) ATinsert(CheckATermList(not_null(b_11)), term_o_19);
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
    ATerm q_20;
    q_20 = t;
    {
      t = term_r_20;
      t = get_config_0(t);
    }
    t = q_20;
    {
      ATerm s_20 = t;
      int t_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = extract_all_0(t);
          LocalPopChoice(t_20);
        }
      else
        {
          t = s_20;
          {
            t = (ATerm) ATinsert(ATempty, term_u_20);
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
          t = (ATerm) ATmakeAppl(sym__2, term_w_17, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(h_11)), not_null(g_11)), term_v_20));
          {
            t = printnl_0(t);
            {
              t = term_g_15;
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
ATerm frontend_0 (ATerm t)
{
  ATerm l_4 (ATerm t)
  {
    t = term_y_20;
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
    ATerm n_11 = NULL;
    ATerm o_11 = NULL;
    t = pass_verbose_0(t);
    {
      o_11 = t;
      if(((n_11 != NULL) && (n_11 != o_11)))
        _fail(o_11);
      else
        n_11 = o_11;
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(n_11)), term_o_19);
    return(t);
  }
  t = pipe_3(t, l_4, q_4, r_4);
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm s_11 = NULL,t_11 = NULL,u_11 = NULL;
  s_11 = t;
  r_11 :
  if(match_cons(s_11, sym__2))
    {
      t_11 = ATgetArgument(s_11, 0);
      u_11 = ATgetArgument(s_11, 1);
      t = SSL_WriteToBinaryFile(not_null(t_11), not_null(u_11));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm apply_to_file_1 (ATerm t, ATerm z_62 (ATerm))
{
  ATerm b_12 = NULL,c_12 = NULL,d_12 = NULL;
  b_12 = t;
  a_12 :
  if(match_cons(b_12, sym__2))
    {
      c_12 = ATgetArgument(b_12, 0);
      d_12 = ATgetArgument(b_12, 1);
      {
        ATerm g_12 = NULL;
        ATerm z_20;
        z_20 = t;
        {
          ATerm h_12 = NULL;
          t = not_null(c_12);
          {
            t = ReadFromFile_0(t);
            {
              t = z_62(t);
              {
                h_12 = t;
                if(((g_12 != NULL) && (g_12 != h_12)))
                  _fail(h_12);
                else
                  g_12 = h_12;
              }
            }
          }
        }
        t = z_20;
        {
          ATerm a_21;
          a_21 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(d_12), not_null(g_12));
            t = WriteToBinaryFile_0(t);
          }
          t = a_21;
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm transform_file_2 (ATerm t, ATerm x_62 (ATerm), ATerm y_62 (ATerm))
{
  ATerm m_12 = NULL,o_12 = NULL;
  ATerm c_21;
  c_21 = t;
  {
    ATerm n_12 = NULL;
    t = conc_strings_0(t);
    {
      n_12 = t;
      if(((m_12 != NULL) && (m_12 != n_12)))
        _fail(n_12);
      else
        m_12 = n_12;
    }
  }
  t = c_21;
  {
    t = _2(t, _id, y_62);
    {
      ATerm d_21;
      d_21 = t;
      {
        ATerm p_12 = NULL;
        t = conc_strings_0(t);
        {
          p_12 = t;
          if(((o_12 != NULL) && (o_12 != p_12)))
            _fail(p_12);
          else
            o_12 = p_12;
        }
      }
      t = d_21;
      {
        ATerm e_21;
        e_21 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_12), not_null(o_12));
          t = apply_to_file_1(t, x_62);
        }
        t = e_21;
      }
    }
  }
  return(t);
}
ATerm AddMain_1 (ATerm t, ATerm p_82 (ATerm))
{
  ATerm v_12 = NULL,w_12 = NULL;
  v_12 = t;
  u_12 :
  if(match_cons(v_12, sym_Specification_1))
    {
      w_12 = ATgetArgument(v_12, 0);
      {
        ATerm y_12 = NULL;
        ATerm z_12 = NULL;
        t = term_f_21;
        {
          t = p_82(t);
          {
            z_12 = t;
            if(((y_12 != NULL) && (y_12 != z_12)))
              _fail(z_12);
            else
              y_12 = z_12;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(not_null(w_12)), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_g_21, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(y_12)), (ATerm) ATempty))))));
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
  ATerm d_13 = NULL;
  ATerm h_21 = t;
  int i_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_21;
      n_21 = t;
      {
        ATerm e_13 = NULL;
        t = term_o_21;
        {
          t = get_config_0(t);
          {
            e_13 = t;
            if(((d_13 != NULL) && (d_13 != e_13)))
              _fail(e_13);
            else
              d_13 = e_13;
          }
        }
      }
      t = n_21;
      {
        ATerm s_4 (ATerm t)
        {
          ATerm u_4 (ATerm t)
          {
            t = not_null(d_13);
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
      LocalPopChoice(i_21);
    }
  else
    {
      t = h_21;
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
  ATerm i_13 = NULL,j_13 = NULL;
  ATerm w_4 (ATerm t)
  {
    ATerm p_21;
    p_21 = t;
    {
      t = term_q_21;
      t = get_config_0(t);
    }
    t = p_21;
    {
      ATerm h_5 (ATerm t)
      {
        ATerm k_13 = NULL;
        k_13 = t;
        if(((i_13 != NULL) && (i_13 != k_13)))
          _fail(k_13);
        else
          i_13 = k_13;
        return(t);
      }
      ATerm i_5 (ATerm t)
      {
        ATerm l_13 = NULL;
        l_13 = t;
        if(((j_13 != NULL) && (j_13 != l_13)))
          _fail(l_13);
        else
          j_13 = l_13;
        return(t);
      }
      t = _2(t, h_5, i_5);
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_17, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(j_13)), not_null(i_13)), term_v_21));
        {
          t = printnl_0(t);
          {
            t = term_g_15;
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
  ATerm p_13 = NULL;
  p_13 = t;
  t = SSL_int_to_string(not_null(p_13));
  return(t);
}
ATerm pass_verbose_0 (ATerm t)
{
  ATerm u_13 = NULL;
  ATerm v_13 = NULL,x_13 = NULL;
  ATerm w_13 = NULL;
  t = term_i_15;
  {
    ATerm w_21 = t;
    int x_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        LocalPopChoice(x_21);
      }
    else
      {
        t = w_21;
        t = term_y_21;
      }
    {
      w_13 = t;
      if(((v_13 != NULL) && (v_13 != w_13)))
        _fail(w_13);
      else
        v_13 = w_13;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(v_13), term_y_21);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          x_13 = t;
          if(((u_13 != NULL) && (u_13 != x_13)))
            _fail(x_13);
          else
            u_13 = x_13;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_13)), term_i_15);
  return(t);
}
ATerm pipe_3 (ATerm t, ATerm k_62 (ATerm), ATerm l_62 (ATerm), ATerm m_62 (ATerm))
{
  ATerm e_14 = NULL,g_14 = NULL;
  ATerm z_21;
  z_21 = t;
  {
    ATerm f_14 = NULL;
    t = conc_strings_0(t);
    {
      f_14 = t;
      if(((e_14 != NULL) && (e_14 != f_14)))
        _fail(f_14);
      else
        e_14 = f_14;
    }
  }
  t = z_21;
  {
    t = _2(t, _id, l_62);
    {
      ATerm a_22;
      a_22 = t;
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
      t = a_22;
      {
        ATerm b_22;
        b_22 = t;
        {
          ATerm i_14 = NULL,k_14 = NULL;
          ATerm d_22;
          d_22 = t;
          {
            ATerm j_14 = NULL;
            t = k_62(t);
            {
              j_14 = t;
              if(((i_14 != NULL) && (i_14 != j_14)))
                _fail(j_14);
              else
                i_14 = j_14;
            }
          }
          t = d_22;
          {
            ATerm l_14 = NULL;
            t = m_62(t);
            {
              l_14 = t;
              if(((k_14 != NULL) && (k_14 != l_14)))
                _fail(l_14);
              else
                k_14 = l_14;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(i_14), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(not_null(k_14)), not_null(g_14)), term_e_17), not_null(e_14)), term_g_22));
              t = call_0(t);
            }
          }
        }
        t = b_22;
      }
    }
  }
  return(t);
}
ATerm parse_0 (ATerm t)
{
  ATerm j_5 (ATerm t)
  {
    t = term_h_22;
    t = get_config_0(t);
    return(t);
  }
  ATerm k_5 (ATerm t)
  {
    t = term_w_15;
    return(t);
  }
  ATerm l_5 (ATerm t)
  {
    ATerm v_14 = NULL,b_15 = NULL,d_15 = NULL;
    ATerm i_22;
    i_22 = t;
    {
      ATerm a_15 = NULL;
      ATerm l_22 = t;
      int q_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_14 = NULL;
          ATerm x_14 = NULL;
          t = term_e_17;
          {
            t = get_config_0(t);
            {
              x_14 = t;
              if(((w_14 != NULL) && (w_14 != x_14)))
                _fail(x_14);
              else
                w_14 = x_14;
            }
          }
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_14)), term_r_22);
          LocalPopChoice(q_22);
        }
      else
        {
          t = l_22;
          {
            ATerm y_14 = NULL;
            ATerm z_14 = NULL;
            t = term_g_22;
            {
              t = get_config_0(t);
              {
                z_14 = t;
                if(((y_14 != NULL) && (y_14 != z_14)))
                  _fail(z_14);
                else
                  y_14 = z_14;
              }
            }
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_14)), term_r_22);
          }
        }
      {
        a_15 = t;
        if(((v_14 != NULL) && (v_14 != a_15)))
          _fail(a_15);
        else
          v_14 = a_15;
      }
    }
    t = i_22;
    {
      ATerm u_22;
      u_22 = t;
      {
        ATerm c_15 = NULL;
        t = pass_verbose_0(t);
        {
          c_15 = t;
          if(((b_15 != NULL) && (b_15 != c_15)))
            _fail(c_15);
          else
            b_15 = c_15;
        }
      }
      t = u_22;
      {
        ATerm e_15 = NULL;
        t = term_v_22;
        {
          t = get_config_0(t);
          {
            e_15 = t;
            if(((d_15 != NULL) && (d_15 != e_15)))
              _fail(e_15);
            else
              d_15 = e_15;
          }
        }
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(b_15)), not_null(d_15)), not_null(v_14));
          t = concat_0(t);
        }
      }
    }
    return(t);
  }
  t = pipe_3(t, j_5, k_5, l_5);
  return(t);
}
ATerm front_0 (ATerm t)
{
  ATerm m_5 (ATerm t)
  {
    ATerm o_5 (ATerm t)
    {
      ATerm l_15 = NULL;
      ATerm m_15 = NULL;
      m_15 = t;
      if(((l_15 != NULL) && (l_15 != m_15)))
        _fail(m_15);
      else
        l_15 = m_15;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_17, (ATerm) ATinsert(CheckATermList(not_null(l_15)), term_a_23));
        t = printnl_0(t);
      }
      return(t);
    }
    t = if_verbose1_1(t, o_5);
    return(t);
  }
  ATerm n_5 (ATerm t)
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
  t = profile_p__2(t, m_5, n_5);
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
          ATerm u_5 (ATerm t)
          {
            ATerm b_23 = t;
            if((PushChoice() == 0))
              {
                t = term_c_23;
                t = get_config_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = b_23;
              }
            t = remove_intermediates_0(t);
            return(t);
          }
          t = try_1(t, u_5);
        }
      }
    }
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm q_15 = NULL,r_15 = NULL,s_15 = NULL;
  q_15 = t;
  p_15 :
  if(match_cons(q_15, sym__2))
    {
      r_15 = ATgetArgument(q_15, 0);
      s_15 = ATgetArgument(q_15, 1);
      {
        ATerm d_23;
        d_23 = t;
        {
          ATerm f_23 = t;
          int g_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(r_15), not_null(s_15));
              LocalPopChoice(g_23);
            }
          else
            {
              t = f_23;
              t = SSL_gtr(not_null(r_15), not_null(s_15));
            }
        }
        t = d_23;
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
  ATerm y_15 = NULL;
  ATerm h_23 = t;
  int i_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL;
      z_15 = t;
      x_15 :
      if(match_cons(z_15, sym__2))
        {
          a_16 = ATgetArgument(z_15, 0);
          b_16 = ATgetArgument(z_15, 1);
          {
            if(((y_15 != NULL) && (y_15 != a_16)))
              _fail(a_16);
            else
              y_15 = a_16;
            if(((y_15 != NULL) && (y_15 != b_16)))
              _fail(b_16);
            else
              y_15 = b_16;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(i_23);
    }
  else
    {
      t = h_23;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm h_58 (ATerm))
{
  ATerm z_5 (ATerm t)
  {
    ATerm j_23;
    j_23 = t;
    {
      ATerm e_16 = NULL;
      ATerm f_16 = NULL;
      t = term_i_15;
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
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_16), term_y_21);
        t = geq_0(t);
      }
    }
    t = j_23;
    t = h_58(t);
    return(t);
  }
  t = try_1(t, z_5);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm i_16 = NULL;
  i_16 = t;
  t = SSL_TicksToSeconds(not_null(i_16));
  return(t);
}
ATerm self_children_sys_time_0 (ATerm t)
{
  ATerm n_16 = NULL,o_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL;
  n_16 = t;
  m_16 :
  if(match_cons(n_16, sym__4))
    {
      o_16 = ATgetArgument(n_16, 0);
      p_16 = ATgetArgument(n_16, 1);
      q_16 = ATgetArgument(n_16, 2);
      r_16 = ATgetArgument(n_16, 3);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_16), not_null(r_16));
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
  ATerm z_16 = NULL,a_17 = NULL,b_17 = NULL;
  z_16 = t;
  y_16 :
  if(match_cons(z_16, sym__2))
    {
      a_17 = ATgetArgument(z_16, 0);
      b_17 = ATgetArgument(z_16, 1);
      {
        ATerm r_23 = t;
        int s_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(a_17), not_null(b_17));
            LocalPopChoice(s_23);
          }
        else
          {
            t = r_23;
            t = SSL_addr(not_null(a_17), not_null(b_17));
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
  ATerm h_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL;
  h_17 = t;
  g_17 :
  if(match_cons(h_17, sym__4))
    {
      i_17 = ATgetArgument(h_17, 0);
      j_17 = ATgetArgument(h_17, 1);
      k_17 = ATgetArgument(h_17, 2);
      l_17 = ATgetArgument(h_17, 3);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_17), not_null(k_17));
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
  ATerm t_17 = NULL,u_17 = NULL,v_17 = NULL;
  t_17 = t;
  s_17 :
  if(match_cons(t_17, sym__2))
    {
      u_17 = ATgetArgument(t_17, 0);
      v_17 = ATgetArgument(t_17, 1);
      {
        ATerm t_23 = t;
        int w_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(u_17), not_null(v_17));
            LocalPopChoice(w_23);
          }
        else
          {
            t = t_23;
            t = SSL_subtr(not_null(u_17), not_null(v_17));
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
  ATerm h_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL;
  h_18 = t;
  e_18 :
  if(match_cons(h_18, sym__2))
    {
      i_18 = ATgetArgument(h_18, 0);
      n_18 = ATgetArgument(h_18, 1);
      f_18 :
      if(match_cons(i_18, sym__4))
        {
          j_18 = ATgetArgument(i_18, 0);
          k_18 = ATgetArgument(i_18, 1);
          l_18 = ATgetArgument(i_18, 2);
          m_18 = ATgetArgument(i_18, 3);
          g_18 :
          if(match_cons(n_18, sym__4))
            {
              o_18 = ATgetArgument(n_18, 0);
              p_18 = ATgetArgument(n_18, 1);
              q_18 = ATgetArgument(n_18, 2);
              r_18 = ATgetArgument(n_18, 3);
              {
                ATerm a_19 = NULL,c_19 = NULL,e_19 = NULL,g_19 = NULL;
                ATerm x_23;
                x_23 = t;
                {
                  ATerm b_19 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(j_18), not_null(o_18));
                  {
                    t = subt_0(t);
                    {
                      b_19 = t;
                      if(((a_19 != NULL) && (a_19 != b_19)))
                        _fail(b_19);
                      else
                        a_19 = b_19;
                    }
                  }
                }
                t = x_23;
                {
                  ATerm y_23;
                  y_23 = t;
                  {
                    ATerm d_19 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(k_18), not_null(p_18));
                    {
                      t = subt_0(t);
                      {
                        d_19 = t;
                        if(((c_19 != NULL) && (c_19 != d_19)))
                          _fail(d_19);
                        else
                          c_19 = d_19;
                      }
                    }
                  }
                  t = y_23;
                  {
                    ATerm z_23;
                    z_23 = t;
                    {
                      ATerm f_19 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(l_18), not_null(q_18));
                      {
                        t = subt_0(t);
                        {
                          f_19 = t;
                          if(((e_19 != NULL) && (e_19 != f_19)))
                            _fail(f_19);
                          else
                            e_19 = f_19;
                        }
                      }
                    }
                    t = z_23;
                    {
                      ATerm h_19 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(m_18), not_null(r_18));
                      {
                        t = subt_0(t);
                        {
                          h_19 = t;
                          if(((g_19 != NULL) && (g_19 != h_19)))
                            _fail(h_19);
                          else
                            g_19 = h_19;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym__4, not_null(a_19), not_null(c_19), not_null(e_19), not_null(g_19));
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
ATerm profile_p__2 (ATerm t, ATerm r_65 (ATerm), ATerm s_65 (ATerm))
{
  ATerm r_19 = NULL;
  ATerm a_24;
  a_24 = t;
  {
    ATerm s_19 = NULL;
    t = times_0(t);
    {
      s_19 = t;
      if(((r_19 != NULL) && (r_19 != s_19)))
        _fail(s_19);
      else
        r_19 = s_19;
    }
  }
  t = a_24;
  {
    t = s_65(t);
    {
      ATerm b_24;
      b_24 = t;
      {
        ATerm t_19 = NULL,v_19 = NULL,x_19 = NULL;
        ATerm u_19 = NULL;
        t = times_0(t);
        {
          u_19 = t;
          if(((t_19 != NULL) && (t_19 != u_19)))
            _fail(u_19);
          else
            t_19 = u_19;
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_19), not_null(r_19));
          {
            t = diff_times_0(t);
            {
              ATerm e_24;
              e_24 = t;
              {
                ATerm w_19 = NULL;
                t = self_children_user_time_0(t);
                {
                  t = ticks_to_seconds_0(t);
                  {
                    w_19 = t;
                    if(((v_19 != NULL) && (v_19 != w_19)))
                      _fail(w_19);
                    else
                      v_19 = w_19;
                  }
                }
              }
              t = e_24;
              {
                ATerm y_19 = NULL;
                t = self_children_sys_time_0(t);
                {
                  t = ticks_to_seconds_0(t);
                  {
                    y_19 = t;
                    if(((x_19 != NULL) && (x_19 != y_19)))
                      _fail(y_19);
                    else
                      x_19 = y_19;
                  }
                }
                {
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(x_19)), term_g_24), not_null(v_19)), term_f_24);
                  t = r_65(t);
                }
              }
            }
          }
        }
      }
      t = b_24;
    }
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm w_65 (ATerm))
{
  ATerm h_24;
  h_24 = t;
  {
    ATerm g_20 = NULL,w_20 = NULL;
    ATerm i_24;
    i_24 = t;
    {
      ATerm k_20 = NULL;
      t = w_65(t);
      {
        k_20 = t;
        if(((g_20 != NULL) && (g_20 != k_20)))
          _fail(k_20);
        else
          g_20 = k_20;
      }
    }
    t = i_24;
    {
      ATerm x_20 = NULL;
      x_20 = t;
      if(((w_20 != NULL) && (w_20 != x_20)))
        _fail(x_20);
      else
        w_20 = x_20;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_20)), not_null(g_20)));
        t = printnl_0(t);
      }
    }
  }
  t = h_24;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm b_21 = NULL;
  b_21 = t;
  t = SSL_is_string(not_null(b_21));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm j_24 = t;
  int k_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(k_24);
    }
  else
    {
      t = j_24;
      {
        ATerm l_24 = t;
        int o_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_6 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, h_6);
            LocalPopChoice(o_24);
          }
        else
          {
            t = l_24;
            {
              ATerm k_21 = NULL,l_21 = NULL,m_21 = NULL;
              k_21 = t;
              j_21 :
              if(match_cons(k_21, sym_Path_1))
                {
                  l_21 = ATgetArgument(k_21, 0);
                  t = not_null(l_21);
                }
              else
                {
                  if(match_cons(k_21, sym_Var_1))
                    {
                      l_21 = ATgetArgument(k_21, 0);
                      {
                        t = not_null(l_21);
                        {
                          ATerm p_24 = t;
                          int r_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(r_24);
                            }
                          else
                            {
                              t = p_24;
                              {
                                ATerm i_6 (ATerm t)
                                {
                                  t = term_s_24;
                                  return(t);
                                }
                                t = debug_1(t, i_6);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(k_21, sym_Prefix_2))
                        {
                          l_21 = ATgetArgument(k_21, 0);
                          m_21 = ATgetArgument(k_21, 1);
                          {
                            ATerm r_21 = NULL,t_21 = NULL;
                            ATerm t_24;
                            t_24 = t;
                            {
                              ATerm s_21 = NULL;
                              t = not_null(l_21);
                              {
                                t = eval_config_0(t);
                                {
                                  s_21 = t;
                                  if(((r_21 != NULL) && (r_21 != s_21)))
                                    _fail(s_21);
                                  else
                                    r_21 = s_21;
                                }
                              }
                            }
                            t = t_24;
                            {
                              ATerm u_21 = NULL;
                              t = not_null(m_21);
                              {
                                t = eval_config_0(t);
                                {
                                  u_21 = t;
                                  if(((t_21 != NULL) && (t_21 != u_21)))
                                    _fail(u_21);
                                  else
                                    t_21 = u_21;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(r_21), not_null(t_21));
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
  ATerm c_22 = NULL;
  c_22 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_u_24, not_null(c_22));
    {
      t = table_get_0(t);
      {
        ATerm j_6 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm x_24;
            x_24 = t;
            {
              ATerm e_22 = NULL;
              ATerm f_22 = NULL;
              f_22 = t;
              if(((e_22 != NULL) && (e_22 != f_22)))
                _fail(f_22);
              else
                e_22 = f_22;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_u_24, not_null(c_22), not_null(e_22));
                t = table_put_0(t);
              }
            }
            t = x_24;
          }
          return(t);
        }
        t = try_1(t, j_6);
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
  ATerm y_24;
  y_24 = t;
  {
    ATerm j_22 = NULL;
    ATerm k_22 = NULL;
    k_22 = t;
    if(((j_22 != NULL) && (j_22 != k_22)))
      _fail(k_22);
    else
      j_22 = k_22;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_17, not_null(j_22));
      t = printnl_0(t);
    }
  }
  t = y_24;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm z_24;
  z_24 = t;
  {
    t = error_0(t);
    {
      t = term_y_21;
      t = exit_0(t);
    }
  }
  t = z_24;
  return(t);
}
ATerm basename_1 (ATerm t, ATerm f_67 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm k_6 (ATerm t)
    {
      ATerm b_25 = t;
      int c_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Cons_2(t, _id, k_6);
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
                ATerm l_6 (ATerm t)
                {
                  ATerm o_22 = NULL;
                  o_22 = t;
                  m_22 :
                  if(!(match_int(o_22, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = Cons_2(t, l_6, _id);
                LocalPopChoice(e_25);
              }
            else
              {
                t = d_25;
                {
                  ATerm m_6 (ATerm t)
                  {
                    ATerm p_22 = NULL;
                    p_22 = t;
                    n_22 :
                    if(!(match_int(p_22, 46)))
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = Cons_2(t, m_6, f_67);
                  t = (ATerm) ATempty;
                }
              }
          }
        }
      return(t);
    }
    t = try_1(t, k_6);
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
  ATerm l_25;
  l_25 = t;
  {
    ATerm s_22 = NULL;
    ATerm t_22 = NULL;
    t = term_m_25;
    {
      t = get_config_0(t);
      {
        t_22 = t;
        if(((s_22 != NULL) && (s_22 != t_22)))
          _fail(t_22);
        else
          s_22 = t_22;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_17, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_25), not_null(s_22)), term_r_25));
      t = printnl_0(t);
    }
  }
  t = l_25;
  return(t);
}
ATerm try_1 (ATerm t, ATerm y_81 (ATerm))
{
  ATerm t_25 = t;
  int u_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = y_81(t);
      LocalPopChoice(u_25);
    }
  else
    {
      t = t_25;
      {
      }
    }
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL;
  x_22 = t;
  w_22 :
  if(match_cons(x_22, sym__2))
    {
      y_22 = ATgetArgument(x_22, 0);
      z_22 = ATgetArgument(x_22, 1);
      t = SSL_call(not_null(y_22), not_null(z_22));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm e_23 = NULL;
  e_23 = t;
  t = SSL_string_to_int(not_null(e_23));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL;
  m_23 = t;
  k_23 :
  if(match_string(m_23, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(m_23) == AT_LIST) && ((ATermList) m_23 != ATempty)))
        {
          n_23 = ATgetFirst((ATermList) m_23);
          o_23 = (ATerm) ATgetNext((ATermList) m_23);
          l_23 :
          if(((ATgetType(o_23) == AT_LIST) && ((ATermList) o_23 != ATempty)))
            {
              p_23 = ATgetFirst((ATermList) o_23);
              q_23 = (ATerm) ATgetNext((ATermList) o_23);
              {
                ATerm u_23 = NULL;
                ATerm v_25;
                v_25 = t;
                {
                  t = not_null(n_23);
                  t = l_0(t);
                }
                t = v_25;
                {
                  ATerm v_23 = NULL;
                  t = not_null(p_23);
                  {
                    t = m_0(t);
                    {
                      v_23 = t;
                      if(((u_23 != NULL) && (u_23 != v_23)))
                        _fail(v_23);
                      else
                        u_23 = v_23;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(q_23)), not_null(u_23));
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
  ATerm d_24 = NULL,m_24 = NULL,n_24 = NULL;
  d_24 = t;
  c_24 :
  if(match_cons(d_24, sym__2))
    {
      m_24 = ATgetArgument(d_24, 0);
      n_24 = ATgetArgument(d_24, 1);
      {
        ATerm q_24 = NULL;
        ATerm v_24 = NULL,a_25 = NULL;
        ATerm w_24 = NULL;
        t = not_null(m_24);
        {
          ATerm w_25 = t;
          int x_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(x_25);
            }
          else
            {
              t = w_25;
              t = (ATerm) ATempty;
            }
          {
            w_24 = t;
            if(((v_24 != NULL) && (v_24 != w_24)))
              _fail(w_24);
            else
              v_24 = w_24;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_24), not_null(v_24));
          {
            t = conc_0(t);
            {
              a_25 = t;
              if(((q_24 != NULL) && (q_24 != a_25)))
                _fail(a_25);
              else
                q_24 = a_25;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_u_24, not_null(m_24), not_null(q_24));
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
  ATerm g_25 = NULL,h_25 = NULL;
  ATerm y_25;
  y_25 = t;
  {
    ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL;
    i_25 = t;
    f_25 :
    if(match_cons(i_25, sym__2))
      {
        j_25 = ATgetArgument(i_25, 0);
        k_25 = ATgetArgument(i_25, 1);
        {
          if(((g_25 != NULL) && (g_25 != j_25)))
            _fail(j_25);
          else
            g_25 = j_25;
          {
            if(((h_25 != NULL) && (h_25 != k_25)))
              _fail(k_25);
            else
              h_25 = k_25;
            t = SSL_table_remove(not_null(g_25), not_null(h_25));
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = y_25;
  return(t);
}
ATerm toggle_config_0 (ATerm t)
{
  ATerm o_25 = NULL,p_25 = NULL,q_25 = NULL;
  o_25 = t;
  n_25 :
  if(match_cons(o_25, sym__2))
    {
      p_25 = ATgetArgument(o_25, 0);
      q_25 = ATgetArgument(o_25, 1);
      {
        ATerm z_25 = t;
        int a_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = not_null(p_25);
            {
              t = get_config_0(t);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_u_24, not_null(p_25));
                t = table_remove_0(t);
              }
            }
            LocalPopChoice(a_26);
          }
        else
          {
            t = z_25;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(p_25), not_null(q_25));
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
  ATerm j_26 = NULL,k_26 = NULL,l_26 = NULL;
  j_26 = t;
  i_26 :
  if(match_cons(j_26, sym__2))
    {
      k_26 = ATgetArgument(j_26, 0);
      l_26 = ATgetArgument(j_26, 1);
      {
        ATerm w_26 = NULL;
        ATerm x_26 = NULL,z_26 = NULL;
        ATerm y_26 = NULL;
        t = not_null(k_26);
        {
          ATerm b_26 = t;
          int c_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(c_26);
            }
          else
            {
              t = b_26;
              t = (ATerm) ATempty;
            }
          {
            y_26 = t;
            if(((x_26 != NULL) && (x_26 != y_26)))
              _fail(y_26);
            else
              x_26 = y_26;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_26), not_null(l_26));
          {
            t = conc_0(t);
            {
              z_26 = t;
              if(((w_26 != NULL) && (w_26 != z_26)))
                _fail(z_26);
              else
                w_26 = z_26;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_u_24, not_null(k_26), not_null(w_26));
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
  ATerm d_26 = t;
  int e_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_6 (ATerm t)
      {
        ATerm v_28 = NULL;
        v_28 = t;
        f_27 :
        if(!(match_string(v_28, "-i")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm v_6 (ATerm t)
      {
        ATerm y_28 = NULL;
        ATerm f_26;
        f_26 = t;
        {
          ATerm w_28 = NULL;
          ATerm x_28 = NULL;
          x_28 = t;
          if(((w_28 != NULL) && (w_28 != x_28)))
            _fail(x_28);
          else
            w_28 = x_28;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_g_22, not_null(w_28));
            t = set_config_0(t);
          }
        }
        t = f_26;
        {
          ATerm z_28 = NULL;
          t = basename_0(t);
          {
            z_28 = t;
            if(((y_28 != NULL) && (y_28 != z_28)))
              _fail(z_28);
            else
              y_28 = z_28;
          }
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(y_28));
        }
        return(t);
      }
      ATerm b_7 (ATerm t)
      {
        t = term_g_26;
        return(t);
      }
      t = ArgOption_3(t, r_6, v_6, b_7);
      LocalPopChoice(e_26);
    }
  else
    {
      t = d_26;
      {
        ATerm h_26 = t;
        int m_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_7 (ATerm t)
            {
              ATerm a_29 = NULL;
              a_29 = t;
              i_27 :
              if(!(match_string(a_29, "-o")))
                {
                  if(!(match_string(a_29, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm d_7 (ATerm t)
            {
              ATerm d_29 = NULL;
              ATerm n_26;
              n_26 = t;
              {
                ATerm b_29 = NULL;
                ATerm c_29 = NULL;
                c_29 = t;
                if(((b_29 != NULL) && (b_29 != c_29)))
                  _fail(c_29);
                else
                  b_29 = c_29;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_e_17, not_null(b_29));
                  t = set_config_0(t);
                }
              }
              t = n_26;
              {
                ATerm e_29 = NULL;
                e_29 = t;
                if(((d_29 != NULL) && (d_29 != e_29)))
                  _fail(e_29);
                else
                  d_29 = e_29;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(d_29));
              }
              return(t);
            }
            ATerm e_7 (ATerm t)
            {
              t = term_o_26;
              return(t);
            }
            t = ArgOption_3(t, c_7, d_7, e_7);
            LocalPopChoice(m_26);
          }
        else
          {
            t = h_26;
            {
              ATerm p_26 = t;
              int q_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_7 (ATerm t)
                  {
                    ATerm n_29 = NULL;
                    n_29 = t;
                    l_27 :
                    if(!(match_string(n_29, "-I")))
                      {
                        if(!(match_string(n_29, "--Include")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm i_7 (ATerm t)
                  {
                    ATerm q_29 = NULL;
                    ATerm r_29 = NULL;
                    r_29 = t;
                    if(((q_29 != NULL) && (q_29 != r_29)))
                      _fail(r_29);
                    else
                      q_29 = r_29;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_v_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_29)), term_v_22));
                      t = extend_config_0(t);
                    }
                    t = term_r_26;
                    return(t);
                  }
                  ATerm l_7 (ATerm t)
                  {
                    t = term_s_26;
                    return(t);
                  }
                  t = ArgOption_3(t, h_7, i_7, l_7);
                  LocalPopChoice(q_26);
                }
              else
                {
                  t = p_26;
                  {
                    ATerm t_26 = t;
                    int u_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm m_7 (ATerm t)
                        {
                          ATerm s_29 = NULL;
                          s_29 = t;
                          n_27 :
                          if(!(match_string(s_29, "--main")))
                            {
                              if(!(match_string(s_29, "-m")))
                                {
                                  _fail(t);
                                }
                            }
                          return(t);
                        }
                        ATerm n_7 (ATerm t)
                        {
                          ATerm v_29 = NULL;
                          ATerm v_26;
                          v_26 = t;
                          {
                            ATerm t_29 = NULL;
                            ATerm u_29 = NULL;
                            u_29 = t;
                            if(((t_29 != NULL) && (t_29 != u_29)))
                              _fail(u_29);
                            else
                              t_29 = u_29;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_o_21, not_null(t_29));
                              t = set_config_0(t);
                            }
                          }
                          t = v_26;
                          {
                            ATerm y_29 = NULL;
                            y_29 = t;
                            if(((v_29 != NULL) && (v_29 != y_29)))
                              _fail(y_29);
                            else
                              v_29 = y_29;
                            t = (ATerm) ATmakeAppl(sym_Main_1, not_null(v_29));
                          }
                          return(t);
                        }
                        ATerm o_7 (ATerm t)
                        {
                          t = term_a_27;
                          return(t);
                        }
                        t = ArgOption_3(t, m_7, n_7, o_7);
                        LocalPopChoice(u_26);
                      }
                    else
                      {
                        t = t_26;
                        {
                          ATerm b_27 = t;
                          int c_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm p_7 (ATerm t)
                              {
                                ATerm z_29 = NULL;
                                z_29 = t;
                                q_27 :
                                if(!(match_string(z_29, "--C-include")))
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              ATerm q_7 (ATerm t)
                              {
                                ATerm a_30 = NULL;
                                ATerm b_30 = NULL;
                                b_30 = t;
                                if(((a_30 != NULL) && (a_30 != b_30)))
                                  _fail(b_30);
                                else
                                  a_30 = b_30;
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, term_n_19, (ATerm) ATinsert(ATempty, not_null(a_30)));
                                  t = post_extend_config_0(t);
                                }
                                t = term_r_26;
                                return(t);
                              }
                              ATerm r_7 (ATerm t)
                              {
                                t = term_d_27;
                                return(t);
                              }
                              t = ArgOption_3(t, p_7, q_7, r_7);
                              LocalPopChoice(c_27);
                            }
                          else
                            {
                              t = b_27;
                              {
                                ATerm e_27 = t;
                                int g_27 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm e_8 (ATerm t)
                                    {
                                      ATerm f_30 = NULL;
                                      f_30 = t;
                                      s_27 :
                                      if(!(match_string(f_30, "-CI")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm f_8 (ATerm t)
                                    {
                                      ATerm g_30 = NULL;
                                      ATerm h_30 = NULL;
                                      h_30 = t;
                                      if(((g_30 != NULL) && (g_30 != h_30)))
                                        _fail(h_30);
                                      else
                                        g_30 = h_30;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, term_t_18, (ATerm) ATinsert(ATempty, not_null(g_30)));
                                        t = extend_config_0(t);
                                      }
                                      t = term_r_26;
                                      return(t);
                                    }
                                    ATerm g_8 (ATerm t)
                                    {
                                      t = term_h_27;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, e_8, f_8, g_8);
                                    LocalPopChoice(g_27);
                                  }
                                else
                                  {
                                    t = e_27;
                                    {
                                      ATerm j_27 = t;
                                      int k_27 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm h_8 (ATerm t)
                                          {
                                            ATerm i_30 = NULL;
                                            i_30 = t;
                                            d_28 :
                                            if(!(match_string(i_30, "-CL")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm i_8 (ATerm t)
                                          {
                                            ATerm j_30 = NULL;
                                            ATerm k_30 = NULL;
                                            k_30 = t;
                                            if(((j_30 != NULL) && (j_30 != k_30)))
                                              _fail(k_30);
                                            else
                                              j_30 = k_30;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, term_o_17, (ATerm) ATinsert(ATempty, not_null(j_30)));
                                              t = extend_config_0(t);
                                            }
                                            t = term_r_26;
                                            return(t);
                                          }
                                          ATerm j_8 (ATerm t)
                                          {
                                            t = term_m_27;
                                            return(t);
                                          }
                                          t = ArgOption_3(t, h_8, i_8, j_8);
                                          LocalPopChoice(k_27);
                                        }
                                      else
                                        {
                                          t = j_27;
                                          {
                                            ATerm o_27 = t;
                                            int p_27 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm k_8 (ATerm t)
                                                {
                                                  ATerm l_30 = NULL;
                                                  l_30 = t;
                                                  f_28 :
                                                  if(!(match_string(l_30, "-CC")))
                                                    {
                                                      _fail(t);
                                                    }
                                                  return(t);
                                                }
                                                ATerm n_8 (ATerm t)
                                                {
                                                  t = term_t_27;
                                                  t = set_config_0(t);
                                                  t = term_u_27;
                                                  return(t);
                                                }
                                                ATerm o_8 (ATerm t)
                                                {
                                                  t = term_v_27;
                                                  return(t);
                                                }
                                                t = Option_3(t, k_8, n_8, o_8);
                                                LocalPopChoice(p_27);
                                              }
                                            else
                                              {
                                                t = o_27;
                                                {
                                                  ATerm w_27 = t;
                                                  int x_27 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm r_8 (ATerm t)
                                                      {
                                                        ATerm m_30 = NULL;
                                                        m_30 = t;
                                                        g_28 :
                                                        if(!(match_string(m_30, "--ast")))
                                                          {
                                                            _fail(t);
                                                          }
                                                        return(t);
                                                      }
                                                      ATerm s_8 (ATerm t)
                                                      {
                                                        t = term_y_27;
                                                        t = set_config_0(t);
                                                        t = term_z_27;
                                                        return(t);
                                                      }
                                                      ATerm t_8 (ATerm t)
                                                      {
                                                        t = term_a_28;
                                                        return(t);
                                                      }
                                                      t = Option_3(t, r_8, s_8, t_8);
                                                      LocalPopChoice(x_27);
                                                    }
                                                  else
                                                    {
                                                      t = w_27;
                                                      {
                                                        ATerm b_28 = t;
                                                        int c_28 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm u_8 (ATerm t)
                                                            {
                                                              ATerm n_30 = NULL;
                                                              n_30 = t;
                                                              h_28 :
                                                              if(!(match_string(n_30, "-F")))
                                                                {
                                                                  _fail(t);
                                                                }
                                                              return(t);
                                                            }
                                                            ATerm b_9 (ATerm t)
                                                            {
                                                              t = term_e_28;
                                                              t = set_config_0(t);
                                                              t = term_m_28;
                                                              return(t);
                                                            }
                                                            ATerm c_9 (ATerm t)
                                                            {
                                                              t = term_n_28;
                                                              return(t);
                                                            }
                                                            t = Option_3(t, u_8, b_9, c_9);
                                                            LocalPopChoice(c_28);
                                                          }
                                                        else
                                                          {
                                                            t = b_28;
                                                            {
                                                              ATerm p_28 = t;
                                                              int q_28 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm d_9 (ATerm t)
                                                                  {
                                                                    ATerm o_30 = NULL;
                                                                    o_30 = t;
                                                                    i_28 :
                                                                    if(!(match_string(o_30, "--norm")))
                                                                      {
                                                                        _fail(t);
                                                                      }
                                                                    return(t);
                                                                  }
                                                                  ATerm e_9 (ATerm t)
                                                                  {
                                                                    t = term_f_29;
                                                                    t = set_config_0(t);
                                                                    t = term_g_29;
                                                                    return(t);
                                                                  }
                                                                  ATerm h_9 (ATerm t)
                                                                  {
                                                                    t = term_h_29;
                                                                    return(t);
                                                                  }
                                                                  t = Option_3(t, d_9, e_9, h_9);
                                                                  LocalPopChoice(q_28);
                                                                }
                                                              else
                                                                {
                                                                  t = p_28;
                                                                  {
                                                                    ATerm i_29 = t;
                                                                    int j_29 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm i_9 (ATerm t)
                                                                        {
                                                                          ATerm p_30 = NULL;
                                                                          p_30 = t;
                                                                          j_28 :
                                                                          if(!(match_string(p_30, "--fusion")))
                                                                            {
                                                                              _fail(t);
                                                                            }
                                                                          return(t);
                                                                        }
                                                                        ATerm l_9 (ATerm t)
                                                                        {
                                                                          t = term_k_29;
                                                                          t = toggle_config_0(t);
                                                                          t = term_l_29;
                                                                          return(t);
                                                                        }
                                                                        ATerm m_9 (ATerm t)
                                                                        {
                                                                          t = term_m_29;
                                                                          return(t);
                                                                        }
                                                                        t = Option_3(t, i_9, l_9, m_9);
                                                                        LocalPopChoice(j_29);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = i_29;
                                                                        {
                                                                          ATerm o_29 = t;
                                                                          int p_29 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              ATerm p_9 (ATerm t)
                                                                              {
                                                                                ATerm q_30 = NULL;
                                                                                q_30 = t;
                                                                                k_28 :
                                                                                if(!(match_string(q_30, "--trace-all")))
                                                                                  {
                                                                                    _fail(t);
                                                                                  }
                                                                                return(t);
                                                                              }
                                                                              ATerm q_9 (ATerm t)
                                                                              {
                                                                                t = term_x_29;
                                                                                t = set_config_0(t);
                                                                                t = term_c_30;
                                                                                return(t);
                                                                              }
                                                                              ATerm t_9 (ATerm t)
                                                                              {
                                                                                t = term_d_30;
                                                                                return(t);
                                                                              }
                                                                              t = Option_3(t, p_9, q_9, t_9);
                                                                              LocalPopChoice(p_29);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = o_29;
                                                                              {
                                                                                ATerm e_30 = t;
                                                                                int s_30 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm u_9 (ATerm t)
                                                                                    {
                                                                                      ATerm r_30 = NULL;
                                                                                      r_30 = t;
                                                                                      l_28 :
                                                                                      if(!(match_string(r_30, "-t")))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm x_9 (ATerm t)
                                                                                    {
                                                                                      ATerm w_30 = NULL;
                                                                                      ATerm t_30;
                                                                                      t_30 = t;
                                                                                      {
                                                                                        ATerm u_30 = NULL;
                                                                                        ATerm v_30 = NULL;
                                                                                        v_30 = t;
                                                                                        if(((u_30 != NULL) && (u_30 != v_30)))
                                                                                          _fail(v_30);
                                                                                        else
                                                                                          u_30 = v_30;
                                                                                        {
                                                                                          t = (ATerm) ATmakeAppl(sym__2, term_x_30, (ATerm) ATinsert(ATempty, not_null(u_30)));
                                                                                          t = extend_config_0(t);
                                                                                        }
                                                                                      }
                                                                                      t = t_30;
                                                                                      {
                                                                                        w_30 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Trace_1, not_null(w_30));
                                                                                      }
                                                                                      return(t);
                                                                                    }
                                                                                    ATerm y_9 (ATerm t)
                                                                                    {
                                                                                      t = term_y_30;
                                                                                      return(t);
                                                                                    }
                                                                                    t = ArgOption_3(t, u_9, x_9, y_9);
                                                                                    LocalPopChoice(s_30);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = e_30;
                                                                                    {
                                                                                      ATerm z_30 = t;
                                                                                      int j_31 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm b_10 (ATerm t)
                                                                                          {
                                                                                            ATerm a_31 = NULL;
                                                                                            a_31 = t;
                                                                                            o_28 :
                                                                                            if(!(match_string(a_31, "--verbose")))
                                                                                              {
                                                                                                _fail(t);
                                                                                              }
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm c_10 (ATerm t)
                                                                                          {
                                                                                            ATerm d_31 = NULL;
                                                                                            ATerm k_31;
                                                                                            k_31 = t;
                                                                                            {
                                                                                              ATerm b_31 = NULL;
                                                                                              ATerm c_31 = NULL;
                                                                                              t = string_to_int_0(t);
                                                                                              {
                                                                                                c_31 = t;
                                                                                                if(((b_31 != NULL) && (b_31 != c_31)))
                                                                                                  _fail(c_31);
                                                                                                else
                                                                                                  b_31 = c_31;
                                                                                              }
                                                                                              {
                                                                                                t = (ATerm) ATmakeAppl(sym__2, term_i_15, not_null(b_31));
                                                                                                t = set_config_0(t);
                                                                                              }
                                                                                            }
                                                                                            t = k_31;
                                                                                            {
                                                                                              ATerm e_31 = NULL;
                                                                                              e_31 = t;
                                                                                              if(((d_31 != NULL) && (d_31 != e_31)))
                                                                                                _fail(e_31);
                                                                                              else
                                                                                                d_31 = e_31;
                                                                                              t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(d_31));
                                                                                            }
                                                                                            return(t);
                                                                                          }
                                                                                          ATerm f_10 (ATerm t)
                                                                                          {
                                                                                            t = term_l_31;
                                                                                            return(t);
                                                                                          }
                                                                                          t = ArgOption_3(t, b_10, c_10, f_10);
                                                                                          LocalPopChoice(j_31);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = z_30;
                                                                                          {
                                                                                            ATerm m_31 = t;
                                                                                            int n_31 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm g_10 (ATerm t)
                                                                                                {
                                                                                                  ATerm f_31 = NULL;
                                                                                                  f_31 = t;
                                                                                                  r_28 :
                                                                                                  if(!(match_string(f_31, "-S")))
                                                                                                    {
                                                                                                      if(!(match_string(f_31, "--silent")))
                                                                                                        {
                                                                                                          _fail(t);
                                                                                                        }
                                                                                                    }
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm j_10 (ATerm t)
                                                                                                {
                                                                                                  t = term_o_31;
                                                                                                  t = set_config_0(t);
                                                                                                  t = term_p_31;
                                                                                                  return(t);
                                                                                                }
                                                                                                ATerm k_10 (ATerm t)
                                                                                                {
                                                                                                  t = term_q_31;
                                                                                                  return(t);
                                                                                                }
                                                                                                t = Option_3(t, g_10, j_10, k_10);
                                                                                                LocalPopChoice(n_31);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = m_31;
                                                                                                {
                                                                                                  ATerm r_31 = t;
                                                                                                  int s_31 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      ATerm n_10 (ATerm t)
                                                                                                      {
                                                                                                        ATerm g_31 = NULL;
                                                                                                        g_31 = t;
                                                                                                        s_28 :
                                                                                                        if(!(match_string(g_31, "-h")))
                                                                                                          {
                                                                                                            if(!(match_string(g_31, "--help")))
                                                                                                              {
                                                                                                                _fail(t);
                                                                                                              }
                                                                                                          }
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm o_10 (ATerm t)
                                                                                                      {
                                                                                                        t = term_u_31;
                                                                                                        t = set_config_0(t);
                                                                                                        t = term_v_31;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      ATerm r_10 (ATerm t)
                                                                                                      {
                                                                                                        t = term_w_31;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      t = Option_3(t, n_10, o_10, r_10);
                                                                                                      LocalPopChoice(s_31);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = r_31;
                                                                                                      {
                                                                                                        ATerm x_31 = t;
                                                                                                        int y_31 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm s_10 (ATerm t)
                                                                                                            {
                                                                                                              ATerm h_31 = NULL;
                                                                                                              h_31 = t;
                                                                                                              t_28 :
                                                                                                              if(!(match_string(h_31, "--man")))
                                                                                                                {
                                                                                                                  _fail(t);
                                                                                                                }
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm v_10 (ATerm t)
                                                                                                            {
                                                                                                              t = term_a_32;
                                                                                                              t = set_config_0(t);
                                                                                                              t = term_b_32;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            ATerm w_10 (ATerm t)
                                                                                                            {
                                                                                                              t = term_c_32;
                                                                                                              return(t);
                                                                                                            }
                                                                                                            t = Option_3(t, s_10, v_10, w_10);
                                                                                                            LocalPopChoice(y_31);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = x_31;
                                                                                                            {
                                                                                                              ATerm z_10 (ATerm t)
                                                                                                              {
                                                                                                                ATerm i_31 = NULL;
                                                                                                                i_31 = t;
                                                                                                                u_28 :
                                                                                                                if(!(match_string(i_31, "-v")))
                                                                                                                  {
                                                                                                                    if(!(match_string(i_31, "--version")))
                                                                                                                      {
                                                                                                                        _fail(t);
                                                                                                                      }
                                                                                                                  }
                                                                                                                return(t);
                                                                                                              }
                                                                                                              ATerm a_11 (ATerm t)
                                                                                                              {
                                                                                                                t = term_f_32;
                                                                                                                t = set_config_0(t);
                                                                                                                t = term_g_32;
                                                                                                                return(t);
                                                                                                              }
                                                                                                              ATerm d_11 (ATerm t)
                                                                                                              {
                                                                                                                t = term_j_32;
                                                                                                                return(t);
                                                                                                              }
                                                                                                              t = Option_3(t, z_10, a_11, d_11);
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm d_32 = NULL;
  d_32 = t;
  t = SSL_table_destroy(not_null(d_32));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_0 (ATerm))
{
  ATerm h_32 = NULL;
  ATerm i_32 = NULL;
  t = k_0(t);
  {
    i_32 = t;
    if(((h_32 != NULL) && (h_32 != i_32)))
      _fail(i_32);
    else
      h_32 = i_32;
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_33), term_g_33), term_f_33), term_e_33), term_k_32), term_d_33), term_k_32), term_k_32), term_c_33), term_k_32), term_b_33), term_u_32), term_k_32), term_t_32), term_o_32), not_null(h_32)), term_n_32), term_m_32), term_k_32), term_l_32), term_k_32);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm q_32 = NULL,r_32 = NULL,s_32 = NULL;
  s_32 = t;
  p_32 :
  if(((ATgetType(s_32) == AT_LIST) && ((ATermList) s_32 != ATempty)))
    {
      q_32 = ATgetFirst((ATermList) s_32);
      r_32 = (ATerm) ATgetNext((ATermList) s_32);
      {
        ATerm v_32 = NULL;
        t = not_null(r_32);
        {
          ATerm k_33;
          k_33 = t;
          {
            ATerm w_32 = NULL,y_32 = NULL,a_33 = NULL;
            ATerm l_33;
            l_33 = t;
            {
              ATerm x_32 = NULL;
              t = j_0(t);
              {
                x_32 = t;
                if(((w_32 != NULL) && (w_32 != x_32)))
                  _fail(x_32);
                else
                  w_32 = x_32;
              }
            }
            t = l_33;
            {
              ATerm z_32 = NULL;
              t = not_null(q_32);
              {
                t = i_0(t);
                {
                  z_32 = t;
                  if(((y_32 != NULL) && (y_32 != z_32)))
                    _fail(z_32);
                  else
                    y_32 = z_32;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(w_32)), not_null(y_32));
                {
                  a_33 = t;
                  if(((v_32 != NULL) && (v_32 != a_33)))
                    _fail(a_33);
                  else
                    v_32 = a_33;
                }
              }
            }
          }
          t = k_33;
          {
            ATerm e_11 (ATerm t)
            {
              t = not_null(v_32);
              return(t);
            }
            t = reverse_acc_2(t, i_0, e_11);
          }
        }
      }
    }
  else
    {
      if(((ATermList) s_32 == ATempty))
        {
          {
            t = term_f_21;
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
  ATerm f_11 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, f_11);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm f_0 (ATerm))
{
  ATerm h_33 = NULL;
  ATerm i_33 = NULL;
  t = term_f_21;
  {
    t = f_0(t);
    {
      i_33 = t;
      if(((h_33 != NULL) && (h_33 != i_33)))
        _fail(i_33);
      else
        h_33 = i_33;
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_33), not_null(h_33)), term_m_33);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm j_57 (ATerm))
{
  ATerm s_33 = NULL,t_33 = NULL;
  s_33 = t;
  r_33 :
  if(match_cons(s_33, sym_Program_1))
    {
      t_33 = ATgetArgument(s_33, 0);
      {
        ATerm w_33 = NULL,y_33 = NULL;
        ATerm x_33 = NULL;
        t = SSLgetAnnotations(not_null(s_33));
        {
          x_33 = t;
          if(((w_33 != NULL) && (w_33 != x_33)))
            _fail(x_33);
          else
            w_33 = x_33;
        }
        {
          t = not_null(t_33);
          {
            ATerm a_34 = NULL;
            t = j_57(t);
            {
              y_33 = t;
              {
                ATerm b_34 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(y_33)), not_null(w_33));
                {
                  b_34 = t;
                  if(((a_34 != NULL) && (a_34 != b_34)))
                    _fail(b_34);
                  else
                    a_34 = b_34;
                }
                t = not_null(a_34);
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
  ATerm k_34 = NULL;
  ATerm k_11 (ATerm t)
  {
    ATerm l_11 (ATerm t)
    {
      ATerm l_34 = NULL;
      l_34 = t;
      if(((k_34 != NULL) && (k_34 != l_34)))
        _fail(l_34);
      else
        k_34 = l_34;
      return(t);
    }
    t = Program_1(t, l_11);
    return(t);
  }
  t = option_defined_1(t, k_11);
  {
    ATerm m_11 (ATerm t)
    {
      ATerm m_34 = NULL;
      ATerm n_34 = NULL;
      t = term_f_21;
      {
        ATerm p_11 (ATerm t)
        {
          t = not_null(k_34);
          return(t);
        }
        t = short_description_1(t, p_11);
        {
          t = concat_strings_0(t);
          {
            n_34 = t;
            if(((m_34 != NULL) && (m_34 != n_34)))
              _fail(n_34);
            else
              m_34 = n_34;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_17, (ATerm) ATinsert(ATempty, not_null(m_34)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, m_11);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_17, (ATerm) ATinsert(ATempty, term_o_33));
      {
        t = printnl_0(t);
        {
          t = term_u_33;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm q_11 (ATerm t)
                {
                  ATerm o_34 = NULL;
                  o_34 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_w_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_34)), term_v_33));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, q_11);
                {
                  ATerm v_11 (ATerm t)
                  {
                    ATerm q_34 = NULL;
                    ATerm r_34 = NULL;
                    t = term_f_21;
                    {
                      ATerm w_11 (ATerm t)
                      {
                        t = not_null(k_34);
                        return(t);
                      }
                      t = long_description_1(t, w_11);
                      {
                        t = concat_strings_0(t);
                        {
                          r_34 = t;
                          if(((q_34 != NULL) && (q_34 != r_34)))
                            _fail(r_34);
                          else
                            q_34 = r_34;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_w_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_34)), term_z_33));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, v_11);
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
ATerm Undefined_1 (ATerm t, ATerm k_57 (ATerm))
{
  ATerm c_35 = NULL,d_35 = NULL;
  c_35 = t;
  b_35 :
  if(match_cons(c_35, sym_Undefined_1))
    {
      d_35 = ATgetArgument(c_35, 0);
      {
        ATerm g_35 = NULL,i_35 = NULL;
        ATerm h_35 = NULL;
        t = SSLgetAnnotations(not_null(c_35));
        {
          h_35 = t;
          if(((g_35 != NULL) && (g_35 != h_35)))
            _fail(h_35);
          else
            g_35 = h_35;
        }
        {
          t = not_null(d_35);
          {
            ATerm k_35 = NULL;
            t = k_57(t);
            {
              i_35 = t;
              {
                ATerm l_35 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(i_35)), not_null(g_35));
                {
                  l_35 = t;
                  if(((k_35 != NULL) && (k_35 != l_35)))
                    _fail(l_35);
                  else
                    k_35 = l_35;
                }
                t = not_null(k_35);
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
ATerm option_defined_1 (ATerm t, ATerm f_64 (ATerm))
{
  t = fetch_1(t, f_64);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm u_35 = NULL;
  u_35 = t;
  t_35 :
  if(match_cons(u_35, sym_Help_0))
    {
      ATerm w_35 = NULL,y_35 = NULL;
      ATerm c_34;
      c_34 = t;
      {
        ATerm x_35 = NULL;
        t = SSLgetAnnotations(not_null(u_35));
        {
          x_35 = t;
          if(((w_35 != NULL) && (w_35 != x_35)))
            _fail(x_35);
          else
            w_35 = x_35;
        }
      }
      t = c_34;
      {
        ATerm z_35 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(w_35));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm f_36 = NULL,g_36 = NULL,h_36 = NULL;
  f_36 = t;
  e_36 :
  if(match_cons(f_36, sym__2))
    {
      g_36 = ATgetArgument(f_36, 0);
      h_36 = ATgetArgument(f_36, 1);
      t = SSL_table_get(not_null(g_36), not_null(h_36));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm o_36 = NULL,p_36 = NULL,q_36 = NULL,r_36 = NULL;
  o_36 = t;
  n_36 :
  if(match_cons(o_36, sym__3))
    {
      p_36 = ATgetArgument(o_36, 0);
      q_36 = ATgetArgument(o_36, 1);
      r_36 = ATgetArgument(o_36, 2);
      {
        ATerm d_34;
        d_34 = t;
        {
          ATerm v_36 = NULL;
          ATerm w_36 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_36), not_null(q_36));
          {
            ATerm e_34 = t;
            int f_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(f_34);
              }
            else
              {
                t = e_34;
                t = (ATerm) ATempty;
              }
            {
              w_36 = t;
              if(((v_36 != NULL) && (v_36 != w_36)))
                _fail(w_36);
              else
                v_36 = w_36;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(p_36), not_null(q_36), (ATerm) ATinsert(CheckATermList(not_null(v_36)), not_null(r_36)));
            t = table_put_0(t);
          }
        }
        t = d_34;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm l_63 (ATerm))
{
  ATerm a_37 = NULL;
  ATerm b_37 = NULL;
  t = term_f_21;
  {
    t = l_63(t);
    {
      b_37 = t;
      if(((a_37 != NULL) && (a_37 != b_37)))
        _fail(b_37);
      else
        a_37 = b_37;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_p_33, term_q_33, not_null(a_37));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm m_37 = NULL,n_37 = NULL,o_37 = NULL;
  m_37 = t;
  g_37 :
  if(match_string(m_37, "register-usage-info"))
    {
      t = register_usage_1(t, e_0);
    }
  else
    {
      if(((ATgetType(m_37) == AT_LIST) && ((ATermList) m_37 != ATempty)))
        {
          n_37 = ATgetFirst((ATermList) m_37);
          o_37 = (ATerm) ATgetNext((ATermList) m_37);
          {
            ATerm r_37 = NULL;
            ATerm g_34;
            g_34 = t;
            {
              t = not_null(n_37);
              t = a_0(t);
            }
            t = g_34;
            {
              ATerm s_37 = NULL;
              t = term_f_21;
              {
                t = b_0(t);
                {
                  s_37 = t;
                  if(((r_37 != NULL) && (r_37 != s_37)))
                    _fail(s_37);
                  else
                    r_37 = s_37;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(o_37)), not_null(r_37));
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
  ATerm x_11 (ATerm t)
  {
    ATerm x_37 = NULL;
    x_37 = t;
    w_37 :
    if(!(match_string(x_37, "--help")))
      {
        if(!(match_string(x_37, "-h")))
          {
            if(!(match_string(x_37, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm y_11 (ATerm t)
  {
    t = term_v_31;
    return(t);
  }
  ATerm z_11 (ATerm t)
  {
    t = term_h_34;
    return(t);
  }
  t = Option_3(t, x_11, y_11, z_11);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm a_38 = NULL,b_38 = NULL,c_38 = NULL;
  a_38 = t;
  z_37 :
  if(((ATgetType(a_38) == AT_LIST) && ((ATermList) a_38 != ATempty)))
    {
      b_38 = ATgetFirst((ATermList) a_38);
      c_38 = (ATerm) ATgetNext((ATermList) a_38);
      t = (ATerm) ATinsert(CheckATermList(not_null(c_38)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(b_38)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm i_38 = NULL,j_38 = NULL,m_38 = NULL;
  i_38 = t;
  h_38 :
  if(match_cons(i_38, sym__2))
    {
      j_38 = ATgetArgument(i_38, 0);
      m_38 = ATgetArgument(i_38, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_u_24, not_null(j_38), not_null(m_38));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm j_63 (ATerm))
{
  ATerm i_34;
  i_34 = t;
  {
    ATerm e_12 (ATerm t)
    {
      t = term_j_34;
      t = j_63(t);
      return(t);
    }
    t = try_1(t, e_12);
  }
  t = i_34;
  {
    ATerm f_12 (ATerm t)
    {
      ATerm u_38 = NULL;
      ATerm p_34;
      p_34 = t;
      {
        ATerm s_38 = NULL;
        ATerm t_38 = NULL;
        t_38 = t;
        if(((s_38 != NULL) && (s_38 != t_38)))
          _fail(t_38);
        else
          s_38 = t_38;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_s_34, not_null(s_38));
          t = set_config_0(t);
        }
      }
      t = p_34;
      {
        ATerm v_38 = NULL;
        v_38 = t;
        if(((u_38 != NULL) && (u_38 != v_38)))
          _fail(v_38);
        else
          u_38 = v_38;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(u_38));
      }
      return(t);
    }
    ATerm i_12 (ATerm t)
    {
      ATerm t_34 = t;
      int u_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_34 = t;
          int w_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(w_34);
            }
          else
            {
              t = v_34;
              {
                t = j_63(t);
                t = Cons_2(t, _id, i_12);
              }
            }
          LocalPopChoice(u_34);
        }
      else
        {
          t = t_34;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, f_12, i_12);
  }
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm i_63 (ATerm))
{
  ATerm a_39 = NULL;
  ATerm x_34;
  x_34 = t;
  {
    t = term_y_34;
    t = table_put_0(t);
  }
  t = x_34;
  {
    ATerm j_12 (ATerm t)
    {
      ATerm z_34 = t;
      int a_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_63(t);
          LocalPopChoice(a_35);
        }
      else
        {
          t = z_34;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, j_12);
    {
      ATerm k_12 (ATerm t)
      {
        ATerm e_35 = t;
        int f_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_g_15;
                t = exit_0(t);
              }
            }
            LocalPopChoice(f_35);
          }
        else
          {
            t = e_35;
            {
              ATerm l_12 (ATerm t)
              {
                ATerm q_12 (ATerm t)
                {
                  ATerm b_39 = NULL;
                  b_39 = t;
                  if(((a_39 != NULL) && (a_39 != b_39)))
                    _fail(b_39);
                  else
                    a_39 = b_39;
                  return(t);
                }
                t = Undefined_1(t, q_12);
                return(t);
              }
              t = option_defined_1(t, l_12);
              {
                ATerm j_35;
                j_35 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_w_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_39)), term_m_35));
                  t = printnl_0(t);
                }
                t = j_35;
                {
                  t = system_usage_0(t);
                  {
                    t = term_y_21;
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
        ATerm n_35;
        n_35 = t;
        {
          t = term_p_33;
          t = table_destroy_0(t);
        }
        t = n_35;
      }
    }
  }
  return(t);
}
ATerm conc_0 (ATerm t)
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
          ATerm r_12 (ATerm t)
          {
            t = not_null(h_39);
            return(t);
          }
          t = at_end_1(t, r_12);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm t_46 (ATerm), ATerm u_46 (ATerm))
{
  ATerm r_39 = NULL,s_39 = NULL,t_39 = NULL;
  r_39 = t;
  q_39 :
  if(match_cons(r_39, sym__2))
    {
      s_39 = ATgetArgument(r_39, 0);
      t_39 = ATgetArgument(r_39, 1);
      {
        ATerm x_39 = NULL,z_39 = NULL;
        ATerm y_39 = NULL;
        t = SSLgetAnnotations(not_null(r_39));
        {
          y_39 = t;
          if(((x_39 != NULL) && (x_39 != y_39)))
            _fail(y_39);
          else
            x_39 = y_39;
        }
        {
          t = not_null(s_39);
          {
            ATerm b_40 = NULL;
            t = t_46(t);
            {
              z_39 = t;
              {
                t = not_null(t_39);
                {
                  ATerm d_40 = NULL;
                  t = u_46(t);
                  {
                    b_40 = t;
                    {
                      ATerm f_40 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(z_39), not_null(b_40)), not_null(x_39));
                      {
                        f_40 = t;
                        if(((d_40 != NULL) && (d_40 != f_40)))
                          _fail(f_40);
                        else
                          d_40 = f_40;
                      }
                      t = not_null(d_40);
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
ATerm at_suffix_1 (ATerm t, ATerm k_75 (ATerm))
{
  ATerm l_40 (ATerm t)
  {
    ATerm o_35 = t;
    int p_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_75(t);
        LocalPopChoice(p_35);
      }
    else
      {
        t = o_35;
        t = Cons_2(t, _id, l_40);
      }
    return(t);
  }
  t = l_40(t);
  return(t);
}
ATerm has_extension_1 (ATerm t, ATerm i_67 (ATerm))
{
  ATerm o_40 = NULL;
  ATerm q_35;
  q_35 = t;
  {
    ATerm p_40 = NULL;
    t = i_67(t);
    {
      t = explode_string_0(t);
      {
        p_40 = t;
        if(((o_40 != NULL) && (o_40 != p_40)))
          _fail(p_40);
        else
          o_40 = p_40;
      }
    }
  }
  t = q_35;
  {
    ATerm r_35;
    r_35 = t;
    {
      t = explode_string_0(t);
      {
        ATerm s_12 (ATerm t)
        {
          ATerm q_40 = NULL;
          q_40 = t;
          if(((o_40 != NULL) && (o_40 != q_40)))
            _fail(q_40);
          else
            o_40 = q_40;
          return(t);
        }
        t = at_suffix_1(t, s_12);
      }
    }
    t = r_35;
  }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm q_68 (ATerm))
{
  ATerm s_35 = t;
  int v_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(v_35);
    }
  else
    {
      t = s_35;
      {
        ATerm a_36 = t;
        int b_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_12 (ATerm t)
            {
              t = filter_1(t, q_68);
              return(t);
            }
            t = Cons_2(t, q_68, t_12);
            LocalPopChoice(b_36);
          }
        else
          {
            t = a_36;
            {
              ATerm v_40 = NULL,w_40 = NULL,x_40 = NULL;
              v_40 = t;
              u_40 :
              if(((ATgetType(v_40) == AT_LIST) && ((ATermList) v_40 != ATempty)))
                {
                  w_40 = ATgetFirst((ATermList) v_40);
                  x_40 = (ATerm) ATgetNext((ATermList) v_40);
                  {
                    t = not_null(x_40);
                    t = filter_1(t, q_68);
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
  ATerm b_41 = NULL;
  b_41 = t;
  t = SSL_ReadDir(not_null(b_41));
  return(t);
}
ATerm find_plugins_2 (ATerm t, ATerm d_59 (ATerm), ATerm e_59 (ATerm))
{
  t = d_59(t);
  {
    ATerm x_12 (ATerm t)
    {
      ATerm g_41 = NULL;
      g_41 = t;
      {
        t = readdir_0(t);
        {
          ATerm a_13 (ATerm t)
          {
            ATerm i_41 = NULL;
            t = has_extension_1(t, e_59);
            {
              ATerm j_41 = NULL;
              j_41 = t;
              if(((i_41 != NULL) && (i_41 != j_41)))
                _fail(j_41);
              else
                i_41 = j_41;
              {
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(i_41)), term_c_36), not_null(g_41));
                t = concat_strings_0(t);
              }
            }
            return(t);
          }
          t = filter_1(t, a_13);
        }
      }
      return(t);
    }
    t = filter_1(t, x_12);
    t = concat_0(t);
  }
  return(t);
}
ATerm import_config_files_1 (ATerm t, ATerm g_59 (ATerm))
{
  ATerm d_36;
  d_36 = t;
  {
    t = g_59(t);
    {
      ATerm b_13 (ATerm t)
      {
        ATerm n_41 = NULL;
        ATerm c_13 (ATerm t)
        {
          ATerm f_13 (ATerm t)
          {
            t = term_i_36;
            return(t);
          }
          t = debug_1(t, f_13);
          return(t);
        }
        t = if_verbose2_1(t, c_13);
        {
          t = ReadFromFile_0(t);
          {
            ATerm o_41 = NULL;
            o_41 = t;
            if(((n_41 != NULL) && (n_41 != o_41)))
              _fail(o_41);
            else
              n_41 = o_41;
            {
              t = (ATerm) ATmakeAppl(sym__2, term_u_24, not_null(n_41));
              t = table_putlist_0(t);
            }
          }
        }
        return(t);
      }
      t = map_1(t, b_13);
    }
  }
  t = d_36;
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm x_41 = NULL;
  ATerm z_41 = NULL;
  x_41 = t;
  {
    ATerm j_36;
    j_36 = t;
    {
      ATerm a_42 = NULL;
      t = term_k_36;
      {
        a_42 = t;
        if(((z_41 != NULL) && (z_41 != a_42)))
          _fail(a_42);
        else
          z_41 = a_42;
      }
    }
    t = j_36;
    {
      t = SSL_open_file(not_null(x_41), not_null(z_41));
      t = SSL_close_file(not_null(x_41));
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm g_75 (ATerm))
{
  ATerm d_42 (ATerm t)
  {
    ATerm l_36 = t;
    int m_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, d_42);
        LocalPopChoice(m_36);
      }
    else
      {
        t = l_36;
        {
          t = Nil_0(t);
          t = g_75(t);
        }
      }
    return(t);
  }
  t = d_42(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm s_36 = t;
  int t_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(t_36);
    }
  else
    {
      t = s_36;
      {
        ATerm g_42 = NULL,h_42 = NULL,i_42 = NULL;
        g_42 = t;
        f_42 :
        if(((ATgetType(g_42) == AT_LIST) && ((ATermList) g_42 != ATempty)))
          {
            h_42 = ATgetFirst((ATermList) g_42);
            i_42 = (ATerm) ATgetNext((ATermList) g_42);
            {
              t = not_null(h_42);
              {
                ATerm g_13 (ATerm t)
                {
                  t = not_null(i_42);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, g_13);
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
ATerm fetch_1 (ATerm t, ATerm a_75 (ATerm))
{
  ATerm n_42 (ATerm t)
  {
    ATerm u_36 = t;
    int x_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, a_75, _id);
        LocalPopChoice(x_36);
      }
    else
      {
        t = u_36;
        t = Cons_2(t, _id, n_42);
      }
    return(t);
  }
  t = n_42(t);
  return(t);
}
ATerm fetch_elem_1 (ATerm t, ATerm c_75 (ATerm))
{
  ATerm p_42 = NULL;
  ATerm h_13 (ATerm t)
  {
    ATerm q_42 = NULL;
    t = c_75(t);
    {
      q_42 = t;
      if(((p_42 != NULL) && (p_42 != q_42)))
        _fail(q_42);
      else
        p_42 = q_42;
    }
    return(t);
  }
  t = fetch_1(t, h_13);
  t = not_null(p_42);
  return(t);
}
ATerm find_config_file_2 (ATerm t, ATerm v_58 (ATerm), ATerm w_58 (ATerm))
{
  ATerm y_36 = t;
  int z_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_58(t);
      {
        ATerm m_13 (ATerm t)
        {
          ATerm u_42 = NULL,w_42 = NULL;
          ATerm c_37;
          c_37 = t;
          {
            ATerm v_42 = NULL;
            v_42 = t;
            if(((u_42 != NULL) && (u_42 != v_42)))
              _fail(v_42);
            else
              u_42 = v_42;
          }
          t = c_37;
          {
            ATerm x_42 = NULL;
            t = w_58(t);
            {
              x_42 = t;
              if(((w_42 != NULL) && (w_42 != x_42)))
                _fail(x_42);
              else
                w_42 = x_42;
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(w_42)), term_c_36), not_null(u_42));
              {
                t = concat_strings_0(t);
                t = file_exists_0(t);
              }
            }
          }
          return(t);
        }
        t = fetch_elem_1(t, m_13);
      }
      LocalPopChoice(z_36);
    }
  else
    {
      t = y_36;
      {
        t = term_d_37;
        {
          t = debug_1(t, w_58);
          _fail(t);
        }
      }
    }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm c_43 = NULL,d_43 = NULL,e_43 = NULL;
  ATerm e_37;
  e_37 = t;
  {
    ATerm f_43 = NULL,g_43 = NULL,h_43 = NULL,i_43 = NULL;
    f_43 = t;
    b_43 :
    if(match_cons(f_43, sym__3))
      {
        g_43 = ATgetArgument(f_43, 0);
        h_43 = ATgetArgument(f_43, 1);
        i_43 = ATgetArgument(f_43, 2);
        {
          if(((c_43 != NULL) && (c_43 != g_43)))
            _fail(g_43);
          else
            c_43 = g_43;
          {
            if(((d_43 != NULL) && (d_43 != h_43)))
              _fail(h_43);
            else
              d_43 = h_43;
            {
              if(((e_43 != NULL) && (e_43 != i_43)))
                _fail(i_43);
              else
                e_43 = i_43;
              t = SSL_table_put(not_null(c_43), not_null(d_43), not_null(e_43));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = e_37;
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm o_43 = NULL;
  o_43 = t;
  n_43 :
  if(((ATermList) o_43 == ATempty))
    {
      {
        ATerm q_43 = NULL,s_43 = NULL;
        ATerm f_37;
        f_37 = t;
        {
          ATerm r_43 = NULL;
          t = SSLgetAnnotations(not_null(o_43));
          {
            r_43 = t;
            if(((q_43 != NULL) && (q_43 != r_43)))
              _fail(r_43);
            else
              q_43 = r_43;
          }
        }
        t = f_37;
        {
          ATerm t_43 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(q_43));
          {
            t_43 = t;
            if(((s_43 != NULL) && (s_43 != t_43)))
              _fail(t_43);
            else
              s_43 = t_43;
          }
          t = not_null(s_43);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm map_1 (ATerm t, ATerm s_74 (ATerm))
{
  ATerm x_43 (ATerm t)
  {
    ATerm h_37 = t;
    int i_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(i_37);
      }
    else
      {
        t = h_37;
        t = Cons_2(t, s_74, x_43);
      }
    return(t);
  }
  t = x_43(t);
  return(t);
}
ATerm table_putlist_0 (ATerm t)
{
  ATerm c_44 = NULL,d_44 = NULL,e_44 = NULL;
  c_44 = t;
  b_44 :
  if(match_cons(c_44, sym__2))
    {
      d_44 = ATgetArgument(c_44, 0);
      e_44 = ATgetArgument(c_44, 1);
      {
        t = not_null(e_44);
        {
          ATerm n_13 (ATerm t)
          {
            ATerm h_44 = NULL,i_44 = NULL,j_44 = NULL;
            h_44 = t;
            a_44 :
            if(match_cons(h_44, sym__2))
              {
                i_44 = ATgetArgument(h_44, 0);
                j_44 = ATgetArgument(h_44, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(d_44), not_null(i_44), not_null(j_44));
                  t = table_put_0(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, n_13);
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
  ATerm q_44 = NULL;
  q_44 = t;
  t = SSL_ReadFromFile(not_null(q_44));
  return(t);
}
ATerm import_config_file_1 (ATerm t, ATerm f_59 (ATerm))
{
  ATerm j_37;
  j_37 = t;
  {
    ATerm u_44 = NULL;
    t = f_59(t);
    {
      ATerm o_13 (ATerm t)
      {
        ATerm q_13 (ATerm t)
        {
          t = term_i_36;
          return(t);
        }
        t = debug_1(t, q_13);
        return(t);
      }
      t = if_verbose2_1(t, o_13);
      {
        t = ReadFromFile_0(t);
        {
          ATerm v_44 = NULL;
          v_44 = t;
          if(((u_44 != NULL) && (u_44 != v_44)))
            _fail(v_44);
          else
            u_44 = v_44;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_u_24, not_null(u_44));
            t = table_putlist_0(t);
          }
        }
      }
    }
  }
  t = j_37;
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm b_45 = NULL;
  b_45 = t;
  t = SSL_implode_string(not_null(b_45));
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm j_45 = NULL;
  j_45 = t;
  t = SSL_explode_string(not_null(j_45));
  return(t);
}
ATerm get_path_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm k_37 = t;
    int l_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_45 (ATerm t)
        {
          ATerm p_37 = t;
          int q_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, o_45);
              LocalPopChoice(q_37);
            }
          else
            {
              t = p_37;
              {
                ATerm r_13 (ATerm t)
                {
                  ATerm n_45 = NULL;
                  n_45 = t;
                  m_45 :
                  if(!(match_int(n_45, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                ATerm s_13 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = Cons_2(t, r_13, s_13);
              }
            }
          return(t);
        }
        t = o_45(t);
        LocalPopChoice(l_37);
      }
    else
      {
        t = k_37;
        t = (ATerm) ATempty;
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm b_58 (ATerm), ATerm c_58 (ATerm))
{
  ATerm v_45 = NULL,w_45 = NULL,x_45 = NULL;
  v_45 = t;
  u_45 :
  if(((ATgetType(v_45) == AT_LIST) && ((ATermList) v_45 != ATempty)))
    {
      w_45 = ATgetFirst((ATermList) v_45);
      x_45 = (ATerm) ATgetNext((ATermList) v_45);
      {
        ATerm b_46 = NULL,s_46 = NULL;
        ATerm m_46 = NULL;
        t = SSLgetAnnotations(not_null(v_45));
        {
          m_46 = t;
          if(((b_46 != NULL) && (b_46 != m_46)))
            _fail(m_46);
          else
            b_46 = m_46;
        }
        {
          t = not_null(w_45);
          {
            ATerm w_46 = NULL;
            t = b_58(t);
            {
              s_46 = t;
              {
                t = not_null(x_45);
                {
                  ATerm y_46 = NULL;
                  t = c_58(t);
                  {
                    w_46 = t;
                    {
                      ATerm z_46 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(w_46)), not_null(s_46)), not_null(b_46));
                      {
                        z_46 = t;
                        if(((y_46 != NULL) && (y_46 != z_46)))
                          _fail(z_46);
                        else
                          y_46 = z_46;
                      }
                      t = not_null(y_46);
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
  ATerm l_47 = NULL,n_47 = NULL,p_47 = NULL;
  ATerm t_37;
  t_37 = t;
  {
    ATerm t_13 (ATerm t)
    {
      ATerm m_47 = NULL;
      t = get_path_0(t);
      {
        m_47 = t;
        if(((l_47 != NULL) && (l_47 != m_47)))
          _fail(m_47);
        else
          l_47 = m_47;
      }
      return(t);
    }
    t = Cons_2(t, t_13, _id);
  }
  t = t_37;
  {
    ATerm u_37;
    u_37 = t;
    {
      ATerm o_47 = NULL;
      t = get_conf_pkgdatadir();
      {
        o_47 = t;
        if(((n_47 != NULL) && (n_47 != o_47)))
          _fail(o_47);
        else
          n_47 = o_47;
      }
    }
    t = u_37;
    {
      ATerm v_37;
      v_37 = t;
      {
        ATerm q_47 = NULL;
        t = get_conf_datadir();
        {
          q_47 = t;
          if(((p_47 != NULL) && (p_47 != q_47)))
            _fail(q_47);
          else
            p_47 = q_47;
        }
      }
      t = v_37;
      {
        ATerm y_13 (ATerm t)
        {
          ATerm z_13 (ATerm t)
          {
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_47)), not_null(l_47));
            return(t);
          }
          ATerm a_14 (ATerm t)
          {
            t = term_y_37;
            return(t);
          }
          t = find_config_file_2(t, z_13, a_14);
          return(t);
        }
        t = import_config_file_1(t, y_13);
        {
          ATerm b_14 (ATerm t)
          {
            ATerm c_14 (ATerm t)
            {
              ATerm r_47 = NULL;
              ATerm s_47 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(p_47), term_d_38);
              {
                t = conc_strings_0(t);
                {
                  s_47 = t;
                  if(((r_47 != NULL) && (r_47 != s_47)))
                    _fail(s_47);
                  else
                    r_47 = s_47;
                }
              }
              t = (ATerm) ATinsert(ATempty, not_null(r_47));
              return(t);
            }
            ATerm d_14 (ATerm t)
            {
              t = term_e_38;
              return(t);
            }
            t = find_plugins_2(t, c_14, d_14);
            return(t);
          }
          t = import_config_files_1(t, b_14);
          {
            t = parse_options_1(t, sc_options_0);
            {
              ATerm m_14 (ATerm t)
              {
                ATerm t_47 = NULL;
                t = term_z_31;
                {
                  t = get_config_0(t);
                  {
                    ATerm u_47 = NULL;
                    t = term_f_38;
                    {
                      t = get_config_0(t);
                      {
                        u_47 = t;
                        if(((t_47 != NULL) && (t_47 != u_47)))
                          _fail(u_47);
                        else
                          t_47 = u_47;
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_g_38, (ATerm) ATinsert(ATempty, not_null(t_47)));
                      {
                        t = call_0(t);
                        {
                          t = term_g_15;
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
                ATerm n_14 (ATerm t)
                {
                  t = term_e_32;
                  {
                    t = get_config_0(t);
                    {
                      t = sc_version_0(t);
                      {
                        t = term_g_15;
                        t = exit_0(t);
                      }
                    }
                  }
                  return(t);
                }
                t = try_1(t, n_14);
                {
                  ATerm k_38 = t;
                  int l_38 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm v_47 = NULL;
                      ATerm w_47 = NULL;
                      t = term_g_22;
                      {
                        t = get_config_0(t);
                        {
                          t = basename_0(t);
                          {
                            w_47 = t;
                            if(((v_47 != NULL) && (v_47 != w_47)))
                              _fail(w_47);
                            else
                              v_47 = w_47;
                          }
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym__2, not_null(v_47), term_f_17);
                      LocalPopChoice(l_38);
                    }
                  else
                    {
                      t = k_38;
                      {
                        t = (ATerm) ATinsert(ATempty, term_n_38);
                        t = fatal_error_0(t);
                      }
                    }
                  {
                    t = sc_announce_0(t);
                    {
                      ATerm o_14 (ATerm t)
                      {
                        ATerm o_38;
                        o_38 = t;
                        {
                          t = term_g_22;
                          {
                            t = get_config_0(t);
                            {
                              ATerm p_14 (ATerm t)
                              {
                                t = term_p_38;
                                return(t);
                              }
                              t = debug_1(t, p_14);
                            }
                          }
                        }
                        t = o_38;
                        return(t);
                      }
                      t = if_verbose1_1(t, o_14);
                    }
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
ATerm proto_sc_0 (ATerm t)
{
  ATerm q_38 = t;
  int r_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = command_line_options_0(t);
      {
        ATerm q_14 (ATerm t)
        {
          ATerm r_14 (ATerm t)
          {
            ATerm g_48 = NULL;
            ATerm h_48 = NULL;
            h_48 = t;
            if(((g_48 != NULL) && (g_48 != h_48)))
              _fail(h_48);
            else
              g_48 = h_48;
            {
              t = (ATerm) ATmakeAppl(sym__2, term_w_17, (ATerm) ATinsert(CheckATermList(not_null(g_48)), term_w_38));
              t = printnl_0(t);
            }
            return(t);
          }
          t = if_verbose1_1(t, r_14);
          return(t);
        }
        t = profile_p__2(t, q_14, compile_0);
        {
          ATerm s_14 (ATerm t)
          {
            ATerm i_48 = NULL;
            ATerm j_48 = NULL;
            t = run_time_0(t);
            {
              j_48 = t;
              if(((i_48 != NULL) && (i_48 != j_48)))
                _fail(j_48);
              else
                i_48 = j_48;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, term_w_17, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_38), not_null(i_48)), term_x_38));
              t = printnl_0(t);
            }
            return(t);
          }
          t = if_verbose2_1(t, s_14);
          {
            t = term_g_15;
            t = exit_0(t);
          }
        }
      }
      LocalPopChoice(r_38);
    }
  else
    {
      t = q_38;
      {
        ATerm k_48 = NULL;
        ATerm l_48 = NULL;
        t = run_time_0(t);
        {
          l_48 = t;
          if(((k_48 != NULL) && (k_48 != l_48)))
            _fail(l_48);
          else
            k_48 = l_48;
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_w_17, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_38), not_null(k_48)), term_z_38));
          {
            t = printnl_0(t);
            {
              t = term_y_21;
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
