#include <srts/stratego.h>
#include <srts/stratego-lib.h>
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
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_EpochTime_1;
Symbol sym_ComponentTime_3;
Symbol sym_DayTime_3;
Symbol sym_Date_3;
Symbol sym_Dupl_2;
Symbol sym_January_0;
Symbol sym_February_0;
Symbol sym_March_0;
Symbol sym_April_0;
Symbol sym_May_0;
Symbol sym_June_0;
Symbol sym_July_0;
Symbol sym_August_0;
Symbol sym_September_0;
Symbol sym_October_0;
Symbol sym_November_0;
Symbol sym_December_0;
Symbol sym_Sunday_0;
Symbol sym_Monday_0;
Symbol sym_Tuesday_0;
Symbol sym_Wednesday_0;
Symbol sym_Thursday_0;
Symbol sym_Friday_0;
Symbol sym_Saturday_0;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_EpochTime_1 = ATmakeSymbol("EpochTime", 1, ATfalse);
  ATprotectSymbol(sym_EpochTime_1);
  sym_ComponentTime_3 = ATmakeSymbol("ComponentTime", 3, ATfalse);
  ATprotectSymbol(sym_ComponentTime_3);
  sym_DayTime_3 = ATmakeSymbol("DayTime", 3, ATfalse);
  ATprotectSymbol(sym_DayTime_3);
  sym_Date_3 = ATmakeSymbol("Date", 3, ATfalse);
  ATprotectSymbol(sym_Date_3);
  sym_Dupl_2 = ATmakeSymbol("Dupl", 2, ATfalse);
  ATprotectSymbol(sym_Dupl_2);
  sym_January_0 = ATmakeSymbol("January", 0, ATfalse);
  ATprotectSymbol(sym_January_0);
  sym_February_0 = ATmakeSymbol("February", 0, ATfalse);
  ATprotectSymbol(sym_February_0);
  sym_March_0 = ATmakeSymbol("March", 0, ATfalse);
  ATprotectSymbol(sym_March_0);
  sym_April_0 = ATmakeSymbol("April", 0, ATfalse);
  ATprotectSymbol(sym_April_0);
  sym_May_0 = ATmakeSymbol("May", 0, ATfalse);
  ATprotectSymbol(sym_May_0);
  sym_June_0 = ATmakeSymbol("June", 0, ATfalse);
  ATprotectSymbol(sym_June_0);
  sym_July_0 = ATmakeSymbol("July", 0, ATfalse);
  ATprotectSymbol(sym_July_0);
  sym_August_0 = ATmakeSymbol("August", 0, ATfalse);
  ATprotectSymbol(sym_August_0);
  sym_September_0 = ATmakeSymbol("September", 0, ATfalse);
  ATprotectSymbol(sym_September_0);
  sym_October_0 = ATmakeSymbol("October", 0, ATfalse);
  ATprotectSymbol(sym_October_0);
  sym_November_0 = ATmakeSymbol("November", 0, ATfalse);
  ATprotectSymbol(sym_November_0);
  sym_December_0 = ATmakeSymbol("December", 0, ATfalse);
  ATprotectSymbol(sym_December_0);
  sym_Sunday_0 = ATmakeSymbol("Sunday", 0, ATfalse);
  ATprotectSymbol(sym_Sunday_0);
  sym_Monday_0 = ATmakeSymbol("Monday", 0, ATfalse);
  ATprotectSymbol(sym_Monday_0);
  sym_Tuesday_0 = ATmakeSymbol("Tuesday", 0, ATfalse);
  ATprotectSymbol(sym_Tuesday_0);
  sym_Wednesday_0 = ATmakeSymbol("Wednesday", 0, ATfalse);
  ATprotectSymbol(sym_Wednesday_0);
  sym_Thursday_0 = ATmakeSymbol("Thursday", 0, ATfalse);
  ATprotectSymbol(sym_Thursday_0);
  sym_Friday_0 = ATmakeSymbol("Friday", 0, ATfalse);
  ATprotectSymbol(sym_Friday_0);
  sym_Saturday_0 = ATmakeSymbol("Saturday", 0, ATfalse);
  ATprotectSymbol(sym_Saturday_0);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  init_constant_terms();
}
ATerm term_f_22;
ATerm term_e_22;
ATerm term_v_21;
ATerm term_s_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_v_20;
ATerm term_a_17;
ATerm term_t_16;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_i_13;
ATerm term_f_13;
ATerm term_y_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_p_12;
ATerm term_d_12;
ATerm term_t_11;
ATerm term_r_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_e_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_q_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_t_8;
ATerm term_r_8;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_e_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_x_7;
ATerm term_w_7;
ATerm term_t_7;
ATerm term_r_7;
ATerm term_p_7;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_i_7;
ATerm term_c_7;
ATerm term_b_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_x_6;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_u_6;
ATerm term_t_6;
ATerm term_s_6;
ATerm term_r_6;
ATerm term_q_6;
ATerm term_p_6;
ATerm term_o_6;
ATerm term_n_6;
ATerm term_m_6;
ATerm term_l_6;
ATerm term_b_6;
ATerm term_a_6;
ATerm term_z_5;
ATerm term_y_5;
ATerm term_x_5;
ATerm term_w_5;
ATerm term_q_5;
ATerm term_p_5;
ATerm term_o_5;
ATerm term_m_5;
ATerm term_l_5;
ATerm term_k_5;
ATerm term_j_5;
ATerm term_e_5;
ATerm term_b_5;
ATerm term_a_5;
ATerm term_z_4;
ATerm term_y_4;
ATerm term_x_4;
ATerm term_w_4;
ATerm term_v_4;
ATerm term_s_4;
ATerm term_o_4;
ATerm term_n_4;
void init_constant_terms (void)
{
  ATprotect(&(term_n_4));
  term_n_4 = (ATerm) ATmakeAppl(ATmakeSymbol("test12a", 0, ATtrue));
  ATprotect(&(term_o_4));
  term_o_4 = (ATerm) ATmakeAppl(ATmakeSymbol("test4", 0, ATtrue));
  ATprotect(&(term_s_4));
  term_s_4 = (ATerm) ATmakeAppl(ATmakeSymbol("Foo", 0, ATtrue));
  ATprotect(&(term_v_4));
  term_v_4 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_4);
  ATprotect(&(term_w_4));
  term_w_4 = (ATerm) ATmakeAppl(ATmakeSymbol("p", 0, ATtrue));
  ATprotect(&(term_x_4));
  term_x_4 = (ATerm) ATmakeAppl(sym_Var_1, term_w_4);
  ATprotect(&(term_y_4));
  term_y_4 = (ATerm) ATmakeAppl(sym_Match_1, term_x_4);
  ATprotect(&(term_z_4));
  term_z_4 = (ATerm) ATmakeAppl(sym_Build_1, term_x_4);
  ATprotect(&(term_a_5));
  term_a_5 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_b_5));
  term_b_5 = (ATerm) ATmakeAppl(ATmakeSymbol("test11a", 0, ATtrue));
  ATprotect(&(term_e_5));
  term_e_5 = (ATerm) ATmakeAppl(ATmakeSymbol("P", 0, ATtrue));
  ATprotect(&(term_j_5));
  term_j_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_k_5));
  term_k_5 = (ATerm) ATmakeAppl(ATmakeSymbol("X", 0, ATtrue));
  ATprotect(&(term_l_5));
  term_l_5 = (ATerm) ATmakeAppl(sym_Var_1, term_k_5);
  ATprotect(&(term_m_5));
  term_m_5 = (ATerm) ATmakeAppl(ATmakeSymbol("L", 0, ATtrue));
  ATprotect(&(term_o_5));
  term_o_5 = (ATerm) ATmakeAppl(sym_Var_1, term_m_5);
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(ATmakeSymbol("YS", 0, ATtrue));
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Y", 0, ATtrue));
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(sym_Var_1, term_q_5);
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(sym_Var_1, term_p_5);
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(ATmakeSymbol("test11b", 0, ATtrue));
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(ATmakeSymbol("LSort", 0, ATtrue));
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(ATmakeSymbol("S", 0, ATtrue));
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, term_a_6);
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol("L'", 0, ATtrue));
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(sym_Var_1, term_l_6);
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(sym_Build_1, term_o_5);
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("at-suffix", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_6);
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_6);
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(sym_Call_2, term_q_6, (ATerm) ATempty);
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Tup", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(sym_Build_1, term_x_5);
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(sym_Match_1, term_m_6);
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("test10", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("F", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("q", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("H", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("G", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("a", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(sym_Str_1, term_a_7);
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(sym_Var_1, term_x_6);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("K", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("b", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(sym_Str_1, term_j_7);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("q'", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(sym_Var_1, term_l_7);
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("test9a", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Q", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_t_7);
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(sym_Call_2, term_w_7, (ATerm) ATempty);
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(sym_Match_1, term_p_7);
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(sym_Seq_2, term_x_7, term_y_7);
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(sym_Seq_2, term_z_4, term_z_7);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("test9b", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("test8a", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("test8b", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("test7a", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("test7b", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("test7c", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("test6a", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("R", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_8);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(sym_Call_2, term_n_8, (ATerm) ATempty);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(sym_LChoice_2, term_x_7, term_r_8);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym_Seq_2, term_t_8, term_y_4);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("test6b", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(sym_Seq_2, term_r_8, term_y_4);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(sym_LChoice_2, term_x_7, term_y_8);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("test5a", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("test5b", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("test4a", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("v", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_Var_1, term_v_9);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym_Match_1, term_w_9);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SomeVar", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym_Str_1, term_d_10);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym_Build_1, term_w_9);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(sym_Seq_2, term_i_10, term_x_7);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("test4b", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_App_2, term_x_7, term_w_9);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("test4c", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("test3a", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym_Match_1, term_c_7);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("test3b", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("p'", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym_Var_1, term_s_10);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("test2a", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("test2b", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym_Defined_1, term_e_11);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Bound", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Context", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in overlay ", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in rule ", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Error in definition ", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("variable ", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol(": used, but not bound", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_Defined_1, term_w_14);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("  succeeded (should fail)", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("test1", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("successes: ", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("failures: ", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym__2, term_s_21, term_s_21);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("test suite: ", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("use-def-test", 0, ATtrue));
}
ATerm test12_0 (ATerm);
ATerm test11_0 (ATerm);
ATerm Overlays_1 (ATerm, ATerm e_54 (ATerm));
ATerm test10_0 (ATerm);
ATerm test9_0 (ATerm);
ATerm test8_0 (ATerm);
ATerm test7_0 (ATerm);
ATerm test6_0 (ATerm);
ATerm test5_0 (ATerm);
ATerm test4_0 (ATerm);
ATerm test3_0 (ATerm);
ATerm apply_test_3 (ATerm, ATerm w_87 (ATerm), ATerm x_87 (ATerm), ATerm y_87 (ATerm));
ATerm test2_0 (ATerm);
ATerm Nil_0 (ATerm);
ATerm DefineBound_0 (ATerm);
ATerm overlay_ud_0 (ATerm);
ATerm rdef_ud_0 (ATerm);
ATerm guardedlchoice_1 (ATerm, ATerm o_64 (ATerm));
ATerm GuardedLChoice_3 (ATerm, ATerm p_57 (ATerm), ATerm q_57 (ATerm), ATerm r_57 (ATerm));
ATerm lchoice_1 (ATerm, ATerm n_64 (ATerm));
ATerm LChoice_2 (ATerm, ATerm n_57 (ATerm), ATerm o_57 (ATerm));
ATerm try_1 (ATerm, ATerm g_73 (ATerm));
ATerm isect_Bound_0 (ATerm);
ATerm table_putlist_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm restore_Bound_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm save_Bound_0 (ATerm);
ATerm abstract_choice_2 (ATerm, ATerm k_64 (ATerm), ATerm l_64 (ATerm));
ATerm choice_1 (ATerm, ATerm m_64 (ATerm));
ATerm Choice_2 (ATerm, ATerm l_57 (ATerm), ATerm m_57 (ATerm));
ATerm error_0 (ATerm);
ATerm Context_0 (ATerm);
ATerm Unbound_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm m_70 (ATerm));
ATerm Bound_0 (ATerm);
ATerm use_vars_0 (ATerm);
ATerm Rule_3 (ATerm, ATerm o_54 (ATerm), ATerm p_54 (ATerm), ATerm q_54 (ATerm));
ATerm RootApp_1 (ATerm, ATerm j_55 (ATerm));
ATerm App_2 (ATerm, ATerm h_55 (ATerm), ATerm i_55 (ATerm));
ATerm table_replace_0 (ATerm);
ATerm override_key_1 (ATerm, ATerm l_70 (ATerm));
ATerm Binding_0 (ATerm);
ATerm Var_1 (ATerm, ATerm a_0 (ATerm));
ATerm bind_vars_0 (ATerm);
ATerm Match_1 (ATerm, ATerm s_56 (ATerm));
ATerm Build_1 (ATerm, ATerm t_56 (ATerm));
ATerm VarScope_1 (ATerm, ATerm j_64 (ATerm));
ATerm unbound_vars_0 (ATerm);
ATerm sdef_ud_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm assert_1 (ATerm, ATerm k_70 (ATerm));
ATerm DefineUnbound_0 (ATerm);
ATerm DynamicRules_1 (ATerm, ATerm c_55 (ATerm));
ATerm Scope_2 (ATerm, ATerm w_56 (ATerm), ATerm x_56 (ATerm));
ATerm tboundin_3 (ATerm, ATerm b_84 (ATerm), ATerm c_84 (ATerm), ATerm d_84 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_1 (ATerm, ATerm p_66 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm b_69 (ATerm), ATerm c_69 (ATerm), ATerm d_69 (ATerm));
ATerm crush_3 (ATerm, ATerm g_66 (ATerm), ATerm h_66 (ATerm), ATerm i_66 (ATerm));
ATerm eq_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm k_67 (ATerm));
ATerm HdMember_p__2 (ATerm, ATerm t_66 (ATerm), ATerm u_66 (ATerm));
ATerm diff_1 (ATerm, ATerm l_66 (ATerm));
ATerm diff_0 (ATerm);
ATerm split_2 (ATerm, ATerm q_82 (ATerm), ATerm r_82 (ATerm));
ATerm free_vars_3 (ATerm, ATerm d_87 (ATerm), ATerm e_87 (ATerm), ATerm f_87 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm map_1 (ATerm, ATerm b_67 (ATerm));
ATerm end_scope_1 (ATerm, ATerm h_70 (ATerm));
ATerm restore_always_2 (ATerm, ATerm v_73 (ATerm), ATerm w_73 (ATerm));
ATerm table_put_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm begin_scope_1 (ATerm, ATerm g_70 (ATerm));
ATerm scope_2 (ATerm, ATerm i_70 (ATerm), ATerm j_70 (ATerm));
ATerm def_use_def_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm b_54 (ATerm), ATerm c_54 (ATerm));
ATerm filter_1 (ATerm, ATerm g_76 (ATerm));
ATerm defs_use_def_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm g_54 (ATerm));
ATerm debug_0 (ATerm);
ATerm record_failure_0 (ATerm);
ATerm add_0 (ATerm);
ATerm record_success_0 (ATerm);
ATerm do_test_2 (ATerm, ATerm o_87 (ATerm), ATerm p_87 (ATerm));
ATerm apply_and_fail_4 (ATerm, ATerm g_88 (ATerm), ATerm h_88 (ATerm), ATerm i_88 (ATerm), ATerm j_88 (ATerm));
ATerm apply_and_fail_3 (ATerm, ATerm d_88 (ATerm), ATerm e_88 (ATerm), ATerm f_88 (ATerm));
ATerm test1_0 (ATerm);
ATerm check_for_failures_0 (ATerm);
ATerm _2 (ATerm, ATerm s_52 (ATerm), ATerm t_52 (ATerm));
ATerm report_test_0 (ATerm);
ATerm init_record_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm w_76 (ATerm));
ATerm test_suite_2 (ATerm, ATerm m_87 (ATerm), ATerm n_87 (ATerm));
ATerm use_def_test_0 (ATerm);
ATerm main_0 (ATerm);
ATerm test12_0 (ATerm t)
{
  ATerm c_0 (ATerm t)
  {
    t = term_n_4;
    return(t);
  }
  ATerm d_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_RDef_3, term_o_4, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_StratRule_3, (ATerm)ATmakeAppl(sym_Call_2, term_v_4, (ATerm) ATinsert(ATempty, term_y_4)), (ATerm)ATmakeAppl(sym_Call_2, term_v_4, (ATerm) ATinsert(ATempty, term_z_4)), term_a_5));
    return(t);
  }
  t = apply_test_3(t, c_0, def_use_def_0, d_0);
  return(t);
}
ATerm test11_0 (ATerm t)
{
  ATerm e_0 (ATerm t)
  {
    t = term_b_5;
    return(t);
  }
  ATerm g_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SDef_3, term_e_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_j_5, (ATerm) ATinsert(ATinsert(ATempty, term_o_5), term_l_5))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_p_5), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_j_5, (ATerm) ATinsert(ATinsert(ATempty, term_x_5), term_w_5)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_j_5, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_j_5, (ATerm) ATinsert(ATinsert(ATempty, term_o_5), term_l_5))), term_w_5))))));
    return(t);
  }
  t = apply_test_3(t, e_0, def_use_def_0, g_0);
  {
    ATerm i_0 (ATerm t)
    {
      t = term_y_5;
      return(t);
    }
    ATerm k_0 (ATerm t)
    {
      t = Strategies_1(t, defs_use_def_0);
      return(t);
    }
    ATerm l_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDef_3, term_z_5, (ATerm)ATinsert(ATempty, term_b_6), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_j_5, (ATerm) ATinsert(ATinsert(ATempty, term_o_5), term_l_5)), (ATerm)ATmakeAppl(sym_Op_2, term_j_5, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_j_5, (ATerm) ATinsert(ATinsert(ATempty, term_m_6), term_l_5))), term_w_5)), (ATerm) ATmakeAppl(sym_Seq_2, term_n_6, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Call_2, term_p_6, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_p_5), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_j_5, (ATerm) ATinsert(ATinsert(ATempty, term_x_5), term_w_5))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, term_r_6, (ATerm) ATmakeAppl(sym_Op_2, term_s_6, (ATerm) ATinsert(ATinsert(ATempty, term_w_5), term_l_5)))), term_t_6))))), term_u_6))))));
      return(t);
    }
    t = apply_test_3(t, i_0, k_0, l_0);
  }
  return(t);
}
ATerm Overlays_1 (ATerm t, ATerm e_54 (ATerm))
{
  ATerm l_4 = NULL,m_4 = NULL;
  l_4 = t;
  k_4 :
  if(match_cons(l_4, sym_Overlays_1))
    {
      m_4 = ATgetArgument(l_4, 0);
      {
        ATerm p_4 = NULL,r_4 = NULL;
        ATerm q_4 = NULL;
        t = SSLgetAnnotations(not_null(l_4));
        {
          q_4 = t;
          if(((p_4 != NULL) && (p_4 != q_4)))
            _fail(q_4);
          else
            p_4 = q_4;
        }
        {
          t = not_null(m_4);
          {
            ATerm t_4 = NULL;
            t = e_54(t);
            {
              r_4 = t;
              {
                ATerm u_4 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Overlays_1, not_null(r_4)), not_null(p_4));
                {
                  u_4 = t;
                  if(((t_4 != NULL) && (t_4 != u_4)))
                    _fail(u_4);
                  else
                    t_4 = u_4;
                }
                t = not_null(t_4);
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
ATerm test10_0 (ATerm t)
{
  ATerm n_0 (ATerm t)
  {
    t = term_v_6;
    return(t);
  }
  ATerm o_0 (ATerm t)
  {
    t = Overlays_1(t, defs_use_def_0);
    return(t);
  }
  ATerm p_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Overlay_3, term_m_5, (ATerm)ATinsert(ATinsert(ATempty, term_x_6), term_w_4), (ATerm) ATmakeAppl(sym_Op_2, term_i_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_7), term_k_7), term_x_4)))), (ATerm) ATmakeAppl(sym_Overlay_3, term_w_6, (ATerm)ATinsert(ATinsert(ATempty, term_x_6), term_w_4), (ATerm) ATmakeAppl(sym_Op_2, term_y_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), (ATerm) ATmakeAppl(sym_Op_2, term_z_6, (ATerm) ATinsert(ATinsert(ATempty, term_b_7), term_x_4)))))));
    return(t);
  }
  t = apply_and_fail_3(t, n_0, o_0, p_0);
  return(t);
}
ATerm test9_0 (ATerm t)
{
  ATerm r_0 (ATerm t)
  {
    t = term_r_7;
    return(t);
  }
  ATerm s_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SDef_3, term_e_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_x_4)), (ATerm)ATmakeAppl(sym_Op_2, term_y_6, (ATerm) ATinsert(ATinsert(ATempty, term_p_7), term_c_7)), term_a_8)));
    return(t);
  }
  t = apply_test_3(t, r_0, def_use_def_0, s_0);
  {
    ATerm t_0 (ATerm t)
    {
      t = term_b_8;
      return(t);
    }
    ATerm u_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_SDef_3, term_e_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_LRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_x_4)), (ATerm)ATmakeAppl(sym_Op_2, term_y_6, (ATerm) ATinsert(ATinsert(ATempty, term_p_7), term_c_7)), term_a_5)));
      return(t);
    }
    t = apply_and_fail_3(t, t_0, def_use_def_0, u_0);
  }
  return(t);
}
ATerm test8_0 (ATerm t)
{
  ATerm v_0 (ATerm t)
  {
    t = term_c_8;
    return(t);
  }
  ATerm w_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_RDef_3, term_e_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_x_4)), (ATerm)ATmakeAppl(sym_Op_2, term_y_6, (ATerm) ATinsert(ATinsert(ATempty, term_p_7), term_c_7)), term_a_8));
    return(t);
  }
  t = apply_test_3(t, v_0, def_use_def_0, w_0);
  {
    ATerm x_0 (ATerm t)
    {
      t = term_d_8;
      return(t);
    }
    ATerm y_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_RDef_3, term_e_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_x_4)), (ATerm)ATmakeAppl(sym_Op_2, term_y_6, (ATerm) ATinsert(ATinsert(ATempty, term_p_7), term_c_7)), term_a_5));
      return(t);
    }
    t = apply_and_fail_3(t, x_0, def_use_def_0, y_0);
  }
  return(t);
}
ATerm test7_0 (ATerm t)
{
  ATerm z_0 (ATerm t)
  {
    t = term_e_8;
    return(t);
  }
  ATerm a_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SDef_3, term_e_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_x_4))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_y_6, (ATerm) ATinsert(ATempty, term_c_7))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_z_6, (ATerm) ATinsert(ATempty, term_x_4))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_y_6, (ATerm) ATinsert(ATempty, term_x_4))))));
    return(t);
  }
  t = apply_test_3(t, z_0, def_use_def_0, a_1);
  {
    ATerm b_1 (ATerm t)
    {
      t = term_f_8;
      return(t);
    }
    ATerm c_1 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_SDef_3, term_e_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_x_4))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_y_6, (ATerm) ATinsert(ATempty, term_x_4))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_z_6, (ATerm) ATinsert(ATempty, term_x_4)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_y_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_x_4)))));
      return(t);
    }
    t = apply_and_fail_3(t, b_1, def_use_def_0, c_1);
    {
      ATerm d_1 (ATerm t)
      {
        t = term_g_8;
        return(t);
      }
      ATerm e_1 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_SDef_3, term_e_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_x_4))), (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_y_6, (ATerm) ATinsert(ATempty, term_x_4))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_z_6, (ATerm) ATinsert(ATempty, term_x_4))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_y_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_x_4))))));
        return(t);
      }
      t = apply_and_fail_3(t, d_1, def_use_def_0, e_1);
    }
  }
  return(t);
}
ATerm test6_0 (ATerm t)
{
  ATerm f_1 (ATerm t)
  {
    t = term_l_8;
    return(t);
  }
  ATerm g_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SDef_3, term_e_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_w_8, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATempty, term_x_4)))));
    return(t);
  }
  t = apply_test_3(t, f_1, def_use_def_0, g_1);
  {
    ATerm h_1 (ATerm t)
    {
      t = term_x_8;
      return(t);
    }
    ATerm i_1 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_SDef_3, term_e_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_z_8, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATempty, term_x_4)))));
      return(t);
    }
    t = apply_and_fail_3(t, h_1, def_use_def_0, i_1);
  }
  return(t);
}
ATerm test5_0 (ATerm t)
{
  ATerm j_1 (ATerm t)
  {
    t = term_a_9;
    return(t);
  }
  ATerm k_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SDef_3, term_e_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_x_4))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_z_6, (ATerm) ATinsert(ATempty, term_x_4)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_y_6, (ATerm) ATinsert(ATempty, term_x_4)))));
    return(t);
  }
  t = apply_test_3(t, j_1, def_use_def_0, k_1);
  {
    ATerm l_1 (ATerm t)
    {
      t = term_b_9;
      return(t);
    }
    ATerm m_1 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_SDef_3, term_e_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_x_4))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_z_6, (ATerm) ATinsert(ATempty, term_x_4)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_y_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_x_4)))));
      return(t);
    }
    t = apply_and_fail_3(t, l_1, def_use_def_0, m_1);
  }
  return(t);
}
ATerm test4_0 (ATerm t)
{
  ATerm n_1 (ATerm t)
  {
    t = term_q_9;
    return(t);
  }
  ATerm o_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SDef_3, term_e_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_x_9, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RootApp_1, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_v_9), term_j_10))), term_e_10)))));
    return(t);
  }
  t = apply_and_fail_3(t, n_1, def_use_def_0, o_1);
  {
    ATerm p_1 (ATerm t)
    {
      t = term_k_10;
      return(t);
    }
    ATerm q_1 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_SDef_3, term_e_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_x_9, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, term_l_10), term_e_10)))));
      return(t);
    }
    t = apply_test_3(t, p_1, def_use_def_0, q_1);
    {
      ATerm r_1 (ATerm t)
      {
        t = term_m_10;
        return(t);
      }
      ATerm s_1 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_SDef_3, term_e_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RootApp_1, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_v_9), term_j_10))), term_e_10))));
        return(t);
      }
      t = apply_and_fail_3(t, r_1, def_use_def_0, s_1);
    }
  }
  return(t);
}
ATerm test3_0 (ATerm t)
{
  ATerm t_1 (ATerm t)
  {
    t = term_o_10;
    return(t);
  }
  ATerm u_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SDef_3, term_e_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_x_4))), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_x_6), (ATerm) ATmakeAppl(sym_Seq_2, term_p_10, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_y_6, (ATerm) ATinsert(ATempty, term_c_7))), term_x_4)))))));
    return(t);
  }
  t = apply_test_3(t, t_1, def_use_def_0, u_1);
  {
    ATerm v_1 (ATerm t)
    {
      t = term_q_10;
      return(t);
    }
    ATerm w_1 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_SDef_3, term_e_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_x_4))), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_x_6), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_z_6, (ATerm) ATinsert(ATinsert(ATempty, term_t_10), term_x_4))), term_c_7))))));
      return(t);
    }
    t = apply_and_fail_3(t, v_1, def_use_def_0, w_1);
  }
  return(t);
}
ATerm apply_test_3 (ATerm t, ATerm w_87 (ATerm), ATerm x_87 (ATerm), ATerm y_87 (ATerm))
{
  ATerm x_1 (ATerm t)
  {
    ATerm u_10 = t;
    int w_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_87(t);
        t = x_87(t);
        ;
        LocalPopChoice(w_10);
      }
    else
      {
        t = u_10;
        {
          t = term_x_10;
          {
            t = debug_0(t);
            _fail(t);
          }
        }
      }
    return(t);
  }
  t = do_test_2(t, w_87, x_1);
  return(t);
}
ATerm test2_0 (ATerm t)
{
  ATerm y_1 (ATerm t)
  {
    t = term_y_10;
    return(t);
  }
  ATerm z_1 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_SDef_3, term_e_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_x_4))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_y_6, (ATerm) ATinsert(ATempty, term_c_7))), term_x_4)))));
    return(t);
  }
  t = apply_test_3(t, y_1, def_use_def_0, z_1);
  {
    ATerm a_2 (ATerm t)
    {
      t = term_z_10;
      return(t);
    }
    ATerm b_2 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_SDef_3, term_e_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_x_4))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_z_6, (ATerm) ATinsert(ATinsert(ATempty, term_t_10), term_x_4))), term_c_7)))));
      return(t);
    }
    t = apply_and_fail_3(t, a_2, def_use_def_0, b_2);
  }
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm d_5 = NULL;
  d_5 = t;
  c_5 :
  if(((ATgetType(d_5) == AT_LIST) && ATisEmpty(d_5)))
    {
      {
        ATerm f_5 = NULL,h_5 = NULL;
        ATerm a_11;
        a_11 = t;
        {
          ATerm g_5 = NULL;
          t = SSLgetAnnotations(not_null(d_5));
          {
            g_5 = t;
            if(((f_5 != NULL) && (f_5 != g_5)))
              _fail(g_5);
            else
              f_5 = g_5;
          }
        }
        t = a_11;
        {
          ATerm i_5 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(f_5));
          {
            i_5 = t;
            if(((h_5 != NULL) && (h_5 != i_5)))
              _fail(i_5);
            else
              h_5 = i_5;
          }
          t = not_null(h_5);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DefineBound_0 (ATerm t)
{
  ATerm c_2 (ATerm t)
  {
    ATerm n_5 = NULL;
    n_5 = t;
    {
      ATerm c_11;
      c_11 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(n_5)), term_h_11);
        {
          ATerm d_2 (ATerm t)
          {
            t = term_i_11;
            return(t);
          }
          t = assert_1(t, d_2);
        }
      }
      t = c_11;
    }
    return(t);
  }
  t = map_1(t, c_2);
  return(t);
}
ATerm overlay_ud_0 (ATerm t)
{
  ATerm s_5 = NULL,t_5 = NULL,u_5 = NULL,v_5 = NULL;
  s_5 = t;
  r_5 :
  if(match_cons(s_5, sym_Overlay_3))
    {
      t_5 = ATgetArgument(s_5, 0);
      u_5 = ATgetArgument(s_5, 1);
      v_5 = ATgetArgument(s_5, 2);
      {
        ATerm j_11;
        j_11 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_k_11, not_null(t_5)));
          {
            ATerm e_2 (ATerm t)
            {
              t = term_l_11;
              return(t);
            }
            t = assert_1(t, e_2);
            {
              t = not_null(u_5);
              {
                t = DefineBound_0(t);
                {
                  t = not_null(v_5);
                  t = use_vars_0(t);
                }
              }
            }
          }
        }
        t = j_11;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rdef_ud_0 (ATerm t)
{
  ATerm e_6 = NULL,f_6 = NULL,g_6 = NULL,h_6 = NULL,i_6 = NULL,j_6 = NULL,k_6 = NULL;
  e_6 = t;
  c_6 :
  if(match_cons(e_6, sym_RDef_3))
    {
      f_6 = ATgetArgument(e_6, 0);
      g_6 = ATgetArgument(e_6, 1);
      h_6 = ATgetArgument(e_6, 2);
      d_6 :
      if(match_cons(h_6, sym_StratRule_3))
        {
          i_6 = ATgetArgument(h_6, 0);
          j_6 = ATgetArgument(h_6, 1);
          k_6 = ATgetArgument(h_6, 2);
          {
            ATerm q_11;
            q_11 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_r_11, not_null(f_6)));
              {
                ATerm f_2 (ATerm t)
                {
                  t = term_l_11;
                  return(t);
                }
                t = assert_1(t, f_2);
                {
                  t = not_null(i_6);
                  {
                    t = unbound_vars_0(t);
                    {
                      t = not_null(j_6);
                      {
                        t = unbound_vars_0(t);
                        {
                          t = not_null(k_6);
                          t = unbound_vars_0(t);
                        }
                      }
                    }
                  }
                }
              }
            }
            t = q_11;
          }
        }
      else
        {
          if(match_cons(h_6, sym_Rule_3))
            {
              i_6 = ATgetArgument(h_6, 0);
              j_6 = ATgetArgument(h_6, 1);
              k_6 = ATgetArgument(h_6, 2);
              {
                ATerm s_11;
                s_11 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_t_11, not_null(f_6)));
                  {
                    ATerm g_2 (ATerm t)
                    {
                      t = term_l_11;
                      return(t);
                    }
                    t = assert_1(t, g_2);
                    {
                      t = not_null(i_6);
                      {
                        t = bind_vars_0(t);
                        {
                          t = not_null(k_6);
                          {
                            t = unbound_vars_0(t);
                            {
                              t = not_null(j_6);
                              t = use_vars_0(t);
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = s_11;
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
ATerm guardedlchoice_1 (ATerm t, ATerm o_64 (ATerm))
{
  ATerm h_2 (ATerm t)
  {
    t = GuardedLChoice_3(t, o_64, o_64, _id);
    return(t);
  }
  ATerm i_2 (ATerm t)
  {
    t = GuardedLChoice_3(t, _id, _id, o_64);
    return(t);
  }
  t = abstract_choice_2(t, h_2, i_2);
  return(t);
}
ATerm GuardedLChoice_3 (ATerm t, ATerm p_57 (ATerm), ATerm q_57 (ATerm), ATerm r_57 (ATerm))
{
  ATerm e_7 = NULL,f_7 = NULL,g_7 = NULL,h_7 = NULL;
  e_7 = t;
  d_7 :
  if(match_cons(e_7, sym_GuardedLChoice_3))
    {
      f_7 = ATgetArgument(e_7, 0);
      g_7 = ATgetArgument(e_7, 1);
      h_7 = ATgetArgument(e_7, 2);
      {
        ATerm m_7 = NULL,o_7 = NULL;
        ATerm n_7 = NULL;
        t = SSLgetAnnotations(not_null(e_7));
        {
          n_7 = t;
          if(((m_7 != NULL) && (m_7 != n_7)))
            _fail(n_7);
          else
            m_7 = n_7;
        }
        {
          t = not_null(f_7);
          {
            ATerm q_7 = NULL;
            t = p_57(t);
            {
              o_7 = t;
              {
                t = not_null(g_7);
                {
                  ATerm s_7 = NULL;
                  t = q_57(t);
                  {
                    q_7 = t;
                    {
                      t = not_null(h_7);
                      {
                        ATerm u_7 = NULL;
                        t = r_57(t);
                        {
                          s_7 = t;
                          {
                            ATerm v_7 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(o_7), not_null(q_7), not_null(s_7)), not_null(m_7));
                            {
                              v_7 = t;
                              if(((u_7 != NULL) && (u_7 != v_7)))
                                _fail(v_7);
                              else
                                u_7 = v_7;
                            }
                            t = not_null(u_7);
                          }
                        }
                      }
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
ATerm lchoice_1 (ATerm t, ATerm n_64 (ATerm))
{
  ATerm j_2 (ATerm t)
  {
    t = LChoice_2(t, n_64, _id);
    return(t);
  }
  ATerm k_2 (ATerm t)
  {
    t = LChoice_2(t, _id, n_64);
    return(t);
  }
  t = abstract_choice_2(t, j_2, k_2);
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm n_57 (ATerm), ATerm o_57 (ATerm))
{
  ATerm i_8 = NULL,j_8 = NULL,k_8 = NULL;
  i_8 = t;
  h_8 :
  if(match_cons(i_8, sym_LChoice_2))
    {
      j_8 = ATgetArgument(i_8, 0);
      k_8 = ATgetArgument(i_8, 1);
      {
        ATerm o_8 = NULL,q_8 = NULL;
        ATerm p_8 = NULL;
        t = SSLgetAnnotations(not_null(i_8));
        {
          p_8 = t;
          if(((o_8 != NULL) && (o_8 != p_8)))
            _fail(p_8);
          else
            o_8 = p_8;
        }
        {
          t = not_null(j_8);
          {
            ATerm s_8 = NULL;
            t = n_57(t);
            {
              q_8 = t;
              {
                t = not_null(k_8);
                {
                  ATerm u_8 = NULL;
                  t = o_57(t);
                  {
                    s_8 = t;
                    {
                      ATerm v_8 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(q_8), not_null(s_8)), not_null(o_8));
                      {
                        v_8 = t;
                        if(((u_8 != NULL) && (u_8 != v_8)))
                          _fail(v_8);
                        else
                          u_8 = v_8;
                      }
                      t = not_null(u_8);
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
ATerm try_1 (ATerm t, ATerm g_73 (ATerm))
{
  ATerm u_11 = t;
  int v_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_73(t);
      ;
      LocalPopChoice(v_11);
    }
  else
    {
      t = u_11;
      {
      }
    }
  return(t);
}
ATerm isect_Bound_0 (ATerm t)
{
  ATerm l_2 (ATerm t)
  {
    ATerm m_2 (ATerm t)
    {
      ATerm k_9 = NULL,l_9 = NULL,m_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL;
      k_9 = t;
      e_9 :
      if(match_cons(k_9, sym__2))
        {
          l_9 = ATgetArgument(k_9, 0);
          m_9 = ATgetArgument(k_9, 1);
          f_9 :
          if(((ATgetType(m_9) == AT_LIST) && !(ATisEmpty(m_9))))
            {
              n_9 = ATgetFirst((ATermList) m_9);
              p_9 = (ATerm) ATgetNext((ATermList) m_9);
              g_9 :
              if(match_cons(n_9, sym_Defined_1))
                {
                  o_9 = ATgetArgument(n_9, 0);
                  h_9 :
                  if(!(match_cons(l_9, sym_Scopes_0)))
                    {
                      ATerm w_11 = t;
                      int b_12 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm c_12;
                          c_12 = t;
                          {
                            ATerm r_9 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, term_i_11, not_null(l_9));
                            {
                              t = table_get_0(t);
                              {
                                r_9 = t;
                                c_9 :
                                if(((ATgetType(r_9) == AT_LIST) && !(ATisEmpty(r_9))))
                                  {
                                    s_9 = ATgetFirst((ATermList) r_9);
                                    u_9 = (ATerm) ATgetNext((ATermList) r_9);
                                    d_9 :
                                    if(match_cons(s_9, sym_Defined_1))
                                      {
                                        t_9 = ATgetArgument(s_9, 0);
                                        {
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
                          t = c_12;
                          ;
                          LocalPopChoice(b_12);
                        }
                      else
                        {
                          t = w_11;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(l_9), (ATerm) ATinsert(ATempty, term_d_12));
                        }
                    }
                }
              else
                {
                  i_9 :
                  if(!(match_cons(l_9, sym_Scopes_0)))
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              j_9 :
              if(!(match_cons(l_9, sym_Scopes_0)))
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
    t = try_1(t, m_2);
    return(t);
  }
  t = map_1(t, l_2);
  t = restore_Bound_0(t);
  return(t);
}
ATerm table_putlist_0 (ATerm t)
{
  ATerm a_10 = NULL,b_10 = NULL,c_10 = NULL;
  a_10 = t;
  z_9 :
  if(match_cons(a_10, sym__2))
    {
      b_10 = ATgetArgument(a_10, 0);
      c_10 = ATgetArgument(a_10, 1);
      {
        t = not_null(c_10);
        {
          ATerm n_2 (ATerm t)
          {
            ATerm f_10 = NULL,g_10 = NULL,h_10 = NULL;
            f_10 = t;
            y_9 :
            if(match_cons(f_10, sym__2))
              {
                g_10 = ATgetArgument(f_10, 0);
                h_10 = ATgetArgument(f_10, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(b_10), not_null(g_10), not_null(h_10));
                  t = table_put_0(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, n_2);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm n_10 = NULL;
  n_10 = t;
  t = SSL_table_destroy(not_null(n_10));
  return(t);
}
ATerm restore_Bound_0 (ATerm t)
{
  ATerm r_10 = NULL;
  r_10 = t;
  {
    ATerm h_12;
    h_12 = t;
    {
      t = term_i_11;
      {
        t = table_destroy_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_i_11, not_null(r_10));
          t = table_putlist_0(t);
        }
      }
    }
    t = h_12;
  }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm v_10 = NULL;
  v_10 = t;
  t = SSL_table_keys(not_null(v_10));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm b_11 = NULL;
  b_11 = t;
  {
    t = table_keys_0(t);
    {
      ATerm o_2 (ATerm t)
      {
        ATerm d_11 = NULL;
        ATerm f_11 = NULL;
        d_11 = t;
        {
          ATerm g_11 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_11), not_null(d_11));
          {
            t = table_get_0(t);
            {
              g_11 = t;
              if(((f_11 != NULL) && (f_11 != g_11)))
                _fail(g_11);
              else
                f_11 = g_11;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_11), not_null(f_11));
        }
        return(t);
      }
      t = map_1(t, o_2);
    }
  }
  return(t);
}
ATerm save_Bound_0 (ATerm t)
{
  t = term_i_11;
  t = table_getlist_0(t);
  return(t);
}
ATerm abstract_choice_2 (ATerm t, ATerm k_64 (ATerm), ATerm l_64 (ATerm))
{
  ATerm m_11 = NULL,o_11 = NULL;
  ATerm j_12;
  j_12 = t;
  {
    ATerm n_11 = NULL;
    t = save_Bound_0(t);
    {
      n_11 = t;
      if(((m_11 != NULL) && (m_11 != n_11)))
        _fail(n_11);
      else
        m_11 = n_11;
    }
  }
  t = j_12;
  {
    t = k_64(t);
    {
      ATerm m_12;
      m_12 = t;
      {
        ATerm p_11 = NULL;
        t = save_Bound_0(t);
        {
          p_11 = t;
          {
            if(((o_11 != NULL) && (o_11 != p_11)))
              _fail(p_11);
            else
              o_11 = p_11;
            {
              t = not_null(m_11);
              t = restore_Bound_0(t);
            }
          }
        }
      }
      t = m_12;
      {
        t = l_64(t);
        {
          ATerm n_12;
          n_12 = t;
          {
            t = not_null(o_11);
            t = isect_Bound_0(t);
          }
          t = n_12;
        }
      }
    }
  }
  return(t);
}
ATerm choice_1 (ATerm t, ATerm m_64 (ATerm))
{
  ATerm p_2 (ATerm t)
  {
    t = Choice_2(t, m_64, _id);
    return(t);
  }
  ATerm q_2 (ATerm t)
  {
    t = Choice_2(t, _id, m_64);
    return(t);
  }
  t = abstract_choice_2(t, p_2, q_2);
  return(t);
}
ATerm Choice_2 (ATerm t, ATerm l_57 (ATerm), ATerm m_57 (ATerm))
{
  ATerm y_11 = NULL,z_11 = NULL,a_12 = NULL;
  y_11 = t;
  x_11 :
  if(match_cons(y_11, sym_Choice_2))
    {
      z_11 = ATgetArgument(y_11, 0);
      a_12 = ATgetArgument(y_11, 1);
      {
        ATerm e_12 = NULL,g_12 = NULL;
        ATerm f_12 = NULL;
        t = SSLgetAnnotations(not_null(y_11));
        {
          f_12 = t;
          if(((e_12 != NULL) && (e_12 != f_12)))
            _fail(f_12);
          else
            e_12 = f_12;
        }
        {
          t = not_null(z_11);
          {
            ATerm i_12 = NULL;
            t = l_57(t);
            {
              g_12 = t;
              {
                t = not_null(a_12);
                {
                  ATerm k_12 = NULL;
                  t = m_57(t);
                  {
                    i_12 = t;
                    {
                      ATerm l_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(g_12), not_null(i_12)), not_null(e_12));
                      {
                        l_12 = t;
                        if(((k_12 != NULL) && (k_12 != l_12)))
                          _fail(l_12);
                        else
                          k_12 = l_12;
                      }
                      t = not_null(k_12);
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
ATerm error_0 (ATerm t)
{
  ATerm o_12;
  o_12 = t;
  {
    ATerm s_12 = NULL;
    ATerm t_12 = NULL;
    t_12 = t;
    if(((s_12 != NULL) && (s_12 != t_12)))
      _fail(t_12);
    else
      s_12 = t_12;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_p_12, not_null(s_12));
      t = printnl_0(t);
    }
  }
  t = o_12;
  return(t);
}
ATerm Context_0 (ATerm t)
{
  ATerm l_13 = NULL;
  l_13 = t;
  {
    ATerm q_12 = t;
    int r_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_13 = NULL;
        ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL;
        t = (ATerm) ATempty;
        {
          ATerm r_2 (ATerm t)
          {
            t = term_l_11;
            return(t);
          }
          t = rewrite_1(t, r_2);
          {
            p_13 = t;
            a_13 :
            if(match_cons(p_13, sym_Defined_2))
              {
                q_13 = ATgetArgument(p_13, 0);
                r_13 = ATgetArgument(p_13, 1);
                b_13 :
                if(match_string(q_13, "j_0"))
                  {
                    if(((o_13 != NULL) && (o_13 != r_13)))
                      _fail(r_13);
                    else
                      o_13 = r_13;
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(l_13)), term_v_12), not_null(o_13)), term_u_12);
        ;
        LocalPopChoice(r_12);
      }
    else
      {
        t = q_12;
        {
          ATerm w_12 = t;
          int x_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_13 = NULL;
              ATerm v_13 = NULL,w_13 = NULL,x_13 = NULL;
              t = (ATerm) ATempty;
              {
                ATerm s_2 (ATerm t)
                {
                  t = term_l_11;
                  return(t);
                }
                t = rewrite_1(t, s_2);
                {
                  v_13 = t;
                  d_13 :
                  if(match_cons(v_13, sym_Defined_2))
                    {
                      w_13 = ATgetArgument(v_13, 0);
                      x_13 = ATgetArgument(v_13, 1);
                      e_13 :
                      if(match_string(w_13, "h_0"))
                        {
                          if(((u_13 != NULL) && (u_13 != x_13)))
                            _fail(x_13);
                          else
                            u_13 = x_13;
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
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(l_13)), term_v_12), not_null(u_13)), term_y_12);
              ;
              LocalPopChoice(x_12);
            }
          else
            {
              t = w_12;
              {
                ATerm z_12 = t;
                int c_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm a_14 = NULL;
                    ATerm b_14 = NULL,c_14 = NULL,d_14 = NULL;
                    t = (ATerm) ATempty;
                    {
                      ATerm t_2 (ATerm t)
                      {
                        t = term_l_11;
                        return(t);
                      }
                      t = rewrite_1(t, t_2);
                      {
                        b_14 = t;
                        g_13 :
                        if(match_cons(b_14, sym_Defined_2))
                          {
                            c_14 = ATgetArgument(b_14, 0);
                            d_14 = ATgetArgument(b_14, 1);
                            h_13 :
                            if(match_string(c_14, "f_0"))
                              {
                                if(((a_14 != NULL) && (a_14 != d_14)))
                                  _fail(d_14);
                                else
                                  a_14 = d_14;
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
                    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(l_13)), term_v_12), not_null(a_14)), term_y_12);
                    ;
                    LocalPopChoice(c_13);
                  }
                else
                  {
                    t = z_12;
                    {
                      ATerm g_14 = NULL;
                      ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL;
                      t = (ATerm) ATempty;
                      {
                        ATerm u_2 (ATerm t)
                        {
                          t = term_l_11;
                          return(t);
                        }
                        t = rewrite_1(t, u_2);
                        {
                          h_14 = t;
                          j_13 :
                          if(match_cons(h_14, sym_Defined_2))
                            {
                              i_14 = ATgetArgument(h_14, 0);
                              j_14 = ATgetArgument(h_14, 1);
                              k_13 :
                              if(match_string(i_14, "b_0"))
                                {
                                  if(((g_14 != NULL) && (g_14 != j_14)))
                                    _fail(j_14);
                                  else
                                    g_14 = j_14;
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
                      t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(l_13)), term_v_12), not_null(g_14)), term_f_13);
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm Unbound_0 (ATerm t)
{
  ATerm u_14 = NULL,v_14 = NULL;
  u_14 = t;
  t_14 :
  if(match_cons(u_14, sym_Var_1))
    {
      v_14 = ATgetArgument(u_14, 0);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_13), not_null(v_14)), term_i_13);
        {
          t = Context_0(t);
          t = error_0(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm a_15 = NULL,b_15 = NULL,c_15 = NULL;
  a_15 = t;
  z_14 :
  if(((ATgetType(a_15) == AT_LIST) && !(ATisEmpty(a_15))))
    {
      b_15 = ATgetFirst((ATermList) a_15);
      c_15 = (ATerm) ATgetNext((ATermList) a_15);
      t = not_null(b_15);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm h_15 = NULL,i_15 = NULL,j_15 = NULL;
  h_15 = t;
  g_15 :
  if(match_cons(h_15, sym__2))
    {
      i_15 = ATgetArgument(h_15, 0);
      j_15 = ATgetArgument(h_15, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_15), not_null(j_15));
        {
          t = table_get_0(t);
          t = Hd_0(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm rewrite_1 (ATerm t, ATerm m_70 (ATerm))
{
  ATerm p_15 = NULL;
  ATerm r_15 = NULL;
  p_15 = t;
  {
    ATerm s_15 = NULL;
    t = term_n_13;
    {
      t = m_70(t);
      {
        s_15 = t;
        if(((r_15 != NULL) && (r_15 != s_15)))
          _fail(s_15);
        else
          r_15 = s_15;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(r_15), not_null(p_15));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm Bound_0 (ATerm t)
{
  ATerm f_16 = NULL,g_16 = NULL;
  f_16 = t;
  e_16 :
  if(match_cons(f_16, sym_Var_1))
    {
      g_16 = ATgetArgument(f_16, 0);
      {
        ATerm s_13 = t;
        int t_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_16 = NULL,k_16 = NULL;
            t = not_null(f_16);
            {
              ATerm v_2 (ATerm t)
              {
                t = term_i_11;
                return(t);
              }
              t = rewrite_1(t, v_2);
              {
                j_16 = t;
                y_15 :
                if(match_cons(j_16, sym_Defined_1))
                  {
                    k_16 = ATgetArgument(j_16, 0);
                    z_15 :
                    if(!(match_string(k_16, "q_0")))
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
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(g_16));
            ;
            LocalPopChoice(t_13);
          }
        else
          {
            t = s_13;
            {
              ATerm y_13 = t;
              int z_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_16 = NULL;
                  t = not_null(f_16);
                  {
                    ATerm w_2 (ATerm t)
                    {
                      t = term_i_11;
                      return(t);
                    }
                    t = rewrite_1(t, w_2);
                    {
                      n_16 = t;
                      b_16 :
                      if(match_cons(n_16, sym_Undefined_0))
                        {
                          _fail(t);
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  }
                  t = term_d_12;
                  ;
                  LocalPopChoice(z_13);
                }
              else
                {
                  t = y_13;
                  {
                    ATerm q_16 = NULL,r_16 = NULL;
                    t = not_null(f_16);
                    {
                      ATerm x_2 (ATerm t)
                      {
                        t = term_i_11;
                        return(t);
                      }
                      t = rewrite_1(t, x_2);
                      {
                        q_16 = t;
                        c_16 :
                        if(match_cons(q_16, sym_Defined_1))
                          {
                            r_16 = ATgetArgument(q_16, 0);
                            d_16 :
                            if(!(match_string(r_16, "m_0")))
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
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(g_16));
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
ATerm use_vars_0 (ATerm t)
{
  ATerm e_14 = t;
  int f_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Var_1(t, _id);
      LocalPopChoice(f_14);
      {
        ATerm k_14 = t;
        int l_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bound_0(t);
            ;
            LocalPopChoice(l_14);
          }
        else
          {
            t = k_14;
            {
              t = Unbound_0(t);
              _fail(t);
            }
          }
      }
    }
  else
    {
      t = e_14;
      {
        ATerm m_14 = t;
        int n_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = App_2(t, _id, _id);
            LocalPopChoice(n_14);
            t = App_2(t, unbound_vars_0, use_vars_0);
          }
        else
          {
            t = m_14;
            {
              ATerm o_14 = t;
              int p_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RootApp_1(t, _id);
                  LocalPopChoice(p_14);
                  t = RootApp_1(t, unbound_vars_0);
                }
              else
                {
                  t = o_14;
                  t = _all(t, use_vars_0);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Rule_3 (ATerm t, ATerm o_54 (ATerm), ATerm p_54 (ATerm), ATerm q_54 (ATerm))
{
  ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL;
  d_17 = t;
  c_17 :
  if(match_cons(d_17, sym_Rule_3))
    {
      e_17 = ATgetArgument(d_17, 0);
      f_17 = ATgetArgument(d_17, 1);
      g_17 = ATgetArgument(d_17, 2);
      {
        ATerm l_17 = NULL,n_17 = NULL;
        ATerm m_17 = NULL;
        t = SSLgetAnnotations(not_null(d_17));
        {
          m_17 = t;
          if(((l_17 != NULL) && (l_17 != m_17)))
            _fail(m_17);
          else
            l_17 = m_17;
        }
        {
          t = not_null(e_17);
          {
            ATerm p_17 = NULL;
            t = o_54(t);
            {
              n_17 = t;
              {
                t = not_null(f_17);
                {
                  ATerm r_17 = NULL;
                  t = p_54(t);
                  {
                    p_17 = t;
                    {
                      t = not_null(g_17);
                      {
                        ATerm t_17 = NULL;
                        t = q_54(t);
                        {
                          r_17 = t;
                          {
                            ATerm u_17 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rule_3, not_null(n_17), not_null(p_17), not_null(r_17)), not_null(l_17));
                            {
                              u_17 = t;
                              if(((t_17 != NULL) && (t_17 != u_17)))
                                _fail(u_17);
                              else
                                t_17 = u_17;
                            }
                            t = not_null(t_17);
                          }
                        }
                      }
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
ATerm RootApp_1 (ATerm t, ATerm j_55 (ATerm))
{
  ATerm g_18 = NULL,h_18 = NULL;
  g_18 = t;
  f_18 :
  if(match_cons(g_18, sym_RootApp_1))
    {
      h_18 = ATgetArgument(g_18, 0);
      {
        ATerm k_18 = NULL,m_18 = NULL;
        ATerm l_18 = NULL;
        t = SSLgetAnnotations(not_null(g_18));
        {
          l_18 = t;
          if(((k_18 != NULL) && (k_18 != l_18)))
            _fail(l_18);
          else
            k_18 = l_18;
        }
        {
          t = not_null(h_18);
          {
            ATerm o_18 = NULL;
            t = j_55(t);
            {
              m_18 = t;
              {
                ATerm p_18 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RootApp_1, not_null(m_18)), not_null(k_18));
                {
                  p_18 = t;
                  if(((o_18 != NULL) && (o_18 != p_18)))
                    _fail(p_18);
                  else
                    o_18 = p_18;
                }
                t = not_null(o_18);
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
ATerm App_2 (ATerm t, ATerm h_55 (ATerm), ATerm i_55 (ATerm))
{
  ATerm a_19 = NULL,b_19 = NULL,c_19 = NULL;
  a_19 = t;
  z_18 :
  if(match_cons(a_19, sym_App_2))
    {
      b_19 = ATgetArgument(a_19, 0);
      c_19 = ATgetArgument(a_19, 1);
      {
        ATerm g_19 = NULL,i_19 = NULL;
        ATerm h_19 = NULL;
        t = SSLgetAnnotations(not_null(a_19));
        {
          h_19 = t;
          if(((g_19 != NULL) && (g_19 != h_19)))
            _fail(h_19);
          else
            g_19 = h_19;
        }
        {
          t = not_null(b_19);
          {
            ATerm k_19 = NULL;
            t = h_55(t);
            {
              i_19 = t;
              {
                t = not_null(c_19);
                {
                  ATerm m_19 = NULL;
                  t = i_55(t);
                  {
                    k_19 = t;
                    {
                      ATerm n_19 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(i_19), not_null(k_19)), not_null(g_19));
                      {
                        n_19 = t;
                        if(((m_19 != NULL) && (m_19 != n_19)))
                          _fail(n_19);
                        else
                          m_19 = n_19;
                      }
                      t = not_null(m_19);
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
ATerm table_replace_0 (ATerm t)
{
  ATerm x_19 = NULL,y_19 = NULL,z_19 = NULL,a_20 = NULL;
  x_19 = t;
  w_19 :
  if(match_cons(x_19, sym__3))
    {
      y_19 = ATgetArgument(x_19, 0);
      z_19 = ATgetArgument(x_19, 1);
      a_20 = ATgetArgument(x_19, 2);
      {
        ATerm e_20 = NULL;
        ATerm q_14;
        q_14 = t;
        {
          ATerm f_20 = NULL,g_20 = NULL,h_20 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_19), not_null(z_19));
          {
            t = table_get_0(t);
            {
              f_20 = t;
              v_19 :
              if(((ATgetType(f_20) == AT_LIST) && !(ATisEmpty(f_20))))
                {
                  g_20 = ATgetFirst((ATermList) f_20);
                  h_20 = (ATerm) ATgetNext((ATermList) f_20);
                  {
                    if(((e_20 != NULL) && (e_20 != h_20)))
                      _fail(h_20);
                    else
                      e_20 = h_20;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(y_19), not_null(z_19), (ATerm) ATinsert(CheckATermList(not_null(e_20)), not_null(a_20)));
                      t = table_put_0(t);
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
        t = q_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm override_key_1 (ATerm t, ATerm l_70 (ATerm))
{
  ATerm n_20 = NULL,o_20 = NULL,p_20 = NULL;
  n_20 = t;
  m_20 :
  if(match_cons(n_20, sym__2))
    {
      o_20 = ATgetArgument(n_20, 0);
      p_20 = ATgetArgument(n_20, 1);
      {
        ATerm s_20 = NULL;
        ATerm r_14;
        r_14 = t;
        {
          ATerm t_20 = NULL;
          t = l_70(t);
          {
            t_20 = t;
            {
              if(((s_20 != NULL) && (s_20 != t_20)))
                _fail(t_20);
              else
                s_20 = t_20;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(s_20), not_null(o_20), not_null(p_20));
                t = table_replace_0(t);
              }
            }
          }
        }
        t = r_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Binding_0 (ATerm t)
{
  ATerm y_20 = NULL,z_20 = NULL;
  y_20 = t;
  x_20 :
  if(match_cons(y_20, sym_Var_1))
    {
      z_20 = ATgetArgument(y_20, 0);
      {
        ATerm s_14;
        s_14 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(z_20)), term_x_14);
          {
            ATerm y_2 (ATerm t)
            {
              t = term_i_11;
              return(t);
            }
            t = override_key_1(t, y_2);
          }
        }
        t = s_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm a_0 (ATerm))
{
  ATerm l_21 = NULL,m_21 = NULL;
  l_21 = t;
  k_21 :
  if(match_cons(l_21, sym_Var_1))
    {
      m_21 = ATgetArgument(l_21, 0);
      {
        ATerm y_14 = t;
        int d_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_21 = NULL,r_21 = NULL;
            ATerm q_21 = NULL;
            t = SSLgetAnnotations(not_null(l_21));
            {
              q_21 = t;
              if(((p_21 != NULL) && (p_21 != q_21)))
                _fail(q_21);
              else
                p_21 = q_21;
            }
            {
              t = not_null(m_21);
              {
                ATerm t_21 = NULL;
                t = a_0(t);
                {
                  r_21 = t;
                  {
                    ATerm u_21 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(r_21)), not_null(p_21));
                    {
                      u_21 = t;
                      if(((t_21 != NULL) && (t_21 != u_21)))
                        _fail(u_21);
                      else
                        t_21 = u_21;
                    }
                    t = not_null(t_21);
                  }
                }
              }
            }
            ;
            LocalPopChoice(d_15);
          }
        else
          {
            t = y_14;
            {
              ATerm x_21 = NULL,z_21 = NULL;
              ATerm y_21 = NULL;
              t = SSLgetAnnotations(not_null(l_21));
              {
                y_21 = t;
                if(((x_21 != NULL) && (x_21 != y_21)))
                  _fail(y_21);
                else
                  x_21 = y_21;
              }
              {
                t = not_null(m_21);
                {
                  ATerm b_22 = NULL;
                  t = a_0(t);
                  {
                    z_21 = t;
                    {
                      ATerm c_22 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(z_21)), not_null(x_21));
                      {
                        c_22 = t;
                        if(((b_22 != NULL) && (b_22 != c_22)))
                          _fail(c_22);
                        else
                          b_22 = c_22;
                      }
                      t = not_null(b_22);
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
ATerm bind_vars_0 (ATerm t)
{
  ATerm e_15 = t;
  int f_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Var_1(t, _id);
      LocalPopChoice(f_15);
      t = Binding_0(t);
    }
  else
    {
      t = e_15;
      {
        ATerm k_15 = t;
        int l_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = App_2(t, _id, _id);
            LocalPopChoice(l_15);
            t = App_2(t, unbound_vars_0, use_vars_0);
          }
        else
          {
            t = k_15;
            {
              ATerm m_15 = t;
              int n_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RootApp_1(t, _id);
                  LocalPopChoice(n_15);
                  t = RootApp_1(t, unbound_vars_0);
                }
              else
                {
                  t = m_15;
                  t = _all(t, bind_vars_0);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Match_1 (ATerm t, ATerm s_56 (ATerm))
{
  ATerm q_22 = NULL,r_22 = NULL;
  q_22 = t;
  p_22 :
  if(match_cons(q_22, sym_Match_1))
    {
      r_22 = ATgetArgument(q_22, 0);
      {
        ATerm u_22 = NULL,w_22 = NULL;
        ATerm v_22 = NULL;
        t = SSLgetAnnotations(not_null(q_22));
        {
          v_22 = t;
          if(((u_22 != NULL) && (u_22 != v_22)))
            _fail(v_22);
          else
            u_22 = v_22;
        }
        {
          t = not_null(r_22);
          {
            ATerm y_22 = NULL;
            t = s_56(t);
            {
              w_22 = t;
              {
                ATerm z_22 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(w_22)), not_null(u_22));
                {
                  z_22 = t;
                  if(((y_22 != NULL) && (y_22 != z_22)))
                    _fail(z_22);
                  else
                    y_22 = z_22;
                }
                t = not_null(y_22);
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
ATerm Build_1 (ATerm t, ATerm t_56 (ATerm))
{
  ATerm z_24 = NULL,a_25 = NULL;
  z_24 = t;
  y_24 :
  if(match_cons(z_24, sym_Build_1))
    {
      a_25 = ATgetArgument(z_24, 0);
      {
        ATerm d_25 = NULL,g_25 = NULL;
        ATerm f_25 = NULL;
        t = SSLgetAnnotations(not_null(z_24));
        {
          f_25 = t;
          if(((d_25 != NULL) && (d_25 != f_25)))
            _fail(f_25);
          else
            d_25 = f_25;
        }
        {
          t = not_null(a_25);
          {
            ATerm m_25 = NULL;
            t = t_56(t);
            {
              g_25 = t;
              {
                ATerm q_25 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(g_25)), not_null(d_25));
                {
                  q_25 = t;
                  if(((m_25 != NULL) && (m_25 != q_25)))
                    _fail(q_25);
                  else
                    m_25 = q_25;
                }
                t = not_null(m_25);
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
ATerm VarScope_1 (ATerm t, ATerm j_64 (ATerm))
{
  ATerm z_2 (ATerm t)
  {
    t = term_i_11;
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    t = Scope_2(t, DefineUnbound_0, j_64);
    return(t);
  }
  t = scope_2(t, z_2, a_3);
  return(t);
}
ATerm unbound_vars_0 (ATerm t)
{
  ATerm o_15 = t;
  int q_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, _id, _id);
      LocalPopChoice(q_15);
      t = VarScope_1(t, unbound_vars_0);
    }
  else
    {
      t = o_15;
      {
        ATerm t_15 = t;
        int u_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Build_1(t, _id);
            LocalPopChoice(u_15);
            t = Build_1(t, use_vars_0);
          }
        else
          {
            t = t_15;
            {
              ATerm v_15 = t;
              int w_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Match_1(t, _id);
                  LocalPopChoice(w_15);
                  t = Match_1(t, bind_vars_0);
                }
              else
                {
                  t = v_15;
                  {
                    ATerm x_15 = t;
                    int a_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Rule_3(t, _id, _id, _id);
                        LocalPopChoice(a_16);
                        {
                          t = Rule_3(t, bind_vars_0, _id, _id);
                          {
                            t = Rule_3(t, _id, _id, unbound_vars_0);
                            t = Rule_3(t, _id, use_vars_0, _id);
                          }
                        }
                      }
                    else
                      {
                        t = x_15;
                        {
                          ATerm h_16 = t;
                          int i_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Choice_2(t, _id, _id);
                              LocalPopChoice(i_16);
                              t = choice_1(t, unbound_vars_0);
                            }
                          else
                            {
                              t = h_16;
                              {
                                ATerm l_16 = t;
                                int m_16 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = LChoice_2(t, _id, _id);
                                    LocalPopChoice(m_16);
                                    t = lchoice_1(t, unbound_vars_0);
                                  }
                                else
                                  {
                                    t = l_16;
                                    {
                                      ATerm o_16 = t;
                                      int p_16 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = GuardedLChoice_3(t, _id, _id, _id);
                                          LocalPopChoice(p_16);
                                          t = guardedlchoice_1(t, unbound_vars_0);
                                        }
                                      else
                                        {
                                          t = o_16;
                                          t = _all(t, unbound_vars_0);
                                        }
                                    }
                                  }
                              }
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
ATerm sdef_ud_0 (ATerm t)
{
  ATerm x_25 = NULL,y_25 = NULL,z_25 = NULL,a_26 = NULL;
  x_25 = t;
  w_25 :
  if(match_cons(x_25, sym_SDef_3))
    {
      y_25 = ATgetArgument(x_25, 0);
      z_25 = ATgetArgument(x_25, 1);
      a_26 = ATgetArgument(x_25, 2);
      {
        ATerm s_16;
        s_16 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_t_16, not_null(y_25)));
          {
            ATerm b_3 (ATerm t)
            {
              t = term_l_11;
              return(t);
            }
            t = assert_1(t, b_3);
            {
              t = not_null(a_26);
              t = unbound_vars_0(t);
            }
          }
        }
        t = s_16;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm i_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL;
  i_26 = t;
  h_26 :
  if(match_cons(i_26, sym__3))
    {
      j_26 = ATgetArgument(i_26, 0);
      k_26 = ATgetArgument(i_26, 1);
      l_26 = ATgetArgument(i_26, 2);
      {
        ATerm u_16;
        u_16 = t;
        {
          ATerm p_26 = NULL;
          ATerm q_26 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_26), not_null(k_26));
          {
            ATerm v_16 = t;
            int w_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(w_16);
              }
            else
              {
                t = v_16;
                t = (ATerm) ATempty;
              }
            {
              q_26 = t;
              if(((p_26 != NULL) && (p_26 != q_26)))
                _fail(q_26);
              else
                p_26 = q_26;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_26), not_null(k_26), (ATerm) ATinsert(CheckATermList(not_null(p_26)), not_null(l_26)));
            t = table_put_0(t);
          }
        }
        t = u_16;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm k_70 (ATerm))
{
  ATerm a_27 = NULL,b_27 = NULL,e_27 = NULL;
  a_27 = t;
  z_26 :
  if(match_cons(a_27, sym__2))
    {
      b_27 = ATgetArgument(a_27, 0);
      e_27 = ATgetArgument(a_27, 1);
      {
        ATerm h_27 = NULL,i_27 = NULL,j_27 = NULL;
        ATerm x_16;
        x_16 = t;
        {
          ATerm k_27 = NULL;
          ATerm l_27 = NULL,m_27 = NULL,n_27 = NULL;
          t = k_70(t);
          {
            k_27 = t;
            {
              if(((h_27 != NULL) && (h_27 != k_27)))
                _fail(k_27);
              else
                h_27 = k_27;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(h_27), not_null(b_27), not_null(e_27));
                {
                  t = table_push_0(t);
                  {
                    ATerm y_16 = t;
                    int z_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(h_27), term_a_17);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(z_16);
                      }
                    else
                      {
                        t = y_16;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      l_27 = t;
                      y_26 :
                      if(((ATgetType(l_27) == AT_LIST) && !(ATisEmpty(l_27))))
                        {
                          m_27 = ATgetFirst((ATermList) l_27);
                          n_27 = (ATerm) ATgetNext((ATermList) l_27);
                          {
                            if(((i_27 != NULL) && (i_27 != m_27)))
                              _fail(m_27);
                            else
                              i_27 = m_27;
                            {
                              if(((j_27 != NULL) && (j_27 != n_27)))
                                _fail(n_27);
                              else
                                j_27 = n_27;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(h_27), term_a_17, (ATerm) ATinsert(CheckATermList(not_null(j_27)), (ATerm) ATinsert(CheckATermList(not_null(i_27)), not_null(b_27))));
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
        t = x_16;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm DefineUnbound_0 (ATerm t)
{
  ATerm c_3 (ATerm t)
  {
    ATerm s_27 = NULL;
    s_27 = t;
    {
      ATerm b_17;
      b_17 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, not_null(s_27)), term_d_12);
        {
          ATerm d_3 (ATerm t)
          {
            t = term_i_11;
            return(t);
          }
          t = assert_1(t, d_3);
        }
      }
      t = b_17;
    }
    return(t);
  }
  t = map_1(t, c_3);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm c_55 (ATerm))
{
  ATerm a_28 = NULL,b_28 = NULL;
  a_28 = t;
  z_27 :
  if(match_cons(a_28, sym_DynamicRules_1))
    {
      b_28 = ATgetArgument(a_28, 0);
      {
        ATerm e_28 = NULL,g_28 = NULL;
        ATerm f_28 = NULL;
        t = SSLgetAnnotations(not_null(a_28));
        {
          f_28 = t;
          if(((e_28 != NULL) && (e_28 != f_28)))
            _fail(f_28);
          else
            e_28 = f_28;
        }
        {
          t = not_null(b_28);
          {
            ATerm i_28 = NULL;
            t = c_55(t);
            {
              g_28 = t;
              {
                ATerm j_28 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(g_28)), not_null(e_28));
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
ATerm Scope_2 (ATerm t, ATerm w_56 (ATerm), ATerm x_56 (ATerm))
{
  ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL;
  u_28 = t;
  t_28 :
  if(match_cons(u_28, sym_Scope_2))
    {
      v_28 = ATgetArgument(u_28, 0);
      w_28 = ATgetArgument(u_28, 1);
      {
        ATerm a_29 = NULL,c_29 = NULL;
        ATerm b_29 = NULL;
        t = SSLgetAnnotations(not_null(u_28));
        {
          b_29 = t;
          if(((a_29 != NULL) && (a_29 != b_29)))
            _fail(b_29);
          else
            a_29 = b_29;
        }
        {
          t = not_null(v_28);
          {
            ATerm e_29 = NULL;
            t = w_56(t);
            {
              c_29 = t;
              {
                t = not_null(w_28);
                {
                  ATerm i_29 = NULL;
                  t = x_56(t);
                  {
                    e_29 = t;
                    {
                      ATerm j_29 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(c_29), not_null(e_29)), not_null(a_29));
                      {
                        j_29 = t;
                        if(((i_29 != NULL) && (i_29 != j_29)))
                          _fail(j_29);
                        else
                          i_29 = j_29;
                      }
                      t = not_null(i_29);
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
ATerm tboundin_3 (ATerm t, ATerm b_84 (ATerm), ATerm c_84 (ATerm), ATerm d_84 (ATerm))
{
  ATerm h_17 = t;
  int i_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, d_84, b_84);
      ;
      LocalPopChoice(i_17);
    }
  else
    {
      t = h_17;
      t = DynamicRules_1(t, b_84);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm r_29 = NULL,s_29 = NULL;
  r_29 = t;
  q_29 :
  if(match_cons(r_29, sym_DynamicRules_1))
    {
      s_29 = ATgetArgument(r_29, 0);
      {
        t = not_null(s_29);
        t = tvars_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL,c_30 = NULL,d_30 = NULL,e_30 = NULL;
  c_30 = t;
  x_29 :
  if(match_cons(c_30, sym_LRule_1))
    {
      d_30 = ATgetArgument(c_30, 0);
      y_29 :
      if(match_cons(d_30, sym_Rule_3))
        {
          z_29 = ATgetArgument(d_30, 0);
          a_30 = ATgetArgument(d_30, 1);
          b_30 = ATgetArgument(d_30, 2);
          {
            t = not_null(z_29);
            t = tvars_0(t);
          }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(c_30, sym_Scope_2))
        {
          d_30 = ATgetArgument(c_30, 0);
          e_30 = ATgetArgument(c_30, 1);
          t = not_null(d_30);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm Add1_0 (ATerm t)
{
  ATerm h_31 = NULL,i_31 = NULL;
  h_31 = t;
  g_31 :
  if(match_cons(h_31, sym_Var_1))
    {
      i_31 = ATgetArgument(h_31, 0);
      t = (ATerm) ATinsert(ATempty, not_null(i_31));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm p_66 (ATerm))
{
  ATerm t_31 = NULL,u_31 = NULL,v_31 = NULL;
  t_31 = t;
  s_31 :
  if(match_cons(t_31, sym__2))
    {
      u_31 = ATgetArgument(t_31, 0);
      v_31 = ATgetArgument(t_31, 1);
      {
        t = not_null(u_31);
        {
          ATerm f_32 (ATerm t)
          {
            ATerm j_17 = t;
            int k_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(v_31);
                ;
                LocalPopChoice(k_17);
              }
            else
              {
                t = j_17;
                {
                  ATerm o_17 = t;
                  int q_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm e_3 (ATerm t)
                      {
                        t = not_null(v_31);
                        return(t);
                      }
                      t = HdMember_p__2(t, p_66, e_3);
                      t = f_32(t);
                      ;
                      LocalPopChoice(q_17);
                    }
                  else
                    {
                      t = o_17;
                      t = Cons_2(t, _id, f_32);
                    }
                }
              }
            return(t);
          }
          t = f_32(t);
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
ATerm foldr_3 (ATerm t, ATerm b_69 (ATerm), ATerm c_69 (ATerm), ATerm d_69 (ATerm))
{
  ATerm s_17 = t;
  int v_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = b_69(t);
      ;
      LocalPopChoice(v_17);
    }
  else
    {
      t = s_17;
      {
        ATerm k_32 = NULL,r_32 = NULL,s_32 = NULL;
        k_32 = t;
        j_32 :
        if(((ATgetType(k_32) == AT_LIST) && !(ATisEmpty(k_32))))
          {
            r_32 = ATgetFirst((ATermList) k_32);
            s_32 = (ATerm) ATgetNext((ATermList) k_32);
            {
              ATerm w_32 = NULL,z_32 = NULL;
              ATerm w_17;
              w_17 = t;
              {
                ATerm y_32 = NULL;
                t = not_null(r_32);
                {
                  t = d_69(t);
                  {
                    y_32 = t;
                    if(((w_32 != NULL) && (w_32 != y_32)))
                      _fail(y_32);
                    else
                      w_32 = y_32;
                  }
                }
              }
              t = w_17;
              {
                ATerm a_33 = NULL;
                t = not_null(s_32);
                {
                  t = foldr_3(t, b_69, c_69, d_69);
                  {
                    a_33 = t;
                    if(((z_32 != NULL) && (z_32 != a_33)))
                      _fail(a_33);
                    else
                      z_32 = a_33;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(w_32), not_null(z_32));
                  t = c_69(t);
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
  return(t);
}
ATerm crush_3 (ATerm t, ATerm g_66 (ATerm), ATerm h_66 (ATerm), ATerm i_66 (ATerm))
{
  ATerm i_33 = NULL;
  ATerm k_33 = NULL;
  i_33 = t;
  {
    ATerm l_33 = NULL;
    ATerm n_33 = NULL,o_33 = NULL,p_33 = NULL;
    t = not_null(i_33);
    {
      l_33 = t;
      {
        t = SSL_explode_term(not_null(l_33));
        {
          n_33 = t;
          h_33 :
          if(match_cons(n_33, sym__2))
            {
              o_33 = ATgetArgument(n_33, 0);
              p_33 = ATgetArgument(n_33, 1);
              if(((k_33 != NULL) && (k_33 != p_33)))
                _fail(p_33);
              else
                k_33 = p_33;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(k_33);
      t = foldr_3(t, g_66, h_66, i_66);
    }
  }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm v_33 = NULL,w_33 = NULL,x_33 = NULL;
  v_33 = t;
  u_33 :
  if(match_cons(v_33, sym__2))
    {
      w_33 = ATgetArgument(v_33, 0);
      x_33 = ATgetArgument(v_33, 1);
      if(((w_33 != NULL) && (w_33 != x_33)))
        _fail(x_33);
      else
        w_33 = x_33;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm k_67 (ATerm))
{
  ATerm a_34 (ATerm t)
  {
    ATerm x_17 = t;
    int y_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, k_67, _id);
        ;
        LocalPopChoice(y_17);
      }
    else
      {
        t = x_17;
        t = Cons_2(t, _id, a_34);
      }
    return(t);
  }
  t = a_34(t);
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm t_66 (ATerm), ATerm u_66 (ATerm))
{
  ATerm e_34 = NULL,f_34 = NULL,g_34 = NULL;
  e_34 = t;
  d_34 :
  if(((ATgetType(e_34) == AT_LIST) && !(ATisEmpty(e_34))))
    {
      f_34 = ATgetFirst((ATermList) e_34);
      g_34 = (ATerm) ATgetNext((ATermList) e_34);
      {
        t = u_66(t);
        {
          ATerm f_3 (ATerm t)
          {
            ATerm j_34 = NULL;
            j_34 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(f_34), not_null(j_34));
              t = t_66(t);
            }
            return(t);
          }
          t = fetch_1(t, f_3);
        }
        t = not_null(g_34);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm l_66 (ATerm))
{
  ATerm p_34 = NULL,q_34 = NULL,r_34 = NULL;
  p_34 = t;
  o_34 :
  if(match_cons(p_34, sym__2))
    {
      q_34 = ATgetArgument(p_34, 0);
      r_34 = ATgetArgument(p_34, 1);
      {
        t = not_null(q_34);
        {
          ATerm v_34 (ATerm t)
          {
            ATerm z_17 = t;
            int a_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                ;
                LocalPopChoice(a_18);
              }
            else
              {
                t = z_17;
                {
                  ATerm b_18 = t;
                  int c_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm g_3 (ATerm t)
                      {
                        t = not_null(r_34);
                        return(t);
                      }
                      t = HdMember_p__2(t, l_66, g_3);
                      t = v_34(t);
                      ;
                      LocalPopChoice(c_18);
                    }
                  else
                    {
                      t = b_18;
                      t = Cons_2(t, _id, v_34);
                    }
                }
              }
            return(t);
          }
          t = v_34(t);
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
  t = diff_1(t, eq_0);
  return(t);
}
ATerm split_2 (ATerm t, ATerm q_82 (ATerm), ATerm r_82 (ATerm))
{
  ATerm y_34 = NULL,a_35 = NULL;
  ATerm d_18;
  d_18 = t;
  {
    ATerm z_34 = NULL;
    t = q_82(t);
    {
      z_34 = t;
      if(((y_34 != NULL) && (y_34 != z_34)))
        _fail(z_34);
      else
        y_34 = z_34;
    }
  }
  t = d_18;
  {
    ATerm b_35 = NULL;
    t = r_82(t);
    {
      b_35 = t;
      if(((a_35 != NULL) && (a_35 != b_35)))
        _fail(b_35);
      else
        a_35 = b_35;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_34), not_null(a_35));
  }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm d_87 (ATerm), ATerm e_87 (ATerm), ATerm f_87 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm h_35 (ATerm t)
  {
    ATerm e_18 = t;
    int i_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_87(t);
        ;
        LocalPopChoice(i_18);
      }
    else
      {
        t = e_18;
        {
          ATerm j_18 = t;
          int n_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_35 = NULL;
              ATerm q_18;
              q_18 = t;
              {
                ATerm g_35 = NULL;
                t = e_87(t);
                {
                  g_35 = t;
                  if(((f_35 != NULL) && (f_35 != g_35)))
                    _fail(g_35);
                  else
                    f_35 = g_35;
                }
              }
              t = q_18;
              {
                ATerm h_3 (ATerm t)
                {
                  ATerm j_3 (ATerm t)
                  {
                    t = not_null(f_35);
                    return(t);
                  }
                  t = split_2(t, h_35, j_3);
                  t = diff_0(t);
                  return(t);
                }
                ATerm i_3 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = f_87(t, h_3, h_35, i_3);
                {
                  ATerm k_3 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, k_3, union_0, _id);
                }
              }
              ;
              LocalPopChoice(n_18);
            }
          else
            {
              t = j_18;
              {
                ATerm l_3 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, l_3, union_0, h_35);
              }
            }
        }
      }
    return(t);
  }
  t = h_35(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm m_3 (ATerm t)
  {
    ATerm r_18 = t;
    int s_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        ;
        LocalPopChoice(s_18);
      }
    else
      {
        t = r_18;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, m_3, tboundin_3);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm l_35 = NULL,m_35 = NULL,n_35 = NULL;
  l_35 = t;
  k_35 :
  if(((ATgetType(l_35) == AT_LIST) && !(ATisEmpty(l_35))))
    {
      m_35 = ATgetFirst((ATermList) l_35);
      n_35 = (ATerm) ATgetNext((ATermList) l_35);
      t = not_null(n_35);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm t_35 = NULL,u_35 = NULL,v_35 = NULL;
  t_35 = t;
  s_35 :
  if(match_cons(t_35, sym__2))
    {
      u_35 = ATgetArgument(t_35, 0);
      v_35 = ATgetArgument(t_35, 1);
      {
        ATerm t_18;
        t_18 = t;
        {
          ATerm y_35 = NULL;
          ATerm z_35 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_35), not_null(v_35));
          {
            ATerm u_18 = t;
            int v_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(v_18);
              }
            else
              {
                t = u_18;
                t = (ATerm) ATempty;
              }
            {
              z_35 = t;
              if(((y_35 != NULL) && (y_35 != z_35)))
                _fail(z_35);
              else
                y_35 = z_35;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(u_35), not_null(v_35), not_null(y_35));
            t = table_put_0(t);
          }
        }
        t = t_18;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm map_1 (ATerm t, ATerm b_67 (ATerm))
{
  ATerm c_36 (ATerm t)
  {
    ATerm w_18 = t;
    int x_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(x_18);
      }
    else
      {
        t = w_18;
        t = Cons_2(t, b_67, c_36);
      }
    return(t);
  }
  t = c_36(t);
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm h_70 (ATerm))
{
  ATerm h_36 = NULL,i_36 = NULL,j_36 = NULL;
  ATerm y_18;
  y_18 = t;
  {
    ATerm k_36 = NULL;
    ATerm l_36 = NULL,m_36 = NULL,n_36 = NULL;
    t = h_70(t);
    {
      k_36 = t;
      {
        if(((j_36 != NULL) && (j_36 != k_36)))
          _fail(k_36);
        else
          j_36 = k_36;
        {
          ATerm d_19 = t;
          int e_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(j_36), term_a_17);
              t = table_get_0(t);
              ;
              LocalPopChoice(e_19);
            }
          else
            {
              t = d_19;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            l_36 = t;
            g_36 :
            if(((ATgetType(l_36) == AT_LIST) && !(ATisEmpty(l_36))))
              {
                m_36 = ATgetFirst((ATermList) l_36);
                n_36 = (ATerm) ATgetNext((ATermList) l_36);
                {
                  if(((i_36 != NULL) && (i_36 != m_36)))
                    _fail(m_36);
                  else
                    i_36 = m_36;
                  {
                    if(((h_36 != NULL) && (h_36 != n_36)))
                      _fail(n_36);
                    else
                      h_36 = n_36;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(j_36), term_a_17, not_null(h_36));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(i_36);
                          {
                            ATerm n_3 (ATerm t)
                            {
                              ATerm o_36 = NULL;
                              o_36 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(j_36), not_null(o_36));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, n_3);
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
  t = y_18;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm v_73 (ATerm), ATerm w_73 (ATerm))
{
  ATerm f_19 = t;
  int j_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_73(t);
      t = w_73(t);
      ;
      LocalPopChoice(j_19);
    }
  else
    {
      t = f_19;
      {
        t = w_73(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm v_36 = NULL,w_36 = NULL,x_36 = NULL;
  ATerm l_19;
  l_19 = t;
  {
    ATerm y_36 = NULL,z_36 = NULL,a_37 = NULL,b_37 = NULL;
    y_36 = t;
    u_36 :
    if(match_cons(y_36, sym__3))
      {
        z_36 = ATgetArgument(y_36, 0);
        a_37 = ATgetArgument(y_36, 1);
        b_37 = ATgetArgument(y_36, 2);
        {
          if(((v_36 != NULL) && (v_36 != z_36)))
            _fail(z_36);
          else
            v_36 = z_36;
          {
            if(((w_36 != NULL) && (w_36 != a_37)))
              _fail(a_37);
            else
              w_36 = a_37;
            {
              if(((x_36 != NULL) && (x_36 != b_37)))
                _fail(b_37);
              else
                x_36 = b_37;
              t = SSL_table_put(not_null(v_36), not_null(w_36), not_null(x_36));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = l_19;
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm f_37 = NULL,g_37 = NULL,h_37 = NULL;
  f_37 = t;
  e_37 :
  if(match_cons(f_37, sym__2))
    {
      g_37 = ATgetArgument(f_37, 0);
      h_37 = ATgetArgument(f_37, 1);
      t = SSL_table_get(not_null(g_37), not_null(h_37));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm g_70 (ATerm))
{
  ATerm n_37 = NULL;
  ATerm o_19;
  o_19 = t;
  {
    ATerm o_37 = NULL;
    ATerm p_37 = NULL;
    t = g_70(t);
    {
      o_37 = t;
      {
        if(((n_37 != NULL) && (n_37 != o_37)))
          _fail(o_37);
        else
          n_37 = o_37;
        {
          ATerm q_37 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_37), term_a_17);
          {
            ATerm p_19 = t;
            int q_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(q_19);
              }
            else
              {
                t = p_19;
                t = (ATerm) ATempty;
              }
            {
              q_37 = t;
              if(((p_37 != NULL) && (p_37 != q_37)))
                _fail(q_37);
              else
                p_37 = q_37;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(n_37), term_a_17, (ATerm) ATinsert(CheckATermList(not_null(p_37)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = o_19;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm i_70 (ATerm), ATerm j_70 (ATerm))
{
  t = begin_scope_1(t, i_70);
  {
    ATerm o_3 (ATerm t)
    {
      t = end_scope_1(t, i_70);
      return(t);
    }
    t = restore_always_2(t, j_70, o_3);
  }
  return(t);
}
ATerm def_use_def_0 (ATerm t)
{
  ATerm p_3 (ATerm t)
  {
    t = term_l_11;
    return(t);
  }
  ATerm q_3 (ATerm t)
  {
    ATerm r_3 (ATerm t)
    {
      t = term_i_11;
      return(t);
    }
    ATerm s_3 (ATerm t)
    {
      ATerm r_19 = t;
      int s_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_19;
          t_19 = t;
          {
            t = tvars_0(t);
            t = DefineUnbound_0(t);
          }
          t = t_19;
          t = sdef_ud_0(t);
          ;
          LocalPopChoice(s_19);
        }
      else
        {
          t = r_19;
          {
            ATerm u_19 = t;
            int b_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = rdef_ud_0(t);
                ;
                LocalPopChoice(b_20);
              }
            else
              {
                t = u_19;
                t = overlay_ud_0(t);
              }
          }
        }
      return(t);
    }
    t = scope_2(t, r_3, s_3);
    return(t);
  }
  t = scope_2(t, p_3, q_3);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm b_54 (ATerm), ATerm c_54 (ATerm))
{
  ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL;
  z_37 = t;
  y_37 :
  if(((ATgetType(z_37) == AT_LIST) && !(ATisEmpty(z_37))))
    {
      a_38 = ATgetFirst((ATermList) z_37);
      b_38 = (ATerm) ATgetNext((ATermList) z_37);
      {
        ATerm h_38 = NULL,j_38 = NULL;
        ATerm i_38 = NULL;
        t = SSLgetAnnotations(not_null(z_37));
        {
          i_38 = t;
          if(((h_38 != NULL) && (h_38 != i_38)))
            _fail(i_38);
          else
            h_38 = i_38;
        }
        {
          t = not_null(a_38);
          {
            ATerm l_38 = NULL;
            t = b_54(t);
            {
              j_38 = t;
              {
                t = not_null(b_38);
                {
                  ATerm n_38 = NULL;
                  t = c_54(t);
                  {
                    l_38 = t;
                    {
                      ATerm o_38 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(l_38)), not_null(j_38)), not_null(h_38));
                      {
                        o_38 = t;
                        if(((n_38 != NULL) && (n_38 != o_38)))
                          _fail(o_38);
                        else
                          n_38 = o_38;
                      }
                      t = not_null(n_38);
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
ATerm filter_1 (ATerm t, ATerm g_76 (ATerm))
{
  ATerm c_20 = t;
  int d_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(d_20);
    }
  else
    {
      t = c_20;
      {
        ATerm i_20 = t;
        int j_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_3 (ATerm t)
            {
              t = filter_1(t, g_76);
              return(t);
            }
            t = Cons_2(t, g_76, t_3);
            ;
            LocalPopChoice(j_20);
          }
        else
          {
            t = i_20;
            {
              ATerm w_38 = NULL,x_38 = NULL,y_38 = NULL;
              w_38 = t;
              v_38 :
              if(((ATgetType(w_38) == AT_LIST) && !(ATisEmpty(w_38))))
                {
                  x_38 = ATgetFirst((ATermList) w_38);
                  y_38 = (ATerm) ATgetNext((ATermList) w_38);
                  {
                    t = not_null(y_38);
                    t = filter_1(t, g_76);
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
ATerm defs_use_def_0 (ATerm t)
{
  ATerm k_20 = t;
  int l_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(l_20);
    }
  else
    {
      t = k_20;
      {
        ATerm q_20;
        q_20 = t;
        {
          ATerm u_3 (ATerm t)
          {
            ATerm r_20 = t;
            if((PushChoice() == 0))
              {
                t = def_use_def_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = r_20;
              }
            return(t);
          }
          t = filter_1(t, u_3);
          t = Nil_0(t);
        }
        t = q_20;
      }
    }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm g_54 (ATerm))
{
  ATerm g_39 = NULL,h_39 = NULL;
  g_39 = t;
  f_39 :
  if(match_cons(g_39, sym_Strategies_1))
    {
      h_39 = ATgetArgument(g_39, 0);
      {
        ATerm k_39 = NULL,m_39 = NULL;
        ATerm l_39 = NULL;
        t = SSLgetAnnotations(not_null(g_39));
        {
          l_39 = t;
          if(((k_39 != NULL) && (k_39 != l_39)))
            _fail(l_39);
          else
            k_39 = l_39;
        }
        {
          t = not_null(h_39);
          {
            ATerm o_39 = NULL;
            t = g_54(t);
            {
              m_39 = t;
              {
                ATerm p_39 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(m_39)), not_null(k_39));
                {
                  p_39 = t;
                  if(((o_39 != NULL) && (o_39 != p_39)))
                    _fail(p_39);
                  else
                    o_39 = p_39;
                }
                t = not_null(o_39);
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
ATerm debug_0 (ATerm t)
{
  ATerm u_20;
  u_20 = t;
  {
    ATerm v_39 = NULL;
    ATerm w_39 = NULL;
    w_39 = t;
    if(((v_39 != NULL) && (v_39 != w_39)))
      _fail(w_39);
    else
      v_39 = w_39;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_p_12, (ATerm) ATinsert(ATempty, not_null(v_39)));
      t = printnl_0(t);
    }
  }
  t = u_20;
  return(t);
}
ATerm record_failure_0 (ATerm t)
{
  ATerm v_3 (ATerm t)
  {
    ATerm z_39 = NULL;
    z_39 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(z_39), term_v_20);
      t = add_0(t);
    }
    return(t);
  }
  t = _2(t, _id, v_3);
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm e_40 = NULL,f_40 = NULL,g_40 = NULL;
  e_40 = t;
  d_40 :
  if(match_cons(e_40, sym__2))
    {
      f_40 = ATgetArgument(e_40, 0);
      g_40 = ATgetArgument(e_40, 1);
      {
        ATerm w_20 = t;
        int a_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(f_40), not_null(g_40));
            ;
            LocalPopChoice(a_21);
          }
        else
          {
            t = w_20;
            t = SSL_addr(not_null(f_40), not_null(g_40));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm record_success_0 (ATerm t)
{
  ATerm w_3 (ATerm t)
  {
    ATerm l_40 = NULL;
    l_40 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(l_40), term_v_20);
      t = add_0(t);
    }
    return(t);
  }
  t = _2(t, w_3, _id);
  return(t);
}
ATerm do_test_2 (ATerm t, ATerm o_87 (ATerm), ATerm p_87 (ATerm))
{
  ATerm b_21;
  b_21 = t;
  {
    t = o_87(t);
    t = debug_0(t);
  }
  t = b_21;
  {
    ATerm c_21 = t;
    int d_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_21;
        e_21 = t;
        t = p_87(t);
        t = e_21;
        t = record_success_0(t);
        ;
        LocalPopChoice(d_21);
      }
    else
      {
        t = c_21;
        t = record_failure_0(t);
      }
  }
  return(t);
}
ATerm apply_and_fail_4 (ATerm t, ATerm g_88 (ATerm), ATerm h_88 (ATerm), ATerm i_88 (ATerm), ATerm j_88 (ATerm))
{
  ATerm x_3 (ATerm t)
  {
    ATerm f_21 = t;
    int g_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_88(t);
        {
          ATerm h_21 = t;
          if((PushChoice() == 0))
            {
              t = h_88(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = h_21;
            }
        }
        ;
        LocalPopChoice(g_21);
      }
    else
      {
        t = f_21;
        {
          t = term_i_21;
          {
            t = debug_0(t);
            _fail(t);
          }
        }
      }
    return(t);
  }
  t = do_test_2(t, g_88, x_3);
  return(t);
}
ATerm apply_and_fail_3 (ATerm t, ATerm d_88 (ATerm), ATerm e_88 (ATerm), ATerm f_88 (ATerm))
{
  ATerm y_3 (ATerm t)
  {
    t = term_n_13;
    return(t);
  }
  t = apply_and_fail_4(t, d_88, e_88, f_88, y_3);
  return(t);
}
ATerm test1_0 (ATerm t)
{
  ATerm z_3 (ATerm t)
  {
    t = term_j_21;
    return(t);
  }
  ATerm a_4 (ATerm t)
  {
    t = Strategies_1(t, defs_use_def_0);
    return(t);
  }
  ATerm b_4 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_m_8, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_x_4))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_y_6, (ATerm) ATinsert(ATempty, term_c_7))), term_x_4)))))), (ATerm) ATmakeAppl(sym_SDef_3, term_t_7, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_x_4))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_z_6, (ATerm) ATinsert(ATempty, term_x_4)))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_y_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_x_4)))))), (ATerm) ATmakeAppl(sym_SDef_3, term_e_5, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, term_c_7), term_x_4))), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_y_6, (ATerm) ATinsert(ATinsert(ATempty, term_p_7), term_c_7))), term_x_4)))))));
    return(t);
  }
  t = apply_and_fail_3(t, z_3, a_4, b_4);
  return(t);
}
ATerm check_for_failures_0 (ATerm t)
{
  ATerm c_4 (ATerm t)
  {
    ATerm p_40 = NULL;
    p_40 = t;
    o_40 :
    if(!(match_int(p_40, 0)))
      {
        _fail(t);
      }
    return(t);
  }
  t = _2(t, _id, c_4);
  return(t);
}
ATerm _2 (ATerm t, ATerm s_52 (ATerm), ATerm t_52 (ATerm))
{
  ATerm w_40 = NULL,x_40 = NULL,y_40 = NULL;
  w_40 = t;
  v_40 :
  if(match_cons(w_40, sym__2))
    {
      x_40 = ATgetArgument(w_40, 0);
      y_40 = ATgetArgument(w_40, 1);
      {
        ATerm c_41 = NULL,e_41 = NULL;
        ATerm d_41 = NULL;
        t = SSLgetAnnotations(not_null(w_40));
        {
          d_41 = t;
          if(((c_41 != NULL) && (c_41 != d_41)))
            _fail(d_41);
          else
            c_41 = d_41;
        }
        {
          t = not_null(x_40);
          {
            ATerm g_41 = NULL;
            t = s_52(t);
            {
              e_41 = t;
              {
                t = not_null(y_40);
                {
                  ATerm i_41 = NULL;
                  t = t_52(t);
                  {
                    g_41 = t;
                    {
                      ATerm j_41 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(e_41), not_null(g_41)), not_null(c_41));
                      {
                        j_41 = t;
                        if(((i_41 != NULL) && (i_41 != j_41)))
                          _fail(j_41);
                        else
                          i_41 = j_41;
                      }
                      t = not_null(i_41);
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
ATerm report_test_0 (ATerm t)
{
  ATerm d_4 (ATerm t)
  {
    ATerm f_4 (ATerm t)
    {
      t = term_n_21;
      return(t);
    }
    t = debug_1(t, f_4);
    return(t);
  }
  ATerm e_4 (ATerm t)
  {
    ATerm g_4 (ATerm t)
    {
      t = term_o_21;
      return(t);
    }
    t = debug_1(t, g_4);
    return(t);
  }
  t = _2(t, d_4, e_4);
  return(t);
}
ATerm init_record_0 (ATerm t)
{
  t = term_v_21;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm r_41 = NULL,s_41 = NULL,t_41 = NULL;
  r_41 = t;
  q_41 :
  if(match_cons(r_41, sym__2))
    {
      s_41 = ATgetArgument(r_41, 0);
      t_41 = ATgetArgument(r_41, 1);
      {
        ATerm w_21;
        w_21 = t;
        t = SSL_printnl(not_null(s_41), not_null(t_41));
        t = w_21;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm w_76 (ATerm))
{
  ATerm a_22;
  a_22 = t;
  {
    ATerm z_41 = NULL,b_42 = NULL;
    ATerm d_22;
    d_22 = t;
    {
      ATerm a_42 = NULL;
      t = w_76(t);
      {
        a_42 = t;
        if(((z_41 != NULL) && (z_41 != a_42)))
          _fail(a_42);
        else
          z_41 = a_42;
      }
    }
    t = d_22;
    {
      ATerm c_42 = NULL;
      c_42 = t;
      if(((b_42 != NULL) && (b_42 != c_42)))
        _fail(c_42);
      else
        b_42 = c_42;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_42)), not_null(z_41)));
        t = printnl_0(t);
      }
    }
  }
  t = a_22;
  return(t);
}
ATerm test_suite_2 (ATerm t, ATerm m_87 (ATerm), ATerm n_87 (ATerm))
{
  t = m_87(t);
  {
    ATerm h_4 (ATerm t)
    {
      t = term_e_22;
      return(t);
    }
    t = debug_1(t, h_4);
    {
      t = init_record_0(t);
      {
        t = n_87(t);
        {
          t = report_test_0(t);
          t = check_for_failures_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm use_def_test_0 (ATerm t)
{
  ATerm i_4 (ATerm t)
  {
    t = term_f_22;
    return(t);
  }
  ATerm j_4 (ATerm t)
  {
    t = test1_0(t);
    {
      t = test2_0(t);
      {
        t = test3_0(t);
        {
          t = test4_0(t);
          {
            t = test5_0(t);
            {
              t = test6_0(t);
              {
                t = test7_0(t);
                {
                  t = test8_0(t);
                  {
                    t = test9_0(t);
                    {
                      t = test10_0(t);
                      {
                        t = test11_0(t);
                        t = test12_0(t);
                      }
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
  t = test_suite_2(t, i_4, j_4);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = use_def_test_0(t);
  return(t);
}
