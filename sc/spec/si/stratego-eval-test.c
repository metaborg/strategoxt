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
Symbol sym_NULL_0;
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
Symbol sym_Sort_2;
Symbol sym_OpDecl_2;
Symbol sym_Sorts_1;
Symbol sym_Constructors_1;
Symbol sym_NoKind_0;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
  sym_NULL_0 = ATmakeSymbol("NULL", 0, ATfalse);
  ATprotectSymbol(sym_NULL_0);
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
ATerm term_k_4;
ATerm term_j_4;
ATerm term_a_4;
ATerm term_v_3;
ATerm term_s_3;
ATerm term_r_3;
ATerm term_q_3;
ATerm term_p_3;
ATerm term_o_3;
ATerm term_n_3;
ATerm term_j_3;
ATerm term_g_3;
ATerm term_c_3;
ATerm term_b_3;
ATerm term_y_2;
ATerm term_l_2;
ATerm term_k_2;
void init_constant_terms (void)
{
  ATprotect(&(term_k_2));
  term_k_2 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_2));
  term_l_2 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_2));
  term_y_2 = (ATerm) ATmakeAppl(ATmakeSymbol("  failed", 0, ATtrue));
  ATprotect(&(term_b_3));
  term_b_3 = (ATerm) ATmakeAppl(ATmakeSymbol("  result not equal: ", 0, ATtrue));
  ATprotect(&(term_c_3));
  term_c_3 = (ATerm) ATmakeAppl(ATmakeSymbol("  expected: ", 0, ATtrue));
  ATprotect(&(term_g_3));
  term_g_3 = (ATerm) ATmakeAppl(ATmakeSymbol("test1", 0, ATtrue));
  ATprotect(&(term_j_3));
  term_j_3 = (ATerm) ATmakeAppl(ATmakeSymbol("x", 0, ATtrue));
  ATprotect(&(term_n_3));
  term_n_3 = (ATerm) ATmakeAppl(sym_Var_1, term_j_3);
  ATprotect(&(term_o_3));
  term_o_3 = (ATerm) ATmakeAppl(ATmakeSymbol("F", 0, ATtrue));
  ATprotect(&(term_p_3));
  term_p_3 = (ATerm) ATmakeAppl(ATmakeSymbol("A", 0, ATtrue));
  ATprotect(&(term_q_3));
  term_q_3 = (ATerm) ATmakeAppl(sym_Op_2, term_p_3, (ATerm) ATempty);
  ATprotect(&(term_r_3));
  term_r_3 = (ATerm) ATmakeAppl(ATmakeSymbol("successes: ", 0, ATtrue));
  ATprotect(&(term_s_3));
  term_s_3 = (ATerm) ATmakeAppl(ATmakeSymbol("failures: ", 0, ATtrue));
  ATprotect(&(term_v_3));
  term_v_3 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_4));
  term_a_4 = (ATerm) ATmakeAppl(sym__2, term_v_3, term_v_3);
  ATprotect(&(term_j_4));
  term_j_4 = (ATerm) ATmakeAppl(ATmakeSymbol("test suite: ", 0, ATtrue));
  ATprotect(&(term_k_4));
  term_k_4 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-eval-test", 0, ATtrue));
}
ATerm Var_1 (ATerm, ATerm c_0 (ATerm));
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm Nil_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm q_91 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm c_93 (ATerm), ATerm d_93 (ATerm), ATerm e_93 (ATerm), ATerm f_93 (ATerm));
ATerm zip_1 (ATerm, ATerm h_93 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm b_75 (ATerm), ATerm c_75 (ATerm));
ATerm fetch_1 (ATerm, ATerm k_91 (ATerm));
ATerm MatchVar_1 (ATerm, ATerm a_0 (ATerm));
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm b_105 (ATerm), ATerm c_105 (ATerm));
ATerm for_3 (ATerm, ATerm e_105 (ATerm), ATerm f_105 (ATerm), ATerm g_105 (ATerm));
ATerm pattern_match_1 (ATerm, ATerm e_86 (ATerm));
ATerm debug_0 (ATerm);
ATerm record_failure_0 (ATerm);
ATerm add_0 (ATerm);
ATerm record_success_0 (ATerm);
ATerm do_test_2 (ATerm, ATerm l_101 (ATerm), ATerm m_101 (ATerm));
ATerm apply_test_4 (ATerm, ATerm p_101 (ATerm), ATerm q_101 (ATerm), ATerm r_101 (ATerm), ATerm s_101 (ATerm));
ATerm test1_0 (ATerm);
ATerm check_for_failures_0 (ATerm);
ATerm _2 (ATerm, ATerm s_73 (ATerm), ATerm t_73 (ATerm));
ATerm report_test_0 (ATerm);
ATerm init_record_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm o_102 (ATerm));
ATerm test_suite_2 (ATerm, ATerm j_101 (ATerm), ATerm k_101 (ATerm));
ATerm main_0 (ATerm);
ATerm Var_1 (ATerm t, ATerm c_0 (ATerm))
{
  ATerm r_1 = NULL,s_1 = NULL;
  r_1 = t;
  q_1 :
  if(match_cons(r_1, sym_Var_1))
    {
      s_1 = ATgetArgument(r_1, 0);
      {
        ATerm z_0 = t;
        int a_1 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_1 = NULL,x_1 = NULL;
            ATerm w_1 = NULL;
            t = SSLgetAnnotations(not_null(r_1));
            {
              w_1 = t;
              if(((v_1 != NULL) && (v_1 != w_1)))
                _fail(w_1);
              else
                v_1 = w_1;
            }
            {
              t = not_null(s_1);
              {
                ATerm z_1 = NULL;
                t = c_0(t);
                {
                  x_1 = t;
                  {
                    ATerm a_2 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(x_1)), not_null(v_1));
                    {
                      a_2 = t;
                      if(((z_1 != NULL) && (z_1 != a_2)))
                        _fail(a_2);
                      else
                        z_1 = a_2;
                    }
                    t = not_null(z_1);
                  }
                }
              }
            }
            ;
            LocalPopChoice(a_1);
          }
        else
          {
            t = z_0;
            {
              ATerm d_2 = NULL,f_2 = NULL;
              ATerm e_2 = NULL;
              t = SSLgetAnnotations(not_null(r_1));
              {
                e_2 = t;
                if(((d_2 != NULL) && (d_2 != e_2)))
                  _fail(e_2);
                else
                  d_2 = e_2;
              }
              {
                t = not_null(s_1);
                {
                  ATerm h_2 = NULL;
                  t = c_0(t);
                  {
                    f_2 = t;
                    {
                      ATerm i_2 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(f_2)), not_null(d_2));
                      {
                        i_2 = t;
                        if(((h_2 != NULL) && (h_2 != i_2)))
                          _fail(i_2);
                        else
                          h_2 = i_2;
                      }
                      t = not_null(h_2);
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
ATerm concat_0 (ATerm t)
{
  ATerm b_1 = t;
  int c_1 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(c_1);
    }
  else
    {
      t = b_1;
      {
        ATerm t_2 = NULL,u_2 = NULL,v_2 = NULL;
        t_2 = t;
        s_2 :
        if(((ATgetType(t_2) == AT_LIST) && !(ATisEmpty(t_2))))
          {
            u_2 = ATgetFirst((ATermList) t_2);
            v_2 = (ATerm) ATgetNext((ATermList) t_2);
            {
              t = not_null(u_2);
              {
                ATerm b_0 (ATerm t)
                {
                  t = not_null(v_2);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, b_0);
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
  ATerm f_3 = NULL;
  ATerm h_3 = NULL;
  f_3 = t;
  {
    ATerm i_3 = NULL;
    ATerm k_3 = NULL,l_3 = NULL,m_3 = NULL;
    t = not_null(f_3);
    {
      i_3 = t;
      {
        t = SSL_explode_term(not_null(i_3));
        {
          k_3 = t;
          d_3 :
          if(match_cons(k_3, sym__2))
            {
              l_3 = ATgetArgument(k_3, 0);
              m_3 = ATgetArgument(k_3, 1);
              e_3 :
              if(match_string(l_3, ""))
                {
                  if(((h_3 != NULL) && (h_3 != m_3)))
                    _fail(m_3);
                  else
                    h_3 = m_3;
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
      t = not_null(h_3);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm u_3 = NULL;
  u_3 = t;
  t_3 :
  if(((ATgetType(u_3) == AT_LIST) && ATisEmpty(u_3)))
    {
      {
        ATerm w_3 = NULL,y_3 = NULL;
        ATerm d_1;
        d_1 = t;
        {
          ATerm x_3 = NULL;
          t = SSLgetAnnotations(not_null(u_3));
          {
            x_3 = t;
            if(((w_3 != NULL) && (w_3 != x_3)))
              _fail(x_3);
            else
              w_3 = x_3;
          }
        }
        t = d_1;
        {
          ATerm z_3 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(w_3));
          {
            z_3 = t;
            if(((y_3 != NULL) && (y_3 != z_3)))
              _fail(z_3);
            else
              y_3 = z_3;
          }
          t = not_null(y_3);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm q_91 (ATerm))
{
  ATerm d_4 (ATerm t)
  {
    ATerm e_1 = t;
    int f_1 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, d_4);
        ;
        LocalPopChoice(f_1);
      }
    else
      {
        t = e_1;
        {
          t = Nil_0(t);
          t = q_91(t);
        }
      }
    return(t);
  }
  t = d_4(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm g_4 = NULL,h_4 = NULL,i_4 = NULL;
  g_4 = t;
  f_4 :
  if(match_cons(g_4, sym__2))
    {
      h_4 = ATgetArgument(g_4, 0);
      i_4 = ATgetArgument(g_4, 1);
      {
        t = not_null(h_4);
        {
          ATerm d_0 (ATerm t)
          {
            t = not_null(i_4);
            return(t);
          }
          t = at_end_1(t, d_0);
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
  ATerm g_1 = t;
  int h_1 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(h_1);
    }
  else
    {
      t = g_1;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm Zip3_0 (ATerm t)
{
  ATerm o_4 = NULL,p_4 = NULL,q_4 = NULL;
  o_4 = t;
  n_4 :
  if(match_cons(o_4, sym__2))
    {
      p_4 = ATgetArgument(o_4, 0);
      q_4 = ATgetArgument(o_4, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(q_4)), not_null(p_4));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm y_4 = NULL,z_4 = NULL,a_5 = NULL,b_5 = NULL,c_5 = NULL,d_5 = NULL,e_5 = NULL;
  y_4 = t;
  v_4 :
  if(match_cons(y_4, sym__2))
    {
      z_4 = ATgetArgument(y_4, 0);
      c_5 = ATgetArgument(y_4, 1);
      w_4 :
      if(((ATgetType(z_4) == AT_LIST) && !(ATisEmpty(z_4))))
        {
          a_5 = ATgetFirst((ATermList) z_4);
          b_5 = (ATerm) ATgetNext((ATermList) z_4);
          x_4 :
          if(((ATgetType(c_5) == AT_LIST) && !(ATisEmpty(c_5))))
            {
              d_5 = ATgetFirst((ATermList) c_5);
              e_5 = (ATerm) ATgetNext((ATermList) c_5);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(a_5), not_null(d_5)), (ATerm) ATmakeAppl(sym__2, not_null(b_5), not_null(e_5)));
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
  ATerm o_5 = NULL,p_5 = NULL,q_5 = NULL;
  o_5 = t;
  l_5 :
  if(match_cons(o_5, sym__2))
    {
      p_5 = ATgetArgument(o_5, 0);
      q_5 = ATgetArgument(o_5, 1);
      m_5 :
      if(((ATgetType(p_5) == AT_LIST) && ATisEmpty(p_5)))
        {
          n_5 :
          if(((ATgetType(q_5) == AT_LIST) && ATisEmpty(q_5)))
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
ATerm genzip_4 (ATerm t, ATerm c_93 (ATerm), ATerm d_93 (ATerm), ATerm e_93 (ATerm), ATerm f_93 (ATerm))
{
  ATerm s_5 (ATerm t)
  {
    ATerm i_1 = t;
    int j_1 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_93(t);
        ;
        LocalPopChoice(j_1);
      }
    else
      {
        t = i_1;
        {
          t = d_93(t);
          {
            t = _2(t, f_93, s_5);
            t = e_93(t);
          }
        }
      }
    return(t);
  }
  t = s_5(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm h_93 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, h_93);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm d_6 = NULL,e_6 = NULL,f_6 = NULL,g_6 = NULL,h_6 = NULL;
  d_6 = t;
  b_6 :
  if(((ATgetType(d_6) == AT_LIST) && !(ATisEmpty(d_6))))
    {
      e_6 = ATgetFirst((ATermList) d_6);
      h_6 = (ATerm) ATgetNext((ATermList) d_6);
      c_6 :
      if(match_cons(e_6, sym__2))
        {
          f_6 = ATgetArgument(e_6, 0);
          g_6 = ATgetArgument(e_6, 1);
          {
            ATerm l_6 = NULL,m_6 = NULL,s_6 = NULL,y_6 = NULL;
            ATerm k_1;
            k_1 = t;
            {
              ATerm n_6 = NULL;
              ATerm p_6 = NULL,q_6 = NULL,r_6 = NULL;
              t = not_null(g_6);
              {
                n_6 = t;
                {
                  t = SSL_explode_term(not_null(n_6));
                  {
                    p_6 = t;
                    w_5 :
                    if(match_cons(p_6, sym__2))
                      {
                        q_6 = ATgetArgument(p_6, 0);
                        r_6 = ATgetArgument(p_6, 1);
                        {
                          if(((l_6 != NULL) && (l_6 != q_6)))
                            _fail(q_6);
                          else
                            l_6 = q_6;
                          if(((m_6 != NULL) && (m_6 != r_6)))
                            _fail(r_6);
                          else
                            m_6 = r_6;
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
            t = k_1;
            {
              ATerm l_1;
              l_1 = t;
              {
                ATerm t_6 = NULL;
                ATerm v_6 = NULL,w_6 = NULL,x_6 = NULL;
                t = not_null(f_6);
                {
                  t_6 = t;
                  {
                    t = SSL_explode_term(not_null(t_6));
                    {
                      v_6 = t;
                      z_5 :
                      if(match_cons(v_6, sym__2))
                        {
                          w_6 = ATgetArgument(v_6, 0);
                          x_6 = ATgetArgument(v_6, 1);
                          {
                            if(((l_6 != NULL) && (l_6 != w_6)))
                              _fail(w_6);
                            else
                              l_6 = w_6;
                            if(((s_6 != NULL) && (s_6 != x_6)))
                              _fail(x_6);
                            else
                              s_6 = x_6;
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
              t = l_1;
              {
                ATerm z_6 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(s_6), not_null(m_6));
                {
                  t = zip_1(t, _id);
                  {
                    z_6 = t;
                    if(((y_6 != NULL) && (y_6 != z_6)))
                      _fail(z_6);
                    else
                      y_6 = z_6;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(y_6), not_null(h_6));
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
ATerm eq_0 (ATerm t)
{
  ATerm i_7 = NULL,j_7 = NULL,k_7 = NULL;
  i_7 = t;
  h_7 :
  if(match_cons(i_7, sym__2))
    {
      j_7 = ATgetArgument(i_7, 0);
      k_7 = ATgetArgument(i_7, 1);
      if(((j_7 != NULL) && (j_7 != k_7)))
        _fail(k_7);
      else
        j_7 = k_7;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm b_75 (ATerm), ATerm c_75 (ATerm))
{
  ATerm t_7 = NULL,u_7 = NULL,v_7 = NULL;
  t_7 = t;
  s_7 :
  if(((ATgetType(t_7) == AT_LIST) && !(ATisEmpty(t_7))))
    {
      u_7 = ATgetFirst((ATermList) t_7);
      v_7 = (ATerm) ATgetNext((ATermList) t_7);
      {
        ATerm z_7 = NULL,b_8 = NULL;
        ATerm a_8 = NULL;
        t = SSLgetAnnotations(not_null(t_7));
        {
          a_8 = t;
          if(((z_7 != NULL) && (z_7 != a_8)))
            _fail(a_8);
          else
            z_7 = a_8;
        }
        {
          t = not_null(u_7);
          {
            ATerm d_8 = NULL;
            t = b_75(t);
            {
              b_8 = t;
              {
                t = not_null(v_7);
                {
                  ATerm f_8 = NULL;
                  t = c_75(t);
                  {
                    d_8 = t;
                    {
                      ATerm g_8 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(d_8)), not_null(b_8)), not_null(z_7));
                      {
                        g_8 = t;
                        if(((f_8 != NULL) && (f_8 != g_8)))
                          _fail(g_8);
                        else
                          f_8 = g_8;
                      }
                      t = not_null(f_8);
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
ATerm fetch_1 (ATerm t, ATerm k_91 (ATerm))
{
  ATerm m_8 (ATerm t)
  {
    ATerm m_1 = t;
    int n_1 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, k_91, _id);
        ;
        LocalPopChoice(n_1);
      }
    else
      {
        t = m_1;
        t = Cons_2(t, _id, m_8);
      }
    return(t);
  }
  t = m_8(t);
  return(t);
}
ATerm MatchVar_1 (ATerm t, ATerm a_0 (ATerm))
{
  ATerm x_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL,c_9 = NULL,d_9 = NULL;
  c_9 = t;
  u_8 :
  if(match_cons(c_9, sym__2))
    {
      d_9 = ATgetArgument(c_9, 0);
      b_9 = ATgetArgument(c_9, 1);
      v_8 :
      if(((ATgetType(d_9) == AT_LIST) && !(ATisEmpty(d_9))))
        {
          x_8 = ATgetFirst((ATermList) d_9);
          a_9 = (ATerm) ATgetNext((ATermList) d_9);
          w_8 :
          if(match_cons(x_8, sym__2))
            {
              y_8 = ATgetArgument(x_8, 0);
              z_8 = ATgetArgument(x_8, 1);
              {
                t = not_null(y_8);
                {
                  t = a_0(t);
                  {
                    t = not_null(b_9);
                    {
                      ATerm o_1 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm e_0 (ATerm t)
                          {
                            ATerm i_9 = NULL,j_9 = NULL,k_9 = NULL;
                            i_9 = t;
                            q_8 :
                            if(match_cons(i_9, sym__2))
                              {
                                j_9 = ATgetArgument(i_9, 0);
                                k_9 = ATgetArgument(i_9, 1);
                                {
                                  ATerm l_9 = NULL;
                                  if(((y_8 != NULL) && (y_8 != j_9)))
                                    _fail(j_9);
                                  else
                                    y_8 = j_9;
                                  {
                                    if(((l_9 != NULL) && (l_9 != k_9)))
                                      _fail(k_9);
                                    else
                                      l_9 = k_9;
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(z_8), not_null(l_9));
                                      {
                                        ATerm p_1 = t;
                                        if((PushChoice() == 0))
                                          {
                                            t = eq_0(t);
                                            PopChoice();
                                            _fail(t);
                                          }
                                        else
                                          {
                                            t = p_1;
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
                          t = fetch_1(t, e_0);
                          PopChoice();
                          _fail(t);
                        }
                      else
                        {
                          t = o_1;
                        }
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym__2, not_null(a_9), (ATerm) ATinsert(CheckATermList(not_null(b_9)), (ATerm) ATmakeAppl(sym__2, not_null(y_8), not_null(z_8))));
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
      if(match_cons(c_9, sym_MatchVar_1))
        {
          d_9 = ATgetArgument(c_9, 0);
          {
            ATerm o_9 = NULL,q_9 = NULL;
            ATerm p_9 = NULL;
            t = SSLgetAnnotations(not_null(c_9));
            {
              p_9 = t;
              if(((o_9 != NULL) && (o_9 != p_9)))
                _fail(p_9);
              else
                o_9 = p_9;
            }
            {
              t = not_null(d_9);
              {
                ATerm s_9 = NULL;
                t = a_0(t);
                {
                  q_9 = t;
                  {
                    ATerm t_9 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_MatchVar_1, not_null(q_9)), not_null(o_9));
                    {
                      t_9 = t;
                      if(((s_9 != NULL) && (s_9 != t_9)))
                        _fail(t_9);
                      else
                        s_9 = t_9;
                    }
                    t = not_null(s_9);
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
  return(t);
}
ATerm UfIdem_0 (ATerm t)
{
  ATerm d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL;
  d_10 = t;
  b_10 :
  if(((ATgetType(d_10) == AT_LIST) && !(ATisEmpty(d_10))))
    {
      e_10 = ATgetFirst((ATermList) d_10);
      h_10 = (ATerm) ATgetNext((ATermList) d_10);
      c_10 :
      if(match_cons(e_10, sym__2))
        {
          f_10 = ATgetArgument(e_10, 0);
          g_10 = ATgetArgument(e_10, 1);
          {
            ATerm j_10 = NULL;
            if(((f_10 != NULL) && (f_10 != g_10)))
              _fail(g_10);
            else
              f_10 = g_10;
            {
              if(((j_10 != NULL) && (j_10 != h_10)))
                _fail(h_10);
              else
                j_10 = h_10;
              t = not_null(j_10);
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
ATerm while_not_2 (ATerm t, ATerm b_105 (ATerm), ATerm c_105 (ATerm))
{
  ATerm l_10 (ATerm t)
  {
    ATerm t_1 = t;
    int u_1 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_105(t);
        ;
        LocalPopChoice(u_1);
      }
    else
      {
        t = t_1;
        {
          t = c_105(t);
          t = l_10(t);
        }
      }
    return(t);
  }
  t = l_10(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm e_105 (ATerm), ATerm f_105 (ATerm), ATerm g_105 (ATerm))
{
  t = e_105(t);
  t = while_not_2(t, f_105, g_105);
  return(t);
}
ATerm pattern_match_1 (ATerm t, ATerm e_86 (ATerm))
{
  ATerm f_0 (ATerm t)
  {
    ATerm q_10 = NULL;
    q_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_10), (ATerm) ATempty);
    return(t);
  }
  ATerm g_0 (ATerm t)
  {
    ATerm s_10 = NULL,t_10 = NULL,u_10 = NULL;
    s_10 = t;
    o_10 :
    if(match_cons(s_10, sym__2))
      {
        t_10 = ATgetArgument(s_10, 0);
        u_10 = ATgetArgument(s_10, 1);
        p_10 :
        if(((ATgetType(t_10) == AT_LIST) && ATisEmpty(t_10)))
          {
            t = not_null(u_10);
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
  ATerm h_0 (ATerm t)
  {
    ATerm y_1 = t;
    int b_2 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = _2(t, UfIdem_0, _id);
        ;
        LocalPopChoice(b_2);
      }
    else
      {
        t = y_1;
        {
          ATerm c_2 = t;
          int g_2 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = MatchVar_1(t, e_86);
              ;
              LocalPopChoice(g_2);
            }
          else
            {
              t = c_2;
              t = _2(t, UfDecompose_0, _id);
            }
        }
      }
    return(t);
  }
  t = for_3(t, f_0, g_0, h_0);
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm j_2;
  j_2 = t;
  {
    ATerm z_10 = NULL;
    ATerm a_11 = NULL;
    a_11 = t;
    if(((z_10 != NULL) && (z_10 != a_11)))
      _fail(a_11);
    else
      z_10 = a_11;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_2, (ATerm) ATinsert(ATempty, not_null(z_10)));
      t = printnl_0(t);
    }
  }
  t = j_2;
  return(t);
}
ATerm record_failure_0 (ATerm t)
{
  ATerm i_0 (ATerm t)
  {
    ATerm d_11 = NULL;
    d_11 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(d_11), term_l_2);
      t = add_0(t);
    }
    return(t);
  }
  t = _2(t, _id, i_0);
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm i_11 = NULL,j_11 = NULL,k_11 = NULL;
  i_11 = t;
  h_11 :
  if(match_cons(i_11, sym__2))
    {
      j_11 = ATgetArgument(i_11, 0);
      k_11 = ATgetArgument(i_11, 1);
      {
        ATerm m_2 = t;
        int n_2 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(j_11), not_null(k_11));
            ;
            LocalPopChoice(n_2);
          }
        else
          {
            t = m_2;
            t = SSL_addr(not_null(j_11), not_null(k_11));
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
  ATerm j_0 (ATerm t)
  {
    ATerm p_11 = NULL;
    p_11 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(p_11), term_l_2);
      t = add_0(t);
    }
    return(t);
  }
  t = _2(t, j_0, _id);
  return(t);
}
ATerm do_test_2 (ATerm t, ATerm l_101 (ATerm), ATerm m_101 (ATerm))
{
  ATerm o_2;
  o_2 = t;
  {
    t = l_101(t);
    t = debug_0(t);
  }
  t = o_2;
  {
    ATerm p_2 = t;
    int q_2 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_2;
        r_2 = t;
        t = m_101(t);
        t = r_2;
        t = record_success_0(t);
        ;
        LocalPopChoice(q_2);
      }
    else
      {
        t = p_2;
        t = record_failure_0(t);
      }
  }
  return(t);
}
ATerm apply_test_4 (ATerm t, ATerm p_101 (ATerm), ATerm q_101 (ATerm), ATerm r_101 (ATerm), ATerm s_101 (ATerm))
{
  ATerm v_11 = NULL,w_11 = NULL;
  ATerm k_0 (ATerm t)
  {
    ATerm x_11 = NULL;
    ATerm y_11 = NULL;
    ATerm w_2 = t;
    int x_2 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_101(t);
        t = q_101(t);
        ;
        LocalPopChoice(x_2);
      }
    else
      {
        t = w_2;
        {
          t = term_y_2;
          {
            t = debug_0(t);
            _fail(t);
          }
        }
      }
    {
      x_11 = t;
      {
        if(((v_11 != NULL) && (v_11 != x_11)))
          _fail(x_11);
        else
          v_11 = x_11;
        {
          t = s_101(t);
          {
            y_11 = t;
            {
              if(((w_11 != NULL) && (w_11 != y_11)))
                _fail(y_11);
              else
                w_11 = y_11;
              {
                ATerm z_2 = t;
                int a_3 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm z_11 = NULL;
                    t = not_null(w_11);
                    {
                      z_11 = t;
                      if(((v_11 != NULL) && (v_11 != z_11)))
                        _fail(z_11);
                      else
                        v_11 = z_11;
                    }
                    ;
                    LocalPopChoice(a_3);
                  }
                else
                  {
                    t = z_2;
                    {
                      t = not_null(v_11);
                      {
                        ATerm l_0 (ATerm t)
                        {
                          t = term_b_3;
                          return(t);
                        }
                        t = debug_1(t, l_0);
                        {
                          t = not_null(w_11);
                          {
                            ATerm m_0 (ATerm t)
                            {
                              t = term_c_3;
                              return(t);
                            }
                            t = debug_1(t, m_0);
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
    return(t);
  }
  t = do_test_2(t, p_101, k_0);
  return(t);
}
ATerm test1_0 (ATerm t)
{
  ATerm n_0 (ATerm t)
  {
    t = term_g_3;
    return(t);
  }
  ATerm o_0 (ATerm t)
  {
    ATerm r_0 (ATerm t)
    {
      t = Var_1(t, _id);
      return(t);
    }
    t = pattern_match_1(t, r_0);
    return(t);
  }
  ATerm p_0 (ATerm t)
  {
    t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_n_3, (ATerm) ATmakeAppl(sym_Op_2, term_o_3, (ATerm) ATinsert(ATempty, term_q_3))));
    return(t);
  }
  ATerm q_0 (ATerm t)
  {
    t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, term_n_3, (ATerm) ATmakeAppl(sym_Op_2, term_o_3, (ATerm) ATinsert(ATempty, term_q_3))));
    return(t);
  }
  t = apply_test_4(t, n_0, o_0, p_0, q_0);
  return(t);
}
ATerm check_for_failures_0 (ATerm t)
{
  ATerm s_0 (ATerm t)
  {
    ATerm e_12 = NULL;
    e_12 = t;
    d_12 :
    if(!(match_int(e_12, 0)))
      {
        _fail(t);
      }
    return(t);
  }
  t = _2(t, _id, s_0);
  return(t);
}
ATerm _2 (ATerm t, ATerm s_73 (ATerm), ATerm t_73 (ATerm))
{
  ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL;
  l_12 = t;
  k_12 :
  if(match_cons(l_12, sym__2))
    {
      m_12 = ATgetArgument(l_12, 0);
      n_12 = ATgetArgument(l_12, 1);
      {
        ATerm r_12 = NULL,t_12 = NULL;
        ATerm s_12 = NULL;
        t = SSLgetAnnotations(not_null(l_12));
        {
          s_12 = t;
          if(((r_12 != NULL) && (r_12 != s_12)))
            _fail(s_12);
          else
            r_12 = s_12;
        }
        {
          t = not_null(m_12);
          {
            ATerm v_12 = NULL;
            t = s_73(t);
            {
              t_12 = t;
              {
                t = not_null(n_12);
                {
                  ATerm x_12 = NULL;
                  t = t_73(t);
                  {
                    v_12 = t;
                    {
                      ATerm y_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(t_12), not_null(v_12)), not_null(r_12));
                      {
                        y_12 = t;
                        if(((x_12 != NULL) && (x_12 != y_12)))
                          _fail(y_12);
                        else
                          x_12 = y_12;
                      }
                      t = not_null(x_12);
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
  ATerm t_0 (ATerm t)
  {
    ATerm v_0 (ATerm t)
    {
      t = term_r_3;
      return(t);
    }
    t = debug_1(t, v_0);
    return(t);
  }
  ATerm u_0 (ATerm t)
  {
    ATerm w_0 (ATerm t)
    {
      t = term_s_3;
      return(t);
    }
    t = debug_1(t, w_0);
    return(t);
  }
  t = _2(t, t_0, u_0);
  return(t);
}
ATerm init_record_0 (ATerm t)
{
  t = term_a_4;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm g_13 = NULL,h_13 = NULL,i_13 = NULL;
  g_13 = t;
  f_13 :
  if(match_cons(g_13, sym__2))
    {
      h_13 = ATgetArgument(g_13, 0);
      i_13 = ATgetArgument(g_13, 1);
      {
        ATerm b_4;
        b_4 = t;
        t = SSL_printnl(not_null(h_13), not_null(i_13));
        t = b_4;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm o_102 (ATerm))
{
  ATerm c_4;
  c_4 = t;
  {
    ATerm o_13 = NULL,q_13 = NULL;
    ATerm e_4;
    e_4 = t;
    {
      ATerm p_13 = NULL;
      t = o_102(t);
      {
        p_13 = t;
        if(((o_13 != NULL) && (o_13 != p_13)))
          _fail(p_13);
        else
          o_13 = p_13;
      }
    }
    t = e_4;
    {
      ATerm r_13 = NULL;
      r_13 = t;
      if(((q_13 != NULL) && (q_13 != r_13)))
        _fail(r_13);
      else
        q_13 = r_13;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_2, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_13)), not_null(o_13)));
        t = printnl_0(t);
      }
    }
  }
  t = c_4;
  return(t);
}
ATerm test_suite_2 (ATerm t, ATerm j_101 (ATerm), ATerm k_101 (ATerm))
{
  t = j_101(t);
  {
    ATerm x_0 (ATerm t)
    {
      t = term_j_4;
      return(t);
    }
    t = debug_1(t, x_0);
    {
      t = init_record_0(t);
      {
        t = k_101(t);
        {
          t = report_test_0(t);
          t = check_for_failures_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm main_0 (ATerm t)
{
  ATerm y_0 (ATerm t)
  {
    t = term_k_4;
    return(t);
  }
  t = test_suite_2(t, y_0, test1_0);
  return(t);
}
