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
Symbol sym_Mark_0;
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
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Final_1;
Symbol sym_Case_4;
Symbol sym_Case_3;
Symbol sym_Alt_3;
Symbol sym_Continue_1;
Symbol sym_Assign_2;
Symbol sym_Assign_1;
Symbol sym_Fun_2;
Symbol sym_Str_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_Anno_2;
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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
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
  sym_Mark_0 = ATmakeSymbol("Mark", 0, ATfalse);
  ATprotectSymbol(sym_Mark_0);
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
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Final_1 = ATmakeSymbol("Final", 1, ATfalse);
  ATprotectSymbol(sym_Final_1);
  sym_Case_4 = ATmakeSymbol("Case", 4, ATfalse);
  ATprotectSymbol(sym_Case_4);
  sym_Case_3 = ATmakeSymbol("Case", 3, ATfalse);
  ATprotectSymbol(sym_Case_3);
  sym_Alt_3 = ATmakeSymbol("Alt", 3, ATfalse);
  ATprotectSymbol(sym_Alt_3);
  sym_Continue_1 = ATmakeSymbol("Continue", 1, ATfalse);
  ATprotectSymbol(sym_Continue_1);
  sym_Assign_2 = ATmakeSymbol("Assign", 2, ATfalse);
  ATprotectSymbol(sym_Assign_2);
  sym_Assign_1 = ATmakeSymbol("Assign", 1, ATfalse);
  ATprotectSymbol(sym_Assign_1);
  sym_Fun_2 = ATmakeSymbol("Fun", 2, ATfalse);
  ATprotectSymbol(sym_Fun_2);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  init_constant_terms();
}
ATerm term_s_38;
ATerm term_t_37;
ATerm term_l_37;
ATerm term_n_36;
ATerm term_b_36;
ATerm term_a_36;
ATerm term_z_35;
ATerm term_y_35;
ATerm term_o_35;
ATerm term_n_35;
ATerm term_m_35;
ATerm term_l_35;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_z_34;
ATerm term_y_34;
ATerm term_r_34;
ATerm term_q_34;
ATerm term_p_34;
ATerm term_d_34;
ATerm term_y_33;
ATerm term_x_33;
ATerm term_u_33;
ATerm term_t_33;
ATerm term_s_33;
ATerm term_r_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_h_33;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_z_31;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_u_29;
ATerm term_k_29;
ATerm term_y_28;
ATerm term_w_28;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_s_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_t_26;
ATerm term_l_26;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_z_21;
ATerm term_t_21;
ATerm term_f_21;
ATerm term_y_20;
ATerm term_u_20;
ATerm term_q_20;
ATerm term_n_20;
ATerm term_l_20;
ATerm term_j_20;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_i_18;
ATerm term_f_18;
ATerm term_d_18;
ATerm term_x_17;
ATerm term_s_17;
ATerm term_l_17;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_s_12;
ATerm term_w_10;
ATerm term_l_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_b_10;
void init_constant_terms (void)
{
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym_Op_2, term_a_13, (ATerm) ATempty);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym_ConstType_1, term_b_13);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("mark", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_15);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_Call_2, term_w_15, (ATerm) ATempty);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATempty);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATempty);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATempty);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_Seq_2, term_z_15, term_a_16);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_Seq_2, term_y_15, term_b_16);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_Seq_2, term_x_15, term_c_16);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-Cond", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Replace", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_Defined_1, term_n_16);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("u_0", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_Defined_1, term_s_17);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym_Seq_2, term_y_15, term_a_16);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(sym_Seq_2, term_x_15, term_d_18);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-UnCond", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym_Defined_1, term_k_18);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup_1", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_18);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverLChoiceR", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverChoiceR", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r_0", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("v_1", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym_Defined_1, term_n_20);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("x_1", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym_Defined_1, term_u_20);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion: application of innermost found", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("fused application of innermost", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of bottomup_1: ", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is not bottomup: ", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is bottomup", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost_1", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_22);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of innermost_1: ", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is not innermost: ", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is innermost ", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineStrat", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("try_1", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_26);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of try_1: ", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("try is not try: ", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("try is try ", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(sym__2, term_n_30, term_l_26);
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(sym__2, term_e_10, term_t_31);
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_31);
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(sym__2, term_e_32, term_l_26);
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(sym__2, term_r_33, term_l_26);
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(sym__2, term_k_35, term_l_35);
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(sym__2, term_y_35, term_l_26);
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(sym__3, term_k_35, term_l_35, (ATerm) ATempty);
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeAppl(ATmakeSymbol("no innermost here", 0, ATtrue));
}
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm f_115 (ATerm));
ATerm if_verbose2_1 (ATerm, ATerm b_125 (ATerm));
ATerm Expl_0 (ATerm);
ATerm Mapp2_0 (ATerm);
ATerm Mapp1_0 (ATerm);
ATerm Mapp0_0 (ATerm);
ATerm Mapp_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Bapp1_0 (ATerm);
ATerm As_2 (ATerm, ATerm l_88 (ATerm), ATerm m_88 (ATerm));
ATerm Prim_2 (ATerm, ATerm i_84 (ATerm), ATerm j_84 (ATerm));
ATerm Explode_2 (ATerm, ATerm h_88 (ATerm), ATerm i_88 (ATerm));
ATerm Op_2 (ATerm, ATerm m_86 (ATerm), ATerm n_86 (ATerm));
ATerm pat_td_1 (ATerm, ATerm s_123 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm p_103 (ATerm));
ATerm LiftPrimArg_0 (ATerm);
ATerm LiftPrimArgs_0 (ATerm);
ATerm repeat_1 (ATerm, ATerm k_109 (ATerm));
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm b_88 (ATerm), ATerm c_88 (ATerm));
ATerm Con_3 (ATerm, ATerm y_87 (ATerm), ATerm z_87 (ATerm), ATerm a_88 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm y_97 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm i_96 (ATerm));
ATerm desugar_0 (ATerm);
ATerm BottomupToVarIsId_Cond_0 (ATerm);
ATerm Replace_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm u_114 (ATerm));
ATerm restore_always_2 (ATerm, ATerm b_100 (ATerm), ATerm c_100 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm t_114 (ATerm));
ATerm scope_2 (ATerm, ATerm v_114 (ATerm), ATerm w_114 (ATerm));
ATerm replace_application_0 (ATerm);
ATerm BottomupToVarIsId_UnCond_0 (ATerm);
ATerm BottomupOverConstructor_0 (ATerm);
ATerm IntroduceApp_0 (ATerm);
ATerm AssociateR_0 (ATerm);
ATerm SeqOverScopeR_0 (ATerm);
ATerm SeqOverLChoiceR_0 (ATerm);
ATerm SeqOverChoiceR_0 (ATerm);
ATerm fuse_with_bottomup_0 (ATerm);
ATerm SeqOverScopeL_0 (ATerm);
ATerm SeqOverLChoiceL_0 (ATerm);
ATerm SeqOverChoiceL_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm j_96 (ATerm));
ATerm innermost_1 (ATerm, ATerm w_111 (ATerm));
ATerm propagate_mark_0 (ATerm);
ATerm Build_1 (ATerm, ATerm n_84 (ATerm));
ATerm Seq_2 (ATerm, ATerm d_85 (ATerm), ATerm e_85 (ATerm));
ATerm Match_1 (ATerm, ATerm m_84 (ATerm));
ATerm LChoice_2 (ATerm, ATerm h_85 (ATerm), ATerm i_85 (ATerm));
ATerm Choice_2 (ATerm, ATerm f_85 (ATerm), ATerm g_85 (ATerm));
ATerm inline_rules_0 (ATerm);
ATerm bottomup_to_var_0 (ATerm);
ATerm seq_over_choice_0 (ATerm);
ATerm innermost_fusion_0 (ATerm);
ATerm alltd_1 (ATerm, ATerm m_98 (ATerm));
ATerm check_that_bottomup_is_bottomup_0 (ATerm);
ATerm check_that_innermost_is_innermost_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm q_121 (ATerm), ATerm r_121 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm b_121 (ATerm), ATerm c_121 (ATerm));
ATerm substitute_1 (ATerm, ATerm d_121 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm p_124 (ATerm));
ATerm Rec_2 (ATerm, ATerm s_85 (ATerm), ATerm t_85 (ATerm));
ATerm SDef_3 (ATerm, ATerm w_85 (ATerm), ATerm x_85 (ATerm), ATerm y_85 (ATerm));
ATerm Let_2 (ATerm, ATerm u_85 (ATerm), ATerm v_85 (ATerm));
ATerm sboundin_3 (ATerm, ATerm q_124 (ATerm), ATerm r_124 (ATerm), ATerm s_124 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm r_85 (ATerm));
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm l_124 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm w_87 (ATerm));
ATerm Scope_2 (ATerm, ATerm q_84 (ATerm), ATerm r_84 (ATerm));
ATerm tboundin_3 (ATerm, ATerm m_124 (ATerm), ATerm n_124 (ATerm), ATerm o_124 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_1 (ATerm, ATerm b_107 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm u_107 (ATerm), ATerm v_107 (ATerm), ATerm w_107 (ATerm));
ATerm crush_3 (ATerm, ATerm s_106 (ATerm), ATerm t_106 (ATerm), ATerm u_106 (ATerm));
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm f_107 (ATerm), ATerm g_107 (ATerm));
ATerm diff_1 (ATerm, ATerm x_106 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm z_109 (ATerm), ATerm a_110 (ATerm));
ATerm for_3 (ATerm, ATerm c_110 (ATerm), ATerm d_110 (ATerm), ATerm e_110 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm i_123 (ATerm), ATerm j_123 (ATerm), ATerm k_123 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Var_1 (ATerm, ATerm q_0 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm d_122 (ATerm), ATerm e_122 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm f_103 (ATerm), ATerm g_103 (ATerm), ATerm h_103 (ATerm), ATerm i_103 (ATerm));
ATerm zip_1 (ATerm, ATerm k_103 (ATerm));
ATerm RnBinding_2 (ATerm, ATerm x_121 (ATerm), ATerm y_121 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm i_122 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm x_112 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm h_112 (ATerm));
ATerm rename_4 (ATerm, ATerm s_121 (ATerm, ATerm (ATerm)), ATerm t_121 (ATerm), ATerm u_121 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm v_121 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm z_114 (ATerm));
ATerm InlineStrat_0 (ATerm);
ATerm new_0 (ATerm);
ATerm check_that_try_is_try_0 (ATerm);
ATerm check_library_definitions_0 (ATerm);
ATerm assert_1 (ATerm, ATerm x_114 (ATerm));
ATerm declare_inline_rule_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm a_87 (ATerm));
ATerm Signature_1 (ATerm, ATerm x_86 (ATerm));
ATerm Specification_1 (ATerm, ATerm c_87 (ATerm));
ATerm declare_inline_rules_0 (ATerm);
ATerm _2 (ATerm, ATerm x_82 (ATerm), ATerm y_82 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm t_101 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm i_116 (ATerm));
ATerm debug_1 (ATerm, ATerm e_115 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm g_100 (ATerm), ATerm h_100 (ATerm));
ATerm input_file_0 (ATerm);
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm p_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm s_107 (ATerm), ATerm t_107 (ATerm));
ATerm crush_2 (ATerm, ATerm q_106 (ATerm), ATerm r_106 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm a_125 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm g_116 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm q_119 (ATerm));
ATerm map_1 (ATerm, ATerm e_101 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm k_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm p_119 (ATerm));
ATerm Program_1 (ATerm, ATerm g_95 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm h_95 (ATerm));
ATerm fetch_1 (ATerm, ATerm n_101 (ATerm));
ATerm option_defined_1 (ATerm, ATerm p_118 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm m_99 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm u_119 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm g_84 (ATerm), ATerm h_84 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm s_119 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm r_119 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm m_116 (ATerm), ATerm n_116 (ATerm), ATerm o_116 (ATerm), ATerm p_116 (ATerm));
ATerm iowrap_4 (ATerm, ATerm d_117 (ATerm), ATerm e_117 (ATerm), ATerm f_117 (ATerm), ATerm g_117 (ATerm));
ATerm iowrap_3 (ATerm, ATerm x_116 (ATerm), ATerm y_116 (ATerm), ATerm z_116 (ATerm));
ATerm iowrap_2 (ATerm, ATerm v_116 (ATerm), ATerm w_116 (ATerm));
ATerm iowrap_1 (ATerm, ATerm s_116 (ATerm));
ATerm fusion_0 (ATerm);
ATerm main_0 (ATerm);
ATerm debug_0 (ATerm t)
{
  ATerm a_10;
  a_10 = t;
  {
    ATerm q_6 = NULL;
    ATerm r_6 = NULL;
    r_6 = t;
    if(((q_6 != NULL) && (q_6 != r_6)))
      _fail(r_6);
    else
      q_6 = r_6;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_10, (ATerm) ATinsert(ATempty, not_null(q_6)));
      t = printnl_0(t);
    }
  }
  t = a_10;
  return(t);
}
ATerm say_1 (ATerm t, ATerm f_115 (ATerm))
{
  ATerm c_10;
  c_10 = t;
  {
    t = f_115(t);
    t = debug_0(t);
  }
  t = c_10;
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm b_125 (ATerm))
{
  ATerm b_0 (ATerm t)
  {
    ATerm d_10;
    d_10 = t;
    {
      ATerm h_7 = NULL;
      ATerm i_7 = NULL;
      t = term_e_10;
      {
        t = get_config_0(t);
        {
          i_7 = t;
          if(((h_7 != NULL) && (h_7 != i_7)))
            _fail(i_7);
          else
            h_7 = i_7;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_7), term_f_10);
        t = geq_0(t);
      }
    }
    t = d_10;
    t = b_125(t);
    return(t);
  }
  t = try_1(t, b_0);
  return(t);
}
ATerm Expl_0 (ATerm t)
{
  ATerm o_8 = NULL,p_8 = NULL,q_8 = NULL;
  p_8 = t;
  n_8 :
  if(match_cons(p_8, sym_ExplodeCong_2))
    {
      q_8 = ATgetArgument(p_8, 0);
      o_8 = ATgetArgument(p_8, 1);
      {
        ATerm t_8 = NULL,u_8 = NULL,v_8 = NULL,w_8 = NULL;
        ATerm x_8 = NULL;
        ATerm y_8 = NULL;
        t = new_0(t);
        {
          x_8 = t;
          {
            if(((t_8 != NULL) && (t_8 != x_8)))
              _fail(x_8);
            else
              t_8 = x_8;
            {
              ATerm z_8 = NULL;
              t = new_0(t);
              {
                y_8 = t;
                {
                  if(((u_8 != NULL) && (u_8 != y_8)))
                    _fail(y_8);
                  else
                    u_8 = y_8;
                  {
                    ATerm a_9 = NULL;
                    t = new_0(t);
                    {
                      z_8 = t;
                      {
                        if(((v_8 != NULL) && (v_8 != z_8)))
                          _fail(z_8);
                        else
                          v_8 = z_8;
                        {
                          t = new_0(t);
                          {
                            a_9 = t;
                            if(((w_8 != NULL) && (w_8 != a_9)))
                              _fail(a_9);
                            else
                              w_8 = a_9;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(w_8)), not_null(v_8)), not_null(u_8)), not_null(t_8)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(t_8)), (ATerm) ATmakeAppl(sym_Var_1, not_null(v_8)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(q_8), (ATerm)ATmakeAppl(sym_Var_1, not_null(t_8)), (ATerm) ATmakeAppl(sym_Var_1, not_null(u_8))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(o_8), (ATerm)ATmakeAppl(sym_Var_1, not_null(v_8)), (ATerm) ATmakeAppl(sym_Var_1, not_null(w_8))))), (ATerm) ATmakeAppl(sym_Prim_2, term_g_10, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_8))), (ATerm) ATmakeAppl(sym_Var_1, not_null(u_8)))))));
      }
    }
  else
    {
      if(match_cons(p_8, sym_Build_1))
        {
          q_8 = ATgetArgument(p_8, 0);
          {
            ATerm c_9 = NULL,d_9 = NULL,e_9 = NULL,f_9 = NULL;
            ATerm g_9 = NULL;
            ATerm k_9 = NULL;
            t = new_0(t);
            {
              g_9 = t;
              {
                if(((e_9 != NULL) && (e_9 != g_9)))
                  _fail(g_9);
                else
                  e_9 = g_9;
                {
                  t = not_null(q_8);
                  {
                    ATerm f_0 (ATerm t)
                    {
                      ATerm h_9 = NULL,i_9 = NULL,j_9 = NULL;
                      h_9 = t;
                      g_8 :
                      if(match_cons(h_9, sym_Explode_2))
                        {
                          i_9 = ATgetArgument(h_9, 0);
                          j_9 = ATgetArgument(h_9, 1);
                          {
                            if(((c_9 != NULL) && (c_9 != i_9)))
                              _fail(i_9);
                            else
                              c_9 = i_9;
                            {
                              if(((d_9 != NULL) && (d_9 != j_9)))
                                _fail(j_9);
                              else
                                d_9 = j_9;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_9));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = oncetd_1(t, f_0);
                    {
                      k_9 = t;
                      if(((f_9 != NULL) && (f_9 != k_9)))
                        _fail(k_9);
                      else
                        f_9 = k_9;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(e_9)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_g_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_9)), not_null(c_9))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_9))), (ATerm) ATmakeAppl(sym_Build_1, not_null(f_9)))));
          }
        }
      else
        {
          if(match_cons(p_8, sym_Match_1))
            {
              q_8 = ATgetArgument(p_8, 0);
              {
                ATerm m_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL;
                ATerm r_9 = NULL;
                ATerm s_9 = NULL;
                t = new_0(t);
                {
                  r_9 = t;
                  {
                    if(((o_9 != NULL) && (o_9 != r_9)))
                      _fail(r_9);
                    else
                      o_9 = r_9;
                    {
                      ATerm w_9 = NULL;
                      t = new_0(t);
                      {
                        s_9 = t;
                        {
                          if(((p_9 != NULL) && (p_9 != s_9)))
                            _fail(s_9);
                          else
                            p_9 = s_9;
                          {
                            t = not_null(q_8);
                            {
                              ATerm s_0 (ATerm t)
                              {
                                ATerm t_9 = NULL,u_9 = NULL,v_9 = NULL;
                                t_9 = t;
                                l_8 :
                                if(match_cons(t_9, sym_Explode_2))
                                  {
                                    u_9 = ATgetArgument(t_9, 0);
                                    v_9 = ATgetArgument(t_9, 1);
                                    {
                                      if(((m_9 != NULL) && (m_9 != u_9)))
                                        _fail(u_9);
                                      else
                                        m_9 = u_9;
                                      {
                                        if(((n_9 != NULL) && (n_9 != v_9)))
                                          _fail(v_9);
                                        else
                                          n_9 = v_9;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_9));
                                      }
                                    }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              t = oncetd_1(t, s_0);
                              {
                                w_9 = t;
                                if(((q_9 != NULL) && (q_9 != w_9)))
                                  _fail(w_9);
                                else
                                  q_9 = w_9;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(o_9)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(q_9)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(p_9)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_9))), (ATerm) ATmakeAppl(sym_Prim_2, term_h_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_9)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(o_9)), (ATerm) ATmakeAppl(sym_Op_2, term_i_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_9)), not_null(m_9)))))));
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
ATerm Mapp2_0 (ATerm t)
{
  ATerm b_11 = NULL,c_11 = NULL;
  b_11 = t;
  a_11 :
  if(match_cons(b_11, sym_Match_1))
    {
      c_11 = ATgetArgument(b_11, 0);
      {
        ATerm j_10 = t;
        int k_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_11 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL;
            ATerm i_11 = NULL;
            ATerm m_11 = NULL;
            t = new_0(t);
            {
              i_11 = t;
              {
                if(((g_11 != NULL) && (g_11 != i_11)))
                  _fail(i_11);
                else
                  g_11 = i_11;
                {
                  t = not_null(c_11);
                  {
                    ATerm t_0 (ATerm t)
                    {
                      ATerm j_11 = NULL,k_11 = NULL,l_11 = NULL;
                      j_11 = t;
                      q_10 :
                      if(match_cons(j_11, sym_Anno_2))
                        {
                          k_11 = ATgetArgument(j_11, 0);
                          l_11 = ATgetArgument(j_11, 1);
                          {
                            if(((e_11 != NULL) && (e_11 != k_11)))
                              _fail(k_11);
                            else
                              e_11 = k_11;
                            {
                              if(((f_11 != NULL) && (f_11 != l_11)))
                                _fail(l_11);
                              else
                                f_11 = l_11;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(g_11)), not_null(e_11));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, t_0);
                    {
                      m_11 = t;
                      if(((h_11 != NULL) && (h_11 != m_11)))
                        _fail(m_11);
                      else
                        h_11 = m_11;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(g_11)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(h_11)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_l_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_11)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(f_11))))));
            ;
            LocalPopChoice(k_10);
          }
        else
          {
            t = j_10;
            {
              ATerm m_10 = t;
              int n_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_11 = NULL,p_11 = NULL,q_11 = NULL;
                  ATerm r_11 = NULL;
                  ATerm u_11 = NULL;
                  t = new_0(t);
                  {
                    r_11 = t;
                    {
                      if(((p_11 != NULL) && (p_11 != r_11)))
                        _fail(r_11);
                      else
                        p_11 = r_11;
                      {
                        t = not_null(c_11);
                        {
                          ATerm v_0 (ATerm t)
                          {
                            ATerm s_11 = NULL,t_11 = NULL;
                            s_11 = t;
                            u_10 :
                            if(match_cons(s_11, sym_RootApp_1))
                              {
                                t_11 = ATgetArgument(s_11, 0);
                                {
                                  if(((o_11 != NULL) && (o_11 != t_11)))
                                    _fail(t_11);
                                  else
                                    o_11 = t_11;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(p_11));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, v_0);
                          {
                            u_11 = t;
                            if(((q_11 != NULL) && (q_11 != u_11)))
                              _fail(u_11);
                            else
                              q_11 = u_11;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(p_11)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(q_11)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_11))), not_null(o_11))));
                  ;
                  LocalPopChoice(n_10);
                }
              else
                {
                  t = m_10;
                  {
                    ATerm w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL;
                    ATerm a_12 = NULL;
                    ATerm e_12 = NULL;
                    t = new_0(t);
                    {
                      a_12 = t;
                      {
                        if(((y_11 != NULL) && (y_11 != a_12)))
                          _fail(a_12);
                        else
                          y_11 = a_12;
                        {
                          t = not_null(c_11);
                          {
                            ATerm w_0 (ATerm t)
                            {
                              ATerm b_12 = NULL,c_12 = NULL,d_12 = NULL;
                              b_12 = t;
                              y_10 :
                              if(match_cons(b_12, sym_App_2))
                                {
                                  c_12 = ATgetArgument(b_12, 0);
                                  d_12 = ATgetArgument(b_12, 1);
                                  {
                                    if(((x_11 != NULL) && (x_11 != c_12)))
                                      _fail(c_12);
                                    else
                                      x_11 = c_12;
                                    {
                                      if(((w_11 != NULL) && (w_11 != d_12)))
                                        _fail(d_12);
                                      else
                                        w_11 = d_12;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(y_11));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, w_0);
                            {
                              e_12 = t;
                              if(((z_11 != NULL) && (z_11 != e_12)))
                                _fail(e_12);
                              else
                                z_11 = e_12;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(y_11)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(z_11)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(y_11))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(w_11)), not_null(x_11)))));
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
ATerm Mapp1_0 (ATerm t)
{
  ATerm v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL;
  v_12 = t;
  t_12 :
  if(match_cons(v_12, sym_Match_1))
    {
      w_12 = ATgetArgument(v_12, 0);
      u_12 :
      if(match_cons(w_12, sym_RootApp_1))
        {
          x_12 = ATgetArgument(w_12, 0);
          t = not_null(x_12);
        }
      else
        {
          if(match_cons(w_12, sym_App_2))
            {
              x_12 = ATgetArgument(w_12, 0);
              y_12 = ATgetArgument(w_12, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(x_12), not_null(y_12));
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
ATerm Mapp0_0 (ATerm t)
{
  ATerm k_13 = NULL,l_13 = NULL;
  k_13 = t;
  j_13 :
  if(match_cons(k_13, sym_Match_1))
    {
      l_13 = ATgetArgument(k_13, 0);
      {
        ATerm n_13 = NULL,o_13 = NULL;
        ATerm s_13 = NULL;
        t = not_null(l_13);
        {
          ATerm x_0 (ATerm t)
          {
            ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL;
            p_13 = t;
            g_13 :
            if(match_cons(p_13, sym_RootApp_1))
              {
                q_13 = ATgetArgument(p_13, 0);
                h_13 :
                if(match_cons(q_13, sym_Match_1))
                  {
                    r_13 = ATgetArgument(q_13, 0);
                    {
                      if(((n_13 != NULL) && (n_13 != r_13)))
                        _fail(r_13);
                      else
                        n_13 = r_13;
                      t = not_null(n_13);
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
          t = pat_td_1(t, x_0);
          {
            s_13 = t;
            if(((o_13 != NULL) && (o_13 != s_13)))
              _fail(s_13);
            else
              o_13 = s_13;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(o_13));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Mapp_0 (ATerm t)
{
  ATerm o_10 = t;
  int p_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0(t);
      ;
      LocalPopChoice(p_10);
    }
  else
    {
      t = o_10;
      {
        ATerm r_10 = t;
        int s_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Mapp1_0(t);
            ;
            LocalPopChoice(s_10);
          }
        else
          {
            t = r_10;
            t = Mapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm m_14 = NULL,n_14 = NULL;
  m_14 = t;
  l_14 :
  if(match_cons(m_14, sym_Build_1))
    {
      n_14 = ATgetArgument(m_14, 0);
      {
        ATerm t_10 = t;
        int v_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_14 = NULL,q_14 = NULL,r_14 = NULL,s_14 = NULL;
            ATerm t_14 = NULL;
            ATerm x_14 = NULL;
            t = new_0(t);
            {
              t_14 = t;
              {
                if(((r_14 != NULL) && (r_14 != t_14)))
                  _fail(t_14);
                else
                  r_14 = t_14;
                {
                  t = not_null(n_14);
                  {
                    ATerm y_0 (ATerm t)
                    {
                      ATerm u_14 = NULL,v_14 = NULL,w_14 = NULL;
                      u_14 = t;
                      b_14 :
                      if(match_cons(u_14, sym_Anno_2))
                        {
                          v_14 = ATgetArgument(u_14, 0);
                          w_14 = ATgetArgument(u_14, 1);
                          {
                            if(((p_14 != NULL) && (p_14 != v_14)))
                              _fail(v_14);
                            else
                              p_14 = v_14;
                            {
                              if(((q_14 != NULL) && (q_14 != w_14)))
                                _fail(w_14);
                              else
                                q_14 = w_14;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_14));
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = pat_td_1(t, y_0);
                    {
                      x_14 = t;
                      if(((s_14 != NULL) && (s_14 != x_14)))
                        _fail(x_14);
                      else
                        s_14 = x_14;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(r_14)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_w_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_14)), not_null(p_14))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_14))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(s_14))));
            ;
            LocalPopChoice(v_10);
          }
        else
          {
            t = t_10;
            {
              ATerm x_10 = t;
              int z_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_14 = NULL,a_15 = NULL,b_15 = NULL;
                  ATerm c_15 = NULL;
                  ATerm f_15 = NULL;
                  t = new_0(t);
                  {
                    c_15 = t;
                    {
                      if(((a_15 != NULL) && (a_15 != c_15)))
                        _fail(c_15);
                      else
                        a_15 = c_15;
                      {
                        t = not_null(n_14);
                        {
                          ATerm z_0 (ATerm t)
                          {
                            ATerm d_15 = NULL,e_15 = NULL;
                            d_15 = t;
                            f_14 :
                            if(match_cons(d_15, sym_RootApp_1))
                              {
                                e_15 = ATgetArgument(d_15, 0);
                                {
                                  if(((z_14 != NULL) && (z_14 != e_15)))
                                    _fail(e_15);
                                  else
                                    z_14 = e_15;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(a_15));
                                }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = pat_td_1(t, z_0);
                          {
                            f_15 = t;
                            if(((b_15 != NULL) && (b_15 != f_15)))
                              _fail(f_15);
                            else
                              b_15 = f_15;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(a_15)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(z_14), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(a_15))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(b_15))));
                  ;
                  LocalPopChoice(z_10);
                }
              else
                {
                  t = x_10;
                  {
                    ATerm h_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL;
                    ATerm l_15 = NULL;
                    ATerm p_15 = NULL;
                    t = new_0(t);
                    {
                      l_15 = t;
                      {
                        if(((j_15 != NULL) && (j_15 != l_15)))
                          _fail(l_15);
                        else
                          j_15 = l_15;
                        {
                          t = not_null(n_14);
                          {
                            ATerm a_1 (ATerm t)
                            {
                              ATerm m_15 = NULL,n_15 = NULL,o_15 = NULL;
                              m_15 = t;
                              j_14 :
                              if(match_cons(m_15, sym_App_2))
                                {
                                  n_15 = ATgetArgument(m_15, 0);
                                  o_15 = ATgetArgument(m_15, 1);
                                  {
                                    if(((h_15 != NULL) && (h_15 != n_15)))
                                      _fail(n_15);
                                    else
                                      h_15 = n_15;
                                    {
                                      if(((i_15 != NULL) && (i_15 != o_15)))
                                        _fail(o_15);
                                      else
                                        i_15 = o_15;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_15));
                                    }
                                  }
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = pat_td_1(t, a_1);
                            {
                              p_15 = t;
                              if(((k_15 != NULL) && (k_15 != p_15)))
                                _fail(p_15);
                              else
                                k_15 = p_15;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(j_15)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(h_15), not_null(i_15), (ATerm) ATmakeAppl(sym_Var_1, not_null(j_15)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(k_15))));
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
ATerm Bapp1_0 (ATerm t)
{
  ATerm g_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL;
  g_16 = t;
  e_16 :
  if(match_cons(g_16, sym_Build_1))
    {
      h_16 = ATgetArgument(g_16, 0);
      f_16 :
      if(match_cons(h_16, sym_RootApp_1))
        {
          i_16 = ATgetArgument(h_16, 0);
          t = not_null(i_16);
        }
      else
        {
          if(match_cons(h_16, sym_App_2))
            {
              i_16 = ATgetArgument(h_16, 0);
              j_16 = ATgetArgument(h_16, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(j_16)), not_null(i_16));
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
ATerm As_2 (ATerm t, ATerm l_88 (ATerm), ATerm m_88 (ATerm))
{
  ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL;
  v_16 = t;
  u_16 :
  if(match_cons(v_16, sym_As_2))
    {
      w_16 = ATgetArgument(v_16, 0);
      x_16 = ATgetArgument(v_16, 1);
      {
        ATerm b_17 = NULL,d_17 = NULL;
        ATerm c_17 = NULL;
        t = SSLgetAnnotations(not_null(v_16));
        {
          c_17 = t;
          if(((b_17 != NULL) && (b_17 != c_17)))
            _fail(c_17);
          else
            b_17 = c_17;
        }
        {
          t = not_null(w_16);
          {
            ATerm f_17 = NULL;
            t = l_88(t);
            {
              d_17 = t;
              {
                t = not_null(x_16);
                {
                  ATerm h_17 = NULL;
                  t = m_88(t);
                  {
                    f_17 = t;
                    {
                      ATerm i_17 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(d_17), not_null(f_17)), not_null(b_17));
                      {
                        i_17 = t;
                        if(((h_17 != NULL) && (h_17 != i_17)))
                          _fail(i_17);
                        else
                          h_17 = i_17;
                      }
                      t = not_null(h_17);
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
ATerm Prim_2 (ATerm t, ATerm i_84 (ATerm), ATerm j_84 (ATerm))
{
  ATerm u_17 = NULL,v_17 = NULL,w_17 = NULL;
  u_17 = t;
  t_17 :
  if(match_cons(u_17, sym_Prim_2))
    {
      v_17 = ATgetArgument(u_17, 0);
      w_17 = ATgetArgument(u_17, 1);
      {
        ATerm a_18 = NULL,c_18 = NULL;
        ATerm b_18 = NULL;
        t = SSLgetAnnotations(not_null(u_17));
        {
          b_18 = t;
          if(((a_18 != NULL) && (a_18 != b_18)))
            _fail(b_18);
          else
            a_18 = b_18;
        }
        {
          t = not_null(v_17);
          {
            ATerm e_18 = NULL;
            t = i_84(t);
            {
              c_18 = t;
              {
                t = not_null(w_17);
                {
                  ATerm g_18 = NULL;
                  t = j_84(t);
                  {
                    e_18 = t;
                    {
                      ATerm h_18 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(c_18), not_null(e_18)), not_null(a_18));
                      {
                        h_18 = t;
                        if(((g_18 != NULL) && (g_18 != h_18)))
                          _fail(h_18);
                        else
                          g_18 = h_18;
                      }
                      t = not_null(g_18);
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
ATerm Explode_2 (ATerm t, ATerm h_88 (ATerm), ATerm i_88 (ATerm))
{
  ATerm t_18 = NULL,u_18 = NULL,v_18 = NULL;
  t_18 = t;
  s_18 :
  if(match_cons(t_18, sym_Explode_2))
    {
      u_18 = ATgetArgument(t_18, 0);
      v_18 = ATgetArgument(t_18, 1);
      {
        ATerm z_18 = NULL,b_19 = NULL;
        ATerm a_19 = NULL;
        t = SSLgetAnnotations(not_null(t_18));
        {
          a_19 = t;
          if(((z_18 != NULL) && (z_18 != a_19)))
            _fail(a_19);
          else
            z_18 = a_19;
        }
        {
          t = not_null(u_18);
          {
            ATerm d_19 = NULL;
            t = h_88(t);
            {
              b_19 = t;
              {
                t = not_null(v_18);
                {
                  ATerm f_19 = NULL;
                  t = i_88(t);
                  {
                    d_19 = t;
                    {
                      ATerm g_19 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(b_19), not_null(d_19)), not_null(z_18));
                      {
                        g_19 = t;
                        if(((f_19 != NULL) && (f_19 != g_19)))
                          _fail(g_19);
                        else
                          f_19 = g_19;
                      }
                      t = not_null(f_19);
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
ATerm Op_2 (ATerm t, ATerm m_86 (ATerm), ATerm n_86 (ATerm))
{
  ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL;
  s_19 = t;
  r_19 :
  if(match_cons(s_19, sym_Op_2))
    {
      t_19 = ATgetArgument(s_19, 0);
      u_19 = ATgetArgument(s_19, 1);
      {
        ATerm y_19 = NULL,a_20 = NULL;
        ATerm z_19 = NULL;
        t = SSLgetAnnotations(not_null(s_19));
        {
          z_19 = t;
          if(((y_19 != NULL) && (y_19 != z_19)))
            _fail(z_19);
          else
            y_19 = z_19;
        }
        {
          t = not_null(t_19);
          {
            ATerm c_20 = NULL;
            t = m_86(t);
            {
              a_20 = t;
              {
                t = not_null(u_19);
                {
                  ATerm e_20 = NULL;
                  t = n_86(t);
                  {
                    c_20 = t;
                    {
                      ATerm f_20 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(a_20), not_null(c_20)), not_null(y_19));
                      {
                        f_20 = t;
                        if(((e_20 != NULL) && (e_20 != f_20)))
                          _fail(f_20);
                        else
                          e_20 = f_20;
                      }
                      t = not_null(e_20);
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
ATerm pat_td_1 (ATerm t, ATerm s_123 (ATerm))
{
  ATerm d_11 = t;
  int n_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_123(t);
      ;
      LocalPopChoice(n_11);
    }
  else
    {
      t = d_11;
      {
        ATerm v_11 = t;
        int f_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_1 (ATerm t)
            {
              ATerm c_1 (ATerm t)
              {
                t = pat_td_1(t, s_123);
                return(t);
              }
              t = fetch_1(t, c_1);
              return(t);
            }
            t = Op_2(t, _id, b_1);
            ;
            LocalPopChoice(f_12);
          }
        else
          {
            t = v_11;
            {
              ATerm g_12 = t;
              int h_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_1 (ATerm t)
                  {
                    t = pat_td_1(t, s_123);
                    return(t);
                  }
                  t = Explode_2(t, _id, d_1);
                  ;
                  LocalPopChoice(h_12);
                }
              else
                {
                  t = g_12;
                  {
                    ATerm i_12 = t;
                    int j_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm e_1 (ATerm t)
                        {
                          t = pat_td_1(t, s_123);
                          return(t);
                        }
                        t = Explode_2(t, e_1, _id);
                        ;
                        LocalPopChoice(j_12);
                      }
                    else
                      {
                        t = i_12;
                        {
                          ATerm k_12 = t;
                          int l_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm f_1 (ATerm t)
                              {
                                ATerm g_1 (ATerm t)
                                {
                                  t = pat_td_1(t, s_123);
                                  return(t);
                                }
                                t = fetch_1(t, g_1);
                                return(t);
                              }
                              t = Prim_2(t, _id, f_1);
                              ;
                              LocalPopChoice(l_12);
                            }
                          else
                            {
                              t = k_12;
                              {
                                ATerm h_1 (ATerm t)
                                {
                                  t = pat_td_1(t, s_123);
                                  return(t);
                                }
                                t = As_2(t, _id, h_1);
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
ATerm Bapp0_0 (ATerm t)
{
  ATerm w_20 = NULL,x_20 = NULL;
  w_20 = t;
  v_20 :
  if(match_cons(w_20, sym_Build_1))
    {
      x_20 = ATgetArgument(w_20, 0);
      {
        ATerm m_12 = t;
        int n_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_20 = NULL,a_21 = NULL;
            ATerm e_21 = NULL;
            t = not_null(x_20);
            {
              ATerm i_1 (ATerm t)
              {
                ATerm b_21 = NULL,c_21 = NULL,d_21 = NULL;
                b_21 = t;
                o_20 :
                if(match_cons(b_21, sym_RootApp_1))
                  {
                    c_21 = ATgetArgument(b_21, 0);
                    p_20 :
                    if(match_cons(c_21, sym_Build_1))
                      {
                        d_21 = ATgetArgument(c_21, 0);
                        {
                          if(((z_20 != NULL) && (z_20 != d_21)))
                            _fail(d_21);
                          else
                            z_20 = d_21;
                          t = not_null(z_20);
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
              t = pat_td_1(t, i_1);
              {
                e_21 = t;
                if(((a_21 != NULL) && (a_21 != e_21)))
                  _fail(e_21);
                else
                  a_21 = e_21;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(a_21));
            ;
            LocalPopChoice(n_12);
          }
        else
          {
            t = m_12;
            {
              ATerm g_21 = NULL,h_21 = NULL,i_21 = NULL;
              ATerm n_21 = NULL;
              t = not_null(x_20);
              {
                ATerm j_1 (ATerm t)
                {
                  ATerm j_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL;
                  j_21 = t;
                  s_20 :
                  if(match_cons(j_21, sym_App_2))
                    {
                      k_21 = ATgetArgument(j_21, 0);
                      m_21 = ATgetArgument(j_21, 1);
                      t_20 :
                      if(match_cons(k_21, sym_Build_1))
                        {
                          l_21 = ATgetArgument(k_21, 0);
                          {
                            if(((h_21 != NULL) && (h_21 != l_21)))
                              _fail(l_21);
                            else
                              h_21 = l_21;
                            {
                              if(((g_21 != NULL) && (g_21 != m_21)))
                                _fail(m_21);
                              else
                                g_21 = m_21;
                              t = not_null(h_21);
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
                t = pat_td_1(t, j_1);
                {
                  n_21 = t;
                  if(((i_21 != NULL) && (i_21 != n_21)))
                    _fail(n_21);
                  else
                    i_21 = n_21;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(i_21));
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
ATerm Bapp_0 (ATerm t)
{
  ATerm o_12 = t;
  int p_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0(t);
      ;
      LocalPopChoice(p_12);
    }
  else
    {
      t = o_12;
      {
        ATerm q_12 = t;
        int r_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0(t);
            ;
            LocalPopChoice(r_12);
          }
        else
          {
            t = q_12;
            t = Bapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm l_22 = NULL,m_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL;
  o_22 = t;
  h_22 :
  if(match_cons(o_22, sym_Lets_2))
    {
      p_22 = ATgetArgument(o_22, 0);
      q_22 = ATgetArgument(o_22, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, not_null(p_22), not_null(q_22));
    }
  else
    {
      if(match_cons(o_22, sym_LChoices_1))
        {
          p_22 = ATgetArgument(o_22, 0);
          i_22 :
          if(((ATgetType(p_22) == AT_LIST) && !(ATisEmpty(p_22))))
            {
              l_22 = ATgetFirst((ATermList) p_22);
              m_22 = (ATerm) ATgetNext((ATermList) p_22);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(l_22), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(m_22)));
            }
          else
            {
              if(((ATgetType(p_22) == AT_LIST) && ATisEmpty(p_22)))
                {
                  t = term_s_12;
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(match_cons(o_22, sym_Choices_1))
            {
              p_22 = ATgetArgument(o_22, 0);
              j_22 :
              if(((ATgetType(p_22) == AT_LIST) && !(ATisEmpty(p_22))))
                {
                  l_22 = ATgetFirst((ATermList) p_22);
                  m_22 = (ATerm) ATgetNext((ATermList) p_22);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(l_22), (ATerm) ATmakeAppl(sym_Choices_1, not_null(m_22)));
                }
              else
                {
                  if(((ATgetType(p_22) == AT_LIST) && ATisEmpty(p_22)))
                    {
                      t = term_s_12;
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              if(match_cons(o_22, sym_Seqs_1))
                {
                  p_22 = ATgetArgument(o_22, 0);
                  k_22 :
                  if(((ATgetType(p_22) == AT_LIST) && !(ATisEmpty(p_22))))
                    {
                      l_22 = ATgetFirst((ATermList) p_22);
                      m_22 = (ATerm) ATgetNext((ATermList) p_22);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_22), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(m_22)));
                    }
                  else
                    {
                      if(((ATgetType(p_22) == AT_LIST) && ATisEmpty(p_22)))
                        {
                          t = term_z_12;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(o_22, sym_DefaultVarDec_1))
                    {
                      p_22 = ATgetArgument(o_22, 0);
                      t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(p_22), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_c_13), term_c_13));
                    }
                  else
                    {
                      if(match_cons(o_22, sym_InfixApp_3))
                        {
                          p_22 = ATgetArgument(o_22, 0);
                          q_22 = ATgetArgument(o_22, 1);
                          n_22 = ATgetArgument(o_22, 2);
                          t = (ATerm) ATmakeAppl(sym_App_2, not_null(q_22), (ATerm) ATmakeAppl(sym_Op_2, term_i_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_22)), not_null(p_22))));
                        }
                      else
                        {
                          if(match_cons(o_22, sym_BAM_3))
                            {
                              p_22 = ATgetArgument(o_22, 0);
                              q_22 = ATgetArgument(o_22, 1);
                              n_22 = ATgetArgument(o_22, 2);
                              t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(n_22))), not_null(p_22)), (ATerm) ATmakeAppl(sym_Build_1, not_null(q_22))));
                            }
                          else
                            {
                              if(match_cons(o_22, sym_AM_2))
                                {
                                  p_22 = ATgetArgument(o_22, 0);
                                  q_22 = ATgetArgument(o_22, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(p_22), (ATerm) ATmakeAppl(sym_Match_1, not_null(q_22)));
                                }
                              else
                                {
                                  if(match_cons(o_22, sym_MA_2))
                                    {
                                      p_22 = ATgetArgument(o_22, 0);
                                      q_22 = ATgetArgument(o_22, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(p_22)), not_null(q_22));
                                    }
                                  else
                                    {
                                      if(match_cons(o_22, sym_BA_2))
                                        {
                                          p_22 = ATgetArgument(o_22, 0);
                                          q_22 = ATgetArgument(o_22, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(q_22)), not_null(p_22));
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
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm d_24 = NULL,e_24 = NULL,f_24 = NULL,g_24 = NULL,h_24 = NULL,i_24 = NULL,j_24 = NULL;
  d_24 = t;
  a_24 :
  if(match_cons(d_24, sym__2))
    {
      e_24 = ATgetArgument(d_24, 0);
      h_24 = ATgetArgument(d_24, 1);
      b_24 :
      if(match_cons(e_24, sym__2))
        {
          f_24 = ATgetArgument(e_24, 0);
          g_24 = ATgetArgument(e_24, 1);
          c_24 :
          if(match_cons(h_24, sym__2))
            {
              i_24 = ATgetArgument(h_24, 0);
              j_24 = ATgetArgument(h_24, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(i_24)), not_null(f_24)), (ATerm) ATinsert(CheckATermList(not_null(j_24)), not_null(g_24)));
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
  ATerm r_24 = NULL,s_24 = NULL,t_24 = NULL;
  r_24 = t;
  q_24 :
  if(((ATgetType(r_24) == AT_LIST) && !(ATisEmpty(r_24))))
    {
      s_24 = ATgetFirst((ATermList) r_24);
      t_24 = (ATerm) ATgetNext((ATermList) r_24);
      t = (ATerm) ATmakeAppl(sym__2, not_null(s_24), not_null(t_24));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm z_24 = NULL;
  z_24 = t;
  y_24 :
  if(((ATgetType(z_24) == AT_LIST) && ATisEmpty(z_24)))
    {
      t = term_d_13;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm p_103 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, p_103);
  return(t);
}
ATerm LiftPrimArg_0 (ATerm t)
{
  ATerm f_25 = NULL,g_25 = NULL;
  ATerm l_25 (ATerm t)
  {
    ATerm i_25 = NULL;
    ATerm j_25 = NULL;
    t = not_null(f_25);
    {
      ATerm e_13 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = e_13;
        }
      {
        t = new_0(t);
        {
          j_25 = t;
          if(((i_25 != NULL) && (i_25 != j_25)))
            _fail(j_25);
          else
            i_25 = j_25;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(i_25)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(f_25)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_25))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_25))));
    return(t);
  }
  ATerm m_25 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_z_12, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_25))));
    return(t);
  }
  f_25 = t;
  e_25 :
  if(match_cons(f_25, sym_Var_1))
    {
      g_25 = ATgetArgument(f_25, 0);
      {
        ATerm f_13 = t;
        int i_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_25(t);
            ;
            LocalPopChoice(i_13);
          }
        else
          {
            t = f_13;
            t = m_25(t);
          }
      }
    }
  else
    {
      t = l_25(t);
    }
  return(t);
}
ATerm LiftPrimArgs_0 (ATerm t)
{
  ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL;
  t_25 = t;
  s_25 :
  if(match_cons(t_25, sym_Prim_2))
    {
      u_25 = ATgetArgument(t_25, 0);
      v_25 = ATgetArgument(t_25, 1);
      {
        ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL;
        ATerm b_26 = NULL,c_26 = NULL,d_26 = NULL,e_26 = NULL,f_26 = NULL;
        t = not_null(v_25);
        {
          ATerm k_1 (ATerm t)
          {
            ATerm m_13 = t;
            if((PushChoice() == 0))
              {
                t = Var_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = m_13;
              }
            return(t);
          }
          t = fetch_1(t, k_1);
          {
            t = not_null(v_25);
            {
              t = unzip_1(t, LiftPrimArg_0);
              {
                ATerm l_1 (ATerm t)
                {
                  t = unzip_1(t, _id);
                  return(t);
                }
                t = _2(t, concat_0, l_1);
                {
                  b_26 = t;
                  q_25 :
                  if(match_cons(b_26, sym__2))
                    {
                      c_26 = ATgetArgument(b_26, 0);
                      d_26 = ATgetArgument(b_26, 1);
                      r_25 :
                      if(match_cons(d_26, sym__2))
                        {
                          e_26 = ATgetArgument(d_26, 0);
                          f_26 = ATgetArgument(d_26, 1);
                          {
                            if(((y_25 != NULL) && (y_25 != c_26)))
                              _fail(c_26);
                            else
                              y_25 = c_26;
                            {
                              if(((z_25 != NULL) && (z_25 != e_26)))
                                _fail(e_26);
                              else
                                z_25 = e_26;
                              if(((a_26 != NULL) && (a_26 != f_26)))
                                _fail(f_26);
                              else
                                a_26 = f_26;
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
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(y_25), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(z_25)), (ATerm) ATmakeAppl(sym_Prim_2, not_null(u_25), not_null(a_26))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm k_109 (ATerm))
{
  ATerm i_26 (ATerm t)
  {
    ATerm m_1 (ATerm t)
    {
      t = k_109(t);
      t = i_26(t);
      return(t);
    }
    t = try_1(t, m_1);
    return(t);
  }
  t = i_26(t);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm n_26 = NULL;
  n_26 = t;
  m_26 :
  if(match_cons(n_26, sym_Wld_0))
    {
      ATerm p_26 = NULL,r_26 = NULL;
      ATerm t_13;
      t_13 = t;
      {
        ATerm q_26 = NULL;
        t = SSLgetAnnotations(not_null(n_26));
        {
          q_26 = t;
          if(((p_26 != NULL) && (p_26 != q_26)))
            _fail(q_26);
          else
            p_26 = q_26;
        }
      }
      t = t_13;
      {
        ATerm s_26 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(p_26));
        {
          s_26 = t;
          if(((r_26 != NULL) && (r_26 != s_26)))
            _fail(s_26);
          else
            r_26 = s_26;
        }
        t = not_null(r_26);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm buildterm_0 (ATerm t)
{
  ATerm u_13 = t;
  if((PushChoice() == 0))
    {
      ATerm n_1 (ATerm t)
      {
        ATerm v_13 = t;
        int w_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            ;
            LocalPopChoice(w_13);
          }
        else
          {
            t = v_13;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, n_1);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = u_13;
    }
  return(t);
}
ATerm App_2 (ATerm t, ATerm b_88 (ATerm), ATerm c_88 (ATerm))
{
  ATerm c_27 = NULL,d_27 = NULL,e_27 = NULL;
  c_27 = t;
  b_27 :
  if(match_cons(c_27, sym_App_2))
    {
      d_27 = ATgetArgument(c_27, 0);
      e_27 = ATgetArgument(c_27, 1);
      {
        ATerm i_27 = NULL,k_27 = NULL;
        ATerm j_27 = NULL;
        t = SSLgetAnnotations(not_null(c_27));
        {
          j_27 = t;
          if(((i_27 != NULL) && (i_27 != j_27)))
            _fail(j_27);
          else
            i_27 = j_27;
        }
        {
          t = not_null(d_27);
          {
            ATerm m_27 = NULL;
            t = b_88(t);
            {
              k_27 = t;
              {
                t = not_null(e_27);
                {
                  ATerm o_27 = NULL;
                  t = c_88(t);
                  {
                    m_27 = t;
                    {
                      ATerm p_27 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(k_27), not_null(m_27)), not_null(i_27));
                      {
                        p_27 = t;
                        if(((o_27 != NULL) && (o_27 != p_27)))
                          _fail(p_27);
                        else
                          o_27 = p_27;
                      }
                      t = not_null(o_27);
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
ATerm Con_3 (ATerm t, ATerm y_87 (ATerm), ATerm z_87 (ATerm), ATerm a_88 (ATerm))
{
  ATerm c_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL;
  c_28 = t;
  b_28 :
  if(match_cons(c_28, sym_Con_3))
    {
      d_28 = ATgetArgument(c_28, 0);
      e_28 = ATgetArgument(c_28, 1);
      f_28 = ATgetArgument(c_28, 2);
      {
        ATerm k_28 = NULL,m_28 = NULL;
        ATerm l_28 = NULL;
        t = SSLgetAnnotations(not_null(c_28));
        {
          l_28 = t;
          if(((k_28 != NULL) && (k_28 != l_28)))
            _fail(l_28);
          else
            k_28 = l_28;
        }
        {
          t = not_null(d_28);
          {
            ATerm o_28 = NULL;
            t = y_87(t);
            {
              m_28 = t;
              {
                t = not_null(e_28);
                {
                  ATerm q_28 = NULL;
                  t = z_87(t);
                  {
                    o_28 = t;
                    {
                      t = not_null(f_28);
                      {
                        ATerm s_28 = NULL;
                        t = a_88(t);
                        {
                          q_28 = t;
                          {
                            ATerm t_28 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(m_28), not_null(o_28), not_null(q_28)), not_null(k_28));
                            {
                              t_28 = t;
                              if(((s_28 != NULL) && (s_28 != t_28)))
                                _fail(t_28);
                              else
                                s_28 = t_28;
                            }
                            t = not_null(s_28);
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
ATerm pureterm_0 (ATerm t)
{
  ATerm x_13 = t;
  if((PushChoice() == 0))
    {
      ATerm o_1 (ATerm t)
      {
        ATerm y_13 = t;
        int z_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            ;
            LocalPopChoice(z_13);
          }
        else
          {
            t = y_13;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, o_1);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = x_13;
    }
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL,i_29 = NULL;
  e_29 = t;
  c_29 :
  if(match_cons(e_29, sym_SRule_1))
    {
      f_29 = ATgetArgument(e_29, 0);
      d_29 :
      if(match_cons(f_29, sym_StratRule_3))
        {
          g_29 = ATgetArgument(f_29, 0);
          h_29 = ATgetArgument(f_29, 1);
          i_29 = ATgetArgument(f_29, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(h_29)), (ATerm) ATmakeAppl(sym_Where_1, not_null(i_29))), not_null(g_29)));
        }
      else
        {
          if(match_cons(f_29, sym_Rule_3))
            {
              g_29 = ATgetArgument(f_29, 0);
              h_29 = ATgetArgument(f_29, 1);
              i_29 = ATgetArgument(f_29, 2);
              {
                t = not_null(g_29);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(h_29);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(h_29))), (ATerm) ATmakeAppl(sym_Where_1, not_null(i_29))), (ATerm) ATmakeAppl(sym_Match_1, not_null(g_29))));
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
ATerm oncetd_1 (ATerm t, ATerm y_97 (ATerm))
{
  ATerm r_29 (ATerm t)
  {
    ATerm a_14 = t;
    int c_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_97(t);
        ;
        LocalPopChoice(c_14);
      }
    else
      {
        t = a_14;
        t = _one(t, r_29);
      }
    return(t);
  }
  t = r_29(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm g_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL,k_30 = NULL;
  g_30 = t;
  e_30 :
  if(match_cons(g_30, sym_SRule_1))
    {
      h_30 = ATgetArgument(g_30, 0);
      f_30 :
      if(match_cons(h_30, sym_Rule_3))
        {
          i_30 = ATgetArgument(h_30, 0);
          j_30 = ATgetArgument(h_30, 1);
          k_30 = ATgetArgument(h_30, 2);
          {
            ATerm o_30 = NULL,p_30 = NULL,q_30 = NULL,r_30 = NULL,s_30 = NULL,t_30 = NULL,u_30 = NULL,v_30 = NULL;
            ATerm w_30 = NULL;
            ATerm c_31 = NULL;
            t = new_0(t);
            {
              w_30 = t;
              {
                if(((t_30 != NULL) && (t_30 != w_30)))
                  _fail(w_30);
                else
                  t_30 = w_30;
                {
                  t = not_null(i_30);
                  {
                    ATerm k_31 = NULL;
                    ATerm p_1 (ATerm t)
                    {
                      ATerm x_30 = NULL,y_30 = NULL,z_30 = NULL,a_31 = NULL,b_31 = NULL;
                      x_30 = t;
                      v_29 :
                      if(match_cons(x_30, sym_Con_3))
                        {
                          y_30 = ATgetArgument(x_30, 0);
                          a_31 = ATgetArgument(x_30, 1);
                          b_31 = ATgetArgument(x_30, 2);
                          w_29 :
                          if(match_cons(y_30, sym_Var_1))
                            {
                              z_30 = ATgetArgument(y_30, 0);
                              {
                                if(((s_30 != NULL) && (s_30 != z_30)))
                                  _fail(z_30);
                                else
                                  s_30 = z_30;
                                {
                                  if(((q_30 != NULL) && (q_30 != a_31)))
                                    _fail(a_31);
                                  else
                                    q_30 = a_31;
                                  {
                                    if(((o_30 != NULL) && (o_30 != b_31)))
                                      _fail(b_31);
                                    else
                                      o_30 = b_31;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(s_30));
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
                    t = oncetd_1(t, p_1);
                    {
                      c_31 = t;
                      {
                        if(((u_30 != NULL) && (u_30 != c_31)))
                          _fail(c_31);
                        else
                          u_30 = c_31;
                        {
                          t = not_null(j_30);
                          {
                            ATerm q_1 (ATerm t)
                            {
                              ATerm d_31 = NULL,e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL,j_31 = NULL;
                              d_31 = t;
                              z_29 :
                              if(match_cons(d_31, sym_Con_3))
                                {
                                  e_31 = ATgetArgument(d_31, 0);
                                  g_31 = ATgetArgument(d_31, 1);
                                  h_31 = ATgetArgument(d_31, 2);
                                  a_30 :
                                  if(match_cons(e_31, sym_Var_1))
                                    {
                                      f_31 = ATgetArgument(e_31, 0);
                                      b_30 :
                                      if(match_cons(h_31, sym_Call_2))
                                        {
                                          i_31 = ATgetArgument(h_31, 0);
                                          j_31 = ATgetArgument(h_31, 1);
                                          c_30 :
                                          if(((ATgetType(j_31) == AT_LIST) && ATisEmpty(j_31)))
                                            {
                                              {
                                                if(((s_30 != NULL) && (s_30 != f_31)))
                                                  _fail(f_31);
                                                else
                                                  s_30 = f_31;
                                                {
                                                  if(((r_30 != NULL) && (r_30 != g_31)))
                                                    _fail(g_31);
                                                  else
                                                    r_30 = g_31;
                                                  {
                                                    if(((p_30 != NULL) && (p_30 != i_31)))
                                                      _fail(i_31);
                                                    else
                                                      p_30 = i_31;
                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(t_30));
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
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = oncetd_1(t, q_1);
                            {
                              k_31 = t;
                              if(((v_30 != NULL) && (v_30 != k_31)))
                                _fail(k_31);
                              else
                                v_30 = k_31;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(t_30)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(u_30), not_null(v_30), (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_30), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(p_30), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(q_30), not_null(r_30), term_z_12)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(s_30)), (ATerm) ATmakeAppl(sym_Var_1, not_null(t_30)))))));
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
ATerm desugarRule_0 (ATerm t)
{
  ATerm r_1 (ATerm t)
  {
    ATerm d_14 = t;
    int e_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        ;
        LocalPopChoice(e_14);
      }
    else
      {
        t = d_14;
        {
          ATerm g_14 = t;
          int h_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2(t, _id, desugarRule_0);
              ;
              LocalPopChoice(h_14);
            }
          else
            {
              t = g_14;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, r_1);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm i_96 (ATerm))
{
  t = i_96(t);
  {
    ATerm s_1 (ATerm t)
    {
      t = topdown_1(t, i_96);
      return(t);
    }
    t = _all(t, s_1);
  }
  return(t);
}
ATerm desugar_0 (ATerm t)
{
  ATerm t_1 (ATerm t)
  {
    t = try_1(t, desugarRule_0);
    {
      ATerm u_1 (ATerm t)
      {
        ATerm i_14 = t;
        int k_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0(t);
            ;
            LocalPopChoice(k_14);
          }
        else
          {
            t = i_14;
            {
              ATerm o_14 = t;
              int y_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  ;
                  LocalPopChoice(y_14);
                }
              else
                {
                  t = o_14;
                  {
                    ATerm g_15 = t;
                    int q_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0(t);
                        ;
                        LocalPopChoice(q_15);
                      }
                    else
                      {
                        t = g_15;
                        {
                          ATerm r_15 = t;
                          int s_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0(t);
                              ;
                              LocalPopChoice(s_15);
                            }
                          else
                            {
                              t = r_15;
                              t = Expl_0(t);
                            }
                        }
                      }
                  }
                }
            }
          }
        return(t);
      }
      t = repeat_1(t, u_1);
    }
    return(t);
  }
  t = topdown_1(t, t_1);
  return(t);
}
ATerm BottomupToVarIsId_Cond_0 (ATerm t)
{
  ATerm s_32 = NULL,t_32 = NULL,u_32 = NULL,v_32 = NULL,w_32 = NULL,x_32 = NULL,y_32 = NULL,z_32 = NULL,a_33 = NULL,b_33 = NULL,c_33 = NULL,d_33 = NULL,e_33 = NULL;
  s_32 = t;
  i_32 :
  if(match_cons(s_32, sym_Seq_2))
    {
      t_32 = ATgetArgument(s_32, 0);
      x_32 = ATgetArgument(s_32, 1);
      j_32 :
      if(match_cons(t_32, sym_Call_2))
        {
          u_32 = ATgetArgument(t_32, 0);
          w_32 = ATgetArgument(t_32, 1);
          k_32 :
          if(match_cons(u_32, sym_SVar_1))
            {
              v_32 = ATgetArgument(u_32, 0);
              l_32 :
              if(match_string(v_32, "mark"))
                {
                  m_32 :
                  if(((ATgetType(w_32) == AT_LIST) && ATisEmpty(w_32)))
                    {
                      n_32 :
                      if(match_cons(x_32, sym_Seq_2))
                        {
                          y_32 = ATgetArgument(x_32, 0);
                          a_33 = ATgetArgument(x_32, 1);
                          o_32 :
                          if(match_cons(y_32, sym_Match_1))
                            {
                              z_32 = ATgetArgument(y_32, 0);
                              p_32 :
                              if(match_cons(a_33, sym_Seq_2))
                                {
                                  b_33 = ATgetArgument(a_33, 0);
                                  d_33 = ATgetArgument(a_33, 1);
                                  q_32 :
                                  if(match_cons(b_33, sym_Where_1))
                                    {
                                      c_33 = ATgetArgument(b_33, 0);
                                      r_32 :
                                      if(match_cons(d_33, sym_Build_1))
                                        {
                                          e_33 = ATgetArgument(d_33, 0);
                                          {
                                            ATerm t_15 = t;
                                            int u_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm c_36 = NULL,d_36 = NULL,e_36 = NULL;
                                                ATerm f_36 = NULL,g_36 = NULL,h_36 = NULL;
                                                t = term_d_16;
                                                {
                                                  ATerm w_1 (ATerm t)
                                                  {
                                                    t = term_k_16;
                                                    return(t);
                                                  }
                                                  t = rewrite_1(t, w_1);
                                                  {
                                                    f_36 = t;
                                                    x_31 :
                                                    if(match_cons(f_36, sym_Defined_2))
                                                      {
                                                        g_36 = ATgetArgument(f_36, 0);
                                                        h_36 = ATgetArgument(f_36, 1);
                                                        y_31 :
                                                        if(match_string(g_36, "r_0"))
                                                          {
                                                            ATerm i_36 = NULL,j_36 = NULL,k_36 = NULL;
                                                            if(((c_36 != NULL) && (c_36 != h_36)))
                                                              _fail(h_36);
                                                            else
                                                              c_36 = h_36;
                                                            {
                                                              t = (ATerm) ATmakeAppl(sym__3, not_null(c_36), not_null(z_32), (ATerm) ATmakeAppl(sym__2, not_null(c_33), not_null(e_33)));
                                                              {
                                                                t = replace_application_0(t);
                                                                {
                                                                  i_36 = t;
                                                                  w_31 :
                                                                  if(match_cons(i_36, sym__2))
                                                                    {
                                                                      j_36 = ATgetArgument(i_36, 0);
                                                                      k_36 = ATgetArgument(i_36, 1);
                                                                      {
                                                                        if(((d_36 != NULL) && (d_36 != j_36)))
                                                                          _fail(j_36);
                                                                        else
                                                                          d_36 = j_36;
                                                                        if(((e_36 != NULL) && (e_36 != k_36)))
                                                                          _fail(k_36);
                                                                        else
                                                                          e_36 = k_36;
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
                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(z_32)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, not_null(d_36)), (ATerm) ATmakeAppl(sym_Build_1, not_null(e_36))));
                                                ;
                                                LocalPopChoice(u_15);
                                              }
                                            else
                                              {
                                                t = t_15;
                                                {
                                                  ATerm q_36 = NULL,r_36 = NULL,s_36 = NULL,t_36 = NULL,u_36 = NULL;
                                                  ATerm v_36 = NULL,w_36 = NULL,x_36 = NULL;
                                                  t = term_d_16;
                                                  {
                                                    ATerm y_1 (ATerm t)
                                                    {
                                                      t = term_k_16;
                                                      return(t);
                                                    }
                                                    t = rewrite_1(t, y_1);
                                                    {
                                                      v_36 = t;
                                                      g_32 :
                                                      if(match_cons(v_36, sym_Defined_2))
                                                        {
                                                          w_36 = ATgetArgument(v_36, 0);
                                                          x_36 = ATgetArgument(v_36, 1);
                                                          h_32 :
                                                          if(match_string(w_36, "h_0"))
                                                            {
                                                              ATerm y_36 = NULL;
                                                              if(((q_36 != NULL) && (q_36 != x_36)))
                                                                _fail(x_36);
                                                              else
                                                                q_36 = x_36;
                                                              {
                                                                ATerm z_36 = NULL;
                                                                t = not_null(q_36);
                                                                {
                                                                  y_36 = t;
                                                                  {
                                                                    if(((s_36 != NULL) && (s_36 != y_36)))
                                                                      _fail(y_36);
                                                                    else
                                                                      s_36 = y_36;
                                                                    {
                                                                      t = not_null(z_32);
                                                                      {
                                                                        t = tvars_0(t);
                                                                        {
                                                                          z_36 = t;
                                                                          {
                                                                            if(((r_36 != NULL) && (r_36 != z_36)))
                                                                              _fail(z_36);
                                                                            else
                                                                              r_36 = z_36;
                                                                            {
                                                                              ATerm z_1 (ATerm t)
                                                                              {
                                                                                t = term_l_16;
                                                                                return(t);
                                                                              }
                                                                              ATerm a_2 (ATerm t)
                                                                              {
                                                                                ATerm e_37 = NULL,f_37 = NULL,g_37 = NULL;
                                                                                ATerm b_2 (ATerm t)
                                                                                {
                                                                                  ATerm a_37 = NULL,c_37 = NULL;
                                                                                  ATerm b_37 = NULL;
                                                                                  b_37 = t;
                                                                                  if(((a_37 != NULL) && (a_37 != b_37)))
                                                                                    _fail(b_37);
                                                                                  else
                                                                                    a_37 = b_37;
                                                                                  {
                                                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(a_37));
                                                                                    {
                                                                                      c_37 = t;
                                                                                      {
                                                                                        ATerm m_16;
                                                                                        m_16 = t;
                                                                                        {
                                                                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, not_null(s_36), not_null(c_37)), term_o_16);
                                                                                          {
                                                                                            ATerm c_2 (ATerm t)
                                                                                            {
                                                                                              t = term_l_16;
                                                                                              return(t);
                                                                                            }
                                                                                            t = assert_1(t, c_2);
                                                                                          }
                                                                                        }
                                                                                        t = m_16;
                                                                                      }
                                                                                    }
                                                                                  }
                                                                                  return(t);
                                                                                }
                                                                                t = map_1(t, b_2);
                                                                                {
                                                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(c_33), not_null(e_33));
                                                                                  {
                                                                                    t = alltd_1(t, Replace_0);
                                                                                    {
                                                                                      e_37 = t;
                                                                                      f_32 :
                                                                                      if(match_cons(e_37, sym__2))
                                                                                        {
                                                                                          f_37 = ATgetArgument(e_37, 0);
                                                                                          g_37 = ATgetArgument(e_37, 1);
                                                                                          {
                                                                                            if(((t_36 != NULL) && (t_36 != f_37)))
                                                                                              _fail(f_37);
                                                                                            else
                                                                                              t_36 = f_37;
                                                                                            if(((u_36 != NULL) && (u_36 != g_37)))
                                                                                              _fail(g_37);
                                                                                            else
                                                                                              u_36 = g_37;
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                    }
                                                                                  }
                                                                                }
                                                                                return(t);
                                                                              }
                                                                              t = scope_2(t, z_1, a_2);
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
                                                        }
                                                      else
                                                        {
                                                          _fail(t);
                                                        }
                                                    }
                                                  }
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(z_32)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, not_null(t_36)), (ATerm) ATmakeAppl(sym_Build_1, not_null(e_33))));
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
ATerm Replace_0 (ATerm t)
{
  ATerm h_38 = NULL,i_38 = NULL,j_38 = NULL,k_38 = NULL;
  ATerm g_39 (ATerm t)
  {
    ATerm y_38 = NULL,z_38 = NULL;
    t = not_null(i_38);
    {
      ATerm d_2 (ATerm t)
      {
        t = term_l_16;
        return(t);
      }
      t = rewrite_1(t, d_2);
      {
        y_38 = t;
        w_37 :
        if(match_cons(y_38, sym_Defined_1))
          {
            z_38 = ATgetArgument(y_38, 0);
            x_37 :
            if(!(match_string(z_38, "l_0")))
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
    t = not_null(k_38);
    return(t);
  }
  ATerm h_39 (ATerm t)
  {
    ATerm d_39 = NULL,e_39 = NULL;
    t = not_null(i_38);
    {
      ATerm e_2 (ATerm t)
      {
        t = term_l_16;
        return(t);
      }
      t = rewrite_1(t, e_2);
      {
        d_39 = t;
        d_38 :
        if(match_cons(d_39, sym_Defined_1))
          {
            e_39 = ATgetArgument(d_39, 0);
            e_38 :
            if(!(match_string(e_39, "j_0")))
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
    t = not_null(k_38);
    return(t);
  }
  i_38 = t;
  f_38 :
  if(match_cons(i_38, sym_App_2))
    {
      j_38 = ATgetArgument(i_38, 0);
      k_38 = ATgetArgument(i_38, 1);
      g_38 :
      if(match_cons(k_38, sym_Var_1))
        {
          h_38 = ATgetArgument(k_38, 0);
          {
            ATerm p_16 = t;
            int q_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_38 = NULL,p_38 = NULL;
                t = not_null(i_38);
                {
                  ATerm f_2 (ATerm t)
                  {
                    t = term_l_16;
                    return(t);
                  }
                  t = rewrite_1(t, f_2);
                  {
                    o_38 = t;
                    u_37 :
                    if(match_cons(o_38, sym_Defined_1))
                      {
                        p_38 = ATgetArgument(o_38, 0);
                        v_37 :
                        if(!(match_string(p_38, "u_0")))
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
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(h_38));
                ;
                LocalPopChoice(q_16);
              }
            else
              {
                t = p_16;
                {
                  ATerm r_16 = t;
                  int s_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = g_39(t);
                      ;
                      LocalPopChoice(s_16);
                    }
                  else
                    {
                      t = r_16;
                      t = h_39(t);
                    }
                }
              }
          }
        }
      else
        {
          ATerm t_16 = t;
          int y_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = g_39(t);
              ;
              LocalPopChoice(y_16);
            }
          else
            {
              t = t_16;
              t = h_39(t);
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
  ATerm k_39 = NULL,l_39 = NULL,m_39 = NULL;
  k_39 = t;
  j_39 :
  if(((ATgetType(k_39) == AT_LIST) && !(ATisEmpty(k_39))))
    {
      l_39 = ATgetFirst((ATermList) k_39);
      m_39 = (ATerm) ATgetNext((ATermList) k_39);
      t = not_null(m_39);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm s_39 = NULL,t_39 = NULL,u_39 = NULL;
  s_39 = t;
  r_39 :
  if(match_cons(s_39, sym__2))
    {
      t_39 = ATgetArgument(s_39, 0);
      u_39 = ATgetArgument(s_39, 1);
      {
        ATerm z_16;
        z_16 = t;
        {
          ATerm x_39 = NULL;
          ATerm y_39 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_39), not_null(u_39));
          {
            ATerm a_17 = t;
            int e_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(e_17);
              }
            else
              {
                t = a_17;
                t = (ATerm) ATempty;
              }
            {
              y_39 = t;
              if(((x_39 != NULL) && (x_39 != y_39)))
                _fail(y_39);
              else
                x_39 = y_39;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(t_39), not_null(u_39), not_null(x_39));
            t = table_put_0(t);
          }
        }
        t = z_16;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm u_114 (ATerm))
{
  ATerm f_40 = NULL,g_40 = NULL,h_40 = NULL;
  ATerm g_17;
  g_17 = t;
  {
    ATerm i_40 = NULL;
    ATerm j_40 = NULL,k_40 = NULL,l_40 = NULL;
    t = u_114(t);
    {
      i_40 = t;
      {
        if(((h_40 != NULL) && (h_40 != i_40)))
          _fail(i_40);
        else
          h_40 = i_40;
        {
          ATerm j_17 = t;
          int k_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(h_40), term_l_17);
              t = table_get_0(t);
              ;
              LocalPopChoice(k_17);
            }
          else
            {
              t = j_17;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            j_40 = t;
            e_40 :
            if(((ATgetType(j_40) == AT_LIST) && !(ATisEmpty(j_40))))
              {
                k_40 = ATgetFirst((ATermList) j_40);
                l_40 = (ATerm) ATgetNext((ATermList) j_40);
                {
                  if(((g_40 != NULL) && (g_40 != k_40)))
                    _fail(k_40);
                  else
                    g_40 = k_40;
                  {
                    if(((f_40 != NULL) && (f_40 != l_40)))
                      _fail(l_40);
                    else
                      f_40 = l_40;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(h_40), term_l_17, not_null(f_40));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(g_40);
                          {
                            ATerm g_2 (ATerm t)
                            {
                              ATerm m_40 = NULL;
                              m_40 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(h_40), not_null(m_40));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, g_2);
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
  t = g_17;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm b_100 (ATerm), ATerm c_100 (ATerm))
{
  ATerm m_17 = t;
  int n_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = b_100(t);
      t = c_100(t);
      ;
      LocalPopChoice(n_17);
    }
  else
    {
      t = m_17;
      {
        t = c_100(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm t_114 (ATerm))
{
  ATerm t_40 = NULL;
  ATerm o_17;
  o_17 = t;
  {
    ATerm y_40 = NULL;
    ATerm z_40 = NULL;
    t = t_114(t);
    {
      y_40 = t;
      {
        if(((t_40 != NULL) && (t_40 != y_40)))
          _fail(y_40);
        else
          t_40 = y_40;
        {
          ATerm a_41 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_40), term_l_17);
          {
            ATerm p_17 = t;
            int q_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(q_17);
              }
            else
              {
                t = p_17;
                t = (ATerm) ATempty;
              }
            {
              a_41 = t;
              if(((z_40 != NULL) && (z_40 != a_41)))
                _fail(a_41);
              else
                z_40 = a_41;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(t_40), term_l_17, (ATerm) ATinsert(CheckATermList(not_null(z_40)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = o_17;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm v_114 (ATerm), ATerm w_114 (ATerm))
{
  t = begin_scope_1(t, v_114);
  {
    ATerm h_2 (ATerm t)
    {
      t = end_scope_1(t, v_114);
      return(t);
    }
    t = restore_always_2(t, w_114, h_2);
  }
  return(t);
}
ATerm replace_application_0 (ATerm t)
{
  ATerm p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL;
  p_41 = t;
  o_41 :
  if(match_cons(p_41, sym__3))
    {
      q_41 = ATgetArgument(p_41, 0);
      r_41 = ATgetArgument(p_41, 1);
      s_41 = ATgetArgument(p_41, 2);
      {
        ATerm w_41 = NULL;
        ATerm i_2 (ATerm t)
        {
          t = term_l_16;
          return(t);
        }
        ATerm j_2 (ATerm t)
        {
          ATerm z_41 = NULL;
          t = not_null(r_41);
          {
            t = tvars_0(t);
            {
              ATerm k_2 (ATerm t)
              {
                ATerm x_41 = NULL;
                x_41 = t;
                {
                  ATerm r_17;
                  r_17 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, not_null(q_41), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_41))), term_x_17);
                    {
                      ATerm l_2 (ATerm t)
                      {
                        t = term_l_16;
                        return(t);
                      }
                      t = assert_1(t, l_2);
                    }
                  }
                  t = r_17;
                }
                return(t);
              }
              t = map_1(t, k_2);
              {
                t = not_null(s_41);
                {
                  t = alltd_1(t, Replace_0);
                  {
                    z_41 = t;
                    if(((w_41 != NULL) && (w_41 != z_41)))
                      _fail(z_41);
                    else
                      w_41 = z_41;
                  }
                }
              }
            }
          }
          return(t);
        }
        t = scope_2(t, i_2, j_2);
        t = not_null(w_41);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm BottomupToVarIsId_UnCond_0 (ATerm t)
{
  ATerm z_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL,g_43 = NULL,j_43 = NULL,k_43 = NULL;
  z_42 = t;
  r_42 :
  if(match_cons(z_42, sym_Seq_2))
    {
      a_43 = ATgetArgument(z_42, 0);
      e_43 = ATgetArgument(z_42, 1);
      s_42 :
      if(match_cons(a_43, sym_Call_2))
        {
          b_43 = ATgetArgument(a_43, 0);
          d_43 = ATgetArgument(a_43, 1);
          t_42 :
          if(match_cons(b_43, sym_SVar_1))
            {
              c_43 = ATgetArgument(b_43, 0);
              u_42 :
              if(match_string(c_43, "mark"))
                {
                  v_42 :
                  if(((ATgetType(d_43) == AT_LIST) && ATisEmpty(d_43)))
                    {
                      w_42 :
                      if(match_cons(e_43, sym_Seq_2))
                        {
                          f_43 = ATgetArgument(e_43, 0);
                          j_43 = ATgetArgument(e_43, 1);
                          x_42 :
                          if(match_cons(f_43, sym_Match_1))
                            {
                              g_43 = ATgetArgument(f_43, 0);
                              y_42 :
                              if(match_cons(j_43, sym_Build_1))
                                {
                                  k_43 = ATgetArgument(j_43, 0);
                                  {
                                    ATerm y_17 = t;
                                    int z_17 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm v_43 = NULL,w_43 = NULL;
                                        ATerm x_43 = NULL,y_43 = NULL,z_43 = NULL;
                                        t = term_f_18;
                                        {
                                          ATerm m_2 (ATerm t)
                                          {
                                            t = term_i_18;
                                            return(t);
                                          }
                                          t = rewrite_1(t, m_2);
                                          {
                                            x_43 = t;
                                            h_42 :
                                            if(match_cons(x_43, sym_Defined_2))
                                              {
                                                y_43 = ATgetArgument(x_43, 0);
                                                z_43 = ATgetArgument(x_43, 1);
                                                i_42 :
                                                if(match_string(y_43, "o_0"))
                                                  {
                                                    ATerm a_44 = NULL;
                                                    if(((v_43 != NULL) && (v_43 != z_43)))
                                                      _fail(z_43);
                                                    else
                                                      v_43 = z_43;
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym__3, not_null(v_43), not_null(g_43), not_null(k_43));
                                                      {
                                                        t = replace_application_0(t);
                                                        {
                                                          a_44 = t;
                                                          if(((w_43 != NULL) && (w_43 != a_44)))
                                                            _fail(a_44);
                                                          else
                                                            w_43 = a_44;
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
                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(g_43)), (ATerm) ATmakeAppl(sym_Build_1, not_null(w_43)));
                                        ;
                                        LocalPopChoice(z_17);
                                      }
                                    else
                                      {
                                        t = y_17;
                                        {
                                          ATerm i_44 = NULL,n_44 = NULL,o_44 = NULL,p_44 = NULL;
                                          ATerm q_44 = NULL,r_44 = NULL,s_44 = NULL;
                                          t = term_f_18;
                                          {
                                            ATerm n_2 (ATerm t)
                                            {
                                              t = term_i_18;
                                              return(t);
                                            }
                                            t = rewrite_1(t, n_2);
                                            {
                                              q_44 = t;
                                              p_42 :
                                              if(match_cons(q_44, sym_Defined_2))
                                                {
                                                  r_44 = ATgetArgument(q_44, 0);
                                                  s_44 = ATgetArgument(q_44, 1);
                                                  q_42 :
                                                  if(match_string(r_44, "e_0"))
                                                    {
                                                      ATerm t_44 = NULL;
                                                      if(((i_44 != NULL) && (i_44 != s_44)))
                                                        _fail(s_44);
                                                      else
                                                        i_44 = s_44;
                                                      {
                                                        ATerm u_44 = NULL;
                                                        t = not_null(i_44);
                                                        {
                                                          t_44 = t;
                                                          {
                                                            if(((o_44 != NULL) && (o_44 != t_44)))
                                                              _fail(t_44);
                                                            else
                                                              o_44 = t_44;
                                                            {
                                                              t = not_null(g_43);
                                                              {
                                                                t = tvars_0(t);
                                                                {
                                                                  u_44 = t;
                                                                  {
                                                                    if(((n_44 != NULL) && (n_44 != u_44)))
                                                                      _fail(u_44);
                                                                    else
                                                                      n_44 = u_44;
                                                                    {
                                                                      ATerm o_2 (ATerm t)
                                                                      {
                                                                        t = term_l_16;
                                                                        return(t);
                                                                      }
                                                                      ATerm p_2 (ATerm t)
                                                                      {
                                                                        ATerm z_44 = NULL;
                                                                        ATerm q_2 (ATerm t)
                                                                        {
                                                                          ATerm v_44 = NULL,x_44 = NULL;
                                                                          ATerm w_44 = NULL;
                                                                          w_44 = t;
                                                                          if(((v_44 != NULL) && (v_44 != w_44)))
                                                                            _fail(w_44);
                                                                          else
                                                                            v_44 = w_44;
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(v_44));
                                                                            {
                                                                              x_44 = t;
                                                                              {
                                                                                ATerm j_18;
                                                                                j_18 = t;
                                                                                {
                                                                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, not_null(o_44), not_null(x_44)), term_l_18);
                                                                                  {
                                                                                    ATerm r_2 (ATerm t)
                                                                                    {
                                                                                      t = term_l_16;
                                                                                      return(t);
                                                                                    }
                                                                                    t = assert_1(t, r_2);
                                                                                  }
                                                                                }
                                                                                t = j_18;
                                                                              }
                                                                            }
                                                                          }
                                                                          return(t);
                                                                        }
                                                                        t = map_1(t, q_2);
                                                                        {
                                                                          t = not_null(k_43);
                                                                          {
                                                                            t = alltd_1(t, Replace_0);
                                                                            {
                                                                              z_44 = t;
                                                                              if(((p_44 != NULL) && (p_44 != z_44)))
                                                                                _fail(z_44);
                                                                              else
                                                                                p_44 = z_44;
                                                                            }
                                                                          }
                                                                        }
                                                                        return(t);
                                                                      }
                                                                      t = scope_2(t, o_2, p_2);
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
                                                }
                                              else
                                                {
                                                  _fail(t);
                                                }
                                            }
                                          }
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(g_43)), (ATerm) ATmakeAppl(sym_Build_1, not_null(p_44)));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm BottomupOverConstructor_0 (ATerm t)
{
  ATerm u_45 = NULL,v_45 = NULL,w_45 = NULL,x_45 = NULL,y_45 = NULL,z_45 = NULL,a_46 = NULL,b_46 = NULL,c_46 = NULL,d_46 = NULL;
  u_45 = t;
  n_45 :
  if(match_cons(u_45, sym_App_2))
    {
      v_45 = ATgetArgument(u_45, 0);
      b_46 = ATgetArgument(u_45, 1);
      o_45 :
      if(match_cons(v_45, sym_Call_2))
        {
          w_45 = ATgetArgument(v_45, 0);
          y_45 = ATgetArgument(v_45, 1);
          p_45 :
          if(match_cons(w_45, sym_SVar_1))
            {
              x_45 = ATgetArgument(w_45, 0);
              q_45 :
              if(match_string(x_45, "bottomup_1"))
                {
                  r_45 :
                  if(((ATgetType(y_45) == AT_LIST) && !(ATisEmpty(y_45))))
                    {
                      z_45 = ATgetFirst((ATermList) y_45);
                      a_46 = (ATerm) ATgetNext((ATermList) y_45);
                      s_45 :
                      if(((ATgetType(a_46) == AT_LIST) && ATisEmpty(a_46)))
                        {
                          t_45 :
                          if(match_cons(b_46, sym_Op_2))
                            {
                              c_46 = ATgetArgument(b_46, 0);
                              d_46 = ATgetArgument(b_46, 1);
                              {
                                ATerm h_46 = NULL;
                                ATerm k_46 = NULL;
                                t = not_null(d_46);
                                {
                                  ATerm s_2 (ATerm t)
                                  {
                                    ATerm i_46 = NULL;
                                    i_46 = t;
                                    t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_n_18, (ATerm) ATinsert(ATempty, not_null(z_45))), not_null(i_46));
                                    return(t);
                                  }
                                  t = map_1(t, s_2);
                                  {
                                    k_46 = t;
                                    if(((h_46 != NULL) && (h_46 != k_46)))
                                      _fail(k_46);
                                    else
                                      h_46 = k_46;
                                  }
                                }
                                t = (ATerm) ATmakeAppl(sym_App_2, not_null(z_45), (ATerm) ATmakeAppl(sym_Op_2, not_null(c_46), not_null(h_46)));
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
ATerm IntroduceApp_0 (ATerm t)
{
  ATerm r_46 = NULL,s_46 = NULL,t_46 = NULL,u_46 = NULL;
  r_46 = t;
  p_46 :
  if(match_cons(r_46, sym_Seq_2))
    {
      s_46 = ATgetArgument(r_46, 0);
      u_46 = ATgetArgument(r_46, 1);
      q_46 :
      if(match_cons(s_46, sym_Build_1))
        {
          t_46 = ATgetArgument(s_46, 0);
          t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_App_2, not_null(u_46), not_null(t_46)));
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
ATerm AssociateR_0 (ATerm t)
{
  ATerm f_47 = NULL,g_47 = NULL,h_47 = NULL,i_47 = NULL,j_47 = NULL;
  f_47 = t;
  b_47 :
  if(match_cons(f_47, sym_LChoice_2))
    {
      g_47 = ATgetArgument(f_47, 0);
      j_47 = ATgetArgument(f_47, 1);
      c_47 :
      if(match_cons(g_47, sym_LChoice_2))
        {
          h_47 = ATgetArgument(g_47, 0);
          i_47 = ATgetArgument(g_47, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(h_47), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(i_47), not_null(j_47)));
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(f_47, sym_Seq_2))
        {
          g_47 = ATgetArgument(f_47, 0);
          j_47 = ATgetArgument(f_47, 1);
          d_47 :
          if(match_cons(g_47, sym_Seq_2))
            {
              h_47 = ATgetArgument(g_47, 0);
              i_47 = ATgetArgument(g_47, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_47), (ATerm) ATmakeAppl(sym_Seq_2, not_null(i_47), not_null(j_47)));
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(f_47, sym_Choice_2))
            {
              g_47 = ATgetArgument(f_47, 0);
              j_47 = ATgetArgument(f_47, 1);
              e_47 :
              if(match_cons(g_47, sym_Choice_2))
                {
                  h_47 = ATgetArgument(g_47, 0);
                  i_47 = ATgetArgument(g_47, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(h_47), (ATerm) ATmakeAppl(sym_Choice_2, not_null(i_47), not_null(j_47)));
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
ATerm SeqOverScopeR_0 (ATerm t)
{
  ATerm z_47 = NULL,a_48 = NULL,b_48 = NULL,c_48 = NULL,d_48 = NULL;
  z_47 = t;
  x_47 :
  if(match_cons(z_47, sym_Seq_2))
    {
      a_48 = ATgetArgument(z_47, 0);
      d_48 = ATgetArgument(z_47, 1);
      y_47 :
      if(match_cons(a_48, sym_Scope_2))
        {
          b_48 = ATgetArgument(a_48, 0);
          c_48 = ATgetArgument(a_48, 1);
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(b_48), (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_48), not_null(d_48)));
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
ATerm SeqOverLChoiceR_0 (ATerm t)
{
  ATerm n_48 = NULL,o_48 = NULL,p_48 = NULL,q_48 = NULL,r_48 = NULL;
  n_48 = t;
  l_48 :
  if(match_cons(n_48, sym_Seq_2))
    {
      o_48 = ATgetArgument(n_48, 0);
      r_48 = ATgetArgument(n_48, 1);
      m_48 :
      if(match_cons(o_48, sym_LChoice_2))
        {
          p_48 = ATgetArgument(o_48, 0);
          q_48 = ATgetArgument(o_48, 1);
          {
            ATerm w_48 = NULL,x_48 = NULL;
            t = (ATerm) ATmakeAppl(sym_Seq_2, term_o_18, not_null(r_48));
            {
              ATerm t_2 (ATerm t)
              {
                t = term_p_18;
                return(t);
              }
              t = rewrite_1(t, t_2);
              {
                w_48 = t;
                j_48 :
                if(match_cons(w_48, sym_Defined_1))
                  {
                    x_48 = ATgetArgument(w_48, 0);
                    k_48 :
                    if(!(match_string(x_48, "x_1")))
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
            t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(p_48), not_null(r_48)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(q_48), not_null(r_48)));
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
ATerm SeqOverChoiceR_0 (ATerm t)
{
  ATerm e_49 = NULL,f_49 = NULL,g_49 = NULL,h_49 = NULL,i_49 = NULL;
  e_49 = t;
  c_49 :
  if(match_cons(e_49, sym_Seq_2))
    {
      f_49 = ATgetArgument(e_49, 0);
      i_49 = ATgetArgument(e_49, 1);
      d_49 :
      if(match_cons(f_49, sym_Choice_2))
        {
          g_49 = ATgetArgument(f_49, 0);
          h_49 = ATgetArgument(f_49, 1);
          {
            ATerm n_49 = NULL,o_49 = NULL;
            t = (ATerm) ATmakeAppl(sym_Seq_2, term_q_18, not_null(i_49));
            {
              ATerm u_2 (ATerm t)
              {
                t = term_r_18;
                return(t);
              }
              t = rewrite_1(t, u_2);
              {
                n_49 = t;
                a_49 :
                if(match_cons(n_49, sym_Defined_1))
                  {
                    o_49 = ATgetArgument(n_49, 0);
                    b_49 :
                    if(!(match_string(o_49, "v_1")))
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
            t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(g_49), not_null(i_49)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_49), not_null(i_49)));
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
ATerm fuse_with_bottomup_0 (ATerm t)
{
  ATerm v_2 (ATerm t)
  {
    ATerm w_18 = t;
    int x_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SeqOverChoiceR_0(t);
        ;
        LocalPopChoice(x_18);
      }
    else
      {
        t = w_18;
        {
          ATerm y_18 = t;
          int c_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SeqOverLChoiceR_0(t);
              ;
              LocalPopChoice(c_19);
            }
          else
            {
              t = y_18;
              {
                ATerm e_19 = t;
                int h_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = SeqOverScopeR_0(t);
                    ;
                    LocalPopChoice(h_19);
                  }
                else
                  {
                    t = e_19;
                    {
                      ATerm i_19 = t;
                      int j_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = AssociateR_0(t);
                          ;
                          LocalPopChoice(j_19);
                        }
                      else
                        {
                          t = i_19;
                          {
                            ATerm k_19 = t;
                            int l_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = IntroduceApp_0(t);
                                ;
                                LocalPopChoice(l_19);
                              }
                            else
                              {
                                t = k_19;
                                t = BottomupOverConstructor_0(t);
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
  t = innermost_1(t, v_2);
  return(t);
}
ATerm SeqOverScopeL_0 (ATerm t)
{
  ATerm t_49 = NULL,u_49 = NULL,v_49 = NULL,w_49 = NULL,x_49 = NULL;
  t_49 = t;
  r_49 :
  if(match_cons(t_49, sym_Seq_2))
    {
      u_49 = ATgetArgument(t_49, 0);
      v_49 = ATgetArgument(t_49, 1);
      s_49 :
      if(match_cons(v_49, sym_Scope_2))
        {
          w_49 = ATgetArgument(v_49, 0);
          x_49 = ATgetArgument(v_49, 1);
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(w_49), (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_49), not_null(x_49)));
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
ATerm SeqOverLChoiceL_0 (ATerm t)
{
  ATerm f_50 = NULL,g_50 = NULL,h_50 = NULL,i_50 = NULL,j_50 = NULL;
  f_50 = t;
  d_50 :
  if(match_cons(f_50, sym_Seq_2))
    {
      g_50 = ATgetArgument(f_50, 0);
      h_50 = ATgetArgument(f_50, 1);
      e_50 :
      if(match_cons(h_50, sym_LChoice_2))
        {
          i_50 = ATgetArgument(h_50, 0);
          j_50 = ATgetArgument(h_50, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(g_50), not_null(i_50)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_50), not_null(j_50)));
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
ATerm SeqOverChoiceL_0 (ATerm t)
{
  ATerm r_50 = NULL,s_50 = NULL,t_50 = NULL,u_50 = NULL,v_50 = NULL;
  r_50 = t;
  p_50 :
  if(match_cons(r_50, sym_Seq_2))
    {
      s_50 = ATgetArgument(r_50, 0);
      t_50 = ATgetArgument(r_50, 1);
      q_50 :
      if(match_cons(t_50, sym_Choice_2))
        {
          u_50 = ATgetArgument(t_50, 0);
          v_50 = ATgetArgument(t_50, 1);
          t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Seq_2, not_null(s_50), not_null(u_50)), (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_50), not_null(v_50)));
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
ATerm bottomup_1 (ATerm t, ATerm j_96 (ATerm))
{
  ATerm w_2 (ATerm t)
  {
    t = bottomup_1(t, j_96);
    return(t);
  }
  t = _all(t, w_2);
  t = j_96(t);
  return(t);
}
ATerm innermost_1 (ATerm t, ATerm w_111 (ATerm))
{
  ATerm x_2 (ATerm t)
  {
    ATerm y_2 (ATerm t)
    {
      t = w_111(t);
      t = bottomup_1(t, x_2);
      return(t);
    }
    t = try_1(t, y_2);
    return(t);
  }
  t = bottomup_1(t, x_2);
  return(t);
}
ATerm propagate_mark_0 (ATerm t)
{
  ATerm z_2 (ATerm t)
  {
    ATerm m_19 = t;
    int n_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SeqOverChoiceL_0(t);
        ;
        LocalPopChoice(n_19);
      }
    else
      {
        t = m_19;
        {
          ATerm o_19 = t;
          int p_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SeqOverLChoiceL_0(t);
              ;
              LocalPopChoice(p_19);
            }
          else
            {
              t = o_19;
              t = SeqOverScopeL_0(t);
            }
        }
      }
    return(t);
  }
  t = innermost_1(t, z_2);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm n_84 (ATerm))
{
  ATerm g_51 = NULL,h_51 = NULL;
  g_51 = t;
  f_51 :
  if(match_cons(g_51, sym_Build_1))
    {
      h_51 = ATgetArgument(g_51, 0);
      {
        ATerm k_51 = NULL,m_51 = NULL;
        ATerm l_51 = NULL;
        t = SSLgetAnnotations(not_null(g_51));
        {
          l_51 = t;
          if(((k_51 != NULL) && (k_51 != l_51)))
            _fail(l_51);
          else
            k_51 = l_51;
        }
        {
          t = not_null(h_51);
          {
            ATerm o_51 = NULL;
            t = n_84(t);
            {
              m_51 = t;
              {
                ATerm p_51 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(m_51)), not_null(k_51));
                {
                  p_51 = t;
                  if(((o_51 != NULL) && (o_51 != p_51)))
                    _fail(p_51);
                  else
                    o_51 = p_51;
                }
                t = not_null(o_51);
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
ATerm Seq_2 (ATerm t, ATerm d_85 (ATerm), ATerm e_85 (ATerm))
{
  ATerm a_52 = NULL,b_52 = NULL,c_52 = NULL;
  a_52 = t;
  z_51 :
  if(match_cons(a_52, sym_Seq_2))
    {
      b_52 = ATgetArgument(a_52, 0);
      c_52 = ATgetArgument(a_52, 1);
      {
        ATerm g_52 = NULL,i_52 = NULL;
        ATerm h_52 = NULL;
        t = SSLgetAnnotations(not_null(a_52));
        {
          h_52 = t;
          if(((g_52 != NULL) && (g_52 != h_52)))
            _fail(h_52);
          else
            g_52 = h_52;
        }
        {
          t = not_null(b_52);
          {
            ATerm k_52 = NULL;
            t = d_85(t);
            {
              i_52 = t;
              {
                t = not_null(c_52);
                {
                  ATerm m_52 = NULL;
                  t = e_85(t);
                  {
                    k_52 = t;
                    {
                      ATerm n_52 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(i_52), not_null(k_52)), not_null(g_52));
                      {
                        n_52 = t;
                        if(((m_52 != NULL) && (m_52 != n_52)))
                          _fail(n_52);
                        else
                          m_52 = n_52;
                      }
                      t = not_null(m_52);
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
ATerm Match_1 (ATerm t, ATerm m_84 (ATerm))
{
  ATerm b_53 = NULL,c_53 = NULL;
  b_53 = t;
  a_53 :
  if(match_cons(b_53, sym_Match_1))
    {
      c_53 = ATgetArgument(b_53, 0);
      {
        ATerm f_53 = NULL,h_53 = NULL;
        ATerm g_53 = NULL;
        t = SSLgetAnnotations(not_null(b_53));
        {
          g_53 = t;
          if(((f_53 != NULL) && (f_53 != g_53)))
            _fail(g_53);
          else
            f_53 = g_53;
        }
        {
          t = not_null(c_53);
          {
            ATerm j_53 = NULL;
            t = m_84(t);
            {
              h_53 = t;
              {
                ATerm k_53 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(h_53)), not_null(f_53));
                {
                  k_53 = t;
                  if(((j_53 != NULL) && (j_53 != k_53)))
                    _fail(k_53);
                  else
                    j_53 = k_53;
                }
                t = not_null(j_53);
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
ATerm LChoice_2 (ATerm t, ATerm h_85 (ATerm), ATerm i_85 (ATerm))
{
  ATerm v_53 = NULL,w_53 = NULL,x_53 = NULL;
  v_53 = t;
  u_53 :
  if(match_cons(v_53, sym_LChoice_2))
    {
      w_53 = ATgetArgument(v_53, 0);
      x_53 = ATgetArgument(v_53, 1);
      {
        ATerm b_54 = NULL,d_54 = NULL;
        ATerm c_54 = NULL;
        t = SSLgetAnnotations(not_null(v_53));
        {
          c_54 = t;
          if(((b_54 != NULL) && (b_54 != c_54)))
            _fail(c_54);
          else
            b_54 = c_54;
        }
        {
          t = not_null(w_53);
          {
            ATerm f_54 = NULL;
            t = h_85(t);
            {
              d_54 = t;
              {
                t = not_null(x_53);
                {
                  ATerm h_54 = NULL;
                  t = i_85(t);
                  {
                    f_54 = t;
                    {
                      ATerm i_54 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(d_54), not_null(f_54)), not_null(b_54));
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
ATerm Choice_2 (ATerm t, ATerm f_85 (ATerm), ATerm g_85 (ATerm))
{
  ATerm u_54 = NULL,v_54 = NULL,w_54 = NULL;
  u_54 = t;
  t_54 :
  if(match_cons(u_54, sym_Choice_2))
    {
      v_54 = ATgetArgument(u_54, 0);
      w_54 = ATgetArgument(u_54, 1);
      {
        ATerm a_55 = NULL,c_55 = NULL;
        ATerm b_55 = NULL;
        t = SSLgetAnnotations(not_null(u_54));
        {
          b_55 = t;
          if(((a_55 != NULL) && (a_55 != b_55)))
            _fail(b_55);
          else
            a_55 = b_55;
        }
        {
          t = not_null(v_54);
          {
            ATerm e_55 = NULL;
            t = f_85(t);
            {
              c_55 = t;
              {
                t = not_null(w_54);
                {
                  ATerm g_55 = NULL;
                  t = g_85(t);
                  {
                    e_55 = t;
                    {
                      ATerm h_55 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(c_55), not_null(e_55)), not_null(a_55));
                      {
                        h_55 = t;
                        if(((g_55 != NULL) && (g_55 != h_55)))
                          _fail(h_55);
                        else
                          g_55 = h_55;
                      }
                      t = not_null(g_55);
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
ATerm inline_rules_0 (ATerm t)
{
  ATerm a_3 (ATerm t)
  {
    ATerm q_19 = t;
    int v_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Choice_2(t, inline_rules_0, inline_rules_0);
        ;
        LocalPopChoice(v_19);
      }
    else
      {
        t = q_19;
        {
          ATerm w_19 = t;
          int x_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = LChoice_2(t, inline_rules_0, inline_rules_0);
              ;
              LocalPopChoice(x_19);
            }
          else
            {
              t = w_19;
              {
                ATerm b_20 = t;
                int d_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm b_3 (ATerm t)
                    {
                      ATerm c_3 (ATerm t)
                      {
                        t = Match_1(t, _id);
                        return(t);
                      }
                      ATerm d_3 (ATerm t)
                      {
                        t = Build_1(t, _id);
                        return(t);
                      }
                      t = Seq_2(t, c_3, d_3);
                      return(t);
                    }
                    t = Scope_2(t, _id, b_3);
                    ;
                    LocalPopChoice(d_20);
                  }
                else
                  {
                    t = b_20;
                    {
                      ATerm g_20 = t;
                      int h_20 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm e_3 (ATerm t)
                          {
                            ATerm f_3 (ATerm t)
                            {
                              t = Match_1(t, _id);
                              return(t);
                            }
                            ATerm g_3 (ATerm t)
                            {
                              ATerm h_3 (ATerm t)
                              {
                                t = Build_1(t, _id);
                                return(t);
                              }
                              t = Seq_2(t, _id, h_3);
                              return(t);
                            }
                            t = Seq_2(t, f_3, g_3);
                            return(t);
                          }
                          t = Scope_2(t, _id, e_3);
                          ;
                          LocalPopChoice(h_20);
                        }
                      else
                        {
                          t = g_20;
                          {
                            t = InlineStrat_0(t);
                            t = inline_rules_0(t);
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
  t = try_1(t, a_3);
  return(t);
}
ATerm bottomup_to_var_0 (ATerm t)
{
  ATerm p_55 = NULL;
  p_55 = t;
  {
    ATerm i_20;
    i_20 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_18, (ATerm) ATmakeAppl(sym_Defined_2, term_j_20, not_null(p_55)));
      {
        ATerm i_3 (ATerm t)
        {
          t = term_i_18;
          return(t);
        }
        t = assert_1(t, i_3);
      }
    }
    t = i_20;
    {
      ATerm k_20;
      k_20 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_16, (ATerm) ATmakeAppl(sym_Defined_2, term_l_20, not_null(p_55)));
        {
          ATerm j_3 (ATerm t)
          {
            t = term_k_16;
            return(t);
          }
          t = assert_1(t, j_3);
        }
      }
      t = k_20;
    }
  }
  return(t);
}
ATerm seq_over_choice_0 (ATerm t)
{
  ATerm t_55 = NULL;
  t_55 = t;
  {
    ATerm m_20;
    m_20 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_q_18, not_null(t_55)), term_q_20);
      {
        ATerm k_3 (ATerm t)
        {
          t = term_r_18;
          return(t);
        }
        t = assert_1(t, k_3);
      }
    }
    t = m_20;
    {
      ATerm r_20;
      r_20 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_o_18, not_null(t_55)), term_y_20);
        {
          ATerm l_3 (ATerm t)
          {
            t = term_p_18;
            return(t);
          }
          t = assert_1(t, l_3);
        }
      }
      t = r_20;
    }
  }
  return(t);
}
ATerm innermost_fusion_0 (ATerm t)
{
  ATerm e_56 = NULL,f_56 = NULL,g_56 = NULL,h_56 = NULL,i_56 = NULL,j_56 = NULL;
  e_56 = t;
  z_55 :
  if(match_cons(e_56, sym_Call_2))
    {
      f_56 = ATgetArgument(e_56, 0);
      h_56 = ATgetArgument(e_56, 1);
      a_56 :
      if(match_cons(f_56, sym_SVar_1))
        {
          g_56 = ATgetArgument(f_56, 0);
          b_56 :
          if(match_string(g_56, "innermost_1"))
            {
              c_56 :
              if(((ATgetType(h_56) == AT_LIST) && !(ATisEmpty(h_56))))
                {
                  i_56 = ATgetFirst((ATermList) h_56);
                  j_56 = (ATerm) ATgetNext((ATermList) h_56);
                  d_56 :
                  if(((ATgetType(j_56) == AT_LIST) && ATisEmpty(j_56)))
                    {
                      {
                        ATerm l_56 = NULL,n_56 = NULL;
                        ATerm m_3 (ATerm t)
                        {
                          ATerm n_3 (ATerm t)
                          {
                            t = term_f_21;
                            return(t);
                          }
                          t = say_1(t, n_3);
                          return(t);
                        }
                        t = if_verbose2_1(t, m_3);
                        {
                          ATerm o_21;
                          o_21 = t;
                          {
                            ATerm m_56 = NULL;
                            t = new_0(t);
                            {
                              m_56 = t;
                              if(((l_56 != NULL) && (l_56 != m_56)))
                                _fail(m_56);
                              else
                                l_56 = m_56;
                            }
                          }
                          t = o_21;
                          {
                            ATerm p_21;
                            p_21 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym_Call_2, term_n_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(l_56)), (ATerm) ATempty)));
                              t = seq_over_choice_0(t);
                            }
                            t = p_21;
                            {
                              ATerm q_21;
                              q_21 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym_Call_2, term_n_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(l_56)), (ATerm) ATempty)));
                                t = bottomup_to_var_0(t);
                              }
                              t = q_21;
                              {
                                ATerm o_56 = NULL;
                                t = not_null(i_56);
                                {
                                  t = inline_rules_0(t);
                                  {
                                    o_56 = t;
                                    if(((n_56 != NULL) && (n_56 != o_56)))
                                      _fail(o_56);
                                    else
                                      n_56 = o_56;
                                  }
                                }
                                {
                                  t = (ATerm) ATmakeAppl(sym_Call_2, term_n_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Rec_2, not_null(l_56), (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seq_2, term_x_15, not_null(n_56)), (ATerm) ATmakeAppl(sym_Call_2, term_n_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(l_56)), (ATerm) ATempty)))), term_z_12))));
                                  {
                                    t = propagate_mark_0(t);
                                    {
                                      t = fuse_with_bottomup_0(t);
                                      {
                                        ATerm o_3 (ATerm t)
                                        {
                                          ATerm r_21 = t;
                                          int s_21 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = BottomupToVarIsId_UnCond_0(t);
                                              ;
                                              LocalPopChoice(s_21);
                                            }
                                          else
                                            {
                                              t = r_21;
                                              t = BottomupToVarIsId_Cond_0(t);
                                            }
                                          return(t);
                                        }
                                        t = alltd_1(t, o_3);
                                        {
                                          t = desugar_0(t);
                                          {
                                            ATerm p_3 (ATerm t)
                                            {
                                              ATerm q_3 (ATerm t)
                                              {
                                                t = term_t_21;
                                                return(t);
                                              }
                                              t = say_1(t, q_3);
                                              return(t);
                                            }
                                            t = if_verbose1_1(t, p_3);
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
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm m_98 (ATerm))
{
  ATerm s_56 (ATerm t)
  {
    ATerm u_21 = t;
    int v_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_98(t);
        ;
        LocalPopChoice(v_21);
      }
    else
      {
        t = u_21;
        t = _all(t, s_56);
      }
    return(t);
  }
  t = s_56(t);
  return(t);
}
ATerm check_that_bottomup_is_bottomup_0 (ATerm t)
{
  ATerm i_57 = NULL;
  ATerm w_21;
  w_21 = t;
  {
    ATerm j_57 = NULL;
    t = new_0(t);
    {
      j_57 = t;
      {
        if(((i_57 != NULL) && (i_57 != j_57)))
          _fail(j_57);
        else
          i_57 = j_57;
        {
          ATerm x_21 = t;
          int y_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym_Call_2, term_n_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(i_57)), (ATerm) ATempty)));
              t = InlineStrat_0(t);
              ;
              LocalPopChoice(y_21);
            }
          else
            {
              t = x_21;
              {
                ATerm r_3 (ATerm t)
                {
                  ATerm s_3 (ATerm t)
                  {
                    t = term_z_21;
                    return(t);
                  }
                  t = say_1(t, s_3);
                  return(t);
                }
                t = if_verbose2_1(t, r_3);
                _fail(t);
              }
            }
          {
            ATerm a_22 = t;
            int b_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_57 = NULL,l_57 = NULL,m_57 = NULL,n_57 = NULL,o_57 = NULL,p_57 = NULL,q_57 = NULL,r_57 = NULL,s_57 = NULL,t_57 = NULL,u_57 = NULL,v_57 = NULL,z_57 = NULL,a_58 = NULL,b_58 = NULL;
                k_57 = t;
                v_56 :
                if(match_cons(k_57, sym_Seq_2))
                  {
                    l_57 = ATgetArgument(k_57, 0);
                    v_57 = ATgetArgument(k_57, 1);
                    w_56 :
                    if(match_cons(l_57, sym_All_1))
                      {
                        m_57 = ATgetArgument(l_57, 0);
                        x_56 :
                        if(match_cons(m_57, sym_Call_2))
                          {
                            n_57 = ATgetArgument(m_57, 0);
                            p_57 = ATgetArgument(m_57, 1);
                            y_56 :
                            if(match_cons(n_57, sym_SVar_1))
                              {
                                o_57 = ATgetArgument(n_57, 0);
                                z_56 :
                                if(match_string(o_57, "bottomup_1"))
                                  {
                                    a_57 :
                                    if(((ATgetType(p_57) == AT_LIST) && !(ATisEmpty(p_57))))
                                      {
                                        q_57 = ATgetFirst((ATermList) p_57);
                                        u_57 = (ATerm) ATgetNext((ATermList) p_57);
                                        b_57 :
                                        if(match_cons(q_57, sym_Call_2))
                                          {
                                            r_57 = ATgetArgument(q_57, 0);
                                            t_57 = ATgetArgument(q_57, 1);
                                            c_57 :
                                            if(match_cons(r_57, sym_SVar_1))
                                              {
                                                s_57 = ATgetArgument(r_57, 0);
                                                d_57 :
                                                if(((ATgetType(t_57) == AT_LIST) && ATisEmpty(t_57)))
                                                  {
                                                    e_57 :
                                                    if(((ATgetType(u_57) == AT_LIST) && ATisEmpty(u_57)))
                                                      {
                                                        f_57 :
                                                        if(match_cons(v_57, sym_Call_2))
                                                          {
                                                            z_57 = ATgetArgument(v_57, 0);
                                                            b_58 = ATgetArgument(v_57, 1);
                                                            g_57 :
                                                            if(match_cons(z_57, sym_SVar_1))
                                                              {
                                                                a_58 = ATgetArgument(z_57, 0);
                                                                h_57 :
                                                                if(((ATgetType(b_58) == AT_LIST) && ATisEmpty(b_58)))
                                                                  {
                                                                    {
                                                                      if(((i_57 != NULL) && (i_57 != s_57)))
                                                                        _fail(s_57);
                                                                      else
                                                                        i_57 = s_57;
                                                                      if(((i_57 != NULL) && (i_57 != a_58)))
                                                                        _fail(a_58);
                                                                      else
                                                                        i_57 = a_58;
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
                else
                  {
                    _fail(t);
                  }
                ;
                LocalPopChoice(b_22);
              }
            else
              {
                t = a_22;
                {
                  ATerm t_3 (ATerm t)
                  {
                    ATerm u_3 (ATerm t)
                    {
                      t = term_c_22;
                      return(t);
                    }
                    t = debug_1(t, u_3);
                    return(t);
                  }
                  t = if_verbose1_1(t, t_3);
                  _fail(t);
                }
              }
            {
              ATerm v_3 (ATerm t)
              {
                ATerm w_3 (ATerm t)
                {
                  t = term_d_22;
                  return(t);
                }
                t = say_1(t, w_3);
                return(t);
              }
              t = if_verbose2_1(t, v_3);
            }
          }
        }
      }
    }
  }
  t = w_21;
  return(t);
}
ATerm check_that_innermost_is_innermost_0 (ATerm t)
{
  ATerm a_59 = NULL,b_59 = NULL;
  ATerm e_22;
  e_22 = t;
  {
    ATerm c_59 = NULL;
    t = new_0(t);
    {
      c_59 = t;
      {
        if(((a_59 != NULL) && (a_59 != c_59)))
          _fail(c_59);
        else
          a_59 = c_59;
        {
          ATerm f_22 = t;
          int g_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym_Call_2, term_s_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(a_59)), (ATerm) ATempty)));
              t = InlineStrat_0(t);
              ;
              LocalPopChoice(g_22);
            }
          else
            {
              t = f_22;
              {
                ATerm x_3 (ATerm t)
                {
                  ATerm y_3 (ATerm t)
                  {
                    t = term_t_22;
                    return(t);
                  }
                  t = say_1(t, y_3);
                  return(t);
                }
                t = if_verbose2_1(t, x_3);
                _fail(t);
              }
            }
          {
            ATerm u_22 = t;
            int v_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_59 = NULL,e_59 = NULL,f_59 = NULL,g_59 = NULL,h_59 = NULL,i_59 = NULL,k_59 = NULL,l_59 = NULL,m_59 = NULL,n_59 = NULL,q_59 = NULL,r_59 = NULL,s_59 = NULL,t_59 = NULL,u_59 = NULL,v_59 = NULL,w_59 = NULL,x_59 = NULL,y_59 = NULL,z_59 = NULL,a_60 = NULL,b_60 = NULL,c_60 = NULL;
                d_59 = t;
                g_58 :
                if(match_cons(d_59, sym_Call_2))
                  {
                    e_59 = ATgetArgument(d_59, 0);
                    g_59 = ATgetArgument(d_59, 1);
                    h_58 :
                    if(match_cons(e_59, sym_SVar_1))
                      {
                        f_59 = ATgetArgument(e_59, 0);
                        i_58 :
                        if(match_string(f_59, "bottomup_1"))
                          {
                            j_58 :
                            if(((ATgetType(g_59) == AT_LIST) && !(ATisEmpty(g_59))))
                              {
                                h_59 = ATgetFirst((ATermList) g_59);
                                c_60 = (ATerm) ATgetNext((ATermList) g_59);
                                k_58 :
                                if(match_cons(h_59, sym_Rec_2))
                                  {
                                    i_59 = ATgetArgument(h_59, 0);
                                    k_59 = ATgetArgument(h_59, 1);
                                    l_58 :
                                    if(match_cons(k_59, sym_LChoice_2))
                                      {
                                        l_59 = ATgetArgument(k_59, 0);
                                        b_60 = ATgetArgument(k_59, 1);
                                        m_58 :
                                        if(match_cons(l_59, sym_Seq_2))
                                          {
                                            m_59 = ATgetArgument(l_59, 0);
                                            s_59 = ATgetArgument(l_59, 1);
                                            n_58 :
                                            if(match_cons(m_59, sym_Call_2))
                                              {
                                                n_59 = ATgetArgument(m_59, 0);
                                                r_59 = ATgetArgument(m_59, 1);
                                                o_58 :
                                                if(match_cons(n_59, sym_SVar_1))
                                                  {
                                                    q_59 = ATgetArgument(n_59, 0);
                                                    p_58 :
                                                    if(((ATgetType(r_59) == AT_LIST) && ATisEmpty(r_59)))
                                                      {
                                                        q_58 :
                                                        if(match_cons(s_59, sym_Call_2))
                                                          {
                                                            t_59 = ATgetArgument(s_59, 0);
                                                            v_59 = ATgetArgument(s_59, 1);
                                                            r_58 :
                                                            if(match_cons(t_59, sym_SVar_1))
                                                              {
                                                                u_59 = ATgetArgument(t_59, 0);
                                                                s_58 :
                                                                if(match_string(u_59, "bottomup_1"))
                                                                  {
                                                                    t_58 :
                                                                    if(((ATgetType(v_59) == AT_LIST) && !(ATisEmpty(v_59))))
                                                                      {
                                                                        w_59 = ATgetFirst((ATermList) v_59);
                                                                        a_60 = (ATerm) ATgetNext((ATermList) v_59);
                                                                        u_58 :
                                                                        if(match_cons(w_59, sym_Call_2))
                                                                          {
                                                                            x_59 = ATgetArgument(w_59, 0);
                                                                            z_59 = ATgetArgument(w_59, 1);
                                                                            v_58 :
                                                                            if(match_cons(x_59, sym_SVar_1))
                                                                              {
                                                                                y_59 = ATgetArgument(x_59, 0);
                                                                                w_58 :
                                                                                if(((ATgetType(z_59) == AT_LIST) && ATisEmpty(z_59)))
                                                                                  {
                                                                                    x_58 :
                                                                                    if(((ATgetType(a_60) == AT_LIST) && ATisEmpty(a_60)))
                                                                                      {
                                                                                        y_58 :
                                                                                        if(match_cons(b_60, sym_Id_0))
                                                                                          {
                                                                                            z_58 :
                                                                                            if(((ATgetType(c_60) == AT_LIST) && ATisEmpty(c_60)))
                                                                                              {
                                                                                                {
                                                                                                  if(((b_59 != NULL) && (b_59 != i_59)))
                                                                                                    _fail(i_59);
                                                                                                  else
                                                                                                    b_59 = i_59;
                                                                                                  {
                                                                                                    if(((a_59 != NULL) && (a_59 != q_59)))
                                                                                                      _fail(q_59);
                                                                                                    else
                                                                                                      a_59 = q_59;
                                                                                                    if(((b_59 != NULL) && (b_59 != y_59)))
                                                                                                      _fail(y_59);
                                                                                                    else
                                                                                                      b_59 = y_59;
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
                ;
                LocalPopChoice(v_22);
              }
            else
              {
                t = u_22;
                {
                  ATerm z_3 (ATerm t)
                  {
                    ATerm a_4 (ATerm t)
                    {
                      t = term_w_22;
                      return(t);
                    }
                    t = debug_1(t, a_4);
                    return(t);
                  }
                  t = if_verbose1_1(t, z_3);
                  _fail(t);
                }
              }
            {
              ATerm b_4 (ATerm t)
              {
                ATerm c_4 (ATerm t)
                {
                  t = term_x_22;
                  return(t);
                }
                t = say_1(t, c_4);
                return(t);
              }
              t = if_verbose2_1(t, b_4);
            }
          }
        }
      }
    }
  }
  t = e_22;
  return(t);
}
ATerm IsSVar_0 (ATerm t)
{
  ATerm j_60 = NULL,k_60 = NULL,l_60 = NULL,m_60 = NULL;
  j_60 = t;
  g_60 :
  if(match_cons(j_60, sym_Call_2))
    {
      k_60 = ATgetArgument(j_60, 0);
      m_60 = ATgetArgument(j_60, 1);
      h_60 :
      if(match_cons(k_60, sym_SVar_1))
        {
          l_60 = ATgetArgument(k_60, 0);
          i_60 :
          if(((ATgetType(m_60) == AT_LIST) && ATisEmpty(m_60)))
            {
              t = not_null(l_60);
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
ATerm SubsVar_2 (ATerm t, ATerm q_121 (ATerm), ATerm r_121 (ATerm))
{
  ATerm f_61 = NULL;
  ATerm h_61 = NULL,j_61 = NULL;
  f_61 = t;
  {
    ATerm k_61 = NULL;
    t = not_null(f_61);
    {
      ATerm l_61 = NULL;
      t = q_121(t);
      {
        k_61 = t;
        {
          if(((h_61 != NULL) && (h_61 != k_61)))
            _fail(k_61);
          else
            h_61 = k_61;
          {
            t = r_121(t);
            {
              l_61 = t;
              if(((j_61 != NULL) && (j_61 != l_61)))
                _fail(l_61);
              else
                j_61 = l_61;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(h_61), not_null(j_61));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm t_61 = NULL,u_61 = NULL,v_61 = NULL,w_61 = NULL;
  t_61 = t;
  s_61 :
  if(match_cons(t_61, sym__2))
    {
      u_61 = ATgetArgument(t_61, 0);
      v_61 = ATgetArgument(t_61, 1);
      {
        ATerm y_61 = NULL;
        if(((y_61 != NULL) && (y_61 != v_61)))
          _fail(v_61);
        else
          y_61 = v_61;
      }
    }
  else
    {
      if(match_cons(t_61, sym__3))
        {
          u_61 = ATgetArgument(t_61, 0);
          v_61 = ATgetArgument(t_61, 1);
          w_61 = ATgetArgument(t_61, 2);
          {
            ATerm l_62 = NULL;
            ATerm n_62 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(u_61), not_null(v_61));
            {
              t = zip_1(t, _id);
              {
                n_62 = t;
                if(((l_62 != NULL) && (l_62 != n_62)))
                  _fail(n_62);
                else
                  l_62 = n_62;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(l_62), not_null(w_61));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm b_121 (ATerm), ATerm c_121 (ATerm))
{
  ATerm t_62 = NULL,u_62 = NULL,v_62 = NULL;
  t = subs_args_0(t);
  {
    t_62 = t;
    s_62 :
    if(match_cons(t_62, sym__2))
      {
        u_62 = ATgetArgument(t_62, 0);
        v_62 = ATgetArgument(t_62, 1);
        {
          t = not_null(v_62);
          {
            ATerm d_4 (ATerm t)
            {
              ATerm e_4 (ATerm t)
              {
                t = not_null(u_62);
                return(t);
              }
              t = SubsVar_2(t, b_121, e_4);
              t = c_121(t);
              return(t);
            }
            t = alltd_1(t, d_4);
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
ATerm substitute_1 (ATerm t, ATerm d_121 (ATerm))
{
  t = substitute_2(t, d_121, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_1(t, IsSVar_0);
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm p_124 (ATerm))
{
  ATerm y_22 = t;
  int z_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_4 (ATerm t)
      {
        t = split_2(t, _id, p_124);
        {
          ATerm g_4 (ATerm t)
          {
            ATerm f_63 = NULL,g_63 = NULL,h_63 = NULL,i_63 = NULL,j_63 = NULL,k_63 = NULL;
            f_63 = t;
            a_63 :
            if(match_cons(f_63, sym__2))
              {
                g_63 = ATgetArgument(f_63, 0);
                k_63 = ATgetArgument(f_63, 1);
                b_63 :
                if(match_cons(g_63, sym_SDef_3))
                  {
                    h_63 = ATgetArgument(g_63, 0);
                    i_63 = ATgetArgument(g_63, 1);
                    j_63 = ATgetArgument(g_63, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(k_63), not_null(i_63), not_null(j_63));
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
          t = zip_1(t, g_4);
        }
        return(t);
      }
      t = Let_2(t, f_4, _id);
      ;
      LocalPopChoice(z_22);
    }
  else
    {
      t = y_22;
      {
        ATerm a_23 = t;
        int b_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_4 (ATerm t)
            {
              t = split_2(t, _id, p_124);
              {
                ATerm i_4 (ATerm t)
                {
                  ATerm o_63 = NULL,p_63 = NULL,q_63 = NULL,r_63 = NULL,s_63 = NULL;
                  o_63 = t;
                  d_63 :
                  if(match_cons(o_63, sym__2))
                    {
                      p_63 = ATgetArgument(o_63, 0);
                      s_63 = ATgetArgument(o_63, 1);
                      e_63 :
                      if(match_cons(p_63, sym_VarDec_2))
                        {
                          q_63 = ATgetArgument(p_63, 0);
                          r_63 = ATgetArgument(p_63, 1);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(s_63), not_null(r_63));
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
                t = zip_1(t, i_4);
              }
              return(t);
            }
            t = SDef_3(t, _id, h_4, _id);
            ;
            LocalPopChoice(b_23);
          }
        else
          {
            t = a_23;
            {
              ATerm j_4 (ATerm t)
              {
                t = p_124(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, j_4, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm s_85 (ATerm), ATerm t_85 (ATerm))
{
  ATerm e_64 = NULL,f_64 = NULL,g_64 = NULL;
  e_64 = t;
  d_64 :
  if(match_cons(e_64, sym_Rec_2))
    {
      f_64 = ATgetArgument(e_64, 0);
      g_64 = ATgetArgument(e_64, 1);
      {
        ATerm k_64 = NULL,m_64 = NULL;
        ATerm l_64 = NULL;
        t = SSLgetAnnotations(not_null(e_64));
        {
          l_64 = t;
          if(((k_64 != NULL) && (k_64 != l_64)))
            _fail(l_64);
          else
            k_64 = l_64;
        }
        {
          t = not_null(f_64);
          {
            ATerm o_64 = NULL;
            t = s_85(t);
            {
              m_64 = t;
              {
                t = not_null(g_64);
                {
                  ATerm q_64 = NULL;
                  t = t_85(t);
                  {
                    o_64 = t;
                    {
                      ATerm r_64 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(m_64), not_null(o_64)), not_null(k_64));
                      {
                        r_64 = t;
                        if(((q_64 != NULL) && (q_64 != r_64)))
                          _fail(r_64);
                        else
                          q_64 = r_64;
                      }
                      t = not_null(q_64);
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
ATerm SDef_3 (ATerm t, ATerm w_85 (ATerm), ATerm x_85 (ATerm), ATerm y_85 (ATerm))
{
  ATerm e_65 = NULL,f_65 = NULL,g_65 = NULL,h_65 = NULL;
  e_65 = t;
  d_65 :
  if(match_cons(e_65, sym_SDef_3))
    {
      f_65 = ATgetArgument(e_65, 0);
      g_65 = ATgetArgument(e_65, 1);
      h_65 = ATgetArgument(e_65, 2);
      {
        ATerm t_65 = NULL,v_65 = NULL;
        ATerm u_65 = NULL;
        t = SSLgetAnnotations(not_null(e_65));
        {
          u_65 = t;
          if(((t_65 != NULL) && (t_65 != u_65)))
            _fail(u_65);
          else
            t_65 = u_65;
        }
        {
          t = not_null(f_65);
          {
            ATerm z_65 = NULL;
            t = w_85(t);
            {
              v_65 = t;
              {
                t = not_null(g_65);
                {
                  ATerm b_66 = NULL;
                  t = x_85(t);
                  {
                    z_65 = t;
                    {
                      t = not_null(h_65);
                      {
                        ATerm d_66 = NULL;
                        t = y_85(t);
                        {
                          b_66 = t;
                          {
                            ATerm e_66 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(v_65), not_null(z_65), not_null(b_66)), not_null(t_65));
                            {
                              e_66 = t;
                              if(((d_66 != NULL) && (d_66 != e_66)))
                                _fail(e_66);
                              else
                                d_66 = e_66;
                            }
                            t = not_null(d_66);
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
ATerm Let_2 (ATerm t, ATerm u_85 (ATerm), ATerm v_85 (ATerm))
{
  ATerm f_67 = NULL,g_67 = NULL,h_67 = NULL;
  f_67 = t;
  e_67 :
  if(match_cons(f_67, sym_Let_2))
    {
      g_67 = ATgetArgument(f_67, 0);
      h_67 = ATgetArgument(f_67, 1);
      {
        ATerm l_67 = NULL,n_67 = NULL;
        ATerm m_67 = NULL;
        t = SSLgetAnnotations(not_null(f_67));
        {
          m_67 = t;
          if(((l_67 != NULL) && (l_67 != m_67)))
            _fail(m_67);
          else
            l_67 = m_67;
        }
        {
          t = not_null(g_67);
          {
            ATerm p_67 = NULL;
            t = u_85(t);
            {
              n_67 = t;
              {
                t = not_null(h_67);
                {
                  ATerm r_67 = NULL;
                  t = v_85(t);
                  {
                    p_67 = t;
                    {
                      ATerm s_67 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(n_67), not_null(p_67)), not_null(l_67));
                      {
                        s_67 = t;
                        if(((r_67 != NULL) && (r_67 != s_67)))
                          _fail(s_67);
                        else
                          r_67 = s_67;
                      }
                      t = not_null(r_67);
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
ATerm sboundin_3 (ATerm t, ATerm q_124 (ATerm), ATerm r_124 (ATerm), ATerm s_124 (ATerm))
{
  ATerm c_23 = t;
  int d_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, q_124, q_124);
      ;
      LocalPopChoice(d_23);
    }
  else
    {
      t = c_23;
      {
        ATerm e_23 = t;
        int f_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, s_124, s_124, q_124);
            ;
            LocalPopChoice(f_23);
          }
        else
          {
            t = e_23;
            t = Rec_2(t, s_124, q_124);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm b_68 = NULL,c_68 = NULL,d_68 = NULL;
  b_68 = t;
  a_68 :
  if(match_cons(b_68, sym_Rec_2))
    {
      c_68 = ATgetArgument(b_68, 0);
      d_68 = ATgetArgument(b_68, 1);
      t = (ATerm) ATinsert(ATempty, not_null(c_68));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm l_68 = NULL,m_68 = NULL,n_68 = NULL,o_68 = NULL;
  l_68 = t;
  k_68 :
  if(match_cons(l_68, sym_SDef_3))
    {
      m_68 = ATgetArgument(l_68, 0);
      n_68 = ATgetArgument(l_68, 1);
      o_68 = ATgetArgument(l_68, 2);
      {
        t = not_null(n_68);
        {
          ATerm k_4 (ATerm t)
          {
            ATerm s_68 = NULL,t_68 = NULL,u_68 = NULL;
            s_68 = t;
            j_68 :
            if(match_cons(s_68, sym_VarDec_2))
              {
                t_68 = ATgetArgument(s_68, 0);
                u_68 = ATgetArgument(s_68, 1);
                t = not_null(t_68);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, k_4);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind1_0 (ATerm t)
{
  ATerm j_69 = NULL,k_69 = NULL,l_69 = NULL;
  j_69 = t;
  i_69 :
  if(match_cons(j_69, sym_Let_2))
    {
      k_69 = ATgetArgument(j_69, 0);
      l_69 = ATgetArgument(j_69, 1);
      {
        t = not_null(k_69);
        {
          ATerm l_4 (ATerm t)
          {
            ATerm o_69 = NULL,p_69 = NULL,q_69 = NULL,r_69 = NULL;
            o_69 = t;
            h_69 :
            if(match_cons(o_69, sym_SDef_3))
              {
                p_69 = ATgetArgument(o_69, 0);
                q_69 = ATgetArgument(o_69, 1);
                r_69 = ATgetArgument(o_69, 2);
                t = not_null(p_69);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, l_4);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm r_85 (ATerm))
{
  ATerm c_70 = NULL,d_70 = NULL;
  c_70 = t;
  b_70 :
  if(match_cons(c_70, sym_SVar_1))
    {
      d_70 = ATgetArgument(c_70, 0);
      {
        ATerm n_70 = NULL,p_70 = NULL;
        ATerm o_70 = NULL;
        t = SSLgetAnnotations(not_null(c_70));
        {
          o_70 = t;
          if(((n_70 != NULL) && (n_70 != o_70)))
            _fail(o_70);
          else
            n_70 = o_70;
        }
        {
          t = not_null(d_70);
          {
            ATerm t_70 = NULL;
            t = r_85(t);
            {
              p_70 = t;
              {
                ATerm u_70 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(p_70)), not_null(n_70));
                {
                  u_70 = t;
                  if(((t_70 != NULL) && (t_70 != u_70)))
                    _fail(u_70);
                  else
                    t_70 = u_70;
                }
                t = not_null(t_70);
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
ATerm srename_0 (ATerm t)
{
  ATerm m_4 (ATerm t)
  {
    ATerm g_23 = t;
    int h_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        ;
        LocalPopChoice(h_23);
      }
    else
      {
        t = g_23;
        {
          ATerm i_23 = t;
          int j_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              ;
              LocalPopChoice(j_23);
            }
          else
            {
              t = i_23;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, m_4, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm l_124 (ATerm))
{
  t = Scope_2(t, l_124, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm w_87 (ATerm))
{
  ATerm z_71 = NULL,a_72 = NULL;
  z_71 = t;
  y_71 :
  if(match_cons(z_71, sym_DynamicRules_1))
    {
      a_72 = ATgetArgument(z_71, 0);
      {
        ATerm d_72 = NULL,f_72 = NULL;
        ATerm e_72 = NULL;
        t = SSLgetAnnotations(not_null(z_71));
        {
          e_72 = t;
          if(((d_72 != NULL) && (d_72 != e_72)))
            _fail(e_72);
          else
            d_72 = e_72;
        }
        {
          t = not_null(a_72);
          {
            ATerm h_72 = NULL;
            t = w_87(t);
            {
              f_72 = t;
              {
                ATerm i_72 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(f_72)), not_null(d_72));
                {
                  i_72 = t;
                  if(((h_72 != NULL) && (h_72 != i_72)))
                    _fail(i_72);
                  else
                    h_72 = i_72;
                }
                t = not_null(h_72);
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
ATerm Scope_2 (ATerm t, ATerm q_84 (ATerm), ATerm r_84 (ATerm))
{
  ATerm t_72 = NULL,u_72 = NULL,v_72 = NULL;
  t_72 = t;
  s_72 :
  if(match_cons(t_72, sym_Scope_2))
    {
      u_72 = ATgetArgument(t_72, 0);
      v_72 = ATgetArgument(t_72, 1);
      {
        ATerm v_73 = NULL,x_73 = NULL;
        ATerm w_73 = NULL;
        t = SSLgetAnnotations(not_null(t_72));
        {
          w_73 = t;
          if(((v_73 != NULL) && (v_73 != w_73)))
            _fail(w_73);
          else
            v_73 = w_73;
        }
        {
          t = not_null(u_72);
          {
            ATerm z_73 = NULL;
            t = q_84(t);
            {
              x_73 = t;
              {
                t = not_null(v_72);
                {
                  ATerm b_74 = NULL;
                  t = r_84(t);
                  {
                    z_73 = t;
                    {
                      ATerm c_74 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(x_73), not_null(z_73)), not_null(v_73));
                      {
                        c_74 = t;
                        if(((b_74 != NULL) && (b_74 != c_74)))
                          _fail(c_74);
                        else
                          b_74 = c_74;
                      }
                      t = not_null(b_74);
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
ATerm tboundin_3 (ATerm t, ATerm m_124 (ATerm), ATerm n_124 (ATerm), ATerm o_124 (ATerm))
{
  ATerm k_23 = t;
  int l_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, o_124, m_124);
      ;
      LocalPopChoice(l_23);
    }
  else
    {
      t = k_23;
      t = DynamicRules_1(t, m_124);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm k_74 = NULL,l_74 = NULL;
  k_74 = t;
  j_74 :
  if(match_cons(k_74, sym_DynamicRules_1))
    {
      l_74 = ATgetArgument(k_74, 0);
      {
        t = not_null(l_74);
        t = tvars_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Add1_0 (ATerm t)
{
  ATerm n_75 = NULL,o_75 = NULL;
  n_75 = t;
  m_75 :
  if(match_cons(n_75, sym_Var_1))
    {
      o_75 = ATgetArgument(n_75, 0);
      t = (ATerm) ATinsert(ATempty, not_null(o_75));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm b_107 (ATerm))
{
  ATerm o_78 = NULL,p_78 = NULL,q_78 = NULL;
  o_78 = t;
  s_75 :
  if(match_cons(o_78, sym__2))
    {
      p_78 = ATgetArgument(o_78, 0);
      q_78 = ATgetArgument(o_78, 1);
      {
        t = not_null(p_78);
        {
          ATerm s_79 (ATerm t)
          {
            ATerm m_23 = t;
            int n_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(q_78);
                ;
                LocalPopChoice(n_23);
              }
            else
              {
                t = m_23;
                {
                  ATerm o_23 = t;
                  int p_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm n_4 (ATerm t)
                      {
                        t = not_null(q_78);
                        return(t);
                      }
                      t = HdMember_p__2(t, b_107, n_4);
                      t = s_79(t);
                      ;
                      LocalPopChoice(p_23);
                    }
                  else
                    {
                      t = o_23;
                      t = Cons_2(t, _id, s_79);
                    }
                }
              }
            return(t);
          }
          t = s_79(t);
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
ATerm foldr_3 (ATerm t, ATerm u_107 (ATerm), ATerm v_107 (ATerm), ATerm w_107 (ATerm))
{
  ATerm q_23 = t;
  int r_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = u_107(t);
      ;
      LocalPopChoice(r_23);
    }
  else
    {
      t = q_23;
      {
        ATerm y_79 = NULL,z_79 = NULL,a_80 = NULL;
        y_79 = t;
        x_79 :
        if(((ATgetType(y_79) == AT_LIST) && !(ATisEmpty(y_79))))
          {
            z_79 = ATgetFirst((ATermList) y_79);
            a_80 = (ATerm) ATgetNext((ATermList) y_79);
            {
              ATerm d_80 = NULL,f_80 = NULL;
              ATerm s_23;
              s_23 = t;
              {
                ATerm e_80 = NULL;
                t = not_null(z_79);
                {
                  t = w_107(t);
                  {
                    e_80 = t;
                    if(((d_80 != NULL) && (d_80 != e_80)))
                      _fail(e_80);
                    else
                      d_80 = e_80;
                  }
                }
              }
              t = s_23;
              {
                ATerm g_80 = NULL;
                t = not_null(a_80);
                {
                  t = foldr_3(t, u_107, v_107, w_107);
                  {
                    g_80 = t;
                    if(((f_80 != NULL) && (f_80 != g_80)))
                      _fail(g_80);
                    else
                      f_80 = g_80;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(d_80), not_null(f_80));
                  t = v_107(t);
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
ATerm crush_3 (ATerm t, ATerm s_106 (ATerm), ATerm t_106 (ATerm), ATerm u_106 (ATerm))
{
  ATerm o_80 = NULL;
  ATerm q_80 = NULL;
  o_80 = t;
  {
    ATerm r_80 = NULL;
    ATerm t_80 = NULL,u_80 = NULL,v_80 = NULL;
    t = not_null(o_80);
    {
      r_80 = t;
      {
        t = SSL_explode_term(not_null(r_80));
        {
          t_80 = t;
          n_80 :
          if(match_cons(t_80, sym__2))
            {
              u_80 = ATgetArgument(t_80, 0);
              v_80 = ATgetArgument(t_80, 1);
              if(((q_80 != NULL) && (q_80 != v_80)))
                _fail(v_80);
              else
                q_80 = v_80;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(q_80);
      t = foldr_3(t, s_106, t_106, u_106);
    }
  }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm b_81 = NULL,c_81 = NULL,d_81 = NULL;
  b_81 = t;
  a_81 :
  if(match_cons(b_81, sym__2))
    {
      c_81 = ATgetArgument(b_81, 0);
      d_81 = ATgetArgument(b_81, 1);
      if(((c_81 != NULL) && (c_81 != d_81)))
        _fail(d_81);
      else
        c_81 = d_81;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm f_107 (ATerm), ATerm g_107 (ATerm))
{
  ATerm j_81 = NULL,k_81 = NULL,l_81 = NULL;
  j_81 = t;
  i_81 :
  if(((ATgetType(j_81) == AT_LIST) && !(ATisEmpty(j_81))))
    {
      k_81 = ATgetFirst((ATermList) j_81);
      l_81 = (ATerm) ATgetNext((ATermList) j_81);
      {
        t = g_107(t);
        {
          ATerm o_4 (ATerm t)
          {
            ATerm q_81 = NULL;
            q_81 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(k_81), not_null(q_81));
              t = f_107(t);
            }
            return(t);
          }
          t = fetch_1(t, o_4);
        }
        t = not_null(l_81);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm x_106 (ATerm))
{
  ATerm w_82 = NULL,z_82 = NULL,a_83 = NULL;
  w_82 = t;
  v_81 :
  if(match_cons(w_82, sym__2))
    {
      z_82 = ATgetArgument(w_82, 0);
      a_83 = ATgetArgument(w_82, 1);
      {
        t = not_null(z_82);
        {
          ATerm e_83 (ATerm t)
          {
            ATerm t_23 = t;
            int u_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                ;
                LocalPopChoice(u_23);
              }
            else
              {
                t = t_23;
                {
                  ATerm v_23 = t;
                  int w_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm p_4 (ATerm t)
                      {
                        t = not_null(a_83);
                        return(t);
                      }
                      t = HdMember_p__2(t, x_106, p_4);
                      t = e_83(t);
                      ;
                      LocalPopChoice(w_23);
                    }
                  else
                    {
                      t = v_23;
                      t = Cons_2(t, _id, e_83);
                    }
                }
              }
            return(t);
          }
          t = e_83(t);
        }
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
  ATerm i_83 = NULL,j_83 = NULL,k_83 = NULL,l_83 = NULL,m_83 = NULL;
  i_83 = t;
  g_83 :
  if(match_cons(i_83, sym__2))
    {
      j_83 = ATgetArgument(i_83, 0);
      k_83 = ATgetArgument(i_83, 1);
      h_83 :
      if(((ATgetType(k_83) == AT_LIST) && !(ATisEmpty(k_83))))
        {
          l_83 = ATgetFirst((ATermList) k_83);
          m_83 = (ATerm) ATgetNext((ATermList) k_83);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(j_83)), not_null(l_83)), not_null(m_83));
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
ATerm UfDecompose_0 (ATerm t)
{
  ATerm b_84 = NULL,c_84 = NULL,d_84 = NULL,e_84 = NULL,f_84 = NULL;
  b_84 = t;
  z_83 :
  if(((ATgetType(b_84) == AT_LIST) && !(ATisEmpty(b_84))))
    {
      c_84 = ATgetFirst((ATermList) b_84);
      f_84 = (ATerm) ATgetNext((ATermList) b_84);
      a_84 :
      if(match_cons(c_84, sym__2))
        {
          d_84 = ATgetArgument(c_84, 0);
          e_84 = ATgetArgument(c_84, 1);
          {
            ATerm p_84 = NULL,s_84 = NULL,y_84 = NULL,k_85 = NULL;
            ATerm x_23;
            x_23 = t;
            {
              ATerm t_84 = NULL;
              ATerm v_84 = NULL,w_84 = NULL,x_84 = NULL;
              t = not_null(e_84);
              {
                t_84 = t;
                {
                  t = SSL_explode_term(not_null(t_84));
                  {
                    v_84 = t;
                    u_83 :
                    if(match_cons(v_84, sym__2))
                      {
                        w_84 = ATgetArgument(v_84, 0);
                        x_84 = ATgetArgument(v_84, 1);
                        {
                          if(((p_84 != NULL) && (p_84 != w_84)))
                            _fail(w_84);
                          else
                            p_84 = w_84;
                          if(((s_84 != NULL) && (s_84 != x_84)))
                            _fail(x_84);
                          else
                            s_84 = x_84;
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
            t = x_23;
            {
              ATerm y_23;
              y_23 = t;
              {
                ATerm z_84 = NULL;
                ATerm b_85 = NULL,c_85 = NULL,j_85 = NULL;
                t = not_null(d_84);
                {
                  z_84 = t;
                  {
                    t = SSL_explode_term(not_null(z_84));
                    {
                      b_85 = t;
                      x_83 :
                      if(match_cons(b_85, sym__2))
                        {
                          c_85 = ATgetArgument(b_85, 0);
                          j_85 = ATgetArgument(b_85, 1);
                          {
                            if(((p_84 != NULL) && (p_84 != c_85)))
                              _fail(c_85);
                            else
                              p_84 = c_85;
                            if(((y_84 != NULL) && (y_84 != j_85)))
                              _fail(j_85);
                            else
                              y_84 = j_85;
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
              t = y_23;
              {
                ATerm l_85 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(y_84), not_null(s_84));
                {
                  t = zip_1(t, _id);
                  {
                    l_85 = t;
                    if(((k_85 != NULL) && (k_85 != l_85)))
                      _fail(l_85);
                    else
                      k_85 = l_85;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(k_85), not_null(f_84));
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
  ATerm d_86 = NULL,e_86 = NULL,f_86 = NULL,g_86 = NULL,h_86 = NULL;
  d_86 = t;
  b_86 :
  if(((ATgetType(d_86) == AT_LIST) && !(ATisEmpty(d_86))))
    {
      e_86 = ATgetFirst((ATermList) d_86);
      h_86 = (ATerm) ATgetNext((ATermList) d_86);
      c_86 :
      if(match_cons(e_86, sym__2))
        {
          f_86 = ATgetArgument(e_86, 0);
          g_86 = ATgetArgument(e_86, 1);
          {
            ATerm j_86 = NULL;
            if(((f_86 != NULL) && (f_86 != g_86)))
              _fail(g_86);
            else
              f_86 = g_86;
            {
              if(((j_86 != NULL) && (j_86 != h_86)))
                _fail(h_86);
              else
                j_86 = h_86;
              t = not_null(j_86);
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
ATerm while_not_2 (ATerm t, ATerm z_109 (ATerm), ATerm a_110 (ATerm))
{
  ATerm l_86 (ATerm t)
  {
    ATerm z_23 = t;
    int k_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_109(t);
        ;
        LocalPopChoice(k_24);
      }
    else
      {
        t = z_23;
        {
          t = a_110(t);
          t = l_86(t);
        }
      }
    return(t);
  }
  t = l_86(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm c_110 (ATerm), ATerm d_110 (ATerm), ATerm e_110 (ATerm))
{
  t = c_110(t);
  t = while_not_2(t, d_110, e_110);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm l_24 = t;
  int m_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_4 (ATerm t)
      {
        ATerm p_86 = NULL;
        p_86 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(p_86));
        return(t);
      }
      ATerm r_4 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm s_4 (ATerm t)
      {
        ATerm n_24 = t;
        int o_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_4 (ATerm t)
            {
              ATerm p_24 = t;
              int u_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  ;
                  LocalPopChoice(u_24);
                }
              else
                {
                  t = p_24;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, t_4);
            ;
            LocalPopChoice(o_24);
          }
        else
          {
            t = n_24;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, q_4, r_4, s_4);
      ;
      LocalPopChoice(m_24);
    }
  else
    {
      t = l_24;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm i_123 (ATerm), ATerm j_123 (ATerm), ATerm k_123 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm v_86 (ATerm t)
  {
    ATerm v_24 = t;
    int w_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_123(t);
        ;
        LocalPopChoice(w_24);
      }
    else
      {
        t = v_24;
        {
          ATerm x_24 = t;
          int a_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_86 = NULL;
              ATerm b_25;
              b_25 = t;
              {
                ATerm u_86 = NULL;
                t = j_123(t);
                {
                  u_86 = t;
                  if(((t_86 != NULL) && (t_86 != u_86)))
                    _fail(u_86);
                  else
                    t_86 = u_86;
                }
              }
              t = b_25;
              {
                ATerm u_4 (ATerm t)
                {
                  ATerm w_4 (ATerm t)
                  {
                    t = not_null(t_86);
                    return(t);
                  }
                  t = split_2(t, v_86, w_4);
                  t = diff_0(t);
                  return(t);
                }
                ATerm v_4 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = k_123(t, u_4, v_86, v_4);
                {
                  ATerm x_4 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, x_4, union_0, _id);
                }
              }
              ;
              LocalPopChoice(a_25);
            }
          else
            {
              t = x_24;
              {
                ATerm y_4 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, y_4, union_0, v_86);
              }
            }
        }
      }
    return(t);
  }
  t = v_86(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm z_4 (ATerm t)
  {
    ATerm c_25 = t;
    int d_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        ;
        LocalPopChoice(d_25);
      }
    else
      {
        t = c_25;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, z_4, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm e_87 = NULL,f_87 = NULL,g_87 = NULL,h_87 = NULL,i_87 = NULL,j_87 = NULL;
  h_87 = t;
  b_87 :
  if(match_cons(h_87, sym_LRule_1))
    {
      i_87 = ATgetArgument(h_87, 0);
      d_87 :
      if(match_cons(i_87, sym_Rule_3))
        {
          e_87 = ATgetArgument(i_87, 0);
          f_87 = ATgetArgument(i_87, 1);
          g_87 = ATgetArgument(i_87, 2);
          {
            t = not_null(e_87);
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
      if(match_cons(h_87, sym_Scope_2))
        {
          i_87 = ATgetArgument(h_87, 0);
          j_87 = ATgetArgument(h_87, 1);
          t = not_null(i_87);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm q_0 (ATerm))
{
  ATerm g_88 = NULL,j_88 = NULL;
  g_88 = t;
  f_88 :
  if(match_cons(g_88, sym_Var_1))
    {
      j_88 = ATgetArgument(g_88, 0);
      {
        ATerm h_25 = t;
        int k_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_88 = NULL,q_88 = NULL;
            ATerm p_88 = NULL;
            t = SSLgetAnnotations(not_null(g_88));
            {
              p_88 = t;
              if(((o_88 != NULL) && (o_88 != p_88)))
                _fail(p_88);
              else
                o_88 = p_88;
            }
            {
              t = not_null(j_88);
              {
                ATerm s_88 = NULL;
                t = q_0(t);
                {
                  q_88 = t;
                  {
                    ATerm t_88 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(q_88)), not_null(o_88));
                    {
                      t_88 = t;
                      if(((s_88 != NULL) && (s_88 != t_88)))
                        _fail(t_88);
                      else
                        s_88 = t_88;
                    }
                    t = not_null(s_88);
                  }
                }
              }
            }
            ;
            LocalPopChoice(k_25);
          }
        else
          {
            t = h_25;
            {
              ATerm w_88 = NULL,y_88 = NULL;
              ATerm x_88 = NULL;
              t = SSLgetAnnotations(not_null(g_88));
              {
                x_88 = t;
                if(((w_88 != NULL) && (w_88 != x_88)))
                  _fail(x_88);
                else
                  w_88 = x_88;
              }
              {
                t = not_null(j_88);
                {
                  ATerm a_89 = NULL;
                  t = q_0(t);
                  {
                    y_88 = t;
                    {
                      ATerm b_89 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(y_88)), not_null(w_88));
                      {
                        b_89 = t;
                        if(((a_89 != NULL) && (a_89 != b_89)))
                          _fail(b_89);
                        else
                          a_89 = b_89;
                      }
                      t = not_null(a_89);
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
ATerm DistBinding_2 (ATerm t, ATerm d_122 (ATerm), ATerm e_122 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm o_89 = NULL,p_89 = NULL,q_89 = NULL,r_89 = NULL;
  o_89 = t;
  n_89 :
  if(match_cons(o_89, sym__3))
    {
      p_89 = ATgetArgument(o_89, 0);
      q_89 = ATgetArgument(o_89, 1);
      r_89 = ATgetArgument(o_89, 2);
      {
        t = not_null(p_89);
        {
          ATerm a_5 (ATerm t)
          {
            ATerm v_89 = NULL;
            v_89 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(v_89), not_null(r_89));
              t = d_122(t);
            }
            return(t);
          }
          ATerm b_5 (ATerm t)
          {
            ATerm x_89 = NULL;
            x_89 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(x_89), not_null(q_89));
              t = d_122(t);
            }
            return(t);
          }
          t = e_122(t, a_5, b_5, _id);
        }
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
  ATerm e_90 = NULL,f_90 = NULL,g_90 = NULL;
  e_90 = t;
  d_90 :
  if(match_cons(e_90, sym__2))
    {
      f_90 = ATgetArgument(e_90, 0);
      g_90 = ATgetArgument(e_90, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(g_90)), not_null(f_90));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm o_90 = NULL,p_90 = NULL,q_90 = NULL,r_90 = NULL,s_90 = NULL,t_90 = NULL,u_90 = NULL;
  o_90 = t;
  l_90 :
  if(match_cons(o_90, sym__2))
    {
      p_90 = ATgetArgument(o_90, 0);
      s_90 = ATgetArgument(o_90, 1);
      m_90 :
      if(((ATgetType(p_90) == AT_LIST) && !(ATisEmpty(p_90))))
        {
          q_90 = ATgetFirst((ATermList) p_90);
          r_90 = (ATerm) ATgetNext((ATermList) p_90);
          n_90 :
          if(((ATgetType(s_90) == AT_LIST) && !(ATisEmpty(s_90))))
            {
              t_90 = ATgetFirst((ATermList) s_90);
              u_90 = (ATerm) ATgetNext((ATermList) s_90);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(q_90), not_null(t_90)), (ATerm) ATmakeAppl(sym__2, not_null(r_90), not_null(u_90)));
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
  ATerm e_91 = NULL,f_91 = NULL,g_91 = NULL;
  e_91 = t;
  b_91 :
  if(match_cons(e_91, sym__2))
    {
      f_91 = ATgetArgument(e_91, 0);
      g_91 = ATgetArgument(e_91, 1);
      c_91 :
      if(((ATgetType(f_91) == AT_LIST) && ATisEmpty(f_91)))
        {
          d_91 :
          if(((ATgetType(g_91) == AT_LIST) && ATisEmpty(g_91)))
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
ATerm genzip_4 (ATerm t, ATerm f_103 (ATerm), ATerm g_103 (ATerm), ATerm h_103 (ATerm), ATerm i_103 (ATerm))
{
  ATerm i_91 (ATerm t)
  {
    ATerm n_25 = t;
    int o_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_103(t);
        ;
        LocalPopChoice(o_25);
      }
    else
      {
        t = n_25;
        {
          t = g_103(t);
          {
            t = _2(t, i_103, i_91);
            t = h_103(t);
          }
        }
      }
    return(t);
  }
  t = i_91(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm k_103 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, k_103);
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm x_121 (ATerm), ATerm y_121 (ATerm, ATerm (ATerm)))
{
  ATerm q_91 = NULL,r_91 = NULL,s_91 = NULL;
  q_91 = t;
  p_91 :
  if(match_cons(q_91, sym__2))
    {
      r_91 = ATgetArgument(q_91, 0);
      s_91 = ATgetArgument(q_91, 1);
      {
        ATerm v_91 = NULL,w_91 = NULL,x_91 = NULL,d_92 = NULL;
        ATerm p_25;
        p_25 = t;
        {
          ATerm y_91 = NULL;
          t = not_null(r_91);
          {
            ATerm z_91 = NULL;
            t = x_121(t);
            {
              y_91 = t;
              {
                if(((v_91 != NULL) && (v_91 != y_91)))
                  _fail(y_91);
                else
                  v_91 = y_91;
                {
                  ATerm a_92 = NULL,c_92 = NULL;
                  t = map_1(t, new_0);
                  {
                    z_91 = t;
                    {
                      if(((w_91 != NULL) && (w_91 != z_91)))
                        _fail(z_91);
                      else
                        w_91 = z_91;
                      {
                        ATerm b_92 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(v_91), not_null(w_91));
                        {
                          t = zip_1(t, _id);
                          {
                            b_92 = t;
                            if(((a_92 != NULL) && (a_92 != b_92)))
                              _fail(b_92);
                            else
                              a_92 = b_92;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(a_92), not_null(s_91));
                          {
                            t = conc_0(t);
                            {
                              c_92 = t;
                              if(((x_91 != NULL) && (x_91 != c_92)))
                                _fail(c_92);
                              else
                                x_91 = c_92;
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
        t = p_25;
        {
          ATerm e_92 = NULL;
          t = not_null(r_91);
          {
            ATerm c_5 (ATerm t)
            {
              t = not_null(w_91);
              return(t);
            }
            t = y_121(t, c_5);
            {
              e_92 = t;
              if(((d_92 != NULL) && (d_92 != e_92)))
                _fail(e_92);
              else
                d_92 = e_92;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(d_92), not_null(s_91), not_null(x_91));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm o_92 = NULL,p_92 = NULL,q_92 = NULL,r_92 = NULL,s_92 = NULL;
  o_92 = t;
  m_92 :
  if(match_cons(o_92, sym__2))
    {
      p_92 = ATgetArgument(o_92, 0);
      q_92 = ATgetArgument(o_92, 1);
      n_92 :
      if(((ATgetType(q_92) == AT_LIST) && !(ATisEmpty(q_92))))
        {
          r_92 = ATgetFirst((ATermList) q_92);
          s_92 = (ATerm) ATgetNext((ATermList) q_92);
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_92), not_null(s_92));
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
ATerm Look1_0 (ATerm t)
{
  ATerm a_93 = NULL,b_93 = NULL,c_93 = NULL,d_93 = NULL,e_93 = NULL,f_93 = NULL,g_93 = NULL;
  a_93 = t;
  x_92 :
  if(match_cons(a_93, sym__2))
    {
      b_93 = ATgetArgument(a_93, 0);
      c_93 = ATgetArgument(a_93, 1);
      y_92 :
      if(((ATgetType(c_93) == AT_LIST) && !(ATisEmpty(c_93))))
        {
          d_93 = ATgetFirst((ATermList) c_93);
          g_93 = (ATerm) ATgetNext((ATermList) c_93);
          z_92 :
          if(match_cons(d_93, sym__2))
            {
              e_93 = ATgetArgument(d_93, 0);
              f_93 = ATgetArgument(d_93, 1);
              {
                ATerm i_93 = NULL;
                if(((b_93 != NULL) && (b_93 != e_93)))
                  _fail(e_93);
                else
                  b_93 = e_93;
                {
                  if(((i_93 != NULL) && (i_93 != f_93)))
                    _fail(f_93);
                  else
                    i_93 = f_93;
                  t = not_null(i_93);
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
ATerm lookup_0 (ATerm t)
{
  ATerm w_25 = t;
  int x_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      ;
      LocalPopChoice(x_25);
    }
  else
    {
      t = w_25;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm i_122 (ATerm, ATerm (ATerm)))
{
  ATerm n_93 = NULL,o_93 = NULL,p_93 = NULL;
  n_93 = t;
  m_93 :
  if(match_cons(n_93, sym__2))
    {
      o_93 = ATgetArgument(n_93, 0);
      p_93 = ATgetArgument(n_93, 1);
      {
        t = not_null(o_93);
        {
          ATerm d_5 (ATerm t)
          {
            ATerm e_5 (ATerm t)
            {
              t = not_null(p_93);
              return(t);
            }
            t = split_2(t, _id, e_5);
            t = lookup_0(t);
            return(t);
          }
          t = i_122(t, d_5);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm x_112 (ATerm))
{
  ATerm w_93 = NULL,x_93 = NULL,y_93 = NULL;
  w_93 = t;
  v_93 :
  if(match_cons(w_93, sym__2))
    {
      x_93 = ATgetArgument(w_93, 0);
      y_93 = ATgetArgument(w_93, 1);
      {
        t = not_null(x_93);
        {
          ATerm f_5 (ATerm t)
          {
            ATerm b_94 = NULL;
            b_94 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(b_94), not_null(y_93));
              t = x_112(t);
            }
            return(t);
          }
          t = _all(t, f_5);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm env_alltd_1 (ATerm t, ATerm h_112 (ATerm))
{
  ATerm f_94 (ATerm t)
  {
    ATerm g_26 = t;
    int h_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_112(t);
        ;
        LocalPopChoice(h_26);
      }
    else
      {
        t = g_26;
        t = all_dist_1(t, f_94);
      }
    return(t);
  }
  t = f_94(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm s_121 (ATerm, ATerm (ATerm)), ATerm t_121 (ATerm), ATerm u_121 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm v_121 (ATerm, ATerm (ATerm)))
{
  ATerm h_94 = NULL;
  h_94 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_94), (ATerm) ATempty);
    {
      ATerm k_94 (ATerm t)
      {
        ATerm g_5 (ATerm t)
        {
          ATerm j_26 = t;
          int k_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, s_121);
              ;
              LocalPopChoice(k_26);
            }
          else
            {
              t = j_26;
              {
                t = RnBinding_2(t, t_121, v_121);
                t = DistBinding_2(t, k_94, u_121);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, g_5);
        return(t);
      }
      t = k_94(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm l_94 (ATerm t, ATerm m_94 (ATerm))
  {
    t = Scope_2(t, m_94, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, l_94);
  return(t);
}
ATerm strename_0 (ATerm t)
{
  t = trename_0(t);
  t = srename_0(t);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm p_94 = NULL,q_94 = NULL,r_94 = NULL;
  p_94 = t;
  o_94 :
  if(((ATgetType(p_94) == AT_LIST) && !(ATisEmpty(p_94))))
    {
      q_94 = ATgetFirst((ATermList) p_94);
      r_94 = (ATerm) ATgetNext((ATermList) p_94);
      t = not_null(q_94);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm w_94 = NULL,x_94 = NULL,y_94 = NULL;
  w_94 = t;
  v_94 :
  if(match_cons(w_94, sym__2))
    {
      x_94 = ATgetArgument(w_94, 0);
      y_94 = ATgetArgument(w_94, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_94), not_null(y_94));
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
ATerm rewrite_1 (ATerm t, ATerm z_114 (ATerm))
{
  ATerm e_95 = NULL;
  ATerm i_95 = NULL;
  e_95 = t;
  {
    ATerm j_95 = NULL;
    t = term_l_26;
    {
      t = z_114(t);
      {
        j_95 = t;
        if(((i_95 != NULL) && (i_95 != j_95)))
          _fail(j_95);
        else
          i_95 = j_95;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(i_95), not_null(e_95));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm InlineStrat_0 (ATerm t)
{
  ATerm x_95 = NULL,y_95 = NULL,z_95 = NULL,a_96 = NULL;
  x_95 = t;
  v_95 :
  if(match_cons(x_95, sym_Call_2))
    {
      y_95 = ATgetArgument(x_95, 0);
      a_96 = ATgetArgument(x_95, 1);
      w_95 :
      if(match_cons(y_95, sym_SVar_1))
        {
          z_95 = ATgetArgument(y_95, 0);
          {
            ATerm e_96 = NULL,f_96 = NULL,g_96 = NULL,k_96 = NULL,t_96 = NULL;
            ATerm o_26;
            o_26 = t;
            {
              ATerm l_96 = NULL,m_96 = NULL,n_96 = NULL,o_96 = NULL;
              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(z_95)), (ATerm) ATinsert(ATempty, (ATerm) ATempty));
              {
                ATerm h_5 (ATerm t)
                {
                  t = term_t_26;
                  return(t);
                }
                t = rewrite_1(t, h_5);
                {
                  l_96 = t;
                  q_95 :
                  if(match_cons(l_96, sym_Defined_3))
                    {
                      m_96 = ATgetArgument(l_96, 0);
                      n_96 = ATgetArgument(l_96, 1);
                      o_96 = ATgetArgument(l_96, 2);
                      r_95 :
                      if(match_string(m_96, "c_0"))
                        {
                          ATerm p_96 = NULL,q_96 = NULL,r_96 = NULL,s_96 = NULL;
                          if(((e_96 != NULL) && (e_96 != n_96)))
                            _fail(n_96);
                          else
                            e_96 = n_96;
                          {
                            if(((f_96 != NULL) && (f_96 != o_96)))
                              _fail(o_96);
                            else
                              f_96 = o_96;
                            {
                              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(z_95), not_null(e_96), not_null(f_96));
                              {
                                t = strename_0(t);
                                {
                                  p_96 = t;
                                  p_95 :
                                  if(match_cons(p_96, sym_SDef_3))
                                    {
                                      q_96 = ATgetArgument(p_96, 0);
                                      r_96 = ATgetArgument(p_96, 1);
                                      s_96 = ATgetArgument(p_96, 2);
                                      {
                                        if(((z_95 != NULL) && (z_95 != q_96)))
                                          _fail(q_96);
                                        else
                                          z_95 = q_96;
                                        {
                                          if(((g_96 != NULL) && (g_96 != r_96)))
                                            _fail(r_96);
                                          else
                                            g_96 = r_96;
                                          if(((k_96 != NULL) && (k_96 != s_96)))
                                            _fail(s_96);
                                          else
                                            k_96 = s_96;
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
            t = o_26;
            {
              ATerm y_96 = NULL;
              t = not_null(g_96);
              {
                ATerm i_5 (ATerm t)
                {
                  ATerm u_96 = NULL,v_96 = NULL,w_96 = NULL;
                  u_96 = t;
                  t_95 :
                  if(match_cons(u_96, sym_VarDec_2))
                    {
                      v_96 = ATgetArgument(u_96, 0);
                      w_96 = ATgetArgument(u_96, 1);
                      t = not_null(v_96);
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = map_1(t, i_5);
                {
                  y_96 = t;
                  if(((t_96 != NULL) && (t_96 != y_96)))
                    _fail(y_96);
                  else
                    t_96 = y_96;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(t_96), not_null(a_96), not_null(k_96));
                t = ssubs_0(t);
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
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm check_that_try_is_try_0 (ATerm t)
{
  ATerm l_97 = NULL;
  ATerm u_26;
  u_26 = t;
  {
    ATerm m_97 = NULL;
    t = new_0(t);
    {
      m_97 = t;
      {
        if(((l_97 != NULL) && (l_97 != m_97)))
          _fail(m_97);
        else
          l_97 = m_97;
        {
          ATerm v_26 = t;
          int w_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym_Call_2, term_y_26, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(l_97)), (ATerm) ATempty)));
              t = InlineStrat_0(t);
              ;
              LocalPopChoice(w_26);
            }
          else
            {
              t = v_26;
              {
                ATerm j_5 (ATerm t)
                {
                  ATerm k_5 (ATerm t)
                  {
                    t = term_z_26;
                    return(t);
                  }
                  t = say_1(t, k_5);
                  return(t);
                }
                t = if_verbose2_1(t, j_5);
                _fail(t);
              }
            }
          {
            ATerm a_27 = t;
            int f_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_97 = NULL,o_97 = NULL,p_97 = NULL,q_97 = NULL,r_97 = NULL,s_97 = NULL;
                n_97 = t;
                g_97 :
                if(match_cons(n_97, sym_LChoice_2))
                  {
                    o_97 = ATgetArgument(n_97, 0);
                    s_97 = ATgetArgument(n_97, 1);
                    h_97 :
                    if(match_cons(o_97, sym_Call_2))
                      {
                        p_97 = ATgetArgument(o_97, 0);
                        r_97 = ATgetArgument(o_97, 1);
                        i_97 :
                        if(match_cons(p_97, sym_SVar_1))
                          {
                            q_97 = ATgetArgument(p_97, 0);
                            j_97 :
                            if(((ATgetType(r_97) == AT_LIST) && ATisEmpty(r_97)))
                              {
                                k_97 :
                                if(match_cons(s_97, sym_Id_0))
                                  {
                                    if(((l_97 != NULL) && (l_97 != q_97)))
                                      _fail(q_97);
                                    else
                                      l_97 = q_97;
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
                else
                  {
                    _fail(t);
                  }
                ;
                LocalPopChoice(f_27);
              }
            else
              {
                t = a_27;
                {
                  ATerm l_5 (ATerm t)
                  {
                    ATerm m_5 (ATerm t)
                    {
                      t = term_g_27;
                      return(t);
                    }
                    t = debug_1(t, m_5);
                    return(t);
                  }
                  t = if_verbose1_1(t, l_5);
                  _fail(t);
                }
              }
            {
              ATerm n_5 (ATerm t)
              {
                ATerm o_5 (ATerm t)
                {
                  t = term_h_27;
                  return(t);
                }
                t = say_1(t, o_5);
                return(t);
              }
              t = if_verbose2_1(t, n_5);
            }
          }
        }
      }
    }
  }
  t = u_26;
  return(t);
}
ATerm check_library_definitions_0 (ATerm t)
{
  t = check_that_try_is_try_0(t);
  {
    t = check_that_innermost_is_innermost_0(t);
    t = check_that_bottomup_is_bottomup_0(t);
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm x_114 (ATerm))
{
  ATerm c_98 = NULL,d_98 = NULL,e_98 = NULL;
  c_98 = t;
  b_98 :
  if(match_cons(c_98, sym__2))
    {
      d_98 = ATgetArgument(c_98, 0);
      e_98 = ATgetArgument(c_98, 1);
      {
        ATerm h_98 = NULL,i_98 = NULL,j_98 = NULL;
        ATerm l_27;
        l_27 = t;
        {
          ATerm k_98 = NULL;
          ATerm l_98 = NULL,o_98 = NULL,p_98 = NULL;
          t = x_114(t);
          {
            k_98 = t;
            {
              if(((h_98 != NULL) && (h_98 != k_98)))
                _fail(k_98);
              else
                h_98 = k_98;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(h_98), not_null(d_98), not_null(e_98));
                {
                  t = table_push_0(t);
                  {
                    ATerm n_27 = t;
                    int q_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(h_98), term_l_17);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(q_27);
                      }
                    else
                      {
                        t = n_27;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      l_98 = t;
                      a_98 :
                      if(((ATgetType(l_98) == AT_LIST) && !(ATisEmpty(l_98))))
                        {
                          o_98 = ATgetFirst((ATermList) l_98);
                          p_98 = (ATerm) ATgetNext((ATermList) l_98);
                          {
                            if(((i_98 != NULL) && (i_98 != o_98)))
                              _fail(o_98);
                            else
                              i_98 = o_98;
                            {
                              if(((j_98 != NULL) && (j_98 != p_98)))
                                _fail(p_98);
                              else
                                j_98 = p_98;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(h_98), term_l_17, (ATerm) ATinsert(CheckATermList(not_null(j_98)), (ATerm) ATinsert(CheckATermList(not_null(i_98)), not_null(d_98))));
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
        t = l_27;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm declare_inline_rule_0 (ATerm t)
{
  ATerm v_98 = NULL,w_98 = NULL,x_98 = NULL,y_98 = NULL;
  v_98 = t;
  u_98 :
  if(match_cons(v_98, sym_SDef_3))
    {
      w_98 = ATgetArgument(v_98, 0);
      x_98 = ATgetArgument(v_98, 1);
      y_98 = ATgetArgument(v_98, 2);
      {
        ATerm r_27;
        r_27 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(w_98)), (ATerm) ATinsert(ATempty, (ATerm) ATempty)), (ATerm) ATmakeAppl(sym_Defined_3, term_s_27, not_null(x_98), not_null(y_98)));
          {
            ATerm p_5 (ATerm t)
            {
              t = term_t_26;
              return(t);
            }
            t = assert_1(t, p_5);
          }
        }
        t = r_27;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm a_87 (ATerm))
{
  ATerm i_99 = NULL,j_99 = NULL;
  i_99 = t;
  h_99 :
  if(match_cons(i_99, sym_Strategies_1))
    {
      j_99 = ATgetArgument(i_99, 0);
      {
        ATerm n_99 = NULL,p_99 = NULL;
        ATerm o_99 = NULL;
        t = SSLgetAnnotations(not_null(i_99));
        {
          o_99 = t;
          if(((n_99 != NULL) && (n_99 != o_99)))
            _fail(o_99);
          else
            n_99 = o_99;
        }
        {
          t = not_null(j_99);
          {
            ATerm r_99 = NULL;
            t = a_87(t);
            {
              p_99 = t;
              {
                ATerm s_99 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(p_99)), not_null(n_99));
                {
                  s_99 = t;
                  if(((r_99 != NULL) && (r_99 != s_99)))
                    _fail(s_99);
                  else
                    r_99 = s_99;
                }
                t = not_null(r_99);
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
ATerm Signature_1 (ATerm t, ATerm x_86 (ATerm))
{
  ATerm e_100 = NULL,f_100 = NULL;
  e_100 = t;
  d_100 :
  if(match_cons(e_100, sym_Signature_1))
    {
      f_100 = ATgetArgument(e_100, 0);
      {
        ATerm k_100 = NULL,m_100 = NULL;
        ATerm l_100 = NULL;
        t = SSLgetAnnotations(not_null(e_100));
        {
          l_100 = t;
          if(((k_100 != NULL) && (k_100 != l_100)))
            _fail(l_100);
          else
            k_100 = l_100;
        }
        {
          t = not_null(f_100);
          {
            ATerm o_100 = NULL;
            t = x_86(t);
            {
              m_100 = t;
              {
                ATerm p_100 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, not_null(m_100)), not_null(k_100));
                {
                  p_100 = t;
                  if(((o_100 != NULL) && (o_100 != p_100)))
                    _fail(p_100);
                  else
                    o_100 = p_100;
                }
                t = not_null(o_100);
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
ATerm Specification_1 (ATerm t, ATerm c_87 (ATerm))
{
  ATerm z_100 = NULL,a_101 = NULL;
  z_100 = t;
  y_100 :
  if(match_cons(z_100, sym_Specification_1))
    {
      a_101 = ATgetArgument(z_100, 0);
      {
        ATerm g_101 = NULL,i_101 = NULL;
        ATerm h_101 = NULL;
        t = SSLgetAnnotations(not_null(z_100));
        {
          h_101 = t;
          if(((g_101 != NULL) && (g_101 != h_101)))
            _fail(h_101);
          else
            g_101 = h_101;
        }
        {
          t = not_null(a_101);
          {
            ATerm k_101 = NULL;
            t = c_87(t);
            {
              i_101 = t;
              {
                ATerm l_101 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(i_101)), not_null(g_101));
                {
                  l_101 = t;
                  if(((k_101 != NULL) && (k_101 != l_101)))
                    _fail(l_101);
                  else
                    k_101 = l_101;
                }
                t = not_null(k_101);
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
ATerm declare_inline_rules_0 (ATerm t)
{
  ATerm q_5 (ATerm t)
  {
    ATerm r_5 (ATerm t)
    {
      t = Signature_1(t, _id);
      return(t);
    }
    ATerm s_5 (ATerm t)
    {
      ATerm t_5 (ATerm t)
      {
        ATerm u_5 (ATerm t)
        {
          t = map_1(t, declare_inline_rule_0);
          return(t);
        }
        t = Strategies_1(t, u_5);
        return(t);
      }
      t = Cons_2(t, t_5, Nil_0);
      return(t);
    }
    t = Cons_2(t, r_5, s_5);
    return(t);
  }
  t = Specification_1(t, q_5);
  return(t);
}
ATerm _2 (ATerm t, ATerm x_82 (ATerm), ATerm y_82 (ATerm))
{
  ATerm a_102 = NULL,b_102 = NULL,c_102 = NULL;
  a_102 = t;
  z_101 :
  if(match_cons(a_102, sym__2))
    {
      b_102 = ATgetArgument(a_102, 0);
      c_102 = ATgetArgument(a_102, 1);
      {
        ATerm g_102 = NULL,i_102 = NULL;
        ATerm h_102 = NULL;
        t = SSLgetAnnotations(not_null(a_102));
        {
          h_102 = t;
          if(((g_102 != NULL) && (g_102 != h_102)))
            _fail(h_102);
          else
            g_102 = h_102;
        }
        {
          t = not_null(b_102);
          {
            ATerm k_102 = NULL;
            t = x_82(t);
            {
              i_102 = t;
              {
                t = not_null(c_102);
                {
                  ATerm m_102 = NULL;
                  t = y_82(t);
                  {
                    k_102 = t;
                    {
                      ATerm n_102 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(i_102), not_null(k_102)), not_null(g_102));
                      {
                        n_102 = t;
                        if(((m_102 != NULL) && (m_102 != n_102)))
                          _fail(n_102);
                        else
                          m_102 = n_102;
                      }
                      t = not_null(m_102);
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
ATerm default_usage_0 (ATerm t)
{
  ATerm v_102 = NULL;
  ATerm t_27;
  t_27 = t;
  {
    ATerm v_5 (ATerm t)
    {
      ATerm w_102 = NULL,x_102 = NULL;
      w_102 = t;
      u_102 :
      if(match_cons(w_102, sym_Program_1))
        {
          x_102 = ATgetArgument(w_102, 0);
          if(((v_102 != NULL) && (v_102 != x_102)))
            _fail(x_102);
          else
            v_102 = x_102;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, v_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_10, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_27), not_null(v_102)), term_u_27));
      {
        t = printnl_0(t);
        {
          t = term_w_27;
          t = exit_0(t);
        }
      }
    }
  }
  t = t_27;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm b_103 = NULL,c_103 = NULL,d_103 = NULL;
  b_103 = t;
  a_103 :
  if(match_cons(b_103, sym__2))
    {
      c_103 = ATgetArgument(b_103, 0);
      d_103 = ATgetArgument(b_103, 1);
      {
        ATerm x_27;
        x_27 = t;
        t = SSL_printnl(not_null(c_103), not_null(d_103));
        t = x_27;
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
  ATerm o_103 = NULL;
  o_103 = t;
  t = SSL_implode_string(not_null(o_103));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm y_27 = t;
  int z_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(z_27);
    }
  else
    {
      t = y_27;
      {
        ATerm u_103 = NULL,v_103 = NULL,w_103 = NULL;
        u_103 = t;
        t_103 :
        if(((ATgetType(u_103) == AT_LIST) && !(ATisEmpty(u_103))))
          {
            v_103 = ATgetFirst((ATermList) u_103);
            w_103 = (ATerm) ATgetNext((ATermList) u_103);
            {
              t = not_null(v_103);
              {
                ATerm w_5 (ATerm t)
                {
                  t = not_null(w_103);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, w_5);
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
  ATerm g_104 = NULL;
  ATerm i_104 = NULL;
  g_104 = t;
  {
    ATerm j_104 = NULL;
    ATerm l_104 = NULL,m_104 = NULL,n_104 = NULL;
    t = not_null(g_104);
    {
      j_104 = t;
      {
        t = SSL_explode_term(not_null(j_104));
        {
          l_104 = t;
          e_104 :
          if(match_cons(l_104, sym__2))
            {
              m_104 = ATgetArgument(l_104, 0);
              n_104 = ATgetArgument(l_104, 1);
              f_104 :
              if(match_string(m_104, ""))
                {
                  if(((i_104 != NULL) && (i_104 != n_104)))
                    _fail(n_104);
                  else
                    i_104 = n_104;
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
      t = not_null(i_104);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm t_101 (ATerm))
{
  ATerm r_104 (ATerm t)
  {
    ATerm a_28 = t;
    int g_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, r_104);
        ;
        LocalPopChoice(g_28);
      }
    else
      {
        t = a_28;
        {
          t = Nil_0(t);
          t = t_101(t);
        }
      }
    return(t);
  }
  t = r_104(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm u_104 = NULL,v_104 = NULL,w_104 = NULL;
  u_104 = t;
  t_104 :
  if(match_cons(u_104, sym__2))
    {
      v_104 = ATgetArgument(u_104, 0);
      w_104 = ATgetArgument(u_104, 1);
      {
        t = not_null(v_104);
        {
          ATerm x_5 (ATerm t)
          {
            t = not_null(w_104);
            return(t);
          }
          t = at_end_1(t, x_5);
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
  ATerm h_28 = t;
  int i_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(i_28);
    }
  else
    {
      t = h_28;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm b_105 = NULL;
  b_105 = t;
  t = SSL_explode_string(not_null(b_105));
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
  ATerm f_105 = NULL;
  f_105 = t;
  t = SSL_is_string(not_null(f_105));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm j_28 = t;
  int n_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(n_28);
    }
  else
    {
      t = j_28;
      {
        ATerm p_28 = t;
        int r_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_5 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, y_5);
            ;
            LocalPopChoice(r_28);
          }
        else
          {
            t = p_28;
            {
              ATerm o_105 = NULL,p_105 = NULL,q_105 = NULL;
              o_105 = t;
              n_105 :
              if(match_cons(o_105, sym_Path_1))
                {
                  p_105 = ATgetArgument(o_105, 0);
                  t = not_null(p_105);
                }
              else
                {
                  if(match_cons(o_105, sym_Var_1))
                    {
                      p_105 = ATgetArgument(o_105, 0);
                      {
                        t = not_null(p_105);
                        {
                          ATerm u_28 = t;
                          int v_28 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(v_28);
                            }
                          else
                            {
                              t = u_28;
                              {
                                ATerm z_5 (ATerm t)
                                {
                                  t = term_w_28;
                                  return(t);
                                }
                                t = debug_1(t, z_5);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(o_105, sym_Prefix_2))
                        {
                          p_105 = ATgetArgument(o_105, 0);
                          q_105 = ATgetArgument(o_105, 1);
                          {
                            ATerm v_105 = NULL,x_105 = NULL;
                            ATerm x_28;
                            x_28 = t;
                            {
                              ATerm w_105 = NULL;
                              t = not_null(p_105);
                              {
                                t = eval_config_0(t);
                                {
                                  w_105 = t;
                                  if(((v_105 != NULL) && (v_105 != w_105)))
                                    _fail(w_105);
                                  else
                                    v_105 = w_105;
                                }
                              }
                            }
                            t = x_28;
                            {
                              ATerm y_105 = NULL;
                              t = not_null(q_105);
                              {
                                t = eval_config_0(t);
                                {
                                  y_105 = t;
                                  if(((x_105 != NULL) && (x_105 != y_105)))
                                    _fail(y_105);
                                  else
                                    x_105 = y_105;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(v_105), not_null(x_105));
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
  ATerm g_106 = NULL;
  g_106 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_y_28, not_null(g_106));
    {
      t = table_get_0(t);
      {
        ATerm a_6 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm z_28;
            z_28 = t;
            {
              ATerm i_106 = NULL;
              ATerm j_106 = NULL;
              j_106 = t;
              if(((i_106 != NULL) && (i_106 != j_106)))
                _fail(j_106);
              else
                i_106 = j_106;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_y_28, not_null(g_106), not_null(i_106));
                t = table_put_0(t);
              }
            }
            t = z_28;
          }
          return(t);
        }
        t = try_1(t, a_6);
      }
    }
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm o_106 = NULL,p_106 = NULL,v_106 = NULL;
  o_106 = t;
  n_106 :
  if(match_cons(o_106, sym__2))
    {
      p_106 = ATgetArgument(o_106, 0);
      v_106 = ATgetArgument(o_106, 1);
      t = SSL_WriteToTextFile(not_null(p_106), not_null(v_106));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm i_107 = NULL,j_107 = NULL,k_107 = NULL;
  i_107 = t;
  e_107 :
  if(match_cons(i_107, sym__2))
    {
      j_107 = ATgetArgument(i_107, 0);
      k_107 = ATgetArgument(i_107, 1);
      t = SSL_WriteToBinaryFile(not_null(j_107), not_null(k_107));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm x_107 = NULL;
  ATerm a_29;
  a_29 = t;
  {
    ATerm b_6 (ATerm t)
    {
      ATerm b_29 = t;
      int j_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_6 (ATerm t)
          {
            ATerm y_107 = NULL,z_107 = NULL;
            y_107 = t;
            p_107 :
            if(match_cons(y_107, sym_Output_1))
              {
                z_107 = ATgetArgument(y_107, 0);
                if(((x_107 != NULL) && (x_107 != z_107)))
                  _fail(z_107);
                else
                  x_107 = z_107;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, c_6);
          ;
          LocalPopChoice(j_29);
        }
      else
        {
          t = b_29;
          {
            ATerm a_108 = NULL;
            t = term_k_29;
            {
              a_108 = t;
              if(((x_107 != NULL) && (x_107 != a_108)))
                _fail(a_108);
              else
                x_107 = a_108;
            }
          }
        }
      return(t);
    }
    t = _2(t, b_6, _id);
  }
  t = a_29;
  {
    ATerm d_6 (ATerm t)
    {
      ATerm e_6 (ATerm t)
      {
        t = not_null(x_107);
        return(t);
      }
      t = split_2(t, e_6, _id);
      return(t);
    }
    t = _2(t, _id, d_6);
    {
      ATerm l_29 = t;
      int m_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_6 (ATerm t)
          {
            ATerm g_6 (ATerm t)
            {
              ATerm b_108 = NULL;
              b_108 = t;
              r_107 :
              if(!(match_cons(b_108, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, g_6);
            return(t);
          }
          t = _2(t, f_6, WriteToBinaryFile_0);
          ;
          LocalPopChoice(m_29);
        }
      else
        {
          t = l_29;
          t = _2(t, _id, WriteToTextFile_0);
        }
    }
  }
  return(t);
}
ATerm dtime_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1 (ATerm t, ATerm i_116 (ATerm))
{
  ATerm h_108 = NULL,j_108 = NULL,k_108 = NULL,l_108 = NULL;
  ATerm n_29;
  n_29 = t;
  t = dtime_0(t);
  t = n_29;
  {
    t = i_116(t);
    {
      ATerm o_29;
      o_29 = t;
      {
        ATerm i_108 = NULL;
        t = dtime_0(t);
        {
          i_108 = t;
          if(((h_108 != NULL) && (h_108 != i_108)))
            _fail(i_108);
          else
            h_108 = i_108;
        }
      }
      t = o_29;
      {
        j_108 = t;
        g_108 :
        if(match_cons(j_108, sym__2))
          {
            k_108 = ATgetArgument(j_108, 0);
            l_108 = ATgetArgument(j_108, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(k_108)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(h_108))), not_null(l_108));
          }
        else
          {
            _fail(t);
          }
      }
    }
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm e_115 (ATerm))
{
  ATerm p_29;
  p_29 = t;
  {
    ATerm s_108 = NULL,u_108 = NULL;
    ATerm q_29;
    q_29 = t;
    {
      ATerm t_108 = NULL;
      t = e_115(t);
      {
        t_108 = t;
        if(((s_108 != NULL) && (s_108 != t_108)))
          _fail(t_108);
        else
          s_108 = t_108;
      }
    }
    t = q_29;
    {
      ATerm v_108 = NULL;
      v_108 = t;
      if(((u_108 != NULL) && (u_108 != v_108)))
        _fail(v_108);
      else
        u_108 = v_108;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_108)), not_null(s_108)));
        t = printnl_0(t);
      }
    }
  }
  t = p_29;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm z_108 = NULL;
  ATerm s_29 = t;
  int t_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_109 = NULL;
      a_109 = t;
      {
        if(((z_108 != NULL) && (z_108 != a_109)))
          _fail(a_109);
        else
          z_108 = a_109;
        t = SSL_ReadFromFile(not_null(z_108));
      }
      ;
      LocalPopChoice(t_29);
    }
  else
    {
      t = s_29;
      {
        ATerm h_6 (ATerm t)
        {
          t = term_u_29;
          return(t);
        }
        t = debug_1(t, h_6);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm g_100 (ATerm), ATerm h_100 (ATerm))
{
  ATerm e_109 = NULL,g_109 = NULL;
  ATerm x_29;
  x_29 = t;
  {
    ATerm f_109 = NULL;
    t = g_100(t);
    {
      f_109 = t;
      if(((e_109 != NULL) && (e_109 != f_109)))
        _fail(f_109);
      else
        e_109 = f_109;
    }
  }
  t = x_29;
  {
    ATerm h_109 = NULL;
    t = h_100(t);
    {
      h_109 = t;
      if(((g_109 != NULL) && (g_109 != h_109)))
        _fail(h_109);
      else
        g_109 = h_109;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_109), not_null(g_109));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm p_109 = NULL;
  ATerm y_29;
  y_29 = t;
  {
    ATerm d_30 = t;
    int l_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_6 (ATerm t)
        {
          ATerm q_109 = NULL,r_109 = NULL;
          q_109 = t;
          n_109 :
          if(match_cons(q_109, sym_Input_1))
            {
              r_109 = ATgetArgument(q_109, 0);
              if(((p_109 != NULL) && (p_109 != r_109)))
                _fail(r_109);
              else
                p_109 = r_109;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, i_6);
        ;
        LocalPopChoice(l_30);
      }
    else
      {
        t = d_30;
        {
          ATerm s_109 = NULL;
          t = term_m_30;
          {
            s_109 = t;
            if(((p_109 != NULL) && (p_109 != s_109)))
              _fail(s_109);
            else
              p_109 = s_109;
          }
        }
      }
  }
  t = y_29;
  {
    ATerm j_6 (ATerm t)
    {
      t = not_null(p_109);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, j_6);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm k_6 (ATerm t)
  {
    ATerm w_109 = NULL;
    w_109 = t;
    v_109 :
    if(!(match_string(w_109, "-v")))
      {
        if(!(match_string(w_109, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm l_6 (ATerm t)
  {
    t = term_l_31;
    t = set_config_0(t);
    t = term_m_31;
    return(t);
  }
  ATerm m_6 (ATerm t)
  {
    t = term_n_31;
    return(t);
  }
  t = Option_3(t, k_6, l_6, m_6);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm n_6 (ATerm t)
  {
    ATerm f_110 = NULL;
    f_110 = t;
    x_109 :
    if(!(match_string(f_110, "-k")))
      {
        if(!(match_string(f_110, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm o_6 (ATerm t)
  {
    ATerm o_31;
    o_31 = t;
    {
      ATerm g_110 = NULL;
      ATerm h_110 = NULL;
      t = string_to_int_0(t);
      {
        h_110 = t;
        if(((g_110 != NULL) && (g_110 != h_110)))
          _fail(h_110);
        else
          g_110 = h_110;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_31, not_null(g_110));
        t = set_config_0(t);
      }
    }
    t = o_31;
    return(t);
  }
  ATerm p_6 (ATerm t)
  {
    t = term_q_31;
    return(t);
  }
  t = ArgOption_3(t, n_6, o_6, p_6);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm k_110 = NULL;
  k_110 = t;
  t = SSL_string_to_int(not_null(k_110));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm r_31 = t;
  int s_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_6 (ATerm t)
      {
        ATerm s_110 = NULL;
        s_110 = t;
        n_110 :
        if(!(match_string(s_110, "-S")))
          {
            if(!(match_string(s_110, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm t_6 (ATerm t)
      {
        t = term_u_31;
        t = set_config_0(t);
        t = term_v_31;
        return(t);
      }
      ATerm u_6 (ATerm t)
      {
        t = term_z_31;
        return(t);
      }
      t = Option_3(t, s_6, t_6, u_6);
      ;
      LocalPopChoice(s_31);
    }
  else
    {
      t = r_31;
      {
        ATerm a_32 = t;
        int b_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_6 (ATerm t)
            {
              ATerm t_110 = NULL;
              t_110 = t;
              o_110 :
              if(!(match_string(t_110, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm w_6 (ATerm t)
            {
              ATerm w_110 = NULL;
              ATerm c_32;
              c_32 = t;
              {
                ATerm u_110 = NULL;
                ATerm v_110 = NULL;
                t = string_to_int_0(t);
                {
                  v_110 = t;
                  if(((u_110 != NULL) && (u_110 != v_110)))
                    _fail(v_110);
                  else
                    u_110 = v_110;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_e_10, not_null(u_110));
                  t = set_config_0(t);
                }
              }
              t = c_32;
              {
                ATerm x_110 = NULL;
                x_110 = t;
                if(((w_110 != NULL) && (w_110 != x_110)))
                  _fail(x_110);
                else
                  w_110 = x_110;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(w_110));
              }
              return(t);
            }
            ATerm x_6 (ATerm t)
            {
              t = term_d_32;
              return(t);
            }
            t = ArgOption_3(t, v_6, w_6, x_6);
            ;
            LocalPopChoice(b_32);
          }
        else
          {
            t = a_32;
            {
              ATerm y_6 (ATerm t)
              {
                ATerm y_110 = NULL;
                y_110 = t;
                r_110 :
                if(!(match_string(y_110, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm z_6 (ATerm t)
              {
                t = term_f_33;
                t = set_config_0(t);
                t = term_g_33;
                return(t);
              }
              ATerm a_7 (ATerm t)
              {
                t = term_h_33;
                return(t);
              }
              t = Option_3(t, y_6, z_6, a_7);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm i_33 = t;
  int j_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(j_33);
    }
  else
    {
      t = i_33;
      {
        ATerm k_33 = t;
        int l_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(l_33);
          }
        else
          {
            t = k_33;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm b_7 (ATerm t)
  {
    ATerm e_111 = NULL;
    e_111 = t;
    b_111 :
    if(!(match_string(e_111, "-o")))
      {
        if(!(match_string(e_111, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm c_7 (ATerm t)
  {
    ATerm h_111 = NULL;
    ATerm m_33;
    m_33 = t;
    {
      ATerm f_111 = NULL;
      ATerm g_111 = NULL;
      g_111 = t;
      if(((f_111 != NULL) && (f_111 != g_111)))
        _fail(g_111);
      else
        f_111 = g_111;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_33, not_null(f_111));
        t = set_config_0(t);
      }
    }
    t = m_33;
    {
      ATerm i_111 = NULL;
      i_111 = t;
      if(((h_111 != NULL) && (h_111 != i_111)))
        _fail(i_111);
      else
        h_111 = i_111;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(h_111));
    }
    return(t);
  }
  ATerm d_7 (ATerm t)
  {
    t = term_o_33;
    return(t);
  }
  t = ArgOption_3(t, b_7, c_7, d_7);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm p_33 = t;
  int q_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(q_33);
    }
  else
    {
      t = p_33;
      {
        ATerm e_7 (ATerm t)
        {
          ATerm m_111 = NULL;
          m_111 = t;
          l_111 :
          if(!(match_string(m_111, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm f_7 (ATerm t)
        {
          t = term_s_33;
          t = set_config_0(t);
          t = term_t_33;
          return(t);
        }
        ATerm g_7 (ATerm t)
        {
          t = term_u_33;
          return(t);
        }
        t = Option_3(t, e_7, f_7, g_7);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm p_0 (ATerm))
{
  ATerm s_111 = NULL,t_111 = NULL,u_111 = NULL,v_111 = NULL,y_111 = NULL;
  s_111 = t;
  q_111 :
  if(match_string(s_111, "register-usage-info"))
    {
      t = register_usage_1(t, p_0);
    }
  else
    {
      if(((ATgetType(s_111) == AT_LIST) && !(ATisEmpty(s_111))))
        {
          t_111 = ATgetFirst((ATermList) s_111);
          u_111 = (ATerm) ATgetNext((ATermList) s_111);
          r_111 :
          if(((ATgetType(u_111) == AT_LIST) && !(ATisEmpty(u_111))))
            {
              v_111 = ATgetFirst((ATermList) u_111);
              y_111 = (ATerm) ATgetNext((ATermList) u_111);
              {
                ATerm c_112 = NULL;
                ATerm v_33;
                v_33 = t;
                {
                  t = not_null(t_111);
                  t = m_0(t);
                }
                t = v_33;
                {
                  ATerm d_112 = NULL;
                  t = not_null(v_111);
                  {
                    t = n_0(t);
                    {
                      d_112 = t;
                      if(((c_112 != NULL) && (c_112 != d_112)))
                        _fail(d_112);
                      else
                        c_112 = d_112;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(y_111)), not_null(c_112));
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
ATerm input_option_0 (ATerm t)
{
  ATerm j_7 (ATerm t)
  {
    ATerm m_112 = NULL;
    m_112 = t;
    j_112 :
    if(!(match_string(m_112, "-i")))
      {
        if(!(match_string(m_112, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm k_7 (ATerm t)
  {
    ATerm p_112 = NULL;
    ATerm w_33;
    w_33 = t;
    {
      ATerm n_112 = NULL;
      ATerm o_112 = NULL;
      o_112 = t;
      if(((n_112 != NULL) && (n_112 != o_112)))
        _fail(o_112);
      else
        n_112 = o_112;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_33, not_null(n_112));
        t = set_config_0(t);
      }
    }
    t = w_33;
    {
      ATerm q_112 = NULL;
      q_112 = t;
      if(((p_112 != NULL) && (p_112 != q_112)))
        _fail(q_112);
      else
        p_112 = q_112;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(p_112));
    }
    return(t);
  }
  ATerm l_7 (ATerm t)
  {
    t = term_y_33;
    return(t);
  }
  t = ArgOption_3(t, j_7, k_7, l_7);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm z_33 = t;
  int a_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(a_34);
    }
  else
    {
      t = z_33;
      {
        ATerm b_34 = t;
        int c_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(c_34);
          }
        else
          {
            t = b_34;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_b_10, (ATerm) ATinsert(ATempty, term_d_34));
  {
    t = printnl_0(t);
    {
      t = term_w_27;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm u_112 = NULL;
  u_112 = t;
  t = SSL_TicksToSeconds(not_null(u_112));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm a_113 = NULL,b_113 = NULL,c_113 = NULL;
  a_113 = t;
  z_112 :
  if(match_cons(a_113, sym__2))
    {
      b_113 = ATgetArgument(a_113, 0);
      c_113 = ATgetArgument(a_113, 1);
      {
        ATerm e_34 = t;
        int f_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(b_113), not_null(c_113));
            ;
            LocalPopChoice(f_34);
          }
        else
          {
            t = e_34;
            t = SSL_addr(not_null(b_113), not_null(c_113));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm s_107 (ATerm), ATerm t_107 (ATerm))
{
  ATerm g_34 = t;
  int h_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = s_107(t);
      ;
      LocalPopChoice(h_34);
    }
  else
    {
      t = g_34;
      {
        ATerm j_113 = NULL,k_113 = NULL,l_113 = NULL;
        j_113 = t;
        i_113 :
        if(((ATgetType(j_113) == AT_LIST) && !(ATisEmpty(j_113))))
          {
            k_113 = ATgetFirst((ATermList) j_113);
            l_113 = (ATerm) ATgetNext((ATermList) j_113);
            {
              ATerm o_113 = NULL;
              ATerm p_113 = NULL;
              t = not_null(l_113);
              {
                t = foldr_2(t, s_107, t_107);
                {
                  p_113 = t;
                  if(((o_113 != NULL) && (o_113 != p_113)))
                    _fail(p_113);
                  else
                    o_113 = p_113;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(k_113), not_null(o_113));
                t = t_107(t);
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
ATerm crush_2 (ATerm t, ATerm q_106 (ATerm), ATerm r_106 (ATerm))
{
  ATerm w_113 = NULL;
  ATerm y_113 = NULL;
  w_113 = t;
  {
    ATerm z_113 = NULL;
    ATerm b_114 = NULL,c_114 = NULL,d_114 = NULL;
    t = not_null(w_113);
    {
      z_113 = t;
      {
        t = SSL_explode_term(not_null(z_113));
        {
          b_114 = t;
          v_113 :
          if(match_cons(b_114, sym__2))
            {
              c_114 = ATgetArgument(b_114, 0);
              d_114 = ATgetArgument(b_114, 1);
              if(((y_113 != NULL) && (y_113 != d_114)))
                _fail(d_114);
              else
                y_113 = d_114;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(y_113);
      t = foldr_2(t, q_106, r_106);
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
    ATerm m_7 (ATerm t)
    {
      t = term_t_31;
      return(t);
    }
    t = crush_2(t, m_7, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm j_114 = NULL,k_114 = NULL,l_114 = NULL;
  j_114 = t;
  i_114 :
  if(match_cons(j_114, sym__2))
    {
      k_114 = ATgetArgument(j_114, 0);
      l_114 = ATgetArgument(j_114, 1);
      {
        ATerm i_34;
        i_34 = t;
        {
          ATerm j_34 = t;
          int k_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(k_114), not_null(l_114));
              ;
              LocalPopChoice(k_34);
            }
          else
            {
              t = j_34;
              t = SSL_gtr(not_null(k_114), not_null(l_114));
            }
        }
        t = i_34;
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
  ATerm r_114 = NULL;
  ATerm l_34 = t;
  int m_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_114 = NULL,y_114 = NULL,a_115 = NULL;
      s_114 = t;
      q_114 :
      if(match_cons(s_114, sym__2))
        {
          y_114 = ATgetArgument(s_114, 0);
          a_115 = ATgetArgument(s_114, 1);
          {
            if(((r_114 != NULL) && (r_114 != y_114)))
              _fail(y_114);
            else
              r_114 = y_114;
            if(((r_114 != NULL) && (r_114 != a_115)))
              _fail(a_115);
            else
              r_114 = a_115;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(m_34);
    }
  else
    {
      t = l_34;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm a_125 (ATerm))
{
  ATerm n_7 (ATerm t)
  {
    ATerm n_34;
    n_34 = t;
    {
      ATerm d_115 = NULL;
      ATerm g_115 = NULL;
      t = term_e_10;
      {
        t = get_config_0(t);
        {
          g_115 = t;
          if(((d_115 != NULL) && (d_115 != g_115)))
            _fail(g_115);
          else
            d_115 = g_115;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_115), term_w_27);
        t = geq_0(t);
      }
    }
    t = n_34;
    t = a_125(t);
    return(t);
  }
  t = try_1(t, n_7);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm o_7 (ATerm t)
  {
    ATerm k_115 = NULL,m_115 = NULL;
    ATerm o_34;
    o_34 = t;
    {
      ATerm l_115 = NULL;
      t = run_time_0(t);
      {
        l_115 = t;
        if(((k_115 != NULL) && (k_115 != l_115)))
          _fail(l_115);
        else
          k_115 = l_115;
      }
    }
    t = o_34;
    {
      ATerm n_115 = NULL;
      t = term_p_34;
      {
        t = get_config_0(t);
        {
          n_115 = t;
          if(((m_115 != NULL) && (m_115 != n_115)))
            _fail(n_115);
          else
            m_115 = n_115;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_10, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_34), not_null(k_115)), term_q_34), not_null(m_115)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, o_7);
  {
    t = term_t_31;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm u_115 = NULL;
  u_115 = t;
  t_115 :
  if(match_cons(u_115, sym_Version_0))
    {
      ATerm w_115 = NULL,y_115 = NULL;
      ATerm s_34;
      s_34 = t;
      {
        ATerm x_115 = NULL;
        t = SSLgetAnnotations(not_null(u_115));
        {
          x_115 = t;
          if(((w_115 != NULL) && (w_115 != x_115)))
            _fail(x_115);
          else
            w_115 = x_115;
        }
      }
      t = s_34;
      {
        ATerm z_115 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(w_115));
        {
          z_115 = t;
          if(((y_115 != NULL) && (y_115 != z_115)))
            _fail(z_115);
          else
            y_115 = z_115;
        }
        t = not_null(y_115);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm g_116 (ATerm))
{
  ATerm p_7 (ATerm t)
  {
    ATerm t_34 = t;
    int u_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        ;
        LocalPopChoice(u_34);
      }
    else
      {
        t = t_34;
        {
          ATerm v_34 = t;
          int w_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              ;
              LocalPopChoice(w_34);
            }
          else
            {
              t = v_34;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, p_7);
  t = g_116(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm e_116 = NULL;
  e_116 = t;
  t = SSL_table_create(not_null(e_116));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm k_116 = NULL;
  k_116 = t;
  {
    ATerm x_34;
    x_34 = t;
    {
      t = term_y_34;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_y_34, term_z_34, not_null(k_116));
          t = table_put_0(t);
        }
      }
    }
    t = x_34;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm t_116 = NULL;
  t_116 = t;
  t = SSL_table_destroy(not_null(t_116));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm c_117 = NULL;
  c_117 = t;
  t = SSL_exit(not_null(c_117));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm k_117 = NULL,l_117 = NULL,m_117 = NULL;
  k_117 = t;
  j_117 :
  if(((ATgetType(k_117) == AT_LIST) && ATisEmpty(k_117)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(k_117) == AT_LIST) && !(ATisEmpty(k_117))))
        {
          l_117 = ATgetFirst((ATermList) k_117);
          m_117 = (ATerm) ATgetNext((ATermList) k_117);
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
  ATerm a_35;
  a_35 = t;
  {
    ATerm p_117 = NULL;
    ATerm s_117 = NULL;
    ATerm b_35 = t;
    int c_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(c_35);
      }
    else
      {
        t = b_35;
        {
          ATerm q_117 = NULL;
          ATerm r_117 = NULL;
          r_117 = t;
          if(((q_117 != NULL) && (q_117 != r_117)))
            _fail(r_117);
          else
            q_117 = r_117;
          t = (ATerm) ATinsert(ATempty, not_null(q_117));
        }
      }
    {
      s_117 = t;
      if(((p_117 != NULL) && (p_117 != s_117)))
        _fail(s_117);
      else
        p_117 = s_117;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_29, not_null(p_117));
      t = printnl_0(t);
    }
  }
  t = a_35;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm q_119 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm e_101 (ATerm))
{
  ATerm v_117 (ATerm t)
  {
    ATerm d_35 = t;
    int e_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(e_35);
      }
    else
      {
        t = d_35;
        t = Cons_2(t, e_101, v_117);
      }
    return(t);
  }
  t = v_117(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm c_118 = NULL,d_118 = NULL,e_118 = NULL;
  e_118 = t;
  b_118 :
  if(((ATgetType(e_118) == AT_LIST) && !(ATisEmpty(e_118))))
    {
      c_118 = ATgetFirst((ATermList) e_118);
      d_118 = (ATerm) ATgetNext((ATermList) e_118);
      {
        ATerm h_118 = NULL;
        t = not_null(d_118);
        {
          ATerm f_35;
          f_35 = t;
          {
            ATerm i_118 = NULL,k_118 = NULL,m_118 = NULL;
            ATerm g_35;
            g_35 = t;
            {
              ATerm j_118 = NULL;
              t = k_0(t);
              {
                j_118 = t;
                if(((i_118 != NULL) && (i_118 != j_118)))
                  _fail(j_118);
                else
                  i_118 = j_118;
              }
            }
            t = g_35;
            {
              ATerm l_118 = NULL;
              t = not_null(c_118);
              {
                t = i_0(t);
                {
                  l_118 = t;
                  if(((k_118 != NULL) && (k_118 != l_118)))
                    _fail(l_118);
                  else
                    k_118 = l_118;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(i_118)), not_null(k_118));
                {
                  m_118 = t;
                  if(((h_118 != NULL) && (h_118 != m_118)))
                    _fail(m_118);
                  else
                    h_118 = m_118;
                }
              }
            }
          }
          t = f_35;
          {
            ATerm q_7 (ATerm t)
            {
              t = not_null(h_118);
              return(t);
            }
            t = reverse_acc_2(t, i_0, q_7);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(e_118) == AT_LIST) && ATisEmpty(e_118)))
        {
          {
            t = term_l_26;
            t = k_0(t);
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
ATerm short_description_1 (ATerm t, ATerm p_119 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm g_95 (ATerm))
{
  ATerm y_118 = NULL,z_118 = NULL;
  y_118 = t;
  x_118 :
  if(match_cons(y_118, sym_Program_1))
    {
      z_118 = ATgetArgument(y_118, 0);
      {
        ATerm c_119 = NULL,e_119 = NULL;
        ATerm d_119 = NULL;
        t = SSLgetAnnotations(not_null(y_118));
        {
          d_119 = t;
          if(((c_119 != NULL) && (c_119 != d_119)))
            _fail(d_119);
          else
            c_119 = d_119;
        }
        {
          t = not_null(z_118);
          {
            ATerm g_119 = NULL;
            t = g_95(t);
            {
              e_119 = t;
              {
                ATerm h_119 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(e_119)), not_null(c_119));
                {
                  h_119 = t;
                  if(((g_119 != NULL) && (g_119 != h_119)))
                    _fail(h_119);
                  else
                    g_119 = h_119;
                }
                t = not_null(g_119);
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
  ATerm w_119 = NULL;
  ATerm h_35 = t;
  int i_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_119 = NULL;
      t = term_p_34;
      {
        t = get_config_0(t);
        {
          x_119 = t;
          if(((w_119 != NULL) && (w_119 != x_119)))
            _fail(x_119);
          else
            w_119 = x_119;
        }
      }
      ;
      LocalPopChoice(i_35);
    }
  else
    {
      t = h_35;
      {
        ATerm s_7 (ATerm t)
        {
          ATerm t_7 (ATerm t)
          {
            ATerm y_119 = NULL;
            y_119 = t;
            if(((w_119 != NULL) && (w_119 != y_119)))
              _fail(y_119);
            else
              w_119 = y_119;
            return(t);
          }
          t = Program_1(t, t_7);
          return(t);
        }
        t = option_defined_1(t, s_7);
      }
    }
  {
    ATerm u_7 (ATerm t)
    {
      ATerm v_7 (ATerm t)
      {
        t = not_null(w_119);
        return(t);
      }
      t = short_description_1(t, v_7);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, u_7);
    {
      t = term_j_35;
      {
        t = echo_0(t);
        {
          t = term_m_35;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm w_7 (ATerm t)
                {
                  ATerm z_119 = NULL;
                  ATerm a_120 = NULL;
                  a_120 = t;
                  if(((z_119 != NULL) && (z_119 != a_120)))
                    _fail(a_120);
                  else
                    z_119 = a_120;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_119)), term_n_35);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, w_7);
                {
                  ATerm x_7 (ATerm t)
                  {
                    ATerm b_120 = NULL;
                    ATerm c_120 = NULL;
                    ATerm y_7 (ATerm t)
                    {
                      t = not_null(w_119);
                      return(t);
                    }
                    t = long_description_1(t, y_7);
                    {
                      c_120 = t;
                      if(((b_120 != NULL) && (b_120 != c_120)))
                        _fail(c_120);
                      else
                        b_120 = c_120;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(b_120)), term_o_35);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, x_7);
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
ATerm Undefined_1 (ATerm t, ATerm h_95 (ATerm))
{
  ATerm m_120 = NULL,n_120 = NULL;
  m_120 = t;
  l_120 :
  if(match_cons(m_120, sym_Undefined_1))
    {
      n_120 = ATgetArgument(m_120, 0);
      {
        ATerm q_120 = NULL,s_120 = NULL;
        ATerm r_120 = NULL;
        t = SSLgetAnnotations(not_null(m_120));
        {
          r_120 = t;
          if(((q_120 != NULL) && (q_120 != r_120)))
            _fail(r_120);
          else
            q_120 = r_120;
        }
        {
          t = not_null(n_120);
          {
            ATerm u_120 = NULL;
            t = h_95(t);
            {
              s_120 = t;
              {
                ATerm v_120 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(s_120)), not_null(q_120));
                {
                  v_120 = t;
                  if(((u_120 != NULL) && (u_120 != v_120)))
                    _fail(v_120);
                  else
                    u_120 = v_120;
                }
                t = not_null(u_120);
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
ATerm fetch_1 (ATerm t, ATerm n_101 (ATerm))
{
  ATerm a_121 (ATerm t)
  {
    ATerm p_35 = t;
    int q_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, n_101, _id);
        ;
        LocalPopChoice(q_35);
      }
    else
      {
        t = p_35;
        t = Cons_2(t, _id, a_121);
      }
    return(t);
  }
  t = a_121(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm p_118 (ATerm))
{
  t = fetch_1(t, p_118);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm i_121 = NULL;
  i_121 = t;
  h_121 :
  if(match_cons(i_121, sym_Help_0))
    {
      ATerm k_121 = NULL,m_121 = NULL;
      ATerm r_35;
      r_35 = t;
      {
        ATerm l_121 = NULL;
        t = SSLgetAnnotations(not_null(i_121));
        {
          l_121 = t;
          if(((k_121 != NULL) && (k_121 != l_121)))
            _fail(l_121);
          else
            k_121 = l_121;
        }
      }
      t = r_35;
      {
        ATerm n_121 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(k_121));
        {
          n_121 = t;
          if(((m_121 != NULL) && (m_121 != n_121)))
            _fail(n_121);
          else
            m_121 = n_121;
        }
        t = not_null(m_121);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm m_99 (ATerm))
{
  ATerm s_35 = t;
  int t_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_99(t);
      ;
      LocalPopChoice(t_35);
    }
  else
    {
      t = s_35;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm c_122 = NULL,f_122 = NULL,g_122 = NULL;
  c_122 = t;
  b_122 :
  if(match_cons(c_122, sym__2))
    {
      f_122 = ATgetArgument(c_122, 0);
      g_122 = ATgetArgument(c_122, 1);
      t = SSL_table_get(not_null(f_122), not_null(g_122));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm o_122 = NULL,p_122 = NULL,q_122 = NULL,r_122 = NULL;
  o_122 = t;
  n_122 :
  if(match_cons(o_122, sym__3))
    {
      p_122 = ATgetArgument(o_122, 0);
      q_122 = ATgetArgument(o_122, 1);
      r_122 = ATgetArgument(o_122, 2);
      {
        ATerm u_35;
        u_35 = t;
        {
          ATerm v_122 = NULL;
          ATerm w_122 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_122), not_null(q_122));
          {
            ATerm v_35 = t;
            int w_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(w_35);
              }
            else
              {
                t = v_35;
                t = (ATerm) ATempty;
              }
            {
              w_122 = t;
              if(((v_122 != NULL) && (v_122 != w_122)))
                _fail(w_122);
              else
                v_122 = w_122;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(p_122), not_null(q_122), (ATerm) ATinsert(CheckATermList(not_null(v_122)), not_null(r_122)));
            t = table_put_0(t);
          }
        }
        t = u_35;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm u_119 (ATerm))
{
  ATerm a_123 = NULL;
  ATerm b_123 = NULL;
  t = term_l_26;
  {
    t = u_119(t);
    {
      b_123 = t;
      if(((a_123 != NULL) && (a_123 != b_123)))
        _fail(b_123);
      else
        a_123 = b_123;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_k_35, term_l_35, not_null(a_123));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm h_123 = NULL,m_123 = NULL,n_123 = NULL;
  h_123 = t;
  g_123 :
  if(match_string(h_123, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(h_123) == AT_LIST) && !(ATisEmpty(h_123))))
        {
          m_123 = ATgetFirst((ATermList) h_123);
          n_123 = (ATerm) ATgetNext((ATermList) h_123);
          {
            ATerm q_123 = NULL;
            ATerm x_35;
            x_35 = t;
            {
              t = not_null(m_123);
              t = a_0(t);
            }
            t = x_35;
            {
              ATerm t_123 = NULL;
              t = term_l_26;
              {
                t = d_0(t);
                {
                  t_123 = t;
                  if(((q_123 != NULL) && (q_123 != t_123)))
                    _fail(t_123);
                  else
                    q_123 = t_123;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(n_123)), not_null(q_123));
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
  ATerm z_7 (ATerm t)
  {
    ATerm y_123 = NULL;
    y_123 = t;
    x_123 :
    if(!(match_string(y_123, "--help")))
      {
        if(!(match_string(y_123, "-h")))
          {
            if(!(match_string(y_123, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm a_8 (ATerm t)
  {
    t = term_z_35;
    {
      t = set_config_0(t);
      t = term_a_36;
    }
    return(t);
  }
  ATerm b_8 (ATerm t)
  {
    t = term_b_36;
    return(t);
  }
  t = Option_3(t, z_7, a_8, b_8);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm b_124 = NULL,c_124 = NULL,d_124 = NULL;
  b_124 = t;
  a_124 :
  if(((ATgetType(b_124) == AT_LIST) && !(ATisEmpty(b_124))))
    {
      c_124 = ATgetFirst((ATermList) b_124);
      d_124 = (ATerm) ATgetNext((ATermList) b_124);
      t = (ATerm) ATinsert(CheckATermList(not_null(d_124)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(c_124)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm g_84 (ATerm), ATerm h_84 (ATerm))
{
  ATerm v_124 = NULL,w_124 = NULL,x_124 = NULL;
  v_124 = t;
  u_124 :
  if(((ATgetType(v_124) == AT_LIST) && !(ATisEmpty(v_124))))
    {
      w_124 = ATgetFirst((ATermList) v_124);
      x_124 = (ATerm) ATgetNext((ATermList) v_124);
      {
        ATerm d_125 = NULL,f_125 = NULL;
        ATerm e_125 = NULL;
        t = SSLgetAnnotations(not_null(v_124));
        {
          e_125 = t;
          if(((d_125 != NULL) && (d_125 != e_125)))
            _fail(e_125);
          else
            d_125 = e_125;
        }
        {
          t = not_null(w_124);
          {
            ATerm h_125 = NULL;
            t = g_84(t);
            {
              f_125 = t;
              {
                t = not_null(x_124);
                {
                  ATerm j_125 = NULL;
                  t = h_84(t);
                  {
                    h_125 = t;
                    {
                      ATerm k_125 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(h_125)), not_null(f_125)), not_null(d_125));
                      {
                        k_125 = t;
                        if(((j_125 != NULL) && (j_125 != k_125)))
                          _fail(k_125);
                        else
                          j_125 = k_125;
                      }
                      t = not_null(j_125);
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
  ATerm u_125 = NULL;
  u_125 = t;
  t_125 :
  if(((ATgetType(u_125) == AT_LIST) && ATisEmpty(u_125)))
    {
      {
        ATerm w_125 = NULL,y_125 = NULL;
        ATerm l_36;
        l_36 = t;
        {
          ATerm x_125 = NULL;
          t = SSLgetAnnotations(not_null(u_125));
          {
            x_125 = t;
            if(((w_125 != NULL) && (w_125 != x_125)))
              _fail(x_125);
            else
              w_125 = x_125;
          }
        }
        t = l_36;
        {
          ATerm z_125 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(w_125));
          {
            z_125 = t;
            if(((y_125 != NULL) && (y_125 != z_125)))
              _fail(z_125);
            else
              y_125 = z_125;
          }
          t = not_null(y_125);
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
  ATerm f_126 = NULL,g_126 = NULL,h_126 = NULL;
  f_126 = t;
  e_126 :
  if(match_cons(f_126, sym__2))
    {
      g_126 = ATgetArgument(f_126, 0);
      h_126 = ATgetArgument(f_126, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_y_28, not_null(g_126), not_null(h_126));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm s_119 (ATerm))
{
  ATerm m_36;
  m_36 = t;
  {
    ATerm c_8 (ATerm t)
    {
      t = term_n_36;
      t = s_119(t);
      return(t);
    }
    t = try_1(t, c_8);
  }
  t = m_36;
  {
    ATerm d_8 (ATerm t)
    {
      ATerm p_126 = NULL;
      ATerm o_36;
      o_36 = t;
      {
        ATerm n_126 = NULL;
        ATerm o_126 = NULL;
        o_126 = t;
        if(((n_126 != NULL) && (n_126 != o_126)))
          _fail(o_126);
        else
          n_126 = o_126;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_p_34, not_null(n_126));
          t = set_config_0(t);
        }
      }
      t = o_36;
      {
        ATerm q_126 = NULL;
        q_126 = t;
        if(((p_126 != NULL) && (p_126 != q_126)))
          _fail(q_126);
        else
          p_126 = q_126;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(p_126));
      }
      return(t);
    }
    ATerm e_8 (ATerm t)
    {
      ATerm p_36 = t;
      int d_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_37 = t;
          int i_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(i_37);
            }
          else
            {
              t = h_37;
              {
                t = s_119(t);
                t = Cons_2(t, _id, e_8);
              }
            }
          ;
          LocalPopChoice(d_37);
        }
      else
        {
          t = p_36;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, d_8, e_8);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm w_126 = NULL,x_126 = NULL,y_126 = NULL;
  ATerm j_37;
  j_37 = t;
  {
    ATerm z_126 = NULL,a_127 = NULL,b_127 = NULL,c_127 = NULL;
    z_126 = t;
    v_126 :
    if(match_cons(z_126, sym__3))
      {
        a_127 = ATgetArgument(z_126, 0);
        b_127 = ATgetArgument(z_126, 1);
        c_127 = ATgetArgument(z_126, 2);
        {
          if(((w_126 != NULL) && (w_126 != a_127)))
            _fail(a_127);
          else
            w_126 = a_127;
          {
            if(((x_126 != NULL) && (x_126 != b_127)))
              _fail(b_127);
            else
              x_126 = b_127;
            {
              if(((y_126 != NULL) && (y_126 != c_127)))
                _fail(c_127);
              else
                y_126 = c_127;
              t = SSL_table_put(not_null(w_126), not_null(x_126), not_null(y_126));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = j_37;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm r_119 (ATerm))
{
  ATerm f_127 = NULL;
  ATerm k_37;
  k_37 = t;
  {
    t = term_l_37;
    t = table_put_0(t);
  }
  t = k_37;
  {
    ATerm f_8 (ATerm t)
    {
      ATerm m_37 = t;
      int n_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_119(t);
          ;
          LocalPopChoice(n_37);
        }
      else
        {
          t = m_37;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, f_8);
    {
      ATerm h_8 (ATerm t)
      {
        ATerm o_37 = t;
        int p_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_37;
            q_37 = t;
            {
              ATerm r_37 = t;
              int s_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_y_35;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(s_37);
                }
              else
                {
                  t = r_37;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = q_37;
            {
              t = system_usage_0(t);
              {
                t = term_t_31;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(p_37);
          }
        else
          {
            t = o_37;
            {
              ATerm i_8 (ATerm t)
              {
                ATerm j_8 (ATerm t)
                {
                  ATerm g_127 = NULL;
                  g_127 = t;
                  if(((f_127 != NULL) && (f_127 != g_127)))
                    _fail(g_127);
                  else
                    f_127 = g_127;
                  return(t);
                }
                t = Undefined_1(t, j_8);
                return(t);
              }
              t = option_defined_1(t, i_8);
              {
                ATerm k_8 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_127)), term_t_37);
                  return(t);
                }
                t = say_1(t, k_8);
                {
                  t = system_usage_0(t);
                  {
                    t = term_w_27;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, h_8);
      {
        ATerm y_37;
        y_37 = t;
        {
          t = term_k_35;
          t = table_destroy_0(t);
        }
        t = y_37;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm m_116 (ATerm), ATerm n_116 (ATerm), ATerm o_116 (ATerm), ATerm p_116 (ATerm))
{
  t = parse_options_1(t, m_116);
  {
    t = store_options_0(t);
    {
      t = o_116(t);
      {
        ATerm z_37 = t;
        int a_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, n_116);
            ;
            LocalPopChoice(a_38);
          }
        else
          {
            t = z_37;
            {
              ATerm b_38 = t;
              int c_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_116(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(c_38);
                }
              else
                {
                  t = b_38;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm d_117 (ATerm), ATerm e_117 (ATerm), ATerm f_117 (ATerm), ATerm g_117 (ATerm))
{
  ATerm m_8 (ATerm t)
  {
    ATerm l_38 = t;
    int m_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_117(t);
        ;
        LocalPopChoice(m_38);
      }
    else
      {
        t = l_38;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm r_8 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, d_117);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, m_8, f_117, g_117, r_8);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm x_116 (ATerm), ATerm y_116 (ATerm), ATerm z_116 (ATerm))
{
  ATerm s_8 (ATerm t)
  {
    ATerm b_9 (ATerm t)
    {
      ATerm n_38;
      n_38 = t;
      {
        ATerm j_127 = NULL;
        ATerm k_127 = NULL;
        t = term_p_34;
        {
          t = get_config_0(t);
          {
            k_127 = t;
            if(((j_127 != NULL) && (j_127 != k_127)))
              _fail(k_127);
            else
              j_127 = k_127;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_b_10, (ATerm) ATinsert(ATempty, not_null(j_127)));
          t = printnl_0(t);
        }
      }
      t = n_38;
      return(t);
    }
    t = if_verbose2_1(t, b_9);
    return(t);
  }
  t = iowrap_4(t, x_116, y_116, z_116, s_8);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm v_116 (ATerm), ATerm w_116 (ATerm))
{
  t = iowrap_3(t, v_116, w_116, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm s_116 (ATerm))
{
  ATerm l_9 (ATerm t)
  {
    t = _2(t, _id, s_116);
    return(t);
  }
  t = iowrap_2(t, l_9, _fail);
  return(t);
}
ATerm fusion_0 (ATerm t)
{
  ATerm x_9 (ATerm t)
  {
    ATerm q_38 = t;
    int r_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = declare_inline_rules_0(t);
        {
          t = check_library_definitions_0(t);
          t = alltd_1(t, innermost_fusion_0);
        }
        ;
        LocalPopChoice(r_38);
      }
    else
      {
        t = q_38;
        {
          ATerm y_9 (ATerm t)
          {
            ATerm z_9 (ATerm t)
            {
              t = term_s_38;
              return(t);
            }
            t = say_1(t, z_9);
            return(t);
          }
          t = if_verbose2_1(t, y_9);
        }
      }
    return(t);
  }
  t = iowrap_1(t, x_9);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = fusion_0(t);
  return(t);
}
